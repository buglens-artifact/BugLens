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
   signed f0 : 25;
   unsigned f1 : 10;
   unsigned f2 : 4;
   signed : 0;
   unsigned f3 : 15;
   signed f4 : 10;
};

struct S1 {
   const unsigned f0 : 26;
   unsigned f1 : 25;
   unsigned f2 : 21;
   char f3;
};

struct S2 {
   short f0;
   int f1;
};


static short g_2 = 0L;
static unsigned short g_6 = 0xF82DL;
static struct S0 g_28 = {3121,28,2,59,19};
static unsigned short g_30 = 4UL;
static unsigned short *g_29 = &g_30;
static unsigned char g_32 = 0UL;
static short g_57 = 0x7CAFL;
static char g_60 = 0x05L;
static int g_62 = 0x4A47BFE1L;
static int g_85[7] = {0x3CAE23F1L,0x532CF2D0L,0x3CAE23F1L,0x3CAE23F1L,0x532CF2D0L,0x3CAE23F1L,0x3CAE23F1L};
static unsigned g_106[6][10][4] = {{{0x5491D3E5L,0x59E1138FL,0x59E1138FL,0x5491D3E5L},{0xB9149043L,0x7789590AL,0xC72F990AL,0x1FBC6ABAL},{4294967293UL,0UL,0x5491D3E5L,4294967295UL},{0x5535B230L,4294967293UL,0xAA38A106L,4294967295UL},{0xF1D34AEDL,0UL,0x840A54B7L,0x1FBC6ABAL},{0x59E1138FL,0x7789590AL,0xF1D34AEDL,0x5491D3E5L},{0x1F813142L,0x59E1138FL,0x222830CFL,0x7334A1C8L},{6UL,0xAA38A106L,4294967295UL,0xAA38A106L},{0xBAF6D2A3L,4294967295UL,4294967293UL,0UL},{0x7AF78988L,1UL,0UL,6UL}},{{0x4F9D1991L,4294967293UL,4294967295UL,0x840A54B7L},{0x4F9D1991L,0xC3AFA74DL,0x5535B230L,0xC72F990AL},{0xC72F990AL,0x840A54B7L,0x59E1138FL,0x7334A1C8L},{0xEDC0E594L,4294967293UL,0xBAF6D2A3L,0x1F813142L},{4294967293UL,0xBAF6D2A3L,0xF1D34AEDL,0xF1D34AEDL},{0x7334A1C8L,0x7334A1C8L,0UL,0xAA38A106L},{6UL,0x7789590AL,0x222830CFL,4294967295UL},{0UL,0x5491D3E5L,4294967295UL,0x222830CFL},{0xC3AFA74DL,0x5491D3E5L,0xB9149043L,4294967295UL},{0x5491D3E5L,0x7789590AL,0x1F813142L,0xAA38A106L}},{{6UL,0x7334A1C8L,6UL,0xF1D34AEDL},{0xB9149043L,0xBAF6D2A3L,0x7AF78988L,0x1F813142L},{0x7789590AL,4294967293UL,0x7789590AL,0x7334A1C8L},{0x1F813142L,0x840A54B7L,4294967293UL,0xC72F990AL},{4294967295UL,0xC3AFA74DL,0x1FBC6ABAL,0x840A54B7L},{0x406AF2D1L,4294967293UL,0x1FBC6ABAL,6UL},{4294967295UL,0xAA38A106L,4294967293UL,0x5535B230L},{0x1F813142L,4294967295UL,0x7789590AL,4294967295UL},{0x7789590AL,4294967295UL,0x7AF78988L,0x4F9D1991L},{0xB9149043L,6UL,6UL,0xB9149043L}},{{6UL,4294967295UL,0x1F813142L,1UL},{0x5491D3E5L,0x7AF78988L,0xB9149043L,4294967295UL},{0xC3AFA74DL,0x59E1138FL,4294967295UL,4294967295UL},{0UL,0x7AF78988L,0x5491D3E5L,0UL},{0x7334A1C8L,0x840A54B7L,6UL,0UL},{0x1FBC6ABAL,0x7334A1C8L,0xB9149043L,1UL},{0xC72F990AL,0xC3AFA74DL,0x7789590AL,0xC3AFA74DL},{4294967295UL,0x406AF2D1L,0x1F813142L,4294967295UL},{0x59E1138FL,0x5535B230L,4294967295UL,0x7334A1C8L},{1UL,0xC72F990AL,0x406AF2D1L,4294967293UL}},{{1UL,4294967295UL,4294967295UL,0x59E1138FL},{0x59E1138FL,4294967293UL,0x1F813142L,0x1FBC6ABAL},{4294967295UL,0x222830CFL,0x7789590AL,6UL},{0xC72F990AL,0x7789590AL,0xB9149043L,0xB9149043L},{0x1FBC6ABAL,0x1FBC6ABAL,6UL,0x5535B230L},{0x7334A1C8L,0xEDC0E594L,0x5491D3E5L,0x840A54B7L},{6UL,0xF1D34AEDL,0xC3AFA74DL,0x5491D3E5L},{4294967295UL,0xF1D34AEDL,0UL,0x840A54B7L},{0xF1D34AEDL,0xEDC0E594L,6UL,0x5535B230L},{0x7AF78988L,0x1FBC6ABAL,0x7334A1C8L,0xB9149043L}},{{0UL,0x7789590AL,4294967293UL,6UL},{0xEDC0E594L,0x222830CFL,0xEDC0E594L,0x1FBC6ABAL},{6UL,4294967293UL,0xC72F990AL,0x59E1138FL},{0xC3AFA74DL,4294967295UL,0x4F9D1991L,4294967293UL},{0xBAF6D2A3L,0xC72F990AL,0x4F9D1991L,0x7334A1C8L},{0xC3AFA74DL,0x5535B230L,0xC72F990AL,4294967295UL},{6UL,0x406AF2D1L,0xEDC0E594L,0xC3AFA74DL},{0xEDC0E594L,0xC3AFA74DL,0x59E1138FL,0xAA38A106L},{0x7AF78988L,0x4F9D1991L,0x4F9D1991L,0x7AF78988L},{0xC72F990AL,0x222830CFL,0x1FBC6ABAL,0x5535B230L}}};
static struct S2 g_120[5][8] = {{{0x4C53L,6L},{0x9668L,0x9673AEC1L},{0x9668L,0x9673AEC1L},{0x4C53L,6L},{0x876FL,0x4ADAB247L},{0x4C53L,6L},{0x9668L,0x9673AEC1L},{0x9668L,0x9673AEC1L}},{{0x9668L,0x9673AEC1L},{0x876FL,0x4ADAB247L},{0L,-7L},{0L,-7L},{0x876FL,0x4ADAB247L},{0x9668L,0x9673AEC1L},{0x876FL,0x4ADAB247L},{0L,-7L}},{{0x4C53L,6L},{0x876FL,0x4ADAB247L},{0x4C53L,6L},{0x9668L,0x9673AEC1L},{0x9668L,0x9673AEC1L},{0x4C53L,6L},{0x876FL,0x4ADAB247L},{0x4C53L,6L}},{{0L,0xB5E051ACL},{0x9668L,0x9673AEC1L},{0L,-7L},{0x9668L,0x9673AEC1L},{0L,0xB5E051ACL},{0L,0xB5E051ACL},{0x9668L,0x9673AEC1L},{0L,-7L}},{{0L,0xB5E051ACL},{0L,0xB5E051ACL},{0x9668L,0x9673AEC1L},{0L,-7L},{0x9668L,0x9673AEC1L},{0L,0xB5E051ACL},{0L,0xB5E051ACL},{0x9668L,0x9673AEC1L}}};
static struct S1 g_123 = {436,5497,308,0xC1L};
static int *g_128 = (void*)0;
static struct S2 g_140[4] = {{0L,1L},{0L,1L},{0L,1L},{0L,1L}};
static struct S2 g_144 = {0xE4B1L,0x275ACE0FL};
static unsigned short g_159 = 65535UL;
static int g_182 = (-2L);
static struct S2 *g_226 = &g_140[0];
static struct S2 **g_225 = &g_226;
static unsigned char g_238 = 248UL;
static unsigned short *g_247 = &g_30;
static unsigned short g_305 = 1UL;
static unsigned short g_360[3] = {0x8B2AL,0x8B2AL,0x8B2AL};
static struct S1 g_398 = {3985,3084,1291,0xE9L};
static unsigned g_415[2] = {0xDB3C57DDL,0xDB3C57DDL};
static struct S0 g_421[9] = {{1766,17,3,131,15},{-4530,1,3,81,-26},{-4530,1,3,81,-26},{1766,17,3,131,15},{-4530,1,3,81,-26},{-4530,1,3,81,-26},{1766,17,3,131,15},{-4530,1,3,81,-26},{-4530,1,3,81,-26}};
static int *g_429 = &g_140[2].f1;
static int g_432 = 0x401D64C4L;
static struct S2 *g_471 = &g_144;
static const int g_485[10] = {0x66BFB0F4L,0x66BFB0F4L,0x66BFB0F4L,0x66BFB0F4L,0x66BFB0F4L,0x66BFB0F4L,0x66BFB0F4L,0x66BFB0F4L,0x66BFB0F4L,0x66BFB0F4L};
static struct S2 ** const g_501 = &g_471;



