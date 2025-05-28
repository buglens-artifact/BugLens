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
   const int f0;
   unsigned long long f1;
   char f2;
   const long long f3;
   unsigned long long f4;
   unsigned char f5;
   long long f6;
   unsigned f7;
};

struct S1 {
   unsigned f0 : 22;
   unsigned f1 : 28;
   unsigned f2 : 23;
   const signed f3 : 6;
   unsigned f4 : 15;
};

struct S2 {
   const unsigned f0 : 27;
   signed f1 : 30;
   signed f2 : 17;
   signed f3 : 10;
   signed f4 : 17;
   unsigned long long f5;
   signed f6 : 22;
};

struct S3 {
   signed f0 : 15;
   const signed f1 : 19;
   signed f2 : 20;
   signed f3 : 1;
   unsigned f4 : 11;
   signed f5 : 13;
   signed f6 : 29;
};

union U4 {
   struct S0 f0;
   unsigned long long f1;
   long long f2;
   int f3;
   unsigned short f4;
};

union U5 {
   const struct S0 f0;
   int f1;
};

union U6 {
   const unsigned short f0;
   unsigned long long f1;
};

union U7 {
   unsigned short f0;
   const char f1;
};


static unsigned short g_22 = 0x4A12L;
static int g_68 = 0x5235BB1EL;
static int g_70 = 0L;
static unsigned short g_87 = 3UL;
static long long g_88 = (-6L);
static int *g_91 = &g_68;
static int * const *g_90 = &g_91;
static struct S0 g_92 = {-9L,18446744073709551614UL,0x66L,-1L,0x88D3DE1848A2850ELL,0xC4L,0x96DCF8DE9EF314FBLL,7UL};
static union U5 g_103 = {{0x05FCAF60L,18446744073709551610UL,-8L,0x755E220C4E49CAF0LL,0x3B50BCEF86206994LL,255UL,1L,0xEB6F9E29L}};
static short g_137 = 6L;
static char *g_172 = &g_92.f2;
static char **g_171 = &g_172;
static struct S1 g_181 = {313,12983,1615,-4,56};
static unsigned g_204 = 0x58D0A975L;
static union U4 g_214 = {{1L,1UL,-1L,0xAFF28C12B7180226LL,0xA3159ADB9C433B51LL,0xC9L,0x24154FC8DD5CAA87LL,18446744073709551615UL}};
static union U7 g_274 = {65534UL};
static char g_286 = (-10L);
static int *g_288 = &g_68;
static int *g_289 = &g_70;
static union U6 *g_290 = (void*)0;
static struct S3 g_322 = {-80,105,345,0,12,69,-7070};
static unsigned char *g_335 = &g_214.f0.f5;
static unsigned char **g_334 = &g_335;
static const union U7 g_358 = {0UL};
static const union U7 g_362 = {0xE68BL};
static struct S1 *g_373 = &g_181;
static struct S1 **g_372 = &g_373;
static short g_411 = 0x420BL;
static union U7 *g_422 = (void*)0;
static union U7 **g_421 = &g_422;
static short g_497 = 1L;
static struct S2 *g_537 = (void*)0;
static union U6 g_568 = {0x93DEL};
static unsigned *g_604 = &g_204;
static unsigned **g_603 = &g_604;
static union U4 g_613 = {{1L,3UL,-8L,5L,0x185750732753B200LL,1UL,1L,7UL}};



static int func_1(void);
static unsigned char func_5(unsigned p_6);
static unsigned long long func_9(struct S0 p_10, struct S3 p_11, unsigned p_12, const short p_13);
static struct S0 func_14(const union U4 p_15, unsigned char p_16, unsigned p_17, union U4 p_18, struct S3 p_19);
static union U4 func_20(unsigned char p_21);
static int func_23(struct S3 p_24, unsigned long long p_25);
static struct S3 func_26(const union U7 p_27, long long p_28, unsigned long long p_29, int p_30);
static union U7 func_31(union U6 p_32, const int p_33, long long p_34);
static char func_54(struct S0 p_55, const unsigned short p_56, struct S0 p_57);
static struct S0 func_58(unsigned short p_59, int p_60, struct S1 p_61, struct S1 p_62);
static int func_1(void)
{
    int l_2 = (-6L);
    struct S3 l_612 = {90,270,463,-0,2,6,-4845};
    unsigned short l_642 = 1UL;
    struct S1 *l_643 = &g_181;
    if (((l_2 <= (((((l_2 != (safe_lshift_func_uint8_t_u_u(func_5((safe_mod_func_uint64_t_u_u(func_9(func_14(func_20(g_22), (func_23(l_612, g_322.f5) , l_612.f4), l_2, g_613, g_322), g_322, l_612.f5, l_2), 0x9EE4BC88F11FF991LL))), l_2))) , g_613.f4) , (**g_90)) != 0xDF8C72EEL) & g_322.f1)) , l_642))
    {
        return (**g_90);
    }
    else
    {
        (*g_372) = l_643;
    }
    return l_612.f5;
}







