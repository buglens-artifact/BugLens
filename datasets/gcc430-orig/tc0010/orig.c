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
   unsigned f0 : 9;
   unsigned f1 : 28;
   unsigned f2 : 15;
   char f3;
   signed f4 : 23;
   signed f5 : 20;
   unsigned f6 : 3;
   unsigned f7 : 10;
   signed f8 : 5;
   signed f9 : 1;
};

struct S1 {
   signed f0 : 8;
   unsigned f1 : 29;
   signed f2 : 28;
   unsigned f3 : 28;
   signed f4 : 6;
};

union U2 {
   unsigned f0;
   short f1;
   unsigned char f2;
   unsigned f3;
};

union U3 {
   int f0;
   short f1;
   short f2;
   unsigned f3;
};


static int g_23 = 0x2A0C0E07L;
static unsigned g_32 = 0UL;
static unsigned short g_33[10][4][6] = {{{8UL,0x3674L,6UL,0x2E0FL,6UL,0x3674L},{0xAFBCL,8UL,6UL,0xC705L,65535UL,0x2E0FL},{0xDA31L,0xC705L,0x3674L,0x3674L,0xC705L,0xDA31L},{0x3674L,0xC705L,0xDA31L,0x0DC4L,65535UL,6UL}},{{6UL,8UL,0xAFBCL,8UL,6UL,0xC705L},{6UL,0x3674L,8UL,0x0DC4L,0xDAEDL,0xDAEDL},{0x3674L,65535UL,65535UL,0x3674L,0xAFBCL,0xDAEDL},{0xDA31L,0xDAEDL,8UL,0xC705L,8UL,0xDA31L}},{{6UL,0x2E0FL,6UL,0x3674L,8UL,0x0DC4L},{65535UL,0xD8E6L,0xDAEDL,6UL,6UL,0xDAEDL},{0xC705L,0xC705L,0xAFBCL,6UL,0xD8E6L,0x3674L},{65535UL,0xAFBCL,0x0DC4L,0x3674L,0x0DC4L,0xAFBCL}},{{6UL,65535UL,0x0DC4L,0xDA31L,0xC705L,0x3674L},{0xDAEDL,0xDA31L,0xAFBCL,0xAFBCL,0xDA31L,0xDAEDL},{0xAFBCL,0xDA31L,0xDAEDL,8UL,0xC705L,0x0DC4L},{0x0DC4L,65535UL,6UL,65535UL,0x0DC4L,0xDA31L}},{{0x0DC4L,0xAFBCL,65535UL,8UL,0xD8E6L,0xD8E6L},{0xAFBCL,0xC705L,0xC705L,0xAFBCL,6UL,0xD8E6L},{0xDAEDL,0xD8E6L,65535UL,0xDA31L,8UL,0xDA31L},{6UL,0x2E0FL,6UL,0x3674L,8UL,0x0DC4L}},{{65535UL,0xD8E6L,0xDAEDL,6UL,6UL,0xDAEDL},{0xC705L,0xC705L,0xAFBCL,6UL,0xD8E6L,0x3674L},{65535UL,0xAFBCL,0x0DC4L,0x3674L,0x0DC4L,0xAFBCL},{6UL,65535UL,0x0DC4L,0x3674L,0x2E0FL,8UL}},{{0xAFBCL,0x3674L,65535UL,65535UL,0x3674L,0xAFBCL},{65535UL,0x3674L,0xAFBCL,0xDAEDL,0x2E0FL,0xDA31L},{0xDA31L,0xD8E6L,0xC705L,0xD8E6L,0xDA31L,0x3674L},{0xDA31L,65535UL,0xD8E6L,0xDAEDL,6UL,6UL}},{{65535UL,0x2E0FL,0x2E0FL,65535UL,0xC705L,6UL},{0xAFBCL,6UL,0xD8E6L,0x3674L,0xDAEDL,0x3674L},{0xC705L,0x0DC4L,0xC705L,8UL,0xDAEDL,0xDA31L},{0xD8E6L,6UL,0xAFBCL,0xC705L,0xC705L,0xAFBCL}},{{0x2E0FL,0x2E0FL,65535UL,0xC705L,6UL,8UL},{0xD8E6L,65535UL,0xDA31L,8UL,0xDA31L,65535UL},{0xC705L,0xD8E6L,0xDA31L,0x3674L,0x2E0FL,8UL},{0xAFBCL,0x3674L,65535UL,65535UL,0x3674L,0xAFBCL}},{{65535UL,0x3674L,0xAFBCL,0xDAEDL,0x2E0FL,0xDA31L},{0xDA31L,0xD8E6L,0xC705L,0xD8E6L,0xDA31L,0x3674L},{0xDA31L,65535UL,0xD8E6L,0xDAEDL,6UL,6UL},{65535UL,0x2E0FL,0x2E0FL,0xC705L,0xDA31L,0x0DC4L}}};
static struct S0 g_48 = {3,13167,82,0L,-1643,313,1,25,4,-0};
static union U2 g_59 = {0x0DD0043BL};
static struct S1 g_91 = {4,15219,-10292,7237,6};
static int g_117 = (-1L);
static unsigned char g_118 = 248UL;
static unsigned g_119 = 0xFD2DB2C6L;
static union U3 g_126 = {0xB44E860BL};
static short g_174 = 6L;
static char g_268 = (-9L);
static unsigned short g_279[9][3][6] = {{{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L}},{{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L}},{{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L}},{{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L}},{{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L}},{{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L}},{{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L}},{{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L}},{{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L},{0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L,0x69A3L}}};
static int g_283[7][4][9] = {{{5L,(-1L),1L,0x26144F1BL,1L,1L,0xC4B35EA0L,(-8L),0x964D2C5AL},{0x964D2C5AL,0x34001218L,5L,0x26144F1BL,0x26144F1BL,5L,0x34001218L,0x964D2C5AL,1L},{0L,0xEFCE0573L,0x26144F1BL,0L,0xC4B35EA0L,7L,0x7EF6AAA0L,0L,(-1L)},{0x3FAD1BD5L,0x9BF9DE1AL,(-8L),0xC18DCE13L,1L,1L,0xB11A5E9FL,1L,(-1L)}},{{8L,1L,0x34001218L,(-8L),1L,(-8L),0L,0x7EF6AAA0L,0x5BEE53F2L},{0x26144F1BL,0x04A883AAL,0xB5576746L,0xB2AC872CL,1L,0xB2AC872CL,0xB5576746L,0x04A883AAL,0x26144F1BL},{6L,0xC18DCE13L,0xB6A54095L,1L,1L,0x5BEE53F2L,(-8L),7L,0x34001218L},{0x6CC4F3EBL,1L,0xC18DCE13L,0xB5576746L,0x3FAD1BD5L,(-1L),6L,(-8L),0xEA5CF4F5L}},{{6L,1L,(-8L),0x26144F1BL,(-7L),0x9BF9DE1AL,0xC18DCE13L,0x3FAD1BD5L,5L},{0x26144F1BL,0L,0x6CC4F3EBL,0xEA5CF4F5L,0x9BF9DE1AL,0x9BF9DE1AL,0xEA5CF4F5L,0x6CC4F3EBL,0L},{8L,0x26144F1BL,0x7EF6AAA0L,6L,0x0797C9DDL,(-1L),0xBE865AEAL,1L,(-7L)},{0x3FAD1BD5L,0x0797C9DDL,7L,0x7099C4F5L,1L,0x5BEE53F2L,1L,0x34001218L,0x04A883AAL}},{{0xB5B313F4L,0x26144F1BL,1L,0L,0xEFCE0573L,0xB2AC872CL,0xB6A54095L,6L,0x7099C4F5L},{0x5BEE53F2L,0L,0xB2AC872CL,0x9BF9DE1AL,0x7EF6AAA0L,5L,0x7EF6AAA0L,0x34001218L,1L},{0x9BF9DE1AL,0x9BF9DE1AL,0xEA5CF4F5L,0x6CC4F3EBL,0L,0x26144F1BL,0xC18DCE13L,0xB2AC872CL,8L},{0xB6A54095L,0x6CC4F3EBL,1L,0xC18DCE13L,0xB5576746L,0x3FAD1BD5L,(-1L),6L,(-8L)}},{{0xB5B313F4L,8L,0xEA5CF4F5L,0x7099C4F5L,1L,0x9BF9DE1AL,6L,0x5BEE53F2L,0xB11A5E9FL},{0L,0xEA5CF4F5L,1L,0x3FAD1BD5L,0x5BEE53F2L,8L,8L,0x5BEE53F2L,0x3FAD1BD5L},{0xC18DCE13L,(-1L),0xC18DCE13L,(-8L),0xB5B313F4L,0xB5576746L,1L,6L,1L},{0xBE865AEAL,0x34001218L,0xC4B35EA0L,1L,0x3FAD1BD5L,1L,5L,0xB2AC872CL,0L}},{{0x04A883AAL,0xC18DCE13L,0L,(-8L),8L,(-1L),0xB6A54095L,0x34001218L,0x26144F1BL},{0xEFCE0573L,1L,0x964D2C5AL,0x3FAD1BD5L,0x26144F1BL,1L,0xB11A5E9FL,1L,0x26144F1BL},{0x7099C4F5L,5L,5L,0x7099C4F5L,6L,0xB6A54095L,0xB2AC872CL,0xEFCE0573L,0L},{1L,7L,8L,0xC18DCE13L,0x6CC4F3EBL,0x5BEE53F2L,0xB5B313F4L,0x26144F1BL,1L}},{{0xEFCE0573L,1L,0L,0x964D2C5AL,1L,1L,0xC18DCE13L,0x5BEE53F2L,(-8L)},{0xB5576746L,(-8L),0x7EF6AAA0L,0xEFCE0573L,(-7L),0xB2AC872CL,1L,1L,0xB2AC872CL},{0xB5576746L,0xB2AC872CL,1L,0xB2AC872CL,0xB5576746L,0x04A883AAL,0x26144F1BL,(-1L),1L},{0xEFCE0573L,0x5BEE53F2L,(-1L),0xEA5CF4F5L,(-8L),6L,(-1L),0x3FAD1BD5L,0xB5576746L}}};
static char g_344 = 0xE5L;
static struct S0 g_414[10] = {{9,3944,170,-1L,-2491,-969,0,12,-4,-0},{11,3681,105,-7L,-484,-111,0,31,-2,0},{9,3944,170,-1L,-2491,-969,0,12,-4,-0},{9,3944,170,-1L,-2491,-969,0,12,-4,-0},{11,3681,105,-7L,-484,-111,0,31,-2,0},{9,3944,170,-1L,-2491,-969,0,12,-4,-0},{9,3944,170,-1L,-2491,-969,0,12,-4,-0},{11,3681,105,-7L,-484,-111,0,31,-2,0},{9,3944,170,-1L,-2491,-969,0,12,-4,-0},{9,3944,170,-1L,-2491,-969,0,12,-4,-0}};
static union U2 g_427[1] = {{0x01734B55L}};
static union U3 g_501 = {0L};
static int g_537 = 1L;
static int g_553 = 0x2DB4BAAAL;
static struct S0 g_554[6] = {{18,15066,141,3L,1361,-70,1,4,4,0},{15,11497,134,0xE9L,-2088,334,1,2,0,-0},{15,11497,134,0xE9L,-2088,334,1,2,0,-0},{18,15066,141,3L,1361,-70,1,4,4,0},{15,11497,134,0xE9L,-2088,334,1,2,0,-0},{15,11497,134,0xE9L,-2088,334,1,2,0,-0}};
static unsigned char g_829 = 0x5CL;
static int g_1035 = 0x18B85139L;
static unsigned g_1125 = 0UL;
static struct S0 g_1238[9] = {{2,13837,174,-1L,-839,330,1,23,0,0},{2,13837,174,-1L,-839,330,1,23,0,0},{2,13837,174,-1L,-839,330,1,23,0,0},{2,13837,174,-1L,-839,330,1,23,0,0},{2,13837,174,-1L,-839,330,1,23,0,0},{2,13837,174,-1L,-839,330,1,23,0,0},{2,13837,174,-1L,-839,330,1,23,0,0},{2,13837,174,-1L,-839,330,1,23,0,0},{2,13837,174,-1L,-839,330,1,23,0,0}};
static union U2 g_1296 = {0x2133A27EL};
static int g_1363 = 0xA8D79E13L;
static unsigned short g_1386 = 0UL;
static unsigned char g_1430[7][6][6] = {{{0xC7L,0UL,0x2BL,0xC7L,0x2BL,0UL},{0xA1L,0UL,0xECL,0xA1L,0x2BL,0x2BL},{0x79L,0UL,0UL,0x79L,0x2BL,0xECL},{0xC7L,0UL,0x2BL,0xC7L,0x2BL,0UL},{0xA1L,0UL,0xECL,0xA1L,0x2BL,0x2BL},{0x79L,0UL,0UL,0x79L,0UL,0x2BL}},{{0xA1L,0xECL,0UL,0xA1L,0UL,0xECL},{0x79L,0xECL,0x2BL,0x79L,0UL,0UL},{0xC7L,0xECL,0xECL,0xC7L,0UL,0x2BL},{0xA1L,0xECL,0UL,0xA1L,0UL,0xECL},{0x79L,0xECL,0x2BL,0x79L,0UL,0UL},{0xC7L,0xECL,0xECL,0xC7L,0UL,0x2BL}},{{0xA1L,0xECL,0UL,0xA1L,0UL,0xECL},{0x79L,0xECL,0x2BL,0x79L,0UL,0UL},{0xC7L,0xECL,0xECL,0xC7L,0UL,0x2BL},{0xA1L,0xECL,0UL,0xA1L,0UL,0xECL},{0x79L,0xECL,0x2BL,0x79L,0UL,0UL},{0xC7L,0xECL,0xECL,0xC7L,0UL,0x2BL}},{{0xA1L,0xECL,0UL,0xA1L,0UL,0xECL},{0x79L,0xECL,0x2BL,0x79L,0UL,0UL},{0xC7L,0xECL,0xECL,0xC7L,0UL,0x2BL},{0xA1L,0xECL,0UL,0xECL,0x1FL,0xFFL},{0x2BL,0xFFL,1UL,0x2BL,0x1FL,0x1FL},{0UL,0xFFL,0xFFL,0UL,0x1FL,1UL}},{{0xECL,0xFFL,0x1FL,0xECL,0x1FL,0xFFL},{0x2BL,0xFFL,1UL,0x2BL,0x1FL,0x1FL},{0UL,0xFFL,0xFFL,0UL,0x1FL,1UL},{0xECL,0xFFL,0x1FL,0xECL,0x1FL,0xFFL},{0x2BL,0xFFL,1UL,0x2BL,0x1FL,0x1FL},{0UL,0xFFL,0xFFL,0UL,0x1FL,1UL}},{{0xECL,0xFFL,0x1FL,0xECL,0x1FL,0xFFL},{0x2BL,0xFFL,1UL,0x2BL,0x1FL,0x1FL},{0UL,0xFFL,0xFFL,0UL,0x1FL,1UL},{0xECL,0xFFL,0x1FL,0xECL,0x1FL,0xFFL},{0x2BL,0xFFL,1UL,0x2BL,0x1FL,0x1FL},{0UL,0xFFL,0xFFL,0UL,0x1FL,1UL}},{{0xECL,0xFFL,0x1FL,0xECL,0x1FL,0xFFL},{0x2BL,0xFFL,0x1FL,0UL,0xFFL,0xFFL},{0xECL,1UL,1UL,0xECL,0xFFL,0x1FL},{0x2BL,1UL,0xFFL,0x2BL,0xFFL,1UL},{0UL,1UL,0x1FL,0UL,0xFFL,0xFFL},{0xECL,1UL,1UL,0xECL,0xFFL,0x1FL}}};
static int g_1492 = 0x0A438B31L;
static union U3 g_1506 = {1L};
static unsigned char g_1513[4] = {0x24L,0x24L,0x24L,0x24L};



