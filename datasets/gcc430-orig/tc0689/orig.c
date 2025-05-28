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
   unsigned short f0;
   unsigned char f1;
};

union U1 {
   unsigned char f0;
   unsigned short f1;
   char * f2;
   int f3;
   short f4;
};

union U2 {
   char f0;
   unsigned f1;
   char * f2;
};

union U3 {
   char * f0;
   unsigned short f1;
   int f2;
};

union U5 {
   unsigned f0;
   char * f1;
   int f2;
   short f3;
   unsigned f4;
};

union U6 {
   int f0;
};


static char g_12 = 0xD6L;
static char *g_11 = &g_12;
static int g_14 = 1L;
static int g_15 = 0x63D62A04L;
static int g_16[6][3][10] = {{{0xC3314648L,(-7L),(-1L),0L,1L,0L,0xC3314648L,0xD8B3D385L,0x39A53AA4L,0x97B9FFBDL},{0xD8B3D385L,0x2560131BL,(-5L),(-10L),0L,0xC3978D11L,(-10L),0L,0x260E2EFEL,0xD8B3D385L},{0x5691F3A4L,0L,0x39A53AA4L,8L,0L,0x97B9FFBDL,0L,0x97B9FFBDL,0L,8L}},{{0x07CB0BE9L,(-7L),0x07CB0BE9L,0L,1L,1L,0x22CFB647L,1L,(-1L),0x22CFB647L},{1L,0L,0L,0x76C56D20L,0L,0L,1L,1L,4L,0xD4FE9304L},{0x07CB0BE9L,9L,0xDD5C0AECL,0x22CFB647L,(-5L),0L,(-1L),9L,1L,(-1L)}},{{1L,0L,0L,0L,0x22CFB647L,0xA67F6A19L,0xA67F6A19L,0x22CFB647L,0L,0L},{(-1L),(-1L),0xD8B3D385L,1L,0L,0x2560131BL,0x07CB0BE9L,0L,8L,0L},{(-1L),0L,(-5L),0x22CFB647L,0xDD5C0AECL,9L,0x07CB0BE9L,0xA67F6A19L,0x18F8F6A1L,0x39A53AA4L}},{{0L,(-1L),0xE2138B36L,0x260E2EFEL,0L,0xE2138B36L,0xA67F6A19L,1L,(-5L),0x18F8F6A1L},{0L,0L,1L,0xC3314648L,(-1L),8L,(-1L),0xC3314648L,1L,0L},{0x97B9FFBDL,9L,0xA67F6A19L,(-1L),0L,0xC3978D11L,1L,0L,0xC3978D11L,0L}},{{0x18F8F6A1L,0x97B9FFBDL,0xE2138B36L,0x18F8F6A1L,0x22CFB647L,0xC3978D11L,1L,(-1L),0L,0xA67F6A19L},{0x97B9FFBDL,0x07CB0BE9L,0L,(-1L),1L,8L,0x97B9FFBDL,0L,1L,0xD4FE9304L},{0L,0xE2138B36L,1L,0L,9L,9L,0L,1L,0xE2138B36L,0x07CB0BE9L}},{{0x260E2EFEL,0x97B9FFBDL,0xA67F6A19L,0L,1L,0x18F8F6A1L,9L,0x39A53AA4L,(-5L),0L},{1L,(-1L),0x76C56D20L,0x97B9FFBDL,1L,0L,0x07CB0BE9L,0x22CFB647L,0xD8B3D385L,0x07CB0BE9L},{1L,9L,0xC3978D11L,0xC3314648L,9L,(-5L),0L,0L,0L,0x39A53AA4L}}};
static unsigned short g_26[5] = {0xBF5FL,0xBF5FL,0xBF5FL,0xBF5FL,0xBF5FL};
static union U6 g_29 = {0L};
static union U0 g_41[5][6][6] = {{{{0xA700L},{0x1ADFL},{0xDB0CL},{0x8B63L},{0x4374L},{0x4035L}},{{0x8198L},{3UL},{2UL},{0x8D18L},{65526UL},{65528UL}},{{2UL},{3UL},{0x1ADFL},{0xDFF0L},{0x4374L},{2UL}},{{3UL},{0x1ADFL},{65535UL},{3UL},{0UL},{0UL}},{{0x8D18L},{65531UL},{2UL},{65535UL},{65528UL},{0xDB0CL}},{{0x3F3FL},{0UL},{0x4035L},{0xDFF0L},{65528UL},{0x04B5L}}},{{{65535UL},{65531UL},{0UL},{65532UL},{0UL},{65531UL}},{{0x8198L},{0x1ADFL},{0xC5EAL},{0x281BL},{0x4374L},{0xDB0CL}},{{3UL},{3UL},{3UL},{0xEEA3L},{2UL},{0x1F4DL}},{{0x4035L},{0UL},{0x2C3DL},{3UL},{0x2BF2L},{65535UL}},{{0UL},{0x0870L},{65528UL},{0UL},{1UL},{0x03F4L}},{{0x4374L},{0xC396L},{65535UL},{65528UL},{0x03F4L},{65532UL}}},{{{0UL},{0xF4D7L},{0xBE65L},{3UL},{0x03F4L},{0xC396L}},{{0xC5EAL},{0xC396L},{65535UL},{2UL},{1UL},{0xEB90L}},{{65535UL},{0x0870L},{0xAA3AL},{65526UL},{0x2BF2L},{65532UL}},{{65531UL},{0UL},{0x2BF2L},{3UL},{2UL},{0xF4D7L}},{{0xC5EAL},{0UL},{65528UL},{0xCFCBL},{0x2BF2L},{0x2BF2L}},{{65528UL},{0x0870L},{0x0870L},{65528UL},{1UL},{0x1F4DL}}},{{{3UL},{0xC396L},{0x2BF2L},{0UL},{0x03F4L},{0xAA3AL}},{{0UL},{0xF4D7L},{65532UL},{0xCFCBL},{0x03F4L},{0xEB90L}},{{0xDB0CL},{0xC396L},{0UL},{0x4374L},{1UL},{0x333AL}},{{65531UL},{0x0870L},{0xBE65L},{0x2EF5L},{0x2BF2L},{0xAA3AL}},{{0x04B5L},{0UL},{2UL},{2UL},{2UL},{0x03F4L}},{{0xDB0CL},{0UL},{0x0870L},{0UL},{0x2BF2L},{2UL}}},{{{0UL},{0x0870L},{0x2C3DL},{65529UL},{65535UL},{65528UL}},{{0xDB0CL},{0UL},{0xBE65L},{65535UL},{0x0870L},{0xF4D7L}},{{0x1ADFL},{65528UL},{0x1F4DL},{3UL},{0x0870L},{2UL}},{{0UL},{0UL},{65535UL},{0xC5EAL},{65535UL},{0UL}},{{65526UL},{0x333AL},{0x03F4L},{0UL},{0xAA3AL},{0xF4D7L}},{{0x2EF5L},{2UL},{65532UL},{0x4035L},{0UL},{0x2C3DL}}}};
static short g_49 = 1L;
static int g_84 = 0L;
static int *g_97[9] = {(void*)0,&g_84,&g_84,(void*)0,&g_84,&g_84,(void*)0,&g_84,&g_84};
static int **g_96 = &g_97[3];
static union U1 g_107 = {2UL};
static union U1 *g_106 = &g_107;
static int g_118 = 0L;
static union U0 *g_144 = &g_41[3][0][2];
static union U0 **g_143 = &g_144;
static union U5 g_156 = {1UL};
static union U6 *g_169 = (void*)0;
static union U6 **g_168 = &g_169;
static unsigned g_192 = 6UL;
static union U2 g_220[6][3][7] = {{{{-6L},{-1L},{0xB1L},{0x60L},{0L},{0xB1L},{-1L}},{{0x1CL},{-1L},{0xB1L},{0L},{0x60L},{0xB1L},{-1L}},{{-6L},{-1L},{0x50L},{0x60L},{0x60L},{0x50L},{-1L}}},{{{-6L},{-1L},{0xB1L},{0x60L},{0L},{0xB1L},{-1L}},{{0x1CL},{-1L},{0xB1L},{0L},{0x60L},{0xB1L},{-1L}},{{-6L},{-1L},{0x50L},{0x60L},{0x60L},{0x50L},{-1L}}},{{{-6L},{-1L},{0xB1L},{0x60L},{0L},{0xB1L},{-1L}},{{0x1CL},{-1L},{0xB1L},{0L},{-1L},{0xCEL},{0x50L}},{{0x20L},{0xB1L},{-6L},{-1L},{-1L},{-6L},{0xB1L}}},{{{0x20L},{0x50L},{0xCEL},{-1L},{1L},{0xCEL},{0xB1L}},{{0x3DL},{0xB1L},{0xCEL},{1L},{-1L},{0xCEL},{0x50L}},{{0x20L},{0xB1L},{-6L},{-1L},{-1L},{-6L},{0xB1L}}},{{{0x20L},{0x50L},{0xCEL},{-1L},{1L},{0xCEL},{0xB1L}},{{0x3DL},{0xB1L},{0xCEL},{1L},{-1L},{0xCEL},{0x50L}},{{0x20L},{0xB1L},{-6L},{-1L},{-1L},{-6L},{0xB1L}}},{{{0x20L},{0x50L},{0xCEL},{-1L},{1L},{0xCEL},{0xB1L}},{{0x3DL},{0xB1L},{0xCEL},{1L},{-1L},{0xCEL},{0x50L}},{{0x20L},{0xB1L},{-6L},{-1L},{-1L},{-6L},{0xB1L}}}};
static unsigned g_232 = 0xDF3C1CD7L;
static char g_245 = 2L;
static union U3 g_273[6] = {{0},{0},{0},{0},{0},{0}};
static union U3 *g_272 = &g_273[2];
static unsigned char g_304 = 255UL;
static unsigned char g_340 = 0x64L;
static unsigned char *g_403 = &g_304;
static short g_463 = (-1L);
static union U2 **g_468[3] = {(void*)0,(void*)0,(void*)0};
static unsigned g_496 = 3UL;
static unsigned char **g_552[3][2][2] = {{{&g_403,&g_403},{&g_403,&g_403}},{{&g_403,&g_403},{&g_403,&g_403}},{{&g_403,&g_403},{&g_403,&g_403}}};
static unsigned char ***g_551 = &g_552[0][0][0];
static union U2 **g_560 = (void*)0;
static union U2 *g_562[10][9] = {{&g_220[4][0][4],&g_220[4][0][4],&g_220[4][0][4],&g_220[4][0][4],&g_220[4][0][4],&g_220[4][0][4],(void*)0,&g_220[4][0][4],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_220[5][2][5],(void*)0,(void*)0},{&g_220[4][0][4],&g_220[4][0][4],(void*)0,(void*)0,&g_220[4][0][4],&g_220[4][0][4],&g_220[4][0][4],(void*)0,(void*)0},{&g_220[3][2][4],&g_220[3][2][4],&g_220[5][2][5],(void*)0,&g_220[0][2][0],(void*)0,&g_220[5][2][5],&g_220[3][2][4],&g_220[3][2][4]},{(void*)0,(void*)0,&g_220[4][0][4],&g_220[4][0][4],&g_220[4][0][4],(void*)0,(void*)0,&g_220[4][0][4],&g_220[4][0][4]},{(void*)0,(void*)0,&g_220[5][2][5],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_220[4][0][4],(void*)0,&g_220[4][0][4],&g_220[4][0][4],&g_220[4][0][4],&g_220[4][0][4],&g_220[4][0][4],&g_220[4][0][4]},{&g_220[3][2][4],&g_220[5][1][1],(void*)0,&g_220[5][2][5],&g_220[5][2][5],(void*)0,&g_220[5][1][1],&g_220[3][2][4],&g_220[5][1][1]},{&g_220[4][0][4],&g_220[4][0][4],&g_220[4][0][4],&g_220[4][0][4],&g_220[4][2][4],(void*)0,&g_220[4][0][4],(void*)0,&g_220[4][2][4]},{(void*)0,&g_220[5][1][1],&g_220[5][1][1],(void*)0,&g_220[3][2][4],(void*)0,&g_220[3][2][4],(void*)0,&g_220[5][1][1]}};
static union U2 **g_561[2] = {&g_562[3][4],&g_562[3][4]};
static unsigned short g_601 = 1UL;
static union U2 ***g_629 = &g_561[1];
static union U2 ****g_628 = &g_629;
static char g_690 = (-3L);
static short *g_710 = &g_49;
static short **g_709[2][10][5] = {{{&g_710,(void*)0,(void*)0,&g_710,&g_710},{(void*)0,(void*)0,(void*)0,(void*)0,&g_710},{&g_710,&g_710,&g_710,&g_710,&g_710},{&g_710,(void*)0,&g_710,&g_710,&g_710},{&g_710,&g_710,&g_710,&g_710,&g_710},{&g_710,&g_710,(void*)0,&g_710,(void*)0},{&g_710,&g_710,&g_710,&g_710,&g_710},{(void*)0,(void*)0,(void*)0,(void*)0,&g_710},{&g_710,&g_710,&g_710,&g_710,&g_710},{&g_710,(void*)0,&g_710,&g_710,&g_710}},{{&g_710,&g_710,&g_710,&g_710,&g_710},{&g_710,&g_710,(void*)0,&g_710,(void*)0},{&g_710,&g_710,&g_710,&g_710,&g_710},{(void*)0,(void*)0,(void*)0,(void*)0,&g_710},{&g_710,&g_710,&g_710,&g_710,&g_710},{&g_710,(void*)0,&g_710,&g_710,&g_710},{&g_710,&g_710,&g_710,&g_710,&g_710},{&g_710,&g_710,(void*)0,&g_710,(void*)0},{&g_710,&g_710,&g_710,&g_710,&g_710},{(void*)0,(void*)0,(void*)0,(void*)0,&g_710}}};
static unsigned g_743 = 0x746852F4L;
static int g_751[1] = {(-7L)};
static char g_752[6][10][2] = {{{0x40L,0x9AL},{0x9AL,0x79L},{0x9AL,0x9AL},{0x40L,0x79L},{0x40L,0x9AL},{0x9AL,0x79L},{0x9AL,0x9AL},{0x40L,0x79L},{0x40L,0x9AL},{0x9AL,0x79L}},{{0x9AL,0x9AL},{0x40L,0x79L},{0x40L,0x9AL},{0x9AL,0x79L},{0x9AL,0x9AL},{0x40L,0x79L},{0x40L,0x9AL},{0x9AL,0x79L},{0x9AL,0x9AL},{0x40L,0x79L}},{{0x40L,0x9AL},{0x9AL,0x79L},{0x9AL,0x9AL},{0x40L,0x79L},{0x40L,0x9AL},{0x9AL,0x79L},{0x9AL,0x9AL},{0x40L,0x79L},{0x40L,0x9AL},{0x9AL,0x79L}},{{0x9AL,0x9AL},{0x40L,0x79L},{0x40L,0x9AL},{0x9AL,0x79L},{0x9AL,0x9AL},{0x40L,0x79L},{0x40L,0x9AL},{0x9AL,0x79L},{0x9AL,0x9AL},{0x40L,0x79L}},{{0x40L,0x9AL},{0x9AL,0x79L},{0x9AL,0x9AL},{0x40L,0x79L},{0x40L,0x9AL},{0x9AL,0x79L},{0x9AL,0x9AL},{0x40L,0x79L},{0x40L,0x9AL},{0x9AL,0x79L}},{{0x9AL,0x9AL},{0x40L,0x79L},{0x40L,0x9AL},{0x9AL,0x79L},{0x9AL,0x9AL},{0x40L,0x79L},{0x40L,0x9AL},{0x9AL,0x79L},{0x9AL,0x9AL},{0x40L,0x79L}}};
static short g_756 = (-1L);
static int g_757[9][3][9] = {{{(-2L),(-3L),0x94CEC44AL,(-1L),0xA5B76A4CL,5L,0x73E5E1D3L,0xAAA86CE4L,0L},{1L,1L,0x1C2A1365L,(-1L),0xA4DD7550L,(-1L),1L,1L,0x73E5E1D3L},{0x2C5CAE66L,(-1L),0x951CF469L,0x1C2A1365L,0xAAA86CE4L,5L,0x7204418EL,1L,0xBACDFD4BL}},{{(-1L),1L,3L,1L,(-3L),(-9L),0x2632FAA4L,0xAAA86CE4L,0x3DB6680BL},{0x2C5CAE66L,0xAAA86CE4L,3L,0xBCAA1858L,0x1607B13EL,(-7L),0xBACDFD4BL,(-4L),(-1L)},{1L,0x1607B13EL,0x951CF469L,(-6L),(-3L),0x9DE9B1D4L,0xBACDFD4BL,(-3L),0x32E69542L}},{{(-2L),(-4L),0x1C2A1365L,0xA8FFF560L,0xAAA86CE4L,1L,0x2632FAA4L,0xA4DD7550L,(-1L)},{(-7L),(-4L),0x94CEC44AL,(-1L),0xA4DD7550L,1L,0x7204418EL,1L,0x9DE9B1D4L},{6L,0x6F5847D5L,(-1L),0x7204418EL,(-7L),0x1C2A1365L,0x2C5CAE66L,0x7BFAA8F0L,0xFD2BCB56L}},{{0x94CEC44AL,0x72CA3C54L,0x2632FAA4L,1L,0x406FDEC1L,0xA8FFF560L,(-2L),1L,(-2L)},{0x94CEC44AL,0L,0xC00B4526L,0xC00B4526L,0L,0x94CEC44AL,1L,0xFC1FBAA2L,5L},{6L,0x7BFAA8F0L,0x2632FAA4L,0x3DB6680BL,0L,0L,5L,2L,(-7L)}},{{0L,0xC1D2903BL,(-1L),0x32E69542L,0x406FDEC1L,3L,1L,0xFEE0E8ACL,(-7L)},{(-6L),2L,(-3L),0x2632FAA4L,(-7L),1L,(-2L),0x72CA3C54L,5L},{0x1C2A1365L,0xC1D2903BL,0x32E69542L,0x2632FAA4L,0xFC1FBAA2L,0x2E01810CL,0x2C5CAE66L,0xC1D2903BL,(-2L)}},{{0xBCAA1858L,0x7BFAA8F0L,0xBACDFD4BL,0x32E69542L,0x72CA3C54L,1L,5L,0xC1D2903BL,0xFD2BCB56L},{0x951CF469L,0L,0xC865D1C6L,0x3DB6680BL,2L,3L,1L,0x72CA3C54L,0x9DE9B1D4L},{0xBCAA1858L,0x72CA3C54L,0xC865D1C6L,0xC00B4526L,0x6F5847D5L,0L,0xFD2BCB56L,0xFEE0E8ACL,(-1L)}},{{0x1C2A1365L,0x6F5847D5L,0xBACDFD4BL,1L,6L,(-5L),0L,6L,8L},{0xADFB1E77L,(-6L),0xB3439119L,0x38B4453BL,(-1L),2L,0x075ABFA7L,0x2E01810CL,1L},{(-1L),(-6L),1L,0x392B6E0EL,0x2E01810CL,0L,0x89583E5BL,0x1C2A1365L,6L}},{{0x24064946L,3L,0x392B6E0EL,0x38B4453BL,0xBCAA1858L,0L,0L,0L,0L},{(-5L),(-1L),(-1L),0xDF584857L,0x94CEC44AL,2L,0x6D48687AL,0x1C2A1365L,0x6D48687AL},{(-5L),1L,0x6DB37FF9L,0x6DB37FF9L,1L,(-5L),8L,0x2E01810CL,3L}},{{0x24064946L,0L,(-1L),0x7B6F290BL,1L,(-1L),3L,6L,0x28BE0000L},{(-1L),0x951CF469L,0x392B6E0EL,0xB3439119L,0x94CEC44AL,0x99CFFF84L,8L,0xA8FFF560L,0x28BE0000L},{0xADFB1E77L,6L,1L,(-1L),0xBCAA1858L,0xDD79855BL,0x6D48687AL,(-1L),3L}}};
static unsigned char g_759 = 0x99L;



