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
   char f1;
   unsigned short f2;
};

struct S1 {
   unsigned f0 : 31;
   signed f1 : 29;
};

struct S2 {
   char f0;
   unsigned f1;
   unsigned short f2;
   unsigned f3;
   const unsigned short f4;
   signed f5 : 7;
   unsigned f6;
   unsigned f7;
   unsigned f8;
};

struct S3 {
   unsigned f0 : 2;
   unsigned f1 : 6;
   const unsigned f2 : 3;
   unsigned f3 : 9;
};

struct S4 {
   const signed f0 : 21;
   const unsigned : 0;
   signed f1 : 19;
   unsigned f2 : 15;
   signed f3 : 8;
   const signed f4 : 23;
   signed f5 : 31;
   const signed f6 : 18;
   signed f7 : 14;
};


static unsigned short g_13 = 3UL;
static const struct S1 g_14 = {11763,7607};
static unsigned char g_19[8][5][6] = {{{6UL,1UL,0xB9L,0x2BL,0x88L,8UL},{6UL,247UL,0x2BL,0x7FL,0UL,0x6DL},{0x1AL,6UL,6UL,0x64L,0xEDL,6UL},{0x2BL,6UL,0x7BL,0x1AL,0UL,0x64L},{8UL,247UL,0x7FL,0x7BL,0x88L,0x7BL}},{{0x7FL,1UL,0x7FL,0x6DL,6UL,0x64L},{0x5DL,255UL,0x7BL,249UL,254UL,6UL},{249UL,254UL,6UL,249UL,0x5DL,0x11L},{0x6FL,0x6DL,4UL,0x11L,0x1AL,0UL},{0x66L,0x5DL,1UL,0xACL,0x1AL,0UL}},{{0UL,0x6DL,246UL,0x43L,0x5DL,4UL},{4UL,254UL,255UL,255UL,254UL,4UL},{0x43L,6UL,246UL,0x66L,0xB9L,0UL},{255UL,0x7FL,1UL,4UL,0x7BL,0UL},{255UL,249UL,4UL,0x66L,0x2BL,0x11L}},{{0x43L,0xB9L,255UL,255UL,0x6DL,255UL},{4UL,0xB9L,0xACL,0x43L,0x2BL,255UL},{0UL,249UL,0x66L,0xACL,0x7BL,0xACL},{0x66L,0x7FL,0x66L,0x11L,0xB9L,255UL},{0x6FL,6UL,0xACL,255UL,254UL,255UL}},{{255UL,254UL,255UL,255UL,0x5DL,0x11L},{0x6FL,0x6DL,4UL,0x11L,0x1AL,0UL},{0x66L,0x5DL,1UL,0xACL,0x1AL,0UL},{0UL,0x6DL,246UL,255UL,8UL,1UL},{1UL,249UL,0x11L,0x11L,249UL,1UL}},{{255UL,254UL,4UL,0x43L,0x7BL,255UL},{0UL,0x1AL,0xACL,1UL,0x5DL,0x66L},{0UL,0x48L,1UL,0x43L,0xB9L,255UL},{255UL,0x7BL,0UL,0x11L,6UL,0UL},{1UL,0x7BL,0x6FL,255UL,0xB9L,0x11L}},{{0x66L,0x48L,0x43L,0x6FL,0x5DL,0x6FL},{0x43L,0x1AL,0x43L,255UL,0x7BL,0x11L},{0UL,254UL,0x6FL,246UL,249UL,0UL},{246UL,249UL,0UL,246UL,8UL,255UL},{0UL,6UL,1UL,255UL,0x64L,0x66L}},{{0x43L,8UL,0xACL,0x6FL,0x64L,255UL},{0x66L,6UL,4UL,255UL,8UL,1UL},{1UL,249UL,0x11L,0x11L,249UL,1UL},{255UL,254UL,4UL,0x43L,0x7BL,255UL},{0UL,0x1AL,0xACL,0x4FL,0x6FL,0xEDL}}};
static int g_24 = 0xB9D1C2D9L;
static struct S3 g_49 = {1,5,0,4};
static unsigned char g_53 = 7UL;
static short g_55 = 1L;
static short g_57[7] = {0xAFD9L,0xAFD9L,0xAFD9L,0xAFD9L,0xAFD9L,0xAFD9L,0xAFD9L};
static short g_66 = 0L;
static int g_76 = 1L;
static const int *g_75 = &g_76;
static int g_96 = 0xCF0A5B3AL;
static unsigned short g_106 = 0x2CDDL;
static char g_110[6][3][5] = {{{6L,0x43L,0L,0xE4L,0L},{0x9DL,0x55L,0x55L,0x9DL,9L},{0x8EL,0xE4L,0xC5L,(-1L),9L}},{{9L,0x55L,0L,1L,1L},{0xD1L,0x43L,0xD1L,(-1L),0L},{0xE2L,0x9DL,1L,0x9DL,0xE2L}},{{0xD1L,4L,6L,0xE4L,6L},{9L,9L,1L,0xE2L,0x2AL},{0x8EL,0x1DL,0xD1L,4L,6L}},{{0x9DL,0xE2L,0L,0L,0xE2L},{6L,0x1DL,0xC5L,(-2L),0L},{0x55L,9L,0x55L,0L,1L}},{{9L,4L,0L,4L,9L},{0x55L,0x9DL,9L,0xE2L,9L},{6L,0x43L,0L,0xE4L,0L}},{{0x9DL,0x55L,0x55L,0x9DL,9L},{0x8EL,0xE4L,0xC5L,(-1L),9L},{1L,0x9DL,0xE2L,0L,0L}}};
static char *g_127 = (void*)0;
static char **g_126 = &g_127;
static unsigned char g_134 = 251UL;
static int g_137 = 0xA123F684L;
static unsigned g_152[4][5] = {{0x1F469DC8L,4294967295UL,4294967295UL,0x1F469DC8L,4294967295UL},{0x1F469DC8L,4294967295UL,4294967295UL,0x1F469DC8L,4294967295UL},{0x1F469DC8L,4294967295UL,4294967295UL,0x1F469DC8L,4294967295UL},{0x1F469DC8L,4294967295UL,4294967295UL,0x1F469DC8L,4294967295UL}};
static struct S4 g_183 = {-363,-73,18,7,-2491,35474,164,-115};
static struct S4 g_185[9] = {{-996,-594,150,-4,2518,9449,-235,127},{-996,-594,150,-4,2518,9449,-235,127},{-996,-594,150,-4,2518,9449,-235,127},{-996,-594,150,-4,2518,9449,-235,127},{-996,-594,150,-4,2518,9449,-235,127},{-996,-594,150,-4,2518,9449,-235,127},{-996,-594,150,-4,2518,9449,-235,127},{-996,-594,150,-4,2518,9449,-235,127},{-996,-594,150,-4,2518,9449,-235,127}};
static struct S4 *g_184 = &g_185[5];
static int *g_202 = &g_96;
static struct S0 g_255 = {0x43L,0xB6L,0UL};
static struct S1 *g_268 = (void*)0;
static struct S0 *g_298 = &g_255;
static struct S2 g_305[6][3] = {{{0x2FL,3UL,0x2B2EL,1UL,0UL,-5,0xE61C9D4DL,0xE788E5EAL,0x7C7A1879L},{0x7FL,0xFB4EBCAFL,0x7451L,0xF5524AC2L,0xB941L,8,0x6BB39866L,1UL,4294967291UL},{0xC4L,4294967295UL,65535UL,4294967291UL,3UL,0,0x921E9CBCL,0x928A5A51L,1UL}},{{0x2FL,3UL,0x2B2EL,1UL,0UL,-5,0xE61C9D4DL,0xE788E5EAL,0x7C7A1879L},{-1L,0x622F22A3L,0xE8A6L,1UL,65526UL,0,0x15E444CFL,0x97C7B057L,4294967287UL},{0x2FL,3UL,0x2B2EL,1UL,0UL,-5,0xE61C9D4DL,0xE788E5EAL,0x7C7A1879L}},{{0x2FL,3UL,0x2B2EL,1UL,0UL,-5,0xE61C9D4DL,0xE788E5EAL,0x7C7A1879L},{-1L,4294967294UL,65534UL,0UL,7UL,2,0x235B5DE8L,0x017DE39BL,0xACBB113EL},{0x08L,1UL,65528UL,0x6BE07890L,65535UL,4,0x5FED3E9FL,0x8595F274L,0xB67A4492L}},{{0x2FL,3UL,0x2B2EL,1UL,0UL,-5,0xE61C9D4DL,0xE788E5EAL,0x7C7A1879L},{0x7FL,0xFB4EBCAFL,0x7451L,0xF5524AC2L,0xB941L,8,0x6BB39866L,1UL,4294967291UL},{0xC4L,4294967295UL,65535UL,4294967291UL,3UL,0,0x921E9CBCL,0x928A5A51L,1UL}},{{0x2FL,3UL,0x2B2EL,1UL,0UL,-5,0xE61C9D4DL,0xE788E5EAL,0x7C7A1879L},{-1L,0x622F22A3L,0xE8A6L,1UL,65526UL,0,0x15E444CFL,0x97C7B057L,4294967287UL},{0x2FL,3UL,0x2B2EL,1UL,0UL,-5,0xE61C9D4DL,0xE788E5EAL,0x7C7A1879L}},{{0x2FL,3UL,0x2B2EL,1UL,0UL,-5,0xE61C9D4DL,0xE788E5EAL,0x7C7A1879L},{-1L,4294967294UL,65534UL,0UL,7UL,2,0x235B5DE8L,0x017DE39BL,0xACBB113EL},{0x08L,1UL,65528UL,0x6BE07890L,65535UL,4,0x5FED3E9FL,0x8595F274L,0xB67A4492L}}};
static struct S2 g_307 = {-3L,0UL,0x6554L,0x835CBDD6L,0xC78EL,-6,4294967289UL,7UL,0x06EB4386L};
static struct S2 *g_306 = &g_307;
static struct S3 g_317[1][4] = {{{1,0,0,9},{1,0,0,9},{1,0,0,9},{1,0,0,9}}};
static struct S3 *g_316 = &g_317[0][0];
static unsigned *g_345 = &g_307.f6;
static unsigned **g_344 = &g_345;
static short *g_357 = &g_57[4];
static short **g_356 = &g_357;
static char *g_461 = &g_255.f0;
static char ** const g_460 = &g_461;
static char ** const *g_459 = &g_460;
static short *g_504 = &g_57[0];
static short ** const g_503 = &g_504;
static short ** const *g_502[7] = {(void*)0,(void*)0,&g_503,(void*)0,(void*)0,&g_503,(void*)0};
static struct S1 g_547 = {14521,21351};
static struct S4 g_717 = {-591,-662,89,-6,1494,22118,-179,112};
static const short g_769 = 0L;
static struct S4 g_778 = {-1078,588,129,0,9,-29108,-93,-81};
static struct S4 g_793 = {-285,22,55,1,2263,1683,452,122};
static struct S4 g_795[2][4][7] = {{{{159,-533,160,1,2224,43685,131,31},{-322,-217,32,9,-1407,13567,390,-59},{159,-533,160,1,2224,43685,131,31},{-322,-217,32,9,-1407,13567,390,-59},{159,-533,160,1,2224,43685,131,31},{-322,-217,32,9,-1407,13567,390,-59},{159,-533,160,1,2224,43685,131,31}},{{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125}},{{159,-533,160,1,2224,43685,131,31},{-322,-217,32,9,-1407,13567,390,-59},{159,-533,160,1,2224,43685,131,31},{-322,-217,32,9,-1407,13567,390,-59},{159,-533,160,1,2224,43685,131,31},{-322,-217,32,9,-1407,13567,390,-59},{159,-533,160,1,2224,43685,131,31}},{{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125}}},{{{159,-533,160,1,2224,43685,131,31},{-322,-217,32,9,-1407,13567,390,-59},{159,-533,160,1,2224,43685,131,31},{-322,-217,32,9,-1407,13567,390,-59},{159,-533,160,1,2224,43685,131,31},{-322,-217,32,9,-1407,13567,390,-59},{159,-533,160,1,2224,43685,131,31}},{{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125}},{{159,-533,160,1,2224,43685,131,31},{-322,-217,32,9,-1407,13567,390,-59},{159,-533,160,1,2224,43685,131,31},{-322,-217,32,9,-1407,13567,390,-59},{159,-533,160,1,2224,43685,131,31},{-322,-217,32,9,-1407,13567,390,-59},{159,-533,160,1,2224,43685,131,31}},{{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125},{-67,-616,162,4,-2282,-30108,15,-125}}}};
static short *** const g_827 = &g_356;
static int **g_832[2][9] = {{(void*)0,&g_202,&g_202,(void*)0,(void*)0,&g_202,&g_202,(void*)0,&g_202},{&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,(void*)0,&g_202,&g_202}};
static int ***g_831 = &g_832[0][7];
static int *g_866 = &g_76;
static unsigned g_931 = 4294967295UL;
static int *g_968 = &g_76;
static struct S3 **g_971 = &g_316;
static unsigned char g_984 = 0x35L;
static unsigned char *g_983 = &g_984;
static struct S2 g_1096[4][4] = {{{0x6AL,0xC854A144L,5UL,4294967289UL,1UL,3,0x82E56626L,1UL,0x8243F50DL},{0x6AL,0xC854A144L,5UL,4294967289UL,1UL,3,0x82E56626L,1UL,0x8243F50DL},{0xBFL,0xA430E99FL,65535UL,0xC7BF755EL,0xA039L,-9,1UL,4294967295UL,4294967295UL},{0x6AL,0xC854A144L,5UL,4294967289UL,1UL,3,0x82E56626L,1UL,0x8243F50DL}},{{0x6AL,0xC854A144L,5UL,4294967289UL,1UL,3,0x82E56626L,1UL,0x8243F50DL},{0x61L,9UL,0xAD24L,4294967288UL,1UL,4,0x27F392DCL,4294967295UL,0xB474E623L},{0x61L,9UL,0xAD24L,4294967288UL,1UL,4,0x27F392DCL,4294967295UL,0xB474E623L},{0x6AL,0xC854A144L,5UL,4294967289UL,1UL,3,0x82E56626L,1UL,0x8243F50DL}},{{0x61L,9UL,0xAD24L,4294967288UL,1UL,4,0x27F392DCL,4294967295UL,0xB474E623L},{0x6AL,0xC854A144L,5UL,4294967289UL,1UL,3,0x82E56626L,1UL,0x8243F50DL},{0x61L,9UL,0xAD24L,4294967288UL,1UL,4,0x27F392DCL,4294967295UL,0xB474E623L},{0x61L,9UL,0xAD24L,4294967288UL,1UL,4,0x27F392DCL,4294967295UL,0xB474E623L}},{{0x6AL,0xC854A144L,5UL,4294967289UL,1UL,3,0x82E56626L,1UL,0x8243F50DL},{0x6AL,0xC854A144L,5UL,4294967289UL,1UL,3,0x82E56626L,1UL,0x8243F50DL},{0xBFL,0xA430E99FL,65535UL,0xC7BF755EL,0xA039L,-9,1UL,4294967295UL,4294967295UL},{0x6AL,0xC854A144L,5UL,4294967289UL,1UL,3,0x82E56626L,1UL,0x8243F50DL}}};
static unsigned *g_1231 = &g_305[1][2].f1;
static unsigned char g_1235 = 0x86L;
static const struct S1 g_1290 = {8593,-10960};
static short g_1309 = (-7L);
static struct S2 g_1335 = {0x2AL,1UL,65535UL,0xDB013787L,0x53E1L,-7,4294967290UL,4294967295UL,0x7E2C3940L};
static unsigned g_1375 = 0x457CE790L;
static struct S2 g_1376 = {0x22L,4294967295UL,0x6944L,3UL,1UL,-6,0x00F08159L,4294967286UL,1UL};
static short *g_1445 = &g_55;
static short ***g_1454 = &g_356;
static short ****g_1453 = &g_1454;
static short *****g_1452 = &g_1453;
static struct S2 **g_1474 = &g_306;
static struct S2 *** const g_1473 = &g_1474;
static struct S0 ***g_1494 = (void*)0;
static struct S0 *g_1554 = &g_255;
static short g_1577[3][6][5] = {{{9L,(-1L),7L,7L,(-1L)},{0L,6L,6L,0xE992L,(-9L)},{1L,1L,9L,9L,1L},{0x65D7L,0x5741L,2L,0x1FFFL,0L},{1L,7L,8L,7L,1L},{0L,0L,0L,2L,6L}},{{9L,0x8B38L,0x8D79L,0xC0D4L,0xF045L},{0x32D8L,0x1D86L,0xF21AL,0x5FF8L,0x1122L},{9L,1L,1L,9L,0x8B38L},{0x1122L,(-9L),0L,0xE992L,0x5741L},{(-1L),0x8B38L,7L,8L,1L},{0L,3L,1L,0xE992L,0xE992L}},{{9L,(-1L),9L,9L,0xC0D4L},{3L,0L,0L,0x5FF8L,0xF21AL},{7L,(-1L),0x8B38L,1L,0x8D79L},{0x5FF8L,0xE992L,0L,0xF21AL,0L},{7L,7L,9L,0xEC0FL,8L},{0x5741L,6L,1L,6L,2L}}};
static unsigned char **g_1595 = &g_983;
static struct S1 *g_1619[9] = {&g_547,&g_547,&g_547,&g_547,&g_547,&g_547,&g_547,&g_547,&g_547};
static unsigned char g_1636 = 0x8AL;



