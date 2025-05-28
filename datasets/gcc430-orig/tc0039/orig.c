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
   signed f0 : 30;
   unsigned f1 : 29;
   unsigned short f2;
   const signed f3 : 29;
   signed f4 : 16;
   unsigned f5 : 30;
   signed f6 : 9;
};

struct S1 {
   unsigned short f0;
   unsigned f1 : 15;
   signed f2 : 3;
   signed f3 : 18;
};

struct S2 {
   unsigned f0 : 12;
   const unsigned f1 : 23;
};

union U3 {
   int f0;
   unsigned char f1;
   unsigned f2;
   short f3;
   short f4;
};

union U4 {
   signed f0 : 2;
};


static int g_3 = 0xCAD7D711L;
static union U4 g_25[6][5][3] = {{{{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}}, {{{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}}, {{{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}}, {{{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}}, {{{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}}, {{{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}, {{0xAA9C4AD1L}, {-1L}, {0xAA9C4AD1L}}}};
static union U3 g_36 = {0L};
static int g_39 = 0x8103B8AFL;
static int *g_64 = &g_39;
static int g_75 = 0x40B14FABL;
static unsigned g_94 = 0xBD3BCAB3L;
static int g_95[1] = {4L};
static unsigned char g_99 = 4UL;
static unsigned g_101 = 1UL;
static const union U3 g_107[6] = {{-1L}, {-1L}, {1L}, {-1L}, {-1L}, {1L}};
static const union U3 g_109 = {0xFF6D7771L};
static const union U3 *g_108 = &g_109;
static struct S0 g_122 = {11003,5950,3UL,-8294,-108,27867,11};
static struct S0 *g_121 = &g_122;
static struct S1 g_129 = {0UL,19,-1,229};
static union U3 *g_133[10][7] = {{&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}};
static union U3 **g_132 = &g_133[8][2];
static struct S2 g_138 = {52,297};
static struct S2 *g_137 = &g_138;
static unsigned g_177 = 18446744073709551613UL;
static struct S1 g_209 = {65535UL,123,-1,229};
static const struct S0 g_216 = {96,9579,0x9834L,4711,204,15285,-3};
static struct S2 g_220[8][4] = {{{27,2765}, {59,1258}, {27,2765}, {59,1258}}, {{27,2765}, {59,1258}, {27,2765}, {59,1258}}, {{27,2765}, {59,1258}, {27,2765}, {59,1258}}, {{27,2765}, {59,1258}, {27,2765}, {59,1258}}, {{27,2765}, {59,1258}, {27,2765}, {59,1258}}, {{27,2765}, {59,1258}, {27,2765}, {59,1258}}, {{27,2765}, {59,1258}, {27,2765}, {59,1258}}, {{27,2765}, {59,1258}, {27,2765}, {59,1258}}};
static unsigned g_236 = 4294967288UL;
static char g_243 = 0xCFL;
static unsigned short g_246[5] = {4UL, 0x1BE6L, 4UL, 0x1BE6L, 4UL};
static struct S1 *g_262[8] = {&g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129};
static struct S1 **g_261 = &g_262[0];
static const int g_272[3][6] = {{(-1L), 1L, (-5L), (-5L), 1L, (-1L)}, {(-1L), 1L, (-5L), (-5L), 1L, (-1L)}, {(-1L), 1L, (-5L), (-5L), 1L, (-1L)}};
static int g_310 = 2L;
static int g_318 = (-1L);
static struct S2 **g_354[3] = {&g_137, &g_137, &g_137};
static struct S2 ***g_353 = &g_354[2];
static const union U4 *g_389 = (void*)0;
static struct S0 g_415[5][7] = {{{-13496,9054,0x1696L,-19822,-178,4375,4}, {20990,15164,0x2112L,-19217,-64,10577,-18}, {-27398,20493,0x0FE7L,22180,31,14183,-5}, {20990,15164,0x2112L,-19217,-64,10577,-18}, {-13496,9054,0x1696L,-19822,-178,4375,4}, {10404,10228,0x1A38L,-7343,-130,19822,21}, {-13496,9054,0x1696L,-19822,-178,4375,4}}, {{-13496,9054,0x1696L,-19822,-178,4375,4}, {20990,15164,0x2112L,-19217,-64,10577,-18}, {-27398,20493,0x0FE7L,22180,31,14183,-5}, {20990,15164,0x2112L,-19217,-64,10577,-18}, {-13496,9054,0x1696L,-19822,-178,4375,4}, {10404,10228,0x1A38L,-7343,-130,19822,21}, {-13496,9054,0x1696L,-19822,-178,4375,4}}, {{-13496,9054,0x1696L,-19822,-178,4375,4}, {20990,15164,0x2112L,-19217,-64,10577,-18}, {-27398,20493,0x0FE7L,22180,31,14183,-5}, {20990,15164,0x2112L,-19217,-64,10577,-18}, {-13496,9054,0x1696L,-19822,-178,4375,4}, {10404,10228,0x1A38L,-7343,-130,19822,21}, {-13496,9054,0x1696L,-19822,-178,4375,4}}, {{-13496,9054,0x1696L,-19822,-178,4375,4}, {20990,15164,0x2112L,-19217,-64,10577,-18}, {-27398,20493,0x0FE7L,22180,31,14183,-5}, {20990,15164,0x2112L,-19217,-64,10577,-18}, {-13496,9054,0x1696L,-19822,-178,4375,4}, {10404,10228,0x1A38L,-7343,-130,19822,21}, {-13496,9054,0x1696L,-19822,-178,4375,4}}, {{-13496,9054,0x1696L,-19822,-178,4375,4}, {20990,15164,0x2112L,-19217,-64,10577,-18}, {-27398,20493,0x0FE7L,22180,31,14183,-5}, {20990,15164,0x2112L,-19217,-64,10577,-18}, {-13496,9054,0x1696L,-19822,-178,4375,4}, {10404,10228,0x1A38L,-7343,-130,19822,21}, {-13496,9054,0x1696L,-19822,-178,4375,4}}};
static short *g_443 = &g_36.f4;
static short **g_442 = &g_443;
static union U3 g_472 = {0x4A789218L};
static unsigned *g_547 = &g_101;
static unsigned **g_546[4] = {&g_547, &g_547, &g_547, &g_547};
static char g_560 = 6L;
static int **g_574 = (void*)0;
static const struct S1 *g_599 = &g_129;
static const struct S1 **g_598[5] = {&g_599, &g_599, &g_599, &g_599, &g_599};
static const struct S1 ***g_597[5][2][7] = {{{&g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4]}, {&g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4]}}, {{&g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4]}, {&g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4]}}, {{&g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4]}, {&g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4]}}, {{&g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4]}, {&g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4]}}, {{&g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4]}, {&g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4], &g_598[4]}}};
static const struct S1 ****g_596[2][7] = {{&g_597[1][0][2], &g_597[1][1][1], &g_597[0][1][2], &g_597[1][1][1], &g_597[1][0][2], (void*)0, &g_597[1][0][2]}, {&g_597[1][0][2], &g_597[1][1][1], &g_597[0][1][2], &g_597[1][1][1], &g_597[1][0][2], (void*)0, &g_597[1][0][2]}};
static unsigned char g_653 = 0xDCL;
static short g_670 = (-1L);
static union U4 **g_683 = (void*)0;
static union U3 g_711 = {-9L};
static const int *g_725[4] = {(void*)0, &g_95[0], (void*)0, &g_95[0]};
static struct S0 g_746 = {-27995,19671,0x9D1DL,-322,-12,20862,-17};
static unsigned short *g_754[10][2][9] = {{{&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}, {&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}}, {{&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}, {&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}}, {{&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}, {&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}}, {{&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}, {&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}}, {{&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}, {&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}}, {{&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}, {&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}}, {{&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}, {&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}}, {{&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}, {&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}}, {{&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}, {&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}}, {{&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}, {&g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1], &g_209.f0, &g_246[1]}}};
static unsigned short **g_753[3] = {&g_754[2][0][4], &g_754[2][0][4], &g_754[2][0][4]};
static union U4 g_840 = {-1L};
static const unsigned g_854 = 0x74FF12C2L;
static union U4 g_921 = {-6L};
static unsigned short g_928 = 8UL;
static struct S2 g_952 = {24,745};
static union U4 g_965 = {0x97CBB2A6L};
static union U4 * const g_964 = &g_965;
static union U4 * const *g_963[10] = {(void*)0, (void*)0, &g_964, (void*)0, (void*)0, &g_964, (void*)0, (void*)0, &g_964, (void*)0};
static union U4 * const **g_962 = &g_963[7];
static struct S2 g_973 = {23,82};
static short * const * const **g_1215 = (void*)0;
static unsigned g_1274 = 0x33B3340BL;
static unsigned g_1278 = 0x8CBA2888L;
static struct S1 g_1312 = {65535UL,4,1,344};
static const char g_1333 = 0x8DL;
static struct S0 g_1343 = {16442,18915,0xFEFCL,-12178,-184,30039,6};
static struct S0 *g_1342[4][6][6] = {{{&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}}, {{&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}}, {{&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}}, {{&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}, {&g_1343, &g_746, &g_415[2][5], (void*)0, &g_746, &g_415[1][0]}}};



