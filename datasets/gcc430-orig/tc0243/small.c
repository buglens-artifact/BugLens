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
   unsigned f0 : 14;
   unsigned f1 : 11;
   signed f2 : 1;
   signed f3 : 9;
   signed f4 : 20;
   unsigned f5 : 27;
   const signed f6 : 13;
};


static int g_14[10][2] = {{8L, 0xD0F4F230L}, {8L, 0xD0F4F230L}, {8L, 0xD0F4F230L}, {8L, 0xD0F4F230L}, {8L, 0xD0F4F230L}, {8L, 0xD0F4F230L}, {8L, 0xD0F4F230L}, {8L, 0xD0F4F230L}, {8L, 0xD0F4F230L}, {8L, 0xD0F4F230L}};
static const int *g_13 = &g_14[6][1];
static struct S0 g_16 = {88,38,0,-15,324,11155,13};
static unsigned short g_63 = 0UL;
static unsigned g_72 = 0x21BDB030L;
static int g_95[9] = {0x802A3EDBL, (-1L), 0x802A3EDBL, (-1L), 0x802A3EDBL, (-1L), 0x802A3EDBL, (-1L), 0x802A3EDBL};
static int g_103[6] = {0xF77C9A86L, 0L, 0xF77C9A86L, 0L, 0xF77C9A86L, 0L};
static struct S0 g_118 = {45,3,0,-13,-20,134,77};
static struct S0 *g_117 = &g_118;
static unsigned short g_126[1][4][7] = {{{0x534CL, 0xBB3EL, 65535UL, 65529UL, 3UL, 0xCA7BL, 3UL}, {0x534CL, 0xBB3EL, 65535UL, 65529UL, 3UL, 0xCA7BL, 3UL}, {0x534CL, 0xBB3EL, 65535UL, 65529UL, 3UL, 0xCA7BL, 3UL}, {0x534CL, 0xBB3EL, 65535UL, 65529UL, 3UL, 0xCA7BL, 3UL}}};
static char g_134[3][7][8] = {{{0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}}, {{0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}}, {{0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}, {0x56L, 4L, 0x56L, 1L, 1L, 0xD4L, 0x79L, (-1L)}}};
static short g_136 = 6L;
static unsigned char g_155 = 0x0AL;
static unsigned char g_191 = 246UL;
static short g_268 = 0x2C29L;
static unsigned short *g_273 = &g_63;
static unsigned short **g_272 = &g_273;
static unsigned g_279[8][6][4] = {{{0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}}, {{0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}}, {{0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}}, {{0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}}, {{0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}}, {{0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}}, {{0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}}, {{0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}, {0x1F2F3D99L, 0xCC073444L, 1UL, 1UL}}};
static int *g_336[5] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static const struct S0 g_387 = {24,10,0,3,269,1129,72};
static const struct S0 g_389 = {112,0,-0,20,962,6672,-1};
static const struct S0 *g_388[4][1][9] = {{{&g_389, &g_387, &g_389, &g_387, &g_387, &g_387, &g_389, &g_389, &g_387}}, {{&g_389, &g_387, &g_389, &g_387, &g_387, &g_387, &g_389, &g_389, &g_387}}, {{&g_389, &g_387, &g_389, &g_387, &g_387, &g_387, &g_389, &g_389, &g_387}}, {{&g_389, &g_387, &g_389, &g_387, &g_387, &g_387, &g_389, &g_389, &g_387}}};
static struct S0 g_392 = {65,5,0,-15,169,7085,-77};
static int g_454[2][5][8] = {{{(-5L), (-1L), 0xAE0B8788L, 0L, 0xC03A962DL, 0L, 0x120D47AEL, 0x7B5D03B6L}, {(-5L), (-1L), 0xAE0B8788L, 0L, 0xC03A962DL, 0L, 0x120D47AEL, 0x7B5D03B6L}, {(-5L), (-1L), 0xAE0B8788L, 0L, 0xC03A962DL, 0L, 0x120D47AEL, 0x7B5D03B6L}, {(-5L), (-1L), 0xAE0B8788L, 0L, 0xC03A962DL, 0L, 0x120D47AEL, 0x7B5D03B6L}, {(-5L), (-1L), 0xAE0B8788L, 0L, 0xC03A962DL, 0L, 0x120D47AEL, 0x7B5D03B6L}}, {{(-5L), (-1L), 0xAE0B8788L, 0L, 0xC03A962DL, 0L, 0x120D47AEL, 0x7B5D03B6L}, {(-5L), (-1L), 0xAE0B8788L, 0L, 0xC03A962DL, 0L, 0x120D47AEL, 0x7B5D03B6L}, {(-5L), (-1L), 0xAE0B8788L, 0L, 0xC03A962DL, 0L, 0x120D47AEL, 0x7B5D03B6L}, {(-5L), (-1L), 0xAE0B8788L, 0L, 0xC03A962DL, 0L, 0x120D47AEL, 0x7B5D03B6L}, {(-5L), (-1L), 0xAE0B8788L, 0L, 0xC03A962DL, 0L, 0x120D47AEL, 0x7B5D03B6L}}};
static char g_510[2][2][4] = {{{0xF3L, 0x27L, 0xF3L, 0x27L}, {0xF3L, 0x27L, 0xF3L, 0x27L}}, {{0xF3L, 0x27L, 0xF3L, 0x27L}, {0xF3L, 0x27L, 0xF3L, 0x27L}}};
static const char *g_529 = &g_134[1][4][0];
static const char **g_528 = &g_529;
static unsigned g_537 = 0xC9B9BBFCL;
static char g_557 = 0xA1L;
static unsigned *g_580 = &g_72;
static unsigned **g_579 = &g_580;
static unsigned ***g_578 = &g_579;
static unsigned ****g_577 = &g_578;
static int g_584 = 0xBD81486FL;
static unsigned short * const *g_599[5][8][1] = {{{&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}}, {{&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}}, {{&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}}, {{&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}}, {{&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}, {&g_273}}};
static unsigned short * const **g_598 = &g_599[2][0][0];
static unsigned short * const ***g_597 = &g_598;
static unsigned short g_607[7] = {0x0C25L, 0x0C25L, 0x0C25L, 0x0C25L, 0x0C25L, 0x0C25L, 0x0C25L};
static unsigned short g_609 = 0x7FD8L;
static int **g_621[2][10] = {{&g_336[1], &g_336[1], &g_336[1], &g_336[1], &g_336[1], &g_336[1], &g_336[1], &g_336[1], &g_336[1], &g_336[1]}, {&g_336[1], &g_336[1], &g_336[1], &g_336[1], &g_336[1], &g_336[1], &g_336[1], &g_336[1], &g_336[1], &g_336[1]}};
static int *g_655 = (void*)0;



static int func_1(void);
static int * func_2(int p_3);
static unsigned short func_9(const int * p_10, int * p_11, struct S0 p_12);
static int * func_19(unsigned short p_20, const unsigned p_21);
static unsigned func_25(const int p_26, int * p_27, unsigned p_28);
static int * func_30(unsigned char p_31, int p_32, short p_33, int p_34, unsigned short * p_35);
static int func_36(struct S0 p_37, int p_38, unsigned short * p_39, unsigned short * p_40, int p_41);
static struct S0 func_42(int p_43, int p_44, int * const p_45);
static struct S0 * func_48(unsigned char p_49, const int p_50, int p_51, struct S0 * p_52, int * p_53);
static int func_56(char p_57, unsigned short * p_58, unsigned p_59);
static int func_1(void)
{
    char l_6 = 0xE6L;
    int *l_15 = (void*)0;
    unsigned l_307[9][10][2] = {{{3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}}, {{3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}}, {{3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}}, {{3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}}, {{3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}}, {{3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}}, {{3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}}, {{3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}}, {{3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}, {3UL, 0x8A99B2E1L}}};
    int l_308[2];
    unsigned short *l_309 = &g_126[0][1][3];
    int **l_750 = &g_336[0];
    int l_751 = 0x6088B8B6L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_308[i] = 0xE6D0F4A7L;
    (*l_750) = func_2((safe_rshift_func_int16_t_s_u(0xDED6L, ((*l_309) = ((l_6 == 7L) == ((safe_rshift_func_uint16_t_u_u(((*g_273) = func_9(g_13, l_15, g_16)), 3)) | ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((g_118.f5 <= ((g_118.f0 != g_118.f2) >= g_118.f5)), 1)), l_307[2][7][1])) , l_308[1])))))));





    ;
    return l_751;
}