static struct S2 func_1(void);
static int func_2(struct S2 p_3, struct S2 p_4, struct S4 p_5, struct S3 p_6, int p_7);
static struct S2 func_8(unsigned char p_9, const struct S1 p_10, int p_11, char p_12);
static char func_29(unsigned char * p_30, const unsigned char p_31, struct S2 p_32, unsigned char * p_33);
static unsigned char * func_34(unsigned char * p_35, struct S2 p_36);
static struct S1 func_38(struct S1 p_39, unsigned char * p_40);
static unsigned char * func_41(unsigned char p_42);
static int func_43(unsigned short p_44, unsigned p_45, struct S0 p_46, struct S3 p_47);
static int func_67(unsigned char p_68, short * p_69);
static short * func_70(short * p_71, int * p_72, const int * p_73, struct S4 p_74);
static struct S2 func_1(void)
{
    unsigned l_17[6][4][10] = {{{4294967295UL,9UL,0x96AAD9F1L,4294967295UL,0xD540778DL,9UL,0x489718B2L,0xD540778DL,0x547EF217L,0x32F1EFAEL},{0x07874D2DL,4294967295UL,0x96AAD9F1L,0xE481DB3AL,0x91EBB67AL,0x07874D2DL,9UL,0x32F1EFAEL,0x547EF217L,0xD540778DL},{4294967295UL,0x489718B2L,4294967292UL,4294967295UL,0x91EBB67AL,0x98C7BE44L,0x489718B2L,0x91EBB67AL,4294967295UL,0x32F1EFAEL},{4294967295UL,0x07874D2DL,0x96AAD9F1L,0UL,0x593C394AL,0xCE724D25L,0xA27438E2L,0x98C7BE44L,4294967293UL,0x07874D2DL}},{{0xCE724D25L,0xA27438E2L,0x98C7BE44L,4294967293UL,0x07874D2DL,4294967288UL,4294967288UL,0x07874D2DL,4294967293UL,0x98C7BE44L},{5UL,5UL,0x489718B2L,8UL,0x07874D2DL,1UL,0xA27438E2L,9UL,1UL,0x07874D2DL},{5UL,4294967288UL,0x98C7BE44L,0UL,0x593C394AL,4294967288UL,0xA27438E2L,0x593C394AL,4294967293UL,9UL},{0xCE724D25L,5UL,0x98C7BE44L,0x6A8ACDD1L,0x07874D2DL,0xCE724D25L,4294967288UL,9UL,4294967293UL,0x593C394AL}},{{5UL,0xA27438E2L,0x489718B2L,0UL,0x07874D2DL,4294967295UL,0xA27438E2L,0x07874D2DL,1UL,9UL},{5UL,0xCE724D25L,0x98C7BE44L,8UL,0x593C394AL,0xCE724D25L,0xA27438E2L,0x98C7BE44L,4294967293UL,0x07874D2DL},{0xCE724D25L,0xA27438E2L,0x98C7BE44L,4294967293UL,0x07874D2DL,4294967288UL,4294967288UL,0x07874D2DL,4294967293UL,0x98C7BE44L},{5UL,5UL,0x489718B2L,8UL,0x07874D2DL,1UL,0xA27438E2L,9UL,1UL,0x07874D2DL}},{{5UL,4294967288UL,0x98C7BE44L,0UL,0x593C394AL,4294967288UL,0xA27438E2L,0x593C394AL,4294967293UL,9UL},{0UL,0xD540778DL,0x6A8ACDD1L,4294967288UL,0UL,0UL,4294967292UL,8UL,0xCE724D25L,4294967293UL},{0xD540778DL,0x96AAD9F1L,4294967295UL,5UL,0UL,0x32F1EFAEL,0x96AAD9F1L,0UL,1UL,8UL},{0xD540778DL,0UL,0x6A8ACDD1L,0xA27438E2L,4294967293UL,0UL,0x96AAD9F1L,0x6A8ACDD1L,0xCE724D25L,0UL}},{{0UL,0x96AAD9F1L,0x6A8ACDD1L,0xCE724D25L,0UL,4294967292UL,4294967292UL,0UL,0xCE724D25L,0x6A8ACDD1L},{0xD540778DL,0xD540778DL,4294967295UL,0xA27438E2L,0UL,0x91EBB67AL,0x96AAD9F1L,8UL,1UL,0UL},{0xD540778DL,4294967292UL,0x6A8ACDD1L,5UL,4294967293UL,4294967292UL,0x96AAD9F1L,4294967293UL,0xCE724D25L,8UL},{0UL,0xD540778DL,0x6A8ACDD1L,4294967288UL,0UL,0UL,4294967292UL,8UL,0xCE724D25L,4294967293UL}},{{0xD540778DL,0x96AAD9F1L,4294967295UL,5UL,0UL,0x32F1EFAEL,0x96AAD9F1L,0UL,1UL,8UL},{0xD540778DL,0UL,0x6A8ACDD1L,0xA27438E2L,4294967293UL,0UL,0x96AAD9F1L,0x6A8ACDD1L,0xCE724D25L,0UL},{0UL,0x96AAD9F1L,0x6A8ACDD1L,0xCE724D25L,0UL,0x489718B2L,0x489718B2L,0UL,4294967295UL,0x32F1EFAEL},{0x593C394AL,0x593C394AL,0x96AAD9F1L,0xFFBEBD5DL,0UL,0x07874D2DL,0x98C7BE44L,4294967292UL,0x547EF217L,0UL}}};
    unsigned char *l_18 = &g_19[3][1][4];
    struct S2 l_37 = {0x17L,0UL,0x23D3L,0xBBA7F7E7L,0x8ACFL,7,0xCE29BE90L,4294967288UL,1UL};
    unsigned char *l_981 = &g_134;
    unsigned char **l_980 = &l_981;
    struct S2 l_982 = {8L,4294967290UL,6UL,0UL,1UL,-10,4294967295UL,0x530E943DL,4294967295UL};
    unsigned short *l_1213[2][8] = {{&g_106,&l_982.f2,&g_255.f2,&g_255.f2,&l_982.f2,&g_106,&g_1096[0][3].f2,&g_106},{&l_982.f2,&g_106,&g_1096[0][3].f2,&g_106,&l_982.f2,&g_255.f2,&g_255.f2,&l_982.f2}};
    struct S4 l_1247[7] = {{61,42,80,-3,-894,-6667,454,83},{-79,269,106,1,849,-42216,263,-127},{61,42,80,-3,-894,-6667,454,83},{61,42,80,-3,-894,-6667,454,83},{-79,269,106,1,849,-42216,263,-127},{61,42,80,-3,-894,-6667,454,83},{61,42,80,-3,-894,-6667,454,83}};
    struct S1 l_1380 = {28342,19867};
    const int *l_1415[6] = {&g_76,&g_76,&g_76,&g_76,&g_76,&g_76};
    const int *l_1433 = &g_76;
    short l_1444[6] = {0x12C3L,0x12C3L,0x0A27L,0x12C3L,0x12C3L,0x0A27L};
    int l_1449 = 0x7A1CD0E0L;
    short l_1461 = (-7L);
    struct S2 ***l_1475 = &g_1474;
    struct S2 l_1488 = {0xC1L,0x974AABECL,8UL,0x22BB603EL,65528UL,7,0UL,1UL,0x9E7BDD36L};
    struct S2 l_1513[9][7] = {{{1L,0x5A75073DL,0x9277L,6UL,1UL,5,4294967295UL,0x91F2D118L,0x25453B56L},{0x7FL,0x1C84BFC1L,0x10BAL,0xBDFD9E91L,0x4EE4L,-1,0UL,0x6BE5DEFEL,1UL},{-1L,0xAB733867L,0x7048L,0x78F73D9EL,65535UL,7,0x0DF5422BL,4294967286UL,4294967291UL},{0L,3UL,5UL,4294967294UL,0x515EL,-4,0xE3F06DCEL,4294967295UL,4294967295UL},{-1L,0xAB733867L,0x7048L,0x78F73D9EL,65535UL,7,0x0DF5422BL,4294967286UL,4294967291UL},{0x7FL,0x1C84BFC1L,0x10BAL,0xBDFD9E91L,0x4EE4L,-1,0UL,0x6BE5DEFEL,1UL},{1L,0x5A75073DL,0x9277L,6UL,1UL,5,4294967295UL,0x91F2D118L,0x25453B56L}},{{1L,0x5A75073DL,0x9277L,6UL,1UL,5,4294967295UL,0x91F2D118L,0x25453B56L},{0x69L,0x2273058EL,1UL,0x6A38166BL,0xF5E9L,10,4294967295UL,4294967292UL,0x6A943A29L},{0x85L,4294967295UL,7UL,0UL,65535UL,-5,0xD6AA2C54L,0x50C2A62FL,0UL},{0xF2L,0x70234FDEL,65530UL,0xD5B21106L,0xB657L,2,3UL,3UL,0xCB599392L},{0x7FL,0x1C84BFC1L,0x10BAL,0xBDFD9E91L,0x4EE4L,-1,0UL,0x6BE5DEFEL,1UL},{0x78L,4294967294UL,0xAB7CL,0UL,0UL,-6,0x6B8DEBFEL,4UL,4294967295UL},{-1L,0xAB733867L,0x7048L,0x78F73D9EL,65535UL,7,0x0DF5422BL,4294967286UL,4294967291UL}},{{0x05L,0x57533FAFL,0x7685L,0xF7053F34L,0xBF7DL,8,4294967293UL,6UL,0x65592212L},{0xCBL,0x0D2C79AAL,0x8927L,1UL,0UL,4,0xA48E749FL,0xDD6544BAL,4294967295UL},{0x06L,1UL,1UL,0x99BA9E41L,0UL,-1,0UL,0xFBEADEA3L,4294967290UL},{0x33L,0xECF292D7L,0x44CFL,4294967295UL,0x7335L,6,0x8231ACCCL,0x021D20AAL,0xB23E68D7L},{-1L,0x1941FE47L,65534UL,4UL,1UL,-8,0UL,0xDB9C1207L,0UL},{0x20L,0UL,65527UL,4294967295UL,0x6BBAL,5,0x110FAA0FL,4294967295UL,0x05477B48L},{0xCBL,0x0D2C79AAL,0x8927L,1UL,0UL,4,0xA48E749FL,0xDD6544BAL,4294967295UL}},{{-1L,0x1941FE47L,65534UL,4UL,1UL,-8,0UL,0xDB9C1207L,0UL},{0L,0x947AA932L,0xF821L,3UL,0x71E5L,-6,0xD13F0AC5L,4294967295UL,0x588527D2L},{0x85L,4294967295UL,7UL,0UL,65535UL,-5,0xD6AA2C54L,0x50C2A62FL,0UL},{8L,1UL,0xD27AL,0x933AA077L,0x121EL,5,5UL,0xF69F019BL,4294967295UL},{1L,0UL,3UL,4294967290UL,1UL,-4,4294967295UL,0xEADD0335L,0x38C3787CL},{-1L,0x1941FE47L,65534UL,4UL,1UL,-8,0UL,0xDB9C1207L,0UL},{1L,0UL,3UL,4294967290UL,1UL,-4,4294967295UL,0xEADD0335L,0x38C3787CL}},{{0x06L,1UL,1UL,0x99BA9E41L,0UL,-1,0UL,0xFBEADEA3L,4294967290UL},{-1L,0xAB733867L,0x7048L,0x78F73D9EL,65535UL,7,0x0DF5422BL,4294967286UL,4294967291UL},{-1L,0xAB733867L,0x7048L,0x78F73D9EL,65535UL,7,0x0DF5422BL,4294967286UL,4294967291UL},{0x06L,1UL,1UL,0x99BA9E41L,0UL,-1,0UL,0xFBEADEA3L,4294967290UL},{1L,0UL,3UL,4294967290UL,1UL,-4,4294967295UL,0xEADD0335L,0x38C3787CL},{-1L,0x886B3E95L,1UL,4UL,0x4031L,9,5UL,3UL,1UL},{0xF2L,0x70234FDEL,65530UL,0xD5B21106L,0xB657L,2,3UL,3UL,0xCB599392L}},{{0xF7L,0x779D04DFL,0xE8C0L,0x980DE8D0L,65529UL,-8,1UL,0x312B6202L,2UL},{0x7FL,0x1C84BFC1L,0x10BAL,0xBDFD9E91L,0x4EE4L,-1,0UL,0x6BE5DEFEL,1UL},{0x69L,0x2273058EL,1UL,0x6A38166BL,0xF5E9L,10,4294967295UL,4294967292UL,0x6A943A29L},{0L,0x6AA25BC9L,0x539DL,0xE11BE490L,0x8152L,4,5UL,3UL,0xEEE8B58AL},{-1L,0x1941FE47L,65534UL,4UL,1UL,-8,0UL,0xDB9C1207L,0UL},{-10L,4294967292UL,9UL,3UL,1UL,8,4294967295UL,0xFCD2DD22L,0UL},{1L,0x5A75073DL,0x9277L,6UL,1UL,5,4294967295UL,0x91F2D118L,0x25453B56L}},{{-10L,4294967292UL,9UL,3UL,1UL,8,4294967295UL,0xFCD2DD22L,0UL},{-1L,0x1941FE47L,65534UL,4UL,1UL,-8,0UL,0xDB9C1207L,0UL},{0L,0x6AA25BC9L,0x539DL,0xE11BE490L,0x8152L,4,5UL,3UL,0xEEE8B58AL},{0L,0x6AA25BC9L,0x539DL,0xE11BE490L,0x8152L,4,5UL,3UL,0xEEE8B58AL},{-1L,0x886B3E95L,1UL,4UL,0x4031L,9,5UL,3UL,1UL},{0x05L,0x57533FAFL,0x7685L,0xF7053F34L,0xBF7DL,8,4294967293UL,6UL,0x65592212L},{0L,0xDBB14428L,0xD022L,4294967295UL,65535UL,4,9UL,0x7098A62BL,1UL}},{{0L,0x947AA932L,0xF821L,3UL,0x71E5L,-6,0xD13F0AC5L,4294967295UL,0x588527D2L},{0x33L,0xECF292D7L,0x44CFL,4294967295UL,0x7335L,6,0x8231ACCCL,0x021D20AAL,0xB23E68D7L},{-1L,0xF1890B04L,0x60C7L,0x8BE16661L,0xDD72L,-6,0x045F74ABL,1UL,0xF467428DL},{8L,1UL,0xD27AL,0x933AA077L,0x121EL,5,5UL,0xF69F019BL,4294967295UL},{8L,1UL,0xD27AL,0x933AA077L,0x121EL,5,5UL,0xF69F019BL,4294967295UL},{-1L,0xF1890B04L,0x60C7L,0x8BE16661L,0xDD72L,-6,0x045F74ABL,1UL,0xF467428DL},{0x33L,0xECF292D7L,0x44CFL,4294967295UL,0x7335L,6,0x8231ACCCL,0x021D20AAL,0xB23E68D7L}},{{0x85L,4294967295UL,7UL,0UL,65535UL,-5,0xD6AA2C54L,0x50C2A62FL,0UL},{0x33L,0xECF292D7L,0x44CFL,4294967295UL,0x7335L,6,0x8231ACCCL,0x021D20AAL,0xB23E68D7L},{-10L,4294967292UL,9UL,3UL,1UL,8,4294967295UL,0xFCD2DD22L,0UL},{0xF7L,0x779D04DFL,0xE8C0L,0x980DE8D0L,65529UL,-8,1UL,0x312B6202L,2UL},{-1L,0x1941FE47L,65534UL,4UL,1UL,-8,0UL,0xDB9C1207L,0UL},{0x85L,4294967295UL,7UL,0UL,65535UL,-5,0xD6AA2C54L,0x50C2A62FL,0UL},{-1L,0xAB733867L,0x7048L,0x78F73D9EL,65535UL,7,0x0DF5422BL,4294967286UL,4294967291UL}}};
    unsigned char l_1537 = 0xD0L;
    const int l_1548 = 0L;
    struct S3 l_1562 = {1,7,1,9};
    char l_1563 = (-8L);
    short l_1573 = 0x4107L;
    int l_1580 = 0x6F809457L;
    struct S0 l_1589 = {-4L,-8L,0x58E3L};
    int *l_1660 = &g_76;
    int *l_1708 = &g_76;
    short ***l_1719 = (void*)0;
    int i, j, k;
    if (func_2(func_8(g_13, g_14, (safe_mul_func_uint8_t_u_u(((*l_18) = (1UL == l_17[0][2][8])), ((safe_sub_func_uint32_t_u_u(g_14.f0, (((safe_mul_func_uint8_t_u_u(l_17[0][2][8], g_14.f1)) ^ (g_24 = l_17[0][2][8])) >= (l_37.f5 = (safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(func_29(((*l_980) = func_34(l_18, l_37)), g_778.f6, l_982, g_983), l_37.f8)), l_17[0][2][3])))))) == 0x89L))), l_17[0][2][8]), l_982, l_1247[1], g_317[0][0], l_1247[1].f1))
    {
        struct S2 l_1342 = {0L,0x4C12A4DAL,0x529FL,1UL,0x6036L,7,0xB1D29D18L,7UL,0x3D8F0454L};
        unsigned ** const *l_1349[7] = {&g_344,&g_344,&g_344,&g_344,&g_344,&g_344,&g_344};
        struct S0 l_1350 = {0L,-1L,0x6EBFL};
        struct S3 l_1351 = {0,4,1,8};
        unsigned short l_1352 = 65529UL;
        unsigned l_1354 = 0UL;
        short l_1356 = 1L;
        int l_1361 = (-9L);
        unsigned char l_1364 = 0x6DL;
        short l_1373 = 1L;
        int l_1378 = 0x57BEA573L;
        char l_1390[7][10] = {{0L,(-1L),0x3DL,1L,0xC3L,(-9L),0x91L,0x91L,(-9L),0xC3L},{0L,0L,0L,0L,(-7L),(-9L),0x22L,0x3DL,0xC3L,0x3DL},{0L,0xFCL,(-1L),0x3DL,(-1L),0xFCL,0L,0x22L,0xC3L,(-1L)},{0x22L,(-9L),(-7L),0L,0L,0L,0L,(-7L),(-9L),0x22L},{0x91L,(-9L),0xC3L,1L,0x3DL,(-1L),0L,(-1L),0x3DL,1L},{1L,0xFCL,1L,(-9L),0x3DL,0x87L,0x22L,(-1L),(-1L),0x22L},{0x3DL,0L,0x87L,0x87L,0L,0x3DL,0x91L,(-1L),0L,(-1L)}};
        unsigned l_1400 = 1UL;
        short l_1401 = (-6L);
        struct S0 **l_1402 = &g_298;
        char l_1404 = 0L;
        unsigned char l_1405 = 248UL;
        int l_1407 = 0x98A3A475L;
        struct S2 l_1408 = {1L,4UL,9UL,1UL,0xE259L,5,0x1B8DD6F9L,4294967293UL,0UL};
        struct S4 l_1409 = {802,-611,64,6,-1488,-22106,311,-2};
        short l_1413[8][2] = {{5L,5L},{5L,1L},{5L,5L},{1L,5L},{5L,1L},{5L,5L},{1L,5L},{5L,1L}};
        unsigned l_1425 = 4294967295UL;
        int l_1426 = (-3L);
        const struct S0 l_1427[8] = {{1L,0x87L,1UL},{1L,0x87L,1UL},{1L,0x87L,1UL},{1L,0x87L,1UL},{1L,0x87L,1UL},{1L,0x87L,1UL},{1L,0x87L,1UL},{1L,0x87L,1UL}};
        const unsigned short *l_1435 = &g_106;
        unsigned short *l_1437 = &l_982.f2;
        int l_1447 = 0L;
        unsigned char l_1451[10] = {0xE0L,0xB0L,0xE0L,0xE0L,0xB0L,0xE0L,0xE0L,0xB0L,0xE0L,0xE0L};
        unsigned l_1458 = 4294967294UL;
        unsigned l_1459 = 0x10E52D7BL;
        unsigned char l_1483 = 0x05L;
        struct S0 l_1484 = {0xA7L,0L,65535UL};
        short l_1490 = (-1L);
        int *l_1492 = &l_1426;
        char l_1499 = 0x77L;
        struct S1 l_1502 = {42438,6849};
        struct S2 l_1504 = {0xD0L,0xBF7E602CL,65531UL,0x1203BC91L,0x97A3L,-8,0x34651EF9L,4294967295UL,4294967295UL};
        int l_1505 = 0x7CE55A6EL;
        unsigned l_1506 = 0UL;
        struct S2 *l_1511[9][8][3] = {{{(void*)0,&g_305[0][2],&g_307},{(void*)0,&g_1376,&g_1335},{&g_305[1][2],&g_305[1][2],(void*)0},{(void*)0,(void*)0,&g_1096[0][3]},{&g_1096[0][3],(void*)0,&g_1096[0][3]},{&g_305[1][2],&l_1504,(void*)0},{&g_1376,(void*)0,&g_1335},{(void*)0,&g_305[1][2],&g_307}},{{(void*)0,&g_307,&g_305[1][2]},{(void*)0,&g_1335,(void*)0},{&g_1376,(void*)0,&l_1504},{&g_305[1][2],&g_1096[0][3],(void*)0},{&g_1096[0][3],&g_1096[0][3],(void*)0},{(void*)0,(void*)0,&g_305[1][2]},{&g_305[1][2],&g_1335,&g_1376},{(void*)0,&g_307,&g_305[0][2]}},{{(void*)0,&g_305[1][2],&g_1376},{&l_1504,(void*)0,&g_305[1][2]},{(void*)0,&l_1504,(void*)0},{&g_1096[0][1],(void*)0,(void*)0},{&g_1096[0][1],(void*)0,(void*)0},{&g_305[1][2],&g_1096[3][0],&g_1096[0][1]},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_1096[0][3],&g_1376}},{{&g_305[1][2],(void*)0,&g_307},{(void*)0,&g_1096[3][0],(void*)0},{(void*)0,(void*)0,&g_1335},{&g_1335,&g_305[1][2],&g_1335},{(void*)0,(void*)0,(void*)0},{&g_305[0][2],&g_1096[0][1],&g_307},{&g_305[1][2],(void*)0,&g_1376},{&g_1096[0][1],&g_1376,(void*)0}},{{&g_305[1][2],&g_307,&g_1096[0][1]},{&g_305[0][2],(void*)0,(void*)0},{(void*)0,&g_1335,&g_305[1][2]},{&g_1335,&g_1335,(void*)0},{(void*)0,(void*)0,&g_1096[3][0]},{(void*)0,&g_307,(void*)0},{&g_305[1][2],&g_1376,&g_1096[0][3]},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_1096[0][1],&g_1096[3][0]},{&g_305[1][2],(void*)0,(void*)0},{&l_1504,&g_305[1][2],&g_305[1][2]},{&l_1504,(void*)0,(void*)0},{&g_305[1][2],&g_1096[3][0],&g_1096[0][1]},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_1096[0][3],&g_1376},{&g_305[1][2],(void*)0,&g_307}},{{(void*)0,&g_1096[3][0],(void*)0},{(void*)0,(void*)0,&g_1335},{&g_1335,&g_305[1][2],&g_1335},{(void*)0,(void*)0,(void*)0},{&g_305[0][2],&g_305[1][2],&g_305[1][2]},{(void*)0,&g_1376,(void*)0},{&g_305[1][2],(void*)0,&g_1376},{(void*)0,&g_305[1][2],&g_305[1][2]}},{{(void*)0,&g_305[1][2],(void*)0},{(void*)0,&g_305[1][2],(void*)0},{&g_305[1][2],&g_305[1][2],&g_305[0][2]},{&g_1096[0][3],&g_305[1][2],&g_307},{&g_1376,&g_305[1][2],(void*)0},{(void*)0,(void*)0,(void*)0},{&g_305[1][2],&g_1376,(void*)0},{(void*)0,&g_305[1][2],&g_307}},{{&g_1335,(void*)0,&g_305[0][2]},{&g_1096[3][0],(void*)0,(void*)0},{&g_1096[3][0],&g_305[0][2],(void*)0},{&g_1335,&g_307,&g_305[1][2]},{(void*)0,(void*)0,&g_1376},{&g_305[1][2],(void*)0,(void*)0},{(void*)0,(void*)0,&g_305[1][2]},{&g_1376,&g_307,&g_305[1][2]}}};
        int l_1535 = (-1L);
        char l_1536 = 1L;
        char l_1538 = 1L;
        unsigned short l_1539 = 1UL;
        int l_1541 = 0L;
        unsigned char l_1551[10][9] = {{0xA6L,0UL,255UL,0x2FL,255UL,0UL,0xA6L,0x6AL,0xD7L},{0UL,0xC7L,0xC7L,0UL,255UL,0UL,248UL,0xC7L,255UL},{0UL,0x6AL,0x90L,1UL,0UL,1UL,0x90L,0x6AL,0UL},{8UL,0UL,0xB7L,255UL,8UL,0UL,0UL,248UL,255UL},{255UL,0x6AL,0xA6L,0UL,255UL,0x2FL,255UL,0UL,0xA6L},{0UL,0UL,0xB7L,0UL,248UL,0UL,0xC7L,0xB7L,8UL},{0UL,0x6AL,0UL,0x2FL,1UL,0x54L,0x90L,0x54L,1UL},{0xC7L,0xB7L,0xB7L,0xC7L,255UL,248UL,0xB7L,248UL,0xC7L},{0UL,0x2FL,0xA6L,0x2FL,0UL,1UL,0xD7L,0UL,0xD7L},{248UL,255UL,0UL,0UL,255UL,248UL,0UL,0UL,8UL}};
        short *l_1556 = (void*)0;
        int i, j, k;
        for (l_982.f3 = 26; (l_982.f3 >= 29); l_982.f3 = safe_add_func_int32_t_s_s(l_982.f3, 1))
        {
            return l_1342;
        }
        if ((safe_lshift_func_uint8_t_u_u((((*g_1231) = ((*g_983) < (252UL != (l_1352 | 0x89L)))) > 0xF33CD3F0L), (*g_983))))
        {
        }
        else
        {
            const int **l_1555[10];
            struct S0 l_1561 = {-1L,1L,0xF362L};
            int l_1572 = 0xB9274F19L;
            int i;
            for (i = 0; i < 10; i++)
                l_1555[i] = (void*)0;
            g_75 = &l_1548;

            ;
            if (((g_317[0][0].f2 <= (safe_mul_func_int16_t_s_s(((*l_1492) ^ (safe_sub_func_int32_t_s_s((*g_866), (*l_1492)))), 0x234BL))) != l_1563))
            {
                short l_1564[2][7][8] = {{{0xBBB8L,0xBBB8L,0xC2D8L,0x55FCL,(-1L),3L,2L,0xBBB8L},{0x2AD2L,0x4FFBL,0xF0E6L,(-6L),2L,0xF0E6L,0x8D9FL,0xBBB8L},{0x4FFBL,1L,0x2AD2L,0x55FCL,0x2AD2L,1L,0x4FFBL,0x8D9FL},{(-1L),0x55FCL,3L,0x9E4AL,0x55FCL,0x6057L,2L,(-1L)},{0x1462L,(-1L),(-6L),1L,0x55FCL,0xF0E6L,0xF0E6L,0x55FCL},{(-1L),0x8D9FL,3L,0x1462L,0x6057L,0xC2D8L,1L,3L},{0xF0E6L,1L,0x9E4AL,0x2AD2L,9L,(-1L),0x2AD2L,0xF0E6L}},{{0x6057L,1L,0L,0xC2D8L,0x8D9FL,0xC2D8L,0L,1L},{1L,3L,0x4C6EL,9L,0L,0x4C6EL,0xF0E6L,0x6057L},{0xF0E6L,0x1462L,(-1L),(-6L),1L,0x55FCL,0xF0E6L,0xF0E6L},{3L,(-6L),0x4C6EL,0x4C6EL,(-6L),3L,0L,0x1462L},{(-6L),3L,0L,0x1462L,0xC2D8L,0x4C6EL,0x2AD2L,0xC2D8L},{0x1462L,0xF0E6L,0x9E4AL,0x1462L,1L,2L,1L,0x1462L},{3L,1L,3L,0x4C6EL,9L,0L,0x4C6EL,0xF0E6L}}};
                int l_1567 = 3L;
                char *l_1570 = (void*)0;
                char *l_1571[5][10] = {{&l_1538,&g_255.f0,&l_1350.f0,&g_255.f0,&l_1538,&g_1096[0][3].f0,&l_1561.f1,&l_1499,&l_1561.f1,&g_1096[0][3].f0},{&l_1538,&g_255.f0,&l_1350.f0,&g_255.f0,&l_1538,&g_1096[0][3].f0,&l_1561.f1,&l_1499,&l_1561.f1,&g_1096[0][3].f0},{&l_1538,&g_255.f0,&l_1350.f0,&g_255.f0,&l_1538,(void*)0,&l_1350.f0,&g_1096[0][3].f0,&l_1350.f0,(void*)0},{&l_1484.f0,&l_1499,&l_1538,&l_1499,&l_1484.f0,(void*)0,&l_1350.f0,&g_1096[0][3].f0,&l_1350.f0,(void*)0},{&l_1484.f0,&l_1499,&l_1538,&l_1499,&l_1484.f0,(void*)0,&l_1350.f0,&g_1096[0][3].f0,&l_1350.f0,(void*)0}};
                int i, j, k;
                (*g_866) = (((*g_345) = ((*l_1492) == (l_1564[0][5][7] && ((**g_344) && ((*l_1433) ^ ((*g_461) == (safe_add_func_int32_t_s_s((l_1573 = (((**g_356) > (l_1567 &= 1L)) != (((safe_rshift_func_uint16_t_u_s((l_1564[0][5][7] != (l_1572 = (**g_460))), (***g_1454))) > (*g_983)) > 0xD7E7F774L))), 1UL)))))))) < (*g_968));
            }
            else
            {
                return g_1376;


            }
        }


    }
    else
    {
        unsigned l_1576 = 0xB8250EC8L;
        int *l_1581 = &g_96;
        struct S1 l_1591 = {3323,-2516};
        struct S2 l_1626 = {0x47L,0x5DF9D588L,3UL,0xC4D22A73L,0x067EL,-8,7UL,4294967294UL,0xAF486023L};
        unsigned l_1657 = 1UL;
        short **l_1659[5];
        char ***l_1681 = &g_126;
        char ****l_1680 = &l_1681;
        int l_1716 = 0x2190747BL;
        short ***l_1720 = &l_1659[1];
        int i;
        for (i = 0; i < 5; i++)
            l_1659[i] = (void*)0;
        for (g_106 = 0; (g_106 <= 54); g_106 = safe_add_func_int32_t_s_s(g_106, 9))
        {
            (*g_866) ^= l_1576;
        }
lbl_1665:
        l_1380.f1 ^= (g_1577[1][0][3] = ((*g_968) = l_1576));
        if (l_1576)
        {
            unsigned l_1578 = 0xB68002B6L;
            struct S0 **l_1583 = &g_1554;
            unsigned char *l_1592 = &g_134;
            (*g_866) = l_1576;
            if (((!l_1578) >= (((l_1247[1].f3 ^= (*g_983)) <= l_1576) != l_1578)))
            {
                unsigned char l_1579 = 0x6CL;
                struct S0 **l_1585 = &g_298;
                struct S1 l_1586[3][7][10] = {{{{40998,14817},{45147,-17003},{8139,13949},{11656,9140},{26546,9860},{33316,22326},{4833,21798},{12491,-11904},{45932,-12266},{10120,16680}},{{3142,-2405},{45147,-17003},{32075,9665},{4833,21798},{26875,-8973},{3142,-2405},{41291,20439},{16382,15961},{28913,760},{33316,22326}},{{34352,19689},{11036,3009},{3489,-14246},{28225,13321},{44985,19629},{24452,-19852},{14484,-4740},{8139,13949},{14484,-4740},{24452,-19852}},{{34352,19689},{45932,-12266},{3657,6083},{45932,-12266},{34352,19689},{3142,-2405},{12479,-22670},{14907,11862},{29230,-10303},{39034,-16253}},{{3142,-2405},{12479,-22670},{14907,11862},{29230,-10303},{39034,-16253},{33316,22326},{45147,-17003},{35890,-13063},{40106,-20413},{39034,-16253}},{{40998,14817},{29230,-10303},{11095,-16432},{15107,-12725},{34352,19689},{44511,12306},{7594,-7100},{10192,22519},{11656,9140},{24452,-19852}},{{25555,16657},{22503,-3743},{27075,4631},{40106,-20413},{44985,19629},{20560,11001},{29230,-10303},{3489,-14246},{11656,9140},{33316,22326}}},{{{24452,-19852},{40998,14817},{8692,-20215},{34352,19689},{27559,14566},{28279,-15262},{21349,20612},{23616,13952},{39034,-16253},{12895,16591}},{{12895,16591},{24452,-19852},{15150,-12179},{44985,19629},{25244,8970},{1795,16936},{25555,16657},{23616,13952},{44985,19629},{5772,4686}},{{36980,958},{20560,11001},{8692,-20215},{26875,-8973},{2546,17414},{24,-21572},{44511,12306},{39756,-3456},{4144,21740},{24595,20513}},{{1795,16936},{21349,20612},{34203,3960},{26546,9860},{5873,890},{27559,14566},{44511,12306},{45627,19239},{20560,11001},{9555,-5146}},{{25244,8970},{20560,11001},{38167,-11301},{33316,22326},{24595,20513},{32563,4328},{25555,16657},{7527,834},{26875,-8973},{14433,-21407}},{{20802,-2371},{24452,-19852},{16726,16561},{21349,20612},{32563,4328},{32563,4328},{21349,20612},{16726,16561},{24452,-19852},{20802,-2371}},{{25244,8970},{40998,14817},{45833,2574},{44511,12306},{36980,958},{27559,14566},{44985,19629},{44541,-6223},{26546,9860},{3099,4582}}},{{{1795,16936},{41820,11068},{39756,-3456},{40998,14817},{36980,958},{24,-21572},{10120,16680},{15150,-12179},{25555,16657},{20802,-2371}},{{36980,958},{44985,19629},{30644,-961},{864,10745},{32563,4328},{1795,16936},{3142,-2405},{12336,-14883},{10120,16680},{14433,-21407}},{{12895,16591},{27590,12336},{44541,-6223},{864,10745},{24595,20513},{28279,-15262},{45627,19239},{24,-21572},{15150,-12179},{7594,-7100}},{{14484,-4740},{23616,13952},{32563,4328},{5060,14357},{4833,21798},{41291,20439},{16726,16561},{12895,16591},{24039,1771},{40106,-20413}},{{210,-5662},{30644,-961},{32563,4328},{39756,-3456},{22503,-3743},{40106,-20413},{5060,14357},{24,-21572},{7527,834},{45932,-12266}},{{12479,-22670},{38167,-11301},{27559,14566},{34203,3960},{11036,3009},{22503,-3743},{10845,18838},{25244,8970},{23616,13952},{15107,-12725}},{{5866,-11734},{38167,-11301},{24,-21572},{10845,18838},{11656,9140},{5866,-11734},{5060,14357},{44696,9751},{39481,-7586},{22503,-3743}}}};
                int *l_1590 = (void*)0;
                struct S4 **l_1597 = &g_184;
                int i, j, k;
                if ((l_1579 = 0xCA4E78BDL))
                {
                    int **l_1582 = &g_866;
                    struct S0 ***l_1584 = &l_1583;
                    unsigned char *l_1588 = &g_19[1][0][3];
                    (*g_968) ^= l_1580;
                    (*l_1582) = l_1581;

                    ;
                    if ((((*l_1584) = l_1583) != l_1585))
                    {
                        struct S1 *l_1587 = &l_1586[2][5][2];
                        (*l_1587) = func_38(((*l_1587) = func_38(((*l_1587) = l_1586[2][5][2]), ((*l_980) = &g_53))), l_1588);

                        ;
                        (***l_1584) = l_1589;
                        l_1415[4] = l_1590;


                    }
                    else
                    {
                        struct S1 *l_1593 = &g_547;
                        unsigned char ***l_1594[10][2][8] = {{{(void*)0,&l_980,&l_980,&l_980,(void*)0,(void*)0,&l_980,&l_980},{&l_980,(void*)0,&l_980,&l_980,&l_980,&l_980,&l_980,&l_980}},{{&l_980,&l_980,&l_980,&l_980,(void*)0,&l_980,&l_980,&l_980},{&l_980,(void*)0,&l_980,&l_980,(void*)0,&l_980,(void*)0,&l_980}},{{&l_980,(void*)0,&l_980,&l_980,&l_980,&l_980,(void*)0,&l_980},{(void*)0,&l_980,&l_980,&l_980,&l_980,&l_980,&l_980,&l_980}},{{(void*)0,(void*)0,&l_980,&l_980,&l_980,(void*)0,(void*)0,&l_980},{&l_980,&l_980,(void*)0,&l_980,&l_980,&l_980,(void*)0,&l_980}},{{&l_980,&l_980,&l_980,&l_980,&l_980,(void*)0,&l_980,&l_980},{&l_980,&l_980,&l_980,&l_980,&l_980,&l_980,&l_980,&l_980}},{{&l_980,&l_980,&l_980,(void*)0,(void*)0,&l_980,(void*)0,&l_980},{(void*)0,&l_980,(void*)0,&l_980,(void*)0,&l_980,(void*)0,(void*)0}},{{&l_980,&l_980,(void*)0,&l_980,&l_980,&l_980,&l_980,&l_980},{(void*)0,&l_980,&l_980,&l_980,&l_980,(void*)0,&l_980,&l_980}},{{&l_980,&l_980,&l_980,&l_980,(void*)0,&l_980,&l_980,&l_980},{(void*)0,&l_980,&l_980,&l_980,(void*)0,(void*)0,&l_980,&l_980}},{{&l_980,(void*)0,(void*)0,&l_980,&l_980,&l_980,&l_980,&l_980},{&l_980,(void*)0,(void*)0,&l_980,&l_980,&l_980,&l_980,(void*)0}},{{&l_980,&l_980,&l_980,(void*)0,&l_980,&l_980,&l_980,(void*)0},{&l_980,&l_980,&l_980,&l_980,&l_980,&l_980,(void*)0,&l_980}}};
                        int i, j, k;
                        (*g_866) |= (*g_968);
                        (*l_1593) = func_38(l_1591, l_1592);
                        (**l_1582) &= ((void*)0 == &g_831);
                        g_1595 = &g_983;
                    }


                    (**l_1582) = (*g_866);
                }
                else
                {
                    struct S2 l_1596 = {1L,0xCBA5887BL,0x7EE9L,1UL,0xA965L,-6,4294967289UL,4294967294UL,0x1DA33F9DL};
                    return l_1596;
                }

                ;

                (*l_1597) = &g_795[0][2][2];

                ;
            }
            else
            {
                int *l_1598 = &g_24;
                int **l_1599 = (void*)0;
                int **l_1600[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1600[i] = &l_1581;
                l_1415[5] = l_1598;


            }

            ;

        }
        else
        {
            const short l_1605[8][3] = {{0x47B6L,1L,(-4L)},{0x0472L,0x0AC9L,0x0472L},{(-4L),1L,0x47B6L},{0L,1L,0x47B6L},{0x2228L,0L,0x0472L},{0xD23BL,0xD23BL,(-4L)},{0x2228L,(-4L),0L},{0L,(-4L),0x2228L}};
            short *l_1614[8];
            struct S4 l_1634 = {360,-452,135,3,-428,11993,14,28};
            int *l_1638 = &g_76;
            const int *l_1664 = (void*)0;
            struct S1 l_1675 = {184,22005};
            unsigned char **l_1676 = &g_983;
            unsigned char ***l_1705 = (void*)0;
            unsigned short l_1706 = 0xE8D3L;
            struct S3 l_1707 = {1,4,1,10};
            struct S2 l_1712 = {-6L,4294967295UL,65527UL,4294967295UL,0x7989L,-5,0xF7CE274EL,0x36665633L,0x3DA2A419L};
            char l_1713 = (-5L);
            const int **l_1723 = &l_1415[0];
            int i, j;
            for (i = 0; i < 8; i++)
                l_1614[i] = (void*)0;
            if ((*l_1433))
            {
                struct S1 **l_1615 = (void*)0;
                struct S1 **l_1616 = (void*)0;
                struct S1 **l_1617 = &g_268;
                struct S1 **l_1618 = &g_268;
                int l_1627 = 0L;
                short *l_1632 = &l_1444[2];
                struct S0 l_1663 = {1L,0x37L,0xE392L};
                for (g_984 = (-18); (g_984 != 35); g_984 = safe_add_func_int8_t_s_s(g_984, 9))
                {
                    char l_1612 = 1L;
                    unsigned char l_1613 = 1UL;
                    (*g_968) &= (0x87L > 9UL);
                    if ((safe_mod_func_int16_t_s_s(l_1605[3][0], (safe_add_func_uint32_t_u_u((*g_1231), ((safe_add_func_int32_t_s_s(((((*l_1433) < (**g_460)) && (-2L)) ^ 6UL), (*g_968))) > (-1L)))))))
                    {
                        if ((*g_968))
                            break;
                    }
                    else
                    {
                        if ((*g_866))
                            break;
                    }
                }
                (*g_866) |= (((**g_460) = ((g_1619[3] = &g_547) == &g_1290)) > 0x4BL);
                if ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((***g_827), 10)), (l_1605[1][0] || ((void*)0 == (*g_459))))))
                {
                    unsigned char l_1628[7][7][3] = {{{0xC2L,0x2BL,8UL},{0x47L,0xDFL,0x31L},{0x37L,0x52L,0x52L},{0x47L,0xEFL,0x17L},{0xC2L,0UL,0x17L},{0UL,0x17L,0x52L},{0xCCL,8UL,0x31L}},{{3UL,0x17L,8UL},{0x81L,0UL,255UL},{0x81L,0xEFL,0x4AL},{3UL,0x52L,0UL},{0xCCL,0xDFL,0x4AL},{0UL,0x2BL,255UL},{0xC2L,0x2BL,8UL}},{{0x47L,0xDFL,0x31L},{0x37L,0x52L,0x52L},{0x47L,0xEFL,0x17L},{0xC2L,0UL,0x17L},{0UL,0x17L,0x52L},{0xCCL,0xCDL,0UL},{0x31L,0xC2L,0xCDL}},{{0x4AL,0x18L,0x61L},{0x4AL,0x05L,0x77L},{0x31L,247UL,0x18L},{7UL,0x7EL,0x77L},{0UL,251UL,0x61L},{0xDFL,251UL,0xCDL},{0xEFL,0x7EL,0UL}},{{255UL,247UL,247UL},{0xEFL,0x05L,0xC2L},{0xDFL,0x18L,0xC2L},{0UL,0xC2L,247UL},{7UL,0xCDL,0UL},{0x31L,0xC2L,0xCDL},{0x4AL,0x18L,0x61L}},{{0x4AL,0x05L,0x77L},{0x31L,247UL,0x18L},{7UL,0x7EL,0x77L},{0UL,251UL,0x61L},{0xDFL,251UL,0xCDL},{0xEFL,0x7EL,0UL},{255UL,247UL,247UL}},{{0xEFL,0x05L,0xC2L},{0xDFL,0x18L,0xC2L},{0UL,0xC2L,247UL},{7UL,0xCDL,0UL},{0x31L,0xC2L,0xCDL},{0x4AL,0x18L,0x61L},{0x4AL,0x05L,0x77L}}};
                    struct S2 l_1637 = {0x91L,0x1D89B46BL,65535UL,0x593877BEL,0xA2F2L,-6,0xE53D180CL,0xE5ACE279L,4UL};
                    int i, j, k;
                    for (l_37.f6 = 0; (l_37.f6 < 37); l_37.f6 = safe_add_func_int16_t_s_s(l_37.f6, 6))
                    {
                        return l_1626;
                    }
                    if (l_1627)
                    {
                        unsigned l_1631[6][2] = {{0x9BBFB6D7L,0x9BBFB6D7L},{0x9BBFB6D7L,0x9BBFB6D7L},{0x9BBFB6D7L,0x9BBFB6D7L},{0x9BBFB6D7L,0x9BBFB6D7L},{0x9BBFB6D7L,0x9BBFB6D7L},{0x9BBFB6D7L,0x9BBFB6D7L}};
                        int *l_1633 = &g_76;
                        int **l_1635 = &g_866;
                        int i, j;
                        (*g_968) ^= l_1628[6][0][1];
                        (*l_1581) = (safe_mul_func_uint8_t_u_u(0x27L, (0x9F777AF5L < (*g_866))));
                        (*l_1635) = l_1581;

                        ;
                        (**l_1635) = ((**g_503) <= g_1376.f3);
                    }
                    else
                    {
                        (*g_968) = g_1636;
                        return l_1637;
                    }

                    ;
                    if ((0xEFD45FEAL != (0UL < (*l_1581))))
                    {
                        int **l_1639 = &g_866;
                        (*l_1639) = l_1638;

                        ;
                        (*g_866) = (safe_mul_func_uint8_t_u_u((*g_983), (safe_mod_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((*g_968))), ((***g_827) = (safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((-1L), (*l_1581))), 1)))))));
                    }
                    else
                    {
                        unsigned *l_1656 = &l_1513[0][6].f6;
                        int l_1658 = 9L;
                        l_1658 = (0UL < (((void*)0 != &g_459) >= (g_13 = l_1637.f1)));
                    }

                    ;
                    if (g_307.f4)
                        goto lbl_1722;
                }
                else
                {
                    const unsigned char l_1670 = 0UL;
                    if (((*l_1433) <= ((*g_827) != l_1659[1])))
                    {
                        int **l_1661 = &l_1638;
                        int *l_1662[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1662[i] = &g_76;
                        l_1662[1] = ((*l_1661) = l_1660);
                        (*l_1661) = (*l_1661);
                    }
                    else
                    {
                        l_1663 = l_1589;
                        l_1664 = &l_1548;

                        ;
                        if (l_37.f7)
                            goto lbl_1665;
                        (*g_866) = l_1663.f2;
                    }

                    ;
                    for (g_1309 = 0; (g_1309 <= (-14)); --g_1309)
                    {
                        unsigned l_1671 = 0xAEAB628AL;
                        struct S1 l_1672 = {6447,-1761};
                        unsigned char *l_1673 = &l_1537;
                        struct S1 *l_1674[6][8][2] = {{{&l_1380,&l_1672},{&l_1591,&l_1591},{&l_1380,&l_1380},{&g_547,&l_1591},{(void*)0,&l_1380},{&g_547,&l_1591},{&g_547,(void*)0},{(void*)0,(void*)0}},{{&g_547,&l_1591},{(void*)0,(void*)0},{&g_547,(void*)0},{&l_1380,&g_547},{&g_547,&l_1591},{&g_547,&g_547},{&l_1380,(void*)0},{&g_547,(void*)0}},{{(void*)0,&l_1591},{&g_547,(void*)0},{(void*)0,(void*)0},{&g_547,&l_1591},{&g_547,&l_1380},{(void*)0,&l_1591},{&g_547,&l_1380},{&l_1380,&l_1591}},{{&l_1591,&l_1672},{&l_1380,&g_547},{&l_1380,&g_547},{&l_1380,&g_547},{&l_1380,&g_547},{&l_1380,&l_1672},{&l_1591,&l_1591},{&l_1380,&l_1380}},{{&g_547,&l_1591},{(void*)0,&l_1380},{&g_547,&l_1591},{&g_547,(void*)0},{(void*)0,(void*)0},{&g_547,&l_1591},{(void*)0,(void*)0},{&g_547,(void*)0}},{{&l_1380,&g_547},{&g_547,&l_1591},{&g_547,&g_547},{&l_1380,(void*)0},{&g_547,(void*)0},{&l_1591,&l_1591},{&g_547,&l_1380},{&l_1380,&l_1591}}};
                        int i, j, k;
                        l_1671 = (safe_rshift_func_uint8_t_u_u(((*g_461) || (((*l_1581) != (**g_1595)) != ((l_1670 | (0x894AL >= (*g_1445))) < 0xF4AAL))), 7));
                        l_1675 = func_38(l_1672, l_1673);
                    }
                    (*g_968) = ((void*)0 == l_1676);
                }

                ;
                ;
            }
            else
            {
                char l_1688 = 0x7BL;
                int *l_1710 = (void*)0;
                for (g_1335.f0 = 0; (g_1335.f0 <= 3); g_1335.f0 += 1)
                {
                    char ** const **l_1683 = (void*)0;
                    int l_1684[9][4][1] = {{{(-8L)},{0L},{0L},{(-8L)}},{{0x543BC72AL},{0x1E04ED2EL},{0x543BC72AL},{(-8L)}},{{0L},{0L},{(-8L)},{0x543BC72AL}},{{0x1E04ED2EL},{0x543BC72AL},{(-8L)},{0L}},{{0L},{(-8L)},{0x543BC72AL},{0x1E04ED2EL}},{{0x543BC72AL},{(-8L)},{0L},{0L}},{{(-8L)},{0x543BC72AL},{0x1E04ED2EL},{0x543BC72AL}},{{(-8L)},{0L},{0L},{(-8L)}},{{0x543BC72AL},{0x1E04ED2EL},{0x543BC72AL},{(-8L)}}};
                    struct S2 l_1685 = {0x67L,4294967294UL,0xF6C2L,0x7A368FF7L,0xAF42L,-6,0UL,4294967295UL,0x6CFAEFBDL};
                    struct S3 l_1690 = {0,1,1,11};
                    const int *l_1711 = &l_1684[4][0][0];
                    int i, j, k;
                    (*g_1554) = (*g_1554);
                    if ((safe_mod_func_int16_t_s_s((**g_356), (g_1376.f2 = 0x38A4L))))
                    {
                        unsigned l_1679[5];
                        char *****l_1682 = &l_1680;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1679[i] = 0xC56D09F0L;
                        (*g_866) = l_1679[0];
                        (*l_1581) ^= ((*g_866) = (g_183.f4 >= (((*l_1682) = l_1680) != l_1683)));
                        (*g_866) ^= (-4L);
                    }
                    else
                    {
                        struct S1 *l_1686 = &l_1591;
                        int l_1687 = 1L;
                        struct S4 l_1689 = {-1323,589,113,-11,111,-14339,-229,-86};
                        (*l_1581) = (((*g_1231) ^ (*l_1433)) & l_1684[4][0][0]);
                        (*l_1581) |= (*g_968);
                        l_1634.f1 ^= ((((*l_1581) && ((*l_1581) = ((&g_1494 != &g_1494) == func_2(l_1685, func_8((**g_1595), ((*l_1686) = l_1380), l_1687, l_1688), l_1689, l_1690, l_1690.f0)))) || g_1376.f0) || 5L);
                    }
                    (*l_1581) ^= ((*l_1638) = (((**g_344) = ((safe_rshift_func_int16_t_s_u(l_1690.f0, g_110[3][1][4])) <= (**g_1595))) | (-6L)));
                    (*g_968) |= (*l_1581);
                    for (l_1626.f2 = 0; (l_1626.f2 <= 3); l_1626.f2 += 1)
                    {
                        int **l_1709[6][3] = {{&g_202,&l_1660,&g_968},{&g_202,&g_202,&l_1660},{&g_202,&l_1660,&l_1660},{&l_1660,&l_1660,&g_968},{&g_202,&l_1660,&g_202},{&g_202,&l_1660,&g_968}};
                        int i, j;
                        l_1710 = l_1708;

                        ;
                        l_1711 = (void*)0;

                        ;
                        if ((*g_968))
                            break;
                        return l_1712;
                    }

                    ;
                }

                ;
            }

            ;
            ;
            l_1247[1].f1 &= (l_1713 | (~(safe_rshift_func_int16_t_s_u((l_1716 && ((*l_1581) | (*l_1638))), 0))));