static unsigned func_1(void);
static char func_18(struct S2 p_19, unsigned p_20, int p_21, unsigned short * p_22, unsigned short * p_23);
static struct S2 func_24(struct S0 p_25, unsigned short * p_26, unsigned short * p_27);
static unsigned short * func_33(unsigned short p_34, short p_35, short p_36, char p_37);
static struct S1 func_38(unsigned short * p_39, unsigned char * p_40, struct S1 p_41, unsigned char * p_42, int p_43);
static struct S1 func_47(unsigned short p_48, unsigned char p_49, unsigned char * p_50, unsigned short * p_51);
static int * func_72(short * p_73, unsigned short * const p_74, unsigned char * const p_75);
static short * func_76(char p_77);
static struct S1 * func_110(unsigned short ** p_111, struct S2 p_112, struct S2 p_113, struct S0 p_114, unsigned short ** p_115);
static unsigned short ** func_116(struct S2 p_117, struct S1 * p_118, unsigned short ** p_119);
static unsigned func_1(void)
{
    unsigned short *l_5[2][2] = {{&g_6,&g_6},{&g_6,&g_6}};
    int l_7 = 0x312FBB6BL;
    int l_8 = 0x33037736L;
    int l_9 = 0x4F98CAFAL;
    int l_10 = 0x65969A22L;
    int l_11 = 0x38EC3268L;
    unsigned char *l_31 = &g_32;
    unsigned short **l_44 = &l_5[0][1];
    unsigned short **l_45 = (void*)0;
    unsigned short *l_46 = &g_30;
    short *l_56 = &g_57;
    int *l_402 = (void*)0;
    int *l_403 = &g_85[1];
    int **l_410 = &g_128;
    int ***l_409 = &l_410;
    struct S2 l_411 = {0xCACCL,-3L};
    int l_417 = 0xF8B15B02L;
    const unsigned short l_420 = 0xA74FL;
    int l_445 = 0x24F6FBA8L;
    unsigned short l_463 = 0x27FEL;
    const int l_482 = 0xA294FC97L;
    int l_496 = (-1L);
    unsigned short l_505 = 0xF57AL;
    unsigned short *l_506 = &l_505;
    int i, j;
    if (((*l_403) = (g_2 < ((*l_31) = (safe_mul_func_uint16_t_u_u((g_6++), (safe_add_func_uint32_t_u_u((func_18(func_24(g_28, g_29, (((*l_31) = 255UL) , func_33((((func_38((l_46 = ((*l_44) = (void*)0)), &g_32, func_47((((((((0x8F53L <= ((!((*g_29)--)) < ((((((((*l_56) = 0x4814L) <= (((((g_2 , (void*)0) != &g_29) == 0UL) == g_28.f4) > l_7)) ^ g_28.f2) >= g_32) & g_28.f0) , &g_32) != l_31))) < g_32) , 4UL) && g_28.f1) != g_2) != l_11) > l_10), l_10, &g_32, g_29), l_31, l_10) , g_106[3][4][1]) < 0x2BL) == 0x415E38BBL), l_7, g_123.f0, g_123.f1))), g_398.f1, g_398.f0, g_29, g_29) < 0UL), g_2))))))))
    {
        int l_404 = (-2L);
        l_404 |= g_6;
    }
    else
    {
        int **l_408 = &g_128;
        int ***l_407 = &l_408;
        unsigned *l_414 = &g_415[0];
        unsigned short *l_416[3];
        unsigned short *l_418 = &g_360[1];
        struct S2 l_419[9] = {{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}};
        int i;
        for (i = 0; i < 3; i++)
            l_416[i] = &g_6;
        g_85[6] ^= (g_120[3][1].f0 ^ (safe_add_func_uint8_t_u_u((l_407 != (g_238 , l_409)), ((func_18(l_411, ((*l_414) &= ((safe_sub_func_uint32_t_u_u(0x417460DCL, (g_123.f3 || (g_106[0][4][0] , 254UL)))) <= g_360[1])), g_182, l_416[2], &g_159) > l_417) >= g_62))));
        (**l_407) = func_72(((((g_28.f2 != ((*l_403) = g_140[2].f1)) || (func_18(l_411, g_85[3], g_62, l_418, l_416[2]) , func_18(l_419[0], g_6, g_238, &g_159, (*l_44)))) != l_420) , &g_57), &g_305, l_31);
    }
    g_28 = (g_421[7] = g_28);
    if (((*l_403) = (0xF8L == g_238)))
    {
        unsigned char l_435 = 1UL;
        for (g_398.f3 = 0; (g_398.f3 >= 20); g_398.f3 = safe_add_func_uint8_t_u_u(g_398.f3, 1))
        {
            int *l_426 = &l_8;
            for (l_417 = (-2); (l_417 <= 27); l_417++)
            {
                l_426 = ((*l_410) = l_426);
                if ((*l_426))
                    break;
                if (((*l_426) && (**l_410)))
                {
                    (*l_410) = l_426;
                }
                else
                {
                    for (g_305 = 0; (g_305 > 5); g_305++)
                    {
                        if ((*g_128))
                            break;
                    }
                }
                for (g_144.f1 = 0; g_144.f1 < 7; g_144.f1 += 1)
                {
                    g_85[g_144.f1] = 0L;
                }
            }
        }
        g_429 = ((**l_409) = &g_62);
        (***l_409) = ((safe_sub_func_int8_t_s_s(1L, ((g_432 ^ ((*g_429) == g_398.f3)) < (***l_409)))) && (safe_div_func_int16_t_s_s((l_435 , l_435), 2UL)));
    }
    else
    {
        struct S0 *l_436 = &g_421[2];
        int l_460 = 7L;
        int l_462 = 0xD068A43EL;
        short l_491 = (-2L);
        int l_492 = 0x8BC4EBF2L;
        (*l_436) = g_28;
        (*l_436) = (*l_436);
        for (g_60 = 0; (g_60 >= 18); g_60++)
        {
            const int l_444[6][2] = {{(-3L),0xB359D00EL},{0x09755797L,0xB359D00EL},{0xB359D00EL,4L},{(-3L),(-3L)},{(-3L),4L},{0xB359D00EL,0x09755797L}};
            int *l_446 = &l_10;
            int *l_447 = &l_7;
            int *l_448 = &g_144.f1;
            int *l_449 = &g_120[3][1].f1;
            int *l_450 = &g_85[4];
            int *l_451 = &g_140[2].f1;
            int *l_452 = &g_432;
            int *l_453 = &g_144.f1;
            int *l_454 = &g_62;
            int *l_455 = &g_85[2];
            int *l_456 = &l_411.f1;
            int l_457 = (-1L);
            int *l_458 = &l_9;
            int *l_459 = &l_7;
            int *l_461[3][1];
            unsigned short *l_468 = &l_463;
            struct S1 l_472 = {2361,3309,349,1L};
            unsigned l_481 = 0x2CBBFEC5L;
            unsigned char l_498 = 0x4FL;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_461[i][j] = &l_460;
            }
            for (g_57 = (-29); (g_57 < (-20)); g_57 = safe_add_func_uint16_t_u_u(g_57, 6))
            {
                struct S2 l_441 = {0xA810L,0xA6A65017L};
                struct S2 *l_442 = (void*)0;
                struct S2 *l_443[5][1] = {{&g_140[3]},{&g_140[0]},{&g_140[3]},{&g_140[0]},{&g_140[3]}};
                int i, j;
                g_140[0] = l_441;
                return g_421[7].f1;
            }
            if (l_444[4][1])
                break;
            l_463++;
            for (g_432 = 14; (g_432 <= (-30)); g_432 = safe_sub_func_int16_t_s_s(g_432, 5))
            {
                unsigned l_487[10][6][4] = {{{0UL,0x4146D6C0L,4294967295UL,4294967294UL},{4294967294UL,0x720B0BD7L,1UL,0x4146D6C0L},{0UL,7UL,4294967295UL,5UL},{4294967295UL,5UL,4294967295UL,7UL},{0UL,0x4146D6C0L,1UL,0x720B0BD7L},{4294967294UL,4294967294UL,4294967295UL,0x4146D6C0L}},{{0UL,0xCFF36F15L,4294967295UL,4294967291UL},{4294967294UL,5UL,1UL,0xCFF36F15L},{0UL,0xDD8FB3B2L,4294967295UL,0x720B0BD7L},{4294967295UL,0x720B0BD7L,4294967295UL,0xDD8FB3B2L},{0UL,0xCFF36F15L,1UL,5UL},{4294967294UL,4294967291UL,4294967295UL,0xCFF36F15L}},{{0UL,0x4146D6C0L,4294967295UL,4294967294UL},{4294967294UL,0x720B0BD7L,1UL,0x4146D6C0L},{0UL,7UL,4294967295UL,5UL},{4294967295UL,5UL,4294967295UL,7UL},{0UL,0x4146D6C0L,1UL,0x720B0BD7L},{4294967294UL,4294967294UL,4294967295UL,0x4146D6C0L}},{{0UL,0xCFF36F15L,4294967295UL,4294967291UL},{4294967294UL,5UL,1UL,0xCFF36F15L},{0UL,0xDD8FB3B2L,1UL,4294967294UL},{1UL,4294967294UL,1UL,1UL},{0UL,7UL,4294967294UL,4294967291UL},{4294967295UL,0x18B42F10L,1UL,7UL}},{{0x03546CDDL,0xDD8FB3B2L,1UL,0UL},{4294967295UL,4294967294UL,4294967294UL,0xDD8FB3B2L},{0UL,4294967295UL,1UL,4294967291UL},{1UL,4294967291UL,1UL,4294967295UL},{0UL,0xDD8FB3B2L,4294967294UL,4294967294UL},{4294967295UL,0UL,1UL,0xDD8FB3B2L}},{{0x03546CDDL,7UL,1UL,0x18B42F10L},{4294967295UL,4294967291UL,4294967294UL,7UL},{0UL,1UL,1UL,4294967294UL},{1UL,4294967294UL,1UL,1UL},{0UL,7UL,4294967294UL,4294967291UL},{4294967295UL,0x18B42F10L,1UL,7UL}},{{0x03546CDDL,0xDD8FB3B2L,1UL,0UL},{4294967295UL,4294967294UL,4294967294UL,0xDD8FB3B2L},{0UL,4294967295UL,1UL,4294967291UL},{1UL,4294967291UL,1UL,4294967295UL},{0UL,0xDD8FB3B2L,4294967294UL,4294967294UL},{4294967295UL,0UL,1UL,0xDD8FB3B2L}},{{0x03546CDDL,7UL,1UL,0x18B42F10L},{4294967295UL,4294967291UL,4294967294UL,7UL},{0UL,1UL,1UL,4294967294UL},{1UL,4294967294UL,1UL,1UL},{0UL,7UL,4294967294UL,4294967291UL},{4294967295UL,0x18B42F10L,1UL,7UL}},{{0x03546CDDL,0xDD8FB3B2L,1UL,0UL},{4294967295UL,4294967294UL,4294967294UL,0xDD8FB3B2L},{0UL,4294967295UL,1UL,4294967291UL},{1UL,4294967291UL,1UL,4294967295UL},{0UL,0xDD8FB3B2L,4294967294UL,4294967294UL},{4294967295UL,0UL,1UL,0xDD8FB3B2L}},{{0x03546CDDL,7UL,1UL,0x18B42F10L},{4294967295UL,4294967291UL,4294967294UL,7UL},{0UL,1UL,1UL,4294967294UL},{1UL,4294967294UL,1UL,1UL},{0UL,7UL,4294967294UL,4294967291UL},{4294967295UL,0x18B42F10L,1UL,7UL}}};
                int l_490 = 0x8E01BE80L;
                char *l_504 = (void*)0;
                int i, j, k;
                for (g_57 = 1; (g_57 >= 0); g_57 -= 1)
                {
                    struct S2 *l_470 = (void*)0;
                    struct S2 **l_469[5][7] = {{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470}};
                    int l_486 = 0xC71CA7A1L;
                    int l_494 = 0L;
                    int l_497 = 0x654CB62CL;
                    int i, j;
                    (*l_454) = (func_18(g_120[(g_57 + 3)][(g_57 + 4)], g_85[5], g_123.f1, &g_159, l_468) | (g_120[(g_57 + 3)][(g_57 + 4)].f1 , ((*g_247) = (*g_29))));
                    g_471 = ((*g_225) = (*g_225));
                    for (l_460 = 1; (l_460 >= 0); l_460 -= 1)
                    {
                        short l_493 = (-9L);
                        int l_495[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_495[i] = 0L;
                        (*l_458) = ((l_472 , (safe_lshift_func_int16_t_s_u(((*g_429) ^ (0x521CC9D5L >= (-5L))), 10))) == ((g_123.f3 = (((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_481 <= g_28.f1), (l_482 & 4294967295UL))), (safe_rshift_func_int16_t_s_s(g_485[3], (*l_403))))) >= (*g_429)) , g_6)) == g_106[3][8][0]));
                        --l_487[5][1][1];
                        l_498--;
                    }
                }
                (*l_447) ^= ((0UL & (g_123.f3 = (((void*)0 != g_501) || ((*g_247)--)))) == g_28.f3);
            }
        }
        (*g_429) ^= func_18(l_411, l_505, g_144.f1, l_506, &g_305);
    }
    return g_60;
}