static union U2 func_1(void);
static unsigned char func_6(char * p_7);
static char * func_8(char * p_9, char * p_10);
static int * func_21(unsigned p_22, union U6 p_23, union U2 p_24, unsigned p_25);
static unsigned func_52(short * p_53, union U1 p_54, int * p_55, unsigned p_56, char p_57);
static short * func_58(unsigned p_59, int p_60, union U6 * p_61);
static unsigned func_62(int ** p_63, unsigned p_64);
static union U0 ** func_67(union U0 ** p_68, unsigned p_69, union U0 ** p_70, union U5 p_71, int p_72);
static union U5 func_75(int ** p_76);
static int ** func_77(char * p_78, char * p_79);
static union U2 func_1(void)
{
    int *l_750[2][4][8] = {{{&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0]},{&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0]},{&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0]},{&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0]}},{{&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0]},{&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0]},{&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0]},{&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0],&g_751[0]}}};
    short *l_755 = &g_756;
    unsigned char *l_758[7][1];
    int l_760 = 0L;
    unsigned char l_761 = 0x9FL;
    char l_762 = 0x50L;
    int l_763 = (-1L);
    char l_764 = 0x9BL;
    int l_765 = (-1L);
    short l_766[7];
    unsigned l_767[4];
    union U3 **l_770 = (void*)0;
    union U3 **l_771 = (void*)0;
    union U3 **l_772 = &g_272;
    union U2 l_773 = {0x5FL};
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_758[i][j] = &g_759;
    }
    for (i = 0; i < 7; i++)
        l_766[i] = (-7L);
    for (i = 0; i < 4; i++)
        l_767[i] = 0UL;
    l_761 = (((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((*g_403) = (func_6(func_8(g_11, &g_12)) ^ (l_750[0][1][3] == l_750[0][1][5]))) & (l_760 = (((g_752[2][4][0] = g_49) <= (safe_sub_func_uint32_t_u_u((g_232 && (((*l_755) = (*g_710)) || g_757[6][2][4])), g_192))) <= (-1L)))), g_759)), (*g_710))) > g_759) ^ g_751[0]);
    l_767[3]++;
    (*l_772) = &g_273[1];
    return l_773;
}







static unsigned char func_6(char * p_7)
{
    unsigned short l_749 = 0xFBD1L;
    return l_749;
}







