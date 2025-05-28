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




static long long
(safe_unary_minus_func_int64_t_s)(long long si )
{
 
  return


    (si==(-(9223372036854775807LL)-1)) ?
    ((si)) :


    -si;
}

static long long
(safe_add_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807LL)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-(9223372036854775807LL)-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static long long
(safe_sub_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807LL))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static long long
(safe_mul_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807LL) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-(9223372036854775807LL)-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-(9223372036854775807LL)-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807LL) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static long long
(safe_mod_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-(9223372036854775807LL)-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static long long
(safe_div_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-(9223372036854775807LL)-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static long long
(safe_lshift_func_int64_t_s_s)(long long left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807LL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static long long
(safe_lshift_func_int64_t_s_u)(long long left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807LL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static long long
(safe_rshift_func_int64_t_s_s)(long long left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static long long
(safe_rshift_func_int64_t_s_u)(long long left, unsigned int right )
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




static unsigned long long
(safe_unary_minus_func_uint64_t_u)(unsigned long long ui )
{
 
  return -ui;
}

static unsigned long long
(safe_add_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ui1 + ui2;
}

static unsigned long long
(safe_sub_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ui1 - ui2;
}

static unsigned long long
(safe_mul_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ((unsigned long long int)ui1) * ((unsigned long long int)ui2);
}

static unsigned long long
(safe_mod_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned long long
(safe_div_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned long long
(safe_lshift_func_uint64_t_u_s)(unsigned long long left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned long long
(safe_lshift_func_uint64_t_u_u)(unsigned long long left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned long long
(safe_rshift_func_uint64_t_u_s)(unsigned long long left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned long long
(safe_rshift_func_uint64_t_u_u)(unsigned long long left, unsigned int right )
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
   unsigned f0 : 6;
   signed f1 : 3;
   unsigned f2 : 25;
   const unsigned f3 : 1;
   signed f4 : 12;
};

struct S1 {
   signed f0 : 31;
   const signed f1 : 28;
   signed f2 : 29;
   unsigned short f3;
   unsigned f4 : 26;
   unsigned f5 : 16;
   unsigned f6;
   unsigned f7 : 6;
};

struct S2 {
   unsigned f0 : 5;
   const unsigned f1 : 8;
   unsigned f2;
};

struct S3 {
   signed f0 : 7;
   unsigned f1 : 6;
   unsigned f2 : 31;
   unsigned f3 : 7;
   unsigned f4 : 2;
   struct S2 f5;
   unsigned f6 : 16;
   unsigned f7 : 27;
   const unsigned f8 : 7;
   const signed f9 : 12;
};

struct S4 {
   unsigned f0 : 20;
   signed f1 : 15;
};


static struct S4 g_16 = {490,-46};
static short g_82 = 0x1463L;
static short g_84 = (-4L);
static int g_95[3][1] = {{1L},{1L},{1L}};
static struct S4 g_109 = {687,33};
static struct S0 g_117 = {3,-1,4727,0,0};
static struct S3 g_118 = {-0,6,43007,4,1,{0,12,0x15CA0C00L},91,9747,8,-44};
static const struct S1 g_439 = {-29411,-3932,-21716,0xBA58L,2374,201,0xE72941B8L,4};
static unsigned short g_578 = 0xDD07L;
static int g_632 = (-1L);
static struct S4 g_885 = {1011,160};
static struct S4 g_899 = {354,56};
static unsigned short g_1005 = 0UL;
static unsigned g_1052 = 1UL;
static unsigned short g_1132 = 1UL;
static short g_1155[9] = {0x3548L,1L,0x3548L,1L,0x3548L,1L,0x3548L,1L,0x3548L};
static struct S0 g_1280 = {7,-1,2663,0,30};
static unsigned g_1445 = 1UL;
static struct S0 g_1588 = {7,1,530,0,-45};
static short g_1675 = 0x425AL;
static int g_1699 = (-9L);
static const struct S2 g_1707 = {3,1,0x82A25607L};
static short g_1731[9][8][3] = {{{(-2L),0xCA14L,0x8404L},{0L,4L,(-8L)},{(-2L),(-1L),(-2L)},{0x98F7L,0x647DL,(-8L)},{0xD512L,8L,0x8404L},{0xF7E5L,0x647DL,0L},{0x8404L,(-1L),(-3L)},{0xF7E5L,4L,0xF7E5L}},{{0xD512L,0xCA14L,(-3L)},{0x98F7L,0x691CL,0L},{(-2L),0xCA14L,0x8404L},{0L,(-8L),0x5447L},{0x18D5L,(-3L),0x18D5L},{0xB1EBL,0x98F7L,0x5447L},{0x6A5BL,(-1L),0x13F7L},{0x950EL,0x98F7L,(-1L)}},{{0x13F7L,(-3L),(-1L)},{0x950EL,(-8L),0x950EL},{0x6A5BL,0xD512L,(-1L)},{0xB1EBL,0x03B8L,(-1L)},{0x18D5L,0xD512L,0x13F7L},{(-1L),(-8L),0x5447L},{0x18D5L,(-3L),0x18D5L},{0xB1EBL,0x98F7L,0x5447L}},{{0x6A5BL,(-1L),0x13F7L},{0x950EL,0x98F7L,(-1L)},{0x13F7L,(-3L),(-1L)},{0x950EL,(-8L),0x950EL},{0x6A5BL,0xD512L,(-1L)},{0xB1EBL,0x03B8L,(-1L)},{0x18D5L,0xD512L,0x13F7L},{(-1L),(-8L),0x5447L}},{{0x18D5L,(-3L),0x18D5L},{0xB1EBL,0x98F7L,0x5447L},{0x6A5BL,(-1L),0x13F7L},{0x950EL,0x98F7L,(-1L)},{0x13F7L,(-3L),(-1L)},{0x950EL,(-8L),0x950EL},{0x6A5BL,0xD512L,(-1L)},{0xB1EBL,0x03B8L,(-1L)}},{{0x18D5L,0xD512L,0x13F7L},{(-1L),(-8L),0x5447L},{0x18D5L,(-3L),0x18D5L},{0x950EL,0xF7E5L,0xB1EBL},{0x18D5L,0x8404L,(-1L)},{(-1L),0xF7E5L,0x5447L},{(-1L),0xD512L,0x6A5BL},{(-1L),0x98F7L,(-1L)}},{{0x18D5L,(-2L),0x6A5BL},{0x950EL,0L,0x5447L},{1L,(-2L),(-1L)},{0x5447L,0x98F7L,0xB1EBL},{1L,0xD512L,1L},{0x950EL,0xF7E5L,0xB1EBL},{0x18D5L,0x8404L,(-1L)},{(-1L),0xF7E5L,0x5447L}},{{(-1L),0xD512L,0x6A5BL},{(-1L),0x98F7L,(-1L)},{0x18D5L,(-2L),0x6A5BL},{0x950EL,0L,0x5447L},{1L,(-2L),(-1L)},{0x5447L,0x98F7L,0xB1EBL},{1L,0xD512L,1L},{0x950EL,0xF7E5L,0xB1EBL}},{{0x18D5L,0x8404L,(-1L)},{(-1L),0xF7E5L,0x5447L},{(-1L),0xD512L,0x6A5BL},{(-1L),0x98F7L,(-1L)},{0x18D5L,(-2L),0x6A5BL},{0x950EL,0L,0x5447L},{1L,(-2L),(-1L)},{0x5447L,0x98F7L,0xB1EBL}}};
static struct S3 g_1820 = {2,7,17534,1,0,{0,6,0UL},106,10360,9,27};
static short g_1828 = 0xEDB1L;
static unsigned short g_1904 = 65535UL;



static unsigned char func_1(void);
static unsigned char func_3(struct S2 p_4, unsigned p_5);
static struct S2 func_6(int p_7, struct S0 p_8, unsigned p_9, struct S1 p_10);
static short func_13(const unsigned p_14, struct S4 p_15);
static struct S3 func_17(unsigned p_18, unsigned p_19);
static char func_22(short p_23, char p_24, struct S1 p_25);
static char func_26(unsigned p_27, struct S0 p_28, unsigned char p_29);
static struct S0 func_30(struct S4 p_31, unsigned p_32, unsigned p_33, unsigned p_34, int p_35);
static struct S4 func_36(unsigned p_37, int p_38);
static int func_40(short p_41, unsigned p_42);
static unsigned char func_1(void)
{
    struct S3 l_2 = {5,6,42621,7,1,{1,11,2UL},94,2998,6,-54};
    unsigned l_1281 = 0x6290AF75L;
    unsigned short l_1782 = 65526UL;
    unsigned char l_1796 = 248UL;
    struct S1 l_1800 = {-17906,-3946,10804,65532UL,7688,195,0x613684EFL,5};
    struct S0 l_1814 = {4,-1,787,0,47};
    struct S4 l_1817[6][9][2] = {{{{167,-28},{692,-137}},{{247,33},{888,117}},{{726,-8},{662,79}},{{692,-137},{587,-82}},{{587,-82},{662,79}},{{90,-18},{726,-8}},{{888,117},{785,24}},{{587,-82},{90,-18}},{{150,-156},{587,-82}}},{{{167,-28},{597,-176}},{{167,-28},{587,-82}},{{150,-156},{90,-18}},{{587,-82},{785,24}},{{888,117},{726,-8}},{{90,-18},{662,79}},{{662,79},{662,79}},{{90,-18},{726,-8}},{{888,117},{785,24}}},{{{587,-82},{90,-18}},{{150,-156},{587,-82}},{{167,-28},{597,-176}},{{167,-28},{587,-82}},{{150,-156},{90,-18}},{{587,-82},{785,24}},{{888,117},{726,-8}},{{90,-18},{662,79}},{{662,79},{662,79}}},{{{90,-18},{726,-8}},{{888,117},{785,24}},{{587,-82},{90,-18}},{{150,-156},{587,-82}},{{167,-28},{597,-176}},{{167,-28},{587,-82}},{{150,-156},{90,-18}},{{587,-82},{785,24}},{{888,117},{726,-8}}},{{{90,-18},{662,79}},{{662,79},{662,79}},{{90,-18},{726,-8}},{{888,117},{785,24}},{{587,-82},{90,-18}},{{150,-156},{587,-82}},{{167,-28},{597,-176}},{{167,-28},{587,-82}},{{150,-156},{90,-18}}},{{{587,-82},{785,24}},{{888,117},{726,-8}},{{90,-18},{662,79}},{{662,79},{662,79}},{{90,-18},{726,-8}},{{888,117},{785,24}},{{587,-82},{90,-18}},{{726,-8},{785,24}},{{662,79},{150,-156}}}};
    short l_1922 = (-3L);
    int l_1976 = (-1L);
    int i, j, k;
    if (((l_2 , func_3(func_6((safe_sub_func_int16_t_s_s(func_13(l_2.f0, g_16), l_2.f5.f2)), g_1280, l_1281, g_439), l_2.f1)) , l_2.f0))
    {
        int l_1776 = 0x814E67BBL;
        struct S4 l_1801 = {276,-29};
        unsigned char l_1804[9] = {0xC3L,0xC3L,0xC3L,0xC3L,0xC3L,0xC3L,0xC3L,0xC3L,0xC3L};
        unsigned l_1816 = 0xC78CFC6BL;
        unsigned l_1877 = 0x9CA32B60L;
        int i;
        if ((safe_mul_func_int8_t_s_s((l_1776 & (safe_unary_minus_func_int8_t_s(g_1588.f3))), func_40((g_1675 < (func_40((func_36(l_2.f5.f0, l_2.f4) , (((safe_mod_func_uint8_t_u_u(((l_1776 ^ ((g_1155[3] >= 0x594F9CEEL) <= l_1776)) != g_1445), (-1L))) & 0x2989F9CDL) < l_2.f8)), g_1155[8]) , 0xB0L)), l_2.f0))))
        {
            struct S4 l_1787 = {807,118};
            struct S1 l_1815 = {-10599,-5562,8931,65535UL,4765,120,0xEC2B74D4L,2};
            struct S2 l_1846 = {1,8,0xF0801E82L};
            l_2.f0 = (safe_add_func_int32_t_s_s(l_1782, (safe_mul_func_uint8_t_u_u((func_6(func_40((safe_sub_func_uint8_t_u_u(l_2.f0, 0L)), l_2.f5.f0), g_1588, (g_1280.f3 , g_885.f0), g_439) , 252UL), g_118.f4))));
            l_1787 = g_109;
            if ((g_1280.f1 ^ func_22(l_1787.f0, (safe_rshift_func_uint8_t_u_u(((func_17((((l_1281 , g_117) , l_1787.f1) && (safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u(((g_118.f5 , ((g_899.f1 >= (safe_lshift_func_uint8_t_u_s(g_1155[3], 6))) , l_1787.f1)) < l_1776), g_117.f3)) , l_1776) & l_1796), 247UL))), g_1588.f4) , 6L) & (-1L)), 5)), g_439)))
            {
                int l_1799 = 0xA1A0B3B6L;
                struct S0 l_1805 = {5,-0,3268,0,-10};
                unsigned short l_1840 = 1UL;
                struct S4 l_1842 = {152,-138};
                for (g_1675 = (-3); (g_1675 > 10); g_1675++)
                {
                    struct S4 l_1806 = {388,16};
                    l_1801 = func_36(func_22(l_1799, g_1588.f4, l_1800), g_439.f3);
                    for (g_1445 = (-27); (g_1445 < 35); g_1445 = safe_add_func_int16_t_s_s(g_1445, 8))
                    {
                        unsigned l_1807 = 1UL;
                        struct S2 l_1813 = {0,11,0x4AC577B6L};
                        l_1806 = ((func_40(l_1799, func_26(l_1804[8], l_1805, g_117.f3)) != (l_1776 | (g_117.f2 >= g_117.f3))) , l_1787);
                        l_1801.f1 = 1L;
                        l_1816 = (func_17(l_1807, (func_6((func_3(((g_439.f3 & func_3(func_6(((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(func_13(g_109.f1, (l_1807 , g_899)))), 1UL)) , ((safe_mul_func_uint8_t_u_u(l_1807, ((g_117.f4 || g_632) == l_1805.f3))) > g_439.f7)), g_1280, l_1804[1], g_439), l_1806.f0)) , l_1813), l_1806.f1) , 0L), l_1814, l_1813.f0, l_1815) , g_1731[7][2][2])) , 7L);
                    }
                    if (g_109.f0)
                    {
                        unsigned l_1821[4][6][8] = {{{6UL,18446744073709551615UL,0xF5FA452BL,0x04846BCEL,0xB330A01AL,0x04846BCEL,0xF5FA452BL,18446744073709551615UL},{6UL,2UL,1UL,18446744073709551615UL,0xF5FA452BL,18446744073709551607UL,0xDB3FC8BDL,18446744073709551615UL},{0xDB3FC8BDL,0xB489F805L,6UL,0x04846BCEL,6UL,0xB489F805L,0xDB3FC8BDL,2UL},{1UL,0x04846BCEL,1UL,18446744073709551607UL,0x06AE983FL,0xB489F805L,0xF5FA452BL,0xB489F805L},{0x06AE983FL,0xB489F805L,0xF5FA452BL,0xB489F805L,0x06AE983FL,18446744073709551607UL,1UL,0x04846BCEL},{1UL,2UL,0xDB3FC8BDL,0xB489F805L,6UL,0x04846BCEL,6UL,0xB489F805L}},{{0xDB3FC8BDL,18446744073709551615UL,0xDB3FC8BDL,18446744073709551607UL,0xF5FA452BL,18446744073709551615UL,1UL,2UL},{6UL,18446744073709551615UL,0xF5FA452BL,0x04846BCEL,0xB330A01AL,0x04846BCEL,0xF5FA452BL,18446744073709551615UL},{6UL,2UL,1UL,18446744073709551615UL,0xF5FA452BL,18446744073709551607UL,0xDB3FC8BDL,18446744073709551615UL},{0xDB3FC8BDL,0xB489F805L,6UL,0x04846BCEL,6UL,0xB489F805L,0xDB3FC8BDL,2UL},{1UL,0x04846BCEL,6UL,18446744073709551615UL,0xF5FA452BL,0x04846BCEL,0xB330A01AL,0x04846BCEL},{0xF5FA452BL,0x04846BCEL,0xB330A01AL,0x04846BCEL,0xF5FA452BL,18446744073709551615UL,6UL,18446744073709551615UL}},{{0x06AE983FL,18446744073709551607UL,1UL,0x04846BCEL,1UL,18446744073709551615UL,1UL,0x04846BCEL},{1UL,0xB489F805L,1UL,18446744073709551615UL,0xB330A01AL,0UL,6UL,18446744073709551607UL},{1UL,0xB489F805L,0xB330A01AL,18446744073709551615UL,0xDB3FC8BDL,18446744073709551615UL,0xB330A01AL,0xB489F805L},{1UL,18446744073709551607UL,6UL,0UL,0xB330A01AL,18446744073709551615UL,1UL,0xB489F805L},{1UL,0x04846BCEL,1UL,18446744073709551615UL,1UL,0x04846BCEL,1UL,18446744073709551607UL},{0x06AE983FL,18446744073709551615UL,6UL,18446744073709551615UL,0xF5FA452BL,0x04846BCEL,0xB330A01AL,0x04846BCEL}},{{0xF5FA452BL,0x04846BCEL,0xB330A01AL,0x04846BCEL,0xF5FA452BL,18446744073709551615UL,6UL,18446744073709551615UL},{0x06AE983FL,18446744073709551607UL,1UL,0x04846BCEL,1UL,18446744073709551615UL,1UL,0x04846BCEL},{1UL,0xB489F805L,1UL,18446744073709551615UL,0xB330A01AL,0UL,6UL,18446744073709551607UL},{1UL,0xB489F805L,0xB330A01AL,18446744073709551615UL,0xDB3FC8BDL,18446744073709551615UL,0xB330A01AL,0xB489F805L},{1UL,18446744073709551607UL,0xF5FA452BL,18446744073709551615UL,6UL,18446744073709551615UL,0x06AE983FL,0UL},{0x06AE983FL,2UL,0xB330A01AL,18446744073709551607UL,0xB330A01AL,2UL,0x06AE983FL,0x04846BCEL}}};
                        int i, j, k;
                        l_1817[0][4][1] = l_1817[1][5][1];
                        if (g_1280.f4)
                            break;
                        l_1821[0][3][0] = (safe_sub_func_uint32_t_u_u(((0x78L | func_22(g_118.f9, g_84, g_439)) ^ (g_1820 , 0UL)), (0x6AACL | l_1814.f2)));
                    }
                    else
                    {
                        short l_1829 = 0x62BAL;
                        int l_1841[5][1][1] = {{{0x9B842C8FL}},{{0xDDA283DEL}},{{0x9B842C8FL}},{{0xDDA283DEL}},{{0x9B842C8FL}}};
                        int i, j, k;
                        g_885.f1 = (safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_u(g_1588.f0, l_1816)) <= ((-1L) >= (g_1828 , (l_1829 , ((safe_div_func_int16_t_s_s(0xB552L, g_109.f1)) == g_885.f0))))) == g_1588.f2), 0));
                        g_899 = g_899;
                        l_1841[3][0][0] = ((l_2.f3 , ((safe_rshift_func_int8_t_s_u((((safe_div_func_uint8_t_u_u((((g_1132 | 0x754B628EL) > (((func_13(g_118.f8, g_109) == ((safe_mul_func_uint8_t_u_u((l_1787.f1 == l_1840), l_1799)) < g_1820.f3)) > 0x1FA9L) && 0x3DL)) <= g_118.f8), l_1801.f1)) && g_1675) == 1UL), g_1731[8][1][1])) && l_1805.f2)) < (-1L));
                        l_1842 = l_1842;
                    }
                    if (g_1005)
                    {
                        char l_1843 = 0x4AL;
                        struct S0 l_1854 = {2,0,708,0,34};
                        g_1820.f0 = l_1815.f3;
                        l_1843 = l_1806.f0;
                        l_1854.f4 = (safe_rshift_func_int16_t_s_u(func_3(l_1846, (((safe_sub_func_uint8_t_u_u(l_1843, (0x1BC8L & g_885.f1))) < ((((safe_add_func_uint16_t_u_u(g_1820.f1, (0xC81DL != ((safe_unary_minus_func_int8_t_s(((safe_rshift_func_int16_t_s_u((g_439 , l_1843), 8)) | ((~(func_26(g_885.f0, l_1854, g_1820.f2) && g_1280.f3)) <= (-2L))))) != 0x16F8F716L)))) >= g_1820.f2) , 4294967295UL) | l_1806.f0)) > l_1776)), 2));
                        l_1817[1][5][1] = g_109;
                    }
                    else
                    {
                        if (g_82)
                            break;
                    }
                }
            }
            else
            {
                unsigned char l_1855 = 0x6DL;
                return l_1855;
            }
        }
        else
        {
            l_1814.f1 = (safe_add_func_int8_t_s_s(g_109.f0, g_117.f0));
        }
        if ((func_3(l_2.f5, g_1820.f7) != (safe_rshift_func_int8_t_s_u(g_439.f1, 1))))
        {
            unsigned char l_1874 = 0UL;
            for (l_1776 = 8; (l_1776 >= 0); l_1776 -= 1)
            {
                unsigned l_1865 = 0x3E75D5D7L;
                int i;
                g_16 = func_36(g_1155[l_1776], (+(l_2 , (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((-1L) ^ g_1820.f7) && (0x40L || 0xDAL)), g_1155[l_1776])), ((2L > (0x1AL | 249UL)) != g_1820.f9))))));
                l_1801.f1 = g_1820.f5.f0;
                for (g_84 = 0; (g_84 <= 1); g_84 += 1)
                {
                    unsigned char l_1864 = 0xE1L;
                    struct S4 l_1866 = {348,60};
                    const unsigned l_1869 = 0x4E35F623L;
                    g_1280.f1 = l_1864;
                    for (l_1816 = 1; (l_1816 <= 8); l_1816 += 1)
                    {
                        unsigned l_1878[9];
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_1878[i] = 0x6D550D5CL;
                        g_118.f0 = l_1865;
                        l_1866 = l_1817[(g_84 + 4)][l_1816][g_84];
                        l_1878[4] = (safe_sub_func_int8_t_s_s(l_1869, (((safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((l_1874 & l_1866.f0) > l_1817[(g_84 + 4)][l_1816][g_84].f1), (safe_mul_func_int8_t_s_s(g_1280.f4, l_1817[(g_84 + 4)][l_1816][g_84].f0)))) < g_885.f0), (g_1155[l_1776] > l_1877))) < 1UL) < 0xD9745FA5L)));
                        l_1801.f1 = l_1817[(g_84 + 4)][l_1816][g_84].f1;
                    }
                }
            }
        }
        else
        {
            for (g_84 = 2; (g_84 >= 0); g_84 -= 1)
            {
                int i;
                return l_1804[g_84];
            }
            for (l_1816 = 0; (l_1816 < 2); ++l_1816)
            {
                l_1817[0][0][0] = g_16;
            }
            l_1801 = g_109;
        }
    }
    else
    {
        const unsigned short l_1883 = 0x660AL;
        struct S4 l_1884 = {538,-25};
        short l_1921 = 1L;
        unsigned short l_1956 = 0xC09CL;
        l_1817[1][5][1].f1 = (g_118.f6 <= (safe_div_func_uint32_t_u_u(g_117.f2, func_13(l_1883, l_1884))));
        for (g_1699 = 23; (g_1699 >= 25); g_1699++)
        {
            char l_1891 = 6L;
            unsigned l_1905 = 0x70192FD5L;
            char l_1972[6] = {(-1L),0x6BL,0x6BL,(-1L),0x6BL,0x6BL};
            struct S0 l_1975 = {4,-1,4131,0,30};
            int i;
            for (g_118.f5.f2 = 0; (g_118.f5.f2 <= 1); g_118.f5.f2 += 1)
            {
                unsigned l_1887 = 0x63762230L;
                int l_1892 = 3L;
                unsigned l_1945 = 0xDD672FF1L;
                g_899.f1 = (-4L);
                if (g_118.f8)
                {
                    unsigned char l_1890 = 251UL;
                    l_1892 = ((((l_1887 & ((safe_div_func_uint32_t_u_u(g_118.f7, l_1887)) | g_439.f6)) || (((-9L) && (-1L)) != (l_1890 || l_1891))) == l_1281) || 0L);
                    g_1280.f4 = g_1820.f5.f2;
                    l_1884.f1 = ((safe_add_func_int16_t_s_s((((((safe_unary_minus_func_uint8_t_u((((safe_mod_func_uint8_t_u_u(g_1675, (l_1892 | g_109.f1))) == ((g_1820.f5.f0 , ((l_1887 | ((l_1890 > 0L) | (safe_sub_func_int8_t_s_s(l_1890, (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_1814.f0, 255UL)), g_1828)))))) & 0x9E05E06CL)) & g_118.f0)) > 65535UL))) & g_117.f1) && g_632) < g_1820.f5.f2) <= l_1887), 1L)) & g_118.f2);
                }
                else
                {
                    unsigned char l_1915[4][4] = {{248UL,0x31L,248UL,1UL},{248UL,1UL,1UL,248UL},{1UL,1UL,0x62L,1UL},{1UL,0x31L,0x62L,0x62L}};
                    short l_1925 = (-7L);
                    int i, j;
                    g_1904 = (g_1280.f1 > g_1820.f2);
                    g_117.f1 = 0xCB2DF9ECL;
                    for (g_1904 = 0; (g_1904 <= 0); g_1904 += 1)
                    {
                        int l_1910[2][3][7] = {{{0x0412C8F9L,(-1L),8L,0xCB82C85FL,8L,(-1L),0x0412C8F9L},{0x0412C8F9L,(-1L),8L,0xCB82C85FL,8L,(-1L),0x0412C8F9L},{0x0412C8F9L,(-1L),8L,0xCB82C85FL,8L,(-1L),0x0412C8F9L}},{{0x0412C8F9L,(-1L),8L,0xCB82C85FL,8L,(-1L),0x0412C8F9L},{0x0412C8F9L,(-1L),8L,0xCB82C85FL,8L,(-1L),0x0412C8F9L},{0x0412C8F9L,(-1L),8L,0xCB82C85FL,8L,(-1L),0x0412C8F9L}}};
                        int i, j, k;
                        l_1905 = g_439.f7;
                        l_1922 = (g_1820.f9 || (l_1884.f1 <= ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(l_1910[0][2][3], g_1588.f1)), ((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s(g_1280.f1, l_1915[2][3])), (((g_82 <= (safe_sub_func_int8_t_s_s(l_1892, ((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((g_1904 & 1UL))), g_1731[7][5][0])) & 0L)))) , l_1915[1][0]) || 1L))) , l_1921))) == 1L)));
                        l_1925 = (safe_add_func_uint32_t_u_u(0x1BA39391L, l_1883));
                    }
                }
                g_118.f0 = (safe_mul_func_int8_t_s_s(((((2L < ((safe_sub_func_uint32_t_u_u(3UL, ((safe_add_func_uint16_t_u_u((l_1891 <= (safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(l_1905, ((safe_sub_func_int16_t_s_s(g_118.f7, ((safe_unary_minus_func_uint16_t_u((safe_mod_func_int32_t_s_s(((~((-7L) && (g_117.f0 != g_118.f6))) || (l_1884.f1 <= l_1945)), l_1887)))) && 0UL))) > g_1820.f1))) ^ 0xA3DDL), l_2.f9)), l_1905))), g_1707.f2)) && 0x4483L))) != 0x2AL)) & l_1800.f2) <= (-1L)) | 0xEAEC43A0L), 0x77L));
                l_1884.f1 = (((safe_div_func_uint16_t_u_u((l_1884.f0 != 7UL), g_1820.f5.f2)) | (safe_mul_func_int8_t_s_s((l_1817[1][5][1].f0 , ((safe_mod_func_int16_t_s_s(((l_1887 < ((safe_rshift_func_int8_t_s_u((65534UL < (safe_rshift_func_int8_t_s_s(l_1922, l_1956))), l_2.f2)) , g_118.f7)) || 0L), l_1887)) <= g_1052)), g_1820.f9))) ^ l_1891);
                for (g_1828 = 1; (g_1828 >= 0); g_1828 -= 1)
                {
                    struct S3 l_1957 = {-7,4,15430,8,1,{0,3,0xC1231B9EL},79,1786,9,55};
                    for (l_1887 = 0; (l_1887 <= 2); l_1887 += 1)
                    {
                        int i, j, k;
                        l_1817[(g_1828 + 1)][(l_1887 + 3)][g_118.f5.f2] = l_1817[g_118.f5.f2][(g_118.f5.f2 + 1)][g_1828];
                        return g_1731[(g_118.f5.f2 + 2)][(g_1828 + 5)][g_118.f5.f2];
                    }
                    if (g_1820.f2)
                    {
                        int l_1958 = 0x52AFE59EL;
                        l_1958 = ((l_1957 , 0x2953A6CDL) & ((-1L) || 6UL));
                    }
                    else
                    {
                        short l_1963 = 0x23CBL;
                        g_16.f1 = (!(safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(g_439.f3, l_1963)), 7)));
                    }
                    g_1280.f4 = l_1945;
                }
            }
            g_1588.f1 = (safe_div_func_uint8_t_u_u(((g_899.f0 , 8UL) != (safe_lshift_func_uint16_t_u_u(((func_26((safe_lshift_func_int16_t_s_s(g_1820.f0, ((l_1972[4] , (((((g_118.f1 != l_1884.f0) || (safe_add_func_uint8_t_u_u(l_2.f4, l_2.f9))) == l_1956) == g_899.f1) && g_1588.f3)) , g_632))), l_1975, l_1976) | 0L) , l_1975.f2), l_1972[4]))), l_1884.f1));
        }
    }
    return g_117.f0;
}