static char func_18(struct S2 p_19, unsigned p_20, int p_21, unsigned short * p_22, unsigned short * p_23)
{
    int *l_400[7][7] = {{(void*)0,&g_62,(void*)0,&g_144.f1,&g_120[3][1].f1,(void*)0,(void*)0},{&g_85[0],&g_140[2].f1,(void*)0,&g_144.f1,(void*)0,&g_140[2].f1,&g_85[0]},{&g_120[3][1].f1,&g_144.f1,&g_140[2].f1,(void*)0,(void*)0,(void*)0,&g_62},{&g_62,(void*)0,&g_144.f1,(void*)0,&g_120[3][1].f1,&g_120[3][1].f1,(void*)0},{&g_140[2].f1,&g_140[2].f1,&g_140[2].f1,&g_140[2].f1,(void*)0,&g_62,(void*)0},{&g_140[2].f1,(void*)0,(void*)0,(void*)0,&g_62,&g_140[2].f1,&g_62},{&g_62,&g_120[3][1].f1,(void*)0,(void*)0,&g_120[3][1].f1,&g_62,(void*)0}};
    int **l_401[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_401[i] = &l_400[6][6];
    g_128 = l_400[6][6];
    return p_19.f1;
}







static struct S2 func_24(struct S0 p_25, unsigned short * p_26, unsigned short * p_27)
{
    struct S2 l_372 = {0L,5L};
    struct S2 *l_373 = (void*)0;
    struct S2 *l_374[2][7] = {{&g_140[1],&g_120[3][1],&g_140[1],&g_120[3][1],&g_140[1],&g_120[3][1],&g_140[1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int *l_375 = &g_140[2].f1;
    int **l_376 = &l_375;
    char *l_394[3];
    unsigned l_395 = 1UL;
    struct S1 *l_397 = &g_398;
    struct S2 l_399 = {1L,0L};
    int i, j;
    for (i = 0; i < 3; i++)
        l_394[i] = &g_60;
    g_120[3][1] = l_372;
    if (l_372.f0)
        goto lbl_377;
lbl_377:
    (*l_376) = l_375;
    if ((safe_sub_func_int16_t_s_s(0x8C1FL, (g_140[2] , ((*p_27) = (safe_div_func_int8_t_s_s(((*l_375) <= (safe_lshift_func_int8_t_s_u(p_25.f1, 7))), (safe_lshift_func_uint8_t_u_s((g_159 ^ (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((((l_395 = (safe_lshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((g_123 , 1L) == (p_25 , (((**l_376) == (**l_376)) <= p_25.f3))), (*p_27))) >= 8L), (*l_375)))) || (**l_376)) & (*g_247)), 1L)), g_123.f3))), 0)))))))))
    {
        if (l_372.f0)
            goto lbl_377;
    }
    else
    {
        struct S1 * const l_396 = (void*)0;
        l_397 = l_396;
        (*l_376) = (void*)0;
    }
    (*l_376) = (*l_376);
    return l_399;
}







