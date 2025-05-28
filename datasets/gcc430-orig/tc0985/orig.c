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
   signed f0 : 23;
   long long f1;
   long long f2;
   int f3;
   long long f4;
   short f5;
   unsigned f6;
   int f7;
};

struct S1 {
   long long f0;
   signed f1 : 9;
   signed f2 : 15;
   signed : 0;
   unsigned f3 : 3;
   unsigned f4 : 1;
   unsigned f5 : 24;
   signed f6 : 23;
   struct S0 f7;
   signed f8 : 14;
};

struct S2 {
   int f0;
   int f1;
   short f2;
   struct S0 f3;
   struct S1 f4;
   unsigned long long f5;
   unsigned short f6;
   struct S1 f7;
   char f8;
   unsigned char f9;
};

struct S3 {
   struct S0 f0;
   char f1;
   unsigned char f2;
   char f3;
   unsigned long long f4;
   int f5;
};

struct S4 {
   short f0;
   long long f1;
   int f2;
   unsigned long long f3;
   unsigned short f4;
   unsigned f5;
   unsigned short f6;
   struct S0 f7;
   struct S3 f8;
};

struct S5 {
   signed f0 : 6;
   unsigned f1 : 21;
   unsigned f2 : 14;
   unsigned f3 : 9;
};

struct S6 {
   unsigned char f0;
   short f1;
   struct S3 f2;
   unsigned long long f3;
   unsigned f4 : 14;
   unsigned short f5;
   unsigned char f6;
};

struct S7 {
   signed f0 : 17;
   signed f1 : 2;
   unsigned f2 : 26;
   unsigned f3 : 17;
   signed f4 : 16;
   signed f5 : 1;
   unsigned f6 : 29;
};


static struct S2 g_4 = {3L,0L,0xF82EL,{-1053,0xAD19DDA5C12BBF3ALL,0x71E1D77F595C9828LL,0x5DA0DE90L,0L,0xA64BL,18446744073709551609UL,0x9FB917DEL},{6L,7,-167,0,0,2394,1382,{1051,-4L,1L,-1L,0x53AF4B502D48012CLL,9L,0UL,0x9074591FL},72},1UL,65532UL,{1L,-14,-126,0,0,2342,-54,{-1468,0L,0x474A89AEEB1CB69ALL,1L,0x36F303358B4D4649LL,0x492EL,18446744073709551615UL,0x88CDAF70L},76},0xB7L,0xBAL};
static int g_50 = (-1L);
static struct S4 g_60 = {0x81F4L,0x0EF0FED554AE0E0ELL,0x8EEBD4AFL,0xE21FB04089B8EC4CLL,0x8FC3L,4294967295UL,0x4A59L,{-810,-8L,-6L,0xCBC52F4FL,1L,0xEA9CL,0x02FEDD84L,0xF73C2BB4L},{{158,-1L,6L,6L,-1L,0L,0xBA376BEBL,0x0B67F160L},0xE6L,0UL,0xA3L,9UL,-1L}};
static unsigned short g_140 = 1UL;
static struct S7 g_243 = {48,-0,7382,307,-145,0,5786};
static struct S6 g_246 = {0x96L,-4L,{{-392,0x03A72A4CA9FEE52BLL,0x2FA91569356AF1BCLL,7L,-3L,0xD514L,0xC7EA0BBCL,0x6B0B2A73L},5L,248UL,0x60L,1UL,0xB89B73FFL},18446744073709551609UL,112,0x20F8L,252UL};
static unsigned g_247 = 0x8573C973L;
static struct S7 g_356 = {224,-1,2791,295,168,0,412};
static struct S3 g_371 = {{2393,-1L,-3L,0x023D9A0AL,0xF905A4D73D48CBA1LL,-10L,3UL,-6L},9L,247UL,0x08L,0UL,1L};
static unsigned long long g_406 = 0UL;
static struct S5 g_412 = {4,949,34,14};



static long long func_1(void);
static short func_2(struct S2 p_3);
static long long func_7(struct S0 p_8, unsigned long long p_9, unsigned p_10, struct S5 p_11, struct S5 p_12);
static struct S5 func_18(long long p_19, char p_20, struct S0 p_21, unsigned short p_22, struct S3 p_23);
static char func_27(char p_28, struct S0 p_29, unsigned char p_30, int p_31);
static unsigned char func_32(unsigned long long p_33, short p_34, struct S7 p_35);
static struct S3 func_40(struct S7 p_41, long long p_42);
static struct S7 func_43(char p_44, int p_45, unsigned long long p_46, struct S7 p_47);
static unsigned long long func_51(short p_52);
static long long func_55(struct S4 p_56, struct S3 p_57, struct S6 p_58, unsigned p_59);
static long long func_1(void)
{
    unsigned short l_410 = 3UL;
    int l_411 = 0L;
    struct S5 l_413 = {-0,215,69,14};
    unsigned long long l_414 = 9UL;
    l_411 ^= (0x6AL == (func_2(g_4) == l_410));
    l_413 = g_412;
    return l_414;
}







static short func_2(struct S2 p_3)
{
    char l_13 = 0x2FL;
    int l_14 = 1L;
    int l_15 = 0x15B29D1CL;
    unsigned char l_26 = 1UL;
    struct S7 l_36 = {-198,-0,124,131,131,-0,8298};
    struct S0 l_282 = {1785,0xC1CB09CEF9D7A78DLL,0L,0x798721C4L,9L,-2L,5UL,0x54C83407L};
    struct S5 l_375 = {5,58,40,21};
    unsigned long long l_409 = 1UL;
    l_36.f5 = (safe_sub_func_int64_t_s_s((l_409 = func_7(g_4.f7.f7, (p_3.f5 ^= g_4.f0), (p_3.f7.f7.f6++), func_18((p_3.f7.f7.f5 <= (((l_15 &= (g_4.f5++)) <= (((p_3.f9 = (l_26 != (g_4.f8 &= g_4.f6))) | g_4.f4.f7.f7) & func_27((l_13 || func_32(g_4.f4.f8, g_4.f4.f7.f2, l_36)), l_282, g_4.f7.f7.f7, p_3.f7.f7.f1))) >= g_4.f4.f0)), l_14, g_4.f7.f7, g_4.f7.f7.f6, g_371), l_375)), p_3.f7.f3));
    return p_3.f3.f0;
}