lbl_1722:
            for (g_76 = 27; (g_76 != 2); g_76--)
            {
                struct S3 *l_1721[4] = {&g_317[0][0],&g_317[0][0],&g_317[0][0],&g_317[0][0]};
                int i;
                (*l_1581) = ((l_1719 = l_1719) != ((**g_1452) = (l_1720 = (void*)0)));

                ;
                ;
                (*g_971) = l_1721[3];

                ;
                if ((*l_1433))
                    continue;
            }

            ;
            ;
            (*l_1723) = &l_1548;


        }

        ;

        ;
        ;
    }


    ;

    ;


    ;
    ;
    ;

    ;
    ;
    ;

    ;
    for (g_1376.f8 = 15; (g_1376.f8 == 13); g_1376.f8--)
    {
        for (g_984 = 0; (g_984 <= 1); g_984 += 1)
        {
            struct S2 l_1726 = {0xABL,4294967291UL,0xE5FAL,0UL,0x9FBEL,4,0xFF830E9CL,0x923C8DC1L,4294967286UL};
            return l_1726;


        }
        (*g_971) = (*g_971);
    }
    return l_1513[3][0];


}







static int func_2(struct S2 p_3, struct S2 p_4, struct S4 p_5, struct S3 p_6, int p_7)
{
    unsigned short l_1248 = 0x3332L;
    unsigned char *l_1253 = (void*)0;
    struct S2 l_1254 = {9L,4294967290UL,65530UL,0xEBE022B2L,0x5F0FL,0,0x329355E3L,0x9C97195DL,0UL};
    int *l_1257 = &g_76;
    struct S1 **l_1276 = &g_268;
    int l_1283 = 0x1A79C9DBL;
    struct S3 l_1295 = {1,2,1,20};
    char ***l_1302 = &g_126;
    struct S0 l_1311 = {1L,-1L,0UL};
    unsigned char l_1324 = 0xC2L;
    struct S2 *l_1334 = &g_1335;
    if (((!(g_717.f0 >= l_1248)) < ((**g_503) = (safe_lshift_func_uint8_t_u_u(((*g_983) ^= (safe_rshift_func_int16_t_s_s(l_1254.f2, (safe_mul_func_int8_t_s_s(l_1254.f8, l_1254.f3))))), 1)))))
    {
        int **l_1258[6][2] = {{&g_866,&g_968},{&g_866,&g_968},{&g_866,&g_866},{&l_1257,&l_1257},{&l_1257,&g_866},{&g_866,&g_968}};
        int *l_1259 = &g_24;
        int i, j;
        l_1259 = l_1257;

        ;
    }
    else
    {
        int *l_1260 = (void*)0;
        int **l_1261 = (void*)0;
        int **l_1262 = (void*)0;
        int **l_1263[8] = {&g_968,&g_968,&g_968,&g_968,&g_968,&g_968,&g_968,&g_968};
        struct S2 **l_1275 = &g_306;
        int ****l_1281 = &g_831;
        int *****l_1280 = &l_1281;
        const struct S1 *l_1289 = &g_1290;
        struct S0 l_1294[1] = {{0xB8L,0x21L,0UL}};
        int *l_1299 = (void*)0;
        short ***l_1313 = &g_356;
        short ****l_1312 = &l_1313;
        unsigned short l_1329 = 0xEFCCL;
        struct S0 l_1333 = {0L,-10L,0xA0B6L};
        struct S4 **l_1337 = &g_184;
        struct S4 *l_1339[3];
        struct S4 **l_1338 = &l_1339[0];
        int i;
        for (i = 0; i < 3; i++)
            l_1339[i] = &g_185[5];
        l_1257 = l_1260;

        ;
        if (p_4.f3)
        {
            unsigned short *l_1272 = &g_106;
            int l_1277[1][8] = {{1L,5L,1L,5L,1L,5L,1L,5L}};
            const struct S1 *l_1287 = &g_14;
            const short ****l_1314 = (void*)0;
            struct S2 **l_1323[2];
            int i, j;
            for (i = 0; i < 2; i++)
                l_1323[i] = &g_306;
lbl_1296:
            (*g_866) = (p_6.f2 || (((**g_344) ^= (safe_rshift_func_uint8_t_u_u(p_4.f6, 4))) <= ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((**g_356), ((*l_1272) = (safe_lshift_func_int16_t_s_s(p_3.f2, p_5.f4))))), ((p_3.f6 ^= (safe_add_func_int8_t_s_s((&g_306 == l_1275), ((((*g_461) = (0x4368L > (((void*)0 != l_1276) | g_1096[0][3].f8))) & p_6.f0) | l_1277[0][4])))) & l_1277[0][4]))) >= (**g_503))));
            if ((*g_866))
            {
                unsigned l_1298 = 3UL;
                (*g_866) = (safe_rshift_func_int8_t_s_s(0L, 3));
                for (l_1254.f0 = 3; (l_1254.f0 >= 1); l_1254.f0 -= 1)
                {
                    unsigned char l_1282 = 1UL;
                    struct S1 *l_1284 = &g_547;
                    struct S1 **l_1285 = &g_268;
                    struct S1 **l_1286 = &l_1284;
                    const struct S1 **l_1288[1][7] = {{&l_1287,&l_1287,&l_1287,&l_1287,&l_1287,&l_1287,&l_1287}};
                    int l_1293[4][2] = {{0x34B3A28EL,0x34B3A28EL},{0x34B3A28EL,0x34B3A28EL},{0x34B3A28EL,0x34B3A28EL},{0x34B3A28EL,0x34B3A28EL}};
                    int i, j;
                    (*g_866) = (0xDFL > (l_1282 = ((*g_461) = ((void*)0 == l_1280))));
                    (*g_968) = ((((l_1277[0][4] <= (*g_983)) == p_4.f3) > p_5.f0) & (*g_983));
                    for (g_307.f7 = 0; (g_307.f7 <= 4); g_307.f7 += 1)
                    {
                        short l_1297 = 0x3099L;
                        if (p_3.f6)
                            goto lbl_1296;
                        (*g_968) = p_6.f3;
                        (*g_866) &= (((*g_1231) != l_1277[0][4]) < (p_3.f0 = (**g_460)));
                        (*g_866) = (p_4.f8 >= l_1297);
                    }
                    for (g_307.f8 = 1; (g_307.f8 <= 4); g_307.f8 += 1)
                    {
                        return l_1298;
                    }
                }
                l_1257 = &p_7;

                ;
                l_1299 = &l_1277[0][7];

                ;
            }
            else
            {
                struct S1 *** const l_1319 = (void*)0;
                if ((safe_rshift_func_int16_t_s_s(p_4.f2, (l_1302 == l_1302))))
                {
                    unsigned short l_1310 = 0xB684L;
                    for (p_3.f0 = 0; (p_3.f0 > 24); p_3.f0 = safe_add_func_uint32_t_u_u(p_3.f0, 8))
                    {
                        g_298 = (void*)0;

                        ;
                        p_5.f3 ^= ((*g_866) = (safe_mul_func_int8_t_s_s((*g_461), (0x40L & (safe_add_func_int16_t_s_s(7L, ((((((*g_504) &= (65535UL & g_1309)) <= ((*l_1272) = (((void*)0 != (*g_460)) || (p_4.f0 = ((0x40ABADC1L > (((void*)0 == &g_832[1][5]) | 0x2EL)) < p_4.f4))))) < 0UL) > l_1310) != 0UL)))))));
                        g_255 = l_1311;
                        (*g_968) = ((l_1312 == l_1314) <= (p_3.f2 ^ p_4.f1));
                    }
                    return p_5.f7;
                }
                else
                {
                    struct S1 *** const l_1320 = &l_1276;
                    (*g_968) &= (safe_mod_func_int8_t_s_s(p_4.f1, (p_3.f0 &= ((250UL > (safe_mod_func_uint8_t_u_u(((l_1319 == l_1320) == (((safe_rshift_func_uint16_t_u_u(1UL, 7)) != 0xBEF5423DL) ^ (l_1323[0] == (void*)0))), ((*g_461) = (*g_461))))) && 8L))));
                }
                (*g_866) |= l_1329;
            }
            if (g_76)
                goto lbl_1296;
            return p_5.f4;
        }
        else
        {
            unsigned short l_1332 = 65534UL;
            int l_1336[2][5] = {{(-1L),(-8L),(-8L),(-1L),(-8L)},{(-1L),(-1L),0xBDDB8271L,(-1L),(-1L)}};
            int i, j;
            (*g_968) ^= (((*g_983) & 246UL) != 0L);
            l_1334 = &g_1096[0][3];

            ;
            l_1336[1][3] ^= (*g_968);
        }

        ;
        (*l_1338) = ((*l_1337) = &g_795[0][2][2]);

        ;

    }

    ;
    ;
    return (*g_866);
}







