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
   unsigned f0 : 3;
   signed f1 : 14;
   signed f2 : 25;
   volatile signed : 0;
   signed f3 : 17;
   unsigned f4 : 6;
   signed f5 : 13;
   unsigned f6 : 12;
};

union U2 {
   char f0;
};


static volatile unsigned g_2 = 0UL;
static int g_14 = 0x017779A7L;
static struct S0 g_25[2][2] = {{{0,-85,-3515,31,5,67,45}, {0,23,4635,-243,1,-77,10}}, {{0,-85,-3515,31,5,67,45}, {0,23,4635,-243,1,-77,10}}};
static struct S0 g_26 = {0,30,3127,-322,6,-1,43};
static struct S0 g_27 = {0,-45,-2302,281,6,5,31};
static struct S0 g_28 = {1,76,-2671,-120,5,8,55};
static volatile short g_82 = 0L;
static union U2 g_104 = {-1L};
static short g_150 = 0xC754L;
static struct S0 g_151[10] = {{0,74,4774,48,5,61,60}, {0,74,4774,48,5,61,60}, {1,47,3278,293,1,-36,43}, {0,74,4774,48,5,61,60}, {0,74,4774,48,5,61,60}, {1,47,3278,293,1,-36,43}, {0,74,4774,48,5,61,60}, {0,74,4774,48,5,61,60}, {1,47,3278,293,1,-36,43}, {0,74,4774,48,5,61,60}};
static struct S0 g_163 = {1,-107,948,-57,2,50,16};
static int g_205 = 0xE331C18BL;
static struct S0 g_209 = {0,-81,-2326,162,5,-7,10};
static struct S0 g_252 = {1,108,-1362,97,7,21,49};
static struct S0 g_275[1] = {{1,-80,3968,-40,0,-4,59}};
static struct S0 g_293 = {0,1,566,175,6,-13,60};
static volatile struct S0 g_310 = {1,48,-1295,234,4,-89,62};
static volatile struct S0 g_311 = {1,127,-5097,-196,6,10,61};
static struct S0 g_387 = {0,-23,5731,294,3,-50,52};
static struct S0 g_460 = {1,40,1497,-213,0,77,56};
static volatile struct S0 g_520 = {1,-113,5168,327,0,58,62};
static volatile struct S0 g_521 = {0,44,-3411,-96,0,-65,57};
static int g_545[7][6] = {{0xF39A5F26L, 0x5BE66146L, 3L, 0x5BE66146L, 0xF39A5F26L, 3L}, {0xF39A5F26L, 0x5BE66146L, 3L, 0x5BE66146L, 0xF39A5F26L, 3L}, {0xF39A5F26L, 0x5BE66146L, 3L, 0x5BE66146L, 0xF39A5F26L, 3L}, {0xF39A5F26L, 0x5BE66146L, 3L, 0x5BE66146L, 0xF39A5F26L, 3L}, {0xF39A5F26L, 0x5BE66146L, 3L, 0x5BE66146L, 0xF39A5F26L, 3L}, {0xF39A5F26L, 0x5BE66146L, 3L, 0x5BE66146L, 0xF39A5F26L, 3L}, {0xF39A5F26L, 0x5BE66146L, 3L, 0x5BE66146L, 0xF39A5F26L, 3L}};
static short g_576 = 0x9F17L;
static struct S0 g_606 = {0,63,-3580,-114,0,35,40};
static volatile struct S0 g_634[10][2] = {{{1,64,-2956,17,0,8,46}, {1,8,622,348,2,-40,59}}, {{1,64,-2956,17,0,8,46}, {1,8,622,348,2,-40,59}}, {{1,64,-2956,17,0,8,46}, {1,8,622,348,2,-40,59}}, {{1,64,-2956,17,0,8,46}, {1,8,622,348,2,-40,59}}, {{1,64,-2956,17,0,8,46}, {1,8,622,348,2,-40,59}}, {{1,64,-2956,17,0,8,46}, {1,8,622,348,2,-40,59}}, {{1,64,-2956,17,0,8,46}, {1,8,622,348,2,-40,59}}, {{1,64,-2956,17,0,8,46}, {1,8,622,348,2,-40,59}}, {{1,64,-2956,17,0,8,46}, {1,8,622,348,2,-40,59}}, {{1,64,-2956,17,0,8,46}, {1,8,622,348,2,-40,59}}};
static struct S0 g_635 = {1,32,3652,-77,2,-44,14};
static volatile struct S0 g_650 = {1,-67,569,322,0,-83,45};
static volatile struct S0 g_672 = {1,12,-2057,209,7,78,63};
static struct S0 g_693 = {0,-59,2691,118,0,-63,34};
static struct S0 g_694 = {1,-107,1270,-207,7,30,57};
static struct S0 g_722 = {0,-67,1239,-20,3,46,47};
static struct S0 g_723 = {0,-109,5128,137,5,-72,29};
static unsigned short g_746 = 65533UL;
static volatile struct S0 g_747 = {0,48,1790,219,4,-87,13};
static volatile struct S0 g_748[1][4] = {{{1,-46,-375,-123,6,42,31}, {1,-46,-375,-123,6,42,31}, {1,-46,-375,-123,6,42,31}, {1,-46,-375,-123,6,42,31}}};
static struct S0 g_749 = {0,52,64,137,7,-0,16};
static volatile int g_761 = 2L;
static struct S0 g_792 = {1,77,-1612,-222,2,-44,44};
static struct S0 g_830 = {0,120,2116,261,2,-47,61};
static volatile unsigned g_870[10] = {4294967295UL, 0xF4F946ABL, 4294967295UL, 0xF4F946ABL, 4294967295UL, 0xF4F946ABL, 4294967295UL, 0xF4F946ABL, 4294967295UL, 0xF4F946ABL};
static volatile struct S0 g_896 = {1,-55,-2363,-273,0,38,11};
static volatile struct S0 g_897[5][1][6] = {{{{0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}}}, {{{0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}}}, {{{0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}}}, {{{0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}}}, {{{0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}, {0,5,-3053,247,1,34,23}}}};
static volatile struct S0 g_898[4] = {{1,22,718,-204,6,-68,35}, {1,123,-3824,80,7,-30,5}, {1,22,718,-204,6,-68,35}, {1,123,-3824,80,7,-30,5}};
static int g_917 = 0xEA9E068AL;
static struct S0 g_948 = {1,-118,4193,39,5,-60,4};
static struct S0 g_951[3][6] = {{{0,30,-5640,32,3,-12,27}, {1,5,-5548,259,6,-40,11}, {1,-110,-2869,139,6,-69,60}, {1,5,-5548,259,6,-40,11}, {0,30,-5640,32,3,-12,27}, {1,5,-5548,259,6,-40,11}}, {{0,30,-5640,32,3,-12,27}, {1,5,-5548,259,6,-40,11}, {1,-110,-2869,139,6,-69,60}, {1,5,-5548,259,6,-40,11}, {0,30,-5640,32,3,-12,27}, {1,5,-5548,259,6,-40,11}}, {{0,30,-5640,32,3,-12,27}, {1,5,-5548,259,6,-40,11}, {1,-110,-2869,139,6,-69,60}, {1,5,-5548,259,6,-40,11}, {0,30,-5640,32,3,-12,27}, {1,5,-5548,259,6,-40,11}}};
static struct S0 g_952 = {1,20,-5175,-56,6,-64,48};
static int g_984 = (-7L);