static unsigned char func_5(unsigned p_6)
{
    int *l_639 = &g_613.f3;
    const unsigned char l_640 = 0x11L;
    l_639 = l_639;
    if ((p_6 != l_640))
    {
        short l_641 = 0x6B9AL;
        (*g_91) = (l_641 = (*l_639));
        return p_6;
    }
    else
    {
        return (*l_639);
    }
}







static unsigned long long func_9(struct S0 p_10, struct S3 p_11, unsigned p_12, const short p_13)
{
    int **l_637 = (void*)0;
    int *l_638 = &g_103.f1;
    l_638 = (*g_90);
    return g_181.f4;
}







static struct S0 func_14(const union U4 p_15, unsigned char p_16, unsigned p_17, union U4 p_18, struct S3 p_19)
{
    int **l_614 = &g_91;
    const union U6 l_619 = {65534UL};
    char *l_632 = &g_286;
    char *l_633 = &g_214.f0.f2;
    int l_634 = 0x88091373L;
    unsigned long long *l_635 = &g_613.f1;
    struct S0 l_636 = {-8L,0x1463A620833CE575LL,-1L,-8L,18446744073709551612UL,0x51L,0xA55F155BD1A290FBLL,0xEC8E5170L};
    (*l_614) = &g_70;
    (**g_90) = func_23((g_568 , g_322), ((*l_635) = ((((((**l_614) <= ((~((**g_603) = (safe_div_func_uint32_t_u_u((func_23(g_322, (safe_div_func_uint32_t_u_u(((l_619 , 0x77L) || (-1L)), (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((*l_633) = ((**l_614) || (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((g_613.f0.f2 = ((*l_632) = ((**g_171) = (safe_sub_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u((**g_171), 3)) , (**l_614)) < (**l_614)), (**l_614)))))), (**l_614))), 4)))), p_18.f0.f4)), (**l_614)))))) ^ (**l_614)), l_634)))) != (**l_614))) || p_19.f4) , p_18) , p_19.f6) , p_15.f0.f4)));
    g_91 = (l_619 , (*g_90));
    return l_636;
}







static union U4 func_20(unsigned char p_21)
{
    short l_37 = 0L;
    int *l_67 = &g_68;
    int *l_69 = &g_70;
    struct S1 l_71 = {1868,3240,2561,3,64};
    struct S0 l_417 = {0x7A72458FL,1UL,5L,0xB65AE4B5D248291DLL,18446744073709551611UL,1UL,0xDF6CC9C5A3F4D275LL,18446744073709551609UL};
    unsigned short *l_587 = (void*)0;
    unsigned short *l_588 = &g_87;
    union U6 l_589 = {7UL};
    union U5 *l_610 = &g_103;
    union U5 **l_609 = &l_610;
    union U4 l_611 = {{-2L,0xDA488616C9711037LL,0x60L,-1L,0UL,1UL,0x4105FEEE2FA31D04LL,0x463EB60CL}};
    (*l_69) = func_23(func_26(func_31(((safe_lshift_func_int8_t_s_u(((((*l_588) = (l_37 >= (((l_37 && ((safe_div_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(1UL, 1)) > (g_22 ^ (g_22 != ((safe_mul_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((*l_69) = (((safe_mul_func_int16_t_s_s((((safe_div_func_int8_t_s_s(func_54(func_58(((l_37 > ((g_22 ^ (safe_add_func_uint32_t_u_u(g_22, ((*l_69) = (safe_add_func_int32_t_s_s(((*l_67) = (+p_21)), g_22)))))) | p_21)) & (-9L)), g_22, l_71, l_71), g_22, l_417), p_21)) != p_21) != 0x13DF5487L), (-6L))) >= g_358.f1) ^ l_71.f4)), 0xB8AEF161L)), g_92.f3)) & 0xB5L), g_322.f0)) , p_21)))), 0UL)) != (-2L)), 0xFCL)) , g_274.f0)) ^ p_21) == p_21))) == p_21) ^ g_92.f1), p_21)) , l_589), g_181.f0, l_417.f1), p_21, p_21, p_21), g_497);
    (*g_372) = (*g_372);
    (*l_609) = (void*)0;
    return l_611;
}







static int func_23(struct S3 p_24, unsigned long long p_25)
{
    unsigned char l_608 = 255UL;
    return l_608;
}







static struct S3 func_26(const union U7 p_27, long long p_28, unsigned long long p_29, int p_30)
{
    struct S0 l_592 = {-3L,0xDCBA771560EA6CC2LL,0x54L,1L,7UL,251UL,-1L,0x75C50D98L};
    struct S1 l_596 = {694,11158,1793,-2,58};
    union U6 l_597 = {0x46C8L};
    unsigned short *l_598 = &g_22;
    int *l_599 = (void*)0;
    int *l_600 = &g_103.f1;
    int *l_601 = &g_214.f3;
    int l_602 = 5L;
    unsigned **l_605 = &g_604;
    unsigned ***l_606 = &g_603;
    struct S3 l_607 = {153,378,-190,-0,11,33,22569};
    (*l_600) = (p_27.f1 <= func_54(l_592, ((*l_598) = (safe_unary_minus_func_uint64_t_u((((safe_lshift_func_int16_t_s_u(0x5451L, ((l_592.f4 , p_27.f0) == (-1L)))) , l_596) , (l_597 , g_68))))), l_592));
    l_602 = ((*l_601) = ((*l_600) = (p_30 = p_30)));
    (*l_606) = (l_605 = g_603);
    return l_607;
}







