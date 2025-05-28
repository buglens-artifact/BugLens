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
   signed f0 : 14;
   const signed f1 : 13;
   const unsigned f2 : 28;
   volatile unsigned f3 : 23;
   unsigned f4 : 12;
};


static volatile unsigned char g_15 = 255UL;
static unsigned g_24 = 0xE7BF1993L;
static int g_25 = 1L;
static int g_55 = (-6L);
static unsigned g_60 = 0xACF27260L;
static int g_85 = 3L;
static int g_97 = (-2L);
static unsigned char g_130 = 0xBCL;
static short g_140[3] = {0x6FE3L, 0x6FE3L, 0x6FE3L};
static int g_157 = 0x691963C9L;
static int g_189[1] = {0L};
static int g_195[10][9][2] = {{{(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}}, {{(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}}, {{(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}}, {{(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}}, {{(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}}, {{(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}}, {{(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}}, {{(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}}, {{(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}}, {{(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}, {(-3L), 0x7C35278CL}}};
static char g_233[6][4][9] = {{{(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}}, {{(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}}, {{(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}}, {{(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}}, {{(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}}, {{(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}, {(-1L), 0xA1L, (-1L), 0xB7L, 1L, (-1L), 1L, 1L, (-1L)}}};
static short g_243 = 8L;
static short g_246 = 0L;
static int g_247 = 1L;
static unsigned g_248 = 0xE89E88DAL;
static unsigned g_264[5][2][10] = {{{1UL, 1UL, 4294967293UL, 0xA090017AL, 0x770BCB46L, 0UL, 0xE7126FB4L, 1UL, 4294967294UL, 0xE7126FB4L}, {1UL, 1UL, 4294967293UL, 0xA090017AL, 0x770BCB46L, 0UL, 0xE7126FB4L, 1UL, 4294967294UL, 0xE7126FB4L}}, {{1UL, 1UL, 4294967293UL, 0xA090017AL, 0x770BCB46L, 0UL, 0xE7126FB4L, 1UL, 4294967294UL, 0xE7126FB4L}, {1UL, 1UL, 4294967293UL, 0xA090017AL, 0x770BCB46L, 0UL, 0xE7126FB4L, 1UL, 4294967294UL, 0xE7126FB4L}}, {{1UL, 1UL, 4294967293UL, 0xA090017AL, 0x770BCB46L, 0UL, 0xE7126FB4L, 1UL, 4294967294UL, 0xE7126FB4L}, {1UL, 1UL, 4294967293UL, 0xA090017AL, 0x770BCB46L, 0UL, 0xE7126FB4L, 1UL, 4294967294UL, 0xE7126FB4L}}, {{1UL, 1UL, 4294967293UL, 0xA090017AL, 0x770BCB46L, 0UL, 0xE7126FB4L, 1UL, 4294967294UL, 0xE7126FB4L}, {1UL, 1UL, 4294967293UL, 0xA090017AL, 0x770BCB46L, 0UL, 0xE7126FB4L, 1UL, 4294967294UL, 0xE7126FB4L}}, {{1UL, 1UL, 4294967293UL, 0xA090017AL, 0x770BCB46L, 0UL, 0xE7126FB4L, 1UL, 4294967294UL, 0xE7126FB4L}, {1UL, 1UL, 4294967293UL, 0xA090017AL, 0x770BCB46L, 0UL, 0xE7126FB4L, 1UL, 4294967294UL, 0xE7126FB4L}}};
static unsigned g_294 = 0xDE55AF26L;
static short g_304 = (-8L);
static unsigned g_322[3][10] = {{2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL}, {2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL}, {2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL}};
static short g_337 = 4L;
static int g_351 = 2L;
static int g_372 = 0xBE4CBB7CL;
static int g_428 = 1L;
static int g_437 = 0x605BB595L;
static int g_465 = 0x8CECB5D9L;
static int g_508[3][6] = {{0xA693FD8AL, 0x16394A2CL, 0xC7B91B5BL, 0xC7B91B5BL, 0x16394A2CL, 0xA693FD8AL}, {0xA693FD8AL, 0x16394A2CL, 0xC7B91B5BL, 0xC7B91B5BL, 0x16394A2CL, 0xA693FD8AL}, {0xA693FD8AL, 0x16394A2CL, 0xC7B91B5BL, 0xC7B91B5BL, 0x16394A2CL, 0xA693FD8AL}};
static int g_547 = 1L;
static int g_572 = 0xE3D5F59EL;
static int g_592 = 0x95577E81L;
static unsigned g_595 = 0x07A68C89L;
static unsigned char g_597 = 0x7CL;
static int g_598 = 1L;
static int g_673 = (-1L);
static short g_674 = 1L;
static unsigned char g_691 = 247UL;
static unsigned g_713 = 0x94B29CD1L;
static char g_716 = 0x34L;
static unsigned short g_951 = 0UL;
static unsigned g_1091 = 0UL;
static struct S0 g_1152 = {94,-41,1434,2244,31};
static unsigned char g_1159 = 1UL;
static volatile struct S0 g_1194 = {-50,81,1986,781,46};
static unsigned short g_1208[9][3][1] = {{{0x28C2L}, {0x28C2L}, {0x28C2L}}, {{0x28C2L}, {0x28C2L}, {0x28C2L}}, {{0x28C2L}, {0x28C2L}, {0x28C2L}}, {{0x28C2L}, {0x28C2L}, {0x28C2L}}, {{0x28C2L}, {0x28C2L}, {0x28C2L}}, {{0x28C2L}, {0x28C2L}, {0x28C2L}}, {{0x28C2L}, {0x28C2L}, {0x28C2L}}, {{0x28C2L}, {0x28C2L}, {0x28C2L}}, {{0x28C2L}, {0x28C2L}, {0x28C2L}}};
static short g_1308 = 0L;
static char g_1399 = 0x32L;
static int g_1546 = (-9L);
static volatile unsigned short g_1547 = 0x7696L;
static struct S0 g_1602[7][4] = {{{4,-30,5371,746,62}, {68,45,12382,1449,43}, {-17,-74,11104,926,33}, {-17,-74,11104,926,33}}, {{4,-30,5371,746,62}, {68,45,12382,1449,43}, {-17,-74,11104,926,33}, {-17,-74,11104,926,33}}, {{4,-30,5371,746,62}, {68,45,12382,1449,43}, {-17,-74,11104,926,33}, {-17,-74,11104,926,33}}, {{4,-30,5371,746,62}, {68,45,12382,1449,43}, {-17,-74,11104,926,33}, {-17,-74,11104,926,33}}, {{4,-30,5371,746,62}, {68,45,12382,1449,43}, {-17,-74,11104,926,33}, {-17,-74,11104,926,33}}, {{4,-30,5371,746,62}, {68,45,12382,1449,43}, {-17,-74,11104,926,33}, {-17,-74,11104,926,33}}, {{4,-30,5371,746,62}, {68,45,12382,1449,43}, {-17,-74,11104,926,33}, {-17,-74,11104,926,33}}};
static struct S0 g_1653 = {-38,33,6566,1592,45};
static volatile int g_1742 = 0xFF58799AL;
static struct S0 g_1773 = {107,31,1330,110,23};
static unsigned short g_1777[4] = {0xFE1EL, 0xFE1EL, 0xFE1EL, 0xFE1EL};



static short func_1(void);
static int func_2(char p_3, char p_4, unsigned p_5, unsigned short p_6, int p_7);
static char func_8(int p_9, const unsigned char p_10, unsigned p_11, unsigned p_12, unsigned p_13);
static unsigned func_26(unsigned char p_27, short p_28, unsigned p_29, int p_30);
static unsigned char func_42(unsigned p_43, const unsigned p_44, const int p_45, unsigned char p_46);
static short func_56(unsigned short p_57, const short p_58, unsigned p_59);
static char func_61(unsigned short p_62);
static short func_63(short p_64, int p_65);
static unsigned char func_69(unsigned p_70, const int p_71, int p_72, unsigned p_73);
static unsigned char func_79(int p_80, unsigned p_81, int p_82, char p_83);
static short func_1(void)
{
    unsigned l_14[9][5] = {{0xF889A278L, 0x023DCDF5L, 4294967290UL, 0x007C7BE0L, 0xCAD7D711L}, {0xF889A278L, 0x023DCDF5L, 4294967290UL, 0x007C7BE0L, 0xCAD7D711L}, {0xF889A278L, 0x023DCDF5L, 4294967290UL, 0x007C7BE0L, 0xCAD7D711L}, {0xF889A278L, 0x023DCDF5L, 4294967290UL, 0x007C7BE0L, 0xCAD7D711L}, {0xF889A278L, 0x023DCDF5L, 4294967290UL, 0x007C7BE0L, 0xCAD7D711L}, {0xF889A278L, 0x023DCDF5L, 4294967290UL, 0x007C7BE0L, 0xCAD7D711L}, {0xF889A278L, 0x023DCDF5L, 4294967290UL, 0x007C7BE0L, 0xCAD7D711L}, {0xF889A278L, 0x023DCDF5L, 4294967290UL, 0x007C7BE0L, 0xCAD7D711L}, {0xF889A278L, 0x023DCDF5L, 4294967290UL, 0x007C7BE0L, 0xCAD7D711L}};
    unsigned short l_35 = 65528UL;
    int l_1073 = (-3L);
    unsigned short l_1074 = 0UL;
    int i, j;
    g_1777[3] = (!func_2(func_8((((l_14[5][3] , (g_15 < (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(l_14[6][2], (((safe_add_func_int32_t_s_s(((((((g_24 = 0L) != (l_1073 = (((g_25 && func_26((safe_lshift_func_int16_t_s_s((g_25 != ((g_25 , (((safe_mod_func_uint16_t_u_u((1L || 2L), g_25)) , l_14[0][0]) <= l_35)) , 1UL)), l_14[5][3])), l_14[0][2], l_35, g_25)) , l_35) || g_595))) | l_35) , g_372) & l_14[8][3]) >= g_713), 0x6404C286L)) & g_713) || g_674))), l_14[5][3])), 4)))) <= 7UL) < l_14[5][3]), l_14[8][1], l_35, l_1074, g_713), l_14[5][3], l_14[4][1], g_1152.f2, l_14[5][3]));
    l_1073 = (0x63B7D736L & l_1073);
    return l_1074;
}







static int func_2(char p_3, char p_4, unsigned p_5, unsigned short p_6, int p_7)
{
    const unsigned char l_1774[6] = {1UL, 1UL, 1UL, 1UL, 1UL, 1UL};
    int i;
    g_1546 = (((!65535UL) , (g_1773 , (g_233[0][3][6] = (func_42(g_508[0][5], l_1774[5], (safe_lshift_func_uint16_t_u_u((g_97 >= func_69((0x6C08A780L & p_4), g_951, l_1774[5], g_140[1])), 11)), g_243) , g_1152.f4)))) > p_4);
    return l_1774[5];
}







static char func_8(int p_9, const unsigned char p_10, unsigned p_11, unsigned p_12, unsigned p_13)
{
    unsigned short l_1082[7][3] = {{65535UL, 0x597EL, 0x97D9L}, {65535UL, 0x597EL, 0x97D9L}, {65535UL, 0x597EL, 0x97D9L}, {65535UL, 0x597EL, 0x97D9L}, {65535UL, 0x597EL, 0x97D9L}, {65535UL, 0x597EL, 0x97D9L}, {65535UL, 0x597EL, 0x97D9L}};
    unsigned l_1104 = 0x4E11D390L;
    char l_1132 = 0x20L;
    unsigned l_1133 = 6UL;
    int l_1144 = 0x3834C1E7L;
    int l_1160 = 0xC0F505C5L;
    unsigned l_1209 = 0x98E00A05L;
    unsigned l_1332[6] = {4294967295UL, 4294967295UL, 4294967287UL, 4294967295UL, 4294967295UL, 4294967287UL};
    unsigned char l_1333[2];
    int l_1381 = 0x1C0C1E87L;
    int l_1491 = 0xC8CCBCFAL;
    unsigned l_1558 = 0UL;
    int l_1613 = 0x5E2E194BL;
    int l_1621 = (-4L);
    const int l_1660[1] = {0x102926E8L};
    unsigned short l_1709 = 0x42A9L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1333[i] = 1UL;
    for (g_951 = 0; (g_951 == 15); g_951 = safe_add_func_uint32_t_u_u(g_951, 8))
    {
        int l_1079 = 1L;
        int l_1145[3][5][9] = {{{0xCF22168CL, 0xCF22168CL, 1L, 0xF82F6495L, 8L, 0xF82F6495L, 1L, 0xCF22168CL, 0xCF22168CL}, {0xCF22168CL, 0xCF22168CL, 1L, 0xF82F6495L, 8L, 0xF82F6495L, 1L, 0xCF22168CL, 0xCF22168CL}, {0xCF22168CL, 0xCF22168CL, 1L, 0xF82F6495L, 8L, 0xF82F6495L, 1L, 0xCF22168CL, 0xCF22168CL}, {0xCF22168CL, 0xCF22168CL, 1L, 0xF82F6495L, 8L, 0xF82F6495L, 1L, 0xCF22168CL, 0xCF22168CL}, {0xCF22168CL, 0xCF22168CL, 1L, 0xF82F6495L, 8L, 0xF82F6495L, 1L, 0xCF22168CL, 0xCF22168CL}}, {{0xCF22168CL, 0xCF22168CL, 1L, 0xF82F6495L, 8L, 0xF82F6495L, 1L, 0xCF22168CL, 0xCF22168CL}, {0xCF22168CL, 0xCF22168CL, 1L, 0xF82F6495L, 8L, 0xF82F6495L, 1L, 0xCF22168CL, 0xCF22168CL}, {0xCF22168CL, 0xCF22168CL, 1L, 0xF82F6495L, 8L, 0xF82F6495L, 1L, 0xCF22168CL, 0xCF22168CL}, {0xCF22168CL, 0xCF22168CL, 1L, 0xF82F6495L, 8L, 0xF82F6495L, 1L, 0xCF22168CL, 0xCF22168CL}, {0xCF22168CL, 0xCF22168CL, 1L, 0xF82F6495L, 8L, 0xF82F6495L, 1L, 0xCF22168CL, 0xCF22168CL}}, {{0xCF22168CL, 0xCF22168CL, 1L, 0xF82F6495L, 8L, 0xF82F6495L, 1L, 0xCF22168CL, 0xCF22168CL}, {0xCF22168CL, 0xCF22168CL, 1L, 0xF82F6495L, 8L, 0xF82F6495L, 1L, 0xCF22168CL, 0xCF22168CL}, {0xCF22168CL, 0xCF22168CL, 1L, 0xF82F6495L, 8L, 0xF82F6495L, 1L, 0xCF22168CL, 0xCF22168CL}, {0xCF22168CL, 0xCF22168CL, 1L, 0xF82F6495L, 8L, 0xF82F6495L, 1L, 0xCF22168CL, 0xCF22168CL}, {0xCF22168CL, 0xCF22168CL, 1L, 0xF82F6495L, 8L, 0xF82F6495L, 1L, 0xCF22168CL, 0xCF22168CL}}};
        unsigned l_1235[10][2] = {{0x3CF7F03FL, 4294967286UL}, {0x3CF7F03FL, 4294967286UL}, {0x3CF7F03FL, 4294967286UL}, {0x3CF7F03FL, 4294967286UL}, {0x3CF7F03FL, 4294967286UL}, {0x3CF7F03FL, 4294967286UL}, {0x3CF7F03FL, 4294967286UL}, {0x3CF7F03FL, 4294967286UL}, {0x3CF7F03FL, 4294967286UL}, {0x3CF7F03FL, 4294967286UL}};
        int l_1353 = 1L;
        int i, j, k;
        if ((safe_mod_func_uint8_t_u_u(l_1079, l_1079)))
        {
            l_1082[6][1] = (safe_add_func_uint8_t_u_u(p_11, p_13));
        }
        else
        {
            const char l_1085 = 0xC1L;
            const unsigned l_1092 = 1UL;
            const unsigned short l_1130 = 0UL;
            int l_1131 = 4L;
            if ((safe_rshift_func_int16_t_s_u(((l_1085 <= func_56((g_1091 = ((p_9 && (func_69(((safe_unary_minus_func_uint8_t_u(p_10)) || func_69(p_11, (((((safe_lshift_func_int8_t_s_u(7L, 2)) , (func_69((p_9 != (+((l_1085 >= (safe_rshift_func_int8_t_s_u((g_673 == g_674), g_243))) ^ 0UL))), g_85, g_195[9][4][1], l_1085) ^ g_55)) || 0xA9B24906L) < (-4L)) < l_1079), p_10, p_10)), l_1085, p_13, g_25) || l_1085)) != 0x79836031L)), l_1092, l_1082[2][0])) & 0UL), g_713)))
            {
                for (g_97 = 0; (g_97 <= 2); g_97 += 1)
                {
                    int i, j;
                    g_508[g_97][(g_97 + 2)] = (safe_rshift_func_uint8_t_u_u(p_9, 6));
                    for (g_243 = 0; (g_243 <= 3); g_243 += 1)
                    {
                        const int l_1129 = 0L;
                        int i, j, k;
                        g_85 = (((l_1079 = (g_233[g_243][(g_97 + 1)][g_243] >= (safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((((((g_428 || p_11) ^ p_9) , (p_10 , p_11)) | g_233[g_243][(g_97 + 1)][g_243]) && (safe_mul_func_int16_t_s_s(((p_13 | (g_437 = (safe_add_func_uint32_t_u_u(l_1082[1][2], g_508[0][1])))) == g_55), p_13))), l_1104)), 7)))))) , p_13) , p_12);
                        if (g_233[g_243][(g_97 + 1)][g_243])
                            break;
                        g_465 = g_691;
                        l_1079 = ((safe_rshift_func_uint16_t_u_s((((safe_add_func_int8_t_s_s(((l_1131 = (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((g_60 && (safe_rshift_func_uint16_t_u_u((+p_13), (safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_1092, (p_12 = 1UL))), (g_508[g_97][(g_97 + 2)] , func_69((safe_mod_func_uint16_t_u_u(g_233[g_243][(g_97 + 1)][g_243], l_1082[5][1])), g_195[2][8][0], l_1092, p_9))))))), 2)), l_1129)) | g_372), 7L)) | g_428), g_85)), l_1130)), 0x35L))) && l_1082[6][1]), l_1104)) , 0L) , p_12), p_13)) <= 3L);
                    }
                }
            }
            else
            {
                return l_1132;
            }
            l_1079 = g_189[0];
            l_1133 = (l_1131 = (p_10 , g_691));
        }
        if ((((safe_lshift_func_int16_t_s_u(((l_1079 = (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_u((-1L), 6)) & (l_1079 <= l_1132)) , (safe_rshift_func_int16_t_s_u(5L, l_1079))) >= func_79(p_9, g_195[1][3][0], (0x049C1EF2L && p_9), g_195[9][4][1])), 9)), g_572))) == p_13), 3)) != l_1144) ^ l_1145[1][2][0]))
        {
            int l_1148 = 1L;
            l_1148 = func_63(p_10, (l_1145[1][2][0] < (safe_lshift_func_uint8_t_u_u(g_951, 7))));
        }
        else
        {
            unsigned l_1149 = 1UL;
            l_1149 = g_294;
            if (l_1149)
                break;
        }
        if (l_1145[1][2][0])
        {
            l_1160 = (safe_mul_func_int16_t_s_s(p_12, (g_1152 , (((g_1159 = ((1L & (safe_rshift_func_int8_t_s_s(l_1079, 0))) , (safe_sub_func_int16_t_s_s((l_1132 , (safe_lshift_func_int8_t_s_u(g_508[1][2], func_69(g_1152.f3, p_9, l_1145[0][1][6], l_1145[2][2][2])))), 0xE3C1L)))) < l_1079) ^ l_1082[6][1]))));
            l_1160 = func_63(g_598, g_24);
        }
        else
        {
            unsigned short l_1167[3][5][10] = {{{0xB7DBL, 0UL, 0x307BL, 0x837AL, 0x307BL, 0UL, 0xB7DBL, 1UL, 3UL, 0x5DF2L}, {0xB7DBL, 0UL, 0x307BL, 0x837AL, 0x307BL, 0UL, 0xB7DBL, 1UL, 3UL, 0x5DF2L}, {0xB7DBL, 0UL, 0x307BL, 0x837AL, 0x307BL, 0UL, 0xB7DBL, 1UL, 3UL, 0x5DF2L}, {0xB7DBL, 0UL, 0x307BL, 0x837AL, 0x307BL, 0UL, 0xB7DBL, 1UL, 3UL, 0x5DF2L}, {0xB7DBL, 0UL, 0x307BL, 0x837AL, 0x307BL, 0UL, 0xB7DBL, 1UL, 3UL, 0x5DF2L}}, {{0xB7DBL, 0UL, 0x307BL, 0x837AL, 0x307BL, 0UL, 0xB7DBL, 1UL, 3UL, 0x5DF2L}, {0xB7DBL, 0UL, 0x307BL, 0x837AL, 0x307BL, 0UL, 0xB7DBL, 1UL, 3UL, 0x5DF2L}, {0xB7DBL, 0UL, 0x307BL, 0x837AL, 0x307BL, 0UL, 0xB7DBL, 1UL, 3UL, 0x5DF2L}, {0xB7DBL, 0UL, 0x307BL, 0x837AL, 0x307BL, 0UL, 0xB7DBL, 1UL, 3UL, 0x5DF2L}, {0xB7DBL, 0UL, 0x307BL, 0x837AL, 0x307BL, 0UL, 0xB7DBL, 1UL, 3UL, 0x5DF2L}}, {{0xB7DBL, 0UL, 0x307BL, 0x837AL, 0x307BL, 0UL, 0xB7DBL, 1UL, 3UL, 0x5DF2L}, {0xB7DBL, 0UL, 0x307BL, 0x837AL, 0x307BL, 0UL, 0xB7DBL, 1UL, 3UL, 0x5DF2L}, {0xB7DBL, 0UL, 0x307BL, 0x837AL, 0x307BL, 0UL, 0xB7DBL, 1UL, 3UL, 0x5DF2L}, {0xB7DBL, 0UL, 0x307BL, 0x837AL, 0x307BL, 0UL, 0xB7DBL, 1UL, 3UL, 0x5DF2L}, {0xB7DBL, 0UL, 0x307BL, 0x837AL, 0x307BL, 0UL, 0xB7DBL, 1UL, 3UL, 0x5DF2L}}};
            int l_1172 = 2L;
            int l_1173 = 1L;
            unsigned char l_1191[7][5][1] = {{{0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}}};
            unsigned short l_1210 = 0x31B1L;
            short l_1211 = 7L;
            unsigned short l_1259[6] = {0xD233L, 0xD233L, 0x518FL, 0xD233L, 0xD233L, 0x518FL};
            unsigned short l_1321 = 1UL;
            int l_1382[8] = {0L, 0L, 0x5F238B17L, 0L, 0L, 0x5F238B17L, 0L, 0L};
            int i, j, k;
            if (((safe_sub_func_int16_t_s_s(func_69(p_12, l_1145[1][2][0], ((safe_mod_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((l_1167[0][1][3] = g_189[0]), (safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_1172, (0x1BL <= p_12))), (((l_1173 = g_337) & ((safe_lshift_func_int16_t_s_u((l_1160 = p_11), 14)) > g_508[1][5])) < p_13))))) == p_11) != l_1145[1][2][0]), 3L)) <= (-10L)), g_97), p_10)) || g_595))
            {
                unsigned short l_1176 = 65527UL;
                l_1176 = 0x7E4A4BAAL;
                l_1191[1][0][0] = ((g_592 , (~((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((g_713 | ((((g_157 , (safe_add_func_int32_t_s_s((g_25 >= (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((l_1167[2][0][8] < (g_157 == 0x18L)) , (g_691 = ((g_264[4][0][4] = (safe_mod_func_uint8_t_u_u(l_1145[0][0][6], ((0xB9B60380L == p_11) , g_465)))) != l_1145[1][2][0]))), 0x96L)), p_13)), p_9))), l_1172))) | 0x60BAL) | 0UL) & 0x73F7L)), l_1160)) | g_351), l_1079)) < g_60))) , l_1145[1][2][0]);
                g_157 = l_1079;
            }
            else
            {
                unsigned short l_1199[8] = {0xF0F7L, 0x2131L, 0xF0F7L, 0x2131L, 0xF0F7L, 0x2131L, 0xF0F7L, 0x2131L};
                unsigned l_1212 = 0xD10AA4C4L;
                int l_1239 = 0xB044E5EEL;
                int i;
                l_1212 = ((safe_mod_func_int32_t_s_s((g_1194 , (g_592 = ((safe_mod_func_int16_t_s_s(p_10, l_1079)) < (safe_mod_func_int16_t_s_s((func_63((g_140[1] = (l_1145[1][3][0] = l_1199[4])), (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(g_1159, (((g_1159 >= (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u(((func_69(((g_1208[5][1][0] = g_264[0][0][2]) || (l_1160 = (((g_85 >= func_69(p_10, p_9, l_1209, l_1210)) && l_1132) | 2UL))), g_713, l_1199[4], p_10) , l_1199[4]) <= g_508[0][3]), g_1152.f1)) != l_1211), 0))) , 0x48B1L) < g_351))), g_1091))) == l_1199[4]), 2UL))))), p_10)) != p_12);
                for (g_572 = 21; (g_572 == 3); --g_572)
                {
                    unsigned char l_1234 = 0x50L;
                    int l_1238 = 0x072EDCB6L;
                    l_1172 = (safe_mod_func_int16_t_s_s((l_1160 , (safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_s((((((g_60 , 0L) ^ l_1079) > ((safe_add_func_int32_t_s_s(l_1145[1][2][0], 0xD55522ECL)) , func_69(l_1167[0][1][2], func_69((g_322[1][8] = (((safe_mod_func_uint32_t_u_u((~0xF5B361C9L), g_25)) != g_85) >= 0UL)), p_9, p_12, g_508[0][0]), g_673, p_13))) <= l_1167[0][3][9]) , 251UL), p_10))))), 0xEB2FL));
                    for (g_372 = 0; (g_372 <= 2); g_372 += 1)
                    {
                        int i, j, k;
                        l_1145[g_372][(g_372 + 1)][(g_372 + 1)] = 0x18ABD7BEL;
                        l_1145[g_372][(g_372 + 1)][(g_372 + 1)] = (~((((g_351 , ((l_1172 = ((p_9 | ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((l_1160 = (safe_lshift_func_int16_t_s_u(g_572, 2))), l_1191[1][0][0])), (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(g_1152.f3, func_69(l_1132, func_69(g_1159, g_85, g_1152.f2, g_572), g_547, l_1133))), g_372)))) || 0xB6AA6C41L)) < 0xB2D3CFEBL)) & l_1212)) == p_9) ^ g_597) != p_12));
                        l_1234 = l_1082[6][1];
                        l_1235[0][1] = 0x820C8CCDL;
                    }
                    for (l_1160 = 2; (l_1160 < 27); ++l_1160)
                    {
                        l_1238 = l_1082[6][1];
                        if (p_9)
                            break;
                        g_508[1][2] = p_9;
                    }
                }
                for (g_372 = 0; (g_372 >= 0); g_372 -= 1)
                {
                    int l_1241 = (-1L);
                    l_1239 = l_1235[0][1];
                    g_189[0] = l_1104;
                    for (g_1091 = 0; (g_1091 <= 1); g_1091 += 1)
                    {
                        int l_1242[10][9][2] = {{{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}, {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)}}};
                        int i, j, k;
                        l_1241 = (safe_unary_minus_func_uint8_t_u(g_264[(g_1091 + 2)][g_1091][(g_372 + 2)]));
                        l_1242[4][4][1] = (g_508[1][2] = g_264[g_1091][(g_372 + 1)][(g_1091 + 3)]);
                        l_1239 = 1L;
                    }
                }
                if (p_10)
                    break;
            }
            l_1160 = (safe_add_func_uint8_t_u_u(p_13, g_189[0]));
            for (g_428 = 1; (g_428 >= 0); g_428 -= 1)
            {
                char l_1274 = 0xDFL;
                int l_1277 = 0x6577E1A6L;
                unsigned short l_1311 = 0xC8D0L;
                for (g_598 = 2; (g_598 >= 0); g_598 -= 1)
                {
                    unsigned l_1253 = 0xBB740F25L;
                    int l_1266 = (-1L);
                    if ((g_97 & 0x443D02BAL))
                    {
                        unsigned char l_1254 = 5UL;
                        int i, j;
                        l_1160 = (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(func_69((safe_lshift_func_int16_t_s_u((g_24 >= ((((g_322[0][5] == ((-1L) != 0xD3L)) > ((safe_mul_func_uint16_t_u_u((l_1253 || l_1254), ((safe_lshift_func_int16_t_s_u((l_1172 = g_1152.f0), ((g_189[0] == (p_12 ^ p_11)) <= p_13))) || g_437))) ^ l_1145[1][3][0])) & g_97) & p_10)), l_1104)), p_9, g_716, g_130), 1)), 14));
                        l_1079 = (g_465 = func_61((((safe_mul_func_int16_t_s_s(func_61(l_1253), (l_1082[g_428][g_598] = g_592))) > ((l_1259[0] && (func_69(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s(func_69(p_10, g_716, p_13, g_1152.f0), p_10)) | l_1253), 14)), p_10)) , p_11), g_1152.f1, l_1167[0][1][3], g_1208[5][1][0]) <= p_12)) > g_1194.f0)) || g_713)));
                    }
                    else
                    {
                        unsigned char l_1273 = 0xDAL;
                        g_508[2][3] = p_9;
                        l_1266 = g_264[3][1][4];
                        l_1277 = ((p_13 && (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((l_1274 = (+(safe_rshift_func_int8_t_s_u(l_1273, (l_1273 == p_12))))), 0)), ((-10L) ^ ((safe_mod_func_uint8_t_u_u(func_61((l_1079 = (g_1208[3][1][0] = (l_1145[1][2][0] = ((g_1152 , (-8L)) | g_597))))), l_1235[5][0])) && 65532UL))))) != g_372);
                    }
                    for (l_1266 = 0; l_1266 < 3; l_1266 += 1)
                    {
                        for (l_1172 = 0; l_1172 < 6; l_1172 += 1)
                        {
                            g_508[l_1266][l_1172] = 0L;
                        }
                    }
                }
                if (p_10)
                {
                    int l_1278 = 0L;
                    int l_1279 = 0xE839280FL;
                    unsigned char l_1302 = 0x89L;
                    int l_1309 = (-1L);
                    unsigned l_1310 = 0xAF109A07L;
                    char l_1312 = 1L;
                    for (g_248 = 0; (g_248 <= 1); g_248 += 1)
                    {
                        l_1277 = g_233[0][3][6];
                        l_1160 = l_1278;
                        g_508[1][2] = p_12;
                        if (l_1167[2][0][3])
                            break;
                    }
                    for (g_716 = 1; (g_716 >= 0); g_716 -= 1)
                    {
                        int l_1303 = 1L;
                        int i, j, k;
                        if (g_264[g_428][g_716][(g_428 + 5)])
                            break;
                        l_1279 = g_264[(g_428 + 1)][g_428][g_428];
                        g_547 = (l_1303 = (safe_sub_func_uint8_t_u_u((func_69(g_140[(g_428 + 1)], (l_1279 = ((safe_sub_func_uint16_t_u_u(g_140[g_716], l_1082[6][1])) != (p_9 & (safe_sub_func_uint16_t_u_u((g_1208[1][2][0] = (func_69((~(p_9 || p_13)), (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((!(safe_add_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(g_1194.f0, (p_13 && l_1235[0][1]))) < g_233[0][3][6]) <= l_1235[7][0]), l_1279))), p_12)) , 0x21ECL), 0L)), l_1173)), g_140[g_716])), p_11)), 3)), l_1302, p_11) , g_97)), g_246))))), p_11, l_1145[2][3][4]) , g_264[1][0][9]), p_9)));
                        g_97 = 0xD85FF486L;
                    }
                    l_1312 = ((3UL | p_12) & ((safe_rshift_func_int8_t_s_u(func_79(((((g_233[0][3][6] = (!(((safe_mul_func_int16_t_s_s(((func_61((g_351 , g_1308)) == ((((l_1309 = (l_1279 = ((func_69(p_13, p_10, g_595, (func_69(g_572, g_1208[5][1][0], g_428, g_437) , p_10)) != g_1194.f4) , g_304))) ^ 0x71F0L) == g_1152.f0) < l_1310)) <= l_1278), p_12)) < 8UL) | g_951))) , l_1278) >= l_1311) && l_1133), p_10, p_12, l_1302), g_1159)) & g_572));
                }
                else
                {
                    unsigned l_1317[1][4][6] = {{{0x11705A09L, 0UL, 0x11705A09L, 0UL, 0x11705A09L, 0UL}, {0x11705A09L, 0UL, 0x11705A09L, 0UL, 0x11705A09L, 0UL}, {0x11705A09L, 0UL, 0x11705A09L, 0UL, 0x11705A09L, 0UL}, {0x11705A09L, 0UL, 0x11705A09L, 0UL, 0x11705A09L, 0UL}}};
                    int l_1322 = 9L;
                    int i, j, k;
                    for (g_597 = 0; (g_597 <= 1); g_597 += 1)
                    {
                        const unsigned short l_1318 = 0xC73DL;
                        int l_1323 = (-7L);
                        l_1145[0][3][7] = (safe_add_func_int8_t_s_s(p_13, (l_1274 || (l_1323 = (((g_322[0][4] = p_11) == (safe_add_func_uint32_t_u_u((p_12 && g_572), func_69(l_1317[0][1][4], l_1167[1][0][2], (l_1322 = ((((l_1318 > (safe_mul_func_int8_t_s_s((g_716 = func_79(p_11, g_264[4][0][1], p_11, p_12)), g_195[9][4][1]))) == l_1321) || 249UL) , p_10)), g_1152.f1)))) ^ 0UL)))));
                    }
                    return l_1277;
                }
                l_1172 = g_233[2][1][4];
            }
            if (((g_1308 == p_12) < (g_233[0][3][6] = (0x79F27A7AL && func_61(((g_243 && p_9) , (safe_sub_func_int32_t_s_s(((((((((((l_1145[0][4][3] = l_1079) ^ ((safe_mod_func_uint32_t_u_u(l_1235[0][1], ((safe_mod_func_uint32_t_u_u(func_69(((safe_mul_func_uint8_t_u_u(func_63(func_56(g_691, p_13, g_337), p_10), l_1191[1][0][0])) <= l_1332[4]), g_1208[2][1][0], g_713, p_12), 0x1A41FAD9L)) | l_1333[1]))) == 4294967295UL)) > l_1235[6][1]) | 0x00553993L) | l_1133) ^ g_25) | p_9) >= p_11) == g_1194.f0) & g_508[1][0]), 4294967288UL))))))))
            {
                unsigned short l_1336 = 9UL;
                int l_1345 = 3L;
                int l_1354 = 2L;
                char l_1379 = 0xE8L;
                unsigned l_1380 = 0x5425F76FL;
                unsigned short l_1420 = 5UL;
                if (func_63((l_1145[1][2][0] = ((safe_mod_func_uint32_t_u_u(l_1336, (((safe_sub_func_uint32_t_u_u(g_189[0], func_69((~3UL), p_10, (l_1191[1][0][0] > g_465), ((!func_69(g_55, (safe_lshift_func_uint8_t_u_u(l_1082[6][1], 6)), (g_673 = (p_9 > g_24)), p_9)) >= g_1152.f1)))) , g_1152.f1) && p_9))) != g_1194.f2)), p_12))
                {
                    const short l_1348 = 0x7ADCL;
                    l_1173 = ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((l_1345 = 0L), ((safe_add_func_uint32_t_u_u(((l_1336 == ((l_1348 && l_1082[3][0]) <= g_294)) ^ (((safe_mul_func_uint8_t_u_u((l_1354 = (safe_rshift_func_uint16_t_u_s((func_63(l_1259[0], p_9) && (!(func_63(p_10, l_1353) , l_1336))), 3))), p_12)) < l_1336) != 7L)), 0x2975019AL)) & g_189[0]))), 4)) , l_1235[4][0]);
                }
                else
                {
                    return p_13;
                }
                l_1160 = (safe_mul_func_int8_t_s_s(g_1208[4][2][0], (safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(p_9, g_673)), (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(l_1160, (safe_sub_func_uint32_t_u_u((l_1235[0][1] & (((safe_sub_func_uint8_t_u_u((l_1381 = (((l_1172 = 1L) , (func_79((l_1145[1][2][0] = (safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(2UL, ((safe_rshift_func_int8_t_s_u((g_248 != (func_63((safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((p_9 & l_1167[0][4][1]), l_1379)) , l_1336), l_1380)), g_1152.f0) < l_1259[1])), 7)) > g_322[0][5]))) == 0xF53BL), g_547))), g_294, p_12, p_9) && g_1159)) , l_1145[1][0][4])), l_1382[6])) , p_10) & g_597)), p_9)))), l_1079))))));
                l_1354 = (l_1345 = (safe_mod_func_int8_t_s_s((g_716 = func_56(l_1353, (l_1379 < func_63((safe_lshift_func_uint8_t_u_s(((func_61(l_1167[0][1][3]) > ((!0x9038L) < (!(g_1399 = (g_1208[3][1][0] = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((~(safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((l_1145[1][0][5] = (g_304 >= l_1235[2][1])) ^ 0x9A5FL) != (((l_1079 = g_691) | l_1380) , 0xAFE687E0L)), g_691)), 0x4DL)), 0xA9L))), 1)), l_1336)), g_465))))))) , l_1133), 7)), p_12)), l_1235[0][1])), g_691)));
                if ((((safe_lshift_func_uint8_t_u_u(g_15, 4)) == p_11) > 0x87D1L))
                {
                    unsigned l_1403 = 0x780CB115L;
                    if (g_951)
                    {
                        g_55 = l_1145[1][2][0];
                    }
                    else
                    {
                        const unsigned l_1402 = 0UL;
                        l_1403 = (g_597 && (l_1402 | 65526UL));
                        g_508[1][2] = 0x97668F39L;
                        g_508[0][4] = (g_248 , ((((safe_mod_func_uint32_t_u_u(1UL, p_11)) || (safe_mod_func_int8_t_s_s((-9L), (-1L)))) >= (g_951 <= l_1173)) , (g_189[0] = (g_304 >= (safe_sub_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((g_465 , 0x79L) >= 0x3AL), l_1402)) <= 0xC222L), 1L))))));
                        l_1420 = (2UL || ((g_465 <= ((g_1208[5][1][0] = ((safe_mul_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(p_13, (((safe_add_func_uint8_t_u_u((g_1194.f1 ^ p_9), (((l_1259[1] , ((p_12 , 2L) == p_10)) > l_1402) == 1L))) == 0x85L) ^ p_13))) , l_1379), l_1210)) && p_11)) == 1UL)) ^ l_1210));
                    }
                }
                else
                {
                    unsigned l_1425 = 0UL;
                    g_1152.f0 = l_1082[1][1];
                    for (l_1132 = 0; (l_1132 >= (-22)); --l_1132)
                    {
                        short l_1426 = (-3L);
                        int l_1433 = 0x08156538L;
                        int l_1450 = 0x5C9FC9F2L;
                        if (g_15)
                            break;
                        l_1354 = (safe_rshift_func_uint16_t_u_s((g_951 | ((func_61((g_1208[5][1][0] = l_1425)) | (((((p_9 , (g_592 > (((((l_1426 = g_508[2][0]) != (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((l_1079 = (l_1145[1][2][0] = (((l_1104 == 255UL) || p_12) , 0x3E6EL))), 1L)) != 0UL) | p_11), 1UL)), 0UL))) && (-1L)) != p_9) > l_1433))) > l_1381) | l_1433) && l_1353) & g_595)) <= p_13)), g_1194.f2));
                        l_1450 = ((g_597 = ((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((g_1152.f2 >= ((l_1433 = (l_1145[1][2][0] , (safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(func_79(l_1332[4], (l_1167[0][1][3] == g_140[1]), (safe_lshift_func_int16_t_s_s((l_1433 <= 0x02L), (((4294967286UL > (g_97 , p_9)) , g_246) != p_13))), g_508[1][2]), g_1399)), p_10)) , p_13), g_130)), g_597)), l_1382[6])))) ^ 0xACF9L)), g_508[1][2])), 4UL)) >= (-1L))) >= p_10);
                    }
                    if ((0x23L && (8UL || (((safe_mod_func_int32_t_s_s(1L, ((safe_add_func_int32_t_s_s((g_97 | 249UL), ((g_189[0] = ((((safe_lshift_func_int16_t_s_s(((l_1381 = ((p_11 & (-1L)) , (safe_mul_func_uint16_t_u_u((p_10 , l_1235[1][1]), g_716)))) ^ l_1332[1]), 7)) , g_437) , l_1333[1]) , (-9L))) , l_1259[2]))) | g_428))) && 0x3D8EL) & (-4L)))))
                    {
                        int l_1459 = 0x4834126DL;
                        if (l_1459)
                            break;
                        if (l_1321)
                            break;
                        g_592 = l_1425;
                    }
                    else
                    {
                        short l_1462 = 0x4DA5L;
                        int l_1467 = (-1L);
                        l_1381 = (func_79((((safe_add_func_int32_t_s_s(((g_1152.f4 = (g_189[0] != ((l_1462 & (func_79(func_63(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(((((func_63((l_1467 = 0xBBCDL), g_674) != (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(l_1145[0][1][5], g_1152.f2)), ((p_11 , g_428) ^ p_10)))) < l_1259[0]) <= 0xEFL) == p_10), g_246)), 14)) < 255UL), l_1235[0][1]), g_572, l_1462, l_1462) & 0L)) != g_716))) , g_1399), 0x9216B389L)) < g_465) <= g_1152.f0), l_1425, p_10, l_1462) <= g_264[1][0][9]);
                        return g_598;
                    }
                }
            }
            else
            {
                unsigned char l_1472 = 0x63L;
                l_1472 = p_12;
            }
        }
    }
    if (((safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_1332[4], ((safe_mul_func_uint8_t_u_u(func_69(((g_85 , (((((safe_mul_func_int16_t_s_s((p_12 <= (safe_add_func_int8_t_s_s(func_61((((safe_sub_func_uint16_t_u_u((l_1160 = ((safe_add_func_int16_t_s_s(((g_130 >= g_1194.f0) , (l_1082[6][1] & (g_1194.f3 | (func_63((safe_mod_func_int8_t_s_s(((g_508[1][2] | (!g_547)) , 6L), g_351)), g_294) > 0x7CL)))), g_951)) == 0x78B3536CL)), 0UL)) , g_508[1][3]) , p_12)), 8L))), p_11)) & 0UL) && 8L) < l_1104) , 65529UL)) , 0UL), l_1082[6][1], g_673, l_1209), l_1209)) , l_1333[1]))), 5)) | l_1491))
    {
        unsigned short l_1502 = 9UL;
        int l_1507[4] = {(-9L), 0x5D6D2016L, (-9L), 0x5D6D2016L};
        unsigned l_1545 = 0x2EEECBBFL;
        unsigned l_1559 = 9UL;
        int l_1586 = 0x05B2E82CL;
        unsigned short l_1609 = 1UL;
        int i;
        for (g_691 = (-23); (g_691 < 19); ++g_691)
        {
            g_97 = 0x3D45BDCFL;
        }
        l_1160 = (l_1381 = (0L && (safe_mul_func_int16_t_s_s(1L, ((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(p_11, func_42(l_1502, g_572, ((safe_add_func_uint16_t_u_u(func_79(g_597, (safe_lshift_func_uint8_t_u_s(p_11, l_1502)), p_11, g_157), l_1507[1])) && g_351), g_674))), p_11)), (-4L))) , g_1208[5][0][0])))));
        for (g_595 = 20; (g_595 > 38); ++g_595)
        {
            unsigned char l_1518[7][3][1] = {{{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}};
            int l_1528[7][1] = {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}};
            char l_1574 = (-1L);
            int l_1587[5][10][1] = {{{0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}}, {{0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}}, {{0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}}, {{0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}}, {{0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}, {0xEDAAB079L}}};
            short l_1610 = (-1L);
            int i, j, k;
            for (g_243 = 0; (g_243 >= (-20)); g_243 = safe_sub_func_int8_t_s_s(g_243, 4))
            {
                const short l_1529 = 0x2A16L;
                unsigned char l_1555 = 0x86L;
                int l_1575[9][3] = {{0L, (-3L), (-1L)}, {0L, (-3L), (-1L)}, {0L, (-3L), (-1L)}, {0L, (-3L), (-1L)}, {0L, (-3L), (-1L)}, {0L, (-3L), (-1L)}, {0L, (-3L), (-1L)}, {0L, (-3L), (-1L)}, {0L, (-3L), (-1L)}};
                int i, j;
                g_592 = (p_9 < (safe_rshift_func_uint8_t_u_u(g_597, p_11)));
                if ((func_79((safe_mod_func_int8_t_s_s((+p_11), (p_9 ^ ((~((safe_sub_func_uint8_t_u_u(l_1518[4][2][0], func_79(p_12, (func_69((((safe_sub_func_int8_t_s_s((-9L), (l_1082[5][1] == (safe_unary_minus_func_uint16_t_u((~((l_1528[6][0] = (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(p_10, (l_1381 = ((g_716 = 2L) & ((~((safe_mul_func_int16_t_s_s(g_248, 8L)) , g_598)) & 1L))))), 0x25C3L))) , l_1528[6][0]))))))) != 0x7B789292L) | g_674), g_233[5][1][5], g_1159, g_1152.f3) ^ l_1529), l_1332[4], l_1529))) | p_11)) , g_351)))), g_157, l_1502, g_595) ^ 2L))
                {
                    unsigned l_1548 = 0x238864BEL;
                    l_1507[1] = l_1502;
                    if (p_10)
                    {
                        int l_1540 = 0x2D39B368L;
                        l_1540 = (g_508[1][2] = (safe_sub_func_int8_t_s_s(0x0FL, (((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((p_12 | p_12), 1UL)) <= (safe_mul_func_uint16_t_u_u((func_63(g_673, l_1540) ^ (((g_1208[5][1][0] = (safe_rshift_func_int16_t_s_u((((((!(safe_lshift_func_uint8_t_u_u(func_69((func_69((l_1528[0][0] = g_189[0]), l_1529, p_9, g_1399) >= g_1152.f0), l_1507[1], l_1518[4][2][0], g_246), 6))) > p_9) < l_1545) , g_1546) , g_437), l_1082[5][1]))) == l_1529) , 5L)), g_1547))), p_10)) >= l_1548), 6)) < 0x1EL) , g_508[2][2]))));
                        g_508[1][2] = ((safe_mod_func_int32_t_s_s(func_63((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((func_79(g_1152.f1, l_1555, ((g_1194 , ((p_13 != ((g_1159 = (g_130 = (p_13 != (safe_mul_func_int8_t_s_s(((l_1518[4][2][0] == g_674) >= g_1091), ((((l_1160 ^ (-3L)) || p_11) && 0x521CB322L) & p_10)))))) ^ p_9)) <= g_243)) , l_1518[4][2][0]), l_1558) || g_322[0][5]), 0)), 0x2796L)), l_1559), l_1528[4][0])) >= g_24);
                    }
                    else
                    {
                        int l_1560[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1560[i] = (-1L);
                        g_547 = 1L;
                        l_1560[0] = l_1560[0];
                        if (g_351)
                            break;
                    }
                    l_1507[1] = 0L;
                    for (g_597 = 0; (g_597 != 14); g_597 = safe_add_func_int16_t_s_s(g_597, 7))
                    {
                        return g_674;
                    }
                }
                else
                {
                    if (((safe_rshift_func_int16_t_s_s(1L, 7)) ^ l_1507[1]))
                    {
                        unsigned l_1565[7][1] = {{0xC3FDA44EL}, {0xC3FDA44EL}, {0xC3FDA44EL}, {0xC3FDA44EL}, {0xC3FDA44EL}, {0xC3FDA44EL}, {0xC3FDA44EL}};
                        int l_1576[3][10] = {{0x68AFE38AL, 0L, (-1L), 0x8F42D42CL, 0x8F42D42CL, (-1L), 0L, 0x68AFE38AL, (-1L), 0x68AFE38AL}, {0x68AFE38AL, 0L, (-1L), 0x8F42D42CL, 0x8F42D42CL, (-1L), 0L, 0x68AFE38AL, (-1L), 0x68AFE38AL}, {0x68AFE38AL, 0L, (-1L), 0x8F42D42CL, 0x8F42D42CL, (-1L), 0L, 0x68AFE38AL, (-1L), 0x68AFE38AL}};
                        int i, j;
                        l_1576[0][9] = ((l_1575[1][2] = func_79(l_1565[1][0], g_1194.f4, (((p_12 && func_69(g_130, (safe_rshift_func_int16_t_s_s((p_11 , (((safe_add_func_uint32_t_u_u(g_674, ((p_12 = 1UL) >= (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((0xC5961EC8L && (g_264[1][0][9] = (0xB211L > g_322[0][8]))), g_351)), 11))))) , l_1574) , l_1565[1][0])), p_10)), p_13, g_1308)) < g_130) , g_372), g_1308)) && g_595);
                        g_189[0] = g_248;
                    }
                    else
                    {
                        return g_1194.f2;
                    }
                }
            }
            if (func_61(((l_1587[0][6][0] = (safe_unary_minus_func_int8_t_s(((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_1586 = (safe_mul_func_uint16_t_u_u((((((l_1507[1] = l_1502) != l_1502) < ((0xE370L < ((g_130 = (((g_243 = l_1502) , ((((safe_mul_func_int16_t_s_s(0x7DF7L, 0xC5F5L)) | p_9) == l_1518[4][2][0]) & (l_1528[1][0] = g_264[2][1][2]))) >= 0x28354FF8L)) && p_10)) || g_195[9][4][1])) < l_1574) <= 0x80B4L), g_465))), g_140[2])), (-5L))) , p_12)))) , 0UL)))
            {
                for (g_24 = 0; (g_24 <= 0); g_24 += 1)
                {
                    return g_595;
                }
            }
            else
            {
                int l_1601 = 2L;
                for (g_1159 = 15; (g_1159 > 41); g_1159++)
                {
                    int l_1594 = 0xE34A349AL;
                    for (g_294 = (-16); (g_294 == 32); g_294 = safe_add_func_uint32_t_u_u(g_294, 2))
                    {
                        return g_195[9][4][1];
                    }
                    for (g_597 = 22; (g_597 == 44); g_597 = safe_add_func_int32_t_s_s(g_597, 1))
                    {
                        g_1194.f0 = (4L <= ((p_13 & l_1594) , p_10));
                        l_1586 = (p_13 && ((safe_sub_func_int16_t_s_s(g_1152.f0, (p_11 >= p_10))) < ((((0x024FL || ((((p_12 = (g_24 == (g_465 = (g_85 = (safe_lshift_func_uint8_t_u_u(((l_1160 ^ func_69(l_1545, (safe_lshift_func_int8_t_s_s((~(~l_1528[2][0])), 5)), p_12, l_1601)) && g_233[0][3][6]), 3)))))) , p_11) , l_1507[3]) == p_10)) || g_246) , 1L) < 0xDFL)));
                        if (l_1594)
                            continue;
                    }
                    l_1528[6][0] = (g_437 = g_598);
                }
                return g_547;
            }
            g_592 = ((l_1518[4][2][0] < ((((!p_12) , g_1602[2][0]) , (l_1586 = l_1558)) & (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((g_1152.f4 = (!l_1332[4])) >= p_9) <= (g_157 = p_12)), ((safe_mod_func_uint16_t_u_u(p_13, (l_1609 = 0xD484L))) < 1UL))), p_9)))) && 0x5AL);
            for (l_1609 = 0; (l_1609 <= 1); l_1609 += 1)
            {
                int l_1616 = 0L;
                unsigned l_1645 = 0x075585C2L;
                int i, j;
                g_508[l_1609][(l_1609 + 3)] = ((l_1610 = (-6L)) ^ (safe_add_func_int8_t_s_s(l_1613, p_10)));
                if ((((!(((func_69(g_1194.f3, (((l_1507[2] = (((g_508[(l_1609 + 1)][(l_1609 + 1)] = l_1132) & (safe_add_func_int8_t_s_s((((((g_1602[2][0].f1 >= l_1616) >= (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(l_1333[0], (~(g_337 && p_9)))), (g_337 | p_12)))) <= p_9) ^ 0x99L) || p_9), g_428))) ^ 0x444AL)) , 0xDFL) <= 0xDFL), g_60, p_9) < 0x19L) <= l_1558) == g_951)) > 0xDE19L) | l_1621))
                {
                    char l_1642 = 0xACL;
                    if (func_61((g_195[4][8][1] > (~l_1587[0][6][0]))))
                    {
                        g_157 = p_9;
                        g_465 = (p_13 > (safe_add_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((g_1152.f0 || ((0xCFL ^ ((safe_mod_func_uint32_t_u_u(0UL, ((p_12 >= 0x277CAAC1L) || (safe_rshift_func_int16_t_s_u(func_61(((func_56(p_11, (safe_mul_func_int16_t_s_s((l_1587[0][6][0] == 0xE1967210L), 0x4E00L)), p_9) >= 0x010BL) , g_951)), 14))))) ^ 0xBB8F4CD5L)) <= g_547)), g_60)) , p_11), (-1L))) > g_508[(l_1609 + 1)][(l_1609 + 1)]) , 0xD6L), 0x4BL)));
                    }
                    else
                    {
                        unsigned short l_1652 = 0xC075L;
                        g_592 = (g_1602[2][0].f1 , (safe_rshift_func_uint8_t_u_u(255UL, p_10)));
                        l_1528[5][0] = (l_1160 = ((safe_mul_func_uint16_t_u_u(5UL, g_1159)) && ((((safe_add_func_int32_t_s_s(l_1642, (safe_add_func_int32_t_s_s((l_1645 , (((safe_mul_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(65529UL, ((-1L) ^ (safe_mul_func_int8_t_s_s(p_11, 0x77L))))) | (((~func_63(g_351, p_12)) && (-1L)) < l_1587[1][8][0])), 0xBCL)) >= 0xC0L) , l_1652)), (-1L))))) < p_12) , g_1653) , 0L)));
                        if (l_1652)
                            continue;
                    }
                }
                else
                {
                    return g_294;
                }
                return g_97;
            }
        }
    }
    else
    {
        unsigned l_1661 = 0UL;
        int l_1666 = 0xB8636C6BL;
        int l_1672 = 3L;
        short l_1720 = (-4L);
        g_1152.f0 = ((safe_rshift_func_int16_t_s_s(l_1333[1], 11)) & ((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((g_465 , (-8L)), 4)) , ((p_9 ^ (p_13 > (l_1613 = 0L))) , g_1194.f2)), (g_97 <= l_1381))) && 4294967292UL));
        for (l_1132 = 2; (l_1132 >= 0); l_1132 -= 1)
        {
            char l_1667[7][8][1] = {{{0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}}, {{0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}}, {{0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}}, {{0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}}, {{0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}}, {{0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}}, {{0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}, {0x4DL}}};
            unsigned l_1668 = 0x1DCECFD5L;
            int l_1669 = 0x3209F1CCL;
            int l_1681 = 0x23476407L;
            const short l_1682[1] = {0xDCF9L};
            short l_1754[10] = {0L, 0x1625L, 0L, 0x1625L, 0L, 0x1625L, 0L, 0x1625L, 0L, 0x1625L};
            int i, j, k;
            l_1661 = l_1660[0];
            l_1669 = (g_189[0] = ((safe_sub_func_int32_t_s_s(g_15, (g_1602[2][0].f4 >= ((g_1091 >= l_1132) & ((g_1208[2][0][0] = (safe_sub_func_uint16_t_u_u(((~(l_1666 = l_1133)) & ((p_12 = (func_69(g_592, ((g_428 & l_1082[6][2]) >= p_9), p_13, l_1667[2][2][0]) < l_1668)) , 1L)), 0x33DEL))) | l_1082[4][0]))))) < g_1546));
            g_189[0] = (safe_mod_func_uint8_t_u_u(func_26((l_1672 = (0x91L && g_572)), p_13, ((safe_mul_func_int8_t_s_s(((p_12 = l_1667[2][2][0]) < p_10), (0x9C79L | ((l_1133 == 4UL) >= (0xF3L >= g_1208[1][0][0]))))) >= p_9), p_10), p_9));
            g_85 = ((l_1381 = (func_69((g_1653.f4 = (((l_1672 = g_60) & ((l_1669 = g_1653.f3) <= ((l_1613 = (safe_rshift_func_int8_t_s_s(((l_1667[4][7][0] == ((0xC116FBF6L | ((l_1681 = (safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_11, ((((255UL > l_1082[6][1]) || p_13) , l_1666) , 1UL))), p_10))) | p_13)) != g_140[1])) ^ g_304), 7))) || g_55))) & l_1082[6][1])), p_11, p_13, g_465) & l_1682[0])) , 0x0963643EL);
            for (g_246 = 3; (g_246 >= 0); g_246 -= 1)
            {
                const int l_1691 = (-1L);
                int i, j;
                g_508[l_1132][(l_1132 + 2)] = (safe_mul_func_int8_t_s_s(p_12, p_13));
                if (func_63(g_351, ((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int16_t_s_s(func_63((safe_sub_func_uint16_t_u_u(0x2609L, l_1691)), l_1666), (safe_lshift_func_uint8_t_u_s((!l_1660[0]), ((safe_mul_func_uint8_t_u_u(253UL, (safe_lshift_func_int16_t_s_u(g_1547, func_69(g_243, g_1602[2][0].f1, l_1668, g_951))))) , 0x25L))))) , g_951), 10)) <= 65531UL)))
                {
                    short l_1706 = 0L;
                    int l_1710[10][10][2] = {{{0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}}, {{0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}}, {{0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}}, {{0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}}, {{0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}}, {{0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}}, {{0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}}, {{0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}}, {{0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}}, {{0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}, {0xF5323B3AL, 0x7D0C5611L}}};
                    int l_1711[6][1] = {{0xB061CCE8L}, {0xB061CCE8L}, {0xB061CCE8L}, {0xB061CCE8L}, {0xB061CCE8L}, {0xB061CCE8L}};
                    unsigned char l_1712[8][2] = {{0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}};
                    int l_1719[1];
                    unsigned char l_1723 = 7UL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1719[i] = 0x2D9C0417L;
                    for (g_592 = 1; (g_592 >= 0); g_592 -= 1)
                    {
                        int i, j, k;
                        g_437 = (safe_sub_func_uint8_t_u_u(0x3EL, (safe_mod_func_int32_t_s_s(l_1333[g_592], 0xAC391292L))));
                        g_437 = ((func_79(g_233[(l_1132 + 3)][(g_592 + 2)][g_592], g_1308, ((safe_mod_func_int32_t_s_s(g_1547, g_508[l_1132][(l_1132 + 2)])) ^ l_1082[6][1]), (((l_1082[3][1] < (0x62A9L == (0x97192CBFL >= (g_264[2][1][9] ^ (-1L))))) , 0xD4L) > 0L)) , l_1668) == 0x0CA1L);
                        l_1720 = (+((safe_rshift_func_uint16_t_u_s(g_195[3][3][1], (((((l_1706 = l_1691) <= ((safe_mod_func_uint16_t_u_u((l_1710[1][2][1] = l_1709), l_1711[5][0])) , (l_1712[2][1] = g_508[1][2]))) && (safe_lshift_func_int16_t_s_u(func_79((p_11 , (safe_mul_func_uint16_t_u_u(((((g_1653.f1 , (safe_mod_func_int8_t_s_s(g_1308, (p_11 , g_1208[5][1][0])))) || p_12) < 0x6C719B74L) & g_1602[2][0].f0), p_12))), l_1719[0], p_12, g_1152.f1), p_13))) != l_1719[0]) , l_1672))) ^ p_13));
                        g_189[0] = (safe_lshift_func_uint8_t_u_u(((l_1613 = ((l_1723 , (-1L)) & l_1682[0])) , (l_1491 = ((l_1672 = l_1720) || func_79(p_11, l_1082[4][2], ((!p_12) && (l_1104 > func_79((safe_add_func_int16_t_s_s(l_1682[0], 0xF841L)), l_1333[1], p_10, g_1152.f3))), g_437)))), 7));
                    }
                    l_1711[0][0] = (l_1381 = g_1194.f4);
                    if ((l_1160 , ((safe_mod_func_uint16_t_u_u(func_69(((safe_add_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0x2CL, (l_1613 = p_12))), (func_63((l_1711[3][0] = (safe_mod_func_int8_t_s_s(((g_55 = (l_1491 = ((safe_rshift_func_uint8_t_u_s(p_9, 1)) , (-10L)))) | g_294), (safe_mod_func_uint32_t_u_u(p_11, 0x1DFE4E4BL))))), (safe_lshift_func_int16_t_s_s(l_1691, 10))) , p_10))) , g_304) , l_1691), 0xE5L)) >= g_716), l_1712[0][1], g_247, p_10), g_1742)) ^ l_1333[1])))
                    {
                        if (g_1152.f1)
                            break;
                    }
                    else
                    {
                        unsigned char l_1743 = 0x40L;
                        const unsigned l_1744 = 8UL;
                        g_508[0][5] = (+(l_1672 && (l_1672 = p_9)));
                        l_1160 = (l_1743 = (p_13 , (g_508[l_1132][(l_1132 + 2)] = (-2L))));
                        l_1613 = (l_1744 && ((safe_add_func_uint8_t_u_u(func_69(p_12, p_10, g_304, (l_1668 , ((((safe_mul_func_int16_t_s_s((l_1381 = p_13), (l_1672 = (p_12 & (safe_mod_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int8_t_s(g_1194.f3)), p_11)) == p_13) || 5UL), l_1332[1])))))) < l_1754[3]) >= g_716) == l_1743))), 0x39L)) == 0x43L));
                    }
                }
                else
                {
                    for (g_157 = 0; (g_157 <= 1); g_157 += 1)
                    {
                        int i, j, k;
                        l_1491 = l_1333[g_157];
                        g_97 = l_1333[g_157];
                        g_1152.f0 = g_233[l_1132][g_246][(g_246 + 2)];
                        l_1160 = (safe_sub_func_int32_t_s_s(g_195[(g_157 + 1)][(l_1132 + 6)][g_157], 0xBB7A55C2L));
                    }
                    if (p_12)
                        break;
                }
                l_1381 = (((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((!l_1333[1]), ((safe_mod_func_uint8_t_u_u(0x82L, (((safe_add_func_uint8_t_u_u((g_157 ^ g_189[0]), (safe_mul_func_int8_t_s_s(p_9, (l_1668 | (((safe_mod_func_int8_t_s_s(0L, ((+((g_97 != (0L | g_1308)) | 0xAEL)) | g_1208[5][1][0]))) & g_294) == p_12)))))) , 3UL) ^ p_11))) ^ 0x5B428FE8L))), g_189[0])) | 0xE4C4L) < 0x314CB059L);
                if (l_1661)
                    continue;
                for (g_592 = 1; (g_592 >= 0); g_592 -= 1)
                {
                    int l_1769 = (-1L);
                    int i;
                    for (l_1668 = 0; (l_1668 <= 3); l_1668 += 1)
                    {
                        int i, j, k;
                        l_1681 = (l_1333[g_592] != g_233[(g_246 + 1)][g_592][(l_1132 + 6)]);
                        g_465 = g_195[l_1668][(g_246 + 3)][g_592];
                    }
                    if ((l_1672 = l_1333[g_592]))
                    {
                        int i, j, k;
                        return g_233[(g_592 + 2)][g_246][g_592];
                    }
                    else
                    {
                        short l_1772 = 0x62FBL;
                        l_1769 = g_1152.f0;
                        l_1772 = (safe_mod_func_int8_t_s_s((g_716 = g_1194.f3), (g_233[0][3][6] = (l_1666 || p_12))));
                        return l_1666;
                    }
                }
            }
        }
    }
    return l_1160;
}







