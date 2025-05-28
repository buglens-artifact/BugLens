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
   unsigned f1;
   const char f2;
   const unsigned short f3;
   char f4;
};

struct S1 {
   int f0;
   char f1;
   const int f2;
   short f3;
   int f4;
   unsigned short f5;
};


static int g_10 = 4L;
static unsigned g_37[4] = {0x14FF6A91L, 0x14FF6A91L, 0x14FF6A91L, 0x14FF6A91L};
static struct S0 g_56[10][6][4] = {{{{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}}, {{{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}}, {{{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}}, {{{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}}, {{{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}}, {{{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}}, {{{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}}, {{{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}}, {{{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}}, {{{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}, {{0x54L,0xFDD0FD02L,0x95L,0x78EDL,-1L}, {0x37L,1UL,1L,9UL,-1L}, {0xAAL,0UL,-1L,0x80A6L,0x08L}, {0x9FL,4294967288UL,0L,0x7078L,0L}}}};
static int g_107 = (-1L);
static struct S0 *g_120 = &g_56[6][1][3];
static struct S0 **g_119 = &g_120;
static const struct S1 g_125[1][7][7] = {{{{-5L,-1L,-1L,0xAE1DL,-5L,0x024FL}, {-1L,0x70L,1L,0L,0xC4AB7F0BL,65531UL}, {-5L,-1L,-1L,0xAE1DL,-5L,0x024FL}, {0x02A5F005L,0x1DL,-7L,1L,-1L,0x6392L}, {0x80DBE1DBL,-8L,0L,0x01A3L,0xBCC97913L,0UL}, {-1L,0xB0L,0L,0x1F37L,1L,0xF5E1L}, {0xD1E4CC4EL,0xDEL,0x5A916849L,0x6890L,0x52E1ABEAL,0x55E4L}}, {{-5L,-1L,-1L,0xAE1DL,-5L,0x024FL}, {-1L,0x70L,1L,0L,0xC4AB7F0BL,65531UL}, {-5L,-1L,-1L,0xAE1DL,-5L,0x024FL}, {0x02A5F005L,0x1DL,-7L,1L,-1L,0x6392L}, {0x80DBE1DBL,-8L,0L,0x01A3L,0xBCC97913L,0UL}, {-1L,0xB0L,0L,0x1F37L,1L,0xF5E1L}, {0xD1E4CC4EL,0xDEL,0x5A916849L,0x6890L,0x52E1ABEAL,0x55E4L}}, {{-5L,-1L,-1L,0xAE1DL,-5L,0x024FL}, {-1L,0x70L,1L,0L,0xC4AB7F0BL,65531UL}, {-5L,-1L,-1L,0xAE1DL,-5L,0x024FL}, {0x02A5F005L,0x1DL,-7L,1L,-1L,0x6392L}, {0x80DBE1DBL,-8L,0L,0x01A3L,0xBCC97913L,0UL}, {-1L,0xB0L,0L,0x1F37L,1L,0xF5E1L}, {0xD1E4CC4EL,0xDEL,0x5A916849L,0x6890L,0x52E1ABEAL,0x55E4L}}, {{-5L,-1L,-1L,0xAE1DL,-5L,0x024FL}, {-1L,0x70L,1L,0L,0xC4AB7F0BL,65531UL}, {-5L,-1L,-1L,0xAE1DL,-5L,0x024FL}, {0x02A5F005L,0x1DL,-7L,1L,-1L,0x6392L}, {0x80DBE1DBL,-8L,0L,0x01A3L,0xBCC97913L,0UL}, {-1L,0xB0L,0L,0x1F37L,1L,0xF5E1L}, {0xD1E4CC4EL,0xDEL,0x5A916849L,0x6890L,0x52E1ABEAL,0x55E4L}}, {{-5L,-1L,-1L,0xAE1DL,-5L,0x024FL}, {-1L,0x70L,1L,0L,0xC4AB7F0BL,65531UL}, {-5L,-1L,-1L,0xAE1DL,-5L,0x024FL}, {0x02A5F005L,0x1DL,-7L,1L,-1L,0x6392L}, {0x80DBE1DBL,-8L,0L,0x01A3L,0xBCC97913L,0UL}, {-1L,0xB0L,0L,0x1F37L,1L,0xF5E1L}, {0xD1E4CC4EL,0xDEL,0x5A916849L,0x6890L,0x52E1ABEAL,0x55E4L}}, {{-5L,-1L,-1L,0xAE1DL,-5L,0x024FL}, {-1L,0x70L,1L,0L,0xC4AB7F0BL,65531UL}, {-5L,-1L,-1L,0xAE1DL,-5L,0x024FL}, {0x02A5F005L,0x1DL,-7L,1L,-1L,0x6392L}, {0x80DBE1DBL,-8L,0L,0x01A3L,0xBCC97913L,0UL}, {-1L,0xB0L,0L,0x1F37L,1L,0xF5E1L}, {0xD1E4CC4EL,0xDEL,0x5A916849L,0x6890L,0x52E1ABEAL,0x55E4L}}, {{-5L,-1L,-1L,0xAE1DL,-5L,0x024FL}, {-1L,0x70L,1L,0L,0xC4AB7F0BL,65531UL}, {-5L,-1L,-1L,0xAE1DL,-5L,0x024FL}, {0x02A5F005L,0x1DL,-7L,1L,-1L,0x6392L}, {0x80DBE1DBL,-8L,0L,0x01A3L,0xBCC97913L,0UL}, {-1L,0xB0L,0L,0x1F37L,1L,0xF5E1L}, {0xD1E4CC4EL,0xDEL,0x5A916849L,0x6890L,0x52E1ABEAL,0x55E4L}}}};
static const struct S1 *g_124 = &g_125[0][3][0];
static struct S1 g_133 = {3L,0L,-1L,0xD7A5L,0xA24BEC2CL,0x1774L};
static int *g_148 = &g_107;
static int **g_147 = &g_148;
static struct S1 g_214 = {8L,1L,0xAEABBF70L,1L,0xCD818A97L,65535UL};
static const int *g_258 = &g_107;
static struct S1 g_320 = {-2L,0xB2L,0xDC5172E1L,-1L,0x5F1AFBDEL,7UL};
static int *g_561 = (void*)0;
static int g_616 = 1L;
static int g_646 = 0xC3B24D02L;
static struct S1 *g_664[4] = {&g_214, &g_214, &g_214, &g_214};
static short g_952[3] = {(-1L), (-1L), (-1L)};
static struct S1 **g_998 = &g_664[3];
static struct S1 ***g_997[7] = {&g_998, &g_998, &g_998, &g_998, &g_998, &g_998, &g_998};
static unsigned char g_1323[10] = {5UL, 250UL, 255UL, 255UL, 250UL, 5UL, 250UL, 255UL, 255UL, 250UL};
static int *g_1346 = &g_616;



static struct S1 func_1(void);
static char func_5(struct S1 p_6, int p_7);
static struct S1 func_20(int * p_21, int * const p_22, int * p_23);
static char func_28(int p_29, int * p_30, int * p_31, short p_32);
static int func_33(unsigned p_34, int p_35, char p_36);
static int * func_38(const int * p_39, int p_40, char p_41, struct S1 p_42);
static const int * func_43(char p_44, unsigned short p_45, int p_46, int p_47, int p_48);
static char func_49(int * p_50, int p_51);
static struct S0 func_52(struct S0 p_53, int * const p_54, const struct S1 p_55);
static int * func_57(char p_58, int * p_59);
static struct S1 func_1(void)
{
    int l_2 = 1L;
    struct S1 l_8[6] = {{0x5E495761L,0xE3L,0L,0x5741L,0x11E2DB80L,65529UL}, {0x5E495761L,0xE3L,0L,0x5741L,0x11E2DB80L,65529UL}, {1L,-1L,0x6373A4C9L,0x4B54L,0L,65527UL}, {0x5E495761L,0xE3L,0L,0x5741L,0x11E2DB80L,65529UL}, {0x5E495761L,0xE3L,0L,0x5741L,0x11E2DB80L,65529UL}, {1L,-1L,0x6373A4C9L,0x4B54L,0L,65527UL}};
    struct S0 ***l_1263 = &g_119;
    const int *l_1268 = &l_8[1].f2;
    struct S1 * const *l_1286 = &g_664[3];
    unsigned short l_1315 = 0x9D20L;
    int *l_1321 = &g_616;
    const int *l_1340 = &l_8[1].f2;
    int *l_1347 = &g_10;
    int i;
    if ((+((((l_2 == 0x17E5C285L) , ((safe_add_func_int8_t_s_s(func_5(l_8[1], l_8[1].f5), ((void*)0 != l_1263))) ^ ((0x8F4C88A7L > (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(7UL, g_37[2])) ^ 0x9B4BA1E5L), g_952[1]))) || l_8[1].f2))) > 65528UL) , l_8[1].f3)))
    {
        (*g_147) = func_38(l_1268, (**g_147), (*l_1268), (*g_124));
    }
    else
    {
        int l_1269[5] = {0L, 0x0A41E50BL, 0L, 0x0A41E50BL, 0L};
        unsigned char l_1272 = 1UL;
        int *l_1284 = &g_616;
        struct S1 l_1297 = {-4L,-5L,0xC18C4C48L,-3L,-1L,0xBF4CL};
        int i;
        if (l_1269[4])
        {
            struct S1 * const *l_1285 = &g_664[3];
            const int *l_1287 = (void*)0;
            const int l_1292[5] = {0x069A1410L, 7L, 0x069A1410L, 7L, 0x069A1410L};
            unsigned short l_1319 = 0xE125L;
            int l_1320[4] = {0x88A7F16CL, 1L, 0x88A7F16CL, 1L};
            int i;
        }
        else
        {
            struct S1 l_1341 = {0x38B706CEL,-1L,0xF0AD3700L,-1L,0x49DB65F8L,0x0122L};
            (*g_147) = (*g_147);
            return l_1297;
        }
        return l_1297;
    }
    (*g_147) = l_1347;
    return (**l_1286);
}







static char func_5(struct S1 p_6, int p_7)
{
    int *l_9 = &g_10;
    short l_1133 = 0x8509L;
    const struct S1 l_1164 = {0x0F48D948L,0x31L,0x0301D7FDL,0x3ABAL,0x7AD6B7E0L,1UL};
    struct S0 l_1165[6] = {{-3L,0xA07FC30DL,-1L,0x689DL,0L}, {8L,4294967295UL,0x60L,65533UL,0xC1L}, {-3L,0xA07FC30DL,-1L,0x689DL,0L}, {8L,4294967295UL,0x60L,65533UL,0xC1L}, {-3L,0xA07FC30DL,-1L,0x689DL,0L}, {8L,4294967295UL,0x60L,65533UL,0xC1L}};
    unsigned l_1203 = 0x8ED3B850L;
    const short l_1243 = 1L;
    int i;
    (*l_9) = 1L;
    return p_7;
}







static struct S1 func_20(int * p_21, int * const p_22, int * p_23)
{
    unsigned char l_569[5][8] = {{1UL, 253UL, 0x8AL, 0x8AL, 253UL, 1UL, 253UL, 0x8AL}, {1UL, 253UL, 0x8AL, 0x8AL, 253UL, 1UL, 253UL, 0x8AL}, {1UL, 253UL, 0x8AL, 0x8AL, 253UL, 1UL, 253UL, 0x8AL}, {1UL, 253UL, 0x8AL, 0x8AL, 253UL, 1UL, 253UL, 0x8AL}, {1UL, 253UL, 0x8AL, 0x8AL, 253UL, 1UL, 253UL, 0x8AL}};
    short l_583 = 0x2104L;
    struct S1 l_584 = {6L,0L,0x152CA6F1L,0xAD04L,0x5FB3EF85L,1UL};
    int **l_609 = &g_148;
    int l_674 = 0x06D70F24L;
    struct S0 l_695 = {0x43L,0x7D0FE3C0L,-1L,0x67FBL,1L};
    struct S1 l_733 = {0x785C7729L,0xF2L,-4L,8L,0x6990C74DL,0xEE4FL};
    const int *l_766 = &g_214.f2;
    int l_786 = 8L;
    unsigned l_816 = 4294967287UL;
    int *l_838 = (void*)0;
    short l_839 = (-4L);
    struct S0 **l_867 = &g_120;
    struct S0 ***l_917 = &g_119;
    struct S1 * const *l_928 = &g_664[3];
    int l_957[7] = {0x43F92B8BL, 0L, 0x43F92B8BL, 0L, 0x43F92B8BL, 0L, 0x43F92B8BL};
    struct S1 l_958 = {0xB539EBDEL,0x42L,-3L,0x576FL,0xF46BA2C6L,0xDFD2L};
    int *l_988 = &g_10;
    struct S1 l_1055 = {6L,0xE0L,0xE6667143L,0x9D2AL,-8L,0x7354L};
    unsigned l_1085 = 0xC139CB19L;
    unsigned char l_1087 = 1UL;
    char l_1100[1][6][5] = {{{0x13L, 0L, 0x8AL, 0L, 0x13L}, {0x13L, 0L, 0x8AL, 0L, 0x13L}, {0x13L, 0L, 0x8AL, 0L, 0x13L}, {0x13L, 0L, 0x8AL, 0L, 0x13L}, {0x13L, 0L, 0x8AL, 0L, 0x13L}, {0x13L, 0L, 0x8AL, 0L, 0x13L}}};
    int i, j, k;
    for (g_320.f3 = 0; (g_320.f3 <= 24); g_320.f3++)
    {
        unsigned l_568 = 0xBF055FB2L;
        int *l_575 = &g_10;
        struct S1 *l_598 = (void*)0;
        struct S1 **l_597 = &l_598;
        int *l_613[4];
        struct S1 l_617 = {0xA929ED63L,0x04L,-4L,0L,6L,65531UL};
        struct S0 l_696 = {-8L,0x9636EDC7L,0x1AL,0x190FL,0xBCL};
        const int **l_728 = &g_258;
        struct S1 l_805 = {0L,-7L,0x5B11DCD5L,-7L,1L,0UL};
        int i;
        for (i = 0; i < 4; i++)
            l_613[i] = (void*)0;
        (*p_21) = (*p_22);
        for (g_320.f1 = 15; (g_320.f1 == (-21)); g_320.f1 = safe_sub_func_uint16_t_u_u(g_320.f1, 1))
        {
            unsigned char l_572 = 0xD6L;
            int *l_588 = &g_107;
            unsigned char l_649 = 0UL;
            struct S1 *l_651 = (void*)0;
            struct S0 l_656 = {0x61L,0x18E34519L,0L,8UL,3L};
            struct S1 l_675[3][7][7] = {{{{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}}, {{{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}}, {{{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}, {{-2L,0xADL,-1L,4L,0xD2A3AC1BL,0xF567L}, {-6L,0xF3L,0L,-1L,0x40167696L,0x90DFL}, {-2L,-8L,0x5BF83FDBL,0xC537L,0x86C2D712L,0x58D1L}, {0L,0x69L,0xD70E9963L,0x7946L,0x7CF4966BL,0xD405L}, {0x9457A437L,0x1CL,0x8AF1D558L,0x7F9FL,-5L,0x4749L}, {0xCAD4B38DL,0x1AL,0x80D00D87L,0x5D7AL,-9L,0x73E1L}, {0L,0x38L,1L,-1L,-1L,0x085CL}}}};
            int i, j, k;
        }
        (*l_728) = ((*l_575) , func_43((safe_unary_minus_func_uint32_t_u(((*l_575) > l_584.f1))), (safe_lshift_func_int16_t_s_s((g_125[0][3][0].f4 & (l_584.f5 >= (*l_575))), g_616)), (*l_575), (*l_575), (*g_258)));
        if ((0x3B5BL & ((safe_rshift_func_int8_t_s_s(0x88L, 6)) , (((((l_584 , &l_696) == ((((*l_575) >= (safe_sub_func_int32_t_s_s((l_733 , ((safe_lshift_func_uint8_t_u_u(((*p_21) > (safe_rshift_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u((*l_575), 4)) | (*p_21)) == g_133.f0), g_125[0][3][0].f2))), 3)) < (**l_728))), (-1L)))) != (**l_728)) , (void*)0)) == 0x6AL) && 0xEFL) <= l_733.f1))))
        {
            const unsigned char l_751 = 0x18L;
            unsigned l_752[5][2] = {{4294967294UL, 4294967294UL}, {4294967294UL, 4294967294UL}, {4294967294UL, 4294967294UL}, {4294967294UL, 4294967294UL}, {4294967294UL, 4294967294UL}};
            const struct S0 * const *l_756 = (void*)0;
            const struct S0 * const **l_755 = &l_756;
            char l_758 = 0xACL;
            struct S1 l_759 = {0xFE1E9A06L,0xABL,0x2AEB79D9L,-1L,4L,0x9993L};
            int *l_768 = (void*)0;
            struct S1 l_799[10][5][1] = {{{{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}}, {{{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}}, {{{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}}, {{{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}}, {{{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}}, {{{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}}, {{{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}}, {{{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}}, {{{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}}, {{{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}, {{-4L,0x3BL,-5L,6L,1L,0xFFA7L}}}};
            int i, j, k;
            (*p_23) = (safe_lshift_func_int16_t_s_u((g_56[6][1][3].f0 & ((safe_mod_func_int32_t_s_s(((g_125[0][3][0].f2 , (l_584 , (((func_28((*p_23), l_575, (g_56[6][1][3].f0 , p_21), g_320.f2) >= g_133.f1) > 0xF5CAL) > g_125[0][3][0].f0))) != g_56[6][1][3].f0), g_133.f4)) , g_133.f4)), 5));
            if ((safe_unary_minus_func_uint8_t_u(255UL)))
            {
                int l_757 = 0L;
                struct S1 l_767 = {-7L,0xC6L,0xFA43DAC3L,1L,0L,0xF587L};
                struct S0 ***l_780 = (void*)0;
                int *l_782 = &l_757;
                (*p_21) = (safe_sub_func_int16_t_s_s(((func_49(p_23, (safe_rshift_func_uint16_t_u_u(g_320.f3, ((safe_rshift_func_uint16_t_u_s(2UL, 7)) > l_751)))) && l_752[2][0]) < l_751), g_214.f1));
                (*p_21) = (safe_sub_func_uint32_t_u_u(g_37[3], ((l_758 & ((l_757 && (((l_759 , l_759.f0) >= 0xDCC2L) <= g_56[6][1][3].f1)) <= 0L)) <= (-8L))));
                for (g_133.f5 = 0; (g_133.f5 <= 3); g_133.f5 += 1)
                {
                    int ***l_760 = &l_609;
                    int i;
                    (*l_760) = &g_148;
                    l_613[g_133.f5] = p_23;
                    (*g_119) = &l_695;
                    for (g_133.f1 = 16; (g_133.f1 >= 18); g_133.f1 = safe_add_func_uint32_t_u_u(g_133.f1, 4))
                    {
                        (**l_760) = p_21;
                        if ((*p_22))
                            continue;
                    }
                }
                for (l_733.f3 = 0; (l_733.f3 <= 4); l_733.f3 += 1)
                {
                    struct S1 l_781 = {-5L,-1L,-2L,0x05C1L,0x812497B0L,0xEEBDL};
                    int i, j;
                    if (l_569[l_733.f3][(l_733.f3 + 2)])
                    {
                        int **l_765 = &l_613[1];
                        int i, j;
                        (*p_23) = (l_569[l_733.f3][(l_733.f3 + 1)] || func_28((*p_21), &g_107, &g_616, ((safe_mod_func_int16_t_s_s(0xB2A8L, g_616)) != ((0x231DL && l_569[l_733.f3][(l_733.f3 + 2)]) <= (l_584 , 0x6EL)))));
                        (*l_765) = p_22;
                        (*g_119) = &l_696;
                        (*l_575) = (*p_22);
                    }
                    else
                    {
                        int l_771 = 0x23EA670CL;
                        (*l_728) = l_768;
                        (*l_575) = 0x5BB4FCBBL;
                        (*p_22) = func_49(&g_616, ((safe_add_func_uint32_t_u_u(l_771, (l_767.f5 && l_767.f5))) == (safe_lshift_func_int16_t_s_s((0xFA21L > func_49(l_782, (*p_22))), 14))));
                        (*l_728) = ((*l_782) , &g_616);
                    }
                }
            }
            else
            {
                int l_788[7][5][7] = {{{(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}}, {{(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}}, {{(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}}, {{(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}}, {{(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}}, {{(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}}, {{(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}, {(-1L), 0L, 0xB636101BL, (-1L), 0xD32C3117L, 0L, 0L}}};
                int *l_789 = &g_107;
                int i, j, k;
                for (l_584.f0 = 0; (l_584.f0 <= 4); l_584.f0 += 1)
                {
                    int *l_787 = &l_786;
                    int i, j;
                    (*p_23) = ((l_569[l_584.f0][(l_584.f0 + 2)] <= (~(safe_add_func_int16_t_s_s(g_56[6][1][3].f4, (safe_unary_minus_func_uint8_t_u(l_569[l_584.f0][(l_584.f0 + 2)])))))) | l_788[5][3][3]);
                    (*g_147) = l_789;
                }
            }
            (*p_23) = (((*l_766) != ((&g_120 == &g_120) && g_125[0][3][0].f0)) ^ g_320.f2);
            for (l_617.f1 = 19; (l_617.f1 <= (-24)); l_617.f1 = safe_sub_func_int32_t_s_s(l_617.f1, 1))
            {
                struct S1 l_796 = {1L,9L,0x67A11900L,0x2E74L,-1L,65529UL};
                for (l_759.f3 = (-6); (l_759.f3 == (-30)); l_759.f3 = safe_sub_func_int8_t_s_s(l_759.f3, 1))
                {
                    const struct S1 l_797[10] = {{0x1432B05DL,0x16L,-10L,0L,0x12D98B99L,0x48F3L}, {0x6FD72969L,1L,0xE0838626L,-10L,0L,8UL}, {0x1432B05DL,0x16L,-10L,0L,0x12D98B99L,0x48F3L}, {0x6FD72969L,1L,0xE0838626L,-10L,0L,8UL}, {0x1432B05DL,0x16L,-10L,0L,0x12D98B99L,0x48F3L}, {0x6FD72969L,1L,0xE0838626L,-10L,0L,8UL}, {0x1432B05DL,0x16L,-10L,0L,0x12D98B99L,0x48F3L}, {0x6FD72969L,1L,0xE0838626L,-10L,0L,8UL}, {0x1432B05DL,0x16L,-10L,0L,0x12D98B99L,0x48F3L}, {0x6FD72969L,1L,0xE0838626L,-10L,0L,8UL}};
                    const struct S0 l_798 = {0x10L,0UL,0xB1L,65535UL,0x3AL};
                    const int *l_800[6] = {&l_733.f2, &g_616, &l_733.f2, &g_616, &l_733.f2, &g_616};
                    int i;
                    if ((func_28((safe_add_func_int32_t_s_s((((((((*l_766) < ((l_798 , l_796.f0) , (l_799[9][4][0] , ((l_695 , 65535UL) != 7UL)))) < (*p_22)) , g_56[6][1][3].f0) || l_796.f5) > g_214.f3) && g_214.f0), (-1L))), p_23, p_23, g_125[0][3][0].f5) , 0x5157460FL))
                    {
                        l_800[5] = (*l_728);
                        return l_733;
                    }
                    else
                    {
                        return l_797[4];
                    }
                }
            }
        }
        else
        {
            unsigned l_814 = 0x1BF614C0L;
            struct S1 **l_815 = &g_664[3];
            int **l_821 = &l_613[1];
            if ((safe_sub_func_uint8_t_u_u((g_646 , (*l_766)), ((safe_add_func_uint16_t_u_u((((~(l_805 , ((((*l_766) >= g_133.f3) ^ (*l_766)) , l_814))) & 0x34F7L) == l_814), 65535UL)) || 0xDE6BDFD9L))))
            {
                char l_817 = 0x5FL;
                int *l_818 = &g_616;
                (*p_22) = (((void*)0 == l_815) == l_816);
                (*l_728) = ((func_49(func_57(l_817, ((g_214.f0 && g_214.f1) , p_21)), l_817) >= g_214.f4) , l_818);
            }
            else
            {
                unsigned char l_828[3][3][6] = {{{0xE4L, 255UL, 0xEBL, 255UL, 0xE4L, 1UL}, {0xE4L, 255UL, 0xEBL, 255UL, 0xE4L, 1UL}, {0xE4L, 255UL, 0xEBL, 255UL, 0xE4L, 1UL}}, {{0xE4L, 255UL, 0xEBL, 255UL, 0xE4L, 1UL}, {0xE4L, 255UL, 0xEBL, 255UL, 0xE4L, 1UL}, {0xE4L, 255UL, 0xEBL, 255UL, 0xE4L, 1UL}}, {{0xE4L, 255UL, 0xEBL, 255UL, 0xE4L, 1UL}, {0xE4L, 255UL, 0xEBL, 255UL, 0xE4L, 1UL}, {0xE4L, 255UL, 0xEBL, 255UL, 0xE4L, 1UL}}};
                struct S0 l_830 = {1L,4294967295UL,0x74L,7UL,0L};
                int *l_831 = (void*)0;
                int i, j, k;
                (*p_21) = (0x6A6977C9L > (((*p_23) <= (**l_728)) <= (1UL <= g_214.f2)));
                (*l_575) = ((safe_sub_func_int32_t_s_s((*p_22), (l_821 != &p_21))) > (g_214.f0 & ((!((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0xB4L, ((safe_rshift_func_uint8_t_u_u(((((*l_766) , g_320.f1) == g_10) || (p_22 != p_22)), 7)) < g_56[6][1][3].f3))), 9)) == g_133.f5)) >= l_828[1][1][0])));
                for (l_695.f4 = 0; (l_695.f4 <= 2); l_695.f4 += 1)
                {
                    struct S1 l_829 = {0x373891C6L,0x52L,0L,8L,0x8CD869E2L,1UL};
                    int i, j;
                    if (l_569[(l_695.f4 + 2)][(l_695.f4 + 2)])
                    {
                        if ((*g_258))
                            break;
                        (*p_23) = 0x506C72C8L;
                    }
                    else
                    {
                        (*p_21) = (*g_258);
                        return l_733;
                    }
                    return l_829;
                }
                (*p_22) = func_49((l_830 , l_831), (*l_766));
            }
        }
    }
    if ((*l_766))
    {
        int l_834 = 1L;
        char l_858 = 3L;
        unsigned short l_875 = 65535UL;
        int l_888 = 0x2CE4570FL;
        struct S1 l_892 = {-3L,-1L,-1L,7L,0x91D3A349L,0UL};
        unsigned short l_902 = 0xB3DAL;
        unsigned char l_920 = 255UL;
        unsigned char l_942 = 0x67L;
        if ((*p_23))
        {
            struct S0 l_837 = {1L,4294967295UL,1L,0x4556L,0xFFL};
            (*p_21) = (g_320.f2 , (safe_lshift_func_uint8_t_u_u(((((~((l_834 != (safe_sub_func_uint8_t_u_u(((func_28((*p_23), (l_837 , l_838), p_21, l_834) <= (-3L)) == 0xC08D2904L), 0x04L))) <= l_839)) | g_320.f1) ^ g_125[0][3][0].f2) | g_56[6][1][3].f2), 3)));
            (*g_147) = (l_837.f2 , func_57(l_834, &l_834));
        }
        else
        {
            unsigned short l_854[8][8] = {{0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL}, {0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL}, {0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL}, {0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL}, {0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL}, {0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL}, {0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL}, {0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL, 0xA1B4L, 5UL}};
            struct S0 l_855 = {0L,1UL,0x3EL,0xFAA9L,0x3BL};
            int * const l_856[2] = {(void*)0, (void*)0};
            int l_857 = 0x9F595D6CL;
            const int **l_859 = (void*)0;
            const int **l_860 = &l_766;
            int i, j;
            (*p_22) = ((safe_rshift_func_int8_t_s_s(1L, 4)) >= g_214.f2);
            (*l_860) = func_43((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((((((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((safe_mod_func_int16_t_s_s(((l_834 == l_854[2][0]) > (((l_695 , (-6L)) , l_857) ^ l_834)), 65535UL)) && l_858) & l_858), l_834)), g_125[0][3][0].f3)), l_858)) , (*p_23)) , (void*)0) == &g_56[6][1][3]) , (*l_766)), l_834)), 0)), l_858, (*g_258), (*g_258), (*p_23));
        }
        for (g_214.f4 = 0; (g_214.f4 != 8); g_214.f4 = safe_add_func_uint16_t_u_u(g_214.f4, 9))
        {
            unsigned l_868 = 4294967287UL;
            struct S0 *l_884 = &l_695;
            struct S1 *l_885 = &g_133;
            int *l_911 = &g_616;
            const unsigned short l_929 = 0x8F60L;
        }
        return l_958;
    }
    else
    {
        struct S1 l_959 = {0x88A3CC21L,0L,-9L,0xCA50L,0x90C1B405L,0x22F1L};
        short l_965 = 1L;
        struct S0 ***l_968 = (void*)0;
        unsigned short l_969 = 8UL;
        struct S1 **l_970 = (void*)0;
        int ***l_981 = (void*)0;
        int l_1032 = 0L;
        struct S0 **l_1054 = &g_120;
        if ((*g_258))
        {
            return l_959;
        }
        else
        {
            int l_962[7];
            struct S1 ***l_971 = &l_970;
            unsigned l_986 = 2UL;
            unsigned l_1012 = 0x75F993AEL;
            struct S0 *l_1039[3];
            int i;
            for (i = 0; i < 7; i++)
                l_962[i] = 0x0D1D435FL;
            for (i = 0; i < 3; i++)
                l_1039[i] = &g_56[6][1][3];
            (*g_147) = (((func_49(p_23, (*p_21)) || (((safe_add_func_int16_t_s_s(l_962[2], (safe_sub_func_uint16_t_u_u(l_965, (((safe_sub_func_uint32_t_u_u(func_28((l_962[6] , l_962[0]), p_23, p_23, l_962[2]), l_959.f1)) & g_56[6][1][3].f2) || l_969))))) < 3L) != 0UL)) == 0x87L) , (void*)0);
            (*l_971) = l_970;
            for (g_214.f4 = 0; (g_214.f4 <= 6); g_214.f4 += 1)
            {
                unsigned short l_972 = 0x39AAL;
                int i;
                l_957[g_214.f4] = (~(((l_959.f0 >= 0x95L) > (*l_766)) == (l_962[2] <= (l_972 ^ (l_972 && (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(g_56[6][1][3].f4, l_969)), l_969)))))));
                (*g_147) = (g_952[1] , (*g_147));
            }
            for (l_959.f1 = 0; (l_959.f1 == 10); ++l_959.f1)
            {
                int l_982 = 0x4F5A7621L;
                char l_985 = 0x70L;
                struct S1 l_987 = {1L,0xF3L,0L,0L,-8L,2UL};
                struct S1 ***l_999 = &l_970;
                const struct S0 *l_1028 = &g_56[3][4][2];
                (*p_22) = ((**l_928) , ((~l_969) ^ (0x88L | (-6L))));
                if ((*p_23))
                    continue;
            }
        }
        (*g_119) = (void*)0;
    }
lbl_1114:
    if ((l_1055 , (-6L)))
    {
        unsigned short l_1056 = 0x81A2L;
        int *l_1057 = &g_10;
        char l_1058 = 1L;
        const struct S1 ** const l_1062 = &g_124;
        const struct S1 ** const *l_1061 = &l_1062;
        int *l_1068 = (void*)0;
        struct S1 l_1077 = {-1L,0xE2L,0xE3794072L,0x2157L,0x29970340L,0x2DE1L};
        const struct S0 ** const l_1101 = (void*)0;
lbl_1109:
        if (((((l_1056 || ((func_28((*g_258), (*g_147), l_1057, g_133.f2) | 0x6F56L) , l_1058)) | ((safe_rshift_func_int8_t_s_u(g_56[6][1][3].f2, 5)) && 0x239CL)) , (void*)0) != l_1061))
        {
            int l_1072 = 1L;
            for (l_733.f5 = (-10); (l_733.f5 != 49); l_733.f5 = safe_add_func_int16_t_s_s(l_733.f5, 1))
            {
                int *l_1069[10][3] = {{&l_957[0], &l_786, &l_786}, {&l_957[0], &l_786, &l_786}, {&l_957[0], &l_786, &l_786}, {&l_957[0], &l_786, &l_786}, {&l_957[0], &l_786, &l_786}, {&l_957[0], &l_786, &l_786}, {&l_957[0], &l_786, &l_786}, {&l_957[0], &l_786, &l_786}, {&l_957[0], &l_786, &l_786}, {&l_957[0], &l_786, &l_786}};
                int i, j;
                if ((*l_1057))
                    break;
                for (l_958.f3 = 13; (l_958.f3 >= (-15)); l_958.f3 = safe_sub_func_uint32_t_u_u(l_958.f3, 4))
                {
                    struct S1 l_1067 = {0xFCBA7A44L,3L,6L,-1L,0xDAB5002DL,0x88A1L};
                    return l_1067;
                }
                (*l_609) = l_1069[3][0];
            }
            for (g_214.f5 = 0; (g_214.f5 <= 3); g_214.f5 += 1)
            {
                const unsigned l_1070 = 0xFDFE3FE3L;
                for (l_695.f0 = 4; (l_695.f0 >= 0); l_695.f0 -= 1)
                {
                    struct S0 *l_1071 = &g_56[3][5][3];
                    int i, j;
                    (*g_147) = &l_957[g_214.f5];
                    if (l_569[l_695.f0][(g_214.f5 + 1)])
                    {
                        int i;
                        (*g_147) = &l_957[(l_695.f0 + 1)];
                        return (**l_928);
                    }
                    else
                    {
                        int i;
                        l_957[g_214.f5] = (((*g_148) && g_133.f5) , ((**l_609) | (&g_147 == (void*)0)));
                        if (l_1070)
                            break;
                        (**l_917) = l_1071;
                        if ((*p_22))
                            continue;
                    }
                    (*p_21) = (*g_258);
                    (*p_23) = (0xFCF5L > l_957[g_214.f5]);
                }
                for (l_958.f5 = 0; (l_958.f5 <= 3); l_958.f5 += 1)
                {
                    (*g_147) = p_23;
                }
            }
            for (g_214.f4 = 3; (g_214.f4 >= 0); g_214.f4 -= 1)
            {
                int i;
                l_957[(g_214.f4 + 3)] = l_1072;
            }
            (*p_23) = (*l_1057);
        }
        else
        {
            struct S1 l_1076 = {0x50877DC7L,0x39L,0x6D64BF14L,0x5CA1L,0x4B0E0F8AL,65533UL};
            for (l_695.f1 = 0; (l_695.f1 < 1); l_695.f1 = safe_add_func_int16_t_s_s(l_695.f1, 9))
            {
                struct S1 l_1075 = {0x95769037L,4L,0L,7L,0x30A5DD43L,1UL};
                return l_1075;
            }
            return l_1076;
        }
        if ((*p_21))
        {
            unsigned char l_1080 = 0xCDL;
            (*g_147) = (l_1077 , func_57(((!(&g_561 == (((*p_22) & (safe_sub_func_uint8_t_u_u(((&p_22 == ((*l_1057) , &p_22)) & l_1080), (safe_mod_func_int16_t_s_s(l_1080, (safe_sub_func_uint16_t_u_u(((**g_998) , (*l_988)), l_1080))))))) , (void*)0))) >= (*l_766)), p_21));
            if (l_1077.f3)
                goto lbl_1114;
        }
        else
        {
            unsigned char l_1086 = 0x40L;
            (*p_23) = l_1087;
        }
        if ((0xA44AL || 0L))
        {
            int l_1092 = 0x58F14C84L;
            struct S0 l_1095 = {0L,0xE8A33333L,-3L,65535UL,0L};
            for (l_1055.f0 = (-1); (l_1055.f0 >= (-28)); --l_1055.f0)
            {
                int l_1098[9] = {0xD2317521L, (-7L), 0xD2317521L, (-7L), 0xD2317521L, (-7L), 0xD2317521L, (-7L), 0xD2317521L};
                struct S0 **l_1108 = (void*)0;
                int i;
                (*l_988) = (*p_23);
                if (((safe_sub_func_int16_t_s_s(0xD58FL, l_1092)) | 0UL))
                {
                    int l_1099 = (-8L);
                    g_258 = func_43(g_56[6][1][3].f1, (safe_lshift_func_int16_t_s_s((((g_616 || ((*l_1057) || (l_1095 , (safe_rshift_func_uint16_t_u_s(((*l_1057) != 255UL), 11))))) && l_1098[1]) != (*l_988)), l_1099)), (*p_21), l_1100[0][4][1], (*p_22));
                    (*g_147) = p_21;
                }
                else
                {
                    (*g_147) = ((l_1101 != ((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_1095.f1, (*p_22))), (safe_rshift_func_int8_t_s_u(g_320.f3, 3)))) , l_1108)) , &g_616);
                }
                if (l_1077.f3)
                    goto lbl_1109;
            }
        }
        else
        {
            const int *l_1110 = &g_616;
            (*l_609) = p_21;
            (*l_609) = p_21;
            (*g_147) = (*l_609);
        }
    }
    else
    {
lbl_1113:
        (*l_988) = (safe_mod_func_int32_t_s_s((*g_258), g_320.f0));
        (*g_147) = p_21;
        if (l_839)
            goto lbl_1113;
    }
    (*p_22) = (*p_22);
    return (**l_928);
}







static char func_28(int p_29, int * p_30, int * p_31, short p_32)
{
    struct S1 l_564 = {0x942ECF27L,0xF7L,0x03C41599L,0xCE9EL,0x93A25D23L,0x2215L};
    int *l_565 = &g_10;
    (*p_31) = ((((safe_add_func_int16_t_s_s(0xB6BBL, (l_564 , (l_564 , func_49(&p_29, (((g_214.f1 && g_56[6][1][3].f1) >= g_320.f4) , (&p_29 != l_565))))))) ^ 0x70L) , 0xC7FBL) & p_29);
    for (g_214.f0 = 0; (g_214.f0 <= 3); g_214.f0 += 1)
    {
        int i;
        return g_37[g_214.f0];
    }
    return (*l_565);
}







static int func_33(unsigned p_34, int p_35, char p_36)
{
    const struct S1 l_88 = {-1L,2L,0x3FB85D13L,-1L,0x99ABEDA8L,65527UL};
    int *l_173[3][2] = {{&g_10, &g_10}, {&g_10, &g_10}, {&g_10, &g_10}};
    struct S0 l_174 = {5L,1UL,0xD4L,65535UL,-1L};
    int **l_496 = &l_173[1][0];
    int i, j;
    for (g_10 = 0; (g_10 <= 3); g_10 += 1)
    {
        for (p_36 = 0; (p_36 <= 3); p_36 += 1)
        {
            int i;
            return g_37[p_36];
        }
    }
    (*l_496) = func_38(func_43(func_49((func_52(g_56[6][1][3], func_57((safe_lshift_func_uint8_t_u_u(p_34, 2)), &g_10), l_88) , l_173[1][0]), (((l_174 , g_125[0][3][0].f1) || g_56[6][1][3].f4) && g_133.f5)), p_36, p_35, p_34, p_36), p_34, p_35, g_214);
    for (l_174.f1 = 11; (l_174.f1 <= 10); l_174.f1--)
    {
        unsigned l_504 = 0x29B55C34L;
        int *l_511[4][7][8] = {{{&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}}, {{&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}}, {{&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}}, {{&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}, {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, (void*)0, &g_107}}};
        struct S0 ***l_528 = &g_119;
        int i, j, k;
        for (g_133.f5 = 0; (g_133.f5 != 48); g_133.f5 = safe_add_func_int8_t_s_s(g_133.f5, 9))
        {
            int *l_503 = &g_107;
            (*l_503) = (safe_sub_func_int8_t_s_s(func_49(l_503, l_504), (((safe_sub_func_uint32_t_u_u((((safe_add_func_int8_t_s_s(((!((*g_119) == (void*)0)) , (~((((safe_sub_func_uint16_t_u_u(((g_125[0][3][0].f4 >= (!((((*l_503) >= ((-1L) == (((*l_503) >= 0x6478L) < p_34))) <= p_35) <= p_35))) <= 0xE5L), g_56[6][1][3].f0)) < l_504) || p_36) & p_35))), p_35)) , p_35) & 0xACL), g_133.f5)) , l_511[1][5][2]) != (*l_496))));
        }
        for (g_214.f5 = 0; (g_214.f5 == 16); g_214.f5++)
        {
            int l_523 = 0x954877C5L;
            const struct S0 *l_527 = &l_174;
            const struct S0 **l_526[5][10] = {{&l_527, (void*)0, &l_527, &l_527, &l_527, &l_527, &l_527, &l_527, &l_527, (void*)0}, {&l_527, (void*)0, &l_527, &l_527, &l_527, &l_527, &l_527, &l_527, &l_527, (void*)0}, {&l_527, (void*)0, &l_527, &l_527, &l_527, &l_527, &l_527, &l_527, &l_527, (void*)0}, {&l_527, (void*)0, &l_527, &l_527, &l_527, &l_527, &l_527, &l_527, &l_527, (void*)0}, {&l_527, (void*)0, &l_527, &l_527, &l_527, &l_527, &l_527, &l_527, &l_527, (void*)0}};
            const struct S0 ***l_525 = &l_526[4][4];
            struct S1 l_552[3] = {{7L,-2L,0xC67C924BL,4L,0L,65534UL}, {7L,-2L,0xC67C924BL,4L,0L,65534UL}, {7L,-2L,0xC67C924BL,4L,0L,65534UL}};
            int i, j;
            for (l_174.f4 = (-23); (l_174.f4 == 0); l_174.f4++)
            {
                int l_518 = (-1L);
                unsigned char l_550 = 0x16L;
                struct S0 ***l_551 = &g_119;
                l_518 = (((safe_add_func_uint8_t_u_u((0xCFL != 0x54L), (l_518 ^ ((+(*g_258)) >= (safe_mod_func_uint8_t_u_u(g_10, p_35)))))) >= g_133.f2) >= 0xBBL);
                for (g_214.f0 = 0; (g_214.f0 <= 7); g_214.f0 = safe_add_func_uint32_t_u_u(g_214.f0, 6))
                {
                    unsigned char l_524 = 0UL;
                    l_524 = ((!func_49((*l_496), l_523)) <= p_35);
                }
                if ((l_525 == (p_35 , l_528)))
                {
                    int l_537 = 1L;
                    l_523 = (*g_258);
                    if (p_36)
                    {
                        unsigned l_536 = 0UL;
                        l_523 = (4294967291UL == (safe_unary_minus_func_uint32_t_u((((***l_528) , ((safe_lshift_func_uint16_t_u_u(g_214.f2, (safe_lshift_func_int8_t_s_u(g_133.f2, 4)))) && (safe_lshift_func_uint8_t_u_u(l_536, g_56[6][1][3].f0)))) == (func_49(&l_523, p_36) > 65529UL)))));
                    }
                    else
                    {
                        l_537 = p_34;
                        if ((*g_258))
                            break;
                        if (p_35)
                            continue;
                    }
                    if (func_49(l_511[3][3][2], ((void*)0 != (**l_528))))
                    {
                        if ((*g_258))
                            break;
                        l_523 = p_34;
                    }
                    else
                    {
                        int *l_553 = &l_518;
                        (*g_147) = ((safe_add_func_uint8_t_u_u(g_214.f0, ((&g_124 != (void*)0) <= ((g_133.f2 , (safe_add_func_int32_t_s_s((-1L), (((safe_lshift_func_int8_t_s_u(g_133.f0, ((((g_320.f5 != (((safe_lshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(g_214.f2, (safe_add_func_int8_t_s_s(l_518, g_10)))) || p_35), p_34)) < p_35) & l_523)) & p_34) , 0UL) ^ 0x3DACCCEFL))) == 0x9908B099L) != (-8L))))) || l_550)))) , l_511[1][5][2]);
                        if (l_550)
                            break;
                        (*l_496) = (((void*)0 != l_551) , ((func_49((l_552[2] , ((func_49((*l_496), (*g_258)) > p_35) , l_553)), ((safe_mod_func_int16_t_s_s((((0L & g_37[1]) ^ p_36) && 0x4CF11DE4L), (*l_553))) && 0x1857L)) == g_56[6][1][3].f2) , &g_10));
                        if (l_518)
                            break;
                    }
                }
                else
                {
                    (*l_528) = &g_120;
                    for (l_550 = (-16); (l_550 != 20); l_550 = safe_add_func_uint32_t_u_u(l_550, 4))
                    {
                        if (p_35)
                            break;
                        (*g_147) = (void*)0;
                    }
                }
            }
            for (g_320.f0 = 0; (g_320.f0 > (-4)); g_320.f0--)
            {
                g_10 = 0x7AEE287AL;
                return (*g_258);
            }
        }
    }
    return p_36;
}







static int * func_38(const int * p_39, int p_40, char p_41, struct S1 p_42)
{
    unsigned l_270 = 0x0D637567L;
    unsigned short l_298 = 65529UL;
    int *l_307 = &g_107;
    int *l_353 = &g_107;
    struct S1 *l_484 = (void*)0;
    const int l_493 = 0xACE9CA10L;
    int *l_495 = &g_107;
lbl_358:
    if ((0xC515L <= (safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(0xA3L, l_270)), 2))))
    {
        int *l_271 = &g_107;
        (*l_271) = (*p_39);
    }
    else
    {
        char l_274 = 0x54L;
        int l_279 = 1L;
        for (p_42.f5 = 0; (p_42.f5 <= 3); p_42.f5 += 1)
        {
            int *l_284 = &g_10;
            int i;
            if (g_37[p_42.f5])
                break;
            if (g_37[p_42.f5])
                break;
            l_279 = (0xF30DL && (((safe_rshift_func_int16_t_s_u((g_37[p_42.f5] <= (*p_39)), l_274)) < (p_42.f0 || ((safe_add_func_int32_t_s_s((*p_39), (l_274 , (safe_mod_func_uint8_t_u_u(p_42.f3, g_214.f1))))) , g_214.f2))) > 0x30L));
            p_40 = (((((((safe_lshift_func_int16_t_s_s(l_279, ((g_125[0][3][0].f4 >= (safe_add_func_int8_t_s_s(g_37[p_42.f5], (0x1110L == ((((void*)0 == &g_120) | g_214.f5) >= (func_49(l_284, (((((((safe_lshift_func_int8_t_s_s(((((g_125[0][3][0].f5 || g_214.f4) || l_270) , (void*)0) == &p_39), 4)) || (*l_284)) == 0x0AC4L) ^ g_133.f1) & g_214.f2) <= g_10) | (-8L))) || l_270)))))) || 7UL))) || l_270) < 0UL) <= p_42.f2) , p_42.f4) ^ l_274) <= 5UL);
        }
    }
lbl_416:
    (*g_147) = &p_40;
    for (p_42.f3 = 0; (p_42.f3 < 2); p_42.f3 = safe_add_func_uint16_t_u_u(p_42.f3, 2))
    {
        unsigned l_289 = 0x34FCF984L;
        int *l_293 = &g_10;
        struct S0 l_301 = {0L,0x3F1183D3L,0L,0x39F1L,0xEEL};
        struct S0 **l_304 = &g_120;
        short l_312[1];
        struct S1 *l_371 = &g_320;
        struct S1 **l_370 = &l_371;
        short l_401 = (-6L);
        int i;
        for (i = 0; i < 1; i++)
            l_312[i] = 0x76A0L;
        if ((l_289 >= ((5UL > (safe_unary_minus_func_uint32_t_u((g_214.f3 && (safe_mod_func_uint32_t_u_u((func_49(l_293, l_270) >= (p_40 , (p_42.f4 < (+(safe_rshift_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u((0xD69EL && 0xCA2CL), g_214.f5)) < 0x7FE4AA0DL) > g_125[0][3][0].f0) , p_42.f4), p_42.f1)))))), p_42.f0)))))) || l_298)))
        {
            for (g_133.f5 = 0; (g_133.f5 <= 3); g_133.f5 += 1)
            {
                int *l_303 = (void*)0;
                for (g_10 = 3; (g_10 >= 0); g_10 -= 1)
                {
                    int *l_302 = &g_107;
                    int i;
                    p_40 = g_37[g_10];
                    (*l_302) = (safe_add_func_uint16_t_u_u(((l_301 , g_56[6][1][3].f1) ^ p_42.f0), ((void*)0 == &g_258)));
                    (*g_147) = (void*)0;
                    (*l_302) = (*g_258);
                }
                return l_303;
            }
        }
        else
        {
            unsigned char l_310 = 6UL;
            unsigned char l_311 = 247UL;
            int *l_313 = (void*)0;
            unsigned l_335[4][8] = {{4294967287UL, 0x5AF0C2C9L, 4294967287UL, 1UL, 0UL, 0x04BFDDC9L, 1UL, 1UL}, {4294967287UL, 0x5AF0C2C9L, 4294967287UL, 1UL, 0UL, 0x04BFDDC9L, 1UL, 1UL}, {4294967287UL, 0x5AF0C2C9L, 4294967287UL, 1UL, 0UL, 0x04BFDDC9L, 1UL, 1UL}, {4294967287UL, 0x5AF0C2C9L, 4294967287UL, 1UL, 0UL, 0x04BFDDC9L, 1UL, 1UL}};
            struct S0 l_340 = {0x41L,0UL,1L,65535UL,-8L};
            int i, j;
            if (((((p_42.f5 | g_214.f0) , (func_49(l_293, (l_304 == (((g_56[6][1][3].f3 , (safe_mod_func_int32_t_s_s((l_312[0] >= g_10), 0xC835956CL))) , 0xBAL) , &g_120))) <= g_56[6][1][3].f2)) || (-6L)) || g_37[3]))
            {
                return l_313;
            }
            else
            {
                const struct S1 *l_319 = &g_320;
                int l_321[8][10] = {{(-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL}, {(-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL}, {(-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL}, {(-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL}, {(-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL}, {(-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL}, {(-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL}, {(-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL, (-1L), 0x49E0866EL}};
                int i, j;
                for (g_214.f0 = 7; (g_214.f0 <= (-24)); g_214.f0 = safe_sub_func_uint32_t_u_u(g_214.f0, 3))
                {
                    for (p_42.f1 = 13; (p_42.f1 < 19); p_42.f1 = safe_add_func_uint8_t_u_u(p_42.f1, 1))
                    {
                        return l_313;
                    }
                }
                if ((*g_258))
                {
                    const struct S1 **l_318[4][10] = {{&g_124, &g_124, (void*)0, (void*)0, &g_124, &g_124, &g_124, (void*)0, (void*)0, &g_124}, {&g_124, &g_124, (void*)0, (void*)0, &g_124, &g_124, &g_124, (void*)0, (void*)0, &g_124}, {&g_124, &g_124, (void*)0, (void*)0, &g_124, &g_124, &g_124, (void*)0, (void*)0, &g_124}, {&g_124, &g_124, (void*)0, (void*)0, &g_124, &g_124, &g_124, (void*)0, (void*)0, &g_124}};
                    int *l_326 = &g_107;
                    unsigned l_327 = 1UL;
                    short l_328 = 0x79D2L;
                    const int **l_329 = &g_258;
                    int i, j;
                    l_319 = &g_125[0][3][0];
                    p_39 = func_43(g_320.f0, p_42.f4, (*p_39), (*g_258), l_321[3][5]);
                    (*l_329) = func_43((0UL == ((safe_add_func_int8_t_s_s(((-1L) == ((*l_307) <= (&g_119 == &g_119))), 0xE4L)) | (safe_add_func_int16_t_s_s((p_40 , (*l_307)), (func_49(l_326, (*l_307)) == l_327))))), p_42.f3, l_328, (*l_326), (*g_258));
                    for (g_10 = 3; (g_10 >= 0); g_10 -= 1)
                    {
                        struct S1 **l_332 = (void*)0;
                        if ((*p_39))
                            break;
                        (*l_329) = func_43(g_125[0][3][0].f5, g_125[0][3][0].f5, (safe_rshift_func_int16_t_s_s(((&p_42 != (void*)0) | 6L), (p_42.f5 & (g_133.f5 ^ (l_332 != l_318[0][0]))))), (*l_326), (*p_39));
                        (*l_329) = func_43(p_41, (safe_sub_func_int32_t_s_s(((l_321[3][5] , g_320.f1) , l_335[3][3]), 0xA8D3366AL)), (*p_39), (safe_sub_func_int8_t_s_s((g_37[2] & ((0xE4292961L == (l_340 , (*p_39))) != (-2L))), p_42.f0)), (*l_293));
                    }
                }
                else
                {
                    struct S0 *l_343 = &g_56[1][2][2];
                    for (g_133.f3 = 0; (g_133.f3 <= (-16)); g_133.f3 = safe_sub_func_uint8_t_u_u(g_133.f3, 9))
                    {
                        return l_307;
                    }
                    (*l_293) = ((void*)0 != l_343);
                }
                (*g_147) = l_307;
                for (l_310 = 29; (l_310 == 26); l_310--)
                {
                    short l_348 = (-1L);
                    for (g_107 = (-1); (g_107 > (-2)); g_107 = safe_sub_func_uint16_t_u_u(g_107, 1))
                    {
                        (*g_147) = l_313;
                        if (l_348)
                            break;
                        if ((*p_39))
                            continue;
                    }
                }
            }
            (*l_307) = ((p_42.f5 , ((g_133.f4 , 0UL) && ((func_49(l_313, (*p_39)) , ((p_42 , ((safe_lshift_func_int16_t_s_u((g_125[0][3][0].f0 <= ((safe_mod_func_int16_t_s_s(l_340.f4, 0x4A64L)) , 5L)), p_40)) , g_125[0][3][0].f1)) <= 0x2FL)) , g_125[0][3][0].f5))) > p_41);
            return l_353;
        }
        for (p_42.f4 = 0; (p_42.f4 >= 23); ++p_42.f4)
        {
            const struct S1 **l_377 = &g_124;
            int l_391 = 0L;
            int *l_403 = &g_107;
            int *l_411 = &g_10;
            unsigned l_427 = 0x289B0380L;
            struct S0 l_433 = {-7L,0UL,-4L,65535UL,-9L};
            unsigned short l_455 = 0xD6E8L;
            for (g_320.f1 = 21; (g_320.f1 <= 1); --g_320.f1)
            {
                int l_367[3];
                int *l_380 = &g_10;
                int i;
                for (i = 0; i < 3; i++)
                    l_367[i] = (-1L);
                if (l_301.f2)
                    goto lbl_358;
                if ((safe_rshift_func_int16_t_s_s(1L, (g_56[6][1][3].f1 , p_42.f3))))
                {
                    (*l_307) = (p_42.f1 > (-5L));
                    for (g_10 = 0; (g_10 != (-10)); g_10 = safe_sub_func_uint8_t_u_u(g_10, 8))
                    {
                        short l_366 = 0xFF91L;
                        (*l_353) = (((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(g_56[6][1][3].f0)), l_366)) != (l_367[0] != g_133.f0)) & 0xE45A2E24L);
                        p_39 = ((&p_39 != ((safe_add_func_uint16_t_u_u((((((-1L) & 0x69L) , 250UL) < ((void*)0 == l_370)) == (*l_307)), ((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u((((safe_mod_func_uint16_t_u_u(p_40, g_133.f0)) , 0xBA11L) , g_37[3]))), l_367[0])) > g_320.f0))) , &l_293)) , l_353);
                    }
                }
                else
                {
                    l_377 = &g_124;
                    for (g_10 = (-15); (g_10 < 18); g_10++)
                    {
                        return l_293;
                    }
                    (*l_377) = &p_42;
                }
                if ((*l_353))
                {
                    unsigned l_398 = 1UL;
                    (*l_380) = func_49(l_380, (func_49(func_57((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(g_56[6][1][3].f2, (p_41 && ((g_56[6][1][3].f2 , 0x9AL) >= 0L)))), (safe_add_func_uint8_t_u_u(g_56[6][1][3].f2, (safe_mod_func_uint32_t_u_u(p_42.f3, p_40)))))), 0x3FEFL)), l_380), l_391) >= p_42.f4));
                    (*l_293) = ((safe_sub_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(248UL, (safe_sub_func_uint32_t_u_u(l_398, 1UL)))) , ((**g_119) , ((((((g_125[0][3][0].f2 , &g_120) != &g_120) ^ (((((((safe_mod_func_uint16_t_u_u((249UL == l_391), l_401)) < g_56[6][1][3].f3) == 0xFCE5L) , (void*)0) != &p_40) > (*l_380)) >= 0x8BL)) && 0xB2DCD3B6L) , 0xCA4A8E8BL) , g_320.f5))), g_133.f4)) && 0x00L);
                    if (((l_391 <= p_42.f4) >= func_49(l_293, (*p_39))))
                    {
                        (*g_147) = &p_40;
                    }
                    else
                    {
                        (*l_304) = (*g_119);
                    }
                }
                else
                {
                    short l_402 = (-1L);
                    int ** const l_417 = &l_380;
                    (*l_353) = l_402;
                    if ((*l_380))
                        continue;
                    l_403 = l_380;
                    if ((*l_403))
                    {
                        short l_408 = 0xE1E9L;
                        p_40 = (safe_add_func_uint8_t_u_u((p_42.f2 || ((p_42.f5 || (safe_lshift_func_uint8_t_u_u(l_408, 7))) > (((safe_sub_func_uint32_t_u_u(func_49(l_411, (((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(func_49(l_380, (*p_39)), (p_42.f5 == (&l_391 != &p_40)))), (*g_258))) < g_125[0][3][0].f2) , l_408)), (*g_258))) , g_133.f1) , p_42.f2))), 1UL));
                        if (p_42.f0)
                            goto lbl_416;
                        (*l_403) = (*p_39);
                        (*l_353) = (((+(0x50L == p_42.f2)) & 65527UL) , (((!0xC27EL) <= ((void*)0 != l_417)) & (*p_39)));
                    }
                    else
                    {
                        int *l_418[9][6] = {{&g_107, &g_10, &g_10, &l_391, &g_10, &g_10}, {&g_107, &g_10, &g_10, &l_391, &g_10, &g_10}, {&g_107, &g_10, &g_10, &l_391, &g_10, &g_10}, {&g_107, &g_10, &g_10, &l_391, &g_10, &g_10}, {&g_107, &g_10, &g_10, &l_391, &g_10, &g_10}, {&g_107, &g_10, &g_10, &l_391, &g_10, &g_10}, {&g_107, &g_10, &g_10, &l_391, &g_10, &g_10}, {&g_107, &g_10, &g_10, &l_391, &g_10, &g_10}, {&g_107, &g_10, &g_10, &l_391, &g_10, &g_10}};
                        int i, j;
                        p_39 = l_353;
                        g_124 = &p_42;
                        (*g_147) = (g_125[0][3][0].f2 , (*l_417));
                    }
                }
                (*g_147) = l_293;
            }
            if ((p_41 != ((p_42.f1 && g_320.f0) <= ((p_42.f0 != ((((safe_add_func_int32_t_s_s(((0x59L >= (*l_293)) > ((safe_mod_func_uint8_t_u_u((*l_293), g_214.f5)) > 65532UL)), l_427)) ^ g_320.f1) | 0xD63BL) < p_40)) <= 4L))))
            {
                const char l_428 = 0xE0L;
                int *l_449 = &g_10;
                (*l_293) = func_49(l_353, (g_320.f5 ^ l_428));
                if (((safe_add_func_int32_t_s_s(0xACEA57B9L, p_42.f0)) , (safe_rshift_func_int16_t_s_s(((l_433 , (((*l_293) || 0UL) , (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((((void*)0 == &g_320) , (*p_39)), g_214.f2)), g_56[6][1][3].f3)))) , 7L), p_42.f5))))
                {
                    return l_293;
                }
                else
                {
                    int *l_444 = &l_391;
                    for (l_401 = 21; (l_401 > (-20)); l_401--)
                    {
                        struct S0 l_442 = {0x33L,0x8F2CDA68L,-1L,0UL,0L};
                        int l_443 = 0x23654E69L;
                        l_443 = ((func_49((g_214.f0 , &p_40), l_428) && (*l_403)) , (func_49(&g_107, (((((p_42.f4 , (void*)0) == &g_125[0][3][0]) >= (*l_307)) || l_442.f1) , l_428)) & (-1L)));
                        l_443 = (4294967286UL >= l_442.f0);
                        (*g_147) = func_57(p_42.f0, func_57(((*p_39) , (func_49(&g_10, (*p_39)) > (*l_353))), l_444));
                    }
                    if ((*p_39))
                        break;
                }
                for (p_42.f0 = (-1); (p_42.f0 <= 17); ++p_42.f0)
                {
                    unsigned char l_450 = 0x8CL;
                    const int **l_456 = &g_258;
                    for (p_42.f1 = 0; (p_42.f1 != 19); p_42.f1 = safe_add_func_int32_t_s_s(p_42.f1, 7))
                    {
                        return l_449;
                    }
                    (*l_411) = (*p_39);
                }
            }
            else
            {
                short l_459 = 0xE727L;
                for (l_401 = 8; (l_401 == 29); l_401++)
                {
                    char l_468 = 6L;
                    if (l_459)
                        break;
                    (*l_411) = ((safe_add_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((g_107 > (((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(l_468, 6)), ((**l_304) , (safe_lshift_func_uint16_t_u_u(l_459, 6))))) <= g_125[0][3][0].f3) < (func_49(l_293, (*p_39)) , ((**g_119) , g_125[0][3][0].f2)))), (*l_307))) | 9UL), l_459)) != p_41);
                    (*g_147) = &p_40;
                    (*l_370) = &g_320;
                }
            }
            if ((*p_39))
                break;
        }
        if ((*l_293))
        {
            unsigned l_473[3][5] = {{4294967288UL, 4294967288UL, 1UL, 0x689A74B3L, 0x16CC6001L}, {4294967288UL, 4294967288UL, 1UL, 0x689A74B3L, 0x16CC6001L}, {4294967288UL, 4294967288UL, 1UL, 0x689A74B3L, 0x16CC6001L}};
            unsigned l_477 = 0x8781D87BL;
            int *l_485 = &g_10;
            int i, j;
            for (g_133.f1 = 28; (g_133.f1 > (-16)); g_133.f1--)
            {
                int l_476 = 0xD807253AL;
                (*l_353) = l_473[2][4];
                (*l_307) = (func_49(&p_40, (func_49(&p_40, ((0UL != (1UL != (g_125[0][3][0].f2 && (((((safe_lshift_func_uint8_t_u_u(((l_473[2][4] >= (+(((((void*)0 == &l_371) && (*l_307)) , g_320.f1) , l_476))) && l_477), l_473[2][4])) > p_42.f5) != (*p_39)) < l_473[2][4]) || (*l_293))))) , 0L)) || (*g_258))) ^ l_477);
                if ((+((safe_add_func_int8_t_s_s(((*l_307) > func_49(&p_40, (safe_add_func_uint16_t_u_u(((+((void*)0 == &g_120)) < (safe_sub_func_uint32_t_u_u(0x878BC4DDL, func_49(&l_476, ((*l_370) != ((0x8B0E240CL & ((*p_39) ^ p_42.f2)) , &g_320)))))), (*l_307))))), 0UL)) > 1UL)))
                {
                    (*l_307) = (*l_353);
                }
                else
                {
                    int l_486[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_486[i] = 0xDCB0DFDFL;
                    for (g_320.f0 = 2; (g_320.f0 >= 0); g_320.f0 -= 1)
                    {
                        (*l_370) = l_484;
                        (*l_370) = (void*)0;
                    }
                    if (((p_42.f3 , g_214.f0) ^ func_49(&g_10, func_49(l_485, l_486[2]))))
                    {
                        if ((*g_258))
                            break;
                    }
                    else
                    {
                        (*g_147) = &p_40;
                        p_40 = (p_42.f0 , (safe_sub_func_uint32_t_u_u(g_125[0][3][0].f0, p_42.f3)));
                    }
                }
            }
            (*l_293) = ((!(*l_307)) != (((safe_lshift_func_uint8_t_u_s(((g_56[6][1][3].f1 != ((**l_304) , (*l_485))) == 0x56C42622L), ((*l_293) == p_42.f3))) ^ (((g_133.f2 || (safe_add_func_uint32_t_u_u((g_214.f0 , p_42.f2), 0xD13AB0ACL))) | l_493) > (-1L))) || p_40));
            (*g_147) = l_293;
        }
        else
        {
            int *l_494 = (void*)0;
            return l_494;
        }
        if ((**g_147))
            continue;
    }
    return l_495;
}