static unsigned char func_3(struct S2 p_4, unsigned p_5)
{
    unsigned l_1369 = 4294967291UL;
    int l_1373 = 0x5399B793L;
    struct S4 l_1405 = {911,-55};
    const unsigned l_1415 = 0UL;
    struct S1 l_1485 = {30131,-9623,-1159,0x02EFL,3648,109,0xE66E727EL,2};
    struct S3 l_1535[9] = {{0,1,9109,7,0,{1,9,18446744073709551615UL},212,5691,1,42},{0,1,9109,7,0,{1,9,18446744073709551615UL},212,5691,1,42},{0,1,9109,7,0,{1,9,18446744073709551615UL},212,5691,1,42},{0,1,9109,7,0,{1,9,18446744073709551615UL},212,5691,1,42},{0,1,9109,7,0,{1,9,18446744073709551615UL},212,5691,1,42},{0,1,9109,7,0,{1,9,18446744073709551615UL},212,5691,1,42},{0,1,9109,7,0,{1,9,18446744073709551615UL},212,5691,1,42},{0,1,9109,7,0,{1,9,18446744073709551615UL},212,5691,1,42},{0,1,9109,7,0,{1,9,18446744073709551615UL},212,5691,1,42}};
    int l_1648[2][9][3] = {{{0xCECA1C81L,0x2944D6D8L,0xCECA1C81L},{1L,1L,1L},{0xCECA1C81L,0x2944D6D8L,0xCECA1C81L},{1L,1L,1L},{0xCECA1C81L,0x2944D6D8L,0xCECA1C81L},{1L,1L,1L},{0xCECA1C81L,0x2944D6D8L,0xCECA1C81L},{1L,1L,1L},{0xCECA1C81L,0x2944D6D8L,0xCECA1C81L}},{{1L,1L,1L},{0xCECA1C81L,0x2944D6D8L,0xCECA1C81L},{1L,1L,1L},{0xCECA1C81L,0x2944D6D8L,0xCECA1C81L},{1L,1L,1L},{0xCECA1C81L,0x2944D6D8L,0xCECA1C81L},{1L,1L,1L},{0xCECA1C81L,0x2944D6D8L,0xCECA1C81L},{1L,1L,1L}}};
    int i, j, k;
    for (g_1052 = 5; (g_1052 >= 2); g_1052 = safe_sub_func_uint32_t_u_u(g_1052, 7))
    {
        short l_1372 = 0x27CCL;
        struct S4 l_1374 = {254,155};
        short l_1375 = (-1L);
        l_1374 = func_36(((g_117.f3 < 0x0B712259L) < (l_1369 || (safe_mul_func_uint8_t_u_u((l_1372 < l_1373), l_1369)))), g_439.f5);
        l_1374.f1 = (g_1132 & l_1375);
        l_1374 = g_16;
        return g_1280.f2;
    }
    for (g_1052 = 0; (g_1052 <= 0); g_1052 += 1)
    {
        struct S4 l_1376 = {542,85};
        struct S2 l_1464[1] = {{2,4,0x4B4DB7F3L}};
        struct S0 l_1510 = {6,0,1509,0,37};
        struct S4 l_1650 = {5,-84};
        short l_1682 = (-1L);
        struct S1 l_1732 = {45120,12419,17986,3UL,7496,210,1UL,4};
        int i;
        for (g_1132 = 0; (g_1132 <= 0); g_1132 += 1)
        {
            l_1376 = g_899;
            for (g_84 = 0; (g_84 >= 0); g_84 -= 1)
            {
                int i, j;
                return g_95[(g_1052 + 2)][g_1132];
            }
        }
        for (g_578 = 0; (g_578 <= 0); g_578 += 1)
        {
            int l_1404[7];
            unsigned l_1451 = 0xAC6AEF07L;
            const struct S4 l_1458[8] = {{397,144},{397,144},{397,144},{397,144},{397,144},{397,144},{397,144},{397,144}};
            struct S1 l_1467 = {-11622,-10535,-20389,0xC67FL,7679,87,0x02B5D692L,2};
            unsigned l_1472[2][3] = {{1UL,1UL,1UL},{1UL,1UL,1UL}};
            struct S4 l_1491 = {409,-107};
            short l_1492 = 0x51C6L;
            unsigned short l_1504 = 0UL;
            struct S0 l_1547 = {2,-0,3222,0,33};
            int i, j;
            for (i = 0; i < 7; i++)
                l_1404[i] = 0L;
            for (g_632 = 0; (g_632 >= 0); g_632 -= 1)
            {
                for (l_1369 = 0; (l_1369 <= 0); l_1369 += 1)
                {
                    int i, j;
                    l_1376 = func_36(((safe_div_func_uint16_t_u_u(g_95[(g_1052 + 1)][g_578], (safe_sub_func_int32_t_s_s(g_1155[(l_1369 + 3)], (p_5 && (safe_sub_func_uint16_t_u_u(g_1132, ((((g_1280.f2 >= (safe_lshift_func_uint8_t_u_s(p_5, (0x7F93L | 2UL)))) || g_84) & l_1376.f0) != 0xDFEBD544L)))))))) > g_117.f2), g_118.f3);
                    return g_439.f4;
                }
            }
            g_16.f1 = (safe_add_func_uint32_t_u_u(g_95[(g_578 + 1)][g_578], l_1369));
            if (((((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u(p_5, ((safe_unary_minus_func_int8_t_s(7L)) > ((safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((func_40((func_40(l_1376.f1, (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(p_4.f2, 65533UL)), 0x47L)), l_1373))) != 65534UL), l_1369) > 65530UL) ^ l_1373), 0xDEL)), (-3L))), 0x8675L)) || l_1376.f0)))) & g_1280.f3), l_1373)) ^ l_1404[3]) | 0x1F5C978CL) | p_4.f2))
            {
                short l_1428 = 0xD22DL;
                struct S1 l_1438 = {36781,-3073,23085,65535UL,3846,38,5UL,7};
                struct S4 l_1459[9] = {{269,85},{269,85},{269,85},{269,85},{269,85},{269,85},{269,85},{269,85},{269,85}};
                int l_1484 = (-8L);
                int i;
                g_885 = l_1405;
                for (g_1132 = 0; (g_1132 <= 0); g_1132 += 1)
                {
                    const struct S1 l_1410[4][2] = {{{-18256,8381,3157,1UL,1066,195,0xCDA6BD56L,7},{19270,-8198,252,8UL,475,144,0UL,1}},{{19270,-8198,252,8UL,475,144,0UL,1},{-18256,8381,3157,1UL,1066,195,0xCDA6BD56L,7}},{{19270,-8198,252,8UL,475,144,0UL,1},{19270,-8198,252,8UL,475,144,0UL,1}},{{-18256,8381,3157,1UL,1066,195,0xCDA6BD56L,7},{19270,-8198,252,8UL,475,144,0UL,1}}};
                    struct S4 l_1416 = {811,163};
                    struct S0 l_1460 = {5,0,3073,0,-24};
                    int i, j;
                    g_109.f1 = (p_4 , ((safe_mod_func_uint8_t_u_u((g_95[(g_578 + 2)][g_1052] & (safe_rshift_func_uint8_t_u_s((((g_95[(g_1132 + 1)][g_1132] && (l_1410[1][0] , g_117.f4)) | (1UL ^ (((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((l_1415 ^ (p_4.f1 < ((l_1416 , l_1410[1][0].f4) || 0xF0L))) || l_1410[1][0].f6), 0xEB30L)), g_1155[7])) >= (-7L)) , 252UL))) < 0xC794L), 2))), g_117.f0)) == g_95[1][0]));
                    for (g_118.f5.f2 = 0; (g_118.f5.f2 <= 0); g_118.f5.f2 += 1)
                    {
                        const struct S4 l_1417 = {829,-40};
                        struct S0 l_1429 = {7,-0,468,0,56};
                        int i, j;
                        g_899 = l_1417;
                        l_1404[(g_1132 + 3)] = (((safe_lshift_func_uint16_t_u_u(l_1404[(g_1132 + 3)], (g_95[g_118.f5.f2][g_1132] & (p_4.f1 <= (((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((((safe_div_func_uint8_t_u_u(p_5, g_1280.f1)) , (safe_add_func_uint8_t_u_u(g_95[(g_1132 + 1)][g_1132], (-1L)))) <= 0xFDA2L) && (p_5 != 8UL)), 4)), l_1428)) != g_95[(g_1132 + 1)][g_1132]) <= 249UL))))) > (-9L)) >= p_4.f1);
                        g_109.f1 = (g_1155[8] != ((g_118 , (((l_1429 , l_1376.f0) != ((safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_add_func_int8_t_s_s((((g_439.f3 && ((safe_sub_func_int32_t_s_s(((l_1438 , (safe_lshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(p_4.f0, (p_4.f0 ^ g_1005))), p_5)) ^ 4294967289UL), 0))) >= g_439.f1), g_1445)) >= l_1369)) , 1UL) < g_109.f1), 0x08L)), 1UL)), 4L)) || g_117.f0)) , l_1415)) || g_632));
                    }
                    if (l_1438.f2)
                    {
                        short l_1450 = 0x02EDL;
                        l_1451 = (((safe_lshift_func_int8_t_s_u(l_1405.f0, g_84)) < p_4.f2) ^ ((safe_rshift_func_uint16_t_u_u((l_1450 <= l_1450), g_95[(g_578 + 1)][g_578])) <= (((l_1438.f4 >= ((g_82 < g_1280.f2) <= l_1410[1][0].f3)) > g_1155[7]) && 1L)));
                        l_1459[3] = (((p_4.f0 > (((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(l_1438.f3, ((l_1438.f0 | (!(safe_lshift_func_int8_t_s_u(0x8CL, 5)))) , func_40(l_1410[1][0].f3, g_117.f4)))), (1L > g_439.f2))) < l_1405.f0) < l_1404[4])) >= l_1416.f1) , l_1458[5]);
                        l_1404[3] = g_439.f0;
                    }
                    else
                    {
                        struct S0 l_1461 = {6,1,5301,0,26};
                        l_1416 = (l_1460 , func_36((((g_899.f0 ^ 0x4865EAB7L) , (l_1461 , (g_118.f5 , ((safe_sub_func_int16_t_s_s((l_1464[0] , 1L), p_4.f2)) , (((l_1373 != g_118.f3) > g_885.f1) > p_4.f0))))) , 0UL), g_118.f1));
                        g_899 = func_36(p_4.f1, (l_1461.f4 , l_1464[0].f0));
                        l_1461.f4 = ((safe_add_func_int8_t_s_s((l_1467 , func_40((+g_885.f0), g_1155[2])), (safe_rshift_func_uint16_t_u_u(g_16.f1, 1)))) , 0xAF3287ADL);
                    }
                    for (l_1451 = 0; (l_1451 <= 0); l_1451 += 1)
                    {
                        const int l_1483 = 0x076973CEL;
                        struct S4 l_1490 = {504,0};
                        g_885.f1 = (func_40(((l_1459[2] , ((l_1472[1][1] | ((((safe_sub_func_int32_t_s_s((5L > ((safe_mul_func_uint16_t_u_u((l_1438.f0 < l_1405.f1), (safe_div_func_int16_t_s_s((g_118 , (((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0x14AFA8AAL, 0xB4BE85A2L)), g_118.f5.f0)) <= 0x4A9BL) , l_1483)), (-1L))))) != p_4.f0)), p_4.f2)) || l_1483) | 0UL) <= p_5)) , g_118)) , g_118.f4), l_1459[3].f0) , p_4.f2);
                        l_1405.f1 = (~l_1484);
                        l_1490 = func_36(((l_1485 , ((safe_mul_func_int16_t_s_s((l_1460.f3 , g_84), (!p_5))) | 0x898565AEL)) <= (safe_lshift_func_int16_t_s_u(0xB3D3L, 7))), (g_118.f2 | g_1280.f2));
                    }
                }
                for (g_82 = 0; (g_82 <= 0); g_82 += 1)
                {
                    int i;
                    l_1404[(g_82 + 2)] = ((-2L) != (-1L));
                    l_1459[g_1052] = g_109;
                    l_1459[4] = l_1491;
                    for (g_118.f5.f2 = 2; (g_118.f5.f2 <= 6); g_118.f5.f2 += 1)
                    {
                        int i, j;
                        if (g_95[(g_1052 + 2)][g_578])
                            break;
                        l_1404[(g_82 + 6)] = (~l_1464[0].f1);
                        l_1404[(g_82 + 3)] = l_1492;
                    }
                }
            }
            else
            {
                for (g_1132 = 0; (g_1132 <= 0); g_1132 += 1)
                {
                    for (p_4.f2 = 0; (p_4.f2 <= 0); p_4.f2 += 1)
                    {
                        unsigned char l_1493 = 0x8AL;
                        if (g_1445)
                            break;
                        l_1376.f1 = l_1493;
                        if (g_118.f8)
                            break;
                        l_1376.f1 = (p_5 ^ (safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(5UL, 5)), (l_1373 ^ l_1369))), g_95[(g_578 + 1)][g_578])), g_1280.f4)));
                    }
                    if (l_1415)
                        continue;
                    g_885.f1 = (safe_sub_func_int8_t_s_s(l_1504, p_5));
                }
                if (g_117.f1)
                    break;
            }
            for (g_1132 = 0; (g_1132 <= 0); g_1132 += 1)
            {
                unsigned l_1507[8] = {0UL,18446744073709551610UL,0UL,18446744073709551610UL,0UL,18446744073709551610UL,0UL,18446744073709551610UL};
                int l_1536 = (-1L);
                int i;
                for (l_1451 = 0; (l_1451 <= 0); l_1451 += 1)
                {
                    const unsigned short l_1518[3] = {0xB7A3L,0xB7A3L,0xB7A3L};
                    int l_1519 = (-7L);
                    struct S4 l_1520 = {737,-139};
                    int i;
                    l_1404[2] = func_40(l_1464[0].f2, (safe_rshift_func_uint16_t_u_u((l_1507[7] != ((safe_mod_func_uint8_t_u_u((((((l_1510 , g_118.f4) , ((safe_unary_minus_func_int32_t_s(func_40(g_95[(g_578 + 1)][g_578], l_1415))) <= (safe_add_func_int16_t_s_s((+(safe_lshift_func_uint8_t_u_s(0x43L, (safe_sub_func_uint16_t_u_u(0UL, p_4.f1))))), p_4.f0)))) != g_1052) , p_4.f2) == l_1518[2]), 0x72L)) ^ (-4L))), 14)));
                    l_1519 = g_1052;
                    l_1535[2].f0 = ((l_1520 , (safe_sub_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((func_40((safe_mul_func_int8_t_s_s((func_40((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(g_117.f2, (safe_mod_func_uint32_t_u_u((l_1507[7] > 65529UL), p_5)))), (safe_lshift_func_int16_t_s_u((p_5 ^ 1L), (l_1507[3] ^ (l_1535[2] , 0xC9F2L)))))), p_4.f2) == 1L), (-1L))), p_4.f0) > p_5) && g_118.f2), 1UL)) >= 0xDF3DL), l_1510.f2))) , g_118.f1);
                    for (l_1467.f6 = 0; (l_1467.f6 <= 0); l_1467.f6 += 1)
                    {
                        l_1536 = l_1520.f1;
                    }
                }
                g_899.f1 = (((safe_mul_func_uint8_t_u_u(2UL, 0xD9L)) , 0x1F6F7E59L) < (safe_mod_func_int16_t_s_s((((0x5D8FL | p_5) && ((func_40(((((safe_lshift_func_int8_t_s_s((((safe_add_func_int16_t_s_s(((0x61L && (safe_mod_func_int32_t_s_s(p_4.f1, (-1L)))) | ((l_1547 , p_4.f2) , 0x7296L)), 0xFA9CL)) < 0xECE4L) , p_4.f1), l_1536)) != p_5) ^ l_1507[7]) > p_4.f0), g_118.f6) < p_4.f1) <= 0xB549L)) <= 65535UL), (-8L))));
            }
        }
        l_1405 = l_1405;
        l_1405.f1 = p_4.f2;
        for (l_1485.f6 = 0; (l_1485.f6 <= 0); l_1485.f6 += 1)
        {
            struct S4 l_1548 = {10,127};
            struct S1 l_1550 = {31356,-15780,8104,0x76A0L,2075,98,8UL,3};
            int l_1551 = 0x964E88E5L;
            struct S0 l_1587 = {7,-1,5224,0,-12};
            const char l_1702[10] = {5L,5L,5L,5L,5L,5L,5L,5L,5L,5L};
            const unsigned short l_1723 = 1UL;
            int i;
            for (p_5 = 0; (p_5 <= 0); p_5 += 1)
            {
                g_16 = l_1548;
            }
            for (g_1132 = 0; (g_1132 <= 0); g_1132 += 1)
            {
                unsigned l_1549 = 18446744073709551609UL;
                l_1551 = (l_1549 != func_22((4294967295UL > l_1549), g_109.f0, (g_118 , l_1550)));
                if ((((((safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(func_22(p_4.f2, ((4294967295UL <= (safe_mul_func_int8_t_s_s(((func_40(g_117.f0, l_1551) <= ((safe_add_func_int8_t_s_s((g_1280.f4 ^ g_1052), 255UL)) || (l_1510.f4 <= p_4.f1))) ^ l_1405.f0), g_1280.f0))) || l_1549), g_439), g_439.f4)), 6)) < g_1005) != g_16.f1) > 0xE9L) , p_5))
                {
                    short l_1562 = 0x9330L;
                    int l_1591 = (-1L);
                    g_885 = g_109;
                    if (((g_118.f5.f1 & 1L) & g_439.f3))
                    {
                        l_1548.f1 = (safe_mod_func_uint8_t_u_u((((((g_117 , ((-1L) != (+(l_1510.f0 && p_4.f2)))) == 0x57ACL) <= g_1155[7]) | l_1562) > p_4.f0), (safe_rshift_func_uint16_t_u_s(g_82, 1))));
                    }
                    else
                    {
                        unsigned char l_1571 = 0UL;
                        int l_1586 = 0x93533564L;
                        if (g_439.f6)
                            break;
                        l_1586 = (((safe_sub_func_uint32_t_u_u(p_4.f1, (safe_div_func_int32_t_s_s((4294967286UL != ((func_13(((safe_lshift_func_int8_t_s_u(0L, 4)) , (p_4.f0 > (((l_1571 & ((safe_lshift_func_int16_t_s_s(4L, 13)) , ((safe_rshift_func_uint8_t_u_s(func_22(((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int16_t_s(g_899.f0)), 4)) && (safe_unary_minus_func_uint32_t_u((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((func_13((safe_mul_func_int8_t_s_s((-5L), 0xFDL)), g_885) & 1L), l_1549)), l_1549))))), p_4.f1, l_1550), 4)) <= p_5))) != l_1373) & p_4.f0))), l_1376) >= 0x413A75BDL) != g_1445)), g_1280.f3)))) || p_5) || g_16.f1);
                        l_1550.f0 = func_40(p_4.f2, p_4.f1);
                        g_1280.f1 = func_26(p_4.f1, l_1587, (g_1132 & func_26(g_885.f1, (g_117 , (g_117 , g_1588)), g_118.f6)));
                    }
                    if (p_4.f2)
                    {
                        return g_1280.f3;
                    }
                    else
                    {
                        unsigned short l_1608 = 0xFDFBL;
                        l_1608 = ((l_1549 <= ((g_117.f4 == (safe_sub_func_uint32_t_u_u((l_1591 , ((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((!(safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((l_1535[2].f5.f0 <= (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(l_1510.f1, ((safe_lshift_func_int8_t_s_u((-8L), (((0L && g_1445) && ((safe_rshift_func_uint8_t_u_u(((-1L) & l_1510.f4), 7)) != 0x49L)) >= p_4.f1))) == g_117.f1))) > 0x46L), p_4.f1))), g_1445)), p_4.f1))), 0xC4L)), l_1591)) == p_4.f1)), l_1464[0].f0))) , p_5)) | p_4.f2);
                        g_117.f4 = (safe_add_func_int8_t_s_s(1L, g_439.f2));
                        if (p_5)
                            continue;
                        l_1405 = func_36((func_13(l_1550.f7, l_1548) >= l_1562), p_4.f1);
                    }
                    g_1588.f1 = p_5;
                }
                else
                {
                    struct S1 l_1619 = {-1362,11819,11278,0xEEA8L,5402,240,0x46910498L,7};
                    struct S0 l_1649 = {6,-1,5050,0,38};
                    l_1650 = func_36(g_439.f4, (safe_mul_func_uint8_t_u_u(((+(g_885.f1 | (safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((l_1619 , ((safe_mod_func_int8_t_s_s(l_1373, l_1415)) , (func_40((((func_26((safe_add_func_uint32_t_u_u((1L <= ((p_4.f1 ^ (safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((g_1155[7] ^ (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((!((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((((g_1155[7] == l_1619.f4) , 7L) == g_1588.f1) && g_1588.f1), p_5)) == p_4.f1), 0xDCL)), 4)), g_117.f1)) > l_1648[1][6][0])), 0)), 0x32L))) >= p_4.f1), 5)), p_4.f1)) > p_4.f0), 0xFE2FL)), g_109.f0)), 0UL)), 7))) > g_84)), g_82)), l_1649, g_1005) >= l_1551) , l_1510.f4) == g_118.f8), p_4.f1) < p_4.f1))), g_1280.f3)) >= g_1280.f3), g_118.f9)), 0xCF7626B0L)))) != p_4.f2), l_1619.f0)));
                }
            }
            if ((p_4.f1 || ((safe_mul_func_int16_t_s_s((p_4.f1 , p_4.f1), ((safe_mul_func_uint8_t_u_u((p_4.f2 & (9L >= (((((g_439.f5 & ((p_4 , func_13((((safe_mul_func_int8_t_s_s(g_1588.f0, (g_118.f5.f0 ^ l_1535[2].f3))) >= 0UL) , g_899.f0), l_1548)) , 0x96L)) , p_4) , g_84) & 65535UL) >= l_1510.f3))), p_4.f0)) <= p_5))) ^ g_1155[7])))
            {
                struct S4 l_1659[6] = {{167,-158},{167,-158},{167,-158},{167,-158},{167,-158},{167,-158}};
                int i;
                for (p_4.f2 = 0; (p_4.f2 <= 0); p_4.f2 += 1)
                {
                    struct S4 l_1660 = {720,84};
                    g_109 = g_16;
                    l_1660 = l_1659[0];
                    if (((func_22(g_118.f5.f0, p_5, g_439) > (((l_1660.f0 < p_4.f2) , (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((0xE5L < (l_1550.f6 < (g_439.f5 , (-1L)))) | l_1659[0].f0), (-1L))), 0xAF22854EL))) , 0L)) , g_1280.f2))
                    {
                        l_1659[0].f1 = p_4.f0;
                    }
                    else
                    {
                        return p_4.f1;
                    }
                }
                return l_1485.f2;
            }
            else
            {
                unsigned char l_1680[9] = {0x7EL,0x7EL,0x7EL,0x7EL,0x7EL,0x7EL,0x7EL,0x7EL,0x7EL};
                int l_1681 = 0L;
                struct S1 l_1698 = {-5483,-7448,9515,0x6725L,6253,154,4294967286UL,1};
                struct S0 l_1708[6] = {{4,0,4414,0,-27},{4,0,4414,0,-27},{4,0,4414,0,-27},{4,0,4414,0,-27},{4,0,4414,0,-27},{4,0,4414,0,-27}};
                unsigned l_1773 = 0xDEB3F751L;
                int i;
                if ((func_13((((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_4.f0, (safe_mod_func_uint8_t_u_u(g_118.f5.f0, (safe_div_func_int8_t_s_s(0xB3L, (safe_div_func_int32_t_s_s((g_439 , p_4.f2), ((g_1675 | g_1132) ^ ((safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((0x11CFB9A4L < g_118.f1), l_1464[0].f2)) ^ g_1280.f0), l_1510.f0)) <= 0x85624189L)))))))))), l_1485.f7)) <= g_1280.f1) , p_4.f1), g_109) > 0x4515L))
                {
                    struct S3 l_1697 = {-0,1,26298,1,1,{1,14,0UL},75,9160,3,-33};
                    l_1681 = (g_1155[7] && l_1680[2]);
                    l_1405.f1 = ((l_1682 >= (safe_sub_func_int16_t_s_s((g_439 , ((safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((func_13(l_1510.f2, func_36((p_4.f0 <= ((safe_mul_func_int8_t_s_s(g_632, ((safe_mod_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(((p_4.f1 > g_16.f1) & ((((safe_div_func_int32_t_s_s((((((((0x0AF5AF65L ^ ((l_1697 , l_1405) , l_1681)) != 0xC3L) | p_4.f2) | l_1680[8]) & 1UL) & l_1405.f0) > g_95[0][0]), l_1680[2])) <= p_4.f0) | p_4.f2) != 0x43CAL)), l_1680[2])) & g_118.f8) & g_118.f3), l_1697.f7)) > g_118.f7))) > g_1588.f1)), g_439.f3)) | 0x68L), g_439.f6)) | l_1680[8]), p_4.f0)) < 0x40L)), 0L))) != l_1550.f7);
                    return g_117.f2;
                }
                else
                {
                    for (l_1550.f6 = 0; (l_1550.f6 <= 0); l_1550.f6 += 1)
                    {
                        char l_1703 = 1L;
                        struct S1 l_1704 = {-3917,-624,-5878,65527UL,2685,149,4294967295UL,5};
                        g_899 = g_109;
                        l_1376 = func_36(g_1005, ((p_5 != (((((g_1588.f1 == (func_22(((p_4.f2 & (l_1698 , (((0xED530A28L == (g_1588.f2 , (func_40(((g_1699 <= (safe_rshift_func_int16_t_s_s(l_1702[3], l_1510.f1))) ^ p_4.f1), g_118.f2) <= 0L))) , l_1698.f2) & g_1280.f4))) >= (-10L)), l_1703, l_1704) > p_4.f0)) & p_4.f2) , 1UL) & l_1485.f6) || p_4.f2)) < p_4.f2));
                    }
                }
                l_1548 = (l_1698 , func_36(((p_4.f1 , func_13(l_1535[2].f6, g_109)) > (safe_sub_func_int8_t_s_s((g_1707 , p_4.f2), 0x18L))), g_1280.f3));
                for (l_1550.f6 = 0; (l_1550.f6 <= 0); l_1550.f6 += 1)
                {
                    int l_1714[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1714[i] = (-1L);
                    if (func_26(g_1588.f1, l_1708[0], p_4.f2))
                    {
                        return g_899.f1;
                    }
                    else
                    {
                        g_1588.f4 = g_118.f5.f0;
                        l_1548 = g_109;
                        l_1714[3] = (safe_lshift_func_int16_t_s_u((0x06L < (l_1680[2] > (((safe_unary_minus_func_int8_t_s(g_1280.f1)) ^ (g_1445 > l_1587.f1)) >= (l_1548 , (func_40((((safe_mul_func_uint16_t_u_u(((func_40((l_1405.f0 != p_4.f1), l_1714[4]) , 0L) && 1L), l_1587.f2)) && g_1280.f0) > l_1698.f6), l_1587.f2) , g_439.f5))))), g_118.f6));
                    }
                    l_1714[4] = (safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(func_22(((safe_sub_func_uint32_t_u_u((func_40(p_4.f1, g_439.f2) == (l_1723 >= ((~g_439.f4) > (l_1485.f0 & (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(l_1464[0].f0)), 2)))))), (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((g_1731[7][2][2] <= l_1708[0].f1), g_439.f1)), 0x35L)))) && l_1485.f3), g_118.f4, l_1732), p_4.f1)), g_439.f5)) || p_4.f0), g_118.f7));
                    l_1714[0] = (((safe_div_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s(0x8EE1F93DL, ((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(g_109.f0, (safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(0x1D2AL, (((safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((((((l_1405 , p_4) , ((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(l_1714[4], p_4.f1)) || (safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(g_118.f6, p_4.f0)), 7)) > (-1L)), g_118.f5.f0))), 4L)) < g_118.f7), l_1732.f5)) , (-6L)), 1L)), 7UL)) > p_4.f2)) > g_118.f9) != 3L) < l_1587.f1) , g_885.f1), p_4.f0)), p_5)), p_4.f1)) , p_4.f0) <= p_5))), p_4.f1)), 0x315B0464L)))), 5)), p_4.f2)) , 0L))), g_95[2][0])) > l_1773), p_5)) , p_4.f2) < p_4.f0);
                }
            }
        }
    }
    return g_439.f7;
}







