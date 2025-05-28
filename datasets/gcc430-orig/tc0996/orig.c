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



static char g_2 = 0x19L;
static unsigned char g_45[1] = {252UL};
static unsigned g_48 = 0x76CC72B7L;
static int g_76 = 1L;
static unsigned g_96[1] = {6UL};
static unsigned g_99 = 4294967293UL;
static unsigned g_136 = 4294967286UL;
static unsigned short g_149 = 0xF186L;
static int g_153 = 1L;
static unsigned g_157 = 0UL;
static int g_158[5][2][10] = {{{(-4L), 0x9214CF6CL, 0xF8350F04L, 0x3019E490L, 8L, 1L, 8L, 0L, 0L, 8L}, {(-4L), 0x9214CF6CL, 0xF8350F04L, 0x3019E490L, 8L, 1L, 8L, 0L, 0L, 8L}}, {{(-4L), 0x9214CF6CL, 0xF8350F04L, 0x3019E490L, 8L, 1L, 8L, 0L, 0L, 8L}, {(-4L), 0x9214CF6CL, 0xF8350F04L, 0x3019E490L, 8L, 1L, 8L, 0L, 0L, 8L}}, {{(-4L), 0x9214CF6CL, 0xF8350F04L, 0x3019E490L, 8L, 1L, 8L, 0L, 0L, 8L}, {(-4L), 0x9214CF6CL, 0xF8350F04L, 0x3019E490L, 8L, 1L, 8L, 0L, 0L, 8L}}, {{(-4L), 0x9214CF6CL, 0xF8350F04L, 0x3019E490L, 8L, 1L, 8L, 0L, 0L, 8L}, {(-4L), 0x9214CF6CL, 0xF8350F04L, 0x3019E490L, 8L, 1L, 8L, 0L, 0L, 8L}}, {{(-4L), 0x9214CF6CL, 0xF8350F04L, 0x3019E490L, 8L, 1L, 8L, 0L, 0L, 8L}, {(-4L), 0x9214CF6CL, 0xF8350F04L, 0x3019E490L, 8L, 1L, 8L, 0L, 0L, 8L}}};
static char g_160[5] = {0x76L, 0x76L, 0x76L, 0x76L, 0x76L};
static unsigned g_172 = 2UL;
static int g_174 = 2L;
static char g_177 = 0L;
static unsigned short g_188 = 1UL;
static int g_189 = 0x13327E3EL;
static unsigned short g_203 = 65534UL;
static short g_232[9][1] = {{0x2446L}, {0x2446L}, {0x2446L}, {0x2446L}, {0x2446L}, {0x2446L}, {0x2446L}, {0x2446L}, {0x2446L}};
static int g_239[7][8][3] = {{{0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}}, {{0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}}, {{0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}}, {{0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}}, {{0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}}, {{0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}}, {{0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}, {0x6EE16482L, 1L, 0x9F9CD191L}}};
static int g_240 = (-1L);
static unsigned g_241 = 0UL;
static char g_253 = (-7L);
static int g_254[6] = {7L, 7L, 0xF1FC72A1L, 7L, 7L, 0xF1FC72A1L};
static unsigned g_255 = 0x763025B4L;
static int g_258[5][10][4] = {{{0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}}, {{0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}}, {{0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}}, {{0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}}, {{0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}, {0x3BEA5499L, 0x83FA38E5L, 5L, 0x3BEA5499L}}};
static unsigned char g_328 = 255UL;
static unsigned char g_343[8] = {0x6FL, 0x6FL, 0x6FL, 0x6FL, 0x6FL, 0x6FL, 0x6FL, 0x6FL};
static unsigned g_503 = 0x8DD8D36EL;
static int g_514[5] = {0x708FC7E8L, 0x708FC7E8L, 0x708FC7E8L, 0x708FC7E8L, 0x708FC7E8L};
static unsigned char g_523 = 0x1CL;
static unsigned char g_649[8][4] = {{254UL, 0xB8L, 0xE7L, 0x58L}, {254UL, 0xB8L, 0xE7L, 0x58L}, {254UL, 0xB8L, 0xE7L, 0x58L}, {254UL, 0xB8L, 0xE7L, 0x58L}, {254UL, 0xB8L, 0xE7L, 0x58L}, {254UL, 0xB8L, 0xE7L, 0x58L}, {254UL, 0xB8L, 0xE7L, 0x58L}, {254UL, 0xB8L, 0xE7L, 0x58L}};
static short g_696 = 0x5D10L;
static int g_708 = 0x412BEFEDL;
static unsigned g_868 = 0x6F0E4E88L;
static unsigned short g_927 = 1UL;
static unsigned g_1006 = 0xFC1B946DL;
static int g_1076 = 0x4647DDEEL;
static unsigned short g_1145 = 0UL;