static const int * func_43(char p_44, unsigned short p_45, int p_46, int p_47, int p_48)
{
    int l_263[6][7] = {{0x7AA4A9C5L, 0L, (-1L), 0xE834E38EL, 0x81ACE426L, (-3L), 0x720C5B31L}, {0x7AA4A9C5L, 0L, (-1L), 0xE834E38EL, 0x81ACE426L, (-3L), 0x720C5B31L}, {0x7AA4A9C5L, 0L, (-1L), 0xE834E38EL, 0x81ACE426L, (-3L), 0x720C5B31L}, {0x7AA4A9C5L, 0L, (-1L), 0xE834E38EL, 0x81ACE426L, (-3L), 0x720C5B31L}, {0x7AA4A9C5L, 0L, (-1L), 0xE834E38EL, 0x81ACE426L, (-3L), 0x720C5B31L}, {0x7AA4A9C5L, 0L, (-1L), 0xE834E38EL, 0x81ACE426L, (-3L), 0x720C5B31L}};
    int *l_264 = &g_107;
    const int *l_265[10] = {&g_107, &g_10, &g_107, &g_10, &g_107, &g_10, &g_107, &g_10, &g_107, &g_10};
    int i, j;
    (*l_264) = (g_37[0] || l_263[1][2]);
    return l_265[1];
}







