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
   unsigned f0 : 16;
   unsigned f1 : 5;
   unsigned f2 : 19;
   unsigned f3 : 19;
   signed f4 : 22;
   unsigned f5 : 21;
   signed f6 : 31;
};

struct S1 {
   unsigned long long f0;
   unsigned f1;
   int f2;
   struct S0 f3;
   struct S0 f4;
   unsigned short f5;
   unsigned short f6;
   int f7;
};

struct S2 {
   unsigned f0 : 18;
   unsigned f1 : 7;
   signed f2 : 26;
   unsigned f3 : 1;
   unsigned f4 : 24;
   int f5;
   signed f6 : 22;
   unsigned f7 : 28;
   unsigned f8 : 28;
};

struct S3 {
   struct S1 f0;
   int f1;
   unsigned char f2;
   unsigned short f3;
   int f4;
   struct S1 f5;
   int f6;
};

struct S4 {
   struct S0 f0;
   struct S0 f1;
   unsigned f2;
   unsigned short f3;
};

struct S5 {
   unsigned f0 : 29;
};


static unsigned g_7 = 0x19ADB821L;
static struct S4 g_79 = {{169,3,626,246,-1997,1075,-44297},{192,0,239,151,-1136,1316,45790},0x6C4584B3L,9UL};
static unsigned g_138 = 0xA045B0E5L;
static int g_145 = 0x50D9DD06L;
static unsigned g_164 = 4294967287UL;
static unsigned g_177 = 18446744073709551607UL;
static struct S3 g_181 = {{0x1C7FA8C351D04491LL,0x7684E16BL,0x2753B413L,{14,2,262,234,88,1336,-8274},{123,1,418,238,-1955,526,-45410},0x9DE4L,0UL,-1L},2L,1UL,9UL,-1L,{0xAB730275B194EF10LL,7UL,0L,{93,2,433,402,-581,1354,-41379},{2,3,171,157,822,117,38917},0x89EEL,5UL,0xB2BF3D79L},0xE80386AEL};
static int g_209 = 0x50060146L;
static struct S2 g_217 = {399,0,7933,0,1694,0x3384EA6AL,662,14111,3115};
static struct S2 g_242 = {123,1,754,0,2141,-1L,657,8243,13829};
static char g_248 = (-5L);
static unsigned g_281 = 4294967295UL;
static struct S5 g_288 = {15267};
static int g_293 = (-6L);
static struct S5 g_304 = {18638};
static unsigned long long g_311 = 0x7A806710F93FCF11LL;
static unsigned long long g_312 = 0xF69F560C18B8C5D5LL;
static struct S4 g_368 = {{105,3,557,53,-128,1141,-3008},{59,4,452,506,2023,479,-6388},0x9CE8C6E8L,0x0508L};
static char g_385 = (-8L);
static long long g_411 = 0L;
static unsigned g_504 = 0xB028CD72L;
static unsigned long long g_602 = 0xBF0B20BE2FD11334LL;
static struct S0 g_668 = {227,0,614,177,-991,767,16879};
static unsigned long long g_673 = 18446744073709551612UL;
static int g_750 = 0xAD3726A3L;
static char g_795 = (-1L);
static unsigned g_883 = 0x3FDF8749L;
static int g_967 = 0xF8492E81L;



static char func_1(void);
static int func_3(short p_4, unsigned p_5, unsigned p_6);
static unsigned short func_13(short p_14, struct S0 p_15, unsigned p_16, unsigned p_17);
static unsigned short func_21(struct S0 p_22);
static int func_23(struct S1 p_24, struct S0 p_25, long long p_26, unsigned p_27);
static long long func_32(struct S2 p_33, struct S2 p_34);
static struct S2 func_35(struct S4 p_36, unsigned p_37);
static struct S4 func_38(unsigned short p_39, unsigned p_40, int p_41, unsigned p_42);
static struct S2 func_48(struct S0 p_49, unsigned p_50, unsigned p_51, struct S4 p_52, unsigned char p_53);
static struct S0 func_54(unsigned p_55);
static char func_1(void)
{
    char l_2 = 0x10L;
    struct S2 l_930 = {61,7,5282,0,1393,0x75AF83B6L,-1974,1486,10077};
    struct S0 l_937 = {199,0,722,585,241,1342,21744};
    if (l_2)
    {
        unsigned short l_8 = 0x941CL;
        struct S5 l_931 = {22588};
        struct S4 l_936 = {{11,2,396,394,-171,234,22358},{26,1,277,410,92,1267,28752},9UL,65535UL};
        l_936 = (func_3(g_7, g_7, l_8) , func_38((l_930 , (l_931 , 1UL)), (g_138 = (((((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((0xD5BDL ^ g_181.f0.f3.f3) <= g_668.f6) ^ 3L), g_79.f0.f5)), g_217.f7)) , l_931.f0) < g_668.f3) < l_931.f0) <= 0x3210DE05L)), g_368.f0.f3, g_181.f0.f3.f1));
        l_930.f6 = func_23(g_181.f0, l_936.f1, (l_936.f1.f5 , func_21(l_936.f0)), (l_937 , ((safe_lshift_func_uint16_t_u_u(func_21(l_937), (func_21(func_54((((safe_rshift_func_uint8_t_u_s((g_181.f2 = 0x57L), 5)) || 0xE6L) > l_937.f0))) ^ 253UL))) ^ g_181.f5.f6)));
        g_217.f5 = l_931.f0;
    }
    else
    {
        struct S0 l_968 = {95,2,142,505,-1890,1345,-37507};
        for (g_79.f2 = 0; (g_79.f2 <= 60); g_79.f2++)
        {
            char l_954 = 1L;
            int l_963 = 0xD19B1149L;
            int l_966 = 0x0CA3DD80L;
            l_937.f6 = (g_79.f0.f6 & ((safe_sub_func_int32_t_s_s((g_181.f0.f4.f4 = (safe_mul_func_int16_t_s_s((g_181.f5.f3.f0 ^ ((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((~(func_54(((g_368.f0.f4 && (((safe_mod_func_int32_t_s_s((l_954 | func_21(((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((0x804A42D6L || ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((l_963 = 65535UL), 7)), func_21(func_54((safe_rshift_func_uint16_t_u_s(1UL, ((g_967 = (g_883 , (l_966 = 0xD6EBL))) & g_181.f5.f3.f4))))))) != l_930.f1)), l_954)), g_181.f0.f3.f5)) , l_968))), g_181.f5.f3.f0)) , 0L) <= 0x3DCDDA11L)) && g_177)) , l_954)), 0UL)), g_181.f0.f4.f6)) || g_304.f0)), l_954))), l_954)) >= l_930.f4));
        }
        g_181.f0.f3.f6 = l_968.f2;
        g_79.f1 = l_937;
    }
    return l_930.f6;
}







static int func_3(short p_4, unsigned p_5, unsigned p_6)
{
    unsigned l_18 = 0x940C9BA5L;
    unsigned l_45 = 4294967287UL;
    struct S1 l_667 = {0x0C8480909318A9F7LL,0xBF7870D5L,1L,{232,3,100,205,-1529,235,15875},{52,2,0,81,397,414,36165},65529UL,65535UL,1L};
    int l_890 = (-8L);
    struct S3 l_891 = {{0xA0E27CD292B2DA48LL,0xAF300889L,-6L,{60,3,408,429,-1200,591,18811},{92,3,215,391,1200,1402,-26034},0x9A36L,65530UL,0xFDF7F42AL},0x02800CE9L,0xA4L,0x35D8L,0x8D7E08D8L,{0x3CB293C7CDFE67A3LL,0xF8FC87EAL,0L,{166,0,171,347,241,325,-36991},{66,2,443,475,1391,193,-11515},0x1D3BL,65531UL,6L},-1L};
    struct S0 l_892 = {13,0,106,643,1450,705,-2368};
    unsigned short l_896 = 0x6D67L;
    int l_897 = 0x44C2D99CL;
    struct S3 l_898 = {{0x0A1FA81FA51B8546LL,1UL,0L,{90,1,602,507,-981,1307,34695},{220,1,30,306,-1352,1066,261},0xAFD9L,1UL,0x3068F3E6L},0xDF7632F5L,1UL,0x3E2FL,0x5A18D8A2L,{1UL,0x4E1D5538L,0L,{126,2,311,156,-1926,920,8947},{39,4,545,149,-1310,123,44722},0x7ACBL,0x9083L,-1L},0x18DBBB48L};
    l_890 = ((safe_sub_func_uint32_t_u_u((p_5 & (safe_mul_func_uint16_t_u_u(func_13((l_18 ^ ((((safe_add_func_int64_t_s_s(((((p_5 , l_18) <= g_7) ^ (0x8DL == (func_21((l_667.f3 = (func_23((((safe_rshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((1UL && (l_18 ^ func_32((g_217 = func_35(func_38(((((safe_mod_func_uint64_t_u_u(0xBFC8A300FF6CFD11LL, l_45)) || l_18) > l_45) != l_18), g_7, l_18, g_7), l_45)), g_242))), l_45)) < 0UL), p_4)) < p_4) , l_667), g_668, p_6, p_4) , g_79.f1))) , l_667.f3.f4))) | 18446744073709551611UL), g_181.f5.f3.f5)) ^ 255UL) , p_4) != g_181.f1)), l_667.f4, p_5, g_181.f5.f3.f3), 5L))), p_4)) | l_667.f5);
    if ((((g_181.f2 = g_181.f0.f3.f4) && (l_891 , (func_23(g_181.f0, l_892, (safe_mod_func_int8_t_s_s(((g_242.f0 <= (safe_unary_minus_func_int64_t_s(p_4))) < (l_891.f6 > ((g_311 = ((g_181.f5.f4.f6 = ((g_79.f0.f1 && (func_21(g_79.f1) == l_896)) > p_6)) == g_668.f3)) , l_891.f5.f5))), g_181.f5.f0)), l_897) <= g_883))) <= g_217.f8))
    {
        unsigned char l_903 = 0UL;
        int l_908 = (-1L);
        int l_917 = (-1L);
        l_898 = l_898;
        for (l_898.f0.f2 = (-27); (l_898.f0.f2 >= (-10)); l_898.f0.f2 = safe_add_func_uint32_t_u_u(l_898.f0.f2, 1))
        {
            struct S1 l_904 = {1UL,0xB6211CDEL,-1L,{222,1,144,407,2032,258,-41462},{192,3,170,427,1544,497,-15983},0UL,0x26FDL,3L};
            struct S4 l_905 = {{55,4,264,47,401,303,2969},{178,0,365,278,182,717,-14039},1UL,0xCAFDL};
            g_668.f4 = (safe_add_func_int16_t_s_s((l_903 ^ p_4), ((l_667.f3.f3 ^ (func_23(l_904, l_898.f0.f3, g_368.f1.f4, l_898.f6) & g_368.f1.f0)) && 0UL)));
            l_891.f0.f4.f6 = (-1L);
            g_181.f0.f3.f4 = p_6;
            g_368 = l_905;
        }
        l_917 = (safe_mod_func_int8_t_s_s((0x620CE97D2475CF97LL >= (g_602 = (g_79.f3 && (l_667.f1 < (l_908 = p_5))))), (safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(0x941DL, (((((safe_mul_func_uint16_t_u_u((0UL || ((p_6 , ((l_903 & (safe_mul_func_int8_t_s_s((g_181.f0.f3.f5 & g_368.f0.f0), g_79.f0.f5))) == l_903)) >= g_79.f0.f6)), p_4)) , p_4) < g_181.f5.f6) <= g_242.f4) && 0xD9124C575F4CE402LL))), 0x90721CCC03B9A392LL))));
    }
    else
    {
        struct S1 l_918 = {1UL,0xB1E530CAL,0L,{186,3,502,577,-43,1267,4432},{7,3,250,628,-491,1161,-6113},0x6381L,1UL,0x4BF1C4B8L};
        l_918 = g_181.f5;
    }
    l_891.f0.f4.f4 = (safe_mul_func_int16_t_s_s(l_891.f5.f4.f3, (safe_rshift_func_uint16_t_u_s(((+(safe_sub_func_int64_t_s_s((+l_898.f5.f6), (safe_unary_minus_func_int16_t_s(0xFC27L))))) || (l_898.f1 = (+(((safe_sub_func_int16_t_s_s(g_312, g_281)) > (safe_lshift_func_int16_t_s_s(p_4, 1))) ^ p_4)))), 14))));
    return g_668.f5;
}