static unsigned short * func_33(unsigned short p_34, short p_35, short p_36, char p_37)
{
    const struct S0 *l_364 = (void*)0;
    const struct S0 **l_365 = &l_364;
    int **l_366 = &g_128;
    int ***l_367 = &l_366;
    int **l_368 = &g_128;
    unsigned char *l_369 = (void*)0;
    int *l_370[2];
    unsigned short *l_371 = &g_159;
    int i;
    for (i = 0; i < 2; i++)
        l_370[i] = &g_62;
    g_140[2].f1 = ((((*l_365) = l_364) == (void*)0) >= (((((((*l_367) = l_366) != (p_34 , l_368)) <= p_34) && ((void*)0 == l_369)) ^ p_34) , p_35));
    for (g_238 = 0; (g_238 <= 2); g_238 += 1)
    {
        return &g_30;
    }
    return l_371;
}







static struct S1 func_38(unsigned short * p_39, unsigned char * p_40, struct S1 p_41, unsigned char * p_42, int p_43)
{
    struct S1 l_363 = {2916,3201,562,0x43L};
    return l_363;
}







static struct S1 func_47(unsigned short p_48, unsigned char p_49, unsigned char * p_50, unsigned short * p_51)
{
    unsigned short l_64 = 65535UL;
    unsigned short * const l_82[4] = {&g_30,&g_30,&g_30,&g_30};
    int l_250[5][10] = {{0x10966CEFL,0L,0x10966CEFL,0xB1D1395BL,0x64149D98L,0x64149D98L,0xB1D1395BL,0x10966CEFL,0L,0x10966CEFL},{0x10966CEFL,1L,0L,0xAD1DF44CL,0L,1L,0x10966CEFL,0x10966CEFL,1L,0L},{1L,0x10966CEFL,0x10966CEFL,1L,0L,0xAD1DF44CL,0L,(-1L),1L,1L},{0x64149D98L,1L,0xAD1DF44CL,0xB1D1395BL,0xB1D1395BL,0xAD1DF44CL,1L,0x64149D98L,1L,0xAD1DF44CL},{0x10966CEFL,(-1L),0xB1D1395BL,(-1L),0x10966CEFL,0xAD1DF44CL,0xAD1DF44CL,0x10966CEFL,(-1L),0xB1D1395BL}};
    unsigned l_273[2];
    struct S0 *l_282[4];
    struct S1 l_297 = {4533,5493,579,-1L};
    unsigned *l_298 = &g_106[3][8][0];
    struct S0 **l_301 = &l_282[0];
    int l_330 = (-1L);
    struct S2 *l_354 = (void*)0;
    int i, j;
    for (i = 0; i < 2; i++)
        l_273[i] = 0x1FB9A1B0L;
    for (i = 0; i < 4; i++)
        l_282[i] = &g_28;
    for (g_57 = 0; (g_57 != (-27)); g_57 = safe_sub_func_int8_t_s_s(g_57, 1))
    {
        int *l_61 = &g_62;
        int *l_63 = &g_62;
        --l_64;
    }
    for (g_60 = (-18); (g_60 == (-11)); g_60 = safe_add_func_int32_t_s_s(g_60, 3))
    {
        char l_78[6];
        int l_249 = 1L;
        int l_258 = (-1L);
        int l_260 = 5L;
        short l_261 = 0L;
        char l_262 = 0xBAL;
        int l_263 = 4L;
        int l_264 = 0L;
        int l_265 = 0x9D54468DL;
        int l_266 = (-6L);
        int l_267 = 1L;
        int l_268 = 0xF79D9A95L;
        int l_269 = 0xE4122003L;
        int l_270 = (-7L);
        int l_271 = 0xC120B9FAL;
        int l_272[8][6][5] = {{{0xEE89CEA3L,1L,2L,(-1L),0xEFEFDCD9L},{1L,0xE7623765L,1L,(-1L),(-1L)},{0xB4556F28L,1L,(-1L),(-1L),0L},{1L,9L,1L,1L,1L},{0xEE89CEA3L,1L,2L,1L,0xEFEFDCD9L},{1L,0xE7623765L,9L,(-1L),1L}},{{0xB4556F28L,1L,(-1L),1L,0L},{1L,9L,9L,1L,(-1L)},{0xEE89CEA3L,1L,2L,(-1L),0xEFEFDCD9L},{1L,0xE7623765L,1L,(-1L),(-1L)},{0xB4556F28L,1L,(-1L),(-1L),0L},{1L,9L,1L,1L,1L}},{{0xEE89CEA3L,1L,2L,1L,0xEFEFDCD9L},{1L,0xE7623765L,9L,(-1L),1L},{0xB4556F28L,1L,(-4L),1L,0x9C0376B8L},{0xE7623765L,0x36C2365EL,0x36C2365EL,0xE7623765L,1L},{2L,1L,0xBA3C33D0L,1L,2L},{0xE7623765L,(-1L),0x22407312L,9L,1L}},{{0xF72AC034L,0x4DAB2874L,(-4L),1L,0x9C0376B8L},{0xF65F2EC5L,0x36C2365EL,0x22407312L,0xE7623765L,0xFD947B1EL},{2L,0x4DAB2874L,0xBA3C33D0L,1L,2L},{0xF65F2EC5L,(-1L),0x36C2365EL,9L,0xFD947B1EL},{0xF72AC034L,1L,(-4L),1L,0x9C0376B8L},{0xE7623765L,0x36C2365EL,0x36C2365EL,0xE7623765L,1L}},{{2L,1L,0xBA3C33D0L,1L,2L},{0xE7623765L,(-1L),0x22407312L,9L,1L},{0xF72AC034L,0x4DAB2874L,(-4L),1L,0x9C0376B8L},{0xF65F2EC5L,0x36C2365EL,0x22407312L,0xE7623765L,0xFD947B1EL},{2L,0x4DAB2874L,0xBA3C33D0L,1L,2L},{0xF65F2EC5L,(-1L),0x36C2365EL,9L,0xFD947B1EL}},{{0xF72AC034L,1L,(-4L),1L,0x9C0376B8L},{0xE7623765L,0x36C2365EL,0x36C2365EL,0xE7623765L,1L},{2L,1L,0xBA3C33D0L,1L,2L},{0xE7623765L,(-1L),(-9L),2L,0x377A45DEL},{0x9C0376B8L,(-1L),0L,1L,2L},{1L,(-1L),(-9L),0xFD947B1EL,(-1L)}},{{2L,(-1L),0xEE89CEA3L,0x7A3259C2L,0xBA3C33D0L},{1L,1L,(-1L),2L,(-1L)},{0x9C0376B8L,1L,0L,0x7A3259C2L,2L},{0xFD947B1EL,(-1L),(-1L),0xFD947B1EL,0x377A45DEL},{2L,1L,0xEE89CEA3L,1L,0xBA3C33D0L},{0xFD947B1EL,1L,(-9L),2L,0x377A45DEL}},{{0x9C0376B8L,(-1L),0L,1L,2L},{1L,(-1L),(-9L),0xFD947B1EL,(-1L)},{2L,(-1L),0xEE89CEA3L,0x7A3259C2L,0xBA3C33D0L},{1L,1L,(-1L),2L,(-1L)},{0x9C0376B8L,1L,0L,0x7A3259C2L,2L},{0xFD947B1EL,(-1L),(-1L),0xFD947B1EL,0x377A45DEL}}};
        unsigned short l_279 = 65527UL;
        int *l_284 = &l_265;
        int *l_285 = &l_267;
        int *l_286 = &l_258;
        int *l_287 = &l_267;
        int *l_288 = &g_62;
        int *l_289 = &l_258;
        int *l_290 = &g_62;
        int *l_291 = &g_85[3];
        int *l_292 = &l_269;
        int *l_293[4][1][3] = {{{&g_140[2].f1,(void*)0,&g_140[2].f1}},{{&l_270,&l_270,&l_270}},{{&g_140[2].f1,(void*)0,&g_140[2].f1}},{{&l_270,&l_270,&l_270}}};
        unsigned short l_294 = 0x0C24L;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_78[i] = 6L;
        for (l_64 = 22; (l_64 == 27); ++l_64)
        {
            int *l_71 = &g_62;
            int l_251 = 1L;
            int l_259[2];
            int i;
            for (i = 0; i < 2; i++)
                l_259[i] = 0x81C1FD8AL;
            if (((*l_71) &= g_30))
            {
                int **l_248 = &g_128;
                (*l_248) = func_72(func_76(l_78[4]), ((*p_51) , l_82[1]), &g_32);
                (*l_71) = (((void*)0 == &g_159) ^ ((*p_50) = (249UL && (*l_71))));
                l_249 ^= (-2L);
            }
            else
            {
                int *l_252 = &g_144.f1;
                int *l_253 = &l_250[1][9];
                int *l_254 = &l_251;
                int *l_255 = &l_250[2][1];
                int *l_256 = &g_120[3][1].f1;
                int *l_257[7][10][3] = {{{(void*)0,(void*)0,&g_62},{&l_249,(void*)0,(void*)0},{&g_144.f1,&l_249,(void*)0},{&l_250[1][4],&l_249,&g_144.f1},{(void*)0,&g_62,&g_120[3][1].f1},{&g_85[1],&l_251,&l_251},{&l_249,&l_249,&l_250[1][4]},{&l_249,&l_250[1][4],(void*)0},{&g_85[1],&g_144.f1,(void*)0},{(void*)0,(void*)0,&g_120[3][1].f1}},{{(void*)0,&g_144.f1,&g_140[2].f1},{&g_62,&l_250[1][4],&g_62},{&g_144.f1,&l_249,&g_62},{&g_120[3][1].f1,&l_251,&g_140[2].f1},{&g_140[2].f1,&g_62,&g_120[3][1].f1},{&l_249,&l_249,(void*)0},{&g_140[2].f1,(void*)0,(void*)0},{&g_120[3][1].f1,&g_120[3][1].f1,&l_250[1][4]},{&g_144.f1,&g_120[3][1].f1,&l_251},{&g_62,(void*)0,&g_120[3][1].f1}},{{(void*)0,&l_249,&g_144.f1},{(void*)0,&g_62,&g_120[3][1].f1},{&g_85[1],&l_251,&l_251},{&l_249,&l_249,&l_250[1][4]},{&l_249,&l_250[1][4],(void*)0},{&g_85[1],&g_144.f1,(void*)0},{(void*)0,(void*)0,&g_120[3][1].f1},{(void*)0,&g_144.f1,&g_140[2].f1},{&g_62,&l_250[1][4],&g_62},{&g_144.f1,&l_249,&g_62}},{{&g_120[3][1].f1,&l_251,&g_140[2].f1},{&g_140[2].f1,&g_62,&g_120[3][1].f1},{&l_249,&l_249,(void*)0},{&g_140[2].f1,(void*)0,(void*)0},{&g_120[3][1].f1,&g_120[3][1].f1,&l_250[1][4]},{&g_144.f1,(void*)0,&g_144.f1},{&g_140[2].f1,(void*)0,(void*)0},{&l_249,&l_250[1][4],&g_120[3][1].f1},{&g_120[3][1].f1,&g_140[2].f1,(void*)0},{&l_249,&g_144.f1,&g_144.f1}},{{&g_85[1],(void*)0,&l_249},{&g_85[1],&l_249,&g_120[3][1].f1},{&l_249,(void*)0,&l_249},{&g_120[3][1].f1,&l_249,&l_251},{&l_249,(void*)0,&g_144.f1},{&g_140[2].f1,&l_249,&g_140[2].f1},{(void*)0,(void*)0,&g_140[2].f1},{(void*)0,&g_144.f1,&g_144.f1},{&g_144.f1,&g_140[2].f1,&l_251},{(void*)0,&l_250[1][4],&l_249}},{{&g_144.f1,(void*)0,&g_120[3][1].f1},{(void*)0,(void*)0,&l_249},{(void*)0,(void*)0,&g_144.f1},{&g_140[2].f1,(void*)0,(void*)0},{&l_249,&l_250[1][4],&g_120[3][1].f1},{&g_120[3][1].f1,&g_140[2].f1,(void*)0},{&l_249,&g_144.f1,&g_144.f1},{&g_85[1],(void*)0,&l_249},{&g_85[1],&l_249,&g_120[3][1].f1},{&l_249,(void*)0,&l_249}},{{&g_120[3][1].f1,&l_249,&l_251},{&l_249,(void*)0,&g_144.f1},{&g_140[2].f1,&l_249,&g_140[2].f1},{(void*)0,(void*)0,&g_140[2].f1},{(void*)0,&g_144.f1,&g_144.f1},{&g_144.f1,&g_140[2].f1,&l_251},{(void*)0,&l_250[1][4],&l_249},{&g_62,&g_120[3][1].f1,&l_249},{(void*)0,(void*)0,&l_249},{&l_251,(void*)0,&g_120[3][1].f1}}};
                int **l_276 = (void*)0;
                int **l_277[8][9] = {{&l_252,&l_254,&l_253,&l_253,&l_257[3][1][0],&l_253,(void*)0,(void*)0,&l_253},{&g_128,(void*)0,&l_253,&l_252,&l_252,&l_253,(void*)0,&g_128,&l_257[3][1][0]},{&g_128,&l_253,&l_257[3][1][0],&l_253,(void*)0,&l_252,&l_257[0][6][2],&l_252,&l_256},{&l_252,(void*)0,&l_257[1][8][0],&l_257[0][6][2],&l_254,(void*)0,&l_257[3][1][0],&l_257[1][8][0],&l_257[3][1][0]},{(void*)0,&l_254,(void*)0,(void*)0,&l_254,(void*)0,(void*)0,&l_257[1][8][0],&l_253},{(void*)0,&l_254,&l_257[0][6][2],&l_257[1][8][0],(void*)0,&l_252,(void*)0,&l_252,&l_257[1][8][0]},{&l_252,(void*)0,&l_253,&l_257[3][1][0],&l_253,&g_128,(void*)0,&g_128,&l_253},{&l_253,&l_252,&l_252,&l_253,(void*)0,&g_128,&l_257[3][1][0],(void*)0,&l_256}};
                char l_278 = 0xE0L;
                struct S0 **l_283 = &l_282[0];
                int i, j, k;
                l_273[1]--;
                g_128 = &g_62;
                l_279++;
                (*l_283) = l_282[0];
            }
        }
        l_250[1][8] = p_48;
        l_294++;
        return l_297;
    }
    (*l_301) = (((l_297 , (++(*l_298))) | 9UL) , l_282[2]);
    for (p_49 = (-9); (p_49 >= 58); ++p_49)
    {
        int *l_304[6][3][4] = {{{(void*)0,&g_120[3][1].f1,&l_250[1][4],&g_62},{(void*)0,&l_250[1][4],(void*)0,(void*)0},{&g_120[3][1].f1,&g_62,(void*)0,(void*)0}},{{&l_250[1][4],&l_250[1][4],&g_120[3][1].f1,(void*)0},{(void*)0,&g_120[3][1].f1,(void*)0,&g_120[3][1].f1},{&g_120[3][1].f1,&g_120[3][1].f1,&g_62,(void*)0}},{{&g_120[3][1].f1,&g_120[3][1].f1,&g_120[3][1].f1,&g_120[3][1].f1},{&g_120[3][1].f1,&g_120[3][1].f1,&g_120[3][1].f1,(void*)0},{&g_120[3][1].f1,&g_120[3][1].f1,&g_120[3][1].f1,&g_62}},{{&g_120[3][1].f1,(void*)0,&g_62,&g_62},{&g_120[3][1].f1,&g_120[3][1].f1,(void*)0,(void*)0},{(void*)0,&g_120[3][1].f1,(void*)0,&g_120[3][1].f1}},{{&g_120[3][1].f1,&g_120[3][1].f1,&g_62,(void*)0},{&g_120[3][1].f1,&g_120[3][1].f1,&g_120[3][1].f1,&g_120[3][1].f1},{&g_120[3][1].f1,&g_120[3][1].f1,&g_120[3][1].f1,(void*)0}},{{&g_120[3][1].f1,&g_120[3][1].f1,&g_120[3][1].f1,&g_62},{&g_120[3][1].f1,(void*)0,&g_62,&g_62},{&g_120[3][1].f1,&g_120[3][1].f1,(void*)0,(void*)0}}};
        int l_316 = 0x5AF5D454L;
        short l_358 = (-2L);
        int i, j, k;
        ++g_305;
        for (g_238 = 0; (g_238 <= 3); g_238 += 1)
        {
            short l_308 = 0L;
            int l_313 = 0x78AD8A29L;
            unsigned short **l_317[7] = {&g_29,&g_29,&g_29,&g_29,&g_29,&g_29,&g_29};
            struct S0 l_323 = {-4433,28,0,88,21};
            int l_331 = (-6L);
            int l_345 = 0x7A9767F9L;
            unsigned l_346 = 0xCB576372L;
            int l_359 = 0x440B755AL;
            int i;
            l_308 |= 0xC65B0CB1L;
            for (g_305 = 0; (g_305 <= 3); g_305 += 1)
            {
                unsigned l_320 = 0UL;
                for (g_62 = 0; (g_62 <= 3); g_62 += 1)
                {
                    char l_309 = 0xB5L;
                    for (g_144.f0 = 3; (g_144.f0 >= 0); g_144.f0 -= 1)
                    {
                        char l_310 = 0x1CL;
                        l_310 ^= l_309;
                        g_144.f1 ^= p_49;
                        g_85[1] ^= ((g_123.f2 , l_308) && (((++(*g_29)) | l_313) | (*p_50)));
                    }
                    if (p_48)
                        break;
                }
                g_62 = (g_85[6] = (p_49 | (((l_316 & ((p_48 , &g_29) != l_317[1])) <= g_106[1][0][2]) >= ((safe_mul_func_uint16_t_u_u(l_64, 1UL)) <= (*g_29)))));
                l_331 |= ((p_48 > (l_320 || (safe_lshift_func_uint8_t_u_s(((l_308 != (((l_323 , (safe_mul_func_uint16_t_u_u(1UL, (safe_lshift_func_uint16_t_u_u(0x2BBFL, (*p_51)))))) , l_313) ^ (safe_mod_func_uint16_t_u_u(l_323.f1, l_330)))) > g_123.f3), 1)))) , (-7L));
                return g_123;
            }
            for (p_48 = 0; (p_48 <= 3); p_48 += 1)
            {
                char l_339 = 1L;
                struct S1 l_340 = {2883,5624,924,0xE4L};
                int l_341[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                unsigned l_357 = 0xE017BDB3L;
                int i;
                for (g_30 = 0; (g_30 <= 3); g_30 += 1)
                {
                    int l_332 = 0x203AE953L;
                    (*l_301) = (*l_301);
                    g_128 = &g_85[4];
                    for (l_316 = 3; (l_316 >= 0); l_316 -= 1)
                    {
                        unsigned l_333 = 0UL;
                        struct S1 l_336 = {593,749,21,0L};
                        l_333++;
                        (*g_128) |= ((l_308 ^ p_49) | p_49);
                        return l_336;
                    }
                    (*g_128) = ((((-1L) < (safe_add_func_int8_t_s_s(1L, l_339))) , (*p_51)) & g_106[3][8][0]);
                }
                for (g_182 = 3; (g_182 >= 0); g_182 -= 1)
                {
                    int l_342 = 0xDAFC579BL;
                    int l_343 = 1L;
                    int l_344[2];
                    unsigned short l_351 = 1UL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_344[i] = 0x45F1B179L;
                    l_250[1][4] |= 0L;
                    for (l_316 = 0; (l_316 <= 3); l_316 += 1)
                    {
                        return l_340;
                    }
                    ++l_346;
                    for (l_345 = 0; (l_345 <= 3); l_345 += 1)
                    {
                        int l_349 = (-2L);
                        int l_350 = 0L;
                        int i, j;
                        l_351--;
                        (*g_225) = l_354;
                    }
                }
                l_341[7] = (l_323.f0 = ((l_339 & ((((((*p_50) = (safe_mod_func_uint16_t_u_u(((0x58095996L & (l_273[0] , (l_340 , g_238))) , (*p_51)), l_331))) ^ l_357) < p_49) || 0xE081DDCBL) & (*g_29))) > l_358));
                g_85[1] ^= (g_28.f0 , (~p_49));
            }
            --g_360[1];
        }
    }
    return l_297;
}







static int * func_72(short * p_73, unsigned short * const p_74, unsigned char * const p_75)
{
    int l_96 = 0L;
    int l_97 = 0x819A8027L;
    int l_98 = 0x38C1355BL;
    short l_100[9] = {4L,4L,4L,4L,4L,4L,4L,4L,4L};
    int l_102 = (-1L);
    int l_103[4][2];
    short l_105 = 0x0D9DL;
    struct S2 l_121[1] = {{4L,-1L}};
    struct S1 *l_122 = &g_123;
    unsigned short **l_124 = &g_29;
    struct S2 l_142 = {0x055EL,0L};
    struct S0 l_145[8] = {{-5288,0,0,103,-8},{-5288,0,0,103,-8},{-5288,0,0,103,-8},{-5288,0,0,103,-8},{-5288,0,0,103,-8},{-5288,0,0,103,-8},{-5288,0,0,103,-8},{-5288,0,0,103,-8}};
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_103[i][j] = 1L;
    }
    for (g_57 = 0; (g_57 > (-12)); --g_57)
    {
        int l_89 = 0x2C279A1AL;
        int l_99 = (-5L);
        int l_101[7][7] = {{(-1L),0x77DDA0CFL,1L,0x7234FC06L,(-2L),0xF69DBBC9L,0xB0A97542L},{0xE030C704L,1L,0x1EF1A95AL,8L,0x77DDA0CFL,0x77DDA0CFL,8L},{(-1L),0xB0A97542L,(-1L),(-1L),0x77DDA0CFL,0xBCDCAF52L,0x49E9ABE1L},{(-2L),0xF69DBBC9L,9L,0xB0A97542L,0x124FAE1BL,0x253E6AFDL,1L},{0xB0A97542L,9L,0xF69DBBC9L,(-2L),0xDD584760L,0xBCDCAF52L,0xBCDCAF52L},{(-1L),(-1L),0xB0A97542L,(-1L),(-1L),0x77DDA0CFL,0xBCDCAF52L},{8L,0x1EF1A95AL,1L,0xE030C704L,0xBCDCAF52L,0xF69DBBC9L,1L}};
        char l_104 = 0x32L;
        int *l_109 = &l_101[2][4];
        struct S2 *l_143[6][9][1] = {{{(void*)0},{&l_142},{&l_142},{(void*)0},{&l_142},{&l_142},{(void*)0},{&l_142},{&l_142}},{{(void*)0},{&l_142},{&l_142},{(void*)0},{&l_142},{&l_142},{(void*)0},{&l_142},{&l_142}},{{(void*)0},{&l_142},{&l_142},{(void*)0},{&l_142},{&l_142},{(void*)0},{&l_142},{&l_142}},{{(void*)0},{&l_142},{&l_142},{(void*)0},{&l_142},{&l_142},{(void*)0},{&l_142},{&l_142}},{{(void*)0},{&l_142},{&l_142},{(void*)0},{&l_142},{&l_142},{(void*)0},{&l_142},{&l_142}},{{(void*)0},{&l_142},{&l_142},{(void*)0},{&l_142},{&l_142},{(void*)0},{&l_142},{&l_142}}};
        int i, j, k;
        for (g_30 = 0; (g_30 <= 6); g_30 += 1)
        {
            int *l_86 = (void*)0;
            int *l_87 = &g_62;
            int *l_88 = &g_85[g_30];
            int *l_90 = &g_85[g_30];
            int *l_91 = &l_89;
            int *l_92 = &g_85[g_30];
            int *l_93 = &g_62;
            int *l_94 = &g_62;
            int *l_95[4][4] = {{&l_89,&l_89,&l_89,&l_89},{&l_89,&l_89,&l_89,&l_89},{&l_89,&l_89,&l_89,&l_89},{&l_89,&l_89,&l_89,&l_89}};
            int i, j;
            g_106[3][8][0]--;
        }
        for (l_102 = 0; l_102 < 9; l_102 += 1)
        {
            l_100[l_102] = (-1L);
        }
        (*l_109) = (l_96 , 0L);
        l_122 = func_110(func_116((l_121[0] = g_120[3][1]), l_122, l_124), l_142, (g_144 = l_142), l_145[1], &g_29);
    }
    return &g_85[1];
}