static char func_49(int * p_50, int p_51)
{
    struct S0 * const l_177 = (void*)0;
    const struct S1 *l_181 = &g_125[0][3][0];
    int l_183 = 0x904DDF84L;
    const int *l_261 = &g_10;
    for (g_133.f3 = 0; (g_133.f3 <= 3); g_133.f3 = safe_add_func_uint32_t_u_u(g_133.f3, 1))
    {
        return p_51;
    }
    if (p_51)
        goto lbl_178;
lbl_178:
    p_51 = ((-1L) ^ (l_177 != l_177));
    if ((safe_sub_func_int16_t_s_s(((l_181 == ((*l_181) , l_181)) ^ 1L), p_51)))
    {
        unsigned l_182 = 0UL;
        int l_188[4][6] = {{1L, 1L, (-3L), 1L, 1L, (-3L)}, {1L, 1L, (-3L), 1L, 1L, (-3L)}, {1L, 1L, (-3L), 1L, 1L, (-3L)}, {1L, 1L, (-3L), 1L, 1L, (-3L)}};
        int i, j;
        (*g_147) = func_57((+l_182), func_57((((p_51 <= ((g_125[0][3][0].f0 <= l_183) != (safe_rshift_func_uint8_t_u_s((p_51 != g_125[0][3][0].f1), 6)))) < (safe_lshift_func_int8_t_s_u(1L, 0))) , g_56[6][1][3].f1), &l_183));
        l_188[1][5] = (g_133.f1 , 0x432B5EFDL);
    }
    else
    {
        return g_56[6][1][3].f0;
    }
    for (p_51 = (-14); (p_51 == (-29)); --p_51)
    {
        struct S0 **l_191[3];
        int l_202 = 0x432456AFL;
        struct S1 *l_213 = &g_214;
        int *l_235 = &l_183;
        int i;
        for (i = 0; i < 3; i++)
            l_191[i] = &g_120;
    }
    return p_51;
}