static int * func_2(int p_3)
{
    int *l_310 = &g_103[5];
    const int *l_311 = &g_103[5];
    struct S0 l_312 = {84,38,0,9,-745,8465,-85};
    char *l_313 = &g_134[1][4][0];
    int *l_314 = &g_14[6][1];
    unsigned short *l_315 = &g_126[0][1][0];
    int **l_316 = &l_310;
    unsigned char *l_321[2][7] = {{&g_155, &g_155, &g_155, &g_155, &g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155, &g_155, &g_155, &g_155, &g_155}};
    unsigned char l_324 = 254UL;
    unsigned *l_337[9][8][2] = {{{(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}}, {{(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}}, {{(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}}, {{(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}}, {{(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}}, {{(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}}, {{(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}}, {{(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}}, {{(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}, {(void*)0, &g_279[3][3][3]}}};
    int l_357 = 0xCD40608DL;
    unsigned l_377 = 1UL;
    struct S0 *l_391 = &g_392;
    int *l_445 = &g_14[6][1];
    short l_485 = (-7L);
    unsigned *l_536 = &g_537;
    unsigned **l_535 = &l_536;
    struct S0 l_620 = {10,8,-0,-15,-324,2415,32};
    short l_632 = 0x9030L;
    int *l_635 = &g_584;
    const unsigned short l_646 = 65532UL;
    struct S0 l_660[9] = {{124,16,0,-13,347,4538,58}, {124,16,0,-13,347,4538,58}, {84,33,-0,15,-824,2139,37}, {124,16,0,-13,347,4538,58}, {124,16,0,-13,347,4538,58}, {84,33,-0,15,-824,2139,37}, {124,16,0,-13,347,4538,58}, {124,16,0,-13,347,4538,58}, {84,33,-0,15,-824,2139,37}};
    unsigned short l_716 = 65535UL;
    short *l_723 = &g_268;
    short l_744 = 0xC194L;
    int *l_749 = &g_584;
    int i, j, k;
    for (g_63 = 0; g_63 < 9; g_63 += 1)
    {
        g_95[g_63] = 5L;
    }
    (*l_310) = (p_3 <= 1L);
    (*l_316) = &g_103[1];
    if (((0xEBL != (((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((((0L <= (!(*l_314))) == (g_191 = 4UL)) >= p_3) > (((p_3 && (g_126[0][1][5] <= (safe_sub_func_uint16_t_u_u((p_3 != (*l_310)), 0xFFCAL)))) , 0x66DED38FL) > g_95[4])), 4294967295UL)), (**g_272))) | l_324) & p_3)) <= p_3))
    {
        unsigned char *l_335 = &l_324;
        int l_338[1][1][10];
        unsigned char l_349 = 0xB3L;
        unsigned short *l_373 = &g_63;
        unsigned *l_395 = &g_279[3][3][3];
        unsigned short *** const l_467 = &g_272;
        struct S0 l_491 = {100,18,-0,3,527,2525,60};
        unsigned char l_520 = 250UL;
        unsigned ***l_551 = &l_535;
        int *l_638 = (void*)0;
        int *l_641 = (void*)0;
        unsigned short l_673 = 65535UL;
        char l_681 = (-1L);
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 10; k++)
                    l_338[i][j][k] = 0L;
            }
        }
        if ((safe_add_func_int8_t_s_s(((l_337[7][4][1] = &g_279[3][3][3]) == &g_279[3][3][3]), l_338[0][0][1])))
        {
            int *l_376[1];
            int i;
            for (i = 0; i < 1; i++)
                l_376[i] = &l_338[0][0][1];
            for (g_268 = 0; (g_268 > 1); g_268++)
            {
                unsigned l_358 = 0x8096391AL;
                struct S0 l_371 = {90,26,0,5,-195,5468,72};
                int *l_379 = &g_14[6][1];
                for (g_155 = (-8); (g_155 == 33); g_155 = safe_add_func_uint8_t_u_u(g_155, 9))
                {
                    unsigned l_350 = 4294967289UL;
                    unsigned l_378 = 0x95F55AF5L;
                    if (((func_25(p_3, &g_14[6][1], l_350) & (*g_273)) , p_3))
                    {
                        unsigned short *l_372 = (void*)0;
                        int l_374 = 0xEF1A6B96L;
                        unsigned *l_375 = &g_72;
                        g_336[4] = l_379;
                    }
                    else
                    {
                        (*l_379) = ((**l_316) = (*l_310));
                        (*l_316) = &g_103[4];
                    }
                    (*l_316) = &g_103[5];
                    if (p_3)
                        break;
                }
            }


            return &g_14[4][0];


        }
        else
        {
            int *l_380 = &g_14[6][1];
            const struct S0 *l_386 = &g_387;
            const struct S0 **l_385[10][9][2] = {{{&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}}, {{&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}}, {{&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}}, {{&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}}, {{&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}}, {{&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}}, {{&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}}, {{&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}}, {{&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}}, {{&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}, {&l_386, &l_386}}};
            struct S0 **l_390[6][6] = {{&g_117, (void*)0, &g_117, (void*)0, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, (void*)0, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, (void*)0, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, (void*)0, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, (void*)0, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, (void*)0, &g_117, (void*)0}};
            char *l_412 = &g_134[1][4][0];
            const unsigned short * const l_421[1][7][8] = {{{&g_126[0][1][3], &g_63, &g_126[0][2][5], &g_63, &g_63, &g_63, (void*)0, &g_126[0][3][2]}, {&g_126[0][1][3], &g_63, &g_126[0][2][5], &g_63, &g_63, &g_63, (void*)0, &g_126[0][3][2]}, {&g_126[0][1][3], &g_63, &g_126[0][2][5], &g_63, &g_63, &g_63, (void*)0, &g_126[0][3][2]}, {&g_126[0][1][3], &g_63, &g_126[0][2][5], &g_63, &g_63, &g_63, (void*)0, &g_126[0][3][2]}, {&g_126[0][1][3], &g_63, &g_126[0][2][5], &g_63, &g_63, &g_63, (void*)0, &g_126[0][3][2]}, {&g_126[0][1][3], &g_63, &g_126[0][2][5], &g_63, &g_63, &g_63, (void*)0, &g_126[0][3][2]}, {&g_126[0][1][3], &g_63, &g_126[0][2][5], &g_63, &g_63, &g_63, (void*)0, &g_126[0][3][2]}}};
            short l_443 = 0x64A4L;
            unsigned short *l_496 = &g_126[0][1][3];
            const unsigned l_502 = 0x1E3DE577L;
            unsigned short *l_522 = &g_126[0][1][1];
            const short l_527 = 0xE537L;
            unsigned **l_539 = (void*)0;
            int l_610 = 0xC2BDD786L;
            int i, j, k;
            (*l_316) = l_380;

            ;
            if ((func_42(((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((*l_313) = 0x36L), (func_25(g_16.f0, l_380, (func_56((**l_316), (l_338[0][0][1] , (void*)0), (l_338[0][0][6] , ((g_388[2][0][1] = &g_16) != (l_391 = (void*)0)))) == l_338[0][0][3])) <= (*l_311)))), 0xFAL)) , g_279[2][0][0]), l_338[0][0][1], l_380) , 0x81AC097DL))
            {
                unsigned *l_403 = &g_279[2][2][2];
                int l_405 = 0x003838D0L;
                int l_408[9][3] = {{(-7L), 1L, 0L}, {(-7L), 1L, 0L}, {(-7L), 1L, 0L}, {(-7L), 1L, 0L}, {(-7L), 1L, 0L}, {(-7L), 1L, 0L}, {(-7L), 1L, 0L}, {(-7L), 1L, 0L}, {(-7L), 1L, 0L}};
                int *l_432 = &g_103[4];
                unsigned l_444 = 0UL;
                unsigned *l_455[2][5][7] = {{{(void*)0, (void*)0, &g_72, (void*)0, (void*)0, (void*)0, &g_72}, {(void*)0, (void*)0, &g_72, (void*)0, (void*)0, (void*)0, &g_72}, {(void*)0, (void*)0, &g_72, (void*)0, (void*)0, (void*)0, &g_72}, {(void*)0, (void*)0, &g_72, (void*)0, (void*)0, (void*)0, &g_72}, {(void*)0, (void*)0, &g_72, (void*)0, (void*)0, (void*)0, &g_72}}, {{(void*)0, (void*)0, &g_72, (void*)0, (void*)0, (void*)0, &g_72}, {(void*)0, (void*)0, &g_72, (void*)0, (void*)0, (void*)0, &g_72}, {(void*)0, (void*)0, &g_72, (void*)0, (void*)0, (void*)0, &g_72}, {(void*)0, (void*)0, &g_72, (void*)0, (void*)0, (void*)0, &g_72}, {(void*)0, (void*)0, &g_72, (void*)0, (void*)0, (void*)0, &g_72}}};
                int *l_456 = &g_95[4];
                int i, j, k;
                for (g_72 = 0; (g_72 <= 0); g_72 += 1)
                {
                    struct S0 *l_406 = &g_118;
                    unsigned short ***l_409[2][1];
                    int *l_425 = &g_103[5];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_409[i][j] = &g_272;
                    }
                    for (g_136 = 0; (g_136 <= 0); g_136 += 1)
                    {
                        unsigned l_401[7][3] = {{0x8798C594L, 0x360B372FL, 0x5FE70CD3L}, {0x8798C594L, 0x360B372FL, 0x5FE70CD3L}, {0x8798C594L, 0x360B372FL, 0x5FE70CD3L}, {0x8798C594L, 0x360B372FL, 0x5FE70CD3L}, {0x8798C594L, 0x360B372FL, 0x5FE70CD3L}, {0x8798C594L, 0x360B372FL, 0x5FE70CD3L}, {0x8798C594L, 0x360B372FL, 0x5FE70CD3L}};
                        unsigned **l_402[7] = {&l_337[7][4][1], &l_337[7][4][1], &l_337[0][6][0], &l_337[7][4][1], &l_337[7][4][1], &l_337[0][6][0], &l_337[7][4][1]};
                        int *l_404 = &g_103[0];
                        short *l_407[4];
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_407[i] = &g_268;
                        (*l_380) = ((((safe_mul_func_uint8_t_u_u((((*l_313) = ((void*)0 != l_395)) , (((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((g_268 = (((*l_380) != g_392.f6) | (((*l_314) && ((((((!(((safe_unary_minus_func_int8_t_s(p_3)) , (*g_117)) , (l_405 = (((*l_404) = (l_401[1][2] < ((l_403 = (void*)0) != (void*)0))) > p_3)))) && 0xEBL) , l_406) == &g_392) , (*l_404)) , p_3)) , g_126[0][3][0]))), (**g_272))), g_392.f1)) != 0L) > l_349)), g_392.f0)) , p_3) & p_3) & 0x36470620L);
                        if (p_3)
                            continue;
                        if ((*l_380))
                            continue;
                    }
                    g_388[2][0][1] = (l_406 = &g_16);

                    ;
                    if (p_3)
                    {
                        unsigned short ***l_411 = &g_272;
                        unsigned short ****l_410 = &l_411;
                        (*l_314) = l_408[0][1];
                        (*l_380) = (l_409[0][0] != ((*l_410) = l_409[0][0]));
                        return &g_14[0][0];


                    }
                    else
                    {
                        unsigned short *l_422 = (void*)0;
                        (**l_316) = (l_412 == &g_134[1][4][0]);
                        (*l_316) = func_19((((*l_335) = p_3) >= (safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_392.f3, (4UL & (!(g_389.f2 & ((*l_313) = (-3L))))))), (safe_rshift_func_int8_t_s_u(((0x039BE76DL & (*l_311)) & l_349), 7))))), (l_421[0][0][0] != l_422));
                    }
                    for (l_324 = 0; (l_324 <= 0); l_324 += 1)
                    {
                        int **l_423 = (void*)0;
                        int **l_424[3][7][3] = {{{(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}}, {{(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}}, {{(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}, {(void*)0, (void*)0, &l_314}}};
                        int i, j, k;
                        l_425 = ((*l_316) = &g_14[6][1]);

                        ;
                        (**l_316) = (g_392.f5 || (0xD654L >= (safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(p_3, ((l_432 = l_380) == (void*)0))) != ((!g_118.f1) ^ (((((safe_lshift_func_int16_t_s_s(0x588FL, 11)) ^ (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((((((*l_425) != (safe_lshift_func_uint16_t_u_s(p_3, 9))) <= l_443) | p_3) > 0xB1L) > (-1L)) , 0xECL), p_3)), 0x0507L))) < 0xDD2C94EFL) < g_118.f1) < l_444))), g_191))));

                        ;
                        return l_445;


                    }
                }

                ;
                (*l_380) = (func_25(((*l_456) = ((((safe_lshift_func_uint16_t_u_u((((*l_432) = func_25((*l_445), &l_408[0][1], (safe_rshift_func_int8_t_s_s((g_454[1][0][1] = (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(g_16.f5, 5)), (((~((*l_412) = ((~g_191) == (*l_380)))) == 0xCEL) || (*l_445))))), p_3)))) , (*g_273)), 5)) >= l_338[0][0][8]) <= p_3) , p_3)), l_380, p_3) ^ 0xEB32F37AL);
            }
            else
            {
                unsigned *l_488 = &g_72;
                unsigned **l_487 = &l_488;
                if ((~((*l_310) = (safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(((*l_335) = ((*l_311) != ((func_56(((0L && (safe_mul_func_int16_t_s_s(g_268, g_118.f4))) , ((safe_add_func_int8_t_s_s((g_279[4][3][0] & func_56(p_3, (*g_272), (safe_mod_func_int32_t_s_s((l_467 != (void*)0), p_3)))), p_3)) , g_454[1][0][1])), l_315, g_389.f1) , p_3) | 0UL))), g_191)) <= (**g_272)), g_389.f6)))))
                {
                    struct S0 l_482 = {64,3,0,11,122,3393,-7};
                    unsigned *l_483 = &g_72;
                    unsigned short *l_484 = &g_63;
                    (*l_316) = &g_14[7][0];
                    for (l_357 = 3; (l_357 >= 0); l_357 -= 1)
                    {
                        int i;
                        (*l_314) = g_95[(l_357 + 1)];
                    }
                    (*l_310) = (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(g_389.f6, ((*l_483) = (((*l_373) = (*l_380)) || (safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((*l_315) = (safe_add_func_uint8_t_u_u((((p_3 >= (safe_lshift_func_uint8_t_u_s(((((p_3 || (safe_mul_func_uint16_t_u_u((((*g_273) = (p_3 <= g_387.f0)) , 0xD103L), 65535UL))) & p_3) ^ l_485) != (-7L)), l_482.f5))) && g_389.f2) | g_279[3][3][3]), g_392.f3))), p_3)), 6UL)))))) >= g_389.f4), 4UL));
                }
                else
                {
                    unsigned short *l_486 = (void*)0;
                    (*l_380) = p_3;
                }
                l_338[0][0][1] = ((*l_380) = ((((*l_487) = &g_72) != &g_72) & g_118.f4));
            }


            ;
            if ((safe_mul_func_int8_t_s_s(p_3, (*l_380))))
            {
                short l_501 = 0x307CL;
                char *l_509 = &g_510[0][0][2];
                unsigned short *l_511 = &g_63;
                short l_512 = (-1L);
                int **l_519 = &g_336[4];
                int l_567 = 7L;
                unsigned ****l_582 = &g_578;
                struct S0 l_616 = {21,5,0,10,546,497,-84};
                int l_619 = 0x8081065EL;
                if ((func_56((((0xDFL & (safe_sub_func_uint32_t_u_u((g_16.f0 = p_3), (safe_add_func_int16_t_s_s((((l_501 & ((l_312 , l_502) != p_3)) , (safe_rshift_func_int8_t_s_s(((*l_509) = ((*l_412) = (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((*g_272) != (l_491 , (void*)0)) != g_136), 1UL)), 0x7F45L)))), 1))) || p_3), g_392.f0))))) < 0x1728L) == l_501), l_511, p_3) & 0L))
                {
                    int ***l_518 = &l_316;
                    int l_521[4] = {0x9C85E573L, 0x6952E570L, 0x9C85E573L, 0x6952E570L};
                    int i;
                    l_512 = ((*l_310) = (-1L));
                    l_521[2] = ((***l_518) = (g_389.f2 > 0x8E361481L));
                    (***l_518) = ((((*g_117) , func_56(((*l_310) > p_3), (l_522 = l_522), l_520)) && p_3) > l_501);
                }
                else
                {
                    int *l_530 = &l_338[0][0][1];
                    unsigned short *l_531[8] = {(void*)0, &g_126[0][1][3], (void*)0, &g_126[0][1][3], (void*)0, &g_126[0][1][3], (void*)0, &g_126[0][1][3]};
                    unsigned ** const l_534 = (void*)0;
                    unsigned ****l_544 = (void*)0;
                    unsigned ***l_546 = &l_535;
                    unsigned ****l_545 = &l_546;
                    unsigned ****l_547 = (void*)0;
                    unsigned ****l_548 = (void*)0;
                    unsigned ***l_550 = &l_539;
                    unsigned ****l_549[2][4] = {{(void*)0, (void*)0, &l_550, (void*)0}, {(void*)0, (void*)0, &l_550, (void*)0}};
                    int l_564 = 0xA68891D9L;
                    int i, j;
                    if ((safe_add_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(0x7BL, l_527)) <= (255UL <= ((!(*l_311)) && ((p_3 != (**g_272)) < 0x6AL)))), p_3)))
                    {
                        (*l_445) = p_3;
                        g_528 = (void*)0;

                        ;
                        l_380 = l_530;

                        ;
                    }
                    else
                    {
                        unsigned ***l_538[2][4][1] = {{{&l_535}, {&l_535}, {&l_535}, {&l_535}}, {{&l_535}, {&l_535}, {&l_535}, {&l_535}}};
                        int i, j, k;
                        (*l_519) = &g_103[1];


                    }


                    ;
                    ;
                    g_336[4] = ((func_56(p_3, l_511, ((+p_3) && p_3)) , (safe_mod_func_uint16_t_u_u((*l_445), (safe_lshift_func_int8_t_s_s(((*l_380) <= ((*l_311) , 0x08A38368L)), 5))))) , (*l_316));


                    (*l_445) = (((p_3 < ((*l_530) = (((*l_545) = &l_535) == (l_551 = &l_535)))) ^ (safe_add_func_uint8_t_u_u(g_95[5], (0xCAL == (((void*)0 == l_530) , 0xF9L))))) <= ((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((g_389.f0 && g_557))), (*g_529))) , g_387.f1));
                    for (l_349 = 0; (l_349 >= 9); ++l_349)
                    {
                        char l_560 = 1L;
                        int l_570 = 1L;
                        (*l_530) = (l_560 = ((*l_530) <= (p_3 <= p_3)));
                        (*l_380) = ((-1L) <= (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(l_560)), ((g_191 = (((g_268 <= l_564) , g_155) || (l_570 = ((0UL && (safe_mul_func_int8_t_s_s((+((l_567 = (*l_311)) && (((safe_mul_func_int16_t_s_s(0x5DE2L, 0x065CL)) & p_3) != 0x96L))), (*l_314)))) <= l_520)))) == p_3))));
                    }
                }


                ;
                ;
                for (l_512 = 0; (l_512 > (-4)); --l_512)
                {
                    int *l_581 = &l_338[0][0][9];
                    int *l_613 = &l_357;
                    int **l_612 = &l_613;
                    int *l_615[5][3] = {{&g_103[5], &g_14[3][0], &g_103[5]}, {&g_103[5], &g_14[3][0], &g_103[5]}, {&g_103[5], &g_14[3][0], &g_103[5]}, {&g_103[5], &g_14[3][0], &g_103[5]}, {&g_103[5], &g_14[3][0], &g_103[5]}};
                    int i, j;
                    (*l_310) = (safe_add_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u(0xC21CL, 13)) || (*l_311)) & (-1L)), p_3));
                    if ((g_577 != (void*)0))
                    {
                        (*l_316) = ((*l_519) = l_581);

                        ;
                    }
                    else
                    {
                        (*l_314) = p_3;
                        (*l_519) = func_19(((+((l_582 == &g_578) || ((safe_unary_minus_func_int8_t_s(g_584)) || ((*l_509) = p_3)))) , ((p_3 ^ (p_3 , (safe_rshift_func_int8_t_s_s((((((void*)0 == (*g_577)) == (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((*l_581), p_3)), (*l_581)))) >= (*g_273)) , 0x47L), p_3)))) > (*l_581))), (***g_578));
                        (*l_519) = ((safe_lshift_func_uint8_t_u_s(9UL, 1)) , (void*)0);
                        (*l_445) = ((p_3 == p_3) & ((l_349 ^ ((l_491.f1 , (1UL && (0xB5L ^ ((void*)0 == &g_279[3][3][3])))) ^ (((safe_add_func_uint32_t_u_u(0x814D4989L, 1L)) , (*l_581)) && (-4L)))) && (*l_310)));
                    }
                    for (l_357 = 0; (l_357 != 3); l_357++)
                    {
                        if (p_3)
                            break;
                    }
                    if (((void*)0 == g_597))
                    {
                        const int **l_602 = (void*)0;
                        const int **l_603 = &g_13;
                        unsigned short *l_604 = (void*)0;
                        unsigned short *l_605 = (void*)0;
                        unsigned short *l_606 = &g_607[2];
                        unsigned short *l_608[8] = {(void*)0, &g_609, (void*)0, &g_609, (void*)0, &g_609, (void*)0, &g_609};
                        int l_611[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_611[i] = (-1L);
                        (*l_445) = ((l_491.f2 || ((safe_mod_func_int16_t_s_s((func_9(((*l_603) = (*l_316)), l_581, (*g_117)) || (-1L)), (l_610 = ((*l_606) = p_3)))) <= (l_611[0] , g_387.f5))) && 4294967292UL);
                        (*l_316) = l_581;

                        ;
                    }
                    else
                    {
                        int ***l_614 = &l_612;
                        (*l_614) = l_612;
                        l_615[3][1] = l_615[0][1];
                    }
                }

                ;
                ;

                (*l_519) = func_19(p_3, (p_3 > (safe_sub_func_uint8_t_u_u(((((((((((*l_380) = ((l_619 < p_3) , 3L)) || (*g_580)) | (**g_579)) , l_620) , g_621[0][6]) == (void*)0) == (*g_529)) , 1L) >= p_3), p_3))));
                for (g_72 = (-19); (g_72 < 35); ++g_72)
                {
                    unsigned l_624[3][9][9] = {{{4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}}, {{4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}}, {{4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}, {4294967287UL, 0xB463BAD3L, 4294967287UL, 4294967295UL, 0x1E0C2732L, 4UL, 0UL, 0UL, 4UL}}};
                    int *l_628[6][5][4] = {{{&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}}, {{&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}}, {{&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}}, {{&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}}, {{&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}}, {{&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}, {&g_454[1][0][1], &g_454[0][3][3], &l_338[0][0][3], &g_103[5]}}};
                    int i, j, k;
                    l_624[1][3][0] = (+p_3);
                    (*l_316) = (((p_3 <= p_3) >= (((safe_mod_func_uint16_t_u_u(((g_14[6][1] , p_3) ^ ((l_491.f3 >= p_3) | (*l_311))), (-6L))) != (safe_unary_minus_func_int32_t_s(l_491.f3))) , p_3)) , (*l_519));
                    for (l_610 = 0; (l_610 <= 5); l_610 += 1)
                    {
                        (*l_519) = ((p_3 ^ 0xFBEED16EL) , l_628[3][0][3]);
                    }
                    (*l_380) = l_338[0][0][4];
                }

                ;

            }
            else
            {
                int *l_629 = &g_103[5];
                return l_629;


            }

            ;


            ;
            ;
        }

        ;



        ;
        ;
        (*l_445) = p_3;
        if ((p_3 < (((*l_313) = ((**g_272) ^ func_56(((*l_313) = (safe_mod_func_int8_t_s_s((*g_529), l_632))), (*g_272), ((*l_395) = (safe_mul_func_int16_t_s_s(g_387.f3, func_25(((!(p_3 || p_3)) , p_3), l_635, l_491.f2))))))) ^ p_3)))
        {
            for (l_357 = (-10); (l_357 >= 26); l_357 = safe_add_func_uint16_t_u_u(l_357, 6))
            {
                l_638 = (void*)0;
            }
        }
        else
        {
            short l_642 = 0x5640L;
            struct S0 **l_643 = &g_117;
            short l_647 = 0x12CFL;
            for (l_485 = (-8); (l_485 >= 19); l_485++)
            {
                return l_641;




            }
            l_642 = p_3;
            (*l_643) = &l_620;

            ;
            if (((p_3 && p_3) > (p_3 < (safe_lshift_func_uint8_t_u_u(l_646, 7)))))
            {
                (*l_316) = &l_338[0][0][0];

                ;
                (*l_314) = p_3;
                (*l_635) = p_3;
            }
            else
            {
                int *l_648 = &g_14[3][0];
                int *l_654 = &l_357;
                int **l_653[1][2][10] = {{{&l_654, (void*)0, &l_654, &l_654, (void*)0, &l_654, (void*)0, &l_654, &l_654, (void*)0}, {&l_654, (void*)0, &l_654, &l_654, (void*)0, &l_654, (void*)0, &l_654, &l_654, (void*)0}}};
                unsigned *l_661 = &g_72;
                int i, j, k;
                (*l_314) = ((l_661 = (g_584 , (***g_577))) == (void*)0);
            }
        }

        ;
        for (g_72 = 0; (g_72 >= 26); ++g_72)
        {
            unsigned short l_666 = 0x4300L;
            int l_676 = 0xB189D0BEL;
            char *l_682[3][5][3] = {{{&g_510[0][0][3], &g_557, (void*)0}, {&g_510[0][0][3], &g_557, (void*)0}, {&g_510[0][0][3], &g_557, (void*)0}, {&g_510[0][0][3], &g_557, (void*)0}, {&g_510[0][0][3], &g_557, (void*)0}}, {{&g_510[0][0][3], &g_557, (void*)0}, {&g_510[0][0][3], &g_557, (void*)0}, {&g_510[0][0][3], &g_557, (void*)0}, {&g_510[0][0][3], &g_557, (void*)0}, {&g_510[0][0][3], &g_557, (void*)0}}, {{&g_510[0][0][3], &g_557, (void*)0}, {&g_510[0][0][3], &g_557, (void*)0}, {&g_510[0][0][3], &g_557, (void*)0}, {&g_510[0][0][3], &g_557, (void*)0}, {&g_510[0][0][3], &g_557, (void*)0}}};
            int *l_683 = &g_584;
            int i, j, k;
            (*l_316) = (l_683 = func_19(((***l_467) = (safe_add_func_uint32_t_u_u(((((*l_314) = l_666) <= (***g_578)) != (safe_mod_func_int8_t_s_s((g_510[0][0][2] = ((*l_313) = (safe_lshift_func_uint16_t_u_u(p_3, (((safe_sub_func_uint32_t_u_u((l_673 < (safe_mod_func_uint16_t_u_u((l_676 = 8UL), 5UL))), (((((safe_lshift_func_uint8_t_u_s(g_392.f3, 2)) < ((!p_3) || ((safe_rshift_func_uint8_t_u_s(g_95[7], l_681)) < 0xAB006228L))) != p_3) != (-3L)) && p_3))) <= l_666) , 0xA29DL))))), 0x6EL))), l_666))), p_3));

            ;
            ;
            for (l_676 = 0; (l_676 > 16); l_676 = safe_add_func_int8_t_s_s(l_676, 3))
            {
                int l_717 = (-1L);
                for (l_520 = 0; (l_520 != 4); l_520 = safe_add_func_uint8_t_u_u(l_520, 3))
                {
                    const unsigned l_694 = 0x31C03DBEL;
                    short *l_695 = &l_632;
                    (*l_316) = func_19((((*l_635) != g_191) >= p_3), (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((*g_529), (g_510[1][1][2] = (safe_mul_func_uint16_t_u_u((l_694 >= (((*l_695) = (6UL ^ 0xA5L)) && ((safe_add_func_uint8_t_u_u(g_118.f0, p_3)) | 0UL))), p_3))))), p_3)));
                    for (g_268 = 0; (g_268 < (-1)); --g_268)
                    {
                        struct S0 l_714 = {89,22,-0,-17,-149,10755,45};
                        const char ***l_715 = &g_528;
                        l_717 = (((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(1UL, 15)) ^ (safe_mul_func_uint16_t_u_u((*l_314), (l_714 , (l_714.f6 , (**g_272)))))) == (&g_529 != ((*l_715) = (void*)0))), l_714.f5)), ((**l_535) = (*l_635)))) | p_3), p_3)) && (*l_683)), 0)) & (**g_579)) , l_716);

                        ;
                    }
                    if ((**l_316))
                        continue;
                }
            }
            if ((*l_683))
                continue;
            for (l_377 = (-26); (l_377 >= 31); l_377++)
            {
                struct S0 l_720 = {44,20,0,-6,-195,3992,24};
                const int *l_745 = &l_676;
                const int **l_746[10][9] = {{&g_13, (void*)0, (void*)0, &l_745, &l_311, &l_311, &l_745, &l_745, &l_745}, {&g_13, (void*)0, (void*)0, &l_745, &l_311, &l_311, &l_745, &l_745, &l_745}, {&g_13, (void*)0, (void*)0, &l_745, &l_311, &l_311, &l_745, &l_745, &l_745}, {&g_13, (void*)0, (void*)0, &l_745, &l_311, &l_311, &l_745, &l_745, &l_745}, {&g_13, (void*)0, (void*)0, &l_745, &l_311, &l_311, &l_745, &l_745, &l_745}, {&g_13, (void*)0, (void*)0, &l_745, &l_311, &l_311, &l_745, &l_745, &l_745}, {&g_13, (void*)0, (void*)0, &l_745, &l_311, &l_311, &l_745, &l_745, &l_745}, {&g_13, (void*)0, (void*)0, &l_745, &l_311, &l_311, &l_745, &l_745, &l_745}, {&g_13, (void*)0, (void*)0, &l_745, &l_311, &l_311, &l_745, &l_745, &l_745}, {&g_13, (void*)0, (void*)0, &l_745, &l_311, &l_311, &l_745, &l_745, &l_745}};
                int i, j;
                (*l_445) = (l_720 , 0x268110FFL);
                for (l_349 = 0; (l_349 >= 19); l_349++)
                {
                    short *l_724 = (void*)0;
                    const unsigned short *l_737 = &l_716;
                    (*l_635) = ((((**l_535) = (****g_577)) , p_3) < (p_3 || (l_723 != l_724)));
                    (*l_635) = (p_3 != (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(p_3, (safe_lshift_func_uint8_t_u_s(g_607[4], ((!l_720.f2) && ((p_3 >= p_3) || ((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((((+(safe_mod_func_int32_t_s_s((l_737 == ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(1UL, ((*l_310) = p_3))), 4)), l_744)) , (void*)0)), 5L))) , 0UL) , p_3) != 1L) == 3L), 0x3DL)), p_3)) > 0x45B7L))))))), (-8L))));
                }
                g_13 = l_745;

                ;
                if (p_3)
                    continue;
            }


        }


    }
    else
    {
        unsigned short *l_747 = (void*)0;
        int *l_748 = &g_103[2];
        (*l_635) = (**l_316);
    }


    ;



    ;
    ;
    return l_749;



}