static unsigned short func_1(void);
static short func_4(unsigned p_5, union U3 p_6);
static union U3 func_8(union U3 p_9, struct S1 p_10, union U2 p_11);
static union U3 func_12(unsigned p_13);
static int func_27(unsigned p_28, struct S1 p_29, unsigned char p_30, unsigned p_31);
static unsigned func_34(unsigned short p_35, unsigned p_36, struct S0 p_37);
static union U3 func_41(int p_42, struct S1 p_43, unsigned p_44, struct S0 p_45, short p_46);
static struct S1 func_49(union U2 p_50, unsigned short p_51, struct S0 p_52);
static union U2 func_53(union U2 p_54, union U3 p_55, unsigned char p_56, unsigned p_57, char p_58);
static union U3 func_60(union U3 p_61, struct S0 p_62, int p_63, char p_64, int p_65);
static unsigned short func_1(void)
{
    unsigned short l_7 = 0xF495L;
    unsigned l_20 = 0x8953526CL;
    short l_24 = 1L;
    int l_40[7];
    struct S1 l_47 = {-0,14234,1400,11449,-3};
    union U3 l_1429 = {1L};
    struct S0 l_1441 = {14,2978,43,0x98L,375,609,0,8,1,0};
    short l_1457 = 0xC0E7L;
    union U2 l_1462 = {4294967295UL};
    unsigned char l_1491 = 0UL;
    char l_1532 = 2L;
    unsigned l_1570 = 0x6B5A0D43L;
    unsigned short l_1571 = 0x338BL;
    int i;
    for (i = 0; i < 7; i++)
        l_40[i] = 1L;
    l_47 = ((safe_sub_func_int32_t_s_s((l_40[1] = (func_4(l_7, (l_1429 = func_8(func_12((safe_div_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((safe_div_func_int8_t_s_s(l_20, (l_24 = (safe_lshift_func_uint8_t_u_u(g_23, 2))))) >= g_23), ((safe_div_func_int16_t_s_s((+(4L && func_27(((g_33[6][1][1] = (g_32 = 0xBC6200D4L)) , func_34(l_7, (safe_mod_func_int16_t_s_s((g_59.f1 = (((((l_40[0] = g_33[2][0][0]) > (func_41((l_7 , l_7), l_47, g_32, g_48, l_47.f1) , g_414[2].f4)) ^ l_47.f2) < g_553) >= g_23)), l_47.f3)), g_554[0])), l_47, l_47.f4, g_554[0].f6))), g_1125)) || l_40[0]))) , 0xA3L), 255UL))), l_47, g_1296))) <= 0x6C85L)), 0x68FBF59DL)) , g_91);

                    if ((safe_rshift_func_uint8_t_u_u(l_1429.f1, 4)))
    {
        int l_1433 = 1L;
        return l_1433;
    }
    else
    {
        unsigned l_1440 = 2UL;
        int l_1451 = 0L;
        unsigned l_1482 = 0UL;
        struct S0 l_1494 = {16,15317,134,0xD4L,-915,618,0,24,4,0};
        struct S1 l_1514 = {-12,19613,11896,272,0};
        union U3 l_1521 = {0x1D9D18F8L};
        struct S0 l_1552 = {1,3566,134,0x51L,-269,871,0,20,-4,-0};
        int l_1559 = (-9L);
        for (g_501.f1 = 5; (g_501.f1 <= (-19)); g_501.f1 = safe_sub_func_uint32_t_u_u(g_501.f1, 1))
        {
            unsigned l_1448 = 0x6A427A4FL;
            int l_1449 = (-1L);
            struct S0 l_1450 = {2,9161,62,0xCFL,2169,-782,1,4,3,-0};
            unsigned char l_1452 = 255UL;
            unsigned char l_1490[3][10] = {{246UL,246UL,246UL,246UL,246UL,246UL,246UL,246UL,246UL,246UL},{246UL,246UL,246UL,246UL,246UL,246UL,246UL,246UL,246UL,246UL},{246UL,246UL,246UL,246UL,246UL,246UL,246UL,246UL,246UL,246UL}};
            union U3 l_1524 = {0x98B8B1F1L};
            union U2 l_1528 = {4294967295UL};
            struct S0 l_1551 = {6,14249,45,0x24L,1425,-568,1,10,3,0};
            int i, j;
            if (g_1238[1].f6)
                break;
            g_554[0].f8 = (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((l_1452 = ((((g_91 = func_49(g_59, g_554[0].f0, g_1238[1])) , g_268) >= (g_414[2].f5 = l_1440)) <= (l_1441 , func_34((g_33[4][1][3] = ((l_1451 = (g_118 = (g_1430[3][5][5] = func_34((safe_lshift_func_int16_t_s_u(((l_1448 = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(func_4(g_1238[1].f5, g_501), 5)), l_1441.f9))) >= g_501.f2), l_1449)), l_1441.f9, l_1450)))) | g_553)), l_1450.f7, l_1450)))) , l_40[0]), g_1363)), g_1238[1].f4));
            if (((safe_mod_func_uint8_t_u_u(((((g_1238[1].f1 && l_1450.f3) && 5L) != (g_1430[2][3][1] = (5L == g_554[0].f9))) != (safe_lshift_func_int16_t_s_u((l_1450.f2 && (l_1457 ^ (((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((5UL && 0xB3A39118L), l_1440)), l_1450.f1)) >= l_47.f0) , l_1450.f4))), g_427[0].f2))), 255UL)) != g_554[0].f8))
            {
                unsigned char l_1467 = 1UL;
                union U2 l_1477[2][5] = {{{1UL},{4294967286UL},{1UL},{1UL},{4294967286UL}},{{4294967286UL},{1UL},{1UL},{4294967286UL},{1UL}}};
                int l_1483 = 0x1423250EL;
                char l_1489 = 0xD9L;
                unsigned char l_1493[3][4][9] = {{{254UL,254UL,0x18L,254UL,254UL,255UL,254UL,0x1FL,1UL},{254UL,255UL,0x18L,0x1FL,255UL,1UL,255UL,0x1FL,0x18L},{254UL,254UL,1UL,0x1FL,254UL,255UL,0xDFL,0xA8L,252UL},{0x7CL,0xBFL,254UL,0xA8L,0xA8L,254UL,0xBFL,0x7CL,254UL}},{{0x7CL,0xA8L,254UL,0x7CL,0xBFL,254UL,0xA8L,0xA8L,254UL},{0xDFL,0xA8L,252UL,0xA8L,0xDFL,255UL,0xA8L,0UL,254UL},{0xA8L,0xBFL,252UL,0UL,0xBFL,254UL,0xBFL,0UL,252UL},{0xDFL,0xDFL,254UL,0UL,0xA8L,255UL,0xDFL,0xA8L,252UL}},{{0x7CL,0xBFL,254UL,0xA8L,0xA8L,254UL,0xBFL,0x7CL,254UL},{0x7CL,0xA8L,254UL,0x7CL,0xBFL,254UL,0xA8L,0xA8L,254UL},{0xDFL,0xA8L,252UL,0xA8L,0xDFL,255UL,0xA8L,0UL,254UL},{0xA8L,0xBFL,252UL,0UL,0xBFL,254UL,0xBFL,0UL,252UL}}};
                unsigned l_1520[7] = {4294967287UL,4294967287UL,0x5EB5D908L,4294967287UL,4294967287UL,0x5EB5D908L,4294967287UL};
                int i, j, k;
                g_91 = func_49(l_1462, g_553, g_554[0]);
                for (g_1386 = 0; (g_1386 <= 3); g_1386 += 1)
                {
                    union U2 l_1476 = {0xBB6DAA38L};
                    union U3 l_1486 = {3L};
                    int i;
                    l_1449 = (safe_add_func_int32_t_s_s(6L, (func_34(l_1450.f7, ((safe_add_func_int16_t_s_s((g_1296 , (l_1467 < (g_554[0].f8 = 0xB7944405L))), ((l_1467 , 7L) == (l_1451 < 65535UL)))) ^ l_1451), g_1238[(g_1386 + 1)]) != g_554[0].f9)));
                    for (l_20 = 0; (l_20 <= 5); l_20 += 1)
                    {
                        int i, j, k;
                        l_1451 = (g_1238[g_1386] , g_33[(g_1386 + 5)][g_1386][g_1386]);
                    }
                    for (g_23 = 8; (g_23 >= 1); g_23 -= 1)
                    {
                        int i, j, k;
                        l_1451 = (g_33[(g_1386 + 2)][g_1386][(g_1386 + 1)] & ((safe_rshift_func_int8_t_s_u(l_1450.f1, 1)) , ((safe_sub_func_uint32_t_u_u(g_91.f0, l_1467)) != g_279[2][1][5])));
                        g_48.f5 = 0x7BA4C79CL;
                        g_283[3][3][6] = l_1450.f3;
                    }
                    if (((safe_mul_func_uint16_t_u_u((l_1450.f3 || ((g_1238[(g_1386 + 1)].f7 & (safe_div_func_uint8_t_u_u((l_1467 , 247UL), g_554[0].f4))) ^ 0xF3D9L)), (l_1483 = ((l_1477[1][3] = l_1476) , ((safe_add_func_uint32_t_u_u(g_126.f2, (safe_sub_func_int16_t_s_s((g_59.f1 = l_20), g_1238[1].f9)))) > l_1482))))) , 0x7E6FC492L))
                    {
                        int i;
                        g_554[g_1386] = g_1238[(g_1386 + 3)];
                        l_1483 = g_414[2].f8;
                        l_1490[1][2] = ((safe_div_func_uint16_t_u_u(func_4(l_1462.f1, l_1486), (g_1238[(g_1386 + 1)].f9 = g_427[0].f2))) || (safe_lshift_func_uint16_t_u_s(g_1238[1].f0, func_34((func_4((0xF7L && (g_268 >= l_1489)), g_126) || l_1441.f0), g_48.f5, g_554[0]))));
                    }
                    else
                    {
                        return g_126.f1;
                    }

                                        for (l_1451 = 0; (l_1451 <= 3); l_1451 += 1)
                    {
                        return l_1477[1][3].f3;
                    }
                }
                l_1451 = 0L;
                if ((l_1491 <= (0L ^ (0x1A0FL != (0xD63B3411L ^ ((g_344 = ((func_34(g_1492, l_1493[1][3][2], g_48) > (l_1451 = (l_1483 = (g_1386 = (g_414[2].f6 || 255UL))))) ^ l_1441.f2)) && l_1441.f1))))))
                {
                    char l_1497 = (-1L);
                    l_1494 = g_414[1];
                    g_1238[1].f4 = func_4((g_414[2].f7 , (safe_rshift_func_int16_t_s_u((g_23 == (func_34(l_1497, g_553, l_1441) < g_537)), 12))), g_501);
                    if (l_1493[2][2][2])
                        continue;
                    for (g_126.f3 = 7; (g_126.f3 <= 11); g_126.f3 = safe_add_func_int32_t_s_s(g_126.f3, 8))
                    {
                        g_91 = g_91;
                        g_283[6][3][0] = ((l_1494.f7 | g_48.f1) > (l_1441.f8 = (safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(g_344, g_537)), g_91.f2)), l_47.f0))));
                        g_1513[2] = (func_4(l_1493[1][1][8], (g_126 , (g_1506 = g_126))) , (g_1238[1].f8 = (g_501 , (safe_lshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(0x07FDL, ((safe_lshift_func_uint8_t_u_u(l_47.f2, ((((0x103CL || l_47.f3) >= l_47.f0) > g_554[0].f3) < g_554[0].f2))) , l_1483))) || (-7L)), g_126.f2)))));

                                                if (l_1494.f1)
                            continue;
                    }

                                    }
                else
                {
                    struct S1 l_1515[10] = {{7,7185,14994,13845,3},{7,7185,14994,13845,3},{7,7185,14994,13845,3},{7,7185,14994,13845,3},{7,7185,14994,13845,3},{7,7185,14994,13845,3},{7,7185,14994,13845,3},{7,7185,14994,13845,3},{7,7185,14994,13845,3},{7,7185,14994,13845,3}};
                    int i;
                    l_1515[5] = l_1514;
                    g_91.f2 = (((safe_rshift_func_int16_t_s_s(g_1238[1].f9, 12)) || (l_1494.f0 <= (~func_34((l_1483 , (l_1521 , g_414[2].f7)), g_414[2].f6, l_1450)))) == 6UL);
                    l_1515[5].f2 = (-1L);
                    g_91.f2 = (g_554[0].f8 = (safe_unary_minus_func_uint16_t_u((l_1515[5].f1 > 1UL))));
                }
            }
            else
            {
                int l_1529[8][5][6] = {{{3L,1L,0xFD632605L,0xFD632605L,1L,3L},{0xFD632605L,1L,3L,0xB3DFB990L,0x9B1068D7L,0L},{0L,(-1L),0xD756B5B1L,0xB9D1957BL,0L,0xEB5D8356L},{0L,2L,0xB9D1957BL,0xB3DFB990L,0x85AB95B9L,(-5L)},{0xFD632605L,0x9B1068D7L,0xA37C12A3L,0xFD632605L,4L,(-5L)}},{{3L,0x85AB95B9L,0xB9D1957BL,0xEB5D8356L,3L,0xEB5D8356L},{0xD756B5B1L,0xC966DAFEL,0xD756B5B1L,1L,3L,0L},{0xB9D1957BL,0x85AB95B9L,3L,0xD756B5B1L,4L,3L},{0xA37C12A3L,0x9B1068D7L,0xFD632605L,0xD756B5B1L,0x85AB95B9L,1L},{0xB9D1957BL,2L,0L,1L,0L,0xFD632605L}},{{0xD756B5B1L,(-1L),0L,0xEB5D8356L,0x9B1068D7L,1L},{3L,1L,0xFD632605L,0xFD632605L,1L,3L},{0xFD632605L,1L,3L,0xB3DFB990L,0x9B1068D7L,0L},{0L,(-1L),0xD756B5B1L,0xB9D1957BL,0L,0xEB5D8356L},{0L,2L,0xB9D1957BL,0xB3DFB990L,0x85AB95B9L,3L}},{{1L,0xEB5D8356L,(-4L),1L,0L,3L},{0x5000313BL,(-1L),0L,0x9EB23B61L,0xB9D1957BL,0x9EB23B61L},{0x35210176L,1L,0x35210176L,(-1L),0xB9D1957BL,(-1L)},{0L,(-1L),0x5000313BL,0x35210176L,0L,0x5000313BL},{(-4L),0xEB5D8356L,1L,0x35210176L,(-1L),(-1L)}},{{0L,0xD756B5B1L,(-1L),(-1L),0xB3DFB990L,1L},{0x35210176L,0xA37C12A3L,(-1L),0x9EB23B61L,0xEB5D8356L,(-1L)},{0x5000313BL,3L,1L,1L,3L,0x5000313BL},{1L,3L,0x5000313BL,0L,0xEB5D8356L,(-1L)},{(-1L),0xA37C12A3L,0x35210176L,0L,0xB3DFB990L,0x9EB23B61L}},{{(-1L),0xD756B5B1L,0L,0L,(-1L),3L},{1L,0xEB5D8356L,(-4L),1L,0L,3L},{0x5000313BL,(-1L),0L,0x9EB23B61L,0xB9D1957BL,0x9EB23B61L},{0x35210176L,1L,0x35210176L,(-1L),0xB9D1957BL,(-1L)},{0L,(-1L),0x5000313BL,0x35210176L,0L,0x5000313BL}},{{(-4L),0xEB5D8356L,1L,0x35210176L,(-1L),0L},{3L,0xA37C12A3L,0x9EB23B61L,0L,3L,0L},{(-4L),(-1L),0x9EB23B61L,(-1L),1L,0L},{1L,0xFD632605L,0L,0L,0xFD632605L,1L},{0L,0xFD632605L,1L,0x5000313BL,1L,0x9EB23B61L}},{{0x9EB23B61L,(-1L),(-4L),3L,3L,(-1L)},{0x9EB23B61L,0xA37C12A3L,3L,0x5000313BL,0L,0x35210176L},{0L,1L,0x5A681D94L,0L,0xEB5D8356L,0x35210176L},{1L,0L,3L,(-1L),(-5L),(-1L)},{(-4L),0xB3DFB990L,(-4L),0L,(-5L),0x9EB23B61L}}};
                union U3 l_1530 = {1L};
                struct S0 l_1531 = {16,14069,26,0xE6L,-1184,489,1,2,-3,0};
                int i, j, k;
                l_1531.f5 = (~(((((((0UL > (((safe_div_func_uint16_t_u_u((l_40[0] = ((l_40[0] & (func_53(g_1296, g_501, l_1494.f3, g_119, g_1513[3]) , 0x2EL)) != g_279[2][1][5])), g_414[2].f0)) == (-7L)) > 0x0EL)) & g_414[2].f8) < g_1035) && 0UL) <= l_1494.f9) > g_554[0].f3) == l_1441.f0));
                l_40[3] = (-1L);
                l_1531.f8 = ((g_1238[1].f1 == (((safe_rshift_func_int8_t_s_u((g_344 = g_1035), (g_829 = l_1529[1][4][0]))) != (safe_add_func_int16_t_s_s(l_1531.f7, (safe_mod_func_int8_t_s_s((l_1531.f4 = l_1528.f0), (((safe_mod_func_int16_t_s_s(func_34(l_1462.f1, (safe_sub_func_int8_t_s_s((((l_1450.f3 || (g_1513[2] = (func_34((safe_div_func_int32_t_s_s(((g_1238[1].f3 = (l_1491 >= (((l_1462.f1 != g_414[2].f3) || l_1450.f2) <= l_1524.f3))) ^ 1L), g_126.f2)), l_1440, l_1450) != g_1506.f2))) < g_268) > 0x88L), 0xE0L)), g_414[4]), l_1457)) != l_1441.f4) , l_1429.f1)))))) != l_1450.f3)) >= g_48.f7);
                for (l_1441.f3 = 0; (l_1441.f3 != 14); l_1441.f3++)
                {
                    if (l_1531.f9)
                        break;
                    for (g_1296.f3 = 0; (g_1296.f3 <= 0); g_1296.f3 += 1)
                    {
                        int i, j, k;
                        return g_33[(g_1296.f3 + 1)][(g_1296.f3 + 3)][(g_1296.f3 + 1)];
                    }

                                    }
            }
            if (((((((l_1450.f9 = l_1449) > (l_1494.f4 = g_1238[1].f8)) & ((l_1521.f0 = (g_1296.f2 <= (l_1528.f1 | (safe_lshift_func_int16_t_s_u(((safe_div_func_int32_t_s_s(func_4(g_554[0].f8, g_1506), g_553)) ^ 2UL), l_20))))) , g_1363)) == l_1491) == g_23) != 0xE0L))
            {
                char l_1553[5][5][1] = {{{5L},{(-1L)},{5L},{(-1L)},{5L}},{{(-1L)},{5L},{(-1L)},{5L},{(-1L)}},{{5L},{(-1L)},{5L},{(-1L)},{5L}},{{(-1L)},{5L},{(-1L)},{5L},{(-1L)}},{{5L},{(-1L)},{5L},{(-1L)},{5L}}};
                int i, j, k;
                g_554[0].f4 = func_34((((g_91.f4 | (g_1513[2] == 1L)) == (func_34(((g_1386 , l_1553[4][2][0]) , (safe_sub_func_int8_t_s_s(((g_414[2].f7 = ((((-4L) == ((+(safe_sub_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s((l_1462 , ((g_829 || (l_1552.f9 = ((l_1521.f2 || g_554[0].f4) != l_1559))) == 0x2FL)))) , g_119), l_1494.f3))) || 0UL)) & l_1553[4][2][0]) >= g_118)) >= g_414[2].f3), 0x69L))), l_1440, l_1494) >= g_414[2].f6)) != l_1551.f9), l_1528.f2, l_1441);
            }
            else
            {
                l_47.f4 = ((~g_554[0].f7) && ((((((safe_lshift_func_uint8_t_u_s((((l_1524 = g_126) , 2L) <= l_1429.f1), 1)) <= (safe_sub_func_uint16_t_u_u(g_1430[3][5][5], 0x9DE1L))) , g_279[2][1][5]) ^ g_1238[1].f3) != func_4(g_1296.f3, g_501)) & 0x4017L));

                            }

                    }

            }

        g_48.f5 = (l_1571 = (l_47.f0 = ((safe_add_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((g_1125 | l_1532), l_1532)), g_414[2].f3)) == 0x83L), l_1441.f0)) == l_1441.f1)));
    return g_1238[1].f9;
}







static short func_4(unsigned p_5, union U3 p_6)
{
    return g_1430[3][5][5];
}







static union U3 func_8(union U3 p_9, struct S1 p_10, union U2 p_11)
{
    unsigned short l_1308 = 6UL;
    struct S0 l_1427 = {3,11222,130,0x2DL,1208,982,0,10,0,0};
    union U3 l_1428 = {0x6FD23140L};
    for (g_501.f2 = 7; (g_501.f2 > 2); g_501.f2--)
    {
        char l_1307[9] = {5L,5L,5L,5L,5L,5L,5L,5L,5L};
        struct S0 l_1331 = {2,2693,1,0L,2072,803,1,14,-2,0};
        unsigned char l_1369[10] = {0x15L,0x85L,0x15L,0x85L,0x15L,0x85L,0x15L,0x85L,0x15L,0x85L};
        int i;
    }

    l_1427 = g_554[0];
    return l_1428;

    }







static union U3 func_12(unsigned p_13)
{
    unsigned l_1198 = 1UL;
    int l_1205 = 0xC63CEF3EL;
    int l_1206[2];
    unsigned l_1207 = 0x799286EDL;
    int l_1208 = 1L;
    unsigned char l_1209 = 0x85L;
    int l_1210 = 0x1750BF91L;
    struct S0 l_1213 = {21,2550,142,-1L,2295,-693,0,10,-2,0};
    union U3 l_1214 = {0L};
    unsigned l_1271 = 4294967292UL;
    struct S0 l_1277 = {18,16342,147,-1L,-2790,-565,1,29,-0,0};
    unsigned l_1278 = 0UL;
    union U3 l_1295 = {0x5055374EL};
    int i;
    for (i = 0; i < 2; i++)
        l_1206[i] = 1L;
    l_1210 = ((p_13 >= (safe_lshift_func_int8_t_s_s(l_1198, ((safe_lshift_func_int8_t_s_u(((((g_1035 & (g_501.f1 = g_279[2][1][5])) | (-1L)) , (safe_mod_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(((((l_1208 = ((l_1206[0] = (l_1205 = p_13)) || func_34((l_1207 ^ g_48.f4), p_13, g_554[3]))) & g_117) & l_1207) , p_13), g_537)) < 0x6C4DL) & l_1198), g_427[0].f2))) & l_1207), 2)) < l_1209)))) ^ p_13);

    for (g_553 = 15; (g_553 == (-4)); --g_553)
    {
        l_1213 = g_554[4];
        return l_1214;

            }
    if (l_1214.f2)
    {
        unsigned l_1233 = 0x3CA3FEECL;
        int l_1236[1][4] = {{8L,8L,8L,8L}};
        int l_1252 = 1L;
        struct S0 l_1254 = {9,14838,28,0x89L,-609,199,1,28,-3,-0};
        struct S1 l_1276 = {-4,11294,2331,1899,6};
        struct S1 l_1279 = {12,18870,8122,3570,4};
        union U2 l_1292 = {1UL};
        int l_1293[5][5][2] = {{{0x0074614CL,0xC3E3808FL},{5L,(-1L)},{5L,0xC3E3808FL},{0x0074614CL,9L},{0xC3E3808FL,0x9F82D6A6L}},{{0x39D60093L,5L},{(-1L),9L},{9L,(-1L)},{5L,0x39D60093L},{0x9F82D6A6L,0xC3E3808FL}},{{9L,0x0074614CL},{0xC3E3808FL,5L},{(-1L),5L},{0xC3E3808FL,0x0074614CL},{9L,0xC3E3808FL}},{{0x9F82D6A6L,0x39D60093L},{5L,(-1L)},{9L,9L},{(-1L),5L},{0x39D60093L,0x9F82D6A6L}},{{0xC3E3808FL,9L},{0x0074614CL,0xC3E3808FL},{5L,(-1L)},{5L,0xC3E3808FL},{0x0074614CL,9L}}};
        int i, j, k;
        for (g_126.f2 = 2; (g_126.f2 > (-2)); g_126.f2--)
        {
            struct S0 l_1222 = {16,3489,83,0x04L,-1540,-100,0,18,-4,-0};
            if (g_91.f1)
                break;
            for (g_59.f0 = (-16); (g_59.f0 != 28); g_59.f0++)
            {
                char l_1221 = (-1L);
                int l_1253 = 0x0F3334E9L;
                for (g_501.f1 = 0; (g_501.f1 != (-1)); g_501.f1 = safe_sub_func_uint16_t_u_u(g_501.f1, 4))
                {
                    short l_1237 = 0x9E93L;
                    int l_1249 = (-1L);
                    union U2 l_1250 = {4294967294UL};
                    l_1213 = (l_1221 , l_1222);
                    l_1222.f9 = (safe_sub_func_int32_t_s_s((func_34(((6L || ((safe_sub_func_int8_t_s_s(func_34(g_554[0].f1, (safe_lshift_func_int16_t_s_u((safe_mul_func_uint32_t_u_u((g_48.f1 = (((safe_add_func_uint8_t_u_u(func_34(l_1233, func_34(((g_91.f0 = (l_1222.f9 != 0x05L)) && ((safe_sub_func_uint16_t_u_u((((((l_1236[0][1] , (4294967295UL != (l_1237 , (1L | 0UL)))) >= g_283[6][3][0]) , l_1213.f8) >= g_554[0].f3) || l_1198), l_1222.f0)) >= p_13)), l_1221, l_1222), l_1213), (-3L))) == g_554[0].f3) < 1UL)), 0UL)), g_427[0].f2)), l_1222), 0xF2L)) < 0x62A2L)) , 65535UL), l_1221, g_1238[1]) || g_33[9][0][1]), g_414[2].f9));
                    for (l_1198 = 0; (l_1198 != 36); l_1198 = safe_add_func_uint16_t_u_u(l_1198, 2))
                    {
                        char l_1251 = 1L;
                        g_1238[1].f8 = (0x27996BBBL < ((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((func_34(p_13, (0x76L > 0L), g_414[3]) & ((l_1253 = (l_1252 = (l_1214.f0 = ((safe_sub_func_uint32_t_u_u((((safe_div_func_int8_t_s_s((l_1249 = g_48.f5), (((func_49(l_1250, ((g_537 || g_119) & 1UL), l_1222) , l_1251) == p_13) ^ 0x42A0L))) | g_344) >= l_1222.f8), 0xE8E7E6E8L)) | p_13)))) >= 0x562715C4L)), 3)), l_1207)) != l_1208));
                    }
                    l_1213 = l_1254;
                }
                g_91.f0 = p_13;
                if (p_13)
                    break;
            }

            g_91 = g_91;
            for (g_59.f1 = 6; (g_59.f1 != 2); g_59.f1 = safe_sub_func_int16_t_s_s(g_59.f1, 2))
            {
                union U3 l_1257 = {-1L};
                int l_1260 = 9L;
                l_1213.f4 = ((~(+func_34((g_33[6][0][0] = (l_1257 , (g_414[2].f0 >= 5L))), (p_13 , (safe_div_func_uint32_t_u_u((p_13 = g_118), (l_1260 = l_1222.f1)))), l_1213))) & ((safe_sub_func_uint32_t_u_u((g_554[0].f1 = ((0xFBDF03E4L <= g_1238[1].f6) < l_1257.f1)), l_1213.f9)) == g_1125));
                l_1252 = (l_1222.f5 = l_1214.f3);
            }

        }

        l_1213.f5 = ((safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s(p_13, 0x9AE21EE2L)), g_414[2].f2)) & 0x53L), 0xD31C2014L)) < p_13);
        g_414[2].f4 = (safe_sub_func_uint32_t_u_u((l_1213.f4 = 0x57DD4CF5L), (l_1279.f4 = (l_1210 = ((safe_lshift_func_int8_t_s_u((l_1293[4][3][0] = (g_414[2].f7 > (((((l_1208 = (safe_div_func_int16_t_s_s(((((p_13 <= (((4294967290UL && 4294967295UL) || ((0x096EL >= (safe_mod_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s((func_34(((((0x5911D0FBL >= ((0xA18C84A1L && (l_1292 , g_48.f8)) && 1L)) == g_91.f3) && 0x0011L) , l_1278), g_414[2].f1, l_1277) | l_1276.f0), 0xA418L)) && p_13) != l_1213.f0), p_13))) >= l_1208)) >= 4UL)) , (-1L)) & 0x62L) > g_32), p_13))) , (-1L)) == l_1276.f2) >= 0x1F4FL) & p_13))), 5)) >= 0x3FL)))));
        for (g_126.f1 = 0; (g_126.f1 >= 0); g_126.f1 -= 1)
        {
            g_48.f9 = 0xD775436EL;
        }

    }
    else
    {
        union U3 l_1294 = {2L};
        return l_1294;

            }
    return l_1295;

    }