static const int func_1(void);
static unsigned char func_3(const unsigned short p_4, char p_5, unsigned p_6);
static unsigned func_9(const int p_10, unsigned char p_11, unsigned p_12, char p_13, unsigned short p_14);
static unsigned short func_20(const char p_21);
static int func_22(unsigned p_23, unsigned char p_24);
static int func_29(int p_30);
static short func_31(int p_32, unsigned short p_33, unsigned p_34, int p_35, unsigned p_36);
static unsigned func_39(unsigned short p_40, short p_41, int p_42);
static short func_62(unsigned p_63, unsigned short p_64, unsigned p_65);
static const unsigned short func_88(int p_89, int p_90);
static const int func_1(void)
{
    short l_17 = (-1L);
    short l_727 = 0x3FE4L;
    int l_755[6] = {(-6L), (-1L), (-6L), (-1L), (-6L), (-1L)};
    int l_779[8] = {(-1L), 0xD5BACB60L, (-1L), 0xD5BACB60L, (-1L), 0xD5BACB60L, (-1L), 0xD5BACB60L};
    int l_818 = 0x6AB649B6L;
    unsigned short l_870 = 0xD896L;
    unsigned char l_882 = 0x65L;
    short l_898 = 0xDD3FL;
    int l_931 = 0xDD8B18D2L;
    unsigned short l_1049[4] = {0UL, 1UL, 0UL, 1UL};
    int l_1052 = 0x86C86D86L;
    unsigned short l_1053 = 65535UL;
    const char l_1068[3] = {0xB8L, 0xB8L, 0xB8L};
    unsigned char l_1075 = 0x43L;
    unsigned l_1083 = 6UL;
    short l_1138 = 3L;
    int i;
    if (((g_2 , func_3(((safe_lshift_func_uint8_t_u_u((func_9(g_2, (((safe_add_func_uint16_t_u_u(((g_2 , (l_17 , (+l_17))) , (safe_mod_func_int16_t_s_s((-2L), 0xFE66L))), func_20(g_2))) == l_17) , g_160[1]), g_2, l_17, l_17) , 0xF3L), l_17)) ^ l_17), g_239[4][4][1], g_503)) & 255UL))
    {
        unsigned short l_728 = 0xBEA7L;
        int l_769 = (-1L);
        short l_797 = 6L;
        unsigned l_869 = 0x05E34203L;
        int l_900 = 0xC76664E4L;
        const int l_908 = 0x853DEB88L;
        unsigned short l_930 = 0UL;
        int l_976 = 0x5A53642FL;
        int l_1020 = 0xDBE51CCFL;
        unsigned short l_1038 = 0x7FF0L;
        int l_1048[7] = {0xC950660BL, 0xA817A385L, 0xC950660BL, 0xA817A385L, 0xC950660BL, 0xA817A385L, 0xC950660BL};
        int i;
        for (g_174 = 4; (g_174 >= 0); g_174 -= 1)
        {
            int l_738 = (-1L);
            unsigned l_781 = 5UL;
            unsigned l_940 = 0x641F7E8DL;
            unsigned l_957 = 0x755FB27BL;
            unsigned char l_960 = 0x8DL;
            int i;
            for (g_99 = 0; (g_99 <= 4); g_99 += 1)
            {
                int l_729[4];
                int l_743[5];
                int i;
                for (i = 0; i < 4; i++)
                    l_729[i] = 0x67B9DDE7L;
                for (i = 0; i < 5; i++)
                    l_743[i] = 1L;
                g_258[2][9][3] = ((l_727 = (g_232[4][0] = func_88(func_22(g_160[g_99], g_343[g_174]), g_343[(g_174 + 1)]))) ^ func_9(g_343[(g_99 + 3)], g_343[(g_174 + 3)], l_728, (func_29(l_17) , g_343[(g_174 + 1)]), l_17));
                g_258[2][2][2] &= l_727;
                for (g_157 = 1; (g_157 <= 7); g_157 += 1)
                {
                    unsigned l_732 = 7UL;
                    int l_735 = 4L;
                    for (g_696 = 4; (g_696 >= 0); g_696 -= 1)
                    {
                        unsigned l_754 = 2UL;
                        g_258[3][7][3] = l_17;
                        g_258[2][9][3] = ((g_160[4] != (((l_729[1] = 0x3BBA168AL) ^ ((safe_lshift_func_uint16_t_u_s(l_732, 6)) <= ((safe_add_func_int32_t_s_s((l_735 ^= g_96[0]), 0UL)) && 1L))) ^ (+(g_157 >= (safe_add_func_int16_t_s_s((func_9((l_738 >= 1UL), g_708, g_2, g_188, g_160[1]) & g_343[g_174]), 5UL)))))) >= l_727);
                        l_755[4] = (0x3978F665L || ((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(1L, (l_743[4] & l_727))), (safe_add_func_int32_t_s_s(func_88((+(safe_rshift_func_int8_t_s_u(((g_153 , ((~l_728) , (func_9(((safe_lshift_func_uint16_t_u_u(((l_738 == ((safe_mod_func_uint16_t_u_u(0xCFB4L, g_136)) > 3UL)) , g_649[2][0]), l_17)) , g_160[1]), l_17, g_503, g_99, g_149) != 0xE9L))) != l_738), 5))), l_754), l_738)))) < 0xF5L));
                    }
                }
            }
            if ((g_258[2][9][2] = (g_160[g_174] >= (safe_sub_func_uint8_t_u_u(g_188, l_17)))))
            {
                const unsigned l_760 = 0x0E6371E9L;
                int l_780 = (-4L);
                unsigned l_831 = 4294967289UL;
                unsigned char l_848 = 253UL;
                int l_853 = 0xAFE82A99L;
                int l_854 = 0x95BCC868L;
                int l_867 = (-1L);
                char l_913 = 4L;
                unsigned short l_929 = 1UL;
                unsigned l_958 = 0x81B72664L;
                l_755[1] = func_88((safe_rshift_func_uint16_t_u_s(func_3(func_62(l_728, func_3(l_760, l_760, (g_241 &= (l_17 , (0UL >= (safe_sub_func_int16_t_s_s(g_239[4][4][1], ((((l_738 = (g_188 = (((g_232[4][0] |= (((safe_lshift_func_int16_t_s_s(l_728, 9)) , (safe_sub_func_int16_t_s_s((l_755[4] , (0x370CL && g_253)), l_728))) > l_760)) & g_328) || g_96[0]))) == l_760) && g_254[3]) , l_760))))))), g_254[3]), g_160[1], g_160[3]), 12)), g_160[2]);
                if ((g_258[2][9][3] &= (l_738 = (l_755[0] = (+(safe_rshift_func_int16_t_s_s(1L, l_728)))))))
                {
                    int l_776 = 0x46AE2ECEL;
                    l_769 = g_157;
                    if (g_503)
                        break;
                    for (g_240 = 4; (g_240 >= 0); g_240 -= 1)
                    {
                        g_258[2][9][3] = (safe_add_func_int16_t_s_s(((((g_96[0] | (safe_lshift_func_uint16_t_u_u(((((g_45[0] , g_160[1]) , func_29((g_240 <= g_174))) >= ((((((safe_sub_func_uint16_t_u_u(((+func_22(((-1L) >= (l_760 && 65535UL)), g_96[0])) , 0x3422L), l_755[4])) ^ 1L) , l_17) ^ 0x8FE24823L) >= l_776) , g_240)) && g_258[0][2][3]), 7))) & 0x5360L) && g_649[2][0]) > 5L), 0x1388L));
                        l_780 = ((~(!(g_258[2][9][3] , (safe_lshift_func_uint16_t_u_s((g_203 &= g_189), l_779[2]))))) | l_776);
                    }
                    if (g_649[2][0])
                        continue;
                }
                else
                {
                    l_769 = g_149;
                }
                if (l_781)
                {
                    unsigned short l_796 = 0xBD91L;
                    int l_805 = 1L;
                    unsigned l_826 = 4294967295UL;
                    short l_835 = 0xD4FFL;
                    if ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u(0x1A78L, ((g_203 ^ g_343[3]) == (safe_rshift_func_uint16_t_u_s(((g_258[2][9][3] = g_45[0]) < (safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_755[4], 4UL)), func_22(l_796, ((!l_796) != g_343[6])))), l_796))), l_797))))) >= l_728), 12)) || (-1L)), 6)))
                    {
                        char l_804[4][6][1] = {{{3L}, {3L}, {3L}, {3L}, {3L}, {3L}}, {{3L}, {3L}, {3L}, {3L}, {3L}, {3L}}, {{3L}, {3L}, {3L}, {3L}, {3L}, {3L}}, {{3L}, {3L}, {3L}, {3L}, {3L}, {3L}}};
                        int i, j, k;
                        l_805 = ((safe_add_func_uint16_t_u_u(g_514[4], (func_22((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((g_503 || g_157), func_29(g_177))) < 0x64BDCEE4L), (l_738 ^ (l_804[2][5][0] || (g_160[g_174] |= 0x55L))))), l_796) >= g_523))) | l_728);
                        if (g_45[0])
                            break;
                        l_818 |= (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_232[4][0], (((safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((l_728 != g_160[g_174]), g_254[3])) == l_769), 9)), g_76)), 1)) | func_22(((((((g_172 = (g_2 || l_797)) , (g_99 , g_696)) <= g_160[g_174]) & g_503) | g_136) & (-3L)), g_76)) , l_738))), l_755[4]));
                        return g_649[2][0];
                    }
                    else
                    {
                        int l_821 = 5L;
                        g_258[2][9][3] = ((l_805 = ((((safe_rshift_func_int16_t_s_s((g_232[4][0] = ((l_821 , (safe_rshift_func_int16_t_s_s(g_232[4][0], ((g_160[1] |= g_158[4][0][0]) == (safe_add_func_uint16_t_u_u((l_826 , (((((safe_add_func_int16_t_s_s(0x1BCEL, ((safe_sub_func_int16_t_s_s(l_831, g_523)) < (func_29(g_253) && g_503)))) > 0L) == 0L) <= 0xD5L) != l_821)), 0x65EFL)))))) | l_17)), l_760)) < (-3L)) ^ l_805) > (-9L))) < g_99);
                        g_258[3][8][2] &= (l_797 ^ l_781);
                        g_258[4][3][3] |= (l_769 = (safe_unary_minus_func_uint16_t_u(((l_780 = (4294967292UL != (safe_rshift_func_uint16_t_u_u(0x79AEL, 13)))) && g_649[2][0]))));
                    }
                    l_854 = ((((((l_835 = g_136) || (l_780 |= 0UL)) | (0x78L > ((((++g_96[0]) >= (l_818 = ((safe_add_func_int8_t_s_s(((g_136 || (++g_255)) > ((((l_738 = ((g_188--) < (safe_sub_func_uint16_t_u_u(((g_136 | (l_769 = (safe_lshift_func_int8_t_s_s(l_760, 6)))) > l_805), l_848)))) > (l_853 &= ((safe_add_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(l_797, g_153)) >= 2L), g_514[2])) <= l_797))) , 65526UL) >= l_805)), l_848)) | g_99))) == g_696) | 0x5E00FCB1L))) > l_797) == g_99) | g_254[0]);
                    for (g_172 = (-24); (g_172 >= 15); ++g_172)
                    {
                        l_805 |= g_328;
                        g_258[4][7][3] = l_728;
                    }
                }
                else
                {
                    unsigned l_875 = 4294967286UL;
                    g_258[0][9][3] = 1L;
                    if (((((g_174 >= ((((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_781, ((-3L) & (0x1ECE4EE6L & (g_868 = ((safe_lshift_func_int16_t_s_s(((l_797 < (safe_sub_func_uint16_t_u_u(((g_258[4][1][0] ^= (l_728 | g_96[0])) , l_769), l_867))) || 0x61969935L), l_769)) == l_728)))))), 255UL)) , l_869), 13)) | (-7L)) && g_158[3][1][5]) , l_17)) , g_160[g_174]) , 1UL) <= 0x679DL))
                    {
                        ++l_870;
                    }
                    else
                    {
                        l_875 = (safe_add_func_int16_t_s_s(1L, 0x2F1BL));
                    }
                }
                for (g_696 = 26; (g_696 < 2); g_696 = safe_sub_func_uint16_t_u_u(g_696, 3))
                {
                    unsigned short l_894[4];
                    int l_902 = 0x69114DA3L;
                    unsigned char l_903[6][7][6] = {{{0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}}, {{0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}}, {{0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}}, {{0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}}, {{0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}}, {{0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}, {0xD3L, 0UL, 0x0EL, 255UL, 0x04L, 255UL}}};
                    short l_959 = 0x433BL;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_894[i] = 0xDD80L;
                    for (g_868 = (-13); (g_868 > 2); ++g_868)
                    {
                        int l_895 = 0xDDB42BF9L;
                        l_867 = (((safe_lshift_func_uint16_t_u_s(0xFACBL, 9)) & func_22((g_153 , g_255), (l_882 , (g_343[4] <= g_203)))) || (((0xAAEBL >= ((safe_add_func_uint8_t_u_u((g_45[0]--), 0x69L)) | 0x7BD4784AL)) > l_755[4]) , g_96[0]));
                        g_258[2][9][3] = (safe_sub_func_int8_t_s_s((g_158[4][0][7] , func_31(l_728, (safe_unary_minus_func_uint8_t_u((0x73L && (safe_lshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((l_894[0] > 0x971BD898L), (0x2C41L || (g_45[0] < 4294967294UL)))) == (((l_895 | g_160[g_174]) == 4294967295UL) || 0xAF69EB86L)), 11))))), l_894[0], g_158[2][0][5], g_96[0])), l_894[0]));
                        l_854 = (g_240 == l_854);
                        return l_895;
                    }
                    for (g_240 = (-27); (g_240 != (-13)); ++g_240)
                    {
                        short l_899[4][6] = {{0xC14CL, 0xBE28L, (-3L), 8L, 8L, (-3L)}, {0xC14CL, 0xBE28L, (-3L), 8L, 8L, (-3L)}, {0xC14CL, 0xBE28L, (-3L), 8L, 8L, (-3L)}, {0xC14CL, 0xBE28L, (-3L), 8L, 8L, (-3L)}};
                        int l_901[2][1][5] = {{{0L, 0L, 2L, 0L, 0L}}, {{0L, 0L, 2L, 0L, 0L}}};
                        int l_924[2];
                        int l_928[6][9][4] = {{{1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}}, {{1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}}, {{1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}}, {{1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}}, {{1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}}, {{1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}, {1L, 0xDA6B45FDL, (-4L), (-1L)}}};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_924[i] = 0x2FB1B2DBL;
                        ++l_903[2][2][3];
                        l_769 = (safe_mod_func_uint8_t_u_u(((l_908 ^ l_899[0][4]) , ((safe_lshift_func_int16_t_s_s(g_649[0][1], 2)) < ((safe_mod_func_int16_t_s_s(((((l_913 > (!(safe_mod_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(func_29(g_523), l_728)) | l_913), ((g_203 && g_258[1][6][3]) ^ (-2L)))))) && 0x5377L) > 0x3BL) >= (-6L)), l_781)) & 0x6F3F590AL))), l_854));
                        l_931 = (((safe_lshift_func_int8_t_s_s(func_62((l_930 = (safe_mod_func_int32_t_s_s(g_45[0], ((((-1L) ^ (~0xA906L)) < (safe_mod_func_uint8_t_u_u(((((l_867 = (((l_924[0] |= (l_901[1][0][2] >= g_255)) , ((0xD893L | ((l_894[1] <= (safe_add_func_int8_t_s_s(l_727, ((((g_927 < 1UL) || l_928[3][5][1]) && l_913) >= 0x4D05L)))) , l_780)) , 2UL)) < 8UL)) && g_514[4]) == l_929) <= l_769), l_901[1][0][2]))) && g_160[1])))), g_160[g_174], g_203), 5)) > 254UL) , 2L);
                        l_738 = func_9((((((func_88(g_96[0], (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(l_903[2][2][3], 2)), (((((safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_u((g_649[2][0] &= (--l_940)), g_868)) , ((l_924[0] > g_158[1][0][1]) <= (g_160[3] = (safe_sub_func_uint32_t_u_u((l_760 != ((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(251UL, 5)), l_882)), g_2)) , g_258[2][9][3])), g_696))))) <= l_902), 3)) & l_848) > l_894[0]) & g_45[0]) <= g_177)))) == g_253) & 255UL) != 0xEDF4L) & g_153) == 65531UL), l_781, g_343[0], l_755[2], l_929);
                    }
                    for (g_136 = 0; (g_136 >= 60); g_136++)
                    {
                        int l_963 = 1L;
                        g_258[2][9][3] ^= (((safe_add_func_int8_t_s_s(func_88(g_253, l_894[2]), ((((((l_738 ^= (((((l_728 ^ (g_239[1][4][0] != ((((safe_rshift_func_int16_t_s_s((l_769 = (l_957 = g_177)), g_45[0])) == 0x79L) < g_174) ^ 255UL))) <= l_958) == g_158[2][0][5]) & 0x67BD4330L) == l_959)) & 251UL) && 4UL) > l_929) != 0UL) ^ g_2))) > l_959) | 0xC5L);
                        l_960++;
                        l_963 = 0x81FFE670L;
                    }
                    g_258[2][9][3] = (0xF8817889L | g_254[4]);
                }
            }
            else
            {
                unsigned char l_968 = 0x03L;
                int l_969 = (-1L);
                unsigned char l_1001 = 0xFAL;
                if ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(g_514[4], 7)), l_968)))
                {
                    l_969 &= g_523;
                }
                else
                {
                    for (g_189 = 7; (g_189 >= 0); g_189 -= 1)
                    {
                        int i;
                        if (l_779[(g_174 + 2)])
                            break;
                    }
                }
                for (l_769 = 0; (l_769 <= 2); l_769 += 1)
                {
                    unsigned l_977 = 0xA89961FDL;
                    int l_997[3];
                    int l_1013 = 0x46FE957CL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_997[i] = 1L;
                    for (l_969 = 0; (l_969 <= 1); l_969 += 1)
                    {
                        unsigned char l_978 = 0xC6L;
                        int i, j, k;
                        l_931 &= ((g_158[(l_769 + 1)][l_969][(l_969 + 2)] ^ 6L) , (safe_lshift_func_int8_t_s_s(func_9(g_158[l_769][l_969][(l_769 + 5)], (!0x14L), (func_29((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(g_158[(l_969 + 1)][l_969][(l_969 + 6)], 5)), (0x1CEF2595L & (((((((g_239[g_174][(l_769 + 4)][l_769] == func_9((!((l_976 = l_755[(l_969 + 4)]) , g_258[g_174][(l_969 + 7)][l_969])), g_174, g_174, l_969, l_977)) && l_930) , g_160[1]) | l_908) ^ g_343[4]) > g_2) , 0xBB8C728DL))))) ^ l_738), g_96[0], l_978), g_136)));
                        if (l_960)
                            continue;
                        l_738 = (-1L);
                    }
                    for (l_969 = 0; (l_969 <= 3); l_969 += 1)
                    {
                        int l_1000 = 0x81483906L;
                        int i, j, k;
                        g_258[g_174][(l_969 + 6)][l_769] |= (func_88((safe_mod_func_int16_t_s_s((g_239[(g_174 + 1)][(l_769 + 4)][l_769] <= (((g_868 & (!((g_149 > (l_1000 = (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_u((l_882 ^ 0L), (safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((((safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_160[g_174], ((g_255++) != (g_868 | g_96[0])))), func_29((l_997[1] != l_781)))) != g_343[4]), l_755[3])) < 0x6BL) == l_17), l_17)), l_908)))) & 1L) <= g_160[1]) , g_96[0]), 0L)), g_343[2])))) && g_188))) && g_2) <= l_997[2])), 0x7C94L)), g_254[3]) <= g_99);
                    }
                    for (l_728 = 0; (l_728 <= 1); l_728 += 1)
                    {
                        l_1001--;
                    }
                    for (l_17 = 1; (l_17 >= 0); l_17 -= 1)
                    {
                        int i, j, k;
                        g_258[2][9][3] = ((((safe_rshift_func_int16_t_s_u(g_158[g_174][l_17][g_174], (l_960 && (((func_22(((g_343[4] <= 0L) > g_96[0]), (l_969 = 247UL)) || (func_9(((l_738 &= (func_88(g_99, g_927) | g_203)) > g_76), g_1006, g_48, g_503, g_76) | 0x02AAL)) != 0UL) && 9L)))) != l_940) & l_997[1]) & g_160[1]);
                        l_976 = ((safe_add_func_int32_t_s_s((1L < ((safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(0x0AL, ((g_328 ^ ((l_1013 &= (-1L)) & l_738)) , (-7L)))), (safe_rshift_func_uint16_t_u_u((func_22(((g_158[(l_769 + 2)][l_17][(l_769 + 6)] |= g_172) , (1UL > 1UL)), l_997[1]) & 0L), 12)))) <= l_977)), l_1001)) != 0x4786L);
                    }
                }
            }
            l_931 = ((safe_add_func_int32_t_s_s((g_240 , l_908), (l_755[4] = (g_514[4] || 0xB437L)))) , (g_258[2][9][3] = ((l_769 = (l_931 , func_62((((0x70C5L <= (safe_sub_func_int32_t_s_s(g_514[4], (0x41L | (func_3(g_514[4], l_940, l_898) < g_48))))) < l_908) , l_728), g_240, l_1020))) <= 0UL)));
        }
        l_755[4] = ((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_797, (g_203 = 0x8CD2L))), (l_755[4] | (l_818 |= ((g_649[2][0] = (g_343[4] | 0UL)) ^ (safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((l_882 , l_931), 6)) , (safe_mod_func_uint16_t_u_u(g_99, g_174))), g_136))))))) ^ g_99);
        for (g_523 = 0; (g_523 <= 0); g_523 += 1)
        {
            int l_1035 = 4L;
            int l_1043 = 0x873DBCB5L;
            int l_1045[3][8][10] = {{{0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}}, {{0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}}, {{0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}, {0x927D8028L, (-1L), 0x9F6ACA88L, 7L, 0x7D498451L, 1L, 0xA45F09D9L, 1L, 0x47F9E686L, (-1L)}}};
            int i, j, k;
            if ((g_96[g_523] , (g_258[0][9][0] = l_728)))
            {
                unsigned char l_1031 = 249UL;
                int l_1034[4][6] = {{1L, 0x67356B66L, 0x54AB0172L, 0x4DEF7E45L, 0x4DEF7E45L, 0x54AB0172L}, {1L, 0x67356B66L, 0x54AB0172L, 0x4DEF7E45L, 0x4DEF7E45L, 0x54AB0172L}, {1L, 0x67356B66L, 0x54AB0172L, 0x4DEF7E45L, 0x4DEF7E45L, 0x54AB0172L}, {1L, 0x67356B66L, 0x54AB0172L, 0x4DEF7E45L, 0x4DEF7E45L, 0x54AB0172L}};
                int i, j;
                --l_1031;
                if (g_503)
                {
                    unsigned char l_1041[10][9] = {{0xA4L, 255UL, 1UL, 255UL, 0xA4L, 255UL, 1UL, 255UL, 0xA4L}, {0xA4L, 255UL, 1UL, 255UL, 0xA4L, 255UL, 1UL, 255UL, 0xA4L}, {0xA4L, 255UL, 1UL, 255UL, 0xA4L, 255UL, 1UL, 255UL, 0xA4L}, {0xA4L, 255UL, 1UL, 255UL, 0xA4L, 255UL, 1UL, 255UL, 0xA4L}, {0xA4L, 255UL, 1UL, 255UL, 0xA4L, 255UL, 1UL, 255UL, 0xA4L}, {0xA4L, 255UL, 1UL, 255UL, 0xA4L, 255UL, 1UL, 255UL, 0xA4L}, {0xA4L, 255UL, 1UL, 255UL, 0xA4L, 255UL, 1UL, 255UL, 0xA4L}, {0xA4L, 255UL, 1UL, 255UL, 0xA4L, 255UL, 1UL, 255UL, 0xA4L}, {0xA4L, 255UL, 1UL, 255UL, 0xA4L, 255UL, 1UL, 255UL, 0xA4L}, {0xA4L, 255UL, 1UL, 255UL, 0xA4L, 255UL, 1UL, 255UL, 0xA4L}};
                    int i, j;
                    l_976 = (l_1041[3][5] = ((l_1035 = (l_1031 < (l_1034[1][5] ^= g_649[4][3]))) , (((g_239[4][4][2] | g_96[g_523]) | (l_898 | ((((g_254[3] == l_1038) != (safe_rshift_func_uint16_t_u_s(g_160[0], 3))) & g_523) > l_1038))) < g_239[6][4][1])));
                }
                else
                {
                    g_258[0][0][1] = g_696;
                    l_818 = l_1035;
                }
            }
            else
            {
                int l_1042 = 3L;
                int l_1044 = 0x58150E1AL;
                int l_1046 = 0xC734FD46L;
                int l_1047[5][7][3] = {{{0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}}, {{0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}}, {{0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}}, {{0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}}, {{0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}, {0x825F7AF4L, (-6L), 1L}}};
                int i, j, k;
                if (g_503)
                    break;
                ++l_1049[2];
                for (g_76 = 0; (g_76 <= 0); g_76 += 1)
                {
                    for (g_188 = 0; (g_188 <= 0); g_188 += 1)
                    {
                        if (l_1052)
                            break;
                    }
                    l_1053--;
                }
                if (l_898)
                    break;
            }
            if (g_45[0])
                break;
        }
    }
    else
    {
        int l_1058 = 0xA6968616L;
        for (g_48 = (-14); (g_48 == 42); ++g_48)
        {
            l_1058 = (g_258[2][9][3] = g_174);
            l_755[4] = (safe_rshift_func_int8_t_s_u((0x59D04C29L && (g_258[2][9][3] = g_708)), 1));
            g_258[2][9][3] = (safe_unary_minus_func_uint8_t_u(g_188));
            return g_172;
        }
        return g_649[2][0];
    }
    l_1052 &= ((l_818 ^= (g_343[5] <= (safe_sub_func_int8_t_s_s((l_1049[2] > func_88(g_328, (((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(0x0A76D2FDL, l_1068[0])), 3)) , (--g_96[0])) && (g_1076 = (safe_sub_func_uint8_t_u_u((((l_1068[0] | l_779[2]) & (((g_174 == (((safe_add_func_int16_t_s_s(((func_29(l_1075) ^ g_868) , 0x5B5BL), 0L)) | 0L) != 3L)) , 1UL) || 0x23L)) == 250UL), 0x99L)))))), l_755[1])))) , 0x17540094L);
    g_258[2][0][1] |= g_1006;
    for (g_503 = 0; (g_503 != 54); g_503 = safe_add_func_uint32_t_u_u(g_503, 3))
    {
        int l_1081[2][4] = {{0xCD6DADE0L, (-2L), 0xCD6DADE0L, (-2L)}, {0xCD6DADE0L, (-2L), 0xCD6DADE0L, (-2L)}};
        int l_1082[4][3] = {{0xA8BAEFB5L, 0xE6C5F113L, 0xA8BAEFB5L}, {0xA8BAEFB5L, 0xE6C5F113L, 0xA8BAEFB5L}, {0xA8BAEFB5L, 0xE6C5F113L, 0xA8BAEFB5L}, {0xA8BAEFB5L, 0xE6C5F113L, 0xA8BAEFB5L}};
        const int l_1091 = (-1L);
        short l_1128[1];
        unsigned short l_1141 = 65535UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1128[i] = 1L;
        l_1083 = (((l_1082[1][1] = (g_696 |= (+((((0x64F08DC9L < (((l_1052 = (safe_mod_func_uint32_t_u_u(g_96[0], l_1081[0][3]))) , func_39(g_189, (g_241 < (-4L)), g_172)) && (0xBD99L == l_1081[0][1]))) , l_931) , g_76) | l_1081[0][3])))) >= l_1081[1][0]) & l_818);
        for (g_708 = 4; (g_708 >= (-24)); g_708--)
        {
            char l_1090 = 0x8AL;
            const unsigned l_1110[4][9] = {{0UL, 0x6CB23169L, 0UL, 9UL, 2UL, 0xFD8EF230L, 1UL, 1UL, 0xFD8EF230L}, {0UL, 0x6CB23169L, 0UL, 9UL, 2UL, 0xFD8EF230L, 1UL, 1UL, 0xFD8EF230L}, {0UL, 0x6CB23169L, 0UL, 9UL, 2UL, 0xFD8EF230L, 1UL, 1UL, 0xFD8EF230L}, {0UL, 0x6CB23169L, 0UL, 9UL, 2UL, 0xFD8EF230L, 1UL, 1UL, 0xFD8EF230L}};
            unsigned short l_1113 = 65529UL;
            const char l_1137[2][1][7] = {{{0xF8L, 0xF8L, 0x9DL, 0xF8L, 0xF8L, 0x9DL, 0xF8L}}, {{0xF8L, 0xF8L, 0x9DL, 0xF8L, 0xF8L, 0x9DL, 0xF8L}}};
            int l_1148 = 2L;
            int l_1149 = 0x731DEA82L;
            unsigned l_1150[8][6] = {{4294967295UL, 1UL, 4294967295UL, 4294967295UL, 0x2C21867BL, 0UL}, {4294967295UL, 1UL, 4294967295UL, 4294967295UL, 0x2C21867BL, 0UL}, {4294967295UL, 1UL, 4294967295UL, 4294967295UL, 0x2C21867BL, 0UL}, {4294967295UL, 1UL, 4294967295UL, 4294967295UL, 0x2C21867BL, 0UL}, {4294967295UL, 1UL, 4294967295UL, 4294967295UL, 0x2C21867BL, 0UL}, {4294967295UL, 1UL, 4294967295UL, 4294967295UL, 0x2C21867BL, 0UL}, {4294967295UL, 1UL, 4294967295UL, 4294967295UL, 0x2C21867BL, 0UL}, {4294967295UL, 1UL, 4294967295UL, 4294967295UL, 0x2C21867BL, 0UL}};
            unsigned short l_1157[5][4] = {{0x0719L, 0xCA35L, 0xF5BBL, 0xCA35L}, {0x0719L, 0xCA35L, 0xF5BBL, 0xCA35L}, {0x0719L, 0xCA35L, 0xF5BBL, 0xCA35L}, {0x0719L, 0xCA35L, 0xF5BBL, 0xCA35L}, {0x0719L, 0xCA35L, 0xF5BBL, 0xCA35L}};
            int i, j, k;
            if ((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_1090, l_1090)), ((l_882 & (l_1091 != g_868)) | (safe_mod_func_int8_t_s_s((g_649[4][2] , l_1090), (safe_rshift_func_uint8_t_u_s(l_898, 5))))))))
            {
                g_258[2][3][1] = (safe_lshift_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(g_158[2][0][5], (safe_add_func_int16_t_s_s((-1L), l_1082[1][1])))) || 65526UL) >= g_239[4][4][1]), 4));
            }
            else
            {
                short l_1111 = 1L;
                int l_1133 = 0x800658FCL;
                for (l_1052 = 13; (l_1052 <= 19); l_1052++)
                {
                    int l_1112 = 1L;
                    int l_1136 = 0L;
                    l_1113 = (g_239[4][4][1] >= (safe_add_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_s((((((g_514[4] & g_868) ^ (l_1081[0][3] , (safe_mod_func_uint16_t_u_u((l_1110[1][0] , l_1110[1][0]), l_1111)))) , func_3(((((g_160[2] = g_239[0][6][2]) == func_62((l_898 , l_1112), g_523, g_174)) <= g_239[4][4][1]) && g_232[0][0]), g_258[1][5][3], g_649[2][0])) | 1L) > l_1111), 13)) == g_239[0][7][1]) , (-10L)) == l_1053), l_1111)));
                    l_931 ^= (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((((func_88(g_76, (((safe_rshift_func_int16_t_s_u((((safe_mod_func_int32_t_s_s((g_239[3][4][2] , (0xD5DD9670L >= ((((l_755[4] || ((safe_add_func_uint32_t_u_u((g_868 = func_39((g_188++), func_29(g_254[3]), (func_3(l_1111, (l_755[1] = 0xEBL), g_96[0]) >= l_1111))), g_343[4])) | 0xFC0D6437L)) && g_503) == l_1111) & 0x0D3C63F2L))), l_1111)) <= 0x3AF3L) > 1L), g_76)) || 0xC0030896L) || l_1090)) , g_868) || l_1110[0][2]) ^ 1UL), 1L)), 4));
                    for (g_253 = 1; (g_253 >= (-19)); g_253 = safe_sub_func_int32_t_s_s(g_253, 6))
                    {
                        l_1128[0] = g_172;
                        g_258[2][9][3] = 0x61A00175L;
                    }
                    g_258[2][9][3] |= (safe_rshift_func_uint8_t_u_s((g_1006 ^ (g_160[1] |= 0L)), ((-1L) && ((((((safe_add_func_uint16_t_u_u((l_1082[2][1] = ((l_1133 ^= g_96[0]) <= (safe_sub_func_uint16_t_u_u(g_232[4][0], 0xEFE3L)))), func_29((!(g_240 , ((((((l_1136 &= func_22((g_649[4][0] || g_503), l_1112)) <= (-1L)) < g_188) >= l_1049[0]) != l_1091) == g_232[4][0])))))) || l_1137[1][0][5]) , l_1082[0][2]) < l_1111) ^ 1UL) & g_708))));
                }
                g_258[2][9][3] = g_649[2][0];
            }
            l_1082[1][1] = (func_88((65530UL > l_1138), l_931) || (((l_1090 || l_1049[2]) | l_1137[1][0][5]) ^ l_1110[1][0]));
            if ((((func_29((func_3((0xAE1E06E3L <= (safe_lshift_func_uint8_t_u_s((l_1082[1][2] = (g_927 || (l_1141 && ((0xA9L <= (safe_add_func_int32_t_s_s((l_1149 ^= ((func_31((+(g_649[7][0] & (l_1148 = (l_1082[1][0] |= (((safe_unary_minus_func_uint8_t_u((((6L >= l_1128[0]) >= l_1091) >= (--g_1145)))) > l_1090) > (-4L)))))), l_1110[3][0], l_1068[0], g_45[0], l_755[1]) | l_1081[1][1]) || l_1137[1][0][5])), g_160[4]))) | 0xA8A4L)))), 2))), g_649[0][1], l_1137[1][0][5]) && 0xFFL)) > 4L) > 0UL) == 2L))
            {
                ++l_1150[7][0];
            }
            else
            {
                for (l_882 = 26; (l_882 >= 38); l_882 = safe_add_func_uint8_t_u_u(l_882, 4))
                {
                    g_258[4][8][3] = (l_1157[0][2] = (0UL | (l_1052 = (safe_add_func_int32_t_s_s(g_158[2][0][5], 4294967295UL)))));
                }
            }
        }
    }
    return g_48;
}