static unsigned short func_9(const int * p_10, int * p_11, struct S0 p_12)
{
    int *l_22[8][6][5] = {{{&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}}, {{&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}}, {{&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}}, {{&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}}, {{&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}}, {{&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}}, {{&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}}, {{&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}, {&g_14[6][1], &g_14[4][0], &g_14[3][0], &g_14[4][1], &g_14[1][0]}}};
    unsigned short *l_23[2];
    unsigned l_24[6];
    const unsigned short l_29 = 65533UL;
    unsigned l_250[8][2];
    unsigned *l_256[2][8][10] = {{{&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}, {&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}, {&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}, {&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}, {&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}, {&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}, {&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}, {&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}}, {{&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}, {&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}, {&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}, {&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}, {&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}, {&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}, {&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}, {&l_24[0], &l_24[3], (void*)0, &l_24[3], &l_24[0], &l_24[1], &l_24[1], &l_24[1], &l_24[0], &l_24[3]}}};
    unsigned char *l_290 = &g_191;
    const unsigned l_297 = 4294967289UL;
    int *l_298 = &g_95[6];
    int l_299 = 0xF7BD04F5L;
    short *l_300 = &g_136;
    unsigned *l_301[8][9][3] = {{{&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}}, {{&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}}, {{&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}}, {{&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}}, {{&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}}, {{&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}}, {{&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}}, {{&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}, {&g_279[3][3][3], (void*)0, &l_250[3][0]}}};
    int **l_302 = &l_22[4][0][0];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_23[i] = (void*)0;
    for (i = 0; i < 6; i++)
        l_24[i] = 1UL;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
            l_250[i][j] = 0UL;
    }
    if (((safe_add_func_int8_t_s_s((((g_14[6][1] , func_19((l_24[3] = ((void*)0 != l_22[4][0][0])), func_25(l_29, func_30((~(0x684CA67BL == p_12.f4)), ((+((void*)0 == &g_14[6][1])) , (g_191 = func_36(func_42(p_12.f3, (*p_10), p_11), g_16.f6, l_23[0], l_23[1], g_95[4]))), g_118.f3, g_95[7], l_23[0]), p_12.f5))) != (void*)0) >= g_155), (-7L))) , (*g_13)))
    {
        unsigned short **l_232 = &l_23[0];
        unsigned *l_247 = &l_24[3];
        g_103[5] = (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((func_56(p_12.f3, ((*l_232) = &g_126[0][1][3]), g_126[0][1][3]) == p_12.f0) != 0x69L) , ((*g_13) , (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(0xCBC1L, 5)), (-6L))))), 0xB511L)), 2));


        g_14[9][1] = ((g_134[0][6][0] | (g_16.f1 > (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(g_72, (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((((*g_13) < (((((((&l_22[1][4][1] != &g_13) < ((*l_247) = g_16.f3)) && g_118.f4) || (safe_mul_func_uint8_t_u_u(((((p_12.f3 , 0x551F979EL) >= l_250[3][0]) , g_118.f4) > 7L), p_12.f0))) < 0x0A70D411L) < g_118.f0) , (-8L))) , (*g_13)) | (*g_13)), g_126[0][3][6])), p_12.f3)))), 6)))) > p_12.f0);
        g_13 = (void*)0;

        ;
    }
    else
    {
        int l_251 = 0L;
        unsigned short *l_261 = &g_126[0][1][3];
        int l_269 = 4L;
        g_103[5] = l_251;
        for (l_251 = 25; (l_251 != (-1)); l_251 = safe_sub_func_uint32_t_u_u(l_251, 5))
        {
            unsigned *l_255 = &l_24[3];
            unsigned **l_254[4] = {&l_255, &l_255, &l_255, &l_255};
            struct S0 l_262 = {18,24,-0,17,973,5345,53};
            struct S0 **l_283 = &g_117;
            int i;
            g_103[5] = (((*l_255) = ((0UL ^ (((g_118.f2 | p_12.f5) < (&g_72 != (l_256[0][4][6] = p_11))) <= (g_14[6][1] , (((func_56(((safe_mul_func_int16_t_s_s(l_251, p_12.f5)) || ((safe_mod_func_uint8_t_u_u((func_56(g_118.f5, &g_126[0][2][6], p_12.f0) || g_14[5][1]), g_16.f4)) && p_12.f1)), l_261, p_12.f2) != p_12.f0) , l_262) , 1UL)))) , g_16.f6)) ^ p_12.f1);


            if ((~(*g_13)))
            {
                struct S0 **l_264 = &g_117;
                struct S0 ***l_263 = &l_264;
                short *l_265 = &g_136;
                short *l_266 = (void*)0;
                short *l_267 = &g_268;
                unsigned short **l_275[6] = {&l_23[0], &l_23[0], &g_273, &l_23[0], &l_23[0], &g_273};
                int l_276 = 0x75F15BADL;
                int i;
                (*l_263) = &g_117;
                if (((((*l_265) = (g_95[0] < (+p_12.f0))) != p_12.f6) == (p_12.f6 < ((*l_267) = 0x1307L))))
                {
                    if ((*g_13))
                        break;
                    l_269 = (*g_13);
                }
                else
                {
                    int *l_270 = &g_103[3];
                    unsigned short *l_271 = &g_126[0][1][2];
                    unsigned short ***l_274 = &g_272;
                    unsigned *l_277 = &l_250[3][0];
                    unsigned *l_278 = &g_279[3][3][3];
                    g_16.f2 = (((+((g_155 = func_25(p_12.f5, l_270, ((*l_278) = ((*l_277) = ((((func_56(p_12.f4, l_271, p_12.f3) , ((*l_274) = g_272)) != ((((*l_270) == l_262.f2) && 1UL) , l_275[3])) < l_276) <= 65535UL))))) || p_12.f4)) != (-4L)) , (*g_13));
                }
                return (**g_272);
            }
            else
            {
                int l_282 = 0L;
                unsigned char *l_284 = &g_191;
                short l_285 = 0x4D3BL;
                g_117 = &g_118;

                ;
                g_16.f4 = (*g_13);
                g_13 = func_30((safe_lshift_func_uint8_t_u_s((!((*l_284) = (p_12.f0 <= (p_12.f2 , ((l_282 , ((p_10 != (void*)0) , ((+g_134[1][4][0]) , l_283))) != (void*)0))))), 2)), l_285, g_126[0][1][3], g_103[3], (*g_272));

                ;
                ;
            }

            ;
            return (*g_273);
        }


    }




    (*l_302) = func_19(((**g_272) = ((safe_rshift_func_uint8_t_u_u(p_12.f1, g_95[4])) && (**g_272))), g_95[0]);
    return (*g_273);
}