static unsigned func_26(unsigned char p_27, short p_28, unsigned p_29, int p_30)
{
    int l_47 = 0xB91EE328L;
    int l_50 = 0x5018227FL;
    p_30 = (p_29 == ((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s(((func_42((p_28 | l_47), ((p_30 ^ (0x70979B5CL >= (l_50 = (safe_lshift_func_int16_t_s_u((-10L), 11))))) <= 7L), (((l_47 && (safe_mul_func_int8_t_s_s(0x88L, l_47))) , p_30) , g_25), g_25) & l_47) > p_28), p_30)) >= g_713) > l_47), p_29)), 0x757FL)) <= l_47));
    return g_322[0][5];
}







static unsigned char func_42(unsigned p_43, const unsigned p_44, const int p_45, unsigned char p_46)
{
    int l_53[2][2] = {{0xEED764E3L, (-1L)}, {0xEED764E3L, (-1L)}};
    int l_54 = 1L;
    unsigned l_105[2][7];
    int l_438 = 1L;
    unsigned char l_466 = 255UL;
    short l_569 = 1L;
    unsigned l_596 = 4294967295UL;
    short l_620 = 1L;
    unsigned l_649 = 0x466F68A3L;
    char l_860 = (-5L);
    unsigned char l_911 = 0x7DL;
    unsigned char l_960 = 0x6CL;
    char l_985 = 0xCDL;
    int l_990 = (-1L);
    unsigned l_1054[9] = {4294967287UL, 4294967287UL, 0xBDEA18B4L, 4294967287UL, 4294967287UL, 0xBDEA18B4L, 4294967287UL, 4294967287UL, 0xBDEA18B4L};
    int l_1057[6];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
            l_105[i][j] = 0xC1E39B24L;
    }
    for (i = 0; i < 6; i++)
        l_1057[i] = 0xFAF73F63L;
    l_54 = (l_53[1][0] = ((g_25 ^ g_25) | 8L));
    for (g_25 = 1; (g_25 >= 0); g_25 -= 1)
    {
        char l_74 = 0xD1L;
        const int l_75 = 0L;
        int l_396 = 0x14CDB9EEL;
        char l_397 = 0L;
        unsigned char l_462[10];
        unsigned char l_510 = 0x55L;
        int l_566[6] = {0L, 0x7556A0A9L, 0L, 0x7556A0A9L, 0L, 0x7556A0A9L};
        short l_567 = (-1L);
        int i;
        for (i = 0; i < 10; i++)
            l_462[i] = 0xEEL;
        for (l_54 = 0; (l_54 <= 1); l_54 += 1)
        {
            unsigned l_66 = 0x2FB88B70L;
            int l_106 = 0xA355C284L;
            unsigned short l_517 = 0x146EL;
            int l_568 = 0x6E7E326BL;
            int i, j;
            if (((g_55 = 0x58L) , (func_56((g_60 = l_53[l_54][l_54]), (g_140[1] = ((func_61((l_106 = (l_105[1][5] = (func_63((p_46 & 0xE864L), (((l_66 , ((safe_mod_func_uint8_t_u_u(func_69((l_74 = 0UL), l_75, (g_25 , (p_45 < g_25)), l_53[0][1]), 0x9BL)) > g_55)) , g_25) ^ 0x493BL)) , p_45)))) , 0x90L) > p_44)), p_44) < g_264[3][1][7])))
            {
                char l_385 = 0L;
                int l_406 = (-4L);
                int l_421[3];
                unsigned short l_430 = 0xA711L;
                unsigned short l_436 = 65535UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_421[i] = 0L;
                for (g_247 = 0; (g_247 <= 1); g_247 += 1)
                {
                    int l_390[5];
                    int l_391 = 0xA0C01309L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_390[i] = 2L;
                    if (l_75)
                    {
                        unsigned l_384 = 1UL;
                        g_189[0] = l_384;
                        if (p_44)
                            break;
                        l_385 = 9L;
                        l_397 = (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((l_390[2] = g_233[3][2][5]), l_391)), (0x6C2C9570L != (safe_mod_func_int8_t_s_s(g_233[0][3][6], (safe_rshift_func_uint8_t_u_s((l_396 = p_46), (l_75 == 0x51L))))))));
                    }
                    else
                    {
                        unsigned l_429 = 0x674FF210L;
                        l_106 = (safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_189[0], p_46)), (g_130 = (g_233[0][3][6] <= ((safe_lshift_func_uint8_t_u_s((l_406 , (~g_189[0])), (safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_43, 0)), g_351)) >= (l_53[1][0] , p_45)), 1UL)))) <= g_264[1][0][9])))));
                        g_157 = (safe_sub_func_uint8_t_u_u(g_233[1][1][7], (safe_lshift_func_uint16_t_u_s((func_69(p_46, g_264[1][0][9], l_53[l_54][l_54], ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((l_396 = g_195[9][0][1]), 3)), ((((l_421[1] = ((l_106 = (-10L)) != func_63((l_421[1] = g_322[0][5]), ((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((g_428 = 0x9EL), ((0x8716B358L & g_233[0][3][6]) < l_429))), l_430)), p_46)) < l_390[2])))) || 0x39L) & g_248) ^ l_105[1][5]))) > p_44)) > g_372), 7))));
                    }
                    for (l_74 = 0; (l_74 <= 1); l_74 += 1)
                    {
                        int l_435 = 1L;
                        l_421[1] = (((l_438 = func_79((func_69(g_243, ((((g_233[0][3][6] = func_63(l_105[1][2], p_45)) <= (0x6EL <= ((~(l_390[2] , (func_69((safe_mod_func_uint16_t_u_u((g_437 = ((g_246 = g_322[0][5]) == ((safe_mul_func_int8_t_s_s(func_69((l_396 = g_294), ((l_435 < p_44) | l_105[0][4]), g_372, l_436), 0x55L)) > 4UL))), 0x8EEAL)), g_322[0][5], p_43, g_140[1]) || g_25))) , l_391))) , 1L) != g_248), l_385, l_75) , g_264[1][0][9]), l_106, g_304, l_105[1][5])) , p_43) > l_75);
                        l_438 = (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_435 ^ (!p_46)), 4UL)), (0xCF2BL <= (p_43 , (l_390[3] > func_79((safe_mod_func_int32_t_s_s((l_436 >= (((0x72L ^ l_435) != 0x0CL) | 1UL)), l_385)), p_44, l_406, l_435))))));
                    }
                }
                if (p_44)
                {
                    short l_445 = 7L;
                    l_445 = ((g_130 = 0x22L) || (~253UL));
                    l_106 = (safe_sub_func_uint8_t_u_u(g_233[0][3][6], ((safe_sub_func_int16_t_s_s((g_304 = (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(0xF6L, (safe_sub_func_uint32_t_u_u((func_69((safe_mod_func_int16_t_s_s(0x3776L, p_46)), l_421[1], l_385, ((safe_sub_func_uint32_t_u_u((0xC490E491L & (func_79(func_79(g_247, ((p_46 || p_44) == l_421[1]), g_294, p_44), l_421[2], p_45, l_462[6]) == 0UL)), l_421[1])) ^ p_44)) ^ p_46), 0xBC8A1087L)))), l_421[0]))), 6L)) , p_45)));
                    l_106 = g_233[0][3][6];
                }
                else
                {
                    unsigned l_469 = 4294967286UL;
                    l_466 = func_69(g_372, l_54, (safe_rshift_func_int8_t_s_s((l_421[1] | p_46), 2)), ((g_465 = 4UL) & p_43));
                    l_438 = (g_189[0] = g_294);
                    l_421[1] = (safe_mod_func_uint32_t_u_u((l_469 >= 0xE90BL), p_43));
                }
                for (g_130 = 0; (g_130 <= 2); g_130 += 1)
                {
                    unsigned l_472 = 0x0EF40D5FL;
                    for (l_74 = 2; (l_74 >= 0); l_74 -= 1)
                    {
                        int l_473[8];
                        int l_474 = (-1L);
                        const unsigned l_487 = 0xF89FDFA6L;
                        int i, j;
                        for (i = 0; i < 8; i++)
                            l_473[i] = 0x3FD4DAF7L;
                        g_465 = ((0x570721F1L && ((((g_248 , 3L) , ((safe_rshift_func_uint8_t_u_s(((~(g_322[l_74][(g_130 + 7)] = ((g_130 , 0UL) , g_243))) , func_69(((g_85 = (l_474 = ((l_473[3] = l_472) , g_437))) != 0x90916964L), g_189[0], g_55, l_436)), 0)) == 255UL)) , 249UL) | p_45)) ^ p_45);
                        l_438 = func_69(p_44, l_106, p_44, ((safe_mul_func_uint8_t_u_u((g_130 > (l_421[0] = 0xFFL)), 0x91L)) >= (l_472 > (safe_rshift_func_uint16_t_u_s((func_63((!0x0484L), ((l_473[4] = l_53[1][0]) , 0x3CC7C379L)) , 0x0405L), 13)))));
                        if (l_473[3])
                            break;
                        g_97 = (((((l_438 = (safe_rshift_func_int16_t_s_s((g_189[0] , 0xB669L), (p_43 & 0x09AA7195L)))) >= (safe_rshift_func_uint16_t_u_u(g_246, 5))) && (((safe_mul_func_uint8_t_u_u(g_337, (l_53[l_54][l_54] <= l_105[1][1]))) | (safe_mod_func_uint8_t_u_u(((p_46 = 0xBDL) && l_74), l_487))) >= l_472)) < g_248) && p_45);
                    }
                    return g_246;
                }
            }
            else
            {
                unsigned l_496 = 0xB109B497L;
                int l_507[6] = {0x38BE73C4L, 0L, 0x38BE73C4L, 0L, 0x38BE73C4L, 0L};
                int i;
                for (g_372 = 0; (g_372 <= 1); g_372 += 1)
                {
                    unsigned short l_509 = 65534UL;
                    int l_511 = 0xEC2C2CA2L;
                    int l_512 = 0xD83B5BCAL;
                    l_512 = (l_511 = ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_74, l_496)), (0xE7DBFF4BL || (g_85 = (func_69(g_97, g_157, func_69(((l_509 = ((g_264[0][1][4] = ((safe_rshift_func_uint16_t_u_u(p_43, 2)) >= ((safe_mul_func_uint16_t_u_u((g_508[1][2] = (l_507[4] = (safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(l_54, (((safe_mul_func_int16_t_s_s(g_465, ((p_43 != g_233[0][3][6]) , (-1L)))) < l_396) == p_43))) , p_43), l_397)))), p_46)) >= 65535UL))) != l_496)) ^ p_46), g_465, l_510, g_351), g_248) & 9UL))))) | p_45) , g_264[1][0][9]), g_130)), l_396)) ^ p_45));
                    for (l_397 = 1; (l_397 >= 0); l_397 -= 1)
                    {
                        int l_518 = 0x8B776BB6L;
                        int i, j;
                        l_106 = ((((0x62D413A9L <= 0x4E8F80D4L) <= ((safe_add_func_uint32_t_u_u(p_43, ((l_512 ^ g_85) || g_130))) != ((safe_mod_func_int8_t_s_s(g_428, g_372)) > p_43))) <= p_44) && 0x2CE0BC2EL);
                        g_508[1][0] = (l_518 = func_69(((l_53[g_372][g_372] = (l_511 == (func_61(l_396) && g_351))) , l_517), g_465, ((~((4294967287UL < (p_45 < 0xBEL)) >= l_518)) == g_508[2][2]), l_462[3]));
                        l_396 = ((safe_lshift_func_uint8_t_u_u(g_85, 1)) || (l_106 = p_46));
                        if (p_45)
                            continue;
                    }
                    l_396 = ((safe_mod_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s(0xA2L, (safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(func_79(p_43, l_517, g_189[0], g_428), (safe_lshift_func_int8_t_s_s((p_44 == (((safe_add_func_uint16_t_u_u((l_496 | (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_45, 0UL)), g_60))), p_46)) , 6L) | g_428)), l_75)))), p_46)), 9UL)), p_44)))) <= 0xB81BEB09L) > g_189[0]), 0xE0DEC91BL)) == g_140[1]);
                    if (l_106)
                    {
                        char l_550 = 1L;
                        g_437 = ((safe_rshift_func_uint8_t_u_u((g_264[3][1][9] , (func_61(g_195[7][6][1]) || p_46)), (safe_mod_func_uint16_t_u_u((l_550 = ((((safe_add_func_uint32_t_u_u((l_509 & ((g_547 = 0UL) || (l_106 = (safe_sub_func_int8_t_s_s(1L, (((g_372 , func_69(p_43, l_511, l_106, l_105[1][5])) > p_43) & p_44)))))), 0x2BC09786L)) , 0L) >= (-6L)) < g_508[0][5])), 0xE480L)))) , l_53[l_54][l_54]);
                        if (p_46)
                            break;
                    }
                    else
                    {
                        return l_66;
                    }
                }
                l_568 = (((0xC02004EBL & (((g_130 = func_69(((safe_sub_func_int32_t_s_s(((-1L) == (l_566[2] = ((((g_60 , (safe_sub_func_int32_t_s_s(((l_396 = (safe_rshift_func_int8_t_s_u(0xF9L, 3))) <= (0xF4L >= g_547)), (l_438 = (l_106 = (l_507[3] = ((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((g_247 | (safe_unary_minus_func_int16_t_s((g_246 = ((8UL & (safe_mod_func_int16_t_s_s((((+((0x11L | g_140[1]) != p_43)) == 0x41L) && l_507[4]), l_507[1]))) & 1UL))))), l_507[4])), p_46)), 4)) < p_44))))))) >= g_508[1][2]) == g_294) | 0UL))), p_44)) != 0xA8L), p_44, l_567, l_517)) <= p_43) , g_337)) , g_372) ^ 1UL);
                for (l_74 = 1; (l_74 >= 0); l_74 -= 1)
                {
                    unsigned l_571 = 0xEE1EA224L;
                    int l_573[2][8][9] = {{{0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}, {0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}, {0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}, {0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}, {0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}, {0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}, {0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}, {0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}}, {{0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}, {0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}, {0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}, {0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}, {0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}, {0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}, {0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}, {0L, 6L, 0xDABB25CCL, 0xBFC221FFL, 0x063AF4D6L, 0x76184932L, 0x5A0C63FAL, 0xD858FD93L, 0x6B0B98E6L}}};
                    int i, j, k;
                    for (l_106 = 0; (l_106 <= 1); l_106 += 1)
                    {
                        unsigned l_570 = 4294967295UL;
                        l_569 = 0xB715143EL;
                        if (l_570)
                            continue;
                        return g_233[3][2][8];
                    }
                    l_573[0][7][5] = ((g_157 < (l_517 || (g_572 = l_571))) , g_572);
                    l_106 = func_79((g_157 = l_438), p_44, ((p_46 = ((l_568 > l_397) , p_46)) <= l_66), g_140[1]);
                }
                for (l_568 = 0; (l_568 <= 1); l_568 += 1)
                {
                    l_566[3] = (safe_sub_func_uint16_t_u_u(((l_396 = ((((g_372 , (p_46 = (safe_sub_func_int8_t_s_s((((l_566[2] , 0xB7L) > (g_130 = ((1UL | (safe_mod_func_uint8_t_u_u(0UL, (safe_add_func_uint32_t_u_u((((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((g_592 = (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((~0x73DDL), (l_438 = (g_508[1][2] == 0x60AEEFF4L)))), (((g_264[1][0][9] = (safe_rshift_func_int16_t_s_u(0L, g_25))) ^ p_43) | 65528UL)))), 13)), g_243)) || p_43) && l_66), l_507[0]))))) || l_507[0]))) | 0x3E7CL), l_507[0])))) || p_46) == l_507[4]) >= 9L)) > l_53[1][0]), l_66));
                    l_507[4] = g_337;
                    for (p_46 = 0; (p_46 <= 1); p_46 += 1)
                    {
                        l_566[2] = l_105[1][4];
                        return g_97;
                    }
                }
            }
            return g_437;
        }
        g_592 = (safe_add_func_uint16_t_u_u((g_595 & (p_46 | g_243)), (func_69(p_45, ((l_566[2] = (l_438 = 0xEDE8C532L)) > ((g_597 = ((((1L > func_63((l_54 = (g_246 = l_466)), (((((l_396 = (l_596 , (func_69(g_351, g_97, p_43, g_322[0][5]) || g_595))) | p_43) , l_466) & 0xA31EL) > l_596))) || g_547) | p_46) , p_44)) | 1UL)), g_598, p_43) , p_44)));
        l_396 = g_572;
        g_592 = func_61(((g_140[0] = 0xFDEEL) , ((p_45 , (safe_rshift_func_uint16_t_u_s(9UL, 4))) >= (l_105[1][5] < 0UL))));
        for (p_46 = 0; (p_46 <= 1); p_46 += 1)
        {
            unsigned short l_603[1];
            int i;
            for (i = 0; i < 1; i++)
                l_603[i] = 65531UL;
            g_592 = 0x7E870E0EL;
            l_603[0] = 0x534F98FDL;
        }
    }
    for (g_572 = (-12); (g_572 <= 13); ++g_572)
    {
        char l_608[10] = {0x4FL, 0x95L, 1L, 1L, 0x95L, 0x4FL, 0x95L, 1L, 1L, 0x95L};
        const int l_613 = 0xDCE9DAD4L;
        int l_650 = 1L;
        int l_780 = 5L;
        const int l_787 = 0xAA7E3315L;
        unsigned char l_877 = 0x29L;
        char l_979 = 0x47L;
        int l_1055[8] = {9L, 0x0241B82BL, 9L, 0x0241B82BL, 9L, 0x0241B82BL, 9L, 0x0241B82BL};
        unsigned l_1056 = 0xFC5E23BAL;
        int i;
        if ((p_45 >= ((g_597 = (p_45 , (safe_rshift_func_uint16_t_u_u((l_608[1] = g_55), (((l_466 | (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(func_69(p_43, l_613, ((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s(g_157, (0x2C50L && g_243))) | p_44), 15)), p_43)) ^ l_620), p_46), p_44)) <= 0UL), l_613))) ^ 8L) & l_569))))) < l_438)))
        {
            short l_627[10][10] = {{0x8B84L, 0x8B84L, 0xFD45L, 0xA23FL, 0x2A14L, (-1L), 0x239DL, 0x8B84L, 1L, 0x239DL}, {0x8B84L, 0x8B84L, 0xFD45L, 0xA23FL, 0x2A14L, (-1L), 0x239DL, 0x8B84L, 1L, 0x239DL}, {0x8B84L, 0x8B84L, 0xFD45L, 0xA23FL, 0x2A14L, (-1L), 0x239DL, 0x8B84L, 1L, 0x239DL}, {0x8B84L, 0x8B84L, 0xFD45L, 0xA23FL, 0x2A14L, (-1L), 0x239DL, 0x8B84L, 1L, 0x239DL}, {0x8B84L, 0x8B84L, 0xFD45L, 0xA23FL, 0x2A14L, (-1L), 0x239DL, 0x8B84L, 1L, 0x239DL}, {0x8B84L, 0x8B84L, 0xFD45L, 0xA23FL, 0x2A14L, (-1L), 0x239DL, 0x8B84L, 1L, 0x239DL}, {0x8B84L, 0x8B84L, 0xFD45L, 0xA23FL, 0x2A14L, (-1L), 0x239DL, 0x8B84L, 1L, 0x239DL}, {0x8B84L, 0x8B84L, 0xFD45L, 0xA23FL, 0x2A14L, (-1L), 0x239DL, 0x8B84L, 1L, 0x239DL}, {0x8B84L, 0x8B84L, 0xFD45L, 0xA23FL, 0x2A14L, (-1L), 0x239DL, 0x8B84L, 1L, 0x239DL}, {0x8B84L, 0x8B84L, 0xFD45L, 0xA23FL, 0x2A14L, (-1L), 0x239DL, 0x8B84L, 1L, 0x239DL}};
            unsigned l_639 = 7UL;
            int l_640[6] = {0xD21A4CAEL, 0xD21A4CAEL, 0xF7F6E0D8L, 0xD21A4CAEL, 0xD21A4CAEL, 0xF7F6E0D8L};
            int l_697 = 0x42FE1F3FL;
            int i, j;
            for (g_547 = 0; (g_547 == 4); g_547++)
            {
                unsigned l_633 = 4294967295UL;
                int l_638 = (-7L);
                g_592 = (safe_add_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(p_43, g_130)) , (!(func_56((p_44 < (l_627[7][7] , (safe_sub_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u((safe_mul_func_int16_t_s_s(p_45, (p_46 == (p_43 >= (l_640[1] = (l_633 & ((l_639 = (l_638 = ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_608[1] < p_44), g_597)), l_627[2][0])) , l_633))) >= p_46))))))))) == g_264[1][0][9]), l_438)))), p_46, l_627[7][7]) > (-1L)))) != p_45), 0xC761L));
                for (g_85 = 0; (g_85 <= 1); g_85 += 1)
                {
                    int i, j, k;
                    l_638 = ((g_264[g_85][g_85][(g_85 + 5)] , (g_195[(g_85 + 7)][(g_85 + 2)][g_85] ^ (safe_sub_func_int32_t_s_s(func_69((safe_mod_func_int32_t_s_s(g_195[(g_85 + 3)][(g_85 + 7)][g_85], func_69(g_233[g_85][g_85][(g_85 + 6)], (65535UL >= (safe_mul_func_uint16_t_u_u(func_69((((((g_598 == 1L) , (safe_rshift_func_uint8_t_u_s((p_43 < p_43), 1))) == l_633) || 2L) || 8UL), p_45, p_46, l_649), 0x1ADFL))), g_189[0], g_372))), l_638, p_44, g_195[(g_85 + 7)][(g_85 + 2)][g_85]), g_465)))) <= g_337);
                    l_640[1] = (8UL & l_608[1]);
                    for (g_25 = 3; (g_25 >= 0); g_25 -= 1)
                    {
                        int l_657 = 1L;
                        unsigned char l_658 = 0xC7L;
                        int i, j, k;
                        l_638 = (!func_69((l_657 = ((l_650 = l_608[1]) <= (safe_rshift_func_int8_t_s_s(0x47L, (!((((!(safe_mul_func_uint16_t_u_u(((p_45 & ((((l_638 <= (func_69(p_44, p_44, (g_233[1][3][7] ^ p_46), ((l_438 = (((safe_rshift_func_uint8_t_u_u(((p_46 & g_595) == l_54), 5)) < p_43) > l_633)) > 6UL)) || l_608[8])) != g_195[(g_85 + 7)][(g_85 + 2)][g_85]) | p_43) >= l_466)) && g_437), p_45))) , 0x263171A0L) != 0x5DA8ED66L) , p_45)))))), g_233[(g_85 + 3)][g_25][(g_25 + 3)], g_195[3][0][1], l_658));
                    }
                }
                for (l_620 = 0; (l_620 > (-20)); l_620 = safe_sub_func_uint32_t_u_u(l_620, 5))
                {
                    int l_667 = 0x7F63409FL;
                    const unsigned l_672[3] = {0x90054254L, 0x90054254L, 0x90054254L};
                    int l_679 = 0xC7357493L;
                    int i;
                    g_465 = (safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((l_638 = ((safe_sub_func_int32_t_s_s((p_46 > ((g_189[0] , (6L <= (0x3F44L >= l_667))) & (g_673 = (safe_mod_func_uint8_t_u_u((g_130 = (~(func_79(((func_79(((safe_sub_func_uint8_t_u_u(func_63(l_640[1], (!g_508[0][4])), (7UL || l_672[1]))) , 0x47435858L), l_640[2], g_572, l_639) == p_46) , l_105[0][2]), g_592, l_640[1], g_465) <= 0xFA358757L))), l_466))))), l_667)) >= g_547)), p_45)) , 0x8CL), 0x55L));
                    if (p_43)
                        break;
                    if (func_56(g_437, (!0x75EAL), ((l_638 != (g_674 = 65535UL)) , ((g_597 = g_337) <= (safe_rshift_func_uint16_t_u_u(((g_322[0][5] = func_63((safe_mul_func_uint8_t_u_u(l_608[6], g_195[9][4][1])), g_246)) == (-8L)), 6))))))
                    {
                        int l_682 = 0x467F540EL;
                        l_679 = (g_592 = p_43);
                        if (l_627[7][7])
                            continue;
                        l_682 = (safe_rshift_func_int8_t_s_s(0xEDL, 2));
                    }
                    else
                    {
                        char l_690[1];
                        int l_694 = (-1L);
                        int i;
                        for (i = 0; i < 1; i++)
                            l_690[i] = 1L;
                        g_592 = 0L;
                        l_638 = (g_97 = (safe_add_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((!(safe_unary_minus_func_uint8_t_u(0x12L))), ((l_690[0] , ((g_691 = 3UL) >= func_69((g_595 = (l_640[1] = p_44)), (l_679 = (safe_rshift_func_int16_t_s_s((l_694 = g_264[1][0][9]), (safe_sub_func_uint8_t_u_u((!(((l_697 = g_508[1][2]) == (((safe_rshift_func_uint16_t_u_u(g_351, 1)) != 3L) && (safe_rshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((p_44 , p_43) >= 1L) == g_189[0]), p_44)), 1L)) <= p_43), 6)))) && p_46)), p_43))))), g_351, g_322[0][5]))) > p_46))), p_43)) , 0x07L), 9UL)));
                        if (g_233[0][0][8])
                            break;
                    }
                    for (g_372 = 0; (g_372 != 4); g_372 = safe_add_func_uint16_t_u_u(g_372, 3))
                    {
                        unsigned char l_710 = 248UL;
                        l_640[1] = (func_79((+((g_233[0][1][5] == (safe_sub_func_int16_t_s_s(l_672[2], l_640[1]))) <= p_44)), g_55, (l_710 != (safe_mul_func_int16_t_s_s(((g_713 && 0x1AL) >= (0x6D081091L ^ l_638)), (-8L)))), p_44) == l_679);
                        l_650 = l_633;
                        l_679 = (!l_569);
                    }
                }
                for (g_247 = 0; (g_247 != (-16)); g_247 = safe_sub_func_uint8_t_u_u(g_247, 3))
                {
                    const short l_744 = 0xA907L;
                    g_508[2][3] = (((p_44 & ((g_716 = (g_233[0][3][6] = g_246)) & (p_43 || (safe_mod_func_uint8_t_u_u(g_60, (((g_130 <= 2UL) != (l_697 = func_63(func_69((safe_unary_minus_func_int16_t_s(p_43)), (((safe_mul_func_uint8_t_u_u(g_248, (safe_sub_func_uint16_t_u_u(func_79(g_25, l_639, l_569, g_189[0]), l_650)))) ^ 65534UL) ^ 0x6994EEE4L), g_247, l_105[1][4]), p_43))) & l_650)))))) > g_337) ^ l_53[1][0]);
                    for (g_55 = 0; (g_55 <= 19); ++g_55)
                    {
                        return p_44;
                    }
                    if (p_44)
                    {
                        unsigned l_745[2][2][4] = {{{0x706509E0L, 4294967292UL, 0x248C5D7CL, 0x248C5D7CL}, {0x706509E0L, 4294967292UL, 0x248C5D7CL, 0x248C5D7CL}}, {{0x706509E0L, 4294967292UL, 0x248C5D7CL, 0x248C5D7CL}, {0x706509E0L, 4294967292UL, 0x248C5D7CL, 0x248C5D7CL}}};
                        int i, j, k;
                        l_438 = (-1L);
                        g_157 = func_79(p_44, func_79((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(func_69(p_44, g_351, ((g_508[0][1] = ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((l_697 = (safe_add_func_uint8_t_u_u(0x8CL, p_43))), (((4294967295UL > 0x7A4A3D83L) != func_69(((l_638 && ((safe_mul_func_int16_t_s_s((func_69((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((func_69((0x99L & g_85), l_744, l_627[1][6], g_264[1][0][9]) | l_745[1][0][1]), 0x5DL)), 4)), p_46, l_649, g_428) <= (-9L)), p_44)) ^ l_638)) , g_597), g_572, l_744, g_572)) > l_744))) <= g_597), l_650)) == l_613)) & g_595), p_44), 0x5569B796L)), p_44)) | l_638), (-8L))), g_595, l_745[0][1][0], p_43), l_640[3], l_744);
                    }
                    else
                    {
                        int l_746 = 0x400C141DL;
                        l_746 = (-1L);
                    }
                    l_640[0] = l_638;
                }
            }
            for (g_304 = 0; (g_304 <= 0); g_304 += 1)
            {
                int i;
                l_438 = (safe_mod_func_int32_t_s_s(((p_46 = (g_189[g_304] != 3UL)) != (g_597 = (((((safe_add_func_uint16_t_u_u(((g_157 = (g_189[g_304] , p_43)) == (safe_lshift_func_uint16_t_u_u((((((l_640[1] <= p_45) != 4294967292UL) & ((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((g_674 = p_44) ^ g_246), 7)) < 65535UL), p_45)) < 0xFEB7CD68L)) || g_243) & l_105[1][5]), g_233[0][3][6]))), l_639)) > l_627[7][7]) , p_45) ^ 0x14L) | g_351))), g_673));
                if (g_716)
                    break;
            }
        }
        else
        {
            int l_767 = 0L;
            unsigned l_778 = 4294967295UL;
            l_650 = (safe_rshift_func_uint8_t_u_s(((0L >= (safe_add_func_int32_t_s_s((p_44 ^ (safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((((0xADL ^ 0xF5L) | (1L & (((l_767 = (-1L)) , p_43) || (l_608[1] ^ (safe_mul_func_uint8_t_u_u((l_767 = (((65531UL & p_46) && 0x705103D6L) , 9UL)), g_713)))))) || p_45), 0x32L)), g_437))), 4L))) , p_45), p_43));
            for (g_25 = 8; (g_25 >= 0); g_25 -= 1)
            {
                unsigned l_779 = 4294967295UL;
                for (g_597 = 0; (g_597 <= 1); g_597 += 1)
                {
                    unsigned l_770 = 0UL;
                    for (l_596 = 0; (l_596 <= 1); l_596 += 1)
                    {
                        int i, j;
                        l_770 = func_63((l_608[(g_597 + 2)] <= (l_608[(g_25 + 1)] < l_105[l_596][(g_597 + 4)])), l_105[l_596][(l_596 + 4)]);
                    }
                    l_54 = (safe_unary_minus_func_uint32_t_u(g_713));
                    l_780 = (l_105[1][5] && ((((((((g_547 , 3L) , ((((safe_sub_func_int16_t_s_s(p_44, p_45)) , ((l_650 = (safe_add_func_int16_t_s_s((p_45 , p_43), (safe_mul_func_uint8_t_u_u(((0UL != l_778) <= p_43), (-1L)))))) >= l_770)) ^ l_608[1]) || g_437)) , 0L) || l_779) , g_247) , g_195[4][8][1]) != p_46) , 0xDEL));
                    l_767 = ((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_u(l_613, 0)))) > (safe_unary_minus_func_uint16_t_u(((~l_779) , (safe_sub_func_int16_t_s_s(((l_787 < (((safe_unary_minus_func_uint8_t_u(((safe_mul_func_int8_t_s_s((-1L), (safe_sub_func_int16_t_s_s(((0x0BL ^ 0x02L) , (safe_sub_func_int16_t_s_s((0xC3L && func_56(((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_778, ((l_54 ^ g_691) ^ g_189[0]))), 0xCBL)) , l_608[1]), l_767, g_437)), p_43))), p_44)))) | g_674))) , g_243) ^ (-1L))) || 252UL), 0UL))))));
                }
                for (l_54 = 0; (l_54 <= 1); l_54 += 1)
                {
                    unsigned short l_799[3][6] = {{0xA6A2L, 0x58A0L, 65535UL, 0xD633L, 0xD633L, 65535UL}, {0xA6A2L, 0x58A0L, 65535UL, 0xD633L, 0xD633L, 65535UL}, {0xA6A2L, 0x58A0L, 65535UL, 0xD633L, 0xD633L, 65535UL}};
                    int i, j;
                    if (l_799[0][2])
                        break;
                }
            }
            g_465 = ((g_195[7][3][1] && func_61(((g_233[0][3][6] = (4294967295UL < 0L)) ^ 0x4EL))) | (safe_lshift_func_int16_t_s_u(g_465, 12)));
        }
        if ((g_465 = (l_608[5] , (safe_mul_func_uint8_t_u_u(0x7FL, (0xC9L <= (safe_sub_func_uint8_t_u_u(0x79L, ((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((func_63((g_465 | (((safe_mul_func_uint16_t_u_u((((p_46 = ((p_46 || ((safe_lshift_func_uint8_t_u_u(g_508[1][2], 6)) , g_189[0])) >= g_597)) == l_105[0][0]) == p_45), 0xD65CL)) || g_322[1][5]) , l_466)), p_44) < p_44) & g_189[0]), 7L)), 0xF3L)) , l_780)))))))))
        {
            unsigned l_818 = 0x02D1406AL;
            int l_819 = (-10L);
            if ((l_54 = (~(((p_45 | (1UL >= (((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((!g_294) > l_818) , 0UL), ((p_44 ^ (-1L)) > (0xB7L && ((l_650 = (l_819 = 0x410480A8L)) >= l_613))))), g_55)) >= (-1L)) >= 0x82L))) , 0xD647801EL) , l_818))))
            {
                int l_837[1][9] = {{0x524A00C5L, 1L, 0x524A00C5L, 1L, 0x524A00C5L, 1L, 0x524A00C5L, 1L, 0x524A00C5L}};
                int l_838[5][5][1] = {{{(-3L)}, {(-3L)}, {(-3L)}, {(-3L)}, {(-3L)}}, {{(-3L)}, {(-3L)}, {(-3L)}, {(-3L)}, {(-3L)}}, {{(-3L)}, {(-3L)}, {(-3L)}, {(-3L)}, {(-3L)}}, {{(-3L)}, {(-3L)}, {(-3L)}, {(-3L)}, {(-3L)}}, {{(-3L)}, {(-3L)}, {(-3L)}, {(-3L)}, {(-3L)}}};
                int l_859[5][7] = {{3L, 0x69C85E6DL, 6L, 0x69C85E6DL, 3L, 0x69C85E6DL, 6L}, {3L, 0x69C85E6DL, 6L, 0x69C85E6DL, 3L, 0x69C85E6DL, 6L}, {3L, 0x69C85E6DL, 6L, 0x69C85E6DL, 3L, 0x69C85E6DL, 6L}, {3L, 0x69C85E6DL, 6L, 0x69C85E6DL, 3L, 0x69C85E6DL, 6L}, {3L, 0x69C85E6DL, 6L, 0x69C85E6DL, 3L, 0x69C85E6DL, 6L}};
                int i, j, k;
                for (g_25 = 0; (g_25 <= 1); g_25 += 1)
                {
                    unsigned l_854 = 0x52A373E0L;
                    int l_865[9] = {0x19D7F91DL, 0x19D7F91DL, 0x50524947L, 0x19D7F91DL, 0x19D7F91DL, 0x50524947L, 0x19D7F91DL, 0x19D7F91DL, 0x50524947L};
                    int i, j;
                    for (g_691 = 0; (g_691 <= 1); g_691 += 1)
                    {
                        int i, j, k;
                        l_650 = g_264[(g_25 + 2)][g_691][(g_25 + 2)];
                    }
                    l_819 = (func_63(l_608[(g_25 + 4)], ((250UL != func_63(l_105[g_25][(g_25 + 2)], l_105[g_25][(g_25 + 3)])) , g_195[8][7][0])) , ((p_45 >= p_45) || 0x6268L));
                    for (l_819 = 1; (l_819 >= 0); l_819 -= 1)
                    {
                        int i, j, k;
                        g_189[0] = (((safe_add_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(g_264[(l_819 + 2)][l_819][g_25], (((((((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((l_837[0][7] = ((g_547 = (safe_mul_func_int8_t_s_s(1L, (((safe_unary_minus_func_uint32_t_u(((func_69(g_233[(g_25 + 2)][(g_25 + 1)][(g_25 + 1)], g_233[(g_25 + 1)][g_25][(g_25 + 2)], (g_508[(l_819 + 1)][(l_819 + 2)] | ((((l_608[(g_25 + 3)] || l_608[(l_819 + 3)]) || ((p_43 & (safe_lshift_func_int16_t_s_s((l_837[0][7] = (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((0xCC8EA6CFL ^ g_189[0]), g_572)), g_508[(l_819 + 1)][(l_819 + 2)]))), p_45))) , l_105[g_25][(g_25 + 3)])) , 0UL) <= 0x5DAAL)), g_264[0][1][9]) > g_195[9][4][1]) != (-1L)))) | p_45) ^ l_838[2][1][0])))) , 0xCDAAL)), 0x8157L)), l_787)) > 2L) ^ p_43) < l_53[1][0]) < l_838[2][1][0]) , 3L) , 0x7CL))) || g_572) >= p_43), g_351)) == p_44) | l_105[g_25][(g_25 + 3)]);
                        if (g_508[0][0])
                            continue;
                        l_838[3][0][0] = (l_837[0][7] = 1L);
                    }
                    l_819 = (safe_add_func_uint16_t_u_u(((-1L) ^ (((((l_438 = func_79((safe_mul_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_u(g_508[2][2], 12)) | (safe_unary_minus_func_uint32_t_u(((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(g_351, (g_248 , p_44))) ^ ((safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(g_592, (l_105[g_25][(g_25 + 2)] > ((func_79(l_854, ((safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(p_44, 0xC1A18928L)) ^ p_45), l_854)) , 4294967288UL), g_428, p_45) != l_819) >= p_46)))) && p_45), p_44)) < (-1L))), 4294967289UL)) < l_859[4][5])))) == p_43) , g_595), g_673)), g_337, p_44, g_195[5][7][1])) == l_613) , g_322[1][5]) | p_44) && (-2L))), l_860));
                    for (p_46 = 0; (p_46 <= 1); p_46 += 1)
                    {
                        int l_866 = 1L;
                        int i, j, k;
                        l_865[6] = (safe_mod_func_int8_t_s_s((g_264[(p_46 + 2)][p_46][(p_46 + 7)] & 1L), (safe_lshift_func_uint16_t_u_u(p_46, 6))));
                        l_866 = g_674;
                    }
                }
            }
            else
            {
                l_780 = l_818;
                if (g_597)
                    break;
            }
            if (func_69((g_264[0][1][2] = (!(+func_63((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((l_877 = ((safe_sub_func_uint32_t_u_u(l_608[1], (4294967295UL != l_787))) && ((((p_45 != ((safe_mul_func_uint8_t_u_u(func_79(g_304, g_372, (+(((p_46 || (0xFF3E5E50L <= (safe_rshift_func_uint16_t_u_u(g_304, l_819)))) ^ g_508[1][2]) > 0L)), p_44), l_105[0][2])) < 0xF93DL)) > g_598) & 0x824C879BL) > (-1L)))), 0xD34CL)), 0x31L)), p_44)))), l_608[9], g_304, l_819))
            {
                const unsigned short l_878 = 0x6E52L;
                int l_881 = 8L;
                if (p_46)
                {
                    return g_140[1];
                }
                else
                {
                    short l_884 = 0x1736L;
                    int l_917 = 0xF0CF6B82L;
                    l_819 = l_878;
                    for (g_248 = (-11); (g_248 >= 55); g_248 = safe_add_func_int8_t_s_s(g_248, 9))
                    {
                        l_881 = 0x55BCF628L;
                        g_55 = (safe_lshift_func_uint8_t_u_s((l_884 < l_881), g_85));
                        l_54 = l_613;
                    }
                    if ((safe_add_func_int32_t_s_s((func_56(((l_54 = l_881) , l_787), l_650, (p_43 = ((safe_rshift_func_int8_t_s_s((g_294 > ((safe_rshift_func_uint8_t_u_u((!p_46), 2)) , ((g_248 = ((safe_lshift_func_int8_t_s_s(l_608[1], l_818)) != (safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((g_189[0] , l_608[2]) == 248UL), 6L)) | l_105[1][5]), 3UL)))) , l_819))), 2)) , p_44))) >= p_44), l_787)))
                    {
                        unsigned char l_912 = 0x66L;
                        int l_913[2][2][1];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_913[i][j][k] = 0L;
                            }
                        }
                        l_913[0][0][0] = ((((((((safe_add_func_uint8_t_u_u((g_673 != ((l_878 ^ 0UL) > (p_44 == (safe_add_func_uint8_t_u_u(0x8BL, p_44))))), func_69((((safe_add_func_uint16_t_u_u(((g_243 = ((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(g_157, ((l_913[0][0][0] = (~func_69((safe_sub_func_int32_t_s_s((p_43 != ((safe_lshift_func_int16_t_s_s((g_674 || g_55), p_43)) > g_294)), l_911)), l_881, g_243, l_912))) >= p_45))), p_45)) , g_716)) > g_713), (-1L))) , 1L) <= p_44), p_43, g_189[0], g_322[1][0]))) >= g_60) , g_140[0]) == p_45) , p_45) < p_44) && g_97) ^ p_45);
                    }
                    else
                    {
                        unsigned l_926 = 0xD7FA5B01L;
                        g_508[1][2] = p_45;
                        l_54 = (safe_unary_minus_func_int8_t_s((func_61((safe_mul_func_int16_t_s_s(((g_597 = func_63(l_650, func_69(((l_917 = p_45) > (safe_sub_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u(l_878, ((0L && (safe_sub_func_uint8_t_u_u(g_294, func_79((p_46 >= (((safe_mod_func_int16_t_s_s(l_884, func_79(((l_926 , (g_547 && l_877)) , l_818), g_372, g_264[1][0][9], g_713))) , p_43) ^ 1L)), l_881, p_44, p_46)))) , g_60))) , p_46) , l_881), p_45))), g_337, p_43, p_46))) <= l_878), g_713))) ^ p_45)));
                        l_54 = (((0x79E4L >= g_322[0][5]) && (safe_mul_func_int8_t_s_s(((l_926 , p_46) , ((l_438 = func_61(((((((safe_add_func_int16_t_s_s((((l_926 >= (g_233[2][0][5] = (safe_mul_func_int8_t_s_s(g_428, ((+(safe_rshift_func_int16_t_s_u((((l_819 = func_56((safe_mul_func_uint16_t_u_u(func_61((g_673 | g_195[9][4][1])), p_43)), g_716, p_45)) , 0x74C0L) & p_43), 7))) , g_465))))) <= p_43) >= 0x3750L), p_45)) , l_926) & g_572) & l_787) <= p_44) && g_508[1][1]))) ^ 246UL)), l_926))) ^ l_917);
                    }
                }
                if (l_780)
                    break;
                g_85 = p_44;
            }
            else
            {
                unsigned short l_959 = 0UL;
                int l_978 = (-7L);
                unsigned l_1017 = 4294967295UL;
                if ((((((p_45 | (safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(((l_54 = g_233[0][3][6]) == (((safe_add_func_int16_t_s_s(((((l_819 = (((safe_mul_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s(((g_951 = 65535UL) && func_79((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s(l_613, (g_233[0][3][6] , (l_438 = (g_595 = (safe_unary_minus_func_int16_t_s(0L))))))) ^ (0xE7FDE836L != func_69(g_97, (+(g_55 = 0x3618A26EL)), l_959, l_959))), l_620)), g_60)), g_598, g_97, g_195[7][4][1])), 0xE660L)) >= l_596), l_819)) || p_45), l_818)) || (-1L)), (-1L))) >= 0x347EL) || 0x05F4L)) , g_195[7][3][1]) > g_351) >= (-1L)), g_233[0][3][6])) , 0xE1L) != l_959)), 255UL)) != g_157), 1UL))) != 0x40L) != 0x8E4912B9L) , l_960) > g_597))
                {
                    int l_977 = 0xD22455EBL;
                    short l_980 = 0x99BFL;
                    int l_994[8] = {(-1L), 0x9E2DBCFEL, (-1L), 0x9E2DBCFEL, (-1L), 0x9E2DBCFEL, (-1L), 0x9E2DBCFEL};
                    unsigned l_995 = 4294967295UL;
                    int i;
                    l_978 = (safe_mod_func_uint16_t_u_u(((l_959 , ((safe_unary_minus_func_int8_t_s((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u((l_819 ^ (g_55 = (safe_unary_minus_func_int8_t_s((safe_sub_func_int32_t_s_s(g_55, (safe_lshift_func_int8_t_s_s((((g_264[4][0][6] == (safe_rshift_func_uint8_t_u_u((p_46 = (safe_lshift_func_int8_t_s_u((l_977 = ((l_53[1][0] , g_195[9][4][1]) ^ g_595)), p_46))), 6))) ^ (l_438 = (g_130 = g_597))) , g_372), 0)))))))), p_43)) && 0x9ACBL), 4)))) < 0L)) != p_44), 0x9244L));
                    l_980 = (l_979 | l_977);
                    if ((((((g_130 || (safe_mod_func_int8_t_s_s(((l_980 == g_674) > func_69(l_818, p_45, p_44, (l_819 = func_63(((safe_rshift_func_int16_t_s_u((l_978 = (((((func_61(g_304) || 0x3B11L) || l_620) != l_985) < l_787) || p_46)), 0)) | 0xFAL), p_46)))), 0x1EL))) != 0x73L) | p_44) || g_60) , 0x2622AA5FL))
                    {
                        char l_1013 = 0L;
                        const unsigned l_1016 = 4294967295UL;
                        unsigned char l_1018 = 0xA0L;
                        int l_1019 = 4L;
                        l_819 = (0x96L && 1L);
                        g_508[0][3] = (((l_994[3] = (p_46 = (func_69(p_44, (!((safe_mul_func_int8_t_s_s(func_56(((safe_mul_func_uint8_t_u_u((g_247 & (l_650 = g_673)), func_63(((l_977 && l_990) , 0x49A0L), ((safe_mul_func_uint8_t_u_u((g_597 = l_818), (((safe_unary_minus_func_uint16_t_u((l_959 ^ (g_233[5][0][4] = (g_716 = 0xE7L))))) >= 0x7C3E6BD8L) ^ p_43))) < 1L)))) <= g_304), g_547, l_959), g_264[2][0][8])) || l_787)), l_978, g_508[2][1]) == l_977))) >= l_995) >= p_45);
                        l_1019 = (l_994[7] = func_61((p_46 >= ((l_978 = l_818) , func_79((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(g_248, (((g_140[1] = g_294) , g_189[0]) , g_428))) & ((l_994[3] = ((g_25 = l_438) , (safe_mul_func_uint16_t_u_u((l_1013 = (safe_unary_minus_func_uint32_t_u((~l_649)))), (safe_mul_func_int16_t_s_s(p_44, l_1016)))))) & g_189[0])), l_978)) < l_1017) < g_508[1][2]) , g_351), p_44)), (-4L))) && g_195[6][2][0]) < p_46) & l_959), 65535UL)), l_1016)), 0xA69AL)), l_1018, l_53[1][0], l_1016)))));
                    }
                    else
                    {
                        l_978 = (safe_rshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(g_547, (safe_rshift_func_uint8_t_u_u((g_598 | 0x9EC5B3A7L), g_428)))) == (safe_lshift_func_uint8_t_u_u(0x74L, 1))), (l_819 = (g_195[1][0][1] | l_995))));
                        return l_818;
                    }
                }
                else
                {
                    unsigned char l_1036 = 9UL;
                    for (g_598 = 0; (g_598 == (-15)); g_598--)
                    {
                        l_978 = (g_157 = g_372);
                    }
                    l_1036 = (((((!(-2L)) < (l_818 , (g_508[1][2] | p_43))) != func_63((safe_mod_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((((l_819 = (g_195[0][7][0] <= p_46)) <= g_60) & (safe_lshift_func_int8_t_s_s(g_60, g_597))), g_264[1][0][9])) , l_959), 0x8FBEL)), g_691)) , g_595) < g_247);
                }
            }
        }
        else
        {
            unsigned char l_1044 = 0xB4L;
            unsigned l_1053[7][7] = {{0x93C85175L, 4294967294UL, 0x93C85175L, 0x29088315L, 4294967288UL, 1UL, 0x37DE611CL}, {0x93C85175L, 4294967294UL, 0x93C85175L, 0x29088315L, 4294967288UL, 1UL, 0x37DE611CL}, {0x93C85175L, 4294967294UL, 0x93C85175L, 0x29088315L, 4294967288UL, 1UL, 0x37DE611CL}, {0x93C85175L, 4294967294UL, 0x93C85175L, 0x29088315L, 4294967288UL, 1UL, 0x37DE611CL}, {0x93C85175L, 4294967294UL, 0x93C85175L, 0x29088315L, 4294967288UL, 1UL, 0x37DE611CL}, {0x93C85175L, 4294967294UL, 0x93C85175L, 0x29088315L, 4294967288UL, 1UL, 0x37DE611CL}, {0x93C85175L, 4294967294UL, 0x93C85175L, 0x29088315L, 4294967288UL, 1UL, 0x37DE611CL}};
            int i, j;
            l_1057[1] = ((safe_lshift_func_int16_t_s_s((-1L), 4)) , ((safe_rshift_func_int8_t_s_u(func_63((safe_mul_func_int8_t_s_s(func_69(g_247, p_45, ((safe_unary_minus_func_int32_t_s(l_1044)) , (l_1054[3] = (safe_rshift_func_int8_t_s_u((func_69(g_673, (func_63((((safe_unary_minus_func_uint16_t_u((!(l_1044 , (safe_sub_func_int8_t_s_s(((((safe_unary_minus_func_uint32_t_u(l_649)) > (0x58L && (safe_sub_func_uint8_t_u_u(p_46, l_1053[1][5])))) != l_860) , l_911), 0x2CL)))))) == g_195[9][4][1]) | 0x6451L), p_43) != 0xF6D3L), p_46, g_189[0]) & g_592), 4)))), l_979), 0xF6L)), l_1055[0]), l_613)) , l_1056));
            return p_45;
        }
        l_780 = (l_54 = g_673);
        l_990 = (safe_add_func_uint8_t_u_u(g_716, (((l_438 = (func_63((safe_unary_minus_func_int8_t_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((+((((g_264[1][0][9] = g_595) >= (l_780 = p_44)) ^ (safe_rshift_func_uint16_t_u_u(func_79(((((-1L) < ((safe_rshift_func_uint8_t_u_s(p_46, 0)) , (func_69((4294967287UL && (safe_rshift_func_int8_t_s_s((-1L), 7))), p_44, (safe_lshift_func_uint16_t_u_s(7UL, 8)), g_25) == l_613))) != g_248) , 0xFE195BCBL), g_322[0][5], l_877, p_43), p_45))) > g_140[1])), g_592)), p_45)))), l_620) , g_248)) < l_1055[0]) >= p_43)));
    }
    return g_716;
}