static struct S2 func_6(int p_7, struct S0 p_8, unsigned p_9, struct S1 p_10)
{
    unsigned l_1301 = 0x5DD72024L;
    const short l_1306[1] = {(-1L)};
    struct S4 l_1312 = {238,60};
    unsigned char l_1319 = 0x80L;
    struct S0 l_1322 = {2,1,1323,0,17};
    unsigned short l_1366 = 65526UL;
    int i;
    for (g_118.f5.f2 = 0; (g_118.f5.f2 <= 0); g_118.f5.f2 += 1)
    {
        int l_1288 = 0xD511E55EL;
        short l_1334 = 0L;
        struct S4 l_1364 = {585,-65};
        if (((0x23523032L || (safe_lshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((((((p_10.f4 > (p_8.f3 ^ ((((safe_sub_func_uint8_t_u_u(l_1288, (safe_add_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((!(g_1280.f1 && (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_118.f8, g_16.f1)), ((safe_div_func_int32_t_s_s((l_1301 , (((((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((g_439.f3 , l_1306[0]) <= p_10.f4), p_8.f3)), 1)) != l_1306[0]) ^ 255UL) >= g_578) <= l_1306[0])), 0x0157B65DL)) > l_1288))))) < 0x5CL), g_1280.f3)), l_1288)) < g_109.f1) ^ 0xE438L), p_7)))) , 0x1286327FL) && l_1301) && g_439.f5))) & (-1L)) > 0x702AL) , 0xA87775B3L) < g_118.f6), 0x76B2L)) & p_10.f1), 2))) ^ p_8.f1))
        {
            unsigned char l_1333 = 255UL;
            const struct S4 l_1340 = {242,-122};
            struct S2 l_1341[3] = {{4,2,18446744073709551611UL},{4,2,18446744073709551611UL},{4,2,18446744073709551611UL}};
            int i;
            for (p_10.f6 = 0; (p_10.f6 <= 0); p_10.f6 += 1)
            {
                struct S4 l_1321[5] = {{966,155},{966,155},{966,155},{966,155},{966,155}};
                int i, j;
                p_10.f0 = (g_95[p_10.f6][g_118.f5.f2] , g_95[(g_118.f5.f2 + 1)][g_118.f5.f2]);
                for (g_82 = 11; (g_82 >= (-6)); g_82 = safe_sub_func_int8_t_s_s(g_82, 8))
                {
                    int l_1320 = 0L;
                    if ((safe_rshift_func_uint16_t_u_u(g_118.f5.f2, 2)))
                    {
                        char l_1311 = 0x9FL;
                        l_1311 = g_885.f0;
                        g_109 = l_1312;
                    }
                    else
                    {
                        l_1320 = (((g_439 , (((safe_lshift_func_uint8_t_u_u((0x06L && g_578), 2)) ^ g_16.f0) && l_1288)) >= (((g_1005 >= 0xB1L) || (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(4294967295UL, l_1319)), 0x34L))) <= p_10.f1)) || g_118.f2);
                    }
                    l_1321[1] = l_1321[1];
                }
                for (l_1319 = 0; (l_1319 <= 4); l_1319 += 1)
                {
                    int i;
                    g_899 = l_1321[l_1319];
                }
                for (g_1005 = 0; (g_1005 <= 0); g_1005 += 1)
                {
                    struct S4 l_1323 = {233,-106};
                    for (g_1052 = 0; (g_1052 <= 0); g_1052 += 1)
                    {
                        int i, j;
                        p_8.f1 = (l_1322 , g_95[(p_10.f6 + 2)][p_10.f6]);
                    }
                    l_1323 = l_1312;
                    l_1334 = (p_8.f1 != (0x7AB9L && ((g_885.f1 > (safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(2UL, (((l_1288 & 0xE1L) , (safe_unary_minus_func_uint16_t_u(((safe_add_func_int32_t_s_s(((g_1280.f0 | p_8.f1) , 6L), l_1333)) <= g_118.f0)))) , 5UL))), 0x9083L)), 5))) | 0UL)));
                }
            }
            l_1322.f4 = ((g_899.f1 <= p_8.f1) , 0x29A99294L);
            for (g_632 = (-21); (g_632 == (-9)); ++g_632)
            {
                g_899 = l_1312;
            }
            for (g_1005 = 0; (g_1005 == 33); g_1005++)
            {
                const unsigned l_1347 = 0xCC836D68L;
                for (l_1301 = 0; (l_1301 <= 8); l_1301 += 1)
                {
                    struct S2 l_1339 = {2,8,1UL};
                    int i;
                    for (l_1334 = 8; (l_1334 >= 1); l_1334 -= 1)
                    {
                        g_899.f1 = 1L;
                        return l_1339;
                    }
                    l_1312 = l_1340;
                    g_118.f0 = (l_1341[1] , ((g_1155[(g_118.f5.f2 + 7)] != (safe_unary_minus_func_uint16_t_u((l_1319 < 0x61983B49L)))) < (((safe_sub_func_uint16_t_u_u((((((safe_div_func_uint32_t_u_u(l_1347, l_1312.f0)) < 0xB68CA47FL) , (safe_mul_func_uint16_t_u_u(g_439.f2, (((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(0x788DL, 6)), 10)) > (-10L)) | p_10.f5)))) == p_10.f5) || p_7), p_9)) , 0x84L) >= l_1334)));
                }
                p_10.f2 = (safe_mul_func_uint8_t_u_u(p_8.f2, (l_1333 , p_8.f2)));
                p_8.f1 = (((l_1347 , p_9) ^ (safe_div_func_int32_t_s_s((g_1155[7] | (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((l_1334 > (((+l_1347) , (safe_sub_func_uint8_t_u_u(l_1347, (g_578 == ((g_1155[8] , (p_8.f4 || l_1340.f0)) || 9L))))) , 0x60C3F53AL)), 5)), l_1347))), g_1155[7]))) , 0x3B40E7F9L);
            }
        }
        else
        {
            struct S2 l_1365[1][2] = {{{3,3,0xC23B6DD2L},{3,3,0xC23B6DD2L}}};
            int i, j;
            g_885 = l_1364;
            return l_1365[0][1];
        }
        p_8.f4 = l_1366;
    }
    l_1312 = g_885;
    return g_118.f5;
}