static unsigned short func_13(short p_14, struct S0 p_15, unsigned p_16, unsigned p_17)
{
    struct S2 l_695 = {331,9,-2523,0,1263,1L,1581,12956,5672};
    struct S3 l_818 = {{0UL,0x448D14A1L,1L,{117,3,594,596,-1005,991,-14161},{109,4,117,554,203,408,-28321},0x17DCL,0x2E7DL,0xD73D9243L},0L,0UL,0xE45FL,1L,{0UL,4294967292UL,0x92B0A2B3L,{118,4,651,386,1110,476,5598},{7,4,409,474,-1779,819,31104},0xC043L,65535UL,0x4B914FDDL},0x0FA39F72L};
    int l_884 = 0xD17EEC92L;
    int l_885 = (-9L);
    unsigned l_886 = 1UL;
    char l_889 = (-2L);
    if ((0x37A8L == (((safe_mod_func_uint16_t_u_u((func_21(p_15) && (p_15.f0 || (l_695.f6 = ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(((((safe_mul_func_int8_t_s_s(((g_217.f0 || func_23(((g_181.f5.f2 = (safe_mod_func_uint32_t_u_u(((1L <= (l_695.f2 = (l_695.f5 = func_32(l_695, l_695)))) == (-1L)), g_242.f0))) , g_181.f5), p_15, g_668.f5, g_181.f5.f3.f2)) & 8UL), 0xF2L)) & g_668.f2) && 0x067CF010D1DFF982LL) == p_15.f3), g_668.f5)), 12)) | g_181.f5.f3.f3)))), p_15.f3)) < p_14) >= 3L)))
    {
        struct S1 l_696 = {0x311C9F15565A1E31LL,1UL,1L,{163,0,74,87,-937,1072,15847},{44,2,273,84,415,835,-21971},0x2CD7L,0x43D0L,0x6563F921L};
        struct S1 l_736 = {0x270D475B927EF3B7LL,1UL,0xB330266EL,{209,2,227,140,918,236,-45161},{59,2,518,132,-1768,502,1753},0x5D4EL,65535UL,0x0E4CD8E0L};
        struct S0 l_737 = {188,2,669,165,76,1097,-36460};
        long long l_830 = 0xC1D637E99621D57FLL;
        struct S2 l_834 = {137,9,6239,0,2061,0L,-1690,5899,7014};
        long long l_872 = (-5L);
        l_696 = g_181.f0;
        for (g_145 = 3; (g_145 == (-5)); g_145 = safe_sub_func_int8_t_s_s(g_145, 3))
        {
            struct S5 l_699 = {4052};
            long long l_702 = 0x0C6C6B6B140A1181LL;
            int l_706 = 0xA49EF528L;
            struct S4 l_711 = {{114,2,8,516,-900,930,21516},{129,4,359,613,335,212,32108},0xAA5FC626L,0x11FFL};
            unsigned l_720 = 0x152D4185L;
            if (p_15.f0)
            {
                int l_703 = 0xCFA8209EL;
                g_304 = l_699;
                for (g_217.f5 = 0; (g_217.f5 > 6); g_217.f5 = safe_add_func_int64_t_s_s(g_217.f5, 7))
                {
                    l_702 = g_79.f2;
                    return l_695.f1;
                }
                l_703 = 0L;
                if (l_703)
                    continue;
            }
            else
            {
                char l_707 = 1L;
                int l_723 = 0xA295B805L;
                int l_733 = 0x7AB1813AL;
                l_696.f3.f4 = ((~((safe_sub_func_int8_t_s_s(((l_706 = p_15.f6) , l_707), (safe_sub_func_int16_t_s_s(p_15.f3, (l_695.f5 & (l_695.f6 = (safe_unary_minus_func_int64_t_s((l_711 , (safe_sub_func_uint8_t_u_u((l_711.f0.f3 > p_16), func_21(g_368.f1)))))))))))) > g_411)) | g_181.f0.f6);
                if ((((l_696.f3.f3 >= l_707) <= ((safe_sub_func_int64_t_s_s(g_668.f2, ((safe_sub_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(0x52L, p_15.f4)) == (g_138 ^ l_696.f4.f0)), func_21(g_181.f0.f3))) ^ 1L))) > 0x5E743C2065C98406LL)) ^ 2L))
                {
                    struct S0 l_728 = {159,2,179,376,1925,1191,-35057};
                    struct S1 l_734 = {0xEA6591000361AC3ELL,0xC38BC799L,0x5D08FE99L,{46,4,447,547,-1275,1373,15164},{60,4,616,151,-190,425,7734},0xBADDL,0xA319L,0L};
                    struct S1 l_735 = {0x19E6E365DF348465LL,0x092226CDL,-1L,{59,2,621,192,-1070,539,-3428},{146,1,166,399,1540,944,-21365},0xBF4EL,0x5A0AL,0x23C9EB57L};
                    g_181.f5.f4.f4 = l_720;
                    l_736 = (l_735 = (((g_181.f0.f4 , (p_15.f6 <= (l_733 = (((safe_mul_func_int16_t_s_s(p_15.f3, ((l_695.f2 = (((l_695.f1 | 0xB9B0L) && (l_723 = 0x22L)) , (safe_lshift_func_uint16_t_u_u(((l_696.f4.f6 = ((safe_add_func_uint16_t_u_u(func_21(l_728), ((((((((safe_add_func_uint32_t_u_u(((safe_add_func_int64_t_s_s(p_15.f3, (-1L))) , p_15.f5), g_79.f0.f2)) , 65535UL) >= p_16) != l_711.f2) , 4294967295UL) || l_711.f1.f2) < 0x1BL) <= l_711.f2))) , l_695.f4)) ^ p_15.f2), p_15.f3)))) & p_15.f6))) <= g_312) != l_728.f5)))) , l_734) , l_734));
                }
                else
                {
                    char l_751 = 0xEFL;
                    if (p_15.f4)
                        break;
                    g_217.f5 = (g_181.f0.f4.f4 = (func_21((func_54(p_14) , l_737)) < (l_711.f0.f6 = ((g_181.f2 = (safe_lshift_func_uint8_t_u_u(0x1EL, 7))) && ((safe_sub_func_uint64_t_u_u((((l_695.f6 = (func_21(l_711.f0) || (safe_sub_func_int64_t_s_s((safe_add_func_int8_t_s_s(0L, (func_21(l_737) >= p_15.f3))), p_16)))) || 0L) > 0UL), 0xB52AF3E167F6A3FCLL)) | l_736.f3.f3)))));
                    g_217.f2 = ((+(p_16 || (4294967287UL || (p_15.f0 == l_711.f1.f0)))) != ((~(safe_lshift_func_uint8_t_u_u(l_723, 5))) || (g_181.f2 = g_368.f1.f4)));
                    l_751 = (g_181.f2 != g_750);
                }
                g_181.f0.f4.f4 = ((safe_sub_func_int8_t_s_s(g_368.f0.f0, p_15.f5)) & g_368.f0.f4);
            }
        }
        if (g_181.f5.f4.f1)
        {
            struct S1 l_754 = {1UL,4294967295UL,0xC28A42B5L,{134,4,64,103,1887,1017,18894},{34,2,153,235,1421,1308,14718},65535UL,0x8151L,3L};
            unsigned long long l_769 = 18446744073709551615UL;
            struct S5 l_770 = {21410};
            unsigned l_773 = 0x5D44D545L;
            unsigned char l_790 = 0x48L;
            unsigned short l_820 = 0xCE73L;
            struct S2 l_831 = {354,10,7202,0,3250,0xE378A5EEL,-991,5373,5795};
            int l_846 = 0xB799A3E8L;
            l_736.f3.f6 = func_23(g_181.f0, l_696.f3, g_368.f1.f4, p_15.f6);
            if ((l_695 , (l_754 , (safe_rshift_func_int16_t_s_s((g_368.f1.f2 != (safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((l_696.f4.f6 = ((safe_rshift_func_uint16_t_u_u((l_737.f4 = (0L && (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(p_15.f2, (p_14 = ((((l_769 , (l_770 , ((g_304.f0 && func_21(g_368.f1)) , (-1L)))) | g_79.f3) > 0L) , l_754.f4.f0)))), g_79.f0.f0)))), 12)) >= g_79.f1.f3)), g_368.f0.f6)), p_15.f2))), 3)))))
            {
                long long l_780 = 0xDE7178A5D1CF2581LL;
                struct S3 l_821 = {{0x758691C2C69CF071LL,0x98D02A92L,1L,{197,2,99,142,155,554,26245},{119,3,21,422,1913,101,-7209},65535UL,0xF313L,1L},0x1397493CL,0x28L,0xA913L,0x45352C90L,{18446744073709551615UL,4294967295UL,0x8FB6EE2AL,{97,1,73,579,-1159,1072,-37613},{102,3,213,74,1047,461,-6179},65535UL,6UL,0x8E425DEEL},0x012A8F57L};
                if (g_181.f0.f3.f6)
                {
                    struct S0 l_788 = {201,4,201,473,1552,441,11426};
                    for (g_181.f5.f7 = 28; (g_181.f5.f7 > 18); g_181.f5.f7--)
                    {
                        unsigned short l_787 = 0xFE10L;
                        int l_789 = 1L;
                        g_750 = ((l_773 , g_138) , (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s(p_17, (l_780 < (((safe_sub_func_int16_t_s_s(0x81EFL, ((safe_sub_func_uint8_t_u_u(((l_695.f5 = g_79.f2) | (safe_mul_func_int8_t_s_s(((g_181.f5.f6 = (g_181.f0.f5 = l_787)) <= (l_789 = func_21(l_788))), 0x6AL))), l_790)) > g_368.f0.f6))) == 247UL) & g_181.f5.f3.f1)))) ^ 0x117EL) , g_281), 1L)), l_787)));
                        g_242.f2 = func_21(g_79.f0);
                    }
                    l_695.f2 = (safe_add_func_int32_t_s_s((-4L), ((((g_795 = (safe_add_func_uint8_t_u_u((g_181.f2 = 252UL), g_411))) & p_17) > p_15.f4) ^ 0UL)));
                }
                else
                {
                    unsigned l_828 = 0xE3751CB8L;
                    char l_841 = 0x05L;
                    int l_847 = 0x1B0BA9EFL;
                    struct S1 l_848 = {1UL,0xC3A9BE25L,-7L,{186,2,361,598,1741,743,23536},{192,1,363,245,-982,1394,14277},1UL,0x6B96L,0L};
                    g_181.f6 = (p_15.f6 = (+0x0ADA3FC5L));
                    if ((safe_mod_func_int8_t_s_s(g_368.f0.f6, l_780)))
                    {
                        long long l_817 = 0L;
                        struct S3 l_819 = {{1UL,0x863AB3FFL,0x5707902BL,{203,2,55,399,-1906,479,-29075},{206,4,655,330,164,345,-15480},65528UL,65534UL,0x301A438FL},0x457F0E37L,8UL,0x5F83L,4L,{0x2F7E51AEE6B8C348LL,0x90A83BD6L,0x571F556DL,{74,0,237,259,1757,559,16796},{35,1,71,621,-97,199,-43598},65535UL,0x81FEL,8L},0xA7442375L};
                        g_368.f0.f4 = ((g_181 , g_750) || (safe_mul_func_uint16_t_u_u(g_368.f1.f6, (0xDC9E1E93L < (l_817 = (safe_rshift_func_int16_t_s_s((p_14 = (safe_mul_func_int8_t_s_s((((safe_mod_func_int64_t_s_s((((g_79.f0.f6 | (safe_add_func_uint32_t_u_u(l_696.f4.f1, (safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s(0x9E86L, (safe_mod_func_int8_t_s_s((p_17 || (safe_add_func_int16_t_s_s((l_754.f4.f4 = (safe_unary_minus_func_uint64_t_u((~0xC32224A2281EB265LL)))), l_737.f0))), l_780)))), 0x2A3F958FF0447D73LL))))) < p_15.f6) == 1L), (-1L))) > g_181.f0.f4.f0) != 1L), 0x14L))), 0)))))));
                        l_819 = l_818;
                        g_217.f6 = 0L;
                    }
                    else
                    {
                        unsigned char l_829 = 0x49L;
                        unsigned l_832 = 0UL;
                        struct S3 l_833 = {{18446744073709551615UL,4294967295UL,1L,{84,3,157,486,1996,693,8087},{53,3,720,487,-1142,1131,7876},0x2B80L,65535UL,-6L},4L,0xF3L,0x9830L,0L,{0x3DE3A1424E005DFBLL,4294967289UL,1L,{187,4,119,77,362,825,-15530},{147,4,592,62,1726,220,27565},5UL,0x0C2DL,0xF95DF2A5L},0xDE993F3CL};
                        p_15.f6 = (func_32(func_35(func_38(((((l_820 = g_181.f5.f3.f0) ^ (((l_821 , 0xB57E3596L) > 1L) == (safe_lshift_func_uint16_t_u_s((p_17 || (g_602 = ((g_368.f1.f5 ^ (1L <= (~(safe_add_func_uint64_t_u_u((+((((l_829 = (safe_add_func_int64_t_s_s(l_828, g_181.f0.f4.f4))) > 65535UL) | l_830) ^ g_79.f0.f5)), 0L))))) > 4294967289UL))), l_754.f3.f6)))) & l_828) && 255UL), g_242.f2, g_181.f5.f4.f4, l_828), g_7), l_831) == 18446744073709551615UL);
                        l_832 = p_15.f4;
                        l_833 = l_833;
                        l_821.f6 = ((+(func_32((l_831 = l_834), g_242) , ((l_831.f6 = (p_16 = (safe_sub_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((((l_818.f0.f1 < (l_841 < g_368.f1.f4)) > l_833.f0.f1) ^ (safe_mul_func_uint16_t_u_u(p_15.f5, (safe_add_func_uint32_t_u_u((func_21(l_818.f0.f3) == 0UL), g_242.f7))))) < p_15.f4), g_181.f5.f3.f1)), l_754.f2)) ^ 0x1DAE60E75354DFCDLL), 0x93F5C0BEL)))) , g_668.f5))) == 255UL);
                    }
                    l_847 = l_846;
                    l_848 = l_754;
                }
                for (l_818.f5.f6 = 0; (l_818.f5.f6 <= 21); l_818.f5.f6 = safe_add_func_int16_t_s_s(l_818.f5.f6, 1))
                {
                    l_695.f6 = (safe_rshift_func_uint16_t_u_s((9L < (l_754.f3.f6 <= (((g_79.f1.f4 != func_21(p_15)) , p_14) || (+(safe_mul_func_uint8_t_u_u(((g_411 = p_14) == (g_217.f6 , (func_21(func_54(g_368.f0.f3)) >= 255UL))), g_181.f0.f7)))))), l_736.f4.f2));
                    p_15 = p_15;
                    return g_368.f0.f3;
                }
            }
            else
            {
                int l_857 = 0x43BEC5AAL;
                unsigned short l_864 = 0UL;
                p_15.f4 = (safe_add_func_int64_t_s_s((func_23(g_181.f5, p_15, p_15.f4, ((-3L) >= ((g_312 & (l_857 || (g_181.f0.f4.f3 != ((safe_lshift_func_int8_t_s_s((l_736.f3.f4 = (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((+1UL), 14)), p_14))), l_818.f0.f6)) || 1L)))) == l_864))) != 0x2B5EL), 18446744073709551615UL));
                return g_504;
            }
        }
        else
        {
            struct S3 l_865 = {{0UL,0xB67A5E14L,6L,{69,4,237,593,1021,501,-42901},{253,3,310,541,285,1080,-44696},0x40FFL,0x8F6AL,0x6D0A98E3L},1L,0x8EL,0x764DL,0x78DB3CDCL,{1UL,2UL,0x1A90E4C8L,{52,2,232,142,-560,383,10161},{30,1,105,592,1083,1121,-8973},0UL,0x88F0L,0L},-9L};
            l_865 = l_865;
        }
        p_15.f6 = (((p_14 == (l_736.f3.f4 = ((safe_sub_func_uint8_t_u_u(l_695.f1, (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((~func_23(l_696, l_696.f3, ((+l_818.f5.f4.f4) , (7UL != ((g_368 , l_736.f7) == p_15.f0))), g_368.f1.f1)), l_872)), 0)))) > p_14))) | g_181.f5.f4.f2) | 0x68L);
    }
    else
    {
        struct S5 l_873 = {18315};
        g_181.f0 = (l_873 , g_181.f5);
        p_15.f4 = g_79.f0.f3;
    }
    p_15.f4 = (p_15.f2 && (safe_mod_func_int64_t_s_s(p_15.f2, ((0x45230AB9L >= (((l_818.f5.f0 != (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((safe_rshift_func_uint16_t_u_u(0xF2F8L, 6)))), g_368.f3))) ^ (((safe_mul_func_uint16_t_u_u((g_883 || (l_884 && 4UL)), (-1L))) && g_181.f0.f3.f4) >= l_885)) == 0x0A46L)) | 0x7EC4099FF7C9F275LL))));
    g_668.f4 = ((l_886 , (safe_mul_func_uint16_t_u_u(func_23(l_818.f0, func_54(g_181.f5.f5), g_181.f5.f4.f5, l_818.f2), (l_818.f0.f4.f2 , (p_15.f0 ^ l_818.f0.f4.f1))))) , p_15.f2);
    return l_889;
}