static unsigned func_1(void);
static unsigned short func_3(char p_4, unsigned char p_5, unsigned short p_6, int p_7, int p_8);
static struct S0 func_17(int p_18);
static struct S0 func_19(short p_20, unsigned p_21, unsigned p_22, short p_23);
static struct S0 func_30(int p_31, char p_32, char p_33, int p_34);
static char func_35(short p_36, unsigned p_37, int p_38);
static int func_39(int p_40, char p_41, unsigned short p_42, unsigned p_43);
static int func_49(union U2 p_50, unsigned p_51);
static union U2 func_52(int p_53, int p_54, int p_55, union U2 p_56, int p_57);
static int func_58(char p_59, unsigned char p_60, short p_61, unsigned char p_62);
static unsigned func_1(void)
{
    char l_13[1];
    int l_764 = 0x824F6FD0L;
    short l_788 = 9L;
    int l_899 = (-1L);
    int i;
    for (i = 0; i < 1; i++)
        l_13[i] = 0xCDL;
lbl_765:
    g_2 = 1L;
    if ((func_3(g_2, (+((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((l_13[0] & ((g_14 == 0x45ACL) & (safe_lshift_func_uint8_t_u_u(((0x13L < g_14) < g_14), ((g_14 || g_14) ^ 0UL))))), 6)), 0L)) & g_14)), l_13[0], g_14, g_14) >= l_13[0]))
    {
        unsigned l_755 = 0x03F84910L;
        for (g_205 = 0; (g_205 < (-5)); g_205 = safe_sub_func_int16_t_s_s(g_205, 6))
        {
            int l_752 = 0x4E114F6BL;
            int l_756 = (-1L);
            if (l_752)
                break;
            l_756 = (safe_add_func_int16_t_s_s(g_606.f1, ((func_58(g_606.f0, ((func_58(func_58(l_752, g_28.f1, g_387.f6, g_693.f0), g_606.f4, g_25[1][0].f0, g_749.f3) >= l_755) == (-10L)), g_163.f1, g_14) & l_752) <= 255UL)));
        }
    }
    else
    {
        short l_779[10][6][4] = {{{6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}}, {{6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}}, {{6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}}, {{6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}}, {{6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}}, {{6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}}, {{6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}}, {{6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}}, {{6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}}, {{6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}, {6L, 0xAE93L, 0x13B3L, 0xEB30L}}};
        unsigned l_783 = 0x3F6143BDL;
        int l_798 = 0x5DEEA1EFL;
        int l_818 = 0x029E0833L;
        unsigned l_853 = 0UL;
        unsigned short l_933 = 0x44F2L;
        short l_946 = (-1L);
        unsigned char l_993[7][6][6] = {{{0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}}, {{0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}}, {{0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}}, {{0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}}, {{0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}}, {{0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}}, {{0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}, {0x84L, 249UL, 0xBFL, 0x52L, 253UL, 0x97L}}};
        int i, j, k;
lbl_835:
        l_764 = (safe_sub_func_uint8_t_u_u((func_3((~(((safe_add_func_uint32_t_u_u((g_252.f3 || g_163.f5), 0xF951638BL)) < g_761) && (0xD4L || (safe_add_func_uint8_t_u_u(0xA7L, l_13[0]))))), g_252.f3, l_13[0], g_693.f6, g_545[4][4]) >= l_13[0]), 1L));
        if (g_27.f0)
            goto lbl_765;
        for (g_104.f0 = 0; (g_104.f0 > 10); g_104.f0 = safe_add_func_int32_t_s_s(g_104.f0, 6))
        {
            unsigned char l_780 = 0xFBL;
            unsigned l_878 = 0x64ED84AEL;
            unsigned l_904 = 0x233C62DFL;
            char l_961 = 0x71L;
            int l_988 = 0x415F3749L;
            if (g_293.f1)
            {
                int l_772 = 0x82428FF0L;
                unsigned l_776 = 0x24F0BE1FL;
                g_747 = g_722;
                for (g_150 = 0; (g_150 == 7); g_150 = safe_add_func_uint16_t_u_u(g_150, 9))
                {
                    unsigned char l_784 = 0x78L;
                    g_310 = func_17((safe_sub_func_uint32_t_u_u(l_772, ((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((g_606.f6 ^ g_749.f1))), ((l_776 >= g_275[0].f0) || g_163.f0))) <= l_772))));
                    if ((safe_sub_func_int32_t_s_s(g_293.f4, func_58(g_748[0][2].f6, g_606.f3, g_606.f4, l_779[2][1][0]))))
                    {
                        char l_787[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_787[i] = 0x45L;
                        l_788 = ((0UL ^ (g_151[0].f4 != (l_780 & (safe_rshift_func_uint16_t_u_s(65531UL, l_783))))) & func_58(l_772, l_784, (((safe_mod_func_int8_t_s_s(l_787[0], (l_780 & g_209.f4))) & g_311.f3) != l_13[0]), l_772));
                        return g_387.f0;
                    }
                    else
                    {
                        int l_789 = (-1L);
                        return l_789;
                    }
                }
                g_722.f2 = g_275[0].f0;
            }
            else
            {
                unsigned l_793 = 4294967294UL;
                char l_850 = 7L;
                short l_854 = 0xA000L;
                int l_879 = 0xB47D329DL;
                for (l_780 = 0; (l_780 != 9); ++l_780)
                {
                    int l_795 = 0x5932B285L;
                    g_520.f2 = (l_779[2][1][0] != 8L);
                    if (g_693.f1)
                    {
                        g_311.f3 = l_780;
                        g_520 = g_792;
                    }
                    else
                    {
                        short l_794 = 1L;
                        l_793 = l_780;
                        g_209.f1 = ((func_58(l_794, l_795, g_151[0].f6, (0x9B993461L < (safe_add_func_uint16_t_u_u(func_58(l_780, g_252.f1, l_13[0], (func_58(l_794, l_795, l_779[2][1][0], g_521.f3) >= 0x9AL)), l_798)))) > g_209.f6) ^ g_27.f6);
                    }
                }
                l_764 = (safe_sub_func_uint8_t_u_u(l_788, g_747.f0));
                if ((g_25[1][0].f5 || func_58((safe_lshift_func_int16_t_s_u(l_780, l_783)), l_793, l_764, (safe_mod_func_uint16_t_u_u(((func_58((safe_sub_func_uint8_t_u_u(func_58(g_163.f0, ((l_13[0] ^ (safe_add_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(g_387.f5, (((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_779[1][5][3] >= l_793), 248UL)), l_783)))), g_521.f3)) <= l_793) <= l_780))) < l_13[0]), l_818))) > 0xC88FL), l_780, g_694.f5), l_764)), g_14, l_779[2][1][0], l_779[0][3][1]) != g_722.f1) & 1UL), (-10L))))))
                {
                    unsigned char l_827[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_827[i] = 1UL;
                    for (g_205 = (-16); (g_205 < 18); g_205 = safe_add_func_uint16_t_u_u(g_205, 6))
                    {
                        return g_723.f2;
                    }
                    if ((g_545[0][2] <= ((safe_unary_minus_func_uint32_t_u(((~func_58(((safe_unary_minus_func_int8_t_s(l_798)) <= (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(l_818, 1)) <= ((~l_827[4]) >= (safe_rshift_func_uint16_t_u_s(g_723.f0, func_58(l_788, g_151[0].f1, func_58(g_209.f5, g_748[0][2].f6, l_827[1], g_151[0].f4), g_27.f2))))), 7))), g_27.f1, l_780, g_722.f4)) < l_780))) | g_209.f5)))
                    {
                        g_830 = func_17(l_827[2]);
                        g_293.f5 = (safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((g_209.f2 == (-4L)) <= l_827[4]) ^ (((0L && (~func_58((+l_793), g_747.f1, g_693.f4, g_28.f4))) | l_13[0]) < l_780)), 4294967295UL)), 13));
                        g_460 = g_26;
                        if (g_521.f4)
                            continue;
                    }
                    else
                    {
                        return g_209.f6;
                    }
                }
                else
                {
                    char l_838[6][6][7] = {{{0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}}, {{0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}}, {{0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}}, {{0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}}, {{0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}}, {{0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}, {0x4AL, 0xF2L, 0x4AL, 4L, (-10L), 7L, (-1L)}}};
                    int l_857 = 1L;
                    int i, j, k;
                    if (g_293.f3)
                        goto lbl_835;
                    g_209.f3 = ((safe_add_func_uint16_t_u_u(g_634[3][0].f0, (g_830.f5 < l_838[5][0][6]))) <= (l_793 < ((safe_add_func_int16_t_s_s(g_749.f6, (safe_sub_func_int8_t_s_s((g_746 & l_838[5][0][6]), g_387.f6)))) ^ g_293.f0)));
                    for (l_798 = 5; (l_798 >= 1); l_798 -= 1)
                    {
                        unsigned l_845[5][5] = {{4294967291UL, 0x36FBEBFDL, 0xF456F13EL, 4UL, 0x134E6CBEL}, {4294967291UL, 0x36FBEBFDL, 0xF456F13EL, 4UL, 0x134E6CBEL}, {4294967291UL, 0x36FBEBFDL, 0xF456F13EL, 4UL, 0x134E6CBEL}, {4294967291UL, 0x36FBEBFDL, 0xF456F13EL, 4UL, 0x134E6CBEL}, {4294967291UL, 0x36FBEBFDL, 0xF456F13EL, 4UL, 0x134E6CBEL}};
                        int i, j;
                        g_650.f3 = (((g_722.f3 || func_58(func_58((safe_lshift_func_int16_t_s_u(g_25[1][0].f2, 0)), l_845[1][3], g_460.f1, g_28.f6), (0x03E1L || ((((g_635.f3 == (g_723.f3 < 0x14L)) | 0L) || g_723.f3) > g_723.f1)), l_780, g_606.f2)) != l_13[0]) & 0L);
                        g_310 = func_19((safe_lshift_func_int16_t_s_s(((!((safe_rshift_func_int8_t_s_s(func_58(l_838[2][4][2], (((l_838[5][0][6] ^ (l_850 | func_58(l_13[0], l_798, (((~l_780) & ((0xF4FBL >= l_780) < (l_779[2][1][0] < 7UL))) >= g_747.f6), g_792.f4))) > (-2L)) || l_780), l_838[5][0][6], g_151[0].f2), l_788)) >= l_818)) >= l_793), l_853)), l_854, l_779[2][1][0], g_722.f6);
                    }
                    if ((safe_rshift_func_uint16_t_u_s(g_545[4][4], l_798)))
                    {
                        l_857 = l_780;
                    }
                    else
                    {
                        unsigned char l_877[5][3] = {{0x6EL, 1UL, 0x6EL}, {0x6EL, 1UL, 0x6EL}, {0x6EL, 1UL, 0x6EL}, {0x6EL, 1UL, 0x6EL}, {0x6EL, 1UL, 0x6EL}};
                        int i, j;
                        g_634[3][0].f5 = ((1UL || ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((g_151[0].f0 != func_58(((0L <= (func_58((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(g_870[3], (l_850 && (g_387.f0 > ((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((((g_635.f6 ^ (safe_lshift_func_uint16_t_u_u(l_780, l_838[4][2][4]))) < g_694.f2) >= l_780) | g_27.f0) != g_28.f3), l_793)), l_877[2][2])) < l_854))))) != l_877[2][2]), 7)), g_205)), l_838[5][0][6], g_104.f0, l_850) <= g_275[0].f3)) != 0UL), l_878, l_13[0], l_13[0])), l_879)), 0L)), g_252.f0)) && l_818)) & g_252.f6);
                        g_792.f1 = (g_2 ^ (safe_sub_func_int8_t_s_s(g_27.f5, 0xC6L)));
                        if (g_650.f2)
                            continue;
                    }
                }
            }
            for (l_853 = 0; (l_853 <= 9); l_853 += 1)
            {
                unsigned short l_884 = 0x52E3L;
                int l_895 = (-10L);
                l_884 = (safe_lshift_func_uint8_t_u_u(l_780, 2));
                for (g_746 = 0; (g_746 <= 9); g_746 += 1)
                {
                    unsigned char l_888 = 0x8AL;
                    g_520 = g_151[8];
                    g_747.f2 = func_58(((3L != ((safe_unary_minus_func_int32_t_s((safe_rshift_func_int8_t_s_u((-4L), (l_888 != 1L))))) | (0xF4E0L == ((safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((g_26.f5 && g_151[0].f3) != ((g_151[0].f0 != func_58((((-9L) && l_818) & g_606.f3), l_13[0], l_13[0], g_521.f6)) == g_749.f4)), g_252.f5)) && g_634[3][0].f6), 1UL)) && g_693.f4)))) < g_606.f1), g_26.f0, g_792.f3, g_830.f0);
                    if (l_780)
                        continue;
                    for (l_884 = 1; (l_884 <= 9); l_884 += 1)
                    {
                        l_895 = 0x4789AC47L;
                        g_897[2][0][3] = g_896;
                    }
                }
                for (l_780 = 1; (l_780 <= 9); l_780 += 1)
                {
                    g_898[0] = g_310;
                }
                for (g_205 = 9; (g_205 >= 0); g_205 -= 1)
                {
                    g_25[1][0] = g_606;
                    g_694.f5 = l_899;
                }
            }
            l_798 = 1L;
            if ((((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s(func_58(g_896.f0, l_904, g_209.f5, g_606.f5), 2)) != (safe_add_func_int8_t_s_s((l_13[0] & ((safe_rshift_func_uint16_t_u_s(g_27.f4, g_723.f3)) && g_104.f0)), l_780))), 13)) & g_163.f6) == l_878))
            {
                unsigned short l_929 = 0x23F2L;
                if ((((safe_lshift_func_int16_t_s_u((((l_780 && ((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u(g_917, 0L)) && (safe_sub_func_int16_t_s_s(func_58(l_780, (((safe_rshift_func_int8_t_s_s((-1L), g_163.f4)) == (safe_lshift_func_int16_t_s_u((9L < (func_58(((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(((((safe_unary_minus_func_uint32_t_u(l_929)) == (safe_unary_minus_func_int16_t_s((func_58((func_58((safe_sub_func_int32_t_s_s(l_779[7][1][2], 0UL)), l_933, g_25[1][0].f3, l_779[2][1][0]) > 0x56F9L), g_694.f0, g_293.f2, l_904) || 0x965DL)))) == g_163.f3) ^ g_460.f1), g_26.f1)) | g_163.f6), g_163.f0)) == 1L), l_788, g_293.f5, l_779[2][1][0]) || l_780)), 8))) < g_209.f2), g_387.f1, l_878), 0x1C52L))), g_252.f2)) > l_779[8][2][1])) <= l_13[0]) != (-1L)), g_749.f5)) != l_933) && l_780))
                {
                    char l_945 = 3L;
                    for (g_14 = 0; (g_14 <= 1); g_14 += 1)
                    {
                        int l_942 = 0xDEF6069BL;
                        unsigned l_947 = 0x1F0BEAF1L;
                        int i;
                        g_151[(g_14 + 5)] = func_17(func_58(g_27.f6, func_58((((safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(0xB4L, l_899)) | (safe_sub_func_uint8_t_u_u(g_747.f2, g_460.f6))) <= ((safe_lshift_func_int16_t_s_u(l_942, 14)) && ((l_942 | (safe_add_func_uint8_t_u_u((g_917 == l_945), l_946))) ^ l_947))), l_798)) || g_761) >= g_27.f1), g_275[0].f1, g_460.f2, g_694.f3), l_929, g_25[1][0].f4));
                    }
                    if (g_460.f5)
                        break;
                    g_948 = func_17(g_693.f0);
                }
                else
                {
                    if (g_606.f3)
                        goto lbl_765;
                    g_672 = g_693;
                    if (l_929)
                        continue;
                }
                for (l_783 = (-27); (l_783 > 25); l_783 = safe_add_func_uint8_t_u_u(l_783, 7))
                {
                    l_798 = l_780;
                    g_952 = g_951[1][1];
                }
                g_634[3][0].f2 = (g_747.f2 <= l_13[0]);
            }
            else
            {
                unsigned short l_972 = 0xB143L;
                int l_985 = 0x34107CF6L;
                for (g_150 = 6; (g_150 > 19); g_150 = safe_add_func_int16_t_s_s(g_150, 3))
                {
                    unsigned short l_958 = 2UL;
                    for (l_818 = 8; (l_818 > 10); l_818 = safe_add_func_uint8_t_u_u(l_818, 5))
                    {
                        int l_957 = 3L;
                        short l_962 = 0x34EBL;
                        g_748[0][2].f2 = (l_957 && (6L < (func_58(l_780, (((~l_958) < (safe_rshift_func_int16_t_s_s(func_58(l_961, l_962, (l_904 < ((l_962 == (g_460.f0 || l_957)) <= 0x85F4918AL)), l_904), 7))) >= 0x05L), g_749.f0, g_952.f5) >= g_460.f4)));
                    }
                    for (l_899 = 29; (l_899 < (-2)); l_899 = safe_sub_func_uint8_t_u_u(l_899, 6))
                    {
                        int l_967 = 0xEB591A05L;
                        l_972 = ((safe_add_func_int8_t_s_s(l_967, l_878)) != (((safe_lshift_func_uint8_t_u_s((g_722.f6 != g_460.f6), 1)) <= (l_958 && (((0L | (((safe_rshift_func_int8_t_s_u(g_151[0].f5, g_634[3][0].f3)) || (l_958 && (-9L))) || l_818)) > 0x22C9833AL) && 6L))) | 0x3400L));
                        l_985 = func_58(l_967, (safe_add_func_int16_t_s_s(l_958, ((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((l_899 > (safe_add_func_uint8_t_u_u(func_58(((!0xDDFEL) > ((0x1B46L == ((safe_rshift_func_uint8_t_u_s(((l_967 | 0x9191L) ^ (safe_unary_minus_func_int8_t_s((+l_967)))), (g_984 == l_904))) && l_958)) < 1L)), l_972, g_27.f0, g_948.f6), 0x8FL))), l_967)), 0xA6L)) && l_958))), l_958, g_205);
                        if (g_576)
                            continue;
                        return g_606.f4;
                    }
                }
                l_988 = func_58((l_904 <= (1L > (((func_58(l_972, g_792.f3, g_748[0][2].f5, l_798) & ((l_878 ^ ((safe_rshift_func_uint16_t_u_u(g_545[1][2], 6)) == 0xF19AL)) | 0x31L)) > l_780) < l_904))), l_985, l_779[4][0][3], l_961);
                if (l_780)
                {
                    unsigned char l_989[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_989[i] = 0xE6L;
                    g_209.f2 = (g_693.f0 == (g_693.f1 & (l_989[1] | (l_989[1] != g_311.f6))));
                }
                else
                {
                    char l_990 = 0x38L;
                    return l_990;
                }
                for (g_746 = 0; (g_746 == 26); g_746 = safe_add_func_uint8_t_u_u(g_746, 4))
                {
                    return l_993[2][5][1];
                }
            }
        }
        g_722 = g_25[0][1];
    }
    return g_634[3][0].f4;
}