static int * func_19(unsigned short p_20, const unsigned p_21)
{
    for (p_20 = (-5); (p_20 >= 3); p_20++)
    {
        return &g_14[6][0];


    }
    return &g_14[8][0];


}







static unsigned func_25(const int p_26, int * p_27, unsigned p_28)
{
    short l_204 = 0L;
    struct S0 l_205 = {70,30,0,14,-757,7315,3};
    int l_210 = 0x112714A0L;
    unsigned char *l_215 = (void*)0;
    unsigned char *l_216 = (void*)0;
    unsigned char *l_217 = (void*)0;
    unsigned char *l_218[10] = {&g_155, &g_191, &g_155, &g_191, &g_155, &g_191, &g_155, &g_191, &g_155, &g_191};
    char *l_219[4][6][10] = {{{(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}}, {{(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}}, {{(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}}, {{(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}, {(void*)0, &g_134[1][4][0], &g_134[1][5][4], &g_134[0][6][4], &g_134[2][4][5], &g_134[1][4][0], &g_134[1][4][0], (void*)0, &g_134[1][4][0], &g_134[1][4][0]}}};
    short *l_220 = &g_136;
    unsigned l_221 = 4294967295UL;
    int l_222 = 0x6E2DC38AL;
    struct S0 *l_223[10] = {&g_118, &g_16, &g_118, &g_16, &g_118, &g_16, &g_118, &g_16, &g_118, &g_16};
    int *l_224 = &l_210;
    struct S0 **l_225 = &l_223[9];
    int i, j, k;
    (*l_225) = func_48(l_204, l_204, (l_205 , ((*p_27) = ((safe_sub_func_uint16_t_u_u(func_56((l_222 = ((((*l_220) = (p_28 , (g_16.f3 == (((safe_add_func_int16_t_s_s(l_210, l_205.f0)) , l_205.f6) < (l_205.f3 = (safe_lshift_func_uint8_t_u_u((l_205.f4 = (safe_add_func_uint32_t_u_u(p_26, l_205.f3))), g_16.f2))))))) , g_118.f3) >= l_221)), l_220, p_28), g_16.f4)) == g_103[1]))), l_223[7], l_224);
    return g_16.f1;
}







static int * func_30(unsigned char p_31, int p_32, short p_33, int p_34, unsigned short * p_35)
{
    struct S0 l_194[7][4] = {{{39,32,-0,11,-717,4614,-66}, {29,32,0,0,-105,9795,2}, {97,5,-0,18,144,7323,-61}, {97,5,-0,18,144,7323,-61}}, {{39,32,-0,11,-717,4614,-66}, {29,32,0,0,-105,9795,2}, {97,5,-0,18,144,7323,-61}, {97,5,-0,18,144,7323,-61}}, {{39,32,-0,11,-717,4614,-66}, {29,32,0,0,-105,9795,2}, {97,5,-0,18,144,7323,-61}, {97,5,-0,18,144,7323,-61}}, {{39,32,-0,11,-717,4614,-66}, {29,32,0,0,-105,9795,2}, {97,5,-0,18,144,7323,-61}, {97,5,-0,18,144,7323,-61}}, {{39,32,-0,11,-717,4614,-66}, {29,32,0,0,-105,9795,2}, {97,5,-0,18,144,7323,-61}, {97,5,-0,18,144,7323,-61}}, {{39,32,-0,11,-717,4614,-66}, {29,32,0,0,-105,9795,2}, {97,5,-0,18,144,7323,-61}, {97,5,-0,18,144,7323,-61}}, {{39,32,-0,11,-717,4614,-66}, {29,32,0,0,-105,9795,2}, {97,5,-0,18,144,7323,-61}, {97,5,-0,18,144,7323,-61}}};
    int *l_200[2];
    int **l_199 = &l_200[1];
    int ***l_201 = &l_199;
    int i, j;
    for (i = 0; i < 2; i++)
        l_200[i] = &g_103[5];
    for (p_31 = 0; (p_31 <= 51); p_31 = safe_add_func_uint8_t_u_u(p_31, 9))
    {
        unsigned char l_197[3];
        int *l_198 = &g_14[6][1];
        int i;
        for (i = 0; i < 3; i++)
            l_197[i] = 1UL;
        (*l_198) = ((0xEAL <= (func_36(l_194[6][1], (((void*)0 != &l_194[3][1]) & (safe_lshift_func_uint8_t_u_s((g_118.f1 != (l_197[2] | (((g_95[4] , 1UL) , (*g_117)) , l_194[6][1].f3))), l_194[6][1].f4))), p_35, &g_126[0][1][3], p_34) , g_95[0])) || g_95[5]);
    }
    (*l_201) = l_199;
    (*l_201) = (*l_201);
    for (p_32 = (-13); (p_32 != 29); p_32++)
    {
        (**l_199) = 0xD3FBD4D5L;
        g_16.f2 = ((*l_201) != (void*)0);
    }
    return &g_103[2];


}







static int func_36(struct S0 p_37, int p_38, unsigned short * p_39, unsigned short * p_40, int p_41)
{
    int *l_96 = &g_14[9][1];
    unsigned char l_101[9][1] = {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}};
    int l_112 = 0xA819422BL;
    const unsigned short *l_144 = &g_63;
    unsigned short *l_145 = &g_126[0][1][3];
    int l_171 = 0x795804E8L;
    unsigned short l_186 = 0x5B47L;
    int l_187 = 1L;
    int i, j;
    l_101[1][0] = (g_16.f4 = (((*l_96) = 0x1E45A2DCL) ^ ((safe_mul_func_int8_t_s_s(6L, g_16.f1)) > (safe_mul_func_uint8_t_u_u(p_37.f4, g_16.f0)))));
    if ((*g_13))
    {
        int *l_104[3][4][5] = {{{&g_14[2][1], &g_14[1][0], &g_103[0], &g_103[0], &g_14[6][1]}, {&g_14[2][1], &g_14[1][0], &g_103[0], &g_103[0], &g_14[6][1]}, {&g_14[2][1], &g_14[1][0], &g_103[0], &g_103[0], &g_14[6][1]}, {&g_14[2][1], &g_14[1][0], &g_103[0], &g_103[0], &g_14[6][1]}}, {{&g_14[2][1], &g_14[1][0], &g_103[0], &g_103[0], &g_14[6][1]}, {&g_14[2][1], &g_14[1][0], &g_103[0], &g_103[0], &g_14[6][1]}, {&g_14[2][1], &g_14[1][0], &g_103[0], &g_103[0], &g_14[6][1]}, {&g_14[2][1], &g_14[1][0], &g_103[0], &g_103[0], &g_14[6][1]}}, {{&g_14[2][1], &g_14[1][0], &g_103[0], &g_103[0], &g_14[6][1]}, {&g_14[2][1], &g_14[1][0], &g_103[0], &g_103[0], &g_14[6][1]}, {&g_14[2][1], &g_14[1][0], &g_103[0], &g_103[0], &g_14[6][1]}, {&g_14[2][1], &g_14[1][0], &g_103[0], &g_103[0], &g_14[6][1]}}};
        const unsigned char *l_175 = (void*)0;
        unsigned short **l_176 = &l_145;
        unsigned char *l_188 = (void*)0;
        unsigned char *l_189 = &l_101[7][0];
        int i, j, k;
        for (p_41 = 8; (p_41 >= 1); p_41 -= 1)
        {
            int *l_102 = &g_103[5];
            unsigned l_116[7] = {4294967293UL, 0x75F9727AL, 4294967293UL, 0x75F9727AL, 4294967293UL, 0x75F9727AL, 4294967293UL};
            int i;
            (*l_102) = (g_14[5][1] = (g_95[p_41] , 0x871CFEE8L));
            for (g_72 = 2; (g_72 <= 8); g_72 += 1)
            {
                int **l_105 = &l_104[1][3][4];
                for (g_63 = 0; (g_63 <= 8); g_63 += 1)
                {
                    for (p_38 = 3; (p_38 <= 8); p_38 += 1)
                    {
                        int i;
                        if (g_95[p_38])
                            break;
                    }
                }
                (*l_105) = l_104[1][3][4];
            }
            for (g_63 = 2; (g_63 <= 8); g_63 += 1)
            {
                unsigned char l_115 = 5UL;
                for (g_72 = 0; (g_72 <= 8); g_72 += 1)
                {
                    (*l_102) = (g_14[4][1] , (g_16 , ((*g_13) || (g_72 < g_16.f6))));
                }
                for (p_38 = 0; (p_38 <= 8); p_38 += 1)
                {
                    struct S0 **l_119[4] = {&g_117, &g_117, &g_117, &g_117};
                    int i;
                    g_117 = func_48((+((safe_add_func_uint8_t_u_u(func_56((*l_96), p_39, p_37.f5), (((safe_mod_func_int16_t_s_s(((((g_16.f4 = g_103[5]) == (safe_lshift_func_int16_t_s_s(g_16.f2, (*l_102)))) , l_112) == (safe_rshift_func_uint16_t_u_s(0UL, (*l_102)))), 0xAA9FL)) , 0xBB84L) == l_115))) == p_37.f3)), g_103[5], l_116[0], g_117, l_96);

                    ;
                }
                for (p_38 = 0; (p_38 <= 5); p_38 += 1)
                {
                    int i;
                    for (l_112 = 0; (l_112 <= 5); l_112 += 1)
                    {
                        int **l_120 = (void*)0;
                        int *l_121 = &g_103[3];
                        int i;
                        l_121 = ((p_37 , (*g_117)) , &g_103[l_112]);
                        if (g_95[g_63])
                            break;
                        (*l_96) = g_95[(p_38 + 1)];
                    }
                    return g_103[p_38];
                }
                for (g_72 = 0; (g_72 <= 8); g_72 += 1)
                {
                    char *l_133[5][1];
                    unsigned char *l_135 = (void*)0;
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_133[i][j] = &g_134[1][4][0];
                    }
                    (*l_102) = g_95[g_63];
                    (*l_102) = ((safe_sub_func_int8_t_s_s((((g_126[0][1][3] = (safe_add_func_uint8_t_u_u(p_38, g_118.f4))) >= (safe_add_func_int32_t_s_s(((p_37.f3 && (safe_lshift_func_uint16_t_u_s(g_14[6][1], 10))) & ((g_136 = (safe_mul_func_int8_t_s_s((g_118.f1 | 0L), (g_134[1][3][1] = g_16.f2)))) , (safe_unary_minus_func_int32_t_s((*g_13))))), (safe_mul_func_uint8_t_u_u(g_16.f3, 0xF3L))))) , 0x01L), 251UL)) > g_118.f6);
                }
            }
        }
        if (((p_38 , 0xEF8C87ACL) || ((g_16.f5 ^ (&g_118 != (g_117 = &g_16))) == (-1L))))
        {
            int **l_152 = &l_104[1][3][4];
            struct S0 l_164[6][1][1] = {{{{71,15,0,-0,-350,3804,-0}}}, {{{71,15,0,-0,-350,3804,-0}}}, {{{71,15,0,-0,-350,3804,-0}}}, {{{71,15,0,-0,-350,3804,-0}}}, {{{71,15,0,-0,-350,3804,-0}}}, {{{71,15,0,-0,-350,3804,-0}}}};
            struct S0 **l_165[6][6][7] = {{{&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}}, {{&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}}, {{&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}}, {{&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}}, {{&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}}, {{&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}, {&g_117, (void*)0, &g_117, &g_117, &g_117, &g_117, (void*)0}}};
            short *l_170[2];
            unsigned *l_172 = &g_72;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_170[i] = &g_136;
            (*l_96) = (safe_mul_func_uint16_t_u_u(((!(safe_sub_func_int8_t_s_s((p_37.f1 > (~7UL)), (((void*)0 != l_144) || p_37.f1)))) >= (!func_56(g_14[1][1], l_145, (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((l_152 == (g_103[5] , l_152)), p_37.f6)), p_38)), g_118.f2))))), p_41));
            p_38 = (((safe_mod_func_uint8_t_u_u((4294967295UL == (g_155 && ((*l_172) = (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((*l_96) < (l_164[5][0][0] , (l_165[4][4][6] != l_165[4][4][6]))) , g_118.f3), (((((!(p_37.f1 < (l_171 = ((safe_add_func_int16_t_s_s(p_37.f5, g_16.f5)) == g_16.f3)))) , 0x9BL) >= 5L) , g_136) || p_37.f0))), g_118.f4)) <= (*g_13)), 7)), g_155))))), 0x1CL)) != g_14[3][0]) <= g_16.f1);
        }
        else
        {
            for (p_38 = 0; (p_38 == 28); p_38 = safe_add_func_uint16_t_u_u(p_38, 9))
            {
                return p_37.f3;
            }
        }
        (*l_96) = ((func_56((l_175 != l_175), ((*l_176) = &g_126[0][1][3]), (&g_72 != l_96)) > (g_118.f4 == (p_37.f2 , ((safe_add_func_uint16_t_u_u((((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((((((g_95[0] , 1UL) > 1UL) ^ p_37.f0) <= 0xF762L) != g_126[0][2][2]), l_186)) && l_187), p_41)), g_118.f1)))) == g_118.f2) < g_16.f4), (-5L))) & 1UL)))) > g_155);
        g_14[8][0] = (5L ^ ((p_38 < (((*l_189) = (g_134[1][4][0] >= (*l_96))) && p_37.f0)) == g_118.f5));
    }
    else
    {
        int **l_190 = &l_96;
        (*l_190) = &p_38;

        ;
    }

    ;
    return p_37.f2;
}