static long long func_7(struct S0 p_8, unsigned long long p_9, unsigned p_10, struct S5 p_11, struct S5 p_12)
{
    char l_376 = 0L;
    int l_377 = 0xD72058ABL;
    int l_378 = 1L;
    int l_379 = 1L;
    int l_380 = 0x1385020EL;
    int l_381 = 0x482497A1L;
    int l_382 = 0x5DDA45B8L;
    int l_383 = 1L;
    int l_384 = (-2L);
    int l_385 = 0L;
    int l_386 = 0L;
    int l_387 = 3L;
    int l_388 = 0xA921F75FL;
    int l_389 = (-1L);
    int l_390 = 2L;
    int l_391 = 0x9F9608B3L;
    int l_392 = 0xB7345902L;
    int l_393 = 0x8CEF07CAL;
    int l_394 = (-1L);
    int l_395 = 3L;
    int l_396 = 8L;
    int l_397 = 0xBB39B35BL;
    int l_398 = 5L;
    int l_399 = 1L;
    int l_400 = (-9L);
    int l_401 = 0L;
    int l_402 = 0x221DE0BDL;
    int l_403 = 0xB47B4495L;
    int l_404 = 0x5FEBB549L;
    int l_405 = 6L;
    ++g_406;
    return g_60.f8.f0.f5;
}







static struct S5 func_18(long long p_19, char p_20, struct S0 p_21, unsigned short p_22, struct S3 p_23)
{
    struct S5 l_374 = {-7,1029,104,11};
    p_23.f0.f3 = (safe_mod_func_int64_t_s_s(g_4.f4.f7.f1, 0x0D6CBC7449050463LL));
    return l_374;
}