static unsigned short func_3(char p_4, unsigned char p_5, unsigned short p_6, int p_7, int p_8)
{
    char l_29[4][8] = {{0x22L, 0xFAL, 0x22L, 0xFAL, 0x22L, 0xFAL, 0x22L, 0xFAL}, {0x22L, 0xFAL, 0x22L, 0xFAL, 0x22L, 0xFAL, 0x22L, 0xFAL}, {0x22L, 0xFAL, 0x22L, 0xFAL, 0x22L, 0xFAL, 0x22L, 0xFAL}, {0x22L, 0xFAL, 0x22L, 0xFAL, 0x22L, 0xFAL, 0x22L, 0xFAL}};
    int i, j;
    g_27 = func_17(g_2);
    g_28 = g_25[1][0];
    l_29[3][3] = (0xE267A5E2L || p_5);
    g_749 = func_30(g_26.f2, (((g_27.f6 > func_35(g_26.f2, g_26.f4, g_26.f4)) == (safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(g_26.f4, (safe_add_func_uint16_t_u_u(p_6, 0xA41EL)))), 0))) < l_29[2][0]), p_5, g_693.f2);
    return g_606.f2;
}







static struct S0 func_17(int p_18)
{
    unsigned char l_24 = 1UL;
    g_25[1][1] = func_19(l_24, g_2, g_14, (!g_14));
    return g_26;
}







static struct S0 func_19(short p_20, unsigned p_21, unsigned p_22, short p_23)
{
    return g_25[1][0];
}







static struct S0 func_30(int p_31, char p_32, char p_33, int p_34)
{
    short l_724 = (-1L);
    short l_745 = 0x5EE5L;
    g_723 = g_722;
    g_27.f5 = func_39(l_724, p_34, ((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(l_724, (safe_lshift_func_int16_t_s_s(func_58((g_26.f6 && (safe_sub_func_uint8_t_u_u((p_33 >= l_724), ((g_27.f4 ^ ((safe_add_func_uint8_t_u_u((g_635.f5 > g_387.f2), l_724)) > g_520.f0)) == l_745)))), g_693.f4, p_33, g_746), g_25[1][0].f0)))), 4)), 1)), g_151[0].f6)), 15)), 10)), l_745)) || g_310.f3), p_32);
    g_748[0][2] = g_747;
    return g_151[4];
}







static char func_35(short p_36, unsigned p_37, int p_38)
{
    unsigned short l_44 = 0xCF91L;
    short l_63 = 0x884EL;
    union U2 l_64 = {-1L};
    int l_715 = 0x2CD9AEC0L;
    l_715 = func_39((+0x4F663622L), p_36, l_44, ((safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((func_49(func_52(func_58(l_44, ((g_25[1][0].f5 | p_36) & (65526UL || (l_63 > l_44))), p_37, g_27.f6), l_44, p_37, l_64, l_63), p_38) & l_63), g_26.f5)), p_37)) >= (-5L)));
    return p_36;
}