static union U7 func_31(union U6 p_32, const int p_33, long long p_34)
{
    int *l_590 = &g_103.f1;
    union U7 l_591 = {5UL};
    (*l_590) = 0x1A4806D7L;
    return l_591;
}







static char func_54(struct S0 p_55, const unsigned short p_56, struct S0 p_57)
{
    union U7 **l_420 = (void*)0;
    long long *l_425 = &g_92.f6;
    struct S1 l_428 = {296,4040,1169,2,172};
    int l_431 = 0L;
    union U5 *l_437 = &g_103;
    unsigned short *l_473 = &g_87;
    unsigned short **l_472 = &l_473;
    unsigned char **l_527 = &g_335;
    unsigned short l_535 = 0xF025L;
    union U6 *l_567 = &g_568;
    struct S3 *l_574 = &g_322;
    if (((safe_rshift_func_int8_t_s_u((l_420 != g_421), 2)) , (((safe_mul_func_uint8_t_u_u(((p_55.f6 > (0x3C25399B90E4931BLL || (p_57.f6 = 0x2A46E92700A74475LL))) , (((*l_425) = p_55.f0) >= ((safe_div_func_uint64_t_u_u(((l_428 , (((safe_mod_func_uint64_t_u_u(5UL, ((l_431 = (p_57.f2 | p_55.f1)) , 18446744073709551615UL))) <= 4294967295UL) < 0UL)) && l_428.f4), g_181.f1)) | g_322.f3))), (*g_172))) , p_55.f6) & p_57.f1)))
    {
        const int *l_432 = &g_68;
        const int **l_433 = &l_432;
        struct S0 *l_434 = &g_92;
        struct S0 **l_435 = (void*)0;
        struct S0 **l_436 = &l_434;
        union U5 **l_438 = &l_437;
        (*l_433) = l_432;
        (*l_436) = l_434;
        (*l_438) = l_437;
    }
    else
    {
        int *l_439 = (void*)0;
        int *l_440 = &g_70;
        short *l_453 = &g_137;
        union U6 l_532 = {1UL};
        const int l_536 = 1L;
        struct S0 *l_547 = &g_92;
        struct S0 **l_546 = &l_547;
        (*l_440) = p_57.f6;
        for (g_214.f0.f2 = 23; (g_214.f0.f2 > (-1)); g_214.f0.f2--)
        {
            unsigned long long l_444 = 0xC7A78D93BE3A05BCLL;
            const struct S3 *l_455 = &g_322;
            (*l_440) = p_57.f3;
            if (p_57.f3)
            {
                int **l_443 = &g_289;
                (*l_443) = l_440;
            }
            else
            {
                const unsigned l_446 = 0x71838A19L;
                if (p_57.f2)
                {
                    char l_445 = 0xCDL;
                    union U5 **l_451 = &l_437;
                    union U5 ***l_452 = &l_451;
                    int *l_454 = &g_103.f1;
                    const struct S3 **l_456 = &l_455;
                    (*l_440) = l_444;
                    (*l_440) = (l_445 == l_446);
                    (*l_454) = ((safe_lshift_func_uint16_t_u_s(p_57.f1, ((*g_172) <= (((*l_453) = (safe_mod_func_int8_t_s_s((p_57.f5 >= (((((((((*l_440) = (&l_437 == ((*l_452) = l_451))) == 2L) , g_322) , l_453) != ((p_57.f6 > l_445) , (void*)0)) > g_322.f5) || p_56) < p_55.f3)), p_57.f4))) , l_446)))) == l_431);
                    (*l_456) = l_455;
                }
                else
                {
                    for (p_57.f6 = 0; (p_57.f6 <= 19); p_57.f6 = safe_add_func_uint32_t_u_u(p_57.f6, 1))
                    {
                        unsigned char l_463 = 0x88L;
                        l_463 = (safe_lshift_func_uint8_t_u_s(((~l_446) ^ (safe_rshift_func_uint8_t_u_u((p_57.f1 || (p_57.f4 = p_55.f2)), 1))), 4));
                    }
                    if (l_444)
                        continue;
                }
            }
            if (p_57.f7)
                break;
        }
        for (g_137 = (-19); (g_137 > (-5)); g_137 = safe_add_func_uint64_t_u_u(g_137, 7))
        {
            int **l_466 = &l_439;
            int l_474 = (-4L);
            unsigned short l_515 = 0x657BL;
            struct S1 l_540 = {1460,4270,1520,2,57};
            union U5 l_551 = {{0x9A6D8715L,9UL,1L,-1L,0x96CEC3D57967B331LL,0xD2L,0xA37914D1D96B2C31LL,18446744073709551613UL}};
            unsigned *l_564 = &g_204;
            union U6 **l_569 = &l_567;
            (*l_466) = l_439;
        }
    }
    return (**g_171);
}







