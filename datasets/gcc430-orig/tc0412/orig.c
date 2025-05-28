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
   signed f0 : 13;
   unsigned f1;
   volatile unsigned f2 : 16;
   unsigned f3 : 20;
   const volatile unsigned f4 : 11;
   signed f5 : 13;
   volatile int f6;
   unsigned f7 : 8;
};


static unsigned char g_7 = 248UL;
static unsigned char g_71 = 9UL;
static char g_74[5] = {(-1L), (-1L), (-1L), (-1L), (-1L)};
static struct S0 g_77 = {55,1UL,103,267,1,18,-5L,14};
static struct S0 g_105[6][8][4] = {{{{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}}, {{{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}}, {{{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}}, {{{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}}, {{{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}}, {{{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}, {{-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}, {-49,0x29F2DB05L,99,751,37,72,0x6483285BL,15}, {-11,1UL,196,582,13,-15,6L,0}}}};
static volatile struct S0 g_108 = {-16,4294967288UL,116,664,23,-45,0x4F3CB375L,10};
static unsigned g_178 = 3UL;
static struct S0 g_267 = {-66,7UL,85,157,35,55,0L,10};
static volatile unsigned short g_315 = 0xF251L;
static int g_392 = 0x1DBA6F8BL;
static short g_482 = 0x6385L;
static struct S0 g_640 = {31,9UL,170,372,28,5,-1L,5};
static const unsigned char g_641 = 0xC5L;
static int g_656 = (-2L);
static short g_682[7][7][4] = {{{0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}}, {{0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}}, {{0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}}, {{0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}}, {{0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}}, {{0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}}, {{0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}, {0x721DL, 0L, (-2L), 0x1D58L}}};
static unsigned g_683 = 4294967295UL;
static struct S0 g_688[6] = {{2,1UL,206,103,19,60,0x333195B4L,8}, {2,1UL,206,103,19,60,0x333195B4L,8}, {29,0xAE6AD7E7L,75,585,21,16,-10L,2}, {2,1UL,206,103,19,60,0x333195B4L,8}, {2,1UL,206,103,19,60,0x333195B4L,8}, {29,0xAE6AD7E7L,75,585,21,16,-10L,2}};
static struct S0 g_696[1][1] = {{{-37,1UL,134,235,37,24,-1L,1}}};
static volatile struct S0 g_804 = {51,1UL,77,798,39,-46,-1L,7};
static volatile short g_812 = 0xAB0DL;
static struct S0 g_1081[4][5] = {{{-78,0x1BCB901AL,176,766,11,-32,1L,14}, {27,0UL,158,387,0,-67,0xE85A81B7L,10}, {-78,0x1BCB901AL,176,766,11,-32,1L,14}, {27,0UL,158,387,0,-67,0xE85A81B7L,10}, {-78,0x1BCB901AL,176,766,11,-32,1L,14}}, {{-78,0x1BCB901AL,176,766,11,-32,1L,14}, {27,0UL,158,387,0,-67,0xE85A81B7L,10}, {-78,0x1BCB901AL,176,766,11,-32,1L,14}, {27,0UL,158,387,0,-67,0xE85A81B7L,10}, {-78,0x1BCB901AL,176,766,11,-32,1L,14}}, {{-78,0x1BCB901AL,176,766,11,-32,1L,14}, {27,0UL,158,387,0,-67,0xE85A81B7L,10}, {-78,0x1BCB901AL,176,766,11,-32,1L,14}, {27,0UL,158,387,0,-67,0xE85A81B7L,10}, {-78,0x1BCB901AL,176,766,11,-32,1L,14}}, {{-78,0x1BCB901AL,176,766,11,-32,1L,14}, {27,0UL,158,387,0,-67,0xE85A81B7L,10}, {-78,0x1BCB901AL,176,766,11,-32,1L,14}, {27,0UL,158,387,0,-67,0xE85A81B7L,10}, {-78,0x1BCB901AL,176,766,11,-32,1L,14}}};
static volatile char g_1092 = 0x03L;
static int g_1122 = (-8L);
static struct S0 g_1142 = {-87,1UL,103,65,27,-16,1L,15};
static short g_1152 = (-1L);
static struct S0 g_1256 = {52,4294967293UL,117,242,33,60,0L,12};
static unsigned g_1292 = 0xAA67D02FL;
static struct S0 g_1309[4] = {{-82,0xA999B66EL,105,211,5,-20,0x8EE9DC87L,14}, {-82,0xA999B66EL,105,211,5,-20,0x8EE9DC87L,14}, {-82,0xA999B66EL,105,211,5,-20,0x8EE9DC87L,14}, {-82,0xA999B66EL,105,211,5,-20,0x8EE9DC87L,14}};
static struct S0 g_1348 = {55,0UL,224,108,14,9,0x762C92A9L,7};
static struct S0 g_1406 = {58,0xCBDDC03AL,229,27,1,-38,0x63C70D28L,7};
static char g_1487 = 6L;
static struct S0 g_1550 = {-36,4294967293UL,153,742,34,45,0x7B94F9C4L,6};
static volatile unsigned g_1562 = 2UL;
static struct S0 g_1600[4] = {{6,1UL,93,184,36,8,0xA66942D6L,14}, {-49,0x6EA495E3L,208,404,36,51,4L,13}, {6,1UL,93,184,36,8,0xA66942D6L,14}, {-49,0x6EA495E3L,208,404,36,51,4L,13}};
static struct S0 g_1608 = {38,0x376A5457L,69,499,10,-71,2L,8};



static unsigned func_1(void);
static unsigned char func_8(int p_9, const int p_10, int p_11);
static int func_13(unsigned char p_14, unsigned p_15, unsigned short p_16);
static char func_18(unsigned p_19);
static short func_22(char p_23, unsigned p_24, char p_25, char p_26);
static unsigned char func_27(short p_28);
static char func_35(unsigned p_36, unsigned char p_37, unsigned short p_38);
static char func_46(unsigned char p_47, char p_48, char p_49);
static unsigned char func_50(unsigned short p_51, const unsigned p_52, int p_53, unsigned short p_54);
static unsigned func_55(unsigned short p_56, unsigned p_57, short p_58, unsigned p_59);
static unsigned func_1(void)
{
    char l_4 = 0x07L;
    unsigned l_17 = 4UL;
    int l_1628 = 7L;
    g_696[0][0].f5 = ((safe_sub_func_int8_t_s_s(l_4, (safe_lshift_func_int16_t_s_s(((6L | (g_7 | func_8(l_4, (safe_unary_minus_func_int32_t_s(func_13(g_7, ((l_17 >= (!(g_7 & (func_18(l_4) , 4L)))) ^ (-1L)), g_1348.f1))), g_1406.f5))) > g_1600[3].f7), g_1348.f5)))) <= g_641);
    l_1628 = (safe_add_func_int8_t_s_s(g_1348.f5, (((safe_add_func_uint16_t_u_u((0x54EFL ^ g_267.f5), g_1550.f5)) == l_4) <= (safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s(func_35(l_4, g_1406.f3, (((((((l_4 | (l_4 || 0xA6DB6F58L)) == g_1608.f5) & 0x4AL) || g_1092) , 65528UL) > l_17) , 2UL)), g_1348.f3)), g_1256.f0)), 9L)), l_4)))));
    return l_1628;
}







static unsigned char func_8(int p_9, const int p_10, int p_11)
{
    unsigned char l_1605 = 0UL;
    unsigned short l_1606 = 0UL;
    char l_1615 = (-1L);
    for (g_1348.f1 = 0; (g_1348.f1 != 6); g_1348.f1++)
    {
        short l_1599 = 0xF019L;
        for (g_1292 = 0; (g_1292 == 48); g_1292++)
        {
            int l_1607 = 0xEDF4CC76L;
            for (g_683 = 1; (g_683 <= 4); g_683 += 1)
            {
                int i;
                g_1256.f0 = ((((safe_mul_func_uint8_t_u_u((g_74[g_683] && (safe_mul_func_int8_t_s_s(l_1599, l_1599))), 255UL)) > g_1550.f4) , 1L) >= p_11);
                p_9 = (g_1600[3] , ((g_1487 | ((safe_mul_func_uint16_t_u_u(p_10, (((safe_sub_func_uint8_t_u_u(l_1605, ((g_1348.f4 || func_46(l_1606, l_1607, (g_1608 , g_1256.f3))) , g_682[2][4][2]))) <= p_11) && 252UL))) == g_74[g_683])) >= p_9));
            }
        }
        p_9 ^= 1L;
    }
    g_1081[2][2].f0 ^= (safe_sub_func_uint8_t_u_u(func_50(l_1605, (l_1606 <= g_108.f4), ((l_1605 && ((safe_mul_func_uint16_t_u_u(g_696[0][0].f5, ((safe_sub_func_uint16_t_u_u((g_1081[2][2].f1 == l_1605), (g_1550.f5 , (g_1142.f5 >= l_1615)))) ^ 0xBBCEL))) || g_74[3])) , l_1605), p_11), g_1608.f7));
    return g_1081[2][2].f7;
}







static int func_13(unsigned char p_14, unsigned p_15, unsigned short p_16)
{
    unsigned l_1426 = 0UL;
    int l_1457 = 0x277500A3L;
    char l_1514[4] = {(-5L), (-9L), (-5L), (-9L)};
    int i;
    if (((p_15 & (safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(g_1081[2][2].f6, 1)), l_1426)), (safe_lshift_func_uint8_t_u_s((((p_14 , p_16) != ((safe_div_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_1426 <= ((l_1426 == l_1426) > (((safe_mod_func_uint16_t_u_u(g_688[4].f0, l_1426)) , g_696[0][0].f5) == 0UL))), 7L)), 0xE783L)) && p_16), 0x9EL)) , l_1426)) , g_392), 2))))) | l_1426))
    {
        unsigned char l_1447[2];
        int l_1463 = 0x15B473E1L;
        unsigned short l_1482 = 65527UL;
        int l_1500 = 9L;
        int i;
        for (i = 0; i < 2; i++)
            l_1447[i] = 0x02L;
        for (g_1122 = 0; (g_1122 > (-26)); --g_1122)
        {
            char l_1456 = (-7L);
            l_1457 = ((p_16 <= ((p_16 == (safe_mul_func_int8_t_s_s((p_15 | (((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((g_105[5][0][1] , (safe_rshift_func_uint16_t_u_s(l_1447[1], g_804.f7))), g_1122)), ((((safe_div_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_16, 5)), ((1UL <= g_77.f3) , l_1456))) == p_16) || g_77.f7) <= g_267.f0), 0)) > g_267.f1) && g_1081[2][2].f3), l_1426)) | p_15) <= 0x08L) , p_15))) >= 0x94707F16L) && l_1447[1])), g_1406.f1))) & g_682[2][4][2])) | p_16);
            l_1463 ^= (safe_add_func_uint8_t_u_u(p_15, (safe_unary_minus_func_uint16_t_u((safe_add_func_int16_t_s_s(p_14, p_14))))));
            g_77.f0 = g_688[4].f1;
            g_688[4].f5 |= g_688[4].f7;
        }
        l_1463 |= p_15;
        l_1463 = (safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((p_16 , (safe_sub_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_1457, 8)), (p_15 || l_1457))) , (safe_add_func_uint8_t_u_u(((g_804 , (((l_1447[0] && (safe_mod_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(p_15, (((~((safe_lshift_func_uint8_t_u_s((((p_15 == g_1152) && p_14) , 0x63L), 6)) == 0x45L)) ^ l_1426) , g_640.f2))) > l_1426), g_640.f1))) < 0x8FF8L) > 7L)) , l_1482), (-1L)))), p_15))), p_14)), g_683));
        l_1500 &= ((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(l_1463, (l_1447[0] != g_1487))) > g_392), (p_15 >= (g_688[4].f5 != (safe_lshift_func_uint16_t_u_u(func_46(p_14, (((0xE0C3AAC9L >= ((~(safe_rshift_func_uint16_t_u_u((func_55((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((-1L) || 0UL) && l_1482), 0x4496L)), 9UL)), l_1447[1], l_1457, p_16) == g_682[2][3][3]), 6))) != p_14)) > g_1256.f1) , 0L), p_15), 7)))))) <= p_15);
    }
    else
    {
        unsigned l_1510 = 4UL;
        int l_1535[3][7];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 7; j++)
                l_1535[i][j] = 0x9D2E5D09L;
        }
        for (g_267.f1 = 0; (g_267.f1 <= 3); g_267.f1 += 1)
        {
            short l_1513 = 0x0C4DL;
            for (g_1406.f1 = 0; (g_1406.f1 <= 3); g_1406.f1 += 1)
            {
                unsigned short l_1505 = 0xA5CAL;
                int l_1517 = 0xA6656CFCL;
                g_640.f0 = ((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((l_1505 == 1L), (g_641 ^ func_35(((0xC2664D02L && (func_46((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((l_1510 != (g_1406.f1 & g_696[0][0].f0)) , p_15) | ((safe_mul_func_uint16_t_u_u(l_1513, (-1L))) ^ p_14)), g_108.f6)), l_1510)), l_1457, p_15) <= p_15)) & (-1L)), g_1348.f3, l_1513)))), g_656)) == 65530UL);
                l_1514[1] = p_16;
                if (g_1309[3].f0)
                {
                    l_1517 |= (safe_div_func_uint8_t_u_u((g_1256.f3 , p_16), l_1426));
                    return g_267.f1;
                }
                else
                {
                    const char l_1528 = 0L;
                    for (l_1510 = 0; (l_1510 <= 3); l_1510 += 1)
                    {
                        int i, j, k;
                        l_1535[2][0] = func_46(func_46((safe_mul_func_uint16_t_u_u(func_35((g_682[(l_1510 + 2)][g_1406.f1][g_267.f1] & ((~p_15) , (g_682[(l_1510 + 2)][g_1406.f1][g_267.f1] | g_267.f4))), (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(func_35((((safe_mul_func_int16_t_s_s(l_1528, ((+(safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(g_640.f3, func_35(g_682[(l_1510 + 2)][g_1406.f1][g_267.f1], p_16, (((((safe_sub_func_uint8_t_u_u((func_35((l_1513 != 0x44L), p_15, g_1142.f0) && l_1513), g_656)) ^ p_16) , (-9L)) ^ g_656) ^ p_15)))), l_1505))) <= g_656))) <= 0x8BL) | g_1142.f7), l_1510, l_1513), l_1426)), 0L)), 6)), l_1510), l_1513)), g_1406.f7, p_16), g_1152, g_696[0][0].f7);
                        if (g_77.f2)
                            continue;
                        l_1457 = ((p_15 , ((safe_lshift_func_int8_t_s_u(l_1514[2], 5)) | (g_1348.f0 & (func_46(p_14, g_804.f2, (safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(func_35((l_1517 , p_14), (((((+((safe_div_func_int32_t_s_s(g_682[(l_1510 + 2)][g_1406.f1][g_267.f1], (safe_div_func_uint32_t_u_u(l_1528, 0x45CBD481L)))) <= l_1528)) , 0x29F3L) >= 0x86BBL) > g_105[5][0][1].f3) || (-1L)), g_682[(l_1510 + 2)][g_1406.f1][g_267.f1]), 248UL)), l_1513))) == 3L)))) ^ 7L);
                        if (p_14)
                            continue;
                    }
                }
                l_1517 = l_1514[0];
                for (l_1517 = 0; (l_1517 <= 3); l_1517 += 1)
                {
                    int l_1546 = 0x312429E7L;
                    for (g_656 = 3; (g_656 >= 0); g_656 -= 1)
                    {
                        short l_1549 = 7L;
                        l_1546 |= p_14;
                        l_1546 = (safe_mod_func_uint8_t_u_u(l_1549, ((g_1550 , p_16) , (-1L))));
                    }
                    if (p_14)
                        continue;
                }
            }
            g_77.f0 ^= g_1550.f3;
            for (g_178 = 0; (g_178 <= 3); g_178 += 1)
            {
                unsigned l_1551 = 0x8E85575BL;
                l_1535[2][1] = p_16;
                l_1551 ^= p_15;
                for (l_1510 = 0; (l_1510 <= 3); l_1510 += 1)
                {
                    int i, j, k;
                    for (p_16 = 0; (p_16 <= 3); p_16 += 1)
                    {
                        int i, j, k;
                        g_1406.f0 = (((safe_mod_func_uint8_t_u_u(253UL, (safe_rshift_func_uint16_t_u_u(g_682[(p_16 + 2)][(g_178 + 3)][l_1510], l_1513)))) && p_16) | l_1513);
                    }
                    g_1562 = ((0UL || ((0xABL | (((((g_682[(g_267.f1 + 1)][g_267.f1][l_1510] & ((safe_sub_func_int32_t_s_s((func_55(l_1513, ((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u(g_1256.f4, (((func_35(g_1550.f0, g_1122, l_1426) & l_1551) || g_105[5][0][1].f3) != (-7L)))), l_1513)) < g_696[0][0].f3), g_74[1], g_1256.f1) > p_14), 0x6E9B04ABL)) , 0x706D0B76L)) || g_1406.f7) | 1UL) && g_267.f6) || 0xED5EL)) < g_1122)) , 0L);
                }
            }
        }
        for (l_1510 = 0; (l_1510 >= 45); l_1510 = safe_add_func_int32_t_s_s(l_1510, 4))
        {
            int l_1583 = 0x6365FF4FL;
            l_1457 |= ((((~p_16) != ((safe_lshift_func_uint16_t_u_u((p_16 == (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((l_1535[2][0] , (safe_add_func_int16_t_s_s(func_22((safe_add_func_uint32_t_u_u(0x5DABA607L, ((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((g_1309[3].f2 , (g_108.f7 && ((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(g_482, 8)), l_1583)) , func_22(p_16, g_77.f7, p_14, l_1535[0][5])))) || 0xAA83L), 11)), g_1256.f1)) != l_1583))), g_696[0][0].f7, l_1510, l_1583), p_15))), g_682[0][2][1])), 7))), p_15)) > l_1514[1])) , g_74[1]) == 0x7CL);
        }
        l_1457 = p_15;
        for (g_482 = 1; (g_482 <= 4); g_482 += 1)
        {
            int l_1590 = 0x39FF370DL;
            int i;
            l_1590 = (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(g_74[g_482], 12)), func_35(g_1406.f0, (0xCAL || func_46((((safe_add_func_uint32_t_u_u(g_1081[2][2].f5, ((l_1426 , ((func_35(p_14, p_16, g_1348.f5) , g_74[g_482]) != g_1348.f0)) || g_1348.f3))) && g_1550.f7) >= g_267.f7), l_1535[2][0], g_804.f3)), p_16)));
        }
    }
    return g_1256.f4;
}