static struct S0 func_52(struct S0 p_53, int * const p_54, const struct S1 p_55)
{
    unsigned l_89 = 0x6A3B5EBDL;
    int l_108 = 0x09C9891BL;
    struct S1 *l_132 = &g_133;
    struct S1 ** const l_131 = &l_132;
    struct S0 l_167 = {-1L,0xD95B1CF1L,0L,65535UL,0x19L};
lbl_146:
    if (l_89)
    {
        int *l_111 = &g_10;
        const struct S1 **l_126 = &g_124;
        for (g_10 = 0; (g_10 < (-6)); g_10 = safe_sub_func_int8_t_s_s(g_10, 9))
        {
            int *l_106[10][6][4] = {{{&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}}, {{&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}}, {{&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}}, {{&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}}, {{&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}}, {{&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}}, {{&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}}, {{&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}}, {{&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}}, {{&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}, {&g_107, &g_10, (void*)0, (void*)0}}};
            int i, j, k;
            l_108 = ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((g_56[6][1][3].f2 , g_56[6][1][3].f0) > (safe_add_func_uint16_t_u_u(g_56[6][1][3].f4, g_37[2]))) >= p_55.f5), p_53.f2)), 4)), (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(g_56[6][1][3].f0, 7)), (safe_add_func_int16_t_s_s(p_55.f4, p_55.f0)))))) && g_56[6][1][3].f2);
            for (p_53.f4 = 3; (p_53.f4 >= 0); p_53.f4 -= 1)
            {
                int **l_112 = &l_106[1][3][2];
                char l_123 = 0x40L;
                for (l_108 = 0; (l_108 <= 3); l_108 += 1)
                {
                    unsigned char l_110 = 0UL;
                    for (p_53.f1 = 0; (p_53.f1 <= 3); p_53.f1 += 1)
                    {
                        int i;
                        g_107 = g_37[p_53.f4];
                        if (g_37[p_53.f4])
                            break;
                        return g_56[2][3][3];
                    }
                    for (p_53.f1 = 0; (p_53.f1 <= 3); p_53.f1 += 1)
                    {
                        unsigned l_109 = 4294967295UL;
                        if (g_37[0])
                            break;
                        l_110 = l_109;
                    }
                }
                (*l_112) = l_111;
                for (p_53.f1 = 0; (p_53.f1 <= 3); p_53.f1 += 1)
                {
                    unsigned char l_114 = 0xE5L;
                    for (l_89 = 0; (l_89 <= 3); l_89 += 1)
                    {
                        int *l_113 = &g_10;
                        int i, j, k;
                        l_106[l_89][(l_89 + 1)][p_53.f1] = l_113;
                    }
                    for (l_108 = 3; (l_108 >= 0); l_108 -= 1)
                    {
                        l_114 = (*p_54);
                        g_107 = (safe_sub_func_uint32_t_u_u((((l_114 , (0x4FL > 0x53L)) == (safe_lshift_func_uint8_t_u_u(9UL, (l_114 ^ ((g_37[2] & g_37[2]) & 0x1AL))))) , ((g_37[0] != 0xE6L) , p_55.f0)), 1L));
                        (*l_112) = l_106[1][3][2];
                        g_107 = (((g_37[3] == ((g_119 != &g_120) < g_56[6][1][3].f0)) , g_56[6][1][3].f4) | (+(safe_lshift_func_uint8_t_u_s(1UL, l_123))));
                    }
                }
            }
        }
        (*l_126) = g_124;
    }
    else
    {
        struct S0 ***l_127 = &g_119;
        struct S0 *l_130 = (void*)0;
        (*l_127) = &g_120;
        (*p_54) = (safe_lshift_func_int8_t_s_s((p_55.f3 ^ ((*p_54) != g_125[0][3][0].f5)), ((&g_124 == &g_124) >= ((((&g_124 != &g_124) , ((((l_130 != (*g_119)) >= 248UL) , l_89) , l_131)) != &l_132) != l_108))));
    }
    for (g_133.f4 = 0; (g_133.f4 != 27); g_133.f4 = safe_add_func_uint8_t_u_u(g_133.f4, 3))
    {
        unsigned char l_136[6][4][6] = {{{255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}}, {{255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}}, {{255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}}, {{255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}}, {{255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}}, {{255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}, {255UL, 254UL, 3UL, 1UL, 6UL, 0x40L}}};
        int *l_168[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_168[i] = &l_108;
        if (l_136[3][2][0])
        {
            int l_150 = 1L;
            for (l_108 = 0; (l_108 == (-1)); --l_108)
            {
                int *l_139 = &g_10;
                unsigned short l_166 = 1UL;
                if ((*p_54))
                {
                    int **l_140 = &l_139;
                    (*l_140) = func_57(l_89, l_139);
                    (*p_54) = ((~g_10) > ((safe_sub_func_uint16_t_u_u(p_53.f1, p_55.f3)) <= g_133.f5));
                    g_107 = g_133.f2;
                }
                else
                {
                    const struct S1 **l_149[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_149[i] = &g_124;
                    for (g_133.f0 = 0; (g_133.f0 >= (-25)); --g_133.f0)
                    {
                        int **l_145 = &l_139;
                        (*l_145) = &l_108;
                        if (g_133.f4)
                            goto lbl_146;
                        (*l_145) = (*l_145);
                    }
                    g_147 = g_147;
                    g_124 = &g_125[0][1][0];
                }
                for (g_133.f3 = 3; (g_133.f3 >= 0); g_133.f3 -= 1)
                {
                    unsigned char l_165 = 0xDFL;
                    for (p_53.f4 = 0; (p_53.f4 <= 3); p_53.f4 += 1)
                    {
                        int i;
                        (*p_54) = g_37[g_133.f3];
                        (*g_147) = (*g_147);
                        (*p_54) = (**g_147);
                    }
                    for (p_53.f4 = 0; (p_53.f4 <= 3); p_53.f4 += 1)
                    {
                        int l_153 = (-1L);
                        int *l_156[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_156[i] = &g_10;
                        (*g_147) = ((p_55.f0 && (((+g_133.f4) || (((l_150 , ((l_108 | p_53.f1) < (safe_add_func_int16_t_s_s(l_153, p_53.f2)))) < (((safe_rshift_func_uint16_t_u_s((2L <= (p_54 == (void*)0)), p_53.f4)) , 0x1BL) && p_55.f2)) > g_125[0][3][0].f2)) && g_10)) , (void*)0);
                        l_156[3] = (*g_147);
                        (*p_54) = (g_56[6][1][3].f3 && (((p_55 , ((((((((p_53.f2 , ((((safe_sub_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u(0x0A57L, 7)) , l_139) == (void*)0), (safe_rshift_func_uint8_t_u_s(g_133.f5, (p_53.f4 | (safe_mod_func_int8_t_s_s(p_53.f4, p_55.f1))))))) == l_165) & l_166) < l_150)) <= (*l_139)) > p_53.f1) < p_55.f4) >= l_108) || g_133.f4) , (*l_139)) == 0xBBL)) < g_133.f4) ^ p_53.f1));
                        (*g_147) = (*g_147);
                    }
                    return l_167;
                }
                (*p_54) = ((**g_147) ^ g_56[6][1][3].f3);
                for (p_53.f4 = 3; (p_53.f4 >= 0); p_53.f4 -= 1)
                {
                    if (g_133.f0)
                        goto lbl_146;
                }
            }
        }
        else
        {
            unsigned short l_169 = 0xF410L;
            if ((*p_54))
                break;
            l_168[0] = p_54;
            if (g_133.f4)
                goto lbl_146;
            (*g_148) = l_169;
        }
        if ((0x3351E878L & p_55.f1))
        {
            struct S0 l_170 = {0x68L,0x339926BEL,0xE2L,0x047DL,0x95L};
            return l_170;
        }
        else
        {
            (*g_147) = l_168[0];
            if ((*p_54))
                continue;
            (*g_147) = l_168[0];
            (**g_147) = (g_37[0] != (safe_sub_func_uint8_t_u_u(p_55.f5, g_133.f4)));
        }
    }
    return (*g_120);
}