static short func_56(unsigned short p_57, const short p_58, unsigned p_59)
{
    short l_355 = 0x755EL;
    int l_373 = 6L;
    int l_374[1];
    int i;
    for (i = 0; i < 1; i++)
        l_374[i] = (-1L);
    l_374[0] = (l_355 && (safe_rshift_func_uint16_t_u_u((func_63(((safe_rshift_func_uint8_t_u_s(func_61(g_189[0]), 2)) , l_355), (l_374[0] = ((~(l_355 , (safe_add_func_int16_t_s_s(g_264[1][1][2], func_69(((l_374[0] = ((safe_mod_func_uint8_t_u_u((l_373 = ((((safe_mod_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((g_372 = ((g_60 <= 0x86L) & (((safe_mod_func_uint16_t_u_u((0xD0F1L | l_355), p_57)) <= 65529UL) , p_59))), p_57)), 0xCE9AL)) , l_355), (-6L))) != g_25) != 0x7905L) >= l_355)), l_355)) ^ 0x132E1201L)) || 0x55L), l_355, g_264[3][0][7], g_304))))) && p_57))) && 0xA0L), p_58)));
    for (g_130 = 14; (g_130 != 12); g_130 = safe_sub_func_int16_t_s_s(g_130, 9))
    {
        int l_377[3];
        int l_380 = 0x03972735L;
        int l_381 = 0xFAD09702L;
        int i;
        for (i = 0; i < 3; i++)
            l_377[i] = (-1L);
        l_374[0] = ((l_377[0] < p_59) == (safe_mod_func_int8_t_s_s((l_381 = (l_380 = p_57)), 0x02L)));
    }
    for (g_351 = (-9); (g_351 < 24); g_351 = safe_add_func_int16_t_s_s(g_351, 1))
    {
        g_55 = g_264[1][1][8];
    }
    return p_57;
}