static char * func_8(char * p_9, char * p_10)
{
    union U1 l_13[3][2] = {{{0x19L},{0x19L}},{{0xF7L},{0x19L}},{{0x19L},{0xF7L}}};
    int l_17[2];
    unsigned l_417 = 4294967295UL;
    int l_418 = 0xC387488AL;
    char l_419 = 0xE6L;
    union U2 *l_475 = &g_220[3][2][0];
    unsigned short *l_488[6][2] = {{&g_41[4][1][1].f0,&g_41[4][1][1].f0},{&g_26[0],&g_41[4][1][1].f0},{&g_41[4][1][1].f0,&g_26[0]},{&g_41[4][1][1].f0,&g_41[4][1][1].f0},{&g_26[0],&g_41[4][1][1].f0},{&g_41[4][1][1].f0,&g_26[0]}};
    unsigned short **l_487[10] = {&l_488[2][1],&l_488[2][1],&l_488[2][1],&l_488[2][1],&l_488[2][1],&l_488[2][1],&l_488[2][1],&l_488[2][1],&l_488[2][1],&l_488[2][1]};
    union U3 *l_490[8][5] = {{&g_273[2],&g_273[2],&g_273[2],&g_273[2],&g_273[2]},{&g_273[3],&g_273[3],&g_273[3],&g_273[3],&g_273[3]},{&g_273[2],&g_273[2],&g_273[2],&g_273[2],&g_273[2]},{&g_273[3],&g_273[3],&g_273[3],&g_273[3],&g_273[3]},{&g_273[2],&g_273[2],&g_273[2],&g_273[2],&g_273[2]},{&g_273[3],&g_273[3],&g_273[3],&g_273[3],&g_273[3]},{&g_273[2],&g_273[2],&g_273[2],&g_273[2],&g_273[2]},{&g_273[3],&g_273[3],&g_273[3],&g_273[3],&g_273[3]}};
    union U6 l_500 = {-1L};
    unsigned char l_502 = 6UL;
    int l_609 = (-1L);
    int l_696 = 3L;
    union U6 **l_747 = &g_169;
    union U1 **l_748 = &g_106;
    int i, j;
    for (i = 0; i < 2; i++)
        l_17[i] = 0x27E5571BL;
    for (g_12 = 0; (g_12 <= 1); g_12 += 1)
    {
        union U6 l_31 = {0xF325E6B7L};
        int l_33 = 0x43A495B2L;
        unsigned short l_432 = 0x14DAL;
        union U6 ***l_437 = (void*)0;
        int l_454 = 0xA5DEB66FL;
        int l_455 = 0x7B60EBFFL;
        int l_457[5];
        unsigned char **l_482 = &g_403;
        union U2 *l_534[6][5][2] = {{{(void*)0,&g_220[4][0][3]},{&g_220[2][0][2],&g_220[0][0][3]},{&g_220[0][0][5],&g_220[5][2][5]},{&g_220[4][2][6],&g_220[3][2][2]},{&g_220[0][1][0],&g_220[0][0][1]}},{{(void*)0,&g_220[4][0][4]},{&g_220[3][1][5],&g_220[0][0][5]},{&g_220[4][0][3],(void*)0},{(void*)0,&g_220[5][1][4]},{&g_220[3][0][4],&g_220[3][0][4]}},{{&g_220[0][2][2],(void*)0},{&g_220[5][1][4],&g_220[3][1][5]},{&g_220[4][2][0],&g_220[2][1][0]},{&g_220[4][0][4],&g_220[4][2][0]},{&g_220[0][0][3],&g_220[5][2][5]}},{{&g_220[0][0][3],&g_220[4][2][0]},{&g_220[4][0][4],&g_220[2][1][0]},{&g_220[4][2][0],&g_220[3][1][5]},{&g_220[5][1][4],(void*)0},{&g_220[0][2][2],&g_220[3][0][4]}},{{&g_220[3][0][4],&g_220[5][1][4]},{(void*)0,(void*)0},{&g_220[4][0][3],&g_220[0][0][5]},{&g_220[3][1][5],&g_220[4][0][4]},{(void*)0,&g_220[0][0][1]}},{{&g_220[0][1][0],&g_220[3][2][2]},{&g_220[4][2][6],&g_220[5][2][5]},{&g_220[0][0][5],&g_220[0][0][3]},{&g_220[2][0][2],&g_220[4][0][3]},{(void*)0,&g_220[4][0][3]}}};
        unsigned l_543 = 0x3C8B14D5L;
        unsigned short l_687 = 0x205FL;
        int l_714 = (-8L);
        int l_741 = 0x173D6FA9L;
        int *l_744 = (void*)0;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_457[i] = 0xEF0FC81EL;
        if (g_12)
            break;
        for (g_14 = 1; (g_14 >= 0); g_14 -= 1)
        {
            int l_43 = 5L;
            int l_427 = 0xA23B1C42L;
            int l_459 = 0xBB841FBEL;
            int l_461 = (-1L);
            int l_462 = (-6L);
            int **l_501 = &g_97[5];
            unsigned char l_509 = 0x08L;
            char l_521 = 0L;
            union U2 ***l_556 = &g_468[1];
            unsigned short **l_575 = &l_488[4][1];
            for (g_15 = 1; (g_15 >= 0); g_15 -= 1)
            {
                char l_20[4];
                union U2 l_32 = {0xC4L};
                int l_42 = (-4L);
                int i;
                for (i = 0; i < 4; i++)
                    l_20[i] = 0xC6L;
                for (g_16[0][2][6] = 1; (g_16[0][2][6] >= 0); g_16[0][2][6] -= 1)
                {
                    int *l_18[8][9] = {{&g_14,&g_16[2][0][7],&l_17[0],&g_15,(void*)0,&g_14,&g_14,(void*)0,&g_15},{&g_16[3][2][5],(void*)0,&g_16[3][2][5],&l_17[0],(void*)0,&g_16[3][2][5],&g_14,&l_17[0],&g_15},{&g_14,&l_17[0],&g_15,&g_14,(void*)0,&g_14,&g_15,&l_17[0],&g_14},{&g_16[3][2][5],&l_17[0],&g_14,&g_15,&l_17[0],&g_16[3][2][5],&g_15,&g_16[2][0][7],&g_15},{&g_15,(void*)0,&g_14,&g_14,(void*)0,&g_15,&l_17[0],&g_16[2][0][7],&g_14},{&g_16[3][2][5],&l_17[0],&g_15,&g_14,&l_17[0],&g_16[3][2][5],&g_16[3][2][5],&l_17[0],&g_14},{&g_14,(void*)0,&g_14,&g_15,&l_17[0],&g_14,&l_17[0],(void*)0,&g_15},{&g_14,&l_17[0],&g_15,&g_14,(void*)0,&g_14,&g_15,&l_17[0],&g_14}};
                    unsigned char l_19 = 0x32L;
                    union U6 *l_30[8] = {&g_29,(void*)0,&g_29,&g_29,(void*)0,&g_29,&g_29,(void*)0};
                    int **l_38 = &l_18[3][3];
                    union U0 *l_40 = &g_41[4][1][1];
                    union U0 **l_39 = &l_40;
                    int i, j;
                    l_19 = l_17[1];
                    if (l_20[2])
                        break;
                    (*l_38) = func_21((--g_26[0]), (l_31 = g_29), l_32, l_33);
                    (*l_39) = (void*)0;
                }
                l_42 |= 0x64400D43L;
            }
            if (g_26[1])
            {
                union U6 *l_175 = &l_31;
                int l_431 = (-4L);
                int l_440 = (-6L);
                int l_456 = 1L;
                int l_458 = 0xD5566A23L;
                int l_460 = 0xB65AB267L;
                unsigned short l_465 = 1UL;
                union U2 *l_474[5][5] = {{&g_220[4][0][4],(void*)0,(void*)0,&g_220[4][0][4],(void*)0},{&g_220[0][2][1],&g_220[0][2][1],&g_220[4][0][4],&g_220[0][2][1],&g_220[0][2][1]},{(void*)0,&g_220[4][0][4],(void*)0,(void*)0,&g_220[4][0][4]},{&g_220[0][2][1],&g_220[3][2][1],&g_220[3][2][1],&g_220[0][2][1],&g_220[3][2][1]},{&g_220[4][0][4],&g_220[4][0][4],&g_220[4][0][4],&g_220[4][0][4],&g_220[4][0][4]}};
                int i, j;
                for (g_15 = 1; (g_15 >= 0); g_15 -= 1)
                {
                    short *l_48 = &g_49;
                    int *l_66 = (void*)0;
                    int **l_65 = &l_66;
                    unsigned *l_415 = (void*)0;
                    unsigned *l_416 = (void*)0;
                    int i, j;
                }
                for (l_33 = 0; (l_33 <= 1); l_33 += 1)
                {
                    int *l_439 = &l_17[1];
                    int *l_441 = &l_17[1];
                    int *l_442 = &g_16[0][2][6];
                    int l_443[3];
                    int *l_444 = &l_443[0];
                    int *l_445 = &l_418;
                    int *l_446 = &g_156.f2;
                    int *l_447 = (void*)0;
                    int *l_448 = &g_15;
                    int *l_449 = (void*)0;
                    int *l_450 = &g_273[2].f2;
                    int *l_451 = &g_273[2].f2;
                    int *l_452 = &l_418;
                    int *l_453[8];
                    short l_464 = 0xE488L;
                    union U2 *l_470[10];
                    union U2 **l_469 = &l_470[1];
                    union U2 ***l_471 = (void*)0;
                    union U2 ***l_472 = (void*)0;
                    union U2 ***l_473 = &l_469;
                    short *l_478 = &g_107.f4;
                    unsigned *l_481 = &l_417;
                    unsigned char ***l_483 = &l_482;
                    unsigned char **l_485 = &g_403;
                    unsigned char ***l_484 = &l_485;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_443[i] = 0x5E99D1D0L;
                    for (i = 0; i < 8; i++)
                        l_453[i] = &l_31.f0;
                    for (i = 0; i < 10; i++)
                        l_470[i] = &g_220[1][0][1];
                    --l_465;
                    (*l_446) = (g_468[0] != ((*l_473) = l_469));
                    (*l_444) = ((((*l_469) = l_474[4][0]) == l_475) | (!(((*g_403) ^ (*g_403)) | 0x64L)));
                    if ((((*l_481) = ((+4294967289UL) <= (safe_mul_func_uint16_t_u_u(l_461, (!0x9F7EL))))) == (((*l_484) = ((*l_483) = l_482)) != &g_403)))
                    {
                        unsigned l_486 = 0xF4AFBA66L;
                        if (l_486)
                            break;
                    }
                    else
                    {
                        unsigned short ***l_489 = &l_487[1];
                        union U3 **l_491 = &g_272;
                        int l_499 = 9L;
                        (*l_489) = l_487[1];
                        (*l_491) = l_490[7][2];
                        (*l_448) = ((g_156.f3 && (safe_add_func_uint8_t_u_u((g_26[0] ^ 0xB237L), l_33))) != (l_454 != (l_31.f0 = func_62(func_77(&g_12, p_10), (safe_add_func_int8_t_s_s(((--g_496) <= l_454), (*g_403)))))));
                        (*g_96) = func_21(l_499, l_500, (*l_475), func_62(l_501, (*l_441)));
                    }
                }
                if (l_456)
                    break;
            }
            else
            {
                int l_508[5];
                int ***l_512 = &l_501;
                unsigned *l_515[10][5][5] = {{{&l_417,&l_417,(void*)0,(void*)0,(void*)0},{&l_417,&l_417,&l_417,(void*)0,&l_417},{(void*)0,(void*)0,&l_417,(void*)0,&l_417},{(void*)0,(void*)0,&l_417,(void*)0,&l_417},{(void*)0,(void*)0,&l_417,(void*)0,&l_417}},{{(void*)0,(void*)0,&l_417,(void*)0,&l_417},{(void*)0,(void*)0,&l_417,(void*)0,&l_417},{(void*)0,(void*)0,&l_417,(void*)0,&l_417},{(void*)0,(void*)0,&l_417,(void*)0,&l_417},{(void*)0,(void*)0,&l_417,(void*)0,&l_417}},{{(void*)0,(void*)0,&l_417,(void*)0,&l_417},{(void*)0,(void*)0,&l_417,(void*)0,&l_417},{(void*)0,(void*)0,&l_417,(void*)0,&l_417},{(void*)0,(void*)0,&l_417,(void*)0,&l_417},{(void*)0,(void*)0,&l_417,(void*)0,&l_417}},{{(void*)0,(void*)0,&l_417,(void*)0,&l_417},{(void*)0,(void*)0,&l_417,(void*)0,&l_417},{(void*)0,(void*)0,&l_417,(void*)0,&l_417},{(void*)0,(void*)0,&l_417,(void*)0,&l_417},{(void*)0,(void*)0,&l_417,(void*)0,&l_417}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_417,&l_417,(void*)0,(void*)0,(void*)0},{&l_417,&l_417,(void*)0,(void*)0,(void*)0},{&l_417,&l_417,(void*)0,(void*)0,(void*)0},{&l_417,&l_417,(void*)0,(void*)0,(void*)0},{&l_417,&l_417,(void*)0,(void*)0,(void*)0}},{{&l_417,&l_417,(void*)0,(void*)0,(void*)0},{&l_417,&l_417,(void*)0,(void*)0,(void*)0},{&l_417,&l_417,(void*)0,(void*)0,(void*)0},{&l_417,&l_417,(void*)0,(void*)0,(void*)0},{&l_417,&l_417,(void*)0,(void*)0,(void*)0}}};
                short l_516 = (-6L);
                int l_528 = 0xBABC7B61L;
                unsigned l_529 = 4294967295UL;
                int *l_535 = (void*)0;
                int *l_536 = (void*)0;
                int *l_537 = &g_16[0][2][6];
                int *l_538 = (void*)0;
                int *l_539 = &g_15;
                int *l_540 = &l_461;
                int *l_541 = &g_156.f2;
                int *l_542[2][5];
                unsigned char ***l_553 = (void*)0;
                union U2 ***l_557 = (void*)0;
                union U2 **l_559 = (void*)0;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_508[i] = 0xE43A2754L;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_542[i][j] = &g_29.f0;
                }
                for (l_461 = 0; (l_461 <= 1); l_461 += 1)
                {
                    int l_506 = 0L;
                    int *l_507[9] = {&l_459,&l_459,&l_459,&l_459,&l_459,&l_459,&l_459,&l_459,&l_459};
                    int i;
                    for (l_454 = 0; (l_454 <= 1); l_454 += 1)
                    {
                        if (l_502)
                            break;
                        l_500.f0 = (safe_lshift_func_uint8_t_u_u(l_454, (g_107.f0 ^= (*g_403))));
                    }
                    l_17[1] = (safe_unary_minus_func_uint8_t_u((*g_403)));
                    l_509--;
                }
                if (((((*p_10) > func_62(((*l_512) = l_501), (l_516 |= (safe_div_func_int16_t_s_s(g_156.f0, 0x7C34L))))) < (safe_sub_func_uint8_t_u_u((l_457[1] && (l_418 >= 0x29L)), (safe_lshift_func_int8_t_s_u(((l_521 |= l_432) == l_427), 5))))) ^ l_454))
                {
                    int *l_524 = &l_454;
                    int *l_525 = &g_15;
                    int *l_526 = (void*)0;
                    int *l_527[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_527[i] = &g_273[2].f2;
                    (*g_96) = (void*)0;
                    for (l_418 = 1; (l_418 >= 0); l_418 -= 1)
                    {
                        int *l_522 = (void*)0;
                        int l_523 = 4L;
                        l_523 = l_33;
                    }
                    ++l_529;
                    l_17[0] ^= (safe_sub_func_uint8_t_u_u(((*g_403) ^= 0UL), ((*l_524) ^ (g_107.f1 >= l_454))));
                }
                else
                {
                    l_534[2][4][1] = l_534[4][0][0];
                }
                l_543--;
                if (l_33)
                {
                    int l_548 = 0L;
                    union U2 ****l_558 = &l_557;
                    int l_580 = 4L;
                    unsigned l_591 = 4294967290UL;
                    for (g_245 = 5; (g_245 >= 0); g_245 -= 1)
                    {
                        return &g_245;
                    }
                    if (l_454)
                        continue;
                    if ((safe_sub_func_int32_t_s_s((l_548 >= (safe_mul_func_int16_t_s_s((2L || (g_551 != l_553)), func_62(((*l_512) = l_501), (safe_sub_func_int8_t_s_s(((l_556 != ((*l_558) = l_557)) & ((((*l_556) = l_559) == (g_561[1] = (g_560 = l_559))) ^ l_419)), 0xECL)))))), (-1L))))
                    {
                        unsigned short **l_574 = &l_488[5][1];
                        (*l_539) = (((safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((safe_sub_func_uint16_t_u_u(1UL, ((l_575 = l_574) != l_574))))), 3)), (safe_mul_func_int8_t_s_s((*p_10), ((safe_sub_func_uint8_t_u_u(0x0EL, ((*g_403)--))) | ((l_417 > (safe_sub_func_uint32_t_u_u(l_548, (safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_419 && (g_107.f0 ^ (*l_541))), 65535UL)), l_548)), 0xF3ABL))))) != l_17[1])))))), l_31.f0)) <= 4294967295UL), (*p_9))) | l_580) < l_548);
                        if (l_419)
                            continue;
                        (*l_540) = ((*l_537) = 0x0B2FF928L);
                    }
                    else
                    {
                        unsigned short l_594 = 9UL;
                        --l_591;
                        (*l_541) = ((*l_537) = (-1L));
                        ++l_594;
                        return &g_12;
                    }
                    (*l_537) &= (safe_mod_func_uint32_t_u_u(4294967295UL, (-1L)));
                }
                else
                {
                    short l_608 = 0x21CCL;
                    (*l_539) &= (safe_div_func_int16_t_s_s((g_496 | (((*l_541) = g_601) < 0xD1605607L)), (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(l_608, 4294967294UL)), 2)), (l_455 | l_609)))));
                }
            }
            for (g_463 = 0; (g_463 <= 1); g_463 += 1)
            {
                return p_9;
            }
        }
        if (l_609)
            break;
        for (g_15 = 1; (g_15 >= 0); g_15 -= 1)
        {
            int *l_612 = &g_29.f0;
            union U2 ***l_625[3][2] = {{&g_468[1],&g_468[1]},{&g_468[1],&g_468[1]},{&g_468[1],&g_468[1]}};
            union U2 ****l_624 = &l_625[2][0];
            int l_641 = 0xC53AB49FL;
            int l_644 = 0L;
            int l_645 = (-1L);
            int l_646 = 6L;
            int l_648[8][9][3] = {{{0xC8D6409BL,0x2B011F9AL,0xB43653B8L},{0x30A08171L,(-3L),(-1L)},{0x664DBCA3L,1L,(-7L)},{0x3A8879F7L,0xB13A3A3CL,0xD755CF86L},{9L,0x664DBCA3L,0x4DDE2F92L},{0x1F2B6E25L,0x1F2B6E25L,1L},{0L,(-1L),0x48EC347DL},{1L,0x8B78C1C2L,0x32F0284BL},{1L,0x7C02A25AL,0x8ADDF136L}},{{0xA98AE73DL,0x1CC47DB2L,0xA98AE73DL},{0L,0L,0L},{0xB13A3A3CL,8L,(-10L)},{0x4DDE2F92L,0xCBD2DFBCL,(-5L)},{1L,1L,0xE1F4E2AAL},{0L,0x4DDE2F92L,(-4L)},{1L,0xDD2ACFFFL,8L},{0xA39D417BL,0x1903AA7EL,0x1903AA7EL},{8L,(-3L),0xE5E037C2L}},{{1L,2L,9L},{(-1L),8L,0L},{0xD2EA65B0L,1L,0L},{(-7L),8L,0x1CC47DB2L},{0x1903AA7EL,2L,0x5F2C42A4L},{1L,(-3L),(-7L)},{0L,0x1903AA7EL,9L},{0x30A08171L,0xDD2ACFFFL,(-10L)},{1L,0x4DDE2F92L,(-1L)}},{{8L,1L,0xE5E037C2L},{0x7C02A25AL,0xCBD2DFBCL,0x7C02A25AL},{1L,8L,0xF95AF784L},{0xD2EA65B0L,0L,0x1903AA7EL},{0x1EB54B67L,0x1CC47DB2L,8L},{(-7L),2L,(-5L)},{0x1EB54B67L,1L,0L},{0xD2EA65B0L,(-7L),9L},{1L,(-1L),0x1CC47DB2L}},{{0x7C02A25AL,1L,0x4DDE2F92L},{8L,(-3L),0xA98AE73DL},{1L,0x664DBCA3L,(-9L)},{0x30A08171L,8L,0L},{0L,0L,(-1L)},{0x32F0284BL,0xD755CF86L,(-1L)},{0x5469111CL,0x5E6D11CAL,(-9L)},{8L,0x22D1BA57L,8L},{0xB43653B8L,0x5469111CL,(-9L)}},{{(-1L),(-1L),(-1L)},{(-1L),1L,0x8ADDF136L},{0xDD2ACFFFL,0L,0x8B78C1C2L},{(-7L),(-5L),0x4DDE2F92L},{(-1L),0xDD2ACFFFL,0xE1F4E2AAL},{(-1L),0xB43653B8L,0xD2EA65B0L},{0x32F0284BL,0xA5DAB99DL,0xA5DAB99DL},{0xD2EA65B0L,9L,1L},{(-10L),0x22D1BA57L,(-1L)}},{{2L,0xD2EA65B0L,0x83B777B0L},{1L,1L,(-1L)},{0L,0xD2EA65B0L,0x5469111CL},{0xA5DAB99DL,0x22D1BA57L,1L},{(-7L),9L,0L},{(-1L),0xA5DAB99DL,0x1EB54B67L},{0x48EC347DL,0xB43653B8L,0x8ADDF136L},{8L,0xDD2ACFFFL,0x3A8879F7L},{1L,(-5L),1L}},{{8L,0L,8L},{(-1L),1L,0xA39D417BL},{1L,(-1L),0xA5DAB99DL},{1L,0x5469111CL,0L},{0xD755CF86L,0x22D1BA57L,0x8B78C1C2L},{1L,0x5E6D11CAL,1L},{1L,0xD755CF86L,0x1EB54B67L},{(-1L),2L,0x5469111CL},{8L,0x30A08171L,0xDD2ACFFFL}}};
            unsigned char l_649 = 0x4AL;
            union U5 *l_661 = &g_156;
            unsigned l_671 = 4294967293UL;
            unsigned short ***l_694 = &l_487[7];
            unsigned char l_706 = 0UL;
            int i, j, k;
            (*l_612) = (l_609 = (safe_mod_func_int8_t_s_s((*p_9), (*p_9))));
            if (l_455)
                break;
            for (g_118 = 2; (g_118 >= 0); g_118 -= 1)
            {
                unsigned l_623 = 4294967293UL;
                int l_637 = (-4L);
                int l_643 = 5L;
                int l_647[7][6] = {{0x22DD2227L,0x22DD2227L,0xEE1FDB15L,0x22DD2227L,0x22DD2227L,0xEE1FDB15L},{0x22DD2227L,0x22DD2227L,0xEE1FDB15L,0x22DD2227L,0x22DD2227L,0xEE1FDB15L},{0x22DD2227L,0x22DD2227L,0xEE1FDB15L,0x22DD2227L,0x22DD2227L,0xEE1FDB15L},{0x22DD2227L,0x22DD2227L,0xEE1FDB15L,0x22DD2227L,0x22DD2227L,0xEE1FDB15L},{0x22DD2227L,0x22DD2227L,0xEE1FDB15L,0x22DD2227L,0x22DD2227L,0xEE1FDB15L},{0x22DD2227L,0x22DD2227L,0xEE1FDB15L,0x22DD2227L,0x22DD2227L,0xEE1FDB15L},{0x22DD2227L,0x22DD2227L,0xEE1FDB15L,0x22DD2227L,0x22DD2227L,0xEE1FDB15L}};
                int **l_652[4];
                union U6 l_656 = {-1L};
                union U2 l_657 = {0x32L};
                short *l_688 = &g_463;
                short *l_689[1][2][9] = {{{&g_49,(void*)0,&g_156.f3,(void*)0,&g_49,&g_156.f3,&g_156.f3,&g_156.f3,&g_156.f3},{&g_49,(void*)0,&g_156.f3,(void*)0,&g_49,&g_156.f3,&g_156.f3,&g_156.f3,&g_156.f3}}};
                char *l_691 = &g_690;
                int *l_711 = &g_14;
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_652[i] = &g_97[3];
                for (l_500.f0 = 1; (l_500.f0 >= 0); l_500.f0 -= 1)
                {
                    union U2 ****l_626 = (void*)0;
                    union U2 *****l_627 = &l_624;
                    union U2 *****l_630[6];
                    int l_633 = 1L;
                    unsigned short l_634 = 1UL;
                    int l_642[1][5] = {{0x4DF376FAL,0x4DF376FAL,0x4DF376FAL,0x4DF376FAL,0x4DF376FAL}};
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_630[i] = (void*)0;
                    (*l_612) = ((safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((l_609 = (*p_10)), 6)) & g_14), g_340)) >= (l_418 |= func_62(&g_97[3], (safe_rshift_func_uint8_t_u_s((*l_612), (safe_div_func_int8_t_s_s(((l_623 & (((**l_482) &= (((*l_627) = (l_626 = l_624)) == (g_628 = g_628))) || (safe_mod_func_uint8_t_u_u(0x1FL, l_633)))) != l_633), l_634))))))), l_634)) == l_623);
                    if ((safe_rshift_func_int8_t_s_u((((*g_403)--) > l_634), 5)))
                    {
                        int *l_640[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_640[i] = &l_454;
                        (*l_612) &= 0xA0117190L;
                        l_649++;
                        if ((*l_612))
                            break;
                        (*g_96) = &l_17[1];
                    }
                    else
                    {
                        unsigned short l_658 = 0x60F4L;
                        (*l_612) = ((func_62(l_652[2], l_642[0][0]) <= (*p_9)) < (g_156.f3 <= l_500.f0));
                        (*g_96) = func_21(((*g_11) & (safe_add_func_uint16_t_u_u(g_220[4][0][4].f0, (safe_unary_minus_func_uint32_t_u(0x6DB7F328L))))), l_656, l_657, (*l_612));
                        l_658--;
                    }
                    for (l_543 = 0; (l_543 <= 2); l_543 += 1)
                    {
                        union U5 **l_662 = &l_661;
                        int l_674 = 0x368F9ED2L;
                        int i, j, k;
                        (*l_662) = l_661;
                        l_633 ^= func_62(&g_97[5], g_601);
                        (*l_612) = l_642[0][2];
                        l_674 |= (safe_lshift_func_uint8_t_u_u(g_16[(g_12 + 4)][g_12][(l_500.f0 + 4)], (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((*l_612) | l_671), (safe_mul_func_int8_t_s_s(((+l_418) == l_642[0][4]), ((*g_403) = 0x6CL))))) != (-9L)), g_16[(g_12 + 4)][g_12][(l_500.f0 + 4)])), g_601))));
                    }
                    if (l_500.f0)
                        break;
                }
                if ((((safe_rshift_func_int8_t_s_s((*p_10), ((*l_691) = ((safe_add_func_int8_t_s_s((func_62(&l_612, l_455) || (((*l_612) = (safe_mul_func_int8_t_s_s((l_454 ^= (safe_lshift_func_int16_t_s_u(g_107.f1, 5))), l_543))) != (g_26[1] <= (safe_lshift_func_int16_t_s_u((l_17[1] = ((*l_688) ^= (((*p_9) & l_649) <= l_687))), g_340))))), g_690)) == (*p_9))))) || l_31.f0) && 4294967286UL))
                {
                    union U2 l_695[1] = {{0x59L}};
                    int l_705 = 3L;
                    short **l_707 = &l_688;
                    char *l_716[9][1] = {{&g_690},{&g_12},{&g_690},{&g_12},{&g_690},{&g_12},{&g_690},{&g_12},{&g_690}};
                    int i, j;
                    for (l_637 = 2; (l_637 >= 0); l_637 -= 1)
                    {
                        int i, j;
                        (*l_612) = (safe_div_func_uint8_t_u_u(l_13[g_12][g_12].f0, l_13[g_12][g_15].f0));
                        if (l_696)
                            continue;
                    }
                    if (((safe_mul_func_int16_t_s_s(l_706, g_107.f0)) & 0x3BE66073L))
                    {
                        short ***l_708[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_708[i] = (void*)0;
                        g_709[0][0][1] = l_707;
                        if (l_695[0].f0)
                            break;
                        (*g_96) = l_711;
                    }
                    else
                    {
                        short l_712 = 0xE3C3L;
                        int *l_713 = &l_17[1];
                        if (l_712)
                            break;
                        (*g_96) = l_713;
                    }
                    if (l_714)
                        break;
                    if ((*l_711))
                    {
                        char *l_715 = &l_695[0].f0;
                        return l_716[3][0];
                    }
                    else
                    {
                        return p_10;
                    }
                }
                else
                {
                    (*l_711) = (*l_612);
                }
                for (g_304 = 0; (g_304 <= 2); g_304 += 1)
                {
                    unsigned *l_719 = &g_156.f4;
                    l_457[2] ^= ((*l_612) = (safe_mul_func_int8_t_s_s((*p_9), (l_454 | ((++(*l_719)) ^ (0xDC14L | ((-1L) == 0x6148L)))))));
                }
            }
        }
        for (l_33 = 1; (l_33 >= 0); l_33 -= 1)
        {
            short *l_739 = &g_49;
            int l_740 = 1L;
            for (g_496 = 0; (g_496 <= 1); g_496 += 1)
            {
                unsigned short l_722 = 0UL;
                union U2 l_723 = {-1L};
                short **l_738 = &g_710;
                unsigned *l_742 = &g_743;
            }
            (*g_96) = &l_741;
            l_455 = (safe_lshift_func_uint16_t_u_s(l_740, ((void*)0 != l_747)));
        }
    }
    (*l_748) = &l_13[1][0];
    return &g_12;
}