static int func_39(int p_40, char p_41, unsigned short p_42, unsigned p_43)
{
    int l_690[9][5][5] = {{{6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}}, {{6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}}, {{6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}}, {{6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}}, {{6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}}, {{6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}}, {{6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}}, {{6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}}, {{6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}, {6L, 0L, 1L, 0L, (-9L)}}};
    char l_691 = (-2L);
    int l_692 = (-10L);
    int l_695 = 3L;
    int i, j, k;
    l_692 = func_58(l_690[6][0][2], p_43, l_691, g_150);
    g_694 = g_693;
    for (l_692 = 1; (l_692 >= 0); l_692 -= 1)
    {
        int l_696 = (-1L);
        union U2 l_712 = {7L};
        p_40 = g_151[0].f2;
        l_695 = l_690[1][2][0];
        g_151[0].f2 = l_696;
        for (l_691 = 1; (l_691 >= 0); l_691 -= 1)
        {
            unsigned l_705 = 2UL;
            unsigned short l_714[4][1][7] = {{{2UL, 2UL, 1UL, 0UL, 0xE89FL, 0UL, 1UL}}, {{2UL, 2UL, 1UL, 0UL, 0xE89FL, 0UL, 1UL}}, {{2UL, 2UL, 1UL, 0UL, 0xE89FL, 0UL, 1UL}}, {{2UL, 2UL, 1UL, 0UL, 0xE89FL, 0UL, 1UL}}};
            int i, j, k;
            g_521.f3 = (((g_650.f4 > g_387.f1) & (safe_sub_func_int16_t_s_s((0UL <= l_696), (safe_sub_func_int8_t_s_s((l_696 | (safe_lshift_func_uint8_t_u_s(255UL, ((!g_293.f0) == 0UL)))), ((((safe_sub_func_uint8_t_u_u(252UL, 0xE1L)) < l_705) & l_705) == l_696)))))) != g_293.f1);
            for (l_705 = 0; (l_705 <= 1); l_705 += 1)
            {
                unsigned l_713[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_713[i] = 0UL;
                p_40 = (((((safe_rshift_func_int16_t_s_u(p_40, 7)) | p_41) | ((safe_rshift_func_int8_t_s_u(0x66L, ((safe_lshift_func_int8_t_s_u((p_42 ^ p_42), 7)) || 0x184FEB08L))) < (((0x52L & (func_49(l_712, l_692) > l_713[2])) & l_714[1][0][3]) ^ g_26.f2))) | 65531UL) & p_43);
            }
        }
    }
    return p_40;
}







static int func_49(union U2 p_50, unsigned p_51)
{
    int l_444 = 9L;
    short l_458 = (-3L);
    unsigned char l_552 = 0x95L;
    int l_556 = (-1L);
lbl_687:
    if ((0xCE58L || g_293.f2))
    {
        unsigned char l_445 = 0x7DL;
        int l_446 = 0xBF5441CFL;
        unsigned short l_451 = 7UL;
        l_446 = (safe_lshift_func_int8_t_s_s((p_50.f0 && (!((safe_add_func_int16_t_s_s(g_209.f1, (~(((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_25[1][0].f1, g_310.f1)), g_209.f2)) <= p_50.f0) || ((p_50.f0 ^ p_50.f0) < l_444))))) ^ l_445))), 2));
        l_446 = (((safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(l_445, l_451)), 2)) || ((func_58((safe_add_func_uint8_t_u_u((+(0x3B872EB8L || p_50.f0)), func_58((safe_rshift_func_int16_t_s_u((~g_275[0].f3), g_310.f0)), p_51, l_445, p_50.f0))), p_50.f0, g_387.f6, l_458) && g_310.f5) < 0L)) | g_209.f2);
    }
    else
    {
        unsigned char l_459 = 0xE9L;
        g_460 = func_17(l_459);
        return p_50.f0;
    }
    for (g_150 = (-13); (g_150 == (-24)); g_150 = safe_sub_func_int8_t_s_s(g_150, 7))
    {
        unsigned l_463 = 0xA3A3A4B7L;
        int l_501 = 3L;
        int l_519 = (-1L);
        int l_551 = 1L;
        unsigned l_592 = 1UL;
        unsigned short l_633 = 65531UL;
        char l_671 = 7L;
        if (l_463)
            break;
        if (p_51)
        {
            unsigned l_473 = 8UL;
            int l_563 = 4L;
            char l_595 = 0xECL;
            int l_661 = 0xF5516919L;
            if ((~g_209.f5))
            {
                char l_472 = 1L;
                short l_502 = 0xFC7BL;
                for (g_14 = (-7); (g_14 == (-7)); g_14 = safe_add_func_uint16_t_u_u(g_14, 2))
                {
                    char l_500 = 8L;
                    char l_503 = 0x7DL;
                    g_28 = func_19(((safe_sub_func_uint8_t_u_u((p_51 < (safe_sub_func_int32_t_s_s((p_50.f0 ^ (safe_sub_func_int16_t_s_s(g_26.f1, g_163.f5))), 0x6D58FBFBL))), ((3UL | (((4294967286UL | ((p_50.f0 == (p_51 == 0x41AFD900L)) | g_311.f3)) && l_472) | g_275[0].f4)) < (-10L)))) > 0x2056L), p_50.f0, p_50.f0, l_473);
                    if (func_58((safe_lshift_func_uint16_t_u_s(func_58(l_463, (safe_mod_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((g_28.f0 || ((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(((l_473 <= (l_463 >= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((!(1UL >= (l_463 <= (0x5438L & (safe_lshift_func_int16_t_s_s(func_58(p_51, ((safe_sub_func_uint16_t_u_u((((((func_58(((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(p_51, l_500)) && 0x0950L), p_51)) > p_50.f0), p_50.f0, l_501, p_51) >= g_460.f2) || g_293.f3) != l_502) <= l_473) & 0x14BFL), l_502)) || g_151[0].f4), g_209.f2, g_387.f0), 13)))))), 4)) == g_26.f5), g_209.f4)) <= p_50.f0), 5)), g_25[1][0].f3)))) | p_51), p_50.f0)), 0x7B3FL)) || g_25[1][0].f6)), l_500)) > (-1L)), g_25[1][0].f1)), g_460.f0, g_25[1][0].f5), g_275[0].f1)), g_26.f1, l_500, l_501))
                    {
                        if (l_503)
                            break;
                        if (l_473)
                            continue;
                    }
                    else
                    {
                        int l_518 = 0x1CD285CAL;
                        l_519 = (safe_rshift_func_uint8_t_u_u(l_502, (safe_mod_func_uint16_t_u_u((l_463 <= (l_458 | (safe_sub_func_uint32_t_u_u((6UL < (safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_s(65526UL, g_27.f5)) && (safe_mod_func_uint16_t_u_u((func_58(g_27.f6, l_518, g_209.f3, p_50.f0) | g_293.f5), l_473))) && l_472) || g_387.f3), g_209.f4)), 0x28C5L))), p_51)))), g_26.f3))));
                        return p_50.f0;
                    }
                    if (p_50.f0)
                        continue;
                }
                g_521 = g_520;
                if ((~(safe_unary_minus_func_int8_t_s(((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((((((((((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((((p_50.f0 ^ p_50.f0) || func_58((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(p_51, func_58((safe_rshift_func_uint16_t_u_u(9UL, ((func_58(p_51, l_463, (g_26.f4 != g_293.f2), p_50.f0) || g_293.f6) & g_252.f1))), l_473, l_501, l_473))), 7)), p_50.f0, l_463, p_50.f0)) >= g_209.f6), g_460.f2)), g_275[0].f5)), 6)) || g_520.f3) >= g_27.f0) & p_51) <= p_50.f0) >= g_387.f3) ^ g_275[0].f5) ^ g_252.f2) != l_519), p_50.f0)), g_27.f2)), 3)) == g_275[0].f3), 2)), g_545[4][4])) | g_163.f1)))))
                {
                    return p_51;
                }
                else
                {
                    unsigned l_555[8][8][4] = {{{0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}}, {{0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}}, {{0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}}, {{0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}}, {{0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}}, {{0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}}, {{0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}}, {{0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}, {0xAE06F269L, 5UL, 4294967295UL, 0x71FB994DL}}};
                    int i, j, k;
                    for (l_519 = (-22); (l_519 == (-27)); --l_519)
                    {
                        unsigned short l_550 = 0UL;
                        l_550 = (0xDC74L | ((safe_rshift_func_int16_t_s_u((g_28.f4 < (p_50.f0 || 1UL)), g_293.f6)) != l_501));
                        l_556 = func_58((!func_58(p_51, g_252.f2, p_51, l_551)), l_552, (safe_mul_func_uint32_t_u_u(g_545[4][4], ((l_555[6][7][2] | g_545[4][4]) != g_275[0].f2))), g_25[1][0].f4);
                    }
                }
                for (l_463 = 2; (l_463 <= 9); l_463 += 1)
                {
                    int i;
                    g_151[0].f1 = 0x35E6EF19L;
                    if (p_50.f0)
                        continue;
                    g_310 = g_151[l_463];
                }
            }
            else
            {
                short l_565 = 1L;
                if (g_28.f4)
                    break;
                for (l_473 = 0; (l_473 <= 5); l_473 += 1)
                {
                    unsigned l_564 = 0x0470DC23L;
                    l_563 = ((g_209.f2 && 0x4B2EL) | (safe_lshift_func_uint8_t_u_s(l_458, (safe_lshift_func_int16_t_s_s(((((func_58((g_310.f1 || func_58(g_163.f2, ((1L == (safe_sub_func_int32_t_s_s(0x0D94EA0BL, g_252.f4))) > l_473), g_26.f2, g_460.f0)), p_50.f0, g_151[0].f1, p_50.f0) == p_50.f0) > p_51) | g_252.f4) == p_50.f0), g_275[0].f3)))));
                    for (l_551 = 0; (l_551 <= 9); l_551 += 1)
                    {
                        l_563 = l_458;
                        l_564 = (p_50.f0 != 0x9FL);
                        g_387.f3 = l_565;
                    }
                    l_563 = p_50.f0;
                }
                for (l_556 = 0; (l_556 < (-13)); l_556 = safe_sub_func_int32_t_s_s(l_556, 3))
                {
                    for (l_501 = 0; (l_501 <= 0); l_501 += 1)
                    {
                        return g_28.f1;
                    }
                }
                g_252 = g_310;
            }
            if (p_51)
                break;
            if (((safe_mod_func_int32_t_s_s(0x1EAEB9B8L, (+g_520.f1))) < g_209.f5))
            {
                unsigned l_570 = 0xB48A4B17L;
                if ((((+0x73L) || (l_570 | l_556)) || (g_25[1][0].f0 && (0x5800BC14L || 0x49ADB70CL))))
                {
                    short l_575 = 0x706FL;
                    g_460.f3 = (g_311.f6 && (safe_sub_func_uint8_t_u_u(((p_50.f0 < (g_209.f2 <= func_58(p_51, p_50.f0, p_51, l_551))) >= (p_51 > g_26.f3)), 0xDBL)));
                    for (l_463 = (-18); (l_463 == 34); ++l_463)
                    {
                        l_575 = (p_50.f0 <= g_163.f3);
                        return g_151[0].f2;
                    }
                }
                else
                {
                    unsigned short l_583 = 0x7CBFL;
                    g_209.f1 = p_51;
                    g_310.f5 = func_58((g_576 & (safe_add_func_int8_t_s_s(g_27.f0, (((l_570 < (safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((l_583 < func_58(l_583, (safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(p_50.f0, (safe_sub_func_int32_t_s_s(func_58(l_563, ((safe_lshift_func_uint8_t_u_u(g_310.f1, 2)) <= l_551), g_252.f2, g_460.f6), g_293.f0)))), g_26.f1)), g_387.f0, l_583)), g_275[0].f1)), p_50.f0))) && l_463) || (-2L))))), l_501, p_51, p_51);
                }
                g_311.f2 = l_463;
                return l_592;
            }
            else
            {
                short l_605 = 0xED8AL;
                unsigned short l_612 = 0xE591L;
                unsigned short l_670 = 1UL;
                l_563 = (safe_sub_func_int16_t_s_s(func_58(l_556, (g_545[4][4] || (l_551 != g_311.f2)), l_552, l_563), 0x69D5L));
                if (func_58((l_551 | func_58((+func_58((p_51 < l_556), (l_595 | g_25[1][0].f2), l_556, (safe_rshift_func_uint8_t_u_s(g_310.f2, l_444)))), g_25[1][0].f1, p_50.f0, p_51)), g_275[0].f0, l_473, g_27.f5))
                {
                    int l_600 = 0x1384D0D2L;
                    l_551 = (safe_rshift_func_uint16_t_u_s((l_600 >= ((safe_add_func_int8_t_s_s(((func_58((g_310.f1 || 0x0E4127C4L), (((p_50.f0 > ((1UL || (safe_rshift_func_uint16_t_u_s(p_51, l_600))) >= (-6L))) <= (0x9D8DB366L >= 0xFEF6C6AEL)) >= p_50.f0), p_50.f0, l_605) == 65535UL) && g_25[1][0].f0), 1L)) | l_605)), 5));
                    if (p_51)
                        break;
                    g_606 = func_17(l_563);
                }
                else
                {
                    unsigned l_609[6][3][7] = {{{0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}, {0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}, {0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}}, {{0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}, {0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}, {0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}}, {{0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}, {0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}, {0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}}, {{0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}, {0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}, {0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}}, {{0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}, {0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}, {0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}}, {{0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}, {0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}, {0x1CBD0DE1L, 1UL, 6UL, 0xB17C4248L, 0UL, 4294967293UL, 0x9C5489A8L}}};
                    int l_616 = (-9L);
                    char l_649 = 0xE6L;
                    int i, j, k;
                    for (g_104.f0 = (-1); (g_104.f0 == 20); g_104.f0++)
                    {
                        int l_613[4][7] = {{0x56372BD4L, 5L, 0x67C65C7EL, 0x37077918L, 0x67C65C7EL, 5L, 0x56372BD4L}, {0x56372BD4L, 5L, 0x67C65C7EL, 0x37077918L, 0x67C65C7EL, 5L, 0x56372BD4L}, {0x56372BD4L, 5L, 0x67C65C7EL, 0x37077918L, 0x67C65C7EL, 5L, 0x56372BD4L}, {0x56372BD4L, 5L, 0x67C65C7EL, 0x37077918L, 0x67C65C7EL, 5L, 0x56372BD4L}};
                        int i, j;
                        l_563 = func_58((func_58((g_163.f5 <= p_51), (l_609[4][0][2] > g_2), (((safe_lshift_func_int8_t_s_u(g_163.f1, 3)) < (g_387.f4 | p_51)) >= (((l_612 != p_51) >= g_163.f5) || (-1L))), l_613[2][2]) <= 1L), l_519, p_51, g_151[0].f2);
                        g_293.f2 = ((safe_sub_func_int16_t_s_s((3L <= l_613[2][2]), l_609[2][0][1])) | g_606.f6);
                        l_616 = p_50.f0;
                        l_556 = (((safe_add_func_uint32_t_u_u((l_463 == (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(p_50.f0, func_58((safe_rshift_func_uint8_t_u_u((((((g_275[0].f6 != l_463) == l_563) == (0xBAL >= func_58((!(func_58(func_58(((safe_sub_func_uint8_t_u_u((g_275[0].f1 | (safe_rshift_func_uint16_t_u_s(l_613[3][5], 13))), (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(0x1FD955BEL, l_563)), g_606.f1)))) ^ 0xA0E5L), l_612, g_387.f6, l_609[4][0][2]), p_50.f0, l_519, p_50.f0) >= p_50.f0)), p_50.f0, g_293.f1, l_556))) >= p_51) | l_551), g_252.f3)), p_50.f0, g_387.f1, p_50.f0))), 7))), p_51)) == g_209.f2) != 0xD5L);
                    }
                    if (l_463)
                    {
                        g_151[0] = g_521;
                        l_616 = l_633;
                        g_163 = g_634[3][0];
                        g_635 = g_275[0];
                    }
                    else
                    {
                        char l_646 = 0x4DL;
                        l_616 = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((l_612 | (l_609[4][0][2] >= ((safe_mod_func_uint32_t_u_u(g_293.f6, (safe_rshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((((-1L) ^ p_51) & ((p_51 | p_50.f0) && (l_646 | (safe_sub_func_int8_t_s_s((l_473 <= l_649), 9L))))) || (-4L)), p_51)) || l_473), 6)))) | 0xA805L))), l_595)), 3));
                    }
                    g_650 = g_634[3][0];
                    l_563 = (safe_add_func_uint16_t_u_u((g_163.f2 < ((safe_lshift_func_uint8_t_u_u(g_104.f0, 4)) <= ((safe_sub_func_int8_t_s_s(l_605, ((safe_mod_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(l_661, (((safe_lshift_func_int16_t_s_s(g_163.f1, g_460.f0)) > 65535UL) || (g_520.f6 >= ((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_670 | 0x73L), g_387.f6)), 6)) || p_50.f0))))) ^ l_616), l_595)) | 0x6F1FL))) >= g_25[1][0].f0))), g_26.f0));
                }
                if (l_556)
                    continue;
            }
        }
        else
        {
            int l_686 = 0x94F6CF4EL;
            int l_689[1];
            int i;
            for (i = 0; i < 1; i++)
                l_689[i] = (-1L);
            if ((l_592 || g_25[1][0].f3))
            {
                for (g_14 = 5; (g_14 >= 0); g_14 -= 1)
                {
                    int i, j;
                    l_671 = g_545[g_14][g_14];
                    g_672 = g_521;
                }
                if (g_650.f6)
                    break;
                return p_50.f0;
            }
            else
            {
                unsigned l_685 = 0x911AAF71L;
                g_460.f2 = (1L ^ (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((l_592 && (g_27.f2 || (g_650.f2 > p_51))) && l_444), 7)), (safe_lshift_func_uint16_t_u_u(l_463, p_50.f0)))), g_460.f5)));
                for (g_576 = 1; (g_576 >= 0); g_576 -= 1)
                {
                    unsigned l_688[10][6] = {{0x7E5CF6DBL, 0UL, 0xCF8AEEBEL, 0xA2B29262L, 0x086E17A9L, 0UL}, {0x7E5CF6DBL, 0UL, 0xCF8AEEBEL, 0xA2B29262L, 0x086E17A9L, 0UL}, {0x7E5CF6DBL, 0UL, 0xCF8AEEBEL, 0xA2B29262L, 0x086E17A9L, 0UL}, {0x7E5CF6DBL, 0UL, 0xCF8AEEBEL, 0xA2B29262L, 0x086E17A9L, 0UL}, {0x7E5CF6DBL, 0UL, 0xCF8AEEBEL, 0xA2B29262L, 0x086E17A9L, 0UL}, {0x7E5CF6DBL, 0UL, 0xCF8AEEBEL, 0xA2B29262L, 0x086E17A9L, 0UL}, {0x7E5CF6DBL, 0UL, 0xCF8AEEBEL, 0xA2B29262L, 0x086E17A9L, 0UL}, {0x7E5CF6DBL, 0UL, 0xCF8AEEBEL, 0xA2B29262L, 0x086E17A9L, 0UL}, {0x7E5CF6DBL, 0UL, 0xCF8AEEBEL, 0xA2B29262L, 0x086E17A9L, 0UL}, {0x7E5CF6DBL, 0UL, 0xCF8AEEBEL, 0xA2B29262L, 0x086E17A9L, 0UL}};
                    int i, j;
                    g_634[(g_576 + 2)][g_576] = g_634[(g_576 + 1)][g_576];
                    g_275[0] = func_19(p_51, g_634[(g_576 + 1)][g_576].f2, ((safe_sub_func_uint8_t_u_u((g_28.f6 && ((-3L) <= (p_51 ^ 0x4647L))), ((g_252.f5 <= (safe_lshift_func_int8_t_s_s(g_275[0].f3, ((g_209.f0 >= (-1L)) && l_685)))) && 1UL))) > (-7L)), g_576);
                    for (l_671 = 9; (l_671 >= 3); l_671 -= 1)
                    {
                        if (l_686)
                            break;
                        if (l_551)
                            goto lbl_687;
                        l_689[0] = l_688[1][0];
                        if (g_209.f4)
                            continue;
                    }
                }
            }
        }
    }
    g_252.f3 = g_650.f2;
    return g_163.f1;
}