static unsigned char func_3(const unsigned short p_4, char p_5, unsigned p_6)
{
    int l_712[9];
    int l_726 = 0x2412AF69L;
    int i;
    for (i = 0; i < 9; i++)
        l_712[i] = 0x21225120L;
    l_712[0] = (((safe_rshift_func_int8_t_s_u(g_48, (l_712[4] != ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(func_62((p_6 = p_4), (safe_add_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint8_t_u_u((((+((l_726 &= l_712[2]) , (g_48 >= (g_254[3] >= 2UL)))) , ((l_726 ^= g_239[2][4][0]) , (0UL & g_177))) <= 0xB969L), l_712[5])) | 0x0E67L))), 0xF7L)), l_712[4]), 4)) , l_712[4]), p_5)) , 0xECL) ^ 1L) , g_240) | 0x0C8DL), g_48)), l_712[4])) >= 0xB91AF014L)))) , l_726) , p_5);
    return p_5;
}







static unsigned func_9(const int p_10, unsigned char p_11, unsigned p_12, char p_13, unsigned short p_14)
{
    unsigned l_709 = 0xA783A75CL;
    g_258[0][0][0] = l_709;
    return g_153;
}







static unsigned short func_20(const char p_21)
{
    unsigned short l_25 = 0x66E9L;
    int l_26 = (-4L);
    int l_43 = 8L;
    int l_44 = 0x4E1054D8L;
    unsigned l_266 = 0x35C2DBD2L;
    char l_536 = 0x1CL;
    int l_558 = (-1L);
    int l_561 = 0x35446DF0L;
    int l_564 = 0xBB174DB1L;
    int l_566[9][8] = {{(-1L), 0x741E0170L, 0x18580C63L, 3L, (-9L), 0x2B88B010L, 8L, 0x5348FDDFL}, {(-1L), 0x741E0170L, 0x18580C63L, 3L, (-9L), 0x2B88B010L, 8L, 0x5348FDDFL}, {(-1L), 0x741E0170L, 0x18580C63L, 3L, (-9L), 0x2B88B010L, 8L, 0x5348FDDFL}, {(-1L), 0x741E0170L, 0x18580C63L, 3L, (-9L), 0x2B88B010L, 8L, 0x5348FDDFL}, {(-1L), 0x741E0170L, 0x18580C63L, 3L, (-9L), 0x2B88B010L, 8L, 0x5348FDDFL}, {(-1L), 0x741E0170L, 0x18580C63L, 3L, (-9L), 0x2B88B010L, 8L, 0x5348FDDFL}, {(-1L), 0x741E0170L, 0x18580C63L, 3L, (-9L), 0x2B88B010L, 8L, 0x5348FDDFL}, {(-1L), 0x741E0170L, 0x18580C63L, 3L, (-9L), 0x2B88B010L, 8L, 0x5348FDDFL}, {(-1L), 0x741E0170L, 0x18580C63L, 3L, (-9L), 0x2B88B010L, 8L, 0x5348FDDFL}};
    int i, j;
    g_258[1][6][1] = func_22(g_2, ((g_523 &= ((l_26 &= l_25) == (g_2 && (((l_25 > func_29((func_31((safe_add_func_uint32_t_u_u(func_39((g_45[0]++), (g_48 = p_21), p_21), ((l_44 = (l_266 > ((safe_add_func_uint32_t_u_u(g_258[2][9][3], p_21)) & l_43))) > 8L))), l_43, g_76, g_258[0][2][3], p_21) , g_255))) > l_25) == (-2L))))) == p_21));
    if ((l_536 = p_21))
    {
        int l_550 = (-6L);
        int l_553 = (-8L);
        int l_555 = 0x9B2E18D2L;
        int l_556 = 0x807CDF8EL;
        int l_563[7];
        unsigned char l_573 = 249UL;
        unsigned l_588 = 0x75094358L;
        char l_603 = 0xF8L;
        char l_634 = 0L;
        int i;
        for (i = 0; i < 7; i++)
            l_563[i] = (-1L);
        for (g_76 = (-23); (g_76 == 22); ++g_76)
        {
            short l_547 = 1L;
            int l_552[5];
            char l_579 = 0x7BL;
            int i;
            for (i = 0; i < 5; i++)
                l_552[i] = 0x7ECE6A14L;
            for (g_153 = (-15); (g_153 == 14); g_153++)
            {
                unsigned short l_543 = 9UL;
                int l_548 = 0x8EABC92FL;
                int l_549 = 1L;
                int l_560 = 0xC9804A95L;
                int l_562 = 0xF4370587L;
                int l_565 = 0x2BC2F0A1L;
                int l_567[4] = {0xD416572CL, (-9L), 0xD416572CL, (-9L)};
                unsigned char l_580 = 0x29L;
                int i;
                for (g_172 = 0; (g_172 > 34); ++g_172)
                {
                    return l_543;
                }
                for (g_253 = 29; (g_253 != 25); g_253 = safe_sub_func_uint16_t_u_u(g_253, 6))
                {
                    short l_546 = 0xF6D0L;
                    int l_551 = 0x3FB7F2EAL;
                    int l_554 = 1L;
                    int l_557 = 0x0DFA764DL;
                    int l_559[8] = {0x927D9846L, 1L, 0x927D9846L, 1L, 0x927D9846L, 1L, 0x927D9846L, 1L};
                    unsigned l_568 = 0UL;
                    unsigned char l_576 = 0UL;
                    int i;
                    l_568++;
                    if ((safe_add_func_int8_t_s_s(l_573, (l_554 = func_29(g_158[2][0][5])))))
                    {
                        char l_574 = 0x33L;
                        int l_575[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_575[i] = (-1L);
                        l_576--;
                        l_580++;
                    }
                    else
                    {
                        unsigned l_583 = 0x56E84E1EL;
                        int l_602 = 0L;
                        l_567[0] = ((l_583 , func_29(((l_561 = (p_21 | func_88((l_602 = (((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((((l_588 = 255UL) , (safe_rshift_func_int8_t_s_s((0xA16BL ^ l_543), (safe_sub_func_int8_t_s_s(((p_21 , (g_343[4] , (safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(0UL, (safe_mod_func_int8_t_s_s(func_29(((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint8_t_u_s((p_21 & 0UL), 5)))) , l_548)), g_514[4])))), l_549)))) > p_21), p_21))))) && 1UL), p_21)), g_45[0])) != g_253) , g_253)), l_583))) ^ 0x2ABA41DFL))) , l_603);
                    }
                }
                if (l_579)
                {
                    return g_45[0];
                }
                else
                {
                    unsigned l_607 = 4294967294UL;
                    int l_624 = (-1L);
                    int l_625 = 0x3DFAFB60L;
                    for (l_550 = 0; (l_550 <= 4); l_550 += 1)
                    {
                        int i;
                        g_258[1][1][3] ^= g_160[l_550];
                    }
                    for (g_157 = 0; (g_157 <= 0); g_157 += 1)
                    {
                        short l_604 = 0x71D2L;
                        int l_605[4];
                        int l_606 = 0x204F3379L;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_605[i] = 0xB3C79BE6L;
                        l_607--;
                        g_258[2][9][3] ^= 0x194118A9L;
                        l_625 |= (safe_sub_func_uint8_t_u_u(((l_556 = (safe_rshift_func_uint16_t_u_u(((((g_45[0] & (!func_29(func_22((safe_mod_func_int32_t_s_s(g_149, p_21)), ((l_566[7][3] ^ ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((65532UL && (safe_rshift_func_int16_t_s_u((func_29((l_624 = ((g_172 < (g_255 = (((safe_sub_func_int32_t_s_s((l_558 ^= p_21), (255UL & (p_21 >= p_21)))) , 0x18L) , 4294967288UL))) >= p_21))) && 0UL), g_177))), p_21)), g_48)) , p_21)) , p_21))))) ^ p_21) < 7UL) <= (-10L)), g_96[0]))) <= p_21), 0xF1L));
                        if (p_21)
                            break;
                    }
                    return p_21;
                }
            }
            g_258[3][5][3] = ((g_158[1][1][0] < (safe_rshift_func_uint8_t_u_u((func_29(p_21) & (safe_add_func_uint32_t_u_u(0x2DCD4894L, g_157))), 1))) , (safe_unary_minus_func_uint16_t_u(((func_29(l_550) ^ (safe_unary_minus_func_int8_t_s((((safe_add_func_uint32_t_u_u(func_31(((l_552[1] |= ((((!l_588) || 0x57L) && 0L) > 0xDBL)) , p_21), p_21, l_536, l_555, l_563[3]), g_174)) <= g_253) == p_21)))) & g_76))));
            l_552[0] |= ((0x2D0982ACL || g_240) & func_22(g_514[4], l_634));
        }
        return l_564;
    }
    else
    {
        unsigned l_643 = 0UL;
        int l_652 = 0xE7157C2AL;
        int l_655 = 0xE119C30BL;
        int l_670 = 0x9DEC9552L;
        unsigned short l_671 = 0x0705L;
        for (g_523 = (-30); (g_523 < 32); g_523++)
        {
            unsigned char l_648 = 1UL;
            int l_650 = 0x45D2F56EL;
            int l_651 = 0x9CF226F6L;
            int l_653 = 0xDAB4B14AL;
            int l_654[10] = {0x0895DDEEL, 0L, 0x0895DDEEL, 0L, 0x0895DDEEL, 0L, 0x0895DDEEL, 0L, 0x0895DDEEL, 0L};
            unsigned char l_656[5][2][3] = {{{0x0AL, 255UL, 0xA6L}, {0x0AL, 255UL, 0xA6L}}, {{0x0AL, 255UL, 0xA6L}, {0x0AL, 255UL, 0xA6L}}, {{0x0AL, 255UL, 0xA6L}, {0x0AL, 255UL, 0xA6L}}, {{0x0AL, 255UL, 0xA6L}, {0x0AL, 255UL, 0xA6L}}, {{0x0AL, 255UL, 0xA6L}, {0x0AL, 255UL, 0xA6L}}};
            unsigned l_699 = 0x9D2F2C89L;
            int i, j, k;
            for (g_76 = 0; (g_76 > 4); g_76 = safe_add_func_uint16_t_u_u(g_76, 7))
            {
                g_649[2][0] = ((((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((~(((l_44 & (((p_21 >= (-5L)) ^ (l_561 = l_643)) , 0xF8BF88D9L)) && (((g_96[0] = ((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((p_21 && (0x1912L ^ 0xF819L)), g_523)) && g_160[1]), 0x90L)) >= 0xE413L)) ^ g_232[1][0]) == 0x33EEBA1CL)) | l_643)), l_643)), l_648)) ^ g_174) , l_561) <= p_21);
                l_656[1][0][1]--;
                for (g_153 = 0; (g_153 > 6); g_153 = safe_add_func_int32_t_s_s(g_153, 6))
                {
                    unsigned short l_661 = 0x1CEDL;
                    --l_661;
                }
            }
            l_650 |= 0x7F763601L;
            for (g_241 = 0; (g_241 < 39); ++g_241)
            {
                short l_666 = 0L;
                int l_668 = 0x7745285AL;
                int l_684 = (-6L);
                unsigned short l_685 = 0x5873L;
                for (g_149 = 0; (g_149 <= 4); g_149 += 1)
                {
                    char l_667 = 1L;
                    int l_669[2][1];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_669[i][j] = 0x9EA6C022L;
                    }
                    ++l_671;
                    g_258[2][4][3] = (l_685 = (safe_add_func_int32_t_s_s(0x430D8334L, (l_653 &= ((((l_650 = l_561) < (safe_sub_func_int8_t_s_s(((-2L) > ((l_643 == (((((((safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((l_684 = func_88(((safe_rshift_func_uint8_t_u_u(1UL, 1)) , func_88(g_48, g_76)), l_651)), l_670)) < 4294967295UL), 7UL)) && 65535UL) , p_21) | p_21) | 0xFB79L) && g_649[2][0]) > l_671)) ^ l_667)), l_43))) > g_514[1]) != (-5L))))));
                    g_696 |= ((p_21 & (safe_mod_func_uint32_t_u_u(((((g_160[4] > ((p_21 || (func_29((+(safe_add_func_int16_t_s_s(p_21, (((func_88(g_255, g_258[1][0][0]) & (safe_add_func_int32_t_s_s(p_21, (((((safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(0x0EL, p_21)), 6)) && l_656[0][0][0]) , l_561) && g_189) || 1L)))) != l_650) & l_654[9]))))) >= l_685)) >= g_203)) , 0xA6705044L) && p_21) == l_684), l_648))) != g_172);
                }
                l_652 &= g_153;
            }
            g_708 = ((l_566[3][6] >= ((g_258[2][9][3] &= ((0xFAC4L > (((l_558 = (safe_mod_func_uint32_t_u_u((l_699 >= ((l_653 = (0UL == ((safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(p_21, ((-8L) >= (safe_rshift_func_uint8_t_u_u(g_239[4][4][1], 5))))), (((0xE1E1L == (safe_rshift_func_int16_t_s_s((p_21 , p_21), p_21))) <= g_188) , p_21))) ^ g_514[2]))) == (-1L))), p_21))) , 0L) > g_177)) <= 0x9C01L)) == l_648)) || l_648);
        }
    }
    return p_21;
}