static short func_13(const unsigned p_14, struct S4 p_15)
{
    unsigned l_39 = 0xDB06D673L;
    unsigned char l_599 = 0x9FL;
    struct S4 l_1085 = {573,-108};
    struct S0 l_1121 = {1,-0,1483,0,62};
    struct S2 l_1168 = {2,7,0UL};
    char l_1185[4];
    int l_1229 = 0x9AFC13DCL;
    const unsigned l_1263 = 4294967286UL;
    struct S3 l_1269 = {-4,3,9847,3,1,{0,13,1UL},138,9382,2,-9};
    int i;
    for (i = 0; i < 4; i++)
        l_1185[i] = 1L;
    p_15.f1 = p_15.f1;
    if ((func_17(g_16.f1, ((safe_mul_func_int8_t_s_s(func_22(p_15.f1, func_26(g_16.f0, func_30(func_36(l_39, g_16.f0), l_39, g_118.f2, (g_439.f3 || p_15.f0), l_599), p_14), g_439), g_16.f0)) && p_14)) , l_599))
    {
        p_15.f1 = func_22(p_15.f0, ((((g_109.f0 >= l_39) > (!g_117.f2)) != p_15.f0) && 9L), g_439);
        l_1085 = func_36(l_39, p_15.f0);
    }
    else
    {
        unsigned l_1105 = 0xC9758D03L;
        unsigned l_1118 = 0xDCFDDF8CL;
        char l_1119 = 0x40L;
        short l_1120 = 0x67F1L;
        int l_1188 = 0x8DF2A10BL;
        int l_1262 = (-1L);
        char l_1265 = 0x9DL;
        unsigned l_1272 = 0UL;
        struct S0 l_1278 = {2,0,704,0,61};
        struct S4 l_1279 = {82,-117};
        g_16 = p_15;
        for (l_39 = 0; (l_39 <= 0); l_39 += 1)
        {
            char l_1090 = 5L;
            struct S0 l_1110 = {6,-1,355,0,-25};
            int l_1133 = 1L;
            struct S1 l_1134 = {535,-1779,9082,1UL,429,255,0x1AE88D8AL,3};
            struct S4 l_1149[10][9][1] = {{{{338,89}},{{772,102}},{{269,-117}},{{941,21}},{{338,89}},{{609,-175}},{{338,89}},{{941,21}},{{269,-117}}},{{{772,102}},{{338,89}},{{1006,133}},{{338,89}},{{772,102}},{{269,-117}},{{941,21}},{{338,89}},{{609,-175}}},{{{338,89}},{{941,21}},{{269,-117}},{{772,102}},{{338,89}},{{1006,133}},{{338,89}},{{772,102}},{{269,-117}}},{{{941,21}},{{338,89}},{{609,-175}},{{338,89}},{{941,21}},{{269,-117}},{{772,102}},{{338,89}},{{1006,133}}},{{{338,89}},{{772,102}},{{269,-117}},{{941,21}},{{338,89}},{{609,-175}},{{338,89}},{{941,21}},{{269,-117}}},{{{772,102}},{{338,89}},{{1006,133}},{{338,89}},{{772,102}},{{269,-117}},{{941,21}},{{338,89}},{{609,-175}}},{{{338,89}},{{1006,133}},{{273,24}},{{609,-175}},{{269,-117}},{{98,16}},{{269,-117}},{{609,-175}},{{273,24}}},{{{1006,133}},{{269,-117}},{{660,-156}},{{269,-117}},{{1006,133}},{{273,24}},{{609,-175}},{{269,-117}},{{98,16}}},{{{269,-117}},{{609,-175}},{{273,24}},{{1006,133}},{{269,-117}},{{660,-156}},{{269,-117}},{{1006,133}},{{273,24}}},{{{609,-175}},{{269,-117}},{{98,16}},{{269,-117}},{{609,-175}},{{273,24}},{{1006,133}},{{269,-117}},{{660,-156}}}};
            unsigned l_1187 = 0x330DF3BAL;
            struct S2 l_1222 = {1,15,0x763AB22CL};
            int i, j, k;
            for (g_632 = 0; (g_632 >= 0); g_632 -= 1)
            {
                char l_1111[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1111[i] = (-9L);
                l_1110.f1 = (safe_div_func_uint32_t_u_u((((safe_div_func_int16_t_s_s(g_1052, l_1090)) , (safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(func_40((safe_add_func_uint8_t_u_u((func_26((((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((((l_1105 >= (safe_div_func_int32_t_s_s(((~(p_15.f1 , ((((g_118.f6 ^ l_1090) , p_15.f1) != (safe_sub_func_int16_t_s_s((-5L), 0x70B1L))) > l_599))) >= l_39), l_1105))) && g_118.f4) | 0x93DFF677L) && 0x743CL), g_118.f6)) & 0xB5L), 6)) > 1L) ^ p_14), l_1110, p_14) , 0x6EL), 9UL)), l_1111[0]), l_1110.f2)) != p_15.f1), 0xD808L)), 5)) == 0L) | g_439.f0), g_118.f4))) && g_439.f5), g_117.f2));
            }
            l_1110.f4 = (safe_div_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u((!(safe_div_func_int8_t_s_s(p_14, func_40(func_40(g_578, g_117.f3), l_1118)))), 7)) | l_1085.f1) >= l_1119), g_899.f1));
            p_15 = func_36((~(l_1120 && func_26(p_15.f0, l_1121, ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((((safe_add_func_uint32_t_u_u(l_1121.f2, (safe_lshift_func_int8_t_s_u((g_439.f1 && l_1121.f3), 0)))) , (~(!(~l_1110.f4)))) & ((safe_add_func_int16_t_s_s(g_439.f5, p_15.f1)) ^ p_15.f0)), p_15.f1)) , p_15.f0), g_16.f1)) > g_1132)))), p_15.f0);
            l_1110.f4 = (func_22(l_1133, p_15.f1, l_1134) < (((l_1118 || p_14) < ((((safe_mod_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((l_1121.f1 && l_1121.f4), 0L)) > g_1005) | p_15.f0), g_439.f4)) == l_1121.f2) & 3L) && g_118.f9)) == p_15.f1));
            for (g_578 = 0; (g_578 <= 0); g_578 += 1)
            {
                int l_1150 = 0L;
                unsigned short l_1230 = 65535UL;
                if ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(p_15.f1, (!p_14))), ((g_439.f3 || (((!(safe_div_func_int8_t_s_s(func_40((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(0x32DDL, g_95[2][0])), g_1052)), (l_1149[1][4][0] , p_15.f0)), g_899.f1))) <= p_14) && l_1150)) ^ 1UL))))
                {
                    return g_109.f1;
                }
                else
                {
                    unsigned char l_1156 = 0UL;
                    p_15.f1 = (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(l_1150, 2)), (func_40(p_14, func_40(((g_578 , (((4UL >= ((p_15.f0 || g_1155[7]) ^ (g_117.f3 < 0x59L))) || l_1110.f1) == g_118.f8)) || l_1085.f1), l_1156)) | 1L)));
                    g_16.f1 = ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(l_1121.f1, 6)), ((safe_sub_func_int16_t_s_s(0xCDCAL, 0UL)) | 0xB8L))) , g_109.f0);
                }
                for (l_1133 = 0; (l_1133 >= 0); l_1133 -= 1)
                {
                    unsigned short l_1167[2][8] = {{4UL,65528UL,65528UL,4UL,4UL,65528UL,65528UL,4UL},{4UL,65528UL,65528UL,4UL,4UL,65528UL,65528UL,4UL}};
                    int l_1186 = 0x2E4A8073L;
                    int l_1211[4] = {0x7B9CC04CL,0x7B9CC04CL,0x7B9CC04CL,0x7B9CC04CL};
                    unsigned char l_1242[3];
                    struct S2 l_1273 = {1,5,0UL};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_1242[i] = 254UL;
                    if ((safe_unary_minus_func_int32_t_s(0L)))
                    {
                        int l_1164 = (-1L);
                        short l_1195 = 0x6C7CL;
                        p_15.f1 = ((l_1164 | ((safe_add_func_uint8_t_u_u(l_1167[1][2], g_118.f5.f1)) <= (l_1168 , p_15.f0))) && (safe_rshift_func_int16_t_s_s(g_16.f1, 1)));
                        l_1188 = (!(safe_rshift_func_int8_t_s_u(((0x4712L & (safe_lshift_func_uint8_t_u_u(func_40(p_15.f0, l_1085.f0), 3))) , ((safe_sub_func_int32_t_s_s((p_15.f1 || 1UL), (safe_rshift_func_int16_t_s_u((((l_1164 || ((safe_lshift_func_int8_t_s_s(((func_40(func_40((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(p_15.f1, l_1150)), p_15.f1)), g_117.f4), l_1185[3]) , p_15.f1) || g_118.f1), l_1186)) >= 0xA887B9EEL)) , g_16.f1) ^ p_14), g_1052)))) != p_15.f0)), l_1187)));
                        p_15.f1 = func_40(((func_40(l_1149[1][4][0].f1, p_14) , (safe_rshift_func_uint8_t_u_s((l_1185[3] >= 1L), 5))) == (safe_sub_func_int32_t_s_s(((g_439.f1 , g_118.f5.f0) <= (safe_div_func_int32_t_s_s((0x46L & (g_439.f3 & l_1195)), p_14))), l_1185[3]))), l_1120);
                    }
                    else
                    {
                        l_1211[0] = ((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(p_15.f0, 7)), ((safe_mod_func_int8_t_s_s(l_1118, ((g_117.f4 ^ g_118.f7) & (g_118.f5.f1 >= (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_mod_func_uint32_t_u_u((l_1134 , l_1121.f4), ((~(p_15.f1 != ((safe_sub_func_int8_t_s_s(0xD9L, g_118.f2)) != p_14))) || g_439.f2))))), 13)), p_14)))))) , p_14))) && g_1155[7]);
                        p_15.f1 = ((safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(p_14, (g_1155[6] >= (((((((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((l_1222 , (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((!l_1118), func_40(l_1229, g_118.f2))), ((g_439.f2 & g_899.f0) == 0x9086L))), g_439.f5))), l_1150)) <= g_118.f6), l_1120)), l_1121.f2)) , l_1230) & (-1L)) <= g_118.f9) && 65535UL) , 65532UL) , p_15.f0)))), g_439.f6)) , 1L);
                        return p_15.f1;
                    }
                    p_15 = g_899;
                    for (g_632 = 0; (g_632 >= 0); g_632 -= 1)
                    {
                        int l_1239 = (-3L);
                        struct S2 l_1259 = {1,4,18446744073709551615UL};
                        char l_1264 = 0xE2L;
                        l_1242[2] = (safe_rshift_func_int16_t_s_s(func_40((4294967295UL > (safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(func_40((g_899.f0 , (safe_add_func_uint16_t_u_u((l_1239 >= (safe_lshift_func_int8_t_s_u((g_117 , p_15.f0), 0))), ((g_118.f5 , g_118) , g_1132)))), p_15.f0), 0x4DL)), 0L))), l_1121.f4), l_1222.f2));
                        l_1121.f1 = (g_439.f5 || ((((9L & (+(safe_add_func_int32_t_s_s((l_1211[0] , ((l_1121 , (((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s(((((safe_div_func_uint8_t_u_u(((+p_14) == 1L), (safe_add_func_int8_t_s_s((func_40((l_1242[2] , ((safe_lshift_func_uint8_t_u_s(((p_14 ^ g_95[1][0]) , 251UL), g_899.f0)) || 3UL)), p_15.f1) & (-2L)), g_885.f1)))) >= g_16.f0) >= p_15.f1) ^ 7L), 8)) , g_117.f2) == 65535UL), l_1168.f2)) >= 0x3875L) != 0xD2950C50L)) | g_439.f6)), 0UL)))) , l_1118) && g_118.f2) | g_632));
                        p_15.f1 = func_40(g_109.f0, ((p_15 , (g_118.f5 , 1UL)) , (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u(p_15.f0, 7)) | (l_1259 , (safe_div_func_uint8_t_u_u((((((l_1149[1][6][0] , l_1262) && ((((((g_885.f0 >= 1UL) | g_118.f7) & l_1110.f4) ^ l_1263) > p_15.f0) ^ l_1264)) != p_15.f0) > 0xDDL) != l_1265), (-1L))))), 1))));
                        l_1150 = func_40(l_599, (safe_mul_func_uint16_t_u_u(l_1150, (safe_unary_minus_func_uint32_t_u(0x12D34955L)))));
                    }
                    for (l_1118 = 0; (l_1118 <= 0); l_1118 += 1)
                    {
                        l_1211[0] = (l_1269 , ((0x9D3FL > p_14) && (safe_add_func_int8_t_s_s(((((g_899.f1 , l_1272) , l_1273) , (p_15.f1 && ((((((l_1273.f1 || (((!(safe_rshift_func_int16_t_s_u((1L && 0UL), g_439.f1))) && 0xCA45A29CL) == g_1155[7])) , 0x467C5E42L) > l_1150) , l_1278) , g_109) , p_15.f0))) || 0xD4F6234DL), g_117.f1))));
                    }
                }
                l_1269.f0 = l_1150;
            }
        }
        p_15.f1 = 0x4D30B0BCL;
        l_1279 = g_109;
    }
    return l_1168.f0;
}







static struct S3 func_17(unsigned p_18, unsigned p_19)
{
    unsigned l_981[8][6][4] = {{{0x9824D71EL,0x8AB331C3L,0UL,4294967295UL},{0x8596C0F3L,3UL,0xF70555E6L,1UL},{0x3FCEA82CL,0x8A8F3293L,0x5D43BF05L,0x3521AE29L},{1UL,0x7DFB34D8L,0UL,0UL},{1UL,9UL,0x303F75FDL,2UL},{0xC0111B93L,0UL,1UL,0x1A6F5A28L}},{{4294967292UL,4294967289UL,0x73A7CBC1L,1UL},{0x3236D8C9L,2UL,0x5201A265L,0UL},{4294967295UL,0UL,4294967295UL,1UL},{0x8E0C7606L,0x7D3369FCL,0xF38C6D9AL,0xF38C6D9AL},{0x3521AE29L,0x3521AE29L,2UL,0x9457B3CBL},{0x440DEDBCL,0xB7AA6CAAL,4294967290UL,4294967286UL}},{{4294967295UL,0xF38C6D9AL,0x3C05B196L,4294967290UL},{0x3236D8C9L,0xF38C6D9AL,0UL,4294967286UL},{0xF38C6D9AL,0xB7AA6CAAL,0xC0111B93L,0x9457B3CBL},{0x23AAB3FFL,0x3521AE29L,4294967288UL,4294967295UL},{4294967289UL,0UL,0x83A712B6L,0x1A6F5A28L},{7UL,0x23D45987L,0xA0271808L,0xB95725B6L}},{{4UL,4294967288UL,0xE7B8B7BDL,0x3E4E7249L},{1UL,1UL,0xC0111B93L,4294967295UL},{4UL,9UL,0x1A6F5A28L,4294967292UL},{4294967290UL,0UL,3UL,0x23D45987L},{4294967295UL,0xA6DFBD84L,0UL,9UL},{0x8596C0F3L,4294967286UL,0xD476119FL,0x3E4E7249L}},{{0x1A6F5A28L,0x9973C618L,4294967295UL,0xC388A25EL},{1UL,0x73A7CBC1L,0x303F75FDL,0UL},{0x32A5D4B0L,0UL,4294967295UL,4294967295UL},{0UL,0x1A6F5A28L,2UL,0x83A712B6L},{0x8596C0F3L,2UL,4294967292UL,4294967286UL},{4294967295UL,0x5201A265L,6UL,4294967292UL}},{{0x3236D8C9L,4UL,0x1A6F5A28L,0x47875D58L},{0x472C165CL,0xB7AA6CAAL,0x472C165CL,0xA0271808L},{0x487B614AL,0x1A6F5A28L,4294967288UL,4294967295UL},{4UL,1UL,0x9457B3CBL,0x1A6F5A28L},{0x8596C0F3L,4294967295UL,0x7D3369FCL,0x472C165CL},{0x88B63BFEL,0xF88F41F3L,4UL,0x83A712B6L}},{{0x3C05B196L,1UL,2UL,0x3236D8C9L},{2UL,0x3236D8C9L,4294967294UL,0xA6DFBD84L},{0x8A8F3293L,0x3521AE29L,4294967295UL,9UL},{4294967295UL,4294967292UL,4294967289UL,4294967290UL},{0UL,1UL,1UL,0x83A712B6L},{4294967286UL,0xC388A25EL,0xB425F5CEL,4UL}},{{0x1A6F5A28L,9UL,4UL,4294967286UL},{0x7DFB34D8L,0xF70555E6L,0UL,4294967295UL},{4294967294UL,0x47875D58L,0x32A5D4B0L,0x7D3369FCL},{0UL,0UL,4UL,0x440DEDBCL},{0xB425F5CEL,0xD476119FL,4294967295UL,4UL},{0x3E4E7249L,0UL,4294967294UL,0xB220A1B2L}}};
    struct S4 l_1024 = {964,-171};
    struct S3 l_1082 = {1,4,6334,7,0,{1,7,0UL},195,1404,3,9};
    int i, j, k;
    for (g_84 = 0; (g_84 <= 0); g_84 += 1)
    {
        unsigned char l_984 = 255UL;
        struct S4 l_985[5] = {{234,-155},{234,-155},{234,-155},{234,-155},{234,-155}};
        int l_1006 = 0x280EE186L;
        struct S1 l_1016[3] = {{-16941,-8610,-17692,0x964CL,5681,126,4294967295UL,5},{-16941,-8610,-17692,0x964CL,5681,126,4294967295UL,5},{-16941,-8610,-17692,0x964CL,5681,126,4294967295UL,5}};
        struct S0 l_1077 = {1,-1,894,0,52};
        int i;
        g_118.f0 = ((safe_lshift_func_int8_t_s_u((-5L), (((p_19 != ((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(p_18, ((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((1L >= 4294967295UL), l_981[2][3][2])), (safe_div_func_int16_t_s_s(g_439.f2, p_18)))) < (0x26816A34L == l_984)))) <= l_981[3][3][1]), l_984)) >= g_118.f5.f0)) & l_984) || l_984))) , (-1L));
        if (p_18)
            break;
        g_899 = l_985[0];
        for (g_578 = 0; (g_578 <= 0); g_578 += 1)
        {
            struct S3 l_1025 = {-2,2,13202,7,1,{2,15,18446744073709551615UL},0,2573,1,36};
            int l_1042 = (-1L);
            int i, j;
            if ((safe_mul_func_uint16_t_u_u(g_95[(g_84 + 2)][g_578], ((safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(4294967293UL, l_985[0].f1)), g_82)) != p_19))))
            {
                unsigned short l_1004 = 0x7DCEL;
                struct S4 l_1023 = {880,-111};
                struct S1 l_1034 = {31889,-11661,-2032,0x4825L,3463,178,4294967295UL,1};
                if (((p_19 && (0x05C6L < p_18)) == 0xC8D3L))
                {
                    struct S3 l_992 = {-10,7,14910,9,0,{0,4,18446744073709551609UL},107,2158,7,23};
                    if (p_19)
                    {
                        return l_992;
                    }
                    else
                    {
                        l_992.f0 = (!(((safe_unary_minus_func_int32_t_s((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_u(g_117.f1, 5)) == p_18) < l_985[0].f1) ^ p_18), (l_981[2][3][2] & p_19))), ((safe_sub_func_uint16_t_u_u(p_18, (safe_mul_func_int16_t_s_s(((-6L) & ((0xF8L >= l_981[3][2][1]) >= 3L)), 65535UL)))) , g_82))))) ^ 0x4FA9L) <= l_981[2][3][2]));
                    }
                    for (l_992.f5.f2 = 0; (l_992.f5.f2 <= 0); l_992.f5.f2 += 1)
                    {
                        g_1005 = l_1004;
                        l_1006 = (-1L);
                        if (g_16.f1)
                            continue;
                        g_885.f1 = (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(255UL, p_18)), 5));
                    }
                    return g_118;
                }
                else
                {
                    unsigned l_1011 = 0UL;
                    l_1011 = ((4294967294UL || p_18) | p_18);
                    if ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((((l_1016[2] , g_109.f0) > (g_118 , (p_19 | (p_19 != (((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((0x5B1CL ^ g_118.f3), (safe_lshift_func_int16_t_s_u((p_18 != g_95[(g_84 + 2)][g_578]), g_439.f7)))), 0xA7L)) != 0xD1L) & g_95[(g_84 + 2)][g_578]))))) < g_95[2][0]), 0x52E402A6L)), g_118.f5.f0)))
                    {
                        l_1024 = l_1023;
                    }
                    else
                    {
                        return l_1025;
                    }
                }
                for (l_1025.f5.f2 = 0; (l_1025.f5.f2 <= 0); l_1025.f5.f2 += 1)
                {
                    int l_1026 = (-2L);
                    struct S2 l_1033 = {0,12,18446744073709551615UL};
                    l_1026 = g_578;
                    for (p_18 = 0; (p_18 <= 0); p_18 += 1)
                    {
                        if (p_18)
                            break;
                        l_1016[2].f2 = (safe_add_func_int32_t_s_s((g_117.f1 != ((((p_19 == ((safe_mod_func_int8_t_s_s((l_1033 , (g_1005 <= (p_18 ^ p_19))), 0xECL)) < g_439.f7)) == p_18) < l_1033.f0) | 0UL)), 0UL));
                        if (p_18)
                            continue;
                    }
                }
                l_1034.f2 = (l_1034 , (0x0C4BL == g_885.f1));
                for (g_1005 = 1; (g_1005 <= 4); g_1005 += 1)
                {
                    struct S3 l_1041 = {-4,1,45153,3,0,{1,9,18446744073709551615UL},225,2262,3,36};
                    const unsigned char l_1049 = 1UL;
                    if (((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(g_95[(g_84 + 2)][g_578], 15)), l_1024.f0)) == ((l_1041 , l_1042) >= ((safe_sub_func_uint32_t_u_u(l_1024.f0, (safe_rshift_func_int8_t_s_s(p_18, 4)))) ^ l_1025.f6))))
                    {
                        struct S3 l_1050 = {2,1,37885,2,1,{4,0,0x8A3D27B1L},87,8458,4,46};
                        int i;
                        l_1016[2].f2 = (((((+(!(p_18 , p_18))) , ((p_18 | (safe_rshift_func_uint8_t_u_u(5UL, (p_18 >= p_18)))) < ((l_985[g_1005] , (l_1041.f9 >= (p_19 > p_19))) == l_1025.f5.f2))) < g_118.f0) & l_1016[2].f6) < p_18);
                        if (l_1049)
                            continue;
                        return l_1050;
                    }
                    else
                    {
                        unsigned char l_1051 = 0x89L;
                        l_1051 = ((~0UL) , 3L);
                        if (g_632)
                            break;
                    }
                    for (p_18 = 0; (p_18 <= 0); p_18 += 1)
                    {
                        if (g_1052)
                            break;
                    }
                }
            }
            else
            {
                short l_1076 = 1L;
                for (p_18 = 0; (p_18 <= 0); p_18 += 1)
                {
                    unsigned l_1059 = 4294967295UL;
                    l_1024.f1 = ((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s(g_439.f2, 3)) < 1UL), 5)) <= (g_439.f0 , ((safe_add_func_int8_t_s_s((l_1059 | ((safe_mod_func_uint32_t_u_u(0UL, (safe_lshift_func_int16_t_s_s(g_439.f7, (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(0xC978L, (g_118.f7 && (g_439.f5 , p_18)))), l_981[2][3][3])), 1L)), 0xA439CBEAL)), p_19)), l_1025.f6)))))) , p_19)), p_19)) ^ l_1076)));
                    for (l_1042 = 0; (l_1042 <= 0); l_1042 += 1)
                    {
                        return g_118;
                    }
                }
                g_118.f0 = (l_1077 , g_109.f1);
                g_16.f1 = l_984;
            }
            for (p_18 = 0; (p_18 <= 0); p_18 += 1)
            {
                return l_1025;
            }
        }
    }
    l_1024.f1 = ((safe_mul_func_uint8_t_u_u(p_19, (g_118 , (safe_mul_func_int8_t_s_s(g_899.f1, (((!0x6C13454DL) <= l_1024.f0) > 255UL)))))) < p_18);
    return l_1082;
}