static union U2 func_52(int p_53, int p_54, int p_55, union U2 p_56, int p_57)
{
    int l_76[4][4][10] = {{{0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}, {0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}, {0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}, {0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}}, {{0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}, {0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}, {0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}, {0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}}, {{0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}, {0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}, {0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}, {0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}}, {{0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}, {0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}, {0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}, {0L, 0x86803F40L, 0x2F8FA660L, 0L, 1L, (-1L), 0xA1794A77L, 0x5F5C31AFL, 0xB4CDDCCFL, 0xCA69BD5AL}}};
    int l_84 = 0x32E665D2L;
    unsigned l_266 = 0x0162A6EBL;
    unsigned short l_324 = 9UL;
    unsigned char l_367 = 0x48L;
    unsigned short l_422 = 65534UL;
    int i, j, k;
lbl_227:
    g_25[1][1] = g_27;
    for (g_14 = 0; (g_14 > 1); g_14++)
    {
        unsigned char l_69[7][3] = {{0xFBL, 0UL, 0xFBL}, {0xFBL, 0UL, 0xFBL}, {0xFBL, 0UL, 0xFBL}, {0xFBL, 0UL, 0xFBL}, {0xFBL, 0UL, 0xFBL}, {0xFBL, 0UL, 0xFBL}, {0xFBL, 0UL, 0xFBL}};
        int l_100 = 1L;
        unsigned char l_265 = 253UL;
        int i, j;
        if ((safe_mod_func_uint16_t_u_u(func_58(l_69[4][1], ((p_54 <= (safe_unary_minus_func_uint8_t_u(((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint8_t_u_u((func_58(l_69[4][1], (!g_25[1][0].f0), p_54, (~g_26.f2)) < ((p_54 == g_27.f4) ^ 0xFA2FCAAFL)), g_27.f6)) | l_76[1][0][3]) <= p_53), 5)))) <= g_27.f5)))) && l_69[4][1]), p_53, l_76[1][0][3]), l_69[4][1])))
        {
            short l_77 = 0x4AB4L;
            unsigned short l_121 = 0x5F14L;
            unsigned char l_185 = 251UL;
            char l_195 = 0L;
            int l_226[7];
            int i;
            for (i = 0; i < 7; i++)
                l_226[i] = 0xD83CDD95L;
            if (l_76[1][0][3])
            {
                g_28.f2 = l_77;
            }
            else
            {
                unsigned char l_83 = 1UL;
                unsigned char l_148 = 1UL;
                p_57 = ((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((g_82 == (p_54 < 0x6AL)) & l_83), (!(g_14 && l_84)))) | p_53), 1)) >= g_26.f0);
                for (p_54 = 1; (p_54 >= 0); p_54 -= 1)
                {
                    unsigned l_85[4];
                    short l_86 = 0x3B0CL;
                    int l_92 = (-1L);
                    unsigned l_93 = 0x78CC6E09L;
                    union U2 l_101[1][7] = {{{-1L}, {-1L}, {-1L}, {-1L}, {-1L}, {-1L}, {-1L}}};
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_85[i] = 4UL;
                    for (l_83 = 0; (l_83 <= 1); l_83 += 1)
                    {
                        int i, j;
                        l_85[2] = l_77;
                        g_27.f1 = g_28.f0;
                        g_25[l_83][l_83] = g_25[p_54][l_83];
                        g_25[l_83][p_54] = func_17(l_86);
                    }
                    for (p_53 = 0; (p_53 <= 1); p_53 += 1)
                    {
                        int l_88 = (-6L);
                        char l_91[1][2][8];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 8; k++)
                                    l_91[i][j][k] = 1L;
                            }
                        }
                        l_93 = (safe_unary_minus_func_uint16_t_u(((l_88 >= g_26.f2) ^ func_58(((safe_mod_func_int8_t_s_s(0x04L, p_57)) ^ l_88), l_77, l_91[0][0][6], (p_55 & l_92)))));
                        p_57 = (safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(g_26.f6, g_25[1][0].f3)) & 65535UL), g_28.f2));
                        l_100 = (safe_sub_func_int16_t_s_s(p_54, func_58(g_25[1][0].f1, p_56.f0, p_54, l_83)));
                        return l_101[0][3];
                    }
                }
                for (p_57 = 22; (p_57 < (-21)); p_57--)
                {
                    return g_104;
                }
                for (p_57 = (-11); (p_57 == (-28)); p_57 = safe_sub_func_uint16_t_u_u(p_57, 3))
                {
                    int l_149 = 0xDC60C70BL;
                    unsigned l_184 = 0xEF85CD53L;
                    if ((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s(l_77, 255UL)), ((p_55 && (0xA2B8L | p_55)) == (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(func_58(g_27.f3, (safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((+(((p_54 && (((((safe_sub_func_uint16_t_u_u((l_69[4][1] != p_54), 65535UL)) || 0xF7L) > 0UL) >= 0x75C7L) > l_77)) >= g_28.f6) & p_55)) & p_54), 0xC9L)), l_100)), p_57, g_26.f4), 7)), l_121))))))
                    {
                        short l_162 = (-2L);
                        g_151[0] = func_19(g_27.f1, func_58(g_27.f4, g_25[1][0].f6, (safe_sub_func_int8_t_s_s((func_58((func_58((safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s(p_55, 6)) != ((-1L) > 8UL)) || (((((safe_mod_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint32_t_u_u(1UL, (safe_rshift_func_uint16_t_u_u(func_58((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((g_28.f0 <= (safe_lshift_func_int16_t_s_u(l_83, l_148))) >= g_27.f1), g_28.f3)), g_28.f5)), g_27.f5)), g_27.f6, l_149, g_25[1][0].f2), 9)))) ^ (-1L)), 11)), 7)) < g_26.f2), 255UL)) && l_149) & g_14) != p_55), l_69[4][1])) == l_121) | 0x13DDL) >= l_149) && g_27.f4)), p_56.f0)), g_14, l_76[1][0][3], p_56.f0) != 0x5CL), l_76[1][2][4], g_26.f3, l_148) | l_83), g_27.f1)), g_27.f4), g_150, p_53);
                        p_53 = ((g_151[0].f4 && (((+(((safe_lshift_func_uint16_t_u_s((p_56.f0 == (((((l_121 | (p_56.f0 | (~func_58((safe_mod_func_uint8_t_u_u(func_58((safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_u(((!(safe_add_func_int32_t_s_s((((l_69[4][1] >= p_55) || ((p_53 > (func_58(p_57, g_27.f5, p_54, p_55) == 7L)) || p_56.f0)) < 255UL), g_26.f4))) & p_53), g_27.f3)) <= g_27.f2) > p_57), 0x7FAF6FDAL)), l_162, p_56.f0, p_53), p_55)), g_14, p_55, l_76[0][3][6])))) == l_76[3][1][8]) ^ l_162) > 4UL) < g_26.f3)), p_56.f0)) && g_25[1][0].f6) < p_57)) != 0x44L) | g_151[0].f5)) & g_27.f5);
                        g_151[7] = g_28;
                        g_163 = func_17(p_53);
                    }
                    else
                    {
                        unsigned char l_194 = 2UL;
                        p_53 = ((l_100 >= func_58(((safe_lshift_func_uint16_t_u_s(0UL, (safe_rshift_func_int16_t_s_s((-10L), (p_55 & 0xEDC2L))))) >= (p_53 == (safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(g_27.f2, l_69[4][1])), p_55)))), p_56.f0, l_149, g_104.f0)) ^ (-3L));
                        p_53 = (g_25[1][0].f4 >= ((g_25[1][0].f1 < l_76[2][1][1]) > ((0x28A6L == 0x1571L) ^ (((((safe_lshift_func_uint8_t_u_s(func_58(((safe_add_func_int16_t_s_s((3L != (safe_mod_func_uint16_t_u_u((p_56.f0 || ((safe_add_func_uint8_t_u_u(p_55, (((safe_rshift_func_uint16_t_u_u((l_184 < p_56.f0), 11)) ^ g_28.f0) <= g_25[1][0].f2))) < g_151[0].f3)), l_76[1][0][3]))), l_83)) < l_185), l_76[3][0][0], g_27.f1, p_54), 1)) ^ p_57) > g_25[1][0].f2) >= (-1L)) < g_163.f1))));
                        p_53 = (l_121 > (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(p_57, (safe_rshift_func_uint16_t_u_u(((l_76[1][0][3] <= (func_58(l_194, g_151[0].f5, g_27.f2, p_55) & ((+(g_163.f0 ^ p_57)) > l_76[1][0][3]))) != p_56.f0), l_195)))), g_163.f2)), g_27.f5)));
                    }
                    p_53 = 0L;
                }
            }
            for (p_54 = 0; (p_54 < (-22)); --p_54)
            {
                unsigned l_204 = 3UL;
                int l_208 = (-1L);
                if ((p_54 & ((((p_54 >= (func_58((safe_rshift_func_uint8_t_u_s(((safe_add_func_int8_t_s_s((func_58(p_53, l_77, (l_77 < l_76[1][0][3]), p_53) > (((p_57 != (-1L)) < 255UL) == 0xDC1EL)), l_204)) || 0xCEL), p_56.f0)), l_204, p_54, g_205) >= 4294967287UL)) != 0UL) < p_57) || 0UL)))
                {
                    char l_210[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_210[i] = 0L;
                    for (l_195 = 0; (l_195 <= 9); l_195 = safe_add_func_int32_t_s_s(l_195, 2))
                    {
                        l_208 = (p_55 || g_27.f1);
                        return p_56;
                    }
                    g_209 = func_17(g_28.f4);
                    g_151[0] = g_26;
                    l_210[1] = g_27.f4;
                }
                else
                {
                    unsigned l_225 = 0x4E641A28L;
                    l_226[5] = ((safe_mod_func_uint32_t_u_u(0UL, (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(0x3CL, (g_150 > l_100))), (((safe_rshift_func_int16_t_s_u(g_26.f4, 3)) <= (((((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(l_121, (-7L))), func_58(p_55, ((safe_lshift_func_int8_t_s_u((func_58(l_100, p_55, l_69[4][1], l_76[1][0][3]) & 0xAC97CB76L), 6)) && l_225), g_151[0].f5, p_55))) && l_84) > 4294967295UL) ^ l_208) != g_151[0].f5)) != l_84))))) <= 0xB0881C6FL);
                    if ((+p_55))
                    {
                        return g_104;
                    }
                    else
                    {
                        unsigned char l_230 = 0x2DL;
                        if (g_26.f2)
                            goto lbl_227;
                        g_25[1][0].f5 = ((0x1BL == ((safe_add_func_int32_t_s_s((func_58(l_230, p_56.f0, (func_58(g_151[0].f0, (p_53 | (~(safe_mod_func_uint8_t_u_u((((!l_77) != ((safe_mod_func_uint8_t_u_u(p_53, g_151[0].f4)) == g_151[0].f1)) >= l_69[0][0]), l_195)))), p_54, l_208) >= 65535UL), l_225) && 1L), 0UL)) ^ g_26.f2)) ^ 0x106E5606L);
                    }
                }
            }
            p_53 = (((g_25[1][0].f6 & p_54) <= func_58(func_58(l_69[0][2], l_226[0], l_69[4][1], l_76[0][1][6]), p_55, g_14, l_100)) <= l_185);
        }
        else
        {
            int l_250[6];
            int i;
            for (i = 0; i < 6; i++)
                l_250[i] = 0x65E9CBFCL;
            p_57 = (~0L);
            for (p_53 = 18; (p_53 <= 12); p_53--)
            {
                char l_241[8] = {0xBDL, 0x1DL, 0xBDL, 0x1DL, 0xBDL, 0x1DL, 0xBDL, 0x1DL};
                int l_251 = 0x62CCEC34L;
                int i;
                l_84 = (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(l_241[1], 8)), func_58(l_76[1][0][3], (l_76[1][0][3] > ((g_163.f0 <= (+(safe_add_func_int16_t_s_s(((g_151[0].f5 || p_53) | l_76[1][0][3]), (g_25[1][0].f2 >= g_151[0].f5))))) < p_53)), g_28.f0, l_100))) ^ p_56.f0) && p_54);
                g_25[1][0].f3 = (safe_add_func_uint8_t_u_u(g_209.f0, 0x4BL));
                for (p_55 = (-28); (p_55 >= (-3)); p_55 = safe_add_func_uint32_t_u_u(p_55, 6))
                {
                    if (p_54)
                        break;
                    l_251 = (((safe_mod_func_uint16_t_u_u(p_57, (~(l_250[2] != 0xC56DE614L)))) != 253UL) != g_151[0].f5);
                }
                g_25[0][1] = g_252;
            }
            p_53 = g_26.f3;
            g_209.f5 = ((((0UL || (((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((((l_250[4] > (safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(l_250[2], func_58(((p_55 ^ func_58(g_28.f3, (l_76[1][0][3] ^ (safe_rshift_func_int16_t_s_u((p_53 ^ ((safe_sub_func_uint16_t_u_u(l_250[1], l_100)) > g_163.f0)), 10))), p_57, g_26.f4)) || l_100), l_250[2], g_27.f6, p_56.f0))), g_252.f1))) <= p_56.f0) != (-1L)) && p_53) != l_265), l_69[1][0])), l_250[4])) < 0x69L) | 0x1E57EB0DL)) < l_266) >= g_151[0].f1) & g_27.f3);
        }
        g_25[1][0].f5 = (safe_add_func_int8_t_s_s((((l_265 | (func_58(p_53, (safe_rshift_func_int8_t_s_u(0x46L, 2)), (((-1L) ^ func_58(l_76[1][0][3], ((func_58(((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(g_163.f6, l_76[3][2][0])) && g_28.f4), 0)) >= ((l_100 > (-1L)) != 0UL)), l_76[3][3][8], p_53, g_26.f6) == g_209.f0) || g_25[1][0].f2), l_69[1][2], g_151[0].f1)) > p_56.f0), g_252.f1) & 0x36EDL)) != g_26.f5) <= l_69[4][1]), p_57));
        g_275[0] = func_17(g_209.f5);
        for (l_84 = 0; (l_84 == 24); l_84 = safe_add_func_uint16_t_u_u(l_84, 9))
        {
            char l_304 = 1L;
            unsigned l_306 = 0UL;
            int l_309 = 6L;
            for (g_205 = 29; (g_205 > 7); g_205 = safe_sub_func_int16_t_s_s(g_205, 2))
            {
                short l_292 = 0x3383L;
                unsigned l_305 = 0xFF352E7DL;
                g_293 = func_19(p_56.f0, p_57, (g_26.f6 >= (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(((1L < ((func_58(p_53, g_163.f5, ((safe_sub_func_uint8_t_u_u((g_209.f2 != (safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((!(0x2033L || ((g_26.f0 | l_76[1][2][2]) & g_26.f5))), 0xF0215B97L)) < 0L), 1L)), 10))), 0xECL)) < l_292), l_69[4][1]) && g_28.f4) | 0x77L)) ^ g_252.f1), 1)), 1))), g_209.f2);
                p_57 = ((safe_mod_func_int32_t_s_s(((!(-7L)) && (safe_mod_func_uint8_t_u_u(func_58((safe_rshift_func_int16_t_s_u(((((((g_163.f3 | (func_58(g_25[1][0].f3, (g_163.f6 | (g_209.f6 != ((safe_add_func_uint8_t_u_u((0x9DB8F0A8L || g_151[0].f1), p_56.f0)) == (func_58(l_304, g_27.f6, p_55, p_55) != 0x26CAL)))), g_163.f6, l_305) <= g_275[0].f3)) | 7UL) ^ 0xABFC873EL) > l_266) && 0xCCL) ^ l_306), 3)), g_25[1][0].f4, p_53, p_55), g_293.f4))), g_151[0].f1)) > p_55);
                l_309 = (safe_mod_func_uint32_t_u_u((l_305 ^ g_27.f2), p_53));
                g_311 = g_310;
            }
            l_309 = (p_57 >= ((safe_add_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((0x7058L ^ ((safe_lshift_func_uint16_t_u_s(l_69[6][1], (((((((safe_add_func_int8_t_s_s(g_25[1][0].f1, p_56.f0)) != (((safe_sub_func_int16_t_s_s(0x82A4L, (g_151[0].f5 == ((safe_sub_func_uint16_t_u_u(p_53, l_306)) == l_76[3][1][6])))) | l_76[1][0][3]) || p_55)) < g_205) != p_56.f0) < l_324) < g_163.f6) == l_69[2][0]))) | p_57)), g_25[1][0].f2)) == g_163.f6), p_53)) >= p_54));
            for (p_53 = 0; (p_53 <= 19); p_53 = safe_add_func_int8_t_s_s(p_53, 8))
            {
                for (l_304 = (-25); (l_304 < (-16)); l_304 = safe_add_func_int32_t_s_s(l_304, 8))
                {
                    for (l_265 = 0; (l_265 >= 34); l_265++)
                    {
                        g_28 = g_25[1][0];
                    }
                }
            }
        }
    }
    for (p_56.f0 = 0; (p_56.f0 >= 17); ++p_56.f0)
    {
        int l_340[2][2] = {{(-10L), (-1L)}, {(-10L), (-1L)}};
        unsigned l_391[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_391[i] = 0UL;
        if (((-1L) || g_104.f0))
        {
            unsigned char l_335 = 1UL;
            p_57 = 0x1C2B2188L;
            g_293 = func_19(l_76[1][0][3], ((safe_mod_func_uint8_t_u_u((l_335 != (((((l_335 | func_58(p_53, ((safe_sub_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(l_266, (l_340[1][1] ^ (-9L)))) | (+(safe_mod_func_int16_t_s_s((g_163.f5 && (safe_add_func_int8_t_s_s((p_53 || 0x79L), p_53))), p_53)))), 2UL)) && p_54), g_28.f1, p_53)) & l_340[1][1]) & g_26.f3) <= 0xE2DB5A4FL) > l_340[1][1])), g_209.f1)) && p_55), g_275[0].f2, p_57);
        }
        else
        {
            short l_354 = 6L;
            int l_408[6] = {1L, 5L, 1L, 5L, 1L, 5L};
            int i;
            if (func_58(g_151[0].f6, ((((g_310.f2 >= (g_163.f1 <= ((((~(safe_unary_minus_func_uint8_t_u((g_27.f1 && l_340[1][1])))) ^ (((((p_54 <= (safe_rshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(l_340[0][1], p_54)) == (((safe_lshift_func_int16_t_s_s((g_26.f6 != g_27.f0), g_28.f4)) <= 0xE6C3L) > l_266)), g_293.f4))) || l_340[1][1]) < p_57) | l_84) < p_53)) && 0x85L) || l_340[1][1]))) ^ p_55) && 255UL) || 0L), l_340[0][1], g_26.f6))
            {
                return g_104;
            }
            else
            {
                unsigned l_357 = 4UL;
                int l_360 = 0xEC53A727L;
                unsigned char l_385 = 0x86L;
                unsigned short l_388 = 0x61D3L;
                unsigned short l_390[6] = {0UL, 0UL, 0x7E49L, 0UL, 0UL, 0x7E49L};
                int l_433 = 0xE0B728D8L;
                int i;
                if ((l_354 ^ ((safe_lshift_func_int16_t_s_s(((((1L >= p_57) >= l_357) && ((safe_add_func_uint32_t_u_u(((8L ^ g_26.f4) != ((l_76[0][2][4] >= (p_57 != (l_354 & l_340[1][0]))) || (-1L))), l_340[1][1])) && l_360)) || 0xAD21F84CL), 13)) || 0xC4L)))
                {
                    short l_386 = 0xD214L;
                    if ((g_25[1][0].f3 < func_58((p_55 != ((((func_58(((+g_26.f3) != g_252.f5), (safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((-1L) & (safe_add_func_int32_t_s_s(g_151[0].f1, ((0xC281L && (((g_26.f2 && (l_367 > p_57)) | p_53) ^ 1L)) != l_76[2][3][9])))) ^ 0x0FAAF258L), 0x58L)), g_151[0].f5)), p_55, g_293.f1) | p_54) | 0x49B4L) < g_151[0].f1) >= g_25[1][0].f1)), p_55, g_26.f0, p_57)))
                    {
                        short l_376 = 0x96FDL;
                        p_53 = (safe_rshift_func_int8_t_s_u(func_58((safe_mod_func_uint16_t_u_u(p_54, func_58(((((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((l_376 == (((safe_mod_func_uint32_t_u_u(l_76[2][2][2], (((safe_sub_func_uint8_t_u_u((p_54 != (((g_311.f5 > 0x40L) != ((~(safe_rshift_func_int8_t_s_s(g_205, ((safe_sub_func_uint16_t_u_u((l_367 == p_54), p_56.f0)) != l_360)))) != p_56.f0)) == l_385)), g_252.f1)) | p_57) ^ g_26.f2))) || p_55) <= 0x8CCAB275L)) & g_209.f6), 8)), g_151[0].f4)) ^ p_57) && g_163.f0) | l_376), p_53, p_56.f0, g_163.f6))), p_56.f0, p_53, l_340[1][1]), 6));
                        if (p_57)
                            break;
                        if (p_56.f0)
                            break;
                    }
                    else
                    {
                        unsigned l_389 = 0UL;
                        p_53 = (l_386 >= (l_360 < 0x1AL));
                        g_387 = g_209;
                        p_57 = func_58(g_27.f2, l_340[1][0], l_388, p_56.f0);
                        g_311 = func_19(p_56.f0, l_389, ((g_151[0].f2 & (l_390[2] != l_391[2])) ^ l_388), (safe_sub_func_uint16_t_u_u(((~(g_387.f1 < (safe_lshift_func_int8_t_s_s(((l_386 < (safe_sub_func_int32_t_s_s((((l_354 | g_252.f4) != 0x5EL) < p_53), 0x9ED336E3L))) > 1UL), 2)))) || 4294967294UL), g_311.f4)));
                    }
                }
                else
                {
                    int l_417[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_417[i] = 0x01581D6AL;
                    l_408[2] = (safe_mod_func_int8_t_s_s(func_58((safe_rshift_func_int8_t_s_s(((0xB3F208D0L | (safe_add_func_uint32_t_u_u(4294967295UL, 0xF6DFAD8BL))) < (safe_rshift_func_uint8_t_u_u(g_275[0].f0, (g_27.f5 == (g_252.f5 == g_151[0].f5))))), 7)), (((safe_lshift_func_uint16_t_u_s(0x8012L, 8)) | l_391[2]) ^ p_54), p_53, g_25[1][0].f2), l_76[2][2][4]));
                    p_53 = (safe_rshift_func_int16_t_s_s((g_82 >= ((~(0xFC6B6284L == (+g_163.f4))) <= (((g_27.f5 | (p_55 < p_54)) < (safe_rshift_func_int16_t_s_u(l_340[1][1], 0))) < ((((safe_mod_func_uint8_t_u_u(((((safe_sub_func_int16_t_s_s(1L, g_27.f3)) < g_25[1][0].f0) | g_275[0].f4) & 0xA9L), 255UL)) && 4294967293UL) > l_417[1]) == 2UL)))), l_340[1][1]));
                    if (l_417[3])
                        break;
                }
                g_209.f5 = func_58((l_388 ^ ((p_55 == ((+(safe_add_func_uint32_t_u_u(0xF5BB88A6L, p_54))) >= func_58(l_390[2], l_324, (safe_add_func_uint32_t_u_u(0xB3D1CA73L, l_340[1][1])), p_57))) ^ l_422)), g_26.f4, g_151[0].f6, g_27.f5);
                l_433 = (safe_add_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(0x02E96E14L, 0x020426F2L)) | func_58((safe_sub_func_int8_t_s_s(0x52L, ((p_57 >= (safe_lshift_func_int8_t_s_s(p_56.f0, (g_275[0].f4 < g_27.f6)))) | ((safe_add_func_uint8_t_u_u(8UL, g_163.f5)) <= l_422)))), l_266, l_354, l_422)), l_391[1]));
                g_163.f3 = p_57;
            }
        }
    }
    return p_56;
}