static union U4 func_1(void);
static int func_4(int p_5, unsigned p_6, unsigned short p_7);
static short func_8(int p_9, struct S2 p_10, struct S2 p_11, const struct S0 p_12);
static const struct S1 func_19(short p_20, union U4 p_21, unsigned short p_22, struct S1 p_23);
static struct S1 func_26(short p_27, int p_28, unsigned p_29, char p_30);
static struct S1 func_31(char p_32, struct S0 p_33);
static union U3 func_34(unsigned p_35);
static struct S1 func_44(int * const p_45, union U3 p_46, struct S0 p_47, unsigned p_48, int * p_49);
static int * const func_50(union U3 p_51, int * p_52, int * p_53);
static int * func_56(int * p_57, int * p_58, char p_59, const int * p_60, int * p_61);
static union U4 func_1(void)
{
    short l_2[10][1] = {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}};
    struct S2 l_215 = {40,831};
    const struct S0 l_400 = {15303,13851,0x7D9BL,-1151,143,1574,-18};
    union U4 l_416 = {-10L};
    union U3 **l_424 = &g_133[8][2];
    unsigned char l_435 = 0xA4L;
    struct S2 l_446 = {61,1681};
    union U3 *l_471 = &g_472;
    int *l_562 = &g_39;
    unsigned l_589 = 0x94E76367L;
    short ***l_621[6];
    unsigned char * const l_661 = (void*)0;
    char l_665[9][9] = {{0L, 0x8BL, 0L, 0xDBL, 0L, (-1L), 0xE1L, 0xE1L, (-1L)}, {0L, 0x8BL, 0L, 0xDBL, 0L, (-1L), 0xE1L, 0xE1L, (-1L)}, {0L, 0x8BL, 0L, 0xDBL, 0L, (-1L), 0xE1L, 0xE1L, (-1L)}, {0L, 0x8BL, 0L, 0xDBL, 0L, (-1L), 0xE1L, 0xE1L, (-1L)}, {0L, 0x8BL, 0L, 0xDBL, 0L, (-1L), 0xE1L, 0xE1L, (-1L)}, {0L, 0x8BL, 0L, 0xDBL, 0L, (-1L), 0xE1L, 0xE1L, (-1L)}, {0L, 0x8BL, 0L, 0xDBL, 0L, (-1L), 0xE1L, 0xE1L, (-1L)}, {0L, 0x8BL, 0L, 0xDBL, 0L, (-1L), 0xE1L, 0xE1L, (-1L)}, {0L, 0x8BL, 0L, 0xDBL, 0L, (-1L), 0xE1L, 0xE1L, (-1L)}};
    struct S1 ** const *l_666 = &g_261;
    union U4 *l_686 = &g_25[5][4][1];
    union U4 **l_685 = &l_686;
    struct S2 *l_700 = (void*)0;
    int *l_713[1];
    char l_773 = 1L;
    unsigned l_774 = 0x28F8C9AFL;
    int l_775 = (-7L);
    unsigned short *l_776 = &g_746.f2;
    unsigned l_777 = 5UL;
    int l_778 = (-7L);
    unsigned l_781 = 0xB302254AL;
    struct S2 l_782 = {25,307};
    int l_788 = 0xF55DB5BFL;
    unsigned char l_886 = 0x4EL;
    short ** const *l_898 = &g_442;
    int l_909 = 1L;
    unsigned char l_938[4][3][2] = {{{0x1FL, 0x1FL}, {0x1FL, 0x1FL}, {0x1FL, 0x1FL}}, {{0x1FL, 0x1FL}, {0x1FL, 0x1FL}, {0x1FL, 0x1FL}}, {{0x1FL, 0x1FL}, {0x1FL, 0x1FL}, {0x1FL, 0x1FL}}, {{0x1FL, 0x1FL}, {0x1FL, 0x1FL}, {0x1FL, 0x1FL}}};
    int *l_1005 = &g_95[0];
    int l_1007 = 0xCFBD3D0EL;
    unsigned *l_1015 = (void*)0;
    unsigned **l_1014 = &l_1015;
    unsigned l_1080 = 0UL;
    char l_1106 = (-8L);
    const unsigned l_1159 = 0x912CC77EL;
    unsigned char l_1168 = 0x47L;
    union U4 l_1175 = {1L};
    int l_1177[7] = {0xEDF7DB3AL, 0xEDF7DB3AL, 0x7D7194B3L, 0xEDF7DB3AL, 0xEDF7DB3AL, 0x7D7194B3L, 0xEDF7DB3AL};
    const struct S1 l_1178[6][2][8] = {{{{6UL,106,0,24}, {0x01B7L,29,-1,427}, {65535UL,113,1,53}, {0x01B7L,29,-1,427}, {6UL,106,0,24}, {0xA1CBL,18,1,-55}, {65535UL,113,1,53}, {0xA1CBL,18,1,-55}}, {{6UL,106,0,24}, {0x01B7L,29,-1,427}, {65535UL,113,1,53}, {0x01B7L,29,-1,427}, {6UL,106,0,24}, {0xA1CBL,18,1,-55}, {65535UL,113,1,53}, {0xA1CBL,18,1,-55}}}, {{{6UL,106,0,24}, {0x01B7L,29,-1,427}, {65535UL,113,1,53}, {0x01B7L,29,-1,427}, {6UL,106,0,24}, {0xA1CBL,18,1,-55}, {65535UL,113,1,53}, {0xA1CBL,18,1,-55}}, {{6UL,106,0,24}, {0x01B7L,29,-1,427}, {65535UL,113,1,53}, {0x01B7L,29,-1,427}, {6UL,106,0,24}, {0xA1CBL,18,1,-55}, {65535UL,113,1,53}, {0xA1CBL,18,1,-55}}}, {{{6UL,106,0,24}, {0x01B7L,29,-1,427}, {65535UL,113,1,53}, {0x01B7L,29,-1,427}, {6UL,106,0,24}, {0xA1CBL,18,1,-55}, {65535UL,113,1,53}, {0xA1CBL,18,1,-55}}, {{6UL,106,0,24}, {0x01B7L,29,-1,427}, {65535UL,113,1,53}, {0x01B7L,29,-1,427}, {6UL,106,0,24}, {0xA1CBL,18,1,-55}, {65535UL,113,1,53}, {0xA1CBL,18,1,-55}}}, {{{6UL,106,0,24}, {0x01B7L,29,-1,427}, {65535UL,113,1,53}, {0x01B7L,29,-1,427}, {6UL,106,0,24}, {0xA1CBL,18,1,-55}, {65535UL,113,1,53}, {0xA1CBL,18,1,-55}}, {{6UL,106,0,24}, {0x01B7L,29,-1,427}, {65535UL,113,1,53}, {0x01B7L,29,-1,427}, {6UL,106,0,24}, {0xA1CBL,18,1,-55}, {65535UL,113,1,53}, {0xA1CBL,18,1,-55}}}, {{{6UL,106,0,24}, {0x01B7L,29,-1,427}, {65535UL,113,1,53}, {0x01B7L,29,-1,427}, {6UL,106,0,24}, {0xA1CBL,18,1,-55}, {65535UL,113,1,53}, {0xA1CBL,18,1,-55}}, {{6UL,106,0,24}, {0x01B7L,29,-1,427}, {65535UL,113,1,53}, {0x01B7L,29,-1,427}, {6UL,106,0,24}, {0xA1CBL,18,1,-55}, {65535UL,113,1,53}, {0xA1CBL,18,1,-55}}}, {{{6UL,106,0,24}, {0x01B7L,29,-1,427}, {65535UL,113,1,53}, {0x01B7L,29,-1,427}, {6UL,106,0,24}, {0xA1CBL,18,1,-55}, {65535UL,113,1,53}, {0xA1CBL,18,1,-55}}, {{6UL,106,0,24}, {0x01B7L,29,-1,427}, {65535UL,113,1,53}, {0x01B7L,29,-1,427}, {6UL,106,0,24}, {0xA1CBL,18,1,-55}, {65535UL,113,1,53}, {0xA1CBL,18,1,-55}}}};
    union U3 l_1235 = {-4L};
    unsigned short l_1261[8];
    struct S1 l_1273[2] = {{5UL,36,0,440}, {5UL,36,0,440}};
    unsigned l_1276 = 0x2984306DL;
    const int *l_1306 = &l_909;
    int l_1309 = 0xBB8F4CD5L;
    struct S1 l_1338 = {1UL,99,-1,-172};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_621[i] = &g_442;
    for (i = 0; i < 1; i++)
        l_713[i] = &g_95[0];
    for (i = 0; i < 8; i++)
        l_1261[i] = 9UL;
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    {
        int l_24 = 0x1704D9FAL;
        struct S0 l_37 = {-4951,6007,1UL,13095,206,27928,-3};
        int l_214 = 2L;
        struct S2 l_398 = {49,2336};
        struct S2 l_399[10] = {{63,1741}, {63,1741}, {63,1741}, {63,1741}, {63,1741}, {63,1741}, {63,1741}, {63,1741}, {63,1741}, {63,1741}};
        struct S1 l_439 = {0xCB7AL,78,0,-37};
        unsigned l_445 = 0x9A7C8F02L;
        unsigned *l_486 = &g_177;
        short l_494[1];
        union U4 *l_501 = &l_416;
        struct S2 l_530 = {11,1222};
        unsigned char l_564[1][2];
        union U3 l_610 = {1L};
        const struct S2 l_620 = {26,780};
        short * const **l_622[9];
        int *l_641[2][8][10] = {{{&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}, {&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}, {&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}, {&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}, {&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}, {&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}, {&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}, {&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}}, {{&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}, {&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}, {&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}, {&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}, {&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}, {&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}, {&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}, {&g_75, &g_95[0], &l_24, &g_95[0], &l_24, &l_24, &g_39, &g_39, &g_75, &g_75}}};
        short l_730 = 0xB0AFL;
        unsigned **l_734 = (void*)0;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_494[i] = 0xCC7AL;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_564[i][j] = 253UL;
        }
        for (i = 0; i < 9; i++)
            l_622[i] = (void*)0;
    }
    g_415[1][0].f4 &= ((safe_add_func_uint16_t_u_u((((*l_776) ^= ((*l_686) , (func_4((safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(func_4((g_129.f1 | g_129.f0), (safe_add_func_uint8_t_u_u((((~(((safe_rshift_func_uint16_t_u_s((*l_562), 5)) != (g_25[0][2][1].f0 = (safe_sub_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s(g_109.f0, ((*g_443) | (*g_443)))) , ((((safe_unary_minus_func_uint32_t_u((((safe_rshift_func_int8_t_s_s(((((&l_215 != &l_215) || g_216.f1) | (**g_442)) , g_109.f4), 1)) , (*l_562)) || l_773))) | (*l_562)) & 0xCBL) , 0x1AL)) != g_472.f1), 4294967295UL)))) , 1L)) & g_129.f1) <= 254UL), g_472.f1)), (*l_562)), 0xF72AL)), l_774)), g_101, l_775) >= g_472.f3))) >= (-1L)), g_472.f2)) && (*g_64));
    if (((((*g_108) , 0xB3A7L) && l_777) || (((((func_34(((*g_547) = ((g_472.f3 = (**g_442)) && l_778))) , (**l_685)) , &g_443) != ((1L > g_95[0]) , &g_443)) ^ (-1L)) < (-5L))))
    {
        struct S1 **l_785 = &g_262[7];
        struct S2 l_786[10] = {{8,239}, {12,943}, {8,239}, {12,943}, {8,239}, {12,943}, {8,239}, {12,943}, {8,239}, {12,943}};
        unsigned l_787 = 18446744073709551612UL;
        int l_789 = 0x18CBDB78L;
        union U4 l_797 = {0xA63BB5BCL};
        const struct S0 l_856 = {-18366,7521,0xEFB8L,10627,-105,14156,-5};
        char l_878 = 0x4EL;
        short l_904 = 0xD053L;
        int l_929[5][2] = {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}};
        short l_947 = (-6L);
        short l_974 = 0xCD32L;
        unsigned l_994 = 0xD6CB9DEDL;
        unsigned l_1078[9] = {0x918B74B7L, 0UL, 0x918B74B7L, 0UL, 0x918B74B7L, 0UL, 0x918B74B7L, 0UL, 0x918B74B7L};
        struct S1 l_1123 = {0UL,36,-0,-220};
        unsigned short l_1128 = 65526UL;
        union U3 l_1150 = {0xDFB7AEC3L};
        unsigned l_1174 = 0xE42ED688L;
        int i, j;
        l_789 = (func_4(func_8((safe_add_func_uint32_t_u_u(l_781, ((func_34((*g_547)) , l_782) , (safe_add_func_uint8_t_u_u((0xCECEL | (((void*)0 == &g_177) || ((void*)0 != l_785))), 0x2EL))))), (*g_137), l_786[1], (*g_121)), l_787, l_788) <= l_786[1].f0);
        for (l_789 = 2; (l_789 >= 0); l_789 -= 1)
        {
            int *l_792[3];
            const int *l_795 = &l_789;
            int *l_802 = &l_775;
            const unsigned l_855[10][10] = {{0x536A0188L, 9UL, 18446744073709551615UL, 0x61B30AEFL, 0x61B30AEFL, 18446744073709551615UL, 9UL, 0x536A0188L, 18446744073709551615UL, 0x536A0188L}, {0x536A0188L, 9UL, 18446744073709551615UL, 0x61B30AEFL, 0x61B30AEFL, 18446744073709551615UL, 9UL, 0x536A0188L, 18446744073709551615UL, 0x536A0188L}, {0x536A0188L, 9UL, 18446744073709551615UL, 0x61B30AEFL, 0x61B30AEFL, 18446744073709551615UL, 9UL, 0x536A0188L, 18446744073709551615UL, 0x536A0188L}, {0x536A0188L, 9UL, 18446744073709551615UL, 0x61B30AEFL, 0x61B30AEFL, 18446744073709551615UL, 9UL, 0x536A0188L, 18446744073709551615UL, 0x536A0188L}, {0x536A0188L, 9UL, 18446744073709551615UL, 0x61B30AEFL, 0x61B30AEFL, 18446744073709551615UL, 9UL, 0x536A0188L, 18446744073709551615UL, 0x536A0188L}, {0x536A0188L, 9UL, 18446744073709551615UL, 0x61B30AEFL, 0x61B30AEFL, 18446744073709551615UL, 9UL, 0x536A0188L, 18446744073709551615UL, 0x536A0188L}, {0x536A0188L, 9UL, 18446744073709551615UL, 0x61B30AEFL, 0x61B30AEFL, 18446744073709551615UL, 9UL, 0x536A0188L, 18446744073709551615UL, 0x536A0188L}, {0x536A0188L, 9UL, 18446744073709551615UL, 0x61B30AEFL, 0x61B30AEFL, 18446744073709551615UL, 9UL, 0x536A0188L, 18446744073709551615UL, 0x536A0188L}, {0x536A0188L, 9UL, 18446744073709551615UL, 0x61B30AEFL, 0x61B30AEFL, 18446744073709551615UL, 9UL, 0x536A0188L, 18446744073709551615UL, 0x536A0188L}, {0x536A0188L, 9UL, 18446744073709551615UL, 0x61B30AEFL, 0x61B30AEFL, 18446744073709551615UL, 9UL, 0x536A0188L, 18446744073709551615UL, 0x536A0188L}};
            short l_857[10][10] = {{(-1L), 0xB668L, 0xAA5EL, 1L, 1L, (-4L), 0xEA36L, 0x0490L, 0x64ADL, 0xBA11L}, {(-1L), 0xB668L, 0xAA5EL, 1L, 1L, (-4L), 0xEA36L, 0x0490L, 0x64ADL, 0xBA11L}, {(-1L), 0xB668L, 0xAA5EL, 1L, 1L, (-4L), 0xEA36L, 0x0490L, 0x64ADL, 0xBA11L}, {(-1L), 0xB668L, 0xAA5EL, 1L, 1L, (-4L), 0xEA36L, 0x0490L, 0x64ADL, 0xBA11L}, {(-1L), 0xB668L, 0xAA5EL, 1L, 1L, (-4L), 0xEA36L, 0x0490L, 0x64ADL, 0xBA11L}, {(-1L), 0xB668L, 0xAA5EL, 1L, 1L, (-4L), 0xEA36L, 0x0490L, 0x64ADL, 0xBA11L}, {(-1L), 0xB668L, 0xAA5EL, 1L, 1L, (-4L), 0xEA36L, 0x0490L, 0x64ADL, 0xBA11L}, {(-1L), 0xB668L, 0xAA5EL, 1L, 1L, (-4L), 0xEA36L, 0x0490L, 0x64ADL, 0xBA11L}, {(-1L), 0xB668L, 0xAA5EL, 1L, 1L, (-4L), 0xEA36L, 0x0490L, 0x64ADL, 0xBA11L}, {(-1L), 0xB668L, 0xAA5EL, 1L, 1L, (-4L), 0xEA36L, 0x0490L, 0x64ADL, 0xBA11L}};
            struct S2 l_858[6][10][4] = {{{{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}}, {{{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}}, {{{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}}, {{{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}}, {{{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}}, {{{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}, {{30,2287}, {30,2712}, {36,967}, {31,731}}}};
            const unsigned short l_892 = 0UL;
            union U4 l_907 = {0x4F0621CCL};
            union U4 ***l_908 = &g_683;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_792[i] = &g_310;
        }
        if (l_878)
        {
            unsigned l_932 = 0x6A491670L;
            struct S1 * const * const l_934 = &g_262[0];
            struct S1 * const * const *l_933 = &l_934;
            const struct S2 *l_937 = &l_786[1];
            struct S1 ***l_940 = (void*)0;
            struct S1 ****l_939 = &l_940;
            union U3 *l_948 = &g_36;
            union U4 * const *l_960 = &l_686;
            union U4 * const ** const l_959[9] = {&l_960, &l_960, &l_960, &l_960, &l_960, &l_960, &l_960, &l_960, &l_960};
            unsigned char l_967 = 250UL;
            int l_970 = 8L;
            const struct S0 l_1008 = {-15898,810,0UL,2975,122,9057,9};
            int **l_1016 = (void*)0;
            int **l_1017 = &l_1005;
            unsigned char *l_1028 = &l_938[0][2][1];
            struct S2 l_1072 = {30,605};
            int i;
            g_95[0] &= ((0xEA31L > (-1L)) <= ((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(l_789, (((**g_442) = (((*l_562) != ((safe_add_func_uint8_t_u_u((g_109.f2 , (g_928 != l_929[0][0])), ((safe_mod_func_int16_t_s_s((0xC2L != g_122.f1), (-7L))) != 0xEC2CL))) | l_932)) == (-1L))) != 0x8048L))), (*l_562))) == l_789));
            if ((g_921.f0 ^= (g_122.f6 | (((*l_562) = func_4((l_932 , (-9L)), g_746.f3, (*l_562))) || ((((l_797.f0 >= (l_933 != ((*l_939) = ((((safe_add_func_uint32_t_u_u((l_937 != (void*)0), l_938[0][2][1])) , g_36.f3) , l_932) , (void*)0)))) , g_746.f6) != 0x79L) < (-1L))))))
            {
                const unsigned l_945 = 0xB89CB820L;
                unsigned *l_946[7][1][1] = {{{&g_94}}, {{&g_94}}, {{&g_94}}, {{&g_94}}, {{&g_94}}, {{&g_94}}, {{&g_94}}};
                union U4 * const **l_961[7][4][9] = {{{(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}}, {{(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}}, {{(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}}, {{(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}}, {{(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}}, {{(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}}, {{(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}, {(void*)0, &l_960, (void*)0, &l_960, (void*)0, &l_960, &l_960, &l_960, &l_960}}};
                int l_966 = (-9L);
                int *l_976 = &l_909;
                struct S1 l_993 = {1UL,53,-0,-487};
                int i, j, k;
                if (((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((func_4((((l_945 , l_946[0][0][0]) != (void*)0) , ((void*)0 == &g_310)), g_243, ((0x3BL > l_945) <= 0xDCL)) & 0xB4L), l_947)), 0x53E8B7ADL)) || l_786[1].f0))
                {
                    unsigned *l_951[7][7][5] = {{{&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}}, {{&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}}, {{&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}}, {{&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}}, {{&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}}, {{&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}}, {{&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}, {&l_777, &l_787, &l_932, &l_932, &l_777}}};
                    struct S2 l_953 = {35,1897};
                    const struct S0 l_954 = {-7983,23163,65531UL,21436,-201,4863,3};
                    int i, j, k;
                    (*g_132) = l_948;
                    (*l_562) = ((l_929[0][0] &= ((*g_547) = (safe_mod_func_int16_t_s_s(((g_177 |= g_746.f6) , (*g_443)), (**g_442))))) , (l_856.f0 && func_8(g_415[1][0].f2, g_952, l_953, l_954)));
                    if (((safe_sub_func_uint16_t_u_u(((*l_776) = (((*g_443) > ((((safe_rshift_func_int8_t_s_u(l_947, g_101)) , l_959[6]) != (g_962 = l_961[6][2][3])) <= (((((**g_442) | (l_966 = (*l_562))) <= (l_797.f0 , l_953.f0)) , 0UL) > (*g_64)))) & g_209.f2)), l_967)) != (**g_442)))
                    {
                        (*l_562) ^= l_966;
                    }
                    else
                    {
                        int *l_971 = (void*)0;
                        int *l_972 = &l_778;
                        int **l_975[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_975[i] = &l_562;
                        l_976 = (g_64 = ((((safe_rshift_func_uint16_t_u_s((&g_99 != &g_653), 10)) && g_965.f0) <= (l_945 , (((l_856 , ((*l_972) &= l_970)) , g_973) , l_974))) , &l_966));
                        (*g_132) = (*l_424);
                        (**g_261) = (*g_599);
                        (*g_64) = (*l_976);
                    }
                    if (l_786[1].f1)
                    {
                        return (*g_964);
                    }
                    else
                    {
                        struct S1 l_977 = {0UL,83,0,-468};
                        int **l_978 = &l_562;
                        union U3 l_985 = {0xDF2EC02CL};
                        union U4 l_992 = {0L};
                        unsigned char l_1006 = 251UL;
                        l_977 = l_977;
                        (*l_978) = func_50((*g_108), &l_929[2][1], &g_75);
                        (***l_933) = func_26(((safe_lshift_func_uint8_t_u_u(((g_243 == l_967) > (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((0x73F2L || ((*g_137) , l_954.f2)) >= 0x82L), ((((l_985 = l_985) , func_19((l_789 = (*g_443)), (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u(8UL, 13)) | 0xC7B8C313L), 3)), 3)) <= (*g_443)) , l_992), l_954.f4, l_993)) , (void*)0) == (void*)0))), l_994))), g_99)) || 0x6E75ABF4L), g_101, l_878, (*l_976));
                        (*l_1005) = ((((-4L) >= ((safe_sub_func_uint16_t_u_u((*l_976), func_8((0UL && (((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((((safe_add_func_int16_t_s_s((*g_443), ((*l_776) = ((((l_1005 != (*l_978)) <= 0L) <= (((((*g_64) , 0xDFBDL) != 0xA76CL) , l_1006) > l_953.f1)) == 0x1708074DL)))) >= l_1007) != 0x556987CDL), (**l_978))) | 0x6BL), 6)) , l_904) , (*g_443))), (***g_353), (***g_353), l_1008))) != (*l_976))) , l_970) | (*l_976));
                    }
                }
                else
                {
                    int l_1009 = 9L;
                    (*g_64) &= 1L;
                    l_1009 &= (-1L);
                    for (g_209.f0 = 0; (g_209.f0 >= 44); g_209.f0 = safe_add_func_uint16_t_u_u(g_209.f0, 1))
                    {
                        return (*g_964);
                    }
                }
            }
            else
            {
                const int **l_1012 = &g_725[1];
                const int l_1013 = (-10L);
                (*l_1012) = &g_272[1][2];
                l_797.f0 ^= l_1013;
                (*g_64) &= ((l_929[0][0] , (l_1014 != (void*)0)) >= (*g_547));
            }
            (*l_1017) = (void*)0;
            if (((((g_216 , (g_840.f0 && ((**g_442) <= 8L))) , (safe_sub_func_int16_t_s_s((**g_442), (0x7CL <= (safe_add_func_int32_t_s_s(0x951910FAL, (((*l_1028) |= (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((*l_562) > ((safe_sub_func_uint8_t_u_u(g_94, g_177)) , l_856.f6)), l_797.f0)), g_107[4].f2))) > 0L))))))) | (*g_547)) >= l_789))
            {
                const unsigned char l_1039 = 0xD2L;
                unsigned l_1042 = 18446744073709551606UL;
                int l_1047 = 0xD91AC21EL;
                union U3 ***l_1077 = &g_132;
                int *l_1079 = &g_318;
                int l_1081 = 0x250309E6L;
                g_725[1] = (void*)0;
                if (((*l_562) = ((func_4(l_856.f0, g_36.f4, (safe_mod_func_int32_t_s_s((*g_64), ((safe_add_func_int32_t_s_s(l_787, (((safe_rshift_func_uint8_t_u_s(((g_122.f6 & (safe_sub_func_int8_t_s_s(g_122.f1, l_929[0][0]))) <= (safe_rshift_func_uint16_t_u_u((l_1039 ^ (safe_sub_func_uint16_t_u_u(((*g_547) && 4294967295UL), 0x9F02L))), l_1039))), 1)) <= l_1039) || (*g_547)))) , l_1042)))) , (void*)0) == (void*)0)))
                {
                    struct S2 *l_1045 = &l_446;
                    int l_1046 = 0x785FA0B8L;
                    for (g_472.f1 = (-17); (g_472.f1 >= 13); ++g_472.f1)
                    {
                        (**g_353) = l_1045;
                        l_1046 |= (*g_64);
                        l_1047 |= (*g_64);
                    }
                    return (*g_964);
                }
                else
                {
                    char l_1058 = 0xC2L;
                    for (g_670 = (-8); (g_670 == 18); ++g_670)
                    {
                        union U3 *l_1052 = &g_36;
                        const union U3 **l_1053 = &g_108;
                        l_1047 ^= ((*l_562) = ((safe_lshift_func_uint8_t_u_u(g_122.f4, (((func_34(l_856.f5) , l_1052) != ((*l_1053) = (*g_132))) > ((g_107[4].f4 & g_216.f4) != (safe_add_func_uint16_t_u_u((1L != (((safe_add_func_uint32_t_u_u(((l_1058 >= (-9L)) , (*l_562)), 0x9ED2E171L)) != g_216.f6) , 6UL)), l_1042)))))) , l_878));
                        g_965.f0 |= (*g_64);
                    }
                    for (g_36.f0 = (-8); (g_36.f0 < 24); ++g_36.f0)
                    {
                        short l_1061 = 0x09A0L;
                        int *l_1062 = (void*)0;
                        (*g_64) = ((+l_1047) , ((l_1061 , func_56(&g_95[0], &g_3, g_216.f3, &g_272[0][4], l_1062)) == &l_929[0][0]));
                        g_75 &= ((safe_add_func_uint32_t_u_u(((l_1042 <= (!(safe_rshift_func_uint8_t_u_u(((*l_1028) &= l_856.f6), 7)))) , 6UL), (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0xC5L, (safe_unary_minus_func_uint8_t_u((l_1072 , g_952.f1))))), (((-1L) || ((safe_mod_func_int32_t_s_s((*g_64), (*g_64))) && (**g_442))) < l_856.f6))))) | 0UL);
                    }
                }
                (**l_934) = (((*l_1079) ^= ((safe_rshift_func_int8_t_s_u((((*l_1077) = &g_133[6][4]) == &g_133[8][2]), ((*g_64) & 0L))) | l_1078[4])) , func_26((**g_442), (g_236 ^ ((*g_443) && l_1080)), g_129.f2, l_1081));
                g_310 ^= (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((!(safe_lshift_func_int8_t_s_u((g_243 = ((*l_948) , l_1039)), (*l_562)))), 0x5DBFED3FL)), 0xFABC8E07L));
            }
            else
            {
                int *l_1088 = &l_775;
                union U4 l_1092 = {-8L};
                char *l_1095[5][3] = {{(void*)0, &l_878, (void*)0}, {(void*)0, &l_878, (void*)0}, {(void*)0, &l_878, (void*)0}, {(void*)0, &l_878, (void*)0}, {(void*)0, &l_878, (void*)0}};
                int i, j;
                g_725[0] = l_1088;
                for (l_974 = 0; (l_974 > (-18)); l_974 = safe_sub_func_uint8_t_u_u(l_974, 5))
                {
                    const char l_1091 = 0x33L;
                    if (l_1091)
                        break;
                    return l_1092;
                }
                (***l_666) = (**g_261);
                if ((*l_1088))
                {
                    l_1088 = &g_75;
                }
                else
                {
                    unsigned short l_1096 = 65535UL;
                    unsigned l_1097 = 0x67A5D938L;
                    l_797.f0 &= (g_840.f0 |= ((*l_562) = (func_4((*l_1088), l_974, (((*g_64) <= ((l_947 ^ (*g_547)) , l_856.f2)) | (**g_442))) != (l_1096 >= l_1097))));
                    (*g_64) |= (safe_unary_minus_func_int8_t_s(g_921.f0));
                }
            }
        }
        else
        {
            unsigned char l_1099 = 1UL;
            short ** const l_1111[2] = {&g_443, &g_443};
            const struct S1 l_1131 = {7UL,70,1,-143};
            int *l_1148 = &l_909;
            struct S1 ***l_1176 = &l_785;
            int i;
            if (((((func_26((**g_442), (0x1CD9907DL || (*l_562)), l_1099, g_209.f2) , (safe_rshift_func_int16_t_s_s(0x4E7DL, l_1099))) && l_904) <= 1UL) <= 9UL))
            {
                int l_1110 = 0xBCC937FBL;
                struct S1 l_1124 = {0UL,26,0,317};
                unsigned l_1127 = 18446744073709551613UL;
                unsigned l_1143 = 0UL;
                union U4 *l_1151[10][7] = {{&l_416, &g_965, &g_840, &g_965, &g_25[0][2][1], (void*)0, &g_25[0][0][0]}, {&l_416, &g_965, &g_840, &g_965, &g_25[0][2][1], (void*)0, &g_25[0][0][0]}, {&l_416, &g_965, &g_840, &g_965, &g_25[0][2][1], (void*)0, &g_25[0][0][0]}, {&l_416, &g_965, &g_840, &g_965, &g_25[0][2][1], (void*)0, &g_25[0][0][0]}, {&l_416, &g_965, &g_840, &g_965, &g_25[0][2][1], (void*)0, &g_25[0][0][0]}, {&l_416, &g_965, &g_840, &g_965, &g_25[0][2][1], (void*)0, &g_25[0][0][0]}, {&l_416, &g_965, &g_840, &g_965, &g_25[0][2][1], (void*)0, &g_25[0][0][0]}, {&l_416, &g_965, &g_840, &g_965, &g_25[0][2][1], (void*)0, &g_25[0][0][0]}, {&l_416, &g_965, &g_840, &g_965, &g_25[0][2][1], (void*)0, &g_25[0][0][0]}, {&l_416, &g_965, &g_840, &g_965, &g_25[0][2][1], (void*)0, &g_25[0][0][0]}};
                struct S2 l_1164 = {17,2785};
                int i, j;
                if (l_1099)
                {
                    short l_1109 = 0L;
                    unsigned short * const l_1117 = (void*)0;
                    struct S1 l_1122 = {0x78A9L,132,-1,-505};
                    for (l_1007 = 0; (l_1007 <= 4); l_1007 += 1)
                    {
                        int i;
                        (*l_562) = ((g_711.f1 = ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((((***l_898) ^= (((((l_1106 & l_1099) & (((safe_rshift_func_int8_t_s_u(g_122.f2, ((((g_246[l_1007] ^= l_1109) && l_1110) >= (*l_562)) & (*g_547)))) && ((void*)0 == l_1111[0])) != 0x823441E9L)) , g_246[l_1007]) != g_746.f1) != g_746.f4)) && 65533UL), l_1109)), l_1110)) >= l_1110)) != 0x43L);
                        (**g_353) = &l_782;
                    }
                    if ((l_1109 && (*l_1005)))
                    {
                        (*l_562) |= ((g_216.f5 == (safe_lshift_func_uint8_t_u_s(l_1109, 3))) && 0xE876L);
                    }
                    else
                    {
                        struct S2 l_1116 = {32,2473};
                        (**l_785) = (((safe_add_func_uint16_t_u_u(((l_1116 , func_8((l_1117 == ((+(safe_lshift_func_int16_t_s_s((**g_442), ((l_797.f0 , (((safe_add_func_uint16_t_u_u(((+l_856.f1) < (l_1116.f1 || l_1109)), (0xF058L <= l_1078[4]))) == g_216.f2) , l_786[1].f0)) == l_1099)))) , (void*)0)), (***g_353), (***g_353), g_746)) <= l_1110), l_904)) || 0UL) , l_1122);
                        (***l_666) = (l_1124 = l_1123);
                    }
                    for (g_36.f2 = 17; (g_36.f2 != 28); g_36.f2 = safe_add_func_uint8_t_u_u(g_36.f2, 4))
                    {
                        unsigned char *l_1129 = (void*)0;
                        unsigned char *l_1130[2][7] = {{(void*)0, (void*)0, &g_711.f1, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_711.f1, (void*)0, (void*)0, (void*)0, (void*)0}};
                        int i, j;
                        (*l_562) &= l_1127;
                        (*g_64) = ((((*l_776) = l_1127) != (**g_442)) , ((l_1124 , (void*)0) == ((l_1128 <= (*g_64)) , ((g_472.f4 & (g_711.f1 = ((&g_753[0] != (func_34((~0UL)) , &g_753[0])) | g_415[1][0].f5))) , (void*)0))));
                        (*l_562) |= 0x003E0010L;
                    }
                    (***l_666) = l_1131;
                }
                else
                {
                    unsigned char l_1134 = 0x9DL;
                    (*l_1005) = (safe_lshift_func_int16_t_s_s(((*g_443) = (l_1134 = (*g_443))), 8));
                }
                for (l_1123.f0 = 0; (l_1123.f0 != 5); ++l_1123.f0)
                {
                    union U4 *l_1149 = &l_416;
                    int l_1165 = (-1L);
                    for (g_3 = 0; (g_3 == (-29)); --g_3)
                    {
                        char l_1146 = (-8L);
                        int **l_1147[10][1];
                        struct S1 l_1152 = {0xC451L,105,-1,318};
                        struct S1 *l_1153 = &l_1152;
                        int i, j;
                        for (i = 0; i < 10; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1147[i][j] = &l_562;
                        }
                        l_1148 = func_56(&g_3, &l_789, l_994, (func_34((((func_8(func_4(((safe_rshift_func_uint8_t_u_s((l_1099 && (safe_rshift_func_uint16_t_u_u((l_1143 &= l_1099), ((safe_add_func_int16_t_s_s((l_1146 &= (*g_443)), (0x2969L == (*l_1005)))) , (g_415[3][1] , 0x8C02L))))), 0)) != l_1124.f2), g_854, l_1078[2]), (***g_353), (***g_353), l_400) || (*l_562)) , l_1131.f0) || (*g_443))) , (void*)0), &g_3);
                        (*l_1005) &= ((*g_64) = (l_1149 != (g_122 , (((*l_471) = l_1150) , l_1151[5][2]))));
                        (*l_562) = 0x305F39FAL;
                        (*l_1153) = ((*g_547) , ((**g_261) = l_1152));
                    }
                    for (g_472.f3 = 0; (g_472.f3 < (-8)); g_472.f3 = safe_sub_func_uint8_t_u_u(g_472.f3, 8))
                    {
                        const unsigned char l_1158[2] = {255UL, 255UL};
                        struct S1 ***l_1161 = &l_785;
                        struct S1 ****l_1160 = &l_1161;
                        int i;
                        (*l_1005) |= (safe_add_func_int32_t_s_s((((l_1158[0] , (*l_1148)) == l_1159) , ((void*)0 == l_1160)), ((safe_sub_func_int32_t_s_s((*g_64), (0x70D2L & (*g_443)))) < 0xACL)));
                        (*l_1005) = ((*g_64) = l_994);
                    }
                    if (func_8(l_786[1].f0, (*g_137), l_1164, l_856))
                    {
                        g_746.f4 |= (func_4((*l_1148), g_746.f0, l_1165) >= (safe_sub_func_uint32_t_u_u(l_1165, l_856.f4)));
                        l_1168 = (*l_562);
                        return l_797;
                    }
                    else
                    {
                        (*l_1148) = (safe_rshift_func_uint8_t_u_u(0x89L, 1));
                    }
                    for (l_781 = (-14); (l_781 != 15); l_781 = safe_add_func_int16_t_s_s(l_781, 8))
                    {
                        int **l_1173 = &l_1148;
                        (*l_1173) = &g_3;
                    }
                }
            }
            else
            {
                (*l_1148) = ((*g_64) = (l_1174 < ((*l_1005) = l_1123.f0)));
            }
            (*l_1176) = (l_1175 , l_785);
            (*l_562) ^= 0x6B2099D3L;
        }
    }
    else
    {
        short *l_1179 = &g_670;
        int l_1186 = 0x236D7FCFL;
        struct S2 l_1193[9] = {{13,684}, {13,684}, {13,684}, {13,684}, {13,684}, {13,684}, {13,684}, {13,684}, {13,684}};
        int l_1199 = 0x30A0EBA1L;
        struct S1 *l_1200[2][2];
        short l_1218 = 0x6712L;
        struct S0 l_1293 = {-18636,20817,0x1606L,-22335,-218,14730,-13};
        union U4 * const **l_1308[9][9][3] = {{{&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}}, {{&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}}, {{&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}}, {{&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}}, {{&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}}, {{&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}}, {{&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}}, {{&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}}, {{&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}, {&g_963[7], &g_963[7], &g_963[7]}}};
        short l_1358 = 5L;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_1200[i][j] = &g_209;
        }
        if (func_4(l_1177[2], (g_177 = (l_1178[5][1][5] , g_129.f1)), (((*g_442) = (*g_442)) == l_1179)))
        {
            char l_1180 = 0x85L;
            union U4 l_1192 = {0x902ECA17L};
            unsigned short l_1198 = 1UL;
            const struct S1 **l_1205 = &g_599;
            union U3 l_1232[9][7] = {{{0x00838083L}, {1L}, {-1L}, {1L}, {0x00838083L}, {1L}, {-1L}}, {{0x00838083L}, {1L}, {-1L}, {1L}, {0x00838083L}, {1L}, {-1L}}, {{0x00838083L}, {1L}, {-1L}, {1L}, {0x00838083L}, {1L}, {-1L}}, {{0x00838083L}, {1L}, {-1L}, {1L}, {0x00838083L}, {1L}, {-1L}}, {{0x00838083L}, {1L}, {-1L}, {1L}, {0x00838083L}, {1L}, {-1L}}, {{0x00838083L}, {1L}, {-1L}, {1L}, {0x00838083L}, {1L}, {-1L}}, {{0x00838083L}, {1L}, {-1L}, {1L}, {0x00838083L}, {1L}, {-1L}}, {{0x00838083L}, {1L}, {-1L}, {1L}, {0x00838083L}, {1L}, {-1L}}, {{0x00838083L}, {1L}, {-1L}, {1L}, {0x00838083L}, {1L}, {-1L}}};
            unsigned l_1275 = 0x5113149BL;
            union U4 *l_1282 = &l_416;
            int *l_1284 = (void*)0;
            unsigned l_1285 = 0xB0A9BA62L;
            unsigned short l_1288 = 1UL;
            int i, j;
            (*l_1005) = ((-6L) & l_1180);
            for (g_36.f4 = 0; (g_36.f4 <= (-14)); g_36.f4 = safe_sub_func_uint8_t_u_u(g_36.f4, 9))
            {
                const unsigned short l_1183 = 65532UL;
                short l_1197 = 0x3D45L;
                unsigned char l_1211 = 0xBBL;
                int l_1260 = 0x1C693234L;
                if (l_1183)
                {
                    const unsigned l_1191 = 18446744073709551615UL;
                    l_1199 |= (safe_rshift_func_uint16_t_u_s(l_1186, (((safe_lshift_func_int16_t_s_u((l_1198 &= (safe_rshift_func_uint16_t_u_s(l_1191, (((*l_776) = (((*g_964) = l_1192) , ((((g_711.f0 >= (l_1193[0] , (safe_unary_minus_func_int16_t_s((g_670 = (*g_443)))))) >= (((*g_121) , ((safe_add_func_int8_t_s_s(l_1193[0].f0, g_415[1][0].f3)) != (*g_547))) == l_1197)) > 0UL) , l_1192.f0))) ^ 0UL)))), 6)) != 0xEAL) || (**g_442))));
                    (**l_666) = l_1200[0][0];
                    (*l_1005) = 0x59AB4F06L;
                }
                else
                {
                    char l_1210 = 0L;
                    short ****l_1214[2][9][10] = {{{&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}}, {{&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}, {&l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2], &l_621[2], &l_621[2], &l_621[1], &l_621[1], &l_621[2]}}};
                    int l_1233 = 0x3BC265B4L;
                    struct S0 l_1236 = {-19169,16723,65535UL,19669,220,22681,2};
                    int i, j, k;
                    (*l_1005) = (safe_lshift_func_uint8_t_u_s(0x98L, 7));
                    for (l_1106 = 0; (l_1106 == (-21)); l_1106 = safe_sub_func_int32_t_s_s(l_1106, 4))
                    {
                        (*g_64) = (*g_64);
                        l_1205 = (void*)0;
                    }
                    l_1218 &= (safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u((*l_1005), l_1210)) <= l_1211) & (safe_add_func_int8_t_s_s((((*l_1179) = (l_1214[0][4][6] != g_1215)) , g_415[1][0].f2), (l_1210 ^ (g_472.f4 = (((*l_562) ^= (-5L)) & (l_1192.f0 = (((*g_547) = ((safe_mod_func_int8_t_s_s(1L, g_746.f3)) ^ 0x52L)) & l_1211)))))))), 0x56C8L));
                    if (l_1211)
                    {
                        struct S0 l_1219[6] = {{-31255,15132,65535UL,12145,245,31661,-14}, {1147,15339,0x707BL,108,186,10546,2}, {-31255,15132,65535UL,12145,245,31661,-14}, {1147,15339,0x707BL,108,186,10546,2}, {-31255,15132,65535UL,12145,245,31661,-14}, {1147,15339,0x707BL,108,186,10546,2}};
                        struct S1 l_1220 = {0x61A1L,162,0,478};
                        int i;
                        (***l_666) = l_1220;
                        (*l_1005) |= (*g_64);
                    }
                    else
                    {
                        unsigned l_1223 = 0x63FB8C83L;
                        union U4 l_1227 = {0L};
                        int **l_1234 = &l_713[0];
                        (***l_666) = (((safe_lshift_func_uint8_t_u_s(l_1223, 0)) < (safe_unary_minus_func_uint8_t_u(((safe_lshift_func_int8_t_s_s((((l_1227 , l_1199) > (safe_rshift_func_uint16_t_u_s(l_1197, 12))) || (0xEEL != l_1192.f0)), 0)) == (l_1233 = (l_1198 >= (safe_mod_func_int32_t_s_s((l_1223 & (l_1232[1][5] , (*g_443))), 1UL)))))))) , (**g_261));
                        (***l_666) = func_44(((*l_1234) = (void*)0), l_1235, l_1236, g_107[4].f0, &g_3);
                    }
                }
                for (g_122.f2 = 8; (g_122.f2 == 51); ++g_122.f2)
                {
                    char l_1245 = (-1L);
                    if ((&g_753[2] == (void*)0))
                    {
                        union U4 l_1239 = {0x1C73B282L};
                        return l_1239;
                    }
                    else
                    {
                        int l_1244 = (-6L);
                        char l_1248 = (-9L);
                        short l_1249 = 0x2AEFL;
                        struct S0 **l_1250 = &g_121;
                        const int l_1259 = 0L;
                        (*l_1005) = (safe_add_func_int8_t_s_s((*l_1005), (g_472.f1 = (safe_sub_func_uint32_t_u_u(l_1244, (l_1245 , ((((*l_1005) || (safe_lshift_func_uint16_t_u_u(l_1232[1][5].f4, l_1248))) , (l_1249 ^ ((*g_64) = l_1248))) , (((*g_64) , &g_121) == l_1250))))))));
                        (*l_1005) ^= (safe_rshift_func_uint16_t_u_u(((l_1260 = (safe_mod_func_int32_t_s_s((((safe_rshift_func_int16_t_s_u(((g_711.f3 && (safe_mod_func_uint16_t_u_u(8UL, l_1245))) & ((*g_64) < ((((g_109.f0 == (l_1197 || ((+l_1183) , l_1232[1][5].f1))) && l_1211) > 2UL) != l_1244))), l_1249)) ^ l_1259) != (-1L)), l_1197))) > l_1248), l_1261[6]));
                    }
                    l_1192.f0 |= l_1245;
                }
                if ((*g_64))
                {
                    int **l_1262 = &l_713[0];
                    (*l_1262) = &l_1260;
                    if ((*g_64))
                        continue;
                    (*g_64) ^= 0x9F2149EEL;
                    for (g_236 = 11; (g_236 != 29); g_236++)
                    {
                        (*g_64) ^= (g_415[1][0].f5 & (!g_109.f1));
                    }
                }
                else
                {
                    int l_1277 = 0xAAB079E6L;
                    union U4 *l_1281 = &l_1175;
                    for (g_560 = 0; (g_560 == 6); g_560 = safe_add_func_int32_t_s_s(g_560, 2))
                    {
                        unsigned l_1269 = 0UL;
                        union U4 l_1270 = {0x20CDDB54L};
                        l_1275 ^= ((safe_rshift_func_uint8_t_u_s(l_1260, 1)) & (((l_1269 >= g_3) < (g_1274 = ((func_19((**g_442), ((*g_964) = l_1270), ((*l_776) = (safe_sub_func_int8_t_s_s(g_36.f4, g_209.f2))), l_1273[1]) , 0x1C226890L) & (*g_64)))) < 0xF0397B4AL));
                        (*g_64) &= (l_1276 != (-8L));
                        (*g_64) &= l_1277;
                        (*l_1005) = ((l_1269 && 0xA3619D49L) == (g_1278 , 3UL));
                    }
                    if (l_1275)
                        break;
                    for (l_1168 = 0; (l_1168 > 48); l_1168 = safe_add_func_uint8_t_u_u(l_1168, 7))
                    {
                        int **l_1283 = &l_713[0];
                        l_1282 = ((*l_685) = l_1281);
                        (*l_1283) = &l_909;
                        (*l_1283) = l_1284;
                        (*l_1005) = ((*l_562) = l_1277);
                    }
                }
            }
            (**l_666) = (*g_261);
            g_415[1][0].f0 &= (((l_1199 = func_4(l_1285, (safe_mod_func_uint16_t_u_u(((func_4(func_4((*l_1005), g_746.f4, l_1186), (l_1199 > l_1186), ((((((void*)0 == &l_1180) == l_1288) ^ l_1199) < l_1218) == 0UL)) & g_973.f0) || (**g_442)), 0x23E5L)), l_1232[1][5].f1)) & g_1278) < g_711.f4);
        }
        else
        {
            unsigned l_1300 = 0x3B2A44A9L;
            union U4 l_1304 = {0xE6719DDFL};
            struct S1 l_1311 = {0xB5D8L,65,0,-178};
            unsigned char *l_1314 = &l_886;
            for (g_711.f4 = 0; (g_711.f4 < 21); g_711.f4 = safe_add_func_int8_t_s_s(g_711.f4, 2))
            {
                int l_1291 = (-6L);
                union U4 l_1319 = {0x41DCBAE4L};
                if (l_1186)
                {
                    unsigned short l_1294 = 0xB1FFL;
                    int *l_1302 = (void*)0;
                    if (func_4(((*g_64) ^= 0L), (!g_840.f0), l_1291))
                    {
                        union U3 l_1292 = {-3L};
                        struct S0 ** const l_1297[7][2] = {{&g_121, &g_121}, {&g_121, &g_121}, {&g_121, &g_121}, {&g_121, &g_121}, {&g_121, &g_121}, {&g_121, &g_121}, {&g_121, &g_121}};
                        int i, j;
                        (**g_261) = func_44(&g_95[0], ((*l_471) = l_1292), l_1293, ((func_4((*g_64), (l_1193[0].f1 & l_1294), l_1294) == (safe_add_func_uint8_t_u_u(((&g_121 == l_1297[2][1]) < l_1294), 0UL))) || 8L), &g_75);
                    }
                    else
                    {
                        char *l_1301 = &l_665[2][7];
                        int **l_1303 = &l_562;
                        g_840.f0 &= ((((0x07L || ((*l_1301) &= func_4((safe_rshift_func_uint16_t_u_s((l_1300 < (**g_442)), 13)), g_122.f2, (*l_562)))) , (void*)0) != (void*)0) && ((*g_443) & l_1291));
                        (*l_1303) = l_1302;
                        return l_1304;
                    }
                }
                else
                {
                    int l_1307 = (-2L);
                    char l_1310 = 1L;
                    unsigned char *l_1313 = &l_1235.f1;
                    (*l_562) |= (*l_1005);
                    for (l_435 = 0; (l_435 <= 1); l_435 += 1)
                    {
                        const int **l_1305[7][6] = {{&g_725[0], &g_725[1], (void*)0, (void*)0, (void*)0, &g_725[1]}, {&g_725[0], &g_725[1], (void*)0, (void*)0, (void*)0, &g_725[1]}, {&g_725[0], &g_725[1], (void*)0, (void*)0, (void*)0, &g_725[1]}, {&g_725[0], &g_725[1], (void*)0, (void*)0, (void*)0, &g_725[1]}, {&g_725[0], &g_725[1], (void*)0, (void*)0, (void*)0, &g_725[1]}, {&g_725[0], &g_725[1], (void*)0, (void*)0, (void*)0, &g_725[1]}, {&g_725[0], &g_725[1], (void*)0, (void*)0, (void*)0, &g_725[1]}};
                        int i, j;
                        l_1306 = &g_272[1][2];
                        g_415[1][0].f4 |= (func_4(((((l_665[(l_435 + 4)][(l_435 + 5)] , l_1291) ^ 0L) , (l_1307 , (((void*)0 != l_1308[1][2][0]) >= ((*l_776) &= l_1309)))) & 0xD9L), g_138.f0, l_1310) != 0x31BBL);
                        (*g_64) = (0x3F61E009L >= 0UL);
                        (*l_1005) &= (-3L);
                    }
                    if (((-1L) || ((-10L) != ((***l_666) , (l_1304 , 1L)))))
                    {
                        (*g_64) &= l_1304.f0;
                    }
                    else
                    {
                        union U4 l_1315 = {0x2A59BFC0L};
                        const int l_1318 = (-4L);
                        (*l_1005) ^= (l_1307 , (*g_64));
                        g_1312 = l_1311;
                        (***l_666) = func_19((l_1313 == l_1314), ((**l_685) = l_1315), (*l_1005), func_31((safe_add_func_int32_t_s_s(l_1318, l_1307)), l_1293));
                    }
                }
                return l_1319;
            }
        }
        for (l_1235.f3 = 1; (l_1235.f3 <= 7); l_1235.f3 += 1)
        {
            const char *l_1331[7][9] = {{&l_773, &g_243, &l_773, &g_243, &g_243, &l_1106, &l_1106, &g_243, &g_243}, {&l_773, &g_243, &l_773, &g_243, &g_243, &l_1106, &l_1106, &g_243, &g_243}, {&l_773, &g_243, &l_773, &g_243, &g_243, &l_1106, &l_1106, &g_243, &g_243}, {&l_773, &g_243, &l_773, &g_243, &g_243, &l_1106, &l_1106, &g_243, &g_243}, {&l_773, &g_243, &l_773, &g_243, &g_243, &l_1106, &l_1106, &g_243, &g_243}, {&l_773, &g_243, &l_773, &g_243, &g_243, &l_1106, &l_1106, &g_243, &g_243}, {&l_773, &g_243, &l_773, &g_243, &g_243, &l_1106, &l_1106, &g_243, &g_243}};
            const int l_1334 = 0xCFD584B4L;
            int *l_1336 = &g_3;
            short l_1339[1];
            struct S0 l_1360[7] = {{-10202,1548,65529UL,-912,255,20656,-2}, {-10202,1548,65529UL,-912,255,20656,-2}, {-10202,1548,65529UL,-912,255,20656,-2}, {-10202,1548,65529UL,-912,255,20656,-2}, {-10202,1548,65529UL,-912,255,20656,-2}, {-10202,1548,65529UL,-912,255,20656,-2}, {-10202,1548,65529UL,-912,255,20656,-2}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_1339[i] = 0x1C40L;
            for (g_1274 = 0; (g_1274 <= 7); g_1274 += 1)
            {
                union U4 l_1321[9] = {{-1L}, {-1L}, {9L}, {-1L}, {-1L}, {9L}, {-1L}, {-1L}, {9L}};
                const char *l_1332 = &g_1333;
                int *l_1361 = &g_75;
                int **l_1362 = &l_562;
                int i;
                for (g_39 = 7; (g_39 >= 0); g_39 -= 1)
                {
                    int **l_1320 = &l_1005;
                    char *l_1328 = &g_560;
                    char *l_1330 = (void*)0;
                    (*l_1320) = &g_39;
                    if ((*g_64))
                    {
                        g_310 = 0x122D440DL;
                        return l_1321[1];
                    }
                    else
                    {
                        char **l_1329 = &l_1328;
                        int l_1335 = (-2L);
                        (**g_353) = (**g_353);
                        (*l_1320) = func_56(&l_909, func_56(((((((((g_220[6][2].f0 <= ((*g_443) | 1UL)) >= (safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((0x2C85C271L | (g_122.f6 && 0xF0L)), (((safe_sub_func_int8_t_s_s(((l_1330 = ((*l_1329) = l_1328)) == (l_1332 = l_1331[0][4])), g_122.f3)) != l_1293.f6) == 0x94D8L))), l_1334))) >= l_1335) , &g_574) == (void*)0) ^ (*g_443)) , (*l_686)) , &g_95[0]), l_1336, g_952.f1, &g_3, &g_95[0]), l_1321[1].f0, &g_39, &g_3);
                        g_1312.f3 = (safe_unary_minus_func_int32_t_s((**l_1320)));
                        if ((*l_1306))
                            continue;
                    }
                }
                (***l_666) = l_1338;
                for (g_177 = 1; (g_177 <= 7); g_177 += 1)
                {
                    struct S0 *l_1340 = (void*)0;
                    int l_1344 = 0xF2608F2AL;
                    for (g_36.f3 = 7; (g_36.f3 >= 0); g_36.f3 -= 1)
                    {
                        struct S0 **l_1341 = &g_121;
                        (*l_1336) ^= l_1339[0];
                        g_1342[0][4][4] = ((*l_1341) = l_1340);
                        if (l_1344)
                            break;
                        (*l_1005) ^= l_1344;
                    }
                    for (g_36.f2 = 0; (g_36.f2 <= 7); g_36.f2 += 1)
                    {
                        unsigned *l_1357 = &g_236;
                        int l_1359[4][3][6] = {{{0x8AD4FA84L, (-4L), 0xC12D3CFEL, (-4L), 0x8AD4FA84L, 0x61CBF664L}, {0x8AD4FA84L, (-4L), 0xC12D3CFEL, (-4L), 0x8AD4FA84L, 0x61CBF664L}, {0x8AD4FA84L, (-4L), 0xC12D3CFEL, (-4L), 0x8AD4FA84L, 0x61CBF664L}}, {{0x8AD4FA84L, (-4L), 0xC12D3CFEL, (-4L), 0x8AD4FA84L, 0x61CBF664L}, {0x8AD4FA84L, (-4L), 0xC12D3CFEL, (-4L), 0x8AD4FA84L, 0x61CBF664L}, {0x8AD4FA84L, (-4L), 0xC12D3CFEL, (-4L), 0x8AD4FA84L, 0x61CBF664L}}, {{0x8AD4FA84L, (-4L), 0xC12D3CFEL, (-4L), 0x8AD4FA84L, 0x61CBF664L}, {0x8AD4FA84L, (-4L), 0xC12D3CFEL, (-4L), 0x8AD4FA84L, 0x61CBF664L}, {0x8AD4FA84L, (-4L), 0xC12D3CFEL, (-4L), 0x8AD4FA84L, 0x61CBF664L}}, {{0x8AD4FA84L, (-4L), 0xC12D3CFEL, (-4L), 0x8AD4FA84L, 0x61CBF664L}, {0x8AD4FA84L, (-4L), 0xC12D3CFEL, (-4L), 0x8AD4FA84L, 0x61CBF664L}, {0x8AD4FA84L, (-4L), 0xC12D3CFEL, (-4L), 0x8AD4FA84L, 0x61CBF664L}}};
                        int i, j, k;
                        (*l_1336) = (l_1193[0] , ((((safe_add_func_uint8_t_u_u(((**g_261) , ((g_1343.f2 ^ (safe_rshift_func_uint8_t_u_s(((((safe_lshift_func_int16_t_s_u((**g_442), ((l_1321[1].f0 != ((*l_1179) = ((*g_443) ^ (safe_mod_func_uint32_t_u_u((*g_547), (safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(l_1344, 7)) | (((*l_1357) = l_1193[0].f1) & (*l_562))), l_1293.f5))))))) > 65535UL))) ^ (*l_562)) , l_1358) , (*l_1336)), (*l_1005)))) < l_1359[1][0][4])), g_952.f1)) , l_1293.f3) , l_1360[2]) , 1L));
                    }
                }
                (*l_1362) = l_1361;
            }
            if ((*g_64))
                break;
        }
    }
    return (*g_964);
}