static char func_27(char p_28, struct S0 p_29, unsigned char p_30, int p_31)
{
    struct S6 l_292 = {1UL,1L,{{1058,0x26C500E391393D2ELL,-6L,-8L,0x0B213FFA74B3791BLL,-7L,0UL,-2L},0xC2L,1UL,-1L,0x5911A96F8BF46B10LL,0x98EC8423L},18446744073709551614UL,110,0x5921L,0xB3L};
    struct S7 l_318 = {143,1,3723,62,211,-0,8272};
    struct S2 l_331 = {1L,0xB7F981A2L,0L,{2187,0L,0x1F5DA3438944EB55LL,0L,0x9BAE57EAD49E1084LL,0xB51AL,0x4C389B4AL,-1L},{1L,-12,124,0,0,3382,2812,{-2497,5L,0x04DC9B6320923F44LL,0x6D35B93DL,0x6BEC812A10FA99D5LL,0x3954L,4UL,1L},56},0x4344B854C065146DLL,65535UL,{0xC47F10029BC178DCLL,20,-180,0,0,4016,1551,{-2332,0x3B991E16E8A55629LL,0x86859177D3097D25LL,1L,0x759D2FA7DD2C73BBLL,5L,0xC3E78EBCL,-10L},110},-1L,0x36L};
    char l_361 = 0x3BL;
    int l_370 = 0L;
    if (func_32(p_28, (p_29.f5 = func_51(p_29.f4)), g_243))
    {
        short l_291 = 0xCCE2L;
        g_60.f7.f3 = g_246.f2.f0.f3;
        for (g_4.f4.f7.f1 = 26; (g_4.f4.f7.f1 >= 24); g_4.f4.f7.f1 = safe_sub_func_int8_t_s_s(g_4.f4.f7.f1, 9))
        {
            for (g_60.f8.f3 = 19; (g_60.f8.f3 == 3); g_60.f8.f3 = safe_sub_func_uint8_t_u_u(g_60.f8.f3, 9))
            {
                return g_4.f3.f7;
            }
            p_29.f0 ^= (p_31 = p_29.f5);
            g_246.f2.f5 = ((safe_mod_func_uint32_t_u_u(((((g_4.f7.f0 > (g_243.f4 = g_4.f7.f4)) || ((g_4.f7.f7.f1 || (0x96L ^ (safe_mod_func_int8_t_s_s((g_4.f4.f7.f4 < l_291), l_291)))) > func_55(g_60, g_246.f2, l_292, g_4.f7.f7.f2))) & 1L) & 0xC949949FL), p_28)) >= 0xA4L);
        }
    }
    else
    {
        unsigned l_293 = 18446744073709551611UL;
        int l_304 = 4L;
        unsigned short l_314 = 0x056EL;
        short l_315 = (-5L);
        unsigned short l_349 = 65535UL;
        l_293 ^= ((1UL && p_29.f4) > p_29.f0);
        if (p_29.f0)
        {
            unsigned l_317 = 18446744073709551614UL;
            unsigned long long l_348 = 1UL;
            for (g_140 = 0; (g_140 < 16); g_140++)
            {
                int l_305 = (-1L);
                struct S7 l_319 = {331,0,1363,196,249,-0,13493};
                struct S6 l_322 = {0x60L,0xB4C8L,{{231,0x81121B054E2E740DLL,0xFB32D9CD3963641DLL,0L,4L,0L,0x3DDD8454L,0xA5F1A5C1L},6L,254UL,0x57L,18446744073709551610UL,1L},18446744073709551611UL,35,0x0819L,3UL};
                short l_333 = 0xF953L;
                if (((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(p_29.f5, (g_4.f4.f0 == 0UL))), (((l_292.f2.f4 || g_60.f7.f3) >= (((p_29.f6 <= (safe_add_func_int16_t_s_s(g_4.f7.f8, (safe_sub_func_uint16_t_u_u(l_293, (l_304 = 1L)))))) & 0xEB1103292EA3299FLL) == g_4.f3.f1)) && g_4.f3.f7))) <= l_305))
                {
                    long long l_316 = 0x2422B1043792A235LL;
                    l_317 = ((safe_add_func_uint8_t_u_u(255UL, (safe_sub_func_uint16_t_u_u(g_4.f3.f5, l_292.f2.f4)))) || (65527UL < (((p_29.f5 < (p_29.f7 || (safe_sub_func_uint8_t_u_u(0xD8L, ((g_243.f6 ^ ((((((((safe_mod_func_uint64_t_u_u(p_28, l_305)) < 0x0C0EBA14L) & 0x6AAEL) <= g_246.f2.f1) || p_29.f1) || 1L) != l_314) && l_315)) | 0x28AAB49186F91189LL))))) < l_305) < l_316)));
                    if (g_246.f2.f0.f7)
                    {
                        p_29.f3 = (g_4.f7.f7.f3 >= (+0xB7L));
                        l_319 = l_318;
                        g_243.f1 = (safe_lshift_func_int8_t_s_s((g_60.f1 < p_29.f5), g_4.f3.f3));
                    }
                    else
                    {
                        l_322 = l_292;
                    }
                    g_60.f8.f0.f0 = ((l_322.f2.f0.f0 = (safe_mod_func_int16_t_s_s(l_292.f0, p_29.f7))) < g_4.f7.f5);
                    if (l_319.f4)
                        continue;
                }
                else
                {
                    long long l_332 = (-7L);
                    for (g_60.f8.f0.f6 = 0; (g_60.f8.f0.f6 > 52); g_60.f8.f0.f6 = safe_add_func_int32_t_s_s(g_60.f8.f0.f6, 2))
                    {
                        g_243.f0 |= p_29.f6;
                        p_31 &= (p_29.f3 = (safe_lshift_func_uint8_t_u_u(0x5BL, (safe_rshift_func_int16_t_s_u((p_29.f5 = l_319.f2), 11)))));
                        g_4.f7.f8 |= g_243.f0;
                        l_331 = l_331;
                    }
                    l_331.f7.f7.f0 = (0x63FCDE4904C255B8LL == g_60.f7.f0);
                    l_332 = 0L;
                }
                if (g_243.f0)
                {
                    p_29.f0 = (g_4.f3.f3 = (l_333 || p_31));
                }
                else
                {
                    short l_342 = 0x42CDL;
                    int l_343 = 0x1B822580L;
                    g_60.f8.f0.f0 = (((safe_lshift_func_int16_t_s_s((p_29.f7 < (((l_317 < (l_322.f2.f0.f0 = (safe_lshift_func_int8_t_s_s((255UL || g_50), 0)))) >= ((safe_rshift_func_uint8_t_u_s(l_322.f4, 0)) | (safe_lshift_func_uint16_t_u_u((++g_60.f6), (safe_rshift_func_int16_t_s_s(((((!4294967289UL) >= l_348) ^ (l_343 != (g_60.f8.f0.f0 < l_331.f7.f6))) > l_317), p_29.f1)))))) != l_315)), g_60.f0)) ^ 4294967289UL) >= 0xD1BB3784L);
                    l_331.f7.f2 = p_30;
                    p_29.f3 ^= 0x0B430270L;
                }
                return p_29.f6;
            }
        }
        else
        {
            l_349 = g_4.f2;
            g_4.f4.f8 = g_4.f7.f6;
            g_243.f5 ^= g_60.f2;
        }
        g_243.f1 = ((~8UL) >= ((safe_add_func_int16_t_s_s((+((safe_mod_func_uint64_t_u_u(p_29.f6, (safe_rshift_func_int16_t_s_u((g_4.f4.f7.f5 = (7UL <= (g_246.f5 ^= 65535UL))), (((g_140 != 0x37F8357A27F65099LL) < l_331.f7.f7.f4) == p_29.f4))))) != g_243.f3)), p_29.f4)) < g_4.f7.f7.f2));
        g_356 = (g_243 = g_243);
    }
    l_331.f4.f6 = (p_29.f0 != ((safe_rshift_func_int8_t_s_u((l_361 != (safe_add_func_int8_t_s_s(g_246.f3, (safe_add_func_int16_t_s_s(l_331.f4.f7.f2, ((+p_29.f0) > ((safe_lshift_func_int16_t_s_s((g_60.f7.f5 = (!p_29.f4)), 9)) <= (safe_add_func_uint16_t_u_u(0x36CBL, (0UL & g_247)))))))))), 5)) < l_370));
    g_246.f2.f5 = g_60.f7.f2;
    return g_60.f7.f3;
}