static struct S0 func_42(int p_43, int p_44, int * const p_45)
{
    const int *l_46[8] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
    int *l_47 = &g_14[6][1];
    unsigned short *l_62 = &g_63;
    struct S0 *l_89 = &g_16;
    struct S0 **l_91 = &l_89;
    int i;
    (*l_47) = (l_46[1] == (void*)0);
    (*l_91) = func_48(p_43, (safe_lshift_func_int16_t_s_s(0x29ADL, 14)), func_56(((safe_mod_func_uint16_t_u_u(p_44, p_44)) , g_14[4][0]), l_62, ((void*)0 == l_62)), l_89, l_47);
    for (p_44 = 0; (p_44 <= (-27)); p_44 = safe_sub_func_uint16_t_u_u(p_44, 5))
    {
        int **l_94[2][3];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_94[i][j] = &l_47;
        }
        l_46[2] = &p_44;
    }


    return g_16;
}







static struct S0 * func_48(unsigned char p_49, const int p_50, int p_51, struct S0 * p_52, int * p_53)
{
    struct S0 *l_90 = &g_16;
    p_52 = &g_16;

    ;
    return l_90;


}







static int func_56(char p_57, unsigned short * p_58, unsigned p_59)
{
    int *l_65 = (void*)0;
    int **l_64 = &l_65;
    int *l_69 = &g_14[6][1];
    int **l_68 = &l_69;
    unsigned *l_70 = (void*)0;
    unsigned *l_71 = &g_72;
    int *l_73[1][5];
    struct S0 *l_78 = &g_16;
    int l_83 = 0x3A129387L;
    const int **l_84 = &g_13;
    struct S0 *l_86 = (void*)0;
    struct S0 **l_85 = &l_86;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_73[i][j] = &g_14[4][0];
    }
    (*l_64) = &g_14[2][1];

    ;
    (*l_64) = (((**l_64) == ((*l_65) && (safe_lshift_func_uint8_t_u_u(((((*l_64) == ((*l_68) = (*l_64))) , ((-1L) >= (((*l_71) = p_59) , ((void*)0 != l_73[0][4])))) >= (safe_lshift_func_uint8_t_u_u((**l_64), 5))), 6)))) , (*l_68));
    (**l_64) = (safe_mul_func_uint16_t_u_u((l_78 == ((*l_85) = ((&l_69 == ((+(*l_65)) , ((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_16.f6, l_83)), 3)) , (l_84 = &g_13)))) , &g_16))), 4L));

    ;
    (**l_68) = (safe_mod_func_uint32_t_u_u((*l_65), (p_57 , p_59)));
    return p_57;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_14[i][j], "g_14[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
    transparent_crc(g_16.f1, "g_16.f1", print_hash_value);
    transparent_crc(g_16.f2, "g_16.f2", print_hash_value);
    transparent_crc(g_16.f3, "g_16.f3", print_hash_value);
    transparent_crc(g_16.f4, "g_16.f4", print_hash_value);
    transparent_crc(g_16.f5, "g_16.f5", print_hash_value);
    transparent_crc(g_16.f6, "g_16.f6", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_103[i], "g_103[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_118.f0, "g_118.f0", print_hash_value);
    transparent_crc(g_118.f1, "g_118.f1", print_hash_value);
    transparent_crc(g_118.f2, "g_118.f2", print_hash_value);
    transparent_crc(g_118.f3, "g_118.f3", print_hash_value);
    transparent_crc(g_118.f4, "g_118.f4", print_hash_value);
    transparent_crc(g_118.f5, "g_118.f5", print_hash_value);
    transparent_crc(g_118.f6, "g_118.f6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_126[i][j][k], "g_126[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_134[i][j][k], "g_134[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_279[i][j][k], "g_279[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_387.f0, "g_387.f0", print_hash_value);
    transparent_crc(g_387.f1, "g_387.f1", print_hash_value);
    transparent_crc(g_387.f2, "g_387.f2", print_hash_value);
    transparent_crc(g_387.f3, "g_387.f3", print_hash_value);
    transparent_crc(g_387.f4, "g_387.f4", print_hash_value);
    transparent_crc(g_387.f5, "g_387.f5", print_hash_value);
    transparent_crc(g_387.f6, "g_387.f6", print_hash_value);
    transparent_crc(g_389.f0, "g_389.f0", print_hash_value);
    transparent_crc(g_389.f1, "g_389.f1", print_hash_value);
    transparent_crc(g_389.f2, "g_389.f2", print_hash_value);
    transparent_crc(g_389.f3, "g_389.f3", print_hash_value);
    transparent_crc(g_389.f4, "g_389.f4", print_hash_value);
    transparent_crc(g_389.f5, "g_389.f5", print_hash_value);
    transparent_crc(g_389.f6, "g_389.f6", print_hash_value);
    transparent_crc(g_392.f0, "g_392.f0", print_hash_value);
    transparent_crc(g_392.f1, "g_392.f1", print_hash_value);
    transparent_crc(g_392.f2, "g_392.f2", print_hash_value);
    transparent_crc(g_392.f3, "g_392.f3", print_hash_value);
    transparent_crc(g_392.f4, "g_392.f4", print_hash_value);
    transparent_crc(g_392.f5, "g_392.f5", print_hash_value);
    transparent_crc(g_392.f6, "g_392.f6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_454[i][j][k], "g_454[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_510[i][j][k], "g_510[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_607[i], "g_607[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_609, "g_609", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