static struct S2 func_8(unsigned char p_9, const struct S1 p_10, int p_11, char p_12)
{
    unsigned *l_1227 = &g_307.f6;
    int l_1234 = 1L;
    struct S3 *l_1242 = &g_317[0][2];
    struct S2 l_1246 = {-2L,0xB42232D0L,0x6CE9L,0x28B104CBL,0UL,-4,4294967287UL,0UL,0UL};
    for (g_307.f8 = 10; (g_307.f8 == 48); g_307.f8 = safe_add_func_int32_t_s_s(g_307.f8, 9))
    {
        int *l_1219 = (void*)0;
        int *l_1237 = &l_1234;
        for (g_13 = 0; (g_13 == 13); g_13 = safe_add_func_int16_t_s_s(g_13, 3))
        {
            int **l_1218[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1218[i] = (void*)0;
            l_1219 = &p_11;

            ;
            for (g_931 = 0; g_931 < 7; g_931 += 1)
            {
                g_502[g_931] = (void*)0;
            }
            for (g_307.f1 = 7; (g_307.f1 != 32); g_307.f1++)
            {
                const unsigned l_1224 = 8UL;
                (*g_968) ^= ((*l_1219) = (safe_add_func_int8_t_s_s(l_1224, (*g_461))));
            }
            for (g_307.f1 = 0; (g_307.f1 <= 2); g_307.f1 += 1)
            {
                unsigned **l_1228 = (void*)0;
                unsigned **l_1229 = (void*)0;
                unsigned **l_1230[6] = {&l_1227,&l_1227,&l_1227,&l_1227,&l_1227,&l_1227};
                unsigned short *l_1233[7];
                char ***l_1236 = &g_126;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_1233[i] = (void*)0;
                (*g_968) &= ((safe_add_func_uint16_t_u_u(((((*g_344) = (*g_344)) != (g_1231 = l_1227)) | (-9L)), ((0x9E28L != (!g_110[(g_307.f1 + 2)][g_307.f1][(g_307.f1 + 1)])) >= ((g_1096[0][3].f2 |= p_10.f0) >= (safe_unary_minus_func_uint16_t_u((l_1234 ^= (g_307.f2 &= 0x329AL)))))))) & (g_1235 <= 65529UL));

                ;
                for (l_1234 = 0; (l_1234 <= 2); l_1234 += 1)
                {
                    int *l_1238 = (void*)0;
                    struct S2 l_1241 = {0L,4294967294UL,5UL,0x3941BCFEL,0x8A1EL,-6,0x188C11A3L,0xF0051850L,0x85CD20BAL};
                    p_11 &= (l_1236 == (void*)0);
                    l_1238 = l_1237;

                    ;
                    (*l_1219) &= (0x5BD2L | ((!((*l_1237) || ((safe_sub_func_int8_t_s_s((((*g_983) && (func_29(&g_1235, (0xD061352EL & ((*g_968) = p_9)), l_1241, &g_134) == 0x652CL)) && p_12), (*l_1237))) > p_10.f1))) < p_9));
                }
            }
        }

        ;
        if (l_1234)
            continue;
    }
    l_1242 = l_1242;
    for (g_307.f8 = (-11); (g_307.f8 < 39); g_307.f8 = safe_add_func_int16_t_s_s(g_307.f8, 1))
    {
        int *l_1245[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1245[i] = &g_24;
        (*g_866) |= (((**g_344) = 6UL) && p_11);
        p_11 ^= ((*g_866) = l_1234);
    }
    return l_1246;
}







static char func_29(unsigned char * p_30, const unsigned char p_31, struct S2 p_32, unsigned char * p_33)
{
    int *l_985 = &g_76;
    int **l_986 = &g_968;
    char *l_991 = &g_307.f0;
    char *l_992 = &g_305[1][2].f0;
    unsigned char l_997 = 1UL;
    const int *l_1020 = &g_96;
    struct S4 l_1024 = {-312,-148,28,3,2276,15770,-329,38};
    struct S1 l_1044 = {32194,23135};
    const unsigned short ***l_1137 = (void*)0;
    struct S0 l_1145 = {0x19L,0L,5UL};
    struct S1 l_1165 = {11042,-14853};
    unsigned char l_1181 = 0xA7L;
    unsigned ***l_1199 = &g_344;
lbl_1047:
    (*l_986) = l_985;
    if (((((((+(safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s((**l_986), ((*l_992) = ((*l_991) = ((*g_461) = (p_32.f0 = (+(**l_986)))))))) != 0x04L), 13))) ^ g_57[6]) > (*l_985)) ^ (((safe_sub_func_uint32_t_u_u(p_32.f5, ((((*p_33) = (*l_985)) > (safe_sub_func_int8_t_s_s(9L, (p_32.f3 < (*l_985))))) > g_795[0][2][2].f0))) > (**l_986)) <= g_778.f0)) | p_32.f7) != l_997))
    {
        int l_1014 = 8L;
        int *l_1019 = &g_96;
        struct S4 l_1022 = {136,-677,77,-15,-1495,31652,509,-31};
        short ***l_1034 = &g_356;
        short ****l_1033 = &l_1034;
        struct S1 l_1075 = {22816,-11727};
        int l_1083 = (-1L);
        int * const *l_1121 = &g_202;
        int * const **l_1120 = &l_1121;
        int * const ***l_1119 = &l_1120;
        struct S3 l_1146 = {1,3,1,8};
        for (p_32.f8 = 0; (p_32.f8 <= 6); p_32.f8 += 1)
        {
            unsigned short l_998 = 0x08EEL;
            int *l_1023 = (void*)0;
            unsigned *l_1042 = &g_152[3][1];
            unsigned char *l_1073[8][9] = {{&g_53,&l_997,&g_53,&l_997,&g_53,&g_134,&l_997,&g_53,&g_53},{&g_984,&g_53,&g_984,(void*)0,&g_984,&g_53,&g_984,&l_997,&g_984},{&g_53,&g_53,&l_997,&g_134,&l_997,&g_134,&l_997,&g_53,&g_53},{&g_53,&g_134,&g_53,&l_997,&l_997,&g_984,&l_997,&l_997,&g_53},{&l_997,&l_997,&g_984,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&l_997,&l_997,&g_53,&g_134,&g_984,(void*)0,&g_53,(void*)0},{&g_53,&g_134,&g_984,&g_984,&g_134,&g_53,&l_997,&l_997,&g_53},{&g_984,&g_984,&g_53,&g_984,&g_984,&g_984,&g_984,&l_997,&g_53}};
            struct S3 *l_1078 = (void*)0;
            unsigned char l_1094 = 6UL;
            int i, j;
            if (((-4L) < l_998))
            {
                int *l_1011 = (void*)0;
                short *l_1012 = &g_55;
                int *l_1013[6][6] = {{&g_76,(void*)0,(void*)0,(void*)0,(void*)0,&g_76},{&g_96,&g_76,(void*)0,&g_76,&g_96,&g_96},{&g_96,&g_76,&g_76,&g_96,(void*)0,&g_96},{&g_96,(void*)0,&g_96,&g_76,&g_76,&g_96},{&g_96,&g_96,&g_76,(void*)0,&g_76,&g_96},{&g_76,(void*)0,(void*)0,(void*)0,(void*)0,&g_76}};
                const int **l_1021[8][8] = {{&l_1020,&g_75,&l_1020,&l_1020,&g_75,&l_1020,&l_1020,&g_75},{&g_75,&l_1020,&l_1020,&g_75,&l_1020,&l_1020,&g_75,&l_1020},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&l_1020,&g_75,&l_1020,&l_1020,&g_75,&l_1020,&l_1020,&g_75},{&g_75,&l_1020,&l_1020,&g_75,&l_1020,&l_1020,&g_75,&l_1020},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&l_1020,&g_75,&l_1020,&l_1020,&g_75,&l_1020,&l_1020,&g_75},{&g_75,&l_1020,&l_1020,&g_75,&l_1020,&l_1020,&g_75,&l_1020}};
                int i, j;
                l_1014 ^= ((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(p_32.f2, p_32.f1)), ((safe_add_func_int8_t_s_s(1L, (safe_sub_func_int32_t_s_s(((*g_461) | 0xC8L), (*l_985))))) >= p_32.f5))) ^ (*l_985));
                p_32.f5 ^= p_32.f0;
                if (((safe_mul_func_int8_t_s_s(p_32.f4, (((safe_mod_func_uint32_t_u_u(p_32.f6, 4294967287UL)) == 0xF29EL) | (*g_461)))) || p_32.f5))
                {
                    short *****l_1035 = &l_1033;
                    short ****l_1037 = &l_1034;
                    short *****l_1036 = &l_1037;
                    unsigned short *l_1041[9];
                    unsigned short **l_1040 = &l_1041[8];
                    struct S1 l_1043 = {23750,6032};
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1041[i] = &l_998;
                    if (p_31)
                        break;
                    p_32.f5 ^= ((*l_1019) >= (safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((*l_1036) = ((*l_1035) = l_1033)) == (void*)0), ((safe_rshift_func_uint16_t_u_u((((*l_1040) = l_1012) == &g_106), 11)) ^ (*l_1019)))), (l_1011 == l_1042))) > ((**l_986) != (*l_1019))) >= (*l_1019)), g_547.f1)), (*l_985))));


                    l_1044 = l_1043;
                    if (((**l_986) = ((*l_1019) = (*l_1019))))
                    {
                        struct S1 l_1045 = {42110,-18569};
                        struct S1 *l_1046 = &g_547;
                        int i;
                        (*l_1046) = l_1045;
                        if (p_31)
                            goto lbl_1047;
                        (*l_1019) &= (safe_lshift_func_int8_t_s_u(((g_57[p_32.f8] = (~p_32.f8)) | ((**g_344) == ((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(p_32.f4, ((*g_983) < (safe_unary_minus_func_int8_t_s(p_32.f2))))) & (((*g_983) >= l_1043.f1) < (*l_985))), ((*g_461) | 0xAFL))), (*g_983))) ^ p_32.f7))), l_1043.f1));
                        return p_32.f5;
                    }
                    else
                    {
                        unsigned char l_1063 = 255UL;
                        if (l_1043.f1)
                            goto lbl_1047;
                        (*g_968) = (**l_986);
                        (**l_986) &= (l_1043.f1 ^ 0xDD09FE11L);
                    }
                }
                else
                {
                    struct S1 l_1072 = {14696,18397};
                    for (p_32.f2 = 0; (p_32.f2 >= 3); p_32.f2++)
                    {
                        struct S1 *l_1074[10][4][5] = {{{(void*)0,(void*)0,(void*)0,&l_1044,&g_547},{&l_1044,&l_1044,&g_547,&g_547,&g_547},{&l_1072,&g_547,&l_1044,&l_1044,&l_1044},{(void*)0,&l_1072,&g_547,&l_1044,&l_1044}},{{&l_1044,&l_1044,&l_1044,&l_1044,&g_547},{&l_1044,&l_1044,(void*)0,&l_1072,&g_547},{&l_1044,&l_1044,&g_547,&l_1044,&g_547},{&g_547,&g_547,&g_547,&l_1044,&l_1044}},{{&l_1072,&l_1072,&l_1072,&g_547,(void*)0},{&l_1072,(void*)0,&l_1044,&l_1072,&l_1072},{&l_1044,&l_1072,(void*)0,&g_547,(void*)0},{&l_1072,&g_547,&l_1044,&l_1072,&l_1044}},{{&g_547,&l_1044,&l_1044,&g_547,&g_547},{&g_547,&l_1044,&l_1072,&l_1072,(void*)0},{&l_1044,&l_1044,&g_547,&g_547,(void*)0},{&l_1044,&l_1072,&l_1044,&g_547,&l_1044}},{{(void*)0,&g_547,(void*)0,&l_1072,&l_1044},{&l_1044,&g_547,&l_1044,(void*)0,&l_1044},{&l_1044,&g_547,&l_1044,&l_1044,&g_547},{&l_1072,&l_1044,(void*)0,&g_547,&l_1044}},{{&l_1044,&g_547,&l_1044,&l_1044,&l_1044},{&g_547,&g_547,&l_1044,&l_1072,&l_1044},{&l_1044,&l_1044,&l_1044,&l_1072,&g_547},{&l_1072,&l_1044,(void*)0,(void*)0,&l_1044}},{{&l_1044,&l_1072,&l_1044,&l_1072,&l_1044},{&l_1044,(void*)0,&l_1044,&l_1072,(void*)0},{&g_547,&l_1044,&l_1044,&l_1044,&l_1044},{&l_1072,&l_1044,&l_1044,&g_547,&g_547}},{{(void*)0,&l_1072,&l_1044,&l_1044,&l_1044},{&g_547,&l_1072,&l_1044,&l_1044,&l_1072},{&l_1072,&g_547,(void*)0,&g_547,&l_1072},{&g_547,&l_1072,&l_1044,&l_1044,&g_547}},{{&l_1044,&l_1044,&l_1044,(void*)0,&g_547},{&l_1072,&l_1044,&l_1044,&l_1072,&g_547},{&l_1044,(void*)0,(void*)0,&g_547,&l_1072},{&g_547,&g_547,&l_1044,&l_1072,&l_1072}},{{(void*)0,&l_1044,&l_1072,&l_1044,&l_1072},{&l_1072,(void*)0,&l_1072,&g_547,(void*)0},{(void*)0,&l_1072,&l_1044,(void*)0,&l_1072},{&l_1044,&l_1072,&l_1044,&g_547,&g_547}}};
                        int i, j, k;
                        l_1075 = func_38(l_1072, &g_53);
                    }
                    for (g_255.f1 = (-4); (g_255.f1 < 0); g_255.f1 = safe_add_func_uint32_t_u_u(g_255.f1, 6))
                    {
                        p_32.f5 &= (*g_968);
                    }
                }
                (**l_986) ^= 0xC4D51B1BL;
            }
            else
            {
                if (p_32.f1)
                    break;
            }
            (*g_971) = l_1078;

            ;
            for (g_137 = 3; (g_137 > 27); g_137++)
            {
                if ((*g_968))
                {
                    for (g_307.f6 = 0; (g_307.f6 <= 6); g_307.f6 += 1)
                    {
                        return (*l_985);
                    }
                }
                else
                {
                    (*l_1019) = 8L;
                    (*g_866) = ((p_32.f1 > (safe_mod_func_int8_t_s_s((l_1083 == (safe_sub_func_int8_t_s_s(p_32.f7, ((safe_mod_func_uint32_t_u_u((*g_345), p_31)) || (*g_983))))), p_32.f7))) && 0x15L);
                    for (g_307.f7 = 0; (g_307.f7 <= 1); g_307.f7 += 1)
                    {
                        struct S2 *l_1095 = &g_1096[0][3];
                        int i, j;
                        (*l_986) = (*l_986);
                        l_1095 = &g_305[0][1];

                        ;
                    }
                    for (g_307.f7 = 0; (g_307.f7 <= 47); g_307.f7 = safe_add_func_int8_t_s_s(g_307.f7, 9))
                    {
                        if (p_32.f7)
                            break;
                    }
                }
            }
        }
        for (g_106 = (-23); (g_106 <= 49); ++g_106)
        {
            unsigned l_1126 = 0xFFD74207L;
            unsigned short *l_1133 = &g_307.f2;
            (*l_985) &= (safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((*l_1019), (*l_1019))), 0x4A31L));
            for (p_32.f6 = 0; (p_32.f6 > 58); p_32.f6 = safe_add_func_uint32_t_u_u(p_32.f6, 1))
            {
                unsigned l_1109 = 0x82E6AEBCL;
                int ****l_1118[8] = {&g_831,&g_831,&g_831,&g_831,&g_831,&g_831,&g_831,&g_831};
                int *****l_1117 = &l_1118[5];
                int i;
                for (g_66 = 6; (g_66 >= 0); g_66 -= 1)
                {
                    unsigned l_1110 = 0xC894F573L;
                    if ((((safe_rshift_func_uint16_t_u_s((0xBBL & p_32.f0), p_32.f0)) && l_1109) != 1L))
                    {
                        return l_1110;
                    }
                    else
                    {
                        (*l_1019) ^= ((**l_986) = 0L);
                        (*l_1019) ^= ((((((*l_986) = (*l_986)) == &l_1083) && p_32.f3) > p_32.f4) >= (safe_mul_func_uint16_t_u_u(65535UL, 0xC9EBL)));
                        (*g_968) ^= p_32.f8;
                    }
                }
                p_32.f5 &= (((*g_345) |= (g_793.f6 | l_1109)) | (((safe_mul_func_uint16_t_u_u((((((**g_460) = (safe_rshift_func_uint16_t_u_u((((*l_1117) = &g_831) != l_1119), 6))) >= (p_32.f1 < 0x5EB5D4ECL)) <= ((***g_827) & (((safe_rshift_func_int8_t_s_s((*l_1020), 1)) && (safe_sub_func_int32_t_s_s(((*g_983) != (*g_983)), p_32.f7))) >= p_32.f1))) | (*l_985)), p_32.f6)) ^ l_1126) != g_185[5].f1));
                (*g_866) = 0x0DA3E64CL;
            }
            if (((safe_rshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((*g_345), (*l_985))) <= (p_32.f7 >= ((*g_983) < ((p_32.f2 = ((*l_1133) = (safe_sub_func_int32_t_s_s((((*g_983) && (*g_461)) && 1UL), ((g_183.f0 && 65527UL) ^ l_1126))))) >= (*g_504))))), 6)) | g_152[3][1]))
            {
                (*g_968) = (*g_866);
                if ((*g_866))
                    continue;
                for (g_137 = 3; (g_137 >= 0); g_137 -= 1)
                {
                    int i, j;
                    return g_152[g_137][(g_137 + 1)];
                }
                if ((*g_968))
                    continue;
            }
            else
            {
                struct S1 l_1134 = {37235,-4292};
                l_1134 = g_14;
            }
            (*l_985) = (safe_add_func_uint32_t_u_u(((~(((*p_33) | ((void*)0 == l_1137)) ^ (*g_345))) < 1L), l_1126));
        }