static int func_22(unsigned p_23, unsigned char p_24)
{
    int l_524[8] = {0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L};
    int l_525 = 0xB4C5D0B1L;
    int l_526 = 0x0A282B2FL;
    int l_527 = 1L;
    int l_528 = 0xFC24A00DL;
    int l_529 = 1L;
    int l_530 = 5L;
    int l_531 = 0x0D20D9E4L;
    int l_532[5];
    unsigned l_533[4][4] = {{0x2D5A34ABL, 4294967291UL, 0x2D5A34ABL, 4294967291UL}, {0x2D5A34ABL, 4294967291UL, 0x2D5A34ABL, 4294967291UL}, {0x2D5A34ABL, 4294967291UL, 0x2D5A34ABL, 4294967291UL}, {0x2D5A34ABL, 4294967291UL, 0x2D5A34ABL, 4294967291UL}};
    int i, j;
    for (i = 0; i < 5; i++)
        l_532[i] = 0x04310051L;
    l_533[2][2]++;
    return g_96[0];
}







static int func_29(int p_30)
{
    return p_30;
}







static short func_31(int p_32, unsigned short p_33, unsigned p_34, int p_35, unsigned p_36)
{
    unsigned l_272[5];
    int l_275 = 0x1A4CF780L;
    int l_349 = (-6L);
    int l_351 = 7L;
    int l_355[3][5][7] = {{{(-1L), (-1L), 8L, (-1L), (-1L), 8L, (-1L)}, {(-1L), (-1L), 8L, (-1L), (-1L), 8L, (-1L)}, {(-1L), (-1L), 8L, (-1L), (-1L), 8L, (-1L)}, {(-1L), (-1L), 8L, (-1L), (-1L), 8L, (-1L)}, {(-1L), (-1L), 8L, (-1L), (-1L), 8L, (-1L)}}, {{(-1L), (-1L), 8L, (-1L), (-1L), 8L, (-1L)}, {(-1L), (-1L), 8L, (-1L), (-1L), 8L, (-1L)}, {(-1L), (-1L), 8L, (-1L), (-1L), 8L, (-1L)}, {(-1L), (-1L), 8L, (-1L), (-1L), 8L, (-1L)}, {(-1L), (-1L), 8L, (-1L), (-1L), 8L, (-1L)}}, {{(-1L), (-1L), 8L, (-1L), (-1L), 8L, (-1L)}, {(-1L), (-1L), 8L, (-1L), (-1L), 8L, (-1L)}, {(-1L), (-1L), 8L, (-1L), (-1L), 8L, (-1L)}, {(-1L), (-1L), 8L, (-1L), (-1L), 8L, (-1L)}, {(-1L), (-1L), 8L, (-1L), (-1L), 8L, (-1L)}}};
    unsigned short l_423 = 65529UL;
    unsigned char l_472[3][6][4] = {{{0UL, 255UL, 5UL, 5UL}, {0UL, 255UL, 5UL, 5UL}, {0UL, 255UL, 5UL, 5UL}, {0UL, 255UL, 5UL, 5UL}, {0UL, 255UL, 5UL, 5UL}, {0UL, 255UL, 5UL, 5UL}}, {{0UL, 255UL, 5UL, 5UL}, {0UL, 255UL, 5UL, 5UL}, {0UL, 255UL, 5UL, 5UL}, {0UL, 255UL, 5UL, 5UL}, {0UL, 255UL, 5UL, 5UL}, {0UL, 255UL, 5UL, 5UL}}, {{0UL, 255UL, 5UL, 5UL}, {0UL, 255UL, 5UL, 5UL}, {0UL, 255UL, 5UL, 5UL}, {0UL, 255UL, 5UL, 5UL}, {0UL, 255UL, 5UL, 5UL}, {0UL, 255UL, 5UL, 5UL}}};
    char l_499[1][3];
    unsigned char l_520 = 7UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_272[i] = 0x3A090F8DL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_499[i][j] = 0L;
    }
    l_272[3] |= (g_2 , ((safe_add_func_uint32_t_u_u(p_32, (p_36 | (safe_unary_minus_func_uint32_t_u(8UL))))) <= p_35));
    for (g_203 = (-1); (g_203 <= 35); g_203++)
    {
        char l_289 = 0x3BL;
        int l_307 = 0x5A6C28FBL;
        int l_345 = (-3L);
        int l_346 = (-7L);
        int l_347 = 0L;
        int l_352 = 0xFE5755B5L;
        int l_354[4][10] = {{1L, 0xCB067467L, 1L, 0x55F0420DL, 0x2849DB34L, 0x8B93C8B6L, 0x2849DB34L, 0x55F0420DL, 1L, 0xCB067467L}, {1L, 0xCB067467L, 1L, 0x55F0420DL, 0x2849DB34L, 0x8B93C8B6L, 0x2849DB34L, 0x55F0420DL, 1L, 0xCB067467L}, {1L, 0xCB067467L, 1L, 0x55F0420DL, 0x2849DB34L, 0x8B93C8B6L, 0x2849DB34L, 0x55F0420DL, 1L, 0xCB067467L}, {1L, 0xCB067467L, 1L, 0x55F0420DL, 0x2849DB34L, 0x8B93C8B6L, 0x2849DB34L, 0x55F0420DL, 1L, 0xCB067467L}};
        int i, j;
        l_275 ^= p_34;
        if (l_272[3])
        {
            p_35 = g_174;
        }
        else
        {
            unsigned l_297 = 0UL;
            char l_303 = 0x3EL;
            int l_306[6] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
            int l_327 = 0x4C9B8622L;
            unsigned char l_373 = 0xA3L;
            int i;
            for (g_240 = 4; (g_240 >= 1); g_240 -= 1)
            {
                const int l_288[7][3][1] = {{{7L}, {7L}, {7L}}, {{7L}, {7L}, {7L}}, {{7L}, {7L}, {7L}}, {{7L}, {7L}, {7L}}, {{7L}, {7L}, {7L}}, {{7L}, {7L}, {7L}}, {{7L}, {7L}, {7L}}};
                int l_302 = (-1L);
                int l_344[7][6] = {{0x48A360B7L, (-2L), 0xB08A2019L, 0x29D42D1DL, 0x70FE3787L, (-1L)}, {0x48A360B7L, (-2L), 0xB08A2019L, 0x29D42D1DL, 0x70FE3787L, (-1L)}, {0x48A360B7L, (-2L), 0xB08A2019L, 0x29D42D1DL, 0x70FE3787L, (-1L)}, {0x48A360B7L, (-2L), 0xB08A2019L, 0x29D42D1DL, 0x70FE3787L, (-1L)}, {0x48A360B7L, (-2L), 0xB08A2019L, 0x29D42D1DL, 0x70FE3787L, (-1L)}, {0x48A360B7L, (-2L), 0xB08A2019L, 0x29D42D1DL, 0x70FE3787L, (-1L)}, {0x48A360B7L, (-2L), 0xB08A2019L, 0x29D42D1DL, 0x70FE3787L, (-1L)}};
                unsigned l_360 = 1UL;
                int i, j, k;
                if (((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(0xE2L, (safe_mod_func_uint32_t_u_u((g_255 ^= func_62(g_160[g_240], (g_149 |= (safe_rshift_func_uint16_t_u_s(4UL, 4))), g_160[g_240])), (safe_mod_func_uint16_t_u_u((0xEE88L < (safe_mod_func_uint8_t_u_u(g_160[g_240], (p_34 , 5UL)))), l_288[5][0][0])))))), 0xC6L)) | 0L))
                {
                    const short l_292 = (-1L);
                    int l_312 = 0x032D9703L;
                    int l_313[10] = {0xE2B11530L, 0xB6C84F80L, 0xCB6A1154L, 0xCB6A1154L, 0xB6C84F80L, 0xE2B11530L, 0xB6C84F80L, 0xCB6A1154L, 0xCB6A1154L, 0xB6C84F80L};
                    int i;
                    if ((p_35 = (g_258[2][1][1] = (((l_289 && (safe_rshift_func_int16_t_s_u((!l_292), ((safe_mod_func_uint32_t_u_u(((g_158[2][0][5] & (l_292 == p_34)) , (l_302 = (safe_sub_func_uint16_t_u_u((l_297 || (0x6BL <= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(p_32, 7)), 8)))), l_292)))), p_35)) > g_153)))) || 0xB178A9D3L) , 0x01E25683L))))
                    {
                        p_35 = ((l_302 = p_32) , ((((p_34 && (l_303 , p_36)) , (--g_136)) , (l_275 = func_88(l_289, g_174))) > 1UL));
                        p_35 = (g_239[4][4][1] == ((g_45[0]++) || (g_153 != (((safe_lshift_func_int16_t_s_u(p_35, ((g_45[0]--) & l_275))) & (g_188 >= p_33)) == g_258[2][9][3]))));
                        if (p_35)
                            break;
                    }
                    else
                    {
                        p_35 ^= 0x9D6BD1B4L;
                        l_302 = ((safe_add_func_uint16_t_u_u((+l_272[3]), 0L)) ^ 0xD4500237L);
                    }
                    if ((g_253 | p_35))
                    {
                        return g_149;
                    }
                    else
                    {
                        if (g_203)
                            break;
                        p_35 = func_62(((0x3A4BL ^ p_33) != (((!((g_258[2][9][1] >= g_96[0]) >= l_289)) , ((g_258[2][9][3] > (0x4FL && g_239[0][5][0])) < p_36)) == p_36)), l_313[7], l_303);
                    }
                }
                else
                {
                    unsigned l_322 = 7UL;
                    int l_348 = (-8L);
                    int l_353 = 0xE6DA2EC2L;
                    int l_356[4][5][8] = {{{0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}}, {{0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}}, {{0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}}, {{0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}, {0x8EBB0A38L, 0x195F14F3L, (-6L), 0xB3CD95A6L, 1L, 0x898A8FA9L, (-2L), 0xA0CEEA60L}}};
                    unsigned l_357[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_357[i] = 4294967295UL;
                    g_328 = (safe_rshift_func_uint8_t_u_s(g_160[g_240], ((l_289 & (safe_mod_func_uint32_t_u_u(g_99, (g_258[2][9][3] ^= l_322)))) < (((l_275 , ((g_232[4][0] , g_177) < (l_327 = ((safe_rshift_func_uint8_t_u_s(0xF7L, 6)) || ((((safe_rshift_func_int16_t_s_s((l_275 = g_239[4][4][1]), g_160[1])) , (-10L)) >= g_160[g_240]) ^ 4294967295UL))))) , p_34) && p_35))));
                    if ((((g_258[2][9][3] |= p_35) != (l_302 = 0x2071DDF2L)) > (l_306[5] = ((p_33 = p_35) > (((p_32 & ((p_34++) || ((l_344[2][5] &= (((((safe_add_func_uint32_t_u_u(func_88((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((p_34 > ((safe_add_func_int32_t_s_s(g_160[0], func_62(p_32, (((l_307 = (g_343[4] = func_88((g_158[2][0][5] = g_189), p_32))) , l_322) ^ g_2), g_160[g_240]))) <= l_272[3])) != 0x4A3AL) & 246UL), g_232[1][0])), l_322)), p_36)), g_45[0]), g_253)) , l_289) , 0x619D033DL) || p_36) >= g_2)) <= 0L))) ^ 0x4C30CFF8L) < l_288[5][0][0])))))
                    {
                        int l_350[1][3];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_350[i][j] = 0x4040F5C5L;
                        }
                        --l_357[0];
                    }
                    else
                    {
                        return p_32;
                    }
                    g_258[2][9][3] = ((l_360 == ((((safe_lshift_func_int16_t_s_u(4L, 1)) > (++g_343[1])) != p_33) < (g_188 &= (func_62((p_34 <= (safe_rshift_func_int8_t_s_s(((l_351 = (l_327 ^= (0x7EL != g_136))) == func_88(p_33, (safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s(((p_35 <= (safe_lshift_func_uint8_t_u_s((+0xDFL), g_254[3]))) || (-1L)), 13)) == l_357[0]) == p_32), 0xB766L)))), l_353))), l_373, l_357[0]) < 0x204423AFL)))) < 0x8EAFL);
                }
            }
            for (l_352 = 0; (l_352 == 1); l_352 = safe_add_func_int16_t_s_s(l_352, 5))
            {
                const unsigned l_393 = 0x2B54289FL;
                p_35 = func_88(g_239[4][4][1], g_241);
                l_347 = (p_35 = p_36);
                if ((g_258[2][9][3] = (safe_rshift_func_uint8_t_u_s((l_355[0][4][1] = (~p_33)), 5))))
                {
                    char l_388 = (-5L);
                    int l_392 = 0xE0F0D33AL;
                    unsigned l_394 = 0UL;
                    if (func_62(func_62((((p_35 = ((g_239[4][3][2] | (((safe_add_func_uint16_t_u_u(p_33, (l_346 >= l_289))) >= (l_306[4] ^= ((safe_mod_func_uint8_t_u_u(l_345, ((safe_sub_func_uint32_t_u_u(g_188, (safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_388 = 0UL), func_62(func_88(((((p_34 >= func_62((p_36 = (safe_add_func_uint32_t_u_u((l_307 = ((((safe_unary_minus_func_int32_t_s(l_392)) , 0x0BAB50F5L) < l_347) && l_393)), 1UL))), l_355[1][1][6], g_328)) && 5L) , g_45[0]) , l_289), g_241), p_35, g_160[4]))), l_392)))) & p_35))) , p_33))) | l_393)) , l_388)) > p_33) && 0x80588B12L), l_394, p_33), p_32, g_232[4][0]))
                    {
                        g_258[2][8][2] = (l_393 > (-6L));
                    }
                    else
                    {
                        return p_36;
                    }
                }
                else
                {
                    unsigned short l_407[10] = {0xF233L, 65535UL, 0x861DL, 0x861DL, 65535UL, 0xF233L, 65535UL, 0x861DL, 0x861DL, 65535UL};
                    int l_410 = 0x3912ADB7L;
                    int i;
                    l_347 |= (safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(l_393, 7)) , (((func_62(g_174, (((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(p_33, (((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((l_407[5] = l_373), (safe_lshift_func_uint16_t_u_s(((p_34 || g_177) >= l_354[1][0]), 4)))) , l_407[6]), 0xC12483F0L)) & l_297) > l_410))) != p_33) != 0x29L), 0)) != l_410) , g_255), p_32) || 4294967287UL) , l_297) , g_241)), g_174));
                    return p_33;
                }
                l_306[0] &= (safe_unary_minus_func_int8_t_s((safe_sub_func_int32_t_s_s((p_33 != (safe_sub_func_uint8_t_u_u(((+((safe_add_func_uint16_t_u_u(1UL, p_35)) <= (g_96[0]--))) < g_254[2]), g_174))), (p_32 || g_328)))));
            }
        }
    }
    for (g_172 = 1; (g_172 <= 4); g_172 += 1)
    {
        int l_420 = 5L;
        int l_421 = 0L;
        int l_422[3];
        int l_469 = 0x38D8A9DCL;
        int l_519 = 0L;
        int i;
        for (i = 0; i < 3; i++)
            l_422[i] = (-1L);
        l_423--;
        for (g_241 = 0; (g_241 <= 2); g_241 += 1)
        {
            unsigned l_436 = 4294967294UL;
            int l_453 = 0x2772F636L;
            int l_464 = 0x02204B0BL;
            int l_465 = 0x17E24A95L;
            int l_466[6][4][6] = {{{1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}}, {{1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}}, {{1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}}, {{1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}}, {{1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}}, {{1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}, {1L, 9L, 0L, 0L, 1L, 0xE096B943L}}};
            int l_468 = 0x57B1C7FEL;
            unsigned short l_504 = 65534UL;
            int i, j, k;
            for (g_157 = 0; (g_157 <= 2); g_157 += 1)
            {
                int l_443 = 4L;
                int l_515 = 0xC6ECB685L;
                int l_516 = 0x081BCC7BL;
                int l_517 = (-1L);
                int l_518 = 0x0E345AEDL;
                int i, j, k;
                if ((safe_mod_func_uint8_t_u_u(func_88((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((l_355[g_241][g_172][(g_241 + 1)] , (g_45[0] = l_355[g_241][(g_241 + 2)][g_172])) != l_272[g_172]), 6)), g_258[2][9][3])), ((safe_rshift_func_int8_t_s_u(p_35, l_355[g_241][(g_241 + 2)][g_172])) , (g_2 > ((((safe_lshift_func_int8_t_s_u(g_188, g_160[1])) , g_240) , l_423) , p_36)))), p_34)))
                {
                    l_436--;
                    p_35 = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(l_443, 6)), 6));
                }
                else
                {
                    unsigned short l_452 = 9UL;
                    int l_470 = 0L;
                    g_258[0][0][2] = (-7L);
                    for (g_328 = 0; (g_328 <= 42); g_328++)
                    {
                        unsigned l_454[8][1][5] = {{{4294967295UL, 4294967293UL, 4294967292UL, 4294967293UL, 4294967295UL}}, {{4294967295UL, 4294967293UL, 4294967292UL, 4294967293UL, 4294967295UL}}, {{4294967295UL, 4294967293UL, 4294967292UL, 4294967293UL, 4294967295UL}}, {{4294967295UL, 4294967293UL, 4294967292UL, 4294967293UL, 4294967295UL}}, {{4294967295UL, 4294967293UL, 4294967292UL, 4294967293UL, 4294967295UL}}, {{4294967295UL, 4294967293UL, 4294967292UL, 4294967293UL, 4294967295UL}}, {{4294967295UL, 4294967293UL, 4294967292UL, 4294967293UL, 4294967295UL}}, {{4294967295UL, 4294967293UL, 4294967292UL, 4294967293UL, 4294967295UL}}};
                        int i, j, k;
                        l_443 |= (func_88(((-1L) && ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((p_34 != l_355[0][4][5]), (((g_343[1] , ((l_355[g_241][(g_241 + 2)][g_172] , (l_452 = ((0UL != ((func_88(g_254[4], p_32) == 8L) , 0x09336E04L)) , 1L))) <= p_33)) > p_33) != 1L))), 7)) && l_349), l_349)) || p_32)), g_99) != 0xC26EFFDCL);
                        l_454[5][0][4]--;
                    }
                    if ((l_272[3] & (g_160[3] && l_272[g_172])))
                    {
                        unsigned l_461 = 1UL;
                        int l_467 = 0xB4E0C9C6L;
                        int l_471[3];
                        int l_481 = 0xFCA1418AL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_471[i] = 1L;
                        l_422[1] |= (l_453 = (((g_241 ^ (!((g_203 > (g_203 <= (g_2 || l_461))) , (((l_452 <= (p_33 && (((func_88((safe_lshift_func_int16_t_s_u((g_232[6][0] = g_153), 15)), g_174) ^ p_36) < l_461) , l_436))) >= 4L) && (-3L))))) , g_254[4]) , l_423));
                        l_472[1][0][0]--;
                        p_35 = ((safe_lshift_func_uint8_t_u_s(func_88((l_453 &= ((~l_461) || (safe_sub_func_uint8_t_u_u(l_466[1][1][3], (0x8CB35601L ^ ((p_36 | ((l_467 &= l_471[1]) && ((0xCCL <= (g_343[2] = (((p_34 , g_2) ^ func_88(p_32, p_35)) , 3UL))) && l_420))) , g_45[0])))))), l_422[1]), l_420)) || g_149);
                        l_481 = (l_471[1] ^ (l_443 = func_88((65526UL < 0x243FL), (safe_rshift_func_uint16_t_u_u(g_177, 5)))));
                    }
                    else
                    {
                        return p_35;
                    }
                }
                if (func_88((l_472[1][0][0] == (g_149 &= (~(p_33--)))), l_422[1]))
                {
                    return g_328;
                }
                else
                {
                    unsigned char l_484 = 0UL;
                    int l_500[4][6] = {{0xA3C2F25FL, 0xA3C2F25FL, 0x468071C9L, 0xA3C2F25FL, 0xA3C2F25FL, 0x468071C9L}, {0xA3C2F25FL, 0xA3C2F25FL, 0x468071C9L, 0xA3C2F25FL, 0xA3C2F25FL, 0x468071C9L}, {0xA3C2F25FL, 0xA3C2F25FL, 0x468071C9L, 0xA3C2F25FL, 0xA3C2F25FL, 0x468071C9L}, {0xA3C2F25FL, 0xA3C2F25FL, 0x468071C9L, 0xA3C2F25FL, 0xA3C2F25FL, 0x468071C9L}};
                    char l_505[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_505[i] = 0xF0L;
                    l_500[0][4] = (l_466[0][0][1] , ((!l_484) == (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u(((((-5L) <= (+((!p_34) , ((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((((safe_sub_func_int8_t_s_s(((+(safe_mod_func_int8_t_s_s((-6L), (((func_88(l_499[0][2], (p_35 &= l_422[2])) , (p_34 , l_420)) < g_254[1]) | l_468)))) > p_32), l_272[3])) ^ g_153) < p_36) >= 4294967294UL), p_34)), 0x9D657F78L)), p_36)) || 0x7D71L)))) != p_36) , 1UL), l_422[1])) > 0x8B507C88L), 0))));
                    l_505[1] = (l_500[3][2] | ((l_466[1][1][3] = (((func_88(((safe_add_func_uint16_t_u_u(g_258[3][5][2], ((g_343[4] && (g_149 ^= (((((g_158[2][0][5] , ((l_355[g_241][g_172][(g_241 + 1)] &= g_241) , g_343[1])) == (0UL != (g_503 == (l_499[0][2] & g_343[5])))) & g_232[4][0]) > g_158[2][0][5]) , p_33))) , 0L))) > l_504), g_232[4][0]) , g_45[0]) | 6L) , 0x88929ECEL)) || g_96[0]));
                    l_500[0][5] = func_88((((safe_mod_func_int16_t_s_s(((func_88(l_484, g_253) != (l_421 = (l_500[2][4] = (((safe_add_func_int8_t_s_s(0x55L, l_484)) & ((g_174 , 4294967295UL) != (g_174 , g_172))) >= p_36)))) <= g_45[0]), p_32)) ^ g_232[4][0]) , l_272[g_172]), l_355[2][1][2]);
                    g_514[4] ^= (((func_88(l_453, g_149) == p_36) < (l_443 || (((((safe_rshift_func_int16_t_s_u(((((p_34 , (((safe_sub_func_int32_t_s_s((0x2DL <= (g_174 ^ p_34)), 0x141049A2L)) || g_76) , g_258[4][1][0])) | l_423) == (-1L)) , l_272[3]), 8)) < 0x7F48L) > g_177) | p_34) > 0xF5L))) , l_484);
                }
                l_520++;
            }
        }
    }
    return p_33;
}