static int * func_21(unsigned p_22, union U6 p_23, union U2 p_24, unsigned p_25)
{
    for (g_29.f0 = (-6); (g_29.f0 == 8); g_29.f0 = safe_add_func_int16_t_s_s(g_29.f0, 6))
    {
        for (p_23.f0 = 0; (p_23.f0 == 27); p_23.f0++)
        {
            return &g_15;
        }
    }
    return &g_16[0][2][6];
}







static unsigned func_52(short * p_53, union U1 p_54, int * p_55, unsigned p_56, char p_57)
{
    int l_337[9] = {(-2L),(-2L),0xA870456DL,(-2L),(-2L),0xA870456DL,(-2L),(-2L),0xA870456DL};
    union U6 ***l_343 = &g_168;
    char *l_344[9][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int l_347 = 5L;
    char l_398 = 0L;
    union U6 *l_410 = &g_29;
    union U5 *l_414 = &g_156;
    int i, j;
    if ((safe_lshift_func_int8_t_s_u(((safe_div_func_int8_t_s_s(l_337[4], ((safe_mul_func_int16_t_s_s(((*p_53) = ((*p_55) <= g_340)), g_41[4][1][1].f0)) | ((safe_mod_func_int32_t_s_s(((g_220[4][0][4].f0 ^= (l_343 != (void*)0)) <= ((((g_245 |= (l_347 &= ((safe_div_func_uint16_t_u_u((((void*)0 != (*l_343)) | p_57), l_337[0])) ^ g_16[3][2][2]))) == 0x50L) | l_337[8]) < 0x864BL)), l_337[4])) | l_337[4])))) && (-1L)), 2)))
    {
        int *l_348 = (void*)0;
        int l_349 = 0x4C24D0D1L;
        union U2 *l_362 = (void*)0;
        int l_391 = 0x35034025L;
        unsigned *l_392 = &g_156.f4;
        unsigned char *l_393[7][10][3] = {{{&g_340,&g_107.f0,&g_107.f0},{&g_340,&g_340,&g_107.f0},{&g_107.f0,&g_107.f0,&g_41[4][1][1].f1},{&g_340,&g_304,(void*)0},{&g_340,&g_304,&g_41[4][1][1].f1},{&g_304,&g_107.f0,&g_304},{&g_304,&g_340,&g_41[4][1][1].f1},{(void*)0,&g_107.f0,(void*)0},{(void*)0,&g_304,&g_41[4][1][1].f1},{&g_304,&g_340,&g_107.f0}},{{&g_304,&g_304,&g_107.f0},{&g_340,&g_107.f0,&g_107.f0},{&g_340,&g_340,&g_107.f0},{&g_107.f0,&g_107.f0,&g_41[4][1][1].f1},{&g_340,&g_304,(void*)0},{&g_340,&g_304,&g_41[4][1][1].f1},{&g_304,&g_107.f0,&g_304},{&g_304,&g_340,&g_41[4][1][1].f1},{(void*)0,&g_107.f0,(void*)0},{(void*)0,&g_304,&g_41[4][1][1].f1}},{{&g_304,&g_340,&g_107.f0},{&g_304,&g_304,&g_107.f0},{&g_340,&g_107.f0,&g_107.f0},{&g_340,&g_340,&g_107.f0},{&g_107.f0,&g_107.f0,&g_41[4][1][1].f1},{&g_340,&g_304,(void*)0},{&g_340,&g_304,&g_41[4][1][1].f1},{&g_304,&g_107.f0,&g_304},{&g_304,&g_340,&g_41[4][1][1].f1},{(void*)0,&g_107.f0,(void*)0}},{{(void*)0,&g_304,(void*)0},{&g_107.f0,&g_340,&g_304},{&g_340,&g_304,&g_41[4][1][1].f1},{&g_107.f0,&g_304,&g_41[4][1][1].f1},{&g_304,&g_107.f0,&g_304},{&g_340,&g_340,(void*)0},{&g_304,&g_340,(void*)0},{&g_107.f0,&g_340,&g_340},{&g_340,&g_340,&g_107.f0},{&g_107.f0,&g_107.f0,&g_340}},{{&g_304,&g_304,(void*)0},{&g_304,&g_304,(void*)0},{&g_107.f0,&g_340,&g_304},{&g_340,&g_304,&g_41[4][1][1].f1},{&g_107.f0,&g_304,&g_41[4][1][1].f1},{&g_304,&g_107.f0,&g_304},{&g_340,&g_340,(void*)0},{&g_304,&g_340,(void*)0},{&g_107.f0,&g_340,&g_340},{&g_340,&g_340,&g_107.f0}},{{&g_107.f0,&g_107.f0,&g_340},{&g_304,&g_304,(void*)0},{&g_304,&g_304,(void*)0},{&g_107.f0,&g_340,&g_304},{&g_340,&g_304,&g_41[4][1][1].f1},{&g_107.f0,&g_304,&g_41[4][1][1].f1},{&g_304,&g_107.f0,&g_304},{&g_340,&g_340,(void*)0},{&g_304,&g_340,(void*)0},{&g_107.f0,&g_340,&g_340}},{{&g_340,&g_340,&g_107.f0},{&g_107.f0,&g_107.f0,&g_340},{&g_304,&g_340,&g_340},{&g_107.f0,&g_107.f0,&g_107.f0},{&g_304,&g_107.f0,&g_304},{&g_304,&g_107.f0,&g_304},{(void*)0,&g_340,&g_304},{&g_340,(void*)0,&g_304},{&g_304,&g_304,&g_107.f0},{&g_340,&g_304,&g_340}}};
        unsigned char *l_405 = (void*)0;
        int i, j, k;
        l_349 &= (*p_55);
        for (g_29.f0 = 17; (g_29.f0 == 22); g_29.f0 = safe_add_func_uint32_t_u_u(g_29.f0, 5))
        {
            if (l_337[3])
                break;
            for (g_84 = 0; (g_84 < (-26)); g_84--)
            {
                union U2 *l_361[10][9][2] = {{{&g_220[5][0][0],(void*)0},{&g_220[4][0][4],&g_220[4][0][4]},{&g_220[1][1][2],&g_220[4][0][4]},{&g_220[4][0][3],&g_220[4][0][4]},{&g_220[4][0][4],(void*)0},{&g_220[4][0][4],&g_220[2][1][4]},{(void*)0,&g_220[4][0][4]},{&g_220[4][0][4],&g_220[4][0][4]},{(void*)0,&g_220[2][1][4]}},{{&g_220[4][0][4],(void*)0},{&g_220[4][0][4],&g_220[4][0][4]},{&g_220[4][0][3],&g_220[4][0][4]},{&g_220[1][1][2],&g_220[4][0][4]},{&g_220[4][0][4],(void*)0},{&g_220[5][0][0],(void*)0},{&g_220[4][0][4],&g_220[4][0][4]},{&g_220[1][2][2],&g_220[5][0][0]},{&g_220[4][0][4],&g_220[4][0][4]}},{{(void*)0,(void*)0},{&g_220[4][0][4],(void*)0},{&g_220[2][0][2],&g_220[4][0][4]},{&g_220[4][0][4],&g_220[2][0][2]},{&g_220[4][0][4],&g_220[4][0][4]},{&g_220[4][0][4],&g_220[2][0][2]},{&g_220[4][0][4],&g_220[4][0][4]},{&g_220[2][0][2],(void*)0},{&g_220[4][0][4],(void*)0}},{{(void*)0,&g_220[4][0][4]},{&g_220[4][0][4],&g_220[5][0][0]},{&g_220[1][2][2],&g_220[4][0][4]},{&g_220[4][0][4],(void*)0},{&g_220[5][0][0],(void*)0},{&g_220[4][0][4],&g_220[4][0][4]},{&g_220[1][1][2],&g_220[4][0][4]},{&g_220[4][0][3],&g_220[4][0][4]},{&g_220[4][0][4],(void*)0}},{{(void*)0,&g_220[4][0][4]},{&g_220[1][2][2],&g_220[4][0][4]},{&g_220[5][0][0],&g_220[4][0][4]},{&g_220[1][2][2],&g_220[4][0][4]},{(void*)0,&g_220[2][0][2]},{(void*)0,&g_220[4][0][4]},{(void*)0,(void*)0},{&g_220[4][1][3],&g_220[4][0][4]},{&g_220[2][1][4],&g_220[1][2][2]}},{{&g_220[4][0][4],&g_220[4][0][4]},{&g_220[4][0][4],&g_220[5][0][0]},{(void*)0,&g_220[4][0][4]},{&g_220[1][1][2],&g_220[1][1][2]},{(void*)0,&g_220[4][0][3]},{&g_220[4][0][4],&g_220[4][0][4]},{(void*)0,&g_220[4][0][4]},{(void*)0,(void*)0},{&g_220[4][0][4],&g_220[4][0][4]}},{{&g_220[4][0][4],(void*)0},{(void*)0,&g_220[4][0][4]},{(void*)0,&g_220[4][0][4]},{&g_220[4][0][4],&g_220[4][0][3]},{(void*)0,&g_220[1][1][2]},{&g_220[1][1][2],&g_220[4][0][4]},{(void*)0,&g_220[5][0][0]},{&g_220[4][0][4],&g_220[4][0][4]},{&g_220[4][0][4],&g_220[1][2][2]}},{{&g_220[2][1][4],&g_220[4][0][4]},{&g_220[4][1][3],(void*)0},{(void*)0,&g_220[4][0][4]},{(void*)0,&g_220[2][0][2]},{(void*)0,&g_220[4][0][4]},{&g_220[1][2][2],&g_220[4][0][4]},{&g_220[5][0][0],&g_220[4][0][4]},{&g_220[1][2][2],&g_220[4][0][4]},{(void*)0,&g_220[2][0][2]}},{{(void*)0,&g_220[4][0][4]},{(void*)0,(void*)0},{&g_220[4][1][3],&g_220[4][0][4]},{&g_220[2][1][4],&g_220[1][2][2]},{&g_220[4][0][4],&g_220[4][0][4]},{&g_220[4][0][4],&g_220[5][0][0]},{(void*)0,&g_220[4][0][4]},{&g_220[1][1][2],&g_220[1][1][2]},{(void*)0,&g_220[4][0][3]}},{{&g_220[4][0][4],&g_220[4][0][4]},{(void*)0,&g_220[4][0][4]},{(void*)0,&g_220[4][0][4]},{&g_220[4][0][4],&g_220[4][1][3]},{&g_220[4][0][4],&g_220[4][0][4]},{&g_220[4][0][4],&g_220[4][0][3]},{&g_220[4][0][4],&g_220[4][0][4]},{&g_220[1][2][2],(void*)0},{(void*)0,(void*)0}}};
                union U2 **l_360 = &l_361[9][2][0];
                int l_367 = (-4L);
                int *l_370 = &g_15;
                int *l_372 = (void*)0;
                int *l_373 = &g_273[2].f2;
                int *l_374 = &g_16[3][0][1];
                int i, j, k;
                if ((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0x9AB6L, (((*p_53) && (safe_div_func_uint8_t_u_u((((((*p_55) = (((*l_360) = (void*)0) != l_362)) & (safe_mod_func_int16_t_s_s(g_26[0], (safe_mul_func_int8_t_s_s(((&p_55 != &l_348) >= g_15), g_156.f4))))) || l_367) == p_54.f0), l_367))) & 5L))), 246UL)))
                {
                    (*l_360) = (void*)0;
                }
                else
                {
                    unsigned short *l_371[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    if ((safe_mod_func_uint16_t_u_u(((*p_55) < ((void*)0 != p_53)), (g_107.f1 |= ((l_370 == (void*)0) ^ g_12)))))
                    {
                        (*p_55) = 0xA9E2FB10L;
                    }
                    else
                    {
                        (*g_96) = p_55;
                    }
                    (*g_96) = &g_14;
                }
                (*p_55) = l_337[4];
                (*l_374) |= (*p_55);
            }
        }
        (*p_55) = ((0xE2L <= (0xE2L >= l_337[7])) > (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((p_54.f0 &= ((((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(g_107.f1, l_337[4])), 10)), g_41[4][1][1].f0)) > (safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((*l_392) = ((-7L) != (((&p_56 != l_348) < (*p_55)) <= l_391))) != (*p_55)), g_16[5][1][1])), (-1L)))) == g_304) | 1L)), 5)) && l_337[0]), 0L)));
        for (p_56 = (-29); (p_56 != 37); p_56 = safe_add_func_uint8_t_u_u(p_56, 5))
        {
            union U3 *l_396 = &g_273[2];
            union U3 **l_397 = &g_272;
            unsigned short *l_401 = (void*)0;
            unsigned char **l_402 = (void*)0;
            unsigned char **l_404 = &l_393[0][5][1];
            unsigned short *l_406 = &g_273[2].f1;
            int l_407 = (-1L);
            union U6 *l_412[9][3] = {{&g_29,&g_29,&g_29},{&g_29,&g_29,&g_29},{&g_29,&g_29,&g_29},{&g_29,&g_29,&g_29},{&g_29,&g_29,&g_29},{&g_29,&g_29,&g_29},{&g_29,&g_29,&g_29},{&g_29,&g_29,&g_29},{&g_29,&g_29,&g_29}};
            int i, j;
            (*l_397) = l_396;
            if ((((*p_55) = func_62(&g_97[6], l_398)) >= (safe_mod_func_uint32_t_u_u(((p_54.f1 = g_26[3]) && ((*l_406) = ((g_403 = l_344[7][1]) != (l_405 = ((*l_404) = &g_340))))), ((~g_156.f0) | (0L != l_407))))))
            {
                g_272 = (*l_397);
                return g_232;
            }
            else
            {
                union U6 **l_411[1][7][1] = {{{(void*)0},{&g_169},{(void*)0},{&g_169},{(void*)0},{&g_169},{(void*)0}}};
                int i, j, k;
                (*p_55) |= func_62(&g_97[3], (0x22L | (l_410 != (l_412[4][1] = &g_29))));
            }
        }
    }
    else
    {
        int **l_413[3][2][4] = {{{&g_97[6],&g_97[3],&g_97[3],&g_97[3]},{&g_97[0],&g_97[3],(void*)0,&g_97[3]}},{{&g_97[3],&g_97[3],&g_97[3],&g_97[3]},{&g_97[3],&g_97[3],&g_97[0],&g_97[6]}},{{&g_97[3],&g_97[0],&g_97[3],(void*)0},{&g_97[3],&g_97[6],(void*)0,(void*)0}}};
        int i, j, k;
        (*p_55) &= (((l_337[2] == ((*g_403) &= ((void*)0 == (*g_143)))) || (p_54.f1 = l_337[4])) == (func_62(l_413[0][0][0], p_57) ^ 1L));
    }
    l_414 = l_414;
    return p_56;
}