static char func_22(short p_23, char p_24, struct S1 p_25)
{
    unsigned short l_861 = 0x15B5L;
    struct S3 l_868 = {8,2,39718,3,1,{3,15,18446744073709551615UL},185,5092,2,28};
    struct S4 l_900 = {370,-75};
    struct S4 l_933[6] = {{781,-57},{781,-57},{781,-57},{781,-57},{781,-57},{781,-57}};
    int i;
    g_117.f4 = p_25.f4;
    for (g_578 = 0; (g_578 <= 0); g_578 += 1)
    {
        struct S4 l_852 = {30,-88};
        short l_859 = 0x8BE6L;
        short l_860[1];
        struct S0 l_869 = {0,1,3528,0,-55};
        int l_916 = 0x23E49F8AL;
        int i;
        for (i = 0; i < 1; i++)
            l_860[i] = 0x4BCCL;
        g_109 = l_852;
        l_861 = ((safe_div_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((p_25.f1 || (1UL ^ 0x42L)), (safe_rshift_func_uint16_t_u_s(func_40(p_25.f5, l_859), g_439.f7)))) != (p_23 , 1L)), l_860[0])) & g_118.f7);
        p_25.f0 = (func_40(func_40(l_859, ((safe_div_func_int16_t_s_s(p_25.f3, l_852.f1)) , (((-6L) ^ ((safe_div_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(g_84, (l_868 , (l_869 , ((p_24 > (g_117.f3 > g_439.f4)) != g_117.f4))))) || g_118.f3), p_25.f3)) == 0xA331L)) , g_117.f0))), l_868.f7) <= l_852.f1);
        for (l_859 = 0; (l_859 >= 0); l_859 -= 1)
        {
            struct S0 l_882[6] = {{2,1,2653,0,-1},{5,0,1493,0,52},{5,0,1493,0,52},{2,1,2653,0,-1},{5,0,1493,0,52},{5,0,1493,0,52}};
            struct S4 l_901 = {710,-90};
            struct S2 l_909 = {0,0,0xC7BC777DL};
            int i, j;
            g_885 = func_36((g_95[l_859][l_859] | g_118.f5.f0), (p_25.f6 < ((safe_rshift_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(0xEEC8L, (g_95[l_859][l_859] > (g_118.f5.f2 >= p_23)))) > (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((((l_882[0] , (safe_rshift_func_uint16_t_u_s((p_25.f7 >= p_25.f2), g_439.f0))) && l_868.f6) , l_869.f4) != l_882[0].f0), p_25.f2)), g_118.f9))) & p_25.f1), 1)) , g_439.f1)));
            if (p_25.f5)
                continue;
            for (g_84 = 0; (g_84 <= 0); g_84 += 1)
            {
                struct S4 l_886 = {558,1};
                struct S1 l_922 = {-22196,15590,10821,65533UL,107,172,4294967289UL,6};
                if (l_860[0])
                {
                    l_886 = l_886;
                }
                else
                {
                    unsigned short l_898 = 8UL;
                    if (l_869.f1)
                        break;
                    if (g_439.f0)
                    {
                        unsigned l_893 = 1UL;
                        l_882[0].f1 = (((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u((l_886.f1 ^ (safe_sub_func_int8_t_s_s((4294967295UL <= g_118.f2), l_893))), g_885.f0)) , ((p_25.f1 , (((safe_sub_func_int16_t_s_s((-2L), p_24)) >= (safe_div_func_int32_t_s_s((-6L), p_24))) || 0UL)) && l_898)), 7)) , 0x9EC9L) ^ 0L);
                        l_886 = g_109;
                        g_885 = g_899;
                        l_900 = l_852;
                    }
                    else
                    {
                        l_852 = g_885;
                        g_885 = l_901;
                    }
                    if ((+p_25.f3))
                    {
                        if (g_439.f3)
                            break;
                    }
                    else
                    {
                        char l_902 = 0L;
                        unsigned l_912 = 0xB3D3009EL;
                        unsigned l_913[5][7][7] = {{{1UL,2UL,0x5D00E3F6L,1UL,0x7B0BD653L,4294967295UL,1UL},{0xE70617BFL,0x40EDA9A4L,0x77E1D9C4L,8UL,1UL,1UL,0x1890E4D1L},{1UL,0x40EDA9A4L,1UL,0x7F25870BL,0x3FBCF84CL,0x1A7A1675L,0x7EB27732L},{0x40EDA9A4L,0xDCBEC291L,0xDCBEC291L,0x40EDA9A4L,2UL,0x0D28004AL,1UL},{1UL,0x434E3136L,4294967295UL,4294967295UL,0x7F25870BL,1UL,0xE70617BFL},{0x434E3136L,1UL,0x7B7528EBL,0UL,4294967295UL,0x317C1401L,1UL},{1UL,2UL,0x0D28004AL,0x7F25870BL,4294967295UL,0x1890E4D1L,0x7EB27732L}},{{0x5D00E3F6L,1UL,0x7B0BD653L,4294967295UL,1UL,0xDCBEC291L,2UL},{0x40EDA9A4L,0x7F25870BL,0x1A7A1675L,1UL,1UL,0x0998DA7BL,0UL},{4294967295UL,0xE70617BFL,4294967295UL,1UL,4294967295UL,0xE70617BFL,4294967295UL},{1UL,0UL,0xBF471A1AL,4294967295UL,4294967295UL,0x77E1D9C4L,0xDCBEC291L},{0x3FBCF84CL,0UL,0x0998DA7BL,1UL,0x7F25870BL,0x0998DA7BL,0x7EB27732L},{1UL,2UL,0xBF471A1AL,1UL,2UL,0x5D00E3F6L,1UL},{0x0D28004AL,0x7F25870BL,4294967295UL,0x1890E4D1L,0x7EB27732L,0x0D28004AL,0xDCBEC291L}},{{0x434E3136L,0x52F8075EL,0x1A7A1675L,1UL,0UL,0x317C1401L,0x52F8075EL},{0x434E3136L,0xDCBEC291L,0x7B0BD653L,0x7F25870BL,0x77E1D9C4L,0x77E1D9C4L,0x7F25870BL},{0x0D28004AL,1UL,0x1A7A1675L,0x6022DD8CL,0x77E1D9C4L,1UL,4294967295UL},{0x77E1D9C4L,0x7B0BD653L,0x40EDA9A4L,0x0D28004AL,4294967295UL,0x52F8075EL,0xBF471A1AL},{0xDCBEC291L,4294967294UL,0x6022DD8CL,0xDCBEC291L,4294967288UL,1UL,0xE70617BFL},{0x6F3EBC61L,2UL,4294967294UL,0x17F6E7D1L,0xE70617BFL,0x2F17B16DL,2UL},{2UL,0xE70617BFL,0x40EDA9A4L,0x77E1D9C4L,8UL,1UL,1UL}},{{4294967295UL,4294967295UL,1UL,0x77E1D9C4L,0x6022DD8CL,0x1A7A1675L,4294967295UL},{0x317C1401L,0x7B0BD653L,0x17F6E7D1L,0x17F6E7D1L,0x7B0BD653L,0x317C1401L,4294967295UL},{0x5D00E3F6L,0x77E1D9C4L,0x52F8075EL,0xDCBEC291L,0xBF471A1AL,1UL,0x77E1D9C4L},{8UL,2UL,0x317C1401L,0x0D28004AL,0x6022DD8CL,0x2F17B16DL,8UL},{0x6F3EBC61L,0x77E1D9C4L,0x0998DA7BL,0x6022DD8CL,2UL,2UL,4294967294UL},{4294967295UL,0x7B0BD653L,1UL,1UL,0x77E1D9C4L,1UL,0xBF471A1AL},{0xE70617BFL,4294967295UL,0x17F6E7D1L,4294967287UL,4294967288UL,4294967294UL,0xBF471A1AL}},{{0x1A7A1675L,0xE70617BFL,4294967294UL,0xB003DE8CL,0xBF471A1AL,0xB003DE8CL,4294967294UL},{2UL,2UL,0x52F8075EL,0x1890E4D1L,1UL,1UL,8UL},{0xDCBEC291L,0x0998DA7BL,0x6F3EBC61L,4294967287UL,1UL,0xB003DE8CL,4294967287UL},{4294967288UL,0x77E1D9C4L,4294967295UL,0UL,0x1890E4D1L,4294967288UL,0x317C1401L},{0x1890E4D1L,0xE70617BFL,0UL,8UL,1UL,0x3FBCF84CL,0xE70617BFL},{4294967295UL,0x0998DA7BL,0x17F6E7D1L,4294967295UL,4294967294UL,4294967295UL,0x1890E4D1L},{0xB003DE8CL,0xDCBEC291L,0x17F6E7D1L,2UL,4294967287UL,0x1A7A1675L,0x1A7A1675L}}};
                        int i, j, k;
                        if (l_902)
                            break;
                        l_913[0][3][5] = (safe_lshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s(g_16.f1, (safe_add_func_uint32_t_u_u(((l_882[0].f1 < (g_118.f0 != (0xACL & ((g_118.f6 >= (((l_909 , (g_439.f6 , (safe_mul_func_uint8_t_u_u((g_885.f0 != g_118.f6), g_117.f4)))) , l_912) | 1L)) < l_868.f4)))) & p_25.f6), g_885.f1)))), l_886.f0));
                        g_109 = g_16;
                    }
                }
                l_901 = l_901;
                if ((l_869.f1 , (safe_div_func_uint16_t_u_u(((((l_916 > ((0x5B180E4EL || (safe_div_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((!(safe_unary_minus_func_uint8_t_u(g_16.f1))), (l_922 , (~(255UL == p_25.f3))))) , (safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(g_118.f5.f0, (safe_mod_func_uint16_t_u_u((p_25.f1 != p_25.f7), l_922.f4)))), l_852.f0))), 65528UL))) | 0xA2L)) == 7L) , g_885.f0) >= g_632), p_25.f5))))
                {
                    unsigned l_931 = 0UL;
                    if ((g_84 >= (p_24 != (safe_mul_func_uint8_t_u_u(g_439.f4, (~l_931))))))
                    {
                        l_852 = l_900;
                    }
                    else
                    {
                        struct S4 l_932 = {88,155};
                        g_899 = l_932;
                    }
                }
                else
                {
                    l_901 = g_885;
                    l_901 = l_933[0];
                }
                if (p_25.f4)
                {
                    unsigned l_934 = 0x2533AD5BL;
                    for (l_922.f3 = 0; (l_922.f3 <= 0); l_922.f3 += 1)
                    {
                        if (g_899.f1)
                            break;
                    }
                    if (l_934)
                        break;
                    if (p_25.f1)
                        break;
                }
                else
                {
                    short l_941 = 0xF3C7L;
                    for (l_922.f3 = 0; (l_922.f3 <= 0); l_922.f3 += 1)
                    {
                        unsigned char l_950[8][5] = {{2UL,0x7FL,1UL,0xFEL,0xC7L},{0x31L,0x05L,3UL,0x05L,0x31L},{0x19L,1UL,255UL,0x05L,0xFEL},{0xE1L,0x19L,0x89L,0xFEL,0x24L},{3UL,255UL,0xFEL,1UL,0xFEL},{0xFEL,0xFEL,0xBDL,0x89L,0x31L},{0xFEL,0xF7L,0x31L,1UL,0xC7L},{3UL,2UL,0x24L,0x7FL,0x05L}};
                        int i, j;
                        l_869.f1 = ((+(l_869.f1 != (safe_add_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((p_25.f3 && (safe_add_func_int16_t_s_s(l_922.f3, l_941))), (g_118.f5.f1 || (((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(65535UL, (p_25.f1 < (p_25.f0 > (safe_mul_func_uint8_t_u_u(0xABL, 6L)))))), p_25.f3)) , p_25.f6) != 0xC8A7L)))) >= (-2L)), g_118.f6)))) >= 0x62L);
                        if (l_950[5][1])
                            continue;
                        g_117.f4 = g_95[2][0];
                        l_868.f0 = l_950[5][1];
                    }
                    if (g_117.f0)
                        continue;
                }
            }
            l_933[0].f1 = ((safe_mod_func_uint16_t_u_u((l_868.f0 != (g_118.f4 , (safe_unary_minus_func_int8_t_s(func_40(((0x89L > (safe_rshift_func_int8_t_s_u(l_868.f0, 4))) <= ((g_439.f4 > (safe_sub_func_int32_t_s_s((g_109 , func_40(((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((1L <= (safe_add_func_int16_t_s_s(((+p_25.f3) || (safe_lshift_func_uint8_t_u_u(0x1BL, 7))), l_909.f0))), g_578)) <= 65535UL), 2)) == g_117.f3), (-4L))) ^ g_899.f0), l_869.f4)), 0L))) , 9UL)), l_882[0].f1))))), 0x90C9L)) && p_23);
        }
    }
    for (p_25.f6 = 10; (p_25.f6 == 10); p_25.f6++)
    {
        struct S4 l_970 = {607,49};
        l_970 = l_933[0];
        l_970.f1 = 0xA0245987L;
        l_868.f0 = p_25.f6;
    }
    return l_868.f4;
}