static int func_27(unsigned p_28, struct S1 p_29, unsigned char p_30, unsigned p_31)
{
    unsigned l_556 = 4294967295UL;
    struct S0 l_557 = {4,5659,61,-1L,2548,-464,0,24,1,-0};
    struct S1 l_632 = {9,15216,1451,1316,-1};
    union U3 l_661[3] = {{0x68709CF2L},{0x68709CF2L},{0x68709CF2L}};
    unsigned l_681 = 0x73A5EE64L;
    unsigned short l_684 = 0x1624L;
    unsigned char l_728 = 251UL;
    struct S1 l_734 = {12,7006,-9020,11612,-7};
    int l_771 = 0x892CBE12L;
    char l_889 = 0x82L;
    int l_896 = 9L;
    struct S0 l_949 = {5,9934,163,0x52L,-2170,497,0,10,-3,0};
    union U2 l_1020 = {0xDC543775L};
    short l_1025 = 0x4BE0L;
    unsigned short l_1090 = 0xD3C2L;
    char l_1099[3];
    unsigned l_1103 = 0UL;
    short l_1106 = 0L;
    unsigned l_1190 = 0UL;
    unsigned char l_1195 = 0xE1L;
    int i;
    for (i = 0; i < 3; i++)
        l_1099[i] = 0L;
    p_29.f0 = g_174;
    for (g_117 = 0; (g_117 <= 2); g_117 += 1)
    {
        unsigned short l_558 = 65535UL;
        unsigned l_587 = 0x81398702L;
        int l_602 = 0x695521AFL;
        int l_603 = 0xDAECFC51L;
        int l_604 = 9L;
        struct S0 l_631 = {1,6758,160,0x1DL,-2226,46,1,24,-3,0};
        int l_670 = (-5L);
        union U2 l_748 = {0x983059A6L};
        if (p_29.f4)
        {
            struct S0 l_559 = {21,6954,108,0x92L,-1249,116,0,0,-1,0};
            l_556 = 0xD662DE33L;
            g_554[5] = l_557;
            if (l_558)
                break;
            l_559 = l_557;
        }
        else
        {
            int l_586 = 0L;
            g_48.f5 = (4UL <= ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((g_118 , ((safe_lshift_func_uint8_t_u_s((g_59.f2 = 0x3AL), 6)) & g_48.f7)) , ((((safe_div_func_uint8_t_u_u((((254UL <= (p_30 = (safe_lshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(func_34((safe_sub_func_uint32_t_u_u(func_34(g_33[6][1][1], (p_29.f4 >= (safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s((0x8CFD1361L <= ((safe_mod_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s(l_557.f5, g_48.f3)) ^ 0x3DL) < 0x83B8FAF6L) || l_557.f8), g_554[0].f4)) || g_59.f2) ^ g_554[0].f3), 0x008FAE6FL)) && g_414[2].f1)), l_558)), l_586)), 3))), l_557), g_91.f3)), l_557.f0, g_48), l_558)) < g_48.f8), g_48.f3)))) >= l_558) & g_91.f2), 249UL)) ^ p_29.f0) , g_537) , l_587)), p_29.f2)), g_33[6][1][1])) , 0xBFAF507DL));
        }
        if ((((l_557.f5 , (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((l_604 = (l_587 || (l_603 = (safe_mod_func_int32_t_s_s(((l_602 = ((safe_div_func_int16_t_s_s(0xFE4FL, (safe_lshift_func_int8_t_s_u(((g_174 < (safe_rshift_func_uint16_t_u_u(0x0332L, (g_91 , func_34((p_29.f3 < func_34(g_414[2].f7, p_29.f2, l_557)), l_557.f4, g_414[8]))))) , p_29.f4), l_587)))) < 0xC792A47AL)) & g_48.f0), l_557.f5))))), p_29.f4)), l_558)), g_48.f4))) ^ (-5L)) && 0x76F1L))
        {
            char l_616 = (-10L);
            struct S0 l_630[7][6][1] = {{{{1,11336,12,-1L,-2489,-749,1,3,2,-0}},{{11,11615,77,-4L,-1751,863,1,14,-4,-0}},{{1,11336,12,-1L,-2489,-749,1,3,2,-0}},{{3,9260,28,1L,-1524,139,0,16,4,0}},{{2,7236,136,0x4BL,-1181,-374,1,5,-2,0}},{{3,9260,28,1L,-1524,139,0,16,4,0}}},{{{1,11336,12,-1L,-2489,-749,1,3,2,-0}},{{11,11615,77,-4L,-1751,863,1,14,-4,-0}},{{1,11336,12,-1L,-2489,-749,1,3,2,-0}},{{3,9260,28,1L,-1524,139,0,16,4,0}},{{2,7236,136,0x4BL,-1181,-374,1,5,-2,0}},{{3,9260,28,1L,-1524,139,0,16,4,0}}},{{{1,11336,12,-1L,-2489,-749,1,3,2,-0}},{{11,11615,77,-4L,-1751,863,1,14,-4,-0}},{{1,11336,12,-1L,-2489,-749,1,3,2,-0}},{{3,9260,28,1L,-1524,139,0,16,4,0}},{{2,7236,136,0x4BL,-1181,-374,1,5,-2,0}},{{3,9260,28,1L,-1524,139,0,16,4,0}}},{{{1,11336,12,-1L,-2489,-749,1,3,2,-0}},{{11,11615,77,-4L,-1751,863,1,14,-4,-0}},{{1,11336,12,-1L,-2489,-749,1,3,2,-0}},{{3,9260,28,1L,-1524,139,0,16,4,0}},{{2,7236,136,0x4BL,-1181,-374,1,5,-2,0}},{{3,9260,28,1L,-1524,139,0,16,4,0}}},{{{1,11336,12,-1L,-2489,-749,1,3,2,-0}},{{11,11615,77,-4L,-1751,863,1,14,-4,-0}},{{1,11336,12,-1L,-2489,-749,1,3,2,-0}},{{3,9260,28,1L,-1524,139,0,16,4,0}},{{2,7236,136,0x4BL,-1181,-374,1,5,-2,0}},{{3,9260,28,1L,-1524,139,0,16,4,0}}},{{{1,11336,12,-1L,-2489,-749,1,3,2,-0}},{{11,11615,77,-4L,-1751,863,1,14,-4,-0}},{{1,11336,12,-1L,-2489,-749,1,3,2,-0}},{{3,9260,28,1L,-1524,139,0,16,4,0}},{{2,7236,136,0x4BL,-1181,-374,1,5,-2,0}},{{3,9260,28,1L,-1524,139,0,16,4,0}}},{{{1,11336,12,-1L,-2489,-749,1,3,2,-0}},{{11,11615,77,-4L,-1751,863,1,14,-4,-0}},{{1,11336,12,-1L,-2489,-749,1,3,2,-0}},{{3,9260,28,1L,-1524,139,0,16,4,0}},{{2,7236,136,0x4BL,-1181,-374,1,5,-2,0}},{{3,9260,28,1L,-1524,139,0,16,4,0}}}};
            struct S1 l_662 = {-8,3248,6539,12200,-6};
            int i, j, k;
            for (g_119 = 0; (g_119 <= 3); g_119 += 1)
            {
                int l_629 = 0xA802CF01L;
                union U3 l_633 = {0xC6DF0AF8L};
                g_554[0] = g_414[9];
                for (p_30 = 0; (p_30 <= 3); p_30 += 1)
                {
                    int i, j, k;
                    l_616 = ((((g_279[(p_30 + 3)][g_117][g_119] = ((g_279[(g_117 + 3)][g_117][(g_119 + 2)] != ((safe_div_func_uint16_t_u_u((g_283[(g_119 + 3)][g_119][(g_119 + 5)] == ((safe_sub_func_int16_t_s_s((g_174 = (0xB6L | (safe_add_func_uint16_t_u_u(0x0001L, g_48.f3)))), (safe_add_func_int32_t_s_s(l_557.f9, (g_501.f1 > ((g_414[2].f1 = (safe_add_func_uint8_t_u_u(((((safe_unary_minus_func_int32_t_s(0L)) && p_28) , 0x2D98E964L) <= 0x1AC9E138L), g_279[(g_117 + 3)][g_117][(g_119 + 2)]))) < p_29.f3)))))) ^ 8L)), g_554[0].f0)) , 0UL)) == g_554[0].f0)) && 0xC3FEL) , 4294967292UL) , g_553);
                    if (((safe_mod_func_uint32_t_u_u(0x6C2CCC1DL, ((p_29.f4 | (g_414[2].f3 = (((safe_sub_func_uint8_t_u_u(0x06L, g_48.f8)) , (p_29.f1 = ((func_34((safe_mod_func_int32_t_s_s(g_283[(g_119 + 3)][g_119][(g_119 + 5)], l_604)), g_279[(p_30 + 3)][g_117][g_119], ((safe_div_func_int8_t_s_s(((func_34((safe_mod_func_int32_t_s_s(p_30, (safe_sub_func_int8_t_s_s((0xDC8EL > l_557.f4), l_629)))), g_48.f9, l_630[2][0][0]) & 2L) == (-1L)), g_279[(g_117 + 3)][g_117][(g_119 + 2)])) , l_631)) ^ 0L) , p_30))) == g_414[2].f1))) , g_554[0].f3))) >= 0UL))
                    {
                        p_29.f0 = l_631.f9;
                        l_632 = (g_91 = p_29);
                        if (g_283[4][2][4])
                            continue;
                    }
                    else
                    {
                        struct S0 l_646 = {18,5615,169,0x8CL,-1284,737,1,0,4,-0};
                        g_126.f0 = ((l_633 , (g_283[6][3][0] == ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s((0UL != 0L), g_279[2][1][5])), l_630[2][0][0].f2)), ((safe_div_func_int32_t_s_s(l_633.f1, (safe_rshift_func_uint16_t_u_u(p_29.f3, ((((safe_rshift_func_int8_t_s_u((p_29.f1 && 4294967295UL), 1)) | 5UL) < p_30) ^ g_48.f7))))) , 1UL))) > 1UL))) & l_633.f0);

                                                l_646 = l_631;
                        p_29.f0 = (1L && ((safe_sub_func_uint8_t_u_u(g_283[(g_119 + 3)][g_119][(g_119 + 5)], (safe_div_func_uint8_t_u_u(func_34(l_630[2][0][0].f7, g_554[0].f3, ((g_414[2] , (safe_div_func_uint16_t_u_u(((p_28 || p_29.f1) != (g_174 = (func_34((!g_174), ((safe_mod_func_uint16_t_u_u((g_91.f0 != 7UL), l_646.f4)) , l_557.f4), l_557) | 1L))), p_29.f3))) , l_557)), p_31)))) | p_31));
                        l_646.f5 = ((l_631.f8 , (safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(g_554[0].f3, g_91.f1)), (safe_add_func_int8_t_s_s((0UL <= ((p_29.f2 & g_553) , ((p_29.f1 < 0xB1L) , func_34(((g_427[0] , l_661[0]) , p_29.f0), p_29.f0, l_646)))), l_630[2][0][0].f3))))) != l_633.f0);
                    }
                    g_554[0] = g_48;
                }
            }
            p_29 = l_662;
            for (p_30 = 0; (p_30 <= 2); p_30 += 1)
            {
                int l_663[8] = {0x38C9DB52L,(-1L),(-1L),0x38C9DB52L,(-1L),(-1L),0x38C9DB52L,(-1L)};
                int i;
                if (func_34(l_557.f6, l_663[5], l_631))
                {
                    g_537 = (g_554[0].f2 < (safe_add_func_uint16_t_u_u(65528UL, (l_662.f2 & g_126.f2))));
                }
                else
                {
                    for (l_557.f3 = 2; (l_557.f3 >= 0); l_557.f3 -= 1)
                    {
                        g_91 = l_632;
                    }
                    for (g_126.f3 = 0; (g_126.f3 <= 2); g_126.f3 += 1)
                    {
                        int i, j, k;
                        if (g_279[(g_117 + 5)][g_117][(p_30 + 2)])
                            break;
                        return p_29.f1;
                    }

                                        p_29 = p_29;
                }
                if ((l_663[7] = (safe_div_func_int16_t_s_s((~((g_48.f7 == (l_670 != g_48.f3)) > ((((safe_rshift_func_int16_t_s_s((l_631.f5 != (safe_add_func_int8_t_s_s((g_48.f7 , l_557.f1), p_29.f2))), 5)) == g_126.f1) && ((l_661[0].f0 = (safe_rshift_func_uint16_t_u_u(func_34((p_30 , 0x6CE0L), p_29.f4, g_48), 8))) , l_661[0].f2)) || 65529UL))), g_91.f4))))
                {
                    union U3 l_679 = {7L};
                    short l_680 = 0xC9C7L;
                    l_663[5] = (g_537 < (((((safe_sub_func_int32_t_s_s((l_679 , p_29.f4), (g_283[6][3][0] ^ 0x4157F297L))) != ((g_554[0].f4 = (p_29.f1 < g_414[2].f6)) | l_663[5])) ^ (((p_29.f3 = p_29.f2) > l_679.f0) , l_680)) != l_631.f9) | l_631.f0));
                }
                else
                {
                    for (l_556 = 0; (l_556 <= 2); l_556 += 1)
                    {
                        g_91 = g_91;
                        return p_31;
                    }
                    return l_681;
                }
                for (g_32 = 0; (g_32 <= 2); g_32 += 1)
                {
                    short l_690[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_690[i] = 0xF0F7L;
                    if ((safe_sub_func_int16_t_s_s(g_554[0].f3, (g_554[0].f2 >= (l_663[2] != (g_268 <= l_684))))))
                    {
                        char l_685 = 0xE5L;
                        l_685 = p_31;
                        if (g_174)
                            continue;
                        return g_283[6][3][2];
                    }
                    else
                    {
                        short l_688[10];
                        int l_689 = 0xBF9E9DE2L;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_688[i] = 5L;
                        g_537 = (safe_add_func_uint32_t_u_u(((g_118 = func_34(g_23, (l_688[8] = p_31), l_557)) > l_631.f9), (l_689 == l_662.f1)));
                        if (l_690[1])
                            continue;
                    }
                    p_29.f4 = g_59.f2;
                }
            }
        }
        else
        {
            short l_696[10][3][1] = {{{1L},{4L},{1L}},{{4L},{1L},{5L}},{{1L},{4L},{1L}},{{4L},{1L},{5L}},{{1L},{4L},{1L}},{{4L},{1L},{5L}},{{1L},{4L},{1L}},{{4L},{1L},{5L}},{{1L},{4L},{1L}},{{4L},{1L},{5L}}};
            struct S0 l_698 = {4,13752,4,8L,-1738,-462,1,4,-1,-0};
            int i, j, k;
            for (g_268 = 0; (g_268 <= 2); g_268 += 1)
            {
                int l_693 = (-2L);
                struct S0 l_697 = {19,3137,173,-1L,1292,-660,0,13,0,-0};
                for (g_553 = 0; (g_553 <= 2); g_553 += 1)
                {
                    return g_48.f2;
                }
                if ((safe_lshift_func_uint16_t_u_s(func_34(l_693, (((((l_631 , l_631.f8) , (safe_rshift_func_uint8_t_u_s(l_693, (l_696[6][2][0] , (l_697.f9 = ((((func_34(p_29.f3, (g_91 , p_29.f1), l_697) , 0x1CL) <= g_48.f9) != p_28) || 3L)))))) , p_29.f3) > p_30) , l_697.f8), l_698), g_91.f0)))
                {
                    int l_699 = (-2L);
                    for (g_537 = 2; (g_537 >= 0); g_537 -= 1)
                    {
                        l_699 = l_699;
                        if (g_554[0].f4)
                            continue;
                    }
                    g_283[6][3][0] = l_587;
                    for (l_631.f3 = 0; (l_631.f3 <= 2); l_631.f3 += 1)
                    {
                        char l_702 = 0xBCL;
                        struct S0 l_707 = {17,896,53,0x7EL,135,-162,0,21,4,-0};
                        int i, j, k;
                        l_632.f0 = (l_697.f2 == ((p_31 > 0UL) && (safe_div_func_uint32_t_u_u(((l_702 || (safe_rshift_func_int8_t_s_s((((0L || func_34((g_279[g_117][l_631.f3][(l_631.f3 + 3)] = (safe_rshift_func_int8_t_s_s(p_30, 4))), (l_631.f8 = g_48.f0), l_707)) || l_556) , p_29.f2), 0))) , l_557.f0), 4294967287UL))));
                    }
                }
                else
                {
                    char l_708 = 0x89L;
                    struct S0 l_711[2][8][6] = {{{{0,11979,122,0L,-1800,-827,1,28,0,0},{13,2939,44,-1L,374,236,0,31,4,0},{15,7171,96,0x77L,-633,-608,1,2,3,-0},{16,5270,134,-1L,-739,-81,1,24,-4,0},{15,7171,96,0x77L,-633,-608,1,2,3,-0},{13,2939,44,-1L,374,236,0,31,4,0}},{{19,15148,179,0x84L,247,-175,1,21,4,0},{5,3704,140,9L,-1839,-584,0,19,1,-0},{0,11979,122,0L,-1800,-827,1,28,0,0},{2,603,56,-8L,-1657,-77,0,30,-3,-0},{10,13421,117,0xDCL,2725,908,0,10,0,0},{0,3355,100,0x2DL,-173,-700,0,29,-0,-0}},{{16,5270,134,-1L,-739,-81,1,24,-4,0},{8,15335,28,-9L,2518,600,0,10,3,0},{18,4295,145,0x3AL,-2784,159,0,0,-0,-0},{14,8396,173,0x2BL,966,765,0,13,-2,-0},{6,2710,27,3L,-1828,-899,1,16,3,0},{18,10440,136,0xC5L,-2521,682,1,2,-1,-0}},{{4,14748,70,9L,1213,-148,0,17,-3,0},{8,15335,28,-9L,2518,600,0,10,3,0},{5,2927,172,-7L,1262,-797,1,7,-2,-0},{14,6416,166,0x75L,-2880,-198,0,30,0,0},{10,13421,117,0xDCL,2725,908,0,10,0,0},{19,15148,179,0x84L,247,-175,1,21,4,0}},{{5,4797,171,0xE2L,-963,476,0,7,4,-0},{5,3704,140,9L,-1839,-584,0,19,1,-0},{14,8396,173,0x2BL,966,765,0,13,-2,-0},{17,9474,59,1L,1710,570,1,2,0,-0},{15,7171,96,0x77L,-633,-608,1,2,3,-0},{8,12435,71,0x8EL,2452,-114,1,25,-1,-0}},{{18,4295,145,0x3AL,-2784,159,0,0,-0,-0},{13,2939,44,-1L,374,236,0,31,4,0},{4,14748,70,9L,1213,-148,0,17,-3,0},{10,14940,72,0L,239,831,0,11,3,-0},{16,7703,87,0x5AL,-1757,131,1,14,-0,0},{17,9474,59,1L,1710,570,1,2,0,-0}},{{8,15335,28,-9L,2518,600,0,10,3,0},{15,7171,96,0x77L,-633,-608,1,2,3,-0},{2,11593,83,-5L,-2108,694,0,29,0,0},{19,15905,97,0x40L,381,-534,0,0,-4,-0},{19,15905,97,0x40L,381,-534,0,0,-4,-0},{2,11593,83,-5L,-2108,694,0,29,0,0}},{{2,11593,83,-5L,-2108,694,0,29,0,0},{2,11593,83,-5L,-2108,694,0,29,0,0},{8,363,163,0x05L,-2226,607,0,5,-2,0},{6,2710,27,3L,-1828,-899,1,16,3,0},{0,11979,122,0L,-1800,-827,1,28,0,0},{16,7703,87,0x5AL,-1757,131,1,14,-0,0}}},{{{10,14940,72,0L,239,831,0,11,3,-0},{12,5395,28,7L,-1040,-728,1,16,-4,-0},{11,5044,12,0x26L,825,-539,1,24,2,0},{8,363,163,0x05L,-2226,607,0,5,-2,0},{16,4546,142,0x41L,1194,597,0,26,-3,-0},{5,9354,79,0x7AL,2635,-875,0,29,4,-0}},{{16,5270,134,-1L,-739,-81,1,24,-4,0},{16,2879,8,1L,-1770,1004,0,26,4,-0},{11,5044,12,0x26L,825,-539,1,24,2,0},{19,15148,179,0x84L,247,-175,1,21,4,0},{10,14940,72,0L,239,831,0,11,3,-0},{5,3704,140,9L,-1839,-584,0,19,1,-0}},{{5,4797,171,0xE2L,-963,476,0,7,4,-0},{19,15148,179,0x84L,247,-175,1,21,4,0},{5,9354,79,0x7AL,2635,-875,0,29,4,-0},{3,2275,11,0L,-474,-559,1,21,2,0},{2,11593,83,-5L,-2108,694,0,29,0,0},{10,14940,72,0L,239,831,0,11,3,-0}},{{3,2275,11,0L,-474,-559,1,21,2,0},{2,11593,83,-5L,-2108,694,0,29,0,0},{10,14940,72,0L,239,831,0,11,3,-0},{2,603,56,-8L,-1657,-77,0,30,-3,-0},{8,15335,28,-9L,2518,600,0,10,3,0},{14,6416,166,0x75L,-2880,-198,0,30,0,0}},{{19,15905,97,0x40L,381,-534,0,0,-4,-0},{5,9354,79,0x7AL,2635,-875,0,29,4,-0},{21,8379,95,1L,1640,349,1,1,-1,0},{16,7703,87,0x5AL,-1757,131,1,14,-0,0},{18,4295,145,0x3AL,-2784,159,0,0,-0,-0},{16,7703,87,0x5AL,-1757,131,1,14,-0,0}},{{18,4295,145,0x3AL,-2784,159,0,0,-0,-0},{6,10923,29,1L,275,-401,0,10,4,0},{18,4295,145,0x3AL,-2784,159,0,0,-0,-0},{10,3912,19,0x5BL,2724,194,0,3,-2,-0},{5,4797,171,0xE2L,-963,476,0,7,4,-0},{4,14748,70,9L,1213,-148,0,17,-3,0}},{{8,363,163,0x05L,-2226,607,0,5,-2,0},{13,2939,44,-1L,374,236,0,31,4,0},{16,4546,142,0x41L,1194,597,0,26,-3,-0},{21,8379,95,1L,1640,349,1,1,-1,0},{4,14748,70,9L,1213,-148,0,17,-3,0},{8,15335,28,-9L,2518,600,0,10,3,0}},{{18,10440,136,0xC5L,-2521,682,1,2,-1,-0},{12,5395,28,7L,-1040,-728,1,16,-4,-0},{19,15148,179,0x84L,247,-175,1,21,4,0},{21,8379,95,1L,1640,349,1,1,-1,0},{16,5270,134,-1L,-739,-81,1,24,-4,0},{10,3912,19,0x5BL,2724,194,0,3,-2,-0}}}};
                    int i, j, k;
                    l_631.f4 = g_279[6][2][3];
                    for (p_30 = 0; (p_30 <= 5); p_30 += 1)
                    {
                        return l_708;
                    }
                    for (l_604 = 0; (l_604 != 10); l_604 = safe_add_func_int16_t_s_s(l_604, 5))
                    {
                        l_711[1][5][2] = l_631;
                        return g_414[2].f6;
                    }
                }
            }
            if (((-1L) && ((((((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(l_631.f4, ((((((l_631.f9 = (((p_29.f4 = (0L <= ((safe_add_func_uint32_t_u_u(func_34((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(func_34(l_631.f7, g_554[0].f6, g_414[2]), 7)), (safe_rshift_func_int8_t_s_u((p_29.f4 || l_631.f7), 5)))), l_631.f9, l_698), p_31)) < p_29.f3))) >= p_29.f0) < 0x297505B5L)) > 0x69L) && 255UL) < p_28) > g_554[0].f5) && l_632.f0))), g_48.f4)), l_728)) & g_48.f4) , p_29.f0) & 4294967289UL) == 255UL) || (-6L))))
            {
                for (l_698.f3 = 0; (l_698.f3 <= 2); l_698.f3 += 1)
                {
                    struct S0 l_731 = {7,7985,167,0x48L,-996,872,1,29,-0,0};
                    p_29 = g_91;
                    for (g_126.f0 = 0; (g_126.f0 <= 0); g_126.f0 += 1)
                    {
                        int i;
                        l_632 = func_49(g_427[g_126.f0], (g_91.f0 | (l_556 ^ (safe_div_func_uint8_t_u_u(g_501.f2, 0x65L)))), g_414[9]);
                        l_731 = l_557;
                    }

                                    }
            }
            else
            {
                unsigned char l_743 = 0UL;
                for (g_59.f0 = 29; (g_59.f0 >= 59); g_59.f0 = safe_add_func_int16_t_s_s(g_59.f0, 1))
                {
                    char l_737 = 0x3BL;
                    short l_740 = 0xA67DL;
                    for (p_31 = 0; (p_31 <= 5); p_31 += 1)
                    {
                        int i;
                        l_734 = p_29;
                        g_414[2].f5 = (safe_lshift_func_int16_t_s_u(func_34((g_33[6][1][1] = ((((l_737 | 4294967292UL) , g_501.f0) == g_48.f7) , (l_661[0].f0 = (((1L | p_29.f3) | (safe_mod_func_uint8_t_u_u(l_631.f2, func_34(g_33[6][1][1], l_740, g_554[(g_117 + 1)])))) && g_554[0].f5)))), l_740, g_414[2]), g_48.f0));
                        g_126.f0 = (safe_lshift_func_int8_t_s_s(l_743, (safe_mod_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_u(((g_48.f4 , (l_748 , (p_29.f3 , g_48.f8))) != (+((safe_rshift_func_int8_t_s_u(((g_554[(g_117 + 1)].f2 & (((-4L) <= (safe_add_func_uint8_t_u_u((l_748 , ((((safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((l_631.f5 = (((g_91.f1 && g_414[2].f6) , l_737) != 0xA704L)), g_554[(g_117 + 1)].f5)), g_554[0].f5)) > l_740) > 65535UL) && p_28)), 0xFBL))) < g_414[2].f6)) | 4294967286UL), 2)) == l_743))), 3)) > g_554[0].f1) | l_631.f8) , (-5L)), g_59.f2))));

                                            }
                }

                            }
        }
    }

        for (g_501.f2 = 3; (g_501.f2 >= (-15)); g_501.f2--)
    {
        unsigned char l_774 = 0x2CL;
        union U2 l_775 = {4294967295UL};
        struct S0 l_776[9] = {{1,8614,32,0x48L,2852,638,0,0,-0,0},{1,8614,32,0x48L,2852,638,0,0,-0,0},{1,8614,32,0x48L,2852,638,0,0,-0,0},{1,8614,32,0x48L,2852,638,0,0,-0,0},{1,8614,32,0x48L,2852,638,0,0,-0,0},{1,8614,32,0x48L,2852,638,0,0,-0,0},{1,8614,32,0x48L,2852,638,0,0,-0,0},{1,8614,32,0x48L,2852,638,0,0,-0,0},{1,8614,32,0x48L,2852,638,0,0,-0,0}};
        short l_783 = (-5L);
        int l_841 = (-4L);
        short l_886[8][2][2] = {{{0xA542L,0xB96DL},{1L,0x6134L}},{{0x6134L,0x3500L},{0xA542L,0x5CFBL}},{{0x3500L,0x5CFBL},{0xA542L,0x3500L}},{{0x6134L,0x6134L},{1L,0xB96DL}},{{0xA542L,0xE75FL},{0xB96DL,0x5CFBL}},{{0xD73CL,0xB96DL},{0x6134L,1L}},{{0x6134L,0xB96DL},{0xD73CL,0x5CFBL}},{{0xB96DL,0xE75FL},{0xA542L,0xB96DL}}};
        unsigned l_895 = 0UL;
        unsigned l_900 = 0xD5E98F10L;
        union U3 l_906 = {1L};
        struct S1 l_931 = {-3,18076,-6109,4703,0};
        int i, j, k;
        g_48.f9 = ((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((g_414[2].f9 , (safe_lshift_func_int8_t_s_u((l_771 != (l_661[0].f0 & p_30)), 4))) || (safe_div_func_uint32_t_u_u(func_34(((g_554[4] , func_34(g_48.f1, (p_29.f1 = (+func_34(func_34(l_774, l_632.f4, (l_775 , l_557)), g_32, l_557))), l_776[8])) & 0xCCL), l_776[8].f0, l_776[5]), 1L))), l_776[8].f0)), 0xB792FE9AL)), 4294967295UL)), l_776[8].f3)), 7L)) != l_776[8].f8);
        for (l_728 = 0; (l_728 <= 3); l_728 += 1)
        {
            struct S0 l_777[9] = {{19,16212,171,-2L,1296,-770,0,15,2,0},{1,14855,94,0x56L,1903,862,0,5,-2,-0},{19,16212,171,-2L,1296,-770,0,15,2,0},{19,16212,171,-2L,1296,-770,0,15,2,0},{1,14855,94,0x56L,1903,862,0,5,-2,-0},{19,16212,171,-2L,1296,-770,0,15,2,0},{19,16212,171,-2L,1296,-770,0,15,2,0},{1,14855,94,0x56L,1903,862,0,5,-2,-0},{19,16212,171,-2L,1296,-770,0,15,2,0}};
            int l_821 = 0xEF3752EFL;
            struct S1 l_888[3][10][7] = {{{{-4,21735,-15955,12131,-4},{-5,10414,-6841,10936,3},{-4,21735,-15955,12131,-4},{13,6533,1934,16010,4},{13,6533,1934,16010,4},{-4,21735,-15955,12131,-4},{-5,10414,-6841,10936,3}},{{5,22459,16146,11420,5},{-5,14803,-1588,10749,1},{-1,10624,-3645,3793,-5},{-1,10624,-3645,3793,-5},{-5,14803,-1588,10749,1},{5,22459,16146,11420,5},{-5,14803,-1588,10749,1}},{{-4,21735,-15955,12131,-4},{13,6533,1934,16010,4},{13,6533,1934,16010,4},{-4,21735,-15955,12131,-4},{-5,10414,-6841,10936,3},{-4,21735,-15955,12131,-4},{13,6533,1934,16010,4}},{{5,16378,-1418,15700,0},{5,16378,-1418,15700,0},{5,22459,16146,11420,5},{-1,10624,-3645,3793,-5},{5,22459,16146,11420,5},{5,16378,-1418,15700,0},{5,16378,-1418,15700,0}},{{-11,8058,-10215,8785,2},{13,6533,1934,16010,4},{-6,14310,-1957,3120,2},{13,6533,1934,16010,4},{-11,8058,-10215,8785,2},{-11,8058,-10215,8785,2},{13,6533,1934,16010,4}},{{-9,8294,14844,12075,2},{-5,14803,-1588,10749,1},{-9,8294,14844,12075,2},{5,22459,16146,11420,5},{5,22459,16146,11420,5},{-9,8294,14844,12075,2},{-5,14803,-1588,10749,1}},{{13,6533,1934,16010,4},{-5,10414,-6841,10936,3},{-6,14310,-1957,3120,2},{-6,14310,-1957,3120,2},{-5,10414,-6841,10936,3},{13,6533,1934,16010,4},{-5,10414,-6841,10936,3}},{{-9,8294,14844,12075,2},{5,22459,16146,11420,5},{5,22459,16146,11420,5},{-9,8294,14844,12075,2},{-5,14803,-1588,10749,1},{-9,8294,14844,12075,2},{5,22459,16146,11420,5}},{{-11,8058,-10215,8785,2},{-11,8058,-10215,8785,2},{13,6533,1934,16010,4},{-6,14310,-1957,3120,2},{13,6533,1934,16010,4},{-11,8058,-10215,8785,2},{-11,8058,-10215,8785,2}},{{5,16378,-1418,15700,0},{5,22459,16146,11420,5},{-1,10624,-3645,3793,-5},{5,22459,16146,11420,5},{5,16378,-1418,15700,0},{5,16378,-1418,15700,0},{5,22459,16146,11420,5}}},{{{-4,21735,-15955,12131,-4},{-5,10414,-6841,10936,3},{-4,21735,-15955,12131,-4},{13,6533,1934,16010,4},{13,6533,1934,16010,4},{-4,21735,-15955,12131,-4},{-5,10414,-6841,10936,3}},{{5,22459,16146,11420,5},{-5,14803,-1588,10749,1},{-1,10624,-3645,3793,-5},{-1,10624,-3645,3793,-5},{-5,14803,-1588,10749,1},{5,22459,16146,11420,5},{-5,14803,-1588,10749,1}},{{-4,21735,-15955,12131,-4},{13,6533,1934,16010,4},{13,6533,1934,16010,4},{-4,21735,-15955,12131,-4},{-5,10414,-6841,10936,3},{-4,21735,-15955,12131,-4},{13,6533,1934,16010,4}},{{5,16378,-1418,15700,0},{5,16378,-1418,15700,0},{5,22459,16146,11420,5},{-9,8294,14844,12075,2},{5,16378,-1418,15700,0},{-5,14803,-1588,10749,1},{-5,14803,-1588,10749,1}},{{-5,10414,-6841,10936,3},{-11,8058,-10215,8785,2},{-4,21735,-15955,12131,-4},{-11,8058,-10215,8785,2},{-5,10414,-6841,10936,3},{-5,10414,-6841,10936,3},{-11,8058,-10215,8785,2}},{{5,22459,16146,11420,5},{-1,10624,-3645,3793,-5},{5,22459,16146,11420,5},{5,16378,-1418,15700,0},{5,16378,-1418,15700,0},{5,22459,16146,11420,5},{-1,10624,-3645,3793,-5}},{{-11,8058,-10215,8785,2},{-6,14310,-1957,3120,2},{-4,21735,-15955,12131,-4},{-4,21735,-15955,12131,-4},{-6,14310,-1957,3120,2},{-11,8058,-10215,8785,2},{-6,14310,-1957,3120,2}},{{5,22459,16146,11420,5},{5,16378,-1418,15700,0},{5,16378,-1418,15700,0},{5,22459,16146,11420,5},{-1,10624,-3645,3793,-5},{5,22459,16146,11420,5},{5,16378,-1418,15700,0}},{{-5,10414,-6841,10936,3},{-5,10414,-6841,10936,3},{-11,8058,-10215,8785,2},{-4,21735,-15955,12131,-4},{-11,8058,-10215,8785,2},{-5,10414,-6841,10936,3},{-5,10414,-6841,10936,3}},{{-5,14803,-1588,10749,1},{5,16378,-1418,15700,0},{-9,8294,14844,12075,2},{5,16378,-1418,15700,0},{-5,14803,-1588,10749,1},{-5,14803,-1588,10749,1},{5,16378,-1418,15700,0}}},{{{13,6533,1934,16010,4},{-6,14310,-1957,3120,2},{13,6533,1934,16010,4},{-11,8058,-10215,8785,2},{-11,8058,-10215,8785,2},{13,6533,1934,16010,4},{-6,14310,-1957,3120,2}},{{5,16378,-1418,15700,0},{-1,10624,-3645,3793,-5},{-9,8294,14844,12075,2},{-9,8294,14844,12075,2},{-1,10624,-3645,3793,-5},{5,16378,-1418,15700,0},{-1,10624,-3645,3793,-5}},{{13,6533,1934,16010,4},{-11,8058,-10215,8785,2},{-11,8058,-10215,8785,2},{13,6533,1934,16010,4},{-6,14310,-1957,3120,2},{13,6533,1934,16010,4},{-11,8058,-10215,8785,2}},{{-5,14803,-1588,10749,1},{-5,14803,-1588,10749,1},{5,16378,-1418,15700,0},{-9,8294,14844,12075,2},{5,16378,-1418,15700,0},{-5,14803,-1588,10749,1},{-5,14803,-1588,10749,1}},{{-5,10414,-6841,10936,3},{-11,8058,-10215,8785,2},{-4,21735,-15955,12131,-4},{-11,8058,-10215,8785,2},{-5,10414,-6841,10936,3},{-5,10414,-6841,10936,3},{-11,8058,-10215,8785,2}},{{5,22459,16146,11420,5},{-1,10624,-3645,3793,-5},{5,22459,16146,11420,5},{5,16378,-1418,15700,0},{5,16378,-1418,15700,0},{5,22459,16146,11420,5},{-1,10624,-3645,3793,-5}},{{-11,8058,-10215,8785,2},{-6,14310,-1957,3120,2},{-4,21735,-15955,12131,-4},{-4,21735,-15955,12131,-4},{-6,14310,-1957,3120,2},{-11,8058,-10215,8785,2},{-6,14310,-1957,3120,2}},{{5,22459,16146,11420,5},{-9,8294,14844,12075,2},{-9,8294,14844,12075,2},{-1,10624,-3645,3793,-5},{5,16378,-1418,15700,0},{-1,10624,-3645,3793,-5},{-9,8294,14844,12075,2}},{{13,6533,1934,16010,4},{13,6533,1934,16010,4},{-4,21735,-15955,12131,-4},{-5,10414,-6841,10936,3},{-4,21735,-15955,12131,-4},{13,6533,1934,16010,4},{13,6533,1934,16010,4}},{{5,22459,16146,11420,5},{-9,8294,14844,12075,2},{-5,14803,-1588,10749,1},{-9,8294,14844,12075,2},{5,22459,16146,11420,5},{5,22459,16146,11420,5},{-9,8294,14844,12075,2}}}};
            int i, j, k;
            if (g_91.f1)
            {
                unsigned char l_782[10][10][2] = {{{254UL,254UL},{0x8FL,254UL},{250UL,253UL},{0xF6L,0x43L},{0xE6L,0xE6L},{0xABL,255UL},{0UL,8UL},{0UL,0x3EL},{0x19L,0UL},{1UL,1UL}},{{1UL,0UL},{0x19L,0x3EL},{0UL,8UL},{0UL,255UL},{0xABL,0xE6L},{0xE6L,0x43L},{0xF6L,253UL},{250UL,254UL},{0x8FL,254UL},{254UL,6UL}},{{0x1CL,0x26L},{1UL,255UL},{0UL,0xF4L},{0xE6L,9UL},{255UL,250UL},{255UL,0xF6L},{0x26L,0x19L},{8UL,0x1CL},{0xBAL,0x1DL},{0UL,0xD0L}},{{9UL,0x84L},{255UL,0x75L},{0x7FL,0x51L},{0x43L,0xBEL},{0xADL,0x35L},{0UL,255UL},{252UL,0x7CL},{0xDCL,253UL},{0x3AL,254UL},{0x1CL,0x8FL}},{{255UL,0xAAL},{254UL,0xBAL},{0x7CL,0xF6L},{0xBEL,0xE6L},{1UL,6UL},{0UL,0xE6L},{0x40L,0xE6L},{0UL,6UL},{1UL,0xE6L},{0xBEL,0xF6L}},{{0x7CL,0xBAL},{254UL,0xAAL},{255UL,0x8FL},{0x1CL,254UL},{0x3AL,253UL},{254UL,0x76L},{0UL,0xFAL},{0xE6L,0xADL},{1UL,0xD0L},{250UL,0UL}},{{0xBFL,255UL},{0xFAL,0x75L},{0x8DL,0UL},{0UL,0x6FL},{0xABL,8UL},{0x74L,252UL},{0x51L,0UL},{255UL,253UL},{0x0EL,0x8DL},{0UL,251UL}},{{0x26L,0x35L},{253UL,0x51L},{8UL,0x19L},{0xAAL,250UL},{0xF6L,0UL},{0xDCL,255UL},{0UL,250UL},{1UL,1UL},{0x1EL,255UL},{9UL,0x74L}},{{0x00L,0x3AL},{252UL,0x00L},{0x0DL,0x33L},{0x0DL,0x00L},{252UL,0x3AL},{251UL,0UL},{0x7CL,254UL},{0UL,0xD3L},{0xD3L,0xBDL},{0x0EL,0x35L}},{{0x33L,0x40L},{255UL,1UL},{0x3EL,255UL},{253UL,252UL},{0x75L,0x7FL},{0x19L,0xABL},{0xF4L,0x76L},{250UL,255UL},{254UL,0x0EL},{252UL,0xFAL}}};
                int l_784 = 5L;
                struct S0 l_786 = {2,1203,132,-6L,144,177,0,12,-2,0};
                int l_850 = 0x639A1AA9L;
                unsigned l_890 = 0xB6F58C49L;
                int i, j, k;
                if ((g_554[0].f9 = ((-4L) > ((0xB0BFL | (((g_91 , func_34((g_414[2].f1 < func_34(g_48.f4, p_31, g_414[9])), (p_29.f3 = g_414[2].f4), l_777[0])) , g_91.f0) , p_29.f2)) , 8UL))))
                {
                    unsigned l_785 = 1UL;
                    union U3 l_789 = {7L};
                    union U2 l_808 = {0xE7CBA2ADL};
                    short l_809 = (-1L);
                    for (g_59.f0 = 0; (g_59.f0 <= 9); g_59.f0 += 1)
                    {
                        int i, j, k;
                        if (g_283[(l_728 + 3)][l_728][(l_728 + 1)])
                            break;
                        g_283[(l_728 + 2)][l_728][(l_728 + 1)] = func_34((l_557.f8 = func_34(p_31, p_29.f2, g_414[(l_728 + 4)])), ((l_775 , (g_32 != (l_777[0].f9 = (((safe_add_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(l_782[2][6][1], (l_784 = l_783))) ^ g_91.f1), g_554[0].f8)) ^ 0xB450EA0AL) == l_785)))) >= g_48.f4), l_786);
                        g_537 = (l_776[8].f8 = ((p_30 = p_28) >= ((safe_sub_func_uint16_t_u_u((l_789 , l_777[0].f2), 0xDE92L)) && l_789.f2)));
                        return g_414[2].f1;
                    }

                                        if (p_29.f3)
                        continue;
                    if ((safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s((0x5348L || ((g_501 , g_414[2].f3) && p_28)), l_809)), g_91.f4)))
                    {
                        char l_816 = 0x86L;
                        unsigned l_822 = 0xEA9D3BD1L;
                        l_776[8].f5 = (((safe_rshift_func_uint8_t_u_s(((g_427[0].f2 = l_808.f1) & (safe_lshift_func_uint8_t_u_u(l_789.f0, 2))), (l_816 | l_557.f2))) ^ (g_414[2].f9 <= (safe_lshift_func_int16_t_s_u((((p_29 = ((g_59.f3 = (l_822 = (p_29.f3 , func_34(l_777[0].f0, (p_29.f3 = (((((((4294967288UL <= (safe_add_func_int8_t_s_s(g_279[4][2][3], 0x26L))) , l_789.f1) & l_776[8].f0) <= p_31) == l_821) && p_30) < 0xB8F5L)), g_554[5])))) , g_91)) , g_119) , p_30), g_48.f0)))) & l_777[0].f3);

                                                l_776[8].f5 = 0x2277D1E0L;
                        p_29.f2 = ((p_29.f0 < ((g_829 = ((safe_rshift_func_int16_t_s_u(((0xA7C8L < (l_821 = (safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(0xEE5AL, 7)), p_28)))) <= 0x5D63L), 0)) ^ l_661[0].f2)) , (safe_div_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(((!(l_777[0].f1 , l_809)) , (1UL < g_48.f4)), g_91.f4)) | p_29.f4), l_816)))) , g_414[2].f6);
                    }
                    else
                    {
                        short l_840 = (-1L);
                        g_554[0].f9 = (safe_mod_func_uint8_t_u_u((l_776[4] , l_557.f4), (safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_840, func_34((l_841 = (g_279[2][1][5] = l_777[0].f0)), g_91.f2, ((((p_29.f0 != (func_34(((p_29.f3 < ((safe_lshift_func_uint8_t_u_s((g_414[2].f5 == p_29.f4), g_414[2].f7)) != g_117)) , l_777[0].f0), p_29.f0, l_557) == p_30)) , g_59.f1) >= g_537) , l_776[8])))), 0xF500L))));
                        p_29.f4 = (safe_div_func_int32_t_s_s(0x8D6CAA50L, l_850));
                    }

                                    }
                else
                {
                    unsigned short l_857[2];
                    int l_879[6] = {0x2CB3CABFL,0x6EC9577FL,0x6EC9577FL,0x2CB3CABFL,0x6EC9577FL,0x6EC9577FL};
                    struct S0 l_887 = {10,9906,175,0x4BL,-2820,-43,1,10,0,-0};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_857[i] = 0x5ED6L;
                    if (((safe_sub_func_int16_t_s_s((l_777[0].f8 = (safe_rshift_func_int8_t_s_u(g_91.f2, 6))), 0x2EC4L)) <= (0L == (l_857[0] = func_34((safe_lshift_func_int16_t_s_u((-5L), 9)), g_118, g_554[2])))))
                    {
                        l_841 = ((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(g_554[0].f1, (safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((((0UL == 0xC2E1L) < (l_776[8].f5 = ((l_879[1] = func_34((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_int16_t_s(9L)) , func_34(p_29.f3, (safe_lshift_func_int8_t_s_s((p_29.f3 <= 1L), ((((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((l_777[0].f5 = 9UL), 0)), 11)) , ((p_31 & 0x12C90E9EL) | p_29.f2)) != 2L) >= g_554[0].f5))), l_776[8])), g_59.f2)), l_775.f0, g_414[2])) ^ g_126.f2))) >= l_784), p_29.f4)), 15)))), p_31)) >= g_48.f4), p_29.f3)), 0x303EL)) & l_777[0].f2);
                    }
                    else
                    {
                        l_632.f0 = l_786.f9;
                        return g_414[2].f1;
                    }
                    g_91 = ((safe_add_func_uint32_t_u_u(func_34((g_48.f9 || (safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(g_48.f9, g_414[2].f0)), l_886[4][0][1]))), p_31, l_887), ((func_34(p_29.f4, (l_888[0][3][5] , l_889), l_776[8]) > l_841) || g_48.f9))) , p_29);
                    for (g_268 = 3; (g_268 >= 0); g_268 -= 1)
                    {
                        int i, j, k;
                        l_890 = (p_29.f2 = (g_283[(l_728 + 3)][g_268][(g_268 + 3)] = g_283[(g_268 + 2)][g_268][(g_268 + 4)]));
                        l_887 = (g_414[2] = g_554[2]);
                    }
                }
            }
            else
            {
                struct S0 l_897[4][2] = {{{8,5476,22,0xF3L,-480,12,0,11,-1,0},{8,5476,22,0xF3L,-480,12,0,11,-1,0}},{{8,5476,22,0xF3L,-480,12,0,11,-1,0},{8,5476,22,0xF3L,-480,12,0,11,-1,0}},{{8,5476,22,0xF3L,-480,12,0,11,-1,0},{8,5476,22,0xF3L,-480,12,0,11,-1,0}},{{8,5476,22,0xF3L,-480,12,0,11,-1,0},{8,5476,22,0xF3L,-480,12,0,11,-1,0}}};
                int i, j;
                g_554[0].f5 = p_29.f4;
                g_553 = (func_34((p_30 , ((safe_sub_func_uint8_t_u_u(((g_414[2].f2 ^ ((p_29.f4 > g_119) , p_29.f4)) < g_268), (((p_29.f1 <= (((safe_div_func_int32_t_s_s((l_557.f3 >= g_48.f2), 0x5044E485L)) == 0xCBL) > g_23)) ^ l_895) , l_896))) || 65532UL)), g_33[6][1][1], l_897[0][1]) <= g_414[2].f8);
            }
            p_29.f4 = (p_29.f0 = (safe_sub_func_uint8_t_u_u((l_900 , func_34(l_661[0].f0, l_775.f3, g_554[0])), g_174)));
        }
        if (p_29.f1)
        {
            struct S0 l_901 = {20,220,20,0x81L,-1790,-197,1,28,3,-0};
            struct S0 l_921 = {5,351,128,0x54L,2652,762,1,8,-4,-0};
            struct S1 l_922 = {-8,22481,-5097,6377,7};
            union U3 l_932[2] = {{-1L},{-1L}};
            union U2 l_933 = {6UL};
            int i;
            g_554[0] = l_901;
            p_29.f4 = (0x7134F9FDL ^ (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((l_922 = func_49(func_53(l_775, l_906, (safe_mod_func_int16_t_s_s((g_126.f1 = (3UL ^ (safe_add_func_uint32_t_u_u(((p_29.f4 , (safe_rshift_func_uint16_t_u_u((l_901.f9 = (((safe_add_func_uint16_t_u_u(g_126.f2, g_554[0].f3)) | (safe_lshift_func_uint16_t_u_s(((l_776[8].f4 = func_34((safe_add_func_uint32_t_u_u(g_126.f1, func_34((safe_rshift_func_uint8_t_u_u(l_775.f3, 2)), p_31, l_921))), l_906.f3, l_776[8])) , g_91.f4), p_29.f1))) == 0x3F4EL)), l_900))) && (-10L)), 0xC87DBAEDL)))), g_553)), p_31, p_29.f4), p_29.f3, g_554[0])) , l_632.f2), l_632.f1)), 3)));
            l_901.f9 = (l_921.f3 < func_34(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(l_776[8].f2, 12)), ((l_933 , 0x91L) | p_28))), l_734.f3)) && l_906.f3), p_29.f4, l_557));
        }
        else
        {
            g_48 = l_776[8];
        }
    }

        if (l_632.f1)
    {
        struct S1 l_951 = {-2,172,-7438,3570,7};
        int l_975[1];
        unsigned l_1003 = 0xA97D4D35L;
        unsigned l_1004 = 0xEDFF2C89L;
        union U3 l_1005 = {6L};
        struct S0 l_1028 = {17,15001,138,-6L,2548,-313,1,12,-2,-0};
        union U2 l_1066 = {4294967292UL};
        int i;
        for (i = 0; i < 1; i++)
            l_975[i] = 0x44FBC9C2L;
        for (g_118 = 0; (g_118 <= 2); g_118 += 1)
        {
            unsigned l_938 = 4294967288UL;
            union U2 l_945 = {0xDC00B04AL};
            unsigned l_948 = 0xC5BC43E3L;
            int l_950[5][5] = {{4L,3L,4L,(-1L),1L},{0xFD2B61DDL,3L,2L,0xBD287DC1L,1L},{4L,(-1L),(-1L),4L,4L},{0xD71117C5L,4L,2L,1L,3L},{0xD71117C5L,2L,4L,2L,0xD71117C5L}};
            union U3 l_1017[1] = {{0xEA34FB92L}};
            struct S1 l_1064 = {15,6400,3190,9551,-6};
            int i, j;
            g_414[2].f4 = (safe_div_func_uint8_t_u_u((l_950[1][0] = (func_34(((safe_sub_func_uint32_t_u_u((g_91.f4 , l_938), (safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((l_945 , (func_34(((p_29.f0 == g_414[2].f8) < (((((safe_lshift_func_int8_t_s_u(((0xF6L == (-5L)) || p_31), 0)) , l_948) || 0x9B702665L) <= l_945.f1) && 0x9FL)), p_29.f0, g_48) == g_414[2].f4)), g_48.f0)), 5)) , l_728) || p_29.f3), 2)))) && g_414[2].f8), l_889, l_949) == l_949.f7)), 0x20L));
            p_29.f2 = l_949.f7;
            l_951 = p_29;
            for (g_501.f1 = 0; (g_501.f1 <= 0); g_501.f1 += 1)
            {
                char l_979[4][6][8] = {{{0x5BL,0xA7L,5L,5L,0xA7L,0x5BL,0xA7L,5L},{2L,0xA7L,2L,0x5BL,0x5BL,2L,0xA7L,2L},{3L,0x5BL,5L,0x5BL,3L,3L,0x5BL,5L},{0xA7L,0xA7L,3L,2L,3L,0xA7L,0xA7L,3L},{0x5BL,3L,3L,0x5BL,5L,0x5BL,3L,3L},{3L,5L,2L,2L,5L,3L,5L,2L}},{{0x5BL,5L,0x5BL,3L,3L,0x5BL,5L,0x5BL},{0xA7L,3L,2L,3L,0xA7L,0xA7L,3L,2L},{0xA7L,0xA7L,3L,2L,3L,0xA7L,0xA7L,3L},{0x5BL,3L,3L,0x5BL,5L,0x5BL,3L,3L},{3L,5L,2L,2L,5L,3L,5L,2L},{0x5BL,5L,0x5BL,3L,3L,0x5BL,5L,0x5BL}},{{0xA7L,3L,2L,3L,0xA7L,0xA7L,3L,2L},{0xA7L,0xA7L,3L,2L,3L,0xA7L,0xA7L,3L},{0x5BL,3L,3L,0x5BL,5L,0x5BL,3L,2L},{2L,3L,0xA7L,0xA7L,3L,2L,3L,0xA7L},{5L,3L,5L,2L,2L,5L,3L,5L},{0x5BL,2L,0xA7L,2L,0x5BL,0x5BL,2L,0xA7L}},{{0x5BL,0x5BL,2L,0xA7L,2L,0x5BL,0x5BL,2L},{5L,2L,2L,5L,3L,5L,2L,2L},{2L,3L,0xA7L,0xA7L,3L,2L,3L,0xA7L},{5L,3L,5L,2L,2L,5L,3L,5L},{0x5BL,2L,0xA7L,2L,0x5BL,0x5BL,2L,0xA7L},{0x5BL,0x5BL,2L,0xA7L,2L,0x5BL,0x5BL,2L}}};
                int l_987 = (-1L);
                struct S1 l_988 = {0,9125,-8447,6598,6};
                struct S0 l_998 = {5,2858,118,1L,-2842,-363,1,28,0,0};
                unsigned short l_1027 = 0xF725L;
                char l_1040[7][5] = {{(-2L),6L,6L,(-2L),6L},{(-2L),(-2L),0xCEL,(-2L),(-2L)},{6L,(-2L),6L,6L,(-2L)},{(-2L),6L,6L,(-2L),6L},{(-2L),(-2L),(-2L),6L,6L},{0xCEL,6L,0xCEL,0xCEL,6L},{6L,0xCEL,0xCEL,6L,0xCEL}};
                union U3 l_1054 = {0x5113561BL};
                int i, j, k;
                for (g_268 = 0; (g_268 <= 3); g_268 += 1)
                {
                    unsigned char l_974 = 0xEEL;
                    struct S0 l_976 = {13,4811,116,0x58L,-1930,-486,1,17,3,-0};
                    p_29 = l_632;
                    for (l_889 = 0; (l_889 >= 0); l_889 -= 1)
                    {
                        int l_973 = 0xFBD0C67FL;
                        int i, j, k;
                        g_48.f8 = g_279[(g_118 + 3)][g_501.f1][(g_501.f1 + 3)];
                        g_414[2].f8 = ((func_34(g_33[(l_889 + 1)][(g_501.f1 + 1)][(g_268 + 1)], ((((safe_rshift_func_int16_t_s_s((((((safe_rshift_func_int8_t_s_s(g_279[(g_118 + 3)][g_501.f1][(g_501.f1 + 3)], (l_951.f1 , l_951.f2))) , (!0x48L)) , ((safe_add_func_int8_t_s_s((g_414[2].f3 = (~((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(g_59.f2, (safe_div_func_int32_t_s_s(1L, (safe_lshift_func_int8_t_s_u(((g_344 = (g_48.f3 = (safe_add_func_uint16_t_u_u((!(((((((safe_sub_func_uint32_t_u_u(p_28, ((safe_unary_minus_func_uint8_t_u(((((safe_lshift_func_uint8_t_u_u((l_973 = g_91.f3), l_557.f6)) < 1L) , l_974) || 4294967295UL))) > l_975[0]))) ^ l_974) == l_951.f4) ^ g_414[2].f4) <= 9UL) != g_554[0].f5) ^ l_945.f0)), p_29.f2)))) >= l_974), 7)))))), p_29.f3)) , l_974))), g_126.f2)) ^ p_29.f4)) , l_951.f0) < l_974), 9)) || l_975[0]) == l_974) , 0x9A56E113L), l_976) & 0xDBL) && 0xCED9L);
                    }
                }
                l_632.f0 = p_31;
                for (l_771 = 0; (l_771 <= 0); l_771 += 1)
                {
                    unsigned short l_982[1][6][7];
                    struct S0 l_994 = {10,13781,23,0L,250,-149,0,23,-0,0};
                    struct S0 l_1029 = {20,2036,44,1L,-2594,1019,1,7,-4,-0};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                        {
                            for (k = 0; k < 7; k++)
                                l_982[i][j][k] = 65535UL;
                        }
                    }
                    if ((l_661[0] , ((((l_987 = ((safe_rshift_func_int8_t_s_s((l_979[2][3][5] & (l_975[0] <= (safe_rshift_func_int16_t_s_u((((p_29.f0 | (((l_982[0][1][5] , (g_427[0].f2 = g_33[6][1][1])) < g_554[0].f5) , ((safe_sub_func_int32_t_s_s(l_979[2][3][5], ((safe_add_func_int16_t_s_s(((l_975[0] ^ 0x93FCL) & l_949.f9), g_91.f2)) > g_427[0].f2))) >= 0UL))) , g_174) > g_48.f3), 11)))), l_975[0])) ^ g_501.f1)) ^ l_951.f1) ^ g_48.f7) != 7L)))
                    {
                        int l_989[4][1];
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_989[i][j] = 0L;
                        }
                        l_988 = p_29;
                        p_29.f4 = (func_34(l_989[2][0], (((g_268 = (((safe_rshift_func_int8_t_s_u((l_632.f4 = (l_951.f2 = func_34((g_279[(g_501.f1 + 8)][g_501.f1][(g_501.f1 + 3)] = p_29.f2), (safe_sub_func_uint16_t_u_u((p_29.f1 & (func_34(p_28, p_29.f0, g_414[5]) | g_48.f8)), (g_427[0].f1 = (0x6EC3ED26L && l_989[0][0])))), g_48))), 5)) && l_951.f1) != g_48.f8)) , 4294967289UL) | 4294967288UL), l_994) | g_48.f2);
                    }
                    else
                    {
                        char l_995 = 0x71L;
                        g_91.f4 = (l_951.f3 , (((p_29.f4 != 0x39L) & p_30) < (((~l_979[2][3][6]) >= (l_995 > ((l_951.f4 = ((g_554[0].f5 = p_31) < (((l_995 >= ((!(g_279[6][0][5] <= p_29.f0)) >= l_979[2][3][5])) , p_29.f0) || g_414[2].f8))) ^ p_30))) & g_554[0].f8)));
                        g_414[1] = g_414[2];
                    }
                    if (p_31)
                        break;
                    p_29.f0 = ((l_632.f2 = func_34(((l_998 , (((((((func_49(g_427[g_501.f1], ((l_661[0] = g_501) , g_32), g_414[9]) , ((safe_mod_func_int16_t_s_s((l_951.f2 = 6L), ((0x245BL & (((safe_add_func_uint8_t_u_u(p_28, l_982[0][1][5])) ^ 0L) != l_1003)) && l_951.f0))) != l_949.f5)) & g_554[0].f8) == 0xEEL) <= (-10L)) <= l_945.f2) || p_29.f2) < l_945.f0)) > g_829), g_537, g_414[8])) , p_31);
                    if (l_1004)
                    {
                        struct S0 l_1012 = {4,4721,11,0L,-2868,258,1,21,-2,0};
                        int i, j, k;
                        g_91.f0 = g_91.f4;
                        g_91 = func_49((g_427[g_501.f1] = g_427[0]), (p_29.f1 >= ((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((g_554[0].f1 && 246UL) , l_1005.f1), g_414[2].f8)), g_91.f2)) > g_414[2].f3)), l_1012);
                        g_554[0].f8 = (((+((p_29.f3 = (func_34((g_279[(g_118 + 1)][g_118][(l_771 + 5)] = p_29.f2), g_554[0].f9, l_998) & (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((p_30 = (l_938 ^ g_48.f8)), 5)), p_29.f3)))) & ((-10L) != ((l_1017[0] , g_427[0]) , 0L)))) || l_556) <= l_994.f8);
                    }
                    else
                    {
                        struct S0 l_1026 = {11,5829,18,0x9CL,-2683,-890,1,15,3,0};
                        g_48.f5 = (safe_lshift_func_int8_t_s_u(0xEEL, 7));
                        g_91 = func_49(l_1020, ((func_34(((l_994.f4 = ((safe_mod_func_int32_t_s_s((((g_126.f2 < (p_29.f3 || ((((!0xA5CDBE3CL) , (g_59.f1 = (g_427[0].f1 = (l_988.f4 = (((p_30 = l_998.f9) != (((p_29.f4 && g_48.f6) == func_34(l_1025, g_414[2].f3, l_1026)) < l_1026.f9)) != g_554[0].f1))))) < 0x23F7L) >= l_998.f6))) == 0x3BD2056FL) , l_1027), l_975[0])) & p_29.f2)) , g_48.f8), l_950[1][0], l_1028) , 0xAA8AL) > 0x76ACL), l_1029);
                    }
                }
                for (l_1005.f3 = 0; (l_1005.f3 <= 3); l_1005.f3 += 1)
                {
                    int l_1031 = 1L;
                    struct S1 l_1032 = {9,907,5185,2321,-0};
                    struct S1 l_1033 = {6,18422,-9798,8837,1};
                    struct S0 l_1034 = {20,3897,163,0x7AL,-1995,-599,1,16,2,-0};
                    for (l_1025 = 0; (l_1025 <= 3); l_1025 += 1)
                    {
                        struct S0 l_1030 = {13,11548,97,0xC5L,-1799,-676,1,22,-2,-0};
                        l_1030 = g_414[2];
                        l_1031 = p_29.f1;
                    }
                    g_554[2] = g_414[3];
                    if (((p_28 & p_29.f1) ^ 1UL))
                    {
                        g_91 = l_1032;
                        g_91 = l_1033;
                        g_414[2].f8 = (((func_34(l_951.f4, p_29.f1, (l_1028 = l_1034)) >= (func_34(g_554[0].f1, (l_998.f8 = p_29.f4), g_414[2]) < (g_1035 = (l_988.f0 = g_48.f3)))) ^ p_31) <= l_734.f0);
                    }
                    else
                    {
                        struct S0 l_1043 = {9,9074,144,-2L,-1016,-497,1,25,3,-0};
                        p_29.f2 = (safe_add_func_uint32_t_u_u(func_34((+(((safe_div_func_uint16_t_u_u(g_174, func_34(l_1040[3][1], p_29.f2, l_557))) != func_34((((~((safe_add_func_int16_t_s_s(0xBE3EL, ((l_1017[0].f0 = p_28) | l_949.f5))) != (l_998.f5 , 4294967287UL))) <= 0x09721FCCL) != g_414[2].f8), p_29.f3, l_1043)) ^ g_537)), p_28, l_557), l_938));
                        g_283[6][3][0] = (safe_sub_func_int32_t_s_s((g_279[2][1][5] || 0x52L), (safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(4294967295UL, (g_554[0].f1 = 0x4626142DL))), (l_1017[0] , (((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((l_1054 , ((safe_sub_func_int32_t_s_s((p_29.f2 , (g_117 >= (((safe_lshift_func_uint16_t_u_u(func_34(((g_414[2].f9 <= l_1043.f6) , g_414[2].f3), p_29.f0, l_1034), l_951.f3)) >= g_48.f0) > g_427[0].f2))), g_501.f1)) | 0UL)), 0L)), p_30)) < l_951.f0) && 1UL))))));
                        l_951 = p_29;
                    }
                }

                            }

                        for (g_268 = 0; (g_268 <= 2); g_268 += 1)
            {
                int l_1061 = (-5L);
                char l_1065 = (-2L);
                struct S0 l_1067[8] = {{15,10838,21,-1L,-263,194,1,5,-4,-0},{15,934,130,0x7DL,-2659,141,1,15,0,0},{15,10838,21,-1L,-263,194,1,5,-4,-0},{15,934,130,0x7DL,-2659,141,1,15,0,0},{15,10838,21,-1L,-263,194,1,5,-4,-0},{15,934,130,0x7DL,-2659,141,1,15,0,0},{15,10838,21,-1L,-263,194,1,5,-4,-0},{15,934,130,0x7DL,-2659,141,1,15,0,0}};
                int i;
                g_554[0].f8 = (l_1028.f6 != (((safe_add_func_uint8_t_u_u(l_1061, (((l_1064 = g_91) , p_28) && ((l_949.f8 = (g_117 ^ l_734.f1)) > 0x22F9L)))) > l_1065) ^ g_91.f1));
                for (g_1035 = 2; (g_1035 >= 0); g_1035 -= 1)
                {
                    int i, j, k;
                    p_29.f0 = g_279[g_1035][g_118][g_118];
                    for (g_537 = 0; (g_537 <= 2); g_537 += 1)
                    {
                        g_91 = func_49((l_1066 = l_1066), (+g_126.f1), l_1028);
                        l_1067[0] = l_1067[0];
                    }
                    if ((+g_118))
                    {
                        return g_279[g_1035][g_118][g_118];
                    }
                    else
                    {
                        l_632 = (l_951 = l_632);
                    }
                }
            }
        }

                g_91 = g_91;
    }
    else
    {
        struct S0 l_1074 = {6,5325,141,1L,1462,209,0,4,-2,0};
        struct S0 l_1075 = {19,15749,103,0xE2L,-525,783,0,8,-4,0};
        struct S0 l_1091 = {14,1966,84,-7L,467,-898,0,0,-1,-0};
        union U3 l_1148 = {-10L};
        union U2 l_1163 = {0UL};
        char l_1171[5];
        int i;
        for (i = 0; i < 5; i++)
            l_1171[i] = 1L;
        if (((g_554[0] , (g_501.f2 ^ func_34(p_30, (g_554[1] , func_34((safe_div_func_int32_t_s_s(p_31, (safe_div_func_int16_t_s_s(0x0EF4L, 0xE04AL)))), func_34(p_29.f3, (safe_add_func_uint32_t_u_u(g_117, 4294967295UL)), l_1074), l_1075)), g_414[0]))) | l_1075.f4))
        {
            unsigned l_1083 = 3UL;
            struct S0 l_1084 = {0,10216,179,-8L,2077,-85,0,12,-0,0};
            union U2 l_1089[1][7] = {{{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL}}};
            short l_1092 = 0x22E0L;
            int i, j;
            g_91 = ((g_501.f2 = (g_414[2].f0 , func_34((((((safe_unary_minus_func_uint32_t_u(func_34(g_117, l_1075.f4, g_554[5]))) <= (((((l_1083 = ((g_118 < 0x5144L) == (l_1075.f3 , (safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s(0x64L, g_91.f4)), g_553))))) , g_1035) , 0xFEL) > (-1L)) >= g_414[2].f8)) && l_557.f8) | l_1075.f6) | p_29.f3), g_554[0].f0, l_1084))) , p_29);
            p_29.f2 = (0x21DAL != func_34((safe_mod_func_int16_t_s_s((+(0x19E2L <= (((g_118 = (g_59.f2 = (func_34(l_1084.f4, p_29.f1, l_1075) , ((safe_div_func_int16_t_s_s(0L, (g_126.f1 = func_34(l_1084.f4, (func_53(l_1089[0][6], g_501, p_29.f3, l_1090, l_896) , l_1084.f8), l_1091)))) ^ 0x22F2L)))) <= 5UL) , p_29.f0))), (-1L))), p_29.f4, l_1075));
            l_1092 = p_29.f4;
        }
        else
        {
            int l_1102[7];
            struct S0 l_1109 = {0,11792,85,0x61L,41,1018,1,16,4,-0};
            char l_1115 = 2L;
            unsigned l_1146[10][4][6] = {{{1UL,0xC53C0275L,4294967287UL,0x7794D5D0L,4294967288UL,0xDAD8BD1BL},{0x9B095CCDL,0xACA97913L,0x054D2968L,0UL,0x456D54B7L,4294967289UL},{1UL,4294967295UL,0xC53C0275L,0xE51FB246L,1UL,1UL},{0UL,1UL,1UL,0UL,1UL,0x9E5CBAF5L}},{{0xE2B156B0L,1UL,0x7794D5D0L,5UL,0x7F36B219L,0xE51FB246L},{0x46DA6454L,0x224FF0DCL,0x1E2F7BAFL,0x9ADD07F4L,0x7F36B219L,0UL},{8UL,1UL,4294967290UL,4294967289UL,1UL,0x03422A03L},{4294967294UL,1UL,0xDAD8BD1BL,0x7794D5D0L,1UL,0xB8CC5AEDL}},{{4294967290UL,4294967295UL,9UL,0x4D849D5DL,0x456D54B7L,0x224FF0DCL},{0xC53C0275L,0xACA97913L,4294967295UL,0x446838B2L,4294967288UL,1UL},{1UL,0xC53C0275L,8UL,0UL,0xACA97913L,0x7F36B219L},{0xE2B156B0L,0UL,0x446838B2L,0x9CF3D54AL,1UL,0x4D849D5DL}},{{1UL,0xC53C0275L,0xE2B156B0L,0UL,4294967295UL,4294967286UL},{0UL,4294967295UL,9UL,0xC53C0275L,0x7794D5D0L,4294967286UL},{0x054D2968L,0UL,0xE2B156B0L,0xB8CC5AEDL,0xE51FB246L,0x4D849D5DL},{0x7794D5D0L,9UL,0x446838B2L,4294967294UL,0x4D8C77DBL,8UL}},{{0x03422A03L,0x054D2968L,0UL,0x7F36B219L,0x9ADD07F4L,0x1E2F7BAFL},{0x9CF3D54AL,0x03422A03L,0x46DA6454L,0x6D91D7DEL,1UL,0xC53C0275L},{1UL,0x456D54B7L,0xE51FB246L,0xF53480A0L,4294967294UL,0x7F36B219L},{0x456D54B7L,0xC53C0275L,4294967289UL,4294967289UL,0xC53C0275L,0x456D54B7L}},{{0x46DA6454L,4294967286UL,9UL,8UL,4294967288UL,0x9CF3D54AL},{1UL,0UL,0UL,0xB8CC5AEDL,0xDAD8BD1BL,0xE2B156B0L},{1UL,1UL,0xB8CC5AEDL,8UL,0x4D8C77DBL,4294967294UL},{0x46DA6454L,4294967288UL,5UL,4294967289UL,0xB8CC5AEDL,0x1E2F7BAFL}},{{0x456D54B7L,0x46DA6454L,1UL,0xF53480A0L,0x054D2968L,0xFE6EB937L},{1UL,1UL,4294967287UL,0x6D91D7DEL,0xFE6EB937L,4294967289UL},{0x9CF3D54AL,0xC53C0275L,0x224FF0DCL,0x7F36B219L,4294967292UL,4294967295UL},{0x03422A03L,4294967294UL,4294967286UL,4294967287UL,4294967286UL,4294967294UL}},{{0x9CF3D54AL,0UL,0x7794D5D0L,1UL,4294967290UL,9UL},{0x6D91D7DEL,4294967295UL,0xACA97913L,0xE51FB246L,1UL,0xB8CC5AEDL},{0UL,4294967295UL,0x224FF0DCL,1UL,4294967290UL,0x9B095CCDL},{8UL,0UL,0x7F36B219L,0xFE6EB937L,4294967286UL,0x446838B2L}},{{0x446838B2L,4294967294UL,0x4D8C77DBL,8UL,0xB8CC5AEDL,1UL},{1UL,0xE51FB246L,1UL,0x7794D5D0L,0x1E2F7BAFL,8UL},{0xE2B156B0L,8UL,4294967286UL,0xB8CC5AEDL,0x6D91D7DEL,1UL},{4294967286UL,0x9E5CBAF5L,0x054D2968L,1UL,1UL,0x054D2968L}},{{1UL,1UL,0x9B095CCDL,0x1E2F7BAFL,1UL,0x9ADD07F4L},{4294967289UL,0x456D54B7L,0UL,0x054D2968L,0xACA97913L,0x9B095CCDL},{4294967294UL,4294967289UL,0UL,4294967292UL,1UL,0x9ADD07F4L},{0x446838B2L,4294967292UL,0x9B095CCDL,4294967295UL,0xE51FB246L,0x054D2968L}}};
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_1102[i] = 0x0FD1ADBFL;
            for (g_553 = 0; (g_553 > (-29)); --g_553)
            {
                p_29.f0 = (safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((l_1099[0] || (safe_sub_func_uint32_t_u_u((((((func_34(g_414[2].f7, g_174, l_949) , (l_1074.f2 <= (g_279[2][1][5] = g_23))) != (func_49(g_427[0], p_29.f3, g_48) , 8UL)) , l_1075.f2) , l_1102[1]) | g_33[0][2][5]), l_1103))), 4)), p_31));
                for (l_557.f3 = 0; (l_557.f3 <= (-25)); l_557.f3 = safe_sub_func_uint32_t_u_u(l_557.f3, 6))
                {
                    return g_501.f2;
                }
                l_632 = p_29;
                l_1106 = (g_48.f4 = p_31);
            }
            for (l_771 = 0; (l_771 > (-25)); l_771--)
            {
                struct S0 l_1110 = {11,2494,62,4L,615,417,0,12,0,-0};
                l_1110 = l_1109;
                l_557.f4 = (+(safe_mod_func_uint32_t_u_u(((g_554[0].f2 , g_501) , (l_1109.f9 = (((safe_rshift_func_int8_t_s_u(((l_1109.f9 < 0x36BDEB35L) , l_1115), 3)) , p_29.f2) ^ (p_28 , (safe_rshift_func_int8_t_s_s(g_501.f2, p_29.f3)))))), g_48.f3)));
            }
            g_554[0] = g_48;
            for (l_1074.f3 = (-24); (l_1074.f3 >= 1); l_1074.f3 = safe_add_func_int32_t_s_s(l_1074.f3, 7))
            {
                char l_1124 = 0L;
                if ((safe_add_func_uint32_t_u_u(p_29.f2, (g_414[2].f8 = g_414[2].f8))))
                {
                    for (g_126.f3 = 0; (g_126.f3 < 7); ++g_126.f3)
                    {
                        if (l_1124)
                            break;
                        return g_126.f0;
                    }

                                    }
                else
                {
                    unsigned l_1126[3];
                    struct S0 l_1144 = {6,739,178,0x0FL,2335,-244,0,29,4,-0};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1126[i] = 0x3AA27D86L;
                    g_91 = p_29;
                    p_29.f4 = g_1125;
                    if (l_1126[2])
                    {
                        unsigned l_1127 = 0x13B5213FL;
                        return l_1127;
                    }
                    else
                    {
                        struct S0 l_1128[9] = {{11,6571,67,5L,1974,769,0,9,-3,0},{11,6571,67,5L,1974,769,0,9,-3,0},{11,6571,67,5L,1974,769,0,9,-3,0},{11,6571,67,5L,1974,769,0,9,-3,0},{11,6571,67,5L,1974,769,0,9,-3,0},{11,6571,67,5L,1974,769,0,9,-3,0},{11,6571,67,5L,1974,769,0,9,-3,0},{11,6571,67,5L,1974,769,0,9,-3,0},{11,6571,67,5L,1974,769,0,9,-3,0}};
                        int i;
                        l_1075 = (l_1128[6] = g_414[6]);
                        if (p_29.f4)
                            break;
                    }
                    for (l_684 = 27; (l_684 < 39); l_684 = safe_add_func_uint32_t_u_u(l_684, 4))
                    {
                        unsigned char l_1145 = 251UL;
                        struct S1 l_1147 = {-6,22092,4957,9744,5};
                        struct S0 l_1149[2][1] = {{{16,11026,29,0xC8L,807,-189,0,30,3,-0}},{{16,11026,29,0xC8L,807,-189,0,30,3,-0}}};
                        int i, j;
                        g_554[0].f8 = func_34(((l_1126[0] | (g_554[0].f3 = 0L)) < ((l_734.f0 <= (safe_unary_minus_func_int8_t_s((l_1124 != func_34((((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(g_33[6][1][1], 1)), 6)) , l_1126[2]) , ((g_829 = (safe_mod_func_uint8_t_u_u((l_1148 , g_48.f9), p_30))) >= g_554[0].f6)), p_29.f3)), g_554[0].f8)) >= g_126.f1) >= l_1147.f2), g_23, g_414[2]))))) < p_29.f3)), l_1074.f0, l_1149[0][0]);
                        p_29.f4 = (safe_mod_func_uint32_t_u_u(g_118, (-4L)));
                    }
                }
                for (l_949.f3 = 8; (l_949.f3 == 24); ++l_949.f3)
                {
                    l_1109.f9 = g_48.f5;
                    for (g_126.f3 = 0; (g_126.f3 <= 3); g_126.f3 += 1)
                    {
                        int i, j, k;
                        if (l_1146[(g_126.f3 + 5)][g_126.f3][g_126.f3])
                            break;
                    }

                                        g_117 = (safe_sub_func_uint32_t_u_u(g_554[0].f0, 7UL));
                }
            }
        }
        for (p_30 = 19; (p_30 > 31); p_30++)
        {
            union U2 l_1159[10] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
            int i;
            for (l_1020.f0 = 0; (l_1020.f0 <= 2); l_1020.f0 += 1)
            {
                char l_1166[6][4];
                union U3 l_1168 = {0x3936E5D3L};
                int i, j;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_1166[i][j] = 0x9AL;
                }
                for (g_501.f1 = 0; (g_501.f1 <= 2); g_501.f1 += 1)
                {
                    int i, j, k;
                    g_414[(g_501.f1 + 6)] = g_414[9];
                    if (g_279[(l_1020.f0 + 4)][g_501.f1][(g_501.f1 + 3)])
                    {
                        struct S0 l_1158 = {14,13708,76,-1L,2465,756,0,23,-0,0};
                        p_29.f2 = (-3L);
                        g_414[(g_501.f1 + 6)] = l_1158;
                        if (p_31)
                            continue;
                    }
                    else
                    {
                        unsigned l_1162 = 4294967295UL;
                        int i, j, k;
                        p_29 = func_49(func_53(l_1159[1], l_1148, g_554[0].f6, (p_29.f3 = (g_554[0].f7 < (p_29.f1 = p_29.f0))), g_554[0].f5), (g_279[(g_501.f1 + 1)][l_1020.f0][(l_1020.f0 + 2)] = ((func_49(l_1020, (safe_rshift_func_int16_t_s_s((((g_344 | g_427[0].f2) , g_268) , l_1162), g_279[2][1][5])), g_414[2]) , g_126.f1) , p_29.f2)), l_557);
                        g_48 = (g_554[2] = g_554[5]);
                    }
                    for (l_1075.f3 = 2; (l_1075.f3 >= 0); l_1075.f3 -= 1)
                    {
                        struct S0 l_1167 = {7,14313,171,2L,-2221,-786,0,18,-3,-0};
                        g_553 = (func_49(l_1159[7], g_554[0].f3, g_554[2]) , func_34((p_28 & func_34(((l_1163 = l_1159[6]) , (((((safe_lshift_func_uint16_t_u_u(l_1090, 1)) < func_34(l_1166[2][3], l_1075.f8, l_1167)) , p_29.f0) , l_1168) , g_91.f4)), p_29.f2, g_414[2])), p_29.f0, l_1075));
                    }
                }

                            }
            if ((p_29 , (safe_sub_func_uint16_t_u_u(l_1159[1].f0, g_554[0].f2))))
            {
                return p_29.f1;
            }
            else
            {
                l_1171[0] = 1L;
            }
        }
        g_414[2].f4 = (safe_div_func_uint32_t_u_u(((((safe_sub_func_uint32_t_u_u(g_554[0].f7, l_1074.f5)) != 65535UL) , ((safe_div_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(((p_28 , (g_48.f3 , (l_1075.f9 = (safe_div_func_int32_t_s_s(p_30, 0xE8F4E9A4L))))) > (l_1103 && ((l_1075.f8 = (l_1091.f9 = (((g_1035 = ((g_554[0].f8 < 249UL) & l_1020.f1)) , 65527UL) & g_554[0].f4))) == p_29.f1))), p_29.f3)) | 0x75DAL), 0xF9908DAFL)) < (-2L))) , g_414[2].f5), l_632.f3));
        g_283[6][3][0] = (g_48.f6 , (l_1074.f9 = (((((g_48.f2 | (p_31 , func_34(((((0x8EL <= (((safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s((~(~(((safe_rshift_func_int8_t_s_s(0x27L, 7)) <= (0x39L ^ (safe_rshift_func_uint16_t_u_u((l_1190 > g_48.f2), 13)))) | ((l_1075.f4 = (p_30 = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_31, l_1091.f3)), 7)))) , g_126.f1)))), 0x1766L)), 0L)) == g_59.f2) != l_1148.f0)) , g_126) , 7UL) && g_427[0].f2), p_29.f4, l_1091))) != 8UL) & l_1195) ^ l_1163.f2) > 0x9E36L)));
    }

        return l_661[0].f2;
}