static unsigned char func_32(unsigned long long p_33, short p_34, struct S7 p_35)
{
    unsigned long long l_37 = 0x29C85ED08B280BBFLL;
    struct S3 l_61 = {{863,0x23E8BC30B2D570D0LL,8L,1L,0x54B2A351025D35F0LL,0xBF23L,0x60E939A0L,2L},-6L,0x80L,1L,7UL,0xDCC66179L};
    struct S6 l_62 = {0xAEL,0L,{{-411,-1L,1L,3L,0L,4L,0xAE12ECCDL,0x4288B945L},-1L,249UL,0L,0x97DAF00FA5D7BF6CLL,3L},0xF659E5E0E0025C80LL,74,0xDA36L,0x39L};
    int l_63 = 0x3E8E4380L;
    int l_64 = (-1L);
    int l_65 = 0xE016D721L;
    struct S4 l_279 = {0L,0xAAA3BC4FCEBD9461LL,3L,0x4F330B358B7AB02CLL,0x89C1L,4294967293UL,0x9B3AL,{-477,0xB1783EBF67186DB6LL,0x192658B9C771077CLL,0xF8EB9621L,-4L,0x752BL,18446744073709551615UL,-9L},{{-2700,0x20026B508783C2FELL,0x9FCE088BCF91D977LL,0L,8L,-1L,18446744073709551615UL,0x5AFABD3AL},-1L,7UL,0x0BL,18446744073709551615UL,-1L}};
    l_37--;
    l_62.f2 = func_40(func_43(p_35.f6, ((((l_37 >= ((safe_lshift_func_int8_t_s_s((g_50 = g_4.f7.f7.f3), ((func_51((((safe_sub_func_int64_t_s_s(func_55(g_60, l_61, l_62, (g_60.f8.f0.f2 <= ((p_33 >= (((++g_4.f9) | ((g_60.f8.f0.f0 & 0xEE978827L) ^ g_4.f4.f7.f4)) || (-7L))) < l_62.f0))), l_62.f2.f0.f2)) ^ p_34) >= 4UL)) != l_62.f2.f2) == p_34))) && 1L)) & p_33) <= g_4.f3.f0) == 0xBD44L), g_60.f7.f1, g_243), p_35.f0);
    p_35.f5 = (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(p_35.f3, (((-3L) & (p_35.f1 = func_55(l_279, g_246.f2, g_246, g_247))) ^ (((~(l_61.f5 = ((++g_60.f5) & (1UL || 65535UL)))) > l_61.f2) == 0UL)))), (-1L)));
    return l_279.f7.f2;
}







static struct S3 func_40(struct S7 p_41, long long p_42)
{
    struct S4 l_245 = {0xF447L,0x808844ED671C620FLL,-1L,0xC1447DE0C22A592DLL,1UL,4294967289UL,1UL,{2223,0xE3EB1A200B15A4E9LL,-1L,0x7B932794L,-1L,0x405DL,0UL,-8L},{{309,4L,0L,0L,-3L,0x7593L,1UL,0L},-7L,7UL,6L,0x563C6E428A78684ALL,5L}};
    unsigned char l_255 = 0UL;
    l_245.f7.f0 = ((~p_41.f2) & func_55(l_245, g_60.f8, g_246, g_60.f7.f7));
lbl_264:
    if ((1UL < (p_41.f3 = (g_60.f5 &= (--g_247)))))
    {
        unsigned long long l_250 = 0xEC14B60E864AA925LL;
        g_60 = g_60;
        l_250++;
        p_41.f0 ^= l_250;
        for (l_245.f8.f0.f3 = 0; (l_245.f8.f0.f3 > 29); l_245.f8.f0.f3 = safe_add_func_int16_t_s_s(l_245.f8.f0.f3, 7))
        {
            char l_256 = 0x4BL;
            l_245.f7.f0 = g_60.f8.f0.f6;
            l_256 &= l_255;
            if (l_245.f7.f2)
                goto lbl_264;
            p_41.f0 = (l_256 >= l_250);
            if (l_250)
                continue;
        }
    }
    else
    {
        short l_261 = 0x850BL;
        g_4.f4.f2 ^= (((safe_mod_func_uint16_t_u_u(0xAF45L, p_41.f2)) < (((safe_add_func_uint32_t_u_u(g_4.f4.f7.f2, l_261)) ^ ((safe_lshift_func_int8_t_s_s(g_246.f2.f0.f3, (((g_246.f6 < 0UL) >= (9L < (0x11L | g_246.f2.f5))) && p_41.f1))) || l_245.f7.f6)) && l_261)) < 0xE2D91A25C3D7BF49LL);
    }
    g_4.f4.f7.f0 = ((p_41.f5 = (((((safe_sub_func_uint8_t_u_u(g_4.f4.f0, 254UL)) <= (l_245.f7.f0 = (l_245.f8.f0.f7 & (((safe_sub_func_uint64_t_u_u((--g_246.f2.f4), (p_41.f5 && p_41.f2))) ^ 0L) || (l_245.f7.f5 > (((safe_sub_func_int64_t_s_s((l_245.f8.f0.f0 = (safe_mod_func_int32_t_s_s(p_41.f3, (l_245.f8.f0.f3 |= 0x83A9C4ACL)))), p_41.f6)) != p_41.f1) ^ g_60.f8.f0.f2)))))) & l_245.f8.f0.f6) || g_243.f1) || g_4.f4.f7.f3)) | l_245.f8.f2);
    return l_245.f8;
}







static struct S7 func_43(char p_44, int p_45, unsigned long long p_46, struct S7 p_47)
{
    unsigned long long l_244 = 9UL;
    l_244 &= g_60.f2;
    g_4.f7.f8 = l_244;
    g_243 = g_243;
    return p_47;
}