static char func_26(unsigned p_27, struct S0 p_28, unsigned char p_29)
{
    unsigned short l_756 = 0xDBEEL;
    struct S4 l_775 = {434,-131};
    short l_776[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    char l_782[5] = {3L,3L,3L,3L,3L};
    unsigned l_837 = 0xC16ED77CL;
    struct S2 l_849 = {4,2,0x16619DAEL};
    int i;
    for (p_27 = 0; (p_27 >= 50); p_27++)
    {
        int l_763[7] = {0L,0L,0L,0L,0L,0L,0L};
        struct S0 l_768 = {7,0,5242,0,23};
        short l_777 = 0x773BL;
        int i;
        p_28.f1 = ((l_756 >= (((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((p_28.f1 | g_118.f0) != 248UL), p_29)), (safe_add_func_uint8_t_u_u(l_756, (((g_109 , ((l_763[4] & ((safe_div_func_int32_t_s_s(p_28.f1, 0x0C7F05EAL)) > g_109.f1)) & l_756)) , l_756) > p_28.f0))))) > g_117.f4) != p_28.f0)) >= g_118.f8);
        p_28.f4 = ((((((((((safe_add_func_int16_t_s_s((0xF20DL & ((((l_768 , (safe_div_func_uint8_t_u_u(p_28.f2, l_768.f4))) == l_768.f2) != (safe_sub_func_int8_t_s_s(func_40((func_30((func_36(p_27, (safe_rshift_func_int16_t_s_s((g_118.f9 >= 0xAAL), 15))) , l_775), l_775.f0, l_775.f0, l_768.f0, l_756) , 0xE061L), l_768.f1), p_27))) ^ (-1L))), l_776[4])) == g_439.f2) & l_776[1]) , p_28.f2) <= p_27) && g_117.f1) | 9UL) > g_118.f7) & (-1L)) && l_777);
        l_775.f1 = (((~l_768.f0) <= (g_118.f5.f0 <= (l_768.f0 || ((safe_mul_func_uint8_t_u_u(p_28.f1, func_40(g_118.f5.f2, (safe_add_func_uint16_t_u_u(g_118.f6, (l_768.f3 , (l_782[4] > g_439.f3))))))) ^ p_28.f1)))) & l_768.f3);
        for (p_29 = 0; (p_29 < 58); ++p_29)
        {
            return g_118.f5.f1;
        }
    }
    for (p_29 = 0; (p_29 != 46); p_29 = safe_add_func_int8_t_s_s(p_29, 8))
    {
        int l_791 = (-5L);
        if (((g_117.f1 , (safe_add_func_uint8_t_u_u(255UL, ((-8L) && p_27)))) != (l_775.f0 | (g_439.f7 != (g_118.f0 , l_791)))))
        {
            if (g_118.f5.f2)
                break;
        }
        else
        {
            g_118.f0 = p_28.f4;
            p_28.f4 = g_118.f4;
        }
        return l_791;
    }
    if (((safe_mod_func_int16_t_s_s(g_118.f8, (safe_sub_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s(g_95[2][0], (((-1L) > (p_27 , l_782[2])) , (!(-10L))))) < (safe_add_func_int8_t_s_s(6L, (((safe_sub_func_uint8_t_u_u(((g_439.f7 || ((safe_mod_func_int16_t_s_s(l_776[1], g_118.f1)) | p_28.f4)) & p_28.f1), 0x78L)) > 0xE58CB2A1L) , p_29)))) , 0x91L), l_782[4])))) , p_29))
    {
        int l_804 = 1L;
        struct S0 l_812[10] = {{7,1,206,0,54},{7,1,206,0,54},{7,1,206,0,54},{7,1,206,0,54},{7,1,206,0,54},{7,1,206,0,54},{7,1,206,0,54},{7,1,206,0,54},{7,1,206,0,54},{7,1,206,0,54}};
        int i;
        l_804 = p_28.f2;
        for (l_804 = 0; (l_804 >= (-18)); --l_804)
        {
            char l_811 = (-1L);
            for (g_118.f5.f2 = (-26); (g_118.f5.f2 > 49); g_118.f5.f2 = safe_add_func_uint32_t_u_u(g_118.f5.f2, 1))
            {
                struct S4 l_813 = {465,-71};
                g_109 = (((safe_rshift_func_int16_t_s_u((p_28.f3 || l_811), 13)) , l_812[9]) , l_813);
            }
            l_775.f1 = ((func_40(g_578, ((safe_div_func_int16_t_s_s(p_28.f0, l_782[4])) ^ (safe_rshift_func_int8_t_s_u((251UL | 0L), 0)))) && ((((safe_add_func_uint16_t_u_u(g_439.f4, p_28.f1)) != func_40((safe_lshift_func_uint16_t_u_s(g_578, g_632)), l_812[9].f0)) , l_811) && g_439.f2)) ^ 9L);
            if (l_804)
                break;
        }
    }
    else
    {
        int l_834 = 0x61997122L;
        struct S4 l_841 = {493,-101};
        int l_844[2][4][3] = {{{0xBB6243A3L,0xDBA30712L,(-10L)},{0x78A46C1DL,0x78A46C1DL,0xB23FFAA6L},{0xBB6243A3L,0xB23FFAA6L,0xDBA30712L},{0xDBA30712L,0xB23FFAA6L,0xBB6243A3L}},{{0xB23FFAA6L,0x78A46C1DL,0x78A46C1DL},{(-10L),0xDBA30712L,0xBB6243A3L},{0x1BECF26CL,0x0E7965FAL,0xDBA30712L},{0x1BECF26CL,0x37FECEB4L,0xB23FFAA6L}}};
        unsigned short l_846 = 0x5A16L;
        int i, j, k;
        p_28.f1 = (safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(func_40((safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(g_118.f6, l_834)), 4)) == (safe_rshift_func_uint8_t_u_s(p_27, g_118.f9))), p_28.f2)) , p_27) > g_439.f0), func_40(p_28.f4, l_837))), g_439.f5), g_632)), 9UL));
        for (l_837 = 0; (l_837 > 42); l_837++)
        {
            struct S4 l_840 = {291,-95};
            unsigned char l_845[1];
            int i;
            for (i = 0; i < 1; i++)
                l_845[i] = 255UL;
            l_841 = l_840;
            l_845[0] = (safe_mul_func_int8_t_s_s(l_844[0][1][2], (g_16 , (-1L))));
            if (l_846)
                continue;
            p_28.f1 = (0x3AL && l_841.f1);
        }
        l_775.f1 = (((65529UL || (!(safe_rshift_func_uint16_t_u_u(l_776[0], l_834)))) && ((l_849 , l_849) , func_40(((!p_28.f1) , (safe_div_func_int8_t_s_s((func_36(l_844[0][1][2], p_28.f3) , g_632), g_439.f7))), l_844[1][0][1]))) , g_117.f1);
    }
    return g_118.f2;
}







static struct S0 func_30(struct S4 p_31, unsigned p_32, unsigned p_33, unsigned p_34, int p_35)
{
    unsigned l_600 = 0x7BF99D22L;
    short l_611 = (-1L);
    struct S0 l_614[7] = {{0,-0,1705,0,-6},{0,-0,1705,0,-6},{0,-0,1705,0,-6},{0,-0,1705,0,-6},{0,-0,1705,0,-6},{0,-0,1705,0,-6},{0,-0,1705,0,-6}};
    struct S4 l_617 = {233,164};
    unsigned l_721 = 0x6E0F800CL;
    int i;
    p_31 = (l_600 , func_36(g_117.f0, func_40((((!(g_118.f7 == ((safe_sub_func_int32_t_s_s(p_31.f0, ((((((p_31.f1 >= (safe_sub_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(((g_118.f5 , (safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s(p_31.f0, l_611)) < (safe_div_func_uint8_t_u_u(255UL, 0xB0L))) < p_32), 3))) , 2UL), g_118.f5.f0)) < l_611), p_31.f0))) == l_600) <= p_34) , l_614[3]) , g_118.f1) != 0xF85D5714L))) || p_31.f1))) , g_109.f0) < p_31.f1), l_614[3].f1)));
    for (p_34 = 12; (p_34 > 51); p_34 = safe_add_func_int8_t_s_s(p_34, 3))
    {
        int l_631[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        unsigned l_665 = 0xC59BA08CL;
        struct S4 l_680[1] = {{767,123}};
        int i;
        if (p_32)
        {
            struct S0 l_634 = {0,-1,5572,0,-63};
            struct S4 l_644 = {729,-94};
            for (g_578 = 0; (g_578 <= 0); g_578 += 1)
            {
                for (p_33 = 0; (p_33 <= 0); p_33 += 1)
                {
                    short l_633 = 8L;
                    int i, j;
                    for (g_82 = 0; (g_82 >= 0); g_82 -= 1)
                    {
                        g_109 = p_31;
                        p_31 = (l_617 , p_31);
                    }
                    l_633 = func_40(((g_95[(p_33 + 1)][p_33] , (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(g_118.f5.f0, p_33)), ((((((safe_mod_func_int32_t_s_s(((safe_div_func_int32_t_s_s((-3L), (func_36((safe_unary_minus_func_int8_t_s((((safe_sub_func_int8_t_s_s(l_631[0], ((-1L) && 0x8B0EA1CBL))) && l_631[0]) , l_617.f0))), l_631[2]) , g_118.f4))) && 0x8C2080DEL), p_35)) ^ g_439.f7) & p_34) | 1L) || p_32) & g_439.f3))), g_118.f3))) > g_632), g_439.f6);
                    return l_634;
                }
                l_631[3] = func_40(l_631[6], l_634.f1);
            }
            for (l_611 = 14; (l_611 != 23); ++l_611)
            {
                int l_637 = 0x2D59527BL;
                int l_638 = 0x6F22ECC8L;
                l_638 = func_40(l_637, l_617.f1);
                g_109 = g_16;
                if (g_117.f4)
                    continue;
            }
            for (p_32 = 0; (p_32 < 16); p_32++)
            {
                struct S4 l_643 = {956,-138};
                for (g_84 = 0; (g_84 <= 0); g_84 += 1)
                {
                    int i, j;
                    if (g_95[(g_84 + 1)][g_84])
                        break;
                    if (g_95[(g_84 + 1)][g_84])
                        continue;
                    if (((((safe_lshift_func_uint16_t_u_u(p_35, 3)) & 0x2945B6ADL) && g_109.f0) < p_34))
                    {
                        int i;
                        l_631[(g_84 + 6)] = l_631[0];
                    }
                    else
                    {
                        int i;
                        l_631[g_84] = (-1L);
                        if (l_634.f4)
                            break;
                    }
                }
                p_35 = l_617.f1;
                l_644 = l_643;
            }
        }
        else
        {
            unsigned char l_645[3];
            int l_646 = 0x8F43E16BL;
            int i;
            for (i = 0; i < 3; i++)
                l_645[i] = 5UL;
            l_646 = l_645[1];
        }
        if ((safe_sub_func_int8_t_s_s(l_614[3].f0, (g_439.f0 <= (safe_lshift_func_int8_t_s_s(g_16.f1, 3))))))
        {
            unsigned l_681[9][1];
            int l_704 = 0xED2F33E3L;
            struct S2 l_720 = {1,4,18446744073709551615UL};
            const char l_746 = 0x7AL;
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 1; j++)
                    l_681[i][j] = 0x4480774AL;
            }
            for (g_84 = 10; (g_84 != (-2)); g_84 = safe_sub_func_uint8_t_u_u(g_84, 5))
            {
                struct S3 l_697 = {2,2,14503,0,0,{4,14,3UL},142,1125,5,-28};
                struct S4 l_716 = {629,36};
                if ((((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((p_31.f0 , (safe_div_func_uint16_t_u_u(g_82, p_31.f1))), ((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((p_32 && l_665), p_31.f0)) && g_95[2][0]), (((g_439.f5 != p_35) <= 0x603D689DL) >= (-2L)))) , 0x7DL), g_118.f3)) , 6UL))), p_35)) || 0xC9L) != l_614[3].f1))
                {
                    int l_703[6] = {0x520B0585L,5L,5L,0x520B0585L,5L,5L};
                    int i;
                    if ((safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u((p_34 , ((safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(g_118.f2, (safe_rshift_func_uint8_t_u_u(((l_617.f1 == ((((safe_lshift_func_int16_t_s_u(g_439.f2, 7)) <= ((p_34 , (g_118 , l_680[0])) , l_681[0][0])) , (safe_mul_func_int8_t_s_s(0x28L, 0UL))) <= g_439.f7)) ^ g_439.f2), p_31.f0)))), 12)) | g_118.f2), 0x2016L)) , g_118.f5.f0)), g_118.f5.f1)), g_117.f1)))
                    {
                        struct S0 l_684 = {2,-0,3202,0,38};
                        return l_684;
                    }
                    else
                    {
                        g_117.f4 = (+((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((((p_31.f0 <= (0x5428L != (safe_add_func_uint32_t_u_u((p_33 || l_681[7][0]), p_31.f1)))) && (safe_rshift_func_uint8_t_u_s(g_117.f0, (safe_sub_func_int8_t_s_s((l_697 , (l_681[0][0] > ((safe_unary_minus_func_int8_t_s(p_35)) != g_439.f3))), 6UL))))) ^ l_697.f5.f2), g_117.f1)), g_578)) <= 0xA2L));
                        l_704 = (safe_div_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(l_703[3], g_578)), 0xC7CEL));
                    }
                    for (g_578 = (-2); (g_578 < 44); ++g_578)
                    {
                        int l_709 = 0x92FE416EL;
                        int l_719 = 0x7D666275L;
                        g_118.f0 = p_32;
                        g_117.f4 = ((safe_mod_func_uint16_t_u_u((l_709 | p_32), l_697.f9)) != (~(p_31.f0 & (safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s(0L, g_95[0][0])), (safe_mod_func_int16_t_s_s((l_716 , (safe_mul_func_int8_t_s_s(((g_109.f1 , ((p_34 <= l_697.f5.f2) , g_578)) & g_578), l_681[0][0]))), 0x6D9DL)))))));
                        p_35 = ((l_719 <= 0x5226L) & (l_681[6][0] > (((l_703[5] & 0x8A29F5A4L) >= ((l_617.f0 , ((+g_82) == l_681[2][0])) < (l_720 , 1L))) >= l_709)));
                        if (g_109.f0)
                            continue;
                    }
                }
                else
                {
                    int l_734 = (-1L);
                    int l_735 = 0L;
                    if ((g_117.f4 ^ ((l_721 < 0xE8L) | ((l_720.f1 && (((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_720.f2, (safe_sub_func_uint8_t_u_u(1UL, (safe_mod_func_uint16_t_u_u((g_109 , (((safe_rshift_func_int16_t_s_u(l_697.f8, g_118.f8)) ^ p_33) > p_31.f0)), g_439.f3)))))), g_95[0][0])), g_439.f7)) == 0x5CD4L) && g_16.f1)) != 0xE2B4602EL))))
                    {
                        if (l_734)
                            break;
                        l_735 = (4294967290UL && 0x52D899CBL);
                        l_631[6] = ((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s(g_117.f0, l_720.f2)) || g_118.f9), 8)) && (+(p_34 , (safe_mod_func_int16_t_s_s(g_16.f0, (safe_mod_func_uint32_t_u_u(g_439.f6, (safe_rshift_func_uint16_t_u_u((0xD30CL & g_109.f0), 10)))))))));
                    }
                    else
                    {
                        p_31.f1 = l_746;
                        p_31 = l_716;
                    }
                }
                g_117.f1 = 0xCEF36128L;
            }
        }
        else
        {
            g_117.f1 = (safe_unary_minus_func_uint16_t_u(p_33));
        }
        g_117.f4 = 0x702D7B55L;
        p_31 = (((safe_mod_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u((p_34 , (g_118.f9 || g_118.f4)), (func_40(l_614[3].f0, (0xCAC039FDL ^ 4294967292UL)) > (p_32 <= g_118.f7)))) != l_680[0].f1) && p_35), 65535UL)) == g_439.f4) , p_31);
    }
    g_118.f0 = p_35;
    return g_117;
}