static short * func_76(char p_77)
{
    int l_79 = 0x89F16C48L;
    int *l_80 = &g_62;
    short *l_81 = (void*)0;
    (*l_80) |= (0xB872472FL != l_79);
    return l_81;
}







static struct S1 * func_110(unsigned short ** p_111, struct S2 p_112, struct S2 p_113, struct S0 p_114, unsigned short ** p_115)
{
    int *l_153 = (void*)0;
    unsigned short *l_158[6][5][8] = {{{&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159},{(void*)0,&g_159,(void*)0,&g_159,&g_159,(void*)0,&g_159,&g_159},{&g_159,(void*)0,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159},{&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159},{(void*)0,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159}},{{&g_159,(void*)0,&g_159,&g_159,&g_159,(void*)0,&g_159,&g_159},{&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159},{(void*)0,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159},{&g_159,(void*)0,(void*)0,&g_159,&g_159,&g_159,&g_159,&g_159},{&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,(void*)0,&g_159}},{{&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,(void*)0,&g_159},{&g_159,&g_159,(void*)0,&g_159,&g_159,&g_159,&g_159,&g_159},{&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,(void*)0},{&g_159,&g_159,&g_159,&g_159,(void*)0,&g_159,(void*)0,&g_159},{&g_159,&g_159,&g_159,(void*)0,&g_159,&g_159,&g_159,&g_159}},{{(void*)0,&g_159,&g_159,(void*)0,&g_159,&g_159,&g_159,&g_159},{&g_159,(void*)0,(void*)0,&g_159,&g_159,&g_159,(void*)0,(void*)0},{(void*)0,&g_159,&g_159,&g_159,&g_159,&g_159,(void*)0,&g_159},{&g_159,(void*)0,&g_159,&g_159,(void*)0,&g_159,(void*)0,&g_159},{&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,(void*)0,&g_159}},{{&g_159,&g_159,(void*)0,&g_159,&g_159,&g_159,&g_159,&g_159},{&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,(void*)0,&g_159},{&g_159,&g_159,(void*)0,&g_159,&g_159,&g_159,&g_159,&g_159},{(void*)0,&g_159,(void*)0,&g_159,(void*)0,&g_159,(void*)0,&g_159},{&g_159,(void*)0,&g_159,&g_159,(void*)0,&g_159,&g_159,&g_159}},{{&g_159,&g_159,&g_159,&g_159,(void*)0,&g_159,&g_159,&g_159},{&g_159,&g_159,&g_159,&g_159,(void*)0,&g_159,&g_159,&g_159},{(void*)0,&g_159,&g_159,(void*)0,&g_159,&g_159,&g_159,(void*)0},{&g_159,(void*)0,&g_159,&g_159,&g_159,&g_159,&g_159,(void*)0},{&g_159,&g_159,&g_159,(void*)0,(void*)0,&g_159,&g_159,&g_159}}};
    unsigned short **l_157 = &l_158[1][2][6];
    struct S1 *l_160 = &g_123;
    int *l_165 = &g_62;
    unsigned short l_185 = 65535UL;
    int l_189 = 0L;
    int *l_231 = &g_144.f1;
    int *l_232 = &g_85[4];
    int *l_233 = &g_62;
    int *l_234 = &g_140[2].f1;
    int *l_235 = &l_189;
    int *l_236 = &g_144.f1;
    int *l_237[7];
    unsigned char *l_244 = &g_32;
    unsigned char **l_243 = &l_244;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_237[i] = &g_120[3][1].f1;
    for (p_113.f1 = 0; (p_113.f1 >= 13); p_113.f1 = safe_add_func_int8_t_s_s(p_113.f1, 9))
    {
        unsigned short l_152[8][2][5] = {{{0UL,0x138FL,0UL,0xC83BL,0xF885L},{65535UL,0x138FL,0xC83BL,0x4BBCL,0xFDFCL}},{{0xDB29L,0UL,0UL,0xDB29L,0x4BBCL},{65535UL,0xA8CEL,0xF885L,0xF4F0L,0x4BBCL}},{{0UL,65535UL,0xFDFCL,0UL,0xFDFCL},{0UL,0UL,0xD64DL,0xA8CEL,0UL}},{{65535UL,0UL,0xD64DL,0xF885L,0x138FL},{0xF4F0L,0xD64DL,0x4BBCL,0xD64DL,0xF4F0L}},{{0xA8CEL,0UL,0UL,0xF4F0L,0xFDFCL},{0xA8CEL,0xFDFCL,0x138FL,0xE753L,0xE753L}},{{0xF4F0L,0xC83BL,0xF4F0L,0UL,0xFDFCL},{65535UL,0xE753L,0xFDFCL,0UL,0xF4F0L}},{{0xFDFCL,0x138FL,0xE753L,0xE753L,0x138FL},{0x138FL,0xDB29L,0xFDFCL,0xF4F0L,0UL}},{{0xC83BL,0xDB29L,0xF4F0L,0xD64DL,0x4BBCL},{0xF885L,0x138FL,0x138FL,0xF885L,0xD64DL}}};
        unsigned short **l_156 = &g_29;
        unsigned *l_161 = &g_106[3][8][0];
        int l_162[2][1][8] = {{{0x2E4CE6EDL,0x2E4CE6EDL,0x2E4CE6EDL,0x2E4CE6EDL,0x2E4CE6EDL,0x2E4CE6EDL,0x2E4CE6EDL,0x2E4CE6EDL}},{{0x2E4CE6EDL,0x2E4CE6EDL,0x2E4CE6EDL,0x2E4CE6EDL,0x2E4CE6EDL,0x2E4CE6EDL,0x2E4CE6EDL,0x2E4CE6EDL}}};
        unsigned char *l_181 = &g_32;
        unsigned char **l_180 = &l_181;
        int i, j, k;
        l_162[0][0][7] &= (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((p_113.f0 = l_152[0][0][4]) , (g_120[3][1].f0 |= 0xFD1AL)), ((*g_29) = ((void*)0 != l_153)))), ((*l_161) = (safe_sub_func_int32_t_s_s(p_114.f1, ((p_114.f2 ^ ((l_156 == (l_157 = p_111)) , (l_160 == l_160))) != l_152[0][0][4]))))));
        for (p_112.f0 = 3; (p_112.f0 >= 0); p_112.f0 -= 1)
        {
            char *l_163 = (void*)0;
            char *l_164 = &g_123.f3;
            int **l_166 = &g_128;
            int *l_183 = (void*)0;
            int l_188 = (-2L);
            struct S2 *l_215 = &g_120[3][1];
            struct S2 **l_214 = &l_215;
            struct S1 *l_230 = &g_123;
            (*l_166) = (((*l_164) = g_28.f1) , l_165);
            if (p_114.f1)
                break;
            for (p_112.f1 = 0; (p_112.f1 <= 3); p_112.f1 += 1)
            {
                unsigned char *l_177 = &g_32;
                unsigned l_193[8] = {4294967290UL,0x29D7283EL,4294967290UL,0x29D7283EL,4294967290UL,0x29D7283EL,4294967290UL,0x29D7283EL};
                unsigned char ***l_217 = &l_180;
                int i, j;
            }
        }
    }
    g_238++;
    (*l_233) ^= (safe_rshift_func_uint8_t_u_s(((0xFAL != ((((((1UL < (l_243 == &l_244)) , g_140[2].f1) != (p_114.f1 == 0x5EE0L)) <= (safe_mul_func_int8_t_s_s(p_114.f1, ((g_247 = &g_159) != (void*)0)))) , (*l_232)) <= 0x76CAL)) >= (*g_29)), 1));
    return &g_123;
}