static unsigned long long func_51(short p_52)
{
    unsigned char l_203 = 9UL;
    int l_213 = 0x3A74ED63L;
    int l_216 = 0x2017B476L;
    int l_227 = 0x98DB1958L;
    struct S4 l_242 = {0xE664L,-8L,1L,0xAADD4B255D955E4CLL,7UL,4294967293UL,65534UL,{2613,0xA8F517381DB2D725LL,7L,0x5AC69248L,0x38E8C082B84FBE84LL,0x8F58L,0UL,0xE8E080FCL},{{-2569,-10L,0x2B35090CE9071DC1LL,0L,5L,0x8234L,1UL,0xE3A5FBB4L},0xE9L,5UL,0L,0UL,0x75D46DE8L}};
    if ((g_4.f7.f7.f0 & (p_52 < (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_52, (l_203 &= 0x15DC8556L))), 2)))))
    {
        unsigned short l_212 = 3UL;
        int l_214 = 9L;
        unsigned short l_215 = 0xD6CDL;
        int l_220 = 0L;
        int l_225 = 0x9EBD027CL;
        int l_226 = 6L;
        g_4.f4.f8 = ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((l_225 = (+(safe_sub_func_int64_t_s_s(l_203, ((safe_mod_func_int32_t_s_s((((l_213 = (l_212 |= g_4.f4.f8)) & (l_214 |= g_4.f3.f3)) < ((!((l_215 == (l_216 = 0x52L)) == (safe_add_func_int32_t_s_s((l_220 = (safe_unary_minus_func_uint64_t_u(0x46F2C7330148BE70LL))), (!(p_52 ^ (((safe_add_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u(((g_4.f4.f7.f6 < ((g_60.f3--) ^ (l_225 | 1UL))) ^ 0x61F9E83C6F224F14LL), p_52)) && p_52), p_52)) || (-4L)) <= 0x7159C8B2L))))))) | g_60.f1)), p_52)) | g_4.f3.f5))))), g_60.f8.f0.f4)), 2)) != 0x69803BF5L);
    }
    else
    {
        char l_230 = 0x38L;
        unsigned long long l_237 = 8UL;
        struct S4 l_241 = {3L,0L,-1L,5UL,6UL,4294967295UL,0x2D1EL,{2609,0x3C80E120C080BE2ELL,0x52AD83A83BA71E10LL,0xFF702341L,8L,0L,18446744073709551615UL,0xA62C5C95L},{{-409,-5L,0x9257564A77C6F405LL,0xF7ED1508L,2L,-9L,5UL,0xAED017DDL},0xCDL,0x50L,-1L,4UL,-3L}};
        if (l_230)
        {
            int l_231 = 0xD4D2CE40L;
            struct S6 l_240 = {7UL,0x080EL,{{2076,-1L,0xEED7DAFB3F48BA52LL,0x3D42AAD9L,-1L,9L,0xBEF5B7D9L,0x049911BFL},1L,0x62L,-5L,0xA074DE6321C4B42CLL,1L},0UL,45,0x0BDDL,247UL};
            if (p_52)
            {
                l_231 = g_4.f4.f7.f0;
            }
            else
            {
                unsigned char l_232 = 0x84L;
                l_232--;
                for (g_4.f3.f6 = 15; (g_4.f3.f6 != 45); g_4.f3.f6 = safe_add_func_uint8_t_u_u(g_4.f3.f6, 7))
                {
                    l_237++;
                    if (g_4.f7.f7.f1)
                        break;
                    l_240.f2.f0.f0 = func_55(g_60, g_60.f8, l_240, l_232);
                }
            }
            return l_203;
        }
        else
        {
            l_242 = l_241;
        }
    }
    return p_52;
}