static unsigned func_34(unsigned short p_35, unsigned p_36, struct S0 p_37)
{
    unsigned short l_555 = 3UL;
    p_37.f9 = l_555;
    return p_35;
}







static union U3 func_41(int p_42, struct S1 p_43, unsigned p_44, struct S0 p_45, short p_46)
{
    union U3 l_66[5][5][10] = {{{{-9L},{1L},{0x4CD53591L},{-1L},{0xEB95E994L},{0x587DEF5AL},{0x24E13FEAL},{0L},{1L},{0xD9849165L}},{{0x95B9239CL},{-3L},{-10L},{0x1B025B1AL},{4L},{-1L},{-8L},{0L},{-1L},{7L}},{{0x075F43C6L},{1L},{0x893D9136L},{0x3E38F49DL},{-1L},{6L},{0x1B025B1AL},{0L},{0x5E0BD005L},{0xD1A269FDL}},{{1L},{0x02EA278FL},{0xE439E4EAL},{0x9F0D2B77L},{-1L},{0x4CED5A68L},{0x5F77C436L},{-1L},{0L},{-9L}},{{0x587DEF5AL},{0L},{0x9F0D2B77L},{-1L},{0x8A5BFF83L},{0L},{0x296D7DE8L},{6L},{0L},{0L}}},{{{0L},{-1L},{-4L},{0L},{0x24E13FEAL},{0x8D5DA263L},{0x7A216D7EL},{-10L},{0L},{0L}},{{-1L},{0L},{4L},{0L},{-1L},{-8L},{0x204FE417L},{-8L},{1L},{0xEB95E994L}},{{0x893D9136L},{0x5E0BD005L},{-1L},{0xD74E5B04L},{1L},{0L},{1L},{0xD74E5B04L},{-1L},{0x5E0BD005L}},{{0x848B2A49L},{0xD1A269FDL},{1L},{0x2778613AL},{6L},{0x204FE417L},{0x587DEF5AL},{2L},{0x24E13FEAL},{8L}},{{-6L},{0L},{0L},{0xE439E4EAL},{-1L},{1L},{0x48786719L},{-1L},{1L},{0x0D852C2AL}}},{{{6L},{-1L},{7L},{-1L},{-4L},{0x5E0BD005L},{0x1F75FC54L},{-1L},{0x95B9239CL},{-1L}},{{0xED7233D1L},{1L},{0x587DEF5AL},{0L},{-1L},{-8L},{-1L},{-1L},{0L},{0xD74E5B04L}},{{0L},{0xED7233D1L},{-4L},{7L},{0xEB95E994L},{-1L},{1L},{0x08589394L},{0x7A216D7EL},{8L}},{{0L},{1L},{0L},{0x02EA278FL},{-1L},{0L},{-1L},{0xD1A269FDL},{0x08589394L},{0x587DEF5AL}},{{0x02EA278FL},{6L},{7L},{-6L},{-10L},{0x8A5BFF83L},{7L},{0x587DEF5AL},{-1L},{-1L}}},{{{0x2B617F2EL},{-1L},{0xD0F98E72L},{-1L},{0x204FE417L},{-10L},{6L},{-3L},{0x48786719L},{0x02EA278FL}},{{6L},{0x075F43C6L},{0L},{0x95B9239CL},{0x587DEF5AL},{0L},{-1L},{-8L},{6L},{6L}},{{0x48786719L},{0L},{0x02EA278FL},{-8L},{-8L},{0x02EA278FL},{0L},{0x48786719L},{0x4CED5A68L},{-8L}},{{0x1B025B1AL},{0x8D5DA263L},{2L},{0x9F0D2B77L},{0xD0F98E72L},{7L},{0x311AD497L},{-1L},{-1L},{0x4A8206D7L}},{{-8L},{0L},{0x24E13FEAL},{0L},{0xE439E4EAL},{0x162BBD67L},{0x94CF7123L},{-4L},{-1L},{0x8A2E7C99L}}},{{{-10L},{1L},{0xD0F98E72L},{0x3E38F49DL},{0L},{7L},{0L},{0xD0123104L},{0L},{-1L}},{{1L},{-1L},{4L},{-1L},{1L},{6L},{0x8D5DA263L},{0L},{0x0D852C2AL},{0L}},{{0L},{0x587DEF5AL},{0L},{0xD0123104L},{-1L},{0x8A2E7C99L},{0L},{0x94CF7123L},{-1L},{0x075F43C6L}},{{8L},{0x8A2E7C99L},{0L},{0L},{-8L},{-8L},{-6L},{6L},{7L},{0x9F0D2B77L}},{{0L},{0x8D5DA263L},{-1L},{-8L},{0x893D9136L},{0L},{0xE439E4EAL},{8L},{0x48786719L},{-1L}}}};
    int l_67 = 5L;
    short l_424 = 1L;
    int l_425[3];
    union U2 l_426[5][5][6] = {{{{0xE21A9229L},{0x53A63A8EL},{1UL},{4294967294UL},{0xD35BC134L},{0xC79D7E46L}},{{0UL},{0x08D6A647L},{0xF0308F76L},{6UL},{0x0A7BE17FL},{0x086FE8D9L}},{{1UL},{4294967287UL},{5UL},{4294967287UL},{1UL},{0xB3B4B3ADL}},{{2UL},{5UL},{4294967293UL},{0xC79D7E46L},{1UL},{4294967293UL}},{{6UL},{0UL},{0x25DBC122L},{5UL},{0UL},{4294967293UL}}},{{{4294967293UL},{0UL},{4294967293UL},{1UL},{0xF0308F76L},{4294967288UL}},{{4294967287UL},{0x086FE8D9L},{0x189746B8L},{1UL},{0x08D6A647L},{0xE21A9229L}},{{4294967295UL},{0UL},{0xDFB6F59BL},{0xA66BEE1DL},{0x086FE8D9L},{4294967295UL}},{{0x5B6F6951L},{8UL},{8UL},{0UL},{4UL},{1UL}},{{0xA66BEE1DL},{4294967294UL},{0xEF2A0DBBL},{0UL},{1UL},{0UL}}},{{{4294967295UL},{4294967292UL},{0xF0308F76L},{1UL},{0x10006118L},{0UL}},{{4294967292UL},{0UL},{4294967295UL},{8UL},{0x0A7BE17FL},{0x0A7BE17FL}},{{4294967293UL},{1UL},{1UL},{4294967293UL},{0xEF2A0DBBL},{0x5B6F6951L}},{{4294967293UL},{0xB3B4B3ADL},{0UL},{0x0A7BE17FL},{0x7C1ADC3DL},{0x189746B8L}},{{0xF7A8A840L},{4294967292UL},{0UL},{0xDFB6F59BL},{0x7C1ADC3DL},{1UL}}},{{{0x53A63A8EL},{0xB3B4B3ADL},{0UL},{0UL},{0xEF2A0DBBL},{0UL}},{{0UL},{1UL},{4294967294UL},{4294967288UL},{0x0A7BE17FL},{0UL}},{{0UL},{0UL},{4294967293UL},{0x08D6A647L},{0x10006118L},{8UL}},{{0xB3B4B3ADL},{4294967292UL},{4294967295UL},{0x7A669870L},{1UL},{0x086FE8D9L}},{{0UL},{4294967294UL},{1UL},{0x7DE75E60L},{4UL},{0xF0308F76L}}},{{{0UL},{8UL},{0x08D6A647L},{4294967295UL},{0x086FE8D9L},{0xDFB6F59BL}},{{4294967288UL},{0UL},{4UL},{4294967295UL},{2UL},{4294967295UL}},{{0UL},{0xF7A8A840L},{0UL},{0xF3A89607L},{8UL},{2UL}},{{0x25DBC122L},{1UL},{0x7A669870L},{0xE21A9229L},{0xD35BC134L},{4294967293UL}},{{4294967294UL},{1UL},{0x53A63A8EL},{0xE21A9229L},{8UL},{0xF3A89607L}}}};
    int l_428 = 0x3CDC563DL;
    struct S0 l_433 = {7,9729,123,0L,2298,1007,1,6,4,0};
    struct S1 l_466 = {15,17806,-2435,11161,-2};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_425[i] = (-7L);
    p_43 = func_49(func_53(g_59, func_60(l_66[0][1][6], p_45, g_59.f1, (l_67 = l_66[0][1][6].f1), p_44), l_66[0][1][6].f3, (safe_lshift_func_uint16_t_u_s(g_344, 1)), l_66[0][1][6].f3), g_33[6][1][1], g_414[2]);