static unsigned short func_21(struct S0 p_22)
{
    return p_22.f6;
}







static int func_23(struct S1 p_24, struct S0 p_25, long long p_26, unsigned p_27)
{
    struct S2 l_671 = {141,10,6419,0,2409,-1L,136,14411,3203};
    struct S2 l_672 = {290,4,7170,0,690,4L,1558,10203,8248};
    unsigned short l_674 = 0x286CL;
    int l_679 = 0x99684319L;
    int l_680 = 0x70D50FA1L;
    int l_683 = 0x00114531L;
    struct S5 l_684 = {18110};
    g_181.f4 = g_242.f7;
    l_684 = (((((safe_sub_func_uint64_t_u_u((func_32((g_242 = l_671), (l_672 = g_217)) > (g_673 = 0xD930L)), (l_674 >= g_217.f8))) <= (g_181.f5.f1 >= (l_683 = ((safe_add_func_int16_t_s_s((+(safe_mul_func_int16_t_s_s((l_680 = (l_679 = l_674)), (safe_add_func_uint8_t_u_u(g_7, l_671.f1))))), 0x9247L)) | 0x435DL)))) != 0xFCB324A7L) , p_25.f6) , l_684);
    return g_181.f0.f3.f4;
}







static long long func_32(struct S2 p_33, struct S2 p_34)
{
    unsigned l_243 = 0x8982A686L;
    int l_249 = 0xF1D65AB0L;
    int l_250 = 1L;
    unsigned l_279 = 0x0B0B6822L;
    struct S0 l_283 = {29,0,535,237,-1306,1300,35942};
    struct S5 l_305 = {15159};
    int l_306 = 0L;
    unsigned char l_324 = 1UL;
    struct S2 l_339 = {320,5,1579,0,1513,0L,-387,9910,8926};
    unsigned l_343 = 0x1E8CC54EL;
    unsigned l_366 = 1UL;
    struct S1 l_369 = {18446744073709551615UL,0xB671F2BBL,0xE6E7EA0EL,{142,3,632,634,10,339,-13894},{68,2,555,703,1185,1187,-14762},65535UL,0x2241L,9L};
    unsigned l_458 = 0x75848D19L;
    struct S4 l_482 = {{96,2,600,8,-810,671,31446},{167,4,347,503,153,1408,-29048},4294967294UL,1UL};
    char l_544 = 0x7BL;
    struct S3 l_612 = {{0x3266AC07843254E8LL,0xA3CA4E73L,0x1647D115L,{206,1,213,233,126,352,15112},{22,1,481,348,-1352,1032,2095},65535UL,5UL,0xB01EEF3EL},-1L,1UL,0x897CL,-10L,{0x4D3C2205079ADD2ELL,0UL,-1L,{34,2,659,504,-1018,464,-30280},{227,0,153,692,-1803,1235,-11784},0xE160L,0UL,-2L},0x093EF40AL};
    unsigned char l_649 = 0x41L;
    if ((l_243 | ((l_250 = (safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((0x5F5B2EFFL == ((p_33.f3 || (g_181.f5.f4.f6 != g_181.f6)) ^ (p_33.f7 == 0x8AL))) & g_79.f0.f4), (l_249 = (g_248 = p_33.f1)))), p_34.f8))) , 247UL)))
    {
        int l_259 = (-9L);
        struct S0 l_260 = {152,4,42,367,256,230,18012};
        struct S5 l_261 = {14834};
        struct S4 l_282 = {{96,2,330,635,289,248,35090},{209,0,15,261,247,218,-6782},1UL,0x493CL};
        struct S3 l_326 = {{5UL,0x6D2AF7D0L,0x8511230DL,{187,4,397,691,1545,1260,-7643},{246,0,352,497,1157,1167,13810},0x5F18L,0x327FL,0x038DC0A0L},0x953E3AA3L,0x22L,0x9A66L,0xEA2114C4L,{18446744073709551612UL,0UL,1L,{105,3,333,650,-1812,267,-40741},{241,3,139,212,-1330,1300,40621},0xB2B6L,65534UL,0x05EC51C2L},0x6DC12A83L};
        unsigned char l_362 = 0UL;
        struct S5 l_367 = {22460};
        long long l_404 = 0xDD67612959C5DEE8LL;
        long long l_412 = 4L;
        char l_428 = 0x6DL;
        p_34.f6 = (safe_mul_func_int16_t_s_s(0x440EL, ((safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(g_181.f0.f5, (((safe_mul_func_uint16_t_u_u(p_33.f0, (l_259 ^ (0L > (l_259 || p_34.f1))))) == p_33.f1) | g_79.f1.f3))) | l_259), 1UL)) || p_33.f1)));
        if (((l_260 = func_54(g_181.f5.f6)) , (1L != ((l_261 , (safe_sub_func_uint8_t_u_u(p_33.f1, ((safe_mod_func_uint8_t_u_u((0UL && (l_249 = p_34.f4)), ((0x902092CFL && (g_181.f5.f4.f6 = (safe_unary_minus_func_uint32_t_u((safe_sub_func_int32_t_s_s(g_138, 0L)))))) && 0x14L))) == 0xD80B5903L)))) && l_249))))
        {
            short l_280 = (-2L);
            l_260.f6 = (safe_rshift_func_uint8_t_u_s(((((((safe_mul_func_int8_t_s_s(((l_260.f4 = ((g_281 = (safe_add_func_int16_t_s_s((p_34.f7 && ((safe_lshift_func_uint16_t_u_s((l_280 = (l_279 = ((g_181.f5.f4.f5 , (g_181 , (p_34 , p_33.f7))) ^ (p_34.f3 | (l_260.f2 >= (((g_242.f8 = 0x3E1AF96DL) <= g_181.f5.f1) & p_34.f5)))))), 14)) & g_181.f5.f2)), 0L))) , 0x908DL)) < l_260.f0), p_33.f7)) , l_282) , 0x496DEB3A4BC7448ALL) || 0x002B25D4755CA80ELL) != 0xD504L) != p_33.f0), l_249));
        }
        else
        {
            l_283 = l_282.f0;
            g_217.f6 = (safe_lshift_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(((((-1L) <= (p_33.f8 = g_181.f0.f3.f4)) > (g_288 , 0x92B66B90L)) ^ (l_261 , (safe_mul_func_uint16_t_u_u(l_282.f1.f3, (g_181.f0.f6 = 65535UL))))), g_79.f0.f4)) || (safe_lshift_func_int8_t_s_u((g_293 = ((l_283.f3 , 0xCFB3292310EE9FE0LL) <= 0UL)), p_33.f2))), 2));
            if (((safe_mul_func_int16_t_s_s(g_181.f0.f6, (safe_add_func_uint8_t_u_u(l_249, ((safe_mod_func_int32_t_s_s((p_34.f5 ^ ((safe_rshift_func_int8_t_s_s(g_217.f0, p_34.f6)) == 0xD4L)), ((((safe_mul_func_uint64_t_u_u(p_34.f6, (l_259 <= p_33.f5))) >= 0x00EC429CL) , 0xF3CAA955L) , g_181.f5.f1))) >= g_242.f8))))) ^ p_34.f4))
            {
                p_34.f5 = p_34.f8;
                p_33.f6 = 9L;
            }
            else
            {
                int l_323 = 0xF13ABF14L;
                l_282.f1 = g_181.f5.f4;
                l_305 = g_304;
                if (((g_312 = ((((4UL >= 1L) != 8L) > (l_306 = (g_79.f0.f3 , g_7))) ^ (l_283.f1 , (g_181.f0.f1 | ((~(~(~(g_311 = (safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s(g_181.f0.f4.f1, g_181.f0.f2)), 9UL)))))) , p_33.f5))))) < g_281))
                {
                    l_324 = (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((g_181.f5.f1 || ((((g_242.f1 ^ ((0L > p_33.f0) <= g_248)) ^ ((l_305 , (l_260.f4 = (safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((g_181.f2 > ((safe_lshift_func_int16_t_s_s((l_249 = p_34.f6), (l_323 || p_34.f1))) && 249UL)), l_323)), 18446744073709551615UL)))) , g_181.f5.f4.f4)) ^ g_79.f1.f3) , p_34.f1)), g_217.f1)), 0x3FL));
                    return g_181.f5.f4.f4;
                }
                else
                {
                    struct S3 l_325 = {{0UL,1UL,-6L,{23,2,19,422,207,8,-19616},{60,3,226,500,-1099,130,4716},0xF58AL,65528UL,0L},0x8FCB661FL,254UL,0xE08FL,1L,{0xEE41F4C952C124EFLL,4294967295UL,0xB40FBC4BL,{179,3,617,662,593,1238,23163},{95,1,598,273,1169,868,-28403},8UL,65534UL,9L},0x85E20276L};
                    l_326 = l_325;
                    l_323 = (l_325 , ((p_33.f8 && (safe_add_func_int8_t_s_s((g_248 = (g_242.f5 <= 0xF0L)), ((safe_sub_func_uint32_t_u_u(l_283.f6, ((-2L) || l_326.f0.f4.f5))) && 0x10376873L)))) <= (l_325.f5.f3.f6 = 0xE9L)));
                    if (g_79.f2)
                    {
                        g_145 = 0L;
                    }
                    else
                    {
                        return g_79.f0.f5;
                    }
                }
                g_145 = (p_33.f0 == g_242.f1);
            }
        }
        if ((g_181.f5.f4.f0 && (safe_rshift_func_uint16_t_u_s(l_326.f0.f4.f0, (g_164 | l_324)))))
        {
            struct S0 l_336 = {249,1,498,425,1477,23,31717};
            int l_346 = (-1L);
            for (g_242.f5 = 2; (g_242.f5 >= 4); g_242.f5 = safe_add_func_uint32_t_u_u(g_242.f5, 8))
            {
                int l_342 = (-10L);
                int l_355 = 1L;
                if (g_181.f0.f3.f5)
                {
                    unsigned char l_335 = 0x7CL;
                    g_181.f0.f3.f4 = g_181.f0.f6;
                    if (l_335)
                        break;
                }
                else
                {
                    l_336 = g_181.f5.f3;
                    for (l_326.f2 = 0; (l_326.f2 == 32); l_326.f2 = safe_add_func_uint32_t_u_u(l_326.f2, 6))
                    {
                        l_336.f6 = ((p_34.f6 = (!(p_34.f2 = g_79.f1.f0))) != (l_339 , 0L));
                        g_79 = g_79;
                        l_326.f0.f4.f6 = (l_336.f1 , l_283.f1);
                    }
                }
                l_343 = (safe_mul_func_int16_t_s_s(l_336.f0, ((0xD168L <= (p_34.f1 <= 0UL)) < l_342)));
                p_34.f6 = (safe_add_func_int8_t_s_s(3L, ((l_346 <= (((p_33.f5 ^ (l_283.f3 | ((l_326.f0.f3.f0 < l_342) == (safe_mul_func_int8_t_s_s(l_336.f3, (l_261 , (safe_sub_func_uint8_t_u_u(((l_326.f6 = (l_282.f0.f6 = (g_181.f2 = (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((g_248 = ((l_283.f4 = ((l_355 = g_79.f0.f0) < l_283.f6)) == 0x95L)), l_342)), 0x6DA3L))))) || 0xF5L), l_326.f5.f3.f1)))))))) | g_79.f1.f6) < l_342)) , 1UL)));
            }
            g_181.f0.f3.f4 = (l_243 >= (l_339.f4 < l_336.f3));
        }
        else
        {
            struct S1 l_356 = {1UL,0xE1EE968CL,1L,{8,1,440,38,36,540,35201},{197,3,571,241,394,175,-23543},7UL,0x81DFL,-1L};
            unsigned long long l_400 = 0UL;
            struct S5 l_425 = {4862};
            l_356 = (l_326.f0 = g_181.f0);
            for (g_281 = 0; (g_281 != 15); g_281++)
            {
                short l_361 = 7L;
                struct S4 l_365 = {{176,2,436,190,-1359,369,-44853},{48,2,369,402,1672,1133,-41577},4294967287UL,6UL};
                struct S2 l_401 = {14,4,1538,0,2027,0xC7A37E1AL,-690,11503,13755};
                struct S1 l_424 = {0xBA92FB1351C25EF9LL,2UL,0x35CCD274L,{236,2,243,666,1953,239,3581},{11,4,410,234,139,921,39128},0x2489L,0x4B65L,0x4FE4D7F0L};
                for (l_259 = 19; (l_259 > 0); --l_259)
                {
                    l_365 = (l_326 , func_38((l_362 = l_361), (p_33.f5 != (safe_sub_func_uint64_t_u_u((((65532UL != g_181.f5.f2) && 4294967295UL) < p_33.f8), ((g_217.f6 || (((g_181.f0.f4.f1 | 4UL) ^ g_181.f0.f1) <= l_326.f6)) && p_34.f2)))), g_209, g_79.f1.f4));
                    if (l_366)
                        break;
                    g_368.f1.f4 = (func_35((l_367 , g_368), (g_288.f0 = ((l_326.f0 = l_369) , (g_79.f0.f2 = 0x7F494BFDL)))) , p_33.f7);
                }
                if (p_34.f0)
                {
                    char l_384 = 7L;
                    for (g_181.f0.f7 = (-27); (g_181.f0.f7 != (-7)); g_181.f0.f7 = safe_add_func_uint16_t_u_u(g_181.f0.f7, 4))
                    {
                        int l_382 = (-5L);
                        p_33.f6 = (((safe_mul_func_int16_t_s_s((l_356.f3.f4 = (safe_mul_func_int8_t_s_s((((safe_mod_func_int32_t_s_s((l_282.f1.f6 = (((g_385 = (safe_add_func_uint16_t_u_u(((g_181.f0.f4.f5 != g_217.f6) , ((safe_lshift_func_int8_t_s_u((g_304 , g_181.f0.f6), (((l_382 || (safe_unary_minus_func_uint8_t_u((l_326.f5.f3.f4 = l_369.f4.f0)))) & (l_356.f4 , (l_356.f4.f6 = (((((p_34.f3 != (l_384 || p_33.f0)) , 0xC1D9L) >= (-2L)) <= 8L) && 0xC8CAL)))) || p_33.f7))) & g_368.f1.f5)), 0xF9FCL))) && p_34.f8) & 0x019032EBL)), p_33.f0)) , p_34.f7) | g_242.f0), 0x3CL))), p_33.f0)) & p_34.f6) | g_138);
                        l_356.f3 = func_54(((safe_add_func_int8_t_s_s((g_312 , p_34.f7), (safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(65535UL, (safe_mul_func_uint16_t_u_u((l_382 ^ (l_356.f4.f0 | g_242.f1)), 0xA65BL)))), p_33.f5)))) , p_33.f1));
                        g_181.f4 = 0x5F3B14E4L;
                        g_181.f5.f3.f4 = (l_382 = g_79.f3);
                    }
                    p_34.f5 = ((((((l_369.f4.f4 = l_365.f1.f5) && l_365.f0.f0) && (safe_rshift_func_int8_t_s_u((g_248 = p_33.f7), 1))) | 1L) && (((l_356.f4.f6 = (l_249 = (safe_rshift_func_int16_t_s_u(l_365.f0.f2, g_181.f0.f3.f6)))) >= (func_38(((~g_368.f1.f1) != (safe_sub_func_int16_t_s_s(g_217.f5, (l_356.f3.f6 = ((0x492F84B1L <= p_33.f2) , 1L))))), l_400, l_365.f0.f2, l_259) , l_356.f0)) ^ (-9L))) >= l_384);
                    l_401 = g_217;
                }
                else
                {
                    g_368.f0.f4 = (l_282.f0.f6 = (safe_rshift_func_uint8_t_u_u((l_404 = l_401.f7), 2)));
                }
                if (l_326.f5.f3.f4)
                    continue;
                if ((safe_lshift_func_int8_t_s_u((p_34.f1 == (safe_mul_func_uint16_t_u_u((0xBB26L | g_368.f0.f5), (((((5L && (0xFBBA899021FA37E4LL && p_33.f2)) && ((g_79.f0.f2 = (g_217.f1 | ((safe_mod_func_uint8_t_u_u(0x6EL, (((0x1CL && p_33.f2) ^ p_33.f5) || l_339.f6))) && g_411))) <= 0xC95B8A1CL)) ^ l_412) >= l_369.f4.f2) < l_339.f1)))), 0)))
                {
                    if ((l_356.f3.f5 ^ p_34.f7))
                    {
                        unsigned l_421 = 0UL;
                        p_33.f2 = l_369.f2;
                        g_181.f5.f4.f4 = (p_33.f2 = (7UL || p_33.f6));
                        l_326.f5.f3.f4 = (safe_mod_func_int16_t_s_s((l_282.f1.f6 = (safe_mul_func_int16_t_s_s((p_33.f8 > (l_369.f3.f6 = (safe_sub_func_uint64_t_u_u(p_33.f7, (safe_mul_func_int16_t_s_s(((~l_421) | g_242.f6), (safe_lshift_func_int8_t_s_s((!(l_424 , (p_33.f8 >= (l_425 , (6L & (p_33.f4 = (65535UL >= 0x70FEL))))))), 6)))))))), p_33.f7))), g_217.f8));
                        g_217.f5 = l_250;
                    }
                    else
                    {
                        l_428 = (safe_rshift_func_int8_t_s_u(0x8AL, g_7));
                    }
                    for (g_181.f4 = 0; (g_181.f4 == (-19)); g_181.f4 = safe_sub_func_int8_t_s_s(g_181.f4, 1))
                    {
                        struct S1 l_431 = {0x383A0A6A0F4B8B36LL,4294967295UL,0xBE31F28FL,{197,0,62,589,220,861,6292},{86,0,548,689,-1066,844,46004},0x5D18L,0xD1CEL,0xE6F384B4L};
                        g_145 = l_356.f4.f6;
                        p_33.f6 = p_33.f1;
                        p_33.f2 = (p_33.f8 ^ ((-1L) == ((l_431 , l_282.f0.f1) ^ (l_339.f1 < g_217.f6))));
                    }
                    g_181.f0.f3.f4 = ((((safe_sub_func_int32_t_s_s((((g_79.f1.f0 || l_282.f0.f0) ^ g_181.f2) ^ g_368.f3), ((g_79.f0.f1 = g_79.f3) && ((g_368.f1.f5 && (safe_rshift_func_int8_t_s_u((0xD6F6L != (p_33.f7 == (g_79.f3 = l_261.f0))), l_356.f3.f0))) == p_33.f1)))) , p_33.f5) < l_401.f3) && p_34.f0);
                }
                else
                {
                    struct S1 l_436 = {0x93A28B38BB6957D0LL,8UL,4L,{95,0,679,420,-1642,1250,-8368},{250,3,6,277,1179,852,7764},0UL,4UL,0x6A2B71A5L};
                    l_436 = l_424;
                }
            }
        }
    }
    else
    {
        int l_443 = 0x86C99677L;
        int l_450 = 0x64F66DC4L;
        int l_451 = (-1L);
        struct S1 l_463 = {18446744073709551615UL,4294967291UL,0L,{73,0,690,521,-126,169,5847},{95,3,487,316,-474,378,43609},1UL,1UL,0L};
        short l_485 = 0x7C91L;
        struct S4 l_505 = {{118,3,139,37,-493,661,-9118},{115,4,331,35,1542,511,27523},0x3FFB0C41L,1UL};
        struct S4 l_506 = {{80,2,125,295,1150,79,23705},{175,1,252,55,-992,107,-20577},4294967287UL,1UL};
        unsigned char l_586 = 0x05L;
        long long l_609 = (-7L);
        struct S3 l_628 = {{0xBFC16CF829CD28B6LL,0xBB0BF3C7L,0x775364F5L,{224,3,518,623,85,423,37207},{19,1,585,220,-225,1351,17197},65535UL,1UL,1L},0x365C1901L,9UL,0x32FEL,6L,{1UL,0x835F7C0EL,0xCC072976L,{49,3,340,12,654,918,24814},{59,0,70,415,-242,774,-32203},0xD23DL,65528UL,0xA7B02EB4L},0xF57371C9L};
        if ((safe_rshift_func_int16_t_s_s((l_451 = (safe_mul_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(g_181.f5.f5, (l_443 | l_369.f1))) > (l_443 && p_34.f7)), (g_181.f2 = (safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(g_288.f0, 7)) , l_443), (l_450 = ((safe_add_func_int8_t_s_s(g_181.f0.f4.f0, p_34.f1)) , l_339.f5)))))))), 2)))
        {
            long long l_459 = 0L;
            int l_460 = 0x84C1782CL;
            int l_462 = 0xE5AECF71L;
            int l_464 = (-10L);
            unsigned l_467 = 0xF76B5671L;
            char l_468 = (-2L);
            struct S1 l_471 = {0xC12A4E067BA0C656LL,0x55C750C4L,0xE5080FB0L,{154,0,400,501,1293,22,-27349},{209,0,717,204,-886,1437,-8022},0UL,65526UL,0L};
            p_34.f2 = p_34.f2;
            for (g_217.f5 = (-16); (g_217.f5 != (-12)); g_217.f5++)
            {
                unsigned long long l_461 = 0x0A2A4DAAF7661EF7LL;
                g_79.f0.f6 = (((0x099631E407579A6CLL && ((g_181.f5.f4.f5 != ((((l_459 = (safe_mul_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(p_34.f8, l_458)) <= g_181.f0.f4.f3), (p_34.f8 , g_368.f3)))) ^ (l_462 = (l_461 = ((l_460 = p_34.f3) , (g_248 = l_460))))) , l_463) , g_181.f5.f4.f4)) | 0x56L)) || l_463.f2) > l_464);
                l_250 = ((safe_rshift_func_int8_t_s_s((l_467 ^ l_468), 6)) , (0xCCL != l_468));
            }
            l_369.f3.f6 = (safe_rshift_func_int8_t_s_u(((l_471 , l_471.f4) , ((l_339.f6 = (safe_rshift_func_int8_t_s_u((0x1227L > g_181.f5.f0), (l_471.f4.f4 = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((l_463.f3.f6 = (!g_181.f5.f5)) , l_463.f4.f1), 6)), g_181.f0.f3.f5)))))) | ((l_369.f3.f4 = (safe_sub_func_int8_t_s_s(p_34.f3, p_34.f0))) ^ p_33.f2))), 4));
        }
        else
        {
            l_485 = ((((p_34.f1 == (g_242.f0 | g_181.f5.f4.f0)) & (safe_lshift_func_uint16_t_u_s((l_451 = l_369.f3.f0), (l_482 , (l_324 <= (((l_463.f4.f4 = l_339.f0) <= p_33.f8) >= (safe_mod_func_int64_t_s_s((g_181.f5.f3.f5 && 1L), 0x1F8AED01CF881871LL)))))))) >= l_463.f1) <= g_181.f5.f6);
        }
        for (g_368.f3 = 19; (g_368.f3 > 57); g_368.f3 = safe_add_func_int32_t_s_s(g_368.f3, 2))
        {
            unsigned char l_502 = 0x70L;
            int l_503 = 1L;
            for (g_181.f4 = 0; (g_181.f4 > 25); g_181.f4++)
            {
                unsigned short l_490 = 0xF5F9L;
                l_339.f2 = l_490;
                for (l_306 = 0; (l_306 == 21); l_306++)
                {
                    unsigned l_497 = 0x1DBFD68DL;
                    if ((l_490 <= (((safe_rshift_func_int16_t_s_u((l_283.f4 < ((((safe_rshift_func_int8_t_s_u(l_497, (safe_mul_func_uint8_t_u_u(p_34.f4, ((g_79.f2 > (p_33.f8 , (safe_lshift_func_int16_t_s_u(g_181.f0.f4.f5, g_79.f0.f0)))) & (g_181.f5.f5 ^ l_502)))))) | g_312) == 1L) & l_503)), 14)) , g_217) , (-10L))))
                    {
                        g_504 = p_34.f3;
                        g_217.f2 = 3L;
                        l_506 = (l_505 = g_79);
                    }
                    else
                    {
                        return g_79.f0.f3;
                    }
                    l_503 = l_505.f0.f5;
                }
                return l_339.f7;
            }
            if (g_242.f4)
                continue;
            l_369.f3.f4 = g_181.f0.f4.f6;
        }
        if (((p_33.f5 >= (p_34.f8 && (l_463.f1 && ((l_506.f0.f5 && (safe_mul_func_int16_t_s_s((p_33.f1 < p_34.f5), (((l_369.f3.f4 = (safe_mul_func_int8_t_s_s(0xABL, l_463.f3.f0))) < ((p_33.f0 || 0x7C24AACEL) || p_33.f7)) >= 0x896EL)))) , g_181.f0.f0)))) && l_451))
        {
            unsigned l_515 = 0xBBEB499BL;
            int l_516 = 0x5C92528DL;
            struct S4 l_526 = {{95,2,174,634,1499,872,-31947},{57,2,174,343,-1294,1046,20606},0x992C45BBL,6UL};
            l_506.f0.f6 = g_312;
            if ((((((l_505.f1.f4 = (+g_181.f0.f1)) || ((l_506 , (safe_lshift_func_uint16_t_u_u(((-3L) && (p_34.f4 ^ ((l_339.f6 = (l_516 = (0L != (g_181.f0.f4.f3 | ((g_368.f0.f1 , ((safe_add_func_uint16_t_u_u(l_515, 0x0FC3L)) > p_34.f4)) <= 0x28L))))) <= l_339.f5))), l_369.f3.f5))) == 0x86F5L)) ^ g_181.f5.f3.f2) != p_33.f1) < g_181.f0.f1))
            {
                long long l_519 = 1L;
                int l_520 = 0x79D217B6L;
                unsigned char l_521 = 0x8AL;
                unsigned short l_584 = 0x7D85L;
                int l_585 = (-1L);
                l_520 = (safe_mul_func_uint16_t_u_u((g_181.f5.f3.f3 | p_33.f3), l_519));
                if ((g_79.f0.f6 = l_521))
                {
                    unsigned l_524 = 0UL;
                    struct S4 l_527 = {{56,1,296,172,-427,1406,22019},{186,1,428,481,2001,68,28476},4294967287UL,65532UL};
                    unsigned l_545 = 0x214F0B67L;
                    struct S3 l_548 = {{0x66E08AB99F8E5313LL,4294967295UL,-9L,{100,0,455,491,-881,95,-26680},{198,3,1,94,819,1087,24478},0x4908L,0x72E4L,0x4BF1EA6BL},0x8657468CL,0UL,0UL,3L,{0x25BCB29F8A6068D3LL,0xDAADFE0FL,0xF04E037FL,{40,4,286,516,1985,111,-35139},{179,4,440,454,-1251,892,-30702},1UL,0xD4ADL,0x2C1A594EL},-1L};
                    l_516 = ((safe_lshift_func_uint8_t_u_s(g_181.f5.f2, 3)) ^ ((l_524 , (p_34.f8 ^ ((l_463.f4.f6 = 1UL) && 0x0FBDE9DD75CD51DELL))) && (-1L)));
                    g_242.f5 = l_516;
                    if (p_34.f7)
                    {
                        struct S4 l_525 = {{72,3,470,587,1787,834,-1525},{54,0,436,369,1493,253,2121},1UL,65529UL};
                        struct S2 l_561 = {161,7,35,0,2824,0xA5AD9432L,-1011,14230,2267};
                        l_527 = (l_526 = l_525);
                        p_34.f5 = (safe_sub_func_int32_t_s_s(l_527.f1.f5, (safe_rshift_func_uint8_t_u_u(l_519, (safe_mul_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((p_34.f2 & (((((safe_mod_func_int8_t_s_s(p_33.f4, (safe_add_func_uint32_t_u_u(l_520, p_33.f3)))) ^ (((safe_rshift_func_uint16_t_u_u((!(l_525.f0.f4 || (l_369.f4.f4 = (safe_rshift_func_int16_t_s_s((l_544 && l_283.f1), p_33.f7))))), 5)) >= p_33.f7) > g_164)) & 0x99L) , l_369.f3.f2) | 0x8BL)), 0xD7D5DBBDL)) , l_545), p_33.f1))))));
                        g_79.f1.f4 = (safe_mod_func_uint8_t_u_u(((g_411 = (0xDFL && ((((p_34.f3 = (p_33.f7 = ((l_548 = g_181) , (l_463 , g_181.f5.f4.f0)))) < (safe_mul_func_uint8_t_u_u(0x0AL, (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((-9L), 0x31FEL)), ((((safe_lshift_func_int8_t_s_u((l_525.f0.f0 >= (safe_sub_func_uint64_t_u_u(((l_561 , 0x63L) == 9UL), l_561.f7))), 0)) , g_181.f0.f3.f1) && 1UL) | l_527.f0.f0))), 5))))) | (-8L)) ^ g_79.f0.f1))) | p_34.f5), p_33.f1));
                    }
                    else
                    {
                        struct S5 l_564 = {5448};
                        p_33.f6 = (!(safe_rshift_func_uint8_t_u_u(g_79.f1.f4, 2)));
                        l_564 = g_288;
                        l_339.f5 = ((((l_506.f2 | (l_516 = 65535UL)) ^ ((safe_lshift_func_int8_t_s_u(1L, 2)) >= (l_548.f6 = p_34.f4))) , (safe_rshift_func_uint16_t_u_s(65535UL, (l_520 < (l_482.f2 , (g_181.f6 <= l_548.f0.f4.f2)))))) != 0x2B14E0B5L);
                        g_181.f0.f3.f4 = 0L;
                    }
                    return l_520;
                }
                else
                {
                    int l_575 = 7L;
                    struct S4 l_587 = {{87,4,708,174,668,75,43172},{217,4,706,539,-1601,1085,-20739},4294967295UL,0xB8CBL};
                    g_181.f0.f4.f6 = (p_34.f2 = ((!(safe_mul_func_uint16_t_u_u(l_283.f3, (g_242.f1 , 5UL)))) < (((1L | l_458) || (safe_mod_func_int32_t_s_s((g_181.f0 , g_79.f1.f0), (safe_mul_func_int16_t_s_s(g_181.f5.f0, p_34.f2))))) , l_575)));
                    l_587 = func_38(((((p_34.f5 = (l_586 = (p_34.f5 >= (p_34.f4 && (((1UL <= (l_585 = ((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_34.f4, (l_584 == (l_520 = ((g_79.f0.f2 || (p_34.f5 & (p_33.f0 < g_181.f0.f4.f3))) ^ l_521))))), l_575)) , 0x0120L), g_368.f1.f0)) <= 0x8DL), g_181.f0.f4.f5)) > p_33.f6))) , g_181.f3) != 0x9AEEL))))) != l_526.f1.f5) ^ l_463.f4.f6) <= p_34.f7), p_34.f2, l_575, l_526.f2);
                    g_181.f5.f4.f6 = g_181.f5.f3.f2;
                }
            }
            else
            {
                struct S1 l_590 = {0UL,4294967295UL,-1L,{253,2,581,384,-178,496,21286},{9,2,450,349,-605,910,-24659},0x15BFL,0x8577L,0xAE1A9099L};
                struct S4 l_599 = {{37,3,476,434,2027,829,-15843},{196,3,404,667,172,621,26204},0UL,0x53F0L};
                struct S5 l_622 = {17607};
                p_33.f5 = 0xB5B0E53FL;
                for (g_504 = 0; (g_504 > 11); g_504++)
                {
                    unsigned char l_592 = 0x46L;
                    g_181.f0 = l_590;
                    p_33.f5 = ((((safe_unary_minus_func_uint64_t_u(l_506.f0.f6)) , l_592) != 0xA9C0L) | ((((safe_add_func_uint64_t_u_u(((p_33.f3 & (safe_mul_func_int16_t_s_s(((l_526.f1.f4 = (0x8009L >= g_217.f1)) || ((l_369.f3.f6 = (((!(safe_mod_func_int8_t_s_s((l_599 , g_164), (safe_add_func_uint64_t_u_u(((((g_602 = ((g_181.f5.f4.f0 || 0L) <= g_181.f5.f4.f1)) , 0x4EABL) ^ p_34.f6) ^ p_33.f3), 8UL))))) >= 8L) , l_482.f0.f2)) < g_248)), l_592))) ^ l_526.f0.f1), 0xFE02151FDD8C4E0CLL)) || p_33.f8) <= 8UL) != 0xE824L));
                }
                if ((((g_368.f1 , (((safe_lshift_func_int8_t_s_s(l_526.f0.f5, (l_506.f1.f4 = (g_385 = ((safe_mul_func_int16_t_s_s((g_242.f0 & (safe_lshift_func_int8_t_s_s((254UL <= 1L), 0))), (l_526.f0.f4 = g_79.f0.f4))) != (g_181.f2 = (((p_34.f7 <= (l_506.f1.f6 = (g_79.f1.f1 < p_34.f4))) <= g_368.f1.f4) ^ l_609))))))) >= g_242.f4) <= p_34.f2)) , l_590.f4.f0) >= 0x52F4L))
                {
                    unsigned long long l_613 = 0xB7E2738629597229LL;
                    struct S3 l_614 = {{0UL,6UL,0x0E4C21CAL,{77,4,257,237,-705,1041,28475},{41,3,457,41,504,513,-43990},5UL,65535UL,-6L},0x4A95CBD3L,3UL,0x7A6BL,-2L,{18446744073709551615UL,1UL,0x437EBDE6L,{222,3,170,185,-894,1177,-18557},{34,1,519,227,-80,37,25026},8UL,65526UL,0xD63E929FL},0xFA4702B0L};
                    l_599.f0.f4 = (safe_sub_func_uint8_t_u_u(l_506.f0.f3, p_33.f2));
                    g_368.f1.f4 = (l_612 , (1UL & (g_368.f1.f1 != ((l_613 = g_242.f3) ^ ((l_612 = l_614) , ((((safe_unary_minus_func_uint8_t_u(p_34.f8)) ^ (safe_rshift_func_uint16_t_u_s(0UL, l_526.f0.f3))) || (g_411 = (!((g_138 & 0x789A3E3812792E17LL) == l_599.f2)))) && g_248))))));
                    for (l_612.f5.f5 = 3; (l_612.f5.f5 != 19); ++l_612.f5.f5)
                    {
                        g_181.f5.f3.f6 = (p_34.f2 = (g_368.f1.f6 = ((((l_622 , 0x67690011L) < (-1L)) && p_33.f4) || g_312)));
                    }
                }
                else
                {
                    struct S1 l_623 = {0xA54602D2BF0BC84BLL,0UL,0L,{172,3,255,455,-233,1376,-6339},{212,4,253,48,608,887,-44352},0x5498L,0x5849L,1L};
                    struct S3 l_629 = {{8UL,0xD60DA95BL,-1L,{155,4,677,421,1989,839,33867},{64,1,538,70,-413,271,20787},65535UL,65528UL,-1L},-2L,0xD1L,0x8FF6L,0xCBDE6DD3L,{2UL,0x340972A4L,-6L,{111,1,320,531,623,1222,17011},{229,2,714,223,-1104,601,27423},0xF37BL,65535UL,5L},-10L};
                    l_623 = l_369;
                    l_369 = g_181.f5;
                    g_79.f1.f6 = 0x4580EB4FL;
                    if (((l_506.f0.f6 = (safe_lshift_func_uint8_t_u_u((p_33.f7 >= l_623.f3.f6), 4))) ^ (safe_mul_func_uint8_t_u_u(g_181.f1, 0xCBL))))
                    {
                        l_629 = l_628;
                        g_79.f0.f4 = ((l_505.f2 , ((safe_add_func_uint32_t_u_u(l_369.f4.f3, p_33.f3)) , (safe_add_func_int16_t_s_s(1L, 0x5631L)))) ^ (l_628.f0.f1 <= (g_181.f5.f4.f1 < ((4294967295UL == (l_628.f0.f0 || 1L)) && g_181.f5.f4.f3))));
                        p_34.f5 = l_629.f5.f0;
                    }
                    else
                    {
                        unsigned char l_644 = 7UL;
                        l_629.f4 = l_590.f4.f0;
                        l_612.f5.f3.f4 = (((p_34.f1 && (safe_sub_func_uint8_t_u_u(((0xEC321DEDL || ((safe_rshift_func_int16_t_s_u((0x41EBL && (g_181.f0.f4.f5 == g_217.f0)), (g_181.f5.f4.f3 <= ((safe_add_func_int64_t_s_s(l_526.f0.f6, ((0x558BL == p_33.f3) <= g_288.f0))) && l_644)))) <= p_34.f6)) && (-9L)), p_33.f0))) <= g_368.f0.f4) && 0xABF156F4L);
                    }
                }
                p_33.f2 = (l_622 , l_283.f3);
            }
            p_34.f2 = (g_217.f5 = g_181.f5.f6);
            g_368.f0 = g_181.f0.f3;
        }
        else
        {
            unsigned short l_654 = 0x48C5L;
            int l_663 = 0xD0C1A0E9L;
            struct S1 l_666 = {6UL,0x9398FBBAL,0xEC28B3DFL,{12,0,432,397,-1833,1008,-28752},{208,4,22,316,50,509,37688},0x6929L,0x4BC8L,0xB8E9A7FEL};
            for (l_628.f5.f5 = 11; (l_628.f5.f5 != 32); l_628.f5.f5 = safe_add_func_int16_t_s_s(l_628.f5.f5, 1))
            {
                p_33.f6 = (l_663 = ((safe_mod_func_uint16_t_u_u(l_649, 65535UL)) || (safe_mul_func_uint16_t_u_u(p_33.f5, ((safe_mul_func_uint16_t_u_u(l_654, (!g_181.f0.f5))) , (safe_sub_func_int64_t_s_s((safe_sub_func_int16_t_s_s(p_33.f7, ((l_654 == (p_34.f7 <= (safe_mod_func_uint32_t_u_u(((((((l_505 , l_463) , 0x39L) != g_288.f0) < g_79.f0.f5) >= (-1L)) != 0L), g_242.f1)))) | p_33.f8))), p_33.f2)))))));
                return g_181.f0.f4.f4;
            }
            g_181.f5.f3.f6 = (safe_rshift_func_int16_t_s_u(((1L && g_368.f0.f5) , p_33.f6), 6));
            l_628.f5 = l_666;
        }
    }
    return g_181.f5.f3.f0;
}