static char func_61(unsigned short p_62)
{
    const short l_110 = 0L;
    const unsigned l_133 = 0xB69560C6L;
    int l_168 = 0x552D92CFL;
    int l_171 = 1L;
    unsigned l_321[5];
    unsigned l_354 = 1UL;
    int i;
    for (i = 0; i < 5; i++)
        l_321[i] = 4294967292UL;
    if ((g_85 = 2L))
    {
        unsigned l_109 = 0xAAC2EC31L;
        int l_113 = 4L;
        int l_160 = (-9L);
        short l_169[6][10] = {{0x8E12L, 0xC204L, 0xFFEAL, 0x0E96L, 9L, 8L, 9L, 0x0E96L, 0xFFEAL, 0xC204L}, {0x8E12L, 0xC204L, 0xFFEAL, 0x0E96L, 9L, 8L, 9L, 0x0E96L, 0xFFEAL, 0xC204L}, {0x8E12L, 0xC204L, 0xFFEAL, 0x0E96L, 9L, 8L, 9L, 0x0E96L, 0xFFEAL, 0xC204L}, {0x8E12L, 0xC204L, 0xFFEAL, 0x0E96L, 9L, 8L, 9L, 0x0E96L, 0xFFEAL, 0xC204L}, {0x8E12L, 0xC204L, 0xFFEAL, 0x0E96L, 9L, 8L, 9L, 0x0E96L, 0xFFEAL, 0xC204L}, {0x8E12L, 0xC204L, 0xFFEAL, 0x0E96L, 9L, 8L, 9L, 0x0E96L, 0xFFEAL, 0xC204L}};
        unsigned l_223 = 0UL;
        short l_295 = 6L;
        int i, j;
        g_55 = (-1L);
        for (g_97 = 0; (g_97 != 18); g_97 = safe_add_func_uint32_t_u_u(g_97, 2))
        {
            l_109 = g_97;
        }
        if (((l_110 , func_79(g_85, (l_109 <= g_55), l_109, l_110)) <= p_62))
        {
            int l_129 = 0xF18C2A7CL;
            unsigned char l_173 = 0x09L;
            int l_194 = (-9L);
            unsigned short l_230 = 0x1AD7L;
            if (l_109)
            {
                short l_172 = (-9L);
                int l_206 = 0xA42983A2L;
                for (g_85 = (-30); (g_85 == (-26)); ++g_85)
                {
                    unsigned short l_116[10][2][10] = {{{65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}, {65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}}, {{65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}, {65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}}, {{65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}, {65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}}, {{65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}, {65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}}, {{65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}, {65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}}, {{65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}, {65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}}, {{65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}, {65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}}, {{65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}, {65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}}, {{65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}, {65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}}, {{65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}, {65529UL, 2UL, 0xCB1EL, 0x0DCEL, 2UL, 0x590FL, 0xEC64L, 5UL, 0xF1B9L, 0xA5E6L}}};
                    int i, j, k;
                    l_113 = g_25;
                    g_97 = (safe_mul_func_uint8_t_u_u(func_69(l_116[7][0][6], (safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(p_62, (((((g_97 , ((((safe_mul_func_int16_t_s_s(p_62, p_62)) != (g_85 | ((((safe_lshift_func_uint8_t_u_u(0xE0L, (safe_sub_func_uint8_t_u_u(((g_130 = ((safe_lshift_func_int8_t_s_s(l_129, g_25)) >= g_97)) ^ (-6L)), 251UL)))) , (-2L)) < g_55) <= l_110))) <= 0xE4B3L) && p_62)) & l_109) >= g_97) != l_110) > 0xEDL))), p_62)), p_62, p_62), l_129));
                    return l_116[7][0][6];
                }
                for (l_113 = 14; (l_113 > (-15)); l_113 = safe_sub_func_int32_t_s_s(l_113, 2))
                {
                    const char l_156 = 0xF9L;
                    int l_159 = 0x7385244DL;
                    char l_174 = 1L;
                    unsigned l_183[7][10] = {{4294967295UL, 1UL, 4UL, 0UL, 1UL, 1UL, 0UL, 4UL, 1UL, 4294967295UL}, {4294967295UL, 1UL, 4UL, 0UL, 1UL, 1UL, 0UL, 4UL, 1UL, 4294967295UL}, {4294967295UL, 1UL, 4UL, 0UL, 1UL, 1UL, 0UL, 4UL, 1UL, 4294967295UL}, {4294967295UL, 1UL, 4UL, 0UL, 1UL, 1UL, 0UL, 4UL, 1UL, 4294967295UL}, {4294967295UL, 1UL, 4UL, 0UL, 1UL, 1UL, 0UL, 4UL, 1UL, 4294967295UL}, {4294967295UL, 1UL, 4UL, 0UL, 1UL, 1UL, 0UL, 4UL, 1UL, 4294967295UL}, {4294967295UL, 1UL, 4UL, 0UL, 1UL, 1UL, 0UL, 4UL, 1UL, 4294967295UL}};
                    int i, j;
                    if (l_133)
                    {
                        const int l_149 = (-10L);
                        int l_158[5] = {1L, (-8L), 1L, (-8L), 1L};
                        int i;
                        l_160 = (l_159 = (safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((l_158[0] = (safe_mul_func_uint16_t_u_u(g_140[1], (g_157 = ((safe_add_func_uint8_t_u_u(0x5CL, p_62)) <= (((((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(((func_69((safe_mul_func_int8_t_s_s(l_149, (safe_mul_func_uint16_t_u_u((((p_62 < (l_129 = (safe_mul_func_int16_t_s_s(7L, (((0xDF62L < (safe_rshift_func_int8_t_s_u((func_69(l_129, (0xC9L || 1L), g_55, p_62) < g_85), 5))) , g_85) | l_133))))) && g_97) , p_62), p_62)))), l_156, p_62, g_85) != 0x2894L) < g_25), l_156)), g_97)) && p_62) , l_129) == 5L) | p_62)))))), p_62)) , 2UL), (-1L))));
                    }
                    else
                    {
                        int l_167 = 1L;
                        int l_170 = 0xF0B7E2B5L;
                        int l_184 = 7L;
                        l_174 = ((safe_lshift_func_uint16_t_u_u((g_140[0] == ((safe_mul_func_uint8_t_u_u(((l_173 = (safe_add_func_uint8_t_u_u(((!(l_168 = l_167)) ^ ((p_62 | p_62) | (l_172 = (0xA2L & (l_171 = (l_170 = func_63(p_62, ((func_63(l_109, (l_169[2][5] = (l_159 = g_97))) == 3UL) > p_62)))))))), g_140[1]))) & p_62), g_130)) ^ g_157)), p_62)) || p_62);
                        l_159 = ((((safe_add_func_int16_t_s_s((l_172 , l_172), ((((l_172 , ((safe_mod_func_uint16_t_u_u(l_170, ((6L & (1L <= (safe_add_func_uint16_t_u_u(((g_130 = 9UL) >= p_62), (safe_rshift_func_uint8_t_u_u(((p_62 <= l_168) && (-1L)), l_183[3][4])))))) , l_184))) <= p_62)) <= p_62) , g_97) , p_62))) && 0x2B2A35B8L) < 1L) >= g_55);
                    }
                    if (p_62)
                        continue;
                    if (func_63(l_171, (l_172 <= 65535UL)))
                    {
                        unsigned l_196[9] = {0x52BD4905L, 0x8E3F8A4DL, 0x52BD4905L, 0x8E3F8A4DL, 0x52BD4905L, 0x8E3F8A4DL, 0x52BD4905L, 0x8E3F8A4DL, 0x52BD4905L};
                        int l_197 = 0L;
                        int i;
                        l_159 = (-7L);
                        l_197 = func_69((0xB25BL ^ (g_195[9][4][1] = (l_172 , (((+((safe_rshift_func_int8_t_s_s(((1UL == p_62) ^ (safe_sub_func_int32_t_s_s(((g_189[0] = (-10L)) , p_62), (l_194 = ((g_157 = ((0xD71A1B54L > ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((0x46C4L >= 0x42B8L) & p_62) != l_172), l_129)), 0x76L)) ^ 0x4598823AL)) | 0xFABA5406L)) , p_62))))), 2)) != g_140[1])) || p_62) && g_140[2])))), g_85, l_196[8], g_85);
                        l_159 = g_85;
                    }
                    else
                    {
                        if (g_55)
                            break;
                        if (p_62)
                            break;
                    }
                }
                l_160 = ((-5L) < (g_189[0] = (l_110 <= (safe_rshift_func_uint16_t_u_s(p_62, l_172)))));
                l_206 = ((g_130 = g_130) > (((g_189[0] || g_195[9][4][1]) == ((g_55 = p_62) && (safe_add_func_int32_t_s_s(9L, (safe_sub_func_uint16_t_u_u(func_63(p_62, (0x689637CCL ^ ((safe_mul_func_uint8_t_u_u(g_140[0], l_133)) < 0xBE6B133BL))), p_62)))))) & p_62));
            }
            else
            {
                unsigned l_219 = 4294967295UL;
                unsigned l_220 = 8UL;
                int l_224 = (-1L);
                unsigned char l_267[3][5][10] = {{{3UL, 0UL, 5UL, 255UL, 0x5AL, 249UL, 0xB4L, 0x20L, 5UL, 0x20L}, {3UL, 0UL, 5UL, 255UL, 0x5AL, 249UL, 0xB4L, 0x20L, 5UL, 0x20L}, {3UL, 0UL, 5UL, 255UL, 0x5AL, 249UL, 0xB4L, 0x20L, 5UL, 0x20L}, {3UL, 0UL, 5UL, 255UL, 0x5AL, 249UL, 0xB4L, 0x20L, 5UL, 0x20L}, {3UL, 0UL, 5UL, 255UL, 0x5AL, 249UL, 0xB4L, 0x20L, 5UL, 0x20L}}, {{3UL, 0UL, 5UL, 255UL, 0x5AL, 249UL, 0xB4L, 0x20L, 5UL, 0x20L}, {3UL, 0UL, 5UL, 255UL, 0x5AL, 249UL, 0xB4L, 0x20L, 5UL, 0x20L}, {3UL, 0UL, 5UL, 255UL, 0x5AL, 249UL, 0xB4L, 0x20L, 5UL, 0x20L}, {3UL, 0UL, 5UL, 255UL, 0x5AL, 249UL, 0xB4L, 0x20L, 5UL, 0x20L}, {3UL, 0UL, 5UL, 255UL, 0x5AL, 249UL, 0xB4L, 0x20L, 5UL, 0x20L}}, {{3UL, 0UL, 5UL, 255UL, 0x5AL, 249UL, 0xB4L, 0x20L, 5UL, 0x20L}, {3UL, 0UL, 5UL, 255UL, 0x5AL, 249UL, 0xB4L, 0x20L, 5UL, 0x20L}, {3UL, 0UL, 5UL, 255UL, 0x5AL, 249UL, 0xB4L, 0x20L, 5UL, 0x20L}, {3UL, 0UL, 5UL, 255UL, 0x5AL, 249UL, 0xB4L, 0x20L, 5UL, 0x20L}, {3UL, 0UL, 5UL, 255UL, 0x5AL, 249UL, 0xB4L, 0x20L, 5UL, 0x20L}}};
                int i, j, k;
                g_157 = (safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((l_110 && 0x44L), ((safe_mul_func_int16_t_s_s(p_62, ((safe_sub_func_int32_t_s_s(((l_113 = func_69((safe_rshift_func_int8_t_s_s(((l_109 < (g_140[1] ^ 4294967295UL)) ^ func_79((safe_mod_func_int16_t_s_s(((-9L) & ((g_189[0] > 0x71L) , p_62)), 9UL)), g_157, l_219, p_62)), p_62)), g_189[0], l_219, g_189[0])) == 6L), 0xCAAE7E22L)) != l_220))) | l_109))), 1));
                if ((safe_mul_func_uint8_t_u_u(l_223, (-3L))))
                {
                    unsigned short l_225 = 0x4D3AL;
                    int l_240 = 0x937EDC5DL;
                    g_189[0] = ((((func_69((~l_219), (l_224 = 0xE474BA40L), (g_195[3][4][0] , (p_62 & (l_225 | (safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s((g_195[9][4][1] <= p_62), (((g_55 <= g_189[0]) == 0x5FL) , 0x30FBL))) , g_189[0]) , g_195[8][0][1]), p_62))))), l_194) ^ 0x092662B4L) || 0x15L) == p_62) , l_230);
                    for (l_220 = 6; (l_220 != 58); l_220 = safe_add_func_int8_t_s_s(l_220, 3))
                    {
                        unsigned l_234 = 0x4A9805B7L;
                        int l_235 = 0L;
                        if (l_225)
                            break;
                        l_235 = ((g_195[9][4][1] >= (((g_233[0][3][6] = (l_168 = (0L && (l_129 = g_157)))) != (0L == ((l_225 , p_62) != g_55))) ^ l_234)) && (g_195[2][3][0] > 0xADEDA803L));
                        l_160 = (+((safe_lshift_func_uint8_t_u_s((l_113 = (func_79((func_63((((safe_mul_func_int8_t_s_s(((((l_240 = l_230) , ((g_248 = (((((((((4294967290UL ^ (safe_mod_func_int16_t_s_s(0x3A52L, (g_243 = g_97)))) == func_79(func_69((safe_mod_func_uint8_t_u_u(func_69((g_247 = (g_246 = p_62)), p_62, p_62, ((~(g_189[0] >= (l_169[4][0] != p_62))) , 0x1F477871L)), 0x09L)), l_160, g_55, g_140[2]), g_25, g_195[9][4][1], g_130)) == g_130) | 7L) && l_169[4][9]) != g_130) <= (-1L)) > p_62) , l_219)) < p_62)) | 3UL) , 0x28L), 0x09L)) , g_157) | p_62), p_62) , (-10L)), g_233[0][3][6], g_130, p_62) >= 0x8755DABCL)), l_220)) , p_62));
                    }
                    return l_173;
                }
                else
                {
                    unsigned short l_261 = 65535UL;
                    unsigned l_262 = 1UL;
                    int l_263 = (-1L);
                    if ((safe_sub_func_uint16_t_u_u(func_63((((1UL || (func_79(((safe_sub_func_int8_t_s_s((g_248 < p_62), (l_113 = ((g_130 = (l_160 = 0x2CL)) , ((g_140[0] = func_63((((8L | p_62) >= (l_168 = ((((safe_mul_func_int16_t_s_s((l_263 = ((safe_sub_func_int8_t_s_s((p_62 , (p_62 || (safe_mod_func_uint16_t_u_u((l_262 = (((safe_rshift_func_uint8_t_u_u(g_189[0], g_233[5][1][0])) , 0L) ^ l_261)), g_189[0])))), p_62)) >= l_261)), g_264[1][0][9])) >= g_140[2]) , g_264[0][0][1]) < g_25))) || 0x19FD082DL), l_219)) < l_219))))) ^ g_157), g_233[0][3][6], g_25, p_62) < l_261)) || g_233[2][3][2]) && g_140[1]), g_233[1][2][6]), l_224)))
                    {
                        g_189[0] = l_223;
                        l_263 = g_157;
                        l_224 = p_62;
                        g_157 = ((((func_63(p_62, (safe_add_func_uint8_t_u_u(p_62, p_62))) > l_267[2][0][6]) == ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((l_171 = func_69((l_224 = (g_233[2][3][3] | (~p_62))), l_261, l_261, l_220)), 2)), (-1L))) < 0x6629L)) , 1L) && (-5L));
                    }
                    else
                    {
                        unsigned char l_276 = 0x46L;
                        g_189[0] = (g_55 = (safe_sub_func_uint16_t_u_u(p_62, 0xD83DL)));
                        g_189[0] = (2L | g_248);
                        l_168 = ((safe_mod_func_int16_t_s_s(p_62, (l_223 , g_140[1]))) , g_157);
                        l_276 = 0x08F028F0L;
                    }
                    g_85 = 0x34898C60L;
                    for (g_85 = 2; (g_85 >= 0); g_85 -= 1)
                    {
                        g_157 = ((p_62 ^ g_97) , g_189[0]);
                        g_97 = p_62;
                    }
                    l_160 = p_62;
                }
                for (l_219 = 0; l_219 < 6; l_219 += 1)
                {
                    for (l_194 = 0; l_194 < 4; l_194 += 1)
                    {
                        for (l_109 = 0; l_109 < 9; l_109 += 1)
                        {
                            g_233[l_219][l_194][l_109] = 0x3EL;
                        }
                    }
                }
            }
            g_157 = l_160;
        }
        else
        {
            int l_282 = 0x9C4E027CL;
            for (l_223 = 0; (l_223 <= 2); l_223 += 1)
            {
                int l_279 = 0xDC1D6255L;
                int i;
                l_279 = (safe_lshift_func_uint16_t_u_s(g_140[l_223], 10));
                for (g_248 = 0; (g_248 <= 2); g_248 += 1)
                {
                    const int l_293 = (-4L);
                    for (l_109 = 0; (l_109 <= 1); l_109 += 1)
                    {
                        int i, j, k;
                        if (g_264[(l_223 + 2)][l_109][(g_248 + 2)])
                            break;
                        l_295 = func_79(((((p_62 < ((safe_add_func_uint8_t_u_u((g_189[0] || p_62), l_282)) || 0xC176C8BCL)) , ((g_294 = func_63((safe_sub_func_uint16_t_u_u(func_79((((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(l_110, ((safe_lshift_func_int8_t_s_s(p_62, 4)) > (~g_195[4][3][0])))), 4)) & (((safe_mul_func_uint8_t_u_u(p_62, l_293)) && p_62) >= l_282)) , 0xB7D17F2EL), p_62, l_282, g_85), 65535UL)), p_62)) , p_62)) <= l_133) <= p_62), l_160, p_62, l_169[2][5]);
                    }
                }
                l_171 = (safe_add_func_int32_t_s_s((l_168 = func_69(g_247, l_223, ((safe_mul_func_uint16_t_u_u(func_63(func_63(l_169[2][5], ((g_85 == (l_279 = (safe_add_func_uint16_t_u_u(g_85, (7L != ((((g_140[l_223] = ((l_160 = (g_233[4][2][6] < (safe_mod_func_int16_t_s_s(g_247, ((254UL && l_279) , 0x12A0L))))) || g_247)) | (-6L)) || g_246) , g_304)))))) , p_62)), g_264[1][1][9]), p_62)) <= g_195[8][5][1]), p_62)), 4294967294UL));
                g_157 = (safe_sub_func_uint16_t_u_u(p_62, (g_322[0][5] = (((safe_rshift_func_int16_t_s_s((((1L | p_62) , (((safe_rshift_func_uint8_t_u_s(func_69(l_133, (safe_mod_func_int8_t_s_s((((g_140[0] , ((safe_sub_func_int32_t_s_s(((func_63(l_282, func_79(g_246, ((safe_sub_func_int16_t_s_s((g_243 = ((safe_mul_func_int16_t_s_s((p_62 <= (safe_lshift_func_int8_t_s_u(g_189[0], l_282))), l_110)) != p_62)), g_233[1][0][1])) , l_282), l_110, g_157)) ^ l_171) , (-10L)), p_62)) && l_282)) || 0xF9L) <= p_62), 0x8CL)), l_110, p_62), 2)) <= 255UL) | g_189[0])) >= g_247), l_321[0])) ^ p_62) >= 0UL))));
            }
        }
        if (((safe_add_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s(func_69(p_62, (((p_62 && l_295) <= l_110) <= l_171), (safe_add_func_int32_t_s_s((~g_248), ((p_62 & g_247) , (!(-1L))))), g_97), 1UL)) , 0x9B67L) || p_62) , l_169[2][5]), 0xA4F7L)) , p_62))
        {
            int l_338[1];
            int l_339 = 0x54CC9535L;
            int i;
            for (i = 0; i < 1; i++)
                l_338[i] = (-3L);
            l_339 = (l_338[0] = ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(p_62, (((safe_sub_func_int16_t_s_s(g_140[1], g_195[7][3][0])) , g_97) , (p_62 , 0x92DFL)))), l_321[0])) & ((l_113 = 0x02L) | (safe_rshift_func_uint16_t_u_u((((g_337 = g_195[7][8][0]) ^ g_247) , 0xEF4BL), 10)))));
        }
        else
        {
            short l_352 = 1L;
            unsigned short l_353 = 0UL;
            l_160 = 5L;
            l_168 = g_294;
            l_113 = (g_157 = ((+((l_168 = (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((0x3A327C73L && ((g_130 = (safe_sub_func_int16_t_s_s(((g_85 , ((safe_mul_func_uint8_t_u_u((g_97 ^ ((((p_62 > 5UL) , (func_79(p_62, func_79(g_140[1], l_321[0], (safe_lshift_func_uint16_t_u_s((((safe_unary_minus_func_int16_t_s(func_79(((!(g_351 = l_133)) , l_352), g_247, p_62, g_130))) < g_248) != g_25), g_337)), g_157), l_353, p_62) | l_321[0])) | l_109) <= p_62)), 0x6DL)) || g_264[1][0][9])) & l_113), l_110))) & 247UL)), l_110)), p_62))) , l_133)) , l_354));
        }
    }
    else
    {
        return g_85;
    }
    l_168 = g_248;
    return p_62;
}