static unsigned short ** func_116(struct S2 p_117, struct S1 * p_118, unsigned short ** p_119)
{
    int *l_127[3][7][3] = {{{&g_120[3][1].f1,(void*)0,&g_85[1]},{&g_85[4],(void*)0,&g_85[4]},{&g_62,&g_62,&g_120[3][1].f1},{&g_120[3][1].f1,&g_85[4],&g_85[4]},{&g_120[3][1].f1,&g_62,&g_85[1]},{&g_62,&g_120[3][1].f1,&g_120[3][1].f1},{&g_120[3][1].f1,&g_85[1],&g_85[1]}},{{&g_85[5],&g_85[4],&g_62},{&g_120[3][1].f1,&g_85[1],&g_120[3][1].f1},{&g_120[3][1].f1,&g_85[5],&g_120[3][1].f1},{&g_62,&g_62,&g_120[3][1].f1},{&g_120[3][1].f1,&g_120[3][1].f1,&g_62},{&g_62,(void*)0,&g_85[1]},{&g_120[3][1].f1,&g_120[3][1].f1,&g_62}},{{&g_62,&g_62,(void*)0},{&g_120[3][1].f1,&g_120[3][1].f1,&g_120[3][1].f1},{&g_120[3][1].f1,(void*)0,&g_120[3][1].f1},{&g_85[5],&g_120[3][1].f1,&g_120[3][1].f1},{&g_120[3][1].f1,&g_62,(void*)0},{&g_85[4],&g_85[5],&g_62},{&g_120[3][1].f1,&g_85[1],&g_85[1]}}};
    int **l_129 = (void*)0;
    int **l_130 = &l_127[1][2][0];
    struct S2 *l_139[10][10][2] = {{{&g_140[2],&g_140[3]},{&g_140[0],(void*)0},{&g_140[2],&g_140[0]},{(void*)0,&g_140[2]},{&g_140[2],&g_140[2]},{&g_140[2],(void*)0},{(void*)0,&g_140[2]},{&g_140[1],(void*)0},{&g_140[2],&g_140[2]},{&g_140[2],&g_140[0]}},{{&g_140[2],&g_140[2]},{(void*)0,&g_140[2]},{&g_140[2],&g_140[2]},{&g_140[2],&g_140[2]},{&g_140[2],&g_140[3]},{&g_140[2],(void*)0},{&g_140[2],&g_140[1]},{&g_140[2],&g_140[2]},{&g_140[1],&g_140[2]},{&g_140[2],(void*)0}},{{&g_140[2],&g_140[2]},{&g_140[0],&g_140[2]},{(void*)0,(void*)0},{&g_140[0],&g_140[3]},{&g_140[2],&g_140[0]},{&g_140[3],&g_140[1]},{&g_140[2],&g_140[2]},{&g_140[0],&g_140[2]},{&g_140[2],(void*)0},{(void*)0,&g_140[2]}},{{&g_140[2],&g_140[2]},{&g_140[2],&g_140[2]},{(void*)0,&g_140[0]},{(void*)0,&g_140[0]},{(void*)0,(void*)0},{&g_140[2],&g_140[2]},{&g_140[2],(void*)0},{(void*)0,&g_140[0]},{(void*)0,&g_140[0]},{(void*)0,&g_140[2]}},{{&g_140[2],&g_140[2]},{&g_140[2],&g_140[2]},{(void*)0,(void*)0},{&g_140[2],&g_140[2]},{&g_140[0],&g_140[2]},{&g_140[2],&g_140[1]},{&g_140[2],&g_140[3]},{(void*)0,(void*)0},{&g_140[3],&g_140[2]},{&g_140[2],&g_140[2]}},{{&g_140[2],&g_140[2]},{(void*)0,&g_140[2]},{&g_140[2],&g_140[2]},{&g_140[2],(void*)0},{&g_140[2],&g_140[0]},{&g_140[2],&g_140[2]},{(void*)0,&g_140[2]},{&g_140[2],&g_140[0]},{&g_140[3],&g_140[2]},{(void*)0,(void*)0}},{{&g_140[2],&g_140[2]},{&g_140[2],&g_140[3]},{&g_140[2],&g_140[2]},{&g_140[0],&g_140[1]},{&g_140[2],(void*)0},{&g_140[2],(void*)0},{&g_140[2],&g_140[1]},{(void*)0,&g_140[3]},{&g_140[1],(void*)0},{(void*)0,&g_140[2]}},{{(void*)0,&g_140[2]},{&g_140[0],(void*)0},{&g_140[2],&g_140[2]},{(void*)0,(void*)0},{(void*)0,&g_140[2]},{&g_140[0],&g_140[2]},{(void*)0,&g_140[0]},{&g_140[2],&g_140[2]},{&g_140[0],(void*)0},{&g_140[2],(void*)0}},{{&g_140[0],(void*)0},{&g_140[2],(void*)0},{&g_140[0],&g_140[2]},{&g_140[2],&g_140[0]},{(void*)0,&g_140[2]},{&g_140[0],&g_140[2]},{(void*)0,(void*)0},{(void*)0,&g_140[2]},{&g_140[2],(void*)0},{(void*)0,&g_140[3]}},{{&g_140[2],(void*)0},{(void*)0,&g_140[0]},{(void*)0,&g_140[2]},{&g_140[2],(void*)0},{&g_140[2],&g_140[0]},{&g_140[2],(void*)0},{&g_140[2],(void*)0},{&g_140[2],&g_140[0]},{&g_140[3],(void*)0},{(void*)0,&g_140[2]}}};
    unsigned short **l_141 = &g_29;
    int i, j, k;
    g_140[3] = (((safe_div_func_uint16_t_u_u((&g_62 != ((*l_130) = (g_128 = l_127[1][2][0]))), ((g_62 = g_28.f1) || ((g_120[3][1].f0 |= ((0xFD05L & (safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u(((p_117.f1 || (((p_117.f0 < 0x04L) && 0x39E8L) , (!g_62))) , 0x9E3CL), g_28.f2)) & 0L), 0)) ^ p_117.f0), (**p_119))), p_117.f1))) != g_28.f2)) , 0L)))) || (**p_119)) , g_120[3][1]);
    return l_141;
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
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
    transparent_crc(g_28.f2, "g_28.f2", print_hash_value);
    transparent_crc(g_28.f3, "g_28.f3", print_hash_value);
    transparent_crc(g_28.f4, "g_28.f4", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_85[i], "g_85[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_106[i][j][k], "g_106[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_120[i][j].f0, "g_120[i][j].f0", print_hash_value);
            transparent_crc(g_120[i][j].f1, "g_120[i][j].f1", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_123.f0, "g_123.f0", print_hash_value);
    transparent_crc(g_123.f1, "g_123.f1", print_hash_value);
    transparent_crc(g_123.f2, "g_123.f2", print_hash_value);
    transparent_crc(g_123.f3, "g_123.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_140[i].f0, "g_140[i].f0", print_hash_value);
        transparent_crc(g_140[i].f1, "g_140[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_144.f0, "g_144.f0", print_hash_value);
    transparent_crc(g_144.f1, "g_144.f1", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_360[i], "g_360[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_398.f0, "g_398.f0", print_hash_value);
    transparent_crc(g_398.f1, "g_398.f1", print_hash_value);
    transparent_crc(g_398.f2, "g_398.f2", print_hash_value);
    transparent_crc(g_398.f3, "g_398.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_415[i], "g_415[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_421[i].f0, "g_421[i].f0", print_hash_value);
        transparent_crc(g_421[i].f1, "g_421[i].f1", print_hash_value);
        transparent_crc(g_421[i].f2, "g_421[i].f2", print_hash_value);
        transparent_crc(g_421[i].f3, "g_421[i].f3", print_hash_value);
        transparent_crc(g_421[i].f4, "g_421[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_432, "g_432", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_485[i], "g_485[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