static struct S2 func_35(struct S4 p_36, unsigned p_37)
{
    struct S3 l_183 = {{18446744073709551615UL,0xE39112D3L,0x7B2BADB3L,{118,3,115,538,-1426,509,-20497},{192,0,195,600,-1864,1316,21337},65535UL,0x708EL,0x5590321BL},5L,0UL,0x0536L,0x2C72399DL,{3UL,1UL,0x154731B1L,{210,1,210,295,1656,411,13933},{245,3,474,373,1499,274,19977},0x8E05L,65535UL,8L},0x8B7C0F15L};
    unsigned l_188 = 0UL;
    int l_189 = (-1L);
    unsigned long long l_192 = 0x0E631E9C2AB02FD1LL;
    unsigned l_240 = 0x07BF8908L;
    unsigned l_241 = 0UL;
    for (p_37 = 0; (p_37 == 48); p_37++)
    {
        struct S3 l_182 = {{0x431DA364DE6C08DALL,4294967295UL,0L,{177,0,665,406,1694,1388,16489},{150,1,512,102,903,445,-19242},0x9303L,0x8711L,0x907BB7D3L},0L,0x2EL,0UL,0x47D65CAEL,{18446744073709551615UL,1UL,0x1E03DBD9L,{119,2,153,296,1630,1263,44607},{4,1,558,233,-647,1127,-41261},0xB551L,0x274FL,0L},-4L};
        int l_190 = 0x4FACB78FL;
        int l_191 = 8L;
        if (p_36.f1.f2)
            break;
        l_182 = g_181;
        l_183.f0.f4.f6 = (((l_183 , p_36.f1.f3) < (safe_rshift_func_uint16_t_u_u(((func_48((l_182 , l_182.f0.f3), (l_191 = (l_190 = (safe_lshift_func_uint16_t_u_u((((l_189 = (((+(g_181.f0.f0 ^ (g_181.f5.f3.f3 <= l_188))) < (l_182.f0.f4.f1 >= (1L && g_181.f0.f2))) <= g_181.f0.f3.f5)) > 0xF2L) != l_183.f0.f5), 8)))), g_79.f1.f6, p_36, l_192) , 0L) & p_36.f1.f2), 14))) | 4294967288UL);
        if (p_36.f0.f3)
            continue;
    }
    if ((safe_sub_func_int8_t_s_s(0xFBL, p_36.f1.f4)))
    {
        unsigned char l_199 = 250UL;
        short l_204 = 0x76A3L;
        short l_205 = (-10L);
        int l_214 = 0x9923CE44L;
        int l_218 = (-1L);
        struct S2 l_225 = {349,4,4789,0,587,-1L,-25,10504,13614};
        if ((((((safe_sub_func_uint64_t_u_u(g_181.f5.f4.f2, (((safe_rshift_func_int16_t_s_s(g_181.f5.f4.f6, 0)) == ((l_199 , (p_36.f1.f0 <= ((-10L) | (+(safe_sub_func_uint32_t_u_u(((0x02AEEA7E6215E6ECLL || ((safe_sub_func_int8_t_s_s((l_199 | ((l_199 && p_36.f1.f1) , l_199)), 0xDAL)) < 1UL)) | 4L), l_204)))))) < 0x7FL)) && l_205))) == 0x1DL) < 0UL) ^ g_79.f0.f4) <= 8UL))
        {
            struct S3 l_219 = {{0xE10F9213A3953933LL,0x59652611L,1L,{170,4,688,363,1614,1035,15121},{87,0,430,464,-856,159,-21173},65528UL,0UL,0x78902750L},-5L,7UL,0xE9F7L,-5L,{0UL,0UL,0x67A4492FL,{131,4,623,7,-1053,1285,-11687},{172,0,238,380,555,1007,38191},0UL,1UL,9L},0L};
            struct S4 l_220 = {{115,0,70,705,1103,501,-16594},{235,1,647,387,1722,519,6548},1UL,65535UL};
            l_218 = (p_36.f0.f4 = (p_36.f1.f4 >= ((((((g_209 = ((0xEFL || (safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint8_t_u_u(g_181.f0.f3.f2, 0))))) & p_37)) != ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((l_214 = g_181.f3), l_183.f4)), g_181.f0.f3.f3)) == (p_36.f1.f5 , (safe_lshift_func_int16_t_s_s((-8L), 3))))) , g_217) , 0xCD570C0675523CCBLL) >= 0x853981C0F86EE01CLL) == 0xAA11DC3B8FEF89A3LL)));
            l_219 = l_183;
            g_79 = l_220;
        }
        else
        {
            unsigned long long l_223 = 0xF1F7B180F1149AF9LL;
            int l_224 = 0xEFFB6566L;
            for (l_189 = 0; (l_189 < (-10)); l_189--)
            {
                l_183.f5.f4.f4 = 0x74CC3989L;
                return g_217;
            }
            p_36.f1.f6 = (g_79.f1.f6 = (l_224 = l_223));
            return l_225;
        }
        for (g_181.f0.f7 = 0; (g_181.f0.f7 < (-16)); g_181.f0.f7 = safe_sub_func_uint8_t_u_u(g_181.f0.f7, 8))
        {
            long long l_228 = 0L;
            int l_229 = (-1L);
            unsigned long long l_239 = 18446744073709551612UL;
            l_218 = l_228;
            g_181.f6 = p_36.f2;
            l_229 = p_36.f1.f6;
            g_217.f2 = (safe_lshift_func_int8_t_s_u((g_217.f8 || (g_138 > ((((safe_lshift_func_int16_t_s_u((0xF2L != (safe_mul_func_uint8_t_u_u((g_181.f2 = (safe_unary_minus_func_int64_t_s(g_181.f0.f4.f5))), ((safe_add_func_int64_t_s_s(g_79.f0.f2, g_79.f1.f6)) > g_217.f6)))), 6)) , (p_37 == (l_183.f4 | l_183.f5.f4.f5))) == l_239) >= g_181.f5.f3.f0))), p_37));
        }
        g_181.f0.f3 = (g_181.f0.f1 , func_54(l_225.f6));
    }
    else
    {
        return g_217;
    }
    l_189 = (g_181.f0.f3.f6 <= (l_241 = ((g_181.f5.f4.f5 & g_7) ^ l_240)));
    g_79.f1.f6 = g_138;
    return g_217;
}