static struct S4 func_36(unsigned p_37, int p_38)
{
    int l_51 = 0xB9AA6B35L;
    unsigned short l_314 = 6UL;
    char l_339 = 6L;
    struct S4 l_341[6] = {{434,-164},{434,-164},{434,-164},{434,-164},{434,-164},{434,-164}};
    int i;
    if (g_16.f0)
    {
        const int l_56[3] = {0xF408375FL,0xF408375FL,0xF408375FL};
        int i;
        l_314 = func_40((((g_16.f0 & (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_51, p_38)), (safe_div_func_uint8_t_u_u(0xAFL, (-9L))))), (((0x15L || (safe_div_func_int32_t_s_s(g_16.f0, l_56[2]))) > ((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(p_37, l_51)), 0xC677L)) & p_37)) >= g_16.f1))), p_38))) & l_56[2]) <= g_16.f1), p_37);
        for (l_51 = (-19); (l_51 > 2); ++l_51)
        {
            unsigned char l_317 = 0xA2L;
            int l_340[5];
            int i;
            for (i = 0; i < 5; i++)
                l_340[i] = 0L;
            g_117.f4 = (g_118.f7 > l_317);
            if (l_51)
            {
                int l_338 = (-1L);
                for (p_38 = 0; (p_38 < (-17)); p_38 = safe_sub_func_int32_t_s_s(p_38, 6))
                {
                    unsigned l_322 = 0xF02B3864L;
                    l_322 = (safe_rshift_func_uint8_t_u_u(p_38, 5));
                    for (l_317 = 0; (l_317 > 14); ++l_317)
                    {
                        const int l_331 = 0x51FEE5F7L;
                        l_339 = func_40(func_40((p_38 != (safe_add_func_int32_t_s_s(((((p_37 , (safe_mod_func_uint8_t_u_u(l_317, (safe_add_func_int16_t_s_s(l_331, ((p_37 | (safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((func_40(((2L && l_317) , (safe_sub_func_int32_t_s_s(((~l_51) > (g_95[2][0] ^ g_117.f0)), 0xFB6A5159L))), g_118.f8) ^ l_51), l_338)), l_56[2]))) && l_338)))))) < g_118.f5.f1) , p_37) || l_56[2]), (-8L)))), g_118.f8), p_38);
                        l_340[2] = l_331;
                        if (g_118.f5.f2)
                            break;
                    }
                    for (l_339 = 0; l_339 < 5; l_339 += 1)
                    {
                        l_340[l_339] = 0L;
                    }
                }
            }
            else
            {
                l_341[1] = g_16;
            }
        }
    }
    else
    {
        struct S4 l_342[6] = {{359,-34},{359,-34},{359,-34},{359,-34},{359,-34},{359,-34}};
        unsigned l_425 = 4294967291UL;
        unsigned short l_438[1];
        int l_440[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int l_515 = (-1L);
        struct S3 l_526[1] = {{-7,5,16988,1,1,{2,3,0x9FEEA5D7L},24,1218,3,22}};
        int l_544 = 0xCF31961CL;
        int l_545[3];
        struct S3 l_563 = {-8,6,14257,5,0,{1,10,0xF6B2CCB7L},95,6418,5,0};
        int i;
        for (i = 0; i < 1; i++)
            l_438[i] = 0x2042L;
        for (i = 0; i < 3; i++)
            l_545[i] = 0x53B8FED2L;
        g_118.f0 = g_109.f0;
        g_109 = l_342[3];
        if ((safe_unary_minus_func_int16_t_s((((((safe_add_func_uint16_t_u_u((g_118.f1 < p_37), (safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((-1L), 0)), (safe_mul_func_int16_t_s_s(func_40(g_109.f1, (safe_sub_func_uint32_t_u_u(g_117.f2, ((((safe_rshift_func_uint8_t_u_s((g_16.f0 < ((65531UL >= p_37) || (~g_118.f9))), 0)) > 1L) ^ 0x0D41L) & 0x28L)))), 65531UL)))), l_341[1].f0)))) , l_51) == g_118.f2) ^ l_341[1].f1) > p_37))))
        {
            struct S4 l_384 = {169,137};
            const char l_475 = 0x40L;
            unsigned l_482 = 0x0C952A7CL;
            for (p_38 = (-22); (p_38 <= (-18)); p_38 = safe_add_func_int8_t_s_s(p_38, 7))
            {
                short l_420 = 0x7179L;
                struct S4 l_495[2][6] = {{{134,-60},{134,-60},{134,-60},{134,-60},{134,-60},{134,-60}},{{134,-60},{134,-60},{134,-60},{134,-60},{134,-60},{134,-60}}};
                int i, j;
                if (p_38)
                    break;
                if (((0xAF9661FEL == (safe_div_func_uint8_t_u_u(g_95[2][0], g_109.f0))) <= (safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((l_314 != (safe_lshift_func_uint8_t_u_u((p_38 == l_342[3].f1), (safe_add_func_uint16_t_u_u(0UL, 1UL))))) & p_38), g_117.f0)), g_118.f5.f2))))
                {
                    g_117.f1 = ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((g_109.f0 < (safe_mul_func_uint16_t_u_u(p_38, ((g_82 , g_118.f4) > 253UL)))), p_37)), (safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(l_342[3].f1, (safe_mul_func_int8_t_s_s((g_118.f6 >= ((g_118 , g_16.f1) <= p_38)), g_117.f1)))), p_38)))) & g_16.f1);
                    for (g_82 = 26; (g_82 > (-28)); g_82 = safe_sub_func_uint8_t_u_u(g_82, 9))
                    {
                        struct S4 l_385 = {169,45};
                        g_118.f0 = (p_37 < (g_118.f7 || 0L));
                        l_385 = l_384;
                        return l_385;
                    }
                    g_109.f1 = ((safe_sub_func_int32_t_s_s((-1L), l_384.f0)) | (((safe_lshift_func_uint8_t_u_u(g_95[2][0], p_38)) > ((p_37 || (((g_118.f1 , ((l_384.f0 <= (!(safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(0UL, (safe_sub_func_int32_t_s_s(g_118.f6, g_95[0][0])))), g_118.f5.f1)), l_342[3].f1)))) , (-10L))) || p_37) ^ p_38)) && g_118.f4)) , l_314));
                }
                else
                {
                    int l_412 = (-8L);
                    unsigned l_447 = 18446744073709551615UL;
                    struct S2 l_473 = {3,8,0x3FD580A7L};
                    if ((safe_mul_func_int8_t_s_s(func_40((((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(p_38, (g_118.f5.f0 <= (safe_div_func_int16_t_s_s(0xF545L, (-1L)))))), (p_38 < (((safe_rshift_func_int16_t_s_s(((+(g_118.f7 > (safe_rshift_func_int16_t_s_u(l_384.f1, (0xEEL ^ (func_40((safe_add_func_uint16_t_u_u(0x5EBAL, (-1L))), g_118.f6) , 0x42L)))))) , 0L), g_118.f3)) >= 0x5F33L) < 0xD82CL)))) > l_412) , 0x5BE1L), g_118.f5.f0), g_16.f0)))
                    {
                        unsigned char l_413 = 0x81L;
                        if (g_95[1][0])
                            break;
                        if (g_118.f8)
                            break;
                        l_341[1].f1 = func_40(((!p_37) , (0xF9L < (p_37 , l_413))), (p_38 || (safe_lshift_func_uint8_t_u_u((p_38 && l_413), (safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(g_118.f4, g_117.f0)), 4294967288UL))))));
                    }
                    else
                    {
                        g_117.f4 = l_420;
                        l_342[3].f1 = (safe_lshift_func_uint16_t_u_u((p_38 | ((safe_add_func_int8_t_s_s(l_425, ((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((p_38 == ((safe_lshift_func_uint16_t_u_s(0x6011L, 2)) > (((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(((l_438[0] , (p_38 >= (l_412 || g_118.f0))) | (l_384.f0 > l_51)), g_118.f3)), g_117.f4)) > p_38) , g_118.f6))) & p_37), 0xDDF7L)), g_118.f6)) || p_38), 7)) < g_109.f1))) , p_38)), 1));
                    }
                    if (((g_118.f9 | (((0xCB5062E5L >= (g_439 , func_40(l_438[0], (((l_440[4] & l_420) >= ((((func_40(((func_40(l_420, (((!(safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_342[3].f0 && 0UL), g_117.f4)), 5)), 7))) == l_339) , g_16.f0)) || l_412) | l_314), g_439.f0) && 0xBCA81243L) | (-1L)) & 0xD283L) != g_439.f5)) , 0x1F0F9DEFL)))) && l_341[1].f0) <= l_420)) < 0x280458CAL))
                    {
                        if (l_447)
                            break;
                        if (g_439.f3)
                            break;
                    }
                    else
                    {
                        char l_472 = 0x4DL;
                        int l_474 = (-1L);
                        l_474 = (!(((safe_mod_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((((safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s((-6L), 11)) >= p_37) < (safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(p_37, ((((0xDCL && (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(l_440[2], l_472)) < ((func_40(p_38, g_118.f5.f2) && 0x06L) , 1UL)), l_440[4]))) ^ 0x68L) || 0xF9L) < l_341[1].f1))) & 0x217CL), 1UL))), p_37)) , l_473) , l_473.f2) || 0xA0385E88L), l_473.f0)), 2)), l_384.f1)) | 0x4D1CL), p_37)) < l_473.f2), g_118.f5.f0)) && 0x5BFBE83BL) == 0x716B42B0L), g_117.f2)) != p_37) > l_473.f1));
                        if (p_37)
                            break;
                        l_474 = (l_475 & (g_118.f9 , (func_40((g_117.f2 , (((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(g_95[2][0], (l_475 , ((safe_mul_func_int16_t_s_s(0xEFB9L, p_38)) < l_342[3].f1)))), l_420)) >= p_38) != 4UL)), g_118.f9) >= 1L)));
                        if (l_482)
                            break;
                    }
                    l_412 = (safe_lshift_func_int16_t_s_s(p_37, 12));
                    l_440[3] = (~(((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((0x3E37L < (safe_sub_func_int16_t_s_s((func_40(g_95[0][0], (((safe_div_func_int8_t_s_s(p_37, p_37)) | 0x00L) && ((safe_div_func_uint32_t_u_u((+1UL), l_440[3])) < (l_420 == (g_118.f5 , 0x2FL))))) != l_412), g_118.f8))) , g_439.f2), 0UL)), g_16.f1)) , g_439) , 0L));
                }
                l_342[3] = l_495[0][5];
                for (l_339 = 18; (l_339 == (-1)); l_339 = safe_sub_func_int8_t_s_s(l_339, 8))
                {
                    for (l_314 = 0; (l_314 <= 0); l_314 += 1)
                    {
                        if (l_438[0])
                            break;
                    }
                }
            }
            if (l_384.f1)
            {
                struct S4 l_512 = {487,-85};
                for (l_51 = 0; (l_51 < 16); l_51++)
                {
                    struct S4 l_514 = {957,136};
                    g_109 = l_342[3];
                    if ((safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(0xC46AL, g_118.f0)), (+(safe_div_func_uint16_t_u_u(0xACFEL, (safe_div_func_uint16_t_u_u((p_38 | p_38), (p_38 ^ (safe_mul_func_int16_t_s_s((0x38FEC1CDL > l_482), (((g_439.f5 >= g_118.f1) & 1UL) , p_37))))))))))) , g_118.f2), p_37)))
                    {
                        struct S4 l_513 = {597,-114};
                        l_513 = l_512;
                        if (p_37)
                            break;
                    }
                    else
                    {
                        l_514 = g_16;
                        l_515 = func_40(g_118.f5.f1, p_38);
                    }
                }
            }
            else
            {
                int l_519 = 0x6B654F81L;
                if ((l_384 , l_384.f1))
                {
                    struct S4 l_518 = {455,-80};
                    for (l_482 = 0; (l_482 >= 5); ++l_482)
                    {
                        return g_109;
                    }
                    return l_518;
                }
                else
                {
                    unsigned short l_543 = 0xAB24L;
                    int l_556[7] = {0x064B3E79L,0x064B3E79L,0x064B3E79L,0x064B3E79L,0x064B3E79L,0x064B3E79L,0x064B3E79L};
                    struct S4 l_557 = {852,102};
                    int i;
                    if ((l_519 , l_482))
                    {
                        int l_546 = 0L;
                        l_440[4] = (+(safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s(((g_16 , ((((l_526[0] , ((g_95[1][0] <= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(l_339, (((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(p_37, (safe_rshift_func_int8_t_s_u(l_543, 6)))) | l_543), ((l_544 , ((p_38 == p_37) <= 0xF268L)) != 8L))), 4294967291UL)) != 1UL) || 0x01E0DF8CL))) == g_16.f1), g_117.f4)), l_545[2])), p_38))) == g_118.f6)) == g_439.f2) == g_118.f5.f1) != l_543)) || p_38), l_482)) && (-1L)), l_341[1].f1)), l_546)));
                        return g_16;
                    }
                    else
                    {
                        unsigned l_551 = 0x875415C5L;
                        l_556[0] = (((g_439.f0 > ((p_38 ^ g_118.f5.f1) || 5UL)) , (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(l_551, 11)), func_40(((0x20L && 0UL) || ((p_38 , (safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((g_118.f6 , p_37), 254UL)), g_118.f7))) ^ 65526UL)), l_475)))) , p_37);
                        return l_557;
                    }
                }
            }
        }
        else
        {
            short l_564 = (-1L);
            int l_591 = (-1L);
            if ((0x35L ^ (l_339 , g_118.f5.f0)))
            {
                for (l_51 = (-18); (l_51 < 4); l_51 = safe_add_func_uint8_t_u_u(l_51, 9))
                {
                    unsigned l_560 = 3UL;
                    l_560 = 6L;
                }
                l_342[3] = g_16;
            }
            else
            {
                struct S2 l_572[3] = {{2,15,18446744073709551615UL},{2,15,18446744073709551615UL},{2,15,18446744073709551615UL}};
                int l_573 = 1L;
                int i;
                if (p_37)
                {
                    for (l_314 = 20; (l_314 <= 37); l_314++)
                    {
                        l_564 = (l_563 , 0L);
                        g_117.f4 = p_37;
                        g_109.f1 = g_118.f5.f2;
                    }
                    if (func_40((!(l_515 <= 0UL)), p_37))
                    {
                        g_118.f0 = l_339;
                    }
                    else
                    {
                        return g_16;
                    }
                }
                else
                {
                    struct S3 l_569 = {-4,2,26619,6,0,{2,5,0xD436BAE0L},224,5692,4,34};
                    l_569.f0 = ((safe_mul_func_uint8_t_u_u((l_569 , p_37), g_95[2][0])) || p_38);
                }
                l_573 = ((safe_rshift_func_int8_t_s_u((p_37 == (l_572[1] , (l_341[1] , 0UL))), 2)) , p_38);
                g_117.f4 = l_564;
                if (((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(g_439.f1, func_40(g_578, l_544))), l_564)) , (safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_439.f5, ((safe_lshift_func_int8_t_s_u(((0x741ABFD7L || ((safe_mod_func_int16_t_s_s(p_38, 0xF39EL)) >= 0x62F56DDEL)) | g_118.f6), 5)) || 0xC298L))), l_339)), 6))))
                {
                    g_118.f0 = (g_118.f8 || (((p_37 <= (-1L)) >= (safe_add_func_int8_t_s_s(g_439.f6, (l_572[1].f2 || p_37)))) , 0x15L));
                }
                else
                {
                    unsigned l_592 = 0x6954A7FEL;
                    l_544 = l_341[1].f1;
                    l_591 = p_37;
                    l_592 = 8L;
                    for (l_591 = 0; (l_591 <= 6); l_591 += 1)
                    {
                        char l_594 = 0L;
                        int i;
                        if (l_440[l_591])
                            break;
                        if (l_440[l_591])
                            break;
                        if (l_440[l_591])
                            break;
                        l_594 = (safe_unary_minus_func_int8_t_s(0x50L));
                    }
                }
            }
        }
        l_342[3].f1 = ((safe_lshift_func_uint8_t_u_u(0x09L, 1)) != ((g_109.f1 <= (safe_rshift_func_int8_t_s_s(l_339, (0L == (g_118.f6 ^ g_95[2][0]))))) < g_16.f1));
    }
    g_109 = g_16;
    g_109 = g_109;
    return l_341[0];
}