static struct S0 func_58(unsigned short p_59, int p_60, struct S1 p_61, struct S1 p_62)
{
    const unsigned long long l_72 = 0x5F757037A9E21427LL;
    struct S0 l_104 = {-1L,0UL,4L,0x05BB6F065A9757D9LL,18446744073709551612UL,0x3DL,0x09114404B11C8738LL,4UL};
    struct S3 l_118 = {-17,-57,629,0,29,-69,22949};
    char * const l_170 = &g_92.f2;
    char * const *l_169 = &l_170;
    struct S2 l_199 = {7348,3632,-341,21,-240,0xA2C95388961E3828LL,-1621};
    union U5 l_211 = {{0x3916AA3DL,1UL,0xF8L,0xBD3D55A550E5D44BLL,0xE2DA87B3A4D1CBB0LL,1UL,0x045D44334F404DFALL,0x35959F26L}};
    int *l_215 = &g_70;
    unsigned short l_221 = 0xA9DBL;
    struct S1 **l_223 = (void*)0;
    struct S1 *l_227 = &g_181;
    struct S1 **l_226 = &l_227;
    long long l_276 = 0xECE6E98DB74E30DELL;
    unsigned char **l_336 = &g_335;
    union U4 *l_344 = (void*)0;
    union U4 **l_343 = &l_344;
    union U7 *l_355 = (void*)0;
    union U6 l_395 = {65535UL};
    struct S0 l_409 = {0x6842C025L,0x592D42B9B8E23BF8LL,0xDEL,8L,0UL,4UL,1L,18446744073709551614UL};
    if ((l_72 < (safe_div_func_uint64_t_u_u(g_68, p_62.f4))))
    {
        int l_77 = 0L;
        int *l_83 = &l_77;
        int **l_82 = &l_83;
        unsigned short *l_86 = &g_87;
        struct S0 l_110 = {1L,0x5F8E9B1403B77C0CLL,0x43L,0L,0xAB63E390B54F4E0BLL,0xB7L,1L,1UL};
        char ** const * const l_198 = &g_171;
        const struct S1 l_222 = {1714,3534,2230,-4,165};
        struct S1 *l_225 = &g_181;
        struct S1 **l_224 = &l_225;
        union U4 *l_342 = &g_214;
        union U4 ** const l_341 = &l_342;
        int l_396 = 0L;
        if ((safe_add_func_uint16_t_u_u((g_88 = ((g_68 = g_22) && (l_77 || ((((safe_lshift_func_uint8_t_u_u(g_68, g_22)) < ((((safe_rshift_func_uint16_t_u_u(p_62.f1, 11)) , &g_68) == ((*l_82) = &g_70)) <= (-1L))) | (((safe_lshift_func_int8_t_s_u(((((*l_86) = (p_60 > l_72)) <= 1UL) != 0xB1L), g_22)) && 4294967289UL) != 4294967293UL)) < p_62.f2)))), 0x269AL)))
        {
            int ***l_89 = &l_82;
            (*l_89) = &l_83;
            (**g_90) = (~((*l_83) = (l_72 < (p_62.f3 , (g_90 == ((*l_89) = &g_91))))));
            return g_92;
        }
        else
        {
            int l_95 = 0L;
            short l_98 = (-1L);
            int l_101 = 0x6C34CEF8L;
            (*l_83) = ((safe_sub_func_uint64_t_u_u(g_92.f6, (l_95 , (safe_rshift_func_uint16_t_u_s(g_92.f7, 15))))) & (l_98 >= (safe_add_func_uint64_t_u_u(((l_101 = 0x3EL) || g_92.f1), (safe_unary_minus_func_uint32_t_u(p_59))))));
        }
        (**g_90) = (g_88 <= ((g_103 , l_104) , (p_61.f0 >= 0L)));
        if (l_104.f3)
        {
            const long long l_107 = (-1L);
            unsigned l_124 = 0xA69B5101L;
            int l_142 = 8L;
            unsigned l_159 = 0x0A8C9BA8L;
            unsigned long long l_178 = 18446744073709551615UL;
            short *l_194 = (void*)0;
            short *l_195 = &g_137;
            unsigned long long *l_200 = &l_178;
            (**g_90) = (safe_sub_func_int64_t_s_s(l_107, p_61.f1));
            if ((safe_sub_func_int16_t_s_s(0xBD86L, 0xA0BDL)))
            {
                unsigned short l_115 = 65535UL;
                int l_123 = 0x0B60EEEBL;
                short *l_135 = (void*)0;
                short *l_136 = &g_137;
                char *l_141 = (void*)0;
                char **l_140 = &l_141;
                const unsigned char l_145 = 255UL;
                if ((l_110 , ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((**l_82), p_61.f3)), l_115)) , (((p_62.f0 , p_62.f4) ^ (safe_mod_func_uint16_t_u_u(((((l_118 , ((safe_rshift_func_int8_t_s_u(p_62.f0, g_88)) & 6UL)) , 0x6A97375CL) ^ l_115) , p_61.f0), l_118.f4))) && l_107))))
                {
                    char *l_122 = (void*)0;
                    (*l_82) = (void*)0;
                    if ((**g_90))
                    {
                        return g_103.f0;
                    }
                    else
                    {
                        int **l_121 = &g_91;
                        (*l_121) = (*g_90);
                        (*l_121) = &p_60;
                    }
                    (**g_90) = (g_92.f7 && ((l_123 = g_92.f4) & l_124));
                }
                else
                {
                    for (g_92.f7 = 0; (g_92.f7 > 49); g_92.f7 = safe_add_func_int32_t_s_s(g_92.f7, 7))
                    {
                        int **l_127 = &g_91;
                        int **l_128 = (void*)0;
                        int **l_129 = &g_91;
                        (*g_91) = ((*l_83) = p_62.f1);
                        (*l_127) = (*g_90);
                        (*l_129) = (*g_90);
                    }
                    (*l_82) = &p_60;
                }
                if ((((l_118 , (g_103 , (safe_div_func_uint16_t_u_u((((safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint8_t_u_u((((((*l_136) = g_92.f7) || p_62.f2) != l_115) == ((safe_div_func_int32_t_s_s((g_88 != l_115), 0x6539211FL)) > (l_142 = ((((*l_140) = (void*)0) != (void*)0) == p_62.f1)))), l_107)))) >= g_92.f1) ^ g_103.f0.f6), 0xB1AFL)))) || g_92.f7) , p_61.f0))
                {
                    int l_158 = (-1L);
                    const int *l_161 = &l_77;
                    const int **l_160 = &l_161;
                    const int ***l_162 = &l_160;
                    char ***l_173 = &l_140;
                    unsigned char *l_174 = (void*)0;
                    unsigned char *l_175 = &g_92.f5;
                    unsigned long long *l_176 = &g_92.f4;
                    unsigned long long *l_177 = &l_110.f4;
                    (**g_90) = ((safe_rshift_func_int16_t_s_u(l_145, (safe_rshift_func_uint16_t_u_s(l_104.f3, 13)))) ^ (((((safe_div_func_uint8_t_u_u(255UL, ((safe_lshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u(g_103.f0.f6, 9L)), g_92.f6)) ^ (((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_62.f2, l_142)), ((+p_62.f1) > g_92.f7))) == g_103.f0.f2) > l_158)))) & g_92.f3) < l_159) ^ g_92.f3) && g_92.f0));
                    (*l_162) = l_160;
                    l_178 = (safe_add_func_int32_t_s_s(((*g_91) = (p_60 , (safe_rshift_func_uint8_t_u_s(((*l_175) = ((*l_161) < (l_169 == ((*l_173) = g_171)))), ((p_59 >= ((*l_177) = ((*l_176) = g_92.f7))) && g_92.f1))))), l_145));
                    (*g_91) = (**g_90);
                }
                else
                {
                    return g_92;
                }
                return l_110;
            }
            else
            {
                struct S1 *l_180 = &g_181;
                struct S1 **l_179 = &l_180;
                struct S1 **l_182 = (void*)0;
                struct S1 *l_184 = &g_181;
                struct S1 **l_183 = &l_184;
                struct S1 **l_185 = (void*)0;
                struct S1 *l_187 = (void*)0;
                struct S1 **l_186 = &l_187;
                (*l_186) = ((*l_183) = ((*l_179) = &p_61));
            }
            (*l_83) = ((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(l_72, (*l_83))), 5)) || (safe_add_func_uint64_t_u_u((p_62.f0 | ((*l_195) = p_61.f4)), 0L)));
            (**l_82) = ((*g_91) = (((((safe_lshift_func_int8_t_s_u((4294967291UL & (0x7FA05C2F4BCE8A26LL < (l_198 != (l_199 , l_198)))), ((6L < g_87) , p_62.f4))) >= ((*l_200) = g_92.f1)) > l_118.f4) && p_62.f3) <= p_62.f1));
        }
        else
        {
            unsigned *l_203 = &g_204;
            int **l_216 = (void*)0;
            int **l_217 = (void*)0;
            int **l_218 = (void*)0;
            int *l_220 = &g_70;
            int **l_219 = &l_220;
            struct S0 l_299 = {-1L,0x5BCD32BE164FB726LL,1L,0xAA8BEC59F230F887LL,0xA3BFE583E0304A45LL,0xE1L,0x2F55BAFC07765BBCLL,1UL};
            union U4 *l_304 = &g_214;
            union U4 * const *l_303 = &l_304;
            short *l_340 = &g_137;
            const int l_359 = 0x32768A1FL;
            (**g_90) = ((safe_mod_func_uint8_t_u_u(0x07L, 0xE0L)) == ((&g_137 != ((((*l_203) = 0xF2429CABL) | p_61.f3) , l_86)) < p_61.f4));
            if ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(0x98L, l_118.f0)) ^ (l_211 , ((safe_sub_func_int32_t_s_s(((g_214 , (g_91 = ((*l_82) = (p_62 , l_215)))) != ((*l_219) = l_215)), (g_181.f1 >= (g_214.f0.f3 >= g_70)))) < l_221))), (*g_172))))
            {
                char * const l_238 = &l_104.f2;
                int l_240 = 0xAE91A373L;
                (*l_219) = &p_60;
                (*l_220) = ((l_222 , l_223) == (l_226 = l_224));
                for (l_110.f2 = (-25); (l_110.f2 <= 21); l_110.f2 = safe_add_func_uint64_t_u_u(l_110.f2, 1))
                {
                    char *l_239 = &g_92.f2;
                    long long *l_241 = &l_110.f6;
                    unsigned char *l_242 = (void*)0;
                    int l_243 = 0xF730B3DAL;
                    int l_244 = 0xB77E2E7FL;
                    struct S0 l_251 = {-8L,0x13B6CCC3BF84625BLL,-6L,0x2B1ACEA78EDF1D7FLL,18446744073709551615UL,0x99L,2L,0UL};
                    unsigned char *l_262 = &g_214.f0.f5;
                    if (((safe_div_func_int8_t_s_s((((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_181.f3, (safe_sub_func_uint32_t_u_u(((l_240 = ((l_238 != (l_239 = (*g_171))) & ((*l_241) = l_240))) , (l_243 = (p_62.f0 , p_61.f1))), (1L & g_214.f0.f0))))), g_92.f5)) != p_61.f2) , p_61.f0), l_244)) == 0x6CL))
                    {
                        union U4 **l_245 = (void*)0;
                        union U4 **l_246 = (void*)0;
                        union U4 *l_248 = &g_214;
                        union U4 **l_247 = &l_248;
                        int **l_249 = (void*)0;
                        int **l_250 = &l_220;
                        (*l_247) = &g_214;
                        (*l_250) = (*g_90);
                        (**g_90) = (*l_220);
                        if (l_244)
                            break;
                    }
                    else
                    {
                        return l_251;
                    }
                    p_60 = (l_118.f5 = (((**g_90) = (safe_lshift_func_uint16_t_u_s(p_60, (safe_mod_func_int32_t_s_s((g_172 == (((((safe_mod_func_uint32_t_u_u(((*l_203) = g_214.f0.f0), (safe_sub_func_int32_t_s_s((*g_91), 0xF4583700L)))) & g_214.f0.f2) || ((safe_add_func_uint16_t_u_u((((*l_262) = 0x0EL) != (safe_lshift_func_uint16_t_u_u(((*l_86) = (+(safe_div_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(p_61.f0, (((**l_224) , 0x920BD129L) , p_61.f4))), p_62.f1)))), 2))), 0xC728L)) != g_92.f0)) != 2UL) , g_172)), 0x41F67890L))))) ^ p_62.f0));
                }
                for (g_92.f2 = 5; (g_92.f2 > 5); g_92.f2 = safe_add_func_int8_t_s_s(g_92.f2, 1))
                {
                    int **l_278 = &g_91;
                    for (g_92.f4 = 3; (g_92.f4 <= 14); g_92.f4++)
                    {
                        union U7 *l_273 = &g_274;
                        union U7 **l_275 = &l_273;
                        int l_277 = 0x9376F33AL;
                        (*l_275) = l_273;
                        l_277 = l_276;
                        (*l_275) = &g_274;
                    }
                    (*l_278) = (*g_90);
                }
            }
            else
            {
                char l_287 = 0L;
                for (g_103.f1 = 22; (g_103.f1 != (-1)); --g_103.f1)
                {
                    union U4 *l_282 = &g_214;
                    union U4 **l_281 = &l_282;
                    (*l_281) = (void*)0;
                }
                if (p_59)
                {
                    unsigned l_283 = 4294967295UL;
                    union U6 **l_291 = (void*)0;
                    union U6 **l_292 = &g_290;
                    if ((*g_91))
                    {
                        (**g_90) = (**g_90);
                        (*l_219) = (l_283 , &p_60);
                        (**l_219) = (g_214.f3 = ((safe_add_func_int32_t_s_s((((*l_215) = (g_286 = (**g_90))) && (**g_90)), (!l_287))) ^ g_92.f4));
                        g_289 = (g_288 = (g_91 = ((*l_219) = &p_60)));
                    }
                    else
                    {
                        return l_110;
                    }
                    (*l_292) = g_290;
                    for (g_87 = 14; (g_87 >= 29); g_87++)
                    {
                        struct S0 **l_300 = (void*)0;
                        struct S0 *l_302 = &l_110;
                        struct S0 **l_301 = &l_302;
                        union U4 * const **l_305 = &l_303;
                        union U4 * const *l_307 = &l_304;
                        union U4 * const **l_306 = &l_307;
                        (*l_83) = (p_60 = (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(0x8E2CL, (l_299 , g_274.f0))), 2)));
                        (*l_301) = (void*)0;
                        (*l_306) = ((*l_305) = l_303);
                    }
                }
                else
                {
                    unsigned l_314 = 0xE2C7BBA4L;
                    union U7 l_319 = {3UL};
                    struct S3 *l_320 = &l_118;
                    unsigned l_332 = 0x9BDB669DL;
                    long long l_333 = 0L;
                    (*g_289) = (*g_91);
                    (*l_219) = (l_215 = &p_60);
                    if (((((*g_91) = ((*g_288) = (safe_sub_func_int8_t_s_s(((**g_171) = p_62.f4), p_61.f3)))) || p_61.f3) || (g_92 , (safe_sub_func_int64_t_s_s((((*l_203) = ((((*g_91) != (*g_91)) && (safe_div_func_uint8_t_u_u(((p_61.f2 >= g_92.f2) >= (((**g_171) < l_287) && l_314)), g_137))) == g_92.f1)) > p_61.f4), 18446744073709551615UL)))))
                    {
                        struct S3 *l_321 = &g_322;
                        int l_329 = 1L;
                        (*l_82) = &p_60;
                        p_60 = (((safe_sub_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(p_62.f4, g_181.f4)) , p_61.f4), (-1L))) , ((p_62.f3 , l_319) , g_290)) != (void*)0);
                        l_321 = l_320;
                        (*l_224) = ((safe_div_func_int16_t_s_s(((0x10L <= ((g_103 , (((safe_div_func_int32_t_s_s((**g_90), (((safe_add_func_int8_t_s_s((p_61.f0 & l_329), (**g_171))) , (p_61.f1 < ((safe_lshift_func_uint16_t_u_u(((*g_288) | 0x6874CD0BL), g_214.f0.f6)) < l_332))) | p_62.f4))) == l_287) != (*l_83))) & 3UL)) != g_322.f4), p_61.f4)) , &p_61);
                    }
                    else
                    {
                        int *l_337 = &g_70;
                        (*g_289) = l_333;
                        l_336 = g_334;
                        p_60 = p_61.f1;
                        (*l_82) = l_337;
                    }
                }
            }
            if ((safe_div_func_int16_t_s_s(p_61.f0, ((*l_340) = p_61.f4))))
            {
                unsigned short l_348 = 65530UL;
                int **l_349 = &g_289;
                if ((l_341 == l_343))
                {
                    unsigned l_345 = 0xDBB2E2C5L;
                    p_60 = l_345;
                    (**l_82) = p_59;
                    for (l_110.f7 = (-23); (l_110.f7 != 30); l_110.f7++)
                    {
                        (**l_82) = l_348;
                    }
                }
                else
                {
                    (*l_220) = 0x4FC777F7L;
                }
                (**g_90) = (*l_215);
                (*l_349) = (*g_90);
                for (g_214.f3 = 0; (g_214.f3 > (-8)); --g_214.f3)
                {
                    const struct S1 l_352 = {1355,867,566,-6,27};
                    const union U7 *l_357 = &g_358;
                    const union U7 **l_356 = &l_357;
                    unsigned char l_363 = 246UL;
                    struct S0 l_364 = {3L,18446744073709551615UL,0L,0x89250CD7255FA5ECLL,0x414F5B9C717242D1LL,0x56L,2L,0x84A77F9EL};
                    int *l_365 = &g_68;
                    (*g_289) = (l_352 , (((*g_91) == (g_103.f1 = (safe_mul_func_int16_t_s_s(((*l_340) = (((l_355 == ((*l_356) = &g_274)) >= (*l_83)) || ((l_359 , p_60) || p_61.f4))), (((p_61.f2 == l_352.f3) == 0x63916774L) || 0x731B951BL))))) > (**l_349)));
                    if (((safe_mod_func_int64_t_s_s(g_322.f3, (g_362 , p_61.f1))) || (*g_91)))
                    {
                        if (l_363)
                            break;
                        return l_364;
                    }
                    else
                    {
                        (*l_82) = l_365;
                    }
                }
            }
            else
            {
                (**l_219) = p_61.f3;
            }
        }
        if ((*g_288))
        {
            struct S3 *l_367 = (void*)0;
            struct S3 **l_366 = &l_367;
            struct S3 ***l_368 = &l_366;
            int l_369 = (-8L);
            int **l_376 = &g_288;
            (*l_368) = l_366;
            if ((((p_62.f2 > (g_92.f7 != l_369)) | (*l_215)) <= g_322.f2))
            {
                int **l_370 = &l_215;
                struct S0 l_371 = {-8L,0x9C799DE595215399LL,0L,0x3FE2EC41BF3F658ALL,0x2A3C2728AC29C0D1LL,0xE2L,0x1D217DB600C3A37ELL,0x84DB12DDL};
                struct S1 ***l_374 = &l_223;
                (*l_370) = (*g_90);
                (**l_82) = ((*l_215) | (*g_172));
                (*l_374) = ((l_371 , g_362.f1) , g_372);
                (**g_90) = (*g_91);
            }
            else
            {
                union U7 **l_375 = &l_355;
                (*l_82) = &l_369;
                (*l_375) = (void*)0;
            }
            (*l_376) = ((*l_82) = &p_60);
        }
        else
        {
            unsigned l_386 = 0xDB5CEE28L;
            struct S3 l_391 = {16,149,289,-0,36,-7,6473};
            union U4 l_392 = {{0x237871E8L,18446744073709551615UL,0xB3L,-2L,1UL,1UL,1L,0UL}};
            int **l_397 = &l_215;
            (*g_289) = ((+(*l_215)) != (safe_unary_minus_func_uint64_t_u(((safe_add_func_int32_t_s_s((p_61.f3 | (safe_rshift_func_int8_t_s_s(((*g_172) = (((safe_sub_func_int64_t_s_s((safe_div_func_uint32_t_u_u(p_61.f3, l_386)), ((void*)0 != (*l_169)))) | (((*l_215) , (p_62.f1 ^ (safe_sub_func_int64_t_s_s(g_92.f4, 2L)))) & 0xFD7FL)) | 251UL)), l_386))), (*l_83))) > (*l_215)))));
            (*l_83) = ((0xED415E4E6D5AF62CLL != (safe_lshift_func_uint16_t_u_s((0x82FAL > (l_391 , (l_396 = (((*g_335) = (((l_392 , p_62.f0) && (safe_div_func_uint16_t_u_u(((*l_86) = p_61.f1), (p_61.f2 || p_61.f0)))) , (((l_395 , (*l_83)) , (*l_215)) != g_92.f0))) <= 0xCDL)))), p_62.f2))) < g_92.f3);
            (*l_397) = (*g_90);
        }
    }
    else
    {
        unsigned *l_402 = &g_204;
        char ***l_405 = &g_171;
        char ****l_406 = &l_405;
        long long *l_407 = &g_214.f2;
        union U6 l_408 = {1UL};
        union U4 l_410 = {{-7L,0xE6383F7E49803C9DLL,0xEFL,0xE38AD08A1AE87050LL,0x2635CBC03E09A07ELL,248UL,4L,9UL}};
        union U5 *l_413 = &l_211;
        union U5 **l_412 = &l_413;
        p_60 = (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_61.f2, ((((l_410.f3 = (((*l_402) = (p_61.f2 , p_62.f4)) <= ((safe_sub_func_int16_t_s_s((+g_181.f3), (((&g_171 != ((*l_406) = l_405)) || ((*l_407) = g_103.f0.f5)) != (g_411 = (((l_408 , ((l_409 , l_410) , p_62.f2)) & p_61.f0) ^ p_61.f0))))) , p_62.f0))) <= 0xCF55851CC538B955LL) != g_103.f0.f0) || (*l_215)))), 1));
        (**g_90) = p_61.f3;
        (*l_412) = &g_103;
    }
    for (g_214.f1 = 0; (g_214.f1 == 17); g_214.f1 = safe_add_func_int32_t_s_s(g_214.f1, 1))
    {
        union U4 **l_416 = &l_344;
        l_416 = l_416;
        if (p_62.f1)
            continue;
    }
    return g_92;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_92.f0, "g_92.f0", print_hash_value);
    transparent_crc(g_92.f1, "g_92.f1", print_hash_value);
    transparent_crc(g_92.f2, "g_92.f2", print_hash_value);
    transparent_crc(g_92.f3, "g_92.f3", print_hash_value);
    transparent_crc(g_92.f4, "g_92.f4", print_hash_value);
    transparent_crc(g_92.f5, "g_92.f5", print_hash_value);
    transparent_crc(g_92.f6, "g_92.f6", print_hash_value);
    transparent_crc(g_92.f7, "g_92.f7", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_181.f0, "g_181.f0", print_hash_value);
    transparent_crc(g_181.f1, "g_181.f1", print_hash_value);
    transparent_crc(g_181.f2, "g_181.f2", print_hash_value);
    transparent_crc(g_181.f3, "g_181.f3", print_hash_value);
    transparent_crc(g_181.f4, "g_181.f4", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_214.f3, "g_214.f3", print_hash_value);
    transparent_crc(g_214.f4, "g_214.f4", print_hash_value);
    transparent_crc(g_274.f0, "g_274.f0", print_hash_value);
    transparent_crc(g_274.f1, "g_274.f1", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_322.f0, "g_322.f0", print_hash_value);
    transparent_crc(g_322.f1, "g_322.f1", print_hash_value);
    transparent_crc(g_322.f2, "g_322.f2", print_hash_value);
    transparent_crc(g_322.f3, "g_322.f3", print_hash_value);
    transparent_crc(g_322.f4, "g_322.f4", print_hash_value);
    transparent_crc(g_322.f5, "g_322.f5", print_hash_value);
    transparent_crc(g_322.f6, "g_322.f6", print_hash_value);
    transparent_crc(g_358.f0, "g_358.f0", print_hash_value);
    transparent_crc(g_358.f1, "g_358.f1", print_hash_value);
    transparent_crc(g_362.f0, "g_362.f0", print_hash_value);
    transparent_crc(g_362.f1, "g_362.f1", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_568.f0, "g_568.f0", print_hash_value);
    transparent_crc(g_613.f1, "g_613.f1", print_hash_value);
    transparent_crc(g_613.f2, "g_613.f2", print_hash_value);
    transparent_crc(g_613.f3, "g_613.f3", print_hash_value);
    transparent_crc(g_613.f4, "g_613.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