static int * func_57(char p_58, int * p_59)
{
    int *l_64 = &g_10;
    struct S0 *l_67 = &g_56[6][1][3];
    int **l_87 = &l_64;
    if ((*p_59))
    {
        const char l_71 = (-1L);
        int **l_72 = (void*)0;
        int **l_73 = &l_64;
        if ((*p_59))
        {
            (*p_59) = g_56[6][1][3].f2;
            (*l_64) = (g_56[6][1][3].f1 > ((*p_59) > ((safe_add_func_uint16_t_u_u(p_58, (+g_56[6][1][3].f1))) , (0x7FF4L | ((void*)0 != l_64)))));
            for (g_10 = (-30); (g_10 >= (-15)); ++g_10)
            {
                struct S0 **l_68 = &l_67;
                (*l_68) = l_67;
                return &g_10;
            }
        }
        else
        {
            (*p_59) = (safe_mod_func_uint16_t_u_u(l_71, (+(p_58 >= g_56[6][1][3].f4))));
        }
        (*l_73) = p_59;
        for (g_10 = (-5); (g_10 > (-6)); g_10--)
        {
            (*l_73) = p_59;
            (*l_73) = (*l_73);
            return p_59;
        }
    }
    else
    {
        int **l_76 = &l_64;
        (*l_76) = l_64;
        for (p_58 = 9; (p_58 > 22); p_58 = safe_add_func_uint16_t_u_u(p_58, 8))
        {
            unsigned short l_81 = 65527UL;
            unsigned l_82 = 4UL;
            if ((((safe_rshift_func_uint8_t_u_u(g_56[6][1][3].f4, 3)) , g_56[6][1][3].f3) || g_56[6][1][3].f4))
            {
                (**l_76) = (((1UL || (l_81 > l_82)) || (**l_76)) ^ p_58);
                (*p_59) = g_56[6][1][3].f4;
                for (g_10 = 23; (g_10 < 3); --g_10)
                {
                    return p_59;
                }
            }
            else
            {
                (*p_59) = ((l_81 && (p_58 , (0x208B9B0AL & (safe_sub_func_int16_t_s_s((-1L), g_56[6][1][3].f3))))) < l_81);
            }
        }
        return p_59;
    }
    (*l_87) = p_59;
    return &g_10;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_37[i], "g_37[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_56[i][j][k].f0, "g_56[i][j][k].f0", print_hash_value);
                transparent_crc(g_56[i][j][k].f1, "g_56[i][j][k].f1", print_hash_value);
                transparent_crc(g_56[i][j][k].f2, "g_56[i][j][k].f2", print_hash_value);
                transparent_crc(g_56[i][j][k].f3, "g_56[i][j][k].f3", print_hash_value);
                transparent_crc(g_56[i][j][k].f4, "g_56[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_125[i][j][k].f0, "g_125[i][j][k].f0", print_hash_value);
                transparent_crc(g_125[i][j][k].f1, "g_125[i][j][k].f1", print_hash_value);
                transparent_crc(g_125[i][j][k].f2, "g_125[i][j][k].f2", print_hash_value);
                transparent_crc(g_125[i][j][k].f3, "g_125[i][j][k].f3", print_hash_value);
                transparent_crc(g_125[i][j][k].f4, "g_125[i][j][k].f4", print_hash_value);
                transparent_crc(g_125[i][j][k].f5, "g_125[i][j][k].f5", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_133.f0, "g_133.f0", print_hash_value);
    transparent_crc(g_133.f1, "g_133.f1", print_hash_value);
    transparent_crc(g_133.f2, "g_133.f2", print_hash_value);
    transparent_crc(g_133.f3, "g_133.f3", print_hash_value);
    transparent_crc(g_133.f4, "g_133.f4", print_hash_value);
    transparent_crc(g_133.f5, "g_133.f5", print_hash_value);
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_214.f1, "g_214.f1", print_hash_value);
    transparent_crc(g_214.f2, "g_214.f2", print_hash_value);
    transparent_crc(g_214.f3, "g_214.f3", print_hash_value);
    transparent_crc(g_214.f4, "g_214.f4", print_hash_value);
    transparent_crc(g_214.f5, "g_214.f5", print_hash_value);
    transparent_crc(g_320.f0, "g_320.f0", print_hash_value);
    transparent_crc(g_320.f1, "g_320.f1", print_hash_value);
    transparent_crc(g_320.f2, "g_320.f2", print_hash_value);
    transparent_crc(g_320.f3, "g_320.f3", print_hash_value);
    transparent_crc(g_320.f4, "g_320.f4", print_hash_value);
    transparent_crc(g_320.f5, "g_320.f5", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_646, "g_646", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_952[i], "g_952[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1323[i], "g_1323[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