        for (g_59.f2 = (-20); (g_59.f2 >= 32); ++g_59.f2)
    {
        union U3 l_418 = {-10L};
        int l_423 = 0L;
        union U2 l_429 = {0x36526EBEL};
        char l_430 = 0x20L;
        struct S0 l_441 = {6,9827,100,0xE4L,-144,-689,0,16,0,-0};
        unsigned l_447 = 0x74BAD486L;
        unsigned char l_470[5] = {246UL,246UL,246UL,246UL,246UL};
        unsigned l_514 = 4294967291UL;
        int i;
        g_91 = func_49(((l_418 = l_66[0][1][6]) , g_59), ((safe_add_func_int8_t_s_s(l_67, (l_423 | ((l_425[2] = l_424) >= g_59.f2)))) ^ ((g_427[0] = l_426[0][0][0]) , ((l_428 = p_44) < ((l_429 , p_43.f3) ^ l_430)))), p_45);
        for (g_32 = (-3); (g_32 >= 20); g_32++)
        {
            struct S1 l_434 = {8,1463,13242,5668,-4};
            int l_510 = (-9L);
            l_433 = g_414[9];
            if ((((!(g_414[9] , (0x3E8BL || ((((l_434 = g_91) , l_418.f1) , (g_427[0].f2 = (safe_add_func_uint32_t_u_u(0xE4C26C03L, g_48.f6)))) ^ g_48.f0)))) , (l_428 | (l_433.f8 = (0xBC045CB3L ^ 0x00EBC22CL)))) > 0xD5A3L))
            {
                p_45.f9 = (g_414[2].f9 != 0x216349C9L);
            }
            else
            {
                union U3 l_444[9] = {{-8L},{-8L},{-8L},{-8L},{-8L},{-8L},{-8L},{-8L},{-8L}};
                int i;
                for (p_42 = 0; (p_42 < 25); p_42 = safe_add_func_uint16_t_u_u(p_42, 1))
                {
                    for (g_126.f1 = 0; (g_126.f1 > 1); g_126.f1 = safe_add_func_uint8_t_u_u(g_126.f1, 2))
                    {
                        l_441 = p_45;
                        return g_126;

                                            }
                    for (l_429.f0 = 0; (l_429.f0 <= 47); l_429.f0++)
                    {
                        if (l_434.f2)
                            break;
                    }
                    for (g_118 = 0; (g_118 <= 4); g_118 += 1)
                    {
                        g_91 = p_43;
                        l_441.f4 = g_91.f4;
                        g_283[6][0][3] = (g_48 , l_429.f0);
                    }
                    return g_126;

                                    }
                g_91 = p_43;
                return l_444[3];

                            }
            g_414[2].f4 = (l_66[0][1][6] , (4294967290UL & ((!(((safe_div_func_uint8_t_u_u(((((l_447 = l_430) < (safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(p_45.f4, g_48.f7)), (1UL != l_441.f3))) != (l_441.f4 = ((((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(p_43.f1, 12)), 12)), 3)), (-10L))), 0x3ED9L)) , g_91.f2) || g_32) != g_48.f8))), 6))) , p_43.f0) < 0xBDL), p_46)) <= p_43.f2) == l_433.f9)) , l_433.f7)));
            for (l_423 = 0; (l_423 > 15); l_423 = safe_add_func_uint32_t_u_u(l_423, 7))
            {
                unsigned char l_473 = 0xF9L;
                int l_474 = 0x209B1B18L;
                g_91.f4 = (((l_466 , l_66[3][4][2]) , p_45.f6) | (safe_unary_minus_func_int32_t_s(((safe_div_func_int8_t_s_s((((p_46 | (p_45.f6 , 6UL)) | p_43.f2) , (p_45.f1 == p_45.f8)), l_66[0][1][6].f0)) >= l_470[3]))));
                for (g_174 = 0; (g_174 >= 15); ++g_174)
                {
                    p_43.f0 = ((((p_43.f1 , 0x3AE1L) >= l_473) , (l_474 = l_418.f1)) && (safe_rshift_func_int16_t_s_u((g_91.f0 && p_45.f3), 12)));
                    l_441 = l_433;
                }
                for (g_126.f1 = 0; (g_126.f1 >= (-10)); --g_126.f1)
                {
                    unsigned l_485 = 0x8159DD8CL;
                    union U3 l_500 = {1L};
                }
            }
        }
        p_43.f4 = l_433.f5;
        for (l_430 = 0; (l_430 > (-9)); l_430 = safe_sub_func_int16_t_s_s(l_430, 5))
        {
            unsigned char l_513 = 0x97L;
            struct S0 l_519 = {11,9125,4,1L,1026,-768,0,25,-0,-0};
            union U3 l_547 = {0x8E99E6F6L};
            l_513 = 0x31A1DCF3L;
            for (g_117 = 0; (g_117 >= 0); g_117 -= 1)
            {
                int i, j, k;
                p_42 = ((g_427[0].f2 , l_514) && (safe_mod_func_int8_t_s_s((g_427[g_117] , ((g_414[2].f1 = ((l_426[(g_117 + 4)][g_117][(g_117 + 4)] , l_418.f0) == ((l_519 = p_45) , ((safe_div_func_uint16_t_u_u((l_441.f8 ^ (safe_mod_func_uint8_t_u_u(l_429.f0, 4UL))), g_414[2].f2)) >= l_426[(g_117 + 4)][g_117][(g_117 + 4)].f2)))) , 0x1BL)), 0xECL)));
                return l_66[0][1][6];

                            }
            for (l_519.f3 = (-20); (l_519.f3 < 26); ++l_519.f3)
            {
                unsigned short l_526 = 65529UL;
                p_43 = (l_526 , (p_45.f2 , func_49((g_59 , l_426[0][0][0]), l_526, l_433)));
                for (l_424 = (-1); (l_424 > 13); l_424 = safe_add_func_uint8_t_u_u(l_424, 1))
                {
                    g_48.f8 = p_42;
                    p_43.f2 = ((safe_lshift_func_uint8_t_u_u(p_45.f1, (g_48.f9 < l_426[0][0][0].f2))) == p_45.f3);
                }
                g_501.f0 = p_46;
                for (l_424 = 0; (l_424 == (-10)); l_424--)
                {
                    unsigned char l_540 = 0xACL;
                    for (g_118 = (-1); (g_118 > 39); g_118 = safe_add_func_uint16_t_u_u(g_118, 4))
                    {
                        g_414[2] = g_414[2];
                    }
                    p_42 = (!((safe_add_func_int16_t_s_s(g_537, (((safe_mod_func_uint16_t_u_u((g_279[2][1][5] = (!p_45.f7)), l_540)) >= p_42) < (safe_rshift_func_int16_t_s_u(l_441.f5, 15))))) >= (l_433.f9 = (p_43.f3 = (safe_div_func_int32_t_s_s(l_526, (g_91 , (-1L))))))));
                }
            }
            p_43 = (l_547 , l_466);
        }
    }

            for (p_45.f3 = 2; (p_45.f3 >= 0); p_45.f3 -= 1)
    {
        union U2 l_552 = {0x22C0A490L};
        int i;
        g_414[2].f9 = ((((p_45.f6 = (+8UL)) == l_425[p_45.f3]) >= g_33[5][3][5]) && ((l_425[p_45.f3] = (safe_sub_func_uint8_t_u_u((p_46 & (g_414[2].f3 = (safe_sub_func_uint32_t_u_u((((5L != (0xC6C3L <= l_66[0][1][6].f1)) && (!(l_428 > ((l_66[0][1][6].f2 || 7UL) < 0UL)))) != g_501.f3), l_425[p_45.f3])))), g_48.f1))) & (-5L)));
        g_91 = func_49((g_427[0] = l_552), g_414[2].f3, g_414[9]);
    }
    g_48.f9 = p_45.f8;
    return g_126;

    }