static short func_63(short p_64, int p_65)
{
    unsigned l_76 = 0x669DD8B1L;
    int l_84[3][4];
    short l_86 = 0xDC7CL;
    int l_93 = 1L;
    unsigned char l_104 = 0xA3L;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_84[i][j] = 0xC7F453ACL;
    }
    p_65 = 7L;
    g_55 = p_65;
    p_65 = func_69((g_97 = ((g_25 != (l_76 == (l_84[0][1] = (safe_sub_func_uint8_t_u_u((func_69(g_25, l_76, ((g_55 <= (((func_69(((func_79((g_85 = ((l_84[0][1] = p_65) , g_25)), l_86, (safe_mod_func_uint16_t_u_u(((l_93 = ((safe_mul_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(0x8D342731L, p_64)) || l_86), 0x62L)) | g_55)) ^ 0x7682L), (-1L))), l_76) | 1L) > l_86), p_65, g_25, l_86) | g_25) , l_93) == 0x4015L)) < 0xC2AECBAEL), g_25) | l_86), 0x4EL))))) != p_64)), p_65, g_55, p_65);
    l_84[0][2] = (p_65 , (g_97 = (p_65 | (safe_add_func_uint32_t_u_u((p_65 == ((l_84[0][0] != (safe_mul_func_int8_t_s_s(func_79(func_69(p_64, l_76, func_79(((safe_add_func_int32_t_s_s(g_97, (-6L))) | l_84[1][1]), l_76, g_55, p_64), p_64), g_25, l_84[0][1], p_65), l_104))) < l_84[2][1])), l_84[0][1])))));
    return p_64;
}







