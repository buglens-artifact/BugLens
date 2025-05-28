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
   signed f0 : 10;
   unsigned char f1;
   unsigned f2 : 9;
   signed f3 : 9;
   volatile signed f4 : 12;
};


static int g_2 = 0x5C6F1BF5L;
static unsigned g_5[1] = {4294967286UL};
static volatile int g_6[1][10][8] = {{{(-2L),0xAD9DDCEFL,0xF054A20AL,0xAD9DDCEFL,(-2L),(-1L),0xAD9DDCEFL,(-1L)},{(-1L),(-2L),(-1L),0x6E348CC3L,0xAD9DDCEFL,(-1L),(-1L),0xAD9DDCEFL},{0x98815CBCL,(-1L),(-1L),0x98815CBCL,6L,0xE3869393L,0xAD9DDCEFL,(-1L)},{0xAD9DDCEFL,0xE9323D1BL,0xF054A20AL,(-1L),0xE9323D1BL,0x3A3FC4B0L,0xE9323D1BL,(-1L)},{0xE3869393L,0xE9323D1BL,0xE3869393L,(-1L),0xAD9DDCEFL,0xE3869393L,6L,0x98815CBCL},{(-2L),(-1L),0x6E348CC3L,0xAD9DDCEFL,(-1L),0x7BB00868L,(-1L),0x89B1AB44L},{6L,6L,(-2L),0xE3869393L,(-1L),0xE9323D1BL,6L,(-1L)},{0x3A3FC4B0L,(-1L),(-1L),0x3A3FC4B0L,0x6E348CC3L,0x3A3FC4B0L,(-1L),(-1L)},{(-1L),0xF054A20AL,0x89B1AB44L,0xE3869393L,0xF054A20AL,(-1L),0x6E348CC3L,0x89B1AB44L},{(-1L),0x6E348CC3L,0xAD9DDCEFL,(-1L),(-1L),0xAD9DDCEFL,0x6E348CC3L,(-1L)}}};
static int g_7 = 2L;
static struct S0 g_43 = {22,0x07L,3,-3,-58};
static unsigned g_117 = 0UL;
static int g_127[2][2] = {{9L,9L},{9L,9L}};
static unsigned g_132 = 0x0DA77971L;
static unsigned char g_147 = 255UL;
static char g_154 = 0x2DL;
static int g_169[9][2][8] = {{{0x2B9AB531L,(-1L),0x334622F9L,1L,(-1L),(-1L),1L,0x334622F9L},{0x334622F9L,0x334622F9L,0x99FB3213L,(-1L),0xA435B6E9L,8L,9L,0xAD140F5BL}},{{0xCD814C8BL,0x3012BAB1L,0x2B33F4ABL,1L,0xBE140471L,(-9L),0x3BFDC2BFL,0xAD140F5BL},{0x3012BAB1L,(-1L),0xF369DC22L,(-1L),(-1L),6L,0xA302B4F1L,0x334622F9L}},{{0x49E77FEEL,0xAC03C0FEL,(-1L),1L,0L,0x3012BAB1L,0xF369DC22L,0x3BFDC2BFL},{0x5FC118C1L,(-4L),0x2B9AB531L,0xCD814C8BL,0x08E25E92L,0x3BFDC2BFL,0x0DCDEADAL,0x99FB3213L}},{{0xAD140F5BL,(-7L),0x22096FE6L,0x5D4B51E4L,0x99FB3213L,0xCD814C8BL,(-1L),0xA696AE1DL},{0xAC03C0FEL,0L,0L,0xF369DC22L,0L,0L,0xAC03C0FEL,0x99FB3213L}},{{0x3012BAB1L,0xAE449593L,0x9539F484L,8L,(-7L),0L,0x334622F9L,0x2B33F4ABL},{0L,0x07A39AD0L,0xCD814C8BL,0xA435B6E9L,(-7L),0xAC03C0FEL,0L,0xF369DC22L}},{{0x3012BAB1L,0x49E77FEEL,0x0AB9F43FL,0x2B33F4ABL,0L,0x2B9AB531L,0L,(-1L)},{0xAC03C0FEL,0x3BFDC2BFL,0xD82DD5B8L,(-7L),0x5D4B51E4L,0x5C4E6ECFL,(-1L),0x2B9AB531L}},{{1L,0x73FC3EFAL,0x2B33F4ABL,0x5FC118C1L,0xAD140F5BL,(-1L),0x49E77FEEL,0x22096FE6L},{0xAE449593L,0xD82DD5B8L,0L,0x07A39AD0L,(-4L),0x73FC3EFAL,0x73FC3EFAL,(-4L)}},{{0x73FC3EFAL,(-7L),(-7L),0x73FC3EFAL,0x08E25E92L,0xBE140471L,1L,(-1L)},{0xA435B6E9L,0x22096FE6L,0L,0x59A0B5EEL,0xAC03C0FEL,0x5D4B51E4L,0xA302B4F1L,0L}},{{(-9L),0x22096FE6L,0L,6L,0xB223AF51L,0xBE140471L,0xA435B6E9L,0x5171171DL},{0x8005EDC9L,(-7L),0x334622F9L,0L,0x5FC118C1L,0x73FC3EFAL,(-5L),0x5C4E6ECFL}}};
static unsigned char g_170 = 0x14L;
static unsigned g_196 = 0x7918DDF3L;
static unsigned g_256[8][7] = {{0x6973E679L,1UL,0xDFAF212BL,1UL,0x6973E679L,0x414E3030L,0x6973E679L},{0xBDFD2789L,4294967288UL,4294967288UL,0xB6112E7AL,9UL,4294967288UL,0x0433EE48L},{4294967289UL,5UL,4294967289UL,0x414E3030L,0x3E5C0779L,0x414E3030L,4294967289UL},{0xB6112E7AL,0xB6112E7AL,0x58F672B8L,0x0433EE48L,0xB6112E7AL,0xBDFD2789L,0x0433EE48L},{0xBAD6D555L,0x414E3030L,0xDFAF212BL,5UL,0xDFAF212BL,0x414E3030L,0xBAD6D555L},{9UL,0x0433EE48L,4294967288UL,9UL,0xB6112E7AL,4294967288UL,4294967288UL},{0x3E5C0779L,5UL,0x4C63453BL,5UL,0x3E5C0779L,1UL,0x3E5C0779L},{0xB6112E7AL,9UL,4294967288UL,0x0433EE48L,9UL,9UL,0x0433EE48L}};
static unsigned g_267 = 0x541896A9L;
static int g_275 = 1L;
static unsigned short g_281 = 0xD669L;
static unsigned short g_314 = 2UL;
static int g_322 = 0x5E505DB8L;
static int g_323 = (-9L);
static unsigned short g_331 = 0xAA6BL;
static int g_358 = 2L;
static int g_380 = 0x7DF9E4F0L;
static unsigned g_403 = 0x80230BBEL;
static unsigned g_450[9] = {0x096B3FBCL,4294967295UL,0x096B3FBCL,4294967295UL,0x096B3FBCL,4294967295UL,0x096B3FBCL,4294967295UL,0x096B3FBCL};
static unsigned g_497 = 0xFEEF1FF5L;
static short g_510 = 0x0762L;
static short g_536 = 0L;
static unsigned g_561 = 0x55F06DDBL;
static unsigned short g_589 = 0x8289L;
static const unsigned short g_616 = 0x8A04L;
static struct S0 g_645 = {8,255UL,14,-21,-36};
static struct S0 g_646 = {-10,0x29L,9,2,-8};
static struct S0 g_654 = {18,248UL,5,-12,-7};
static volatile struct S0 g_675 = {-19,0x23L,14,8,20};
static volatile struct S0 g_676[8] = {{29,255UL,4,-3,45},{-4,0UL,18,15,-4},{29,255UL,4,-3,45},{29,255UL,4,-3,45},{-4,0UL,18,15,-4},{29,255UL,4,-3,45},{29,255UL,4,-3,45},{-4,0UL,18,15,-4}};
static volatile unsigned g_701 = 4294967295UL;
static short g_716[1][2] = {{0x8212L,0x8212L}};
static struct S0 g_717[7][6][6] = {{{{-18,1UL,20,-21,32},{-20,0x07L,17,8,-43},{-0,249UL,9,-10,34},{-24,0x19L,9,13,43},{-1,0xC6L,5,0,-11},{-17,1UL,6,-5,-43}},{{-4,0UL,2,-6,61},{2,0x08L,11,21,-33},{-23,255UL,4,10,15},{-28,0xE3L,8,-9,-47},{24,247UL,4,6,54},{10,0xE2L,7,7,7}},{{-10,0xDBL,16,-10,-46},{22,0xF1L,10,-10,19},{-20,0x07L,17,8,-43},{-30,0xAFL,4,-14,-37},{-17,0x01L,0,-21,57},{-17,0x01L,0,-21,57}},{{-17,0xD3L,12,-5,-27},{-10,0xDBL,16,-10,-46},{-10,0xDBL,16,-10,-46},{-17,0xD3L,12,-5,-27},{-18,1UL,20,-21,32},{-17,0x98L,15,0,-56}},{{-11,3UL,12,14,-28},{-15,0xEFL,17,-5,-32},{-24,0x19L,9,13,43},{-14,9UL,9,-20,-34},{5,0x66L,5,-15,-44},{-11,3UL,12,14,-28}},{{8,0x42L,12,-9,32},{-20,0x07L,17,8,-43},{-28,0xE3L,8,-9,-47},{-17,0x98L,15,0,-56},{5,0x66L,5,-15,-44},{7,6UL,3,4,-17}}},{{{21,1UL,13,2,-22},{29,0xA5L,11,4,-52},{12,0x6BL,17,-4,18},{-17,253UL,7,-3,-19},{-2,1UL,6,20,12},{24,247UL,4,6,54}},{{-1,0xC6L,5,0,-11},{-14,9UL,9,-20,-34},{10,0xE2L,7,7,7},{-28,0x8CL,2,-0,-58},{-13,250UL,9,20,-0},{-12,0xCFL,3,-14,-49}},{{12,0x6BL,17,-4,18},{-24,0x19L,9,13,43},{-30,0xAFL,4,-14,-37},{-19,252UL,4,7,-48},{18,0x43L,11,-16,61},{-20,0x07L,17,8,-43}},{{-15,0xEFL,17,-5,-32},{-17,0x01L,0,-21,57},{29,0x15L,10,-16,-4},{-27,254UL,13,21,-1},{4,0x7EL,8,3,7},{-13,250UL,9,20,-0}},{{29,0xA5L,11,4,-52},{-15,0xEFL,17,-5,-32},{21,1UL,13,2,-22},{24,3UL,10,9,50},{-17,0x01L,0,-21,57},{5,0x66L,5,-15,-44}},{{-10,0xDBL,16,-10,-46},{7,6UL,3,4,-17},{4,0x7EL,8,3,7},{7,6UL,3,4,-17},{-10,0xDBL,16,-10,-46},{-27,254UL,13,21,-1}}},{{{24,3UL,10,9,50},{-20,0x07L,17,8,-43},{-11,3UL,12,14,-28},{-28,0xE3L,8,-9,-47},{-11,0UL,2,10,-58},{2,0x4CL,9,-20,-18}},{{-17,0xD3L,12,-5,-27},{-31,0x18L,12,-15,52},{12,0x6BL,17,-4,18},{-20,0x07L,17,8,-43},{-24,0x19L,9,13,43},{2,0x4CL,9,-20,-18}},{{-23,255UL,4,10,15},{-24,9UL,5,9,59},{-11,3UL,12,14,-28},{-28,0x8CL,2,-0,-58},{-30,0xAFL,4,-14,-37},{-27,254UL,13,21,-1}},{{-24,0x19L,9,13,43},{12,0x6BL,17,-4,18},{4,0x7EL,8,3,7},{11,0x36L,9,14,57},{18,0x43L,11,-16,61},{5,0x66L,5,-15,-44}},{{-26,0x1FL,9,5,-14},{-23,255UL,4,10,15},{21,1UL,13,2,-22},{-12,0xCFL,3,-14,-49},{26,0x07L,10,-19,-1},{-13,250UL,9,20,-0}},{{7,6UL,3,4,-17},{-26,0x1FL,9,5,-14},{29,0x15L,10,-16,-4},{29,0xA5L,11,4,-52},{6,0xE9L,11,-20,-18},{-20,0x07L,17,8,-43}}},{{{-10,0xDBL,16,-10,-46},{24,247UL,4,6,54},{-30,0xAFL,4,-14,-37},{8,0x42L,12,-9,32},{11,0x36L,9,14,57},{-12,0xCFL,3,-14,-49}},{{24,247UL,4,6,54},{-20,0x07L,17,8,-43},{10,0xE2L,7,7,7},{10,0xE2L,7,7,7},{-20,0x07L,17,8,-43},{24,247UL,4,6,54}},{{29,0x15L,10,-16,-4},{2,0x4CL,9,-20,-18},{12,0x6BL,17,-4,18},{-17,1UL,6,-5,-43},{24,3UL,10,9,50},{-17,253UL,7,-3,-19}},{{8,0x42L,12,-9,32},{10,0xE2L,7,7,7},{6,0xE9L,11,-20,-18},{-18,1UL,20,-21,32},{2,0x08L,11,21,-33},{-1,0xC6L,5,0,-11}},{{8,0x42L,12,-9,32},{24,247UL,4,6,54},{-18,1UL,20,-21,32},{-17,1UL,6,-5,-43},{-15,0xEFL,17,-5,-32},{-0,249UL,9,-10,34}},{{-17,0x98L,15,0,-56},{24,3UL,10,9,50},{-27,254UL,13,21,-1},{-17,0x01L,0,-21,57},{-18,1UL,20,-21,32},{-4,0UL,2,-6,61}}},{{{-20,0x07L,17,8,-43},{-17,0x98L,15,0,-56},{-11,3UL,12,14,-28},{11,0x36L,9,14,57},{29,0xA5L,11,4,-52},{-13,250UL,9,20,-0}},{{4,0x7EL,8,3,7},{5,0x66L,5,-15,-44},{16,0x3BL,3,8,31},{-10,0xDBL,16,-10,-46},{-13,250UL,9,20,-0},{-17,0x01L,0,-21,57}},{{-17,253UL,7,-3,-19},{-30,0xAFL,4,-14,-37},{12,0x6BL,17,-4,18},{-2,1UL,6,20,12},{-28,0x8CL,2,-0,-58},{-11,0UL,2,10,-58}},{{16,0x0BL,16,11,-59},{11,0x36L,9,14,57},{2,0x4CL,9,-20,-18},{-0,249UL,9,-10,34},{2,0x4CL,9,-20,-18},{11,0x36L,9,14,57}},{{7,6UL,3,4,-17},{-28,0xE3L,8,-9,-47},{-24,0x19L,9,13,43},{-18,1UL,20,-21,32},{16,0x3BL,3,8,31},{12,0x6BL,17,-4,18}},{{29,0xA5L,11,4,-52},{-31,0x18L,12,-15,52},{2,0x08L,11,21,-33},{-30,0xAFL,4,-14,-37},{-15,0xEFL,17,-5,-32},{-28,0x8CL,2,-0,-58}}},{{{-28,0xE3L,8,-9,-47},{-31,0x18L,12,-15,52},{16,0x0BL,16,11,-59},{6,0xE9L,11,-20,-18},{16,0x3BL,3,8,31},{-4,0UL,2,-6,61}},{{5,0x66L,5,-15,-44},{-28,0xE3L,8,-9,-47},{-12,0xCFL,3,-14,-49},{-17,253UL,7,-3,-19},{2,0x4CL,9,-20,-18},{4,0x7EL,8,3,7}},{{4,0x7EL,8,3,7},{11,0x36L,9,14,57},{18,0x43L,11,-16,61},{5,0x66L,5,-15,-44},{-28,0x8CL,2,-0,-58},{6,0xE9L,11,-20,-18}},{{-10,0xDBL,16,-10,-46},{-30,0xAFL,4,-14,-37},{-2,1UL,6,20,12},{-24,0x19L,9,13,43},{-13,250UL,9,20,-0},{5,0x66L,5,-15,-44}},{{-11,3UL,12,14,-28},{5,0x66L,5,-15,-44},{2,0x4CL,9,-20,-18},{-28,0x8CL,2,-0,-58},{29,0xA5L,11,4,-52},{-10,0xDBL,16,-10,-46}},{{2,0x4CL,9,-20,-18},{-17,0x98L,15,0,-56},{-23,255UL,4,10,15},{-18,1UL,20,-21,32},{-18,1UL,20,-21,32},{-23,255UL,4,10,15}}},{{{24,3UL,10,9,50},{24,3UL,10,9,50},{-4,0UL,2,-6,61},{-28,0xE3L,8,-9,-47},{29,0xA5L,11,4,-52},{-17,0x98L,15,0,-56}},{{-17,253UL,7,-3,-19},{18,0x43L,11,-16,61},{-11,0UL,2,10,-58},{-0,249UL,9,-10,34},{-17,0x01L,0,-21,57},{6,0xE9L,11,-20,-18}},{{-26,0x1FL,9,5,-14},{-17,253UL,7,-3,-19},{-11,0UL,2,10,-58},{-24,9UL,5,9,59},{22,0xF1L,10,-10,19},{-17,0x98L,15,0,-56}},{{-27,254UL,13,21,-1},{-24,9UL,5,9,59},{6,0xE9L,11,-20,-18},{29,0x15L,10,-16,-4},{-11,3UL,12,14,-28},{-0,249UL,9,-10,34}},{{29,0x15L,10,-16,-4},{-11,3UL,12,14,-28},{-0,249UL,9,-10,34},{4,0x7EL,8,3,7},{16,0x0BL,16,11,-59},{-14,9UL,9,-20,-34}},{{-19,252UL,4,7,-48},{-15,0xEFL,17,-5,-32},{2,247UL,11,9,37},{-17,0x98L,15,0,-56},{18,0x43L,11,-16,61},{21,1UL,13,2,-22}}}};
static unsigned g_733 = 0x708A1966L;
static struct S0 g_739 = {6,0x56L,10,18,-43};
static struct S0 g_740 = {-7,252UL,19,4,-13};
static struct S0 g_752[1] = {{-4,1UL,1,6,41}};
static struct S0 g_851 = {-28,1UL,18,-12,-50};
static struct S0 g_852 = {-7,0x73L,6,12,49};
static struct S0 g_858 = {-7,0UL,0,4,18};
static volatile short g_861 = 0x3430L;
static const volatile struct S0 g_875[4] = {{-29,0xCEL,18,-16,-21},{-29,0xCEL,18,-16,-21},{-29,0xCEL,18,-16,-21},{-29,0xCEL,18,-16,-21}};
static volatile struct S0 g_876 = {6,0xCDL,2,-17,-33};
static struct S0 g_877 = {-23,4UL,7,7,59};
static struct S0 g_878[6] = {{18,0xE0L,20,19,62},{21,0xC4L,2,17,32},{18,0xE0L,20,19,62},{18,0xE0L,20,19,62},{21,0xC4L,2,17,32},{18,0xE0L,20,19,62}};
static struct S0 g_959 = {4,0x0FL,0,12,13};
static volatile struct S0 g_990[4][7][4] = {{{{8,0UL,20,21,-4},{-21,0x5DL,16,16,20},{-1,1UL,3,-21,3},{-11,0xB4L,7,16,-31}},{{-6,8UL,7,-16,18},{10,2UL,17,-7,-18},{5,248UL,15,-3,20},{-21,0x5DL,16,16,20}},{{-15,0x19L,1,-1,-22},{9,2UL,0,9,46},{5,248UL,15,-3,20},{-27,0UL,8,-13,19}},{{-6,8UL,7,-16,18},{-0,0xD7L,10,-13,-16},{-1,1UL,3,-21,3},{15,0x7DL,11,5,-58}},{{8,0UL,20,21,-4},{-25,0x0EL,7,-4,-5},{-0,0x6BL,6,-12,38},{23,0UL,15,21,-33}},{{-0,0x6BL,6,-12,38},{23,0UL,15,21,-33},{13,5UL,14,11,29},{23,0UL,15,21,-33}},{{5,248UL,15,-3,20},{-25,0x0EL,7,-4,-5},{3,0UL,12,11,-21},{15,0x7DL,11,5,-58}}},{{{-18,0UL,4,20,-43},{-0,0xD7L,10,-13,-16},{-19,0xB6L,3,-0,60},{-27,0UL,8,-13,19}},{{3,0UL,12,11,-21},{9,2UL,0,9,46},{12,0xBEL,11,-13,50},{-21,0x5DL,16,16,20}},{{3,0UL,12,11,-21},{10,2UL,17,-7,-18},{-19,0xB6L,3,-0,60},{-11,0xB4L,7,16,-31}},{{-18,0UL,4,20,-43},{-21,0x5DL,16,16,20},{3,0UL,12,11,-21},{-0,0xD7L,10,-13,-16}},{{5,248UL,15,-3,20},{-29,5UL,21,18,58},{13,5UL,14,11,29},{10,2UL,17,-7,-18}},{{-0,0x6BL,6,-12,38},{-29,5UL,21,18,58},{-0,0x6BL,6,-12,38},{9,2UL,0,9,46}},{{-0,0x6BL,6,-12,38},{-0,0xD7L,10,-13,-16},{3,0UL,12,11,-21},{-21,0x5DL,16,16,20}}},{{{12,0xBEL,11,-13,50},{-25,255UL,13,-4,-31},{-29,246UL,14,-5,20},{-0,0xD7L,10,-13,-16}},{{-1,1UL,3,-21,3},{-25,0x0EL,7,-4,-5},{-29,246UL,14,-5,20},{20,1UL,20,21,-60}},{{12,0xBEL,11,-13,50},{9,2UL,0,9,46},{3,0UL,12,11,-21},{-11,0xB4L,7,16,-31}},{{-0,0x6BL,6,-12,38},{-27,0UL,8,-13,19},{-6,8UL,7,-16,18},{19,2UL,7,-14,40}},{{-6,8UL,7,-16,18},{19,2UL,7,-14,40},{-19,0xB6L,3,-0,60},{19,2UL,7,-14,40}},{{-29,246UL,14,-5,20},{-27,0UL,8,-13,19},{13,5UL,14,11,29},{-11,0xB4L,7,16,-31}},{{8,0UL,20,21,-4},{9,2UL,0,9,46},{-18,0UL,4,20,-43},{20,1UL,20,21,-60}}},{{{13,5UL,14,11,29},{-25,0x0EL,7,-4,-5},{22,0x36L,15,-4,48},{-0,0xD7L,10,-13,-16}},{{13,5UL,14,11,29},{-25,255UL,13,-4,-31},{-18,0UL,4,20,-43},{-21,0x5DL,16,16,20}},{{8,0UL,20,21,-4},{-0,0xD7L,10,-13,-16},{13,5UL,14,11,29},{9,2UL,0,9,46}},{{-29,246UL,14,-5,20},{15,0x7DL,11,5,-58},{-19,0xB6L,3,-0,60},{-25,255UL,13,-4,-31}},{{-6,8UL,7,-16,18},{15,0x7DL,11,5,-58},{-6,8UL,7,-16,18},{9,2UL,0,9,46}},{{-0,0x6BL,6,-12,38},{-0,0xD7L,10,-13,-16},{3,0UL,12,11,-21},{-21,0x5DL,16,16,20}},{{12,0xBEL,11,-13,50},{-25,255UL,13,-4,-31},{-29,246UL,14,-5,20},{-0,0xD7L,10,-13,-16}}}};
static volatile struct S0 g_991 = {25,0x24L,6,-12,20};
static const struct S0 g_1000 = {-26,8UL,16,17,27};
static struct S0 g_1012 = {-22,1UL,5,5,-37};
static struct S0 g_1013 = {-28,7UL,18,-7,2};
static struct S0 g_1014[3][10][6] = {{{{4,249UL,8,18,50},{-14,0x60L,3,-8,31},{30,7UL,14,13,35},{18,0x05L,21,21,-34},{6,0UL,21,10,-36},{23,0x87L,13,19,18}},{{-10,253UL,16,-18,-4},{-24,0x85L,20,4,53},{30,255UL,21,19,6},{-22,0xACL,12,19,14},{-13,6UL,19,16,-18},{-28,0xCDL,7,-2,-56}},{{6,0UL,21,10,-36},{-24,0x85L,20,4,53},{16,0UL,4,-20,62},{-24,0x85L,20,4,53},{6,0UL,21,10,-36},{23,0x3DL,6,-3,63}},{{-31,0x54L,12,-5,40},{-14,0x60L,3,-8,31},{-10,253UL,16,-18,-4},{-28,0xCDL,7,-2,-56},{30,255UL,21,19,6},{-14,0x60L,3,-8,31}},{{6,0UL,21,10,-36},{18,0x05L,21,21,-34},{30,7UL,14,13,35},{-14,0x60L,3,-8,31},{4,249UL,8,18,50},{-14,0x60L,3,-8,31}},{{-10,253UL,16,-18,-4},{-28,1UL,5,20,20},{-10,253UL,16,-18,-4},{23,0x87L,13,19,18},{-13,6UL,19,16,-18},{23,0x3DL,6,-3,63}},{{4,249UL,8,18,50},{23,0x3DL,6,-3,63},{16,0UL,4,-20,62},{-28,1UL,5,20,20},{4,249UL,8,18,50},{-28,0xCDL,7,-2,-56}},{{-31,0x54L,12,-5,40},{23,0x87L,13,19,18},{30,255UL,21,19,6},{-28,1UL,5,20,20},{30,255UL,21,19,6},{23,0x87L,13,19,18}},{{4,249UL,8,18,50},{-22,0xACL,12,19,14},{30,7UL,14,13,35},{23,0x87L,13,19,18},{6,0UL,21,10,-36},{18,0x05L,21,21,-34}},{{-10,253UL,16,-18,-4},{-28,0xCDL,7,-2,-56},{30,255UL,21,19,6},{-14,0x60L,3,-8,31},{-13,6UL,19,16,-18},{-24,0x85L,20,4,53}}},{{{6,0UL,21,10,-36},{-28,0xCDL,7,-2,-56},{16,0UL,4,-20,62},{-28,0xCDL,7,-2,-56},{6,0UL,21,10,-36},{-28,1UL,5,20,20}},{{-31,0x54L,12,-5,40},{-22,0xACL,12,19,14},{-10,253UL,16,-18,-4},{-24,0x85L,20,4,53},{30,255UL,21,19,6},{-22,0xACL,12,19,14}},{{6,0UL,21,10,-36},{23,0x87L,13,19,18},{30,7UL,14,13,35},{-22,0xACL,12,19,14},{4,249UL,8,18,50},{-22,0xACL,12,19,14}},{{-10,253UL,16,-18,-4},{23,0x3DL,6,-3,63},{-10,253UL,16,-18,-4},{18,0x05L,21,21,-34},{-13,6UL,19,16,-18},{-28,1UL,5,20,20}},{{4,249UL,8,18,50},{-28,1UL,5,20,20},{16,0UL,4,-20,62},{23,0x3DL,6,-3,63},{4,249UL,8,18,50},{-24,0x85L,20,4,53}},{{-31,0x54L,12,-5,40},{18,0x05L,21,21,-34},{30,255UL,21,19,6},{23,0x3DL,6,-3,63},{30,255UL,21,19,6},{18,0x05L,21,21,-34}},{{4,249UL,8,18,50},{-14,0x60L,3,-8,31},{30,7UL,14,13,35},{18,0x05L,21,21,-34},{6,0UL,21,10,-36},{23,0x87L,13,19,18}},{{-10,253UL,16,-18,-4},{-24,0x85L,20,4,53},{30,255UL,21,19,6},{-22,0xACL,12,19,14},{-13,6UL,19,16,-18},{-28,0xCDL,7,-2,-56}},{{6,0UL,21,10,-36},{-24,0x85L,20,4,53},{16,0UL,4,-20,62},{-24,0x85L,20,4,53},{6,0UL,21,10,-36},{23,0x3DL,6,-3,63}},{{-31,0x54L,12,-5,40},{-14,0x60L,3,-8,31},{-10,253UL,16,-18,-4},{-28,0xCDL,7,-2,-56},{30,255UL,21,19,6},{-14,0x60L,3,-8,31}}},{{{6,0UL,21,10,-36},{18,0x05L,21,21,-34},{30,7UL,14,13,35},{-14,0x60L,3,-8,31},{4,249UL,8,18,50},{-14,0x60L,3,-8,31}},{{-10,253UL,16,-18,-4},{-28,1UL,5,20,20},{-10,253UL,16,-18,-4},{23,0x87L,13,19,18},{-13,6UL,19,16,-18},{23,0x3DL,6,-3,63}},{{4,249UL,8,18,50},{23,0x3DL,6,-3,63},{16,0UL,4,-20,62},{-28,1UL,5,20,20},{4,249UL,8,18,50},{-28,0xCDL,7,-2,-56}},{{-31,0x54L,12,-5,40},{23,0x87L,13,19,18},{30,255UL,21,19,6},{-28,1UL,5,20,20},{30,255UL,21,19,6},{23,0x87L,13,19,18}},{{4,249UL,8,18,50},{-22,0xACL,12,19,14},{30,7UL,14,13,35},{23,0x87L,13,19,18},{6,0UL,21,10,-36},{18,0x05L,21,21,-34}},{{-10,253UL,16,-18,-4},{-28,0xCDL,7,-2,-56},{30,255UL,21,19,6},{-14,0x60L,3,-8,31},{-13,6UL,19,16,-18},{-24,0x85L,20,4,53}},{{6,0UL,21,10,-36},{-28,0xCDL,7,-2,-56},{16,0UL,4,-20,62},{-28,0xCDL,7,-2,-56},{6,0UL,21,10,-36},{-28,1UL,5,20,20}},{{-31,0x54L,12,-5,40},{-22,0xACL,12,19,14},{-10,253UL,16,-18,-4},{-24,0x85L,20,4,53},{30,255UL,21,19,6},{-22,0xACL,12,19,14}},{{6,0UL,21,10,-36},{23,0x87L,13,19,18},{30,7UL,14,13,35},{-22,0xACL,12,19,14},{4,249UL,8,18,50},{-22,0xACL,12,19,14}},{{-10,253UL,16,-18,-4},{23,0x3DL,6,-3,63},{-10,253UL,16,-18,-4},{18,0x05L,21,21,-34},{-13,6UL,19,16,-18},{-28,1UL,5,20,20}}}};
static struct S0 g_1033 = {31,0x58L,19,7,-14};
static volatile struct S0 g_1066 = {6,0x4AL,11,3,41};
static volatile struct S0 g_1067 = {-23,255UL,19,20,14};
static unsigned g_1132 = 0x316589CDL;
static struct S0 g_1135[4] = {{11,0x43L,10,6,27},{11,0x43L,10,6,27},{11,0x43L,10,6,27},{11,0x43L,10,6,27}};
static volatile struct S0 g_1138 = {-30,0UL,13,-15,-14};
static const struct S0 g_1247 = {2,0xEBL,2,15,-13};
static struct S0 g_1248 = {26,7UL,3,19,-6};
static volatile struct S0 g_1249 = {-24,1UL,14,-8,-7};
static struct S0 g_1274 = {-6,255UL,15,-19,-32};
static volatile struct S0 g_1278 = {-6,0x65L,5,16,-46};
static unsigned g_1332 = 0UL;
static volatile struct S0 g_1355[9] = {{16,247UL,2,-2,-25},{16,247UL,2,-2,-25},{16,247UL,2,-2,-25},{16,247UL,2,-2,-25},{16,247UL,2,-2,-25},{16,247UL,2,-2,-25},{16,247UL,2,-2,-25},{16,247UL,2,-2,-25},{16,247UL,2,-2,-25}};
static struct S0 g_1389 = {25,0xE8L,16,-3,-6};
static volatile unsigned short g_1415[8][1][10] = {{{0xBEA3L,0x44DDL,65533UL,0x7C29L,1UL,0x7C29L,65533UL,0x44DDL,0xBEA3L,65535UL}},{{1UL,65533UL,65530UL,1UL,8UL,65528UL,0xCCE8L,0xA49EL,0x5CBBL,0xCC20L}},{{0x7C29L,0xCC20L,1UL,1UL,0xA49EL,0xFD54L,0xCCB0L,1UL,0xBEA3L,0xBEA3L}},{{65533UL,0xA49EL,65530UL,65528UL,65528UL,65530UL,0xCC20L,0xB1E1L,0xFD54L,0x44DDL}},{{0xBEA3L,0xB1E1L,8UL,65533UL,0x31ECL,0x4DB4L,6UL,0xFD54L,1UL,65528UL}},{{65535UL,65530UL,8UL,0x31ECL,0x4E1FL,0xFD54L,0x40AEL,0xB1E1L,0xDFD7L,0xB1E1L}},{{1UL,65533UL,65530UL,0x44DDL,65530UL,65533UL,1UL,65535UL,65533UL,0xBEA3L}},{{0x5CBBL,1UL,0xA49EL,0xBEA3L,0x4DB4L,0x872AL,8UL,0xCC20L,65533UL,65535UL}}};
static struct S0 g_1418 = {-0,0x0FL,2,7,21};
static volatile struct S0 g_1433[3][6][2] = {{{{14,0UL,20,-14,-17},{14,0x1EL,13,11,-29}},{{29,0x1FL,9,8,29},{17,0xF2L,1,-11,25}},{{14,0x1EL,13,11,-29},{-24,0x08L,6,19,-15}},{{31,0xE3L,15,-8,22},{-18,0x6DL,11,-6,-37}},{{17,0xF2L,1,-11,25},{8,247UL,17,4,-38}},{{8,247UL,17,4,-38},{8,247UL,17,4,-38}}},{{{17,0xF2L,1,-11,25},{-18,0x6DL,11,-6,-37}},{{31,0xE3L,15,-8,22},{-24,0x08L,6,19,-15}},{{14,0x1EL,13,11,-29},{17,0xF2L,1,-11,25}},{{29,0x1FL,9,8,29},{14,0x1EL,13,11,-29}},{{14,0UL,20,-14,-17},{2,0xCAL,5,6,5}},{{14,0UL,20,-14,-17},{14,0x1EL,13,11,-29}}},{{{29,0x1FL,9,8,29},{17,0xF2L,1,-11,25}},{{14,0x1EL,13,11,-29},{-24,0x08L,6,19,-15}},{{31,0xE3L,15,-8,22},{-18,0x6DL,11,-6,-37}},{{17,0xF2L,1,-11,25},{8,247UL,17,4,-38}},{{8,247UL,17,4,-38},{8,247UL,17,4,-38}},{{17,0xF2L,1,-11,25},{-18,0x6DL,11,-6,-37}}}};
static unsigned g_1452 = 0x77A27039L;
static volatile struct S0 g_1457 = {2,0x65L,17,-4,-29};
static volatile struct S0 g_1460 = {-22,1UL,11,-7,14};
static volatile struct S0 g_1461 = {-13,0x07L,18,-10,-56};
static volatile struct S0 g_1464 = {-2,8UL,4,-17,-38};
static struct S0 g_1480 = {29,0xD7L,7,21,4};
static struct S0 g_1485 = {-2,0x68L,16,19,-10};
static struct S0 g_1486 = {-7,0x49L,7,-14,-22};
static unsigned g_1531 = 0x605C56A0L;
static int g_1533 = 0x31110089L;
static struct S0 g_1549 = {3,254UL,14,11,-17};
static struct S0 g_1573 = {-9,1UL,10,-15,17};
static int g_1601 = 0xC86FBE93L;
static unsigned g_1622 = 0x1EF31CA5L;
static struct S0 g_1648 = {2,0xB8L,3,14,57};
static unsigned short g_1659[6] = {0xFE6FL,0xFE6FL,65535UL,0xFE6FL,0xFE6FL,65535UL};
static struct S0 g_1700 = {-12,0x4EL,12,-8,-31};
static volatile struct S0 g_1703 = {2,0UL,17,7,6};
static int g_1744 = 0x408A532AL;
static volatile struct S0 g_1778 = {8,7UL,2,18,-17};
static volatile struct S0 g_1779[10] = {{10,0x3EL,21,-15,-35},{10,0x3EL,21,-15,-35},{10,0x3EL,21,-15,-35},{10,0x3EL,21,-15,-35},{10,0x3EL,21,-15,-35},{10,0x3EL,21,-15,-35},{10,0x3EL,21,-15,-35},{10,0x3EL,21,-15,-35},{10,0x3EL,21,-15,-35},{10,0x3EL,21,-15,-35}};
static volatile unsigned g_1797 = 4294967295UL;
static struct S0 g_1817 = {26,4UL,7,12,-19};
static volatile struct S0 g_1843[6][9][4] = {{{{13,246UL,16,17,-61},{-21,0UL,21,-21,30},{-1,1UL,17,16,-43},{-28,8UL,18,16,-8}},{{10,0x20L,7,-7,54},{-27,0xF2L,14,19,18},{-27,0xF2L,14,19,18},{10,0x20L,7,-7,54}},{{-21,0UL,21,-21,30},{-12,0xACL,0,-6,52},{13,246UL,16,17,-61},{-20,0xDBL,2,-10,22}},{{31,0x86L,17,-0,-0},{-31,255UL,2,-5,-58},{19,0x5CL,0,10,-24},{-1,1UL,17,16,-43}},{{19,250UL,14,-0,13},{17,0x10L,1,-8,-31},{28,0x41L,14,-7,37},{-1,1UL,17,16,-43}},{{-20,254UL,21,-12,29},{-31,255UL,2,-5,-58},{-28,8UL,18,16,-8},{-20,0xDBL,2,-10,22}},{{15,0xDAL,4,15,-26},{-12,0xACL,0,-6,52},{-3,0x2EL,1,12,-45},{10,0x20L,7,-7,54}},{{22,251UL,5,5,-8},{-27,0xF2L,14,19,18},{-17,0xD7L,17,10,26},{-28,8UL,18,16,-8}},{{18,0x76L,16,21,-24},{-21,0UL,21,-21,30},{-22,0x38L,16,-19,40},{19,250UL,14,-0,13}}},{{{-27,0xF2L,14,19,18},{18,0x76L,16,21,-24},{13,246UL,16,17,-61},{3,5UL,1,-21,-30}},{{-22,0x38L,16,-19,40},{-20,254UL,21,-12,29},{-21,0UL,21,-21,30},{-26,255UL,19,-7,63}},{{12,0x27L,4,-12,-23},{17,0x10L,1,-8,-31},{-12,0x90L,12,-15,-11},{-9,9UL,16,4,18}},{{-18,0UL,6,-0,-7},{-18,1UL,14,-11,19},{7,0x70L,19,-3,-12},{15,0xDAL,4,15,-26}},{{15,0xDAL,4,15,-26},{12,0x27L,4,-12,-23},{24,0x40L,2,2,53},{12,0x27L,4,-12,-23}},{{-26,4UL,8,-3,24},{19,0x5CL,0,10,-24},{-26,255UL,19,-7,63},{-28,8UL,18,16,-8}},{{-12,0xACL,0,-6,52},{13,0x68L,18,3,27},{31,0x44L,21,4,33},{18,0x76L,16,21,-24}},{{19,0x5CL,0,10,-24},{10,0x20L,7,-7,54},{13,246UL,16,17,-61},{17,0x10L,1,-8,-31}},{{19,0x5CL,0,10,-24},{-18,0UL,6,-0,-7},{31,0x44L,21,4,33},{28,0x41L,14,-7,37}}},{{{-12,0xACL,0,-6,52},{17,0x10L,1,-8,-31},{-26,255UL,19,-7,63},{-12,0x90L,12,-15,-11}},{{-26,4UL,8,-3,24},{13,246UL,16,17,-61},{24,0x40L,2,2,53},{-7,0x7EL,0,3,-26}},{{15,0xDAL,4,15,-26},{19,250UL,14,-0,13},{7,0x70L,19,-3,-12},{-15,0x02L,8,-10,-36}},{{-18,0UL,6,-0,-7},{-22,0x38L,16,-19,40},{-12,0x90L,12,-15,-11},{-28,8UL,18,16,-8}},{{12,0x27L,4,-12,-23},{31,0x44L,21,4,33},{-21,0UL,21,-21,30},{18,0x29L,17,21,-47}},{{23,7UL,15,-0,-23},{-28,0xDCL,2,11,31},{-20,248UL,19,11,-60},{13,0x68L,18,3,27}},{{-12,0xACL,0,-6,52},{-28,8UL,18,16,-8},{23,7UL,15,-0,-23},{15,0xDAL,4,15,-26}},{{10,0xFFL,13,-19,-8},{-22,0x38L,16,-19,40},{-23,0x62L,19,-6,0},{-23,0x62L,19,-6,0}},{{24,0x40L,2,2,53},{24,0x40L,2,2,53},{28,0x41L,14,-7,37},{19,0x5CL,0,10,-24}}},{{{-27,0xF2L,14,19,18},{18,0x29L,17,21,-47},{-9,9UL,16,4,18},{-23,1UL,13,3,-53}},{{-3,0x2EL,1,12,-45},{12,0x27L,4,-12,-23},{3,5UL,1,-21,-30},{-9,9UL,16,4,18}},{{8,9UL,19,-14,-61},{12,0x27L,4,-12,-23},{10,0x20L,7,-7,54},{-23,1UL,13,3,-53}},{{12,0x27L,4,-12,-23},{18,0x29L,17,21,-47},{-20,248UL,19,11,-60},{19,0x5CL,0,10,-24}},{{19,250UL,14,-0,13},{24,0x40L,2,2,53},{-12,0xACL,0,-6,52},{-23,0x62L,19,-6,0}},{{-3,0UL,1,19,35},{-22,0x38L,16,-19,40},{-7,0x7EL,0,3,-26},{15,0xDAL,4,15,-26}},{{-20,248UL,19,11,-60},{-28,8UL,18,16,-8},{25,255UL,20,-4,-55},{13,0x68L,18,3,27}},{{-27,0xF2L,14,19,18},{-28,0xDCL,2,11,31},{-12,0x90L,12,-15,-11},{18,0x29L,17,21,-47}},{{7,0x70L,19,-3,-12},{18,0x76L,16,21,-24},{-20,0xDBL,2,-10,22},{-9,9UL,16,4,18}}},{{{18,0x29L,17,21,-47},{23,7UL,15,-0,-23},{12,0x27L,4,-12,-23},{-28,0xDCL,2,11,31}},{{18,0x76L,16,21,-24},{8,9UL,19,-14,-61},{-20,248UL,19,11,-60},{31,0x44L,21,4,33}},{{-15,0x02L,8,-10,-36},{-20,248UL,19,11,-60},{-15,0x02L,8,-10,-36},{17,0x10L,1,-8,-31}},{{-28,0xDCL,2,11,31},{-22,0x38L,16,-19,40},{15,0xDAL,4,15,-26},{3,5UL,1,-21,-30}},{{14,0UL,18,9,-3},{-18,0x93L,8,13,-23},{-17,0xD7L,17,10,26},{-22,0x38L,16,-19,40}},{{-27,0xF2L,14,19,18},{-3,0UL,1,19,35},{-17,0xD7L,17,10,26},{10,0xFFL,13,-19,-8}},{{14,0UL,18,9,-3},{-15,0x02L,8,-10,-36},{15,0xDAL,4,15,-26},{-9,9UL,16,4,18}},{{-28,0xDCL,2,11,31},{10,0x20L,7,-7,54},{-15,0x02L,8,-10,-36},{24,0x4FL,19,13,36}},{{-15,0x02L,8,-10,-36},{24,0x4FL,19,13,36},{-20,248UL,19,11,-60},{-27,0xF2L,14,19,18}}},{{{18,0x76L,16,21,-24},{14,0UL,18,9,-3},{12,0x27L,4,-12,-23},{-20,0xDBL,2,-10,22}},{{18,0x29L,17,21,-47},{-22,0x38L,16,-19,40},{-18,0x93L,8,13,-23},{-28,8UL,18,16,-8}},{{10,0xFFL,13,-19,-8},{8,9UL,19,-14,-61},{13,246UL,16,17,-61},{-1,1UL,17,16,-43}},{{-26,255UL,19,-7,63},{-22,0x38L,16,-19,40},{22,251UL,5,5,-8},{31,0x44L,21,4,33}},{{-23,1UL,13,3,-53},{-7,0x7EL,0,3,-26},{14,0UL,18,9,-3},{-18,0UL,6,-0,-7}},{{-21,0UL,21,-21,30},{5,0xA4L,6,2,-55},{5,0xA4L,6,2,-55},{-21,0UL,21,-21,30}},{{-7,0x7EL,0,3,-26},{13,0x68L,18,3,27},{-23,1UL,13,3,-53},{-17,0xD7L,17,10,26}},{{-23,0x62L,19,-6,0},{10,0xFFL,13,-19,-8},{3,5UL,1,-21,-30},{14,0UL,18,9,-3}},{{31,0x44L,21,4,33},{25,255UL,20,-4,-55},{7,0x70L,19,-3,-12},{14,0UL,18,9,-3}}}};
static volatile struct S0 g_1844 = {5,0xC7L,18,3,-58};
static volatile struct S0 g_1845 = {13,1UL,3,21,5};
static unsigned short g_1846 = 4UL;
static volatile struct S0 g_1849 = {-3,1UL,18,21,-30};
static struct S0 g_1852 = {-18,0xD3L,20,-13,-25};
static volatile char g_1855 = 0xA4L;
static char g_1915[4] = {0x51L,0x51L,0x51L,0x51L};
static volatile struct S0 g_1969[7] = {{-18,0x18L,15,-3,-42},{-18,0x18L,15,-3,-42},{-18,0x18L,15,-3,-42},{-18,0x18L,15,-3,-42},{-18,0x18L,15,-3,-42},{-18,0x18L,15,-3,-42},{-18,0x18L,15,-3,-42}};
static volatile struct S0 g_1970[5] = {{-31,0x26L,7,15,31},{-31,0x26L,7,15,31},{-31,0x26L,7,15,31},{-31,0x26L,7,15,31},{-31,0x26L,7,15,31}};
static struct S0 g_1971 = {23,5UL,12,-9,41};
static struct S0 g_1972[10] = {{-25,0xE6L,17,7,-34},{-25,0xE6L,17,7,-34},{-25,0xE6L,17,7,-34},{-25,0xE6L,17,7,-34},{-25,0xE6L,17,7,-34},{-25,0xE6L,17,7,-34},{-25,0xE6L,17,7,-34},{-25,0xE6L,17,7,-34},{-25,0xE6L,17,7,-34},{-25,0xE6L,17,7,-34}};
static volatile struct S0 g_1975[1][1][1] = {{{{5,250UL,21,-8,-20}}}};
static const struct S0 g_1989[5][8][2] = {{{{17,255UL,9,-10,-19},{-7,255UL,2,-0,20}},{{-17,0x7CL,0,-7,-36},{-15,4UL,9,7,-30}},{{-4,2UL,15,-8,63},{-15,4UL,9,7,-30}},{{-17,0x7CL,0,-7,-36},{-7,255UL,2,-0,20}},{{17,255UL,9,-10,-19},{-15,4UL,9,7,-30}},{{-25,254UL,5,-16,-6},{-15,4UL,9,7,-30}},{{17,255UL,9,-10,-19},{-7,255UL,2,-0,20}},{{-17,0x7CL,0,-7,-36},{-15,4UL,9,7,-30}}},{{{-4,2UL,15,-8,63},{-15,4UL,9,7,-30}},{{-17,0x7CL,0,-7,-36},{-7,255UL,2,-0,20}},{{17,255UL,9,-10,-19},{-15,4UL,9,7,-30}},{{-25,254UL,5,-16,-6},{-15,4UL,9,7,-30}},{{17,255UL,9,-10,-19},{-7,255UL,2,-0,20}},{{-17,0x7CL,0,-7,-36},{-15,4UL,9,7,-30}},{{-4,2UL,15,-8,63},{-15,4UL,9,7,-30}},{{-17,0x7CL,0,-7,-36},{-7,255UL,2,-0,20}}},{{{17,255UL,9,-10,-19},{-15,4UL,9,7,-30}},{{-25,254UL,5,-16,-6},{-15,4UL,9,7,-30}},{{17,255UL,9,-10,-19},{-7,255UL,2,-0,20}},{{-17,0x7CL,0,-7,-36},{-15,4UL,9,7,-30}},{{-4,2UL,15,-8,63},{-15,4UL,9,7,-30}},{{-17,0x7CL,0,-7,-36},{-7,255UL,2,-0,20}},{{17,255UL,9,-10,-19},{-15,4UL,9,7,-30}},{{-25,254UL,5,-16,-6},{-15,4UL,9,7,-30}}},{{{17,255UL,9,-10,-19},{-7,255UL,2,-0,20}},{{-17,0x7CL,0,-7,-36},{-15,4UL,9,7,-30}},{{-4,2UL,15,-8,63},{-15,4UL,9,7,-30}},{{-17,0x7CL,0,-7,-36},{-7,255UL,2,-0,20}},{{17,255UL,9,-10,-19},{-15,4UL,9,7,-30}},{{-25,254UL,5,-16,-6},{-15,4UL,9,7,-30}},{{17,255UL,9,-10,-19},{-7,255UL,2,-0,20}},{{-17,0x7CL,0,-7,-36},{-15,4UL,9,7,-30}}},{{{-4,2UL,15,-8,63},{-15,4UL,9,7,-30}},{{-17,0x7CL,0,-7,-36},{-7,255UL,2,-0,20}},{{17,255UL,9,-10,-19},{-15,4UL,9,7,-30}},{{-25,254UL,5,-16,-6},{-15,4UL,9,7,-30}},{{17,255UL,9,-10,-19},{-7,255UL,2,-0,20}},{{-17,0x7CL,0,-7,-36},{-15,4UL,9,7,-30}},{{-4,2UL,15,-8,63},{-15,4UL,9,7,-30}},{{-17,0x7CL,0,-7,-36},{-7,255UL,2,-0,20}}}};
static struct S0 g_2007 = {22,0UL,21,-1,31};
static volatile struct S0 g_2008 = {30,254UL,18,4,-62};
static volatile struct S0 g_2009 = {27,248UL,15,-21,0};
static volatile struct S0 g_2013 = {5,1UL,9,9,55};
static volatile struct S0 g_2014 = {-18,0x36L,11,12,-17};
static int g_2072[1] = {0x4BEFE75DL};
static volatile unsigned char g_2091[2] = {0x61L,0x61L};
static short g_2098 = 6L;
static struct S0 g_2126[10] = {{-26,0x89L,21,-21,23},{-26,0x89L,21,-21,23},{-26,0x89L,21,-21,23},{-26,0x89L,21,-21,23},{-26,0x89L,21,-21,23},{-26,0x89L,21,-21,23},{-26,0x89L,21,-21,23},{-26,0x89L,21,-21,23},{-26,0x89L,21,-21,23},{-26,0x89L,21,-21,23}};
static struct S0 g_2127 = {-9,0x33L,7,11,61};
static struct S0 g_2129 = {12,6UL,13,1,-37};
static volatile struct S0 g_2132[7] = {{-16,0UL,20,12,30},{-6,0xB2L,1,7,-6},{-6,0xB2L,1,7,-6},{-16,0UL,20,12,30},{-6,0xB2L,1,7,-6},{-6,0xB2L,1,7,-6},{-16,0UL,20,12,30}};
static volatile struct S0 g_2133 = {-14,7UL,9,6,-41};
static struct S0 g_2166 = {-5,0UL,14,-17,-33};
static struct S0 g_2167 = {-2,0x8BL,8,8,-14};
static struct S0 g_2194 = {-30,250UL,7,-19,-3};
static volatile struct S0 g_2237 = {21,0xEBL,21,0,48};
static unsigned g_2247 = 4294967295UL;
static short g_2249 = 0xF726L;
static const int g_2271 = 0xD2694479L;
static unsigned g_2307 = 0xD14D15A4L;
static unsigned char g_2342 = 0x25L;
static struct S0 g_2414 = {-24,255UL,15,10,18};
static struct S0 g_2415 = {-6,0x9CL,19,1,-41};
static unsigned char g_2430 = 8UL;
static volatile unsigned char g_2492 = 0UL;
static volatile unsigned g_2519 = 4294967293UL;
static char g_2535[10] = {0x17L,0x17L,0x17L,0x17L,0x17L,0x17L,0x17L,0x17L,0x17L,0x17L};
static short g_2537 = 0L;
static char g_2566 = 1L;
static unsigned g_2592[8][9] = {{6UL,0xAD5CA4A8L,0xAD5CA4A8L,6UL,4294967294UL,6UL,0xAD5CA4A8L,0xAD5CA4A8L,6UL},{9UL,0xAD5CA4A8L,0x38B7B97BL,0xAD5CA4A8L,9UL,9UL,0xAD5CA4A8L,0x38B7B97BL,0xAD5CA4A8L},{0xAD5CA4A8L,4294967294UL,0x38B7B97BL,0x38B7B97BL,4294967294UL,0xAD5CA4A8L,0x38B7B97BL,6UL,6UL},{4294967294UL,4294967294UL,9UL,6UL,9UL,4294967294UL,4294967294UL,9UL,6UL},{0xAD5CA4A8L,0x38B7B97BL,0xAD5CA4A8L,9UL,9UL,0xAD5CA4A8L,0x38B7B97BL,0xAD5CA4A8L,9UL},{0xAD5CA4A8L,9UL,9UL,0xAD5CA4A8L,0x38B7B97BL,0xAD5CA4A8L,9UL,9UL,0xAD5CA4A8L},{4294967294UL,9UL,6UL,9UL,4294967294UL,4294967294UL,9UL,6UL,9UL},{9UL,0x38B7B97BL,6UL,6UL,0x38B7B97BL,9UL,0x38B7B97BL,6UL,6UL}};



static short func_1(void);
static unsigned short func_20(unsigned p_21, unsigned char p_22);
static struct S0 func_23(int p_24, unsigned char p_25, int p_26, unsigned p_27, unsigned p_28);
static int func_29(unsigned p_30, unsigned char p_31, unsigned p_32, char p_33);
static struct S0 func_41(short p_42);
static char func_59(short p_60, unsigned p_61, short p_62, char p_63);
static char func_64(int p_65, const unsigned short p_66, int p_67, unsigned short p_68, const unsigned p_69);
static unsigned func_76(unsigned p_77, unsigned p_78, const unsigned p_79);
static unsigned short func_84(const unsigned short p_85, unsigned char p_86, short p_87, int p_88, const int p_89);
static unsigned char func_112(int p_113, short p_114, unsigned p_115, int p_116);
static short func_1(void)
{
    int l_14 = (-1L);
    int l_15[6][6][1] = {{{0L},{0x1C1D686AL},{0L},{1L},{1L},{0L}},{{0x1C1D686AL},{0L},{1L},{1L},{0L},{0x1C1D686AL}},{{0L},{1L},{1L},{0L},{0x1C1D686AL},{0L}},{{1L},{1L},{0L},{0x1C1D686AL},{0L},{1L}},{{1L},{0L},{0x1C1D686AL},{0L},{1L},{1L}},{{0L},{0x1C1D686AL},{0L},{1L},{1L},{0L}}};
    int l_2274 = (-7L);
    unsigned char l_2301 = 255UL;
    char l_2321 = (-1L);
    unsigned short l_2353 = 65528UL;
    unsigned char l_2369 = 0xBDL;
    unsigned char l_2401 = 246UL;
    int l_2413 = 1L;
    unsigned l_2448 = 4294967288UL;
    int l_2480 = 6L;
    char l_2594 = 0xE0L;
    short l_2612 = (-4L);
    int i, j, k;
    for (g_2 = 24; (g_2 > 16); g_2 = safe_sub_func_uint8_t_u_u(g_2, 5))
    {
        char l_2248 = (-2L);
        int l_2252 = 9L;
        char l_2272 = (-1L);
        unsigned l_2276 = 0x010D2CADL;
        unsigned l_2306 = 0xFD0CC275L;
        int l_2318[1];
        unsigned short l_2319 = 0UL;
        short l_2320[10] = {0xB08CL,0xB08CL,8L,0xB08CL,0xB08CL,8L,0xB08CL,0xB08CL,8L,0xB08CL};
        int i;
        for (i = 0; i < 1; i++)
            l_2318[i] = 0x9B9E970FL;
        if ((g_5[0] = g_2))
        {
            int l_13 = (-1L);
            for (g_7 = 0; (g_7 < 25); g_7 = safe_add_func_uint32_t_u_u(g_7, 1))
            {
                unsigned l_10[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_10[i] = 4294967291UL;
                l_14 ^= ((g_6[0][7][7] , l_10[3]) , (safe_mod_func_int8_t_s_s(0x0EL, l_13)));
            }
        }
        else
        {
            return g_6[0][7][7];
        }
        l_15[5][1][0] = 1L;
        if (((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((g_2098 = ((func_20(l_15[1][4][0], g_6[0][7][3]) <= g_1744) == (((l_2248 = g_1480.f2) < (g_2249 ^= 0xB35A5BBFL)) != g_1480.f1))) , (!(g_1659[4] = (((safe_rshift_func_uint8_t_u_s(l_2248, ((l_2252 = l_2248) , l_2248))) == g_990[0][3][0].f0) != g_2194.f1)))), 3)), 4294967294UL)) , l_2248))
        {
            unsigned char l_2253 = 0xCCL;
            unsigned l_2256 = 0xCE7B0101L;
            int l_2257 = 0L;
            unsigned char l_2279 = 250UL;
            char l_2303 = 0x39L;
            l_2257 = func_29((g_497 = 0x48CB307BL), func_112(l_2252, ((l_15[5][1][0] = (l_2253 & (g_851.f0 = l_15[5][1][0]))) != g_875[1].f1), ((l_14 & func_76(func_84(g_2249, ((((0UL > (g_2166.f3 < g_1485.f3)) < g_1389.f2) || l_2253) != l_2253), g_1013.f0, l_14, l_2252), l_2253, g_1486.f1)) , l_14), l_2253), l_2256, g_1486.f0);
            if ((l_2257 = g_1461.f3))
            {
                for (g_739.f1 = 0; g_739.f1 < 1; g_739.f1 += 1)
                {
                    g_5[g_739.f1] = 0x60D6B5B7L;
                }
            }
            else
            {
                int l_2264 = 0xE5BDD16FL;
                char l_2273 = 2L;
                if ((g_6[0][9][0] , (safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(1UL, (0x60B7L <= (safe_rshift_func_int8_t_s_s(l_2264, (safe_sub_func_int32_t_s_s((l_2248 , (((safe_add_func_int8_t_s_s(g_876.f1, (l_2252 ^= 0x0DL))) , (g_497 = ((g_1460.f4 == (((safe_rshift_func_int8_t_s_u(func_112(func_64((6L | l_2253), g_2271, g_1000.f1, g_117, l_2252), l_14, l_15[3][3][0], l_2248), 3)) < l_2272) , l_2264)) != (-10L)))) , g_876.f1)), l_2272))))))), g_1700.f2))))
                {
                    for (g_380 = 1; (g_380 >= 0); g_380 -= 1)
                    {
                        char l_2275 = (-1L);
                        --l_2276;
                        l_2279 &= (-3L);
                    }
                    for (g_959.f1 = 0; (g_959.f1 < 20); g_959.f1 = safe_add_func_int16_t_s_s(g_959.f1, 5))
                    {
                        int l_2282 = 1L;
                        g_740 = func_41(l_2264);
                        if (l_2279)
                            break;
                        return l_2282;
                    }
                    return l_2264;
                }
                else
                {
                    int l_2285 = 9L;
                    unsigned l_2302 = 2UL;
                    for (l_14 = (-11); (l_14 == 16); l_14++)
                    {
                        return g_1067.f2;
                    }
                    l_2303 = (~func_84(((func_112((l_2285 ^ (g_876.f3 >= (l_2274 = g_1012.f3))), g_1274.f0, (+(g_132 = ((safe_mod_func_uint16_t_u_u((!(safe_lshift_func_uint8_t_u_u((!((safe_unary_minus_func_int32_t_s(((safe_sub_func_int8_t_s_s(g_740.f3, (((safe_mod_func_int32_t_s_s((255UL != (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((l_15[5][1][0] = (g_43.f1 >= l_15[5][1][0])), (--g_959.f1))) , (l_2301 &= 0UL)), l_2302))), g_878[3].f1)) , l_2285) , g_1915[3]))) & 0xB9AC39ECL))) && g_740.f0)), 3))), l_2285)) , 4294967293UL))), g_43.f3) <= l_14) && g_1248.f0), g_2007.f0, l_2302, l_2253, l_14));
                }
                g_959 = (l_2303 , g_1389);
                for (g_196 = 1; (g_196 <= 4); g_196 += 1)
                {
                    g_2307 &= (safe_rshift_func_uint16_t_u_u(l_2306, 14));
                }
                l_15[2][2][0] = 7L;
            }
        }
        else
        {
            return l_15[0][1][0];
        }
        l_2318[0] = ((((safe_add_func_int16_t_s_s((!(0UL >= (g_717[1][4][2].f4 != g_1700.f1))), ((func_84(l_2274, (((((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((l_2272 && (~(l_2252 = (safe_rshift_func_uint16_t_u_s(l_15[3][4][0], 11))))), l_2248)), (((l_2318[0] = (safe_lshift_func_uint16_t_u_u(g_1480.f0, g_2127.f3))) <= l_2306) <= 0x265BL))) <= 255UL) && l_2301) >= g_497) && 1L), g_2127.f2, l_2319, l_2274) , l_2320[0]) , l_14))) ^ g_2007.f2) & g_117) ^ g_358);
    }
    g_2133.f4 = l_15[3][0][0];
    if ((g_1014[1][0][5].f3 || (-7L)))
    {
        short l_2332 = 9L;
        int l_2333[5] = {(-10L),(-10L),(-10L),(-10L),(-10L)};
        unsigned short l_2389[5][1] = {{0xE262L},{0x1AF2L},{0xE262L},{0x1AF2L},{0xE262L}};
        int l_2434[3][1];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_2434[i][j] = 0x056DA063L;
        }
        l_2333[4] &= ((0xC1FEL < l_2321) , ((safe_mod_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(0xB29BL, ((safe_sub_func_uint32_t_u_u(g_2237.f1, l_15[5][1][0])) , l_2274))), 4)) == g_858.f3) || (((((((g_196 >= (((l_2332 > l_2321) , 0x6CL) && 250UL)) , 3L) > l_2332) , l_2332) == l_15[5][5][0]) && g_2194.f1) != 0x5089L)) == g_851.f2), 0x2EL)) , (-5L)));
        for (g_1817.f1 = 0; (g_1817.f1 == 13); ++g_1817.f1)
        {
            short l_2336 = (-1L);
            int l_2374 = (-1L);
            int l_2377 = 0xE9995B76L;
            short l_2386[5];
            char l_2418 = (-1L);
            unsigned short l_2433 = 65535UL;
            int i;
            for (i = 0; i < 5; i++)
                l_2386[i] = (-9L);
            if (l_2336)
                break;
            for (g_1601 = 2; (g_1601 != 11); g_1601++)
            {
                for (g_147 = (-13); (g_147 <= 59); g_147 = safe_add_func_uint32_t_u_u(g_147, 1))
                {
                    unsigned short l_2341 = 0x3691L;
                    l_2341 = 1L;
                    g_2194.f3 = 0x65B23B53L;
                    return g_2342;
                }
                g_1355[1].f4 = (l_2336 , l_2333[4]);
                if (l_2332)
                    break;
            }
            g_852.f4 = (safe_sub_func_int16_t_s_s((g_1332 , l_2333[4]), (safe_add_func_int32_t_s_s(l_2321, g_2014.f3))));
            for (g_331 = 16; (g_331 > 32); ++g_331)
            {
                unsigned l_2362 = 0UL;
                char l_2368 = 6L;
                int l_2375 = 0x452F1087L;
                int l_2376 = 0xC04F555AL;
                unsigned char l_2378 = 255UL;
                short l_2412 = 9L;
                char l_2427 = 0L;
                for (g_654.f1 = 0; (g_654.f1 < 47); ++g_654.f1)
                {
                    int l_2367 = (-1L);
                    int l_2400 = 0xCE934E2DL;
                    for (g_2098 = 5; (g_2098 <= 12); ++g_2098)
                    {
                        if (g_5[0])
                            break;
                    }
                    g_1464.f0 = ((--l_2353) == (l_15[5][1][0] != func_112((g_851.f3 |= g_2009.f3), (0x19L != ((g_851.f0 == (0L == (safe_lshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((g_561 = ((g_1989[3][1][1].f3 > l_2362) ^ l_2362)), ((g_497 &= ((safe_rshift_func_uint8_t_u_u((func_64((safe_lshift_func_uint16_t_u_s((l_2367 != (-9L)), 1)), l_14, l_2333[4], g_1135[1].f1, g_878[3].f2) > l_2368), 4)) < g_1248.f3)) , g_1533))), 6)) , 1L) == l_2369), g_1852.f1)))) && (-1L))), g_1274.f2, g_1648.f2)));
                    if (func_84((safe_rshift_func_uint8_t_u_u(((g_1389.f1 ^= func_76(((0x4034L != g_1779[1].f4) && func_64((safe_sub_func_int16_t_s_s(g_1648.f4, 8UL)), g_2127.f2, (((g_2167.f2 | g_43.f1) <= g_645.f2) ^ (-3L)), g_1486.f2, g_1573.f1)), l_2274, g_654.f1)) | g_646.f3), 1)), l_2368, g_1533, l_2369, g_752[0].f1))
                    {
                        unsigned l_2383 = 0x6AF5DE44L;
                        l_2378--;
                        g_1433[2][2][0].f0 = 0x27F00163L;
                        l_2274 &= (safe_add_func_uint32_t_u_u(func_76((l_2383 , l_2383), ((+1L) ^ (g_878[3].f1 |= 255UL)), l_2374), g_1648.f1));
                        g_876 = g_875[1];
                    }
                    else
                    {
                        l_2401 = (g_1852.f0 = ((g_739.f2 != (2UL | (safe_rshift_func_int16_t_s_s(((g_2009.f3 & ((0xBB29L == l_2386[3]) | (l_2367 = (((((safe_sub_func_uint8_t_u_u((l_2389[0][0] && (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((g_852.f3 ^ ((safe_rshift_func_int8_t_s_u(l_15[5][1][0], 3)) || (safe_rshift_func_uint8_t_u_u(((g_1389.f0 = g_2126[8].f2) >= g_877.f3), l_2274)))), g_2167.f0)) , g_2167.f0), l_2336)), g_5[0]))), 0xCDL)) | g_752[0].f2) >= g_1648.f0) > l_2333[2]) != 4294967295UL)))) ^ l_2400), g_959.f1)))) | g_646.f2));
                        l_15[3][1][0] = (safe_lshift_func_int8_t_s_s((func_84(g_1464.f2, (safe_mod_func_uint8_t_u_u(g_1817.f1, (g_281 , ((--g_1659[4]) ^ ((((l_2377 != (((((safe_mod_func_int8_t_s_s(g_1480.f3, (l_14 && (safe_rshift_func_int16_t_s_u((l_2413 = (((0x29A0082BL == (func_112(l_2378, g_1486.f2, l_2412, g_1135[1].f1) , 0xB8560737L)) <= l_2412) ^ 0xDCDBF535L)), 1))))) ^ g_1418.f3) != 0L) || l_2413) , g_1744)) || g_154) , l_2389[0][0]) ^ 4294967292UL))))), g_1648.f0, g_2126[8].f2, g_852.f1) >= g_1248.f3), g_1274.f3));
                    }
                    g_2415 = g_2414;
                }
                for (l_2377 = 0; (l_2377 <= (-16)); l_2377 = safe_sub_func_int8_t_s_s(l_2377, 7))
                {
                    const short l_2435 = 1L;
                    g_646.f3 = (0UL & (l_2376 = (g_2271 , ((l_2418 & (l_2333[4] , ((func_84(func_76((((safe_mod_func_uint32_t_u_u(g_2167.f3, ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((l_2434[2][0] |= ((l_2427 > (g_1915[2] &= 3L)) || ((g_851.f3 = (safe_sub_func_int8_t_s_s(((g_2430 , ((~(safe_mod_func_uint8_t_u_u(func_112((g_878[3].f3 |= (((g_1000.f0 , l_2374) > g_323) > g_281)), l_2333[3], g_358, l_2433), l_2353))) < l_2418)) ^ g_1457.f0), g_2415.f1))) == (-1L)))) | g_1013.f2), 0)), 13)), g_740.f3)) | g_1989[3][1][1].f1))) <= 0x21L) <= g_2098), l_2333[0], l_2321), l_2332, l_15[5][1][0], l_2418, l_2435) , l_2389[0][0]) , 0x48E350B7L))) , 1UL))));
                    if (l_2369)
                        break;
                    return g_1013.f2;
                }
                if (l_2368)
                    continue;
            }
        }
        g_1461.f0 &= (g_858.f3 = ((l_15[3][4][0] = 0x25A2L) , (-4L)));
    }
    else
    {
        int l_2449 = 1L;
        int l_2460 = 0xDA652AF8L;
        unsigned l_2461 = 4294967287UL;
        int l_2465 = 0xFC0FE5F9L;
        int l_2467 = (-1L);
        int l_2469[10] = {0x94BFF715L,0x94BFF715L,0x94BFF715L,0x94BFF715L,0x94BFF715L,0x94BFF715L,0x94BFF715L,0x94BFF715L,0x94BFF715L,0x94BFF715L};
        unsigned short l_2470 = 65534UL;
        unsigned char l_2507 = 0x96L;
        const unsigned l_2593 = 0xE567DBCEL;
        const unsigned short l_2613 = 0x8219L;
        int i;
        for (l_2353 = 0; (l_2353 <= 1); l_2353 += 1)
        {
            short l_2453 = 0xF5C3L;
            int l_2457 = 0xFE6A0398L;
            int l_2459 = (-10L);
            int l_2464 = 0xBC2BDD61L;
            int l_2468 = (-5L);
            int l_2536[9][7] = {{0x0C6E5446L,0x6A70DAF5L,6L,0x6A70DAF5L,0x0C6E5446L,0x5A642409L,0x0C6E5446L},{1L,0x4FC61E6AL,0x4FC61E6AL,1L,0x4FC61E6AL,0x4FC61E6AL,1L},{0x100BC54EL,0x6A70DAF5L,0x100BC54EL,8L,0x0C6E5446L,8L,0x100BC54EL},{1L,1L,(-1L),1L,1L,(-1L),1L},{0x0C6E5446L,8L,0x100BC54EL,0x6A70DAF5L,0x100BC54EL,8L,0x0C6E5446L},{0x4FC61E6AL,1L,0x4FC61E6AL,0x4FC61E6AL,1L,0x4FC61E6AL,0x4FC61E6AL},{0x0C6E5446L,0x6A70DAF5L,6L,0x6A70DAF5L,0x0C6E5446L,0x5A642409L,0x0C6E5446L},{1L,0x4FC61E6AL,0x4FC61E6AL,1L,0x4FC61E6AL,0x4FC61E6AL,1L},{0x100BC54EL,0x6A70DAF5L,0x100BC54EL,8L,0x0C6E5446L,8L,0x100BC54EL}};
            int i, j;
            g_1648.f4 = ((((safe_sub_func_int16_t_s_s(g_2194.f1, ((g_1817.f1 ^ ((safe_mod_func_int16_t_s_s(g_1971.f2, (g_314 = g_876.f1))) != (safe_sub_func_int32_t_s_s(((l_2449 |= ((+(0xD7B6BB72L < ((0L ^ (safe_mod_func_uint16_t_u_u(l_15[3][1][0], 0xDB43L))) == (safe_rshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((l_2448 = (+0x6D6BL)), g_1531)) , g_2167.f3), 4))))) , 0x81L)) , 0xB358915AL), 0UL)))) && g_1247.f2))) , (-3L)) | g_2247) <= g_1014[1][0][5].f0);
            if (l_2449)
                continue;
            for (g_1480.f1 = 0; (g_1480.f1 <= 1); g_1480.f1 += 1)
            {
                unsigned l_2452 = 4294967295UL;
                int l_2454 = 0xC7904C0DL;
                int l_2455 = 0L;
                int l_2456[8][7] = {{(-1L),0x7AA4A9C5L,9L,3L,3L,9L,0x7AA4A9C5L},{7L,0x7AA4A9C5L,1L,(-10L),0L,7L,(-2L)},{0x48190C90L,0x0E1B65AAL,(-8L),4L,1L,3L,0L},{0x7AA4A9C5L,0L,0L,9L,(-3L),0xCE426B52L,0xCE426B52L},{0L,0L,0xE40A8397L,0L,0L,0xCE426B52L,(-8L)},{(-1L),(-10L),4L,(-3L),0L,3L,(-10L)},{0x0E1B65AAL,1L,(-3L),(-1L),(-1L),0x0E1B65AAL,0xFA0D30AEL},{(-1L),(-3L),0x0E1B65AAL,4L,0xFA0D30AEL,4L,0x0E1B65AAL}};
                char l_2466 = 0x5FL;
                int l_2489 = 1L;
                unsigned l_2506[10] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                int l_2538 = 0x7C7C1406L;
                int i, j;
                if (((func_20((g_497 = (g_127[1][0] | g_990[0][3][0].f1)), l_2449) >= (safe_lshift_func_int16_t_s_u(func_84(g_1700.f0, l_2452, (g_2249 |= l_2453), func_84(l_2452, g_1485.f1, g_1332, l_2453, l_2449), g_1248.f2), 3))) < l_2452))
                {
                    for (g_2098 = 1; (g_2098 >= 0); g_2098 -= 1)
                    {
                        if (g_1703.f4)
                            break;
                    }
                }
                else
                {
                    int l_2458[10][5] = {{9L,0x323F51F5L,0L,0xA863D460L,8L},{0xBFD20BF0L,0xA863D460L,0xD1ABF67BL,0x37567B24L,0x40FB0CFAL},{(-1L),0x23333DDFL,1L,0xA863D460L,(-3L)},{0x4B93AC51L,1L,0x14C4D434L,0L,0x14C4D434L},{(-6L),(-6L),0x14C4D434L,9L,0x23333DDFL},{0xAC793CACL,0x37567B24L,1L,0xBFD20BF0L,0L},{0x323F51F5L,0xBCE35BBAL,0xD1ABF67BL,(-1L),0xAC793CACL},{1L,0x37567B24L,0L,0x4B93AC51L,0xD1ABF67BL},{(-1L),(-6L),(-1L),1L,8L},{8L,0x323F51F5L,0xBFD20BF0L,0xBCE35BBAL,1L}};
                    int i, j;
                    l_2461--;
                    l_2470--;
                    l_15[5][1][0] ^= (safe_sub_func_uint32_t_u_u(((((l_2456[1][3] = (func_41((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_u(g_1846, func_29((1L != (l_2480 = (l_2454 = (-6L)))), ((safe_sub_func_int8_t_s_s((!1L), (l_2413 > ((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(g_1249.f1, ((safe_rshift_func_uint16_t_u_u((((g_1248.f1 <= ((g_1852.f3 , (~(++g_132))) , (((l_2458[9][0] = ((l_2456[2][0] == g_1659[0]) >= 0x795881A7L)) , 0xF6L) <= l_2460))) <= g_1132) != g_1549.f0), l_2465)) > l_2464))), l_2453)) | g_256[5][4])))) <= 0xC17ADEB0L), g_1648.f1, g_1486.f1))))), 250UL))) , 0L)) > 65531UL) < (-1L)) != g_2127.f1), 0xAE55CF87L));
                    g_2415.f3 &= func_20(l_2456[3][6], g_1915[2]);
                }
                for (g_2098 = 0; (g_2098 <= 1); g_2098 += 1)
                {
                    short l_2505 = 1L;
                    char l_2508 = 0xEFL;
                    int l_2526 = 0x98B15086L;
                    int l_2530 = 0L;
                    int l_2532 = 0xEFB914C6L;
                    for (l_2464 = 0; (l_2464 <= 0); l_2464 += 1)
                    {
                        int i;
                        if (g_2492)
                            break;
                        g_2127.f3 &= (l_2508 = (safe_sub_func_int32_t_s_s((l_2507 |= (safe_sub_func_uint8_t_u_u(((((g_2007.f2 = (l_2457 = (safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((g_2247 ^= l_2454) >= l_2453), ((0xCBC5L < (safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((((g_1969[g_1480.f1] , (g_43.f0 = l_2505)) != g_1389.f2) > ((l_2301 <= (g_1135[1].f1 ^= (l_2506[1] = g_1132))) , (((g_1480.f2 == l_2480) & l_14) && 0xA368L))), 0xA10CC8CFL)) < g_1648.f3), g_497))) , g_654.f0))), g_169[5][0][0])))) >= 0xA77BCCCAL) , g_1485.f1) || l_2464), g_589))), l_2460)));
                    }
                    if (((((safe_rshift_func_int16_t_s_u(((+((safe_lshift_func_int8_t_s_s((((g_877.f3 ^= (g_654.f3 = (l_2506[9] || g_1464.f3))) | (g_2415.f2 , ((safe_mod_func_int32_t_s_s((func_112(g_1972[6].f2, l_2459, (l_2508 > (l_2469[1] = (g_1700.f3 | g_1135[1].f0))), (safe_rshift_func_int8_t_s_s((~((((safe_lshift_func_int8_t_s_u(g_1622, 4)) > 4L) , 0UL) == g_740.f1)), 7))) != 0UL), g_1549.f1)) && 65535UL))) ^ 0UL), 1)) & l_2505)) , g_739.f2), l_2449)) <= g_733) || g_1844.f4) , g_2519))
                    {
                        char l_2522[3][8] = {{2L,2L,2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L,2L,2L}};
                        int l_2523 = (-1L);
                        int i, j;
                        l_15[5][1][0] = g_1067.f1;
                        l_2526 ^= (safe_sub_func_uint16_t_u_u((l_2464 || ((l_2301 > (-5L)) || ((--g_1418.f1) < (g_1852.f4 <= (l_2522[2][4] < g_2007.f1))))), l_2522[1][7]));
                    }
                    else
                    {
                        unsigned l_2527 = 2UL;
                        int l_2531 = 0x383B883EL;
                        int l_2533 = 0xEFD2F6CFL;
                        int l_2534 = 0xCBDC09D8L;
                        unsigned char l_2539[1][1][2];
                        unsigned l_2542 = 4294967287UL;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_2539[i][j][k] = 0x97L;
                            }
                        }
                        ++l_2527;
                        ++l_2539[0][0][0];
                        --l_2542;
                        g_1549.f3 = (safe_rshift_func_uint8_t_u_s((g_739.f2 > func_64((l_2455 , (safe_mod_func_uint8_t_u_u(l_2353, l_2533))), g_1844.f3, l_2536[8][1], (l_2506[1] , g_645.f3), (l_2505 == g_1648.f1))), g_1485.f1));
                    }
                    for (l_2470 = 0; (l_2470 <= 0); l_2470 += 1)
                    {
                        unsigned short l_2555 = 65535UL;
                        int l_2567 = 0x9F6A4FDCL;
                        int i;
                        l_2456[6][5] |= g_1849.f2;
                        l_2567 = func_64((safe_add_func_uint32_t_u_u(func_20((g_196 = l_2536[8][1]), ((g_645.f4 > ((safe_add_func_int16_t_s_s(1L, g_2342)) != ((safe_mod_func_int8_t_s_s(((l_2555 != (func_84(((l_2469[1] = (safe_mod_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(g_331, (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((g_1012.f0 != ((g_1700.f0 < g_752[0].f0) || g_2098)), l_2401)) ^ 9UL), l_15[4][0][0])), 6)))) || 9UL), 0x7DB64C74L))) <= 6UL), g_1549.f0, g_959.f3, g_5[0], l_2321) >= g_1573.f3)) != g_2566), g_2414.f0)) != 0xDF3298D8L))) , 0x7CL)), l_2274)), g_2194.f3, g_1000.f3, l_2505, g_2537);
                        g_1464.f3 = ((g_752[l_2470] , (func_64(((safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((func_20((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((l_2457 && (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((g_2592[2][5] = (safe_sub_func_uint8_t_u_u(0x68L, func_64((~(safe_add_func_int32_t_s_s((l_2459 |= g_2), (safe_rshift_func_uint16_t_u_s(l_2536[8][1], 10))))), (l_2532 = (g_1659[0] = (((((safe_add_func_uint16_t_u_u((((0x1934FB25L > l_2460) && l_2536[0][0]) | ((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(g_2592[6][2], l_2274)), l_2555)) == l_2536[8][1])), l_14)) != g_1000.f0) & l_2456[6][6]) && l_2468) > g_1033.f0))), g_1485.f0, g_2166.f3, l_2593)))) , 4L), 0)) , g_851.f0), 4UL))) | g_2013.f0), 0)), 0xB2F0L)), g_510) ^ 6UL) , l_2567), 1UL)), l_2594)) == 0x33L), l_2508, l_2468, l_2555, l_2555) >= 0x98L)) < 0x8BE1L);
                    }
                }
            }
        }
        g_1013.f0 ^= (((safe_mod_func_int8_t_s_s(l_2274, (l_2480 = (((safe_sub_func_int32_t_s_s(((3L ^ l_2321) ^ g_2013.f4), (l_2369 != (safe_sub_func_int32_t_s_s(func_112((g_380 = (((((l_2449 , g_654.f3) || (~(safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((g_1659[0] || (safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(((l_15[5][1][0] |= (safe_unary_minus_func_int16_t_s(g_1247.f0))) , l_2469[1]), g_752[0].f0)) && 0x18L) < l_14), 6))), l_2274)), l_2593)), 7L)))) != l_2507) != g_1418.f0) || l_15[5][1][0])), g_733, l_2612, g_5[0]), l_2448))))) , g_2129.f1) | l_2613)))) >= 1L) < l_14);
    }
    return l_2413;
}







static unsigned short func_20(unsigned p_21, unsigned char p_22)
{
    char l_867 = 0x77L;
    char l_1031[9][1] = {{(-1L)},{0x68L},{(-1L)},{0x68L},{(-1L)},{0x68L},{(-1L)},{0x68L},{(-1L)}};
    int l_1032[10] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
    int l_1062 = 0xA229D514L;
    int l_1110 = (-3L);
    int l_1125[7] = {0x079B4D6DL,0x079B4D6DL,0x079B4D6DL,0x079B4D6DL,0x079B4D6DL,0x079B4D6DL,0x079B4D6DL};
    int l_1206[10] = {7L,0L,0L,7L,0L,0L,7L,0L,0L,7L};
    short l_1218 = 0x31DCL;
    unsigned l_1291 = 2UL;
    unsigned char l_1306[7];
    const unsigned l_1309 = 0x1EF1AFD1L;
    unsigned l_1383[6][7][6] = {{{0x4BE60095L,0UL,0UL,0x4BE60095L,0x91185F16L,1UL},{0x78C1463EL,0x691672BEL,0xBED54B50L,4294967295UL,0x702D9623L,4294967295UL},{4294967295UL,4294967295UL,0x4BE60095L,1UL,0x702D9623L,0UL},{4294967295UL,0x691672BEL,0x17209B0EL,1UL,0x91185F16L,0x5F745EE2L},{0xF815EF3BL,0UL,0x8BE11913L,0UL,0xF815EF3BL,0x691672BEL},{0x8BE11913L,4294967295UL,4294967295UL,4294967295UL,0x8BE11913L,4294967287UL},{4294967295UL,4294967295UL,0xD7BED25FL,0x78C1463EL,4294967295UL,0x8BE11913L}},{{4294967295UL,0x5F745EE2L,0x53D5E87BL,4294967295UL,0x03349984L,0x8BE11913L},{0x84B9C663L,4294967295UL,0xD7BED25FL,1UL,0x91185F16L,4294967287UL},{0x03349984L,0xD7BED25FL,4294967295UL,0xBED54B50L,0x53D5E87BL,0x691672BEL},{4294967295UL,0UL,6UL,6UL,0UL,4294967295UL},{4294967295UL,1UL,0UL,2UL,0x4BE60095L,1UL},{0x691672BEL,1UL,0x17209B0EL,0x03349984L,4294967295UL,0x91185F16L},{0x691672BEL,4294967295UL,0x03349984L,2UL,0xBED54B50L,0UL}},{{4294967295UL,0x4BE60095L,0x8BE11913L,6UL,1UL,0xF815EF3BL},{4294967295UL,0xA0A9038EL,1UL,0xBED54B50L,1UL,0xA0A9038EL},{0x03349984L,0x691672BEL,4294967295UL,1UL,4294967295UL,0x702D9623L},{0x84B9C663L,0xBF113F9DL,1UL,4294967295UL,0UL,4294967295UL},{4294967295UL,0xBF113F9DL,0xA0A9038EL,0x78C1463EL,4294967295UL,4294967295UL},{4294967295UL,0x691672BEL,4294967287UL,4294967295UL,1UL,4294967295UL},{0x8BE11913L,0xA0A9038EL,0xBED54B50L,1UL,6UL,0UL}},{{0x03349984L,0x03349984L,0xF815EF3BL,4294967295UL,0UL,0x84B9C663L},{4294967295UL,0x84B9C663L,0x78C1463EL,0xBED54B50L,0x17209B0EL,0xF815EF3BL},{0xF815EF3BL,4294967295UL,0x78C1463EL,4294967295UL,0x03349984L,0x84B9C663L},{0x4BE60095L,4294967295UL,0xF815EF3BL,0UL,0x8BE11913L,0UL},{0UL,0x8BE11913L,0UL,1UL,1UL,1UL},{0xBF113F9DL,0x4BE60095L,0xBF113F9DL,0x91185F16L,4294967295UL,0xA0A9038EL},{4294967295UL,1UL,4294967295UL,0x702D9623L,1UL,2UL}},{{0x8BE11913L,0x78C1463EL,6UL,0x702D9623L,0xA0A9038EL,0x91185F16L},{4294967295UL,0xD7BED25FL,1UL,0x91185F16L,4294967287UL,4294967295UL},{0xBF113F9DL,0x17209B0EL,4294967295UL,1UL,0xBED54B50L,0xBED54B50L},{0UL,4294967287UL,4294967287UL,0UL,0x78C1463EL,0x53D5E87BL},{0x4BE60095L,0x91185F16L,1UL,4294967295UL,0x5F745EE2L,4294967295UL},{0xF815EF3BL,0UL,0UL,0xBED54B50L,0x5F745EE2L,6UL},{4294967295UL,0x91185F16L,0x8BE11913L,4294967295UL,0x78C1463EL,0xD7BED25FL}},{{0x03349984L,4294967287UL,4294967295UL,6UL,0xBED54B50L,4294967295UL},{4294967287UL,0x17209B0EL,2UL,0UL,4294967295UL,0x84B9C663L},{0xA0A9038EL,4294967295UL,0x17209B0EL,0x4BE60095L,4294967295UL,4294967295UL},{0UL,0xD7BED25FL,0x691672BEL,4294967295UL,0UL,4294967295UL},{2UL,0xF815EF3BL,0x17209B0EL,0xBED54B50L,0x78C1463EL,0x84B9C663L},{0UL,0x17209B0EL,0xA0A9038EL,1UL,0x691672BEL,0x91185F16L},{4294967295UL,6UL,1UL,1UL,6UL,4294967295UL}}};
    unsigned short l_1424 = 65527UL;
    const char l_1505[1][3] = {{4L,4L,4L}};
    unsigned l_1597 = 4294967295UL;
    unsigned short l_1602 = 65528UL;
    unsigned short l_1639 = 0xB627L;
    unsigned l_1660 = 0xE55289D7L;
    int l_1688 = 0x38DB3A35L;
    int l_1743[10][7][3] = {{{(-1L),0xE4585834L,(-1L)},{(-1L),0xE4585834L,0x2CE97EF7L},{0x2CE97EF7L,0x6AC6991BL,(-10L)},{0xE4585834L,6L,0x789A7E5DL},{0x1634A9C3L,(-10L),2L},{0xE4585834L,6L,0x3F14CAF7L},{0x2CE97EF7L,1L,1L}},{{(-1L),0x789A7E5DL,1L},{(-1L),0x1634A9C3L,0x3F14CAF7L},{8L,(-1L),2L},{(-8L),(-8L),0x789A7E5DL},{0x6452312DL,(-1L),(-10L)},{6L,0x1634A9C3L,0x2CE97EF7L},{0x789A7E5DL,0x789A7E5DL,(-1L)}},{{0x789A7E5DL,1L,0x6452312DL},{6L,6L,1L},{0x6452312DL,(-10L),6L},{(-8L),6L,1L},{8L,0x6AC6991BL,0x6452312DL},{(-1L),0xE4585834L,8L},{2L,0x2F332B96L,(-10L)}},{{(-10L),1L,0x6AC6991BL},{0x2F332B96L,(-1L),0x3F14CAF7L},{(-1L),0x6AC6991BL,1L},{0x2F332B96L,0x6452312DL,0x2CE97EF7L},{(-10L),6L,6L},{2L,0x3F14CAF7L,6L},{8L,(-1L),0x2CE97EF7L}},{{(-8L),8L,1L},{6L,0x789A7E5DL,0x3F14CAF7L},{0xE4585834L,8L,0x6AC6991BL},{(-1L),(-1L),(-10L)},{0x3F14CAF7L,0x3F14CAF7L,8L},{0x3F14CAF7L,6L,0xE4585834L},{(-1L),0x6452312DL,(-8L)}},{{0xE4585834L,0x6AC6991BL,(-1L)},{6L,(-1L),(-8L)},{(-8L),1L,0xE4585834L},{8L,0x2F332B96L,8L},{2L,0x2F332B96L,(-10L)},{(-10L),1L,0x6AC6991BL},{0x2F332B96L,(-1L),0x3F14CAF7L}},{{(-1L),0x6AC6991BL,1L},{0x2F332B96L,0x6452312DL,0x2CE97EF7L},{(-10L),6L,6L},{2L,0x3F14CAF7L,6L},{8L,(-1L),0x2CE97EF7L},{(-8L),8L,1L},{6L,0x789A7E5DL,0x3F14CAF7L}},{{0xE4585834L,8L,0x6AC6991BL},{(-1L),(-1L),(-10L)},{0x3F14CAF7L,0x3F14CAF7L,(-1L)},{(-8L),0x789A7E5DL,0x2CE97EF7L},{0x1634A9C3L,0x3F14CAF7L,0xE4585834L},{0x2CE97EF7L,8L,0x1634A9C3L},{0x2F332B96L,0x1634A9C3L,0xE4585834L}},{{2L,(-8L),0x2CE97EF7L},{(-1L),(-10L),(-1L)},{6L,(-10L),(-1L)},{(-1L),(-8L),8L},{(-10L),0x1634A9C3L,(-8L)},{1L,8L,0x6452312DL},{(-10L),0x3F14CAF7L,6L}},{{(-1L),0x789A7E5DL,0x789A7E5DL},{6L,(-8L),0x789A7E5DL},{(-1L),1L,6L},{2L,(-1L),0x6452312DL},{0x2F332B96L,1L,(-8L)},{0x2CE97EF7L,(-1L),8L},{0x1634A9C3L,1L,(-1L)}}};
    unsigned l_1750[3];
    int l_1856 = 0xF788459CL;
    unsigned l_1901 = 0xFF01D2EEL;
    int l_1967 = 1L;
    int l_2071 = 0L;
    int l_2186 = 0x7D2A19D8L;
    int l_2198 = 0x9397282FL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1306[i] = 0x91L;
    for (i = 0; i < 3; i++)
        l_1750[i] = 0x6EB2BF1EL;
    for (p_21 = 0; (p_21 <= 0); p_21 += 1)
    {
        unsigned char l_1028 = 255UL;
        int l_1029 = 0x595B7CC9L;
        int l_1030 = 1L;
        char l_1064 = (-1L);
        char l_1127 = 0x42L;
        int l_1192 = (-1L);
        int l_1193 = (-1L);
        int l_1207 = 0x80E47FB9L;
        unsigned l_1208 = 1UL;
        unsigned short l_1212 = 0xA8A2L;
        int l_1221 = 1L;
        int l_1222 = (-1L);
        char l_1237 = 0x08L;
        for (p_22 = 0; (p_22 <= 0); p_22 += 1)
        {
            int l_36 = 1L;
            int l_868 = 0x741363A3L;
            int i;
            g_1014[1][0][5] = func_23(func_29((safe_lshift_func_int8_t_s_u(0xFBL, 4)), (g_5[p_22] | p_22), (l_36 &= g_5[0]), p_21), (p_21 , ((l_868 = l_867) | (g_739.f3 < p_22))), g_561, p_22, l_867);
            if ((((l_1032[4] = func_59(((((safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(((((((0x25L > (g_875[1].f4 <= (l_1030 = (((safe_add_func_uint32_t_u_u((l_1029 = ((((safe_unary_minus_func_uint16_t_u((g_589 = (safe_rshift_func_uint16_t_u_u(func_112((((safe_lshift_func_int16_t_s_s((g_497 < (safe_rshift_func_int8_t_s_u((((l_36 ^= (((((g_851.f2 , ((g_154 , func_64(p_22, p_22, (p_21 , g_132), p_21, p_22)) <= 0L)) ^ 1L) == p_21) < p_21) < p_21)) & p_21) <= 0x81A8L), 1))), l_867)) == 0xA731L) , l_1028), g_358, g_733, p_21), 11))))) >= 1UL) ^ 0xFCL) <= l_867)), p_21)) ^ p_22) && 0x3B78143CL)))) ^ 253UL) > 0xE528L) && 0x6EL) , 7UL) , l_1031[3][0]), g_645.f2)) != 0xEDL), p_21)) ^ 0xD708L) <= l_867) || p_21), l_1031[3][0], l_1031[3][0], p_22)) >= 0x26L) < (-1L)))
            {
                unsigned l_1034 = 0x6B6B5168L;
                int l_1035 = (-7L);
                int l_1089 = 0xB6531AB4L;
                if (p_21)
                {
                    for (g_858.f1 = 0; (g_858.f1 <= 0); g_858.f1 += 1)
                    {
                        int i, j, k;
                        g_1033 = g_851;
                        g_6[p_22][(p_21 + 6)][(p_22 + 5)] = (func_112(g_6[p_22][(g_858.f1 + 9)][(g_858.f1 + 1)], ((((((l_1035 = (g_717[1][4][2].f0 , l_1034)) , ((((g_1013.f3 == ((-2L) && g_322)) | 0UL) , ((((g_1033.f2 == (safe_add_func_uint8_t_u_u(((p_22 , p_21) && p_21), g_1033.f0))) ^ p_22) == l_1034) < 0x7CL)) < p_21)) && (-1L)) == p_22) && g_267) > p_22), p_21, g_323) < 0xB8L);
                    }
                    if (p_21)
                        continue;
                }
                else
                {
                    unsigned l_1038 = 0x7DFBDB60L;
                    int l_1084 = 0x9BD4CDC5L;
                    for (g_1012.f1 = 0; (g_1012.f1 <= 0); g_1012.f1 += 1)
                    {
                        int l_1047 = 0x5CD90299L;
                        int i, j, k;
                        g_6[p_21][(p_21 + 5)][(g_1012.f1 + 1)] = func_59(g_852.f1, (++l_1038), p_21, (func_76((g_132 |= l_1029), p_21, (safe_sub_func_int8_t_s_s(g_851.f2, l_1034))) || l_868));
                        g_877.f0 = func_59(p_21, (g_497++), (g_6[p_21][(p_21 + 5)][(g_1012.f1 + 1)] || 0xCB6ABC41L), (safe_sub_func_uint16_t_u_u(func_84(l_1038, p_21, (p_21 < 0x8EL), l_1028, func_76(l_1047, g_1000.f1, g_716[0][1])), 0xFC10L)));
                        if (g_6[p_21][(p_21 + 5)][(g_1012.f1 + 1)])
                            break;
                    }
                    if (g_589)
                        continue;
                    for (g_740.f1 = 0; (g_740.f1 <= 0); g_740.f1 += 1)
                    {
                        int l_1063 = 1L;
                        int l_1065[8] = {0xC8114310L,0xB6161CC8L,0xC8114310L,0xB6161CC8L,0xC8114310L,0xB6161CC8L,0xC8114310L,0xB6161CC8L};
                        int i, j;
                        l_1065[5] ^= (safe_mod_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s((g_716[g_740.f1][p_22] <= (g_740.f3 && (safe_add_func_int32_t_s_s((func_84((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(g_752[0].f3, (l_1032[0] = p_21))), (0x231B79F8L && 0xBEFB21DDL))) >= ((safe_rshift_func_uint16_t_u_u((func_41(l_1035) , ((safe_rshift_func_uint8_t_u_u((l_1062 = 9UL), l_1038)) >= 250UL)), l_1030)) || 1UL)) >= l_1034), l_1063, g_1033.f0, p_22, l_1038) == p_21), p_22)))), l_1064)) != 1UL) < 65535UL), l_1063));
                        g_1067 = g_1066;
                        g_654.f3 = ((safe_add_func_int8_t_s_s(g_1066.f1, func_59(p_21, (((!0x68ACL) == (safe_sub_func_int16_t_s_s((g_169[8][1][3] <= (((!(0xFDL != (l_36 || (safe_add_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((!(g_281 = ((func_84((safe_lshift_func_int16_t_s_s((g_536 |= (l_1084 = (func_84(((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(((l_1065[1] && ((((((((((g_314 |= p_22) & (l_1029 = ((g_154 = ((safe_rshift_func_int16_t_s_u((l_1065[5] = (g_510 &= g_740.f2)), g_1033.f0)) , 0xC9L)) ^ 1UL))) < 0x02L) == p_21) == l_868) , p_21) , p_22) , g_1013.f3) , p_21) < g_716[p_22][(p_22 + 1)])) & 0UL), l_1030)), 2)) < g_170), l_868, p_21, g_196, g_5[p_22]) , 0x549CL))), p_21)), l_1031[0][0], p_21, l_1034, l_1031[8][0]) , g_851.f3) <= l_867))), 1UL)) <= 7L) == 0xF2L), 0x57L))))) , p_21) != 0xD7F7L)), g_716[g_740.f1][p_22]))) <= (-9L)), l_1038, p_21))) | g_717[1][4][2].f3);
                    }
                }
                l_1032[9] ^= g_851.f0;
                l_1030 = func_29((func_76(l_1032[4], g_5[p_22], (safe_rshift_func_uint8_t_u_u(l_1034, func_76(p_22, (((l_1089 &= ((safe_sub_func_int8_t_s_s((func_76((((l_36 = (-9L)) ^ (l_868 = (0xABA6L > ((-7L) > (l_1035 = l_1034))))) > (+(p_21 || 3L))), g_991.f2, g_267) , l_1064), l_1031[8][0])) < g_450[8])) | 0xDC4C0319L) | g_5[p_22]), l_1034)))) <= g_851.f0), g_717[1][4][2].f2, l_1062, p_21);
            }
            else
            {
                for (l_867 = 0; l_867 < 6; l_867 += 1)
                {
                    struct S0 tmp = {-2,0xE7L,11,7,38};
                    g_878[l_867] = tmp;
                }
                l_868 |= (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(g_654.f1, (safe_rshift_func_int16_t_s_s(p_21, 8)))), 1));
                g_991.f3 &= (safe_sub_func_int16_t_s_s(p_22, (g_380 < p_22)));
            }
        }
        for (g_322 = 0; (g_322 >= 0); g_322 -= 1)
        {
            char l_1107 = 0x4DL;
            int l_1108 = 0x90138FC3L;
            int l_1116 = 0x97A07BF7L;
            int l_1118 = (-1L);
            int l_1119 = (-7L);
            int l_1121 = (-3L);
            int l_1124 = 0xA433CF10L;
            int l_1126 = 1L;
            int l_1128 = 0x5A4A8F65L;
            int l_1129 = 4L;
            int l_1130 = 0x9B1A64E0L;
            int l_1131 = 0xD2B89AA5L;
            int l_1211 = 0x99A54C5AL;
            const unsigned short l_1290 = 65535UL;
            for (l_1028 = 0; (l_1028 <= 0); l_1028 += 1)
            {
                int l_1109 = 0x0A1DCA18L;
                int l_1111 = 0xA3645F4EL;
                int l_1114 = 1L;
                int l_1117[2][3] = {{0x51E1CADDL,0x51E1CADDL,0x51E1CADDL},{0x18AD00BFL,0x18AD00BFL,0x18AD00BFL}};
                int i, j;
                if (g_5[p_21])
                {
                    int l_1106[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1106[i] = 0x44900D92L;
                    for (g_196 = 0; g_196 < 10; g_196 += 1)
                    {
                        l_1032[g_196] = 0x5957923EL;
                    }
                    l_1111 ^= (g_169[(g_322 + 6)][(p_21 + 1)][(l_1028 + 1)] = (((func_64((safe_lshift_func_uint16_t_u_s(g_169[(l_1028 + 4)][l_1028][(l_1028 + 7)], (3L >= func_84(g_169[(p_21 + 8)][(l_1028 + 1)][(l_1028 + 6)], (safe_rshift_func_int16_t_s_u(((+p_22) & (g_851.f1 &= g_5[p_21])), 9)), ((safe_rshift_func_uint16_t_u_u(0x1D83L, 3)) < ((l_1062 &= ((safe_sub_func_int8_t_s_s(func_84((((l_1109 = (((4UL != ((l_1106[0] = g_5[p_21]) ^ (func_84((l_1107 = p_21), g_450[8], l_1031[6][0], l_1108, g_959.f2) ^ p_21))) , l_1029) >= 0x38L)) != p_21) , p_22), g_676[6].f1, p_21, p_21, p_21), p_21)) , 0x4CFEL)) && g_740.f0)), p_21, g_851.f0)))), l_1108, g_1000.f2, l_1110, g_1033.f2) < g_858.f2) || 6L) && 0xC7L));
                }
                else
                {
                    char l_1112 = 6L;
                    int l_1115 = 0x00DA5494L;
                    int l_1122 = 0x49A53DC7L;
                    int l_1123[1][10] = {{(-7L),(-1L),(-7L),(-1L),(-7L),(-1L),(-7L),(-1L),(-7L),(-1L)}};
                    int l_1139 = 0x1B7134C8L;
                    int i, j;
                    if ((func_64(l_1112, g_858.f2, g_716[0][1], p_21, l_1032[4]) < func_84(g_990[0][3][0].f1, g_858.f0, ((p_22 < l_1032[1]) , 0x0205L), p_21, p_22)))
                    {
                        int i;
                        g_878[(l_1028 + 4)] = g_878[(l_1028 + 4)];
                        if (g_676[6].f4)
                            break;
                        g_1013 = g_878[g_322];
                    }
                    else
                    {
                        int l_1113 = 1L;
                        int l_1120[2][2][1];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_1120[i][j][k] = 0x4510E1B3L;
                            }
                        }
                        --g_1132;
                        g_1135[1] = g_878[(p_21 + 3)];
                    }
                    l_1119 &= (((~(safe_rshift_func_uint8_t_u_s((0x39D0L & (((l_1030 = (g_1138 , l_1139)) , 0x7353224BL) , 1UL)), ((g_323 , ((l_1115 & (l_1111 |= (l_1122 = (safe_add_func_int8_t_s_s(p_21, l_1125[5]))))) || 0x43L)) , l_1107)))) | g_1000.f1) & (-1L));
                }
                for (l_1110 = (-9); (l_1110 != (-22)); --l_1110)
                {
                    short l_1154 = 3L;
                    int l_1164 = 0xDAE34CFEL;
                    int l_1171 = 0L;
                    int l_1172 = 0x3F04D4C1L;
                    for (l_1118 = 14; (l_1118 == 14); l_1118 = safe_add_func_int32_t_s_s(l_1118, 9))
                    {
                        int l_1155 = (-1L);
                        short l_1156 = 0xAC09L;
                        g_877.f3 &= (p_21 < (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((g_1033.f0 , ((g_1066.f2 < (l_1126 = ((safe_lshift_func_int16_t_s_u(0xA8E6L, p_22)) & (safe_mod_func_uint16_t_u_u(func_64(l_1154, (l_1154 , func_112((g_740.f0 = p_22), l_1155, g_1033.f1, l_1030)), l_1155, l_1127, l_1155), 0xDAB3L))))) >= p_21)) , g_645) , g_1066.f3), p_22)), 2)));
                        if (g_1067.f4)
                            continue;
                        g_1066.f0 = func_64(l_1156, ((p_22 && (func_76(g_858.f0, p_22, ((safe_unary_minus_func_uint16_t_u(((safe_sub_func_uint32_t_u_u(l_1118, (g_267 = ((safe_add_func_uint16_t_u_u((((g_646.f1 ^ (safe_sub_func_uint16_t_u_u(((l_1062 >= (0L >= (l_1032[4] ^= (((g_1138.f4 , g_450[1]) , 3UL) | p_22)))) & 5L), g_851.f2))) | 0xB102L) , p_22), g_1000.f1)) , p_21)))) && g_675.f1))) , 0x12BB5654L)) | 0xABDAF6C6L)) | p_21), g_1012.f1, p_21, g_1132);
                    }
                    for (g_331 = 0; (g_331 <= 0); g_331 += 1)
                    {
                        int l_1167[9][3] = {{0x4A1EBD1FL,0x8EE3AD82L,0xFFC1BF5BL},{(-1L),0x3293AF38L,(-1L)},{0xFFC1BF5BL,0x8EE3AD82L,0x4A1EBD1FL},{(-9L),0L,0x4A1EBD1FL},{1L,(-9L),(-1L)},{0x5D1AADE1L,0x3293AF38L,(-9L)},{0x8EE3AD82L,(-9L),0L},{0L,(-9L),0x8EE3AD82L},{(-9L),0x3293AF38L,0x3293AF38L}};
                        int l_1168[4][2] = {{0x35206ECFL,0x19F0801DL},{0x19F0801DL,0x35206ECFL},{0x19F0801DL,0x19F0801DL},{0x35206ECFL,0x19F0801DL}};
                        int l_1183[9][2] = {{0x40A704E4L,0x934BA160L},{(-5L),(-5L)},{(-10L),(-5L)},{(-5L),0x934BA160L},{0x40A704E4L,0L},{(-10L),0x40A704E4L},{0L,0x934BA160L},{0L,0x40A704E4L},{(-10L),0L}};
                        int i, j;
                        l_1164 = (g_5[g_331] ^ (((p_22 ^ (l_1154 , (!0xC6DE6EFCL))) & p_21) || p_22));
                        l_1171 = (l_1183[0][1] = ((((safe_add_func_uint16_t_u_u((0x099409B7L > 0xA8F1B1EEL), g_876.f0)) , (l_1168[0][1] = (l_1062 = (l_1167[1][0] |= g_740.f2)))) , (safe_lshift_func_uint16_t_u_s(((((g_314++) != (!(((g_717[1][4][2].f0 &= (safe_sub_func_uint8_t_u_u(((~func_64((l_1168[0][1] ^ g_358), (((((g_5[l_1028] |= ((func_84((((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(g_170, (g_154 = ((safe_lshift_func_int16_t_s_u((((g_858.f2 < (g_676[6].f4 > p_22)) & l_1032[4]) || 4294967293UL), 3)) , g_645.f0)))), 0x3FL)) != 1L) != 0x342F8CA8L), l_1154, l_1130, l_1029, g_1000.f0) > p_22) > l_1127)) >= 0xEC0F9905L) , p_22) , g_5[p_21]) && l_1154), l_1121, g_858.f3, g_322)) > 0L), g_1014[1][0][5].f1))) , l_1032[6]) < p_22))) <= l_1167[3][2]) <= p_22), 6))) & 3UL));
                        l_1126 = (-6L);
                        l_1130 |= (g_1013.f3 ^= (((l_1109 &= ((g_739.f3 || func_84(func_64((~l_1029), g_740.f3, p_22, ((safe_mod_func_int8_t_s_s((p_21 && (safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(p_22, (p_22 && (g_852.f0 < (safe_mod_func_uint32_t_u_u((((p_22 || l_1154) || 65529UL) , l_1116), l_1168[3][0])))))), 4L))), p_21)) , l_1107), g_5[0]), g_5[p_21], g_1138.f3, g_1014[1][0][5].f1, g_1135[1].f1)) || 0x62CCL)) & l_1167[1][0]) & 1L));
                    }
                }
                return l_1192;
            }
            for (g_645.f1 = 0; (g_645.f1 <= 0); g_645.f1 += 1)
            {
                unsigned short l_1194 = 0xC359L;
                int i, j, k;
                --l_1194;
            }
            for (g_147 = 0; (g_147 <= 0); g_147 += 1)
            {
                short l_1199 = (-7L);
                unsigned short l_1209[6] = {0x8083L,0x8083L,0x8083L,0x8083L,0x8083L,0x8083L};
                int i;
                for (g_852.f1 = 0; (g_852.f1 <= 6); g_852.f1 += 1)
                {
                    int i, j, k;
                    g_6[g_147][g_322][p_21] = (l_1030 ^= (func_84((l_1029 = (l_1208 = (!(safe_lshift_func_int16_t_s_s((g_5[g_322] > p_21), ((l_1199 ^ (l_1206[5] = (((safe_add_func_uint16_t_u_u((((((p_21 <= l_1032[4]) && (safe_rshift_func_uint8_t_u_s((l_1199 | ((p_21 >= (4294967295UL >= ((safe_sub_func_uint16_t_u_u(0x3614L, p_21)) && g_1014[1][0][5].f1))) , p_22)), 2))) , g_5[g_322]) > 0x700F2270L) & 2UL), g_5[g_322])) & 0L) <= 0x7AL))) > l_1207)))))), l_1130, g_646.f0, p_22, l_1192) != l_1199));
                    return l_1209[2];
                }
            }
            for (l_1128 = 0; (l_1128 >= 0); l_1128 -= 1)
            {
                int l_1210[8] = {0x370A0080L,0x613C25C5L,0x613C25C5L,0x370A0080L,0x613C25C5L,0x613C25C5L,0x370A0080L,0x613C25C5L};
                int l_1233 = (-8L);
                int l_1234 = 0xC14D0C71L;
                short l_1265[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                short l_1289 = 0xA843L;
                int i, j, k;
                --l_1212;
                for (g_858.f1 = 0; (g_858.f1 <= 0); g_858.f1 += 1)
                {
                    int l_1215 = 0x66BE6A28L;
                    int l_1216 = 1L;
                    int l_1217 = (-1L);
                    int l_1219 = 0x35279BB0L;
                    int l_1220 = 2L;
                    unsigned char l_1223 = 0xFBL;
                    char l_1232[7] = {0L,0L,0L,0L,0L,0L,0L};
                    const short l_1246 = 0x5903L;
                    int i;
                    --l_1223;
                    l_1234 &= (g_5[g_322] < (((safe_lshift_func_int8_t_s_u(((~p_22) || (func_64((func_84(l_1210[0], l_1128, ((safe_mod_func_uint8_t_u_u((65535UL >= (l_1221 = (p_22 > (((l_1233 = (safe_mod_func_int8_t_s_s((+(+((((p_21 == func_112(((((-7L) ^ g_1014[1][0][5].f4) | g_740.f1) , 0x5EDD2FBEL), g_7, g_717[1][4][2].f3, p_22)) , g_5[g_322]) < g_851.f1) >= l_1232[4]))), g_878[3].f2))) > p_22) == g_1012.f2)))), (-7L))) & 1UL), g_852.f0, p_21) , 0x3B956B28L), l_1108, g_851.f3, l_1210[5], p_22) > g_1135[1].f2)), 2)) < l_1219) || 0L));
                    for (l_1208 = 4; (l_1208 < 56); l_1208 = safe_add_func_uint8_t_u_u(l_1208, 3))
                    {
                        return l_1237;
                    }
                    if ((((safe_lshift_func_int8_t_s_s((((((((l_1221 = 0x54C7AE87L) > ((l_1218 && l_1127) & (p_22 && ((((safe_lshift_func_int8_t_s_s((l_1216 = l_1130), ((((safe_mod_func_int16_t_s_s((l_1206[5] >= (l_1220 > (safe_rshift_func_int8_t_s_u(((p_21 > (l_1029 | 0x7EL)) ^ l_1212), 7)))), l_1246)) , p_22) , g_1247) , g_878[3].f0))) , g_1248) , g_403) > 0x03L)))) | g_117) , l_1125[3]) < g_851.f2) <= l_1124) <= l_1210[0]), p_22)) != l_1116) & 0x7D1B3330L))
                    {
                        unsigned l_1264 = 0xA0CFF377L;
                        unsigned short l_1266 = 0x36A8L;
                        int l_1273 = 1L;
                        l_1233 = func_64(g_1012.f1, l_1215, (g_1249 , (safe_add_func_int32_t_s_s((p_22 , ((g_858.f3 |= ((+p_21) && (p_22 & g_716[0][0]))) , ((safe_rshift_func_uint8_t_u_s(l_1221, 0)) <= (safe_rshift_func_uint16_t_u_s(((p_21 && (-9L)) != l_1193), l_1029))))), 0x3C7332CCL))), p_22, g_1014[1][0][5].f2);
                        l_1215 = ((l_1232[4] != (((safe_add_func_int16_t_s_s(func_112((l_1206[5] = ((((g_1012.f0 , (p_21 | ((safe_mod_func_int16_t_s_s((((~(l_1264 = ((l_1210[7] ^= (((g_878[3] , p_21) && 1UL) < (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((l_1233 |= l_1119), func_84(((p_22 != (l_1130 || l_1127)) <= l_1062), p_21, g_1012.f2, p_22, g_752[0].f1))), p_21)))) ^ g_959.f3))) , g_877.f2) , l_1121), l_1265[0])) , l_1266))) < 0UL) | 0x55EE8394L) , 0xE4F10BB4L)), p_22, l_1119, l_1129), 65531UL)) , g_675.f0) && p_21)) | g_852.f0);
                        l_1062 |= ((safe_mod_func_int16_t_s_s((((l_1131 = ((safe_rshift_func_uint16_t_u_s(((l_1273 &= ((safe_rshift_func_uint8_t_u_s(p_21, 4)) ^ func_76(l_1192, g_170, l_1233))) && l_1232[1]), 7)) & (g_1274 , l_1215))) , g_1012.f4) > p_22), p_22)) ^ 65534UL);
                    }
                    else
                    {
                        int l_1277[5][7] = {{0L,0x1C91A037L,0L,0x1C91A037L,0L,0L,0x1C91A037L},{(-1L),4L,(-1L),0xBEE285B5L,0xBEE285B5L,(-1L),4L},{0x1C91A037L,0x68AB20E5L,0L,0L,0x68AB20E5L,0x1C91A037L,0x68AB20E5L},{(-1L),0xBEE285B5L,0xBEE285B5L,(-1L),4L,(-1L),0xBEE285B5L},{0x68AB20E5L,0x68AB20E5L,0L,0x6C3DD43FL,0L,0x68AB20E5L,0x68AB20E5L}};
                        int i, j;
                        g_740.f4 = (l_1289 = ((safe_rshift_func_uint8_t_u_s(((l_1277[0][3] <= ((g_154 &= l_1217) != g_1247.f1)) | (g_1278 , (((safe_add_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u((l_1118 &= g_1013.f0), 0UL)) & (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((l_1029 ^= g_1278.f4) & (l_1216 = (func_84((((((safe_lshift_func_uint8_t_u_u((l_1193 <= (g_852.f2 || g_852.f3)), 0)) && g_1274.f0) | g_5[0]) | p_22) < p_22), p_22, g_959.f0, l_1206[5], l_1277[0][3]) , l_1127))), g_645.f2)), l_1124))) >= l_1277[2][3]), p_22)) && (-3L)) != 0xA9L))), p_22)) | l_1126));
                        g_676[6].f0 = (l_1265[8] , g_676[6].f4);
                    }
                }
                l_1126 |= func_112(g_990[0][3][0].f2, (func_84(g_7, p_22, l_867, g_322, (l_1029 ^= ((((((func_84(p_21, (((g_645.f1 && p_22) < (g_1000.f3 , l_1107)) , g_740.f0), g_739.f0, p_21, l_1290) , l_1265[0]) >= p_22) , l_1032[4]) > p_22) != p_22) > p_21))) <= g_358), p_22, g_1274.f3);
                l_1210[1] = 0L;
            }
        }
    }
    if (func_29(l_1291, (safe_mod_func_uint8_t_u_u((l_1125[5] , (safe_add_func_int16_t_s_s(func_112((l_1206[0] &= ((p_21 <= ((safe_lshift_func_uint8_t_u_s((func_41(g_740.f0) , p_22), (safe_lshift_func_uint8_t_u_s((l_1032[1] = (l_1125[3] >= (+((safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(func_84(g_878[3].f1, ((safe_add_func_uint16_t_u_u(((l_1110 ^= 0x894EL) , p_22), p_22)) , l_1031[3][0]), p_22, p_22, g_5[0]), l_1218)), 0x73L)) ^ p_21)))), 7)))) | l_1062)) ^ g_616)), p_21, l_1306[2], l_867), 1L))), g_752[0].f1)), l_1291, l_1218))
    {
        int l_1310 = 0x3ACBF8B8L;
        int l_1331 = 5L;
        int l_1345[2];
        unsigned short l_1364 = 9UL;
        unsigned short l_1405 = 0x42D1L;
        int i;
        for (i = 0; i < 2; i++)
            l_1345[i] = (-1L);
        if ((safe_add_func_int8_t_s_s(l_1309, (0x0A167CD7L == (l_1310 || (safe_sub_func_uint16_t_u_u(g_331, g_646.f2)))))))
        {
            short l_1317 = 1L;
            int l_1333 = (-7L);
            int l_1335 = (-8L);
            int l_1337 = 0x076CCF39L;
            int l_1339 = 0x655DCE5EL;
            int l_1340 = 0L;
            int l_1341 = 0x0669D344L;
            int l_1342 = 0L;
            int l_1343 = (-6L);
            int l_1344 = 0L;
            int l_1347 = 0x40CFFC9FL;
            int l_1348 = 0x3BBE8D86L;
            int l_1349[4];
            unsigned char l_1350 = 0xAEL;
            int l_1358 = 7L;
            short l_1360 = 1L;
            unsigned l_1361 = 4294967295UL;
            int i;
            for (i = 0; i < 4; i++)
                l_1349[i] = 0xCFD44A66L;
            for (g_196 = 0; (g_196 == 41); g_196 = safe_add_func_int16_t_s_s(g_196, 1))
            {
                short l_1318 = 0xE46AL;
                int l_1334 = 0x9FA4F8C3L;
                int l_1336 = 0L;
                int l_1338[4][9][2] = {{{0L,0L},{0x48BE62D0L,0x900C98F0L},{4L,4L},{0x0DA044F5L,(-3L)},{0x404AF1DEL,0x0DA044F5L},{7L,0x89B113B7L},{7L,0x0DA044F5L},{0x404AF1DEL,(-3L)},{0x0DA044F5L,4L}},{{4L,0x900C98F0L},{0x48BE62D0L,0L},{0L,4L},{(-8L),7L},{0x404AF1DEL,(-8L)},{5L,0x89B113B7L},{(-3L),0x22996258L},{0x404AF1DEL,5L},{0x22996258L,4L}},{{0x900C98F0L,4L},{0x48BE62D0L,4L},{0x900C98F0L,4L},{0x22996258L,5L},{0x404AF1DEL,0x22996258L},{(-3L),0x89B113B7L},{5L,(-8L)},{0x404AF1DEL,7L},{(-8L),4L}},{{0L,0L},{0x48BE62D0L,0x900C98F0L},{4L,4L},{0x0DA044F5L,(-3L)},{0x404AF1DEL,0x0DA044F5L},{7L,0x89B113B7L},{7L,0x0DA044F5L},{0x404AF1DEL,(-3L)},{0x0DA044F5L,4L}}};
                int l_1346 = (-5L);
                int i, j, k;
                g_1013.f3 &= (l_1331 = (g_1274.f4 ^ func_84(((safe_sub_func_int16_t_s_s((l_1317 >= l_1318), (safe_lshift_func_uint16_t_u_u(func_84((((g_717[1][4][2].f0 < (g_267--)) < ((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(g_645.f3, l_1317)), ((g_858.f0 | ((((((((l_1310 = (!l_1310)) ^ (safe_add_func_uint8_t_u_u(g_322, 0x44L))) > 0xEAC3L) , 0x0E418719L) , l_1317) > l_1331) || 0x07A9L) >= 0xB76CL)) > 0x9DL))) > l_1331), 5)) != p_21)) & 0x38FAL), g_1332, g_959.f1, p_21, g_645.f3), 0)))) < g_170), g_852.f2, l_1317, g_858.f2, g_169[5][0][0])));
                l_1350--;
            }
            if ((safe_lshift_func_uint16_t_u_s(((-1L) >= 0x3DE3L), 12)))
            {
                int l_1356 = 0x9423409AL;
                int l_1357 = (-10L);
                int l_1359 = 0L;
                g_1355[1] = g_1138;
                l_1361--;
            }
            else
            {
                g_1274.f4 ^= l_1364;
                l_1032[4] ^= (safe_mod_func_int16_t_s_s((l_1345[0] &= (p_22 != 0x3BEAL)), g_717[1][4][2].f1));
                l_1206[5] = l_1340;
            }
        }
        else
        {
            unsigned l_1376[1][4];
            unsigned l_1387 = 4294967289UL;
            int l_1388 = 8L;
            char l_1406 = (-10L);
            int l_1410 = (-6L);
            int l_1413[10] = {0xAEE80249L,0xAEE80249L,0xAEE80249L,0xAEE80249L,0xAEE80249L,0xAEE80249L,0xAEE80249L,0xAEE80249L,0xAEE80249L,0xAEE80249L};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1376[i][j] = 0xAA16E80DL;
            }
            for (g_1033.f1 = (-20); (g_1033.f1 >= 21); g_1033.f1++)
            {
                unsigned l_1369 = 1UL;
                int l_1386 = 0xE29E14A9L;
                int l_1407 = 0xD62D5E21L;
                int l_1408 = 1L;
                int l_1409 = 0x47723DE2L;
                int l_1411 = 0L;
                int l_1412 = 2L;
                int l_1414[2][8] = {{0x7CB531A6L,0L,0x7CB531A6L,0x0933825BL,0xDCD97BEAL,0xDCD97BEAL,0x0933825BL,0xDE68EEDFL},{0xDCD97BEAL,0xDCD97BEAL,0x0933825BL,0x7CB531A6L,0L,0x7CB531A6L,0x0933825BL,0xDCD97BEAL}};
                int i, j;
                --l_1369;
                l_1206[9] = (((g_322 != ((++g_314) , (((g_646.f0 <= g_676[6].f1) | ((!g_267) >= (((func_84(((safe_add_func_uint8_t_u_u((((func_84(((l_1376[0][0] & (safe_rshift_func_int8_t_s_s((l_1206[5] = g_1247.f3), 5))) , ((l_1388 = (safe_lshift_func_int8_t_s_s(0x9BL, func_84(((((safe_lshift_func_int16_t_s_s((l_1383[4][4][2] , (l_1386 = ((safe_mod_func_uint8_t_u_u(p_22, g_852.f1)) >= g_1332))), p_21)) == g_852.f2) & l_1369) != l_1387), g_314, g_646.f0, l_1310, l_1376[0][0])))) > 0x43DAL)), p_21, g_403, p_21, p_22) | g_43.f2) < g_717[1][4][2].f1) >= g_1013.f3), (-1L))) | l_867), g_1135[1].f2, p_22, l_1369, l_1369) != g_7) <= 65530UL) , p_21))) , 0L))) & 1UL) | p_22);
                l_1386 = (g_1389 , (l_1062 = ((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint8_t_u_s((((g_676[6].f0 , (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((0x41B7L > (p_22 < 0x7E82763FL)) || ((l_1345[0] = (l_1386 & ((safe_sub_func_uint16_t_u_u((((~func_64((l_1388 = (~(safe_mul_func_int16_t_s_s(l_1386, ((((safe_rshift_func_int16_t_s_u(l_1386, 1)) && (safe_lshift_func_int16_t_s_s(l_1386, l_1369))) == p_21) == l_1386))))), l_1386, l_1364, g_959.f4, g_275)) > g_752[0].f2) == l_1405), g_1033.f3)) & 9L))) < g_717[1][4][2].f2)), 0L)) & l_1369), 3))) < g_1389.f3) & l_867), 3)))) > 0xC9AEL)));
                g_1415[7][0][4]++;
            }
            g_876 = g_1418;
        }
        for (g_170 = 0; (g_170 <= 51); g_170 = safe_add_func_uint32_t_u_u(g_170, 1))
        {
            int l_1421 = 0x0C5D61E2L;
            int l_1422 = 0x5AC9F21AL;
            int l_1423 = (-1L);
            unsigned l_1482 = 4294967295UL;
            l_1424++;
            for (g_267 = (-5); (g_267 == 23); g_267++)
            {
                char l_1451 = 0x45L;
                int l_1471 = 0x3A04E682L;
                unsigned l_1472 = 0x99013FEEL;
                int l_1481 = 0L;
                l_1422 = (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((g_1135[1].f0 ^= p_22) >= (g_1433[2][2][0] , (!(((l_1206[4] = (safe_mod_func_uint32_t_u_u((g_1415[0][0][1] ^ ((((safe_unary_minus_func_int8_t_s((g_154 = g_2))) ^ l_1421) > ((+(~((65526UL & p_22) > 0xDAL))) >= (p_21 , p_22))) != l_1364)), p_21))) == p_21) & g_959.f0)))), g_169[5][0][0])), 12));
                g_1418.f3 ^= (safe_sub_func_uint8_t_u_u(((g_1433[2][2][0].f1 || 1L) > (l_1310 = (~65534UL))), (safe_mod_func_uint16_t_u_u(l_1206[5], (((safe_sub_func_int32_t_s_s((l_1421 = p_21), (l_1423 < (safe_add_func_int8_t_s_s(0L, func_84((((safe_sub_func_int8_t_s_s((p_22 == (((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(func_84((((p_22 == l_1451) > g_878[3].f3) , 65535UL), l_1422, g_654.f3, g_589, l_1422), l_1423)), 0)) <= g_1248.f2) <= 0xD30CF3AAL)), l_1451)) < g_5[0]) > l_1451), l_1345[0], p_22, g_1274.f3, p_22)))))) , g_275) , g_1452)))));
                if ((g_1013.f0 = ((safe_rshift_func_uint16_t_u_u((l_1110 = l_1422), 13)) ^ ((g_1014[1][0][5].f0 & (safe_rshift_func_int16_t_s_u((p_21 | ((((65530UL >= (l_1345[0] != ((g_1457 , l_1345[1]) && func_84((safe_add_func_uint8_t_u_u(0UL, (p_22 = ((+((((g_1274.f1 <= 0x78FA97ADL) ^ l_1364) <= g_675.f1) , 0x3F28L)) > (-8L))))), g_858.f0, p_21, l_1451, g_1248.f3)))) , 1UL) > 0x1BCFL) == l_1451)), 9))) | l_1032[4]))))
                {
                    if (p_21)
                        break;
                    l_1422 = g_267;
                    g_1461 = g_1460;
                    for (l_1331 = 0; (l_1331 >= 0); l_1331 -= 1)
                    {
                        int i, j;
                        return g_716[l_1331][l_1331];
                    }
                }
                else
                {
                    unsigned l_1465[9][7] = {{4294967289UL,0x006C5F2EL,0xCFED2F10L,1UL,1UL,0xCFED2F10L,0x006C5F2EL},{4294967289UL,0x006C5F2EL,0xCFED2F10L,1UL,1UL,0xCFED2F10L,0x006C5F2EL},{4294967289UL,0x006C5F2EL,0xCFED2F10L,1UL,1UL,0xCFED2F10L,0x006C5F2EL},{4294967289UL,0x006C5F2EL,0xCFED2F10L,1UL,1UL,0xCFED2F10L,0x006C5F2EL},{4294967289UL,0x006C5F2EL,0xCFED2F10L,1UL,1UL,0xCFED2F10L,0x006C5F2EL},{4294967289UL,0x006C5F2EL,0xCFED2F10L,1UL,1UL,0xCFED2F10L,0x006C5F2EL},{4294967289UL,0x006C5F2EL,0xCFED2F10L,1UL,1UL,0xCFED2F10L,0x006C5F2EL},{4294967289UL,0x006C5F2EL,0xCFED2F10L,1UL,1UL,0xCFED2F10L,0x006C5F2EL},{4294967289UL,0x006C5F2EL,0xCFED2F10L,1UL,1UL,0xCFED2F10L,0x006C5F2EL}};
                    char l_1468 = 0xE1L;
                    int l_1470 = 0x53A66B0EL;
                    int i, j;
                    g_1274 = g_752[0];
                    if ((!l_1405))
                    {
                        l_1423 = (safe_sub_func_int32_t_s_s(p_22, 9UL));
                    }
                    else
                    {
                        char l_1469 = 0xFEL;
                        g_1067 = g_1464;
                        l_1465[5][3]--;
                        l_1472++;
                    }
                    for (l_1451 = (-20); (l_1451 != (-22)); l_1451 = safe_sub_func_int16_t_s_s(l_1451, 9))
                    {
                        unsigned short l_1477 = 1UL;
                        l_1477--;
                        l_1470 = g_1138.f2;
                        g_1249 = g_1480;
                        --l_1482;
                    }
                }
                if (g_875[1].f1)
                    continue;
            }
        }
        g_1486 = g_1485;
        return l_1331;
    }
    else
    {
        unsigned l_1494 = 4294967295UL;
        const unsigned short l_1503 = 65535UL;
        int l_1504 = (-1L);
        unsigned l_1514 = 0x9109CD4DL;
        short l_1561 = 0x9027L;
        const unsigned l_1565 = 0x837E3FB9L;
        unsigned l_1566 = 0x0133DD1FL;
        int l_1576 = 0xA1054980L;
        int l_1577 = 1L;
        int l_1585 = (-2L);
        short l_1595 = 7L;
        int l_1600[5][2] = {{0x93F70C6FL,0xA42CD8A7L},{3L,3L},{3L,0xA42CD8A7L},{0x93F70C6FL,0x8D3F56C4L},{0xA42CD8A7L,0x8D3F56C4L}};
        unsigned l_1607[5] = {1UL,1UL,1UL,1UL,1UL};
        int i, j;
        if (((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(g_1485.f0)), ((safe_lshift_func_uint8_t_u_u(l_1494, 4)) && (safe_sub_func_int32_t_s_s((func_64(((g_739.f3 = (safe_rshift_func_int16_t_s_u((l_1125[0] & (p_21 == (((p_21 | (l_1032[9] = (func_84((((safe_mod_func_int8_t_s_s(l_1206[5], func_84((l_1504 = l_1503), l_1503, g_1135[1].f4, l_1494, g_1480.f2))) <= p_22) >= g_1135[1].f2), l_1032[0], g_1000.f0, l_1309, l_1503) , 0L))) , 0x63A5L) , l_1309))), l_1503))) , l_1504), l_1505[0][1], g_878[3].f1, l_1125[5], g_858.f0) == g_752[0].f1), 0xAC4C24D5L))))), 0x04F2681BL)) ^ g_1000.f1))
        {
            const unsigned short l_1516 = 0xB743L;
            int l_1517 = (-1L);
            int l_1537 = 0xEED74FE5L;
            int l_1538 = (-1L);
            for (g_646.f1 = 0; (g_646.f1 >= 52); g_646.f1++)
            {
                unsigned l_1515[6][8][5] = {{{4UL,1UL,4294967295UL,0xB5F94390L,0xFD46233AL},{1UL,1UL,0UL,1UL,0xC670C870L},{0xF29E85F2L,0xC0989C50L,0x134ECC44L,0x134ECC44L,0xC0989C50L},{4294967295UL,0x36A829B8L,1UL,4294967286UL,0xB5F94390L},{0x37FEDDF1L,4294967295UL,0UL,0xCF46A692L,0xDF8E770FL},{0UL,0x4F90C764L,4294967294UL,0x37FEDDF1L,0x9070FA31L},{0x37FEDDF1L,0xE11BF325L,1UL,4294967293UL,0x858D84CAL},{4294967295UL,0xF04809BFL,4294967295UL,0xB5F94390L,4294967293UL}},{{0xF29E85F2L,4294967286UL,0UL,0x4F90C764L,4294967289UL},{4294967295UL,0x3138850EL,0xAD289061L,0UL,0xF04809BFL},{0x7982FB9FL,0x38ED5E2FL,0x308AA73AL,0xC0989C50L,0xF04809BFL},{0x5BDB45BAL,0x21ECE16EL,0x38ED5E2FL,4UL,4294967289UL},{0x9070FA31L,4UL,1UL,4294967295UL,4294967293UL},{0xFD46233AL,0x9070FA31L,0x9070FA31L,0xFD46233AL,0x858D84CAL},{0xDD7229F7L,1UL,4294967293UL,0x43824CF9L,0x9070FA31L},{0x89BBCCA4L,0x37FEDDF1L,4UL,0xCA4972B4L,0xDF8E770FL}},{{0xE11BF325L,1UL,0x7E333919L,0x43824CF9L,0xB5F94390L},{0x36A829B8L,1UL,0xE6088A0AL,0xFD46233AL,0xC0989C50L},{0x3138850EL,0x308AA73AL,0x21ECE16EL,4294967295UL,0xC670C870L},{8UL,4294967293UL,0xC670C870L,4UL,0x7E333919L},{0x7E333919L,0xCF46A692L,4294967295UL,0xC0989C50L,0xDF8E770FL},{0x134ECC44L,8UL,0xAD289061L,4294967295UL,0xDD7229F7L},{0x308AA73AL,0xDD7229F7L,4294967294UL,0xF04809BFL,0x21ECE16EL},{0xC0989C50L,4294967294UL,0x7982FB9FL,1UL,0x7982FB9FL}},{{4294967295UL,4294967295UL,4294967289UL,0x43824CF9L,0UL},{4294967295UL,0x7E333919L,0x94A1883CL,4294967294UL,0x38ED5E2FL},{0UL,1UL,0x9070FA31L,0xC670C870L,0xF29E85F2L},{1UL,0x7E333919L,0x43824CF9L,0xB5F94390L,0UL},{0x7982FB9FL,4294967295UL,0xCF46A692L,0UL,1UL},{0xAD289061L,4294967294UL,0x36A829B8L,0x134ECC44L,0xFD46233AL},{0xE11BF325L,0xDD7229F7L,0x4F90C764L,4294967295UL,0xBF0A873CL},{0x7E333919L,8UL,4UL,1UL,4294967295UL}},{{0x7E333919L,0xC670C870L,4294967286UL,4294967295UL,4294967289UL},{0xE11BF325L,0x43824CF9L,4294967295UL,0x94A1883CL,1UL},{0xAD289061L,4UL,4294967286UL,4UL,0xAD289061L},{0x7982FB9FL,4294967295UL,0x134ECC44L,0xF29E85F2L,4294967295UL},{1UL,0xDF8E770FL,0x89BBCCA4L,0x308AA73AL,0xE11BF325L},{0UL,4294967294UL,1UL,4294967295UL,4294967295UL},{4294967295UL,0x308AA73AL,0xCA4972B4L,0xC0989C50L,0xAD289061L},{4294967295UL,0xCF46A692L,0UL,1UL,1UL}},{{1UL,0xBF0A873CL,0x38ED5E2FL,1UL,1UL},{0x21ECE16EL,4294967294UL,0x134ECC44L,0xCF46A692L,4294967286UL},{0xAD289061L,0xE6088A0AL,0xDF8E770FL,0xCF46A692L,0UL},{0x858D84CAL,0x36A829B8L,0x308AA73AL,1UL,0x7E333919L},{1UL,0x2FBAFE04L,0UL,0xDD7229F7L,0xDD7229F7L},{0x36A829B8L,4294967295UL,0x36A829B8L,1UL,4294967286UL},{0x7E333919L,0UL,4294967293UL,4294967286UL,0xFD46233AL},{0UL,4294967289UL,1UL,0x21ECE16EL,0xC0989C50L}}};
                const unsigned l_1518[10] = {0x27D6D900L,0x196507AAL,0x196507AAL,0x27D6D900L,1UL,0x27D6D900L,0x196507AAL,0x196507AAL,0x27D6D900L,1UL};
                const int l_1547 = 0xE5DA2CB9L;
                int l_1548 = (-1L);
                int i, j, k;
                l_1206[2] = (l_1517 = (g_716[0][1] , func_59(p_21, ((++p_22) < 0x2BL), g_1418.f3, (l_1504 = (((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((func_112((p_21 , func_112(l_1514, l_1515[0][4][1], g_717[1][4][2].f3, (g_959.f3 = ((g_1464.f1 , l_1515[1][4][1]) | 0UL)))), p_21, p_21, g_646.f1) != 0x727DA607L) , 251UL), l_1516)), p_21)) != 0xC1L) == 0x086D95DEL)))));
                if (l_1518[6])
                {
                    return p_22;
                }
                else
                {
                    int l_1532 = 0x0D65864AL;
                    int l_1534 = 4L;
                    l_1206[5] |= ((((((g_1066.f0 > (((l_1503 != func_59(((l_1504 && 0x41E897B6L) & (((safe_lshift_func_int16_t_s_u(l_1515[0][4][1], 7)) != (safe_lshift_func_uint8_t_u_s(l_1516, 5))) == (safe_mod_func_int32_t_s_s((+(((((((safe_add_func_int8_t_s_s((g_154 = (p_22 > ((l_1532 = ((safe_mod_func_uint32_t_u_u(func_84((((safe_rshift_func_int16_t_s_u(g_739.f1, 0)) , (-6L)) , p_21), g_1531, p_22, l_1505[0][1], g_877.f1), l_1031[3][0])) && l_1516)) , 0xD09A6663L))), g_959.f0)) , p_22) > l_1503) & 0xB9L) >= p_21) < p_22) < l_1517)), l_1383[5][4][1])))), p_22, p_21, l_1517)) , g_1533) , p_21)) && (-3L)) < l_1515[0][4][1]) < l_1534) < 0x58BDA618L) , 0x341FDE59L);
                }
                g_1549 = func_23(l_1517, ((safe_rshift_func_uint16_t_u_s(l_1494, (func_76(p_22, g_1457.f0, p_21) , ((g_561++) , (0xC2398785L == (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((((l_1548 ^= ((safe_add_func_uint8_t_u_u((g_1249.f0 & (((((((l_1494 | 0xFE621CD0L) <= g_256[0][3]) ^ g_654.f1) & p_22) , p_21) && 6L) != l_1547)), g_654.f1)) < 0x7A7CL)) >= 0x1913L) == g_1480.f1) < 0x42FDD90AL), p_21)), 65529UL))))))) , p_22), l_1538, g_740.f1, g_1486.f0);
            }
        }
        else
        {
            char l_1552 = 0x9AL;
            int l_1564[4];
            unsigned l_1571 = 1UL;
            int i;
            for (i = 0; i < 4; i++)
                l_1564[i] = 1L;
            if ((l_1218 != (safe_add_func_uint8_t_u_u(func_59(g_1461.f0, p_21, ((l_1552 , (((+(safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((g_1486.f2 ^ (safe_sub_func_uint16_t_u_u(0xB0B0L, l_1561))), (l_1110 = (l_1564[3] = (safe_mod_func_uint16_t_u_u(l_1552, p_22)))))), 7)), 4))) < l_1565) | 4294967295UL)) , p_22), l_1552), l_1031[3][0]))))
            {
                int l_1572 = 0x51094303L;
                int l_1575 = 0xC9CE2755L;
                int l_1578 = 0x12FFDE4CL;
                int l_1579 = 8L;
                int l_1580 = 0x0D949F71L;
                int l_1581 = 0L;
                int l_1582 = 9L;
                int l_1583 = 0xB473066EL;
                int l_1584 = (-1L);
                if (func_59((l_1566 , (((((((l_1504 |= (p_21 || (1UL || (safe_mod_func_uint8_t_u_u(0UL, (p_22 || ((((l_1125[5] , (((p_22 != g_875[1].f2) & (safe_add_func_int32_t_s_s(l_1571, 0UL))) , g_1485.f1)) ^ 0xC6FFL) && l_1494) , 0x9EL))))))) | 0x3EL) , (-1L)) ^ l_1514) , 0x34D0827EL) , g_314) && l_1572)), g_878[3].f0, p_21, p_21))
                {
                    unsigned char l_1586 = 6UL;
                    g_1573 = func_41(l_1561);
                    for (g_740.f1 = 0; (g_740.f1 <= 8); g_740.f1 += 1)
                    {
                        unsigned l_1574 = 4294967294UL;
                        if (g_877.f4)
                            break;
                        if (l_1574)
                            break;
                    }
                    l_1586++;
                }
                else
                {
                    char l_1596 = 9L;
                    if ((((l_1504 = (-1L)) & func_29(g_740.f3, (safe_rshift_func_int8_t_s_u(func_84(g_740.f4, g_1033.f2, l_1424, ((safe_rshift_func_int8_t_s_s(((((((((safe_sub_func_int16_t_s_s(l_1291, ((0xAF80L > 65534UL) , p_22))) || p_22) || 6UL) || 252UL) , 0x96FF56B3L) , l_1110) >= l_1595) < p_21), 7)) , g_852.f1), p_21), 3)), p_21, l_1561)) < p_21))
                    {
                        return l_1576;
                    }
                    else
                    {
                        l_1597++;
                        return g_281;
                    }
                }
                ++l_1602;
                g_1067.f4 = ((((safe_lshift_func_uint8_t_u_u(l_1607[2], (l_1206[6] |= (g_878[3].f1 ^= func_76(g_1433[2][2][0].f3, l_1424, (((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((4294967294UL != (l_1032[4] &= (l_1602 >= ((safe_add_func_uint8_t_u_u(0xF1L, ((l_1309 && (safe_add_func_uint8_t_u_u((l_1062 = func_59((p_22 == (g_858.f0 , l_1583)), p_22, g_1274.f2, g_331)), l_1578))) | g_851.f2))) , g_331)))) <= p_21), p_22)), p_21)) || l_1582) , p_21)))))) != p_22) | p_21) | 0x1DL);
            }
            else
            {
                unsigned l_1616 = 0x174FC24CL;
                int l_1633 = (-7L);
                int l_1634 = 0L;
                int l_1635 = 1L;
                int l_1636 = (-2L);
                int l_1637 = 0xE00356B8L;
                int l_1638 = (-8L);
                l_1616 &= 0L;
                l_1577 |= (safe_mod_func_uint16_t_u_u(((g_1389.f0 , ((safe_unary_minus_func_uint32_t_u((((g_1573.f2 < ((((safe_rshift_func_int16_t_s_s(l_1616, l_1600[2][0])) == g_1622) == (safe_lshift_func_uint8_t_u_s((g_1014[1][0][5].f1++), (l_1564[3] |= g_1533)))) , (safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_1291, (-1L))), (!(((safe_lshift_func_int16_t_s_s(0L, 4)) < p_21) != 1UL)))))) <= 7UL) , l_1616))) ^ 1UL)) != l_1616), g_1355[1].f4));
                ++l_1639;
                g_1457.f0 = (safe_add_func_uint32_t_u_u(p_22, (l_1564[3] && g_1138.f1)));
            }
        }
        for (g_851.f1 = 0; (g_851.f1 != 22); g_851.f1 = safe_add_func_int32_t_s_s(g_851.f1, 9))
        {
            int l_1658 = 0L;
            l_1660 = (safe_add_func_int32_t_s_s((g_1648 , l_1607[1]), (g_654.f0 && ((p_21 == p_21) && (((safe_mod_func_int32_t_s_s(((((safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u((g_589 = g_1332))) || (g_1248.f0 , g_1648.f2)), (((((p_22 | p_21) != p_22) ^ 0xEACAL) > 0UL) != g_5[0]))), l_1595)) , l_1658) & 0x54L) , l_1565), g_851.f1)) , g_1659[0]) && l_1658)))));
            g_645.f3 |= (l_1585 ^= (((l_1062 = (safe_mod_func_int8_t_s_s(func_84(p_21, l_1658, g_991.f0, p_22, p_22), (l_1032[3] = (((((safe_sub_func_uint16_t_u_u((((((((((((safe_lshift_func_int8_t_s_s(g_1573.f0, 7)) >= ((0xDEE3L >= (g_510 ^= ((l_1206[5] ^= ((~((safe_lshift_func_uint16_t_u_u((g_1659[4] = (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_1014[1][0][5].f3, 7L)), 0xD3L))), 12)) , p_21)) , l_1658)) != p_22))) < g_646.f2)) || 4UL) > 0x1003L) , 0x79L) , l_1658) >= p_21) , 0xACL) , l_1206[5]) || 65535UL) , l_1514), l_1383[4][4][2])) > (-10L)) & 3UL) , p_22) , 0x2AL))))) & (-1L)) != g_275));
        }
        for (g_1549.f1 = 0; (g_1549.f1 >= 52); g_1549.f1 = safe_add_func_int32_t_s_s(g_1549.f1, 1))
        {
            g_1486.f3 = (safe_lshift_func_int16_t_s_s(0xE683L, (safe_unary_minus_func_uint32_t_u((1UL <= l_867)))));
            return l_1597;
        }
        for (g_1549.f1 = 17; (g_1549.f1 >= 4); g_1549.f1--)
        {
            unsigned l_1680 = 1UL;
            int l_1689 = 0x1D369CC1L;
            int l_1726 = 9L;
            int l_1727 = 0L;
            int l_1728[1][1];
            unsigned char l_1740 = 255UL;
            unsigned short l_1747 = 0xC204L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1728[i][j] = (-1L);
            }
            l_1680--;
            if (((safe_lshift_func_uint8_t_u_u(p_22, 4)) > (g_740.f0 <= ((((g_878[3].f1 < ((l_1206[7] = (l_1494 <= (func_76(l_1595, l_1680, (g_1066.f2 > ((l_1206[3] = ((((((safe_mod_func_int8_t_s_s((((l_1031[3][0] <= (p_22 , 0UL)) == p_21) , 0xACL), g_740.f2)) | g_1533) != 4L) , 0x06EE0D92L) , 0x7BF5L) || g_1014[1][0][5].f1)) < 0xC4L))) >= g_739.f2))) != l_1561)) != 0x9A9DL) && p_21) , l_1561))))
            {
                unsigned l_1687[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_1687[i] = 6UL;
                l_1689 &= func_112(l_1680, g_1433[2][2][0].f0, l_1597, ((((!l_1504) | (0x622FECDAL != (0x790E7B7AL & ((func_112((l_1687[4] = 0xF08A1888L), (l_1680 ^ p_21), p_21, g_1480.f1) , l_1688) , g_1622)))) , l_1680) <= 0x6D1CDFB8L));
            }
            else
            {
                int l_1693 = 0x30FBE642L;
                int l_1714 = 0xC6A75A74L;
                int l_1735 = (-1L);
                int l_1737 = 0xA1074D29L;
                int l_1738 = 0xCB68ECC8L;
                int l_1739 = (-5L);
                int l_1745 = (-1L);
                int l_1746 = (-9L);
                if (((safe_unary_minus_func_int16_t_s(((safe_sub_func_uint8_t_u_u(251UL, p_22)) > (((l_1693 < ((l_1693 ^ ((g_1332 || (safe_sub_func_int16_t_s_s(((func_76((((safe_sub_func_int32_t_s_s(((p_21 == (!3L)) | (l_1689 = g_169[5][0][0])), (g_256[5][4] = g_675.f4))) | g_1135[1].f2) < 0xA81FAF93L), l_1031[5][0], p_22) <= p_21) <= l_1031[8][0]), 0x8259L))) != p_22)) | 0x3555L)) , 0xD9FBL) > p_21)))) ^ 0xE2L))
                {
                    short l_1701 = 0xE568L;
                    int l_1710 = 0x82A7C568L;
                    int l_1712 = 0xAB976FE8L;
                    int l_1713 = (-1L);
                    int l_1729 = 0x4D2BB7E1L;
                    int l_1733 = 0x984B9733L;
                    int l_1734 = 0x1311A844L;
                    int l_1736 = 1L;
                    l_1693 = g_1485.f4;
                    if (p_22)
                    {
                        return l_1565;
                    }
                    else
                    {
                        int l_1702[4];
                        int l_1711 = 0x712B7749L;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1702[i] = (-2L);
                        g_1648 = func_23(p_21, l_1600[2][0], (g_1533 , (((l_1561 < 0UL) <= ((+l_867) != (g_1700 , (249UL > ((g_1486.f2 = l_1701) <= l_1576))))) < l_1701)), l_1689, l_1702[2]);
                        g_1703 = g_1066;
                        g_1135[1].f3 &= (safe_sub_func_int32_t_s_s(func_64(l_1503, l_1693, (p_22 , (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_1480.f0, (++g_256[4][1]))), (g_851.f1 < (safe_lshift_func_uint8_t_u_s(255UL, 7)))))), p_22, p_22), 0xF0C28D1DL));
                    }
                    for (p_22 = (-23); (p_22 != 5); ++p_22)
                    {
                        char l_1721 = 0xD1L;
                        int l_1722 = 0x56F31EB7L;
                        int l_1723 = (-1L);
                        int l_1724 = (-7L);
                        int l_1725 = 0x161A79EAL;
                        int l_1730 = 0xEA2B41F2L;
                        int l_1731 = 0xCBFA5E69L;
                        int l_1732[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1732[i] = 0xA4D29368L;
                        if (g_127[1][0])
                            break;
                        ++l_1740;
                        return l_1725;
                    }
                }
                else
                {
                    if (p_22)
                        break;
                    return g_739.f2;
                }
                g_1601 = g_1138.f0;
                --l_1747;
            }
            --l_1750[0];
            l_1206[3] = (0UL != (safe_add_func_int16_t_s_s(4L, (safe_lshift_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((((g_1389.f2 >= (safe_mod_func_uint8_t_u_u(l_1726, ((safe_add_func_int16_t_s_s(p_21, p_21)) | g_331)))) & (p_21 <= g_154)) , p_22) < l_1383[5][6][2]), 10)) >= (-4L)), g_127[1][1])) ^ 255UL) > p_22) || 0x7B9EL), p_22)))));
        }
    }
    for (g_403 = (-9); (g_403 >= 20); g_403 = safe_add_func_int32_t_s_s(g_403, 4))
    {
        unsigned l_1777 = 4294967295UL;
        int l_1780[10][1] = {{0x92C66DFFL},{0x92C66DFFL},{0xA5BD5365L},{0x92C66DFFL},{0x92C66DFFL},{0xA5BD5365L},{0x92C66DFFL},{0x92C66DFFL},{0xA5BD5365L},{0x92C66DFFL}};
        int l_1818 = 6L;
        char l_1828 = 0x24L;
        unsigned short l_1842 = 0UL;
        short l_1854 = 0xF58DL;
        unsigned short l_1857 = 65535UL;
        int l_1877 = (-1L);
        int l_1896 = 0L;
        unsigned l_1931[1];
        short l_1958 = 0xB62BL;
        unsigned l_2021 = 1UL;
        unsigned l_2040 = 4294967293UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1931[i] = 0x5BF69A0FL;
        for (g_1531 = 3; (g_1531 <= 9); g_1531 += 1)
        {
            int l_1781 = 0x310A59ECL;
            int l_1786 = (-4L);
            int l_1789 = 0x1E657A3CL;
            int l_1791 = 0x890BE918L;
            int l_1792 = 0x0AE53EEBL;
            int l_1795[6][8] = {{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L}};
            unsigned l_1814[6] = {5UL,5UL,5UL,5UL,5UL,5UL};
            char l_1853 = 1L;
            int i, j;
            if ((safe_sub_func_int32_t_s_s((l_1206[g_1531] || ((g_675.f2 >= g_154) ^ (g_1000.f2 < l_1291))), p_21)))
            {
                char l_1774 = (-1L);
                unsigned char l_1775 = 0xDEL;
                for (g_858.f1 = 0; (g_858.f1 <= 0); g_858.f1 += 1)
                {
                    unsigned short l_1769[9] = {0x1289L,65535UL,65535UL,0x1289L,65535UL,65535UL,0x1289L,65535UL,65535UL};
                    const int l_1776 = 0x3A407F44L;
                    int i, j, k;
                    for (g_1012.f1 = 0; (g_1012.f1 <= 0); g_1012.f1 += 1)
                    {
                        int i, j, k;
                        l_1769[8]--;
                        l_1206[g_1531] &= g_6[g_858.f1][(g_858.f1 + 7)][(g_1012.f1 + 1)];
                        l_1206[g_1531] = (((((func_23(g_716[g_858.f1][g_858.f1], l_1206[(g_1012.f1 + 8)], func_64(p_22, func_76(((safe_mod_func_uint16_t_u_u(l_1206[g_1531], func_112(l_1774, p_22, l_1206[g_1531], ((g_1389.f2 = l_1125[5]) , g_716[0][0])))) && (-1L)), g_1573.f4, l_1769[6]), p_22, l_1775, l_1776), p_21, g_1418.f0) , p_22) ^ l_1775) & g_858.f1) == l_1206[g_1531]) & l_1777);
                        g_1779[1] = (g_281 , g_1778);
                    }
                    if (g_6[g_858.f1][(g_858.f1 + 2)][(g_858.f1 + 4)])
                        continue;
                    if (l_1774)
                        break;
                    if (g_5[0])
                        break;
                }
            }
            else
            {
                char l_1782[6];
                int l_1783 = 0x729BA5B0L;
                int l_1785 = 0x2D2DCD8FL;
                int l_1788 = 9L;
                int l_1793 = 3L;
                int l_1794 = 0x940179A7L;
                int l_1796 = 0x26D98150L;
                const unsigned l_1829 = 0UL;
                int i;
                for (i = 0; i < 6; i++)
                    l_1782[i] = 0x57L;
                if (l_1777)
                {
                    short l_1784 = 0x046DL;
                    int l_1787 = 0xE98EFA7FL;
                    int l_1790[7] = {0xDA0B0026L,0xDA0B0026L,0xDA0B0026L,0xDA0B0026L,0xDA0B0026L,0xDA0B0026L,0xDA0B0026L};
                    int i;
                    --g_1797;
                    if (l_1031[0][0])
                        continue;
                    for (g_1601 = 0; (g_1601 <= 0); g_1601 += 1)
                    {
                        int i, j, k;
                        g_6[g_1601][g_1531][(g_1601 + 6)] = (0x9CL < (p_21 < p_22));
                    }
                    for (l_1597 = 0; (l_1597 <= 0); l_1597 += 1)
                    {
                        int i, j;
                        g_752[0] = func_23(l_1306[(l_1597 + 4)], (l_1780[g_1531][l_1597] >= ((safe_mod_func_uint32_t_u_u(((l_1785 = ((l_1795[2][0] = (l_1306[(l_1597 + 4)] ^ ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_22, (l_1783 || (safe_lshift_func_uint8_t_u_u(func_64(l_1306[(l_1597 + 4)], (safe_mod_func_int8_t_s_s(p_22, l_1306[2])), ((safe_mod_func_int32_t_s_s(func_84(g_1000.f2, l_1790[6], p_21, p_22, l_1125[3]), l_1787)) != l_1787), g_5[0], g_1700.f4), 7))))), g_1248.f2)) && (-1L)))) == g_1486.f1)) , 0x27918B12L), p_21)) && l_1790[3])), l_1793, p_22, g_646.f0);
                        l_1780[(l_1597 + 7)][l_1597] = 0x57830B1BL;
                    }
                }
                else
                {
                    int l_1812[5];
                    int l_1813[10][10] = {{0x4EA466B3L,0L,0x8432A34AL,0xCF965588L,1L,0x4EA466B3L,0L,(-1L),0L,0xBCFA4788L},{0x39C50918L,(-1L),5L,0xCF965588L,(-9L),1L,0x8432A34AL,5L,0xB0D30528L,2L},{0x39C50918L,(-1L),(-1L),0L,0xBE526214L,0x4EA466B3L,5L,5L,0x4EA466B3L,0xBE526214L},{0x4EA466B3L,5L,5L,0x4EA466B3L,0xBE526214L,0L,(-1L),(-1L),0x39C50918L,2L},{0xB0D30528L,5L,0x8432A34AL,1L,(-9L),0xCF965588L,5L,(-1L),0x39C50918L,0xBCFA4788L},{0L,(-1L),0L,0x4EA466B3L,1L,0xCF965588L,0x8432A34AL,0L,0x4EA466B3L,(-9L)},{(-1L),0x023E1163L,0x9A48CF89L,0L,0x0C460D91L,0L,0x9A48CF89L,0x023E1163L,(-1L),0x64F099F3L},{0L,0x659D4E70L,0L,(-1L),0L,0L,0x9A48CF89L,(-3L),0L,(-1L)},{0x8432A34AL,0x023E1163L,0x1396E627L,(-1L),0x64F099F3L,0xE12BF845L,0L,0x1396E627L,(-1L),(-1L)},{0x8432A34AL,(-3L),0x023E1163L,0L,0x1EA59F2AL,0L,0x1396E627L,0x1396E627L,0L,0x1EA59F2AL}};
                    unsigned char l_1827 = 1UL;
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1812[i] = 0x2FD4846CL;
                    if (l_1383[4][4][2])
                    {
                        l_1814[2]--;
                        g_1817 = g_1485;
                        if (g_1573.f0)
                            continue;
                    }
                    else
                    {
                        l_1813[0][0] |= (l_1818 = (p_21 & ((l_1780[0][0] = 255UL) != l_867)));
                        l_1032[4] = (-1L);
                        g_1249.f0 ^= (p_22 == l_1814[3]);
                    }
                    if (l_1782[3])
                    {
                        return g_1355[1].f2;
                    }
                    else
                    {
                        l_1783 = (safe_lshift_func_uint8_t_u_u(((~((safe_lshift_func_uint16_t_u_u(((func_84(((g_256[6][5] = func_112(l_1785, (g_1817.f2 | g_1066.f0), p_21, (4UL >= (p_21 != (safe_sub_func_int32_t_s_s((((!((p_22 <= (safe_rshift_func_uint8_t_u_u(p_22, 7))) | 0x22AAL)) && 0x6A5BL) >= l_1812[1]), l_1827)))))) >= 0UL), g_1573.f3, g_959.f1, g_1549.f2, g_739.f2) < l_1812[3]) > 3L), p_22)) <= g_1014[1][0][5].f3)) >= g_616), l_1813[7][5]));
                        g_1648.f3 &= (255UL <= ((l_1785 | g_959.f2) , func_112(p_22, p_22, func_84(g_991.f4, p_21, g_739.f3, (((l_1828 = (((g_267 | l_1812[4]) , l_1812[4]) , g_1248.f1)) || p_21) , 0L), l_1829), p_22)));
                    }
                }
                for (l_1796 = (-30); (l_1796 <= (-15)); ++l_1796)
                {
                    unsigned l_1840 = 4294967295UL;
                    int l_1841 = (-7L);
                    g_1844 = ((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(func_64(((safe_add_func_uint8_t_u_u(g_1138.f1, ((l_1794 = (l_1793 = (~l_1125[2]))) & ((g_716[0][0] = g_877.f3) && g_1000.f2)))) , (safe_mod_func_uint8_t_u_u(func_84(g_127[1][0], ((l_1841 = ((0x6E5BB60AL & (l_1840 < l_1688)) , 0x3ECAL)) , 253UL), g_675.f0, p_21, l_1781), l_1818))), g_1274.f3, p_21, p_22, g_1000.f0), 0)), l_1842)) , g_1843[0][5][3]);
                    for (g_1700.f1 = 0; (g_1700.f1 <= 9); g_1700.f1 += 1)
                    {
                        int i;
                        g_1138 = g_1845;
                        --g_1846;
                    }
                    if (((g_1849 , (safe_mod_func_int8_t_s_s(0x8CL, g_450[8]))) | l_1840))
                    {
                        g_1844 = g_1852;
                        l_1688 = g_858.f0;
                        l_1785 = l_1841;
                    }
                    else
                    {
                        return g_851.f0;
                    }
                    l_1783 = g_675.f1;
                }
                for (g_561 = 0; g_561 < 10; g_561 += 1)
                {
                    struct S0 tmp = {-22,0x7DL,18,-17,-25};
                    g_1779[g_561] = tmp;
                }
                return l_1853;
            }
        }
        l_1857++;
        for (g_1700.f1 = (-17); (g_1700.f1 <= 3); g_1700.f1 = safe_add_func_uint16_t_u_u(g_1700.f1, 9))
        {
            unsigned short l_1862 = 0xF4F4L;
            int l_1881 = (-1L);
            int l_1895[6] = {1L,1L,0xEDD858A3L,1L,1L,0xEDD858A3L};
            int l_1916 = 0x2BDDD550L;
            unsigned char l_2053 = 0UL;
            int i;
            for (g_1533 = 0; (g_1533 <= 5); g_1533 += 1)
            {
                int l_1871[5][10] = {{0x5743B1ECL,0xD741FBBAL,1L,0xD741FBBAL,0x5743B1ECL,8L,8L,0x5743B1ECL,0xD741FBBAL,1L},{0xF436D21DL,0xF436D21DL,1L,0x5743B1ECL,3L,0x5743B1ECL,1L,0xF436D21DL,0xF436D21DL,1L},{0xD741FBBAL,0x5743B1ECL,8L,8L,0x5743B1ECL,0xD741FBBAL,1L,0xD741FBBAL,0x5743B1ECL,8L},{0x136FE3FFL,0xF436D21DL,0x136FE3FFL,8L,1L,1L,8L,0x136FE3FFL,0xF436D21DL,0x136FE3FFL},{0x136FE3FFL,0xD741FBBAL,0xF436D21DL,0x5743B1ECL,0xF436D21DL,0xD741FBBAL,0x136FE3FFL,0x136FE3FFL,0xD741FBBAL,1L}};
                char l_1927 = 0xBBL;
                int i, j;
                if ((p_22 , p_22))
                {
                    l_1862 = l_1505[0][1];
                    g_1549.f4 &= ((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((l_1777 <= 0x3B821A2AL), l_1218)) != g_1418.f1), p_21)) || (p_21 , (((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_1871[3][3], (l_1780[0][0] |= (((l_1660 , p_22) != l_1862) & 1UL)))), g_1648.f1)) > p_21) || g_852.f3)));
                }
                else
                {
                    return g_1000.f1;
                }
                if ((safe_unary_minus_func_uint32_t_u(g_1389.f2)))
                {
                    const unsigned short l_1893 = 1UL;
                    unsigned l_1894 = 1UL;
                    int l_1897 = (-5L);
                    int l_1898 = 1L;
                    int l_1899 = 9L;
                    int l_1900 = (-1L);
                    l_1206[3] |= g_1779[1].f1;
                    if ((g_1817.f1 < ((safe_sub_func_uint8_t_u_u(255UL, (safe_sub_func_int8_t_s_s(p_22, (l_1818 = l_1854))))) && l_1877)))
                    {
                        return g_1461.f1;
                    }
                    else
                    {
                        volatile unsigned short l_1878[1][8][4] = {{{0xC04EL,65533UL,0xC04EL,65533UL},{0xC04EL,65533UL,0xC04EL,65533UL},{0xC04EL,65533UL,0xC04EL,65533UL},{0xC04EL,65533UL,0xC04EL,65533UL},{0xC04EL,65533UL,0xC04EL,65533UL},{0xC04EL,65533UL,0xC04EL,65533UL},{0xC04EL,65533UL,0xC04EL,65533UL},{0xC04EL,65533UL,0xC04EL,65533UL}}};
                        int l_1892 = 0L;
                        int i, j, k;
                        l_1878[0][2][3] = (func_112(g_450[8], g_497, p_22, p_21) , g_1460.f1);
                        l_1871[4][1] = (l_1896 ^= (g_1248.f0 = (l_1895[0] = ((safe_mod_func_int32_t_s_s(((l_1881 ^= 2L) <= (safe_add_func_uint32_t_u_u(l_1856, ((0x555683ADL && ((p_22 = p_21) ^ l_1818)) , (func_64((((safe_lshift_func_uint8_t_u_u(((func_84(g_1845.f4, ((((--g_1659[0]) , p_21) & g_1033.f3) == (g_281 = (++g_1846))), (g_510 = (((safe_sub_func_int8_t_s_s((func_76(p_22, g_654.f2, l_1780[0][0]) , g_646.f1), l_1862)) || 0xA6FC75F5L) | g_1622)), l_1892, p_22) | l_1871[1][1]) < l_1871[1][5]), l_1893)) == 0xC670L) >= g_1573.f2), l_1893, p_21, l_1894, g_1135[1].f3) , 0x9F44337DL))))), l_1871[3][3])) == l_1857))));
                    }
                    ++l_1901;
                }
                else
                {
                    return g_1700.f3;
                }
                for (g_510 = 5; (g_510 >= 0); g_510 -= 1)
                {
                    unsigned short l_1904 = 0x9757L;
                    char l_1928 = 1L;
                    for (g_1846 = 0; (g_1846 <= 5); g_1846 += 1)
                    {
                        int i;
                        l_1881 = p_22;
                        if (l_1904)
                            break;
                        l_1206[4] ^= (g_1480.f0 ^= (~g_1700.f4));
                        l_1916 ^= (((!((g_878[g_510] , func_64(func_64(((((((safe_sub_func_uint32_t_u_u(4294967294UL, (((p_21 | (((func_64(g_1457.f0, ((g_852.f2 >= ((((0x7A6AL == ((l_1895[0] ^= ((((l_1877 && ((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0UL, (((p_22 <= 0x2CL) , g_5[0]) != 0x15L))), 65535UL)), 14)), 0L)) != g_1915[2])) || p_21) > 0xFE2F658FL) != g_1452)) & 0x03L)) > p_21) && 0x361B2078L) & g_256[5][4])) , p_22), g_561, p_21, g_1852.f1) < 65535UL) == p_21) ^ l_1032[9])) == g_1033.f0) <= g_646.f1))) ^ 0xB2L) == 0xABD0L) >= 9UL) != l_1032[6]) < g_1000.f0), p_22, l_1904, l_1881, g_1013.f0), p_21, l_1896, p_22, p_22)) || g_1013.f0)) | l_1862) > l_1862);
                    }
                    l_1881 = (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((p_21 >= (safe_add_func_int32_t_s_s(l_1895[3], l_1877))), p_22)) && (((((g_1622 ^ 4L) <= l_1904) | (safe_sub_func_int16_t_s_s(func_84((g_314 = (g_281 = l_1877)), (g_1033.f1 &= 248UL), l_1927, l_1904, g_1843[0][5][3].f2), l_1928))) , l_1895[0]) ^ l_1818)), l_1928)), (-8L)));
                }
                l_1871[4][4] = l_1871[2][2];
            }
            for (l_1881 = 20; (l_1881 == 16); l_1881 = safe_sub_func_int8_t_s_s(l_1881, 4))
            {
                unsigned char l_1932 = 0xF7L;
                int l_1968[3][8][2] = {{{0x0468F4F4L,1L},{0x0468F4F4L,0xF0475CD6L},{0L,0xF0475CD6L},{0x0468F4F4L,1L},{0x0468F4F4L,0xF0475CD6L},{0L,0xF0475CD6L},{0x0468F4F4L,1L},{0x0468F4F4L,0xF0475CD6L}},{{0L,0xF0475CD6L},{0x0468F4F4L,1L},{0x0468F4F4L,0xF0475CD6L},{0L,0xF0475CD6L},{0x0468F4F4L,1L},{0x0468F4F4L,0xF0475CD6L},{0L,0xF0475CD6L},{0x0468F4F4L,1L}},{{0x0468F4F4L,0xF0475CD6L},{0L,0xF0475CD6L},{0x0468F4F4L,1L},{0x0468F4F4L,0xF0475CD6L},{0L,0xF0475CD6L},{0x0468F4F4L,1L},{0x0468F4F4L,0xF0475CD6L},{0L,0xF0475CD6L}}};
                int i, j, k;
                l_1932 = (g_1464.f1 < l_1931[0]);
                l_1916 = (g_858.f0 |= (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(p_21, (g_717[1][4][2].f1 = ((~(safe_sub_func_int8_t_s_s(func_64(p_21, (((safe_rshift_func_uint16_t_u_s(l_1597, 14)) | 0x0771L) && p_22), ((safe_add_func_uint32_t_u_u(l_1916, (safe_add_func_int32_t_s_s(2L, ((safe_lshift_func_int8_t_s_u(g_654.f2, 5)) >= (safe_add_func_int32_t_s_s(l_1031[3][0], p_22))))))) , l_1125[5]), g_1066.f3, l_1842), 0xEFL))) , p_21)))), 11)), 11)));
                l_1818 = (((p_21 || p_22) & (g_1915[2] = (safe_mod_func_uint16_t_u_u(p_21, (safe_add_func_uint32_t_u_u((l_1916 = ((p_21 , (g_716[0][1] = func_112(((safe_unary_minus_func_uint16_t_u(0xEB32L)) || (safe_mod_func_uint8_t_u_u(((((l_1780[3][0] ^= 0x6976L) < (((l_1895[0] || l_1958) , func_84(p_22, l_1931[0], p_22, g_2, g_1464.f2)) < p_22)) , p_22) || 255UL), p_21))), g_1135[1].f2, p_21, g_1135[1].f3))) || l_1862)), l_1932)))))) & 248UL);
                if ((func_64(p_21, (l_1062 = (safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s((func_23(p_21, (safe_add_func_int8_t_s_s((g_1915[2] = (func_112(l_1602, (safe_mod_func_int16_t_s_s(l_1932, (l_1932 || (l_1967 ^ l_1931[0])))), (((-8L) & (g_1138.f0 , 9UL)) | p_22), l_1031[8][0]) != g_1573.f2)), 0UL)), p_22, p_21, p_22) , l_1856), 0x5163L)), l_1932))), l_1967, l_1968[0][0][1], p_21) >= l_1896))
                {
                    g_1970[2] = g_1969[4];
                }
                else
                {
                    unsigned short l_2010[10] = {65528UL,65535UL,65528UL,0xD876L,0xD876L,65528UL,65535UL,65528UL,0xD876L,0xD876L};
                    int i;
                    g_1972[6] = g_1971;
                    if (p_22)
                        break;
                    for (g_536 = 10; (g_536 <= (-5)); g_536 = safe_sub_func_uint32_t_u_u(g_536, 3))
                    {
                        char l_1982 = 0x49L;
                        g_1975[0][0][0] = g_1970[0];
                        if (g_959.f3)
                            continue;
                        l_1780[0][0] = ((p_21 , g_256[5][4]) >= (g_5[0] | (func_84((((p_21 ^ (l_1895[1] >= (((safe_rshift_func_uint8_t_u_u(((((g_510 = 0x530EL) ^ l_1968[2][2][0]) && (((safe_sub_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(g_739.f2, 4UL)) == g_1012.f3), g_358)) == g_1033.f4) >= 0L)) ^ 1UL), 1)) || g_1659[5]) , 4294967295UL))) <= g_752[0].f0) != l_1206[3]), p_21, p_22, l_1916, p_21) || 0xE16F0359L)));
                        if (l_1982)
                            break;
                    }
                    if ((((((safe_lshift_func_int8_t_s_u(p_21, (safe_sub_func_int16_t_s_s((((l_1958 , ((safe_lshift_func_int8_t_s_s((p_22 || (g_1989[3][1][1] , (safe_rshift_func_int16_t_s_u(g_1014[1][0][5].f3, 9)))), l_867)) > g_1013.f1)) | 65535UL) == (g_323 <= 1L)), p_22)))) & g_169[5][0][0]) , g_852.f3) , g_1844.f3) <= 1UL))
                    {
                        int l_1998[10] = {0x48D456E1L,(-4L),0x48D456E1L,0x48D456E1L,0x48D456E1L,0xE6A1783AL,0xE6A1783AL,0x48D456E1L,0xE6A1783AL,0xE6A1783AL};
                        int i;
                        g_2007 = func_23((p_21 & func_112((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_22, 5)), ((safe_sub_func_uint32_t_u_u(g_875[1].f0, ((((l_1998[9] != (~0xCFDCC6B4L)) , l_1895[0]) | l_1932) < ((g_752[0].f1 && (((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(p_21, p_21)), g_878[3].f2)) == g_877.f0) <= 255UL), g_1485.f0)), l_1505[0][1])) , l_1968[2][2][0]) , g_1486.f0)) != p_21)))) , g_851.f4))), g_858.f3, g_1452, p_21)), p_21, g_858.f3, l_1842, p_22);
                        g_2009 = g_2008;
                        return l_1895[3];
                    }
                    else
                    {
                        --l_2010[3];
                        g_2014 = g_2013;
                    }
                }
            }
            if ((safe_mod_func_int32_t_s_s((l_2021 = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((+p_21), (l_1383[3][2][0] < l_1780[3][0]))), 3))), (((func_64(p_21, (((safe_mod_func_uint16_t_u_u(((((((safe_rshift_func_int8_t_s_s((((func_64(g_1549.f2, (0x49D34337L & (safe_sub_func_uint16_t_u_u((l_2040 &= (~(safe_add_func_uint8_t_u_u(((g_589 = (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((l_1032[4] & (safe_rshift_func_int8_t_s_u(g_1486.f1, 4))), (safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(func_76(l_1206[5], p_21, p_21), 0x5AL)) && l_1958), g_1248.f3)))), 1UL))) , p_21), 251UL)))), p_22))), l_1895[0], p_22, g_1849.f2) ^ 7UL) && g_676[6].f3) <= 0x04C57430L), g_1332)) != 0x25CEL) > 2UL) || (-4L)) <= l_1895[0]) != p_22), l_1896)) != 0xAE449370L) ^ l_1818), p_21, g_1622, g_858.f2) , p_22) , 0xADF16E08L) , 1L))))
            {
                if (g_676[6].f4)
                    break;
                l_1780[8][0] = ((safe_lshift_func_uint16_t_u_s(0xD069L, l_1895[5])) ^ g_654.f4);
            }
            else
            {
                short l_2056 = 0x1DBCL;
                int l_2116 = (-10L);
                for (g_1533 = 0; (g_1533 == (-20)); g_1533 = safe_sub_func_uint8_t_u_u(g_1533, 2))
                {
                    unsigned char l_2064[1][9][9] = {{{5UL,0x2BL,5UL,255UL,0x7FL,251UL,0x04L,251UL,0x7FL},{4UL,0x3BL,0x3BL,4UL,255UL,1UL,0x3BL,255UL,4UL},{0xD2L,255UL,0xA0L,255UL,0xD2L,255UL,0UL,0xC5L,0UL},{255UL,255UL,247UL,247UL,255UL,255UL,0x6AL,247UL,0x78L},{1UL,255UL,0x7FL,0xC5L,0x7FL,255UL,1UL,255UL,0x48L},{4UL,0x6AL,1UL,255UL,255UL,1UL,0x6AL,4UL,255UL},{0UL,255UL,0UL,251UL,0xC6L,251UL,0UL,255UL,0UL},{0x22L,255UL,247UL,0x3BL,0x22L,0x22L,0x3BL,247UL,255UL},{0x7FL,0x2BL,0x48L,0xC5L,0x04L,255UL,0x04L,0xC5L,0x48L}}};
                    int i, j, k;
                    for (l_1901 = (-6); (l_1901 > 24); l_1901++)
                    {
                        unsigned l_2063 = 4294967287UL;
                        g_878[3].f4 = ((((((safe_mod_func_uint8_t_u_u(((func_23((l_1896 = ((safe_rshift_func_int16_t_s_s((((g_314 = (p_22 , (safe_rshift_func_int16_t_s_u(l_2053, 11)))) == ((safe_rshift_func_uint8_t_u_s(l_2056, 3)) || p_21)) <= (safe_lshift_func_uint8_t_u_u(((g_1915[2] |= (-5L)) || (((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((l_2063 > ((l_2064[0][5][2] = p_22) > 65535UL)) || p_22), p_22)), l_2056)) > p_21) , g_1012.f1)), 5))), p_21)) , 0x2F42466FL)), p_21, p_22, g_1573.f0, p_22) , l_2064[0][7][4]) >= p_21), g_852.f1)) > p_21) < 0L) , l_2064[0][7][6]) || 0x97B8L) != l_2063);
                        if (p_21)
                            continue;
                        if (g_959.f1)
                            continue;
                    }
                }
                for (l_1967 = 0; (l_1967 <= 0); l_1967 += 1)
                {
                    int i;
                    g_2072[0] = (l_1206[l_1967] = func_112(l_1206[(l_1967 + 9)], g_1249.f0, g_450[8], (l_1895[0] |= (((l_1916 = (safe_sub_func_int16_t_s_s(g_752[0].f0, (safe_lshift_func_uint16_t_u_u(((p_21 , (((g_1846 = (safe_mod_func_int32_t_s_s((func_76(l_867, g_1971.f3, (!l_1780[0][0])) > l_1931[0]), p_22))) > 0x2CB3L) || 0xD6L)) && 0x7905L), g_1389.f2))))) <= g_1014[1][0][5].f2) == l_2071))));
                }
                for (g_1531 = 0; (g_1531 <= 4); g_1531 += 1)
                {
                    char l_2099 = (-1L);
                    for (g_1852.f1 = 0; (g_1852.f1 <= 4); g_1852.f1 += 1)
                    {
                        const unsigned l_2083 = 0xF50DE3DDL;
                        l_2099 |= (l_1895[0] <= (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(9L, ((safe_mod_func_int16_t_s_s(((!(safe_add_func_uint16_t_u_u(((l_2083 != g_1418.f2) <= (safe_add_func_uint8_t_u_u((p_21 , (safe_unary_minus_func_int16_t_s((safe_rshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s(((~(l_1062 ^= p_22)) ^ (0x87D6004BL == (l_1896 |= (((g_2091[1] == ((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((((g_1915[2] = func_112(p_22, g_2098, p_21, g_589)) < g_1389.f2) != 1UL), 0xEA0540B7L)), 1)), p_21)) == 0x9E8B7F5CL)) , g_1915[2]) && p_22)))), g_1135[1].f2)) && 65535UL), 7))))), l_2053))), 0UL))) >= p_21), (-1L))) , l_2056))), g_331)) || 0x50L), p_21)));
                    }
                    if (((((p_21 ^ ((safe_add_func_int32_t_s_s(g_878[3].f4, ((safe_sub_func_uint32_t_u_u(1UL, (l_2099 && (l_1916 >= p_22)))) > (g_1915[2] &= (func_64(l_1895[1], ((l_1881 ^= (+p_22)) <= g_752[0].f1), g_645.f2, l_2053, g_536) <= l_1857))))) || l_1780[0][0])) & p_22) < g_1418.f0) , g_717[1][4][2].f1))
                    {
                        l_1818 = (safe_lshift_func_uint8_t_u_s(l_2056, 5));
                        return g_645.f4;
                    }
                    else
                    {
                        return g_739.f1;
                    }
                }
                g_1703.f4 = ((safe_rshift_func_int16_t_s_u(((g_959.f1 >= 0x1D6AC8B4L) || (safe_lshift_func_int8_t_s_s(((l_1688 ^= (l_1896 = l_2053)) > g_1549.f4), l_2056))), func_84((safe_sub_func_int32_t_s_s((l_2116 = (g_1274.f3 = (safe_sub_func_int8_t_s_s(func_112((l_1842 == (safe_rshift_func_int8_t_s_u((g_561 | p_21), (p_22 = p_22)))), p_21, l_1895[1], l_1750[2]), g_1132)))), 1UL)), l_1958, l_2056, g_1389.f2, g_1573.f1))) , 7L);
            }
        }
    }
    for (l_1424 = 0; (l_1424 <= 17); l_1424++)
    {
        char l_2128 = 0x96L;
        unsigned l_2159 = 4294967295UL;
        const int l_2192 = 0xC4C54CFDL;
        int l_2193 = 0x90BB50B9L;
        int l_2246 = (-1L);
        for (g_2007.f1 = (-1); (g_2007.f1 < 2); g_2007.f1 = safe_add_func_int16_t_s_s(g_2007.f1, 7))
        {
            g_1460.f3 ^= (-10L);
        }
        for (l_1218 = 0; (l_1218 <= 8); l_1218 += 1)
        {
            char l_2124 = 0x41L;
            for (l_2071 = 0; (l_2071 <= 1); l_2071 += 1)
            {
                int l_2125[9] = {(-3L),(-3L),0x2754E9F8L,(-3L),(-3L),0x2754E9F8L,(-3L),(-3L),0x2754E9F8L};
                int i, j;
                if (g_127[l_2071][l_2071])
                    break;
                g_2007.f0 = (((safe_unary_minus_func_int32_t_s((g_1852.f0 && 0x1E61L))) >= (p_22 || (+(0xF64B0DEDL == ((func_76((safe_lshift_func_uint8_t_u_u(l_2124, p_22)), (l_2125[8] |= 0x4B5B3FFAL), (((p_22 , ((g_1355[(l_2071 + 4)] , g_1248.f2) & p_21)) <= p_22) , g_739.f1)) >= g_127[l_2071][l_2071]) , 0x67F60445L))))) < 0x3973L);
                if (p_21)
                    break;
            }
        }
        g_2127 = g_2126[8];
        if (l_2128)
        {
            g_2129 = g_752[0];
            if (p_21)
                break;
        }
        else
        {
            const unsigned char l_2136 = 0UL;
            int l_2137 = 0x47917C4EL;
            int l_2138 = 0L;
            unsigned char l_2197 = 0UL;
            int l_2199 = 0xE780F4AAL;
            short l_2200[3];
            int i;
            for (i = 0; i < 3; i++)
                l_2200[i] = 0xA8E5L;
            for (p_21 = 29; (p_21 <= 45); ++p_21)
            {
                unsigned l_2139 = 8UL;
                int l_2157 = (-4L);
                int l_2158[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_2158[i] = 0xF64DB2A9L;
                g_2133 = g_2132[0];
                for (g_403 = 0; (g_403 >= 56); ++g_403)
                {
                    int l_2155 = (-10L);
                    unsigned short l_2156 = 0x1E33L;
                    if ((l_2136 , g_1249.f3))
                    {
                        l_2139--;
                    }
                    else
                    {
                        l_2138 = (g_1013.f0 < (l_2139 || g_876.f0));
                        g_358 &= ((g_1915[2] ^= func_76(g_1779[1].f2, (func_64(((p_21 & (4294967286UL == p_22)) ^ p_21), p_22, l_1031[3][0], l_1062, g_2007.f0) || p_21), g_1480.f0)) , 0x4A8B108FL);
                        l_2137 = (l_1743[4][0][1] , g_1389.f2);
                    }
                    for (g_1648.f1 = (-29); (g_1648.f1 > 7); g_1648.f1++)
                    {
                        unsigned l_2148 = 0x76373A4CL;
                        l_2158[4] |= ((~(p_21 ^ ((((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s((((l_2157 = func_64((g_2072[0] = (g_323 ^= p_21)), (((g_154 |= l_2148) > l_1125[4]) , (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(p_22, 3)), (((((safe_rshift_func_uint16_t_u_u((((l_1505[0][0] > ((p_22 || (+func_76((+p_22), g_646.f2, l_2138))) || 65528UL)) != g_1972[6].f4) || g_1066.f4), l_2155)) == g_2127.f0) && 0x1670L) != g_1549.f3) , 0x214FL)))), g_1648.f1, l_2156, g_616)) , g_752[0].f2) < l_2148), 2)), p_21)) | (-1L)) , g_1852.f4) != p_21))) | p_21);
                        l_2159 = 0x53649D95L;
                        l_1110 ^= g_1970[2].f0;
                    }
                    l_2158[1] = (safe_rshift_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(func_64(p_21, func_76(g_2133.f4, g_1533, p_21), g_1033.f3, ((safe_add_func_uint32_t_u_u(0x1A76A447L, 0x51992420L)) , g_739.f0), l_2128), 0xB1L)) | l_2159) != 0xF989L), g_1485.f2));
                    g_2167 = g_2166;
                }
            }
            if (((safe_add_func_int8_t_s_s((~(l_2159 ^ g_1969[4].f0)), (!0x7DL))) != ((l_2138 = (((l_1688 = (g_2 & l_2128)) || (l_2159 || 4294967295UL)) || l_2128)) > ((safe_sub_func_int16_t_s_s(g_878[3].f0, g_851.f0)) <= l_2137))))
            {
                unsigned l_2182 = 0xE981C310L;
                int l_2183 = 5L;
                for (g_1132 = 0; (g_1132 != 5); g_1132 = safe_add_func_uint32_t_u_u(g_1132, 9))
                {
                    short l_2191[5][6] = {{(-10L),(-1L),(-10L),0x9D3DL,0x9D3DL,(-10L)},{0x534BL,0x534BL,0x9D3DL,0L,0x9D3DL,0x534BL},{0x9D3DL,(-1L),0L,0L,(-1L),0x9D3DL},{0x534BL,0x9D3DL,0L,0x9D3DL,0x534BL,0x534BL},{(-10L),0x9D3DL,0x9D3DL,(-10L),(-1L),(-10L)}};
                    int i, j;
                    for (g_959.f1 = (-20); (g_959.f1 > 40); ++g_959.f1)
                    {
                        g_1971.f3 &= (safe_mod_func_uint16_t_u_u(((l_2193 = (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((l_2183 = l_2182) < (safe_add_func_int16_t_s_s(0x16A5L, (l_2182 && func_64((!(((((l_2186 = l_867) <= g_676[6].f4) , func_29(((safe_mod_func_uint16_t_u_u(((l_2138 < func_59(g_1247.f1, (((l_2136 < (((((safe_mod_func_uint32_t_u_u(g_1852.f2, g_1132)) ^ 0xAEL) , 255UL) , 0x90L) < l_2191[4][3])) >= g_852.f4) , 0x54177E56L), p_22, g_1817.f3)) != g_1485.f0), 2L)) , 4294967295UL), g_1601, p_22, g_1480.f3)) == g_1700.f3) , 4L)), l_2192, l_2128, g_878[3].f1, p_22))))), g_1012.f1)), 7L))) < (-10L)), p_22));
                    }
                    g_2009.f4 = ((((g_2194 , (p_22 < (((g_1247.f0 | (8L & l_2183)) == (g_2194.f0 &= (((safe_rshift_func_uint8_t_u_s((l_2136 || (((((~p_21) != l_2159) | (func_29(p_22, l_2197, p_21, p_22) > (-8L))) <= l_2182) ^ g_1700.f1)), g_2127.f0)) && p_22) & 0xF5L))) | p_22))) && 0x7553L) > 0x0AL) ^ p_22);
                }
                l_2193 = (g_959.f3 = ((func_84(g_851.f2, p_21, (g_132 > 0x9FE0D49BL), (l_2199 = (p_22 , func_84(g_1274.f3, g_1703.f4, l_2198, g_2127.f2, p_21))), g_170) == g_645.f2) , l_2193));
            }
            else
            {
                unsigned l_2225 = 0x2DC1848BL;
                unsigned short l_2236 = 5UL;
                if ((l_2200[1] > (safe_rshift_func_uint16_t_u_s(g_2167.f1, (1L > (l_1602 < g_1480.f4))))))
                {
                    unsigned char l_2211[5][6][8] = {{{0x1CL,0xFFL,0x25L,0x0AL,255UL,0xE0L,7UL,6UL},{1UL,2UL,0xA5L,0x9BL,0xF6L,0xF6L,0x9BL,0xA5L},{0UL,0UL,2UL,7UL,0UL,9UL,1UL,0x0AL},{0x25L,1UL,0UL,0x1CL,0x0BL,0x96L,1UL,0x0AL},{1UL,0x11L,255UL,7UL,0xF3L,0x24L,0x11L,0xA5L},{0xE0L,0UL,0x2FL,0x9BL,1UL,0x25L,5UL,6UL}},{{0x9AL,255UL,7UL,0x0AL,0UL,1UL,0x24L,255UL},{1UL,0x9FL,2UL,0xDBL,0x6EL,1UL,0UL,1UL},{0x2FL,0x2EL,0UL,0x24L,0xA5L,0x24L,0UL,0x2EL},{1UL,0x64L,6UL,0x2FL,0x11L,250UL,0xDBL,0x96L},{0UL,0x11L,0x6EL,0x9AL,1UL,255UL,0xDBL,0UL},{5UL,0x9AL,6UL,250UL,0xD8L,0xF3L,0UL,0x1CL}},{{0xD8L,0xF3L,0UL,0x1CL,0x2EL,4UL,7UL,0UL},{0x6EL,0x9FL,0x9AL,255UL,252UL,2UL,0xF6L,250UL},{0UL,0x64L,0x25L,0x64L,0xFEL,1UL,0x11L,0xE0L},{1UL,252UL,0UL,1UL,1UL,0UL,252UL,1UL},{0xF3L,1UL,0xC1L,0xD6L,0UL,0xD8L,0x9FL,0x1CL},{0x0BL,0x81L,1UL,0xE0L,0xD6L,0xD8L,0x11L,0xF6L}},{{0UL,1UL,0x9AL,0UL,255UL,0UL,0xD6L,0x9FL},{0xF6L,252UL,0x64L,0x2FL,0xA5L,1UL,0x64L,6UL},{0x11L,0x2EL,255UL,0xE0L,0x02L,0xA5L,0xD6L,0xDDL},{1UL,0x02L,0x81L,0x64L,0x6EL,255UL,0x1CL,0xF3L},{255UL,1UL,0x2FL,7UL,0x2FL,1UL,255UL,0xC1L},{255UL,0x64L,6UL,1UL,1UL,248UL,0xC1L,6UL}},{{0x02L,9UL,5UL,0UL,1UL,0x1CL,0x9AL,7UL},{255UL,0x2EL,0x11L,6UL,0x2FL,0xDBL,9UL,0xA5L},{255UL,0x25L,0xF3L,0x96L,0x6EL,0UL,0x25L,4UL},{1UL,2UL,0xCDL,0x11L,0x02L,0x24L,0x0AL,0xC1L},{0x11L,6UL,0x96L,0xA5L,0xF6L,255UL,0xCDL,0xCDL},{0xCDL,250UL,5UL,5UL,250UL,0xCDL,0xF6L,0x81L}}};
                    int l_2212 = 1L;
                    int i, j, k;
                    l_2212 = (safe_add_func_int16_t_s_s(l_2138, ((--g_1659[4]) , (((!((g_2167.f3 = (l_1062 = (l_2199 , g_1135[1].f1))) && func_64((safe_mod_func_uint32_t_u_u(p_21, (p_21 , p_21))), (l_2200[1] < (safe_rshift_func_int16_t_s_u(p_22, 11))), l_2159, g_1033.f0, p_22))) | g_2098) == l_2211[4][3][6]))));
                    for (g_1012.f1 = 0; (g_1012.f1 <= 36); g_1012.f1 = safe_add_func_uint16_t_u_u(g_1012.f1, 9))
                    {
                        int l_2230 = 0x04F71531L;
                        int l_2231 = 0x3E27632AL;
                        l_2212 = (safe_sub_func_int32_t_s_s((g_2008.f0 , func_64(p_22, p_21, (l_2231 = (((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_1778.f0, (safe_lshift_func_uint16_t_u_s(65531UL, p_21)))), ((safe_sub_func_int16_t_s_s(p_21, ((l_2225++) < ((safe_mod_func_int32_t_s_s((g_851.f3 = g_1971.f1), l_2230)) || 0xC4L)))) || 0xDB1C9D1CL))) == l_2230) <= 0xE873L)), g_752[0].f2, g_739.f0)), l_2211[4][3][6]));
                        g_877.f4 = ((((((func_112(func_29(l_2231, p_22, p_21, g_1389.f1), ((safe_lshift_func_uint8_t_u_u(((l_1688 = p_22) || ((safe_rshift_func_int8_t_s_u(g_2126[8].f2, ((((0x3CL ^ l_2211[0][4][4]) == p_22) <= g_851.f2) || g_1012.f0))) == p_21)), 5)) , g_1700.f3), l_1743[2][6][2], g_1700.f2) & g_2007.f1) | g_1700.f3) >= p_22) <= p_22) < 0L) == l_2212);
                    }
                    if (l_2236)
                        break;
                    g_2133 = g_2237;
                }
                else
                {
                    g_1480.f0 = (g_1971.f2 < p_22);
                    for (g_2166.f1 = 0; (g_2166.f1 >= 42); g_2166.f1++)
                    {
                        g_2237.f3 = (safe_add_func_int8_t_s_s(5L, (((((l_2193 &= 0UL) ^ g_1744) & ((safe_rshift_func_int8_t_s_s((l_2246 = (safe_sub_func_uint32_t_u_u(((!(g_1659[0] = ((l_2137 = ((func_29(g_991.f0, p_21, p_21, g_1000.f1) , 0x221DL) >= g_1486.f3)) ^ l_2138))) ^ l_2197), p_22))), 1)) && l_2236)) >= p_21) != 0x82L)));
                    }
                }
                if (g_2247)
                    break;
            }
            for (g_1460.f1 = 0; g_1460.f1 < 1; g_1460.f1 += 1)
            {
                struct S0 tmp = {-20,1UL,0,-21,-53};
                g_752[g_1460.f1] = tmp;
            }
        }
    }
    return g_1972[6].f0;
}







static struct S0 func_23(int p_24, unsigned char p_25, int p_26, unsigned p_27, unsigned p_28)
{
    unsigned l_873 = 0UL;
    int l_900 = 0xD9EB5326L;
    int l_935 = 0xD88F33F6L;
    int l_946 = 8L;
    short l_951[10][2] = {{0x98E6L,0x98E6L},{1L,0x98E6L},{0x98E6L,1L},{0x98E6L,0x98E6L},{1L,0x98E6L},{0x98E6L,1L},{0x98E6L,0x98E6L},{1L,0x98E6L},{1L,(-1L)},{1L,1L}};
    int l_954 = 0x3A1CA330L;
    int l_955[7][4][5] = {{{0xB419CAA4L,0xC259EE56L,0x244D117FL,0x86DF757DL,0x108C3E09L},{0xE7380815L,8L,0x6F506220L,8L,0xE7380815L},{7L,0xDC056D60L,0x108C3E09L,0x244D117FL,0x45BDD747L},{0L,0x628C9815L,(-5L),(-9L),9L}},{{0x8E2B2B2DL,0x9FAC1527L,1L,0xDC056D60L,0x45BDD747L},{0x6F506220L,(-9L),(-9L),0x6F506220L,0xE7380815L},{0x45BDD747L,0x6697C2C7L,8L,(-2L),0x108C3E09L},{0L,0xE7380815L,0L,(-6L),0x7B257E01L}},{{8L,0x6F449ED7L,0xC259EE56L,(-2L),(-2L)},{0x628C9815L,0L,0x628C9815L,0x6F506220L,1L},{0x6F449ED7L,0xB419CAA4L,0x2DAE3795L,0xDC056D60L,0x244D117FL},{(-5L),8L,0xE7380815L,(-9L),2L}},{{0xDC056D60L,(-2L),0x2DAE3795L,0x244D117FL,0x2DAE3795L},{0L,0L,0x628C9815L,8L,(-6L)},{0x108C3E09L,(-1L),0xC259EE56L,0x86DF757DL,7L},{9L,0x7B257E01L,0L,0L,(-5L)}},{{0x8146F547L,(-1L),8L,8L,(-1L)},{2L,0L,(-9L),(-5L),(-2L)},{0x9FAC1527L,8L,0x8E2B2B2DL,0x86DF757DL,0x45BDD747L},{2L,1L,0L,0L,8L}},{{0x6F449ED7L,7L,0xC259EE56L,7L,0x6F449ED7L},{(-5L),2L,8L,0L,(-6L)},{0x86DF757DL,0x8146F547L,1L,(-2L),0x9FAC1527L},{0xE7380815L,0x628C9815L,9L,2L,(-6L)}},{{0xC259EE56L,(-2L),(-2L),0xC259EE56L,0x6F449ED7L},{(-6L),(-2L),0L,(-5L),8L},{0x30BBC0E9L,0x6F449ED7L,0x2DAE3795L,0x108C3E09L,0x45BDD747L},{0L,0L,1L,(-5L),(-5L)}}};
    unsigned short l_968 = 0UL;
    unsigned short l_985 = 0UL;
    int i, j, k;
    for (g_170 = 0; (g_170 != 54); g_170 = safe_add_func_uint8_t_u_u(g_170, 9))
    {
        unsigned short l_925 = 0x2020L;
        const unsigned char l_928 = 247UL;
        int l_936 = 0x76559064L;
        int l_943 = 0x362D8577L;
        int l_945 = 0L;
        int l_948 = 0L;
        int l_949 = 0x588DCEDDL;
        int l_950 = 0xE65A3AF9L;
        int l_953 = (-1L);
        char l_986 = 0x50L;
        for (g_43.f1 = 0; (g_43.f1 <= 0); g_43.f1 += 1)
        {
            int l_874 = 1L;
            int l_908 = 0xC420BF0BL;
            unsigned short l_910 = 0xD7C1L;
            int l_952[10] = {1L,0L,1L,0xB3812B7DL,0xB3812B7DL,1L,0L,1L,0xB3812B7DL,0xB3812B7DL};
            int l_984 = 0x53E49C92L;
            int i, j;
            if ((func_84(g_127[g_43.f1][(g_43.f1 + 1)], g_654.f2, (safe_lshift_func_int8_t_s_u((4294967290UL > g_858.f1), 5)), g_851.f3, g_752[0].f4) , (l_874 ^= (g_739 , l_873))))
            {
                const short l_898 = 0L;
                for (g_281 = 0; (g_281 <= 1); g_281 += 1)
                {
                    if (((0xBE1D88D2L != 1UL) > p_27))
                    {
                        int i, j, k;
                        g_876 = g_875[1];
                        g_6[g_43.f1][(g_43.f1 + 2)][(g_281 + 4)] |= p_27;
                        g_878[3] = g_877;
                    }
                    else
                    {
                        int l_899[8][7][2] = {{{(-1L),5L},{5L,(-1L)},{5L,5L},{(-1L),5L},{5L,(-1L)},{5L,5L},{(-1L),5L}},{{5L,(-1L)},{5L,5L},{(-1L),5L},{5L,(-1L)},{5L,5L},{(-1L),5L},{5L,(-1L)}},{{5L,5L},{(-1L),5L},{5L,(-1L)},{5L,5L},{0xCBEB8E74L,(-1L)},{(-1L),0xCBEB8E74L},{(-1L),(-1L)}},{{0xCBEB8E74L,(-1L)},{(-1L),0xCBEB8E74L},{(-1L),(-1L)},{0xCBEB8E74L,(-1L)},{(-1L),0xCBEB8E74L},{(-1L),(-1L)},{0xCBEB8E74L,(-1L)}},{{(-1L),0xCBEB8E74L},{(-1L),(-1L)},{0xCBEB8E74L,(-1L)},{(-1L),0xCBEB8E74L},{(-1L),(-1L)},{0xCBEB8E74L,(-1L)},{(-1L),0xCBEB8E74L}},{{(-1L),(-1L)},{0xCBEB8E74L,(-1L)},{(-1L),0xCBEB8E74L},{(-1L),(-1L)},{0xCBEB8E74L,(-1L)},{(-1L),0xCBEB8E74L},{(-1L),(-1L)}},{{0xCBEB8E74L,(-1L)},{(-1L),0xCBEB8E74L},{(-1L),(-1L)},{0xCBEB8E74L,(-1L)},{(-1L),0xCBEB8E74L},{(-1L),(-1L)},{0xCBEB8E74L,(-1L)}},{{(-1L),0xCBEB8E74L},{(-1L),(-1L)},{0xCBEB8E74L,(-1L)},{(-1L),0xCBEB8E74L},{(-1L),(-1L)},{0xCBEB8E74L,(-1L)},{(-1L),0xCBEB8E74L}}};
                        int i, j, k;
                        if (g_43.f3)
                            break;
                        g_6[g_43.f1][(g_281 + 6)][(g_281 + 1)] = p_27;
                        g_6[g_43.f1][(g_43.f1 + 5)][g_281] = (p_24 > (((safe_sub_func_int16_t_s_s(g_127[g_43.f1][(g_43.f1 + 1)], (8L != (l_900 = (safe_unary_minus_func_uint32_t_u(((l_899[3][6][1] = func_84(g_6[g_43.f1][(g_281 + 6)][(g_281 + 1)], (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((0x3FL >= (safe_add_func_uint8_t_u_u((g_645.f1 |= (safe_mod_func_int32_t_s_s((((l_874 = 6L) & (safe_rshift_func_int8_t_s_s(0x1AL, 7))) , g_127[g_43.f1][(g_43.f1 + 1)]), (safe_add_func_uint16_t_u_u((g_646.f2 < g_646.f3), 0xAFCAL))))), g_878[3].f1))), 4)), g_275)) ^ g_127[g_43.f1][(g_43.f1 + 1)]), g_717[1][4][2].f2)), p_26)), p_28, p_25, l_898)) && 0x82DE3B54L))))))) , p_26) | 1L));
                    }
                }
            }
            else
            {
                unsigned l_903[5];
                int l_909 = 0x1D1FC952L;
                short l_941 = 0x78B6L;
                int l_942 = 0x32D4A08DL;
                int l_947[8][8] = {{(-1L),0L,1L,0x92B2D8DDL,0x5A3DCF7EL,(-4L),0x3935B1FFL,0x99738557L},{(-1L),0x57F43A23L,1L,(-4L),0x92B2D8DDL,(-4L),1L,0x57F43A23L},{(-1L),0L,0x99738557L,0xA7A205F4L,0x0A5320A7L,(-1L),0x92B2D8DDL,0x3935B1FFL},{(-4L),0x99738557L,1L,0x92B2D8DDL,0xA7A205F4L,0xA7A205F4L,0x92B2D8DDL,1L},{0x92B2D8DDL,0x92B2D8DDL,(-5L),(-1L),0x5D5F7F06L,(-1L),0x3935B1FFL,0x5A3DCF7EL},{0x5D5F7F06L,(-1L),0x3935B1FFL,0x5A3DCF7EL,(-1L),1L,(-1L),0x5A3DCF7EL},{(-1L),(-5L),(-1L),(-1L),1L,(-4L),0x99738557L,1L},{0L,0x0A5320A7L,(-1L),0x92B2D8DDL,0x3935B1FFL,1L,1L,0x3935B1FFL}};
                unsigned short l_956 = 65528UL;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_903[i] = 4294967295UL;
                if ((safe_add_func_uint8_t_u_u(l_903[4], (g_645.f1 = (safe_sub_func_int32_t_s_s((p_24 & (l_874 |= p_24)), (((+(p_24 < ((safe_lshift_func_int8_t_s_u(((l_910--) || (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(func_84(l_900, (func_84(p_24, (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((((g_858 , (safe_rshift_func_int16_t_s_u(l_925, 6))) , ((safe_mod_func_uint32_t_u_u((((g_645.f2 = (l_873 >= g_676[6].f4)) != p_27) & 2L), l_903[0])) != g_717[1][4][2].f3)) , p_24) >= 1L), l_909)) & p_27), l_925)), 13)), l_910, l_903[0], l_908) , 0x62L), g_646.f3, l_900, l_928), 4)), l_873))), p_28)) > 0x26E1668CL))) | g_127[g_43.f1][(g_43.f1 + 1)]) , l_928)))))))
                {
                    char l_937 = 0x2FL;
                    int l_938[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_938[i] = 0xEBA3437CL;
                    for (g_322 = 1; (g_322 >= 0); g_322 -= 1)
                    {
                        return g_878[5];
                    }
                    for (g_536 = 1; (g_536 >= 0); g_536 -= 1)
                    {
                        unsigned short l_939 = 65535UL;
                        int l_940 = 1L;
                        int l_944[2][8][8] = {{{0xEBA35CF5L,0x27E66657L,(-1L),(-1L),(-1L),0x27E66657L,0xEBA35CF5L,5L},{(-1L),5L,2L,0x54B18D69L,0x331B8B67L,0L,0xEBB39698L,(-1L)},{0xD1A9CA68L,0xBC630A0CL,0x23CACB1CL,(-1L),0x331B8B67L,0xD1A9CA68L,(-4L),(-1L)},{(-1L),0x4CA48485L,0x54B18D69L,(-1L),(-1L),0x54B18D69L,0x4CA48485L,(-1L)},{0xEBA35CF5L,0xEBB39698L,0x1E145E2FL,2L,0x27E66657L,0x60AF251EL,(-1L),0x1E145E2FL},{0x2EFC250FL,0x27E66657L,5L,0x23CACB1CL,2L,0x60AF251EL,0xEBA35CF5L,0xD1A9CA68L},{0x6898137AL,0xEBB39698L,0xD1A9CA68L,2L,(-1L),2L,0L,0x27E66657L},{0L,(-1L),0x54B18D69L,0x19BE963EL,0x1E145E2FL,0L,9L,0L}},{{(-1L),9L,2L,0xEBA35CF5L,0L,5L,9L,0xD1A9CA68L},{0xBC630A0CL,0xEBA35CF5L,0x54B18D69L,0L,(-10L),(-10L),0L,0x54B18D69L},{(-10L),(-10L),0L,0x54B18D69L,0xEBA35CF5L,0xBC630A0CL,(-4L),0x60AF251EL},{5L,0L,0xEBA35CF5L,2L,9L,(-1L),0x2EFC250FL,0x60AF251EL},{0L,0x1E145E2FL,0x19BE963EL,0x54B18D69L,(-1L),0L,(-1L),0x54B18D69L},{2L,(-1L),2L,0L,0x27E66657L,0xEBB39698L,(-1L),0xD1A9CA68L},{0x4CA48485L,0x60AF251EL,0L,0xEBA35CF5L,(-10L),0x331B8B67L,0x27E66657L,0L},{0x4CA48485L,(-10L),0x60AF251EL,0x19BE963EL,0x27E66657L,(-4L),(-4L),0x27E66657L}}};
                        int i, j, k;
                        l_909 = p_24;
                        l_874 = (((((((safe_rshift_func_int8_t_s_s((((l_937 = func_84(((func_84(p_26, g_740.f2, p_27, (l_936 = (safe_sub_func_int32_t_s_s((((!(0x76L <= p_26)) | 0x40A08BC3L) | (p_26 > ((safe_add_func_uint32_t_u_u(5UL, ((g_675.f4 == l_935) >= (-1L)))) >= g_154))), g_497))), g_7) , p_25) > p_26), g_169[0][0][0], p_24, p_24, p_27)) == 0x9300A56DL) ^ p_25), g_646.f3)) && l_936) == 4294967288UL) & g_752[0].f0) != l_900) < l_938[3]) < 2L);
                        l_939 = (g_878[3].f4 < (3L & g_654.f1));
                        l_956++;
                    }
                    if (g_43.f4)
                        break;
                }
                else
                {
                    unsigned char l_963 = 0xECL;
                    if ((0x73L ^ (l_873 , g_739.f4)))
                    {
                        short l_960 = (-1L);
                        int l_961 = 0x1A9D0CEBL;
                        int l_962[5][1][7] = {{{0x666F6977L,0L,1L,5L,5L,1L,0L}},{{0xDCAC9F12L,0x8FEC3D0DL,0x37FDE51EL,0x39AF7F5CL,0x39AF7F5CL,0x37FDE51EL,0x8FEC3D0DL}},{{0x666F6977L,0L,1L,5L,1L,0x83CB3843L,0xA4260C69L}},{{0x39AF7F5CL,(-1L),(-1L),0x37FDE51EL,0x37FDE51EL,(-1L),(-1L)}},{{5L,0xA4260C69L,0x83CB3843L,1L,1L,0x83CB3843L,0xA4260C69L}}};
                        int i, j, k;
                        g_959 = g_858;
                        l_935 |= l_960;
                        l_963--;
                    }
                    else
                    {
                        short l_981 = 1L;
                        int l_989 = 0x0B1ED638L;
                        g_6[0][7][7] = (((g_281 = ((g_154 = (((65534UL == ((func_84((1UL >= (l_968 > (((+p_27) , (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(g_959.f2, 2)), (safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_28, (safe_lshift_func_uint8_t_u_s(l_981, p_25)))), (((safe_mod_func_int8_t_s_s(g_959.f4, p_28)) && 9L) , g_876.f1))), (-7L)))))) | 0x2127L))), l_984, g_878[3].f3, l_985, l_981) ^ l_986) <= 0xB4L)) , 0L) , g_878[3].f2)) , 0xFFA5L)) == g_852.f0) & l_910);
                        if (g_878[3].f4)
                            continue;
                        if (g_358)
                            continue;
                        l_989 = (safe_lshift_func_int8_t_s_u(0x0DL, 4));
                    }
                    if (l_952[8])
                        break;
                }
                for (p_24 = 0; (p_24 <= 1); p_24 += 1)
                {
                    g_676[6] = g_858;
                }
                g_991 = g_990[0][3][0];
                return g_676[4];
            }
        }
        l_949 ^= (safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s((+((safe_mod_func_int16_t_s_s((l_900 = l_951[7][0]), (g_716[0][0] = (g_1000 , ((((l_953 = ((safe_unary_minus_func_uint16_t_u(g_5[0])) | g_716[0][1])) == l_986) <= l_943) , (l_935 = ((safe_add_func_uint16_t_u_u((func_84(g_645.f4, g_959.f3, ((7UL != l_948) && 0xD5L), g_645.f0, l_955[3][3][3]) , p_26), g_616)) , g_154))))))) <= 0x4961L)), g_561)) || 3UL), 14)) != g_877.f1), g_1000.f0));
        l_955[3][3][1] &= func_84(l_951[9][0], (safe_lshift_func_int16_t_s_s(p_26, 4)), (l_935 = (safe_rshift_func_uint16_t_u_s(l_968, l_985))), (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(g_959.f4, g_132)), (l_948 = 0UL))), g_1000.f0);
        g_1013 = g_1012;
    }
    return g_654;
}







static int func_29(unsigned p_30, unsigned char p_31, unsigned p_32, char p_33)
{
    unsigned l_651[10] = {1UL,0xCB3C6EFAL,1UL,1UL,0xCB3C6EFAL,1UL,1UL,0xCB3C6EFAL,1UL,1UL};
    int l_677[6][3][4] = {{{0x3DB8C84FL,0x19BB0115L,1L,(-1L)},{0x19BB0115L,0x6BAE2D77L,0x6BAE2D77L,0x19BB0115L},{0xDCD0BBD4L,0xE35ABF46L,(-2L),(-5L)}},{{(-4L),0x8D188DF2L,1L,0x3DB8C84FL},{0x12DBC27BL,0x56BA5683L,0x321AF847L,0x3DB8C84FL},{0xDE175FC7L,0x8D188DF2L,4L,(-5L)}},{{(-1L),0xE35ABF46L,4L,0x19BB0115L},{1L,0x6BAE2D77L,(-5L),(-1L)},{0xDE175FC7L,0x19BB0115L,0xDE175FC7L,4L}},{{0x8D188DF2L,0x8125350BL,1L,1L},{0x8125350BL,0x6BAE2D77L,0x56BA5683L,0x8125350BL},{0xDCD0BBD4L,(-1L),0x56BA5683L,(-5L)}},{{0x8125350BL,0x3DB8C84FL,1L,0x8D188DF2L},{0x8D188DF2L,0x56BA5683L,0xDE175FC7L,0x12DBC27BL},{0xDE175FC7L,0x12DBC27BL,(-5L),(-5L)}},{{1L,1L,4L,(-4L)},{(-1L),0x6BAE2D77L,4L,0xE35ABF46L},{0xDE175FC7L,4L,0xF53A61ABL,0L}}};
    int l_746 = 0xF41DE3DBL;
    unsigned short l_749 = 65535UL;
    unsigned char l_864[6][1] = {{251UL},{0x0CL},{251UL},{0x0CL},{251UL},{0x0CL}};
    int i, j, k;
    for (p_31 = 0; (p_31 <= 0); p_31 += 1)
    {
        int l_647 = 0x4377A597L;
        int l_649 = (-1L);
        int l_682 = 0xF546B1C3L;
        unsigned l_723 = 9UL;
        char l_735[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        int i;
        if ((((safe_mod_func_int16_t_s_s(g_5[p_31], g_5[p_31])) != (p_32++)) <= (func_41(g_5[p_31]) , g_450[8])))
        {
            int l_648 = (-8L);
            int l_650 = 1L;
            unsigned short l_655 = 0xB2B5L;
            char l_661 = 9L;
            unsigned l_662 = 4294967292UL;
            unsigned short l_731 = 1UL;
            int l_736 = (-10L);
            l_651[4]++;
            if (l_651[4])
            {
                int l_656 = 0xEA200113L;
                int l_681 = 0xA691AD30L;
                unsigned l_685 = 0xBD36C6CCL;
                if (((l_647 = g_43.f3) | (0x5798F22EL == (~(p_31 > (((g_654 , l_648) , (l_655 <= (l_656 && (safe_mod_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((l_649 = ((((((g_43.f2 , (l_650 ^ (-1L))) > p_32) > 0xC05EL) ^ 0x39L) >= 65526UL) == 0UL)), p_33)) < 4294967295UL) >= l_651[9]), 0x5C33L))))) == g_322))))))
                {
                    --l_662;
                }
                else
                {
                    unsigned l_665 = 0x31E24CD9L;
                    l_647 = ((p_31 >= p_30) && 65535UL);
                    ++l_665;
                }
                for (g_170 = (-3); (g_170 > 23); g_170 = safe_add_func_uint32_t_u_u(g_170, 3))
                {
                    short l_678 = 0xC83BL;
                    int l_680 = 7L;
                    int l_683[10][3] = {{(-7L),0L,(-7L)},{0xA864BEAEL,0xD92D4EC9L,0xA864BEAEL},{(-7L),0L,(-7L)},{0xA864BEAEL,0xD92D4EC9L,0xA864BEAEL},{(-7L),0L,(-7L)},{0xA864BEAEL,0xD92D4EC9L,0xA864BEAEL},{(-7L),0L,(-7L)},{0xA864BEAEL,0xD92D4EC9L,0xA864BEAEL},{(-7L),0L,(-7L)},{0xA864BEAEL,0xD92D4EC9L,0xA864BEAEL}};
                    int i, j;
                    if ((safe_sub_func_uint32_t_u_u((p_33 == l_649), (safe_mod_func_int32_t_s_s(g_43.f1, l_650)))))
                    {
                        int l_674 = 0x52C352FBL;
                        g_275 |= l_674;
                    }
                    else
                    {
                        int l_679 = (-8L);
                        int l_684 = 0x730B613CL;
                        g_676[6] = g_675;
                        l_685--;
                        if (g_676[6].f1)
                            continue;
                    }
                }
                g_322 = g_675.f3;
                for (g_589 = (-2); (g_589 > 53); g_589 = safe_add_func_uint32_t_u_u(g_589, 2))
                {
                    int l_700 = 1L;
                    volatile int l_702 = 1L;
                    l_702 = ((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(p_33, p_30)), 0xC248L)) , ((g_5[p_31] >= func_76((l_662 | (((safe_lshift_func_int16_t_s_s(l_677[3][2][1], ((safe_lshift_func_int8_t_s_s(l_656, (safe_rshift_func_int8_t_s_s(((65535UL < func_64(l_700, p_31, g_5[p_31], p_32, l_677[4][2][1])) != 0x01CDL), p_33)))) , p_33))) || p_30) , l_700)), l_682, p_31)) , g_701));
                }
            }
            else
            {
                char l_715 = 0xC4L;
                unsigned char l_728 = 252UL;
                l_650 = (((((l_647 &= (l_682 &= p_33)) , (((safe_sub_func_uint16_t_u_u((((g_589 != g_675.f4) ^ p_31) != (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(0UL, (safe_lshift_func_uint16_t_u_u((p_32 < ((g_716[0][1] &= (l_682 = (g_536 |= (((safe_lshift_func_uint16_t_u_u((g_267 & g_654.f1), (g_256[5][4] <= l_715))) == p_30) , 0xD57FL)))) == l_648)), 6)))), l_715)) & g_5[p_31]), g_5[p_31]))), p_30)) && 0x36L) <= 0xEDL)) & 1UL) <= 1L) | g_403);
                g_717[1][4][2] = g_654;
                if (l_682)
                {
                    g_43.f4 |= p_30;
                    return p_31;
                }
                else
                {
                    unsigned char l_734 = 250UL;
                    if ((0UL || 0x94BE3BA3L))
                    {
                        unsigned char l_720 = 255UL;
                        int l_732 = (-9L);
                        l_647 = ((((func_112((safe_lshift_func_uint16_t_u_s(l_720, (safe_sub_func_int16_t_s_s(l_723, g_7)))), ((safe_sub_func_int32_t_s_s(g_132, (l_732 ^= (safe_mod_func_int32_t_s_s((p_30 && ((((l_728 & (safe_add_func_int16_t_s_s(func_84(g_646.f2, p_31, l_731, p_30, p_33), p_31))) >= 0xD6L) && p_33) , g_717[1][4][2].f4)), g_646.f0))))) ^ p_30), g_267, g_733) , p_33) | g_646.f1) && g_43.f4) | l_677[2][2][1]);
                        g_717[0][5][2] = g_676[4];
                    }
                    else
                    {
                        g_380 |= (l_735[0] |= (l_734 = g_654.f4));
                        if (l_736)
                            continue;
                    }
                    for (g_117 = 0; (g_117 < 26); g_117 = safe_add_func_uint32_t_u_u(g_117, 2))
                    {
                        g_740 = g_739;
                        return l_655;
                    }
                    l_682 = p_31;
                    return p_30;
                }
            }
        }
        else
        {
            unsigned l_741[9] = {0x10197CC1L,0x10197CC1L,0x10197CC1L,0x10197CC1L,0x10197CC1L,0x10197CC1L,0x10197CC1L,0x10197CC1L,0x10197CC1L};
            int l_747 = (-6L);
            int l_748[6][8][1] = {{{5L},{0xE0F2F147L},{1L},{0L},{0xE8BF5FC8L},{1L},{1L},{1L}},{{0xE8BF5FC8L},{0L},{1L},{0xE0F2F147L},{5L},{0xE8BF5FC8L},{0xE8BF5FC8L},{5L}},{{0xE0F2F147L},{1L},{0L},{0xE8BF5FC8L},{1L},{1L},{1L},{0xE8BF5FC8L}},{{0L},{1L},{0xE0F2F147L},{5L},{0xE8BF5FC8L},{0xE8BF5FC8L},{5L},{0xE0F2F147L}},{{1L},{0L},{0xE8BF5FC8L},{1L},{1L},{1L},{0xE8BF5FC8L},{0L}},{{1L},{0xE0F2F147L},{0L},{0xA0AFA374L},{0xA0AFA374L},{0L},{0xFDF7DE78L},{0xE8BF5FC8L}}};
            int i, j, k;
            if (l_741[0])
                break;
            for (l_723 = (-29); (l_723 == 34); l_723 = safe_add_func_uint8_t_u_u(l_723, 8))
            {
                short l_744 = 0x0C5AL;
                int l_745[6][8] = {{0x91452C56L,(-8L),(-8L),0x91452C56L,0L,0x91452C56L,(-8L),(-8L)},{(-8L),0L,1L,1L,0L,(-8L),0L,1L},{0x91452C56L,0L,0x91452C56L,(-8L),(-8L),0x91452C56L,0L,0x91452C56L},{(-10L),(-8L),1L,(-8L),(-10L),(-10L),(-8L),1L},{(-10L),(-10L),(-8L),1L,(-8L),(-10L),(-10L),(-8L)},{0x91452C56L,(-8L),(-8L),0x91452C56L,0L,0x91452C56L,(-8L),(-8L)}};
                int i, j;
                l_749++;
            }
            return l_735[0];
        }
    }
    g_752[0] = func_41(l_746);
    for (g_267 = (-25); (g_267 > 17); g_267 = safe_add_func_uint8_t_u_u(g_267, 4))
    {
        int l_757[4][9] = {{0xF4BC67CDL,(-9L),(-7L),(-7L),(-9L),0xF4BC67CDL,0x9FF4E573L,(-9L),0x9FF4E573L},{0L,(-9L),(-1L),(-1L),(-9L),0L,0L,(-9L),0L},{0xF4BC67CDL,(-9L),(-7L),(-7L),(-9L),0xF4BC67CDL,0x9FF4E573L,(-9L),0x9FF4E573L},{0L,(-9L),(-1L),(-1L),(-9L),0L,0L,(-9L),0L}};
        short l_767[9][6] = {{0L,1L,0x2E4CL,0x2DAEL,0x3E21L,4L},{0x84B8L,0x87BBL,0x84B8L,0xF680L,0L,0x3E21L},{0x3E21L,0x70AFL,0L,0x7149L,1L,(-1L)},{0x70AFL,0L,0x52A1L,0x7149L,0x531DL,0xF680L},{0x3E21L,0x13E3L,0xD543L,0xF680L,0xF680L,0xD543L},{0x84B8L,0x84B8L,0x1178L,4L,0xCA29L,0x70AFL},{0x52A1L,0L,0xCA29L,0x87BBL,(-8L),0x1178L},{0x13E3L,0x52A1L,0xCA29L,0xD543L,0x84B8L,0x70AFL},{(-5L),0xD543L,0x1178L,1L,0x1178L,0xD543L}};
        int l_768 = 1L;
        unsigned short l_771 = 0xA5C9L;
        unsigned l_799 = 1UL;
        int l_820 = 1L;
        int l_829 = 2L;
        int l_830 = 0x77D10368L;
        int l_833 = (-1L);
        const int l_842 = 0x25AA4204L;
        int l_859 = 0x64123900L;
        int l_860 = 0xEE661B68L;
        int l_862 = 7L;
        int l_863[3][9][7] = {{{(-1L),0x6990EC94L,0xC7B189F8L,0xC7B189F8L,0x6990EC94L,(-1L),1L},{0x6990EC94L,3L,(-6L),0xB943CBF4L,0xB943CBF4L,(-6L),3L},{0x6990EC94L,1L,(-1L),0x6990EC94L,0xC7B189F8L,0xC7B189F8L,0x6990EC94L},{(-1L),3L,(-1L),0xC7B189F8L,3L,1L,1L},{3L,0x6990EC94L,(-6L),0x6990EC94L,3L,(-6L),0xB943CBF4L},{0xB943CBF4L,1L,0xC7B189F8L,0xB943CBF4L,0xC7B189F8L,1L,0xB943CBF4L},{(-1L),0xB943CBF4L,1L,0xC7B189F8L,0xB943CBF4L,1L,(-1L)},{0x6990EC94L,0x6990EC94L,0x6EDD16A7L,0xB943CBF4L,3L,0x6EDD16A7L,3L},{0xB943CBF4L,(-1L),(-1L),0xB943CBF4L,1L,0xC7B189F8L,0xB943CBF4L}},{{0xC7B189F8L,3L,1L,1L,3L,0xC7B189F8L,(-1L)},{3L,0xB943CBF4L,0x6EDD16A7L,0x6990EC94L,0x6990EC94L,0x6EDD16A7L,0xB943CBF4L},{3L,(-1L),0xC7B189F8L,3L,1L,1L,3L},{0xC7B189F8L,0xB943CBF4L,0xC7B189F8L,1L,0xB943CBF4L,(-1L),(-1L)},{0xB943CBF4L,3L,0x6EDD16A7L,3L,0xB943CBF4L,0x6EDD16A7L,0x6990EC94L},{0x6990EC94L,(-1L),1L,0x6990EC94L,1L,(-1L),0x6990EC94L},{0xC7B189F8L,0x6990EC94L,(-1L),1L,0x6990EC94L,1L,(-1L)},{0x6990EC94L,0x6990EC94L,0x6EDD16A7L,0xB943CBF4L,3L,0x6EDD16A7L,3L},{0xB943CBF4L,(-1L),(-1L),0xB943CBF4L,1L,0xC7B189F8L,0xB943CBF4L}},{{0xC7B189F8L,3L,1L,1L,3L,0xC7B189F8L,(-1L)},{3L,0xB943CBF4L,0x6EDD16A7L,0x6990EC94L,0x6990EC94L,0x6EDD16A7L,0xB943CBF4L},{3L,(-1L),0x6EDD16A7L,0xC7B189F8L,(-1L),(-1L),0xC7B189F8L},{0x6EDD16A7L,1L,0x6EDD16A7L,(-1L),1L,(-6L),(-6L)},{1L,0xC7B189F8L,0xB943CBF4L,0xC7B189F8L,1L,0xB943CBF4L,(-1L)},{(-1L),(-6L),(-1L),(-1L),(-1L),(-6L),(-1L)},{0x6EDD16A7L,(-1L),(-6L),(-1L),(-1L),(-1L),(-6L)},{(-1L),(-1L),0xB943CBF4L,1L,0xC7B189F8L,0xB943CBF4L,0xC7B189F8L},{1L,(-6L),(-6L),1L,(-1L),0x6EDD16A7L,1L}}};
        int i, j, k;
        l_768 = (l_677[1][0][1] = ((func_84((safe_add_func_uint8_t_u_u(l_757[3][3], ((((((safe_unary_minus_func_int32_t_s((((safe_add_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((func_112(l_651[3], g_5[0], ((func_112((g_267 | (l_677[2][2][1] = (safe_add_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s((p_30 && p_30), l_757[3][3])) || g_717[1][4][2].f2) , (func_84(p_32, p_32, g_646.f3, g_675.f2, l_651[3]) , l_677[2][2][1])), l_767[8][3])))), l_767[8][3], l_767[8][3], p_33) > l_746) >= 6UL), l_767[8][3]) < 1L), l_767[8][3])) || p_30), g_7)) != 0x00L) , p_33))) & 7UL) , l_746) , p_33) , g_154) ^ l_746))), l_767[8][3], p_32, g_739.f2, l_746) < p_32) == p_31));
        l_677[2][2][1] = (g_154 <= (safe_sub_func_int8_t_s_s(func_84(l_767[8][3], ((++l_771) ^ (l_749 && func_84((0x289B1B9DL && ((safe_lshift_func_int8_t_s_s(p_31, g_536)) , 4UL)), (g_646.f1 = ((((l_749 , (p_32 | p_31)) && l_749) ^ l_768) < p_30)), l_757[3][3], g_654.f2, g_43.f4))), g_169[5][0][0], p_31, p_32), 251UL)));
        for (p_30 = 26; (p_30 != 48); p_30++)
        {
            unsigned char l_785 = 254UL;
            short l_786 = (-1L);
            int l_793 = (-9L);
            int l_795 = 0L;
            int l_818 = (-1L);
            int l_823 = 0x4636CF44L;
            int l_826 = 0xA9A320F5L;
            int l_828 = 0xCA55DDF3L;
            int l_831 = (-1L);
            int l_832[1];
            short l_837 = (-1L);
            char l_853[9] = {0xA1L,(-1L),0xA1L,(-1L),0xA1L,(-1L),0xA1L,(-1L),0xA1L};
            int i;
            for (i = 0; i < 1; i++)
                l_832[i] = 0x8D20DBB2L;
            for (g_733 = 2; (g_733 < 10); g_733++)
            {
                char l_782 = (-6L);
                int l_797 = (-1L);
                int l_798 = 1L;
                int l_812 = (-1L);
                char l_814 = 0L;
                int l_816 = (-1L);
                int l_824 = 0xDA7FAD95L;
                int l_827[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
                unsigned char l_834 = 0x34L;
                int i;
                for (g_497 = 0; (g_497 == 30); g_497++)
                {
                    const unsigned l_792 = 0xCEE106A2L;
                    int l_794 = 0L;
                    int l_813 = 0xA9B14978L;
                    int l_822 = 0x1783C0D5L;
                    int l_825[10][8] = {{(-4L),0xE39432F3L,0x95A47A98L,0x49AABA70L,0x49AABA70L,0x95A47A98L,0xE39432F3L,(-4L)},{(-4L),0xE39432F3L,0x95A47A98L,0x49AABA70L,0x49AABA70L,0x95A47A98L,0xE39432F3L,(-4L)},{(-4L),0xE39432F3L,0x95A47A98L,0x49AABA70L,0x49AABA70L,0x95A47A98L,0xE39432F3L,(-4L)},{(-4L),0xE39432F3L,0x95A47A98L,0x49AABA70L,0x49AABA70L,0x95A47A98L,0xE39432F3L,(-4L)},{(-4L),0xE39432F3L,0x95A47A98L,0x49AABA70L,0x49AABA70L,0x95A47A98L,0xE39432F3L,(-4L)},{(-4L),0xE39432F3L,0x95A47A98L,0x49AABA70L,0x49AABA70L,0x95A47A98L,0xE39432F3L,(-4L)},{(-4L),0xE39432F3L,0x95A47A98L,0x49AABA70L,0x49AABA70L,0x95A47A98L,0xE39432F3L,(-4L)},{(-4L),0xE39432F3L,0x95A47A98L,0x49AABA70L,0x49AABA70L,0x95A47A98L,0xE39432F3L,(-4L)},{(-4L),0xE39432F3L,0x95A47A98L,0x49AABA70L,0x49AABA70L,0x95A47A98L,0xE39432F3L,(-4L)},{(-4L),0xE39432F3L,0x95A47A98L,0x49AABA70L,0x49AABA70L,0x95A47A98L,0xE39432F3L,(-4L)}};
                    int i, j;
                    if (l_782)
                    {
                        unsigned l_787 = 0x156CA18CL;
                        int l_796 = 0xA249E099L;
                        l_768 &= (((((l_785 = ((safe_lshift_func_int8_t_s_u((g_256[6][1] <= 0x9345L), g_740.f3)) < g_561)) > (l_746 && (l_787 &= l_786))) == (((safe_sub_func_int32_t_s_s(l_782, (safe_rshift_func_uint8_t_u_u(l_792, 2)))) , l_767[0][1]) && g_676[6].f1)) >= p_32) ^ 0x5FL);
                        l_799++;
                    }
                    else
                    {
                        unsigned short l_810[10];
                        int l_811 = 0x818674CDL;
                        int l_815 = 0x004EE0E0L;
                        int l_817 = 6L;
                        int l_819 = 0xDA1A1937L;
                        int l_821[9] = {0xAD1575F0L,0xAD1575F0L,0xAD1575F0L,0xAD1575F0L,0xAD1575F0L,0xAD1575F0L,0xAD1575F0L,0xAD1575F0L,0xAD1575F0L};
                        int i;
                        for (i = 0; i < 10; i++)
                            l_810[i] = 65535UL;
                        l_768 |= (func_84((safe_rshift_func_int8_t_s_u(((((g_2 , (safe_rshift_func_int8_t_s_s((-1L), (((safe_lshift_func_uint16_t_u_u(g_676[6].f2, 8)) >= 0UL) , (g_154 = (g_717[1][4][2].f3 && l_792)))))) && (((safe_lshift_func_uint8_t_u_u(l_767[8][3], 6)) >= g_675.f1) != l_794)) , l_792) >= g_43.f1), g_646.f3)), p_32, p_32, l_810[7], g_646.f2) != 0xDEL);
                        l_834++;
                        l_830 = (((l_837 <= (p_33 = (((p_33 ^ 65534UL) ^ g_752[0].f2) < ((safe_mod_func_int16_t_s_s(((func_112(g_380, (safe_rshift_func_int8_t_s_u(l_829, (g_450[8] >= (l_677[3][1][0] ^ g_646.f1)))), g_323, p_32) != l_792) && g_733), g_733)) != l_797)))) <= l_842) != 4294967290UL);
                        g_380 ^= (safe_sub_func_int32_t_s_s((l_820 &= (l_792 < func_84(l_831, func_112((l_828 = (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((l_837 & (g_717[1][4][2].f1 = (g_717[1][4][2].f4 == (((l_825[6][7] = 1L) || func_112((((g_154 = (safe_sub_func_uint16_t_u_u(g_275, (((l_833 = (p_32 , (((l_826 &= (g_256[5][4] || p_30)) >= 0L) , g_752[0].f3))) || g_281) < 1UL)))) < 0xC6L) | p_30), l_794, g_170, p_31)) > g_717[1][4][2].f0)))), 7)), 3))), p_31, l_813, l_793), p_32, p_30, g_740.f2))), p_32));
                    }
                    g_852 = g_851;
                }
            }
            l_823 = func_84((func_112(((p_31 , l_767[1][2]) , func_112((p_30 || (g_154 = (l_853[7] > (g_654.f0 ^= p_33)))), g_380, g_851.f3, ((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(p_31, (g_858 , p_32))) , g_752[0].f0), 0L)) != l_677[2][2][1]))), l_832[0], p_32, g_733) & 0x7DD6L), l_853[7], g_646.f1, g_589, g_646.f0);
        }
        l_864[2][0]++;
    }
    return l_749;
}







static struct S0 func_41(short p_42)
{
    int l_47 = 0x64BBCDFAL;
    int l_50 = 0xA1E05BF5L;
    int l_53 = 0L;
    for (p_42 = 0; (p_42 <= 0); p_42 += 1)
    {
        return g_43;
    }
    for (g_43.f1 = 0; (g_43.f1 != 16); g_43.f1++)
    {
        unsigned l_46[4][7][7] = {{{0x3EAFCA19L,8UL,0x9320AF47L,4294967291UL,8UL,4294967295UL,8UL},{0x22A57D88L,8UL,8UL,0x22A57D88L,0xF8616691L,4294967291UL,0x3EAFCA19L},{0x3EAFCA19L,4294967291UL,0xF8616691L,0x22A57D88L,8UL,8UL,0x22A57D88L},{8UL,4294967295UL,8UL,4294967291UL,0x9320AF47L,8UL,0x3EAFCA19L},{4294967295UL,0x00F83BF0L,8UL,0xF8616691L,4294967295UL,0xF8616691L,8UL},{0x9320AF47L,0x9320AF47L,0xF8616691L,8UL,0x9320AF47L,4294967291UL,8UL},{8UL,4294967295UL,0x00F83BF0L,4294967291UL,4294967291UL,0x00F83BF0L,4294967295UL}},{{0x00F83BF0L,0x22A57D88L,4294967295UL,9UL,0x9320AF47L,8UL,8UL},{0x00F83BF0L,8UL,0xF8616691L,4294967295UL,0xF8616691L,8UL,0x00F83BF0L},{8UL,8UL,0x9320AF47L,9UL,4294967295UL,0x22A57D88L,0x00F83BF0L},{4294967295UL,0x00F83BF0L,4294967291UL,4294967291UL,0x00F83BF0L,4294967295UL,8UL},{8UL,4294967291UL,0x9320AF47L,8UL,0x3EAFCA19L,4294967295UL,4294967295UL},{9UL,0x3EAFCA19L,0xF8616691L,0x3EAFCA19L,9UL,0x22A57D88L,8UL},{4294967295UL,4294967291UL,4294967295UL,8UL,9UL,8UL,9UL}},{{0xE19CCD29L,0x00F83BF0L,0x00F83BF0L,0xE19CCD29L,0x3EAFCA19L,8UL,4294967295UL},{4294967295UL,8UL,0x3EAFCA19L,0xE19CCD29L,0x00F83BF0L,0x00F83BF0L,0xE19CCD29L},{9UL,8UL,9UL,8UL,4294967295UL,4294967291UL,4294967295UL},{8UL,0x22A57D88L,9UL,0x3EAFCA19L,0xF8616691L,0x3EAFCA19L,9UL},{4294967295UL,4294967295UL,0x3EAFCA19L,8UL,0x9320AF47L,4294967291UL,8UL},{4294967291UL,0xF8616691L,0x22A57D88L,8UL,8UL,0x22A57D88L,0xF8616691L},{0x22A57D88L,0xE19CCD29L,0xF8616691L,8UL,4294967295UL,0x00F83BF0L,4294967291UL}},{{0x22A57D88L,9UL,0x3EAFCA19L,0xF8616691L,0x3EAFCA19L,9UL,0x22A57D88L},{4294967291UL,0x00F83BF0L,4294967295UL,8UL,0xF8616691L,0xE19CCD29L,0x22A57D88L},{0xF8616691L,0x22A57D88L,8UL,8UL,0x22A57D88L,0xF8616691L,4294967291UL},{9UL,8UL,4294967295UL,4294967291UL,4294967295UL,0xF8616691L,0xF8616691L},{8UL,4294967295UL,0x3EAFCA19L,4294967295UL,8UL,0xE19CCD29L,9UL},{8UL,8UL,0xF8616691L,0x00F83BF0L,8UL,9UL,8UL},{0x9320AF47L,0x22A57D88L,0x22A57D88L,0x9320AF47L,4294967295UL,0x00F83BF0L,8UL}}};
        unsigned char l_54 = 254UL;
        const unsigned l_72[1][7][4] = {{{0UL,4294967295UL,4294967295UL,0UL},{4294967295UL,0UL,1UL,0x3AB57C19L},{4294967295UL,1UL,4294967295UL,0x4770DDADL},{0UL,0x3AB57C19L,0x4770DDADL,0x4770DDADL},{1UL,1UL,4294967291UL,0x3AB57C19L},{0x3AB57C19L,0UL,4294967291UL,0UL},{1UL,4294967295UL,0x4770DDADL,4294967291UL}}};
        int i, j, k;
        l_47 ^= (l_46[0][0][6] = 0xDCF746B3L);
        for (l_47 = 25; (l_47 < 15); l_47--)
        {
            l_50 |= 0x75C8FE30L;
            for (p_42 = 5; (p_42 < 12); p_42 = safe_add_func_uint32_t_u_u(p_42, 4))
            {
                unsigned char l_299 = 246UL;
                int l_643 = 1L;
                unsigned short l_644[3][2][2] = {{{65535UL,0UL},{65535UL,0UL}},{{65535UL,0UL},{65535UL,0UL}},{{65535UL,0UL},{65535UL,0UL}}};
                int i, j, k;
                g_7 ^= 0xDA4AA2EEL;
                g_645 = ((((p_42 , l_53) == ((l_54 & (((l_46[0][0][6] || g_6[0][7][7]) || p_42) < (safe_mod_func_uint32_t_u_u(l_53, (safe_rshift_func_uint16_t_u_s((((l_643 = func_59(((func_64((((safe_mod_func_uint32_t_u_u(4294967295UL, p_42)) || g_2) == 0x0B67C402L), g_43.f3, p_42, g_43.f3, l_72[0][1][3]) <= p_42) , g_154), g_43.f1, p_42, l_299)) || 0x1DL) , 0xA4C5L), 10)))))) , l_644[2][1][1])) , 1L) , g_43);
            }
        }
    }
    return g_646;
}







static char func_59(short p_60, unsigned p_61, short p_62, char p_63)
{
    int l_304 = 0x42D8C5CEL;
    int l_307 = 0x53AC29C5L;
    int l_312 = 0x692F46DAL;
    int l_313[10][6] = {{0x68C5DE90L,0xE214E3F6L,0x24059179L,0x24059179L,0xE214E3F6L,0x68C5DE90L},{0x68C5DE90L,(-1L),(-1L),0x24059179L,(-1L),0x24059179L},{0x68C5DE90L,1L,0x68C5DE90L,0x24059179L,1L,(-1L)},{0x68C5DE90L,0xE214E3F6L,0x24059179L,0x24059179L,0xE214E3F6L,0x68C5DE90L},{0x68C5DE90L,(-1L),(-1L),0x24059179L,(-1L),0x24059179L},{0x68C5DE90L,1L,0x68C5DE90L,0x24059179L,1L,(-1L)},{0x68C5DE90L,0xE214E3F6L,0x24059179L,0x24059179L,0xE214E3F6L,0x68C5DE90L},{0x68C5DE90L,(-1L),(-1L),0x24059179L,(-1L),0x24059179L},{0x68C5DE90L,1L,0x68C5DE90L,0x24059179L,1L,(-1L)},{0x68C5DE90L,0xE214E3F6L,0x24059179L,0x24059179L,0xE214E3F6L,0x68C5DE90L}};
    unsigned l_324 = 4294967288UL;
    const unsigned l_325 = 4294967292UL;
    unsigned l_374[10];
    unsigned l_473 = 0x66D84444L;
    unsigned l_476[3][1][8] = {{{0UL,0UL,4294967291UL,4294967294UL,0x5FB946C8L,4294967294UL,4294967291UL,0UL}},{{0UL,0UL,0x00494A7CL,4294967291UL,4294967291UL,0x00494A7CL,0UL,0UL}},{{0UL,0UL,0UL,4294967294UL,0UL,0UL,0UL,0UL}}};
    int l_511 = 1L;
    char l_512 = 0x76L;
    unsigned l_576 = 0xB2AC9455L;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_374[i] = 0x49B56A31L;
    g_314 = ((safe_lshift_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((l_304 = 65535UL), g_43.f2)) != 0x34912621L) , p_62), (safe_sub_func_int8_t_s_s(g_281, func_112(p_63, (l_307 = p_61), p_62, ((l_312 &= (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(g_147, 65535UL)), 1L))) >= l_313[7][1])))))) & g_275);
    if (p_62)
    {
        l_307 = (g_169[5][0][0] &= ((g_43.f0 = ((g_170 = l_312) >= 8UL)) & g_256[5][4]));
    }
    else
    {
        const unsigned char l_321[10] = {0x4AL,0xCEL,0x4AL,0xCEL,0x4AL,0xCEL,0x4AL,0xCEL,0x4AL,0xCEL};
        int l_345 = 0x2A3ADF52L;
        int l_346[9] = {0x275723CCL,0x275723CCL,0xA7F815D7L,0x275723CCL,0x275723CCL,0xA7F815D7L,0x275723CCL,0x275723CCL,0xA7F815D7L};
        int l_495 = 0x6345ED48L;
        int i;
        if ((safe_add_func_uint16_t_u_u(((l_313[1][1] = (safe_mod_func_int8_t_s_s((((((safe_rshift_func_uint8_t_u_s((func_84(g_281, func_84(l_321[1], l_307, (g_322 = (-9L)), (l_313[7][5] = (0xACL > p_62)), g_147), (g_323 = ((g_43.f2 || g_7) , 0L)), l_324, g_169[0][0][6]) , l_325), g_43.f0)) <= l_325) | 0xFFL) & 0L) & g_7), 0x66L))) == g_267), g_275)))
        {
            unsigned char l_330[4] = {0xC9L,0xC9L,0xC9L,0xC9L};
            int l_344 = (-7L);
            int l_351[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
            unsigned l_361 = 4UL;
            int l_402 = 0L;
            int i;
            for (g_147 = 0; (g_147 == 25); g_147 = safe_add_func_uint16_t_u_u(g_147, 2))
            {
                unsigned l_347 = 0x75B9A4AEL;
                int l_350 = 8L;
                int l_352[6][3][7] = {{{0x9B518B7EL,(-1L),0L,0x77A4FC91L,0x460C7B6CL,0x529766ABL,0L},{0L,1L,(-1L),1L,0x3FABB263L,0xC1D536F0L,0x374393EFL},{0L,(-1L),0x48232200L,0x77A4FC91L,0L,0x529766ABL,0L}},{{0L,0x3FABB263L,(-1L),(-1L),0x3FABB263L,0L,0x374393EFL},{0x9B518B7EL,(-1L),0L,0x77A4FC91L,0x460C7B6CL,0x529766ABL,0L},{0L,1L,(-1L),1L,0x3FABB263L,0xC1D536F0L,0x374393EFL}},{{0L,(-1L),0x48232200L,0x77A4FC91L,0L,0x529766ABL,0L},{0L,0x3FABB263L,(-1L),(-1L),0x3FABB263L,0L,0x374393EFL},{0x9B518B7EL,(-1L),0L,0x77A4FC91L,0x460C7B6CL,0x529766ABL,0L}},{{0L,1L,(-1L),1L,0x3FABB263L,0xC1D536F0L,0x374393EFL},{0L,(-3L),8L,(-1L),0L,(-1L),0x8F6D5314L},{0x3FABB263L,(-1L),0x02C88F02L,0x02C88F02L,(-1L),0x3FABB263L,0L}},{{0x460C7B6CL,(-3L),0xDA724A44L,(-1L),0L,(-1L),0xA64FC539L},{0x3FABB263L,0x374393EFL,0x02C88F02L,0x3C4627E3L,(-1L),1L,0L},{0L,(-3L),8L,(-1L),0L,(-1L),0x8F6D5314L}},{{0x3FABB263L,(-1L),0x02C88F02L,0x02C88F02L,(-1L),0x3FABB263L,0L},{0x460C7B6CL,(-3L),0xDA724A44L,(-1L),0L,(-1L),0xA64FC539L},{0x3FABB263L,0x374393EFL,0x02C88F02L,0x3C4627E3L,(-1L),1L,0L}}};
                unsigned l_353 = 4294967295UL;
                int i, j, k;
                l_344 = (safe_add_func_uint16_t_u_u(l_330[3], ((g_331 = 1L) > (safe_lshift_func_uint8_t_u_s(((g_43.f0 ^ l_324) , (g_170 = ((l_321[1] < ((safe_mod_func_uint32_t_u_u(0xCA11ADE9L, func_84(((l_330[3] & (safe_lshift_func_uint16_t_u_s((3L <= (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((((((safe_mod_func_int32_t_s_s((l_313[7][1] ^= (l_307 = 0xA7BD5200L)), g_5[0])) >= p_60) & 0xA43AA538L) > 0L) , g_117) && 65535UL), p_61)), l_321[1]))), 6))) && 0L), l_325, g_169[5][0][0], g_154, l_325))) , 0x03348D5AL)) || g_2))), p_63)))));
                l_347--;
                l_353--;
            }
            for (g_7 = (-15); (g_7 >= 12); g_7 = safe_add_func_uint32_t_u_u(g_7, 9))
            {
                int l_367 = 1L;
                int l_368 = 0x33F47DFAL;
                int l_372 = 0x1801D432L;
                int l_373 = 0x3D77D111L;
                unsigned short l_406 = 0xB63DL;
                if ((g_358 ^ func_84(p_62, (safe_add_func_int32_t_s_s((l_361 == (p_62 | (247UL && func_84((l_351[0] = (safe_lshift_func_uint16_t_u_s(0x55BCL, 8))), (g_132 , l_361), (((func_84((safe_mod_func_int32_t_s_s((p_62 < l_346[8]), p_60)), p_61, p_62, g_281, g_43.f3) <= g_314) < p_63) , g_132), l_325, p_63)))), l_330[3])), l_330[3], g_5[0], g_323)))
                {
                    unsigned short l_366[7] = {0xD28EL,0xD28EL,0x79C3L,0xD28EL,0xD28EL,0x79C3L,0xD28EL};
                    int l_369 = 0x005F595BL;
                    int l_370 = (-1L);
                    int l_371[7] = {0x8773803EL,0L,0L,0x8773803EL,0L,0L,0x8773803EL};
                    int i;
                    if (l_366[3])
                        break;
                    for (g_358 = 2; (g_358 <= 6); g_358 += 1)
                    {
                        int i, j;
                        return g_256[(g_358 + 1)][g_358];
                    }
                    --l_374[2];
                }
                else
                {
                    unsigned l_379[2][10][6] = {{{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL}},{{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL},{0UL,0x4FFCCF53L,0UL,0x06B2812FL,4294967291UL,0x06B2812FL}}};
                    int l_385 = 9L;
                    unsigned char l_398 = 255UL;
                    int i, j, k;
                    if ((safe_lshift_func_uint8_t_u_u(((func_112((l_379[0][1][3] = p_61), (g_380 = l_372), ((((l_374[0] , p_60) && p_60) == ((((g_256[7][3] > p_60) , l_373) | (g_154 = ((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(p_63, g_281)), l_313[7][1])) ^ l_385))) , l_367)) < 0xBFL), g_43.f0) & l_372) || 2UL), 3)))
                    {
                        return p_63;
                    }
                    else
                    {
                        if (l_374[5])
                            break;
                        l_346[8] = p_62;
                        if (l_351[0])
                            continue;
                        l_398 |= func_112(((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(p_62, p_62)) & p_60), p_60)), 0L)) ^ l_345), l_373, ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_s(((l_307 &= (l_372 = l_313[6][4])) ^ (!((l_346[0] = p_62) != g_169[0][1][3]))), g_43.f3)) >= l_330[1]) <= g_170) | g_5[0]), g_323)), l_330[0])) , p_61), g_314);
                    }
                    for (g_380 = 0; (g_380 <= 1); g_380 += 1)
                    {
                        int l_399 = 0x8674BF43L;
                        g_358 = l_399;
                    }
                    if ((safe_lshift_func_int16_t_s_u(3L, (((g_154 > (g_281 = p_62)) & 0x2C5E25AFL) == (!0x73L)))))
                    {
                        g_403++;
                        return l_406;
                    }
                    else
                    {
                        char l_413[9][9][3] = {{{0x14L,1L,0xCEL},{0L,8L,3L},{0xCEL,0x14L,1L},{(-1L),0L,2L},{5L,0x79L,3L},{0x11L,7L,0x10L},{5L,6L,(-1L)},{(-1L),0xE7L,(-4L)},{0xCEL,7L,8L}},{{0L,0xA6L,5L},{2L,0x4CL,0x96L},{2L,0x14L,0x10L},{0L,0x2CL,0L},{0xCEL,1L,0x92L},{(-1L),0x85L,1L},{5L,0xA6L,0L},{0x11L,(-8L),0L},{5L,1L,0x21L}},{{(-1L),6L,5L},{0xCEL,(-8L),(-1L)},{0L,0x53L,0L},{2L,0L,(-1L)},{2L,1L,0L},{0L,0x29L,0xBBL},{0xCEL,1L,2L},{(-1L),0x4CL,0x92L},{5L,0x53L,0xBBL}},{{0x11L,0xC1L,0xCEL},{5L,0xE7L,0x96L},{(-1L),1L,0L},{0xCEL,0xC1L,0x11L},{0L,0x79L,(-4L)},{2L,(-2L),(-1L)},{0x10L,0xACL,0x21L},{8L,0L,0x11L},{0x21L,0x97L,0L}},{{0xF9L,(-10L),0x10L},{0x51L,0x85L,0x11L},{0x16L,0x2CL,0x96L},{0x51L,0x79L,0xF9L},{0xF9L,0x53L,0x0DL},{0x21L,0x2CL,(-6L)},{8L,0x4CL,0x51L},{0x10L,0x14L,0xCBL},{0x10L,0x97L,0x96L}},{{8L,0x3FL,8L},{0x21L,(-1L),0xCEL},{0xF9L,(-2L),0L},{0x51L,0x4CL,8L},{0x16L,0x29L,(-1L)},{0x51L,0xA6L,(-1L)},{0xF9L,0x79L,0x51L},{0x21L,0x29L,5L},{8L,0L,0x51L}},{{0x10L,(-10L),0xF9L},{0x10L,(-1L),(-1L)},{8L,2L,(-1L)},{0x21L,0xACL,0x10L},{0xF9L,0x14L,0xCEL},{0x51L,0L,(-1L)},{0x16L,8L,0x21L},{0x51L,0x53L,0xCBL},{0xF9L,0xA6L,0x51L}},{{0x21L,8L,0x16L},{0L,5L,0xECL},{0L,0L,0x72L},{0L,0L,0L},{0L,(-5L),0L},{0L,0x10L,0x19L},{0L,(-4L),0L},{0xF2L,5L,0L},{(-8L),0L,6L}},{{0xF2L,(-1L),0L},{0L,0x11L,0xECL},{0L,0L,0xE3L},{0L,(-6L),0xF2L},{0L,5L,0x9BL},{0L,0x10L,6L},{0L,0xB5L,0L},{0L,0xCEL,(-1L)},{0L,0L,0x19L}}};
                        int i, j, k;
                        l_307 &= (((l_368 = (l_313[7][1] = p_62)) >= ((func_112((safe_add_func_uint32_t_u_u((g_403 &= 0x05073E43L), (safe_mod_func_uint16_t_u_u(0x571DL, (safe_sub_func_uint16_t_u_u(0x7C48L, l_413[2][1][1])))))), p_63, (~4294967295UL), g_323) ^ p_62) != 0x97L)) >= p_63);
                        l_373 |= func_84((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(l_413[2][1][1], 3)), p_63)), 4)), g_169[5][0][0], l_346[4], g_323, (255UL || l_372));
                    }
                }
                for (g_154 = (-30); (g_154 >= 7); ++g_154)
                {
                    int l_434 = 0xAAED4097L;
                    for (p_62 = (-19); (p_62 >= 20); p_62 = safe_add_func_uint16_t_u_u(p_62, 5))
                    {
                        unsigned short l_430 = 4UL;
                        int l_433 = (-9L);
                        l_346[8] |= 4L;
                        if (g_267)
                            break;
                        l_313[7][1] &= g_5[0];
                        l_373 ^= (((p_62 , 0xBDL) , func_84(func_84(p_63, p_61, (((((g_331 != ((safe_sub_func_uint16_t_u_u((g_196 > (safe_sub_func_uint32_t_u_u((p_61 , (safe_lshift_func_int8_t_s_u((func_84((l_433 |= (l_430 < (safe_sub_func_uint16_t_u_u(p_60, l_372)))), g_256[6][0], g_2, l_367, l_372) != 0x3566L), l_434))), g_196))), l_368)) ^ g_169[4][1][4])) ^ p_62) >= p_61) || g_322) && l_351[1]), g_281, g_170), g_267, p_60, p_60, g_43.f1)) < l_406);
                    }
                    g_322 = g_43.f3;
                    if (g_256[5][4])
                        continue;
                }
                if (g_196)
                    continue;
                if (g_154)
                    continue;
            }
        }
        else
        {
            unsigned short l_435 = 0x5DF6L;
            unsigned l_436 = 0x082CCA15L;
            l_345 = (func_76((p_60 <= g_170), l_321[1], (l_436 = func_84(p_60, g_170, l_321[1], l_435, g_43.f1))) , g_331);
        }
        for (g_323 = 12; (g_323 >= 2); --g_323)
        {
            unsigned short l_451 = 0x5C5DL;
            int l_458 = 0x63D516ACL;
            char l_474 = (-1L);
            int l_506 = 0x5C351724L;
            int l_509[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            unsigned short l_513 = 0UL;
            int i;
            if ((p_63 < 0x8BBBDEEAL))
            {
                char l_445 = 0L;
                int l_466 = 7L;
                int l_475 = 0x6384BCEBL;
                g_380 = (safe_add_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(l_307, func_112(p_60, (((-8L) > p_61) != ((safe_lshift_func_uint16_t_u_u((0xDBL == l_445), (((safe_rshift_func_int8_t_s_u(1L, 3)) | ((++g_117) == func_84(g_323, (l_345 = 0x8DL), p_62, g_450[8], g_43.f0))) & 1L))) || p_63)), l_451, g_169[7][0][3]))) && p_60) , 0x0B15L), g_5[0]));
                for (g_7 = 1; (g_7 <= 6); g_7 += 1)
                {
                    int l_494 = 0x24381BC7L;
                    int l_496[6];
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_496[i] = 0x9D0F1991L;
                    if (g_256[g_7][g_7])
                        break;
                    for (p_61 = 0; (p_61 <= 8); p_61 += 1)
                    {
                        int i;
                        l_458 = (((safe_rshift_func_int8_t_s_u(l_346[(g_7 + 2)], (((l_312 &= (func_84(l_346[p_61], (((safe_rshift_func_int8_t_s_s(l_346[(g_7 + 1)], 4)) , ((-8L) || l_346[(g_7 + 2)])) > g_132), (safe_sub_func_int16_t_s_s(g_256[g_7][g_7], (l_451 && g_380))), p_60, p_61) ^ 0x4AL)) || g_43.f2) < g_117))) ^ p_60) & l_313[9][4]);
                        g_43.f0 = g_281;
                        if (l_313[0][3])
                            continue;
                    }
                    for (g_403 = 1; (g_403 <= 6); g_403 += 1)
                    {
                        short l_465 = 0x8064L;
                        int i, j;
                        l_313[2][5] = (safe_rshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((g_275 = ((((((l_475 |= ((((safe_add_func_int32_t_s_s(g_132, (g_256[g_7][g_7] , (func_84((--g_281), (g_170 |= (l_345 < (g_147++))), g_403, g_331, (l_466 |= (g_5[0] < (9UL <= ((safe_mod_func_uint32_t_u_u(func_84(((((g_256[(g_7 + 1)][g_7] = func_84(func_84(l_451, g_380, g_267, g_450[8], l_465), g_358, l_345, g_323, p_62)) || p_62) ^ g_5[0]) <= 1UL), l_473, l_451, g_7, l_458), 0xEDC5F416L)) || l_474))))) == l_465)))) , g_256[g_7][g_7]) >= g_5[0]) != g_43.f2)) ^ 0xF075A1F0L) <= l_476[1][0][4]) , 0x6E72L) || 0xFD26L) || p_60)), 0x01E299AFL)) < p_61), g_314));
                        g_43.f0 |= (((safe_rshift_func_uint8_t_u_u((p_63 & (((safe_rshift_func_int8_t_s_s((((((((((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((g_275 |= l_312), (safe_lshift_func_uint16_t_u_s(((+(((g_497 = (((safe_lshift_func_int16_t_s_s((((p_63 || (0xEF78L | ((safe_mod_func_uint8_t_u_u(((l_346[6] &= (l_313[7][1] = g_256[6][6])) != (l_495 = ((safe_mod_func_int8_t_s_s((~g_256[5][4]), (safe_unary_minus_func_uint8_t_u((g_170 ^= (p_63 < (l_345 = (l_494 = ((p_62 , (g_5[0] ^ 8L)) ^ 65534UL))))))))) | 2UL))), g_314)) < l_496[2]))) , 0xEFL) || l_494), l_496[0])) || l_445) | l_445)) , g_256[5][4]) && g_450[8])) , l_496[2]), 6)))), p_63)) <= p_61) ^ p_60) , 0xD1B0B12AL) <= l_321[9]) && l_475) & g_256[g_7][g_7]) || 0x2B8C058CL) < g_169[6][0][3]), 3)) != 0xA879L) < 0x8768L)), 0)) || p_63) & l_474);
                        l_458 = (0x74D7L <= ((safe_lshift_func_uint8_t_u_s((l_374[2] || (l_494 == (g_331++))), 5)) , l_496[0]));
                    }
                }
            }
            else
            {
                short l_502 = 0x1A08L;
                int l_503 = 1L;
                int l_504 = 0xB57779E2L;
                int l_505 = 5L;
                int l_507 = 4L;
                int l_508[7] = {0x18675389L,0x18675389L,0x18675389L,0x18675389L,0x18675389L,0x18675389L,0x18675389L};
                unsigned char l_535[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_535[i] = 0UL;
                l_513++;
                g_536 = (p_63 || (safe_unary_minus_func_int16_t_s(((((l_509[3] ^= (((safe_mod_func_uint16_t_u_u((((func_76((safe_mod_func_int8_t_s_s((~(safe_add_func_int8_t_s_s(g_358, (((l_458 = g_154) >= (safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((((65526UL == (func_84(((((func_84(p_62, (g_170--), l_503, (safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((p_60 < (l_307 = l_374[9])), 15)) , (safe_sub_func_uint16_t_u_u(g_267, l_321[1]))), p_60)), l_513) , 0xC93FL) ^ 0x2696L) && g_127[0][0]) < l_476[1][0][4]), p_63, l_474, p_62, l_507) , p_62)) ^ p_63) > g_275), g_5[0])) == l_313[6][0]) != l_507), 1))) || p_61)))), 247UL)), g_2, g_510) < 0x21E0L) | p_61) , g_358), g_331)) != l_313[7][1]) <= g_380)) & l_304) ^ l_535[0]) <= 0x60129BCCL))));
            }
        }
        return l_511;
    }
    for (p_60 = 0; (p_60 == 23); p_60++)
    {
        int l_544 = 0x728DB5A0L;
        int l_550 = 0x91C2DD4FL;
        int l_570 = (-8L);
        int l_572 = 0xC3F77804L;
        for (p_62 = 3; (p_62 <= 8); p_62 += 1)
        {
            int l_539 = 0x5FDA5666L;
            int l_573 = 0xC3490E3BL;
            int l_574 = 6L;
            int l_575 = (-10L);
            unsigned char l_629 = 0xD5L;
            int i;
            l_539 = g_450[p_62];
            for (g_322 = 0; (g_322 <= 9); g_322 += 1)
            {
                short l_549 = (-6L);
                int l_551[8];
                const unsigned char l_567 = 0x91L;
                int l_590 = 0x4CC2AF0CL;
                int i;
                for (i = 0; i < 8; i++)
                    l_551[i] = 0xF3CD0567L;
                for (g_147 = 0; (g_147 <= 9); g_147 += 1)
                {
                    short l_545 = 1L;
                    int l_548 = 0xBAF8F12BL;
                    int l_554 = 0x1C5F78FBL;
                    int l_569[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_569[i] = 0L;
                    if (((safe_sub_func_int16_t_s_s(((l_550 = ((((safe_mul_func_int32_t_s_s(0x3B2F03D2L, ((((g_323 && (+l_544)) != (p_60 <= (l_549 &= (p_63 ^= (((~((((((l_545 , 65535UL) <= (safe_rshift_func_int16_t_s_u(((l_476[0][0][6] < ((0x73L ^ (0xF5L <= g_450[p_62])) == l_548)) != l_548), p_61))) | g_314) , (-10L)) | 0x32C6AABBL) && g_256[5][4])) == p_61) & 0x597843D2L))))) != 65531UL) >= 0x31B8EE73L))) > g_5[0]) , p_60) == 0x6484L)) , 0x7064L), 0L)) != p_62))
                    {
                        unsigned l_566[9][10][2] = {{{0x26AB757EL,4294967295UL},{0x26AB757EL,0x54B9A13DL},{0xA5FD5D95L,2UL},{0x54B9A13DL,4294967295UL},{4294967287UL,0UL},{4294967295UL,1UL},{1UL,4294967291UL},{0xDABF6F47L,4294967295UL},{0xD9ADB268L,4294967295UL},{0x8060E26AL,0x2E59BF52L}},{{0xF09C21F0L,0xFCE6C5A8L},{0x26AB757EL,4294967295UL},{0x42B9AB01L,0xAD127C3AL},{1UL,2UL},{0x8060E26AL,0xAB840B5BL},{0x8A596903L,0xEBFCC78FL},{0x8060E26AL,0x703A43CAL},{0UL,4294967295UL},{0x0B86B687L,0x391649F3L},{2UL,0xB9AA26AEL}},{{2UL,0x8060E26AL},{0UL,0xB0135F05L},{4294967295UL,1UL},{4294967292UL,0xAB840B5BL},{4294967295UL,0x0B86B687L},{2UL,0x42B9AB01L},{0xDABF6F47L,3UL},{0xAD127C3AL,4294967295UL},{0x703A43CAL,4294967295UL},{0xAD127C3AL,3UL}},{{0xDABF6F47L,0x42B9AB01L},{2UL,0x0B86B687L},{4294967295UL,0xAB840B5BL},{4294967292UL,1UL},{4294967295UL,0xB0135F05L},{0UL,0x8060E26AL},{2UL,0xB9AA26AEL},{2UL,0x391649F3L},{0x0B86B687L,4294967295UL},{0UL,0x703A43CAL}},{{0x8060E26AL,0xEBFCC78FL},{0xDABF6F47L,0xB9AA26AEL},{4294967295UL,0x54B9A13DL},{0UL,0xAB840B5BL},{4294967295UL,0UL},{0UL,2UL},{0UL,0x0B86B687L},{4294967295UL,0xC2C73893L},{1UL,0x391649F3L},{0xAD127C3AL,0x703A43CAL}},{{0x993FAABAL,0x993FAABAL},{0x8060E26AL,3UL},{2UL,0xC2C73893L},{0xB0135F05L,0x54B9A13DL},{4294967295UL,0xB0135F05L},{0UL,0xA5FD5D95L},{0UL,0xB0135F05L},{4294967295UL,0x54B9A13DL},{0xB0135F05L,0xC2C73893L},{2UL,3UL}},{{0x8060E26AL,0x993FAABAL},{0x993FAABAL,0x703A43CAL},{0xAD127C3AL,0x391649F3L},{1UL,0xF09C21F0L},{0x703A43CAL,0UL},{0xD9ADB268L,4294967295UL},{0UL,0xB4BA5180L},{0UL,4294967295UL},{4294967287UL,1UL},{0x703A43CAL,0xA5FD5D95L}},{{0xC2C73893L,0x2E59BF52L},{4294967291UL,0xEBFCC78FL},{3UL,0x00D101B9L},{0UL,4294967295UL},{0xB9AA26AEL,0xA5FD5D95L},{4294967295UL,4294967291UL},{0xD9ADB268L,0x993FAABAL},{0UL,4294967288UL},{0UL,4294967295UL},{0UL,0UL}},{{4294967295UL,1UL},{0xC2C73893L,0xDABF6F47L},{4294967292UL,0x00D101B9L},{0xEBFCC78FL,0x00D101B9L},{4294967292UL,0xDABF6F47L},{0xC2C73893L,1UL},{4294967295UL,0UL},{0UL,4294967295UL},{0UL,4294967288UL},{0UL,0x993FAABAL}}};
                        int i, j, k;
                        l_551[3] = (-10L);
                        l_554 ^= ((((safe_mod_func_int8_t_s_s(g_5[0], g_154)) && 65533UL) || l_476[1][0][4]) != l_550);
                        g_275 = (safe_mod_func_int32_t_s_s((((((func_84((g_331 = (safe_rshift_func_int16_t_s_u(func_84((!g_450[8]), ((safe_rshift_func_uint16_t_u_u(l_551[3], (l_313[5][4] ^ func_84(((g_281 = (0x10L > ((g_358 = (g_561 , (~func_84((4294967294UL && p_63), (safe_add_func_int8_t_s_s((((p_61 != (((((safe_rshift_func_uint16_t_u_u(g_43.f0, 1)) | l_554) < l_566[6][9][1]) == g_256[5][4]) & g_7)) , 65535UL) >= p_63), g_267)), g_170, p_60, g_43.f1)))) ^ 0xF5C01F23L))) , l_567), g_450[8], g_323, g_43.f3, g_403)))) != 1UL), g_43.f3, p_63, g_2), 14))), g_450[p_62], g_43.f1, g_403, l_544) ^ g_170) && 0x01L) < 0xEAL) >= g_117) , p_60), g_450[8]));
                    }
                    else
                    {
                        short l_568 = 0x4EC2L;
                        int l_571[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_571[i] = 0x5381FEA1L;
                        ++l_576;
                        l_590 = ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(((((((safe_lshift_func_int8_t_s_s(l_575, (l_551[4] = l_569[0]))) , (safe_rshift_func_int8_t_s_u((-1L), (l_551[2] < ((safe_add_func_uint8_t_u_u((p_62 ^ (g_589 && (l_573 >= 1L))), func_84((l_550 < p_63), l_312, g_132, p_60, p_60))) <= l_325))))) ^ l_545) , 0xCDL) >= g_510) > 4294967288UL), p_63)), 4)) , l_545);
                    }
                    for (l_573 = 0; (l_573 <= 8); l_573 += 1)
                    {
                        char l_591 = 0x98L;
                        l_591 &= (p_61 < 1UL);
                    }
                }
                for (l_550 = 9; (l_550 >= 3); l_550 -= 1)
                {
                    for (g_589 = 2; (g_589 <= 8); g_589 += 1)
                    {
                        g_275 = p_63;
                        g_7 &= (l_539 = p_63);
                        l_313[7][1] = ((p_63 = p_62) | ((((!g_132) > (l_590 = (safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_43.f2, (safe_add_func_int16_t_s_s(l_570, g_256[2][1])))), l_574)), (safe_rshift_func_uint16_t_u_u(5UL, (safe_add_func_int32_t_s_s((l_551[6] = (l_575 && p_61)), p_61)))))))) , (-1L)) >= 0xE1C81B3EL));
                    }
                }
                if (p_62)
                    break;
                for (l_473 = 0; (l_473 <= 9); l_473 += 1)
                {
                    const unsigned short l_614[6][1][4] = {{{1UL,1UL,65535UL,1UL}},{{1UL,0x27B3L,0x27B3L,1UL}},{{0x27B3L,1UL,0x27B3L,0x27B3L}},{{1UL,1UL,65535UL,1UL}},{{1UL,0x27B3L,0x27B3L,1UL}},{{0x27B3L,1UL,0x27B3L,0x27B3L}}};
                    unsigned char l_615 = 1UL;
                    short l_625 = 8L;
                    int l_642 = 0x591A03B5L;
                    int i, j, k;
                    l_313[7][1] = (l_512 && ((g_536 = ((-1L) >= (~(g_43.f2 || (safe_rshift_func_uint16_t_u_s(l_511, 8)))))) || g_380));
                    if (((g_256[2][3] && l_574) , (g_510 < ((((p_63 ^= func_84((+func_84(p_62, (safe_sub_func_uint8_t_u_u(((((l_615 = (l_590 = (func_84((func_112((g_154 < (g_450[p_62] = (!(safe_mod_func_int8_t_s_s(func_84((((0xBDL ^ g_323) != (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((p_62 > (g_117 ^ p_61)) && l_549), g_256[5][4])), (-1L)))) , l_374[0]), l_550, g_256[6][2], g_450[p_62], l_614[3][0][0]), 8UL))))), g_169[7][0][4], g_323, g_169[5][0][0]) , g_154), p_60, g_5[0], g_497, g_536) > 65528UL))) == 0L) && g_127[1][0]) == g_510), g_5[0])), p_60, p_62, g_616)), p_61, l_539, l_573, p_62)) <= l_307) , l_570) >= 0x3A2FL))))
                    {
                        int l_626 = 0xEECB2260L;
                        l_539 = (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((g_132 , (g_536 , (g_43.f2 , func_64((safe_mod_func_uint16_t_u_u(func_112(p_63, (l_551[3] = (l_625 <= ((((g_154 != g_616) | ((((l_629 = (((g_314++) | (g_589 ^= (l_590 = (l_313[7][1] |= g_450[6])))) | (p_63 , 4294967295UL))) && g_5[0]) <= l_512) , g_147)) <= 0x9DL) <= 0xC668L))), g_7, p_62), p_60)), g_323, p_61, l_626, g_450[1])))) , p_62) , l_567), 9)), g_323));
                        l_551[3] = func_64((l_642 = func_64(l_626, (l_572 || (g_154 = (safe_sub_func_uint32_t_u_u((g_256[5][5] = (6L || ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((l_614[3][0][0] , g_323), 9)), 10)) > ((l_550 , (func_84((((safe_lshift_func_uint16_t_u_u(g_43.f2, 4)) <= g_589) >= (((l_574 = ((++g_403) > ((safe_lshift_func_int16_t_s_s((l_551[7] ^= (l_476[1][0][7] , g_450[p_62])), 4)) ^ p_60))) ^ 7L) || 0L)), p_61, g_147, g_497, l_324) && g_281)) == p_61)))), g_154)))), g_561, p_62, l_324)), g_322, l_576, g_331, g_561);
                        if (l_312)
                            continue;
                        g_358 = g_169[1][1][4];
                    }
                    else
                    {
                        l_313[7][1] = g_510;
                        return l_629;
                    }
                }
            }
            g_169[5][0][0] &= l_374[2];
        }
    }
    return l_304;
}







static char func_64(int p_65, const unsigned short p_66, int p_67, unsigned short p_68, const unsigned p_69)
{
    unsigned l_75 = 5UL;
    int l_274 = 0x83AD853FL;
    int l_276 = 2L;
    int l_277 = 6L;
    unsigned l_290 = 0x05F7768BL;
    if (((((safe_lshift_func_int8_t_s_s((l_75 != l_75), (((0x490A13E6L < func_76((((p_68 = g_43.f2) , ((safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((((((func_84((safe_rshift_func_uint8_t_u_s((g_5[0] , ((safe_rshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s(p_67, 0x46L)) , p_65), 8)) | 65534UL)), l_75)), p_65, l_75, g_43.f3, g_5[0]) || l_75) != l_75) > 1UL) < (-8L)) || 0x4828L), 7L)), 5)) , (-1L))) && 0UL), g_43.f2, p_66)) | g_2) , 0L))) , g_43.f1) , p_66) ^ l_75))
    {
        return p_69;
    }
    else
    {
        char l_278[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int l_279 = 0L;
        int l_280 = 0xE5B7813AL;
        int i;
        g_43.f3 = l_75;
        for (g_267 = (-18); (g_267 >= 42); g_267++)
        {
            unsigned l_270 = 4294967294UL;
            int l_273 = (-1L);
            l_270--;
            l_273 = (g_5[0] <= g_196);
        }
        p_67 ^= (g_169[5][0][0] = p_66);
        --g_281;
    }
    for (g_154 = 0; (g_154 >= 9); g_154++)
    {
        unsigned l_286 = 4294967295UL;
        int l_289 = (-4L);
        g_275 = (l_286 = g_2);
        for (l_276 = (-23); (l_276 <= 15); l_276 = safe_add_func_uint32_t_u_u(l_276, 8))
        {
            p_67 &= (0L != (4294967295UL || 0x5DF0252EL));
            g_275 = p_68;
        }
        l_290++;
    }
    g_43.f0 = (g_127[1][0] < g_2);
    l_277 &= (((0xF5DFL ^ 0x6AC6L) , (0xFDB9L | (safe_mod_func_int32_t_s_s((((safe_sub_func_int16_t_s_s((g_132 , (safe_sub_func_uint32_t_u_u(g_132, (func_84(p_65, l_276, g_147, g_256[6][0], p_67) ^ p_66)))), 0L)) & g_127[1][0]) , p_66), 4294967295UL)))) < 0xB3L);
    return g_154;
}







static unsigned func_76(unsigned p_77, unsigned p_78, const unsigned p_79)
{
    short l_105 = 0x9215L;
    int l_106 = 0x869DFF36L;
    int l_107 = 0xF118E409L;
    short l_126 = 0L;
    int l_266 = (-2L);
    for (g_7 = 28; (g_7 == (-1)); g_7 = safe_sub_func_uint32_t_u_u(g_7, 7))
    {
        g_43.f0 = (-1L);
    }
    l_107 |= (g_7 = ((p_78 <= (safe_mod_func_uint32_t_u_u((g_43.f2 = ((safe_add_func_uint32_t_u_u(p_78, 0xB3785809L)) != ((safe_rshift_func_int8_t_s_s((((g_43.f3 = ((p_79 , (p_78 != (l_106 = (p_78 , (p_77 | ((l_105 = 1L) || 4294967295UL)))))) , 0L)) < g_7) | 0xC6DC0DC4L), g_5[0])) , 1UL))), g_43.f0))) >= 0UL));
    g_267 &= ((((safe_sub_func_uint32_t_u_u(p_78, (((safe_mod_func_int32_t_s_s(((l_266 ^= (l_106 = (func_112(l_105, g_43.f0, ((g_117 = g_7) >= p_79), (safe_mod_func_int32_t_s_s((((((l_107 = (safe_add_func_int8_t_s_s(((l_126 |= (safe_sub_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(p_77, (l_107 != 2UL))) == (func_84(p_78, p_77, g_43.f0, p_79, l_105) ^ p_78)) != p_78), l_107))) , l_107), 1L))) < g_2) || g_43.f0) ^ 0L) && 0x4727EF2EL), 9UL))) , 0x7894A56FL))) != g_43.f1), 0x3242A972L)) | l_105) <= g_43.f2))) || 0xDA73L) , p_77) || l_105);
    return g_43.f2;
}







static unsigned short func_84(const unsigned short p_85, unsigned char p_86, short p_87, int p_88, const int p_89)
{
    int l_96 = 0L;
    l_96 = p_88;
    return p_85;
}







static unsigned char func_112(int p_113, short p_114, unsigned p_115, int p_116)
{
    const unsigned l_130 = 4294967288UL;
    int l_131[10] = {0x0A7BF822L,3L,0x0A7BF822L,3L,0x0A7BF822L,3L,0x0A7BF822L,3L,0x0A7BF822L,3L};
    int l_134 = 1L;
    char l_141 = (-8L);
    int i;
    for (g_117 = 0; (g_117 <= 1); g_117 += 1)
    {
        unsigned char l_133 = 0UL;
        int l_142[8][6][5] = {{{1L,1L,8L,1L,8L},{0x34005F24L,0x34005F24L,(-5L),0xD1FBCF3AL,(-5L)},{0x641F7FF8L,0x641F7FF8L,8L,1L,8L},{0x34005F24L,0x34005F24L,(-5L),0xD1FBCF3AL,(-5L)},{0x641F7FF8L,0x641F7FF8L,8L,1L,8L},{0x34005F24L,0x34005F24L,(-5L),0xD1FBCF3AL,(-5L)}},{{0x641F7FF8L,0x641F7FF8L,8L,1L,8L},{0x34005F24L,0x34005F24L,(-5L),0xD1FBCF3AL,(-5L)},{0x641F7FF8L,0x641F7FF8L,8L,1L,8L},{0x34005F24L,0x34005F24L,(-5L),0xD1FBCF3AL,(-5L)},{0x641F7FF8L,0x641F7FF8L,8L,1L,8L},{0x34005F24L,0x34005F24L,(-5L),0xD1FBCF3AL,(-5L)}},{{0x641F7FF8L,0x641F7FF8L,8L,1L,8L},{0x34005F24L,0x34005F24L,(-5L),0xD1FBCF3AL,(-5L)},{0x641F7FF8L,0x641F7FF8L,8L,1L,8L},{0x34005F24L,0x34005F24L,(-5L),0xD1FBCF3AL,(-5L)},{0x641F7FF8L,0x641F7FF8L,8L,1L,8L},{0x34005F24L,0x34005F24L,(-5L),0xD1FBCF3AL,(-5L)}},{{0x641F7FF8L,0x641F7FF8L,8L,1L,8L},{0x34005F24L,0x34005F24L,0x34005F24L,(-6L),0x34005F24L},{0x8AA747B8L,0x8AA747B8L,0x641F7FF8L,0x1135B977L,0x641F7FF8L},{0xE5AF5969L,0xE5AF5969L,0x34005F24L,(-6L),0x34005F24L},{0x8AA747B8L,0x8AA747B8L,0x641F7FF8L,0x1135B977L,0x641F7FF8L},{0xE5AF5969L,0xE5AF5969L,0x34005F24L,(-6L),0x34005F24L}},{{0x8AA747B8L,0x8AA747B8L,0x641F7FF8L,0x1135B977L,0x641F7FF8L},{0xE5AF5969L,0xE5AF5969L,0x34005F24L,(-6L),0x34005F24L},{0x8AA747B8L,0x8AA747B8L,0x641F7FF8L,0x1135B977L,0x641F7FF8L},{0xE5AF5969L,0xE5AF5969L,0x34005F24L,(-6L),0x34005F24L},{0x8AA747B8L,0x8AA747B8L,0x641F7FF8L,0x1135B977L,0x641F7FF8L},{0xE5AF5969L,0xE5AF5969L,0x34005F24L,(-6L),0x34005F24L}},{{0x8AA747B8L,0x8AA747B8L,0x641F7FF8L,0x1135B977L,0x641F7FF8L},{0xE5AF5969L,0xE5AF5969L,0x34005F24L,(-6L),0x34005F24L},{0x8AA747B8L,0x8AA747B8L,0x641F7FF8L,0x1135B977L,0x641F7FF8L},{0xE5AF5969L,0xE5AF5969L,0x34005F24L,(-6L),0x34005F24L},{0x8AA747B8L,0x8AA747B8L,0x641F7FF8L,0x1135B977L,0x641F7FF8L},{0xE5AF5969L,0xE5AF5969L,0x34005F24L,(-6L),0x34005F24L}},{{0x8AA747B8L,0x8AA747B8L,0x641F7FF8L,0x1135B977L,0x641F7FF8L},{0xE5AF5969L,0xE5AF5969L,0x34005F24L,(-6L),0x34005F24L},{0x8AA747B8L,0x8AA747B8L,0x641F7FF8L,0x8AA747B8L,0x1135B977L},{(-5L),(-5L),(-6L),0xE5AF5969L,(-6L)},{8L,8L,0x1135B977L,0x8AA747B8L,0x1135B977L},{(-5L),(-5L),(-6L),0xE5AF5969L,(-6L)}},{{8L,8L,0x1135B977L,0x8AA747B8L,0x1135B977L},{(-5L),(-5L),(-6L),0xE5AF5969L,(-6L)},{8L,8L,0x1135B977L,0x8AA747B8L,0x1135B977L},{(-5L),(-5L),(-6L),0xE5AF5969L,(-6L)},{8L,8L,0x1135B977L,0x8AA747B8L,0x1135B977L},{(-5L),(-5L),(-6L),0xE5AF5969L,(-6L)}}};
        int i, j, k;
        l_134 ^= ((~((6UL | ((safe_add_func_uint32_t_u_u(((0x5BL != func_84(l_130, g_127[0][1], g_43.f3, g_127[1][0], func_84(g_43.f3, (((l_131[2] = g_5[0]) < (p_115 , g_5[0])) , 0xA7L), p_113, l_130, l_130))) == g_117), g_132)) , l_133)) < 1L)) || 0xF1D218BDL);
        l_134 ^= func_84(func_84((l_142[6][2][3] = (0x6544L > func_84(p_116, l_133, (l_133 == (((p_116 & ((safe_lshift_func_int8_t_s_s(((g_43.f2 != (((func_84((((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((255UL < 0xF4L) ^ ((l_131[2] || p_115) ^ l_141)), 0xF640L)), p_115)) | 0L) , g_5[0]), p_114, l_141, l_142[4][5][2], g_43.f2) > g_117) | 4UL) > 0xC49AC2DAL)) , p_113), 0)) > 0xF972L)) != 0L) ^ p_114)), g_5[0], l_142[4][5][2]))), g_2, l_130, p_114, g_132), g_127[1][0], l_130, g_117, l_133);
        for (p_114 = 0; (p_114 <= 1); p_114 += 1)
        {
            int i, j;
            g_43.f3 = ((g_127[g_117][p_114] ^ 0x50L) & ((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((g_147 = 8L), 0UL)), (l_131[0] = ((safe_rshift_func_uint16_t_u_u(func_84((l_131[2] | (safe_add_func_uint8_t_u_u(((l_130 , func_84(p_114, g_5[0], ((safe_add_func_int16_t_s_s(0x7438L, p_113)) > g_43.f1), p_116, g_127[g_117][p_114])) || 0xC1A3L), p_113))), g_7, p_113, p_116, l_142[1][0][0]), l_142[5][2][1])) && p_113)))) <= 0x62L));
            g_170 &= (~((l_142[4][5][2] = l_142[4][5][2]) == (l_133 || (((g_154 = g_43.f3) , p_114) | (safe_add_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(func_84(((g_169[5][0][0] &= (safe_mod_func_int32_t_s_s(((g_43.f3 <= (0x9525BE55L <= p_113)) & (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s((!p_114), 6)) || (255UL >= p_116)) > g_43.f0), g_127[g_117][p_114])) <= g_127[g_117][p_114]), 2))), l_133))) > g_127[g_117][p_114]), g_132, p_114, l_130, g_7), 1UL)) >= p_115), l_134)) > g_5[0]), p_115))))));
            return g_127[g_117][p_114];
        }
    }
    for (l_134 = 4; (l_134 != (-24)); l_134--)
    {
        unsigned char l_173 = 0UL;
        for (p_115 = 0; (p_115 <= 9); p_115 += 1)
        {
            int i;
            l_131[p_115] = 5L;
            return p_113;
        }
        p_116 = ((g_147 , l_173) ^ (safe_add_func_uint32_t_u_u((((0x67L >= (g_5[0] && (safe_sub_func_uint16_t_u_u(g_5[0], (((l_173 && (l_131[3] = (g_117 |= p_115))) == l_173) >= l_173))))) == l_173) , l_173), p_113)));
        for (p_116 = 0; (p_116 <= 1); p_116 += 1)
        {
            for (g_132 = 0; (g_132 <= 1); g_132 += 1)
            {
                int i, j;
                return g_127[p_116][p_116];
            }
            for (p_113 = 8; (p_113 >= 1); p_113 -= 1)
            {
                if (g_5[0])
                    break;
            }
        }
    }
    for (p_114 = 14; (p_114 >= (-16)); p_114 = safe_sub_func_int32_t_s_s(p_114, 7))
    {
        int l_195 = 0x494BA823L;
        unsigned short l_199 = 0x93AFL;
        int l_207 = 0xD24F5E8FL;
        int l_209 = 0x8AC27F2CL;
        int l_210 = 0x66A3AEE2L;
        int l_214 = 0xA030760CL;
        int l_216 = (-1L);
        int l_217 = 0xD583043BL;
        int l_218 = (-6L);
        int l_220 = 0x5D76A2BAL;
        int l_221 = (-7L);
        int l_222 = (-1L);
        int l_225 = 0x71FE6389L;
        int l_227 = (-5L);
        short l_228 = 0x88D8L;
        char l_229 = (-1L);
        int l_235 = 0x7C12618DL;
        int l_236 = 0x7BD0654CL;
        int l_239[3][6] = {{0x27E7C447L,0x8A2C7106L,0x27E7C447L,0x8A2C7106L,0x27E7C447L,0x8A2C7106L},{0xE71C832DL,0x8A2C7106L,0xE71C832DL,0x8A2C7106L,0xE71C832DL,0x8A2C7106L},{0x27E7C447L,0x8A2C7106L,0x27E7C447L,0x8A2C7106L,0x27E7C447L,0x8A2C7106L}};
        unsigned short l_246 = 0xA449L;
        int i, j;
        for (g_170 = 0; (g_170 >= 2); ++g_170)
        {
            int l_190 = 0xEC585493L;
            int l_197[6][4][3] = {{{0x94179F39L,0L,0L},{0x94179F39L,0L,0L},{0x94179F39L,0L,0L},{0x94179F39L,0L,0L}},{{0x94179F39L,0L,0L},{0x94179F39L,0L,0L},{0x94179F39L,0L,0L},{0x94179F39L,0L,0L}},{{0x94179F39L,0L,0L},{0x94179F39L,0L,0L},{0L,1L,1L},{0L,1L,1L}},{{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L}},{{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L}},{{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L}}};
            char l_198 = (-8L);
            short l_255 = 0xAE11L;
            int i, j, k;
            if ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u(((((func_84((func_84((((l_131[2] = (safe_sub_func_uint8_t_u_u((0xF3L <= (safe_rshift_func_int8_t_s_s(l_190, (l_190 , (((g_117 |= (g_170 | l_131[2])) < (safe_sub_func_uint32_t_u_u((func_84(p_115, (l_197[0][3][2] = ((safe_sub_func_int32_t_s_s(l_195, (g_43.f1 & (func_84((g_196 &= (p_116 , 65535UL)), g_43.f0, l_190, p_114, l_131[2]) && p_113)))) , 248UL)), l_130, p_114, p_113) & p_114), 0L))) >= 0L))))), (-1L)))) == g_43.f0) , p_116), g_170, l_195, l_198, g_127[1][0]) ^ g_127[1][0]), g_7, g_169[4][1][3], l_134, l_195) , g_169[0][0][3]) | l_198) , l_199) , p_116), l_130)) > g_127[1][1]), 2)))
            {
                short l_202 = 0L;
                int l_203 = 4L;
                int l_204[10] = {(-1L),(-1L),0x3FF5F7A2L,0xD2473296L,0x3FF5F7A2L,(-1L),(-1L),0x3FF5F7A2L,0xD2473296L,0x3FF5F7A2L};
                short l_241 = 0x9F9EL;
                int i;
                for (p_115 = 0; (p_115 >= 49); p_115 = safe_add_func_uint16_t_u_u(p_115, 7))
                {
                    short l_205[6][4][4] = {{{1L,(-5L),(-5L),1L},{0x7781L,0x9418L,0x5461L,0x8729L},{1L,0xF05BL,0x8729L,0xD2FBL},{0x8729L,0xD2FBL,0x9421L,0xD2FBL}},{{(-5L),0xF05BL,(-6L),0x8729L},{0x9B6AL,0x9418L,0xD2FBL,1L},{(-6L),(-5L),(-1L),(-1L)},{(-6L),(-6L),0xD2FBL,0x7781L}},{{0x9B6AL,(-1L),(-6L),0x9418L},{(-5L),1L,0x9421L,(-6L)},{0x8729L,1L,0x8729L,(-5L)},{0x8729L,0x9418L,(-6L),(-1L)}},{{(-1L),0x9421L,0xF05BL,0x9418L},{0x5461L,0xF05BL,0xF05BL,0x5461L},{(-1L),(-5L),(-6L),0x7781L},{0x8729L,1L,0x7781L,0x9B6AL}},{{0x7781L,0x9B6AL,0xD2FBL,0x9B6AL},{0xF05BL,1L,0x9421L,0x7781L},{1L,(-5L),0x9B6AL,0x5461L},{0x9421L,0xF05BL,0x9418L,0x9418L}},{{0x9421L,0x9421L,0x9B6AL,(-1L)},{1L,0x9418L,0x9421L,(-5L)},{0xF05BL,0x8729L,0xD2FBL,0x9421L},{0x7781L,0x8729L,0x7781L,(-5L)}}};
                    int l_206 = 0xEF3DB105L;
                    int l_208 = (-8L);
                    int l_211 = 0x79D16ADDL;
                    int l_212 = 0xD02CFC97L;
                    int l_213 = 0x7139CEE8L;
                    int l_215 = 0x5E776B26L;
                    int l_219 = 0xB3D9BBB4L;
                    int l_223 = 0xBA1BEA94L;
                    int l_224 = 0xB7D223D8L;
                    int l_226 = 1L;
                    int l_230 = 0x078178A3L;
                    int l_231 = 0x3B957851L;
                    int l_232 = (-4L);
                    int l_233 = 0x8296FA6DL;
                    int l_234 = 0x48885BD3L;
                    int l_237 = 0x86B6F2C5L;
                    int l_238 = 0x8311569AL;
                    int l_240 = 0L;
                    int l_242 = 0xCD7A234FL;
                    int l_243 = 0L;
                    int l_244 = (-5L);
                    int l_245 = (-2L);
                    int i, j, k;
                    g_169[8][1][1] ^= 0L;
                    ++l_246;
                    return p_115;
                }
                if ((p_116 = ((p_116 != ((l_197[0][3][2] &= (g_256[2][4] = (!(safe_mod_func_uint16_t_u_u((l_241 < (safe_lshift_func_uint8_t_u_u(((5UL | ((safe_add_func_int32_t_s_s(((0x90BE3177L == l_130) || l_255), g_127[1][0])) > func_84((g_169[5][0][0] >= l_130), p_113, p_115, l_221, g_5[0]))) != l_195), g_256[5][4]))), p_114))))) == (-1L))) == 0x7E53L)))
                {
                    g_169[5][0][0] = (0x5CL & func_84((p_115 >= ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(1L, (safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((p_115 <= l_134), 0x3DB5F00AL)), 13)))), g_147)) > (-1L))), g_147, l_197[0][3][2], p_113, l_131[1]));
                }
                else
                {
                    unsigned short l_265[10] = {0x805FL,0x805FL,0x805FL,0x805FL,0x805FL,0x805FL,0x805FL,0x805FL,0x805FL,0x805FL};
                    int i;
                    if (l_265[5])
                        break;
                    l_216 |= (p_113 = l_228);
                }
            }
            else
            {
                g_169[5][0][0] = p_115;
            }
            l_216 &= (g_43.f3 = (l_141 | ((p_113 || (g_43.f0 = (~l_235))) > (g_196 || (l_197[4][1][2] = g_169[5][0][0])))));
        }
    }
    return g_154;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
    transparent_crc(g_43.f1, "g_43.f1", print_hash_value);
    transparent_crc(g_43.f2, "g_43.f2", print_hash_value);
    transparent_crc(g_43.f3, "g_43.f3", print_hash_value);
    transparent_crc(g_43.f4, "g_43.f4", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_127[i][j], "g_127[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_169[i][j][k], "g_169[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_256[i][j], "g_256[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_450[i], "g_450[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    transparent_crc(g_589, "g_589", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_645.f0, "g_645.f0", print_hash_value);
    transparent_crc(g_645.f1, "g_645.f1", print_hash_value);
    transparent_crc(g_645.f2, "g_645.f2", print_hash_value);
    transparent_crc(g_645.f3, "g_645.f3", print_hash_value);
    transparent_crc(g_645.f4, "g_645.f4", print_hash_value);
    transparent_crc(g_646.f0, "g_646.f0", print_hash_value);
    transparent_crc(g_646.f1, "g_646.f1", print_hash_value);
    transparent_crc(g_646.f2, "g_646.f2", print_hash_value);
    transparent_crc(g_646.f3, "g_646.f3", print_hash_value);
    transparent_crc(g_646.f4, "g_646.f4", print_hash_value);
    transparent_crc(g_654.f0, "g_654.f0", print_hash_value);
    transparent_crc(g_654.f1, "g_654.f1", print_hash_value);
    transparent_crc(g_654.f2, "g_654.f2", print_hash_value);
    transparent_crc(g_654.f3, "g_654.f3", print_hash_value);
    transparent_crc(g_654.f4, "g_654.f4", print_hash_value);
    transparent_crc(g_675.f0, "g_675.f0", print_hash_value);
    transparent_crc(g_675.f1, "g_675.f1", print_hash_value);
    transparent_crc(g_675.f2, "g_675.f2", print_hash_value);
    transparent_crc(g_675.f3, "g_675.f3", print_hash_value);
    transparent_crc(g_675.f4, "g_675.f4", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_676[i].f0, "g_676[i].f0", print_hash_value);
        transparent_crc(g_676[i].f1, "g_676[i].f1", print_hash_value);
        transparent_crc(g_676[i].f2, "g_676[i].f2", print_hash_value);
        transparent_crc(g_676[i].f3, "g_676[i].f3", print_hash_value);
        transparent_crc(g_676[i].f4, "g_676[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_701, "g_701", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_716[i][j], "g_716[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_717[i][j][k].f0, "g_717[i][j][k].f0", print_hash_value);
                transparent_crc(g_717[i][j][k].f1, "g_717[i][j][k].f1", print_hash_value);
                transparent_crc(g_717[i][j][k].f2, "g_717[i][j][k].f2", print_hash_value);
                transparent_crc(g_717[i][j][k].f3, "g_717[i][j][k].f3", print_hash_value);
                transparent_crc(g_717[i][j][k].f4, "g_717[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_739.f0, "g_739.f0", print_hash_value);
    transparent_crc(g_739.f1, "g_739.f1", print_hash_value);
    transparent_crc(g_739.f2, "g_739.f2", print_hash_value);
    transparent_crc(g_739.f3, "g_739.f3", print_hash_value);
    transparent_crc(g_739.f4, "g_739.f4", print_hash_value);
    transparent_crc(g_740.f0, "g_740.f0", print_hash_value);
    transparent_crc(g_740.f1, "g_740.f1", print_hash_value);
    transparent_crc(g_740.f2, "g_740.f2", print_hash_value);
    transparent_crc(g_740.f3, "g_740.f3", print_hash_value);
    transparent_crc(g_740.f4, "g_740.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_752[i].f0, "g_752[i].f0", print_hash_value);
        transparent_crc(g_752[i].f1, "g_752[i].f1", print_hash_value);
        transparent_crc(g_752[i].f2, "g_752[i].f2", print_hash_value);
        transparent_crc(g_752[i].f3, "g_752[i].f3", print_hash_value);
        transparent_crc(g_752[i].f4, "g_752[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_851.f0, "g_851.f0", print_hash_value);
    transparent_crc(g_851.f1, "g_851.f1", print_hash_value);
    transparent_crc(g_851.f2, "g_851.f2", print_hash_value);
    transparent_crc(g_851.f3, "g_851.f3", print_hash_value);
    transparent_crc(g_851.f4, "g_851.f4", print_hash_value);
    transparent_crc(g_852.f0, "g_852.f0", print_hash_value);
    transparent_crc(g_852.f1, "g_852.f1", print_hash_value);
    transparent_crc(g_852.f2, "g_852.f2", print_hash_value);
    transparent_crc(g_852.f3, "g_852.f3", print_hash_value);
    transparent_crc(g_852.f4, "g_852.f4", print_hash_value);
    transparent_crc(g_858.f0, "g_858.f0", print_hash_value);
    transparent_crc(g_858.f1, "g_858.f1", print_hash_value);
    transparent_crc(g_858.f2, "g_858.f2", print_hash_value);
    transparent_crc(g_858.f3, "g_858.f3", print_hash_value);
    transparent_crc(g_858.f4, "g_858.f4", print_hash_value);
    transparent_crc(g_861, "g_861", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_875[i].f0, "g_875[i].f0", print_hash_value);
        transparent_crc(g_875[i].f1, "g_875[i].f1", print_hash_value);
        transparent_crc(g_875[i].f2, "g_875[i].f2", print_hash_value);
        transparent_crc(g_875[i].f3, "g_875[i].f3", print_hash_value);
        transparent_crc(g_875[i].f4, "g_875[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_876.f0, "g_876.f0", print_hash_value);
    transparent_crc(g_876.f1, "g_876.f1", print_hash_value);
    transparent_crc(g_876.f2, "g_876.f2", print_hash_value);
    transparent_crc(g_876.f3, "g_876.f3", print_hash_value);
    transparent_crc(g_876.f4, "g_876.f4", print_hash_value);
    transparent_crc(g_877.f0, "g_877.f0", print_hash_value);
    transparent_crc(g_877.f1, "g_877.f1", print_hash_value);
    transparent_crc(g_877.f2, "g_877.f2", print_hash_value);
    transparent_crc(g_877.f3, "g_877.f3", print_hash_value);
    transparent_crc(g_877.f4, "g_877.f4", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_878[i].f0, "g_878[i].f0", print_hash_value);
        transparent_crc(g_878[i].f1, "g_878[i].f1", print_hash_value);
        transparent_crc(g_878[i].f2, "g_878[i].f2", print_hash_value);
        transparent_crc(g_878[i].f3, "g_878[i].f3", print_hash_value);
        transparent_crc(g_878[i].f4, "g_878[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_959.f0, "g_959.f0", print_hash_value);
    transparent_crc(g_959.f1, "g_959.f1", print_hash_value);
    transparent_crc(g_959.f2, "g_959.f2", print_hash_value);
    transparent_crc(g_959.f3, "g_959.f3", print_hash_value);
    transparent_crc(g_959.f4, "g_959.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_990[i][j][k].f0, "g_990[i][j][k].f0", print_hash_value);
                transparent_crc(g_990[i][j][k].f1, "g_990[i][j][k].f1", print_hash_value);
                transparent_crc(g_990[i][j][k].f2, "g_990[i][j][k].f2", print_hash_value);
                transparent_crc(g_990[i][j][k].f3, "g_990[i][j][k].f3", print_hash_value);
                transparent_crc(g_990[i][j][k].f4, "g_990[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_991.f0, "g_991.f0", print_hash_value);
    transparent_crc(g_991.f1, "g_991.f1", print_hash_value);
    transparent_crc(g_991.f2, "g_991.f2", print_hash_value);
    transparent_crc(g_991.f3, "g_991.f3", print_hash_value);
    transparent_crc(g_991.f4, "g_991.f4", print_hash_value);
    transparent_crc(g_1000.f0, "g_1000.f0", print_hash_value);
    transparent_crc(g_1000.f1, "g_1000.f1", print_hash_value);
    transparent_crc(g_1000.f2, "g_1000.f2", print_hash_value);
    transparent_crc(g_1000.f3, "g_1000.f3", print_hash_value);
    transparent_crc(g_1000.f4, "g_1000.f4", print_hash_value);
    transparent_crc(g_1012.f0, "g_1012.f0", print_hash_value);
    transparent_crc(g_1012.f1, "g_1012.f1", print_hash_value);
    transparent_crc(g_1012.f2, "g_1012.f2", print_hash_value);
    transparent_crc(g_1012.f3, "g_1012.f3", print_hash_value);
    transparent_crc(g_1012.f4, "g_1012.f4", print_hash_value);
    transparent_crc(g_1013.f0, "g_1013.f0", print_hash_value);
    transparent_crc(g_1013.f1, "g_1013.f1", print_hash_value);
    transparent_crc(g_1013.f2, "g_1013.f2", print_hash_value);
    transparent_crc(g_1013.f3, "g_1013.f3", print_hash_value);
    transparent_crc(g_1013.f4, "g_1013.f4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1014[i][j][k].f0, "g_1014[i][j][k].f0", print_hash_value);
                transparent_crc(g_1014[i][j][k].f1, "g_1014[i][j][k].f1", print_hash_value);
                transparent_crc(g_1014[i][j][k].f2, "g_1014[i][j][k].f2", print_hash_value);
                transparent_crc(g_1014[i][j][k].f3, "g_1014[i][j][k].f3", print_hash_value);
                transparent_crc(g_1014[i][j][k].f4, "g_1014[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1033.f0, "g_1033.f0", print_hash_value);
    transparent_crc(g_1033.f1, "g_1033.f1", print_hash_value);
    transparent_crc(g_1033.f2, "g_1033.f2", print_hash_value);
    transparent_crc(g_1033.f3, "g_1033.f3", print_hash_value);
    transparent_crc(g_1033.f4, "g_1033.f4", print_hash_value);
    transparent_crc(g_1066.f0, "g_1066.f0", print_hash_value);
    transparent_crc(g_1066.f1, "g_1066.f1", print_hash_value);
    transparent_crc(g_1066.f2, "g_1066.f2", print_hash_value);
    transparent_crc(g_1066.f3, "g_1066.f3", print_hash_value);
    transparent_crc(g_1066.f4, "g_1066.f4", print_hash_value);
    transparent_crc(g_1067.f0, "g_1067.f0", print_hash_value);
    transparent_crc(g_1067.f1, "g_1067.f1", print_hash_value);
    transparent_crc(g_1067.f2, "g_1067.f2", print_hash_value);
    transparent_crc(g_1067.f3, "g_1067.f3", print_hash_value);
    transparent_crc(g_1067.f4, "g_1067.f4", print_hash_value);
    transparent_crc(g_1132, "g_1132", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1135[i].f0, "g_1135[i].f0", print_hash_value);
        transparent_crc(g_1135[i].f1, "g_1135[i].f1", print_hash_value);
        transparent_crc(g_1135[i].f2, "g_1135[i].f2", print_hash_value);
        transparent_crc(g_1135[i].f3, "g_1135[i].f3", print_hash_value);
        transparent_crc(g_1135[i].f4, "g_1135[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1138.f0, "g_1138.f0", print_hash_value);
    transparent_crc(g_1138.f1, "g_1138.f1", print_hash_value);
    transparent_crc(g_1138.f2, "g_1138.f2", print_hash_value);
    transparent_crc(g_1138.f3, "g_1138.f3", print_hash_value);
    transparent_crc(g_1138.f4, "g_1138.f4", print_hash_value);
    transparent_crc(g_1247.f0, "g_1247.f0", print_hash_value);
    transparent_crc(g_1247.f1, "g_1247.f1", print_hash_value);
    transparent_crc(g_1247.f2, "g_1247.f2", print_hash_value);
    transparent_crc(g_1247.f3, "g_1247.f3", print_hash_value);
    transparent_crc(g_1247.f4, "g_1247.f4", print_hash_value);
    transparent_crc(g_1248.f0, "g_1248.f0", print_hash_value);
    transparent_crc(g_1248.f1, "g_1248.f1", print_hash_value);
    transparent_crc(g_1248.f2, "g_1248.f2", print_hash_value);
    transparent_crc(g_1248.f3, "g_1248.f3", print_hash_value);
    transparent_crc(g_1248.f4, "g_1248.f4", print_hash_value);
    transparent_crc(g_1249.f0, "g_1249.f0", print_hash_value);
    transparent_crc(g_1249.f1, "g_1249.f1", print_hash_value);
    transparent_crc(g_1249.f2, "g_1249.f2", print_hash_value);
    transparent_crc(g_1249.f3, "g_1249.f3", print_hash_value);
    transparent_crc(g_1249.f4, "g_1249.f4", print_hash_value);
    transparent_crc(g_1274.f0, "g_1274.f0", print_hash_value);
    transparent_crc(g_1274.f1, "g_1274.f1", print_hash_value);
    transparent_crc(g_1274.f2, "g_1274.f2", print_hash_value);
    transparent_crc(g_1274.f3, "g_1274.f3", print_hash_value);
    transparent_crc(g_1274.f4, "g_1274.f4", print_hash_value);
    transparent_crc(g_1278.f0, "g_1278.f0", print_hash_value);
    transparent_crc(g_1278.f1, "g_1278.f1", print_hash_value);
    transparent_crc(g_1278.f2, "g_1278.f2", print_hash_value);
    transparent_crc(g_1278.f3, "g_1278.f3", print_hash_value);
    transparent_crc(g_1278.f4, "g_1278.f4", print_hash_value);
    transparent_crc(g_1332, "g_1332", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1355[i].f0, "g_1355[i].f0", print_hash_value);
        transparent_crc(g_1355[i].f1, "g_1355[i].f1", print_hash_value);
        transparent_crc(g_1355[i].f2, "g_1355[i].f2", print_hash_value);
        transparent_crc(g_1355[i].f3, "g_1355[i].f3", print_hash_value);
        transparent_crc(g_1355[i].f4, "g_1355[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1389.f0, "g_1389.f0", print_hash_value);
    transparent_crc(g_1389.f1, "g_1389.f1", print_hash_value);
    transparent_crc(g_1389.f2, "g_1389.f2", print_hash_value);
    transparent_crc(g_1389.f3, "g_1389.f3", print_hash_value);
    transparent_crc(g_1389.f4, "g_1389.f4", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_1415[i][j][k], "g_1415[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1418.f0, "g_1418.f0", print_hash_value);
    transparent_crc(g_1418.f1, "g_1418.f1", print_hash_value);
    transparent_crc(g_1418.f2, "g_1418.f2", print_hash_value);
    transparent_crc(g_1418.f3, "g_1418.f3", print_hash_value);
    transparent_crc(g_1418.f4, "g_1418.f4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1433[i][j][k].f0, "g_1433[i][j][k].f0", print_hash_value);
                transparent_crc(g_1433[i][j][k].f1, "g_1433[i][j][k].f1", print_hash_value);
                transparent_crc(g_1433[i][j][k].f2, "g_1433[i][j][k].f2", print_hash_value);
                transparent_crc(g_1433[i][j][k].f3, "g_1433[i][j][k].f3", print_hash_value);
                transparent_crc(g_1433[i][j][k].f4, "g_1433[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1452, "g_1452", print_hash_value);
    transparent_crc(g_1457.f0, "g_1457.f0", print_hash_value);
    transparent_crc(g_1457.f1, "g_1457.f1", print_hash_value);
    transparent_crc(g_1457.f2, "g_1457.f2", print_hash_value);
    transparent_crc(g_1457.f3, "g_1457.f3", print_hash_value);
    transparent_crc(g_1457.f4, "g_1457.f4", print_hash_value);
    transparent_crc(g_1460.f0, "g_1460.f0", print_hash_value);
    transparent_crc(g_1460.f1, "g_1460.f1", print_hash_value);
    transparent_crc(g_1460.f2, "g_1460.f2", print_hash_value);
    transparent_crc(g_1460.f3, "g_1460.f3", print_hash_value);
    transparent_crc(g_1460.f4, "g_1460.f4", print_hash_value);
    transparent_crc(g_1461.f0, "g_1461.f0", print_hash_value);
    transparent_crc(g_1461.f1, "g_1461.f1", print_hash_value);
    transparent_crc(g_1461.f2, "g_1461.f2", print_hash_value);
    transparent_crc(g_1461.f3, "g_1461.f3", print_hash_value);
    transparent_crc(g_1461.f4, "g_1461.f4", print_hash_value);
    transparent_crc(g_1464.f0, "g_1464.f0", print_hash_value);
    transparent_crc(g_1464.f1, "g_1464.f1", print_hash_value);
    transparent_crc(g_1464.f2, "g_1464.f2", print_hash_value);
    transparent_crc(g_1464.f3, "g_1464.f3", print_hash_value);
    transparent_crc(g_1464.f4, "g_1464.f4", print_hash_value);
    transparent_crc(g_1480.f0, "g_1480.f0", print_hash_value);
    transparent_crc(g_1480.f1, "g_1480.f1", print_hash_value);
    transparent_crc(g_1480.f2, "g_1480.f2", print_hash_value);
    transparent_crc(g_1480.f3, "g_1480.f3", print_hash_value);
    transparent_crc(g_1480.f4, "g_1480.f4", print_hash_value);
    transparent_crc(g_1485.f0, "g_1485.f0", print_hash_value);
    transparent_crc(g_1485.f1, "g_1485.f1", print_hash_value);
    transparent_crc(g_1485.f2, "g_1485.f2", print_hash_value);
    transparent_crc(g_1485.f3, "g_1485.f3", print_hash_value);
    transparent_crc(g_1485.f4, "g_1485.f4", print_hash_value);
    transparent_crc(g_1486.f0, "g_1486.f0", print_hash_value);
    transparent_crc(g_1486.f1, "g_1486.f1", print_hash_value);
    transparent_crc(g_1486.f2, "g_1486.f2", print_hash_value);
    transparent_crc(g_1486.f3, "g_1486.f3", print_hash_value);
    transparent_crc(g_1486.f4, "g_1486.f4", print_hash_value);
    transparent_crc(g_1531, "g_1531", print_hash_value);
    transparent_crc(g_1533, "g_1533", print_hash_value);
    transparent_crc(g_1549.f0, "g_1549.f0", print_hash_value);
    transparent_crc(g_1549.f1, "g_1549.f1", print_hash_value);
    transparent_crc(g_1549.f2, "g_1549.f2", print_hash_value);
    transparent_crc(g_1549.f3, "g_1549.f3", print_hash_value);
    transparent_crc(g_1549.f4, "g_1549.f4", print_hash_value);
    transparent_crc(g_1573.f0, "g_1573.f0", print_hash_value);
    transparent_crc(g_1573.f1, "g_1573.f1", print_hash_value);
    transparent_crc(g_1573.f2, "g_1573.f2", print_hash_value);
    transparent_crc(g_1573.f3, "g_1573.f3", print_hash_value);
    transparent_crc(g_1573.f4, "g_1573.f4", print_hash_value);
    transparent_crc(g_1601, "g_1601", print_hash_value);
    transparent_crc(g_1622, "g_1622", print_hash_value);
    transparent_crc(g_1648.f0, "g_1648.f0", print_hash_value);
    transparent_crc(g_1648.f1, "g_1648.f1", print_hash_value);
    transparent_crc(g_1648.f2, "g_1648.f2", print_hash_value);
    transparent_crc(g_1648.f3, "g_1648.f3", print_hash_value);
    transparent_crc(g_1648.f4, "g_1648.f4", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1659[i], "g_1659[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1700.f0, "g_1700.f0", print_hash_value);
    transparent_crc(g_1700.f1, "g_1700.f1", print_hash_value);
    transparent_crc(g_1700.f2, "g_1700.f2", print_hash_value);
    transparent_crc(g_1700.f3, "g_1700.f3", print_hash_value);
    transparent_crc(g_1700.f4, "g_1700.f4", print_hash_value);
    transparent_crc(g_1703.f0, "g_1703.f0", print_hash_value);
    transparent_crc(g_1703.f1, "g_1703.f1", print_hash_value);
    transparent_crc(g_1703.f2, "g_1703.f2", print_hash_value);
    transparent_crc(g_1703.f3, "g_1703.f3", print_hash_value);
    transparent_crc(g_1703.f4, "g_1703.f4", print_hash_value);
    transparent_crc(g_1744, "g_1744", print_hash_value);
    transparent_crc(g_1778.f0, "g_1778.f0", print_hash_value);
    transparent_crc(g_1778.f1, "g_1778.f1", print_hash_value);
    transparent_crc(g_1778.f2, "g_1778.f2", print_hash_value);
    transparent_crc(g_1778.f3, "g_1778.f3", print_hash_value);
    transparent_crc(g_1778.f4, "g_1778.f4", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1779[i].f0, "g_1779[i].f0", print_hash_value);
        transparent_crc(g_1779[i].f1, "g_1779[i].f1", print_hash_value);
        transparent_crc(g_1779[i].f2, "g_1779[i].f2", print_hash_value);
        transparent_crc(g_1779[i].f3, "g_1779[i].f3", print_hash_value);
        transparent_crc(g_1779[i].f4, "g_1779[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1797, "g_1797", print_hash_value);
    transparent_crc(g_1817.f0, "g_1817.f0", print_hash_value);
    transparent_crc(g_1817.f1, "g_1817.f1", print_hash_value);
    transparent_crc(g_1817.f2, "g_1817.f2", print_hash_value);
    transparent_crc(g_1817.f3, "g_1817.f3", print_hash_value);
    transparent_crc(g_1817.f4, "g_1817.f4", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1843[i][j][k].f0, "g_1843[i][j][k].f0", print_hash_value);
                transparent_crc(g_1843[i][j][k].f1, "g_1843[i][j][k].f1", print_hash_value);
                transparent_crc(g_1843[i][j][k].f2, "g_1843[i][j][k].f2", print_hash_value);
                transparent_crc(g_1843[i][j][k].f3, "g_1843[i][j][k].f3", print_hash_value);
                transparent_crc(g_1843[i][j][k].f4, "g_1843[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1844.f0, "g_1844.f0", print_hash_value);
    transparent_crc(g_1844.f1, "g_1844.f1", print_hash_value);
    transparent_crc(g_1844.f2, "g_1844.f2", print_hash_value);
    transparent_crc(g_1844.f3, "g_1844.f3", print_hash_value);
    transparent_crc(g_1844.f4, "g_1844.f4", print_hash_value);
    transparent_crc(g_1845.f0, "g_1845.f0", print_hash_value);
    transparent_crc(g_1845.f1, "g_1845.f1", print_hash_value);
    transparent_crc(g_1845.f2, "g_1845.f2", print_hash_value);
    transparent_crc(g_1845.f3, "g_1845.f3", print_hash_value);
    transparent_crc(g_1845.f4, "g_1845.f4", print_hash_value);
    transparent_crc(g_1846, "g_1846", print_hash_value);
    transparent_crc(g_1849.f0, "g_1849.f0", print_hash_value);
    transparent_crc(g_1849.f1, "g_1849.f1", print_hash_value);
    transparent_crc(g_1849.f2, "g_1849.f2", print_hash_value);
    transparent_crc(g_1849.f3, "g_1849.f3", print_hash_value);
    transparent_crc(g_1849.f4, "g_1849.f4", print_hash_value);
    transparent_crc(g_1852.f0, "g_1852.f0", print_hash_value);
    transparent_crc(g_1852.f1, "g_1852.f1", print_hash_value);
    transparent_crc(g_1852.f2, "g_1852.f2", print_hash_value);
    transparent_crc(g_1852.f3, "g_1852.f3", print_hash_value);
    transparent_crc(g_1852.f4, "g_1852.f4", print_hash_value);
    transparent_crc(g_1855, "g_1855", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1915[i], "g_1915[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1969[i].f0, "g_1969[i].f0", print_hash_value);
        transparent_crc(g_1969[i].f1, "g_1969[i].f1", print_hash_value);
        transparent_crc(g_1969[i].f2, "g_1969[i].f2", print_hash_value);
        transparent_crc(g_1969[i].f3, "g_1969[i].f3", print_hash_value);
        transparent_crc(g_1969[i].f4, "g_1969[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1970[i].f0, "g_1970[i].f0", print_hash_value);
        transparent_crc(g_1970[i].f1, "g_1970[i].f1", print_hash_value);
        transparent_crc(g_1970[i].f2, "g_1970[i].f2", print_hash_value);
        transparent_crc(g_1970[i].f3, "g_1970[i].f3", print_hash_value);
        transparent_crc(g_1970[i].f4, "g_1970[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1971.f0, "g_1971.f0", print_hash_value);
    transparent_crc(g_1971.f1, "g_1971.f1", print_hash_value);
    transparent_crc(g_1971.f2, "g_1971.f2", print_hash_value);
    transparent_crc(g_1971.f3, "g_1971.f3", print_hash_value);
    transparent_crc(g_1971.f4, "g_1971.f4", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1972[i].f0, "g_1972[i].f0", print_hash_value);
        transparent_crc(g_1972[i].f1, "g_1972[i].f1", print_hash_value);
        transparent_crc(g_1972[i].f2, "g_1972[i].f2", print_hash_value);
        transparent_crc(g_1972[i].f3, "g_1972[i].f3", print_hash_value);
        transparent_crc(g_1972[i].f4, "g_1972[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1975[i][j][k].f0, "g_1975[i][j][k].f0", print_hash_value);
                transparent_crc(g_1975[i][j][k].f1, "g_1975[i][j][k].f1", print_hash_value);
                transparent_crc(g_1975[i][j][k].f2, "g_1975[i][j][k].f2", print_hash_value);
                transparent_crc(g_1975[i][j][k].f3, "g_1975[i][j][k].f3", print_hash_value);
                transparent_crc(g_1975[i][j][k].f4, "g_1975[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1989[i][j][k].f0, "g_1989[i][j][k].f0", print_hash_value);
                transparent_crc(g_1989[i][j][k].f1, "g_1989[i][j][k].f1", print_hash_value);
                transparent_crc(g_1989[i][j][k].f2, "g_1989[i][j][k].f2", print_hash_value);
                transparent_crc(g_1989[i][j][k].f3, "g_1989[i][j][k].f3", print_hash_value);
                transparent_crc(g_1989[i][j][k].f4, "g_1989[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2007.f0, "g_2007.f0", print_hash_value);
    transparent_crc(g_2007.f1, "g_2007.f1", print_hash_value);
    transparent_crc(g_2007.f2, "g_2007.f2", print_hash_value);
    transparent_crc(g_2007.f3, "g_2007.f3", print_hash_value);
    transparent_crc(g_2007.f4, "g_2007.f4", print_hash_value);
    transparent_crc(g_2008.f0, "g_2008.f0", print_hash_value);
    transparent_crc(g_2008.f1, "g_2008.f1", print_hash_value);
    transparent_crc(g_2008.f2, "g_2008.f2", print_hash_value);
    transparent_crc(g_2008.f3, "g_2008.f3", print_hash_value);
    transparent_crc(g_2008.f4, "g_2008.f4", print_hash_value);
    transparent_crc(g_2009.f0, "g_2009.f0", print_hash_value);
    transparent_crc(g_2009.f1, "g_2009.f1", print_hash_value);
    transparent_crc(g_2009.f2, "g_2009.f2", print_hash_value);
    transparent_crc(g_2009.f3, "g_2009.f3", print_hash_value);
    transparent_crc(g_2009.f4, "g_2009.f4", print_hash_value);
    transparent_crc(g_2013.f0, "g_2013.f0", print_hash_value);
    transparent_crc(g_2013.f1, "g_2013.f1", print_hash_value);
    transparent_crc(g_2013.f2, "g_2013.f2", print_hash_value);
    transparent_crc(g_2013.f3, "g_2013.f3", print_hash_value);
    transparent_crc(g_2013.f4, "g_2013.f4", print_hash_value);
    transparent_crc(g_2014.f0, "g_2014.f0", print_hash_value);
    transparent_crc(g_2014.f1, "g_2014.f1", print_hash_value);
    transparent_crc(g_2014.f2, "g_2014.f2", print_hash_value);
    transparent_crc(g_2014.f3, "g_2014.f3", print_hash_value);
    transparent_crc(g_2014.f4, "g_2014.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2072[i], "g_2072[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2091[i], "g_2091[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2098, "g_2098", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2126[i].f0, "g_2126[i].f0", print_hash_value);
        transparent_crc(g_2126[i].f1, "g_2126[i].f1", print_hash_value);
        transparent_crc(g_2126[i].f2, "g_2126[i].f2", print_hash_value);
        transparent_crc(g_2126[i].f3, "g_2126[i].f3", print_hash_value);
        transparent_crc(g_2126[i].f4, "g_2126[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2127.f0, "g_2127.f0", print_hash_value);
    transparent_crc(g_2127.f1, "g_2127.f1", print_hash_value);
    transparent_crc(g_2127.f2, "g_2127.f2", print_hash_value);
    transparent_crc(g_2127.f3, "g_2127.f3", print_hash_value);
    transparent_crc(g_2127.f4, "g_2127.f4", print_hash_value);
    transparent_crc(g_2129.f0, "g_2129.f0", print_hash_value);
    transparent_crc(g_2129.f1, "g_2129.f1", print_hash_value);
    transparent_crc(g_2129.f2, "g_2129.f2", print_hash_value);
    transparent_crc(g_2129.f3, "g_2129.f3", print_hash_value);
    transparent_crc(g_2129.f4, "g_2129.f4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2132[i].f0, "g_2132[i].f0", print_hash_value);
        transparent_crc(g_2132[i].f1, "g_2132[i].f1", print_hash_value);
        transparent_crc(g_2132[i].f2, "g_2132[i].f2", print_hash_value);
        transparent_crc(g_2132[i].f3, "g_2132[i].f3", print_hash_value);
        transparent_crc(g_2132[i].f4, "g_2132[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2133.f0, "g_2133.f0", print_hash_value);
    transparent_crc(g_2133.f1, "g_2133.f1", print_hash_value);
    transparent_crc(g_2133.f2, "g_2133.f2", print_hash_value);
    transparent_crc(g_2133.f3, "g_2133.f3", print_hash_value);
    transparent_crc(g_2133.f4, "g_2133.f4", print_hash_value);
    transparent_crc(g_2166.f0, "g_2166.f0", print_hash_value);
    transparent_crc(g_2166.f1, "g_2166.f1", print_hash_value);
    transparent_crc(g_2166.f2, "g_2166.f2", print_hash_value);
    transparent_crc(g_2166.f3, "g_2166.f3", print_hash_value);
    transparent_crc(g_2166.f4, "g_2166.f4", print_hash_value);
    transparent_crc(g_2167.f0, "g_2167.f0", print_hash_value);
    transparent_crc(g_2167.f1, "g_2167.f1", print_hash_value);
    transparent_crc(g_2167.f2, "g_2167.f2", print_hash_value);
    transparent_crc(g_2167.f3, "g_2167.f3", print_hash_value);
    transparent_crc(g_2167.f4, "g_2167.f4", print_hash_value);
    transparent_crc(g_2194.f0, "g_2194.f0", print_hash_value);
    transparent_crc(g_2194.f1, "g_2194.f1", print_hash_value);
    transparent_crc(g_2194.f2, "g_2194.f2", print_hash_value);
    transparent_crc(g_2194.f3, "g_2194.f3", print_hash_value);
    transparent_crc(g_2194.f4, "g_2194.f4", print_hash_value);
    transparent_crc(g_2237.f0, "g_2237.f0", print_hash_value);
    transparent_crc(g_2237.f1, "g_2237.f1", print_hash_value);
    transparent_crc(g_2237.f2, "g_2237.f2", print_hash_value);
    transparent_crc(g_2237.f3, "g_2237.f3", print_hash_value);
    transparent_crc(g_2237.f4, "g_2237.f4", print_hash_value);
    transparent_crc(g_2247, "g_2247", print_hash_value);
    transparent_crc(g_2249, "g_2249", print_hash_value);
    transparent_crc(g_2271, "g_2271", print_hash_value);
    transparent_crc(g_2307, "g_2307", print_hash_value);
    transparent_crc(g_2342, "g_2342", print_hash_value);
    transparent_crc(g_2414.f0, "g_2414.f0", print_hash_value);
    transparent_crc(g_2414.f1, "g_2414.f1", print_hash_value);
    transparent_crc(g_2414.f2, "g_2414.f2", print_hash_value);
    transparent_crc(g_2414.f3, "g_2414.f3", print_hash_value);
    transparent_crc(g_2414.f4, "g_2414.f4", print_hash_value);
    transparent_crc(g_2415.f0, "g_2415.f0", print_hash_value);
    transparent_crc(g_2415.f1, "g_2415.f1", print_hash_value);
    transparent_crc(g_2415.f2, "g_2415.f2", print_hash_value);
    transparent_crc(g_2415.f3, "g_2415.f3", print_hash_value);
    transparent_crc(g_2415.f4, "g_2415.f4", print_hash_value);
    transparent_crc(g_2430, "g_2430", print_hash_value);
    transparent_crc(g_2492, "g_2492", print_hash_value);
    transparent_crc(g_2519, "g_2519", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2535[i], "g_2535[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2537, "g_2537", print_hash_value);
    transparent_crc(g_2566, "g_2566", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_2592[i][j], "g_2592[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