static struct S1 func_49(union U2 p_50, unsigned short p_51, struct S0 p_52)
{
    struct S1 l_415 = {15,3289,6256,7581,-3};
    return l_415;
}







static union U2 func_53(union U2 p_54, union U3 p_55, unsigned char p_56, unsigned p_57, char p_58)
{
    struct S1 l_405[2] = {{-7,21417,-239,10217,-3},{-7,21417,-239,10217,-3}};
    int i;
    for (p_55.f2 = (-29); (p_55.f2 < (-18)); ++p_55.f2)
    {
        struct S1 l_413 = {-4,13866,12165,15729,2};
        g_48.f5 = p_54.f0;
        for (g_48.f3 = 0; (g_48.f3 < (-9)); g_48.f3 = safe_sub_func_int16_t_s_s(g_48.f3, 9))
        {
            struct S1 l_404 = {-6,438,1998,5225,6};
            l_405[0] = (g_91 = l_404);
            for (g_59.f3 = 24; (g_59.f3 > 60); g_59.f3 = safe_add_func_uint8_t_u_u(g_59.f3, 1))
            {
                struct S0 l_408 = {6,6205,65,-1L,2329,931,0,24,-4,-0};
                l_408 = g_48;
                if (p_54.f2)
                    continue;
            }

                        for (g_174 = (-25); (g_174 == (-26)); g_174--)
            {
                for (p_57 = 15; (p_57 != 7); --p_57)
                {
                    return g_59;

                                    }
            }
        }
        l_413 = (p_54 , l_413);
    }
    return g_59;

    }