lbl_1175:
        if ((*g_968))
        {
            int l_1151 = 0x136519B1L;
            int l_1156 = 0x2AF5B544L;
            unsigned char *l_1164 = &g_984;
            for (p_32.f7 = 0; (p_32.f7 <= 1); p_32.f7 += 1)
            {
                unsigned short *l_1144 = &g_1096[0][3].f2;
                int i;
                (**l_986) = ((**g_503) & p_32.f8);
                l_1156 = (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((*l_1019) = l_1151), ((*p_33) & (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((*g_983), ((l_992 == (**g_459)) >= (**g_503)))) <= (*p_33)), (**g_344)))))), (((*g_983) > (**g_460)) < p_32.f5)));
                if (p_31)
                    break;
                for (g_984 = 0; (g_984 <= 3); g_984 += 1)
                {
                    struct S1 l_1162 = {38372,-1854};
                    for (g_134 = 0; (g_134 <= 3); g_134 += 1)
                    {
                        int **l_1161 = &g_968;
                        unsigned char **l_1163 = &g_983;
                        int i, j;
                    }
                }
            }
        }
        else
        {
            struct S1 l_1166 = {11308,2195};
            l_1166 = l_1165;
        }
        for (p_32.f8 = 0; (p_32.f8 <= 55); p_32.f8++)
        {
            unsigned l_1189 = 0x85259DC9L;
            for (p_32.f1 = 0; (p_32.f1 != 12); p_32.f1++)
            {
                int *l_1176 = (void*)0;
                for (g_55 = (-23); (g_55 == 21); g_55 = safe_add_func_int8_t_s_s(g_55, 1))
                {
                    struct S1 l_1173 = {6391,12899};
                    struct S1 *l_1174 = &g_547;
                    (*l_1174) = func_38(l_1173, &g_984);
                    if (p_32.f0)
                        goto lbl_1175;
                }
                l_1176 = (*l_986);

                ;
            }
            for (g_66 = 0; (g_66 != (-30)); --g_66)
            {
                struct S4 *l_1187 = &g_793;
                for (g_255.f1 = (-3); (g_255.f1 < 3); ++g_255.f1)
                {
                    int *l_1182 = &g_76;
                    p_32.f5 = ((**l_986) |= l_1181);
                    (*l_986) = l_1182;
                    for (l_1145.f1 = 22; (l_1145.f1 < (-18)); l_1145.f1 = safe_sub_func_int8_t_s_s(l_1145.f1, 8))
                    {
                        struct S4 **l_1188 = &l_1187;
                        int **l_1190 = &l_985;
                    }
                }
            }
        }
    }
    else
    {
        unsigned char l_1210 = 0x9AL;
        unsigned char *l_1211 = &g_134;
        short *l_1212 = &g_57[5];
        (*l_985) = (safe_mul_func_uint8_t_u_u((*g_983), p_32.f5));
    }
    g_268 = &l_1165;

    ;
    return (**g_460);


}







static unsigned char * func_34(unsigned char * p_35, struct S2 p_36)
{
    struct S1 *l_702 = &g_547;
    int l_712 = 1L;
    char **l_756 = &g_461;
    struct S4 *l_777 = &g_778;
    unsigned short *l_780 = &g_305[1][2].f2;
    unsigned short **l_779 = &l_780;
    int *l_788 = &l_712;
    unsigned l_799 = 0x74B9A71CL;
    int l_801 = 0x4595D0F3L;
    unsigned short l_803[1][3];
    int ***l_830 = (void*)0;
    unsigned char *l_898 = (void*)0;
    struct S0 l_928 = {-1L,0xD8L,0x16C3L};
    struct S3 l_929 = {1,5,0,13};
    unsigned l_930 = 0UL;
    int *l_933 = &l_801;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_803[i][j] = 0x0D9DL;
    }
    (*l_702) = func_38(g_14, func_41(g_13));


    ;

    ;

    ;
    ;
    ;

    for (g_307.f0 = 1; (g_307.f0 <= 6); g_307.f0 += 1)
    {
        short l_709 = 0xA42BL;
        char l_720[10] = {0x5FL,0xE0L,0xE0L,0x5FL,0xE0L,0xE0L,0x5FL,0xE0L,0xE0L,0x5FL};
        unsigned ***l_760 = &g_344;
        struct S1 l_771[8] = {{10795,21299},{30488,-4857},{10795,21299},{10795,21299},{30488,-4857},{10795,21299},{10795,21299},{30488,-4857}};
        int *l_775 = &l_712;
        const struct S4 *l_794 = &g_795[0][2][2];
        struct S0 * const *l_802 = (void*)0;
        struct S0 **l_820 = &g_298;
        const unsigned short **l_824 = (void*)0;
        int *l_965 = &g_96;
        int i;
        if ((safe_lshift_func_int8_t_s_u(1L, 6)))
        {
            struct S0 *l_713 = &g_255;
            struct S4 *l_716[7] = {&g_717,&g_717,&g_717,&g_717,&g_717,&g_717,&g_717};
            unsigned *l_750 = &g_152[0][4];
            int *l_751 = &g_76;
            unsigned char *l_752 = &g_134;
            short **l_757 = (void*)0;
            struct S1 l_770 = {26406,2981};
            int i;
            if (((safe_mul_func_uint16_t_u_u(g_57[g_307.f0], (((g_183.f3 || (~(p_36.f3 ^ (safe_lshift_func_int16_t_s_u((l_709 = (**g_503)), 3))))) == p_36.f5) && (safe_add_func_int16_t_s_s(l_712, 6UL))))) | p_36.f7))
            {
                int *l_714 = &g_76;
                for (g_66 = 0; (g_66 <= 2); g_66 += 1)
                {
                    struct S4 *l_715 = (void*)0;
                    if (((void*)0 != l_713))
                    {
                        g_202 = l_714;

                        ;
                        g_75 = (void*)0;

                        ;
                    }
                    else
                    {
                        l_716[1] = l_715;
                        l_712 = ((*l_714) = ((*l_714) || 0xB0L));
                    }
                    (*l_714) &= (0xE8F6285CL >= (**g_344));
                    for (p_36.f3 = 0; (p_36.f3 <= 2); p_36.f3 += 1)
                    {
                        (*l_714) = 0x9C56BE35L;
                    }
                }


                if (p_36.f1)
                    break;
            }
            else
            {
                const struct S1 *l_721 = &g_547;
                int *l_723[3][3][8] = {{{&g_96,(void*)0,&g_96,(void*)0,&g_96,&l_712,&g_96,&g_96},{&g_96,&l_712,&l_712,(void*)0,(void*)0,&g_96,(void*)0,(void*)0},{&l_712,&g_76,&l_712,&l_712,&g_96,&l_712,&g_96,&l_712}},{{(void*)0,&g_76,&g_96,&g_96,(void*)0,&g_96,&g_96,&g_76},{(void*)0,&l_712,&g_96,&l_712,&g_96,&l_712,&l_712,&g_76},{&l_712,(void*)0,(void*)0,&l_712,&g_96,&g_96,&g_96,&l_712}},{{&g_96,&l_712,(void*)0,&g_76,&g_96,&g_96,(void*)0,&g_96},{&g_96,&g_96,(void*)0,&g_96,&g_96,&g_76,(void*)0,&l_712},{&g_96,&l_712,&g_96,&g_96,&g_96,&l_712,&g_96,&g_96}}};
                int i, j, k;
                l_720[3] ^= ((p_36.f5 && l_712) == 0UL);
                if (p_36.f5)
                {
                    struct S4 **l_722 = &l_716[1];
                    l_721 = &g_14;

                    ;
                    (*l_722) = &g_717;
                }
                else
                {
                    return &g_53;


                }

                ;
                p_36.f5 |= p_36.f0;
            }


            if (p_36.f2)
            {
                char **l_755 = &g_461;
                const int l_758 = 0x978A6306L;
                int *l_759[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_759[i] = (void*)0;
                p_36.f5 |= (0x79F19AA6L > (safe_lshift_func_int8_t_s_u((((l_712 < (l_757 != (void*)0)) >= p_36.f4) & l_758), (*l_751))));
                p_36.f5 &= g_66;
                p_36.f5 = ((l_760 != l_760) && ((((*l_751) = (((*g_344) == (void*)0) && l_720[4])) <= l_720[3]) > (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(p_36.f8, 5)), 2))));
            }
            else
            {
                unsigned short l_765 = 3UL;
                short *l_766 = &g_57[g_307.f0];
                unsigned short ***l_781 = &l_779;
                struct S4 *l_790 = &g_778;
                for (l_712 = 9; (l_712 >= 0); l_712 -= 1)
                {
                }
                (*l_751) |= l_765;
                (*l_781) = l_779;
                if (p_36.f0)
                {
                    int **l_789 = &l_775;
                    for (p_36.f2 = 4; (p_36.f2 <= 5); p_36.f2++)
                    {
                        (*l_751) &= p_36.f1;
                        (*l_751) = ((p_36.f5 = ((*l_775) = (l_765 & (safe_sub_func_int16_t_s_s((p_36.f4 || ((*l_752) &= (safe_rshift_func_uint16_t_u_u(g_183.f5, p_36.f8)))), 0xC6FEL))))) || (*g_345));
                    }
                    if (p_36.f7)
                        continue;
                    (*l_789) = l_788;
                }
                else
                {
                    struct S4 *l_792 = &g_793;
                    if (l_765)
                    {
                        struct S4 **l_791[6][7] = {{(void*)0,(void*)0,&l_716[6],&l_716[1],&l_716[6],(void*)0,(void*)0},{&l_716[1],(void*)0,&l_716[6],&l_716[1],&l_716[1],&g_184,&l_716[1]},{(void*)0,(void*)0,&g_184,&l_716[1],&l_716[1],&l_716[1],&l_716[1]},{&g_184,&l_790,&l_716[6],&l_790,&g_184,(void*)0,&g_184},{&g_184,&l_790,&l_716[6],(void*)0,&l_716[1],&g_184,&l_716[1]},{&l_790,(void*)0,&l_716[1],&l_716[1],&l_716[6],&l_716[6],&l_716[1]}};
                        int i, j;
                        l_792 = l_790;

                        ;
                        g_202 = &g_76;

                        ;
                        l_794 = (void*)0;

                        ;
                        g_96 = ((*l_751) = 0L);
                    }
                    else
                    {
                        (*l_788) &= p_36.f0;
                        if (p_36.f8)
                            continue;
                    }

                    ;
                    ;
                }

                ;
            }

            ;
        }
        else
        {
            char l_834[9][6] = {{0L,0x5AL,0L,0x64L,2L,2L},{(-1L),0L,0L,(-1L),0x5AL,0L},{0L,(-1L),2L,(-1L),0L,0x64L},{(-1L),0L,0x64L,0x64L,0L,(-1L)},{(-1L),0x1DL,2L,0L,2L,0x1DL},{2L,(-1L),0L,0x64L,0x64L,0L},{2L,2L,0x64L,0L,0x5AL,0L},{(-1L),2L,(-1L),0L,0x64L,0x64L},{0x1DL,(-1L),(-1L),0x1DL,2L,0L}};
            int *l_848 = &g_96;
            struct S4 l_871 = {-108,-294,58,2,2008,-16441,-500,-71};
            int l_873 = (-9L);
            const short l_874[1][3] = {{(-7L),(-7L),(-7L)}};
            short *l_886[7][7][4] = {{{&l_709,&g_55,&g_66,&g_57[0]},{&g_66,&g_57[2],(void*)0,&g_66},{&g_66,&g_66,&g_66,&g_66},{&l_709,&g_66,&g_57[0],&g_66},{&g_66,&g_57[2],&l_709,(void*)0},{&g_55,&l_709,&g_66,(void*)0},{(void*)0,&g_57[2],(void*)0,&g_66}},{{&g_66,&g_66,&g_57[0],&g_66},{&g_55,&g_66,&g_57[0],&g_66},{&g_66,&g_57[2],&g_57[0],&g_57[0]},{&g_55,&g_55,&g_57[0],(void*)0},{&g_66,&g_66,(void*)0,&g_66},{(void*)0,&g_66,&g_66,(void*)0},{&g_55,&g_66,&l_709,&g_66}},{{&g_66,&g_66,&g_57[0],(void*)0},{&l_709,&g_55,&g_66,(void*)0},{&g_66,&g_57[0],&g_66,&l_709},{&g_66,&g_66,&g_66,&g_66},{&g_55,&l_709,(void*)0,&g_66},{&l_709,&g_57[0],&g_66,(void*)0},{&g_66,&g_55,&g_66,(void*)0}},{{&g_57[0],&g_57[0],&g_57[0],&g_66},{&g_66,&l_709,&g_55,&g_66},{&g_66,&g_66,(void*)0,&l_709},{&g_66,&g_57[0],(void*)0,(void*)0},{&g_66,&g_66,&g_55,(void*)0},{&g_66,&l_709,&g_57[0],&l_709},{&g_57[0],&l_709,&g_66,&g_57[0]}},{{&g_66,&l_709,&g_66,&l_709},{&l_709,&l_709,(void*)0,(void*)0},{&g_55,&g_66,&g_66,(void*)0},{&g_66,&g_57[0],&g_66,&l_709},{&g_66,&g_66,&g_66,&g_66},{&g_55,&l_709,(void*)0,&g_66},{&l_709,&g_57[0],&g_66,(void*)0}},{{&g_66,&g_55,&g_66,(void*)0},{&g_57[0],&g_57[0],&g_57[0],&g_66},{&g_66,&l_709,&g_55,&g_66},{&g_66,&g_66,(void*)0,&l_709},{&g_66,&g_57[0],&g_55,&g_55},{&g_66,&g_66,&g_66,&g_66},{&g_57[0],&g_66,&l_709,(void*)0}},{{&l_709,(void*)0,(void*)0,&l_709},{&g_66,(void*)0,&g_57[2],(void*)0},{(void*)0,&g_66,&g_55,&g_66},{&g_57[0],&g_66,(void*)0,&g_55},{&g_57[0],&l_709,(void*)0,(void*)0},{&g_57[0],(void*)0,(void*)0,&g_57[0]},{&g_57[0],(void*)0,&g_55,(void*)0}}};
            int * const *l_893 = &g_866;
            int * const **l_892 = &l_893;
            int * const ***l_891 = &l_892;
            int i, j, k;
            for (g_255.f2 = 0; (g_255.f2 <= 2); g_255.f2 += 1)
            {
                char l_796[1];
                unsigned char *l_797 = (void*)0;
                unsigned char *l_798[3];
                int *l_800[4][7][6] = {{{&l_712,&g_76,(void*)0,&g_76,&g_76,&g_76},{&l_712,&g_96,&g_76,&g_96,&g_76,&l_712},{&l_712,(void*)0,&g_96,&g_76,&l_712,&g_76},{&l_712,&g_76,&g_96,&g_96,&g_76,&l_712},{&g_96,(void*)0,&g_76,&l_712,&g_76,(void*)0},{&g_96,&l_712,&g_96,&g_96,&g_96,&g_76},{&l_712,&g_76,&g_76,&g_96,&g_76,&g_96}},{{&g_76,&g_76,(void*)0,&g_76,&g_96,&l_712},{&g_96,&l_712,&g_96,&g_76,&g_76,&g_96},{&g_96,(void*)0,&l_712,&g_76,&g_76,&g_96},{&g_76,&g_76,&g_76,&g_76,&g_96,&g_76},{&l_712,&g_76,&g_96,&g_76,&l_712,&g_76},{&g_76,&l_712,&g_96,&l_712,&g_76,&g_76},{&g_76,&l_712,&g_76,(void*)0,&g_76,&g_96}},{{(void*)0,&g_76,&g_96,&g_76,&g_76,&g_76},{(void*)0,&g_76,(void*)0,&g_76,(void*)0,&l_712},{(void*)0,&g_76,&g_96,&g_96,&g_96,&l_712},{&g_76,&g_96,&g_76,&g_96,&l_712,&g_76},{(void*)0,&g_96,&g_76,&g_76,&g_96,&g_96},{(void*)0,&l_712,&l_712,&g_76,&g_76,&g_76},{(void*)0,&g_96,&g_96,(void*)0,&g_96,&g_96}},{{&g_76,&g_76,&g_96,&l_712,(void*)0,(void*)0},{&g_76,&g_96,(void*)0,&g_76,(void*)0,&g_76},{&l_712,&g_76,&g_76,&g_76,&g_96,&g_96},{&g_76,&g_96,&l_712,&g_76,&g_76,&g_76},{&g_96,&l_712,&l_712,(void*)0,(void*)0,&l_712},{(void*)0,&g_76,&g_76,&g_76,&g_96,(void*)0},{(void*)0,&g_76,&l_712,&g_76,&g_76,(void*)0}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_796[i] = 0xAAL;
                for (i = 0; i < 3; i++)
                    l_798[i] = &g_53;
                if (l_796[0])
                    break;
                l_801 &= ((l_799 = p_36.f1) & (*l_775));
                for (l_712 = 2; (l_712 >= 0); l_712 -= 1)
                {
                    g_185[5].f1 = p_36.f1;
                    if (p_36.f5)
                        break;
                }
                for (g_307.f8 = 0; (g_307.f8 <= 2); g_307.f8 += 1)
                {
                    (*l_788) = (((void*)0 == l_802) == 1UL);
                }
            }
            (*l_775) = l_803[0][1];
            for (g_307.f8 = 0; (g_307.f8 == 27); g_307.f8 = safe_add_func_uint16_t_u_u(g_307.f8, 5))
            {
                struct S0 ***l_821 = &l_820;
                int l_841 = 0xFE911923L;
                short *l_872 = &g_66;
                int *l_875 = &l_712;
            }
        }

        ;
        if ((*l_775))
        {
            int *l_907[2][7] = {{&l_712,&l_712,&l_712,&l_712,&l_712,&l_712,&l_712},{&l_712,(void*)0,(void*)0,&l_712,(void*)0,(void*)0,&l_712}};
            struct S1 *l_913 = (void*)0;
            int i, j;
            p_36.f5 = ((void*)0 == (**l_760));
            for (g_137 = (-11); (g_137 == (-7)); g_137++)
            {
                int *l_901 = &g_96;
                int **l_902 = &l_901;
                (*g_866) = (((*l_775) = p_36.f6) | 0xEB433E16L);
                (*l_902) = l_901;
                for (g_66 = 0; (g_66 == 14); g_66 = safe_add_func_uint32_t_u_u(g_66, 8))
                {
                    unsigned l_912[9][4] = {{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}};
                    struct S1 **l_914 = &l_913;
                    int i, j;
                    for (p_36.f0 = 2; (p_36.f0 >= 0); p_36.f0 -= 1)
                    {
                        return p_35;


                    }
                    for (l_712 = 4; (l_712 == (-7)); l_712 = safe_sub_func_int32_t_s_s(l_712, 6))
                    {
                        l_907[0][6] = (void*)0;
                        (*g_866) = (safe_sub_func_uint32_t_u_u(p_36.f3, ((g_795[0][2][2].f1 & (safe_rshift_func_uint8_t_u_s(l_912[2][3], (p_36.f2 || (*g_357))))) == g_717.f0)));
                        return &g_134;


                    }
                    (*l_775) &= (p_36.f2 && (**g_344));
                    (*l_914) = l_913;
                }
            }
        }
        else
        {
            unsigned l_925 = 4294967289UL;
            int *l_932 = &l_801;
            l_771[2].f1 = (1UL == ((*l_775) = (0xF00776DDL <= (((((**l_756) = (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u((p_36.f8 & l_930), 0)) == g_931), p_36.f1)), 2))) <= g_255.f2) | 0x830BL) != 0x5711L))));
            l_933 = l_932;
        }
    }


    ;
    return l_898;


}