static short * func_58(unsigned p_59, int p_60, union U6 * p_61)
{
    unsigned short l_178[5];
    unsigned l_184 = 1UL;
    int l_236[9][9] = {{0x1D7D04A5L,0x1D7D04A5L,0x6E5AD4D9L,0x9B021E3EL,9L,0x52B1F58DL,0xC8742C00L,3L,0xC8742C00L},{0x1D7D04A5L,0x2B35A70BL,0x52B1F58DL,0x52B1F58DL,0x2B35A70BL,0x1D7D04A5L,0x9B021E3EL,(-1L),0xF8AA3A57L},{3L,0x5942EDEBL,3L,9L,4L,4L,9L,3L,0x2B35A70BL},{4L,0xF8AA3A57L,(-1L),0x9B021E3EL,0x1D7D04A5L,0x2B35A70BL,0x52B1F58DL,0x52B1F58DL,0x2B35A70BL},{0x9B021E3EL,3L,0x6E5AD4D9L,3L,0x9B021E3EL,0xF8AA3A57L,0xD8C5958AL,(-1L),9L},{0xD8C5958AL,0xF8AA3A57L,0x9B021E3EL,3L,0x6E5AD4D9L,3L,0x9B021E3EL,0xF8AA3A57L,0xD8C5958AL},{0x52B1F58DL,0x2B35A70BL,0x1D7D04A5L,0x9B021E3EL,(-1L),0xF8AA3A57L,4L,0xF8AA3A57L,(-1L)},{9L,4L,4L,9L,3L,0x2B35A70BL,0xC8742C00L,(-1L),0x1D7D04A5L},{0x52B1F58DL,(-1L),4L,0x5942EDEBL,0x5942EDEBL,4L,(-1L),0x52B1F58DL,0x6E5AD4D9L}};
    unsigned l_282 = 0UL;
    int l_300 = (-6L);
    union U3 *l_328[4][2] = {{(void*)0,(void*)0},{&g_273[3],(void*)0},{(void*)0,&g_273[3]},{(void*)0,(void*)0}};
    short *l_332 = &g_107.f4;
    int i, j;
    for (i = 0; i < 5; i++)
        l_178[i] = 0UL;
    if (p_59)
    {
        int *l_176 = &g_156.f2;
        int *l_177[9][6][2] = {{{&g_15,&g_84},{&g_29.f0,(void*)0},{&g_14,&g_14},{&g_16[0][2][6],&g_84},{&g_16[0][2][6],(void*)0},{&g_16[0][2][6],(void*)0}},{{&g_15,&g_16[0][2][6]},{&g_84,&g_156.f2},{&g_84,&g_16[0][2][6]},{&g_15,(void*)0},{&g_16[0][2][6],(void*)0},{&g_16[0][2][6],&g_84}},{{&g_16[0][2][6],&g_14},{(void*)0,&g_15},{&g_16[0][2][6],(void*)0},{&g_84,&g_16[0][2][6]},{&g_15,&g_16[5][0][8]},{&g_16[0][2][6],&g_14}},{{&g_84,&g_15},{&g_14,&g_15},{&g_156.f2,&g_15},{&g_16[0][2][6],&g_15},{&g_156.f2,&g_15},{&g_14,&g_15}},{{&g_84,&g_14},{&g_16[0][2][6],&g_16[5][0][8]},{&g_15,&g_16[0][2][6]},{&g_84,(void*)0},{&g_16[0][2][6],&g_15},{(void*)0,(void*)0}},{{&g_16[0][2][6],&g_156.f2},{&g_15,&g_15},{&g_16[5][2][9],&g_16[0][2][6]},{&g_84,&g_16[5][2][9]},{(void*)0,&g_16[5][0][8]},{(void*)0,&g_16[5][2][9]}},{{&g_84,&g_16[0][2][6]},{&g_16[5][2][9],&g_15},{&g_15,&g_156.f2},{&g_16[0][2][6],(void*)0},{(void*)0,&g_15},{&g_16[0][2][6],(void*)0}},{{&g_84,&g_16[0][2][6]},{&g_15,&g_16[5][0][8]},{&g_16[0][2][6],&g_14},{&g_84,&g_15},{&g_14,&g_15},{&g_156.f2,&g_15}},{{&g_16[0][2][6],&g_15},{&g_156.f2,&g_15},{&g_14,&g_15},{&g_84,&g_14},{&g_16[0][2][6],&g_16[5][0][8]},{&g_15,&g_16[0][2][6]}}};
        unsigned short *l_183[10][5][5] = {{{&g_26[0],&g_41[4][1][1].f0,&l_178[1],&l_178[1],&g_26[0]},{(void*)0,&g_26[2],&l_178[2],&l_178[1],&l_178[1]},{(void*)0,&g_26[3],(void*)0,(void*)0,&l_178[4]},{&g_41[4][1][1].f0,&l_178[1],&g_107.f1,&l_178[0],&l_178[4]},{(void*)0,&l_178[1],&g_26[0],&l_178[1],&g_26[0]}},{{&l_178[1],&l_178[1],&l_178[1],(void*)0,(void*)0},{&l_178[1],&g_26[1],&l_178[1],&g_41[4][1][1].f0,&l_178[1]},{&l_178[3],&g_107.f1,&g_107.f1,&l_178[1],&l_178[1]},{&g_107.f1,&l_178[1],&g_26[4],(void*)0,&l_178[3]},{&g_41[4][1][1].f0,(void*)0,&g_107.f1,&l_178[1],&g_26[0]}},{{&l_178[4],&l_178[1],&l_178[1],(void*)0,&g_26[0]},{&g_26[4],&l_178[4],&l_178[1],(void*)0,&g_41[4][1][1].f0},{&g_107.f1,(void*)0,&g_26[0],&l_178[1],(void*)0},{(void*)0,&g_26[0],&g_107.f1,&l_178[1],&g_41[4][1][1].f0},{(void*)0,&g_26[3],&l_178[1],(void*)0,&l_178[3]}},{{&g_107.f1,&g_107.f1,&l_178[1],&g_41[4][1][1].f0,(void*)0},{&g_26[4],&g_26[0],&g_26[0],&g_26[4],&g_26[2]},{&l_178[4],(void*)0,&g_41[4][1][1].f0,&g_26[0],(void*)0},{&g_41[4][1][1].f0,(void*)0,&l_178[1],&g_107.f1,&g_26[3]},{&g_107.f1,(void*)0,&g_41[4][1][1].f0,&g_26[0],(void*)0}},{{&l_178[3],&l_178[1],&g_26[0],&g_26[4],&l_178[4]},{&l_178[1],(void*)0,&g_26[0],&g_41[4][1][1].f0,&l_178[2]},{&g_41[4][1][1].f0,&l_178[1],&g_41[4][1][1].f0,&l_178[1],(void*)0},{&g_107.f1,&l_178[1],&g_26[1],&g_26[0],&g_41[4][1][1].f0},{&g_26[4],&l_178[1],&l_178[2],(void*)0,&g_107.f1}},{{&g_26[0],&l_178[1],(void*)0,&l_178[1],&g_26[4]},{&g_26[2],&g_107.f1,&g_26[4],&g_107.f1,&g_26[2]},{&g_41[4][1][1].f0,&g_41[4][1][1].f0,&g_26[0],&g_26[0],&l_178[1]},{&g_41[4][1][1].f0,&g_41[4][1][1].f0,&g_41[4][1][1].f0,&l_178[1],&l_178[1]},{&l_178[0],&g_107.f1,&l_178[1],&g_41[4][1][1].f0,&l_178[1]}},{{&l_178[2],&l_178[1],&g_41[4][1][1].f0,&g_41[4][1][1].f0,&g_26[2]},{&l_178[1],&g_26[4],(void*)0,&l_178[1],&g_26[4]},{&l_178[0],&g_26[0],&g_26[0],&l_178[1],&g_107.f1},{&l_178[1],&l_178[2],&g_26[4],&l_178[1],&g_41[4][1][1].f0},{&l_178[1],&l_178[2],&g_26[4],&g_26[2],(void*)0}},{{&g_26[2],&g_107.f1,&g_26[0],&l_178[0],&l_178[2]},{&l_178[1],&l_178[1],(void*)0,(void*)0,&l_178[1]},{(void*)0,(void*)0,&g_41[4][1][1].f0,&g_41[4][1][1].f0,&g_41[4][1][1].f0},{&g_107.f1,&g_107.f1,&l_178[1],&l_178[1],&l_178[2]},{(void*)0,&l_178[1],&g_41[4][1][1].f0,(void*)0,&l_178[1]}},{{&g_107.f1,&g_41[4][1][1].f0,&g_26[0],&g_26[0],&g_26[0]},{&g_41[4][1][1].f0,&g_41[4][1][1].f0,&l_178[1],&l_178[0],&g_26[0]},{&l_178[1],&l_178[1],&l_178[1],&g_26[0],&g_41[4][1][1].f0},{&l_178[1],&l_178[1],&l_178[2],&g_26[0],(void*)0},{&g_26[0],&l_178[0],&l_178[1],&g_26[0],&g_107.f1}},{{(void*)0,&g_26[0],&g_26[4],&g_26[0],&l_178[2]},{&l_178[1],(void*)0,&g_26[0],&l_178[0],&g_26[0]},{&g_107.f1,&g_107.f1,&l_178[1],(void*)0,&l_178[1]},{&g_26[0],&l_178[1],(void*)0,&l_178[1],&g_41[4][1][1].f0},{&l_178[1],&l_178[1],&g_26[4],&l_178[1],&l_178[1]}}};
        unsigned l_191 = 1UL;
        int i, j, k;
        l_178[1]++;
        g_192 |= (safe_add_func_uint16_t_u_u((l_184 = 0xBF6EL), (((safe_mod_func_int32_t_s_s((l_178[1] | (0x4C5CL & (safe_mul_func_uint16_t_u_u(0xDDA2L, (safe_mul_func_uint8_t_u_u(p_59, (p_60 == func_62(&g_97[4], g_84)))))))), 0x99370A3AL)) && g_156.f0) < l_191)));
    }
    else
    {
        int l_235 = 0x98DC6CC5L;
        int l_239 = 1L;
        int l_241 = 1L;
        int l_244[10];
        union U1 *l_268 = &g_107;
        unsigned l_312 = 0xB0B0BE5EL;
        int i;
        for (i = 0; i < 10; i++)
            l_244[i] = 0x96C0DC9BL;
        for (g_29.f0 = 0; (g_29.f0 >= (-10)); --g_29.f0)
        {
            int l_196 = (-1L);
            int l_197[3];
            int *l_218 = &l_197[2];
            unsigned l_276 = 4294967295UL;
            unsigned char l_293 = 0x0EL;
            union U0 *l_299 = &g_41[4][1][1];
            union U1 *l_320 = &g_107;
            int i;
            for (i = 0; i < 3; i++)
                l_197[i] = (-10L);
            for (g_84 = 0; (g_84 <= 2); g_84 += 1)
            {
                unsigned l_200 = 0xF2E61481L;
                unsigned short l_211 = 0xFE78L;
                int l_213 = 0xF462B9B9L;
                int l_238 = 0xAEF25888L;
                int l_240 = 0L;
                int l_243[8][7][4] = {{{(-1L),0x93DF1BCEL,1L,8L},{(-4L),4L,8L,(-8L)},{0x59513564L,1L,0x9F4458C4L,(-2L)},{0xA4460034L,(-8L),0x59513564L,0L},{(-6L),0x31C739BDL,0x65774EACL,0x59513564L},{5L,5L,0xB68B30DDL,(-1L)},{1L,(-8L),0xFC9F5F19L,0x3366FF65L}},{{0x3366FF65L,1L,2L,8L},{0xA883288FL,0L,4L,0x5E235CA9L},{1L,2L,0L,0xB68B30DDL},{1L,(-1L),0xB68B30DDL,0xFA3A97D9L},{0L,1L,0L,1L},{4L,0x5AD91B2CL,0x65774EACL,1L},{0x31C739BDL,0xDBAFD6F9L,0xA4460034L,0L}},{{0x4B730BE3L,(-1L),0x93DF1BCEL,0xC10346A9L},{0x4B730BE3L,(-5L),0xA4460034L,(-8L)},{0x31C739BDL,0xC10346A9L,0x65774EACL,0L},{(-8L),0L,0xFA3A97D9L,0x65774EACL},{0L,(-9L),0xFFA29DB5L,(-6L)},{0xB68B30DDL,0L,0x59513564L,(-8L)},{(-8L),(-5L),(-8L),0x93DF1BCEL}},{{0x0EBD3525L,(-8L),0xDDDE7397L,0x1BAD7757L},{(-8L),2L,0xDABBB0C2L,1L},{(-9L),0xC280A07FL,0xFFA29DB5L,(-1L)},{0x3366FF65L,0x02AF47F2L,1L,0xA4460034L},{(-1L),0xA883288FL,(-5L),0x3366FF65L},{0x31C739BDL,0L,(-1L),0x1BAD7757L},{(-5L),(-1L),(-1L),(-1L)}},{{1L,1L,0xA4460034L,0x21BC675DL},{5L,0L,0x4B730BE3L,0L},{(-1L),0L,0L,0x4B730BE3L},{0L,0L,1L,0L},{0L,0L,0xDABBB0C2L,0x21BC675DL},{1L,1L,(-8L),(-1L)},{(-2L),(-1L),(-1L),0x1BAD7757L}},{{(-8L),0L,(-4L),0x3366FF65L},{(-9L),0L,1L,1L},{0x21BC675DL,1L,(-1L),0x31C739BDL},{0xC467ECA6L,(-2L),0xFA3A97D9L,1L},{0L,(-8L),0xACF740BBL,0xDABBB0C2L},{0x9F4458C4L,8L,(-6L),2L},{1L,0xFA3A97D9L,0x31C739BDL,(-1L)}},{{5L,0L,0x5949C6FAL,0x5AD91B2CL},{0xC467ECA6L,0x3366FF65L,(-1L),0x5949C6FAL},{8L,0xFFA29DB5L,8L,0xDDDE7397L},{(-2L),(-6L),0x65774EACL,0L},{0x93DF1BCEL,0xFA3A97D9L,0xC280A07FL,(-6L)},{0xDABBB0C2L,0xA883288FL,0xC280A07FL,1L},{0x93DF1BCEL,(-1L),0x65774EACL,1L}},{{(-2L),0x1BAD7757L,8L,1L},{8L,1L,(-1L),0xACF740BBL},{0xC467ECA6L,0L,0x5949C6FAL,0x21BC675DL},{5L,(-8L),0x31C739BDL,1L},{1L,0xC467ECA6L,(-6L),0xDBAFD6F9L},{0x9F4458C4L,0L,0xACF740BBL,(-1L)},{0L,(-6L),0xFA3A97D9L,(-1L)}}};
                int *l_275[8] = {(void*)0,&l_239,(void*)0,&l_239,(void*)0,&l_239,(void*)0,&l_239};
                int i, j, k;
                for (l_184 = 0; (l_184 <= 2); l_184 += 1)
                {
                    char l_198 = 0L;
                    int l_199 = 9L;
                    int l_212 = 1L;
                    union U2 *l_219 = &g_220[4][0][4];
                    union U2 **l_221 = &l_219;
                    union U2 *l_223[4][8] = {{&g_220[0][2][6],&g_220[2][1][0],&g_220[0][2][6],&g_220[2][1][0],&g_220[0][2][6],&g_220[2][1][0],&g_220[0][2][6],&g_220[2][1][0]},{&g_220[0][2][6],&g_220[2][1][0],&g_220[0][2][6],&g_220[2][1][0],&g_220[0][2][6],&g_220[2][1][0],&g_220[0][2][6],&g_220[2][1][0]},{&g_220[0][2][6],&g_220[2][1][0],&g_220[0][2][6],&g_220[2][1][0],&g_220[0][2][6],&g_220[2][1][0],&g_220[0][2][6],&g_220[2][1][0]},{&g_220[0][2][6],&g_220[2][1][0],&g_220[0][2][6],&g_220[2][1][0],&g_220[0][2][6],&g_220[2][1][0],&g_220[0][2][6],&g_220[2][1][0]}};
                    union U2 **l_222 = &l_223[3][0];
                    int i, j;
                    for (g_118 = 0; (g_118 <= 2); g_118 += 1)
                    {
                        int *l_195[7][3][4] = {{{&g_16[0][2][6],&g_16[0][2][6],&g_156.f2,&g_16[0][2][6]},{&g_14,(void*)0,&g_84,&g_16[0][2][6]},{&g_84,&g_16[0][2][6],(void*)0,&g_14}},{{(void*)0,&g_14,&g_156.f2,&g_14},{(void*)0,(void*)0,(void*)0,&g_14},{&g_84,&g_14,&g_84,&g_14}},{{&g_14,&g_14,&g_156.f2,&g_14},{&g_16[0][2][6],(void*)0,&g_29.f0,&g_14},{&g_84,&g_14,&g_29.f0,&g_14}},{{&g_16[0][2][6],&g_16[0][2][6],&g_156.f2,&g_16[0][2][6]},{&g_14,(void*)0,&g_84,&g_16[0][2][6]},{&g_84,&g_16[0][2][6],(void*)0,&g_14}},{{(void*)0,&g_14,&g_156.f2,&g_14},{(void*)0,(void*)0,(void*)0,&g_14},{&g_84,&g_14,&g_84,&g_14}},{{&g_14,&g_14,&g_156.f2,&g_14},{&g_16[0][2][6],(void*)0,&g_29.f0,&g_14},{&g_84,&g_14,&g_29.f0,&g_14}},{{(void*)0,&g_14,(void*)0,&g_14},{&g_16[0][2][6],&g_16[g_84][l_184][(l_184 + 3)],(void*)0,&g_14},{(void*)0,&g_14,&g_29.f0,(void*)0}}};
                        int **l_214 = &l_195[4][1][3];
                        int **l_215 = (void*)0;
                        int *l_217[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int **l_216[1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_216[i] = &l_217[1];
                        ++l_200;
                        l_213 &= (g_16[(g_118 + 2)][g_118][(g_84 + 6)] <= (l_212 &= (l_199 &= ((g_16[g_84][g_118][(l_184 + 6)] < g_16[(l_184 + 3)][l_184][(l_184 + 1)]) & (safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((l_211 |= (((safe_mod_func_uint32_t_u_u((!(g_156.f4 = g_16[g_84][g_118][(g_84 + 7)])), l_178[g_118])) <= p_59) < ((p_59 < (safe_add_func_int16_t_s_s(((p_60 ^= (g_41[4][1][1].f0 >= (!g_41[4][1][1].f0))) <= 0x3398E590L), (-9L)))) && 0x45L))), p_59)), p_59))))));
                        l_218 = ((*l_214) = ((*g_96) = &p_60));
                    }
                    if (p_59)
                        break;
                    (*l_222) = ((*l_221) = l_219);
                }
                for (l_184 = 19; (l_184 != 27); ++l_184)
                {
                    short l_237[4][1];
                    char l_242 = 0x72L;
                    int l_246[2][9] = {{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L}};
                    unsigned short l_247 = 65527UL;
                    unsigned l_250[6];
                    union U1 *l_264 = &g_107;
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_237[i][j] = 0xE2A5L;
                    }
                    for (i = 0; i < 6; i++)
                        l_250[i] = 4294967295UL;
                    for (g_192 = 0; (g_192 <= 17); g_192++)
                    {
                        unsigned l_233 = 0x741046A6L;
                        int *l_234[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        (*l_218) = (p_60 && (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(1UL, g_232)), (p_60 >= l_233))));
                        l_247++;
                        --l_250[2];
                    }
                    for (l_247 = 0; (l_247 < 43); ++l_247)
                    {
                        union U1 **l_262 = (void*)0;
                        union U1 **l_263 = (void*)0;
                        union U1 **l_265 = &g_106;
                        (*l_218) = (p_59 | ((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int16_t_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_41[4][1][1].f0, ((l_264 = &g_107) != ((*l_265) = &g_107)))), l_236[2][7])))), 3)) >= g_220[4][0][4].f0));
                        if (p_59)
                            break;
                        if (p_60)
                            continue;
                    }
                }
                for (l_235 = 0; (l_235 == 4); l_235++)
                {
                    int *l_269[6][10][4] = {{{&l_213,&g_16[0][2][6],&l_197[0],&l_240},{&l_197[2],&l_240,&g_14,&g_29.f0},{&l_197[2],&l_197[2],&l_197[0],(void*)0},{&l_213,&g_29.f0,&l_243[2][1][3],&g_14},{&l_236[4][2],&l_238,&l_236[4][2],&g_14},{&l_243[2][1][3],&g_29.f0,&l_213,(void*)0},{&l_197[0],&l_197[2],&l_197[2],&g_29.f0},{&g_14,&l_240,&l_197[2],&l_240},{&l_197[0],&g_16[0][2][6],&l_213,&l_197[2]},{&l_243[2][1][3],&g_15,&l_236[4][2],&g_15}},{{&l_236[4][2],&g_15,&l_243[2][1][3],&l_197[2]},{&l_213,&g_16[0][2][6],&l_197[0],&l_240},{&l_197[2],&l_240,&g_14,&g_29.f0},{&l_197[2],&l_197[2],&l_197[0],&g_15},{&g_14,&l_240,&g_16[4][0][1],&g_29.f0},{&l_243[2][1][3],&g_14,&l_243[2][1][3],&g_29.f0},{&g_16[4][0][1],&l_240,&g_14,&g_15},{&g_15,&l_244[1],&l_236[4][2],&l_240},{(void*)0,&l_197[2],&l_236[4][2],&l_241},{&g_15,&l_238,&g_14,&l_244[1]}},{{&g_16[4][0][1],&l_240,&l_243[2][1][3],&l_240},{&l_243[2][1][3],&l_240,&g_16[4][0][1],&l_244[1]},{&g_14,&l_238,&g_15,&l_241},{&l_236[4][2],&l_197[2],(void*)0,&l_240},{&l_236[4][2],&l_244[1],&g_15,&g_15},{&g_14,&l_240,&g_16[4][0][1],&g_29.f0},{&l_243[2][1][3],&g_14,&l_243[2][1][3],&g_29.f0},{&g_16[4][0][1],&l_240,&g_14,&g_15},{&g_15,&l_244[1],&l_236[4][2],&l_240},{(void*)0,&l_197[2],&l_236[4][2],&l_241}},{{&g_15,&l_238,&g_14,&l_244[1]},{&g_16[4][0][1],&l_240,&l_243[2][1][3],&l_240},{&l_243[2][1][3],&l_240,&g_16[4][0][1],&l_244[1]},{&g_14,&l_238,&g_15,&l_241},{&l_236[4][2],&l_197[2],(void*)0,&l_240},{&l_236[4][2],&l_244[1],&g_15,&g_15},{&g_14,&l_240,&g_16[4][0][1],&g_29.f0},{&l_243[2][1][3],&g_14,(void*)0,&g_15},{&l_197[0],&l_240,&l_197[2],&g_16[0][2][6]},{&l_236[4][2],&g_29.f0,&g_14,&l_240}},{{&l_236[0][3],&g_14,&g_14,&l_197[2]},{&l_236[4][2],&l_241,&l_197[2],&g_29.f0},{&l_197[0],&l_238,(void*)0,&l_238},{(void*)0,&l_238,&l_197[0],&g_29.f0},{&l_197[2],&l_241,&l_236[4][2],&l_197[2]},{&g_14,&g_14,&l_236[0][3],&l_240},{&g_14,&g_29.f0,&l_236[4][2],&g_16[0][2][6]},{&l_197[2],&l_240,&l_197[0],&g_15},{(void*)0,(void*)0,(void*)0,&g_15},{&l_197[0],&l_240,&l_197[2],&g_16[0][2][6]}},{{&l_236[4][2],&g_29.f0,&g_14,&l_240},{&l_236[0][3],&g_14,&g_14,&l_197[2]},{&l_236[4][2],&l_241,&l_197[2],&g_29.f0},{&l_197[0],&l_238,(void*)0,&l_238},{(void*)0,&l_238,&l_197[0],&g_29.f0},{&l_197[2],&l_241,&l_236[4][2],&l_197[2]},{&g_14,&g_14,&l_236[0][3],&l_240},{&g_14,&g_29.f0,&l_236[4][2],&g_16[0][2][6]},{&l_197[2],&l_240,&l_197[0],&g_15},{(void*)0,(void*)0,(void*)0,&g_15}}};
                    int i, j, k;
                    l_244[8] ^= (l_178[3] != (p_60 | ((void*)0 != l_268)));
                    for (p_60 = (-1); (p_60 >= (-5)); p_60--)
                    {
                        union U3 **l_274 = &g_272;
                        (*l_274) = g_272;
                        l_244[2] = (l_243[2][6][0] |= p_59);
                    }
                }
                l_276--;
            }
            if (((*l_218) = p_59))
            {
                int *l_279 = &g_16[1][2][5];
                int *l_280 = &g_156.f2;
                int *l_281[4] = {&g_29.f0,&g_29.f0,&g_29.f0,&g_29.f0};
                int i;
                l_282--;
                for (l_276 = (-7); (l_276 <= 47); l_276++)
                {
                    short l_289 = 0xF7D0L;
                    int l_290 = 0xF1C31E2BL;
                    int l_291 = 5L;
                    int l_292 = (-1L);
                    for (g_192 = 15; (g_192 <= 42); g_192 = safe_add_func_int32_t_s_s(g_192, 9))
                    {
                        l_244[7] &= p_60;
                        l_293++;
                    }
                    if (l_289)
                    {
                        if (l_241)
                            break;
                        (*l_218) ^= (*l_279);
                    }
                    else
                    {
                        union U0 *l_298 = &g_41[0][0][0];
                        p_60 = ((*l_218) || (safe_lshift_func_uint16_t_u_u(l_244[1], 10)));
                        (*l_279) = (l_298 == l_299);
                        if (l_300)
                            break;
                        (*l_279) = ((p_60 || g_245) < ((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u(((void*)0 != &g_273[5]))), 7)) >= l_289));
                    }
                    (*l_280) = g_304;
                    (*l_218) = 1L;
                }
            }
            else
            {
                union U3 *l_330[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_330[i] = &g_273[1];
                for (g_118 = 5; (g_118 >= 0); g_118 -= 1)
                {
                    unsigned char *l_309[2][3];
                    unsigned *l_317 = &l_282;
                    union U1 **l_321 = &l_320;
                    union U3 **l_329 = &l_328[1][0];
                    unsigned short *l_331[1];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_309[i][j] = &g_107.f0;
                    }
                    for (i = 0; i < 1; i++)
                        l_331[i] = &g_26[0];
                    (*l_218) = ((safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(p_59, (++g_304))), p_60)) >= (((void*)0 != &g_273[g_118]) == l_312));
                    (*l_218) = (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((l_236[2][6] &= ((l_241 = ((*l_317) = g_192)) != ((safe_rshift_func_int8_t_s_u((((*l_321) = l_320) == l_268), (safe_sub_func_int8_t_s_s((!(p_59 & (safe_div_func_int16_t_s_s(((&p_61 == &p_61) && (p_60 ^ 0UL)), ((((safe_add_func_int16_t_s_s((((*l_329) = l_328[1][0]) != l_330[0]), l_239)) <= g_245) >= g_220[4][0][4].f0) || (*l_218)))))), p_60)))) == 0xA8L))), (*l_218))) | l_312), 0UL));
                }
                (*l_218) ^= 1L;
                return l_332;
            }
            (*g_96) = (*g_96);
        }
    }
    return l_332;
}