static int func_58(char p_59, unsigned char p_60, short p_61, unsigned char p_62)
{
    g_28 = g_28;
    return g_25[1][0].f1;
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
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_25[i][j].f0, "g_25[i][j].f0", print_hash_value);
            transparent_crc(g_25[i][j].f1, "g_25[i][j].f1", print_hash_value);
            transparent_crc(g_25[i][j].f2, "g_25[i][j].f2", print_hash_value);
            transparent_crc(g_25[i][j].f3, "g_25[i][j].f3", print_hash_value);
            transparent_crc(g_25[i][j].f4, "g_25[i][j].f4", print_hash_value);
            transparent_crc(g_25[i][j].f5, "g_25[i][j].f5", print_hash_value);
            transparent_crc(g_25[i][j].f6, "g_25[i][j].f6", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_26.f0, "g_26.f0", print_hash_value);
    transparent_crc(g_26.f1, "g_26.f1", print_hash_value);
    transparent_crc(g_26.f2, "g_26.f2", print_hash_value);
    transparent_crc(g_26.f3, "g_26.f3", print_hash_value);
    transparent_crc(g_26.f4, "g_26.f4", print_hash_value);
    transparent_crc(g_26.f5, "g_26.f5", print_hash_value);
    transparent_crc(g_26.f6, "g_26.f6", print_hash_value);
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
    transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
    transparent_crc(g_27.f3, "g_27.f3", print_hash_value);
    transparent_crc(g_27.f4, "g_27.f4", print_hash_value);
    transparent_crc(g_27.f5, "g_27.f5", print_hash_value);
    transparent_crc(g_27.f6, "g_27.f6", print_hash_value);
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
    transparent_crc(g_28.f2, "g_28.f2", print_hash_value);
    transparent_crc(g_28.f3, "g_28.f3", print_hash_value);
    transparent_crc(g_28.f4, "g_28.f4", print_hash_value);
    transparent_crc(g_28.f5, "g_28.f5", print_hash_value);
    transparent_crc(g_28.f6, "g_28.f6", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_151[i].f0, "g_151[i].f0", print_hash_value);
        transparent_crc(g_151[i].f1, "g_151[i].f1", print_hash_value);
        transparent_crc(g_151[i].f2, "g_151[i].f2", print_hash_value);
        transparent_crc(g_151[i].f3, "g_151[i].f3", print_hash_value);
        transparent_crc(g_151[i].f4, "g_151[i].f4", print_hash_value);
        transparent_crc(g_151[i].f5, "g_151[i].f5", print_hash_value);
        transparent_crc(g_151[i].f6, "g_151[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_163.f0, "g_163.f0", print_hash_value);
    transparent_crc(g_163.f1, "g_163.f1", print_hash_value);
    transparent_crc(g_163.f2, "g_163.f2", print_hash_value);
    transparent_crc(g_163.f3, "g_163.f3", print_hash_value);
    transparent_crc(g_163.f4, "g_163.f4", print_hash_value);
    transparent_crc(g_163.f5, "g_163.f5", print_hash_value);
    transparent_crc(g_163.f6, "g_163.f6", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_209.f0, "g_209.f0", print_hash_value);
    transparent_crc(g_209.f1, "g_209.f1", print_hash_value);
    transparent_crc(g_209.f2, "g_209.f2", print_hash_value);
    transparent_crc(g_209.f3, "g_209.f3", print_hash_value);
    transparent_crc(g_209.f4, "g_209.f4", print_hash_value);
    transparent_crc(g_209.f5, "g_209.f5", print_hash_value);
    transparent_crc(g_209.f6, "g_209.f6", print_hash_value);
    transparent_crc(g_252.f0, "g_252.f0", print_hash_value);
    transparent_crc(g_252.f1, "g_252.f1", print_hash_value);
    transparent_crc(g_252.f2, "g_252.f2", print_hash_value);
    transparent_crc(g_252.f3, "g_252.f3", print_hash_value);
    transparent_crc(g_252.f4, "g_252.f4", print_hash_value);
    transparent_crc(g_252.f5, "g_252.f5", print_hash_value);
    transparent_crc(g_252.f6, "g_252.f6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_275[i].f0, "g_275[i].f0", print_hash_value);
        transparent_crc(g_275[i].f1, "g_275[i].f1", print_hash_value);
        transparent_crc(g_275[i].f2, "g_275[i].f2", print_hash_value);
        transparent_crc(g_275[i].f3, "g_275[i].f3", print_hash_value);
        transparent_crc(g_275[i].f4, "g_275[i].f4", print_hash_value);
        transparent_crc(g_275[i].f5, "g_275[i].f5", print_hash_value);
        transparent_crc(g_275[i].f6, "g_275[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_293.f0, "g_293.f0", print_hash_value);
    transparent_crc(g_293.f1, "g_293.f1", print_hash_value);
    transparent_crc(g_293.f2, "g_293.f2", print_hash_value);
    transparent_crc(g_293.f3, "g_293.f3", print_hash_value);
    transparent_crc(g_293.f4, "g_293.f4", print_hash_value);
    transparent_crc(g_293.f5, "g_293.f5", print_hash_value);
    transparent_crc(g_293.f6, "g_293.f6", print_hash_value);
    transparent_crc(g_310.f0, "g_310.f0", print_hash_value);
    transparent_crc(g_310.f1, "g_310.f1", print_hash_value);
    transparent_crc(g_310.f2, "g_310.f2", print_hash_value);
    transparent_crc(g_310.f3, "g_310.f3", print_hash_value);
    transparent_crc(g_310.f4, "g_310.f4", print_hash_value);
    transparent_crc(g_310.f5, "g_310.f5", print_hash_value);
    transparent_crc(g_310.f6, "g_310.f6", print_hash_value);
    transparent_crc(g_311.f0, "g_311.f0", print_hash_value);
    transparent_crc(g_311.f1, "g_311.f1", print_hash_value);
    transparent_crc(g_311.f2, "g_311.f2", print_hash_value);
    transparent_crc(g_311.f3, "g_311.f3", print_hash_value);
    transparent_crc(g_311.f4, "g_311.f4", print_hash_value);
    transparent_crc(g_311.f5, "g_311.f5", print_hash_value);
    transparent_crc(g_311.f6, "g_311.f6", print_hash_value);
    transparent_crc(g_387.f0, "g_387.f0", print_hash_value);
    transparent_crc(g_387.f1, "g_387.f1", print_hash_value);
    transparent_crc(g_387.f2, "g_387.f2", print_hash_value);
    transparent_crc(g_387.f3, "g_387.f3", print_hash_value);
    transparent_crc(g_387.f4, "g_387.f4", print_hash_value);
    transparent_crc(g_387.f5, "g_387.f5", print_hash_value);
    transparent_crc(g_387.f6, "g_387.f6", print_hash_value);
    transparent_crc(g_460.f0, "g_460.f0", print_hash_value);
    transparent_crc(g_460.f1, "g_460.f1", print_hash_value);
    transparent_crc(g_460.f2, "g_460.f2", print_hash_value);
    transparent_crc(g_460.f3, "g_460.f3", print_hash_value);
    transparent_crc(g_460.f4, "g_460.f4", print_hash_value);
    transparent_crc(g_460.f5, "g_460.f5", print_hash_value);
    transparent_crc(g_460.f6, "g_460.f6", print_hash_value);
    transparent_crc(g_520.f0, "g_520.f0", print_hash_value);
    transparent_crc(g_520.f1, "g_520.f1", print_hash_value);
    transparent_crc(g_520.f2, "g_520.f2", print_hash_value);
    transparent_crc(g_520.f3, "g_520.f3", print_hash_value);
    transparent_crc(g_520.f4, "g_520.f4", print_hash_value);
    transparent_crc(g_520.f5, "g_520.f5", print_hash_value);
    transparent_crc(g_520.f6, "g_520.f6", print_hash_value);
    transparent_crc(g_521.f0, "g_521.f0", print_hash_value);
    transparent_crc(g_521.f1, "g_521.f1", print_hash_value);
    transparent_crc(g_521.f2, "g_521.f2", print_hash_value);
    transparent_crc(g_521.f3, "g_521.f3", print_hash_value);
    transparent_crc(g_521.f4, "g_521.f4", print_hash_value);
    transparent_crc(g_521.f5, "g_521.f5", print_hash_value);
    transparent_crc(g_521.f6, "g_521.f6", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_545[i][j], "g_545[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_606.f0, "g_606.f0", print_hash_value);
    transparent_crc(g_606.f1, "g_606.f1", print_hash_value);
    transparent_crc(g_606.f2, "g_606.f2", print_hash_value);
    transparent_crc(g_606.f3, "g_606.f3", print_hash_value);
    transparent_crc(g_606.f4, "g_606.f4", print_hash_value);
    transparent_crc(g_606.f5, "g_606.f5", print_hash_value);
    transparent_crc(g_606.f6, "g_606.f6", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_634[i][j].f0, "g_634[i][j].f0", print_hash_value);
            transparent_crc(g_634[i][j].f1, "g_634[i][j].f1", print_hash_value);
            transparent_crc(g_634[i][j].f2, "g_634[i][j].f2", print_hash_value);
            transparent_crc(g_634[i][j].f3, "g_634[i][j].f3", print_hash_value);
            transparent_crc(g_634[i][j].f4, "g_634[i][j].f4", print_hash_value);
            transparent_crc(g_634[i][j].f5, "g_634[i][j].f5", print_hash_value);
            transparent_crc(g_634[i][j].f6, "g_634[i][j].f6", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_635.f0, "g_635.f0", print_hash_value);
    transparent_crc(g_635.f1, "g_635.f1", print_hash_value);
    transparent_crc(g_635.f2, "g_635.f2", print_hash_value);
    transparent_crc(g_635.f3, "g_635.f3", print_hash_value);
    transparent_crc(g_635.f4, "g_635.f4", print_hash_value);
    transparent_crc(g_635.f5, "g_635.f5", print_hash_value);
    transparent_crc(g_635.f6, "g_635.f6", print_hash_value);
    transparent_crc(g_650.f0, "g_650.f0", print_hash_value);
    transparent_crc(g_650.f1, "g_650.f1", print_hash_value);
    transparent_crc(g_650.f2, "g_650.f2", print_hash_value);
    transparent_crc(g_650.f3, "g_650.f3", print_hash_value);
    transparent_crc(g_650.f4, "g_650.f4", print_hash_value);
    transparent_crc(g_650.f5, "g_650.f5", print_hash_value);
    transparent_crc(g_650.f6, "g_650.f6", print_hash_value);
    transparent_crc(g_672.f0, "g_672.f0", print_hash_value);
    transparent_crc(g_672.f1, "g_672.f1", print_hash_value);
    transparent_crc(g_672.f2, "g_672.f2", print_hash_value);
    transparent_crc(g_672.f3, "g_672.f3", print_hash_value);
    transparent_crc(g_672.f4, "g_672.f4", print_hash_value);
    transparent_crc(g_672.f5, "g_672.f5", print_hash_value);
    transparent_crc(g_672.f6, "g_672.f6", print_hash_value);
    transparent_crc(g_693.f0, "g_693.f0", print_hash_value);
    transparent_crc(g_693.f1, "g_693.f1", print_hash_value);
    transparent_crc(g_693.f2, "g_693.f2", print_hash_value);
    transparent_crc(g_693.f3, "g_693.f3", print_hash_value);
    transparent_crc(g_693.f4, "g_693.f4", print_hash_value);
    transparent_crc(g_693.f5, "g_693.f5", print_hash_value);
    transparent_crc(g_693.f6, "g_693.f6", print_hash_value);
    transparent_crc(g_694.f0, "g_694.f0", print_hash_value);
    transparent_crc(g_694.f1, "g_694.f1", print_hash_value);
    transparent_crc(g_694.f2, "g_694.f2", print_hash_value);
    transparent_crc(g_694.f3, "g_694.f3", print_hash_value);
    transparent_crc(g_694.f4, "g_694.f4", print_hash_value);
    transparent_crc(g_694.f5, "g_694.f5", print_hash_value);
    transparent_crc(g_694.f6, "g_694.f6", print_hash_value);
    transparent_crc(g_722.f0, "g_722.f0", print_hash_value);
    transparent_crc(g_722.f1, "g_722.f1", print_hash_value);
    transparent_crc(g_722.f2, "g_722.f2", print_hash_value);
    transparent_crc(g_722.f3, "g_722.f3", print_hash_value);
    transparent_crc(g_722.f4, "g_722.f4", print_hash_value);
    transparent_crc(g_722.f5, "g_722.f5", print_hash_value);
    transparent_crc(g_722.f6, "g_722.f6", print_hash_value);
    transparent_crc(g_723.f0, "g_723.f0", print_hash_value);
    transparent_crc(g_723.f1, "g_723.f1", print_hash_value);
    transparent_crc(g_723.f2, "g_723.f2", print_hash_value);
    transparent_crc(g_723.f3, "g_723.f3", print_hash_value);
    transparent_crc(g_723.f4, "g_723.f4", print_hash_value);
    transparent_crc(g_723.f5, "g_723.f5", print_hash_value);
    transparent_crc(g_723.f6, "g_723.f6", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    transparent_crc(g_747.f0, "g_747.f0", print_hash_value);
    transparent_crc(g_747.f1, "g_747.f1", print_hash_value);
    transparent_crc(g_747.f2, "g_747.f2", print_hash_value);
    transparent_crc(g_747.f3, "g_747.f3", print_hash_value);
    transparent_crc(g_747.f4, "g_747.f4", print_hash_value);
    transparent_crc(g_747.f5, "g_747.f5", print_hash_value);
    transparent_crc(g_747.f6, "g_747.f6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_748[i][j].f0, "g_748[i][j].f0", print_hash_value);
            transparent_crc(g_748[i][j].f1, "g_748[i][j].f1", print_hash_value);
            transparent_crc(g_748[i][j].f2, "g_748[i][j].f2", print_hash_value);
            transparent_crc(g_748[i][j].f3, "g_748[i][j].f3", print_hash_value);
            transparent_crc(g_748[i][j].f4, "g_748[i][j].f4", print_hash_value);
            transparent_crc(g_748[i][j].f5, "g_748[i][j].f5", print_hash_value);
            transparent_crc(g_748[i][j].f6, "g_748[i][j].f6", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_749.f0, "g_749.f0", print_hash_value);
    transparent_crc(g_749.f1, "g_749.f1", print_hash_value);
    transparent_crc(g_749.f2, "g_749.f2", print_hash_value);
    transparent_crc(g_749.f3, "g_749.f3", print_hash_value);
    transparent_crc(g_749.f4, "g_749.f4", print_hash_value);
    transparent_crc(g_749.f5, "g_749.f5", print_hash_value);
    transparent_crc(g_749.f6, "g_749.f6", print_hash_value);
    transparent_crc(g_761, "g_761", print_hash_value);
    transparent_crc(g_792.f0, "g_792.f0", print_hash_value);
    transparent_crc(g_792.f1, "g_792.f1", print_hash_value);
    transparent_crc(g_792.f2, "g_792.f2", print_hash_value);
    transparent_crc(g_792.f3, "g_792.f3", print_hash_value);
    transparent_crc(g_792.f4, "g_792.f4", print_hash_value);
    transparent_crc(g_792.f5, "g_792.f5", print_hash_value);
    transparent_crc(g_792.f6, "g_792.f6", print_hash_value);
    transparent_crc(g_830.f0, "g_830.f0", print_hash_value);
    transparent_crc(g_830.f1, "g_830.f1", print_hash_value);
    transparent_crc(g_830.f2, "g_830.f2", print_hash_value);
    transparent_crc(g_830.f3, "g_830.f3", print_hash_value);
    transparent_crc(g_830.f4, "g_830.f4", print_hash_value);
    transparent_crc(g_830.f5, "g_830.f5", print_hash_value);
    transparent_crc(g_830.f6, "g_830.f6", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_870[i], "g_870[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_896.f0, "g_896.f0", print_hash_value);
    transparent_crc(g_896.f1, "g_896.f1", print_hash_value);
    transparent_crc(g_896.f2, "g_896.f2", print_hash_value);
    transparent_crc(g_896.f3, "g_896.f3", print_hash_value);
    transparent_crc(g_896.f4, "g_896.f4", print_hash_value);
    transparent_crc(g_896.f5, "g_896.f5", print_hash_value);
    transparent_crc(g_896.f6, "g_896.f6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_897[i][j][k].f0, "g_897[i][j][k].f0", print_hash_value);
                transparent_crc(g_897[i][j][k].f1, "g_897[i][j][k].f1", print_hash_value);
                transparent_crc(g_897[i][j][k].f2, "g_897[i][j][k].f2", print_hash_value);
                transparent_crc(g_897[i][j][k].f3, "g_897[i][j][k].f3", print_hash_value);
                transparent_crc(g_897[i][j][k].f4, "g_897[i][j][k].f4", print_hash_value);
                transparent_crc(g_897[i][j][k].f5, "g_897[i][j][k].f5", print_hash_value);
                transparent_crc(g_897[i][j][k].f6, "g_897[i][j][k].f6", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_898[i].f0, "g_898[i].f0", print_hash_value);
        transparent_crc(g_898[i].f1, "g_898[i].f1", print_hash_value);
        transparent_crc(g_898[i].f2, "g_898[i].f2", print_hash_value);
        transparent_crc(g_898[i].f3, "g_898[i].f3", print_hash_value);
        transparent_crc(g_898[i].f4, "g_898[i].f4", print_hash_value);
        transparent_crc(g_898[i].f5, "g_898[i].f5", print_hash_value);
        transparent_crc(g_898[i].f6, "g_898[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_917, "g_917", print_hash_value);
    transparent_crc(g_948.f0, "g_948.f0", print_hash_value);
    transparent_crc(g_948.f1, "g_948.f1", print_hash_value);
    transparent_crc(g_948.f2, "g_948.f2", print_hash_value);
    transparent_crc(g_948.f3, "g_948.f3", print_hash_value);
    transparent_crc(g_948.f4, "g_948.f4", print_hash_value);
    transparent_crc(g_948.f5, "g_948.f5", print_hash_value);
    transparent_crc(g_948.f6, "g_948.f6", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_951[i][j].f0, "g_951[i][j].f0", print_hash_value);
            transparent_crc(g_951[i][j].f1, "g_951[i][j].f1", print_hash_value);
            transparent_crc(g_951[i][j].f2, "g_951[i][j].f2", print_hash_value);
            transparent_crc(g_951[i][j].f3, "g_951[i][j].f3", print_hash_value);
            transparent_crc(g_951[i][j].f4, "g_951[i][j].f4", print_hash_value);
            transparent_crc(g_951[i][j].f5, "g_951[i][j].f5", print_hash_value);
            transparent_crc(g_951[i][j].f6, "g_951[i][j].f6", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_952.f0, "g_952.f0", print_hash_value);
    transparent_crc(g_952.f1, "g_952.f1", print_hash_value);
    transparent_crc(g_952.f2, "g_952.f2", print_hash_value);
    transparent_crc(g_952.f3, "g_952.f3", print_hash_value);
    transparent_crc(g_952.f4, "g_952.f4", print_hash_value);
    transparent_crc(g_952.f5, "g_952.f5", print_hash_value);
    transparent_crc(g_952.f6, "g_952.f6", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