static unsigned char func_69(unsigned p_70, const int p_71, int p_72, unsigned p_73)
{
    return g_25;
}







static unsigned char func_79(int p_80, unsigned p_81, int p_82, char p_83)
{
    int l_96 = (-3L);
    p_80 = (safe_sub_func_uint32_t_u_u((g_25 & l_96), 0xBCAB3842L));
    g_85 = g_55;
    return p_82;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_140[i], "g_140[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_157, "g_157", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_189[i], "g_189[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_195[i][j][k], "g_195[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_233[i][j][k], "g_233[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_264[i][j][k], "g_264[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_322[i][j], "g_322[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_508[i][j], "g_508[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_598, "g_598", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_691, "g_691", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_716, "g_716", print_hash_value);
    transparent_crc(g_951, "g_951", print_hash_value);
    transparent_crc(g_1091, "g_1091", print_hash_value);
    transparent_crc(g_1152.f0, "g_1152.f0", print_hash_value);
    transparent_crc(g_1152.f1, "g_1152.f1", print_hash_value);
    transparent_crc(g_1152.f2, "g_1152.f2", print_hash_value);
    transparent_crc(g_1152.f3, "g_1152.f3", print_hash_value);
    transparent_crc(g_1152.f4, "g_1152.f4", print_hash_value);
    transparent_crc(g_1159, "g_1159", print_hash_value);
    transparent_crc(g_1194.f0, "g_1194.f0", print_hash_value);
    transparent_crc(g_1194.f1, "g_1194.f1", print_hash_value);
    transparent_crc(g_1194.f2, "g_1194.f2", print_hash_value);
    transparent_crc(g_1194.f3, "g_1194.f3", print_hash_value);
    transparent_crc(g_1194.f4, "g_1194.f4", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1208[i][j][k], "g_1208[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1308, "g_1308", print_hash_value);
    transparent_crc(g_1399, "g_1399", print_hash_value);
    transparent_crc(g_1546, "g_1546", print_hash_value);
    transparent_crc(g_1547, "g_1547", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1602[i][j].f0, "g_1602[i][j].f0", print_hash_value);
            transparent_crc(g_1602[i][j].f1, "g_1602[i][j].f1", print_hash_value);
            transparent_crc(g_1602[i][j].f2, "g_1602[i][j].f2", print_hash_value);
            transparent_crc(g_1602[i][j].f3, "g_1602[i][j].f3", print_hash_value);
            transparent_crc(g_1602[i][j].f4, "g_1602[i][j].f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1653.f0, "g_1653.f0", print_hash_value);
    transparent_crc(g_1653.f1, "g_1653.f1", print_hash_value);
    transparent_crc(g_1653.f2, "g_1653.f2", print_hash_value);
    transparent_crc(g_1653.f3, "g_1653.f3", print_hash_value);
    transparent_crc(g_1653.f4, "g_1653.f4", print_hash_value);
    transparent_crc(g_1742, "g_1742", print_hash_value);
    transparent_crc(g_1773.f0, "g_1773.f0", print_hash_value);
    transparent_crc(g_1773.f1, "g_1773.f1", print_hash_value);
    transparent_crc(g_1773.f2, "g_1773.f2", print_hash_value);
    transparent_crc(g_1773.f3, "g_1773.f3", print_hash_value);
    transparent_crc(g_1773.f4, "g_1773.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1777[i], "g_1777[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