static char func_18(unsigned p_19)
{
    const int l_903 = 1L;
    int l_1419 = 0x1F19B2F4L;
    l_1419 &= (((p_19 <= 0xDFL) <= (func_22((func_27((p_19 <= g_7)) > p_19), ((l_903 & (l_903 ^ 9L)) , g_688[4].f5), p_19, g_696[0][0].f3) > 0UL)) != (-1L));
    return g_1122;
}







static short func_22(char p_23, unsigned p_24, char p_25, char p_26)
{
    const unsigned l_906 = 1UL;
    unsigned char l_970 = 0xEFL;
    int l_971 = 0L;
    int l_977[7] = {(-1L), 7L, (-1L), 7L, (-1L), 7L, (-1L)};
    unsigned char l_1170 = 0xD3L;
    short l_1318 = (-7L);
    short l_1329 = (-1L);
    int i;
    if ((safe_sub_func_uint16_t_u_u(((l_906 | 1UL) & p_23), (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((func_55((safe_sub_func_int16_t_s_s((((((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((0xC1L > p_23))), ((safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((func_55(p_25, p_23, (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(func_50(p_23, (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_7, 4)), 0xA0L)), g_640.f5, g_656), 6L)), p_26)), l_906) , p_24), 246UL)), l_906)) | 0x0A4E7CBFL), (-7L))) & p_23))) , g_640.f5) >= 4294967293UL) != l_906) | 0xDAL), l_906)), l_906, g_105[5][0][1].f1, p_25) == l_906), g_392)), g_640.f0)))))
    {
        unsigned char l_932 = 0xC8L;
        int l_933 = 0xAAC7DED3L;
        unsigned char l_1212 = 8UL;
        int l_1261 = 0xDAE0EF65L;
        int l_1293 = 0xF46312DFL;
        for (g_683 = 0; (g_683 < 24); g_683 = safe_add_func_uint32_t_u_u(g_683, 3))
        {
            l_933 |= (p_23 == l_932);
            return p_26;
        }
        for (g_482 = (-1); (g_482 < (-27)); --g_482)
        {
            for (g_656 = 0; (g_656 > (-14)); g_656--)
            {
                if (g_812)
                    break;
            }
            g_108.f5 &= 0xA1F3692DL;
            return p_26;
        }
lbl_1242:
        if (l_906)
        {
lbl_976:
            for (p_23 = 4; (p_23 >= 0); p_23 -= 1)
            {
                int i;
                return g_74[p_23];
            }
            return l_906;
        }
        else
        {
            unsigned char l_950[1][1];
            unsigned l_962 = 4294967295UL;
            int l_963 = (-1L);
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_950[i][j] = 0x6AL;
            }
            for (p_26 = 24; (p_26 < 17); p_26 = safe_sub_func_uint16_t_u_u(p_26, 1))
            {
                const unsigned l_955 = 0x3F245C74L;
                unsigned l_995 = 0x9B02F940L;
                l_963 &= (((safe_rshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(g_688[4].f5, 0)) > ((safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(p_23, (l_950[0][0] , ((((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(func_50(l_932, l_955, func_55((safe_lshift_func_int16_t_s_u(l_932, ((((((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(6UL, 0)), l_955)) > 0UL) ^ g_108.f0) != 0x0875L) && l_950[0][0]) , 0x5FBAL))), g_267.f3, l_955, g_267.f7), l_962), 7)) , (-7L)), 5)) & g_688[4].f1) , 0xCFCAL) , g_105[5][0][1].f1)))) , 1UL), l_906)) , l_955)), g_641)) , g_108.f7), 14)) == l_955) ^ l_932);
                l_971 ^= ((p_25 || g_640.f1) == func_55((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(func_50(l_955, l_955, l_955, (safe_rshift_func_int8_t_s_s((+(+((((l_970 > p_25) != (func_50(p_26, g_77.f1, l_955, p_25) == 0x4D0CC6D8L)) > 1L) ^ (-1L)))), 2))), p_25)) , g_804.f2), g_482)), p_25, l_955, g_688[4].f1));
                for (l_971 = 0; (l_971 != (-13)); --l_971)
                {
                    for (l_970 = 27; (l_970 < 12); l_970 = safe_sub_func_uint32_t_u_u(l_970, 9))
                    {
                        unsigned short l_994[3][6][9] = {{{0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}, {0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}, {0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}, {0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}, {0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}, {0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}}, {{0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}, {0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}, {0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}, {0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}, {0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}, {0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}}, {{0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}, {0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}, {0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}, {0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}, {0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}, {0x5598L, 0xFD5EL, 0x0902L, 65534UL, 65529UL, 65535UL, 65535UL, 1UL, 0x84EAL}}};
                        int i, j, k;
                        if (g_640.f1)
                            goto lbl_976;
                        l_977[3] = 6L;
                        g_640.f0 = ((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((p_26 , (safe_sub_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u(p_26, l_963)) < p_24) && g_105[5][0][1].f5) & (safe_add_func_uint32_t_u_u(((g_77.f3 | p_25) , (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(p_26, (g_696[0][0].f2 ^ p_26))) || l_994[0][5][1]), 0xDCL)), 0))), g_640.f5))), l_995))), l_906)), 1UL)) , l_994[0][5][1]);
                    }
                    l_977[3] = (safe_sub_func_int32_t_s_s(func_27((((((safe_lshift_func_uint8_t_u_u(0xA7L, 4)) , ((safe_mod_func_int16_t_s_s(p_26, (safe_sub_func_int8_t_s_s(p_24, (safe_add_func_uint16_t_u_u((l_955 > l_995), ((safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s(6L, l_955)), p_25)) | func_27(l_995)))))))) , l_962)) , p_23) & l_932) | g_77.f7)), 7L));
                    if (p_24)
                    {
                        return g_804.f1;
                    }
                    else
                    {
                        return g_696[0][0].f2;
                    }
                }
            }
            l_933 ^= g_105[5][0][1].f7;
        }
        if ((g_688[4].f4 >= func_35(p_25, (p_23 , g_640.f1), (safe_div_func_int32_t_s_s(0L, l_971)))))
        {
            unsigned l_1016 = 4294967295UL;
            unsigned l_1074 = 0xC855F820L;
            unsigned char l_1084[7][9][1] = {{{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}};
            int l_1149 = 0xEFD513E1L;
            int i, j, k;
            g_267.f0 = ((func_46(p_26, (((((safe_lshift_func_int16_t_s_u(1L, (safe_lshift_func_uint8_t_u_u(g_77.f5, 3)))) | g_804.f0) , l_1016) ^ g_688[4].f1) <= g_688[4].f7), (g_688[4].f7 | (g_682[3][3][0] || 0x3E0FC864L))) == 0UL) != g_267.f0);
            g_77.f0 = ((p_26 != l_970) & 249UL);
            for (p_24 = (-11); (p_24 > 57); p_24++)
            {
                unsigned short l_1026 = 0x6D01L;
                int l_1031 = 0L;
                unsigned l_1054[6];
                int l_1073 = 0x5F69D00AL;
                short l_1093 = 0x13DFL;
                int i;
                for (i = 0; i < 6; i++)
                    l_1054[i] = 0UL;
                for (g_267.f1 = 0; (g_267.f1 <= 6); g_267.f1 += 1)
                {
                    int i;
                    l_977[g_267.f1] = l_977[g_267.f1];
                    l_933 = func_46((safe_unary_minus_func_int8_t_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(0UL, (5UL != (safe_mod_func_int16_t_s_s(l_1026, (((g_267.f4 , p_24) > 4294967295UL) && (((safe_lshift_func_uint8_t_u_s((g_688[4].f3 , (safe_add_func_uint16_t_u_u(g_688[4].f6, p_24))), 7)) & p_24) && p_25))))))), g_656)))), l_977[g_267.f1], l_977[g_267.f1]);
                    for (l_1016 = 0; (l_1016 <= 3); l_1016 += 1)
                    {
                        int i, j, k;
                        l_1031 = g_74[l_1016];
                        return g_682[(l_1016 + 2)][(l_1016 + 2)][l_1016];
                    }
                }
                for (g_77.f1 = 0; (g_77.f1 <= 3); g_77.f1 += 1)
                {
                    int i;
                    l_977[3] = (safe_lshift_func_int16_t_s_s(g_74[g_77.f1], g_77.f7));
                    for (l_933 = 0; (l_933 <= 3); l_933 += 1)
                    {
                        int i, j, k;
                        g_267.f5 = (((safe_rshift_func_int16_t_s_s(g_682[(l_933 + 2)][l_933][g_77.f1], 8)) , (g_74[l_933] >= (safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_696[0][0].f6, ((((((g_482 <= g_74[l_933]) | (((!(((safe_add_func_int16_t_s_s(((!(p_23 , ((safe_add_func_int8_t_s_s(l_977[3], (-4L))) , (safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((((func_35(((g_74[g_77.f1] == 0x94AA1C26L) > g_696[0][0].f3), p_24, g_74[l_933]) || l_1031) ^ g_74[1]) && g_696[0][0].f0) & p_23) >= l_1054[3]), g_696[0][0].f1)), 0x62L)), 0x3B00EBB5L))))) >= p_23), g_682[(l_933 + 2)][l_933][g_77.f1])) <= 0xA21C943CL) , 1L)) >= l_970) >= p_26)) , l_1054[3]) || 1L) < (-6L)) && 0xA8CDCD7CL))), 1)), p_24)), l_977[4])))) , 0xFEC3B773L);
                        l_1073 &= ((0UL ^ ((safe_mod_func_int8_t_s_s(g_105[5][0][1].f4, ((p_24 , (safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(0x98916B45L, (p_24 && (safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((p_26 < (safe_sub_func_uint8_t_u_u(((g_105[5][0][1].f7 >= (safe_sub_func_uint8_t_u_u((p_25 < (safe_add_func_uint32_t_u_u(g_267.f3, 0xF9F51156L))), g_682[4][6][1]))) >= l_1016), p_24))), l_1054[3])), g_682[6][2][2]))))), g_77.f5)), g_682[5][5][3]))) , g_392))) > g_178)) == p_25);
                        l_1074 |= 0x57911082L;
                    }
                    if ((((((((safe_add_func_uint8_t_u_u(p_24, (g_105[3][6][3] , (safe_mul_func_uint8_t_u_u(func_55(l_1016, (safe_lshift_func_uint8_t_u_u(g_804.f5, 1)), l_906, func_35(l_977[3], l_1016, func_35(g_688[4].f5, ((g_267.f5 & g_71) | 0L), p_26))), g_482))))) & g_267.f3) && l_977[3]) , l_1054[3]) , g_1081[2][2]) , g_74[g_77.f1]) != 0x53F8L))
                    {
                        return g_640.f3;
                    }
                    else
                    {
                        if (p_26)
                            goto lbl_976;
                        if (p_26)
                            break;
                        if (g_682[0][4][0])
                            break;
                        g_108.f0 |= g_74[g_77.f1];
                    }
                    for (l_971 = 3; (l_971 >= 0); l_971 -= 1)
                    {
                        short l_1091 = 0xE028L;
                        l_933 = (safe_sub_func_int8_t_s_s(g_1081[2][2].f2, l_1084[5][3][0]));
                        l_1093 = (func_35((safe_sub_func_uint16_t_u_u(l_1074, l_970)), ((safe_mul_func_uint16_t_u_u((p_26 < (!(p_24 ^ 0x52B17F3AL))), (l_933 || (g_74[g_77.f1] | p_24)))) , ((safe_div_func_uint32_t_u_u(((((g_641 , l_1091) <= p_26) , 4L) > g_1092), g_77.f5)) | 0xC3L)), l_932) & g_696[0][0].f7);
                        l_977[3] = (safe_rshift_func_int16_t_s_s(((g_105[5][0][1].f6 | ((safe_sub_func_int8_t_s_s(func_35(l_1074, (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((l_1016 == (safe_mod_func_int8_t_s_s(((((((g_696[0][0].f0 | g_696[0][0].f0) ^ g_267.f0) ^ (0xC3L <= p_24)) & g_1081[2][2].f7) != 0x808E0E36L) > g_105[5][0][1].f3), p_26))) , p_25), 0xC8E31BCDL)), 0xA1L)), p_23)), 0x74562188L)), l_932), p_25)) != l_1084[1][4][0])) | p_23), g_688[4].f7));
                        l_977[3] = 0L;
                    }
                }
                if (g_683)
                    goto lbl_976;
                l_1031 = l_1073;
            }
            for (g_482 = 0; (g_482 != 13); g_482++)
            {
                unsigned char l_1134 = 255UL;
                short l_1141 = 1L;
                int l_1163 = 0x3B493353L;
                if ((((safe_rshift_func_int16_t_s_u((!(l_977[3] == g_688[4].f5)), 8)) < ((func_35(((!(safe_add_func_int32_t_s_s(((func_50(p_24, g_77.f4, ((((safe_sub_func_uint16_t_u_u(g_267.f3, 8UL)) ^ l_932) != (safe_rshift_func_int8_t_s_u((~(safe_mul_func_int8_t_s_s((p_26 && (safe_mod_func_uint8_t_u_u(0xBFL, 0xAFL))), p_26))), p_24))) , 0L), l_1074) , p_24) < p_24), 0xA8BCED5FL))) < p_26), p_23, l_933) <= p_24) ^ g_1122)) > p_25))
                {
                    int l_1127[6] = {0x51AFCF93L, 0x5A62FC74L, 0x51AFCF93L, 0x5A62FC74L, 0x51AFCF93L, 0x5A62FC74L};
                    int i;
                    g_77.f0 = ((safe_mod_func_int16_t_s_s(func_46((((((l_1127[3] , 0x1FA5L) ^ (safe_mul_func_int16_t_s_s(0L, func_55((safe_mul_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(((l_1134 , func_55((safe_div_func_uint8_t_u_u(((g_640 , ((l_1127[5] >= 0xE9A3L) ^ p_25)) || ((safe_lshift_func_int16_t_s_s((+(-1L)), 5)) < l_1141)), l_933)), p_23, p_23, g_105[5][0][1].f5)) , g_77.f1), l_1141)) < l_1127[3]) == g_696[0][0].f0), 0UL)), g_1081[2][2].f0, g_640.f1, g_696[0][0].f3)))) <= l_970) | g_178) , p_24), l_1127[3], p_24), g_7)) >= l_932);
                    l_1149 = ((((-7L) == (g_1142 , ((safe_add_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((l_1127[2] >= l_932), l_1127[0])) & g_688[4].f7) < ((-7L) != (-1L))), (((safe_rshift_func_uint8_t_u_s((((((0xFD39L < g_688[4].f2) == g_696[0][0].f0) & l_933) <= l_971) || p_23), 5)) ^ g_696[0][0].f0) | l_970))) & g_640.f1))) == 0x86L) , l_1084[5][6][0]);
                    if (g_7)
                        continue;
                }
                else
                {
                    const int l_1181[4][3] = {{1L, 0xCC327D53L, 1L}, {1L, 0xCC327D53L, 1L}, {1L, 0xCC327D53L, 1L}, {1L, 0xCC327D53L, 1L}};
                    int i, j;
                    for (g_77.f1 = 0; (g_77.f1 <= 4); g_77.f1 += 1)
                    {
                        return g_1142.f7;
                    }
                    l_1163 = ((((((0UL != g_1152) >= (!(p_23 != (safe_mod_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(l_1134, (safe_mul_func_int16_t_s_s((((g_696[0][0].f0 > (func_35(p_26, p_25, l_932) , 0xD483L)) || 0x87A1D04CL) , l_933), 1L)))), p_26)) || l_1149) , p_23), g_267.f6)) < l_932), g_105[5][0][1].f3))))) < p_24) == p_26) == (-7L)) | l_1141);
                    l_1163 &= (p_26 != (l_933 == ((l_933 && (l_1016 == ((((safe_add_func_uint8_t_u_u((((((((safe_rshift_func_int16_t_s_u(l_1170, ((p_26 , (safe_rshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(p_25, l_932)) || ((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(p_26, 65530UL)), l_1181[0][0])), p_26)) > g_804.f0)), 3))) & g_71))) | l_977[1]) && p_25) , 4294967295UL) >= g_1081[2][2].f3) , (-1L)) > g_105[5][0][1].f0), 0x5EL)) < g_77.f5) ^ 0x5B6A7038L) == g_696[0][0].f5))) <= 1L)));
                }
                l_977[1] = l_1134;
                g_688[4].f5 = g_77.f3;
            }
        }
        else
        {
            unsigned l_1205 = 4294967295UL;
            int l_1294 = (-6L);
lbl_1265:
            for (l_1170 = (-24); (l_1170 < 53); l_1170 = safe_add_func_uint16_t_u_u(l_1170, 5))
            {
                unsigned l_1204[8][10] = {{0x7F1541D6L, 0xAFEEAAA1L, 0xA6D5595EL, 4294967292UL, 0x24B095FEL, 0UL, 0xF0EB0CB3L, 0xF0EB0CB3L, 0UL, 0x24B095FEL}, {0x7F1541D6L, 0xAFEEAAA1L, 0xA6D5595EL, 4294967292UL, 0x24B095FEL, 0UL, 0xF0EB0CB3L, 0xF0EB0CB3L, 0UL, 0x24B095FEL}, {0x7F1541D6L, 0xAFEEAAA1L, 0xA6D5595EL, 4294967292UL, 0x24B095FEL, 0UL, 0xF0EB0CB3L, 0xF0EB0CB3L, 0UL, 0x24B095FEL}, {0x7F1541D6L, 0xAFEEAAA1L, 0xA6D5595EL, 4294967292UL, 0x24B095FEL, 0UL, 0xF0EB0CB3L, 0xF0EB0CB3L, 0UL, 0x24B095FEL}, {0x7F1541D6L, 0xAFEEAAA1L, 0xA6D5595EL, 4294967292UL, 0x24B095FEL, 0UL, 0xF0EB0CB3L, 0xF0EB0CB3L, 0UL, 0x24B095FEL}, {0x7F1541D6L, 0xAFEEAAA1L, 0xA6D5595EL, 4294967292UL, 0x24B095FEL, 0UL, 0xF0EB0CB3L, 0xF0EB0CB3L, 0UL, 0x24B095FEL}, {0x7F1541D6L, 0xAFEEAAA1L, 0xA6D5595EL, 4294967292UL, 0x24B095FEL, 0UL, 0xF0EB0CB3L, 0xF0EB0CB3L, 0UL, 0x24B095FEL}, {0x7F1541D6L, 0xAFEEAAA1L, 0xA6D5595EL, 4294967292UL, 0x24B095FEL, 0UL, 0xF0EB0CB3L, 0xF0EB0CB3L, 0UL, 0x24B095FEL}};
                unsigned l_1213 = 1UL;
                int i, j;
                if (g_641)
                    break;
                l_1205 = (safe_sub_func_int16_t_s_s(0xD5BBL, ((safe_mod_func_int8_t_s_s(p_26, (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((l_1170 >= (g_640.f2 == p_25)), ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((p_24 > (~(safe_div_func_uint16_t_u_u(g_71, (safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(0x30EAF027L, ((safe_div_func_int16_t_s_s(0x36A4L, p_26)) == 4UL))), p_26)))))), l_932)), l_1204[3][1])) | 4294967292UL))) && 65528UL), l_932)))) || g_688[4].f6)));
                g_688[4].f0 = (safe_mod_func_uint32_t_u_u(g_178, func_35(l_1205, (((((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((l_933 == g_392), 4)), func_55(((func_35(p_25, (g_696[0][0] , ((func_55((func_55(g_1081[2][2].f4, func_35(p_23, func_35(l_977[3], l_1205, p_26), g_105[5][0][1].f0), g_267.f7, l_1212) , l_1213), g_105[5][0][1].f5, g_1081[2][2].f0, l_1205) != p_26) || l_933)), g_640.f1) , 0xC737L) < l_977[0]), p_23, p_26, p_25))) <= g_1081[2][2].f5) | p_25) <= 0UL) == l_1205) == 0x88L) , g_1142.f1), g_77.f3)));
                for (l_970 = 0; (l_970 <= 14); l_970 = safe_add_func_uint16_t_u_u(l_970, 1))
                {
                    g_267.f0 ^= (safe_mul_func_uint16_t_u_u(func_46(((0UL & (safe_rshift_func_int8_t_s_u((((safe_sub_func_int32_t_s_s(func_55(l_933, l_971, (safe_mul_func_int8_t_s_s(func_55((g_1081[2][2].f1 ^ ((safe_mul_func_int16_t_s_s(1L, ((l_1205 && ((p_24 != p_24) & (((p_24 || 4UL) < g_105[5][0][1].f7) == g_108.f2))) <= 0xE566L))) , 0x92L)), g_77.f5, p_24, g_656), l_933)), g_1081[2][2].f3), 4UL)) , 3L) , l_1212), g_267.f7))) , l_1205), g_1142.f7, p_25), g_105[5][0][1].f1));
                }
            }
            for (g_683 = 0; (g_683 <= 4); g_683 += 1)
            {
                int l_1247 = (-1L);
                for (l_970 = 0; (l_970 <= 3); l_970 += 1)
                {
                    unsigned l_1264 = 0x3C06DD5EL;
                    int i;
                    for (g_267.f1 = 0; (g_267.f1 <= 4); g_267.f1 += 1)
                    {
                        int i, j, k;
                        g_1142.f5 = (g_74[g_267.f1] || ((g_682[g_683][l_970][l_970] != ((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((-1L), g_1142.f1)) ^ func_35(l_1205, func_35(p_24, p_23, (safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(l_1205, g_1122)), p_24)), p_23)), 0xDCL))), g_482)), p_23)), p_23)), p_24)) != p_25)) == g_77.f0));
                        l_933 = g_267.f6;
                        if (g_77.f3)
                            goto lbl_1242;
                        return g_1081[2][2].f2;
                    }
                    if ((safe_add_func_uint8_t_u_u(g_74[l_970], (-5L))))
                    {
                        int l_1248 = 0x72313CDEL;
                        int i;
                        l_1247 = ((g_74[g_683] > 0x42L) , (safe_lshift_func_uint16_t_u_u(g_682[4][3][3], 1)));
                        if (p_26)
                            continue;
                        if (g_74[l_970])
                            continue;
                        l_1248 = 8L;
                    }
                    else
                    {
                        short l_1249[5][5][3] = {{{0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}}, {{0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}}, {{0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}}, {{0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}}, {{0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}, {0x6411L, 0xA987L, 1L}}};
                        int i, j, k;
                        g_1142.f0 = (!l_1249[3][0][2]);
                        l_1247 = p_23;
                    }
                    g_267.f5 = (g_267.f4 , (safe_div_func_uint32_t_u_u(func_35((func_46((safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u((g_1256 , ((-6L) ^ ((safe_sub_func_uint16_t_u_u(p_23, (~(p_23 != (safe_lshift_func_int8_t_s_u((g_1256.f5 , p_26), (((((0UL > p_24) , g_74[l_970]) == p_23) , l_1247) , p_23))))))) <= l_1261))), p_23)) , p_24) & p_23), g_71)), p_26, l_977[3]) , 0xF633DBECL), g_688[4].f3, l_977[3]), 0x2B797FF7L)));
                    for (l_1212 = 0; (l_1212 <= 3); l_1212 += 1)
                    {
                        int i, j, k;
                        g_804.f0 = ((g_682[l_1212][(g_683 + 1)][l_1212] , (g_74[l_970] != g_1142.f7)) < (safe_mod_func_int16_t_s_s((l_1264 ^ func_46(((((p_25 ^ (((func_35(p_25, p_24, ((((p_24 == (0x8CL ^ 0xB9L)) , l_1247) | l_977[5]) , g_640.f4)) > 0UL) , 65534UL) >= 0x9C0DL)) >= 0xE4AE3BEAL) & 0x522CB581L) | 0xF129L), g_696[0][0].f5, l_1247)), p_26)));
                        g_267.f5 &= func_46(l_1264, g_688[4].f4, g_640.f0);
                    }
                }
                if (l_1212)
                    goto lbl_1265;
                for (l_970 = 0; (l_970 <= 4); l_970 += 1)
                {
                    int i;
                    if (l_977[(l_970 + 2)])
                    {
                        int i;
                        l_977[(g_683 + 1)] = 0xCD3C515CL;
                        l_977[(g_683 + 2)] = func_46(func_46(l_977[(l_970 + 1)], g_1142.f6, (safe_mod_func_uint8_t_u_u(l_1261, g_1256.f7))), ((l_977[(l_970 + 2)] != (((((((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u(0UL, l_1212)) , (safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(0xBEBCL, 15)), 0UL)), l_977[(l_970 + 2)])), p_25))), 6)) != 1L), g_1142.f0)) == 0x78L) != (-7L)) != g_77.f7) , g_105[5][0][1].f0) ^ 0xFAAD2B58L) && l_977[(g_683 + 1)])) , g_640.f0), l_1261);
                    }
                    else
                    {
                        if (l_1212)
                            break;
                        if (g_641)
                            break;
                        if (p_23)
                            continue;
                    }
                }
            }
            for (g_640.f1 = 29; (g_640.f1 < 9); g_640.f1--)
            {
                l_1294 = ((g_640.f5 == (-2L)) , (((safe_sub_func_uint8_t_u_u(func_46(g_1142.f7, (0x78L == (+(safe_mod_func_uint16_t_u_u(g_105[5][0][1].f3, ((safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_688[4].f1, ((g_105[5][0][1].f3 >= ((g_1292 ^ (func_55(l_977[5], g_392, g_1256.f4, g_267.f3) ^ p_23)) > g_696[0][0].f1)) < p_25))), g_1256.f0)) ^ p_24))))), l_1293), (-5L))) == l_1205) & 0UL));
                g_1122 = p_25;
            }
            l_933 = (p_26 , g_1256.f6);
        }
    }
    else
    {
        int l_1310 = 1L;
        unsigned l_1311 = 0x0BC2D57BL;
        int l_1330[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1330[i] = 1L;
        l_977[1] = ((g_77.f5 >= p_23) || ((safe_add_func_uint32_t_u_u(p_25, (safe_add_func_uint32_t_u_u((p_26 == g_77.f7), (safe_rshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((((g_1309[3] , 0x87L) < (!l_1310)) & (((l_1310 == l_971) || l_977[3]) < 65535UL)) , l_1310) , g_1256.f1), 0UL)), l_1311)), 0xF285L)) | g_688[4].f1), l_1311)))))) || p_25));
        g_688[4].f0 &= l_971;
        l_971 ^= ((((safe_rshift_func_int8_t_s_s(0xAAL, 6)) > ((((l_970 != ((safe_div_func_int8_t_s_s(func_50(((safe_rshift_func_int8_t_s_u(l_1318, (((safe_sub_func_int8_t_s_s((249UL <= func_27(p_24)), ((l_1310 || (safe_mul_func_int8_t_s_s(l_1311, g_682[2][4][2]))) , 5L))) >= l_977[3]) <= g_696[0][0].f7))) , 0UL), g_640.f3, g_1309[3].f5, l_1311), p_24)) || p_26)) & l_970) | p_24) >= p_23)) , l_1311) | 1UL);
        l_1330[1] = (func_35(((((0x59L != (+func_27(l_970))) , (+((func_46(g_77.f6, (safe_mul_func_int8_t_s_s(0xC7L, (safe_sub_func_uint32_t_u_u(((((l_1310 != ((((safe_div_func_uint8_t_u_u(p_25, g_1256.f3)) == p_24) > g_1142.f1) & l_970)) , g_1256.f7) < 1L) || g_267.f7), 3UL)))), l_1329) | g_1256.f7) && 0UL))) ^ p_25) < p_24), g_77.f7, p_25) | l_1311);
    }
    if (((func_35((g_7 , (func_46(p_26, l_1329, (g_696[0][0].f6 == (safe_sub_func_uint8_t_u_u(g_682[2][4][2], (safe_rshift_func_uint16_t_u_s(g_482, (((g_105[5][0][1].f3 >= (safe_rshift_func_uint16_t_u_s(p_24, 6))) && 0L) != p_25))))))) ^ p_25)), p_23, p_24) & l_906) && (-4L)))
    {
        int l_1341 = (-1L);
        int l_1375[3][6] = {{0x13231AE8L, 0L, 0L, 0L, 0x13231AE8L, 1L}, {0x13231AE8L, 0L, 0L, 0L, 0x13231AE8L, 1L}, {0x13231AE8L, 0L, 0L, 0L, 0x13231AE8L, 1L}};
        const unsigned char l_1390[2][5][4] = {{{9UL, 8UL, 9UL, 8UL}, {9UL, 8UL, 9UL, 8UL}, {9UL, 8UL, 9UL, 8UL}, {9UL, 8UL, 9UL, 8UL}, {9UL, 8UL, 9UL, 8UL}}, {{9UL, 8UL, 9UL, 8UL}, {9UL, 8UL, 9UL, 8UL}, {9UL, 8UL, 9UL, 8UL}, {9UL, 8UL, 9UL, 8UL}, {9UL, 8UL, 9UL, 8UL}}};
        int i, j, k;
        if (((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(p_25, ((-2L) ^ l_1341))), l_970)) , ((+(+l_1341)) == ((((l_1341 && func_50((safe_mod_func_int8_t_s_s((func_46(g_1122, (safe_lshift_func_uint16_t_u_s(g_77.f1, 7)), p_26) && l_970), g_1081[2][2].f0)), l_1318, l_1341, p_25)) != p_25) <= 0x7833L) < g_656))))
        {
            unsigned l_1364[3][10][1] = {{{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}};
            int i, j, k;
            g_1081[2][2].f0 = 0x701A1A79L;
            l_1364[1][8][0] |= func_27(((safe_mul_func_int8_t_s_s((g_1348 , (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(0xA3L)), (safe_mod_func_int16_t_s_s(func_50((~(safe_rshift_func_uint16_t_u_s((p_25 <= p_26), ((safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((p_24 || 6UL) , 0x3EA2L), g_267.f4)), (((0L > g_105[5][0][1].f1) ^ 0UL) && 5UL))) , (-8L)), g_1309[3].f0)) | g_688[4].f1)))), l_1341, g_1348.f0, g_267.f0), g_640.f0)))), g_1152))), g_1256.f1)) , (-9L)));
        }
        else
        {
            unsigned l_1367[7][8] = {{4294967289UL, 0UL, 1UL, 7UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL}, {4294967289UL, 0UL, 1UL, 7UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL}, {4294967289UL, 0UL, 1UL, 7UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL}, {4294967289UL, 0UL, 1UL, 7UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL}, {4294967289UL, 0UL, 1UL, 7UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL}, {4294967289UL, 0UL, 1UL, 7UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL}, {4294967289UL, 0UL, 1UL, 7UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL}};
            int i, j;
            g_267.f0 ^= l_1329;
            if (g_1292)
                goto lbl_1368;
lbl_1368:
            g_804.f0 = (safe_mod_func_int8_t_s_s(l_1367[1][1], 0xEEL));
            g_105[5][0][1].f0 = (safe_div_func_uint16_t_u_u(p_26, (g_688[4].f1 & p_26)));
            g_804.f5 = l_906;
        }
        l_1341 = (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((func_27(g_1081[2][2].f6) & g_696[0][0].f1) && p_23), g_1152)), l_1341));
        if (((l_1375[2][2] && (g_688[4].f2 , 0L)) >= (func_35(p_25, p_23, g_683) | ((~l_1170) >= ((((safe_mod_func_int8_t_s_s(func_35(p_24, p_24, g_71), 1L)) | 0x59L) ^ l_1375[2][2]) < 0x9234L)))))
        {
            int l_1399 = 0x8648066CL;
            g_77.f0 = ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s(func_46(l_1375[2][2], l_971, (g_1309[3].f1 || p_25)), 8)) && ((l_1375[2][2] < (p_25 <= p_23)) & (g_1081[2][2].f3 != g_105[5][0][1].f7))), 12)) <= p_23);
            g_640.f0 = ((~4294967288UL) <= (safe_sub_func_int8_t_s_s(((0xB0L && (((((safe_mul_func_uint16_t_u_u((p_24 , (((!1L) , (p_25 || (safe_div_func_int8_t_s_s((func_50((safe_lshift_func_int16_t_s_s(g_1256.f6, 1)), l_1390[0][4][3], (p_25 == (safe_mul_func_uint8_t_u_u(l_1390[1][1][2], 7L))), l_1341) , l_971), p_24)))) , g_77.f2)), 0x24D2L)) || g_696[0][0].f2) && 0x2E1674CCL) && g_77.f1) >= l_1170)) || p_25), g_640.f0)));
            g_108.f0 = ((((safe_add_func_int8_t_s_s(((((func_35(g_1309[3].f1, g_1081[2][2].f4, (g_688[4].f7 <= (-5L))) < g_1348.f1) , (0x16CAL > ((((safe_mul_func_uint16_t_u_u((((g_696[0][0].f1 , (safe_add_func_uint32_t_u_u(((func_46(l_1399, l_906, p_26) > g_105[5][0][1].f5) != g_1309[3].f0), p_24))) ^ 0x8F5AL) <= g_640.f3), 9L)) , g_1348.f3) || l_970) == 1UL))) || l_1390[0][4][3]) > 0x8D47L), g_688[4].f3)) & p_23) ^ 0x4125EA9AL) && 1UL);
            g_267.f0 = l_1318;
        }
        else
        {
            l_971 |= l_1318;
        }
    }
    else
    {
        unsigned l_1417 = 0UL;
        int l_1418 = 0xF0770D74L;
        g_804.f0 = (l_971 && ((safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s((((g_640.f7 != (safe_mod_func_int16_t_s_s(func_50(func_46((g_1406 , (safe_mul_func_int8_t_s_s(0x3CL, (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((0x6F70E618L && ((0x9DL != g_77.f1) < ((safe_mul_func_uint16_t_u_u((l_977[4] > ((safe_add_func_uint8_t_u_u(g_267.f1, l_1417)) == l_1318)), g_267.f0)) <= g_1081[2][2].f7))), p_25)), l_1417))))), g_1122, p_26), g_77.f5, p_26, l_1329), 0xD753L))) != 252UL) || g_688[4].f6), l_1170)) <= g_696[0][0].f3), g_105[5][0][1].f7)) < 1L));
        l_977[3] ^= l_906;
        l_1418 = (g_105[5][0][1].f5 && p_24);
    }
    return l_1170;
}