static struct S1 func_38(struct S1 p_39, unsigned char * p_40)
{
    int l_699[5][6][8] = {{{0xA7D805C8L,1L,0xA7D805C8L,0x45E641DDL,(-6L),0xA7D805C8L,0x6CC260BAL,0xC14681D6L},{8L,0x45E641DDL,9L,(-6L),7L,7L,(-6L),9L},{8L,8L,6L,(-7L),(-6L),1L,8L,(-6L)},{0xA7D805C8L,(-6L),0x45E641DDL,0xA7D805C8L,1L,0xA7D805C8L,1L,7L},{7L,0xBD10C374L,0xA9C52FE0L,0xA7D805C8L,0xBD10C374L,1L,9L,0xA9C52FE0L},{0x45E641DDL,9L,(-6L),7L,7L,(-6L),9L,0x45E641DDL}},{{0L,7L,0xA9C52FE0L,1L,0x6CC260BAL,0L,1L,0xA7D805C8L},{0x6CC260BAL,0L,1L,0xA7D805C8L,1L,0L,0x6CC260BAL,1L},{0x45E641DDL,7L,8L,0x45E641DDL,9L,(-6L),7L,7L},{1L,9L,0xA9C52FE0L,0xA9C52FE0L,9L,1L,0xBD10C374L,0xA7D805C8L},{0x45E641DDL,0xBD10C374L,6L,7L,1L,6L,9L,6L},{0x6CC260BAL,7L,0xC14681D6L,7L,0x6CC260BAL,1L,7L,0xA7D805C8L}},{{0L,0x6CC260BAL,1L,0xA9C52FE0L,7L,0L,0L,7L},{0x45E641DDL,1L,1L,0x45E641DDL,0xBD10C374L,6L,7L,1L},{7L,9L,0xC14681D6L,0xA7D805C8L,9L,8L,9L,0xA7D805C8L},{6L,9L,6L,1L,7L,0xBD10C374L,1L,9L},{0x45E641DDL,0xA9C52FE0L,0L,0xA7D805C8L,6L,6L,0xA7D805C8L,0L},{0x45E641DDL,0x45E641DDL,0xC14681D6L,0x6CC260BAL,0xA7D805C8L,(-6L),0x45E641DDL,0xA7D805C8L}},{{0xBD10C374L,0xA7D805C8L,0xA9C52FE0L,0xBD10C374L,7L,0xBD10C374L,0xA9C52FE0L,0xA7D805C8L},{0xA7D805C8L,1L,0L,0x6CC260BAL,1L,0xA9C52FE0L,7L,0L},{9L,7L,(-7L),0xA7D805C8L,0xA7D805C8L,(-7L),7L,9L},{6L,0xA7D805C8L,0L,0xA9C52FE0L,0x45E641DDL,6L,0xA9C52FE0L,0x6CC260BAL},{0x45E641DDL,6L,0xA9C52FE0L,0x6CC260BAL,0xA9C52FE0L,6L,0x45E641DDL,0xA9C52FE0L},{9L,0xA7D805C8L,0xC14681D6L,9L,7L,(-7L),0xA7D805C8L,0xA7D805C8L}},{{0xA9C52FE0L,7L,0L,0L,7L,0xA9C52FE0L,1L,0x6CC260BAL},{9L,1L,0xBD10C374L,0xA7D805C8L,0xA9C52FE0L,0xBD10C374L,7L,0xBD10C374L},{0x45E641DDL,0xA7D805C8L,1L,0xA7D805C8L,0x45E641DDL,(-6L),0xA7D805C8L,0x6CC260BAL},{6L,0x45E641DDL,0xA9C52FE0L,0L,0xA7D805C8L,8L,8L,6L},{0xA9C52FE0L,(-6L),(-6L),0xA9C52FE0L,1L,0xC14681D6L,6L,(-6L)},{6L,0L,9L,0xBD10C374L,0L,0x45E641DDL,0L,0xBD10C374L}}};
    int *l_700 = &g_96;
    struct S1 l_701 = {23803,5088};
    int i, j, k;
    (*l_700) ^= l_699[2][3][3];
    return l_701;
}







static unsigned char * func_41(unsigned char p_42)
{
    struct S0 l_48 = {0x81L,-1L,0x1940L};
    char ***l_527 = &g_126;
    char ****l_526[2][9] = {{&l_527,(void*)0,&l_527,&l_527,(void*)0,&l_527,&l_527,(void*)0,&l_527},{&l_527,(void*)0,&l_527,&l_527,(void*)0,&l_527,&l_527,(void*)0,&l_527}};
    int *l_528 = &g_76;
    struct S4 *l_559 = (void*)0;
    short *l_611 = &g_57[0];
    unsigned char *l_612 = &g_134;
    char l_618 = 1L;
    unsigned char *l_698 = &g_53;
    int i, j;
    if (func_43(g_13, g_14.f1, l_48, g_49))
    {
        char ***l_525 = &g_126;
        char ****l_524 = &l_525;
        int l_533 = 0xB83D582AL;
        struct S2 **l_542 = &g_306;
        int *l_554 = &g_76;
        short l_572 = 0xE705L;
        if ((l_524 == l_526[1][5]))
        {
            int **l_529 = (void*)0;
            int **l_530 = &l_528;
            (*l_530) = l_528;
            (*l_528) |= (safe_rshift_func_int8_t_s_s(l_533, 1));
            for (g_96 = (-15); (g_96 < 10); g_96 = safe_add_func_uint16_t_u_u(g_96, 8))
            {
                for (g_307.f3 = 0; (g_307.f3 < 36); g_307.f3 = safe_add_func_int32_t_s_s(g_307.f3, 2))
                {
                    short l_538 = (-8L);
                    l_538 = ((**l_530) = g_183.f4);
                }
            }
        }
        else
        {
            int **l_539 = &l_528;
            unsigned char *l_571 = (void*)0;
            short l_579 = 0x4306L;
            struct S1 *l_603 = (void*)0;
lbl_608:
            (*l_539) = &g_76;

            ;
            for (g_55 = 3; (g_55 >= 0); g_55 -= 1)
            {
                struct S1 *l_546 = &g_547;
                struct S0 l_550[2] = {{0xE6L,0xD1L,1UL},{0xE6L,0xD1L,1UL}};
                struct S4 **l_555 = (void*)0;
                struct S4 **l_556 = &g_184;
                const int *l_605 = &g_96;
                int i;
                for (g_53 = 0; (g_53 <= 3); g_53 += 1)
                {
                    struct S2 **l_540[1];
                    struct S2 ***l_541 = &l_540[0];
                    int l_545 = 0x3D58CA9CL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_540[i] = &g_306;
                    if ((0xE5F1L != (((*l_541) = l_540[0]) != (l_542 = &g_306))))
                    {
                        (*l_539) = (*l_539);
                    }
                    else
                    {
                        struct S1 **l_544 = (void*)0;
                        struct S1 ***l_543 = &l_544;
                        struct S1 **l_548 = &l_546;
                        (*l_543) = &g_268;

                        ;
                        l_545 = p_42;
                        (**l_539) = ((*l_544) == ((*l_548) = l_546));
                    }
                    (*l_539) = &l_533;

                    ;
                    for (g_66 = 3; (g_66 >= 0); g_66 -= 1)
                    {
                        struct S0 l_549 = {0L,0x6EL,0xEA0EL};
                        int i;
                        l_550[1] = l_549;
                        if (g_57[(g_66 + 1)])
                            continue;
                    }
                    for (g_106 = 0; (g_106 <= 6); g_106 += 1)
                    {
                        int l_553[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_553[i] = 0x1D0EA406L;
                        (**l_539) = (((*g_461) = (safe_rshift_func_int16_t_s_u((-1L), 2))) < (l_553[0] |= (*l_528)));
                        (*l_539) = &l_533;

                        ;
                        (*l_539) = l_554;

                        ;
                        if (l_550[1].f2)
                            break;
                    }

                    ;
                }
                (*l_556) = &g_185[5];

                ;
                for (g_307.f2 = 0; (g_307.f2 <= 3); g_307.f2 += 1)
                {
                    struct S4 *l_560 = &g_185[5];
                    int l_569 = 0x3AC1D9B3L;
                    (*l_554) ^= p_42;
                    if (l_550[1].f0)
                        break;
                    if ((((((l_550[1].f0 >= (safe_rshift_func_int16_t_s_s((((l_559 != l_560) & (safe_sub_func_uint8_t_u_u(1UL, ((l_569 &= (safe_add_func_uint8_t_u_u((0xF5817B00L >= (safe_lshift_func_int16_t_s_s(((0L < ((safe_mul_func_int8_t_s_s(((*g_357) && (g_183.f1 <= g_49.f2)), 0xCFL)) > g_305[1][2].f3)) ^ p_42), 8))), g_66))) < 0x69L)))) > 8UL), (*g_504)))) >= 8UL) ^ l_550[1].f0) <= p_42) <= p_42))
                    {
                        g_202 = (void*)0;

                        ;
                    }
                    else
                    {
                        short l_570 = 0x91CAL;
                        (**l_539) &= l_570;
                    }
                    return l_571;



                }
                if (l_572)
                {
                    unsigned l_575[2][3][9] = {{{0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L},{4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL},{0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L}},{{4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL},{0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L,0xB4690A09L},{4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL}}};
                    int i, j, k;
                    for (g_255.f2 = 0; (g_255.f2 <= 1); g_255.f2 += 1)
                    {
                        (*l_554) = (g_305[1][2].f2 && ((void*)0 != &g_75));
                        (*l_528) &= l_575[0][0][0];
                        (*l_528) ^= (safe_lshift_func_int16_t_s_u((**g_503), p_42));
                    }
                    (*l_539) = &l_533;

                    ;
                    (*l_539) = &l_533;
                }
                else
                {
                    char l_578 = 7L;
                    int *l_607 = &l_533;
                    (*l_539) = &g_96;

                    ;
                    if (l_578)
                    {
                        (*l_539) = &g_76;

                        ;
                    }
                    else
                    {
                        unsigned char l_586[6];
                        int *l_601 = (void*)0;
                        int *l_602[3][9][3];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_586[i] = 0xDCL;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 9; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_602[i][j][k] = &l_533;
                            }
                        }
                        if (p_42)
                            break;
                        g_183.f3 &= (((l_579 > (safe_rshift_func_uint16_t_u_u((*l_554), 1))) > ((*l_528) & (safe_lshift_func_int16_t_s_s(((**g_356) = (**l_539)), ((safe_sub_func_uint8_t_u_u(l_586[5], (safe_add_func_uint16_t_u_u((g_307.f2 &= (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_42, (safe_lshift_func_int16_t_s_u((*l_528), 2)))), p_42)), (**l_539))), (-1L))), (*l_554)))), (-3L))))) > p_42))))) != l_578);
                        (**l_539) = 0x9C5DEE8BL;
                    }

                    ;
                    if ((l_603 != &g_547))
                    {
                        unsigned char *l_604 = (void*)0;
                        const int **l_606[1][4][5] = {{{&g_75,&g_75,&l_605,&l_605,&g_75},{&l_605,&l_605,&l_605,&l_605,&g_75},{&l_605,&l_605,&l_605,&l_605,&l_605},{&g_75,&l_605,&l_605,&l_605,&l_605}}};
                        int i, j, k;
                        (*l_528) &= (l_604 != &p_42);
                        g_75 = l_605;

                        ;
                    }
                    else
                    {
                        (*l_528) &= p_42;
                        g_75 = l_607;

                        ;
                    }

                    ;
                }
                for (g_53 = 0; (g_53 <= 3); g_53 += 1)
                {
                    for (g_307.f6 = 0; (g_307.f6 <= 3); g_307.f6 += 1)
                    {
                        (*l_554) = (*l_528);
                        if (g_49.f1)
                            goto lbl_608;
                    }
                }
            }

            ;
        }


        ;
        for (g_66 = (-11); (g_66 <= 1); g_66 = safe_add_func_uint16_t_u_u(g_66, 1))
        {
            (*l_554) = (255UL | (*l_528));
            return &g_53;



        }
        (*l_528) |= p_42;
        return l_612;



    }
    else
    {
        unsigned l_615 = 4294967286UL;
        unsigned l_619 = 8UL;
        unsigned l_635 = 4UL;
        struct S0 *l_651 = &l_48;
        struct S2 *l_661 = (void*)0;
        int *l_663 = (void*)0;
        int l_691[6] = {1L,1L,0x07B3C260L,1L,1L,0x07B3C260L};
        int i;
        if ((!(((*l_528) = ((*g_504) == (safe_mod_func_int8_t_s_s(l_615, (safe_rshift_func_uint16_t_u_u(l_618, (((**g_460) = (*l_528)) ^ l_615))))))) <= l_619)))
        {
            int **l_621[8][6][5] = {{{&l_528,&g_202,&g_202,&l_528,&g_202},{&l_528,(void*)0,&g_202,(void*)0,&g_202},{(void*)0,(void*)0,&g_202,&g_202,&g_202},{&g_202,&g_202,&g_202,&l_528,(void*)0},{&g_202,(void*)0,&g_202,&l_528,&l_528},{&l_528,&g_202,&l_528,&g_202,&l_528}},{{&l_528,(void*)0,&l_528,&g_202,&g_202},{(void*)0,&g_202,&l_528,(void*)0,&l_528},{&g_202,(void*)0,&g_202,&g_202,&l_528},{&g_202,(void*)0,&l_528,(void*)0,&g_202},{(void*)0,&g_202,&g_202,&l_528,&g_202},{&l_528,(void*)0,(void*)0,&l_528,(void*)0}},{{&l_528,(void*)0,&g_202,&g_202,&g_202},{&g_202,&l_528,&g_202,&l_528,&g_202},{&g_202,(void*)0,&l_528,&g_202,&g_202},{&l_528,&g_202,(void*)0,&g_202,&g_202},{&g_202,&l_528,&g_202,&g_202,&g_202},{&l_528,&g_202,&g_202,&g_202,&l_528}},{{&l_528,(void*)0,&g_202,&l_528,&g_202},{&l_528,&l_528,&g_202,&l_528,&g_202},{&l_528,&g_202,&g_202,&l_528,&l_528},{&l_528,&g_202,(void*)0,&g_202,(void*)0},{&l_528,&g_202,&l_528,&l_528,&g_202},{&g_202,&g_202,&l_528,&g_202,(void*)0}},{{&l_528,&l_528,&g_202,(void*)0,&l_528},{(void*)0,(void*)0,&l_528,&g_202,&g_202},{&l_528,&g_202,&l_528,&g_202,&g_202},{&g_202,&l_528,&g_202,(void*)0,&g_202},{&l_528,&g_202,&g_202,&g_202,&g_202},{&l_528,(void*)0,(void*)0,&l_528,&g_202}},{{&l_528,&l_528,&g_202,&g_202,&g_202},{&l_528,&l_528,&g_202,&g_202,&l_528},{&l_528,&g_202,&l_528,&g_202,(void*)0},{&l_528,&g_202,&g_202,&l_528,(void*)0},{(void*)0,&g_202,&g_202,&g_202,&l_528},{&g_202,&g_202,&g_202,&g_202,&g_202}},{{&l_528,&l_528,&g_202,(void*)0,&g_202},{&g_202,&g_202,&l_528,(void*)0,(void*)0},{(void*)0,&l_528,(void*)0,&g_202,&l_528},{&l_528,&g_202,&l_528,(void*)0,&l_528},{&g_202,&l_528,&l_528,&g_202,(void*)0},{&g_202,&g_202,&g_202,&l_528,&g_202}},{{&g_202,&g_202,&g_202,&g_202,&g_202},{&g_202,(void*)0,&l_528,&l_528,&l_528},{&l_528,&g_202,&g_202,&l_528,&g_202},{(void*)0,&g_202,&l_528,(void*)0,&l_528},{&g_202,&l_528,&g_202,&l_528,&g_202},{&l_528,&l_528,&g_202,(void*)0,&g_202}}};
            int ***l_620 = &l_621[4][3][2];
            unsigned short *l_628 = &g_305[1][2].f2;
            int i, j, k;
            (*l_620) = (void*)0;
            if ((safe_mul_func_uint8_t_u_u(g_307.f0, (((8L & ((safe_rshift_func_uint8_t_u_u((((*l_611) = (p_42 != ((*l_612) = (safe_mod_func_uint16_t_u_u(((*l_628) = 0xA2A8L), (safe_add_func_int8_t_s_s((((**g_344) <= (+(*l_528))) && p_42), p_42))))))) && (**g_356)), 6)) | 0x4C70FE7FL)) < p_42) | p_42))))
            {
                int l_658 = 0x6A2B71A5L;
                (*l_528) ^= p_42;
                if ((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_s(p_42, 11)) ^ (((*l_628) &= (((*l_528) = (((0L != ((*g_344) == (*g_344))) >= l_635) & ((*g_357) = l_619))) < (**g_344))) < ((safe_rshift_func_int16_t_s_u(0L, (safe_add_func_uint8_t_u_u(g_317[0][0].f2, p_42)))) | (*g_345)))) == (*g_345)), 11)))
                {
                    int *l_642 = &g_96;
                    for (g_307.f8 = (-17); (g_307.f8 == 17); g_307.f8 = safe_add_func_int8_t_s_s(g_307.f8, 2))
                    {
                        unsigned **l_647 = &g_345;
                        unsigned ***l_648 = &l_647;
                        (*l_528) = 0xEEF39D40L;
                        g_202 = l_642;

                        ;
                        (*g_202) = ((((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u((p_42 >= ((g_137 & (**g_503)) & (((**g_344) | ((((*l_648) = l_647) == &g_345) != (*g_202))) | p_42))), p_42)) < p_42) ^ 0xF2D9L), (*l_528))) != 255UL) || p_42) > 0xBF6CA24FL);
                        if (p_42)
                            break;
                    }
                }
                else
                {
                    unsigned short l_659 = 65535UL;
                    for (l_48.f0 = 16; (l_48.f0 <= (-16)); --l_48.f0)
                    {
                        struct S0 **l_652 = (void*)0;
                        struct S0 **l_653 = &l_651;
                        (*l_653) = l_651;
                        (*l_528) = (safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_42, (p_42 != 0L))), (*g_461)));
                        if ((*l_528))
                            continue;
                        l_658 ^= p_42;
                    }
                    for (l_48.f2 = 0; (l_48.f2 <= 4); l_48.f2 += 1)
                    {
                        l_659 = (-1L);
                        g_75 = &g_76;

                        ;
                        g_75 = &g_76;
                    }
                }
                (*l_651) = (*l_651);
            }
            else
            {
                int *l_660 = &g_76;
                for (l_48.f1 = 1; (l_48.f1 >= 0); l_48.f1 -= 1)
                {
                    l_660 = l_528;
                    return &g_53;


                }
            }
            l_661 = &g_305[2][2];

            ;
        }
        else
        {
            unsigned char l_676 = 250UL;
            int *l_692 = &l_691[1];
            int **l_697 = &l_692;
            for (g_76 = 5; (g_76 >= 0); g_76 -= 1)
            {
                unsigned char *l_672 = &g_134;
                struct S0 *l_677[3][4][7] = {{{&g_255,&g_255,&g_255,&l_48,&l_48,&l_48,&l_48},{&g_255,&l_48,(void*)0,&l_48,&l_48,&l_48,&l_48},{&l_48,&g_255,(void*)0,&l_48,&l_48,&l_48,(void*)0},{&g_255,&g_255,&l_48,(void*)0,&g_255,&l_48,&l_48}},{{&g_255,&l_48,&l_48,(void*)0,&g_255,&g_255,&l_48},{&l_48,&g_255,&l_48,&g_255,&g_255,&g_255,&l_48},{&g_255,&g_255,&l_48,(void*)0,&g_255,&l_48,&l_48},{&g_255,&l_48,&l_48,(void*)0,&g_255,&g_255,&l_48}},{{&l_48,&g_255,&l_48,&g_255,&g_255,&g_255,&l_48},{&g_255,&g_255,&l_48,(void*)0,&g_255,&l_48,&l_48},{&g_255,&l_48,&l_48,(void*)0,&g_255,&g_255,&l_48},{&l_48,&g_255,&l_48,&g_255,&g_255,&g_255,&l_48}}};
                struct S0 **l_678 = &l_677[0][1][1];
                unsigned short l_693 = 3UL;
                int l_694 = 0x474BF100L;
                char ***l_695[4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_695[i] = (void*)0;
                for (g_255.f1 = 1; (g_255.f1 <= 6); g_255.f1 += 1)
                {
                    unsigned l_668 = 0x46484383L;
                    if ((*l_528))
                    {
                        unsigned l_662 = 0xF03E8961L;
                        int **l_664[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_664[i] = (void*)0;
                        if (l_662)
                            break;
                        g_202 = l_663;

                        ;
                    }
                    else
                    {
                        int **l_665 = &g_202;
                        (*l_665) = &g_96;

                        ;
                    }
                    for (p_42 = 0; (p_42 <= 3); p_42 += 1)
                    {
                        struct S0 **l_666 = (void*)0;
                        struct S0 **l_667 = &l_651;
                        (*l_667) = l_651;
                        if (p_42)
                            break;
                        l_668 = 5L;
                    }
                    for (g_307.f3 = 0; (g_307.f3 <= 3); g_307.f3 += 1)
                    {
                        int **l_669 = &l_663;
                        struct S1 l_670 = {44198,-1979};
                        struct S1 *l_671 = &l_670;
                        (*l_669) = l_528;

                        ;
                        (*l_671) = l_670;
                        return l_672;


                    }
                    for (g_134 = 2; (g_134 <= 6); g_134 += 1)
                    {
                        int *l_673[1][5][10] = {{{&g_76,(void*)0,(void*)0,&g_76,&g_96,&g_76,(void*)0,(void*)0,&g_76,&g_96},{&g_76,(void*)0,(void*)0,&g_76,&g_96,&g_76,(void*)0,(void*)0,&g_76,&g_96},{&g_76,(void*)0,(void*)0,&g_76,&g_96,&g_76,(void*)0,(void*)0,&g_76,&g_96},{&g_76,(void*)0,(void*)0,&g_96,(void*)0,&g_96,&g_96,&g_96,&g_96,(void*)0},{&g_96,&g_96,&g_96,&g_96,(void*)0,&g_96,&g_96,&g_96,&g_96,(void*)0}}};
                        int **l_674 = (void*)0;
                        int **l_675 = &l_673[0][3][4];
                        int i, j, k;
                        (*l_675) = l_673[0][3][4];
                    }
                }
                if (l_676)
                    continue;
                (*l_678) = l_677[2][3][1];
                for (g_255.f2 = 0; (g_255.f2 <= 6); g_255.f2 += 1)
                {
                    unsigned short *l_681 = &l_48.f2;
                    unsigned short l_688[5][2] = {{0UL,0x7039L},{2UL,2UL},{2UL,0x7039L},{0UL,65530UL},{0x7039L,65530UL}};
                    int i, j;
                    l_691[2] &= (safe_add_func_int8_t_s_s(p_42, ((((*l_681) = (g_305[1][2].f2 &= 65526UL)) & (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((l_619 < (p_42 < ((**g_344) = ((0xB0L < ((*l_612) = l_676)) == g_307.f7)))), ((**g_356) = (safe_mul_func_uint16_t_u_u(l_688[4][0], (safe_lshift_func_uint16_t_u_s(g_110[3][1][4], (**g_356)))))))), (*l_528)))) == 2UL)));
                    l_692 = l_528;

                    ;
                    if (l_693)
                    {
                        l_694 ^= (l_693 != (*g_461));
                        if (p_42)
                            continue;
                    }
                    else
                    {
                        int *l_696 = &l_691[2];
                        (*l_696) = ((*l_692) == ((&g_460 != (l_695[1] = (void*)0)) != 0UL));
                    }
                }
            }

            ;
            (*l_697) = (void*)0;

            ;
        }

        ;
    }


    ;

    ;

    ;
    ;
    ;

    (*l_528) = (*l_528);
    return l_698;


}