static struct S4 func_38(unsigned short p_39, unsigned p_40, int p_41, unsigned p_42)
{
    char l_78 = (-1L);
    unsigned l_84 = 0x9C2BD310L;
    struct S5 l_96 = {10640};
    int l_133 = 0x4F2632C0L;
    char l_139 = (-6L);
    int l_140 = 0xAA762861L;
    struct S1 l_141 = {0x26DC8C82E5360119LL,0x67109F51L,1L,{58,3,209,631,1836,628,-14892},{96,4,303,325,2046,507,-32404},0xDB1FL,0x3D14L,0xED9186F8L};
    struct S4 l_178 = {{243,3,509,28,1001,278,-6964},{20,2,336,292,135,120,-42440},1UL,0xA3EDL};
    if (((safe_mul_func_int16_t_s_s((func_48(func_54(g_7), (p_40 ^ l_78), g_7, g_79, l_78) , (safe_rshift_func_int8_t_s_u((p_40 <= 0x05804987L), 0))), l_78)) & g_79.f1.f5))
    {
        short l_83 = 0x2E77L;
        int l_85 = 0x4526E093L;
        if (l_83)
        {
            short l_90 = 0xA051L;
            struct S5 l_91 = {542};
            l_85 = (l_84 , p_41);
            l_85 = ((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(g_79.f0.f1, 1)), (~l_90))) , ((l_84 > (p_39 < (l_91 , ((safe_sub_func_int16_t_s_s(p_39, 0xCCC2L)) == ((p_42 | (p_42 , p_41)) & p_39))))) | g_79.f0.f4));
            for (p_39 = (-29); (p_39 >= 11); p_39 = safe_add_func_uint32_t_u_u(p_39, 7))
            {
                g_79.f1.f4 = (l_96 , ((l_90 <= ((((safe_mod_func_int16_t_s_s(p_40, p_40)) != (g_79.f0.f3 != ((safe_add_func_int64_t_s_s((g_79.f2 < (~(l_91.f0 , ((safe_mod_func_int16_t_s_s(0x476EL, 9L)) ^ p_42)))), g_79.f2)) , 253UL))) >= (-1L)) ^ l_78)) && g_79.f1.f1));
            }
        }
        else
        {
            char l_110 = 0xA0L;
            int l_125 = (-5L);
            for (g_79.f3 = 0; (g_79.f3 < 23); ++g_79.f3)
            {
                int l_113 = 1L;
                unsigned char l_146 = 0x77L;
                int l_155 = 1L;
                for (p_40 = (-27); (p_40 < 16); p_40 = safe_add_func_uint64_t_u_u(p_40, 8))
                {
                    long long l_107 = 1L;
                    int l_142 = 0L;
                    if (((((((p_40 && l_107) ^ (0x44C0915FC1EA6490LL & (((((!((l_110 = (safe_rshift_func_uint16_t_u_s((0xBEL == 0x7BL), 2))) <= g_79.f0.f3)) <= 0x5798L) > g_79.f0.f1) < 0x36E3L) ^ 18446744073709551615UL))) <= g_79.f3) | g_79.f1.f2) >= p_40) && g_79.f3))
                    {
                        struct S4 l_120 = {{244,2,106,207,-1364,901,27295},{35,4,121,576,1310,829,-42693},0x698F7593L,1UL};
                        g_79.f0.f4 = (safe_mul_func_int8_t_s_s(((g_79.f1.f1 <= l_113) ^ (safe_mod_func_int64_t_s_s((p_39 || l_107), l_96.f0))), g_7));
                        l_125 = (safe_rshift_func_uint16_t_u_s(p_42, (g_7 >= ((safe_lshift_func_uint8_t_u_u(p_42, 3)) , (g_79.f1.f6 = ((l_120 , ((safe_lshift_func_int8_t_s_s(((p_41 <= (l_84 ^ g_79.f0.f0)) || (safe_sub_func_int32_t_s_s(g_79.f1.f0, (g_79.f0.f0 = (p_42 > 0UL))))), l_107)) | l_110)) == l_107))))));
                        if (p_40)
                            break;
                    }
                    else
                    {
                        short l_132 = 0xDADBL;
                        l_140 = ((safe_sub_func_int32_t_s_s(((l_78 && (safe_sub_func_int16_t_s_s((g_79.f1.f5 != (l_113 = (((safe_rshift_func_uint16_t_u_s(g_79.f0.f6, 10)) , g_79.f0.f2) , p_40))), (l_133 = l_132)))) <= 0x95BEDFB2153381E5LL), (safe_mul_func_int16_t_s_s((0x0E11215FL <= (((((safe_rshift_func_int8_t_s_s((g_138 = l_107), p_42)) > 65528UL) ^ 0x23F684F3L) != l_139) && 0x35L)), 0L)))) || g_138);
                        l_141 = l_141;
                        l_155 = (((l_142 = (l_113 = p_41)) && (!((((safe_mod_func_uint64_t_u_u((g_145 = g_79.f1.f2), l_85)) ^ l_146) <= g_79.f1.f5) ^ (safe_rshift_func_int8_t_s_u((l_125 ^ (func_54((l_142 == (safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(g_7, ((safe_add_func_uint64_t_u_u(g_7, l_141.f1)) , l_107))), p_40)))) , 0L)), 1))))) != l_132);
                    }
                }
            }
        }
    }
    else
    {
        long long l_169 = 5L;
        int l_170 = (-4L);
        g_79.f1 = func_54(((p_42 = (g_79.f1.f3 = (safe_rshift_func_int8_t_s_s(0x77L, (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((p_42 , 0xADL), g_79.f1.f6)), 10)) | ((g_164 = l_141.f2) <= (l_170 = (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_141.f0 <= (l_169 || (+p_39))), g_79.f0.f3)), p_41))))), 2)))))) < p_41));
        l_133 = ((l_170 = p_41) , g_79.f0.f2);
    }
    if ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((0xF9F1FBD920C650B9LL != ((l_141.f3.f4 = p_41) , (safe_add_func_int16_t_s_s(p_39, (0x1C51E3A1L >= (((g_79.f3 = l_78) >= (-1L)) >= (g_79.f1.f2 | ((g_177 = ((p_40 == (l_141.f3.f2 > g_145)) && l_141.f4.f1)) || p_40)))))))), p_41)), l_141.f4.f6)))
    {
        g_79.f1.f6 = g_79.f0.f5;
    }
    else
    {
        return l_178;
    }
    return l_178;
}