static unsigned char func_27(short p_28)
{
    char l_39 = 0x05L;
    int l_41[5];
    unsigned short l_63 = 65527UL;
    unsigned char l_718 = 0x3AL;
    unsigned l_799 = 0UL;
    unsigned char l_854 = 1UL;
    char l_864 = 8L;
    int i;
    for (i = 0; i < 5; i++)
        l_41[i] = 5L;
lbl_743:
    l_41[0] &= (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(func_35(l_39, g_7, g_7), 5)), 5)), 1L));
    for (p_28 = 0; (p_28 == (-11)); p_28 = safe_sub_func_uint32_t_u_u(p_28, 6))
    {
        short l_60[5] = {0xDF20L, (-9L), 0xDF20L, (-9L), 0xDF20L};
        int l_730 = 0x58213924L;
        int l_739 = 0x72B30734L;
        int l_740 = 0x452EC9B6L;
        unsigned short l_760 = 0xFD21L;
        unsigned short l_820 = 0xD95DL;
        char l_887[2];
        int i;
        for (i = 0; i < 2; i++)
            l_887[i] = 0xB1L;
        l_730 = (safe_add_func_uint8_t_u_u((((func_46(func_50((0x0F18L || g_7), func_55((0xE0L == g_7), l_60[3], l_41[0], ((safe_rshift_func_int8_t_s_s((((l_39 && (g_7 & l_63)) && l_60[2]) , l_60[3]), 3)) && l_63)), l_60[1], l_39), p_28, l_718) > l_41[0]) >= g_640.f7) >= l_60[4]), 0x66L));
        if (l_718)
            continue;
        l_730 = func_55(p_28, ((-10L) & l_60[3]), g_77.f4, g_696[0][0].f7);
        if (((func_50(p_28, (safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(func_55(l_730, (safe_mod_func_int8_t_s_s(p_28, p_28)), g_267.f4, p_28), 0xE0L)) >= ((0x32L && 0x6FL) && g_688[4].f1)), p_28)), 0x54L)), l_730, l_739) , g_178) >= g_77.f7))
        {
            l_739 = g_105[5][0][1].f2;
            return l_740;
        }
        else
        {
            int l_784 = 2L;
            char l_853 = 0x98L;
            for (g_267.f1 = (-12); (g_267.f1 >= 51); ++g_267.f1)
            {
                if (l_718)
                    goto lbl_743;
                if (g_108.f5)
                    continue;
            }
            for (g_640.f1 = 0; (g_640.f1 == 34); ++g_640.f1)
            {
                return l_718;
            }
            for (l_739 = (-8); (l_739 <= (-25)); l_739 = safe_sub_func_int16_t_s_s(l_739, 8))
            {
                unsigned l_748 = 0x5EF7C6BEL;
                int l_757[3][1][10] = {{{0xD44D46BFL, 0xC461C1F8L, 0xD44D46BFL, 0xC461C1F8L, 0xD44D46BFL, 0xC461C1F8L, 0xD44D46BFL, 0xC461C1F8L, 0xD44D46BFL, 0xC461C1F8L}}, {{0xD44D46BFL, 0xC461C1F8L, 0xD44D46BFL, 0xC461C1F8L, 0xD44D46BFL, 0xC461C1F8L, 0xD44D46BFL, 0xC461C1F8L, 0xD44D46BFL, 0xC461C1F8L}}, {{0xD44D46BFL, 0xC461C1F8L, 0xD44D46BFL, 0xC461C1F8L, 0xD44D46BFL, 0xC461C1F8L, 0xD44D46BFL, 0xC461C1F8L, 0xD44D46BFL, 0xC461C1F8L}}};
                int i, j, k;
                for (g_482 = 3; (g_482 >= 0); g_482 -= 1)
                {
                    int i;
                    g_688[4].f0 = g_74[(g_482 + 1)];
                    if (g_682[5][2][3])
                        continue;
                }
                l_757[1][0][8] = (((l_748 || (-1L)) & ((0x47L || l_748) , ((safe_mod_func_uint16_t_u_u(((func_35(l_41[3], (safe_div_func_int8_t_s_s((0xAB9EL < func_35(g_108.f4, (safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(g_77.f3, g_77.f5)), 9)), l_748)), l_730)), g_267.f5) <= 0xC0AAL) , p_28), g_688[4].f5)) ^ 0x60DE29E3L))) < 3UL);
                if (l_63)
                {
                    for (g_683 = 0; (g_683 <= 2); ++g_683)
                    {
                        g_267.f0 ^= p_28;
                        if (g_656)
                            break;
                        l_730 = (g_392 , l_760);
                        if (g_108.f3)
                            break;
                    }
                }
                else
                {
                    int l_775 = 0x1BF22528L;
                    int l_782 = 0x312C5FF0L;
                    short l_783 = 0xF82DL;
                    for (g_656 = 3; (g_656 >= 0); g_656 -= 1)
                    {
                        return p_28;
                    }
                    l_784 = func_55(((safe_div_func_int32_t_s_s((((safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((p_28 , (((safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s((p_28 , g_392), p_28)), l_775)) | (g_105[5][0][1].f5 == (safe_add_func_int8_t_s_s(func_35(((safe_mul_func_uint16_t_u_u((~g_482), (((safe_mod_func_int32_t_s_s((p_28 <= (func_46(p_28, g_108.f1, p_28) <= 255UL)), 0xC86604E8L)) && g_640.f2) >= l_775))) || g_696[0][0].f7), g_688[4].f3, g_267.f3), p_28)))) != l_782)), l_783)), 8L)), 65535UL)) == 0x11061AC6L) , p_28), 1UL)) | 0x46L), l_782, g_688[4].f5, g_7);
                    if (((g_682[3][1][1] || (safe_lshift_func_uint8_t_u_u(l_775, (safe_add_func_int32_t_s_s(((func_55(((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(l_760, (l_784 , ((func_55((p_28 != (~func_55(g_105[5][0][1].f4, (l_757[1][0][8] , (l_757[1][0][9] == ((safe_mul_func_int16_t_s_s(g_105[5][0][1].f0, p_28)) != l_799))), p_28, l_730))), l_757[1][0][8], l_784, l_757[1][0][8]) < g_688[4].f7) < g_267.f0)))), p_28)), 0xCBL)), p_28)) == l_784), g_178, g_392, l_757[1][0][8]) & g_105[5][0][1].f3) > 0xF6F9L), l_783))))) , 0x08A5A2E0L))
                    {
                        unsigned short l_809[6][3][10] = {{{0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}, {0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}, {0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}}, {{0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}, {0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}, {0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}}, {{0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}, {0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}, {0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}}, {{0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}, {0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}, {0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}}, {{0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}, {0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}, {0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}}, {{0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}, {0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}, {0x9243L, 1UL, 1UL, 65535UL, 0xBEF2L, 0xA591L, 0xC9CEL, 0xDA31L, 0x6389L, 0x24EBL}}};
                        int i, j, k;
                        g_688[4].f0 = l_775;
                        g_688[4].f0 = (safe_div_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((g_804 , (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((func_55((p_28 , (func_55((p_28 & ((((0x9A31L && 0L) == (-5L)) , (+g_640.f4)) == g_640.f0)), ((func_35(g_640.f7, l_784, g_640.f7) > 0UL) , g_683), p_28, l_809[3][1][1]) ^ 4294967295UL)), p_28, p_28, p_28) | 3UL) < (-5L)), p_28)), l_775))) >= l_809[3][1][1]), l_775)), g_696[0][0].f5));
                        g_105[5][0][1].f5 = (-1L);
                    }
                    else
                    {
                        unsigned char l_815[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_815[i] = 0xC8L;
                        l_757[1][0][4] = (0x1CL ^ func_35(((safe_sub_func_int8_t_s_s(g_812, (safe_lshift_func_uint8_t_u_u(func_35(l_784, p_28, p_28), (l_799 || (g_74[2] , l_815[6])))))) != g_656), p_28, g_640.f0));
                        g_696[0][0].f5 = (safe_mul_func_uint16_t_u_u((p_28 | l_757[1][0][0]), g_77.f4));
                        l_41[3] = (safe_sub_func_int32_t_s_s(g_804.f4, ((func_35(func_35(l_784, (g_482 > ((l_820 || ((safe_add_func_uint32_t_u_u(0xC76081D6L, p_28)) || (l_748 || (g_682[2][4][2] | g_696[0][0].f0)))) , g_641)), g_105[5][0][1].f0), p_28, g_682[2][4][2]) , 0xEAL) >= p_28)));
                        l_740 = (((safe_lshift_func_uint16_t_u_s((p_28 < (1UL != (g_108.f2 >= p_28))), 1)) || ((safe_add_func_int16_t_s_s((0x8BE8L == (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(func_35((g_108.f7 , p_28), p_28, func_35(l_757[2][0][9], p_28, l_784)), g_105[5][0][1].f7)), l_815[6]))), g_683)) == g_688[4].f5)) & p_28);
                    }
                    l_41[0] &= ((safe_rshift_func_uint16_t_u_s(p_28, 0)) , (safe_lshift_func_uint16_t_u_s(((((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(func_46((p_28 , 0UL), (safe_mod_func_int8_t_s_s((!(func_35(p_28, (g_804.f6 == (safe_add_func_uint32_t_u_u((p_28 , (safe_sub_func_uint8_t_u_u(func_35(p_28, func_35((((((safe_add_func_int16_t_s_s((~p_28), (safe_lshift_func_int8_t_s_u(0x54L, 4)))) >= g_640.f5) , l_739) && l_784) > 0x09L), p_28, g_392), g_105[5][0][1].f0), 0x9AL))), (-1L)))), l_853) , g_696[0][0].f3)), l_782)), g_640.f5), 7)), g_482)), l_760)), l_740)) | 0L) , l_784) && l_854), p_28)));
                }
                for (l_63 = 0; (l_63 != 35); l_63++)
                {
                    int l_863 = 0xE983E388L;
                    l_864 ^= (safe_rshift_func_uint16_t_u_u(func_50(g_688[4].f4, (l_730 , l_757[1][0][8]), (l_853 , l_757[0][0][3]), (g_267.f7 , l_757[1][0][8])), (safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(((l_863 <= g_640.f7) < g_682[2][4][2]), l_748)) , 0x812FL), l_863))));
                    g_105[5][0][1].f5 = p_28;
                    l_757[1][0][4] &= (safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(p_28, p_28)) >= ((((safe_rshift_func_uint16_t_u_u(g_640.f0, 8)) != (((g_682[4][0][1] == (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(g_108.f3, 3L)) != ((l_863 , (0x7C5AL < (safe_sub_func_int16_t_s_s(g_640.f3, g_77.f7)))) , 0xCB96L)), 7UL)), g_105[5][0][1].f0)), p_28))) ^ l_739) | g_688[4].f0)) && l_887[0]) >= (-6L))), l_863)), p_28)) , g_77.f0), l_863)), 2));
                }
            }
            if (p_28)
            {
                unsigned char l_902 = 0x9AL;
                for (g_683 = 0; (g_683 <= 4); g_683 += 1)
                {
                    int i;
                    g_267.f5 = ((((safe_rshift_func_uint16_t_u_s(((((safe_add_func_uint32_t_u_u(func_55((safe_lshift_func_int16_t_s_u((l_60[g_683] | func_55(g_108.f7, g_105[5][0][1].f7, l_39, ((0UL & ((1L != (p_28 > (!((safe_mul_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((0xBB8FL | func_35(((-8L) && (-1L)), p_28, l_887[0])), l_60[g_683])), p_28)) | g_640.f0), 65528UL)) , g_77.f1)))) , g_688[4].f0)) >= 65532UL))), g_77.f3)), g_640.f1, p_28, g_77.f1), 0xF11794BFL)) ^ 0UL) ^ g_105[5][0][1].f3) , l_60[3]), l_41[0])) , 0x7D27L) & l_902) , g_640.f0);
                }
            }
            else
            {
                return p_28;
            }
        }
    }
    l_41[0] = 0x465A8E1FL;
    return l_854;
}