static unsigned func_62(int ** p_63, unsigned p_64)
{
    union U0 *l_74 = &g_41[4][1][1];
    union U0 **l_73 = &l_74;
    char *l_80 = (void*)0;
    int l_164 = 1L;
    int *l_165 = &g_16[0][2][6];
    union U6 **l_166 = (void*)0;
    union U6 ***l_167[1];
    int *l_170 = &g_16[0][2][6];
    int *l_171[9][10][2] = {{{&g_84,(void*)0},{(void*)0,(void*)0},{&g_16[0][2][6],&g_16[5][0][3]},{(void*)0,&g_16[5][0][3]},{&g_16[0][2][6],(void*)0},{(void*)0,&g_15},{&g_29.f0,&l_164},{&g_14,&g_156.f2},{&l_164,&g_84},{(void*)0,&g_16[0][2][6]}},{{&g_156.f2,(void*)0},{&l_164,(void*)0},{&g_15,&g_156.f2},{&g_16[0][0][5],&g_16[0][0][5]},{&g_84,(void*)0},{&g_84,&g_84},{&g_16[0][2][6],(void*)0},{&g_156.f2,&g_16[0][2][6]},{&g_84,&g_16[0][2][6]},{&g_84,&g_16[0][2][6]}},{{&g_156.f2,(void*)0},{&g_16[0][2][6],&g_84},{&g_84,(void*)0},{&g_84,&g_16[0][0][5]},{&g_16[0][0][5],&g_156.f2},{&g_15,(void*)0},{&l_164,(void*)0},{&g_156.f2,&g_16[0][2][6]},{(void*)0,&g_84},{&l_164,&g_156.f2}},{{&g_14,&l_164},{&g_29.f0,&g_15},{(void*)0,(void*)0},{&g_16[0][2][6],&g_16[5][0][3]},{(void*)0,&g_16[5][0][3]},{&g_16[0][2][6],(void*)0},{(void*)0,&g_15},{&g_29.f0,&l_164},{&g_14,&g_156.f2},{&l_164,&g_84}},{{(void*)0,&g_16[0][2][6]},{&g_156.f2,(void*)0},{&l_164,(void*)0},{&g_15,&g_156.f2},{&g_16[0][0][5],&g_16[0][0][5]},{&g_84,(void*)0},{&g_84,&g_84},{&g_16[0][2][6],(void*)0},{&g_156.f2,&g_16[0][2][6]},{&g_16[1][2][8],(void*)0}},{{&g_16[1][2][8],&g_16[0][2][6]},{&g_84,(void*)0},{&g_16[0][2][6],&g_29.f0},{&g_16[0][0][5],&g_14},{(void*)0,&l_164},{&l_164,(void*)0},{&g_29.f0,&g_156.f2},{&g_84,&l_164},{(void*)0,&g_15},{(void*)0,&g_16[0][0][5]}},{{&l_164,&g_84},{&g_14,&g_84},{&g_15,&g_16[0][2][6]},{&g_84,&g_156.f2},{&g_15,&g_84},{&g_156.f2,&g_84},{&g_15,&g_156.f2},{&g_84,&g_16[0][2][6]},{&g_15,&g_84},{&g_14,&g_84}},{{&l_164,&g_16[0][0][5]},{(void*)0,&g_15},{(void*)0,&l_164},{&g_84,&g_156.f2},{&g_29.f0,(void*)0},{&l_164,&l_164},{(void*)0,&g_14},{&g_16[0][0][5],&g_29.f0},{&g_16[0][2][6],(void*)0},{&g_84,&g_16[0][2][6]}},{{&g_16[1][2][8],(void*)0},{&g_16[1][2][8],&g_16[0][2][6]},{&g_84,(void*)0},{&g_16[0][2][6],&g_29.f0},{&g_16[0][0][5],&g_14},{(void*)0,&l_164},{&l_164,(void*)0},{&g_29.f0,&g_156.f2},{&g_84,&l_164},{(void*)0,&g_15}}};
    unsigned l_172 = 0xA7513671L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_167[i] = &l_166;
    l_73 = func_67(l_73, p_64, &l_74, func_75(func_77(l_80, &g_12)), ((safe_rshift_func_int16_t_s_u(0xE5B3L, 9)) != g_156.f4));
    (*l_165) |= l_164;
    g_168 = l_166;
    l_172++;
    return p_64;
}