static unsigned func_39(unsigned short p_40, short p_41, int p_42)
{
    unsigned char l_53 = 6UL;
    int l_54[4] = {(-1L), 0x1AF6658DL, (-1L), 0x1AF6658DL};
    int l_72 = 0xC927DB40L;
    int l_73 = 0x89C1C50DL;
    short l_159[7][6] = {{6L, 0x631BL, 6L, 0x631BL, 6L, 0x631BL}, {6L, 0x631BL, 6L, 0x631BL, 6L, 0x631BL}, {6L, 0x631BL, 6L, 0x631BL, 6L, 0x631BL}, {6L, 0x631BL, 6L, 0x631BL, 6L, 0x631BL}, {6L, 0x631BL, 6L, 0x631BL, 6L, 0x631BL}, {6L, 0x631BL, 6L, 0x631BL, 6L, 0x631BL}, {6L, 0x631BL, 6L, 0x631BL, 6L, 0x631BL}};
    unsigned char l_173 = 255UL;
    unsigned l_175 = 0xB0BAC48DL;
    int i, j;
    l_72 = ((246UL || (((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((l_54[3] = (l_53 < p_41)), p_40)), g_45[0])) >= 247UL) & (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(p_41)), (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(func_62((safe_sub_func_int8_t_s_s((l_53 && (safe_mod_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((l_72 >= g_48), 0xBA2C160EL)) != (-6L)), g_2))), l_53)), p_40, l_73), 12)), 0x83E45B0DL)))))) && l_159[6][2]);
    g_160[1] = (g_153 < 0x68D0L);
    l_175 &= (l_54[2] = (((g_174 = (((l_159[1][5] ^ (func_62((l_53 , ((((safe_rshift_func_uint16_t_u_s(((func_88(func_88((((safe_sub_func_int32_t_s_s(((l_72 ^ ((((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((((g_172 &= g_45[0]) >= (func_62(l_53, l_72, (0x8CB1B8CCL && g_157)) != (-1L))) ^ g_160[1]))), l_173)) || p_42) >= 3UL) , 0L)) ^ l_54[3]), p_40)) ^ 0x438AL) & g_48), p_40), l_73) <= 0x0842E3BEL) & p_42), 6)) != p_42) > 0xE93CL) && p_40)), g_76, p_41) ^ 0x5356L)) | 1UL) != g_45[0])) || g_96[0]) , l_159[6][4]));
    for (p_40 = 0; (p_40 <= 0); p_40 += 1)
    {
        int l_176[10];
        unsigned l_178 = 1UL;
        char l_187 = (-9L);
        int l_261[1][8][3] = {{{0x96CBFC90L, (-1L), 5L}, {0x96CBFC90L, (-1L), 5L}, {0x96CBFC90L, (-1L), 5L}, {0x96CBFC90L, (-1L), 5L}, {0x96CBFC90L, (-1L), 5L}, {0x96CBFC90L, (-1L), 5L}, {0x96CBFC90L, (-1L), 5L}, {0x96CBFC90L, (-1L), 5L}}};
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_176[i] = 0x47EA3AF3L;
        l_176[5] = g_160[(p_40 + 2)];
        ++l_178;
        g_188 = (((((g_45[p_40] ^= (safe_rshift_func_uint8_t_u_u((((4294967286UL && (l_54[3] || (((g_76 ^ (p_42 != ((p_40 < (!g_96[0])) < l_178))) & (((0xE7025324L != (safe_lshift_func_uint8_t_u_u((l_175 == 4294967288UL), 3))) , p_42) > p_41)) , p_41))) < l_187) && g_160[(p_40 + 2)]), l_176[5]))) | l_159[6][2]) , p_41) || l_54[3]) , (-1L));
        for (g_157 = 0; (g_157 <= 1); g_157 += 1)
        {
            unsigned char l_202 = 9UL;
            unsigned l_219 = 4294967294UL;
            int l_220 = (-5L);
            int l_256[10] = {8L, 0x16342583L, 8L, 0x16342583L, 8L, 0x16342583L, 8L, 0x16342583L, 8L, 0x16342583L};
            int i;
            for (g_177 = 0; (g_177 <= 1); g_177 += 1)
            {
                int i, j, k;
                g_189 = (g_158[(g_157 + 2)][g_177][(g_157 + 6)] >= g_158[p_40][g_177][p_40]);
            }
            for (l_175 = 0; (l_175 <= 1); l_175 += 1)
            {
                int l_190 = 1L;
                int l_191 = 0x53F484CDL;
                int i;
                p_42 = (func_88(g_174, l_190) >= (((l_191 = g_160[(p_40 + 2)]) || (safe_rshift_func_int8_t_s_s(0x7FL, (safe_lshift_func_uint8_t_u_s((l_53 , ((safe_sub_func_uint8_t_u_u((g_45[p_40] = l_176[9]), (((safe_lshift_func_int8_t_s_u(p_42, 5)) <= (safe_rshift_func_int16_t_s_u((((-2L) == g_160[1]) && 9UL), p_42))) != g_188))) != (-9L))), 6))))) <= g_158[4][0][4]));
                l_176[5] = ((-1L) | l_202);
                for (l_187 = 0; (l_187 <= 1); l_187 += 1)
                {
                    p_42 |= g_45[p_40];
                }
            }
            g_203 = (g_172 , (p_42 = g_136));
            if ((safe_lshift_func_uint8_t_u_s(0UL, 4)))
            {
                unsigned l_218[6] = {7UL, 7UL, 0xB1B0985FL, 7UL, 7UL, 0xB1B0985FL};
                int l_237 = 1L;
                int l_238 = 1L;
                int i;
                l_220 &= (((g_174 || l_202) <= 0x671F50AEL) , (safe_rshift_func_uint8_t_u_s(l_73, ((safe_lshift_func_int8_t_s_s(p_40, 4)) | (func_88((((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((g_96[0]++), (p_40 , ((g_203 &= (((l_218[1] = 4294967291UL) , g_45[0]) , ((0L <= p_42) , l_72))) ^ p_42)))) , 0x7098F6E7L), l_219)), 255UL)) , p_40) , 1L), p_41) || l_159[1][1])))));
                for (l_173 = 0; (l_173 <= 0); l_173 += 1)
                {
                    char l_229 = 0x98L;
                    int l_230 = 9L;
                    int l_231 = 4L;
                    l_230 = (safe_add_func_int16_t_s_s(g_45[p_40], (((safe_add_func_int32_t_s_s(g_76, (safe_sub_func_int32_t_s_s(l_218[1], (++g_99))))) != p_42) != (l_229 ^= g_96[0]))));
                    l_238 &= ((g_189 | ((g_188 = func_88((p_41 && 6L), g_177)) > ((((g_232[4][0] = l_231) , p_42) >= ((safe_add_func_int16_t_s_s((l_176[5] = ((safe_sub_func_int16_t_s_s((l_178 != (l_237 = (g_99 &= 4294967295UL))), p_40)) || l_218[1])), 0L)) || p_41)) != 1UL))) || g_203);
                    for (l_219 = 0; (l_219 <= 1); l_219 += 1)
                    {
                        int i, j;
                        return g_232[(l_219 + 6)][l_173];
                    }
                }
                ++g_241;
                p_42 = func_88(g_153, p_40);
            }
            else
            {
                int l_250 = (-1L);
                int i;
                for (g_172 = 0; (g_172 <= 1); g_172 += 1)
                {
                    p_42 = l_202;
                    return p_42;
                }
                p_42 |= (g_254[3] &= (func_88(g_189, ((safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(p_41, func_88(l_250, ((((g_177 & ((((g_160[3] , (g_45[p_40]++)) <= (g_253 = g_241)) ^ g_158[2][0][5]) || g_160[1])) >= l_53) & g_136) | 0x66E0L)))) <= 0x5635L) & p_41), g_160[2])) | 0x15L), p_41)) & 0x14F5L)) <= g_239[0][5][1]));
                for (g_240 = 1; (g_240 >= 0); g_240 -= 1)
                {
                    g_255 = (!0x67CC06ECL);
                }
            }
            for (l_202 = 0; (l_202 <= 1); l_202 += 1)
            {
                int l_257 = 0x3B6D30F8L;
                int l_259 = 0x901CA62EL;
                int l_260 = 3L;
                int l_262[6][7][6] = {{{(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}}, {{(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}}, {{(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}}, {{(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}}, {{(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}}, {{(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}, {(-6L), 0L, 0x9736B5C2L, 0x9BB0E50EL, 1L, (-1L)}}};
                unsigned l_263 = 1UL;
                int i, j, k;
                l_263++;
            }
        }
    }
    return l_175;
}







static short func_62(unsigned p_63, unsigned short p_64, unsigned p_65)
{
    unsigned l_77 = 4294967295UL;
    int l_85 = 0L;
    int l_135 = 0x3DB0A162L;
    int l_152 = 0x2E2A0AD3L;
    int l_154 = 0x1A970476L;
    for (p_65 = 0; (p_65 > 3); p_65++)
    {
        int l_80 = 0x42D94904L;
        char l_102[3][3][5] = {{{0L, 2L, (-8L), 2L, 0L}, {0L, 2L, (-8L), 2L, 0L}, {0L, 2L, (-8L), 2L, 0L}}, {{0L, 2L, (-8L), 2L, 0L}, {0L, 2L, (-8L), 2L, 0L}, {0L, 2L, (-8L), 2L, 0L}}, {{0L, 2L, (-8L), 2L, 0L}, {0L, 2L, (-8L), 2L, 0L}, {0L, 2L, (-8L), 2L, 0L}}};
        int l_113 = 0x24E94FA9L;
        int i, j, k;
        ++l_77;
        if ((l_80 = p_65))
        {
            unsigned l_91 = 4294967295UL;
            int l_92 = 0x03003393L;
            for (l_80 = 0; (l_80 >= (-19)); l_80 = safe_sub_func_int16_t_s_s(l_80, 3))
            {
                int l_93[2];
                unsigned char l_94 = 0UL;
                unsigned l_112 = 4294967287UL;
                unsigned l_124 = 3UL;
                int l_134 = (-9L);
                int i;
                for (i = 0; i < 2; i++)
                    l_93[i] = 0L;
                if ((l_85 |= (safe_rshift_func_uint16_t_u_s((((g_48 < (g_45[0] < g_2)) == 0xC2L) <= (p_64 | 0xD682L)), 13))))
                {
                    g_99 ^= (safe_sub_func_uint8_t_u_u((func_88((l_94 = (l_91 , (((l_92 = g_45[0]) , g_76) | l_93[0]))), (l_91 , g_45[0])) <= (safe_sub_func_uint16_t_u_u(g_48, ((p_64 >= 0x2D46L) < g_76)))), l_85));
                }
                else
                {
                    unsigned l_105 = 4294967287UL;
                    l_85 = (safe_mod_func_uint16_t_u_u((p_64 && ((~func_88(g_96[0], l_102[2][0][2])) <= g_45[0])), g_48));
                    l_92 = ((((safe_rshift_func_uint8_t_u_s((g_99 == (l_105 | ((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u(l_102[2][1][2], 5)) == func_88((safe_sub_func_uint32_t_u_u(l_93[0], ((0x946AL < (l_113 = l_112)) <= ((((p_65 | ((((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(p_63, (((safe_rshift_func_int16_t_s_u((((safe_add_func_int8_t_s_s((p_64 , 0x4DL), 0x73L)) || p_63) | l_92), 12)) , g_2) ^ 1L))), g_48)), p_64)) && 0xCCL) || (-5L)) && p_64)) <= l_124) , g_99) , p_63)))), l_105)), g_2)) <= l_105))), 7)) , l_105) & 0xEE8FFC0AL) | p_63);
                    l_135 &= (func_88(l_102[0][2][3], (safe_rshift_func_uint8_t_u_s(((g_99 && (((((g_76 == g_45[0]) | (((l_92 = ((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int8_t_s(p_63)), 4)) == l_105)) >= (((safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(g_45[0], p_65)), p_63)) || 0x78L) || g_45[0])) > g_76)) , 5L) < (-4L)) , l_134)) , 0x3BL), l_85))) & p_64);
                }
                l_92 = 1L;
                g_136 = p_63;
                if (l_113)
                    break;
            }
        }
        else
        {
            return l_77;
        }
        g_149 = ((safe_mod_func_uint16_t_u_u((p_64 >= (safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_135, ((safe_rshift_func_int16_t_s_u(((+(((0xCF4EE93DL | ((65530UL <= p_65) != (((safe_add_func_int32_t_s_s(0x4C91969DL, (g_96[0] |= 1UL))) == (l_113 |= (((p_63 , 0x5E6FL) ^ l_102[1][1][3]) < g_45[0]))) != (-8L)))) && p_64) <= p_65)) && 0x7E5BL), 4)) == g_45[0]))), p_64))), p_63)) != 0x7910L);
    }
    g_158[2][0][5] = ((g_76 , ((l_77 & (((l_85 = p_63) , (6UL == g_45[0])) , l_135)) | ((((g_157 |= ((g_153 = (l_152 = 0x38L)) < ((!(l_154 = l_77)) , ((((safe_rshift_func_uint16_t_u_u(((l_135 >= p_64) != l_154), 15)) , g_2) , g_76) , 0L)))) != p_65) && 0x14L) > p_63))) && 0xC46F0373L);
    return p_64;
}







static const unsigned short func_88(int p_89, int p_90)
{
    unsigned l_95[6];
    int i;
    for (i = 0; i < 6; i++)
        l_95[i] = 0xBCDA4F1DL;
    l_95[1] ^= p_90;
    g_96[0] ^= l_95[1];
    return g_76;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_45[i], "g_45[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_96[i], "g_96[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_158[i][j][k], "g_158[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_160[i], "g_160[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_232[i][j], "g_232[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_239[i][j][k], "g_239[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_254[i], "g_254[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_255, "g_255", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_258[i][j][k], "g_258[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_328, "g_328", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_343[i], "g_343[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_503, "g_503", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_514[i], "g_514[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_523, "g_523", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_649[i][j], "g_649[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_696, "g_696", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    transparent_crc(g_868, "g_868", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1076, "g_1076", print_hash_value);
    transparent_crc(g_1145, "g_1145", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