static int func_43(unsigned short p_44, unsigned p_45, struct S0 p_46, struct S3 p_47)
{
    unsigned char *l_52[4] = {&g_53,&g_53,&g_53,&g_53};
    short *l_54 = &g_55;
    short *l_56 = &g_57[0];
    int l_60 = (-3L);
    int *l_65[10][4][6] = {{{&l_60,&l_60,&l_60,&l_60,&l_60,(void*)0},{&l_60,&l_60,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60,&l_60}},{{(void*)0,&l_60,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60,(void*)0},{&l_60,&l_60,&l_60,&l_60,&l_60,&l_60}},{{&l_60,&l_60,(void*)0,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60,(void*)0},{&l_60,&l_60,&l_60,&l_60,&l_60,(void*)0}},{{&l_60,(void*)0,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60,(void*)0},{&l_60,(void*)0,&l_60,&l_60,(void*)0,&l_60}},{{&l_60,&l_60,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60,&l_60}},{{(void*)0,&l_60,(void*)0,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,(void*)0,&l_60},{&l_60,(void*)0,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60,&l_60}},{{&l_60,&l_60,&l_60,&l_60,&l_60,(void*)0},{&l_60,(void*)0,&l_60,&l_60,&l_60,&l_60},{(void*)0,&l_60,&l_60,(void*)0,(void*)0,&l_60},{&l_60,&l_60,(void*)0,&l_60,&l_60,&l_60}},{{&l_60,&l_60,&l_60,(void*)0,&l_60,&l_60},{(void*)0,(void*)0,&l_60,&l_60,(void*)0,&l_60},{&l_60,&l_60,&l_60,&l_60,&l_60,&l_60},{&l_60,&l_60,&l_60,&l_60,(void*)0,&l_60}},{{&l_60,&l_60,&l_60,&l_60,&l_60,(void*)0},{&l_60,&l_60,(void*)0,&l_60,(void*)0,&l_60},{(void*)0,(void*)0,(void*)0,&l_60,&l_60,(void*)0},{&l_60,&l_60,&l_60,&l_60,&l_60,&l_60}},{{&l_60,&l_60,&l_60,&l_60,(void*)0,&l_60},{(void*)0,(void*)0,&l_60,&l_60,(void*)0,(void*)0},{&l_60,(void*)0,&l_60,&l_60,(void*)0,(void*)0},{&l_60,(void*)0,&l_60,&l_60,(void*)0,&l_60}}};
    struct S4 l_77 = {-1430,455,45,10,-1125,10288,165,-7};
    short **l_212 = &l_54;
    char ***l_451 = &g_126;
    char ** const *l_458 = &g_126;
    unsigned short *l_521 = &g_305[1][2].f2;
    int i, j, k;
    g_66 = ((safe_mod_func_int16_t_s_s(((void*)0 == l_52[0]), ((*l_56) &= ((*l_54) = 1L)))) && ((safe_add_func_int8_t_s_s((l_60 > (l_52[0] != l_52[0])), ((0x36L && (p_46.f0 &= (safe_add_func_int16_t_s_s(g_49.f3, ((safe_mul_func_int8_t_s_s(0x1CL, g_14.f1)) & g_49.f0))))) | p_44))) ^ p_46.f2));
    if (func_67(p_46.f1, ((*l_212) = func_70(&g_55, &l_60, g_75, l_77))))
    {
        unsigned l_452 = 0xDDAC59FFL;
        int l_453 = 0x7CA7C052L;
        int l_454 = 0x0F189AE7L;
        char ****l_457 = &l_451;
        l_454 = (safe_lshift_func_int8_t_s_s((((&g_316 == &g_316) ^ p_46.f0) < (0x20E9BE46L <= ((p_44 == (*g_345)) || (l_453 = (l_452 = ((safe_mul_func_int16_t_s_s((+((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(0x30L, 6)), (safe_rshift_func_uint16_t_u_u(((l_451 == (void*)0) && (-4L)), g_183.f4)))), 9)) ^ 6UL)), p_47.f2)) <= (**g_344))))))), p_47.f0));
        g_185[5].f7 = (safe_mul_func_uint8_t_u_u(247UL, (((*l_457) = &g_126) == (g_459 = l_458))));

        ;
    }
    else
    {
        int l_462 = 0xD5C49A5CL;
        int l_467 = (-1L);
        struct S0 *l_499 = &g_255;
        struct S0 *l_501 = (void*)0;
        struct S0 **l_500 = &l_501;
        short ** const *l_506 = (void*)0;
        short ** const **l_505 = &l_506;
        if (l_462)
        {
            return p_45;
        }
        else
        {
            int *l_463 = (void*)0;
            int **l_464 = &l_463;
            int l_490 = (-1L);
            (*l_464) = l_463;
            for (p_44 = (-3); (p_44 <= 28); p_44 = safe_add_func_uint32_t_u_u(p_44, 2))
            {
                (*l_464) = (void*)0;
                return g_307.f4;
            }
            l_467 ^= l_462;
            if ((((**g_344) &= p_46.f0) == (safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((+(p_47.f3 > p_47.f2)), (safe_rshift_func_int8_t_s_u((g_307.f7 < (65532UL && (g_307.f7 & (g_76 = p_46.f1)))), 0)))), g_57[6])) >= p_45), p_47.f3))))
            {
                return l_467;
            }
            else
            {
                unsigned char l_476 = 0x71L;
                int *l_477 = &l_462;
                struct S0 l_480 = {0L,0xC8L,65535UL};
                struct S0 *l_481[9][2][1] = {{{&l_480},{&g_255}},{{&l_480},{&g_255}},{{&l_480},{&g_255}},{{&l_480},{&g_255}},{{&l_480},{&g_255}},{{&l_480},{&g_255}},{{&l_480},{&g_255}},{{&l_480},{&g_255}},{{&l_480},{&g_255}}};
                struct S4 **l_497 = &g_184;
                int i, j, k;
                if ((p_46.f1 & (**g_344)))
                {
                    char l_479 = 0L;
                    if ((p_46.f0 | l_476))
                    {
                        struct S0 *l_478 = &g_255;
                        l_477 = (*l_464);

                        ;
                        (*l_464) = &g_96;

                        ;
                        (*l_478) = p_46;
                    }
                    else
                    {
                        l_467 |= ((*l_477) = l_479);
                        return p_47.f2;
                    }

                    ;
                    ;
                }
                else
                {
                    for (g_55 = 2; (g_55 >= 0); g_55 -= 1)
                    {
                        (*l_477) ^= p_45;
                    }
                }

                ;
                ;
                p_46 = l_480;
                for (l_467 = 1; (l_467 >= 1); l_467++)
                {
                    int l_491 = 2L;
                    for (p_44 = (-28); (p_44 != 21); p_44++)
                    {
                        return p_44;
                    }
                    if ((safe_lshift_func_int8_t_s_u(p_46.f2, ((safe_lshift_func_uint16_t_u_s(((void*)0 == &g_316), ((**l_212) = ((*g_357) = 1L)))) & l_490))))
                    {
                        return p_46.f0;
                    }
                    else
                    {
                        l_462 ^= ((p_47.f3 && (l_491 = (p_47.f0 <= (&l_476 == &g_53)))) ^ (p_47.f0 && ((0xA5BB908CL == ((safe_mul_func_int8_t_s_s((**g_460), 0x15L)) > (g_183.f7 ^= l_467))) >= 0xE996L)));
                    }
                    for (g_307.f8 = 0; (g_307.f8 != 25); g_307.f8 = safe_add_func_int32_t_s_s(g_307.f8, 5))
                    {
                        char l_496 = 0x6EL;
                        l_496 ^= l_462;
                    }
                    if (p_46.f1)
                        break;
                }
                (*l_497) = &g_185[3];

                ;
            }

            ;
            ;
        }

        ;
        l_462 = (safe_unary_minus_func_int16_t_s((**g_356)));
        (*l_500) = (l_499 = (g_298 = &p_46));

        ;
        ;
        ;
        l_462 &= (((***g_459) |= (l_467 = (p_46.f1 || (((*l_505) = (g_502[5] = &g_356)) == &g_503)))) != p_47.f3);


        ;
    }

    ;

    ;

    ;
    ;
    ;
    ;
    ;

    g_183.f7 |= (safe_rshift_func_int16_t_s_u((((*l_521) = (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(p_46.f2, (safe_mod_func_int16_t_s_s(((0x4AL <= (**g_460)) != (((g_76 = ((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(p_44, p_47.f3)), (safe_lshift_func_int8_t_s_u((**g_460), (g_137 >= p_47.f2))))) ^ (p_47.f0 = ((g_255.f2 = ((void*)0 == (*g_503))) >= p_46.f1)))) == (*g_345)) && p_46.f2)), 0x0EC4L)))), p_46.f2))) > 1UL), g_317[0][0].f1));
    for (g_255.f0 = 0; (g_255.f0 != (-19)); g_255.f0 = safe_sub_func_uint8_t_u_u(g_255.f0, 4))
    {
        return g_110[4][2][0];


    }
    return p_47.f3;


}







static int func_67(unsigned char p_68, short * p_69)
{
    struct S1 l_216 = {16683,-2545};
    struct S1 *l_217 = &l_216;
    int * const *l_240 = &g_202;
    int *l_257 = &g_96;
    char ***l_273 = &g_126;
    struct S2 *l_302 = (void*)0;
    struct S0 l_311 = {0x75L,-10L,0x6392L};
    struct S0 *l_319 = (void*)0;
    int l_397 = 0x0B496DEBL;
    unsigned l_399 = 0xE1FDABA2L;
    if ((*g_75))
    {
        int *l_218 = (void*)0;
        const int l_225 = 0xFE6702E0L;
        unsigned short l_226 = 65535UL;
        struct S0 *l_254 = &g_255;
        struct S1 * const l_267 = &l_216;
        int l_270 = 9L;
        struct S1 *l_282[8] = {&l_216,&l_216,&l_216,&l_216,&l_216,&l_216,&l_216,&l_216};
        struct S2 *l_304 = &g_305[1][2];
        struct S3 *l_315 = &g_49;
        int i;
        for (g_76 = (-3); (g_76 != 26); g_76 = safe_add_func_int16_t_s_s(g_76, 8))
        {
            struct S1 l_215 = {26425,-8959};
            for (p_68 = 0; (p_68 <= 6); p_68 += 1)
            {
                unsigned l_220[6][1] = {{4294967295UL},{4294967295UL},{5UL},{4294967295UL},{4294967295UL},{5UL}};
                int i, j;
                l_216 = l_215;
                for (g_134 = 0; (g_134 <= 2); g_134 += 1)
                {
                    int i, j, k;
                    if (g_110[(g_134 + 3)][g_134][(g_134 + 1)])
                    {
                        int **l_219 = &g_202;
                        l_217 = (void*)0;

                        ;
                        (*l_219) = l_218;

                        ;
                    }
                    else
                    {
                        int i, j;
                        if (g_152[(g_134 + 1)][g_134])
                            break;
                    }

                    ;
                    ;
                    return l_216.f1;
                }
                (*g_202) |= ((p_68 && l_220[3][0]) == g_134);
                return l_220[3][0];
            }
        }
lbl_310:
        if (((safe_add_func_int16_t_s_s(l_216.f1, (g_185[5].f1 && (safe_mul_func_uint8_t_u_u((l_225 != ((((*p_69) ^= (g_57[0] ^ l_226)) > p_68) || (safe_mod_func_int8_t_s_s((g_14.f0 ^ p_68), (+p_68))))), p_68))))) < 0L))
        {
            unsigned l_229[6] = {4294967288UL,4294967288UL,0xDB9C2B1DL,4294967288UL,4294967288UL,0xDB9C2B1DL};
            int i;
            (*g_202) = (0x04D8L == l_229[0]);
        }
        else
        {
            const int **l_230 = &g_75;
            unsigned *l_231[7][1] = {{(void*)0},{&g_152[3][1]},{(void*)0},{&g_152[3][1]},{(void*)0},{&g_152[3][1]},{(void*)0}};
            int l_232 = 0x99D5E12AL;
            int l_233 = 0x12DA3883L;
            short l_236 = 0x258BL;
            unsigned l_237 = 0x20B7C3FBL;
            int **l_238 = &g_202;
            int **l_239 = (void*)0;
            int i, j;
            (*g_202) ^= 0x0249AFE3L;
            (*l_230) = &l_225;

            ;
            if (((l_233 = (g_183.f4 > (l_232 = ((*p_69) == 1L)))) < ((**l_238) = (safe_add_func_int8_t_s_s(l_236, (l_237 == ((l_239 = l_238) != l_240)))))))
            {
                unsigned char *l_245 = &g_53;
                unsigned short *l_248 = &g_106;
                unsigned short *l_251 = &l_226;
                int l_252 = (-1L);
                l_216.f1 &= ((0xE5L || ((**l_238) || (safe_rshift_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u(g_14.f0, (((((*l_245) |= 0x83L) | (g_185[5].f2 || ((*l_251) = (safe_mul_func_int8_t_s_s(((((*l_248) = g_183.f7) <= ((*p_69) = ((void*)0 != &g_57[2]))) | (safe_sub_func_int16_t_s_s(g_13, g_183.f2))), p_68))))) & p_68) == p_68))) > p_68) && (*p_69)), p_68)))) | 0xB8L);
                if ((g_185[5].f4 && p_68))
                {
                    unsigned char l_253[9] = {8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL};
                    int i;
                    l_253[5] = l_252;
                }
                else
                {
                    struct S0 **l_256 = &l_254;
                    char *l_266 = &g_255.f1;
                    struct S1 **l_269 = &g_268;
                    (*l_256) = l_254;
                    (*l_238) = l_257;
                    l_270 = (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((*l_257), g_110[4][2][4])) < p_68), (safe_mod_func_uint32_t_u_u((((**l_238) <= (g_49.f1 = (safe_add_func_int8_t_s_s(((*l_266) = p_68), (p_68 <= (((*l_248) = (l_267 == ((*l_269) = g_268))) & g_152[3][1])))))) && l_252), 0x8BFFB300L))));
                }
                (*l_257) = ((p_68 > (p_68 && (-1L))) & (**l_239));
            }
            else
            {
                return p_68;


            }

            ;
            (*g_202) = (((*p_69) = g_185[5].f4) | (safe_rshift_func_uint16_t_u_u(((void*)0 == l_273), 11)));
        }
        if (((*g_202) = p_68))
        {
            short l_285 = 1L;
            char *l_290[8][7] = {{&g_110[5][2][2],&g_110[3][1][4],&g_255.f1,&g_255.f1,(void*)0,&g_110[3][1][4],(void*)0},{&g_110[2][1][3],&g_255.f0,&g_255.f0,&g_110[2][1][3],&g_255.f1,&g_255.f0,&g_110[2][0][3]},{&g_110[2][1][3],&g_110[3][1][4],&g_110[4][2][4],&g_110[3][1][4],&g_110[3][1][4],(void*)0,&g_110[0][0][3]},{&g_110[5][2][2],&g_255.f1,&g_110[2][0][3],&g_110[3][1][4],&g_255.f1,&g_110[3][1][4],&g_110[2][0][3]},{&g_255.f1,&g_255.f1,&g_255.f0,&g_110[3][1][4],(void*)0,&g_110[3][1][4],(void*)0},{&g_255.f1,&g_255.f0,(void*)0,&g_255.f0,&g_110[5][2][2],(void*)0,&g_110[3][1][4]},{&g_110[3][1][4],&g_255.f0,(void*)0,(void*)0,(void*)0,&g_255.f0,&g_110[3][1][4]},{&g_110[3][1][4],&g_110[3][1][4],&g_110[2][1][3],(void*)0,&g_255.f1,&g_110[3][1][4],&g_255.f0}};
            struct S2 **l_303[5][2] = {{(void*)0,&l_302},{(void*)0,(void*)0},{&l_302,(void*)0},{(void*)0,&l_302},{(void*)0,(void*)0}};
            struct S0 *l_312 = &l_311;
            int i, j;
lbl_301:
            for (g_106 = 8; (g_106 < 43); g_106 = safe_add_func_int16_t_s_s(g_106, 5))
            {
                unsigned *l_293[3][3][7] = {{{&g_152[3][1],&g_152[3][3],&g_152[3][3],&g_152[3][1],&g_152[0][1],&g_152[3][1],&g_152[3][1]},{&g_152[3][1],&g_152[3][1],&g_152[0][1],&g_152[0][1],&g_152[3][1],&g_152[3][1],&g_152[3][3]},{&g_152[3][1],&g_152[3][1],(void*)0,&g_152[3][1],&g_152[3][1],(void*)0,&g_152[3][1]}},{{&g_152[3][1],&g_152[3][3],&g_152[3][1],&g_152[3][1],&g_152[0][1],&g_152[0][1],&g_152[3][1]},{&g_152[3][1],&g_152[3][1],&g_152[3][1],&g_152[0][1],&g_152[3][1],&g_152[3][3],&g_152[3][3]},{&g_152[3][1],&g_152[3][1],(void*)0,&g_152[3][1],&g_152[3][1],(void*)0,&g_152[3][1]}},{{&g_152[3][1],&g_152[3][3],&g_152[0][1],&g_152[3][1],&g_152[0][1],&g_152[3][3],&g_152[3][1]},{&g_152[3][1],&g_152[3][1],&g_152[3][3],&g_152[0][1],&g_152[3][1],&g_152[0][1],&g_152[3][3]},{&g_152[3][1],&g_152[3][1],(void*)0,&g_152[3][1],&g_152[3][1],(void*)0,&g_152[3][1]}}};
                unsigned **l_292 = &l_293[1][2][6];
                unsigned ***l_291 = &l_292;
                unsigned short *l_294 = &g_255.f2;
                int l_295 = 0x1C0F86EEL;
                struct S0 **l_296 = (void*)0;
                struct S0 **l_297 = &l_254;
                struct S0 *l_300 = &g_255;
                struct S0 **l_299 = &l_300;
                int i, j, k;
                for (g_255.f1 = 13; (g_255.f1 == (-24)); g_255.f1--)
                {
                    struct S1 **l_278 = &g_268;
                    struct S1 **l_279 = (void*)0;
                    struct S1 **l_280 = (void*)0;
                    struct S1 **l_281[8][3][1] = {{{&l_217},{&l_217},{&l_217}},{{&l_217},{&l_217},{&l_217}},{{&l_217},{&l_217},{&l_217}},{{&l_217},{&l_217},{&l_217}},{{&l_217},{&l_217},{&l_217}},{{&l_217},{&l_217},{&l_217}},{{&l_217},{&l_217},{&l_217}},{{&l_217},{&l_217},{&l_217}}};
                    int i, j, k;
                    l_282[4] = ((*l_278) = g_268);
                    if (p_68)
                        continue;
                    if (g_13)
                        goto lbl_301;
                }
                l_295 = ((((*p_69) = (0x1DL | (safe_lshift_func_uint8_t_u_s(0xAFL, 6)))) || ((*p_69) == l_285)) > (safe_unary_minus_func_uint32_t_u((!((~(((*l_294) |= (safe_add_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(((*l_257) = (((*g_126) = l_290[3][0]) == (void*)0)))), ((l_291 == (void*)0) || (*g_75))))) != 0xD570L)) ^ p_68)))));
                (*l_299) = (g_298 = ((*l_297) = (void*)0));

                ;
                ;
                ;
            }
            g_306 = (l_304 = l_302);

            ;
            ;
            for (g_255.f0 = 0; (g_255.f0 >= (-18)); g_255.f0 = safe_sub_func_uint8_t_u_u(g_255.f0, 4))
            {
                if (g_53)
                    goto lbl_310;
            }
            (*l_312) = l_311;
        }
        else
        {
            for (g_307.f7 = 0; (g_307.f7 > 27); g_307.f7 = safe_add_func_int32_t_s_s(g_307.f7, 3))
            {
                g_316 = l_315;

                ;
            }

            ;
            return (*g_202);


        }

        ;
        ;
    }
    else
    {
        struct S0 *l_318[3];
        const int l_320 = 0L;
        unsigned l_329 = 1UL;
        unsigned **l_349 = &g_345;
        short **l_359 = (void*)0;
        struct S2 *l_373 = &g_305[1][2];
        int *l_412 = (void*)0;
        char *l_429 = &g_110[2][1][1];
        int l_436 = 0L;
        int i;
        for (i = 0; i < 3; i++)
            l_318[i] = &l_311;
        l_319 = l_318[1];

        ;
        if (g_55)
            goto lbl_426;
lbl_426:
        for (g_106 = 0; (g_106 <= 3); g_106 += 1)
        {
            unsigned char l_328 = 0x1FL;
            int l_340 = 0x2E339245L;
            struct S2 **l_354 = &l_302;
            struct S1 *l_401 = &l_216;
            unsigned short *l_407 = &g_307.f2;
            int *l_408 = (void*)0;
            char *l_420 = &g_305[1][2].f0;
        }
        (*l_257) = (safe_rshift_func_int16_t_s_u((((*l_429) = (-10L)) != (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(255UL, (**l_240))), 4)), 2))), ((p_68 > 0x25L) ^ ((*p_69) = l_436))));
        (*l_257) = (safe_add_func_int16_t_s_s(((**g_356) = (*g_357)), (*l_257)));
    }


    ;
    ;
    ;
    ;
    return p_68;
}