static char func_35(unsigned p_36, unsigned char p_37, unsigned short p_38)
{
    unsigned char l_40[2];
    int i;
    for (i = 0; i < 2; i++)
        l_40[i] = 0x69L;
    return l_40[1];
}







static char func_46(unsigned char p_47, char p_48, char p_49)
{
    int l_719 = (-1L);
    l_719 |= g_108.f5;
    for (g_178 = 0; (g_178 <= 4); g_178 += 1)
    {
        int i;
        g_688[4].f0 = (safe_mod_func_uint32_t_u_u(func_35(g_74[g_178], (g_640.f4 , (g_688[4].f5 ^ (safe_div_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u(l_719, l_719)) <= (safe_div_func_uint32_t_u_u(g_696[0][0].f1, (safe_mod_func_int8_t_s_s(g_683, 246UL))))) && (+l_719)), p_49)))), g_640.f0), p_49));
        return g_267.f6;
    }
    return p_48;
}







static unsigned char func_50(unsigned short p_51, const unsigned p_52, int p_53, unsigned short p_54)
{
    int l_251 = 0x5F0D24C4L;
    unsigned l_259 = 0x6B8BE3C6L;
    short l_345 = 0x601AL;
    int l_352 = 0x4A5D47B9L;
    if ((safe_lshift_func_uint16_t_u_s(0x5413L, 0)))
    {
        int l_234[2];
        int l_235 = 4L;
        char l_239[2];
        unsigned l_321 = 0xF0ABED83L;
        int l_338 = 0x5948F3D5L;
        unsigned short l_483 = 0xE796L;
        unsigned short l_592 = 0x784BL;
        char l_642 = 1L;
        int i;
        for (i = 0; i < 2; i++)
            l_234[i] = 0xB43E1316L;
        for (i = 0; i < 2; i++)
            l_239[i] = 8L;
lbl_606:
        for (g_178 = 0; (g_178 != 38); g_178++)
        {
            g_105[5][0][1].f5 &= g_105[5][0][1].f0;
            l_235 = l_234[0];
        }
        if (g_105[5][0][1].f5)
        {
            char l_238 = 0x0EL;
            char l_242 = (-1L);
            const char l_337 = 0xB3L;
            g_108.f5 = (safe_rshift_func_uint16_t_u_s(func_55(l_238, l_234[0], g_77.f0, l_239[0]), 12));
            for (p_54 = 0; (p_54 > 16); ++p_54)
            {
                unsigned char l_256 = 254UL;
                int l_292[7][4][8] = {{{1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}}, {{1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}}, {{1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}}, {{1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}}, {{1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}}, {{1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}}, {{1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}, {1L, 0xE04C18D0L, 0L, 0x68CE296EL, 0L, 0xE04C18D0L, 1L, 0xB70AA4EBL}}};
                int i, j, k;
                for (p_51 = 1; (p_51 <= 4); p_51 += 1)
                {
                    int i;
                    return g_74[p_51];
                }
                if (l_242)
                    continue;
                for (g_77.f1 = 0; (g_77.f1 <= 4); g_77.f1 += 1)
                {
                    int i;
                    l_259 = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint8_t_u_s(((g_74[g_77.f1] <= ((((func_35(l_242, l_251, ((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(p_53, l_256)), 0)) , func_35(((safe_sub_func_uint32_t_u_u(l_256, (((g_74[g_77.f1] , (func_35(g_108.f4, p_54, l_256) ^ p_54)) < 0x97L) , 0x6A42E51AL))) , g_77.f0), p_53, g_105[5][0][1].f0))) && l_242) < g_105[5][0][1].f7) | l_256) & g_105[5][0][1].f1)) , g_74[g_77.f1]), g_105[5][0][1].f0)) | l_251) , 255UL), 4)), p_51)), p_53));
                    return g_105[5][0][1].f3;
                }
                if (p_52)
                {
                    unsigned l_262 = 4294967289UL;
                    for (l_256 = 0; (l_256 <= 13); l_256++)
                    {
                        l_262 = func_35(p_53, g_77.f3, l_239[0]);
                        if (g_108.f2)
                            continue;
                        l_235 = (p_53 || (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_105[5][0][1].f3, ((g_105[5][0][1].f1 || (((l_242 , ((g_267 , func_35((g_105[5][0][1].f6 || (((g_267.f0 >= (safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(g_267.f3, (l_239[1] , 65534UL))), 4))) >= p_54) < 0UL)), g_267.f1, g_105[5][0][1].f3)) | l_238)) | 4294967295UL) || p_53)) & l_259))), 7)));
                        if (l_239[0])
                            break;
                    }
                }
                else
                {
                    unsigned short l_276 = 65535UL;
                    int l_316 = (-5L);
                    for (g_77.f1 = (-13); (g_77.f1 > 46); ++g_77.f1)
                    {
                        unsigned short l_287 = 0x2727L;
                        int l_293 = 0x8492DA3FL;
                        char l_314 = 0x20L;
                        if (l_276)
                            break;
                        l_292[0][3][3] = (safe_mod_func_int32_t_s_s(l_276, (safe_sub_func_int32_t_s_s(p_53, ((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((((l_259 != (safe_mul_func_uint8_t_u_u(g_77.f4, ((((65535UL != l_287) , g_267.f5) , (safe_rshift_func_int16_t_s_u(g_178, 11))) != (safe_mul_func_int8_t_s_s((l_287 & 0x04L), 0xB3L)))))) >= g_105[5][0][1].f1) | p_52), 0x6195L)), 0xE7L)) < g_7)))));
                        l_293 = (-3L);
                        l_316 = (p_54 & (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((((((g_108.f5 , (safe_sub_func_int16_t_s_s((!l_239[1]), ((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(((l_242 , ((safe_mul_func_int16_t_s_s((!((safe_lshift_func_int8_t_s_s(g_267.f6, 0)) && g_267.f7)), (l_234[0] != (safe_sub_func_uint8_t_u_u((l_276 > (3L || p_53)), 6L))))) != g_267.f1)) | l_256), l_259)), l_259)) && 0L)))) >= l_259) != l_239[0]) ^ l_314) , g_315) > 0x81986E9DL) & l_293), g_74[1])), g_267.f3)) <= 8UL) & 0L) <= 0x065EL), 10)), (-1L))));
                    }
                }
            }
            if (l_239[1])
            {
                unsigned l_326[7][2][8] = {{{4294967295UL, 0x3639EF08L, 0x7FF64744L, 4294967295UL, 9UL, 0xEA8F3700L, 9UL, 4294967295UL}, {4294967295UL, 0x3639EF08L, 0x7FF64744L, 4294967295UL, 9UL, 0xEA8F3700L, 9UL, 4294967295UL}}, {{4294967295UL, 0x3639EF08L, 0x7FF64744L, 4294967295UL, 9UL, 0xEA8F3700L, 9UL, 4294967295UL}, {4294967295UL, 0x3639EF08L, 0x7FF64744L, 4294967295UL, 9UL, 0xEA8F3700L, 9UL, 4294967295UL}}, {{4294967295UL, 0x3639EF08L, 0x7FF64744L, 4294967295UL, 9UL, 0xEA8F3700L, 9UL, 4294967295UL}, {4294967295UL, 0x3639EF08L, 0x7FF64744L, 4294967295UL, 9UL, 0xEA8F3700L, 9UL, 4294967295UL}}, {{4294967295UL, 0x3639EF08L, 0x7FF64744L, 4294967295UL, 9UL, 0xEA8F3700L, 9UL, 4294967295UL}, {4294967295UL, 0x3639EF08L, 0x7FF64744L, 4294967295UL, 9UL, 0xEA8F3700L, 9UL, 4294967295UL}}, {{4294967295UL, 0x3639EF08L, 0x7FF64744L, 4294967295UL, 9UL, 0xEA8F3700L, 9UL, 4294967295UL}, {4294967295UL, 0x3639EF08L, 0x7FF64744L, 4294967295UL, 9UL, 0xEA8F3700L, 9UL, 4294967295UL}}, {{4294967295UL, 0x3639EF08L, 0x7FF64744L, 4294967295UL, 9UL, 0xEA8F3700L, 9UL, 4294967295UL}, {4294967295UL, 0x3639EF08L, 0x7FF64744L, 4294967295UL, 9UL, 0xEA8F3700L, 9UL, 4294967295UL}}, {{4294967295UL, 0x3639EF08L, 0x7FF64744L, 4294967295UL, 9UL, 0xEA8F3700L, 9UL, 4294967295UL}, {4294967295UL, 0x3639EF08L, 0x7FF64744L, 4294967295UL, 9UL, 0xEA8F3700L, 9UL, 4294967295UL}}};
                int i, j, k;
                for (p_53 = 1; (p_53 >= 0); p_53 -= 1)
                {
                    int i;
                    l_251 = ((((l_234[p_53] != g_77.f1) <= (0xC160L >= 1L)) > 0x76D68260L) >= ((p_52 | func_55((((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0x19FCL, (g_74[1] || (5UL == 4L)))), 0)) & g_77.f1) >= p_53), l_321, l_242, g_77.f2)) < (-10L)));
                    for (l_235 = 0; (l_235 <= 1); l_235 += 1)
                    {
                        int i;
                        g_267.f5 &= (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((g_74[(p_53 + 2)] , ((p_51 < (l_326[4][0][2] , (l_234[p_53] <= func_35(g_74[(p_53 + 2)], p_53, g_105[5][0][1].f7)))) >= (safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(l_259, l_238)), l_251)))), g_77.f7)), 0x3782F27BL));
                        l_338 |= ((((safe_mul_func_uint16_t_u_u((((p_53 & func_35(g_74[(p_53 + 2)], ((0UL < ((l_234[p_53] && l_242) , (p_51 , g_77.f2))) | func_35((((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(((p_51 , (~1UL)) , l_251), 0)) ^ l_337), g_105[5][0][1].f5)) ^ g_71) > g_7), g_7, p_51)), g_74[(p_53 + 2)])) ^ l_326[4][0][2]) ^ g_105[5][0][1].f5), 1L)) , l_251) >= 0x0B0D8113L) | l_234[p_53]);
                        if (p_52)
                            continue;
                        if (g_71)
                            break;
                    }
                    if (((g_105[5][0][1] , (l_242 && ((((safe_rshift_func_int16_t_s_u(g_267.f4, 2)) == l_234[0]) , g_108.f1) & ((0L < g_77.f1) < (((safe_mul_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s(0x9A2554C3L, ((0xA20A6329L & l_345) >= 0xD7FD038DL))) , g_74[3]) , p_51) | g_71), g_77.f3)) || 251UL) != l_338))))) <= 4294967294UL))
                    {
                        return g_105[5][0][1].f1;
                    }
                    else
                    {
                        l_235 &= ((((safe_lshift_func_uint16_t_u_s(p_54, 12)) <= g_108.f3) > 0xA3L) , p_53);
                        l_352 &= (func_35(p_52, g_108.f1, (g_267.f3 >= (0xD1L || func_35(p_52, g_77.f5, ((l_239[0] , (safe_lshift_func_int16_t_s_s((l_259 ^ (safe_add_func_uint8_t_u_u(p_53, g_77.f3))), l_234[p_53]))) != g_77.f5))))) == p_52);
                    }
                    g_267.f0 = l_234[0];
                }
                g_105[5][0][1].f0 = p_52;
            }
            else
            {
                unsigned char l_366 = 0x7BL;
                for (l_259 = 0; (l_259 <= 1); l_259 += 1)
                {
                    int l_357 = 0L;
                    int i;
                    l_357 = (((g_74[(l_259 + 1)] || (247UL || l_239[l_259])) > ((func_35(func_35(p_54, (((func_35(l_337, l_238, ((((safe_lshift_func_int8_t_s_u(((((safe_lshift_func_uint16_t_u_s(g_77.f5, 1)) , p_53) , (((((g_74[1] == g_105[5][0][1].f4) , g_267.f6) | l_321) || 4294967289UL) , p_53)) ^ l_345), p_53)) , g_105[5][0][1].f5) ^ g_74[3]) , g_77.f6)) > p_54) , g_77.f7) != l_234[1]), g_105[5][0][1].f1), g_105[5][0][1].f0, l_234[0]) && p_52) < l_239[0])) >= 0x25L);
                    if (g_74[(l_259 + 1)])
                        break;
                }
                l_338 |= (0L >= (p_51 <= ((safe_sub_func_uint16_t_u_u(g_108.f1, (g_77.f5 , (safe_add_func_int32_t_s_s(0x200A3AFBL, (((func_35(((p_52 >= ((safe_rshift_func_uint8_t_u_u(func_35(p_53, l_235, p_52), l_239[0])) <= p_53)) > p_51), l_234[0], p_54) || p_54) == g_77.f1) | p_52)))))) == l_259)));
                for (l_235 = (-16); (l_235 <= 29); l_235 = safe_add_func_uint32_t_u_u(l_235, 9))
                {
                    unsigned l_375 = 0x490CD380L;
                    int l_376[6][2] = {{0x9BD73319L, 0x9BD73319L}, {0x9BD73319L, 0x9BD73319L}, {0x9BD73319L, 0x9BD73319L}, {0x9BD73319L, 0x9BD73319L}, {0x9BD73319L, 0x9BD73319L}, {0x9BD73319L, 0x9BD73319L}};
                    int i, j;
                    for (g_178 = 0; (g_178 <= 1); g_178 += 1)
                    {
                        int i;
                        l_376[0][0] = (!((func_55(l_234[g_178], p_53, l_366, (safe_rshift_func_int8_t_s_u(0xBEL, l_234[g_178]))) , (g_108 , (safe_sub_func_uint16_t_u_u(func_35((~0x3F084494L), func_35(((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(p_53, p_51)), 0x91L)) > p_53), l_375, g_315), p_54), p_54)))) > 249UL));
                    }
                }
            }
            l_251 &= (safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_uint32_t_u(((((((safe_add_func_int8_t_s_s(l_345, (0L == (((safe_rshift_func_int16_t_s_u(g_71, 8)) < (func_35(func_35((safe_lshift_func_int16_t_s_u(g_74[1], 13)), g_77.f4, g_77.f7), (l_235 < (g_105[5][0][1].f0 < g_77.f7)), l_337) | g_77.f0)) > 65534UL)))) , p_53) <= p_52) == 1UL) ^ p_53) < 9UL))) , 0xAEL), l_352));
        }
        else
        {
            unsigned short l_406 = 0x88A0L;
            unsigned l_486 = 0xDF3A770BL;
            int l_522 = 0x056F5268L;
            unsigned short l_556 = 0xA660L;
            l_251 ^= (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(0x5C2CL, (((safe_rshift_func_uint16_t_u_u(l_234[1], (g_392 , (safe_add_func_int8_t_s_s(p_52, (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((65526UL != (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(((g_77.f0 != ((0x299DAF10L == g_108.f5) != (safe_unary_minus_func_uint32_t_u(p_52)))) ^ 1UL), 6)), g_77.f3)) , l_406), 10))) && p_53), 1L)), 1L))))))) , 0x81L) && g_108.f2))), 3L));
            if (p_52)
            {
                char l_425 = (-1L);
                int l_428 = 0L;
                const short l_521 = 0x90C7L;
                l_338 = (g_105[5][0][1] , (safe_mul_func_int16_t_s_s(p_53, p_52)));
                for (g_267.f1 = 21; (g_267.f1 < 56); g_267.f1++)
                {
                    unsigned char l_424 = 255UL;
                    l_425 = (4294967287UL & (g_105[5][0][1] , func_55(g_77.f6, (safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int16_t_s_s(p_51, (safe_unary_minus_func_int8_t_s(g_267.f7)))) < ((safe_rshift_func_int8_t_s_s(p_54, p_52)) , l_239[0])), (l_424 <= 0UL))), 0xA73E15F1L)), g_178)), g_74[1])), p_52, g_77.f7)));
                    for (l_352 = (-24); (l_352 <= 16); l_352 = safe_add_func_int16_t_s_s(l_352, 1))
                    {
                        if (g_71)
                            break;
                        if (p_54)
                            continue;
                        l_428 = (p_52 ^ g_108.f1);
                    }
                    if (l_425)
                    {
                        char l_453 = (-1L);
                        g_105[5][0][1].f0 |= (g_267.f1 & (safe_mod_func_int32_t_s_s(func_35(p_53, g_105[5][0][1].f5, (safe_div_func_int8_t_s_s(g_108.f3, (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((-1L) >= p_52), (func_35((safe_sub_func_int32_t_s_s(g_74[1], (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u(p_51, (safe_mul_func_int8_t_s_s(g_74[4], 251UL)))), 65534UL)), l_428)), l_239[0])), l_259)), l_453)) ^ g_77.f5) , g_105[5][0][1].f7))), p_54, l_239[1]) < p_51))), l_406))))), g_267.f5)));
                        return p_51;
                    }
                    else
                    {
                        int l_454 = 0x04C712C3L;
                        char l_467 = 0x83L;
                        l_454 |= 0x033EB776L;
                        l_235 |= (safe_mul_func_uint8_t_u_u((~(safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((!(((((safe_lshift_func_uint8_t_u_u(251UL, 6)) & 0x706AL) == p_51) & (0x699057C7L <= ((safe_mul_func_int8_t_s_s((l_467 != ((safe_sub_func_int16_t_s_s(g_267.f3, (g_77.f6 > (p_54 | ((((safe_mul_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((func_35((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s((((((func_35((0xC36A867BL > 0xB56CBC40L), g_392, p_53) ^ l_251) || 0x8A367013L) , l_425) == p_53) && l_467), l_454)) || g_267.f3) > p_54), 2)), g_7)), 1UL)), p_54, g_74[2]) && g_482) > 0x7C3F4681L), p_53)) >= 1L), l_424)) & 4294967290UL) , l_424) != 3L))))) < p_53)), l_239[0])) && p_54))) , l_424)), 0x3DL)), p_53)), p_54))), l_352));
                        if (l_483)
                            break;
                    }
                    for (g_178 = 0; (g_178 > 11); g_178 = safe_add_func_int32_t_s_s(g_178, 1))
                    {
                        g_108.f0 = g_77.f0;
                    }
                }
                l_235 |= (g_7 <= l_486);
                if ((safe_lshift_func_int8_t_s_s(0L, (((((safe_lshift_func_uint8_t_u_s(0xCFL, 5)) , (safe_rshift_func_int8_t_s_s((0UL < func_55((((g_74[0] , (safe_mul_func_int8_t_s_s((-6L), ((safe_div_func_int16_t_s_s(((((((((((safe_div_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((~0x1344L), l_425)), (~(((l_352 ^ l_486) <= l_425) , 0x8CAB6361L)))) , g_105[5][0][1].f2) , p_52) == l_428) , 0xAE58L) <= g_267.f3) , l_486) > (-8L)) , p_53) | l_425), 0xE971L)) & (-7L))))) | 0x26B450AAL) , 0xC2A9L), l_428, p_53, g_105[5][0][1].f1)), 7))) , 0xA936L) | l_338) | p_53))))
                {
                    unsigned l_503 = 0x89D67758L;
                    for (p_54 = (-12); (p_54 > 29); p_54++)
                    {
                        g_108.f5 = l_406;
                    }
                    l_503 &= p_52;
                    for (l_425 = 0; (l_425 >= 3); l_425++)
                    {
                        unsigned short l_512 = 0x1AE2L;
                        l_522 |= ((safe_sub_func_int8_t_s_s(p_51, 0x1CL)) < func_35((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u((l_486 < ((l_251 < (+l_512)) == p_52)), (safe_lshift_func_uint16_t_u_u((p_53 , func_55((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_406, ((safe_sub_func_int16_t_s_s((g_108.f7 != 0x53F2L), p_54)) , g_392))), 11)), p_51, g_267.f0, l_425)), p_51)))) && l_521), 2)), l_406, l_428));
                        g_77.f5 |= (~g_267.f3);
                    }
                }
                else
                {
                    for (p_51 = (-21); (p_51 == 36); p_51++)
                    {
                        short l_527 = (-6L);
                        l_338 ^= (safe_sub_func_uint8_t_u_u(l_527, p_52));
                    }
                }
            }
            else
            {
                unsigned l_538[5];
                short l_634 = (-1L);
                int i;
                for (i = 0; i < 5; i++)
                    l_538[i] = 0UL;
                for (p_54 = 0; (p_54 < 5); ++p_54)
                {
                    int l_549 = 0L;
                    if (p_53)
                    {
                        int l_530[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_530[i] = 0xA04F8607L;
                        l_530[1] = p_51;
                    }
                    else
                    {
                        int l_533 = 0x11EE4762L;
                        g_108.f0 = ((g_108.f0 || ((((((safe_mul_func_int16_t_s_s((!l_533), (0xEAL == ((safe_mod_func_uint8_t_u_u(func_35(l_538[1], (func_55((safe_lshift_func_int8_t_s_s(g_267.f0, 2)), ((safe_mod_func_uint8_t_u_u((g_77.f4 | g_392), 0x88L)) , (safe_sub_func_int8_t_s_s(func_55((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(l_406, 13)), 0L)), p_51, g_267.f0, l_352), g_267.f7))), l_406, p_51) , g_108.f5), g_77.f3), 0xABL)) < 0x5D0BL)))) , g_105[5][0][1].f5) ^ 8UL) < g_267.f7) || g_105[5][0][1].f5) || l_406)) > l_549);
                        g_267.f5 &= ((safe_mul_func_uint8_t_u_u(l_549, ((safe_lshift_func_uint8_t_u_s(4UL, (l_239[0] && func_55((func_55(((((safe_rshift_func_uint16_t_u_s(l_345, 9)) | 0x7537L) == 255UL) != func_55((g_77.f0 < func_35(l_549, g_482, p_53)), g_315, p_53, p_51)), p_51, p_54, l_556) ^ g_77.f7), l_538[0], p_52, l_538[1])))) != g_7))) != g_77.f3);
                        g_267.f0 = p_51;
                    }
                    l_522 = (safe_add_func_uint8_t_u_u((p_54 | (+(~l_538[4]))), (safe_add_func_uint32_t_u_u(6UL, 0x5568E917L))));
                    l_251 = (safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((((~g_315) , 0UL) <= ((((((p_54 && (safe_sub_func_int8_t_s_s(((g_267.f1 >= p_54) || l_239[0]), (safe_add_func_uint16_t_u_u(l_345, (((safe_div_func_uint16_t_u_u(func_35(g_77.f0, g_74[1], p_52), g_267.f7)) == 8UL) , 0xEB30L)))))) , (-5L)) >= 9L) < g_77.f1) ^ g_105[5][0][1].f5) ^ p_54)) ^ l_538[1]), g_77.f1)) | p_54), 9L));
                    for (p_53 = 0; (p_53 <= 1); p_53 += 1)
                    {
                        int i;
                        l_522 |= (l_239[p_53] == (((safe_div_func_uint8_t_u_u((~(safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(l_234[p_53])), ((safe_sub_func_int32_t_s_s(g_267.f0, ((safe_add_func_uint32_t_u_u(0x819F6195L, (safe_add_func_uint8_t_u_u((p_52 | ((safe_sub_func_int16_t_s_s(g_105[5][0][1].f1, (((l_234[0] , l_352) < (0x280FFA9DL != l_234[p_53])) && 6UL))) && 0x78C1L)), g_77.f0)))) <= l_234[p_53]))) ^ g_267.f3)))), 9L)) , g_105[5][0][1].f7) < g_77.f0));
                        g_267.f5 ^= (-1L);
                        if (g_267.f3)
                            break;
                    }
                }
                for (l_251 = 0; (l_251 != 10); ++l_251)
                {
                    short l_593 = (-6L);
                    char l_607 = 0xE9L;
                    if (p_54)
                        break;
                    if (((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((g_178 != func_35(l_345, g_71, p_52)), 0UL)), p_53)) | (safe_add_func_uint16_t_u_u((p_51 && l_592), l_593))))
                    {
                        short l_594 = 0xE8E6L;
                        l_594 = 0x1CC5B015L;
                        g_77.f0 = (safe_add_func_int8_t_s_s((~((((p_52 == (((p_51 , ((safe_lshift_func_int8_t_s_u(l_556, (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(g_108.f6, ((safe_unary_minus_func_uint32_t_u(4294967287UL)) >= (g_105[5][0][1].f7 > func_35((g_71 , (p_53 & 0UL)), l_538[1], l_406))))), 0)))) | 0x3CB5L)) > p_51) ^ l_239[0])) & g_105[5][0][1].f0) > l_352) <= 0x9292F1F4L)), 0x48L));
                    }
                    else
                    {
                        if (g_71)
                            goto lbl_606;
                    }
                    if ((func_35(l_239[0], g_108.f7, (l_607 == ((safe_add_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(g_7)), ((safe_mod_func_int8_t_s_s(((((safe_mod_func_int8_t_s_s(g_267.f0, (p_51 , g_77.f5))) , ((((safe_mul_func_int16_t_s_s((l_259 < ((p_52 > 4294967295UL) != (-5L))), p_53)) <= g_105[5][0][1].f1) > l_538[1]) == p_53)) & p_52) ^ g_71), (-4L))) | p_51))) ^ g_77.f5))) || g_77.f6))
                    {
                        short l_619 = 0xEA9AL;
                        int l_624 = 0x9DBC4B23L;
                        unsigned l_633 = 1UL;
                        if (g_77.f1)
                            break;
                        l_619 = 9L;
                        l_235 = 0xC18563A3L;
                        g_108.f5 = ((-1L) != (safe_sub_func_uint16_t_u_u(g_105[5][0][1].f2, (safe_div_func_uint8_t_u_u(l_352, func_35(l_624, (((safe_add_func_int32_t_s_s(1L, 0UL)) > (-2L)) == ((safe_add_func_uint32_t_u_u((l_607 & (((g_482 >= g_105[5][0][1].f0) >= 0x5A0DF20EL) != l_633)), l_556)) != l_634)), g_77.f1))))));
                    }
                    else
                    {
                        unsigned l_635 = 0xCA32C1DEL;
                        g_108.f0 = p_53;
                        l_635 &= func_35(l_406, g_77.f6, p_54);
                        g_105[5][0][1].f5 = p_52;
                    }
                    return l_556;
                }
                g_640.f5 = (+((safe_mod_func_uint16_t_u_u((func_55((safe_sub_func_int16_t_s_s(((((((g_640 , (func_35((((g_108.f1 , (~1UL)) >= 0UL) >= l_483), p_52, g_267.f3) > l_556)) , 0xEF091F0BL) < 0xC65B58A5L) | l_522) | g_641) && g_105[5][0][1].f0), g_640.f1)), p_54, p_52, p_53) && g_640.f6), g_77.f1)) && l_642));
            }
        }
    }
    else
    {
        char l_666 = 0xD2L;
        int l_717[8] = {(-4L), (-4L), (-4L), (-4L), (-4L), (-4L), (-4L), (-4L)};
        int i;
lbl_647:
        g_105[5][0][1].f5 = (safe_mul_func_uint8_t_u_u(4UL, (safe_sub_func_int8_t_s_s((~(p_52 || 0x65L)), l_345))));
        for (g_178 = 1; (g_178 <= 4); g_178 += 1)
        {
            char l_705 = 0x89L;
            int l_707 = 0x058DB302L;
            int i;
            if (g_267.f0)
                goto lbl_647;
            if (g_74[g_178])
                break;
            g_108.f0 |= (safe_mul_func_uint8_t_u_u(7UL, ((safe_div_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((!g_267.f3) != g_71), (1UL >= p_52))) && p_52), (func_35(((safe_mod_func_uint16_t_u_u(65535UL, l_345)) , 0x2831A2BCL), g_656, p_51) , p_54))) >= g_74[g_178])));
            for (p_51 = 0; (p_51 <= 14); p_51++)
            {
                unsigned l_665 = 4UL;
                l_666 = (safe_sub_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((g_77.f3 && p_54), l_251)) <= (safe_sub_func_int8_t_s_s(p_51, l_665))), 1L));
                for (p_53 = 0; (p_53 < 18); ++p_53)
                {
                    unsigned l_669[4][7] = {{0x0DA6A8E8L, 4294967294UL, 0x0DA6A8E8L, 0xEB5BDB47L, 0x68C19314L, 0x0DEDBBB9L, 0x4D13D743L}, {0x0DA6A8E8L, 4294967294UL, 0x0DA6A8E8L, 0xEB5BDB47L, 0x68C19314L, 0x0DEDBBB9L, 0x4D13D743L}, {0x0DA6A8E8L, 4294967294UL, 0x0DA6A8E8L, 0xEB5BDB47L, 0x68C19314L, 0x0DEDBBB9L, 0x4D13D743L}, {0x0DA6A8E8L, 4294967294UL, 0x0DA6A8E8L, 0xEB5BDB47L, 0x68C19314L, 0x0DEDBBB9L, 0x4D13D743L}};
                    int l_695 = 0xA8C5E349L;
                    int i, j;
                    if (l_669[2][6])
                        break;
                    if ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(0xBF65L, 10)) > (safe_mod_func_uint8_t_u_u((g_267.f2 ^ ((safe_mul_func_uint8_t_u_u(g_267.f7, 248UL)) && (((((l_666 < (safe_sub_func_int16_t_s_s(0x842AL, (((((-5L) != 0xB231L) && p_52) != p_52) & 0x76CDL)))) | 0x76L) == p_52) > g_682[2][4][2]) && 0xFFL))), 1UL))), g_683)), 0xFAL)))
                    {
                        int l_693 = (-9L);
                        g_105[5][0][1].f0 = func_35(g_74[g_178], g_105[5][0][1].f2, g_77.f0);
                        l_695 = (((safe_mul_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s(((g_688[4] , p_54) , func_35(((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((p_53 , (func_35(p_54, g_267.f5, l_693) ^ (p_52 , ((safe_unary_minus_func_int32_t_s(p_52)) < 0UL)))) != g_315), 7)), 0xB562L)) , l_665), g_392, g_74[g_178])), p_54)) >= g_640.f5) && 1L) , g_108.f7), g_640.f3)) != g_641) ^ g_77.f3);
                    }
                    else
                    {
                        unsigned l_706[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_706[i] = 0x99F77C74L;
                        g_696[0][0].f5 = (p_53 <= (g_696[0][0] , ((p_53 < (safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(g_696[0][0].f6, (p_53 == (safe_mul_func_int8_t_s_s(((4294967295UL & l_352) || (l_345 , func_35((safe_add_func_int16_t_s_s(func_35(l_705, l_706[0], g_77.f7), 0UL)), p_52, p_54))), p_51))))), l_707))) || p_52)));
                    }
                    l_707 = (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_53, 7)), l_669[2][6]));
                    for (g_683 = 0; (g_683 >= 39); ++g_683)
                    {
                        unsigned char l_714 = 1UL;
                        l_352 = ((l_705 , ((l_666 ^ (l_665 > l_669[1][4])) < (l_705 , (((p_52 >= ((l_714 > func_35(g_108.f3, (g_696[0][0].f0 , p_53), p_51)) , 0L)) || g_688[4].f7) & 6L)))) , 0x4C1A3E9BL);
                        g_108.f5 = g_267.f3;
                        return l_259;
                    }
                }
                g_108.f0 = (safe_rshift_func_uint16_t_u_s(p_52, 13));
            }
        }
        l_717[3] = (g_696[0][0].f6 , (-2L));
    }
    l_251 = 1L;
    return g_640.f1;
}