static union U3 func_60(union U3 p_61, struct S0 p_62, int p_63, char p_64, int p_65)
{
    unsigned l_80 = 0xD1396874L;
    struct S0 l_89 = {21,10111,66,-2L,-2131,-1016,1,10,1,0};
    unsigned l_90[6][10] = {{0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L},{0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L},{0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L},{0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L},{0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L},{0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L,0xA3471AF2L,0x9EE1F001L}};
    union U2 l_133 = {1UL};
    unsigned short l_156 = 0x2560L;
    union U3 l_161[2][3][3] = {{{{0x2F2861A5L},{0x2F2861A5L},{0x2F2861A5L}},{{0x83CC13FCL},{0x83CC13FCL},{0x83CC13FCL}},{{0x2F2861A5L},{0x2F2861A5L},{0x2F2861A5L}}},{{{0x83CC13FCL},{0x83CC13FCL},{0x83CC13FCL}},{{0x2F2861A5L},{0x2F2861A5L},{0x2F2861A5L}},{{0x83CC13FCL},{0x83CC13FCL},{0x83CC13FCL}}}};
    struct S0 l_233 = {2,1106,148,1L,-574,88,1,5,-4,-0};
    unsigned char l_269 = 0x4AL;
    unsigned char l_353 = 0xD1L;
    union U3 l_364 = {0x4613ED82L};
    unsigned l_388 = 0xC10962E3L;
    int l_389 = 0x6885D054L;
    int i, j, k;
    if ((((safe_sub_func_uint8_t_u_u(0xE6L, (safe_sub_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(((p_61.f1 , ((l_80 == (p_61.f2 = (g_48.f5 == (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(p_62.f8, 2)), p_61.f1))))) <= (safe_sub_func_int8_t_s_s(((4L ^ (safe_sub_func_int32_t_s_s(((((((((l_89 = p_62) , ((((((((0xDFL & l_89.f9) <= 1UL) && l_89.f8) | (-1L)) , l_80) != (-8L)) >= g_48.f9) || l_90[4][4])) , g_48.f0) , (-1L)) < 0x5C9B18AFL) & l_80) < 4UL) ^ 8UL), p_62.f3))) < l_80), 0x52L)))) && p_62.f6), p_65)), g_59.f2)), g_23)), 0x2475L)) <= g_48.f9) , l_89.f5), g_33[6][1][1])))) >= p_62.f2) < g_48.f3))
    {
        struct S1 l_92 = {4,20003,-7821,7052,3};
        struct S1 l_93 = {14,14594,-15373,3771,-2};
        l_93 = (l_92 = g_91);
    }
    else
    {
        char l_95 = 5L;
        int l_125 = (-4L);
        struct S0 l_198 = {3,1624,112,8L,-1700,434,1,23,4,0};
        struct S0 l_199 = {21,11927,48,0x4EL,116,-738,0,6,4,0};
        unsigned short l_228[1][8] = {{0x1C97L,65535UL,0x1C97L,0x1C97L,65535UL,0x1C97L,0x1C97L,65535UL}};
        struct S1 l_274 = {-4,12942,-8563,2403,4};
        union U3 l_306 = {0x2ED4B8A7L};
        int l_328 = (-10L);
        int i, j;
        for (p_61.f0 = 0; (p_61.f0 <= 5); p_61.f0 += 1)
        {
            int l_94[6] = {3L,3L,3L,3L,3L,3L};
            int l_142 = 1L;
            struct S0 l_157 = {8,45,155,0xF9L,-2218,-906,1,16,2,0};
            short l_158 = 0x7921L;
            unsigned l_165 = 4294967295UL;
            unsigned short l_180 = 0xBD19L;
            int i;
            for (l_80 = 0; (l_80 <= 5); l_80 += 1)
            {
                int l_143[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_143[i] = 0L;
                p_62.f8 = ((l_90[l_80][(l_80 + 4)] >= l_94[1]) <= l_90[l_80][(l_80 + 4)]);
                if (l_95)
                {
                    unsigned char l_96 = 0x69L;
                    g_91.f0 = ((g_48 , (l_96 != ((safe_rshift_func_int16_t_s_u((!((g_119 = (l_89.f8 == (g_48.f5 = ((((l_89.f9 = (safe_div_func_int8_t_s_s((g_91 , (safe_rshift_func_uint8_t_u_s(p_62.f7, 7))), (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((((l_89.f4 = (~((safe_rshift_func_int8_t_s_u(l_94[1], 3)) & (g_118 = (safe_div_func_uint8_t_u_u((g_117 = g_23), (((l_89.f4 && (((g_48.f3 = l_94[1]) & 8UL) || p_62.f9)) == 0x526EL) | p_62.f2))))))) <= p_62.f5) || 0xF1B771C4L) , l_90[l_80][(l_80 + 4)]), 2)), 0x1F2C1B0FL)), g_59.f1)), 5)) != g_91.f2), l_96))))) , p_61.f3) > g_59.f0) & g_91.f2)))) ^ p_62.f9)), 8)) >= p_62.f6))) >= 0x40EEEA59L);
                    g_48.f9 = 0xADFC8735L;
                }
                else
                {
                    p_62.f4 = (safe_add_func_uint8_t_u_u((p_62.f2 , (safe_mod_func_int8_t_s_s(g_48.f7, g_33[1][3][2]))), (l_89.f4 , (g_91.f0 < l_90[l_80][(l_80 + 4)]))));
                    return p_61;

                                    }
                for (g_32 = 0; (g_32 <= 5); g_32 += 1)
                {
                    struct S0 l_124[1][8] = {{{4,3402,60,0x16L,-2044,665,0,9,1,-0},{4,4220,134,1L,-1167,466,0,30,-4,0},{4,4220,134,1L,-1167,466,0,30,-4,0},{4,3402,60,0x16L,-2044,665,0,9,1,-0},{4,4220,134,1L,-1167,466,0,30,-4,0},{4,4220,134,1L,-1167,466,0,30,-4,0},{4,3402,60,0x16L,-2044,665,0,9,1,-0},{4,4220,134,1L,-1167,466,0,30,-4,0}}};
                    struct S1 l_128[3] = {{0,16565,-6598,15019,0},{0,16565,-6598,15019,0},{0,16565,-6598,15019,0}};
                    int i, j;
                    l_89 = l_124[0][5];
                    if ((l_125 = g_48.f1))
                    {
                        return g_126;

                                            }
                    else
                    {
                        int l_127[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                        struct S1 l_129[8][4] = {{{-7,5774,3487,7141,-3},{-7,5774,3487,7141,-3},{1,18974,-540,7776,1},{5,18938,-9072,6136,-6}},{{-7,5774,3487,7141,-3},{7,21566,-1093,8470,-4},{0,2062,10282,8073,-4},{-7,5774,3487,7141,-3}},{{0,15426,-7120,12959,-0},{5,18938,-9072,6136,-6},{0,15426,-7120,12959,-0},{0,2062,10282,8073,-4}},{{11,1494,6794,13489,6},{5,18938,-9072,6136,-6},{1,18974,-540,7776,1},{-7,5774,3487,7141,-3}},{{5,18938,-9072,6136,-6},{7,21566,-1093,8470,-4},{7,21566,-1093,8470,-4},{5,18938,-9072,6136,-6}},{{0,15426,-7120,12959,-0},{-7,5774,3487,7141,-3},{7,21566,-1093,8470,-4},{0,2062,10282,8073,-4}},{{5,18938,-9072,6136,-6},{11,1494,6794,13489,6},{1,18974,-540,7776,1},{11,1494,6794,13489,6}},{{11,1494,6794,13489,6},{7,21566,-1093,8470,-4},{0,15426,-7120,12959,-0},{11,1494,6794,13489,6}}};
                        int l_132 = (-8L);
                        int i, j;
                        g_126.f0 = (-5L);
                        l_127[1] = p_62.f9;
                        l_129[7][3] = l_128[2];
                        g_48.f5 = ((l_129[3][3] , (l_143[0] = (l_142 = (((((((((((((((l_129[7][3].f4 = g_126.f1) < l_132) && (l_129[7][3].f3 < l_90[4][4])) , l_133) , g_48.f8) , ((l_124[0][5].f8 = (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((1UL && l_90[l_80][(l_80 + 4)]), 13)), 3L)), (-1L))), 0xAB8816B1L))) >= p_63)) ^ g_48.f6) , p_62.f6) != 0xC255L) && 65527UL) > 0UL) , p_61.f0) || l_94[1]) , p_61.f3) | 0xB8F5F604L)))) | 8UL);
                    }
                    p_62.f5 = g_118;
                    l_124[0][5].f4 = (safe_add_func_int32_t_s_s(l_95, l_142));
                }
            }
            if (l_133.f1)
            {
                if (((((g_33[4][2][5] || (safe_sub_func_int16_t_s_s(9L, (g_59.f0 ^ ((g_119 = (!(p_62.f1 = (safe_lshift_func_uint8_t_u_u(g_23, 6))))) > g_91.f4))))) , g_126.f1) <= 0xA8L) , ((l_142 = (safe_add_func_int32_t_s_s(p_63, (safe_sub_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u(p_62.f0, (-1L))) , g_126.f0) && p_62.f7), p_61.f0))))) == l_156)))
                {
                    g_91.f0 = g_117;
                }
                else
                {
                    g_48 = l_157;
                }
            }
            else
            {
                struct S1 l_162[2] = {{0,22410,-11273,6369,-5},{0,22410,-11273,6369,-5}};
                union U3 l_184 = {-6L};
                int i;
                if (((p_62.f7 >= (l_158 | (((safe_sub_func_uint32_t_u_u(l_133.f2, (p_61.f1 < g_126.f0))) != (g_32 <= (((g_48.f0 , p_62.f9) , ((((p_62.f1 == l_94[4]) , 0L) || g_126.f2) & l_125)) , p_62.f4))) & 0x32BBL))) == g_59.f2))
                {
                    unsigned l_183 = 4294967295UL;
                    g_91.f2 = (l_89.f1 >= ((((2L >= (l_161[0][0][0] , (l_162[0] , p_62.f2))) & g_59.f2) != 0x78L) | g_48.f6));
                    if (((safe_sub_func_uint32_t_u_u(((g_48 , g_48.f4) < (p_62.f9 >= l_162[0].f4)), 0x4C68921BL)) , ((l_165 , ((safe_add_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u(p_62.f3, (safe_lshift_func_uint16_t_u_s((0xA87C478BL < (safe_rshift_func_uint16_t_u_s((p_62.f0 > g_33[8][0][5]), l_89.f3))), g_59.f2)))) , l_165) | (-1L)), 0xF82B879CL)) | p_61.f3)) ^ 0x5C205D04L)))
                    {
                        g_174 = p_62.f0;
                    }
                    else
                    {
                        unsigned char l_175 = 0xF2L;
                        g_48.f9 = 6L;
                        if (l_175)
                            continue;
                    }
                    p_62.f8 = (((((safe_lshift_func_uint16_t_u_s(((g_119 == (safe_sub_func_int16_t_s_s((1UL == (l_180 > (safe_lshift_func_uint8_t_u_u(p_62.f8, 0)))), (l_183 = (~((g_91.f3 & p_61.f1) & (p_61.f2 , l_180))))))) ^ 2UL), 12)) <= 0x20607D1FL) < 252UL) <= 1L) || l_162[0].f4);
                }
                else
                {
                    int l_187 = 0L;
                    struct S1 l_188[9][2] = {{{11,8675,3181,6125,1},{11,8675,3181,6125,1}},{{11,8675,3181,6125,1},{11,8675,3181,6125,1}},{{11,8675,3181,6125,1},{11,8675,3181,6125,1}},{{11,8675,3181,6125,1},{11,8675,3181,6125,1}},{{11,8675,3181,6125,1},{11,8675,3181,6125,1}},{{11,8675,3181,6125,1},{11,8675,3181,6125,1}},{{11,8675,3181,6125,1},{11,8675,3181,6125,1}},{{11,8675,3181,6125,1},{11,8675,3181,6125,1}},{{11,8675,3181,6125,1},{11,8675,3181,6125,1}}};
                    struct S0 l_189[3][6][10] = {{{{6,5143,76,-10L,580,518,0,27,-0,-0},{15,11045,115,0L,-551,668,0,18,1,-0},{10,2876,161,0x01L,-173,758,0,1,-1,0},{15,11045,115,0L,-551,668,0,18,1,-0},{6,5143,76,-10L,580,518,0,27,-0,-0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0},{0,11862,142,0x7EL,12,-59,0,4,1,-0},{1,3599,4,0x95L,-972,-711,0,23,-2,0},{1,3599,4,0x95L,-972,-711,0,23,-2,0},{0,11862,142,0x7EL,12,-59,0,4,1,-0}},{{11,4902,102,0xFEL,-2738,543,0,0,-1,0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0},{5,1092,37,2L,29,695,0,5,-3,-0},{5,1092,37,2L,29,695,0,5,-3,-0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0},{11,4902,102,0xFEL,-2738,543,0,0,-1,0},{16,14776,97,-1L,1105,-621,1,15,-4,-0},{0,11862,142,0x7EL,12,-59,0,4,1,-0},{6,5143,76,-10L,580,518,0,27,-0,-0},{0,11862,142,0x7EL,12,-59,0,4,1,-0}},{{15,11045,115,0L,-551,668,0,18,1,-0},{5,1092,37,2L,29,695,0,5,-3,-0},{6,5143,76,-10L,580,518,0,27,-0,-0},{1,3599,4,0x95L,-972,-711,0,23,-2,0},{6,5143,76,-10L,580,518,0,27,-0,-0},{5,1092,37,2L,29,695,0,5,-3,-0},{15,11045,115,0L,-551,668,0,18,1,-0},{16,14776,97,-1L,1105,-621,1,15,-4,-0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{20,16351,157,0xD5L,-1554,560,1,25,4,0}},{{15,11045,115,0L,-551,668,0,18,1,-0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{11,4902,102,0xFEL,-2738,543,0,0,-1,0},{10,2876,161,0x01L,-173,758,0,1,-1,0},{10,2876,161,0x01L,-173,758,0,1,-1,0},{11,4902,102,0xFEL,-2738,543,0,0,-1,0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{15,11045,115,0L,-551,668,0,18,1,-0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0},{16,14776,97,-1L,1105,-621,1,15,-4,-0}},{{11,4902,102,0xFEL,-2738,543,0,0,-1,0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{15,11045,115,0L,-551,668,0,18,1,-0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0},{16,14776,97,-1L,1105,-621,1,15,-4,-0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0},{15,11045,115,0L,-551,668,0,18,1,-0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{11,4902,102,0xFEL,-2738,543,0,0,-1,0},{10,2876,161,0x01L,-173,758,0,1,-1,0}},{{6,5143,76,-10L,580,518,0,27,-0,-0},{5,1092,37,2L,29,695,0,5,-3,-0},{15,11045,115,0L,-551,668,0,18,1,-0},{16,14776,97,-1L,1105,-621,1,15,-4,-0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{16,14776,97,-1L,1105,-621,1,15,-4,-0},{15,11045,115,0L,-551,668,0,18,1,-0},{5,1092,37,2L,29,695,0,5,-3,-0},{6,5143,76,-10L,580,518,0,27,-0,-0}}},{{{5,1092,37,2L,29,695,0,5,-3,-0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0},{11,4902,102,0xFEL,-2738,543,0,0,-1,0},{16,14776,97,-1L,1105,-621,1,15,-4,-0},{0,11862,142,0x7EL,12,-59,0,4,1,-0},{6,5143,76,-10L,580,518,0,27,-0,-0},{0,11862,142,0x7EL,12,-59,0,4,1,-0},{16,14776,97,-1L,1105,-621,1,15,-4,-0},{11,4902,102,0xFEL,-2738,543,0,0,-1,0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0}},{{10,2876,161,0x01L,-173,758,0,1,-1,0},{15,11045,115,0L,-551,668,0,18,1,-0},{6,5143,76,-10L,580,518,0,27,-0,-0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0},{0,11862,142,0x7EL,12,-59,0,4,1,-0},{1,3599,4,0x95L,-972,-711,0,23,-2,0},{1,3599,4,0x95L,-972,-711,0,23,-2,0},{0,11862,142,0x7EL,12,-59,0,4,1,-0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0},{6,5143,76,-10L,580,518,0,27,-0,-0}},{{0,11862,142,0x7EL,12,-59,0,4,1,-0},{0,11862,142,0x7EL,12,-59,0,4,1,-0},{5,1092,37,2L,29,695,0,5,-3,-0},{10,2876,161,0x01L,-173,758,0,1,-1,0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{5,1092,37,2L,29,695,0,5,-3,-0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{5,1092,37,2L,29,695,0,5,-3,-0},{6,8057,174,1L,474,-52,0,9,4,-0},{6,5143,76,-10L,580,518,0,27,-0,-0}},{{6,5143,76,-10L,580,518,0,27,-0,-0},{1,3599,4,0x95L,-972,-711,0,23,-2,0},{6,5143,76,-10L,580,518,0,27,-0,-0},{5,1092,37,2L,29,695,0,5,-3,-0},{15,11045,115,0L,-551,668,0,18,1,-0},{16,14776,97,-1L,1105,-621,1,15,-4,-0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{16,14776,97,-1L,1105,-621,1,15,-4,-0},{15,11045,115,0L,-551,668,0,18,1,-0}},{{10,2876,161,0x01L,-173,758,0,1,-1,0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0},{10,2876,161,0x01L,-173,758,0,1,-1,0},{6,5143,76,-10L,580,518,0,27,-0,-0},{6,8057,174,1L,474,-52,0,9,4,-0},{5,1092,37,2L,29,695,0,5,-3,-0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{5,1092,37,2L,29,695,0,5,-3,-0},{6,8057,174,1L,474,-52,0,9,4,-0}},{{16,14776,97,-1L,1105,-621,1,15,-4,-0},{0,11862,142,0x7EL,12,-59,0,4,1,-0},{6,5143,76,-10L,580,518,0,27,-0,-0},{0,11862,142,0x7EL,12,-59,0,4,1,-0},{16,14776,97,-1L,1105,-621,1,15,-4,-0},{11,4902,102,0xFEL,-2738,543,0,0,-1,0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0},{5,1092,37,2L,29,695,0,5,-3,-0},{5,1092,37,2L,29,695,0,5,-3,-0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0}}},{{{20,16351,157,0xD5L,-1554,560,1,25,4,0},{11,4902,102,0xFEL,-2738,543,0,0,-1,0},{10,2876,161,0x01L,-173,758,0,1,-1,0},{10,2876,161,0x01L,-173,758,0,1,-1,0},{11,4902,102,0xFEL,-2738,543,0,0,-1,0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{15,11045,115,0L,-551,668,0,18,1,-0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0},{16,14776,97,-1L,1105,-621,1,15,-4,-0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0}},{{0,11862,142,0x7EL,12,-59,0,4,1,-0},{10,2876,161,0x01L,-173,758,0,1,-1,0},{16,14776,97,-1L,1105,-621,1,15,-4,-0},{5,1092,37,2L,29,695,0,5,-3,-0},{16,14776,97,-1L,1105,-621,1,15,-4,-0},{10,2876,161,0x01L,-173,758,0,1,-1,0},{0,11862,142,0x7EL,12,-59,0,4,1,-0},{15,11045,115,0L,-551,668,0,18,1,-0},{6,8057,174,1L,474,-52,0,9,4,-0},{6,8057,174,1L,474,-52,0,9,4,-0}},{{0,11862,142,0x7EL,12,-59,0,4,1,-0},{6,8057,174,1L,474,-52,0,9,4,-0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{6,5143,76,-10L,580,518,0,27,-0,-0},{6,5143,76,-10L,580,518,0,27,-0,-0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{6,8057,174,1L,474,-52,0,9,4,-0},{0,11862,142,0x7EL,12,-59,0,4,1,-0},{11,4902,102,0xFEL,-2738,543,0,0,-1,0},{15,11045,115,0L,-551,668,0,18,1,-0}},{{20,16351,157,0xD5L,-1554,560,1,25,4,0},{6,8057,174,1L,474,-52,0,9,4,-0},{0,11862,142,0x7EL,12,-59,0,4,1,-0},{11,4902,102,0xFEL,-2738,543,0,0,-1,0},{15,11045,115,0L,-551,668,0,18,1,-0},{11,4902,102,0xFEL,-2738,543,0,0,-1,0},{0,11862,142,0x7EL,12,-59,0,4,1,-0},{6,8057,174,1L,474,-52,0,9,4,-0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{6,5143,76,-10L,580,518,0,27,-0,-0}},{{16,14776,97,-1L,1105,-621,1,15,-4,-0},{10,2876,161,0x01L,-173,758,0,1,-1,0},{0,11862,142,0x7EL,12,-59,0,4,1,-0},{15,11045,115,0L,-551,668,0,18,1,-0},{6,8057,174,1L,474,-52,0,9,4,-0},{6,8057,174,1L,474,-52,0,9,4,-0},{15,11045,115,0L,-551,668,0,18,1,-0},{0,11862,142,0x7EL,12,-59,0,4,1,-0},{10,2876,161,0x01L,-173,758,0,1,-1,0},{16,14776,97,-1L,1105,-621,1,15,-4,-0}},{{10,2876,161,0x01L,-173,758,0,1,-1,0},{11,4902,102,0xFEL,-2738,543,0,0,-1,0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{15,11045,115,0L,-551,668,0,18,1,-0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0},{16,14776,97,-1L,1105,-621,1,15,-4,-0},{19,5954,139,0x3EL,2350,-278,0,15,-1,0},{15,11045,115,0L,-551,668,0,18,1,-0},{20,16351,157,0xD5L,-1554,560,1,25,4,0},{11,4902,102,0xFEL,-2738,543,0,0,-1,0}}}};
                    int i, j, k;
                    for (p_64 = 4; (p_64 >= 1); p_64 -= 1)
                    {
                        int i, j;
                        l_89.f5 = (0xCCL > ((!l_90[p_61.f0][(p_61.f0 + 4)]) > (((!l_90[p_61.f0][(p_64 + 3)]) != 1L) >= ((4294967295UL != l_95) & (l_157.f5 != ((l_184 = g_126) , ((l_125 & 0xFDB0A8ADL) , (-1L))))))));
                        p_62 = p_62;
                        l_187 = (safe_lshift_func_uint8_t_u_u(0x30L, 3));
                        g_91 = l_188[3][0];
                    }
                    for (p_65 = 5; (p_65 >= 1); p_65 -= 1)
                    {
                        int i, j;
                        p_62.f5 = ((l_90[p_61.f0][(p_61.f0 + 3)] ^ (l_184.f0 = ((l_125 < p_62.f4) & g_117))) <= (g_48.f4 = g_23));
                        g_126.f0 = g_48.f5;
                        p_62.f5 = (l_162[0].f1 != 4294967289UL);
                        p_62 = l_189[2][3][1];
                    }
                }
            }
            g_48.f8 = ((g_48.f6 || 0xA297L) , ((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((0x64C15202L <= ((safe_mod_func_uint32_t_u_u(l_94[1], g_59.f0)) || g_91.f0)), (p_62.f8 >= g_33[6][1][1]))), 15)) != (safe_lshift_func_int8_t_s_u(g_48.f0, p_64))));
            for (g_118 = 0; (g_118 <= 5); g_118 += 1)
            {
                l_198 = p_62;
                for (g_32 = 1; (g_32 <= 5); g_32 += 1)
                {
                    int i, j;
                    if (l_90[g_32][g_32])
                        break;
                    if (p_62.f0)
                        break;
                    g_91.f4 = (g_117 = p_62.f1);
                }
            }
            for (l_89.f3 = 0; (l_89.f3 <= 5); l_89.f3 += 1)
            {
                struct S0 l_211 = {19,14153,168,7L,-867,130,1,16,-3,0};
                int i, j;
                l_199 = l_157;
            }
        }

                if ((l_89.f1 ^ (safe_sub_func_int8_t_s_s((l_198.f2 , ((safe_mod_func_uint32_t_u_u(l_198.f9, (l_89.f6 & ((g_268 = (l_80 , (0x990B6805L || (g_119 = ((safe_div_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s((g_174 = (((p_61 , l_199.f4) , (0UL | g_126.f2)) ^ g_59.f0)), 12)) | g_48.f1) >= 1UL), 0x66C1L)) == 0xF9B688A5L))))) , p_62.f3)))) != p_62.f2)), p_62.f0))))
        {
            int l_280 = 0x168F052BL;
            struct S0 l_281[6] = {{5,9494,51,-8L,-1088,111,0,20,-0,-0},{5,9494,51,-8L,-1088,111,0,20,-0,-0},{5,9494,51,-8L,-1088,111,0,20,-0,-0},{5,9494,51,-8L,-1088,111,0,20,-0,-0},{5,9494,51,-8L,-1088,111,0,20,-0,-0},{5,9494,51,-8L,-1088,111,0,20,-0,-0}};
            struct S1 l_310 = {14,20907,13337,14446,-6};
            int l_367 = (-10L);
            int i;
            p_62.f9 = 1L;
            if (l_269)
            {
                struct S1 l_282 = {8,15945,-13666,13497,6};
                union U3 l_297 = {0x0E800A0CL};
                if (((safe_lshift_func_int8_t_s_u(p_65, (247UL != p_62.f9))) != (safe_div_func_uint32_t_u_u(((l_274 , (safe_add_func_int32_t_s_s(g_48.f9, g_48.f4))) , (l_199 , (p_61.f0 & (((g_126.f2 , g_59.f3) != g_279[2][1][5]) > l_280)))), 0xE053D588L))))
                {
                    for (p_62.f3 = 0; (p_62.f3 <= 0); p_62.f3 += 1)
                    {
                        g_48 = l_281[3];
                    }
                    g_48 = p_62;
                }
                else
                {
                    char l_284 = 0xA9L;
                    if ((l_282.f0 = ((l_282 , (g_283[6][3][0] = (g_279[3][2][0] = g_117))) != ((l_284 <= (safe_lshift_func_uint16_t_u_s(g_268, 6))) > (g_126.f3 , (safe_rshift_func_int16_t_s_s(g_117, 7)))))))
                    {
                        int l_296 = (-8L);
                        l_281[3].f8 = ((g_126.f3 == l_274.f2) < (safe_sub_func_uint8_t_u_u(((p_61 , (((l_161[0][0][0].f0 = (safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(l_282.f3)), 0xB5L)), p_61.f0))) <= ((l_199.f0 > (p_62.f2 = ((l_233.f0 == g_91.f3) >= 0xCDCFFA73L))) | g_117)) && p_62.f3)) == p_62.f7), l_296)));
                    }
                    else
                    {
                        return l_297;

                                            }
                    for (l_199.f3 = 0; (l_199.f3 < 4); l_199.f3 = safe_add_func_int8_t_s_s(l_199.f3, 7))
                    {
                        g_91.f4 = (0x9A37B8C2L < (g_33[6][1][1] <= g_174));
                        if (l_281[3].f2)
                            break;
                        g_48.f4 = (safe_lshift_func_uint8_t_u_u(((g_48.f3 = (p_64 = (((l_284 >= (safe_add_func_uint32_t_u_u(g_33[6][1][1], (p_62.f5 | l_297.f3)))) != p_62.f0) , (((safe_lshift_func_uint8_t_u_u((l_274.f3 >= g_48.f7), 0)) | p_61.f2) , (l_133.f1 <= (-8L)))))) > 0x8FL), p_62.f3));
                    }
                }
                g_48.f9 = l_89.f6;
                l_199.f5 = 0x283267B2L;
            }
            else
            {
                return l_306;

                            }
            for (g_126.f3 = 0; (g_126.f3 >= 16); g_126.f3 = safe_add_func_uint16_t_u_u(g_126.f3, 7))
            {
                struct S1 l_311 = {1,20500,11488,6291,-2};
                for (l_89.f3 = 3; (l_89.f3 >= 0); l_89.f3 -= 1)
                {
                    struct S1 l_309 = {-6,14232,-5944,7858,-3};
                    union U2 l_352 = {0xC657E521L};
                    if (g_59.f1)
                    {
                        return g_126;

                                            }
                    else
                    {
                        l_310 = l_309;
                        l_311 = l_274;
                    }
                    if (l_311.f0)
                    {
                        unsigned l_314 = 0x67904A97L;
                        l_311 = l_309;
                        g_91.f4 = (g_91.f0 >= (p_61.f2 = (l_314 > (((safe_lshift_func_int8_t_s_u(l_89.f7, (g_48.f8 & ((p_61.f2 , l_309.f1) | ((safe_unary_minus_func_uint32_t_u(0xE8BA9BF6L)) > (safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(((l_328 = (((0UL != ((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((p_62.f5 = ((l_199.f3 & g_48.f6) >= 65529UL)) == 4294967293UL) || 0xF1672A36L), l_311.f4)), 65531UL)) <= 0x0725L)) || l_281[3].f3) != l_309.f2)) | l_281[3].f8), l_310.f0)) ^ l_311.f3), 5))))))) , g_59.f2) == g_59.f2))));
                        g_48.f4 = l_311.f1;
                    }
                    else
                    {
                        struct S0 l_329 = {19,5306,99,1L,1631,721,1,6,0,0};
                        l_233 = l_329;
                        p_62.f8 = g_59.f1;
                        g_91 = l_274;
                        g_48 = p_62;
                    }
                    for (g_118 = 0; (g_118 <= 3); g_118 += 1)
                    {
                        unsigned l_351[9][6] = {{1UL,4294967295UL,0x0915C839L,0x0915C839L,4294967295UL,1UL},{0x0915C839L,4294967295UL,1UL,4294967287UL,0x50F6E574L,1UL},{1UL,4UL,4294967295UL,4UL,1UL,4294967295UL},{1UL,0x0915C839L,4UL,4294967287UL,0xAEC7C12BL,0xAEC7C12BL},{0x0915C839L,0x50F6E574L,0x50F6E574L,0x0915C839L,4294967295UL,0xAEC7C12BL},{1UL,0xAEC7C12BL,4UL,4294967295UL,4294967287UL,4294967295UL},{4294967295UL,0x4A253FCEL,4294967295UL,4294967295UL,4294967287UL,1UL},{4UL,0xAEC7C12BL,1UL,4294967295UL,4294967295UL,1UL},{0x50F6E574L,0x50F6E574L,0x0915C839L,4294967295UL,0xAEC7C12BL,4294967295UL}};
                        int i, j, k;
                        g_283[(l_89.f3 + 3)][g_118][(g_118 + 1)] = (safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((g_279[6][2][3] = g_283[g_118][l_89.f3][(g_118 + 1)]) & (safe_rshift_func_int16_t_s_u(g_91.f3, ((((~0xE756L) != ((safe_div_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((l_309.f0 = (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(g_344, (p_61.f1 || (safe_add_func_uint32_t_u_u(p_62.f0, (safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_351[3][5] <= (l_352 , (g_48.f3 ^ l_233.f2))), 0x24L)), p_63))))))), p_62.f9))), g_268)) > g_48.f3) , l_311.f2), 0x44L)) & l_310.f4)) && l_233.f1) ^ p_62.f9)))), p_62.f9)), l_353));
                        g_48 = l_233;
                    }
                }

                                l_306.f0 = (g_91.f4 = (((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_62.f8, (safe_rshift_func_int8_t_s_u(p_62.f2, 6)))), ((((safe_mod_func_uint16_t_u_u((g_118 == l_311.f0), (g_283[6][3][0] && (l_233.f8 = l_281[3].f9)))) < (safe_div_func_uint32_t_u_u((p_62.f1 = p_62.f7), (p_62.f2 , g_59.f1)))) == l_198.f4) & l_198.f7))) != 0xD1L) & p_61.f2));
                return l_364;

                            }

                        l_233.f9 = ((9UL < (g_174 = p_62.f9)) , (safe_mod_func_int32_t_s_s(l_367, l_274.f3)));
        }
        else
        {
            int l_381 = 0xA44F3FBCL;
            for (l_133.f1 = (-6); (l_133.f1 >= (-12)); l_133.f1 = safe_sub_func_int8_t_s_s(l_133.f1, 3))
            {
                unsigned l_374 = 0UL;
                struct S0 l_380 = {0,9837,50,8L,2224,852,1,4,3,-0};
                for (g_118 = (-23); (g_118 <= 22); g_118++)
                {
                    unsigned short l_377[4][3][1] = {{{0x01BAL},{0x454FL},{0x01BAL}},{{0x454FL},{0x01BAL},{0x454FL}},{{0x01BAL},{0x454FL},{0x01BAL}},{{0x454FL},{0x01BAL},{0x454FL}}};
                    int i, j, k;
                    if (g_126.f1)
                    {
                        return g_126;

                                            }
                    else
                    {
                        g_91 = g_91;
                        if (p_64)
                            break;
                    }
                    for (p_64 = 0; (p_64 <= 0); p_64 += 1)
                    {
                        int i, j, k;
                        g_48 = g_48;
                        g_283[(p_64 + 4)][(p_64 + 1)][(p_64 + 2)] = ((safe_div_func_int16_t_s_s(((g_283[(p_64 + 4)][(p_64 + 1)][(p_64 + 3)] , l_233.f7) != (l_374 , (safe_add_func_int8_t_s_s(l_374, g_344)))), l_377[0][1][0])) >= (g_48 , 65527UL));
                        g_283[(p_64 + 4)][(p_64 + 1)][(p_64 + 3)] = (safe_div_func_int8_t_s_s(0x82L, p_62.f0));
                    }
                    l_380 = (p_62 = p_62);
                    if (l_95)
                        break;
                }
                p_62.f8 = 0x877D466FL;
                l_381 = 0x248D6683L;
            }

                    }

                        g_91.f4 = g_91.f3;
    }

            p_62.f9 = (g_283[2][0][5] | g_32);
    l_89.f4 = (((g_48.f5 == ((g_283[6][3][0] & ((p_62.f0 && p_62.f9) & ((safe_rshift_func_int8_t_s_u(((((g_59.f1 && (p_64 = (0x6FA28343L ^ (g_59 , (((l_89.f8 = l_133.f2) || ((safe_lshift_func_uint16_t_u_u(l_388, 3)) , 0x38F9D010L)) <= g_33[5][0][4]))))) && g_126.f3) , g_23) == p_62.f1), 5)) == g_33[8][1][3]))) >= l_389)) & g_48.f7) , g_59.f2);
    g_91.f0 = (g_48.f8 || (p_62.f7 , (g_117 = (safe_rshift_func_int8_t_s_s((l_364.f1 <= (g_126.f1 = (((safe_rshift_func_int16_t_s_u(p_61.f2, g_48.f6)) ^ g_59.f3) , (safe_add_func_int16_t_s_s(((0xF9365944L >= ((((((safe_div_func_uint16_t_u_u(p_62.f2, p_62.f0)) > p_62.f5) <= p_62.f6) , g_91.f2) ^ g_279[2][1][5]) || p_62.f6)) | l_364.f0), 0xEB75L))))), l_389)))));

        return p_61;

    }





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_33[i][j][k], "g_33[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
    transparent_crc(g_48.f1, "g_48.f1", print_hash_value);
    transparent_crc(g_48.f2, "g_48.f2", print_hash_value);
    transparent_crc(g_48.f3, "g_48.f3", print_hash_value);
    transparent_crc(g_48.f4, "g_48.f4", print_hash_value);
    transparent_crc(g_48.f5, "g_48.f5", print_hash_value);
    transparent_crc(g_48.f6, "g_48.f6", print_hash_value);
    transparent_crc(g_48.f7, "g_48.f7", print_hash_value);
    transparent_crc(g_48.f8, "g_48.f8", print_hash_value);
    transparent_crc(g_48.f9, "g_48.f9", print_hash_value);
    transparent_crc(g_59.f2, "g_59.f2", print_hash_value);
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_91.f1, "g_91.f1", print_hash_value);
    transparent_crc(g_91.f2, "g_91.f2", print_hash_value);
    transparent_crc(g_91.f3, "g_91.f3", print_hash_value);
    transparent_crc(g_91.f4, "g_91.f4", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_126.f1, "g_126.f1", print_hash_value);
    transparent_crc(g_126.f2, "g_126.f2", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_279[i][j][k], "g_279[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_283[i][j][k], "g_283[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_344, "g_344", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_414[i].f0, "g_414[i].f0", print_hash_value);
        transparent_crc(g_414[i].f1, "g_414[i].f1", print_hash_value);
        transparent_crc(g_414[i].f2, "g_414[i].f2", print_hash_value);
        transparent_crc(g_414[i].f3, "g_414[i].f3", print_hash_value);
        transparent_crc(g_414[i].f4, "g_414[i].f4", print_hash_value);
        transparent_crc(g_414[i].f5, "g_414[i].f5", print_hash_value);
        transparent_crc(g_414[i].f6, "g_414[i].f6", print_hash_value);
        transparent_crc(g_414[i].f7, "g_414[i].f7", print_hash_value);
        transparent_crc(g_414[i].f8, "g_414[i].f8", print_hash_value);
        transparent_crc(g_414[i].f9, "g_414[i].f9", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_427[i].f2, "g_427[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_501.f1, "g_501.f1", print_hash_value);
    transparent_crc(g_501.f2, "g_501.f2", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_553, "g_553", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_554[i].f0, "g_554[i].f0", print_hash_value);
        transparent_crc(g_554[i].f1, "g_554[i].f1", print_hash_value);
        transparent_crc(g_554[i].f2, "g_554[i].f2", print_hash_value);
        transparent_crc(g_554[i].f3, "g_554[i].f3", print_hash_value);
        transparent_crc(g_554[i].f4, "g_554[i].f4", print_hash_value);
        transparent_crc(g_554[i].f5, "g_554[i].f5", print_hash_value);
        transparent_crc(g_554[i].f6, "g_554[i].f6", print_hash_value);
        transparent_crc(g_554[i].f7, "g_554[i].f7", print_hash_value);
        transparent_crc(g_554[i].f8, "g_554[i].f8", print_hash_value);
        transparent_crc(g_554[i].f9, "g_554[i].f9", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_829, "g_829", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    transparent_crc(g_1125, "g_1125", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1238[i].f0, "g_1238[i].f0", print_hash_value);
        transparent_crc(g_1238[i].f1, "g_1238[i].f1", print_hash_value);
        transparent_crc(g_1238[i].f2, "g_1238[i].f2", print_hash_value);
        transparent_crc(g_1238[i].f3, "g_1238[i].f3", print_hash_value);
        transparent_crc(g_1238[i].f4, "g_1238[i].f4", print_hash_value);
        transparent_crc(g_1238[i].f5, "g_1238[i].f5", print_hash_value);
        transparent_crc(g_1238[i].f6, "g_1238[i].f6", print_hash_value);
        transparent_crc(g_1238[i].f7, "g_1238[i].f7", print_hash_value);
        transparent_crc(g_1238[i].f8, "g_1238[i].f8", print_hash_value);
        transparent_crc(g_1238[i].f9, "g_1238[i].f9", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1296.f0, "g_1296.f0", print_hash_value);
    transparent_crc(g_1296.f1, "g_1296.f1", print_hash_value);
    transparent_crc(g_1296.f2, "g_1296.f2", print_hash_value);
    transparent_crc(g_1296.f3, "g_1296.f3", print_hash_value);
    transparent_crc(g_1363, "g_1363", print_hash_value);
    transparent_crc(g_1386, "g_1386", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1430[i][j][k], "g_1430[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1492, "g_1492", print_hash_value);
    transparent_crc(g_1506.f0, "g_1506.f0", print_hash_value);
    transparent_crc(g_1506.f1, "g_1506.f1", print_hash_value);
    transparent_crc(g_1506.f2, "g_1506.f2", print_hash_value);
    transparent_crc(g_1506.f3, "g_1506.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1513[i], "g_1513[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