static int func_40(short p_41, unsigned p_42)
{
    unsigned l_63[5] = {0x0CEA4F54L,0x0CEA4F54L,0x0CEA4F54L,0x0CEA4F54L,0x0CEA4F54L};
    int l_80 = 0xE8B8566AL;
    int l_96 = 0x490BB395L;
    struct S4 l_110 = {528,154};
    unsigned l_128 = 0xD01DBD87L;
    int l_189 = 0xB81BE9AEL;
    struct S1 l_201 = {-27110,4022,21801,65535UL,3205,232,0xA937B62AL,7};
    unsigned l_207[1][2][7] = {{{18446744073709551610UL,3UL,18446744073709551610UL,0x4DD8C9BAL,0x4DD8C9BAL,18446744073709551610UL,3UL},{0x4DD8C9BAL,3UL,0xA6DFD2DBL,0xA6DFD2DBL,3UL,0x4DD8C9BAL,3UL}}};
    char l_222 = 0x55L;
    struct S3 l_252 = {4,3,10085,10,0,{2,10,0UL},172,1766,7,-29};
    unsigned short l_290 = 0x1256L;
    int i, j, k;
    if (((((safe_mul_func_uint8_t_u_u((l_63[2] <= p_41), (((safe_mod_func_uint16_t_u_u(((l_63[2] < (safe_sub_func_uint32_t_u_u(l_63[2], p_41))) >= ((l_63[0] , ((safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(p_41, l_63[2])), l_63[3])), g_16.f1)), l_63[2])) || (-1L)), 0xCDL)) == 0x1CF63D7CL)) != l_63[2])), p_42)) == p_42) != 65530UL))) || l_63[2]) || p_41) != 0xE4L))
    {
        return g_16.f0;
    }
    else
    {
        const unsigned char l_81 = 0x80L;
        struct S4 l_83[4] = {{865,-132},{865,-132},{865,-132},{865,-132}};
        int i;
        for (p_41 = 0; (p_41 > (-12)); p_41 = safe_sub_func_int8_t_s_s(p_41, 3))
        {
            l_80 = (-1L);
            g_82 = l_81;
            return p_41;
        }
        l_83[1] = g_16;
    }
    if (l_63[4])
    {
        int l_94[2];
        struct S4 l_111 = {42,-39};
        struct S3 l_132 = {0,6,42214,3,0,{3,14,0x494419D3L},153,10198,10,57};
        short l_238 = (-1L);
        int i;
        for (i = 0; i < 2; i++)
            l_94[i] = (-1L);
        for (p_42 = 0; (p_42 <= 4); p_42 += 1)
        {
            char l_101[1][2];
            struct S3 l_106 = {-9,5,7098,1,1,{2,12,9UL},14,3264,6,-1};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_101[i][j] = 1L;
            }
            if (l_63[p_42])
            {
                unsigned char l_91 = 0x3AL;
                int l_107 = 0x31093E8FL;
                int i;
                for (l_80 = 4; (l_80 >= 0); l_80 -= 1)
                {
                    int i;
                    g_84 = l_63[l_80];
                    g_95[2][0] = (safe_div_func_uint16_t_u_u(((0x41E781FFL || p_42) >= l_63[p_42]), (((safe_div_func_uint8_t_u_u(0x0DL, (safe_mul_func_uint16_t_u_u(((l_91 != g_16.f1) || 0UL), ((safe_mod_func_uint8_t_u_u(l_94[1], 0xDAL)) & (-1L)))))) <= 0xC7FF4120L) , g_16.f1)));
                    l_96 = (g_16.f0 || l_94[0]);
                }
                if (l_63[p_42])
                    continue;
                l_107 = (((safe_sub_func_int8_t_s_s(((p_42 , 0x997EL) && 65534UL), ((4294967295UL < p_42) > ((l_96 < (((safe_rshift_func_uint16_t_u_s(l_101[0][1], 6)) | ((safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s((((g_16.f1 ^ (l_63[p_42] > p_41)) > l_63[p_42]) == p_41), 0x30L)), l_63[p_42])) != g_16.f1)) ^ 0xD3B4235EL)) & (-10L))))) , l_106) , l_106.f7);
                if (p_41)
                    continue;
            }
            else
            {
                struct S4 l_108 = {883,174};
                g_109 = l_108;
            }
            l_111 = l_110;
        }
        for (l_80 = 1; (l_80 >= 0); l_80 -= 1)
        {
            int l_127[10][1] = {{(-2L)},{(-2L)},{0x1020B4DDL},{(-2L)},{(-2L)},{0x1020B4DDL},{(-2L)},{(-2L)},{0x1020B4DDL},{(-2L)}};
            unsigned l_131 = 1UL;
            short l_139 = (-9L);
            struct S4 l_144[8] = {{130,-87},{130,-87},{130,-87},{130,-87},{130,-87},{130,-87},{130,-87},{130,-87}};
            int l_156 = 0L;
            int i, j;
            l_111.f1 = l_94[l_80];
            if (l_94[l_80])
            {
                short l_112 = 0x6355L;
                struct S4 l_116 = {685,-67};
                unsigned char l_143[10][5] = {{251UL,0xDEL,0x9FL,0xDEL,251UL},{0xEBL,0x33L,0xEBL,0xEBL,0x33L},{251UL,249UL,0xD1L,0xDEL,0xD1L},{0x33L,0x33L,4UL,0x33L,0x33L},{0xD1L,0xDEL,0xD1L,249UL,251UL},{0x33L,0xEBL,0xEBL,0x33L,0xEBL},{251UL,0xDEL,0x9FL,0xDEL,251UL},{0xEBL,0x33L,0xEBL,0xEBL,0x33L},{251UL,249UL,0xD1L,0xDEL,0xD1L},{0x33L,0x33L,4UL,0x33L,0x33L}};
                int i, j;
                if (l_112)
                {
                    int l_113 = 0L;
                    int l_114[6] = {0x01B9F6C7L,0x01B9F6C7L,0x01B9F6C7L,0x01B9F6C7L,0x01B9F6C7L,0x01B9F6C7L};
                    struct S4 l_115[2][8][2] = {{{{587,-134},{133,-97}},{{587,-134},{133,-97}},{{587,-134},{133,-97}},{{587,-134},{133,-97}},{{587,-134},{133,-97}},{{587,-134},{133,-97}},{{587,-134},{133,-97}},{{587,-134},{133,-97}}},{{{587,-134},{133,-97}},{{587,-134},{133,-97}},{{587,-134},{133,-97}},{{587,-134},{133,-97}},{{587,-134},{133,-97}},{{587,-134},{133,-97}},{{587,-134},{133,-97}},{{587,-134},{133,-97}}}};
                    int i, j, k;
                    l_114[0] = (l_113 , g_16.f1);
                    if ((l_112 & (!g_109.f0)))
                    {
                        l_111 = l_115[1][6][1];
                    }
                    else
                    {
                        g_109 = l_116;
                        if (p_41)
                            continue;
                    }
                }
                else
                {
                    for (p_42 = 0; (p_42 <= 1); p_42 += 1)
                    {
                        l_127[8][0] = (l_116.f0 > (g_117 , (g_118 , ((safe_mul_func_uint8_t_u_u(p_41, (((safe_rshift_func_int16_t_s_s((-5L), 12)) != p_41) >= (safe_sub_func_uint16_t_u_u(8UL, ((l_110.f0 || (safe_add_func_uint16_t_u_u(1UL, 0x8E48L))) < g_118.f5.f0)))))) | l_94[l_80]))));
                        l_128 = (l_127[8][0] , 0x2447E691L);
                    }
                }
                g_117.f4 = (safe_mod_func_int16_t_s_s(((g_95[2][0] > ((l_131 & ((g_95[2][0] <= (p_41 < (l_132 , (p_41 <= ((p_41 <= ((safe_mul_func_int16_t_s_s(((g_95[2][0] != 1UL) > g_118.f5.f1), g_118.f8)) & g_118.f7)) & l_132.f5.f0))))) >= 0x438911B3L)) ^ g_117.f3)) & (-1L)), l_116.f1));
                g_109.f1 = (safe_mul_func_uint16_t_u_u((0xBA11L ^ l_127[6][0]), (p_41 <= (safe_add_func_int16_t_s_s(l_139, (g_118.f5 , (safe_mod_func_int32_t_s_s(0x92833B97L, 1UL))))))));
                for (l_128 = 0; (l_128 <= 1); l_128 += 1)
                {
                    unsigned l_142 = 0xE9DE1E5EL;
                    if (p_41)
                    {
                        l_110.f1 = (l_142 & (p_42 ^ l_127[8][0]));
                        l_127[8][0] = p_41;
                        if (l_80)
                            break;
                    }
                    else
                    {
                        l_96 = l_143[1][2];
                    }
                    g_117.f4 = 0xAC625639L;
                }
            }
            else
            {
                l_110 = l_144[7];
            }
            for (p_41 = 1; (p_41 >= 0); p_41 -= 1)
            {
                return p_41;
            }
            for (l_132.f5.f2 = 0; (l_132.f5.f2 <= 1); l_132.f5.f2 += 1)
            {
                unsigned l_145[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_145[i] = 0x2B824888L;
                l_145[2] = (-7L);
                l_127[8][0] = ((p_41 & l_145[0]) <= (safe_mod_func_int16_t_s_s((p_42 >= (((safe_add_func_uint8_t_u_u(0x3AL, l_132.f8)) >= ((p_41 <= ((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(l_145[2], p_42)), l_144[7].f1)), p_42)) ^ l_127[1][0])) <= l_144[7].f0)) >= l_156)), g_95[2][0])));
            }
        }
        if (g_95[2][0])
        {
            unsigned char l_163 = 0x37L;
            int l_165[10][6] = {{8L,0x2912A9EDL,1L,1L,0xE8B384F3L,0L},{0xC2152800L,8L,1L,0x62820C09L,1L,8L},{(-1L),0x62820C09L,0L,1L,0L,0L},{1L,0L,0L,1L,0xFE84D596L,0x45A53668L},{0x84F3E291L,0L,(-6L),(-6L),0L,0x84F3E291L},{0L,0x62820C09L,8L,0x2912A9EDL,1L,1L},{(-6L),8L,0xFE84D596L,0xC2152800L,0xE8B384F3L,0x3087AE74L},{(-6L),0x2912A9EDL,0xC2152800L,0x2912A9EDL,(-6L),1L},{0L,1L,0xE8B384F3L,(-6L),0x3087AE74L,(-1L)},{0x84F3E291L,1L,0x3087AE74L,1L,(-1L),(-1L)}};
            struct S4 l_166 = {148,-162};
            struct S2 l_188 = {4,3,0x46296405L};
            int i, j;
            for (l_80 = 0; (l_80 <= 1); l_80 += 1)
            {
                struct S4 l_167 = {846,-141};
                int i;
                for (l_132.f5.f2 = 0; (l_132.f5.f2 <= 4); l_132.f5.f2 += 1)
                {
                    unsigned l_164 = 6UL;
                    for (l_128 = 1; (l_128 <= 4); l_128 += 1)
                    {
                        int i;
                        l_165[0][5] = (((0xA4L && 0x75L) | (safe_sub_func_int32_t_s_s(((l_63[(l_80 + 2)] || 0x9F11L) , 6L), ((safe_sub_func_int16_t_s_s(((l_94[l_80] || (((~l_163) != (((p_41 == g_118.f5.f0) , l_164) <= g_118.f9)) >= (-1L))) != 1L), g_82)) , g_117.f2)))) || 0UL);
                    }
                }
                l_167 = l_166;
                if (l_63[(l_80 + 1)])
                    continue;
            }
            l_166 = ((l_132.f4 , l_110) , l_111);
            if ((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(g_82, ((7L | l_163) && (p_41 >= ((g_118.f0 > (safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(0xDFD7L, ((safe_rshift_func_int16_t_s_s(g_16.f0, (l_188 , 0x9878L))) || l_189))), 0xF206085BL))) | (-1L)))))) <= g_118.f5.f0), l_165[0][5])), 0x8BL)), p_41)) != l_188.f1) <= 9UL), 0xD5L)), p_41)))
            {
                return g_117.f4;
            }
            else
            {
                g_117.f1 = (safe_div_func_uint8_t_u_u(0x2DL, l_132.f3));
                return g_118.f1;
            }
        }
        else
        {
            struct S0 l_196 = {1,-1,401,0,53};
            struct S3 l_202 = {0,7,21574,3,1,{3,6,5UL},12,4166,6,-11};
            unsigned short l_245 = 0x616BL;
            unsigned l_246 = 0x40DDB9D4L;
            unsigned short l_247 = 0x31F7L;
            l_132.f0 = (safe_mod_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((((((-1L) >= (((-9L) < (((l_196 , (safe_rshift_func_int16_t_s_u(((p_42 <= (safe_sub_func_int8_t_s_s((l_201 , ((g_118.f8 , (l_202 , 0x61DF2DE5L)) | (safe_lshift_func_uint16_t_u_s(l_132.f7, p_42)))), 0x15L))) == 0UL), 15))) | 0xBBL) || g_118.f3)) | g_117.f3)) && p_42) < l_201.f4) , p_42), 0xF9L)) > g_95[1][0]), 1L));
            for (p_42 = 0; (p_42 >= 47); p_42 = safe_add_func_int32_t_s_s(p_42, 6))
            {
                int l_209 = 0xD1AB0926L;
                struct S4 l_213 = {916,-39};
                for (g_118.f5.f2 = 0; (g_118.f5.f2 <= 4); g_118.f5.f2 += 1)
                {
                    int l_208 = 0xAE978212L;
                    int i;
                    l_207[0][1][1] = l_63[g_118.f5.f2];
                    if (p_42)
                    {
                        l_208 = (g_118.f5.f1 & 1L);
                        l_209 = 0x68CCABFCL;
                        l_110.f1 = (safe_div_func_uint8_t_u_u(l_209, p_41));
                    }
                    else
                    {
                        unsigned l_212 = 0x62396B67L;
                        struct S0 l_231[1][10][9] = {{{{0,-1,1432,0,60},{2,0,5574,0,43},{2,0,5574,0,43},{0,-1,1432,0,60},{3,0,4937,0,-47},{1,0,4700,0,24},{3,-0,5493,0,-7},{2,0,5574,0,43},{1,0,4700,0,24}},{{3,-1,3117,0,-34},{1,0,5257,0,19},{7,-1,924,0,13},{2,1,3922,0,-22},{1,0,2427,0,4},{1,0,2427,0,4},{2,1,3922,0,-22},{7,-1,924,0,13},{1,0,5257,0,19}},{{3,-0,5493,0,-7},{3,0,4937,0,-47},{6,1,440,0,1},{1,1,4690,0,-27},{3,0,4937,0,-47},{2,0,5574,0,43},{4,-1,2216,0,54},{6,1,440,0,1},{6,1,440,0,1}},{{3,-1,3117,0,-34},{1,0,2427,0,4},{1,0,5257,0,19},{2,-1,3259,0,-39},{1,0,5257,0,19},{1,0,2427,0,4},{3,-1,3117,0,-34},{1,0,5257,0,19},{7,-1,924,0,13}},{{0,-1,1432,0,60},{3,0,4937,0,-47},{1,0,4700,0,24},{3,-0,5493,0,-7},{2,0,5574,0,43},{1,0,4700,0,24},{4,-1,2216,0,54},{1,0,4700,0,24},{2,0,5574,0,43}},{{5,1,2704,0,41},{1,0,5257,0,19},{1,0,5257,0,19},{5,1,2704,0,41},{5,0,767,0,5},{1,0,4387,0,18},{2,1,3922,0,-22},{1,0,5257,0,19},{1,0,4387,0,18}},{{3,-0,2819,0,-21},{2,0,5574,0,43},{6,1,440,0,1},{3,-0,5493,0,-7},{6,1,4723,0,35},{6,1,4723,0,35},{3,-0,5493,0,-7},{6,1,440,0,1},{2,0,5574,0,43}},{{2,1,3922,0,-22},{5,0,767,0,5},{7,-1,924,0,13},{2,-1,3259,0,-39},{5,0,767,0,5},{1,0,5257,0,19},{5,-1,2705,0,-33},{7,-1,924,0,13},{7,-1,924,0,13}},{{3,-0,2819,0,-21},{6,1,4723,0,35},{2,0,5574,0,43},{1,1,4690,0,-27},{2,0,5574,0,43},{6,1,4723,0,35},{3,-0,2819,0,-21},{2,0,5574,0,43},{6,1,440,0,1}},{{5,1,2704,0,41},{5,0,767,0,5},{1,0,4387,0,18},{2,1,3922,0,-22},{1,0,5257,0,19},{1,0,4387,0,18},{5,-1,2705,0,-33},{1,0,4387,0,18},{1,0,5257,0,19}}}};
                        int i, j, k;
                        g_117.f1 = l_212;
                        g_109.f1 = (l_213 , ((((safe_add_func_int8_t_s_s((!l_212), (l_213.f0 | 0x4429L))) , g_118.f3) || (+(5L != ((safe_lshift_func_int8_t_s_s(((((((safe_mod_func_uint16_t_u_u(l_222, 0xCEDDL)) | ((safe_div_func_uint16_t_u_u(0x2587L, g_84)) ^ 0xBBFAL)) , g_118.f5.f0) != l_132.f8) | 0x181EL) | 0UL), p_41)) ^ l_208)))) , 0x84349FD6L));
                        g_109 = g_16;
                        g_117.f4 = ((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((l_231[0][1][8] , g_95[1][0]), 3)), (((l_132.f5.f2 , (0x11C7L ^ ((0x3EDEL | (l_132.f5.f2 > p_41)) && 0L))) , (((g_84 , 0x1FL) == l_212) & l_63[2])) && p_41))), p_41)) | 0xEB96L);
                    }
                }
                l_213.f1 = (((((((p_41 || (safe_add_func_uint8_t_u_u((l_202.f7 , ((0x318A6512L == (safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((l_238 & (safe_mul_func_uint16_t_u_u(p_41, ((((safe_add_func_uint8_t_u_u(l_202.f9, ((safe_lshift_func_int16_t_s_s(0x50ECL, 1)) ^ g_118.f5.f2))) == p_41) , p_41) == l_132.f7)))), 2UL)) , l_245), l_246))) >= 0x0FL)), l_202.f3))) || p_41) == 6UL) && p_42) || (-5L)) | l_132.f8) , l_202.f5.f1);
            }
            for (l_128 = 0; (l_128 <= 1); l_128 += 1)
            {
                short l_265 = 0x1323L;
                int l_309[5][6][8] = {{{0L,0xCC935555L,0x36181A78L,0xAFBABFCDL,(-6L),0xCC935555L,0xBB7613CFL,0x0A82069FL},{0xBB7613CFL,0x33FBF26FL,0L,0xAFBABFCDL,0L,0x0A82069FL,0L,0xAFBABFCDL},{0x36181A78L,0x33FBF26FL,0x36181A78L,0x0A82069FL,0xBB7613CFL,0xCC935555L,0L,0xCC935555L},{(-6L),0x0A82069FL,0L,0x0A82069FL,(-6L),0x6C4FA195L,0xBB7613CFL,0xAFBABFCDL},{(-6L),0x6C4FA195L,0xBB7613CFL,0xAFBABFCDL,0xBB7613CFL,0x6C4FA195L,(-6L),0x0A82069FL},{0x36181A78L,0x0A82069FL,0xBB7613CFL,0xCC935555L,0L,0xCC935555L,0xBB7613CFL,0x0A82069FL}},{{0xBB7613CFL,0x33FBF26FL,0L,0xAFBABFCDL,0L,0x0A82069FL,0L,0xAFBABFCDL},{0x36181A78L,0x33FBF26FL,0x36181A78L,0x0A82069FL,0xBB7613CFL,0xCC935555L,0L,0xCC935555L},{(-6L),0x0A82069FL,0L,0x0A82069FL,(-6L),0x6C4FA195L,0xBB7613CFL,0xAFBABFCDL},{(-6L),0x6C4FA195L,0xBB7613CFL,0xAFBABFCDL,0xBB7613CFL,0x6C4FA195L,(-6L),0x0A82069FL},{0x36181A78L,0x0A82069FL,0xBB7613CFL,0xCC935555L,0L,0xCC935555L,0xBB7613CFL,0x0A82069FL},{0xBB7613CFL,0x33FBF26FL,0L,0xAFBABFCDL,0L,0x0A82069FL,0L,0xAFBABFCDL}},{{0x36181A78L,0x33FBF26FL,0x36181A78L,0x0A82069FL,0xBB7613CFL,0x33FBF26FL,0xBB7613CFL,0x33FBF26FL},{0x36181A78L,0xAFBABFCDL,(-6L),0xAFBABFCDL,0x36181A78L,0xCC935555L,0L,0x6C4FA195L},{0x36181A78L,0xCC935555L,0L,0x6C4FA195L,0L,0xCC935555L,0x36181A78L,0xAFBABFCDL},{0L,0xAFBABFCDL,0L,0x33FBF26FL,0xBB7613CFL,0x33FBF26FL,0L,0xAFBABFCDL},{0L,0x0A82069FL,(-6L),0x6C4FA195L,0xBB7613CFL,0xAFBABFCDL,0xBB7613CFL,0x6C4FA195L},{0L,0x0A82069FL,0L,0xAFBABFCDL,0L,0x33FBF26FL,0xBB7613CFL,0x33FBF26FL}},{{0x36181A78L,0xAFBABFCDL,(-6L),0xAFBABFCDL,0x36181A78L,0xCC935555L,0L,0x6C4FA195L},{0x36181A78L,0xCC935555L,0L,0x6C4FA195L,0L,0xCC935555L,0x36181A78L,0xAFBABFCDL},{0L,0xAFBABFCDL,0L,0x33FBF26FL,0xBB7613CFL,0x33FBF26FL,0L,0xAFBABFCDL},{0L,0x0A82069FL,(-6L),0x6C4FA195L,0xBB7613CFL,0xAFBABFCDL,0xBB7613CFL,0x6C4FA195L},{0L,0x0A82069FL,0L,0xAFBABFCDL,0L,0x33FBF26FL,0xBB7613CFL,0x33FBF26FL},{0x36181A78L,0xAFBABFCDL,(-6L),0xAFBABFCDL,0x36181A78L,0xCC935555L,0L,0x6C4FA195L}},{{0x36181A78L,0xCC935555L,0L,0x6C4FA195L,0x36181A78L,0x0A82069FL,0xBB7613CFL,0xCC935555L},{0L,0xCC935555L,0x36181A78L,0xAFBABFCDL,(-6L),0xAFBABFCDL,0x36181A78L,0xCC935555L},{0x36181A78L,0x6C4FA195L,0L,0x33FBF26FL,(-6L),0xCC935555L,(-6L),0x33FBF26FL},{0L,0x6C4FA195L,0L,0xCC935555L,0x36181A78L,0xAFBABFCDL,(-6L),0xAFBABFCDL},{0xBB7613CFL,0xCC935555L,0L,0xCC935555L,0xBB7613CFL,0x0A82069FL,0x36181A78L,0x33FBF26FL},{0xBB7613CFL,0x0A82069FL,0x36181A78L,0x33FBF26FL,0x36181A78L,0x0A82069FL,0xBB7613CFL,0xCC935555L}}};
                struct S4 l_312 = {108,-87};
                int i, j, k;
                g_109.f1 = (l_247 , ((safe_mod_func_uint16_t_u_u((g_118.f5.f2 && (safe_mul_func_uint8_t_u_u(((l_252 , g_118) , (safe_add_func_uint16_t_u_u(0x8609L, p_42))), (safe_add_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(g_117.f4, p_42)) <= 3L), p_41))))), 0x928BL)) || p_41));
                for (l_247 = 0; (l_247 <= 0); l_247 += 1)
                {
                    for (g_118.f5.f2 = 0; (g_118.f5.f2 <= 0); g_118.f5.f2 += 1)
                    {
                        int i, j, k;
                        g_118.f0 = (l_207[g_118.f5.f2][l_247][l_247] ^ (safe_mod_func_int16_t_s_s(g_95[(g_118.f5.f2 + 1)][g_118.f5.f2], 65535UL)));
                    }
                    for (g_84 = 0; (g_84 >= 0); g_84 -= 1)
                    {
                        int i, j;
                        g_118.f0 = g_95[(l_247 + 2)][g_84];
                    }
                }
                for (g_84 = 1; (g_84 >= 0); g_84 -= 1)
                {
                    int l_281 = (-10L);
                    struct S4 l_283 = {21,-98};
                    if ((safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(p_42, l_202.f2)), p_41)))
                    {
                        char l_266 = 0x72L;
                        l_266 = ((l_265 & (l_252.f0 , p_41)) <= g_118.f5.f2);
                    }
                    else
                    {
                        unsigned char l_282 = 0x52L;
                        struct S4 l_284 = {929,-72};
                        l_201.f2 = (safe_mul_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(p_41, (g_118.f0 != l_201.f2))) , (l_265 | (p_41 == (((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(0x855BL, l_196.f4)), (safe_sub_func_int32_t_s_s(((p_42 && ((safe_sub_func_int32_t_s_s(l_132.f9, l_281)) & 246UL)) , l_282), 0xF7040179L)))), g_118.f6)) == g_117.f0) >= g_118.f5.f2)))), g_117.f2));
                        l_284 = l_283;
                    }
                    for (l_201.f6 = 0; (l_201.f6 <= 1); l_201.f6 += 1)
                    {
                        short l_285[9] = {0x1AD0L,0x1AD0L,0x1AD0L,0x1AD0L,0x1AD0L,0x1AD0L,0x1AD0L,0x1AD0L,0x1AD0L};
                        int i;
                        return l_285[4];
                    }
                }
                if (g_118.f1)
                {
                    g_109 = g_109;
                }
                else
                {
                    if (p_41)
                        break;
                }
                for (l_247 = 0; (l_247 <= 0); l_247 += 1)
                {
                    const short l_299[2][5] = {{6L,0x675FL,0x675FL,6L,0x675FL},{6L,6L,0x5E76L,6L,6L}};
                    struct S4 l_311[8] = {{508,13},{508,13},{508,13},{508,13},{508,13},{508,13},{508,13},{508,13}};
                    int i, j;
                    l_111.f1 = (safe_mul_func_uint16_t_u_u(((l_94[0] <= (safe_mul_func_int16_t_s_s(g_117.f0, p_42))) ^ 0xE2L), l_290));
                    if ((((~(safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((g_109 , (l_265 , (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_118.f5.f2, (l_299[0][1] & ((safe_rshift_func_int16_t_s_s(l_132.f5.f0, 0)) == ((safe_sub_func_int8_t_s_s(((l_202.f5 , (safe_div_func_int8_t_s_s(g_95[2][0], (l_111 , (safe_rshift_func_uint8_t_u_s((p_41 && l_201.f5), p_41)))))) == g_117.f0), l_299[1][1])) > 0x3D65L))))), 1UL)))) && p_41), l_201.f0)), l_132.f5.f1))) , g_117.f1) & p_42))
                    {
                        unsigned short l_308 = 0x6224L;
                        l_308 = 0L;
                    }
                    else
                    {
                        unsigned char l_310 = 0UL;
                        l_309[4][5][2] = g_117.f1;
                        return l_310;
                    }
                    for (p_41 = 0; (p_41 <= 0); p_41 += 1)
                    {
                        int i, j, k;
                        l_309[4][5][2] = l_207[l_247][l_247][(l_247 + 1)];
                        g_109.f1 = 0x97F9CA66L;
                        l_312 = l_311[2];
                    }
                }
            }
            l_201.f2 = l_132.f7;
        }
    }
    else
    {
        const struct S4 l_313 = {942,55};
        g_109 = l_313;
    }
    g_117.f1 = p_41;
    return l_110.f0;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
    transparent_crc(g_16.f1, "g_16.f1", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_95[i][j], "g_95[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_109.f1, "g_109.f1", print_hash_value);
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    transparent_crc(g_117.f1, "g_117.f1", print_hash_value);
    transparent_crc(g_117.f2, "g_117.f2", print_hash_value);
    transparent_crc(g_117.f3, "g_117.f3", print_hash_value);
    transparent_crc(g_117.f4, "g_117.f4", print_hash_value);
    transparent_crc(g_118.f0, "g_118.f0", print_hash_value);
    transparent_crc(g_118.f1, "g_118.f1", print_hash_value);
    transparent_crc(g_118.f2, "g_118.f2", print_hash_value);
    transparent_crc(g_118.f3, "g_118.f3", print_hash_value);
    transparent_crc(g_118.f4, "g_118.f4", print_hash_value);
    transparent_crc(g_118.f5.f0, "g_118.f5.f0", print_hash_value);
    transparent_crc(g_118.f5.f1, "g_118.f5.f1", print_hash_value);
    transparent_crc(g_118.f5.f2, "g_118.f5.f2", print_hash_value);
    transparent_crc(g_118.f6, "g_118.f6", print_hash_value);
    transparent_crc(g_118.f7, "g_118.f7", print_hash_value);
    transparent_crc(g_118.f8, "g_118.f8", print_hash_value);
    transparent_crc(g_118.f9, "g_118.f9", print_hash_value);
    transparent_crc(g_439.f0, "g_439.f0", print_hash_value);
    transparent_crc(g_439.f1, "g_439.f1", print_hash_value);
    transparent_crc(g_439.f2, "g_439.f2", print_hash_value);
    transparent_crc(g_439.f3, "g_439.f3", print_hash_value);
    transparent_crc(g_439.f4, "g_439.f4", print_hash_value);
    transparent_crc(g_439.f5, "g_439.f5", print_hash_value);
    transparent_crc(g_439.f6, "g_439.f6", print_hash_value);
    transparent_crc(g_439.f7, "g_439.f7", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    transparent_crc(g_885.f0, "g_885.f0", print_hash_value);
    transparent_crc(g_885.f1, "g_885.f1", print_hash_value);
    transparent_crc(g_899.f0, "g_899.f0", print_hash_value);
    transparent_crc(g_899.f1, "g_899.f1", print_hash_value);
    transparent_crc(g_1005, "g_1005", print_hash_value);
    transparent_crc(g_1052, "g_1052", print_hash_value);
    transparent_crc(g_1132, "g_1132", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1155[i], "g_1155[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1280.f0, "g_1280.f0", print_hash_value);
    transparent_crc(g_1280.f1, "g_1280.f1", print_hash_value);
    transparent_crc(g_1280.f2, "g_1280.f2", print_hash_value);
    transparent_crc(g_1280.f3, "g_1280.f3", print_hash_value);
    transparent_crc(g_1280.f4, "g_1280.f4", print_hash_value);
    transparent_crc(g_1445, "g_1445", print_hash_value);
    transparent_crc(g_1588.f0, "g_1588.f0", print_hash_value);
    transparent_crc(g_1588.f1, "g_1588.f1", print_hash_value);
    transparent_crc(g_1588.f2, "g_1588.f2", print_hash_value);
    transparent_crc(g_1588.f3, "g_1588.f3", print_hash_value);
    transparent_crc(g_1588.f4, "g_1588.f4", print_hash_value);
    transparent_crc(g_1675, "g_1675", print_hash_value);
    transparent_crc(g_1699, "g_1699", print_hash_value);
    transparent_crc(g_1707.f0, "g_1707.f0", print_hash_value);
    transparent_crc(g_1707.f1, "g_1707.f1", print_hash_value);
    transparent_crc(g_1707.f2, "g_1707.f2", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1731[i][j][k], "g_1731[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1820.f0, "g_1820.f0", print_hash_value);
    transparent_crc(g_1820.f1, "g_1820.f1", print_hash_value);
    transparent_crc(g_1820.f2, "g_1820.f2", print_hash_value);
    transparent_crc(g_1820.f3, "g_1820.f3", print_hash_value);
    transparent_crc(g_1820.f4, "g_1820.f4", print_hash_value);
    transparent_crc(g_1820.f5.f0, "g_1820.f5.f0", print_hash_value);
    transparent_crc(g_1820.f5.f1, "g_1820.f5.f1", print_hash_value);
    transparent_crc(g_1820.f5.f2, "g_1820.f5.f2", print_hash_value);
    transparent_crc(g_1820.f6, "g_1820.f6", print_hash_value);
    transparent_crc(g_1820.f7, "g_1820.f7", print_hash_value);
    transparent_crc(g_1820.f8, "g_1820.f8", print_hash_value);
    transparent_crc(g_1820.f9, "g_1820.f9", print_hash_value);
    transparent_crc(g_1828, "g_1828", print_hash_value);
    transparent_crc(g_1904, "g_1904", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