static unsigned func_55(unsigned short p_56, unsigned p_57, short p_58, unsigned p_59)
{
    unsigned short l_64 = 0x7A3EL;
    int l_156 = 0xD330705DL;
    int l_214[6][7][6] = {{{0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}}, {{0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}}, {{0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}}, {{0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}}, {{0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}}, {{0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}, {0xD41C1D69L, 1L, 0x9605C3BEL, (-6L), (-6L), 0x1DC2A3F7L}}};
    unsigned l_225 = 4294967295UL;
    int i, j, k;
    if (l_64)
    {
        unsigned short l_65[4][7][2] = {{{0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}}, {{0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}}, {{0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}}, {{0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}, {0x111CL, 0xD306L}}};
        int l_66 = 0x0F33E235L;
        int l_179 = 0xC97E9734L;
        unsigned char l_186[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_186[i] = 0UL;
        for (p_56 = 0; (p_56 <= 1); p_56 += 1)
        {
            char l_78[4] = {0L, (-5L), 0L, (-5L)};
            int l_89[2][6] = {{0L, 0x75065145L, 0L, 0x75065145L, 0L, 0x75065145L}, {0L, 0x75065145L, 0L, 0x75065145L, 0L, 0x75065145L}};
            char l_92 = 0xD5L;
            const int l_130 = 0x2F8029A7L;
            int l_143 = 0x126A6CC7L;
            int i, j;
            for (l_64 = 0; (l_64 <= 1); l_64 += 1)
            {
                unsigned l_87 = 6UL;
                l_66 |= p_58;
                for (l_66 = 1; (l_66 >= 0); l_66 -= 1)
                {
                    int l_88 = 0x5B36276AL;
                    int i, j, k;
                    g_71 = (l_65[(p_56 + 2)][(l_66 + 3)][l_64] , ((safe_add_func_uint8_t_u_u(255UL, (safe_mod_func_int16_t_s_s(p_58, g_7)))) & p_57));
                    g_74[1] = (safe_sub_func_int8_t_s_s(0L, l_66));
                    for (p_57 = 0; (p_57 <= 1); p_57 += 1)
                    {
                        l_88 = ((safe_mul_func_int8_t_s_s((g_77 , l_78[3]), g_77.f1)) , (safe_mul_func_int8_t_s_s(p_59, (g_74[2] , (g_74[0] ^ ((((safe_add_func_uint32_t_u_u(func_35(((safe_lshift_func_int16_t_s_u(((p_58 <= (g_74[1] < (safe_lshift_func_uint8_t_u_u((g_77.f2 ^ l_65[(p_56 + 2)][(l_66 + 3)][l_64]), 2)))) >= 0xA7L), 12)) == g_77.f0), l_64, l_87), l_65[(p_56 + 2)][(l_66 + 3)][l_64])) && p_59) || p_59) <= l_78[3]))))));
                        l_89[0][4] |= g_77.f1;
                    }
                    if (g_7)
                    {
                        l_89[0][4] ^= p_57;
                    }
                    else
                    {
                        unsigned short l_97 = 0xD5E9L;
                        int l_104 = 0L;
                        g_77.f5 = p_58;
                        l_104 = (p_58 ^ func_35(g_71, g_7, (safe_rshift_func_uint16_t_u_s(((l_92 , ((((safe_sub_func_int16_t_s_s((p_58 , (safe_rshift_func_int8_t_s_s(p_56, l_97))), (safe_div_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(0x35L, ((safe_rshift_func_uint16_t_u_u(0UL, l_64)) && g_77.f7))) , l_97), p_59)))) | l_97) , (-4L)) < g_77.f1)) & p_57), g_74[2]))));
                    }
                }
            }
            l_89[1][2] = 0L;
            for (p_59 = 0; (p_59 <= 1); p_59 += 1)
            {
                unsigned l_119 = 4294967295UL;
                int l_187 = 0xE4D4EBD0L;
                for (l_64 = 0; (l_64 <= 1); l_64 += 1)
                {
                    int l_134 = (-9L);
                    int i, j, k;
                    if (((g_105[5][0][1] , (safe_mul_func_int16_t_s_s((((((l_65[(p_59 + 2)][(p_59 + 3)][l_64] > g_77.f7) == (g_108 , g_77.f2)) > (safe_div_func_uint16_t_u_u(((!func_35(func_35((((safe_div_func_int8_t_s_s(p_56, p_59)) , l_66) , (((safe_mod_func_uint32_t_u_u((func_35(((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((1L | g_105[5][0][1].f3), g_77.f0)), l_119)) >= l_89[0][4]), p_59, g_77.f0) > l_65[1][5][0]), 0x8F6180BEL)) > 0x366BBB0BL) == p_56)), p_56, l_65[(p_59 + 2)][(p_59 + 3)][l_64]), p_59, l_64)) & p_58), g_77.f3))) & l_65[(p_59 + 2)][(p_59 + 3)][l_64]) < l_66), 0L))) == p_56))
                    {
                        char l_133 = 0x3DL;
                        l_66 = (safe_mul_func_int16_t_s_s(func_35(p_56, g_77.f7, (safe_add_func_int16_t_s_s((((safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(p_58, (((safe_rshift_func_int16_t_s_s((g_105[5][0][1].f6 | (p_59 && l_130)), 2)) , (l_119 , g_105[5][0][1].f2)) != (safe_mul_func_uint16_t_u_u(0UL, p_58))))) <= g_105[5][0][1].f3), 1UL)) & g_7) , 1L), 0xC759L))), 0UL));
                        l_134 = l_133;
                        l_66 = func_35(l_64, ((((safe_mod_func_uint16_t_u_u(p_57, func_35(((g_105[5][0][1].f7 , (safe_lshift_func_uint16_t_u_u((func_35(p_59, g_105[5][0][1].f4, (safe_div_func_uint32_t_u_u(((((l_78[3] , p_59) | ((safe_lshift_func_int16_t_s_s(7L, 4)) , (func_35(l_66, g_105[5][0][1].f1, p_56) ^ g_77.f5))) , g_77.f5) != l_119), l_65[3][4][0]))) || 0xE195L), p_59))) != 0xCEL), l_92, l_143))) , 0xBDL) & 0x2BL) , l_65[0][1][0]), g_77.f1);
                    }
                    else
                    {
                        char l_157 = 0x8AL;
                        l_66 &= ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(((func_35((((l_119 , func_35(((g_77.f6 >= ((g_105[5][0][1].f7 ^ (safe_lshift_func_int16_t_s_u((((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((l_78[3] , l_134), (l_65[2][4][0] , l_65[2][5][0]))), 7)) && l_65[(p_59 + 2)][(p_59 + 3)][l_64]) , (safe_mod_func_int32_t_s_s(g_105[5][0][1].f5, 0x3A2D939DL))), g_74[1]))) & 0x8875C3FAL)) , l_65[1][2][0]), l_156, g_77.f3)) || p_57) , l_119), l_157, g_74[1]) >= 0L) == 1UL), l_156)), p_56)) == g_74[1]);
                        g_105[5][0][1].f0 &= l_119;
                    }
                    if ((l_65[(p_59 + 2)][(p_59 + 3)][l_64] & (safe_mul_func_int16_t_s_s(((((safe_div_func_int16_t_s_s(((l_134 & (safe_rshift_func_int16_t_s_s((l_78[3] > (((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(g_108.f6, 0x5EA3L)), (safe_mod_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(0xFCL, ((g_105[5][0][1].f3 , (((1L != func_35((safe_add_func_int8_t_s_s(l_65[(p_59 + 2)][(p_59 + 3)][l_64], g_178)), p_58, p_59)) , 0x56080F64L) , 8L)) <= p_59))), l_92)) && l_130) , (-2L)), l_179)) || p_58), g_105[5][0][1].f3)))) , 0x0EL) <= g_105[5][0][1].f7)), 13))) <= l_64), g_178)) >= 0x18DAE918L) && (-6L)) , g_7), p_56))))
                    {
                        unsigned short l_200 = 0UL;
                        g_77.f5 &= (safe_mod_func_int8_t_s_s((1UL > ((((safe_sub_func_int16_t_s_s(0xFFF8L, func_35(l_179, p_57, g_108.f3))) == p_56) < l_89[1][0]) | (((safe_rshift_func_uint8_t_u_s((p_58 , g_74[1]), g_105[5][0][1].f1)) >= (-8L)) < l_119))), 0xEDL));
                        l_187 &= l_186[0];
                        l_214[1][0][1] = (safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(65535UL, (2UL > (0xB4L ^ l_200)))) >= (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((((func_35((4L & (safe_lshift_func_int8_t_s_u(g_105[5][0][1].f7, (safe_unary_minus_func_uint8_t_u(g_108.f3))))), l_156, g_105[5][0][1].f1) > 0L) , l_119) == g_105[5][0][1].f3) == p_58) == g_77.f7), p_56)), p_59)), g_77.f1)), l_134)), 255UL))), 5L)) < 7L), g_77.f7)), 2)), g_105[5][0][1].f7)), p_59));
                    }
                    else
                    {
                        l_187 = func_35((g_77.f6 > (((safe_div_func_int16_t_s_s(p_56, g_178)) == (safe_lshift_func_uint8_t_u_u(0xF9L, 4))) , 1L)), l_119, (safe_mod_func_uint32_t_u_u(((g_77.f5 < (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(0x4F32L, 4)), (p_56 != g_77.f7)))) , l_186[0]), p_58)));
                    }
                    if (l_225)
                        break;
                }
                return p_57;
            }
        }
        l_214[1][0][1] &= g_105[5][0][1].f3;
        return p_58;
    }
    else
    {
        unsigned l_229[3][3] = {{0xD6A1D818L, 6UL, 0xD6A1D818L}, {0xD6A1D818L, 6UL, 0xD6A1D818L}, {0xD6A1D818L, 6UL, 0xD6A1D818L}};
        int i, j;
        g_105[5][0][1].f0 &= (safe_lshift_func_uint16_t_u_u(p_57, (((safe_unary_minus_func_int8_t_s(func_35(l_229[1][0], l_229[0][0], ((l_64 <= (!1L)) , (g_77 , l_64))))) & p_59) > p_59)));
    }
    return p_59;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_77.f2, "g_77.f2", print_hash_value);
    transparent_crc(g_77.f3, "g_77.f3", print_hash_value);
    transparent_crc(g_77.f4, "g_77.f4", print_hash_value);
    transparent_crc(g_77.f5, "g_77.f5", print_hash_value);
    transparent_crc(g_77.f6, "g_77.f6", print_hash_value);
    transparent_crc(g_77.f7, "g_77.f7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_105[i][j][k].f0, "g_105[i][j][k].f0", print_hash_value);
                transparent_crc(g_105[i][j][k].f1, "g_105[i][j][k].f1", print_hash_value);
                transparent_crc(g_105[i][j][k].f2, "g_105[i][j][k].f2", print_hash_value);
                transparent_crc(g_105[i][j][k].f3, "g_105[i][j][k].f3", print_hash_value);
                transparent_crc(g_105[i][j][k].f4, "g_105[i][j][k].f4", print_hash_value);
                transparent_crc(g_105[i][j][k].f5, "g_105[i][j][k].f5", print_hash_value);
                transparent_crc(g_105[i][j][k].f6, "g_105[i][j][k].f6", print_hash_value);
                transparent_crc(g_105[i][j][k].f7, "g_105[i][j][k].f7", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_108.f0, "g_108.f0", print_hash_value);
    transparent_crc(g_108.f1, "g_108.f1", print_hash_value);
    transparent_crc(g_108.f2, "g_108.f2", print_hash_value);
    transparent_crc(g_108.f3, "g_108.f3", print_hash_value);
    transparent_crc(g_108.f4, "g_108.f4", print_hash_value);
    transparent_crc(g_108.f5, "g_108.f5", print_hash_value);
    transparent_crc(g_108.f6, "g_108.f6", print_hash_value);
    transparent_crc(g_108.f7, "g_108.f7", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_267.f0, "g_267.f0", print_hash_value);
    transparent_crc(g_267.f1, "g_267.f1", print_hash_value);
    transparent_crc(g_267.f2, "g_267.f2", print_hash_value);
    transparent_crc(g_267.f3, "g_267.f3", print_hash_value);
    transparent_crc(g_267.f4, "g_267.f4", print_hash_value);
    transparent_crc(g_267.f5, "g_267.f5", print_hash_value);
    transparent_crc(g_267.f6, "g_267.f6", print_hash_value);
    transparent_crc(g_267.f7, "g_267.f7", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_640.f0, "g_640.f0", print_hash_value);
    transparent_crc(g_640.f1, "g_640.f1", print_hash_value);
    transparent_crc(g_640.f2, "g_640.f2", print_hash_value);
    transparent_crc(g_640.f3, "g_640.f3", print_hash_value);
    transparent_crc(g_640.f4, "g_640.f4", print_hash_value);
    transparent_crc(g_640.f5, "g_640.f5", print_hash_value);
    transparent_crc(g_640.f6, "g_640.f6", print_hash_value);
    transparent_crc(g_640.f7, "g_640.f7", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_682[i][j][k], "g_682[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_683, "g_683", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_688[i].f0, "g_688[i].f0", print_hash_value);
        transparent_crc(g_688[i].f1, "g_688[i].f1", print_hash_value);
        transparent_crc(g_688[i].f2, "g_688[i].f2", print_hash_value);
        transparent_crc(g_688[i].f3, "g_688[i].f3", print_hash_value);
        transparent_crc(g_688[i].f4, "g_688[i].f4", print_hash_value);
        transparent_crc(g_688[i].f5, "g_688[i].f5", print_hash_value);
        transparent_crc(g_688[i].f6, "g_688[i].f6", print_hash_value);
        transparent_crc(g_688[i].f7, "g_688[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_696[i][j].f0, "g_696[i][j].f0", print_hash_value);
            transparent_crc(g_696[i][j].f1, "g_696[i][j].f1", print_hash_value);
            transparent_crc(g_696[i][j].f2, "g_696[i][j].f2", print_hash_value);
            transparent_crc(g_696[i][j].f3, "g_696[i][j].f3", print_hash_value);
            transparent_crc(g_696[i][j].f4, "g_696[i][j].f4", print_hash_value);
            transparent_crc(g_696[i][j].f5, "g_696[i][j].f5", print_hash_value);
            transparent_crc(g_696[i][j].f6, "g_696[i][j].f6", print_hash_value);
            transparent_crc(g_696[i][j].f7, "g_696[i][j].f7", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_804.f0, "g_804.f0", print_hash_value);
    transparent_crc(g_804.f1, "g_804.f1", print_hash_value);
    transparent_crc(g_804.f2, "g_804.f2", print_hash_value);
    transparent_crc(g_804.f3, "g_804.f3", print_hash_value);
    transparent_crc(g_804.f4, "g_804.f4", print_hash_value);
    transparent_crc(g_804.f5, "g_804.f5", print_hash_value);
    transparent_crc(g_804.f6, "g_804.f6", print_hash_value);
    transparent_crc(g_804.f7, "g_804.f7", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1081[i][j].f0, "g_1081[i][j].f0", print_hash_value);
            transparent_crc(g_1081[i][j].f1, "g_1081[i][j].f1", print_hash_value);
            transparent_crc(g_1081[i][j].f2, "g_1081[i][j].f2", print_hash_value);
            transparent_crc(g_1081[i][j].f3, "g_1081[i][j].f3", print_hash_value);
            transparent_crc(g_1081[i][j].f4, "g_1081[i][j].f4", print_hash_value);
            transparent_crc(g_1081[i][j].f5, "g_1081[i][j].f5", print_hash_value);
            transparent_crc(g_1081[i][j].f6, "g_1081[i][j].f6", print_hash_value);
            transparent_crc(g_1081[i][j].f7, "g_1081[i][j].f7", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1092, "g_1092", print_hash_value);
    transparent_crc(g_1122, "g_1122", print_hash_value);
    transparent_crc(g_1142.f0, "g_1142.f0", print_hash_value);
    transparent_crc(g_1142.f1, "g_1142.f1", print_hash_value);
    transparent_crc(g_1142.f2, "g_1142.f2", print_hash_value);
    transparent_crc(g_1142.f3, "g_1142.f3", print_hash_value);
    transparent_crc(g_1142.f4, "g_1142.f4", print_hash_value);
    transparent_crc(g_1142.f5, "g_1142.f5", print_hash_value);
    transparent_crc(g_1142.f6, "g_1142.f6", print_hash_value);
    transparent_crc(g_1142.f7, "g_1142.f7", print_hash_value);
    transparent_crc(g_1152, "g_1152", print_hash_value);
    transparent_crc(g_1256.f0, "g_1256.f0", print_hash_value);
    transparent_crc(g_1256.f1, "g_1256.f1", print_hash_value);
    transparent_crc(g_1256.f2, "g_1256.f2", print_hash_value);
    transparent_crc(g_1256.f3, "g_1256.f3", print_hash_value);
    transparent_crc(g_1256.f4, "g_1256.f4", print_hash_value);
    transparent_crc(g_1256.f5, "g_1256.f5", print_hash_value);
    transparent_crc(g_1256.f6, "g_1256.f6", print_hash_value);
    transparent_crc(g_1256.f7, "g_1256.f7", print_hash_value);
    transparent_crc(g_1292, "g_1292", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1309[i].f0, "g_1309[i].f0", print_hash_value);
        transparent_crc(g_1309[i].f1, "g_1309[i].f1", print_hash_value);
        transparent_crc(g_1309[i].f2, "g_1309[i].f2", print_hash_value);
        transparent_crc(g_1309[i].f3, "g_1309[i].f3", print_hash_value);
        transparent_crc(g_1309[i].f4, "g_1309[i].f4", print_hash_value);
        transparent_crc(g_1309[i].f5, "g_1309[i].f5", print_hash_value);
        transparent_crc(g_1309[i].f6, "g_1309[i].f6", print_hash_value);
        transparent_crc(g_1309[i].f7, "g_1309[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1348.f0, "g_1348.f0", print_hash_value);
    transparent_crc(g_1348.f1, "g_1348.f1", print_hash_value);
    transparent_crc(g_1348.f2, "g_1348.f2", print_hash_value);
    transparent_crc(g_1348.f3, "g_1348.f3", print_hash_value);
    transparent_crc(g_1348.f4, "g_1348.f4", print_hash_value);
    transparent_crc(g_1348.f5, "g_1348.f5", print_hash_value);
    transparent_crc(g_1348.f6, "g_1348.f6", print_hash_value);
    transparent_crc(g_1348.f7, "g_1348.f7", print_hash_value);
    transparent_crc(g_1406.f0, "g_1406.f0", print_hash_value);
    transparent_crc(g_1406.f1, "g_1406.f1", print_hash_value);
    transparent_crc(g_1406.f2, "g_1406.f2", print_hash_value);
    transparent_crc(g_1406.f3, "g_1406.f3", print_hash_value);
    transparent_crc(g_1406.f4, "g_1406.f4", print_hash_value);
    transparent_crc(g_1406.f5, "g_1406.f5", print_hash_value);
    transparent_crc(g_1406.f6, "g_1406.f6", print_hash_value);
    transparent_crc(g_1406.f7, "g_1406.f7", print_hash_value);
    transparent_crc(g_1487, "g_1487", print_hash_value);
    transparent_crc(g_1550.f0, "g_1550.f0", print_hash_value);
    transparent_crc(g_1550.f1, "g_1550.f1", print_hash_value);
    transparent_crc(g_1550.f2, "g_1550.f2", print_hash_value);
    transparent_crc(g_1550.f3, "g_1550.f3", print_hash_value);
    transparent_crc(g_1550.f4, "g_1550.f4", print_hash_value);
    transparent_crc(g_1550.f5, "g_1550.f5", print_hash_value);
    transparent_crc(g_1550.f6, "g_1550.f6", print_hash_value);
    transparent_crc(g_1550.f7, "g_1550.f7", print_hash_value);
    transparent_crc(g_1562, "g_1562", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1600[i].f0, "g_1600[i].f0", print_hash_value);
        transparent_crc(g_1600[i].f1, "g_1600[i].f1", print_hash_value);
        transparent_crc(g_1600[i].f2, "g_1600[i].f2", print_hash_value);
        transparent_crc(g_1600[i].f3, "g_1600[i].f3", print_hash_value);
        transparent_crc(g_1600[i].f4, "g_1600[i].f4", print_hash_value);
        transparent_crc(g_1600[i].f5, "g_1600[i].f5", print_hash_value);
        transparent_crc(g_1600[i].f6, "g_1600[i].f6", print_hash_value);
        transparent_crc(g_1600[i].f7, "g_1600[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1608.f0, "g_1608.f0", print_hash_value);
    transparent_crc(g_1608.f1, "g_1608.f1", print_hash_value);
    transparent_crc(g_1608.f2, "g_1608.f2", print_hash_value);
    transparent_crc(g_1608.f3, "g_1608.f3", print_hash_value);
    transparent_crc(g_1608.f4, "g_1608.f4", print_hash_value);
    transparent_crc(g_1608.f5, "g_1608.f5", print_hash_value);
    transparent_crc(g_1608.f6, "g_1608.f6", print_hash_value);
    transparent_crc(g_1608.f7, "g_1608.f7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