static long long func_55(struct S4 p_56, struct S3 p_57, struct S6 p_58, unsigned p_59)
{
    long long l_76 = 0x05CF3AA05D0EB531LL;
    int l_81 = 7L;
    long long l_113 = 0x85CEBB0EE1BF02F1LL;
    int l_168 = 0xCE20F7BBL;
    int l_169 = 0xBFCF653BL;
    unsigned char l_173 = 0x08L;
    long long l_198 = 0x1E3BC39473A45275LL;
lbl_193:
    if ((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(p_58.f2.f0.f4, 1)) != ((safe_sub_func_int16_t_s_s(l_76, (safe_sub_func_int32_t_s_s(g_60.f8.f0.f2, (safe_lshift_func_uint8_t_u_s(l_76, 7)))))) | (+((l_81 = g_4.f4.f5) == (safe_mod_func_uint32_t_u_u(0UL, g_60.f8.f0.f7)))))), (g_60.f4 = (safe_mod_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((safe_add_func_uint16_t_u_u((0x4DL >= (g_4.f3.f4 > 255UL)), p_58.f2.f0.f3)) <= (-1L)), p_58.f5)), g_4.f4.f7.f1))))), p_57.f4)))
    {
        struct S1 l_90 = {1L,-21,164,0,0,1907,212,{1347,0xC2A84051932FCE17LL,0xAE4FF3832A488D4BLL,1L,0x0AABE5D2F0E14FAFLL,-8L,18446744073709551607UL,0xBEC7A0F7L},66};
        l_90 = l_90;
        for (p_56.f8.f4 = (-21); (p_56.f8.f4 > 36); p_56.f8.f4 = safe_add_func_uint32_t_u_u(p_56.f8.f4, 1))
        {
            unsigned char l_95 = 0x50L;
            for (g_4.f4.f7.f5 = 19; (g_4.f4.f7.f5 > 5); g_4.f4.f7.f5 = safe_sub_func_int32_t_s_s(g_4.f4.f7.f5, 2))
            {
                p_56.f8.f5 ^= (l_95 = 0L);
                if (g_4.f3.f7)
                    break;
                l_81 = ((safe_lshift_func_uint16_t_u_u(0UL, 4)) <= g_60.f8.f3);
                g_60.f8 = p_57;
            }
        }
    }
    else
    {
        unsigned short l_98 = 0xBCDFL;
        unsigned l_101 = 0x3495F283L;
        int l_128 = 0xB1E10E5CL;
        int l_132 = 0x36CBC2DCL;
        int l_138 = 1L;
        int l_139 = (-2L);
        long long l_145 = 0x5C318BE8490D8DB8LL;
        unsigned char l_176 = 5UL;
        unsigned char l_187 = 2UL;
lbl_112:
        g_4.f4.f8 |= (0L ^ (((l_98 = (0xF38617D44FB6F4A1LL == (-4L))) || ((g_4.f4.f2 != g_4.f3.f1) != (safe_add_func_int16_t_s_s((p_56.f8.f0.f5 &= l_101), p_56.f3)))) >= (safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((g_4.f4.f7.f0 > (safe_rshift_func_int8_t_s_u(p_59, l_76))), g_60.f7.f2)) > g_4.f9), 8)), 7UL))));
        for (g_60.f2 = 0; (g_60.f2 != (-17)); --g_60.f2)
        {
            if (p_56.f8.f4)
                goto lbl_112;
            l_113 &= ((l_76 ^ l_76) <= p_57.f0.f0);
            p_57.f5 = (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int16_t_s(l_98)), 5)), 13));
        }
        for (g_60.f8.f0.f6 = (-10); (g_60.f8.f0.f6 == 10); g_60.f8.f0.f6 = safe_add_func_int16_t_s_s(g_60.f8.f0.f6, 1))
        {
            char l_127 = 0x76L;
            int l_129 = 5L;
            int l_130 = 0L;
            int l_135 = 0xACAF8924L;
            int l_136 = 0x8420658BL;
            long long l_186 = 0x8B8726DD1063FD6FLL;
            if (g_60.f8.f3)
            {
                int l_125 = 0x94EAE741L;
                int l_133 = 2L;
                int l_134 = (-6L);
                int l_137 = (-1L);
                struct S1 l_146 = {0x35AD9687AAEBE991LL,-13,171,1,0,3511,-2686,{1641,0x3293A444A4A0D9F4LL,-3L,-1L,-1L,0xFD70L,0xBB61F359L,0x1E093644L},78};
                if ((p_56.f8.f2 > g_60.f8.f0.f3))
                {
                    int l_126 = 0xC680A16CL;
                    int l_131 = 0x09A12A58L;
                    g_4.f3.f3 = (safe_lshift_func_uint8_t_u_u(l_98, (g_4.f4.f7.f0 | (safe_add_func_int32_t_s_s(0x25BD6D65L, p_58.f6)))));
                    if (p_58.f1)
                        continue;
                    g_60.f7.f0 = (l_125 > 7L);
                    --g_140;
                }
                else
                {
                    long long l_147 = (-1L);
                    int l_148 = 0x252BB693L;
                    p_58.f2.f0.f0 ^= 0xE434C999L;
                    if (((safe_mod_func_int64_t_s_s((l_128 &= p_56.f8.f1), (p_56.f8.f4 ^= (p_58.f3 = ((g_60.f7.f4 & (g_60.f8.f0.f0 >= (p_56.f0 = l_145))) | g_4.f4.f7.f4))))) > (g_60.f8.f0.f7 < (p_59 = l_127))))
                    {
                        l_146 = g_4.f4;
                        if (g_4.f7.f7.f4)
                            continue;
                    }
                    else
                    {
                        unsigned l_149 = 1UL;
                        l_149++;
                        if (l_146.f7.f2)
                            continue;
                        p_56.f8.f5 = (p_58.f2.f2 <= (-1L));
                    }
                }
                if (l_146.f6)
                {
                    char l_158 = 0xC7L;
                    int l_162 = 0x5CB2F493L;
                    int l_171 = 0xDB035E90L;
                    int l_172 = 0x1C6AD089L;
                    for (g_60.f7.f3 = (-2); (g_60.f7.f3 > 5); ++g_60.f7.f3)
                    {
                        l_146.f7.f0 ^= (g_60.f7.f0 = (safe_lshift_func_uint8_t_u_u((p_58.f2.f2 &= g_4.f3.f6), 0)));
                        if (l_146.f7.f2)
                            continue;
                        if (l_113)
                            continue;
                    }
                    g_4.f4.f7.f0 = p_58.f2.f0.f6;
                    if ((l_135 && ((safe_lshift_func_uint16_t_u_s(g_60.f8.f0.f6, l_81)) > (p_58.f2.f0.f5 = p_58.f2.f0.f6))))
                    {
                        unsigned short l_159 = 1UL;
                        unsigned l_163 = 4UL;
                        int l_166 = (-1L);
                        int l_167 = 0x57407D18L;
                        int l_170 = 0x42DE6B32L;
                        g_4.f4.f8 |= l_113;
                        --l_159;
                        l_163++;
                        l_173--;
                    }
                    else
                    {
                        l_176++;
                    }
                    for (g_60.f8.f5 = 0; (g_60.f8.f5 < 26); ++g_60.f8.f5)
                    {
                        if (l_101)
                            break;
                        g_60.f8.f0.f3 ^= (4294967289UL != p_57.f0.f6);
                    }
                }
                else
                {
                    char l_181 = 0x41L;
                    p_58.f2.f0.f3 = (g_4.f4.f7.f0 = (((l_129 = g_60.f7.f2) && g_4.f7.f7.f1) <= ((l_181 <= (((g_60.f3 == ((safe_add_func_int32_t_s_s(p_58.f2.f1, g_4.f4.f7.f6)) <= (g_60.f7.f5 >= (l_130 || (g_60.f6 &= p_58.f5))))) && g_60.f7.f4) && 0xA9F08BEB24755AEBLL)) != 0x9AA8C128384AC0C7LL)));
                    ++l_187;
                    if (p_56.f7.f3)
                        continue;
                }
            }
            else
            {
                for (p_56.f8.f4 = 11; (p_56.f8.f4 < 47); p_56.f8.f4 = safe_add_func_uint32_t_u_u(p_56.f8.f4, 5))
                {
                    struct S6 l_192 = {0xD6L,0x176CL,{{-1931,0L,0x20DD8B0E59E16A0ELL,0x9279D70BL,1L,0xC633L,0x962B1F8AL,0xE35A3C05L},0xC2L,7UL,-1L,1UL,0x1CCEF30CL},0x72F35EB201C3AF00LL,82,0xF9A6L,1UL};
                    l_192 = p_58;
                }
                if (p_56.f3)
                    goto lbl_193;
            }
        }
    }
    g_60.f8.f5 ^= (l_169 = (p_57.f0.f0 &= (l_198 = (((p_58.f2.f0.f5 == p_57.f0.f3) && (l_81 = ((((g_4.f3.f4 == ((((safe_sub_func_int8_t_s_s(g_4.f4.f8, p_58.f2.f1)) > l_169) || g_4.f6) >= ((safe_rshift_func_int8_t_s_s(p_56.f8.f0.f1, (p_57.f1 && p_58.f1))) & 3UL))) && 255UL) ^ l_76) && g_4.f7.f7.f5))) >= g_4.f7.f7.f7))));
    return p_56.f1;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
    transparent_crc(g_4.f1, "g_4.f1", print_hash_value);
    transparent_crc(g_4.f2, "g_4.f2", print_hash_value);
    transparent_crc(g_4.f3.f0, "g_4.f3.f0", print_hash_value);
    transparent_crc(g_4.f3.f1, "g_4.f3.f1", print_hash_value);
    transparent_crc(g_4.f3.f2, "g_4.f3.f2", print_hash_value);
    transparent_crc(g_4.f3.f3, "g_4.f3.f3", print_hash_value);
    transparent_crc(g_4.f3.f4, "g_4.f3.f4", print_hash_value);
    transparent_crc(g_4.f3.f5, "g_4.f3.f5", print_hash_value);
    transparent_crc(g_4.f3.f6, "g_4.f3.f6", print_hash_value);
    transparent_crc(g_4.f3.f7, "g_4.f3.f7", print_hash_value);
    transparent_crc(g_4.f4.f0, "g_4.f4.f0", print_hash_value);
    transparent_crc(g_4.f4.f1, "g_4.f4.f1", print_hash_value);
    transparent_crc(g_4.f4.f2, "g_4.f4.f2", print_hash_value);
    transparent_crc(g_4.f4.f3, "g_4.f4.f3", print_hash_value);
    transparent_crc(g_4.f4.f4, "g_4.f4.f4", print_hash_value);
    transparent_crc(g_4.f4.f5, "g_4.f4.f5", print_hash_value);
    transparent_crc(g_4.f4.f6, "g_4.f4.f6", print_hash_value);
    transparent_crc(g_4.f4.f7.f0, "g_4.f4.f7.f0", print_hash_value);
    transparent_crc(g_4.f4.f7.f1, "g_4.f4.f7.f1", print_hash_value);
    transparent_crc(g_4.f4.f7.f2, "g_4.f4.f7.f2", print_hash_value);
    transparent_crc(g_4.f4.f7.f3, "g_4.f4.f7.f3", print_hash_value);
    transparent_crc(g_4.f4.f7.f4, "g_4.f4.f7.f4", print_hash_value);
    transparent_crc(g_4.f4.f7.f5, "g_4.f4.f7.f5", print_hash_value);
    transparent_crc(g_4.f4.f7.f6, "g_4.f4.f7.f6", print_hash_value);
    transparent_crc(g_4.f4.f7.f7, "g_4.f4.f7.f7", print_hash_value);
    transparent_crc(g_4.f4.f8, "g_4.f4.f8", print_hash_value);
    transparent_crc(g_4.f5, "g_4.f5", print_hash_value);
    transparent_crc(g_4.f6, "g_4.f6", print_hash_value);
    transparent_crc(g_4.f7.f0, "g_4.f7.f0", print_hash_value);
    transparent_crc(g_4.f7.f1, "g_4.f7.f1", print_hash_value);
    transparent_crc(g_4.f7.f2, "g_4.f7.f2", print_hash_value);
    transparent_crc(g_4.f7.f3, "g_4.f7.f3", print_hash_value);
    transparent_crc(g_4.f7.f4, "g_4.f7.f4", print_hash_value);
    transparent_crc(g_4.f7.f5, "g_4.f7.f5", print_hash_value);
    transparent_crc(g_4.f7.f6, "g_4.f7.f6", print_hash_value);
    transparent_crc(g_4.f7.f7.f0, "g_4.f7.f7.f0", print_hash_value);
    transparent_crc(g_4.f7.f7.f1, "g_4.f7.f7.f1", print_hash_value);
    transparent_crc(g_4.f7.f7.f2, "g_4.f7.f7.f2", print_hash_value);
    transparent_crc(g_4.f7.f7.f3, "g_4.f7.f7.f3", print_hash_value);
    transparent_crc(g_4.f7.f7.f4, "g_4.f7.f7.f4", print_hash_value);
    transparent_crc(g_4.f7.f7.f5, "g_4.f7.f7.f5", print_hash_value);
    transparent_crc(g_4.f7.f7.f6, "g_4.f7.f7.f6", print_hash_value);
    transparent_crc(g_4.f7.f7.f7, "g_4.f7.f7.f7", print_hash_value);
    transparent_crc(g_4.f7.f8, "g_4.f7.f8", print_hash_value);
    transparent_crc(g_4.f8, "g_4.f8", print_hash_value);
    transparent_crc(g_4.f9, "g_4.f9", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_60.f1, "g_60.f1", print_hash_value);
    transparent_crc(g_60.f2, "g_60.f2", print_hash_value);
    transparent_crc(g_60.f3, "g_60.f3", print_hash_value);
    transparent_crc(g_60.f4, "g_60.f4", print_hash_value);
    transparent_crc(g_60.f5, "g_60.f5", print_hash_value);
    transparent_crc(g_60.f6, "g_60.f6", print_hash_value);
    transparent_crc(g_60.f7.f0, "g_60.f7.f0", print_hash_value);
    transparent_crc(g_60.f7.f1, "g_60.f7.f1", print_hash_value);
    transparent_crc(g_60.f7.f2, "g_60.f7.f2", print_hash_value);
    transparent_crc(g_60.f7.f3, "g_60.f7.f3", print_hash_value);
    transparent_crc(g_60.f7.f4, "g_60.f7.f4", print_hash_value);
    transparent_crc(g_60.f7.f5, "g_60.f7.f5", print_hash_value);
    transparent_crc(g_60.f7.f6, "g_60.f7.f6", print_hash_value);
    transparent_crc(g_60.f7.f7, "g_60.f7.f7", print_hash_value);
    transparent_crc(g_60.f8.f0.f0, "g_60.f8.f0.f0", print_hash_value);
    transparent_crc(g_60.f8.f0.f1, "g_60.f8.f0.f1", print_hash_value);
    transparent_crc(g_60.f8.f0.f2, "g_60.f8.f0.f2", print_hash_value);
    transparent_crc(g_60.f8.f0.f3, "g_60.f8.f0.f3", print_hash_value);
    transparent_crc(g_60.f8.f0.f4, "g_60.f8.f0.f4", print_hash_value);
    transparent_crc(g_60.f8.f0.f5, "g_60.f8.f0.f5", print_hash_value);
    transparent_crc(g_60.f8.f0.f6, "g_60.f8.f0.f6", print_hash_value);
    transparent_crc(g_60.f8.f0.f7, "g_60.f8.f0.f7", print_hash_value);
    transparent_crc(g_60.f8.f1, "g_60.f8.f1", print_hash_value);
    transparent_crc(g_60.f8.f2, "g_60.f8.f2", print_hash_value);
    transparent_crc(g_60.f8.f3, "g_60.f8.f3", print_hash_value);
    transparent_crc(g_60.f8.f4, "g_60.f8.f4", print_hash_value);
    transparent_crc(g_60.f8.f5, "g_60.f8.f5", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_243.f0, "g_243.f0", print_hash_value);
    transparent_crc(g_243.f1, "g_243.f1", print_hash_value);
    transparent_crc(g_243.f2, "g_243.f2", print_hash_value);
    transparent_crc(g_243.f3, "g_243.f3", print_hash_value);
    transparent_crc(g_243.f4, "g_243.f4", print_hash_value);
    transparent_crc(g_243.f5, "g_243.f5", print_hash_value);
    transparent_crc(g_243.f6, "g_243.f6", print_hash_value);
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_246.f1, "g_246.f1", print_hash_value);
    transparent_crc(g_246.f2.f0.f0, "g_246.f2.f0.f0", print_hash_value);
    transparent_crc(g_246.f2.f0.f1, "g_246.f2.f0.f1", print_hash_value);
    transparent_crc(g_246.f2.f0.f2, "g_246.f2.f0.f2", print_hash_value);
    transparent_crc(g_246.f2.f0.f3, "g_246.f2.f0.f3", print_hash_value);
    transparent_crc(g_246.f2.f0.f4, "g_246.f2.f0.f4", print_hash_value);
    transparent_crc(g_246.f2.f0.f5, "g_246.f2.f0.f5", print_hash_value);
    transparent_crc(g_246.f2.f0.f6, "g_246.f2.f0.f6", print_hash_value);
    transparent_crc(g_246.f2.f0.f7, "g_246.f2.f0.f7", print_hash_value);
    transparent_crc(g_246.f2.f1, "g_246.f2.f1", print_hash_value);
    transparent_crc(g_246.f2.f2, "g_246.f2.f2", print_hash_value);
    transparent_crc(g_246.f2.f3, "g_246.f2.f3", print_hash_value);
    transparent_crc(g_246.f2.f4, "g_246.f2.f4", print_hash_value);
    transparent_crc(g_246.f2.f5, "g_246.f2.f5", print_hash_value);
    transparent_crc(g_246.f3, "g_246.f3", print_hash_value);
    transparent_crc(g_246.f4, "g_246.f4", print_hash_value);
    transparent_crc(g_246.f5, "g_246.f5", print_hash_value);
    transparent_crc(g_246.f6, "g_246.f6", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_356.f0, "g_356.f0", print_hash_value);
    transparent_crc(g_356.f1, "g_356.f1", print_hash_value);
    transparent_crc(g_356.f2, "g_356.f2", print_hash_value);
    transparent_crc(g_356.f3, "g_356.f3", print_hash_value);
    transparent_crc(g_356.f4, "g_356.f4", print_hash_value);
    transparent_crc(g_356.f5, "g_356.f5", print_hash_value);
    transparent_crc(g_356.f6, "g_356.f6", print_hash_value);
    transparent_crc(g_371.f0.f0, "g_371.f0.f0", print_hash_value);
    transparent_crc(g_371.f0.f1, "g_371.f0.f1", print_hash_value);
    transparent_crc(g_371.f0.f2, "g_371.f0.f2", print_hash_value);
    transparent_crc(g_371.f0.f3, "g_371.f0.f3", print_hash_value);
    transparent_crc(g_371.f0.f4, "g_371.f0.f4", print_hash_value);
    transparent_crc(g_371.f0.f5, "g_371.f0.f5", print_hash_value);
    transparent_crc(g_371.f0.f6, "g_371.f0.f6", print_hash_value);
    transparent_crc(g_371.f0.f7, "g_371.f0.f7", print_hash_value);
    transparent_crc(g_371.f1, "g_371.f1", print_hash_value);
    transparent_crc(g_371.f2, "g_371.f2", print_hash_value);
    transparent_crc(g_371.f3, "g_371.f3", print_hash_value);
    transparent_crc(g_371.f4, "g_371.f4", print_hash_value);
    transparent_crc(g_371.f5, "g_371.f5", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_412.f0, "g_412.f0", print_hash_value);
    transparent_crc(g_412.f1, "g_412.f1", print_hash_value);
    transparent_crc(g_412.f2, "g_412.f2", print_hash_value);
    transparent_crc(g_412.f3, "g_412.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