static int func_4(int p_5, unsigned p_6, unsigned short p_7)
{
    struct S0 l_277 = {-25043,5608,4UL,17409,-199,22048,-19};
    union U3 l_278 = {-1L};
    int *l_279 = &g_95[0];
    unsigned short *l_282 = (void*)0;
    unsigned short *l_283 = &g_209.f0;
    int **l_284 = &l_279;
    struct S2 l_285[7] = {{18,2296}, {18,2296}, {3,2706}, {18,2296}, {18,2296}, {3,2706}, {18,2296}};
    struct S1 l_297 = {0x357AL,142,0,-386};
    int l_337 = 0x7C73EFF6L;
    unsigned l_379 = 0xA59981EEL;
    char *l_382 = (void*)0;
    char *l_383 = &g_243;
    int i;
    (*l_284) = (l_277 , func_50(l_278, l_279, (((0x0C3C7E1CL & ((*l_279) || (safe_lshift_func_int8_t_s_u((g_246[4] != (~g_122.f6)), 1)))) != (((*l_283) = (*l_279)) <= (g_122.f6 , g_107[4].f0))) , &g_95[0])));
    (*g_64) &= p_7;
    for (g_243 = 4; (g_243 >= 0); g_243 -= 1)
    {
        union U3 l_288 = {-4L};
        short l_289 = (-7L);
        const int *l_296 = &g_75;
        int l_309[8][7][2] = {{{0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}}, {{0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}}, {{0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}}, {{0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}}, {{0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}}, {{0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}}, {{0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}}, {{0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}, {0x60C89104L, 0x8023E313L}}};
        struct S1 l_312 = {65530UL,123,-0,267};
        struct S1 **l_329 = (void*)0;
        int l_356 = 1L;
        int l_360 = (-8L);
        int i, j, k;
        for (g_236 = 0; (g_236 <= 0); g_236 += 1)
        {
            const int l_317 = (-9L);
            union U3 l_320[7][2][8] = {{{{1L}, {0xA4C6A6ACL}, {0x164280C6L}, {0x164280C6L}, {0xA4C6A6ACL}, {1L}, {0x5F09CD1FL}, {0xD620FF23L}}, {{1L}, {0xA4C6A6ACL}, {0x164280C6L}, {0x164280C6L}, {0xA4C6A6ACL}, {1L}, {0x5F09CD1FL}, {0xD620FF23L}}}, {{{1L}, {0xA4C6A6ACL}, {0x164280C6L}, {0x164280C6L}, {0xA4C6A6ACL}, {1L}, {0x5F09CD1FL}, {0xD620FF23L}}, {{1L}, {0xA4C6A6ACL}, {0x164280C6L}, {0x164280C6L}, {0xA4C6A6ACL}, {1L}, {0x5F09CD1FL}, {0xD620FF23L}}}, {{{1L}, {0xA4C6A6ACL}, {0x164280C6L}, {0x164280C6L}, {0xA4C6A6ACL}, {1L}, {0x5F09CD1FL}, {0xD620FF23L}}, {{1L}, {0xA4C6A6ACL}, {0x164280C6L}, {0x164280C6L}, {0xA4C6A6ACL}, {1L}, {0x5F09CD1FL}, {0xD620FF23L}}}, {{{1L}, {0xA4C6A6ACL}, {0x164280C6L}, {0x164280C6L}, {0xA4C6A6ACL}, {1L}, {0x5F09CD1FL}, {0xD620FF23L}}, {{1L}, {0xA4C6A6ACL}, {0x164280C6L}, {0x164280C6L}, {0xA4C6A6ACL}, {1L}, {0x5F09CD1FL}, {0xD620FF23L}}}, {{{1L}, {0xA4C6A6ACL}, {0x164280C6L}, {0x164280C6L}, {0xA4C6A6ACL}, {1L}, {0x5F09CD1FL}, {0xD620FF23L}}, {{1L}, {0xA4C6A6ACL}, {0x164280C6L}, {0x164280C6L}, {0xA4C6A6ACL}, {1L}, {0x5F09CD1FL}, {0xD620FF23L}}}, {{{1L}, {0xA4C6A6ACL}, {0x164280C6L}, {0x164280C6L}, {0xA4C6A6ACL}, {1L}, {0x5F09CD1FL}, {0xD620FF23L}}, {{1L}, {0xA4C6A6ACL}, {0x164280C6L}, {0x164280C6L}, {0xA4C6A6ACL}, {1L}, {0x5F09CD1FL}, {0xD620FF23L}}}, {{{1L}, {0xA4C6A6ACL}, {0x164280C6L}, {0x164280C6L}, {0xA4C6A6ACL}, {1L}, {0x5F09CD1FL}, {0xD620FF23L}}, {{1L}, {0xA4C6A6ACL}, {0x164280C6L}, {0x164280C6L}, {0xA4C6A6ACL}, {1L}, {0x5F09CD1FL}, {0xD620FF23L}}}};
            struct S2 **l_352 = &g_137;
            struct S2 ** const *l_351 = &l_352;
            struct S1 l_363[5] = {{0x4B0AL,169,0,-47}, {0x43C9L,11,-0,381}, {0x4B0AL,169,0,-47}, {0x43C9L,11,-0,381}, {0x4B0AL,169,0,-47}};
            struct S0 l_371 = {14862,6256,65526UL,-13426,91,12545,21};
            int i, j, k;
        }
        (**l_284) = (func_34((**l_284)) , ((safe_add_func_int16_t_s_s(((void*)0 != &l_288), ((*l_283) &= (p_7 < (*l_279))))) ^ 0xE9L));
    }
    (**g_261) = func_26((l_379 && (p_5 <= ((**l_284) >= (*g_64)))), (&l_297 == (((*l_383) = (((**l_284) , 0xB6C5L) >= ((safe_add_func_uint16_t_u_u((l_277 , (*l_279)), 0UL)) <= 0x7CBDL))) , &l_297)), (**l_284), p_5);
    return (*g_64);
}