static short * func_70(short * p_71, int * p_72, const int * p_73, struct S4 p_74)
{
    int *l_79 = &g_76;
    int l_109 = 0x75B0AE68L;
    struct S1 l_135 = {23234,10775};
    char l_139 = 0x60L;
    unsigned l_160 = 0xB04F0948L;
    unsigned *l_210[7][2] = {{&l_160,&l_160},{&l_160,&l_160},{&l_160,&l_160},{&l_160,&l_160},{&l_160,&l_160},{&l_160,&l_160},{&l_160,&l_160}};
    unsigned **l_209[2][7][5] = {{{&l_210[5][1],(void*)0,&l_210[5][1],&l_210[5][1],&l_210[5][1]},{&l_210[5][1],&l_210[5][1],&l_210[5][0],&l_210[5][1],&l_210[5][1]},{&l_210[3][0],&l_210[5][0],&l_210[5][1],&l_210[5][1],&l_210[1][0]},{&l_210[3][0],&l_210[2][0],&l_210[2][0],&l_210[3][0],&l_210[5][1]},{&l_210[5][1],&l_210[0][1],(void*)0,&l_210[5][1],&l_210[5][0]},{&l_210[5][1],&l_210[5][1],&l_210[3][0],&l_210[5][1],&l_210[5][1]},{&l_210[5][1],&l_210[5][1],&l_210[5][1],&l_210[5][1],&l_210[0][1]}},{{(void*)0,&l_210[5][1],&l_210[5][1],&l_210[3][0],&l_210[5][0]},{&l_210[5][0],&l_210[5][1],&l_210[5][1],&l_210[5][1],&l_210[5][1]},{&l_210[2][0],&l_210[5][1],&l_210[5][1],&l_210[5][1],&l_210[2][0]},{&l_210[5][0],&l_210[5][1],&l_210[5][0],&l_210[5][1],&l_210[2][1]},{&l_210[4][0],&l_210[5][1],&l_210[5][1],&l_210[0][1],&l_210[5][1]},{&l_210[5][1],&l_210[5][1],&l_210[5][1],&l_210[5][1],&l_210[2][1]},{&l_210[5][1],&l_210[0][1],&l_210[5][1],&l_210[2][0],&l_210[2][0]}}};
    int i, j, k;
lbl_156:
    for (g_53 = 0; (g_53 <= 6); g_53 += 1)
    {
        int **l_78 = (void*)0;
        int *l_80 = &g_76;
        int i;
        (*l_80) = (((p_72 = &g_76) == (void*)0) && (g_57[g_53] | (&g_76 != (l_79 = &g_76))));

        ;
        (*p_72) = (-1L);
        if ((*p_72))
            break;
    }
    if ((safe_lshift_func_int8_t_s_u(((*g_75) <= (((safe_lshift_func_int8_t_s_u(g_49.f2, 6)) <= 0x99BC1BBFL) <= 0L)), (g_14.f1 || g_55))))
    {
        struct S0 l_100 = {0xBDL,0x4CL,1UL};
        int l_103 = 1L;
        const char *l_122 = &l_100.f0;
        unsigned char *l_143 = &g_53;
        unsigned char **l_142 = &l_143;
        unsigned char *l_145 = &g_134;
        unsigned char **l_144 = &l_145;
        struct S1 *l_146 = &l_135;
        for (g_66 = 0; (g_66 < 8); g_66 = safe_add_func_int32_t_s_s(g_66, 1))
        {
            int l_125 = (-1L);
            for (g_53 = 18; (g_53 < 41); g_53++)
            {
                struct S1 l_93 = {27789,3946};
                short *l_107[4] = {&g_66,&g_66,&g_66,&g_66};
                int *l_138 = &l_109;
                int i;
                for (g_76 = 4; (g_76 >= 2); g_76 -= 1)
                {
                    return &g_66;



                }
                for (g_55 = 8; (g_55 >= (-15)); g_55 = safe_sub_func_uint8_t_u_u(g_55, 2))
                {
                    struct S1 *l_94 = &l_93;
                    int *l_95 = &g_96;
                    struct S0 l_99 = {0xE9L,0x83L,0xD7A0L};
                    int **l_124[8] = {&l_79,&l_79,&l_79,&l_79,&l_79,&l_79,&l_79,&l_79};
                    char **l_129 = (void*)0;
                    char ***l_128 = &l_129;
                    unsigned char *l_132 = (void*)0;
                    unsigned char *l_133 = &g_134;
                    int i;
                    (*l_94) = l_93;
                }
                (*l_138) |= (*g_75);
            }
            (*p_72) = (l_139 ^= l_103);
            (*p_72) = (*p_73);
        }
lbl_159:
        (*l_79) = ((safe_lshift_func_int16_t_s_s(g_53, (l_122 == ((*l_144) = ((*l_142) = &g_53))))) != g_66);

        ;
        (*l_146) = l_135;
        for (g_76 = (-23); (g_76 <= (-2)); g_76 = safe_add_func_uint16_t_u_u(g_76, 9))
        {
            const struct S1 *l_174[1];
            int l_176[8][8] = {{0xB1AD61C5L,0x2D8C64F5L,(-4L),0xB1AD61C5L,(-5L),(-5L),0xB1AD61C5L,(-4L)},{0x650B9E8DL,0x650B9E8DL,0x73C0282DL,1L,0xB1AD61C5L,0x73C0282DL,0xB1AD61C5L,1L},{(-4L),1L,(-4L),(-5L),1L,0x2D8C64F5L,0x2D8C64F5L,1L},{1L,0x2D8C64F5L,0x2D8C64F5L,1L,(-5L),(-4L),1L,(-4L)},{1L,0xB1AD61C5L,0x73C0282DL,0xB1AD61C5L,1L,0x73C0282DL,0x650B9E8DL,0x650B9E8DL},{(-4L),0xB1AD61C5L,(-5L),(-5L),0xB1AD61C5L,(-4L),0x2D8C64F5L,0xB1AD61C5L},{0x650B9E8DL,0x2D8C64F5L,(-5L),0x650B9E8DL,(-5L),0x2D8C64F5L,0x650B9E8DL,(-4L)},{0xB1AD61C5L,1L,0x73C0282DL,0x650B9E8DL,0x650B9E8DL,0x73C0282DL,1L,0xB1AD61C5L}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_174[i] = &l_135;
            for (l_100.f2 = 0; l_100.f2 < 6; l_100.f2 += 1)
            {
                for (l_100.f1 = 0; l_100.f1 < 3; l_100.f1 += 1)
                {
                    for (g_137 = 0; g_137 < 5; g_137 += 1)
                    {
                        g_110[l_100.f2][l_100.f1][g_137] = 0x8CL;
                    }
                }
            }
            for (g_106 = (-22); (g_106 <= 11); ++g_106)
            {
                unsigned l_155 = 4294967295UL;
                unsigned char *l_157[4][9][7] = {{{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53}},{{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53}},{{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53}},{{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53}}};
                struct S1 *l_175 = (void*)0;
                int l_180 = 1L;
                int l_194[1][9];
                struct S4 **l_199 = (void*)0;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 9; j++)
                        l_194[i][j] = 0xB2BF3D79L;
                }
                if (l_100.f2)
                {
                    unsigned *l_151 = &g_152[3][1];
                    const unsigned l_164 = 6UL;
                    int l_179 = (-3L);
                    if (((((*l_151) = 4294967290UL) <= (((safe_mod_func_uint16_t_u_u(l_155, g_57[1])) || p_74.f1) < ((g_96 = (*p_72)) ^ (*p_73)))) != (l_155 | ((l_100.f1 && ((**l_142) = g_76)) > 0xEEE6CD1AL))))
                    {
                        int *l_158 = (void*)0;
                        if (g_55)
                            goto lbl_156;
                        p_74.f5 = (0x7FE986FCL != ((void*)0 == l_157[3][5][5]));
                    }
                    else
                    {
                        int *l_161 = &g_96;
                        struct S0 *l_163 = &l_100;
                        struct S0 **l_162 = &l_163;
                        char *l_177 = &l_100.f1;
                        char *l_178 = &l_139;
                        if (p_74.f1)
                            goto lbl_159;
                        (*l_161) |= (p_74.f0 ^ (p_74.f2 == (l_160 ^ g_14.f0)));
                        (*l_162) = (void*)0;

                        ;
                        l_180 = (((*l_79) & l_164) && (safe_add_func_uint16_t_u_u((((*l_161) = 0x30283134L) != (~g_49.f0)), (safe_mul_func_int8_t_s_s((l_179 |= (safe_unary_minus_func_int32_t_s(((*g_75) > (safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((*l_178) = ((*l_177) = (l_176[2][5] = (l_100.f2 > (l_174[0] != l_175))))), (g_137 ^ 0x11147775L))), p_74.f2)))))), 254UL)))));
                    }
                    (*l_146) = l_135;
                }
                else
                {
                    struct S4 *l_182 = &g_183;
                    struct S4 **l_181[5];
                    int l_195 = 0x4BBCF4FFL;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_181[i] = &l_182;
                    g_184 = &p_74;

                    ;
                    for (g_55 = 11; (g_55 == (-6)); --g_55)
                    {
                        char *l_196[8] = {&l_139,&l_139,&l_139,&l_139,&l_139,&l_139,&l_139,&l_139};
                        const int l_200 = 8L;
                        int *l_201 = &l_103;
                        int **l_203 = &l_79;
                        int i;
                        (*l_201) = (safe_add_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_74.f4, p_74.f7)), ((*g_75) && ((p_74.f2 <= ((l_195 = l_194[0][2]) ^ (l_196[2] != l_143))) >= (safe_lshift_func_int8_t_s_s(((l_199 == &g_184) <= l_200), (*l_79))))))) >= g_110[3][0][1]), l_194[0][2]));
                        (*l_201) = ((*l_79) <= ((*l_143) = (p_74.f2 ^ (6UL & l_194[0][8]))));
                        if ((*g_75))
                            break;
                        (*l_203) = (g_202 = &g_96);

                        ;
                    }
                    for (l_100.f2 = 7; (l_100.f2 > 25); l_100.f2 = safe_add_func_uint8_t_u_u(l_100.f2, 5))
                    {
                        (*g_202) |= l_195;
                    }
                }
                if ((*g_75))
                    break;
            }
            p_74.f5 ^= ((*g_202) = (~(*g_75)));
        }
    }
    else
    {
        const unsigned *l_208 = (void*)0;
        const unsigned **l_207 = &l_208;
        const unsigned ***l_206[6][6] = {{&l_207,&l_207,&l_207,&l_207,&l_207,&l_207},{&l_207,&l_207,&l_207,&l_207,&l_207,&l_207},{&l_207,&l_207,&l_207,&l_207,&l_207,&l_207},{&l_207,&l_207,&l_207,&l_207,&l_207,&l_207},{&l_207,&l_207,(void*)0,&l_207,&l_207,(void*)0},{&l_207,&l_207,&l_207,&l_207,&l_207,&l_207}};
        struct S1 *l_211 = &l_135;
        int i, j;
        l_209[0][2][0] = (void*)0;
        (*l_211) = l_135;
    }
    if (g_49.f2)
        goto lbl_156;
    return p_71;



}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_14.f1, "g_14.f1", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_19[i][j][k], "g_19[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_49.f0, "g_49.f0", print_hash_value);
    transparent_crc(g_49.f1, "g_49.f1", print_hash_value);
    transparent_crc(g_49.f2, "g_49.f2", print_hash_value);
    transparent_crc(g_49.f3, "g_49.f3", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_57[i], "g_57[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_110[i][j][k], "g_110[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_152[i][j], "g_152[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_183.f0, "g_183.f0", print_hash_value);
    transparent_crc(g_183.f1, "g_183.f1", print_hash_value);
    transparent_crc(g_183.f2, "g_183.f2", print_hash_value);
    transparent_crc(g_183.f3, "g_183.f3", print_hash_value);
    transparent_crc(g_183.f4, "g_183.f4", print_hash_value);
    transparent_crc(g_183.f5, "g_183.f5", print_hash_value);
    transparent_crc(g_183.f6, "g_183.f6", print_hash_value);
    transparent_crc(g_183.f7, "g_183.f7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_185[i].f0, "g_185[i].f0", print_hash_value);
        transparent_crc(g_185[i].f1, "g_185[i].f1", print_hash_value);
        transparent_crc(g_185[i].f2, "g_185[i].f2", print_hash_value);
        transparent_crc(g_185[i].f3, "g_185[i].f3", print_hash_value);
        transparent_crc(g_185[i].f4, "g_185[i].f4", print_hash_value);
        transparent_crc(g_185[i].f5, "g_185[i].f5", print_hash_value);
        transparent_crc(g_185[i].f6, "g_185[i].f6", print_hash_value);
        transparent_crc(g_185[i].f7, "g_185[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_255.f0, "g_255.f0", print_hash_value);
    transparent_crc(g_255.f1, "g_255.f1", print_hash_value);
    transparent_crc(g_255.f2, "g_255.f2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_305[i][j].f0, "g_305[i][j].f0", print_hash_value);
            transparent_crc(g_305[i][j].f1, "g_305[i][j].f1", print_hash_value);
            transparent_crc(g_305[i][j].f2, "g_305[i][j].f2", print_hash_value);
            transparent_crc(g_305[i][j].f3, "g_305[i][j].f3", print_hash_value);
            transparent_crc(g_305[i][j].f4, "g_305[i][j].f4", print_hash_value);
            transparent_crc(g_305[i][j].f5, "g_305[i][j].f5", print_hash_value);
            transparent_crc(g_305[i][j].f6, "g_305[i][j].f6", print_hash_value);
            transparent_crc(g_305[i][j].f7, "g_305[i][j].f7", print_hash_value);
            transparent_crc(g_305[i][j].f8, "g_305[i][j].f8", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_307.f0, "g_307.f0", print_hash_value);
    transparent_crc(g_307.f1, "g_307.f1", print_hash_value);
    transparent_crc(g_307.f2, "g_307.f2", print_hash_value);
    transparent_crc(g_307.f3, "g_307.f3", print_hash_value);
    transparent_crc(g_307.f4, "g_307.f4", print_hash_value);
    transparent_crc(g_307.f5, "g_307.f5", print_hash_value);
    transparent_crc(g_307.f6, "g_307.f6", print_hash_value);
    transparent_crc(g_307.f7, "g_307.f7", print_hash_value);
    transparent_crc(g_307.f8, "g_307.f8", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_317[i][j].f0, "g_317[i][j].f0", print_hash_value);
            transparent_crc(g_317[i][j].f1, "g_317[i][j].f1", print_hash_value);
            transparent_crc(g_317[i][j].f2, "g_317[i][j].f2", print_hash_value);
            transparent_crc(g_317[i][j].f3, "g_317[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_547.f0, "g_547.f0", print_hash_value);
    transparent_crc(g_547.f1, "g_547.f1", print_hash_value);
    transparent_crc(g_717.f0, "g_717.f0", print_hash_value);
    transparent_crc(g_717.f1, "g_717.f1", print_hash_value);
    transparent_crc(g_717.f2, "g_717.f2", print_hash_value);
    transparent_crc(g_717.f3, "g_717.f3", print_hash_value);
    transparent_crc(g_717.f4, "g_717.f4", print_hash_value);
    transparent_crc(g_717.f5, "g_717.f5", print_hash_value);
    transparent_crc(g_717.f6, "g_717.f6", print_hash_value);
    transparent_crc(g_717.f7, "g_717.f7", print_hash_value);
    transparent_crc(g_769, "g_769", print_hash_value);
    transparent_crc(g_778.f0, "g_778.f0", print_hash_value);
    transparent_crc(g_778.f1, "g_778.f1", print_hash_value);
    transparent_crc(g_778.f2, "g_778.f2", print_hash_value);
    transparent_crc(g_778.f3, "g_778.f3", print_hash_value);
    transparent_crc(g_778.f4, "g_778.f4", print_hash_value);
    transparent_crc(g_778.f5, "g_778.f5", print_hash_value);
    transparent_crc(g_778.f6, "g_778.f6", print_hash_value);
    transparent_crc(g_778.f7, "g_778.f7", print_hash_value);
    transparent_crc(g_793.f0, "g_793.f0", print_hash_value);
    transparent_crc(g_793.f1, "g_793.f1", print_hash_value);
    transparent_crc(g_793.f2, "g_793.f2", print_hash_value);
    transparent_crc(g_793.f3, "g_793.f3", print_hash_value);
    transparent_crc(g_793.f4, "g_793.f4", print_hash_value);
    transparent_crc(g_793.f5, "g_793.f5", print_hash_value);
    transparent_crc(g_793.f6, "g_793.f6", print_hash_value);
    transparent_crc(g_793.f7, "g_793.f7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_795[i][j][k].f0, "g_795[i][j][k].f0", print_hash_value);
                transparent_crc(g_795[i][j][k].f1, "g_795[i][j][k].f1", print_hash_value);
                transparent_crc(g_795[i][j][k].f2, "g_795[i][j][k].f2", print_hash_value);
                transparent_crc(g_795[i][j][k].f3, "g_795[i][j][k].f3", print_hash_value);
                transparent_crc(g_795[i][j][k].f4, "g_795[i][j][k].f4", print_hash_value);
                transparent_crc(g_795[i][j][k].f5, "g_795[i][j][k].f5", print_hash_value);
                transparent_crc(g_795[i][j][k].f6, "g_795[i][j][k].f6", print_hash_value);
                transparent_crc(g_795[i][j][k].f7, "g_795[i][j][k].f7", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_931, "g_931", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1096[i][j].f0, "g_1096[i][j].f0", print_hash_value);
            transparent_crc(g_1096[i][j].f1, "g_1096[i][j].f1", print_hash_value);
            transparent_crc(g_1096[i][j].f2, "g_1096[i][j].f2", print_hash_value);
            transparent_crc(g_1096[i][j].f3, "g_1096[i][j].f3", print_hash_value);
            transparent_crc(g_1096[i][j].f4, "g_1096[i][j].f4", print_hash_value);
            transparent_crc(g_1096[i][j].f5, "g_1096[i][j].f5", print_hash_value);
            transparent_crc(g_1096[i][j].f6, "g_1096[i][j].f6", print_hash_value);
            transparent_crc(g_1096[i][j].f7, "g_1096[i][j].f7", print_hash_value);
            transparent_crc(g_1096[i][j].f8, "g_1096[i][j].f8", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1235, "g_1235", print_hash_value);
    transparent_crc(g_1290.f0, "g_1290.f0", print_hash_value);
    transparent_crc(g_1290.f1, "g_1290.f1", print_hash_value);
    transparent_crc(g_1309, "g_1309", print_hash_value);
    transparent_crc(g_1335.f0, "g_1335.f0", print_hash_value);
    transparent_crc(g_1335.f1, "g_1335.f1", print_hash_value);
    transparent_crc(g_1335.f2, "g_1335.f2", print_hash_value);
    transparent_crc(g_1335.f3, "g_1335.f3", print_hash_value);
    transparent_crc(g_1335.f4, "g_1335.f4", print_hash_value);
    transparent_crc(g_1335.f5, "g_1335.f5", print_hash_value);
    transparent_crc(g_1335.f6, "g_1335.f6", print_hash_value);
    transparent_crc(g_1335.f7, "g_1335.f7", print_hash_value);
    transparent_crc(g_1335.f8, "g_1335.f8", print_hash_value);
    transparent_crc(g_1375, "g_1375", print_hash_value);
    transparent_crc(g_1376.f0, "g_1376.f0", print_hash_value);
    transparent_crc(g_1376.f1, "g_1376.f1", print_hash_value);
    transparent_crc(g_1376.f2, "g_1376.f2", print_hash_value);
    transparent_crc(g_1376.f3, "g_1376.f3", print_hash_value);
    transparent_crc(g_1376.f4, "g_1376.f4", print_hash_value);
    transparent_crc(g_1376.f5, "g_1376.f5", print_hash_value);
    transparent_crc(g_1376.f6, "g_1376.f6", print_hash_value);
    transparent_crc(g_1376.f7, "g_1376.f7", print_hash_value);
    transparent_crc(g_1376.f8, "g_1376.f8", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1577[i][j][k], "g_1577[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1636, "g_1636", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