static struct S2 func_48(struct S0 p_49, unsigned p_50, unsigned p_51, struct S4 p_52, unsigned char p_53)
{
    struct S2 l_80 = {205,5,4361,0,1390,-7L,1340,8271,3793};
    g_79.f0.f4 = g_79.f0.f5;
    return l_80;
}







static struct S0 func_54(unsigned p_55)
{
    long long l_58 = 0x589E83D4860CE0BBLL;
    int l_63 = (-1L);
    unsigned short l_74 = 0xA1B6L;
    char l_75 = 0L;
    char l_76 = 0xD6L;
    struct S1 l_77 = {0xF876E496E341DA9CLL,1UL,0x0FD4E32FL,{9,3,655,504,1512,1368,-17277},{252,4,647,453,-121,488,-41844},0xF22EL,65535UL,0L};
    l_63 = (safe_add_func_int8_t_s_s((((g_7 , (l_58 = 0x0E7447E3892391BELL)) ^ (safe_mul_func_uint16_t_u_u(0UL, (g_7 != (safe_add_func_uint8_t_u_u((l_63 < g_7), (safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((((safe_mod_func_int64_t_s_s(p_55, ((safe_add_func_uint32_t_u_u(l_63, (p_55 > p_55))) , l_74))) , l_75) && 0x90L), l_75)) | l_76), l_74)) ^ p_55), 13)))))))) | g_7), g_7));
    l_77 = l_77;
    return l_77.f4;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_79.f0.f0, "g_79.f0.f0", print_hash_value);
    transparent_crc(g_79.f0.f1, "g_79.f0.f1", print_hash_value);
    transparent_crc(g_79.f0.f2, "g_79.f0.f2", print_hash_value);
    transparent_crc(g_79.f0.f3, "g_79.f0.f3", print_hash_value);
    transparent_crc(g_79.f0.f4, "g_79.f0.f4", print_hash_value);
    transparent_crc(g_79.f0.f5, "g_79.f0.f5", print_hash_value);
    transparent_crc(g_79.f0.f6, "g_79.f0.f6", print_hash_value);
    transparent_crc(g_79.f1.f0, "g_79.f1.f0", print_hash_value);
    transparent_crc(g_79.f1.f1, "g_79.f1.f1", print_hash_value);
    transparent_crc(g_79.f1.f2, "g_79.f1.f2", print_hash_value);
    transparent_crc(g_79.f1.f3, "g_79.f1.f3", print_hash_value);
    transparent_crc(g_79.f1.f4, "g_79.f1.f4", print_hash_value);
    transparent_crc(g_79.f1.f5, "g_79.f1.f5", print_hash_value);
    transparent_crc(g_79.f1.f6, "g_79.f1.f6", print_hash_value);
    transparent_crc(g_79.f2, "g_79.f2", print_hash_value);
    transparent_crc(g_79.f3, "g_79.f3", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_181.f0.f0, "g_181.f0.f0", print_hash_value);
    transparent_crc(g_181.f0.f1, "g_181.f0.f1", print_hash_value);
    transparent_crc(g_181.f0.f2, "g_181.f0.f2", print_hash_value);
    transparent_crc(g_181.f0.f3.f0, "g_181.f0.f3.f0", print_hash_value);
    transparent_crc(g_181.f0.f3.f1, "g_181.f0.f3.f1", print_hash_value);
    transparent_crc(g_181.f0.f3.f2, "g_181.f0.f3.f2", print_hash_value);
    transparent_crc(g_181.f0.f3.f3, "g_181.f0.f3.f3", print_hash_value);
    transparent_crc(g_181.f0.f3.f4, "g_181.f0.f3.f4", print_hash_value);
    transparent_crc(g_181.f0.f3.f5, "g_181.f0.f3.f5", print_hash_value);
    transparent_crc(g_181.f0.f3.f6, "g_181.f0.f3.f6", print_hash_value);
    transparent_crc(g_181.f0.f4.f0, "g_181.f0.f4.f0", print_hash_value);
    transparent_crc(g_181.f0.f4.f1, "g_181.f0.f4.f1", print_hash_value);
    transparent_crc(g_181.f0.f4.f2, "g_181.f0.f4.f2", print_hash_value);
    transparent_crc(g_181.f0.f4.f3, "g_181.f0.f4.f3", print_hash_value);
    transparent_crc(g_181.f0.f4.f4, "g_181.f0.f4.f4", print_hash_value);
    transparent_crc(g_181.f0.f4.f5, "g_181.f0.f4.f5", print_hash_value);
    transparent_crc(g_181.f0.f4.f6, "g_181.f0.f4.f6", print_hash_value);
    transparent_crc(g_181.f0.f5, "g_181.f0.f5", print_hash_value);
    transparent_crc(g_181.f0.f6, "g_181.f0.f6", print_hash_value);
    transparent_crc(g_181.f0.f7, "g_181.f0.f7", print_hash_value);
    transparent_crc(g_181.f1, "g_181.f1", print_hash_value);
    transparent_crc(g_181.f2, "g_181.f2", print_hash_value);
    transparent_crc(g_181.f3, "g_181.f3", print_hash_value);
    transparent_crc(g_181.f4, "g_181.f4", print_hash_value);
    transparent_crc(g_181.f5.f0, "g_181.f5.f0", print_hash_value);
    transparent_crc(g_181.f5.f1, "g_181.f5.f1", print_hash_value);
    transparent_crc(g_181.f5.f2, "g_181.f5.f2", print_hash_value);
    transparent_crc(g_181.f5.f3.f0, "g_181.f5.f3.f0", print_hash_value);
    transparent_crc(g_181.f5.f3.f1, "g_181.f5.f3.f1", print_hash_value);
    transparent_crc(g_181.f5.f3.f2, "g_181.f5.f3.f2", print_hash_value);
    transparent_crc(g_181.f5.f3.f3, "g_181.f5.f3.f3", print_hash_value);
    transparent_crc(g_181.f5.f3.f4, "g_181.f5.f3.f4", print_hash_value);
    transparent_crc(g_181.f5.f3.f5, "g_181.f5.f3.f5", print_hash_value);
    transparent_crc(g_181.f5.f3.f6, "g_181.f5.f3.f6", print_hash_value);
    transparent_crc(g_181.f5.f4.f0, "g_181.f5.f4.f0", print_hash_value);
    transparent_crc(g_181.f5.f4.f1, "g_181.f5.f4.f1", print_hash_value);
    transparent_crc(g_181.f5.f4.f2, "g_181.f5.f4.f2", print_hash_value);
    transparent_crc(g_181.f5.f4.f3, "g_181.f5.f4.f3", print_hash_value);
    transparent_crc(g_181.f5.f4.f4, "g_181.f5.f4.f4", print_hash_value);
    transparent_crc(g_181.f5.f4.f5, "g_181.f5.f4.f5", print_hash_value);
    transparent_crc(g_181.f5.f4.f6, "g_181.f5.f4.f6", print_hash_value);
    transparent_crc(g_181.f5.f5, "g_181.f5.f5", print_hash_value);
    transparent_crc(g_181.f5.f6, "g_181.f5.f6", print_hash_value);
    transparent_crc(g_181.f5.f7, "g_181.f5.f7", print_hash_value);
    transparent_crc(g_181.f6, "g_181.f6", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_217.f0, "g_217.f0", print_hash_value);
    transparent_crc(g_217.f1, "g_217.f1", print_hash_value);
    transparent_crc(g_217.f2, "g_217.f2", print_hash_value);
    transparent_crc(g_217.f3, "g_217.f3", print_hash_value);
    transparent_crc(g_217.f4, "g_217.f4", print_hash_value);
    transparent_crc(g_217.f5, "g_217.f5", print_hash_value);
    transparent_crc(g_217.f6, "g_217.f6", print_hash_value);
    transparent_crc(g_217.f7, "g_217.f7", print_hash_value);
    transparent_crc(g_217.f8, "g_217.f8", print_hash_value);
    transparent_crc(g_242.f0, "g_242.f0", print_hash_value);
    transparent_crc(g_242.f1, "g_242.f1", print_hash_value);
    transparent_crc(g_242.f2, "g_242.f2", print_hash_value);
    transparent_crc(g_242.f3, "g_242.f3", print_hash_value);
    transparent_crc(g_242.f4, "g_242.f4", print_hash_value);
    transparent_crc(g_242.f5, "g_242.f5", print_hash_value);
    transparent_crc(g_242.f6, "g_242.f6", print_hash_value);
    transparent_crc(g_242.f7, "g_242.f7", print_hash_value);
    transparent_crc(g_242.f8, "g_242.f8", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_288.f0, "g_288.f0", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_304.f0, "g_304.f0", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_368.f0.f0, "g_368.f0.f0", print_hash_value);
    transparent_crc(g_368.f0.f1, "g_368.f0.f1", print_hash_value);
    transparent_crc(g_368.f0.f2, "g_368.f0.f2", print_hash_value);
    transparent_crc(g_368.f0.f3, "g_368.f0.f3", print_hash_value);
    transparent_crc(g_368.f0.f4, "g_368.f0.f4", print_hash_value);
    transparent_crc(g_368.f0.f5, "g_368.f0.f5", print_hash_value);
    transparent_crc(g_368.f0.f6, "g_368.f0.f6", print_hash_value);
    transparent_crc(g_368.f1.f0, "g_368.f1.f0", print_hash_value);
    transparent_crc(g_368.f1.f1, "g_368.f1.f1", print_hash_value);
    transparent_crc(g_368.f1.f2, "g_368.f1.f2", print_hash_value);
    transparent_crc(g_368.f1.f3, "g_368.f1.f3", print_hash_value);
    transparent_crc(g_368.f1.f4, "g_368.f1.f4", print_hash_value);
    transparent_crc(g_368.f1.f5, "g_368.f1.f5", print_hash_value);
    transparent_crc(g_368.f1.f6, "g_368.f1.f6", print_hash_value);
    transparent_crc(g_368.f2, "g_368.f2", print_hash_value);
    transparent_crc(g_368.f3, "g_368.f3", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_668.f0, "g_668.f0", print_hash_value);
    transparent_crc(g_668.f1, "g_668.f1", print_hash_value);
    transparent_crc(g_668.f2, "g_668.f2", print_hash_value);
    transparent_crc(g_668.f3, "g_668.f3", print_hash_value);
    transparent_crc(g_668.f4, "g_668.f4", print_hash_value);
    transparent_crc(g_668.f5, "g_668.f5", print_hash_value);
    transparent_crc(g_668.f6, "g_668.f6", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_750, "g_750", print_hash_value);
    transparent_crc(g_795, "g_795", print_hash_value);
    transparent_crc(g_883, "g_883", print_hash_value);
    transparent_crc(g_967, "g_967", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