static short func_8(int p_9, struct S2 p_10, struct S2 p_11, const struct S0 p_12)
{
    short l_244 = 4L;
    int *l_256 = &g_95[0];
    for (g_36.f2 = (-13); (g_36.f2 > 30); g_36.f2 = safe_add_func_uint8_t_u_u(g_36.f2, 4))
    {
        struct S2 *l_219[8] = {(void*)0, &g_220[6][2], (void*)0, &g_220[6][2], (void*)0, &g_220[6][2], (void*)0, &g_220[6][2]};
        struct S2 *l_223[2];
        int i;
        for (i = 0; i < 2; i++)
            l_223[i] = &g_220[0][3];
        l_219[0] = &g_138;
        for (g_122.f2 = 0; (g_122.f2 >= 20); g_122.f2++)
        {
            struct S2 **l_224 = (void*)0;
            struct S2 **l_225 = &g_137;
            int l_228 = (-7L);
            unsigned short *l_233 = (void*)0;
            unsigned short *l_234 = (void*)0;
            unsigned short *l_235 = &g_129.f0;
            int *l_237 = &g_95[0];
            (*l_225) = l_223[0];
            (*l_237) &= ((g_109.f2 , ((*g_64) ^ (g_209.f0 | (g_236 &= (((*g_137) , 0x7179L) ^ ((*l_235) = (((safe_rshift_func_int8_t_s_s((l_228 |= (-1L)), ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(g_107[4].f2, p_12.f1)), g_109.f3)) , 0xC2L))) < p_10.f0) <= g_36.f4))))))) > 0x728311FFL);
        }
    }
    (*g_64) = (*g_64);
    for (g_94 = 1; (g_94 <= 6); g_94 += 1)
    {
        char *l_242 = &g_243;
        short *l_245[10][4] = {{(void*)0, &l_244, (void*)0, &l_244}, {(void*)0, &l_244, (void*)0, &l_244}, {(void*)0, &l_244, (void*)0, &l_244}, {(void*)0, &l_244, (void*)0, &l_244}, {(void*)0, &l_244, (void*)0, &l_244}, {(void*)0, &l_244, (void*)0, &l_244}, {(void*)0, &l_244, (void*)0, &l_244}, {(void*)0, &l_244, (void*)0, &l_244}, {(void*)0, &l_244, (void*)0, &l_244}, {(void*)0, &l_244, (void*)0, &l_244}};
        unsigned short *l_247 = (void*)0;
        unsigned short *l_248 = &g_209.f0;
        int *l_249 = &g_75;
        int *l_258 = &g_75;
        int i, j;
        (*l_249) &= ((g_107[4].f2 & (g_209.f1 || (safe_rshift_func_uint8_t_u_u(g_138.f0, ((((p_12.f0 & ((((*l_248) = (!(((safe_add_func_int32_t_s_s(((*g_64) & (g_107[4].f2 != ((*l_242) = p_12.f1))), ((g_36.f3 = l_244) | (g_246[1] = (&g_177 == (void*)0))))) == 0x2AF5L) , g_95[0]))) & p_12.f1) , l_244)) , p_12.f3) ^ g_122.f3) || l_244))))) <= p_12.f2);
        for (g_129.f0 = 0; (g_129.f0 <= 0); g_129.f0 += 1)
        {
            struct S0 **l_250 = &g_121;
            int l_253 = 0L;
            int **l_257 = &l_249;
            (*l_250) = (void*)0;
            (*l_257) = func_56(&g_95[0], ((*l_257) = (g_64 = func_56(func_56(func_56((((safe_rshift_func_int16_t_s_u(((-6L) & 9L), 1)) > l_253) , l_249), &g_3, (g_243 = ((safe_add_func_int8_t_s_s(0xE2L, (p_9 < ((g_209 , p_12.f4) & g_122.f3)))) && 1UL)), &g_75, &g_95[0]), l_249, l_244, &g_95[0], l_256), l_256, l_253, &g_3, &l_253))), g_216.f5, &l_253, l_258);
            return (*l_249);
        }
        if (p_10.f0)
            break;
        for (g_122.f2 = 0; (g_122.f2 <= 0); g_122.f2 += 1)
        {
            struct S1 *l_259[3];
            struct S1 l_260[8][9][3] = {{{{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}}, {{{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}}, {{{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}}, {{{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}}, {{{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}}, {{{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}}, {{{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}}, {{{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}, {{0x7ADBL,97,-0,-203}, {1UL,16,1,128}, {65529UL,150,0,23}}}};
            struct S1 ***l_263 = (void*)0;
            struct S1 ***l_264 = &g_261;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_259[i] = &g_129;
            l_260[1][4][0] = g_129;
            (*l_264) = g_261;
        }
    }
    for (p_9 = 0; (p_9 < 11); p_9 = safe_add_func_int32_t_s_s(p_9, 3))
    {
        int *l_267[10][8] = {{&g_95[0], (void*)0, &g_95[0], &g_95[0], (void*)0, &g_95[0], (void*)0, &g_95[0]}, {&g_95[0], (void*)0, &g_95[0], &g_95[0], (void*)0, &g_95[0], (void*)0, &g_95[0]}, {&g_95[0], (void*)0, &g_95[0], &g_95[0], (void*)0, &g_95[0], (void*)0, &g_95[0]}, {&g_95[0], (void*)0, &g_95[0], &g_95[0], (void*)0, &g_95[0], (void*)0, &g_95[0]}, {&g_95[0], (void*)0, &g_95[0], &g_95[0], (void*)0, &g_95[0], (void*)0, &g_95[0]}, {&g_95[0], (void*)0, &g_95[0], &g_95[0], (void*)0, &g_95[0], (void*)0, &g_95[0]}, {&g_95[0], (void*)0, &g_95[0], &g_95[0], (void*)0, &g_95[0], (void*)0, &g_95[0]}, {&g_95[0], (void*)0, &g_95[0], &g_95[0], (void*)0, &g_95[0], (void*)0, &g_95[0]}, {&g_95[0], (void*)0, &g_95[0], &g_95[0], (void*)0, &g_95[0], (void*)0, &g_95[0]}, {&g_95[0], (void*)0, &g_95[0], &g_95[0], (void*)0, &g_95[0], (void*)0, &g_95[0]}};
        int **l_268 = &l_267[6][6];
        int i, j;
        (*l_268) = l_267[6][6];
        if ((*g_64))
        {
            char l_269[7][9][4] = {{{(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}}, {{(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}}, {{(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}}, {{(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}}, {{(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}}, {{(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}}, {{(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}, {(-6L), 0xD0L, (-6L), 0xB6L}}};
            int i, j, k;
            (*l_256) |= l_269[5][8][3];
        }
        else
        {
            const int *l_271 = &g_272[1][2];
            const int **l_270 = &l_271;
            const int **l_273 = (void*)0;
            const int *l_275 = (void*)0;
            const int **l_274 = &l_275;
            unsigned char *l_276[4] = {&g_99, &g_99, &g_99, &g_99};
            int i;
            (*l_274) = ((*l_270) = ((**g_261) , l_256));
            (*l_274) = func_56(l_256, func_56(&g_95[0], &g_95[0], ((0L || (g_99 = g_36.f4)) | (*l_256)), &g_39, (*l_268)), p_12.f1, (*l_268), &g_95[0]);
        }
    }
    return (*l_256);
}







static const struct S1 func_19(short p_20, union U4 p_21, unsigned short p_22, struct S1 p_23)
{
    struct S0 *l_212 = &g_122;
    struct S0 **l_213 = &g_121;
    p_23.f2 ^= 8L;
    (*l_213) = l_212;
    return g_129;
}







static struct S1 func_26(short p_27, int p_28, unsigned p_29, char p_30)
{
    struct S0 l_204[8] = {{20323,21775,0xBC59L,-10193,-11,24516,-17}, {3057,19785,0x2790L,-22931,-249,6422,-9}, {20323,21775,0xBC59L,-10193,-11,24516,-17}, {3057,19785,0x2790L,-22931,-249,6422,-9}, {20323,21775,0xBC59L,-10193,-11,24516,-17}, {3057,19785,0x2790L,-22931,-249,6422,-9}, {20323,21775,0xBC59L,-10193,-11,24516,-17}, {3057,19785,0x2790L,-22931,-249,6422,-9}};
    unsigned short l_205 = 0UL;
    struct S0 l_207 = {-3845,9483,0x4109L,-19146,-207,28777,19};
    struct S1 *l_208[8] = {&g_129, (void*)0, &g_129, (void*)0, &g_129, (void*)0, &g_129, (void*)0};
    int i;
    if (p_29)
    {
        struct S1 l_198 = {0x9842L,47,-0,71};
        for (g_122.f2 = 0; (g_122.f2 == 50); g_122.f2 = safe_add_func_uint32_t_u_u(g_122.f2, 1))
        {
            struct S1 l_196 = {65535UL,130,-1,-164};
            struct S1 *l_197 = (void*)0;
            g_129 = l_196;
        }
        for (g_94 = 0; (g_94 <= 0); g_94 += 1)
        {
            int i;
            (*g_64) &= g_95[g_94];
            return l_198;
        }
    }
    else
    {
        unsigned char l_201 = 0x2BL;
        struct S1 l_206 = {65535UL,29,-0,-52};
        l_205 ^= ((safe_rshift_func_int8_t_s_s(l_201, p_28)) && (safe_add_func_int32_t_s_s((g_25[0][2][1] , (l_204[7] , l_204[7].f5)), l_201)));
        return l_206;
    }
    g_209 = func_31((g_109.f0 == l_204[7].f5), l_207);
    for (g_122.f2 = 0; (g_122.f2 < 31); g_122.f2 = safe_add_func_uint32_t_u_u(g_122.f2, 9))
    {
        return g_129;
    }
    return g_209;
}







static struct S1 func_31(char p_32, struct S0 p_33)
{
    int *l_38 = &g_39;
    struct S0 l_144 = {18262,17052,0xB5CEL,20747,168,11385,2};
    union U3 l_164[6][5] = {{{0x7140B01DL}, {0xD42E5D11L}, {0x7140B01DL}, {0xD42E5D11L}, {0x7140B01DL}}, {{0x7140B01DL}, {0xD42E5D11L}, {0x7140B01DL}, {0xD42E5D11L}, {0x7140B01DL}}, {{0x7140B01DL}, {0xD42E5D11L}, {0x7140B01DL}, {0xD42E5D11L}, {0x7140B01DL}}, {{0x7140B01DL}, {0xD42E5D11L}, {0x7140B01DL}, {0xD42E5D11L}, {0x7140B01DL}}, {{0x7140B01DL}, {0xD42E5D11L}, {0x7140B01DL}, {0xD42E5D11L}, {0x7140B01DL}}, {{0x7140B01DL}, {0xD42E5D11L}, {0x7140B01DL}, {0xD42E5D11L}, {0x7140B01DL}}};
    char l_167[2][1][5] = {{{0L, 1L, 0L, 1L, 0L}}, {{0L, 1L, 0L, 1L, 0L}}};
    struct S2 **l_173 = (void*)0;
    unsigned short *l_181 = &g_122.f2;
    unsigned short *l_184 = &l_144.f2;
    unsigned char *l_185 = (void*)0;
    unsigned char *l_186[10] = {&g_36.f1, &g_36.f1, &g_36.f1, &g_36.f1, &g_36.f1, &g_36.f1, &g_36.f1, &g_36.f1, &g_36.f1, &g_36.f1};
    char *l_191 = &l_167[0][0][4];
    int i, j, k;
    (*l_38) ^= 0xAD241D88L;
    for (g_36.f4 = 0; (g_36.f4 != (-11)); g_36.f4 = safe_sub_func_int16_t_s_s(g_36.f4, 6))
    {
        union U3 l_143 = {7L};
        int *l_145 = &g_75;
        union U4 l_170 = {0L};
        struct S0 l_178 = {25383,3702,0xDBABL,19079,-149,6939,5};
        if ((*l_38))
            break;
        for (p_32 = (-17); (p_32 <= 21); p_32 = safe_add_func_int32_t_s_s(p_32, 6))
        {
            union U3 l_54 = {0x60871E8EL};
            int *l_55 = &g_39;
            int **l_147 = (void*)0;
            int **l_148 = &g_64;
            unsigned *l_161 = &g_94;
            unsigned *l_162 = (void*)0;
            unsigned *l_163 = &l_143.f2;
            unsigned short *l_165[6][10] = {{&g_122.f2, &g_122.f2, &g_129.f0, &g_122.f2, &g_129.f0, (void*)0, &g_122.f2, &g_129.f0, &g_129.f0, &g_129.f0}, {&g_122.f2, &g_122.f2, &g_129.f0, &g_122.f2, &g_129.f0, (void*)0, &g_122.f2, &g_129.f0, &g_129.f0, &g_129.f0}, {&g_122.f2, &g_122.f2, &g_129.f0, &g_122.f2, &g_129.f0, (void*)0, &g_122.f2, &g_129.f0, &g_129.f0, &g_129.f0}, {&g_122.f2, &g_122.f2, &g_129.f0, &g_122.f2, &g_129.f0, (void*)0, &g_122.f2, &g_129.f0, &g_129.f0, &g_129.f0}, {&g_122.f2, &g_122.f2, &g_129.f0, &g_122.f2, &g_129.f0, (void*)0, &g_122.f2, &g_129.f0, &g_129.f0, &g_129.f0}, {&g_122.f2, &g_122.f2, &g_129.f0, &g_122.f2, &g_129.f0, (void*)0, &g_122.f2, &g_129.f0, &g_129.f0, &g_129.f0}};
            unsigned char *l_166 = &l_164[3][4].f1;
            struct S2 ***l_174[1];
            unsigned *l_175 = (void*)0;
            unsigned *l_176[5];
            int i, j;
            for (i = 0; i < 1; i++)
                l_174[i] = &l_173;
            for (i = 0; i < 5; i++)
                l_176[i] = &g_177;
            (*l_148) = (func_44(func_50(l_54, l_38, l_55), l_143, l_144, (((l_38 != l_55) > p_33.f1) ^ g_99), l_145) , l_38);
        }
    }
    p_33.f6 = (((((((safe_add_func_int16_t_s_s((((*l_181) = g_122.f5) | (safe_add_func_uint8_t_u_u(((*l_38) = (((*l_184) |= p_33.f1) , g_109.f0)), (safe_mod_func_uint8_t_u_u(255UL, ((*l_191) = (safe_lshift_func_uint8_t_u_s(p_33.f3, 4)))))))), g_107[4].f4)) > (p_33.f1 >= (safe_rshift_func_int16_t_s_u((g_122.f1 | g_129.f0), p_32)))) <= 0UL) >= p_33.f6) , g_75) || 0x179FL) >= 0x61A8L);
    return g_129;
}







static union U3 func_34(unsigned p_35)
{
    return g_36;
}







static struct S1 func_44(int * const p_45, union U3 p_46, struct S0 p_47, unsigned p_48, int * p_49)
{
    unsigned char l_146 = 7UL;
    l_146 = (p_46.f1 && p_46.f0);
    return g_129;
}







static int * const func_50(union U3 p_51, int * p_52, int * p_53)
{
    const int *l_62[7];
    int *l_63 = &g_3;
    int l_103[3];
    union U3 l_104 = {0xAF6106D1L};
    int i;
    for (i = 0; i < 7; i++)
        l_62[i] = &g_39;
    for (i = 0; i < 3; i++)
        l_103[i] = 5L;
    g_64 = func_56(&g_39, p_52, g_36.f3, l_62[0], l_63);
    for (p_51.f1 = (-6); (p_51.f1 == 35); p_51.f1 = safe_add_func_uint16_t_u_u(p_51.f1, 8))
    {
        int *l_74[3][3] = {{&g_3, &g_3, (void*)0}, {&g_3, &g_3, (void*)0}, {&g_3, &g_3, (void*)0}};
        unsigned l_119 = 0xB4C71692L;
        struct S1 l_127[6] = {{1UL,66,-1,-335}, {1UL,66,-1,-335}, {1UL,66,-1,-335}, {1UL,66,-1,-335}, {1UL,66,-1,-335}, {1UL,66,-1,-335}};
        union U3 *l_131[5][8] = {{&g_36, &l_104, &l_104, &l_104, (void*)0, (void*)0, (void*)0, &l_104}, {&g_36, &l_104, &l_104, &l_104, (void*)0, (void*)0, (void*)0, &l_104}, {&g_36, &l_104, &l_104, &l_104, (void*)0, (void*)0, (void*)0, &l_104}, {&g_36, &l_104, &l_104, &l_104, (void*)0, (void*)0, (void*)0, &l_104}, {&g_36, &l_104, &l_104, &l_104, (void*)0, (void*)0, (void*)0, &l_104}};
        union U3 **l_130 = &l_131[4][5];
        int **l_141 = &l_63;
        struct S1 *l_142 = &g_129;
        int i, j;
        for (g_39 = 6; (g_39 == (-22)); g_39 = safe_sub_func_int32_t_s_s(g_39, 1))
        {
            unsigned short l_71 = 65535UL;
            union U4 l_111[3][10][2] = {{{{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}}, {{{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}}, {{{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}, {{-10L}, {-10L}}}};
            struct S0 l_118 = {30251,13189,0x3628L,-9417,-77,10673,10};
            int **l_140 = &g_64;
            int i, j, k;
        }
        (*l_141) = (void*)0;
        (*l_142) = (g_122.f5 , l_127[1]);
    }
    return p_53;
}







static int * func_56(int * p_57, int * p_58, char p_59, const int * p_60, int * p_61)
{
    return &g_39;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_25[i][j][k].f0, "g_25[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_36.f1, "g_36.f1", print_hash_value);
    transparent_crc(g_36.f3, "g_36.f3", print_hash_value);
    transparent_crc(g_36.f4, "g_36.f4", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_107[i].f0, "g_107[i].f0", print_hash_value);
        transparent_crc(g_107[i].f1, "g_107[i].f1", print_hash_value);
        transparent_crc(g_107[i].f2, "g_107[i].f2", print_hash_value);
        transparent_crc(g_107[i].f3, "g_107[i].f3", print_hash_value);
        transparent_crc(g_107[i].f4, "g_107[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_109.f1, "g_109.f1", print_hash_value);
    transparent_crc(g_109.f2, "g_109.f2", print_hash_value);
    transparent_crc(g_109.f3, "g_109.f3", print_hash_value);
    transparent_crc(g_109.f4, "g_109.f4", print_hash_value);
    transparent_crc(g_122.f0, "g_122.f0", print_hash_value);
    transparent_crc(g_122.f1, "g_122.f1", print_hash_value);
    transparent_crc(g_122.f2, "g_122.f2", print_hash_value);
    transparent_crc(g_122.f3, "g_122.f3", print_hash_value);
    transparent_crc(g_122.f4, "g_122.f4", print_hash_value);
    transparent_crc(g_122.f5, "g_122.f5", print_hash_value);
    transparent_crc(g_122.f6, "g_122.f6", print_hash_value);
    transparent_crc(g_129.f0, "g_129.f0", print_hash_value);
    transparent_crc(g_129.f1, "g_129.f1", print_hash_value);
    transparent_crc(g_129.f2, "g_129.f2", print_hash_value);
    transparent_crc(g_129.f3, "g_129.f3", print_hash_value);
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    transparent_crc(g_138.f1, "g_138.f1", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_209.f0, "g_209.f0", print_hash_value);
    transparent_crc(g_209.f1, "g_209.f1", print_hash_value);
    transparent_crc(g_209.f2, "g_209.f2", print_hash_value);
    transparent_crc(g_209.f3, "g_209.f3", print_hash_value);
    transparent_crc(g_216.f0, "g_216.f0", print_hash_value);
    transparent_crc(g_216.f1, "g_216.f1", print_hash_value);
    transparent_crc(g_216.f2, "g_216.f2", print_hash_value);
    transparent_crc(g_216.f3, "g_216.f3", print_hash_value);
    transparent_crc(g_216.f4, "g_216.f4", print_hash_value);
    transparent_crc(g_216.f5, "g_216.f5", print_hash_value);
    transparent_crc(g_216.f6, "g_216.f6", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_220[i][j].f0, "g_220[i][j].f0", print_hash_value);
            transparent_crc(g_220[i][j].f1, "g_220[i][j].f1", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_246[i], "g_246[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_272[i][j], "g_272[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_415[i][j].f0, "g_415[i][j].f0", print_hash_value);
            transparent_crc(g_415[i][j].f1, "g_415[i][j].f1", print_hash_value);
            transparent_crc(g_415[i][j].f2, "g_415[i][j].f2", print_hash_value);
            transparent_crc(g_415[i][j].f3, "g_415[i][j].f3", print_hash_value);
            transparent_crc(g_415[i][j].f4, "g_415[i][j].f4", print_hash_value);
            transparent_crc(g_415[i][j].f5, "g_415[i][j].f5", print_hash_value);
            transparent_crc(g_415[i][j].f6, "g_415[i][j].f6", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_472.f1, "g_472.f1", print_hash_value);
    transparent_crc(g_560, "g_560", print_hash_value);
    transparent_crc(g_653, "g_653", print_hash_value);
    transparent_crc(g_670, "g_670", print_hash_value);
    transparent_crc(g_711.f1, "g_711.f1", print_hash_value);
    transparent_crc(g_746.f0, "g_746.f0", print_hash_value);
    transparent_crc(g_746.f1, "g_746.f1", print_hash_value);
    transparent_crc(g_746.f2, "g_746.f2", print_hash_value);
    transparent_crc(g_746.f3, "g_746.f3", print_hash_value);
    transparent_crc(g_746.f4, "g_746.f4", print_hash_value);
    transparent_crc(g_746.f5, "g_746.f5", print_hash_value);
    transparent_crc(g_746.f6, "g_746.f6", print_hash_value);
    transparent_crc(g_840.f0, "g_840.f0", print_hash_value);
    transparent_crc(g_854, "g_854", print_hash_value);
    transparent_crc(g_921.f0, "g_921.f0", print_hash_value);
    transparent_crc(g_928, "g_928", print_hash_value);
    transparent_crc(g_952.f0, "g_952.f0", print_hash_value);
    transparent_crc(g_952.f1, "g_952.f1", print_hash_value);
    transparent_crc(g_965.f0, "g_965.f0", print_hash_value);
    transparent_crc(g_973.f0, "g_973.f0", print_hash_value);
    transparent_crc(g_973.f1, "g_973.f1", print_hash_value);
    transparent_crc(g_1274, "g_1274", print_hash_value);
    transparent_crc(g_1278, "g_1278", print_hash_value);
    transparent_crc(g_1312.f0, "g_1312.f0", print_hash_value);
    transparent_crc(g_1312.f1, "g_1312.f1", print_hash_value);
    transparent_crc(g_1312.f2, "g_1312.f2", print_hash_value);
    transparent_crc(g_1312.f3, "g_1312.f3", print_hash_value);
    transparent_crc(g_1333, "g_1333", print_hash_value);
    transparent_crc(g_1343.f0, "g_1343.f0", print_hash_value);
    transparent_crc(g_1343.f1, "g_1343.f1", print_hash_value);
    transparent_crc(g_1343.f2, "g_1343.f2", print_hash_value);
    transparent_crc(g_1343.f3, "g_1343.f3", print_hash_value);
    transparent_crc(g_1343.f4, "g_1343.f4", print_hash_value);
    transparent_crc(g_1343.f5, "g_1343.f5", print_hash_value);
    transparent_crc(g_1343.f6, "g_1343.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