static union U0 ** func_67(union U0 ** p_68, unsigned p_69, union U0 ** p_70, union U5 p_71, int p_72)
{
    short *l_159 = &g_107.f4;
    int *l_162[9] = {&g_156.f2,&g_156.f2,&g_156.f2,&g_156.f2,&g_156.f2,&g_156.f2,&g_156.f2,&g_156.f2,&g_156.f2};
    unsigned l_163 = 1UL;
    int i;
    p_72 |= (((*l_159) = g_14) || (p_69 | (safe_sub_func_uint32_t_u_u(p_71.f3, (l_163 = ((&g_97[3] == (void*)0) ^ 0L))))));
    p_72 = p_69;
    p_72 = (p_71.f2 = p_72);
    return p_68;
}







static union U5 func_75(int ** p_76)
{
    int *l_155[2];
    int i;
    for (i = 0; i < 2; i++)
        l_155[i] = &g_15;
    (*p_76) = l_155[0];
    return g_156;
}







static int ** func_77(char * p_78, char * p_79)
{
    short l_81 = 0xC247L;
    int l_85 = 0x62CCAF28L;
    int l_101 = 2L;
    int **l_114 = &g_97[3];
    int l_117 = 0xB58CEABDL;
    int l_124 = (-10L);
    int l_126 = 1L;
    int l_127 = (-8L);
    int l_130 = 1L;
    int l_135 = 0x4E8DBFCDL;
    int l_136[2][4][4] = {{{0x276FC4B7L,0xD437E483L,0xB045812CL,0x6B2488C4L},{0x276FC4B7L,0x276FC4B7L,1L,1L},{1L,0xD437E483L,1L,0xD437E483L},{0x276FC4B7L,0xB045812CL,0x6B2488C4L,1L}},{{0xD437E483L,0xB045812CL,0xB045812CL,0xD437E483L},{0xB045812CL,0xD437E483L,0x276FC4B7L,1L},{0xB045812CL,0x276FC4B7L,0xB045812CL,0x6B2488C4L},{0xD437E483L,1L,0x6B2488C4L,0x6B2488C4L}}};
    int *l_152 = (void*)0;
    int *l_153 = &l_130;
    int **l_154[3][4][3] = {{{(void*)0,(void*)0,&l_153},{&l_153,&l_153,&l_153},{&g_97[3],&l_153,(void*)0},{(void*)0,&g_97[2],&g_97[3]}},{{&l_153,&l_153,&g_97[2]},{&g_97[0],&l_153,&l_153},{&g_97[0],(void*)0,(void*)0},{&l_153,(void*)0,&l_153}},{{(void*)0,&g_97[0],(void*)0},{&g_97[3],(void*)0,&l_153},{&l_153,(void*)0,&g_97[2]},{(void*)0,&g_97[0],&g_97[3]}}};
    int i, j, k;
    for (g_29.f0 = 2; (g_29.f0 >= 0); g_29.f0 -= 1)
    {
        int *l_82 = &g_16[4][2][3];
        int *l_83[9] = {&g_15,(void*)0,(void*)0,&g_15,(void*)0,(void*)0,&g_15,(void*)0,(void*)0};
        char l_137 = 0xB7L;
        unsigned l_138 = 0UL;
        int i;
        g_84 &= ((*l_82) |= l_81);
        (*l_82) = g_14;
        for (g_84 = 3; (g_84 >= 0); g_84 -= 1)
        {
            int **l_98 = &l_83[4];
            int l_100[7] = {0x5892074BL,(-1L),(-1L),0x5892074BL,(-1L),(-1L),0x5892074BL};
            int l_131 = 0L;
            int i;
            l_85 = g_26[4];
            if (l_85)
            {
                unsigned l_103 = 0x61E74A9FL;
                if (((safe_div_func_uint32_t_u_u(((l_81 & (0x5A3DL ^ (safe_lshift_func_uint8_t_u_s(0x7BL, (*g_11))))) || (*l_82)), (safe_rshift_func_uint8_t_u_u(251UL, (safe_lshift_func_uint16_t_u_s(0UL, ((g_41[4][1][1].f1 | (safe_sub_func_uint16_t_u_u((4294967295UL >= g_41[4][1][1].f1), l_85))) | 0xBC6BL))))))) != 0x0C0DL))
                {
                    return g_96;
                }
                else
                {
                    for (l_85 = 0; (l_85 <= 4); l_85 += 1)
                    {
                        int i, j, k;
                        g_16[l_85][g_29.f0][g_29.f0] |= l_85;
                        return &g_97[3];
                    }
                    for (l_85 = 0; (l_85 <= 4); l_85 += 1)
                    {
                        int l_99 = 0xED510058L;
                        int l_102 = (-1L);
                        union U1 **l_108 = (void*)0;
                        union U1 **l_109 = &g_106;
                        int i, j, k;
                        l_103++;
                        if (l_103)
                            continue;
                        (*l_109) = g_106;
                    }
                }
            }
            else
            {
                int *l_110 = &g_16[5][1][6];
                int l_116 = 0L;
                int l_119 = 0x83DF3A3AL;
                int l_128 = 0x40E15510L;
                int l_129[10][5][5] = {{{0L,0xC3FA5341L,8L,0L,0xBBA2A9BAL},{0L,0xBB995997L,0L,0x24418FD7L,0x0C378F7CL},{0xEC679D41L,0x9B1A0855L,0xB03F1312L,0x6690D2E2L,0x2A095ECAL},{4L,0xBB995997L,0L,0x759CC73FL,0xCD337578L},{0x6690D2E2L,0L,0x9B1A0855L,8L,0xBBA2A9BAL}},{{(-1L),(-3L),0L,(-3L),(-1L)},{0L,0L,(-6L),0xEC679D41L,0xB14546EEL},{6L,0x24418FD7L,4L,0x759CC73FL,0x50ECD05AL},{4L,0xC3FA5341L,(-1L),0L,0xB14546EEL},{0xD9A899DEL,0x759CC73FL,(-1L),(-1L),(-1L)}},{{0xB14546EEL,0x2E0B307BL,0xB03F1312L,4L,0xBBA2A9BAL},{0L,(-3L),6L,1L,0xCD337578L},{4L,(-1L),0x68047741L,6L,0xEC679D41L},{0x40BB9802L,(-3L),0xD9A899DEL,0x24418FD7L,0x39E36F40L},{0L,0x2E0B307BL,0x2E0B307BL,0L,4L}},{{0xE3992C77L,0x759CC73FL,0L,(-1L),(-1L)},{0x6690D2E2L,0xC3FA5341L,0x68047741L,0x9B1A0855L,0x6690D2E2L},{5L,0x24418FD7L,0x40BB9802L,(-1L),0x70F34082L},{0xA19B7F54L,0L,0xB03F1312L,0L,0xDAE8D4C1L},{0xCD337578L,(-3L),0xE3992C77L,0x24418FD7L,0L}},{{0xC3FA5341L,0L,(-1L),6L,0x6690D2E2L},{0x70F34082L,0xBB995997L,5L,1L,0L},{0xB14546EEL,0xA47188FCL,0L,0x6690D2E2L,0x6690D2E2L},{0xE3992C77L,(-1L),0xE3992C77L,0x759CC73FL,0L},{0xBBA2A9BAL,(-1L),0x2E0B307BL,(-6L),0xC3FA5341L}},{{0L,0x24418FD7L,7L,1L,(-1L)},{0xEC679D41L,0x68047741L,0x2E0B307BL,0xC3FA5341L,(-1L)},{0L,0xBB995997L,0xE3992C77L,0xBB995997L,0L},{4L,0xA19B7F54L,0L,0x9B1A0855L,0xDAE8D4C1L},{0L,(-9L),0L,1L,0x40BB9802L}},{{0x6690D2E2L,0x2E0B307BL,8L,0xA19B7F54L,0xDAE8D4C1L},{0L,1L,0L,0x759CC73FL,0L},{0xDAE8D4C1L,0xDAE8D4C1L,0x68047741L,(-1L),(-1L)},{0x70F34082L,0x094C73A1L,0L,(-1L),(-1L)},{0x6690D2E2L,6L,(-1L),0L,0xC3FA5341L}},{{(-1L),0x094C73A1L,0L,(-9L),0L},{4L,0xDAE8D4C1L,0L,0x68047741L,0x6690D2E2L},{0x39E36F40L,1L,0x70F34082L,(-3L),(-1L)},{0xEC679D41L,0x2E0B307BL,(-1L),0xB14546EEL,0xEC679D41L},{0xCD337578L,(-9L),(-1L),(-3L),0x50ECD05AL}},{{0xBBA2A9BAL,0xA19B7F54L,0x68047741L,0x68047741L,0xA19B7F54L},{7L,0x094C73A1L,0x40BB9802L,0x759CC73FL,0x0C378F7CL},{(-1L),0x2E0B307BL,(-6L),0xC3FA5341L,0xA19B7F54L},{0L,(-1L),0L,0x24418FD7L,0xE3992C77L},{(-1L),0x6690D2E2L,0x68047741L,0L,0xDAE8D4C1L}},{{7L,(-1L),7L,(-3L),0L},{4L,(-1L),0xA47188FCL,0L,0xBBA2A9BAL},{0L,(-1L),0L,0xBB995997L,0x50ECD05AL},{0xA19B7F54L,0xB14546EEL,0xA47188FCL,0L,0x6690D2E2L},{0x40BB9802L,0x094C73A1L,7L,0x094C73A1L,0x40BB9802L}}};
                char l_151 = (-1L);
                int i, j, k;
                for (l_85 = 0; (l_85 <= 4); l_85 += 1)
                {
                    int l_111 = 7L;
                    unsigned char *l_115[9][1] = {{&g_107.f0},{&g_107.f0},{&g_107.f0},{&g_107.f0},{&g_107.f0},{&g_107.f0},{&g_107.f0},{&g_107.f0},{&g_107.f0}};
                    int i, j;
                    (*l_98) = l_110;
                    (*l_110) = (l_111 & l_100[1]);
                    (*l_82) = (safe_rshift_func_uint8_t_u_s(((*l_110) != g_15), (1L <= ((l_111 ^ (l_114 == &g_97[0])) | (g_107.f0 = 1UL)))));
                }
                for (l_101 = 0; (l_101 <= 4); l_101 += 1)
                {
                    int l_120 = 0x42B3FC87L;
                    int l_121 = (-5L);
                    int l_122 = (-1L);
                    int l_123 = 0xD68FCE54L;
                    int l_125 = 0x6CBE952DL;
                    int l_132 = 0xDDACD7A2L;
                    int l_133 = (-10L);
                    int l_134[6][1];
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_134[i][j] = 0xD55D3BE8L;
                    }
                    if (g_26[g_84])
                        break;
                    --l_138;
                }
                l_135 ^= (((*g_11) < ((safe_add_func_uint16_t_u_u((g_143 == (void*)0), ((safe_mod_func_int16_t_s_s((((safe_div_func_int16_t_s_s((-1L), (~(0x78L <= (*p_79))))) <= (*l_110)) >= (*l_110)), (safe_mul_func_int8_t_s_s((+(*g_11)), l_151)))) == (*p_79)))) <= l_100[1])) <= (*l_110));
                (*l_110) = ((*l_82) == g_14);
            }
            (*l_114) = l_82;
        }
        l_136[1][0][3] ^= (*l_82);
    }
    (*l_153) = l_85;
    return &g_97[7];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_16[i][j][k], "g_16[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_26[i], "g_26[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_41[i][j][k].f0, "g_41[i][j][k].f0", print_hash_value);
                transparent_crc(g_41[i][j][k].f1, "g_41[i][j][k].f1", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_156.f0, "g_156.f0", print_hash_value);
    transparent_crc(g_156.f2, "g_156.f2", print_hash_value);
    transparent_crc(g_156.f3, "g_156.f3", print_hash_value);
    transparent_crc(g_156.f4, "g_156.f4", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_220[i][j][k].f0, "g_220[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_601, "g_601", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_743, "g_743", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_751[i], "g_751[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_752[i][j][k], "g_752[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_756, "g_756", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_757[i][j][k], "g_757[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_759, "g_759", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
