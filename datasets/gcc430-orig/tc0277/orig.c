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
   unsigned long long f0;
   unsigned char f1;
   char f2;
   char f3;
   unsigned long long f4;
   unsigned short f5;
};

struct S1 {
   int f0;
   unsigned long long f1;
   int f2;
   unsigned short f3;
   short f4;
   int f5;
   unsigned long long f6;
   unsigned f7 : 29;
   unsigned f8;
};

struct S2 {
   unsigned f0 : 22;
   signed f1 : 5;
   unsigned f2 : 31;
   unsigned f3 : 20;
   unsigned f4 : 3;
   unsigned f5 : 27;
   unsigned f6 : 22;
   unsigned char f7;
   signed f8 : 12;
   unsigned char f9;
};

struct S3 {
   unsigned f0 : 19;
   unsigned f1 : 21;
   unsigned f2 : 15;
   unsigned f3 : 23;
   signed f4 : 26;
};


static struct S1 g_10 = {0xE53494ABL,1UL,0x91023F12L,5UL,0L,0x43260389L,9UL,1206,0xA48A2B8EL};
static int *g_31 = (void*)0;
static int g_53 = 0x4F37316AL;
static long long g_67 = 0xBDD559FE4D3D82F8LL;
static char g_69 = 0x66L;
static long long g_95 = 0x48DF11712D94B84BLL;
static unsigned g_96 = 0UL;
static struct S2 g_103 = {1475,-0,25636,654,1,1518,2010,0x2AL,48,0x03L};
static int *g_123 = &g_10.f5;
static int g_156 = 8L;
static unsigned long long g_180 = 0xE2EDBCE3F75E0FD2LL;
static struct S2 *g_212 = &g_103;
static struct S0 g_245 = {18446744073709551615UL,0x30L,0x45L,0x50L,0x31255FDFF747F287LL,0x6ED5L};
static int *g_277 = &g_10.f0;
static struct S3 g_278 = {524,927,34,1125,-5860};
static char g_298 = (-1L);
static char g_342 = 0x03L;
static short g_401 = 0xE34FL;
static char g_425 = 1L;
static unsigned long long g_428 = 0x139CD15266E77DB1LL;
static struct S1 g_470 = {0xDB47F5A9L,18446744073709551610UL,0x559DDD17L,0xD469L,0L,0x3E3E7ED8L,4UL,15497,4UL};
static unsigned short g_609 = 0x855AL;
static int g_843 = 0x6F8FF9C4L;
static short g_856 = 0L;
static unsigned g_869 = 0UL;
static struct S0 g_880 = {1UL,0x90L,7L,0x75L,0xD7C9D478F680B5AELL,0x0928L};
static struct S1 *g_916 = &g_10;
static struct S1 **g_915 = &g_916;
static struct S3 *g_1010 = &g_278;
static long long g_1315 = 0x78E59058F3E15F4BLL;
static unsigned g_1328 = 0UL;
static unsigned short g_1528 = 0xA6EDL;
static struct S0 *g_1578 = &g_245;
static struct S0 **g_1577 = &g_1578;
static struct S0 ***g_1576 = &g_1577;
static unsigned char g_1581 = 9UL;
static unsigned short g_1669 = 1UL;
static unsigned g_1683 = 4294967290UL;



static int func_1(void);
static unsigned func_4(struct S1 p_5, char p_6, int p_7, unsigned short p_8, unsigned long long p_9);
static unsigned func_12(int p_13, unsigned short p_14, struct S1 p_15, unsigned char p_16);
static struct S1 func_17(char p_18);
static unsigned char func_19(unsigned short p_20, int p_21, int p_22, struct S0 p_23);
static int func_24(struct S1 p_25);
static int * func_28(int * p_29, int * p_30);
static int * func_32(struct S3 p_33, char p_34, int * p_35, struct S3 p_36);
static struct S3 func_37(int * p_38, int * p_39, int * p_40);
static int func_42(int * p_43, int * p_44, int * p_45, char p_46, unsigned long long p_47);
static int func_1(void)
{
    unsigned char l_11 = 0xFFL;
    unsigned char l_1534 = 253UL;
    unsigned long long l_1548 = 0xE5057201A64B3498LL;
    struct S0 ***l_1579 = &g_1577;
    int l_1607 = 0xB655A247L;
    int l_1630 = 5L;
    struct S3 l_1679 = {378,641,96,2428,-2452};
    struct S2 l_1778 = {112,1,12913,765,1,5126,1527,249UL,31,255UL};
    int *l_1788 = (void*)0;
    int *l_1789 = &g_470.f5;
    int *l_1806 = &g_10.f5;
    if ((((safe_sub_func_uint64_t_u_u(((func_4(g_10, l_11, ((!(func_12(g_10.f8, l_11, func_17((func_19(l_11, (((~l_11) ^ g_10.f1) , func_24(((((safe_add_func_int16_t_s_s((4294967295UL & l_11), g_10.f8)) ^ (-4L)) >= 1L) , g_10))), g_10.f1, g_880) != l_11)), l_11) && 1L)) ^ 0xEBE6L), l_11, g_342) ^ l_1534) , g_880.f0), g_470.f2)) == 0x5837C36261A832CBLL) , 0L))
    {
        int *l_1535 = &g_53;
        int *l_1536 = (void*)0;
        int *l_1537 = &g_470.f0;
        int *l_1538 = (void*)0;
        int *l_1539 = &g_470.f5;
        int *l_1540 = &g_843;
        int *l_1541 = &g_470.f2;
        int *l_1542 = &g_10.f5;
        int *l_1543 = &g_10.f2;
        int *l_1544 = (void*)0;
        int *l_1545 = &g_156;
        int *l_1546 = &g_10.f0;
        int *l_1547 = &g_10.f5;
        l_1548--;
    }
    else
    {
        short l_1559 = 0x3A85L;
        struct S1 *l_1563 = &g_10;
        int l_1603 = 0x6E599426L;
        int l_1754 = 4L;
        int l_1768 = (-10L);
        struct S3 *l_1786 = &g_278;
        unsigned long long l_1787 = 0x8970C5CDE1377EA4LL;
        for (g_342 = (-15); (g_342 >= 23); g_342++)
        {
            int *l_1553 = &g_10.f2;
            struct S1 *l_1562 = &g_470;
            int l_1564 = (-7L);
            unsigned l_1580 = 4294967289UL;
            long long l_1611 = 0x15C9F3F97A3E6AD2LL;
            int l_1638 = 0L;
            int l_1656 = 7L;
            unsigned l_1771 = 0x0C8F1A00L;
            (*l_1553) ^= l_1534;
            if (g_103.f2)
                continue;
            if (l_1548)
            {
                int l_1556 = 3L;
                struct S2 *l_1567 = &g_103;
                int l_1663 = 0L;
                l_1564 ^= (((safe_lshift_func_int8_t_s_s(l_1556, 6)) >= (*l_1553)) == g_67);
                for (g_880.f1 = 27; (g_880.f1 >= 48); ++g_880.f1)
                {
                    int *l_1582 = &g_53;
                    int *l_1583 = &g_470.f2;
                    int *l_1584 = &g_470.f0;
                    int *l_1585 = &l_1564;
                    int *l_1586 = (void*)0;
                    int *l_1587 = &g_53;
                    int *l_1588 = &g_843;
                    int *l_1589 = &g_470.f0;
                    int *l_1590 = &g_53;
                    int *l_1591 = &g_843;
                    int *l_1592 = &l_1564;
                    int *l_1593 = &g_470.f5;
                    int *l_1594 = &g_470.f5;
                    int *l_1595 = &g_470.f5;
                    int *l_1596 = &g_470.f5;
                    int *l_1597 = &l_1564;
                    int *l_1598 = &g_10.f0;
                    int *l_1599 = &g_10.f0;
                    int *l_1600 = &g_10.f5;
                    int *l_1601 = &g_10.f5;
                    int *l_1602 = &g_53;
                    int *l_1604 = &l_1603;
                    int *l_1605 = &g_470.f2;
                    int *l_1606 = &l_1556;
                    int *l_1608 = &g_843;
                    int *l_1609 = &g_470.f5;
                    int *l_1610 = (void*)0;
                    int *l_1612 = &g_10.f2;
                    int *l_1613 = &g_53;
                    int *l_1614 = &g_156;
                    int *l_1615 = &g_470.f5;
                    int *l_1616 = &g_470.f2;
                    int *l_1617 = (void*)0;
                    int *l_1618 = &g_10.f5;
                    int *l_1619 = (void*)0;
                    int *l_1620 = (void*)0;
                    int *l_1621 = (void*)0;
                    int *l_1622 = &g_10.f2;
                    int *l_1623 = &g_470.f2;
                    int *l_1624 = &g_470.f2;
                    int *l_1625 = &g_10.f0;
                    int *l_1626 = &g_53;
                    int *l_1627 = &g_470.f5;
                    int *l_1628 = (void*)0;
                    int *l_1629 = &g_10.f2;
                    int *l_1631 = &g_156;
                    int *l_1632 = (void*)0;
                    int *l_1633 = &g_156;
                    int *l_1634 = &l_1556;
                    int *l_1635 = &g_470.f5;
                    int *l_1636 = &g_843;
                    int *l_1637 = &l_1564;
                    int *l_1639 = &l_1607;
                    int *l_1640 = &g_843;
                    int *l_1641 = (void*)0;
                    int *l_1642 = &l_1630;
                    int *l_1643 = &g_156;
                    int *l_1644 = &g_10.f5;
                    int *l_1645 = &g_470.f0;
                    int *l_1646 = &g_470.f0;
                    int *l_1647 = (void*)0;
                    int *l_1648 = (void*)0;
                    int *l_1649 = &g_10.f0;
                    int *l_1650 = &l_1556;
                    int *l_1651 = (void*)0;
                    int *l_1652 = &g_10.f2;
                    int *l_1653 = &g_53;
                    int *l_1654 = &g_156;
                    int *l_1655 = &g_10.f5;
                    int *l_1657 = &g_10.f5;
                    int *l_1658 = &l_1656;
                    int *l_1659 = &l_1564;
                    int *l_1660 = &g_470.f2;
                    int *l_1661 = &g_470.f2;
                    int *l_1662 = &l_1603;
                    int *l_1664 = &g_156;
                    int l_1665 = 4L;
                    int *l_1666 = &g_156;
                    int *l_1667 = &g_470.f2;
                    int *l_1668 = &g_156;
                    struct S3 l_1678 = {42,8,133,762,2348};
                    (*l_1582) &= (((((l_1567 != &g_103) != (safe_rshift_func_uint16_t_u_s(((0x5B43EC7C79308741LL ^ (safe_sub_func_uint64_t_u_u(1UL, ((((*l_1553) , func_12(((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u((((g_425 , (g_1576 != l_1579)) & l_1580) , (-1L)), 7)) ^ g_10.f7), 3)) , g_1581), g_278.f2, (*g_916), l_1559)) & 0xFFDCE199L) | g_880.f2)))) ^ 4UL), l_1559))) <= g_880.f0) && 0UL) , 4L);
                    --g_1669;
                    for (l_1548 = (-3); (l_1548 >= 9); l_1548++)
                    {
                        unsigned char l_1680 = 255UL;
                        (*g_1010) = l_1679;
                        ++l_1680;
                        if ((*l_1553))
                            continue;
                        g_1683++;
                    }
                }
            }
            else
            {
                int *l_1686 = &l_1564;
                int *l_1687 = &g_10.f5;
                int *l_1688 = &g_10.f0;
                int *l_1689 = &l_1656;
                int *l_1690 = &l_1564;
                int *l_1691 = &g_470.f5;
                int *l_1692 = (void*)0;
                int *l_1693 = &g_843;
                int *l_1694 = (void*)0;
                int l_1695 = 0L;
                int *l_1696 = &l_1564;
                int *l_1697 = &g_470.f5;
                int l_1698 = (-4L);
                int l_1699 = 8L;
                int *l_1700 = &l_1698;
                int *l_1701 = &l_1656;
                int *l_1702 = &l_1603;
                int *l_1703 = (void*)0;
                int l_1704 = 0x95C99C02L;
                int *l_1705 = &l_1695;
                int l_1706 = 0x6C5A4274L;
                int *l_1707 = &l_1630;
                int *l_1708 = (void*)0;
                int *l_1709 = &l_1564;
                int *l_1710 = &g_10.f2;
                int *l_1711 = &g_10.f2;
                int *l_1712 = (void*)0;
                int *l_1713 = (void*)0;
                int *l_1714 = &g_10.f0;
                int *l_1715 = &g_843;
                int *l_1716 = &l_1695;
                int *l_1717 = &l_1630;
                int *l_1718 = &g_470.f5;
                int *l_1719 = &l_1564;
                int *l_1720 = &l_1704;
                int *l_1721 = (void*)0;
                int *l_1722 = &l_1638;
                int *l_1723 = &l_1706;
                int *l_1724 = &g_843;
                int *l_1725 = &l_1638;
                int *l_1726 = &l_1698;
                int *l_1727 = &g_470.f5;
                int *l_1728 = &l_1695;
                int *l_1729 = &l_1698;
                int *l_1730 = &l_1706;
                int *l_1731 = &g_10.f5;
                int *l_1732 = &g_10.f5;
                int *l_1733 = &l_1698;
                int *l_1734 = &g_156;
                int *l_1735 = &g_470.f2;
                int *l_1736 = &g_10.f5;
                int *l_1737 = &l_1603;
                int *l_1738 = &g_10.f2;
                int *l_1739 = &l_1656;
                int *l_1740 = &g_10.f5;
                int *l_1741 = &l_1630;
                int *l_1742 = &g_10.f2;
                int *l_1743 = &g_470.f5;
                int *l_1744 = &l_1603;
                int *l_1745 = (void*)0;
                int *l_1746 = &g_470.f2;
                int *l_1747 = &l_1698;
                int *l_1748 = (void*)0;
                int *l_1749 = &l_1603;
                int *l_1750 = &g_470.f2;
                int *l_1751 = (void*)0;
                int *l_1752 = &l_1607;
                int *l_1753 = &l_1630;
                int *l_1755 = &g_10.f2;
                int *l_1756 = &g_156;
                int *l_1757 = &l_1704;
                int *l_1758 = (void*)0;
                int *l_1759 = &g_470.f5;
                int *l_1760 = &g_843;
                int *l_1761 = &g_470.f0;
                int *l_1762 = &g_470.f0;
                int *l_1763 = &l_1695;
                int *l_1764 = (void*)0;
                int l_1765 = 0L;
                int *l_1766 = &g_10.f5;
                int *l_1767 = (void*)0;
                int l_1769 = 0xA30EEC2EL;
                int *l_1770 = &l_1630;
                l_1771++;
                if ((*l_1553))
                    break;
                (*g_916) = (*g_916);
            }
        }
        l_1607 |= (safe_rshift_func_int8_t_s_u(((l_1548 , (safe_rshift_func_int8_t_s_u((l_1778 , (l_1559 >= 0x38140524L)), (safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint16_t_u_u(l_1754, 10))))))) , (safe_add_func_int64_t_s_s((((safe_mod_func_uint32_t_u_u(((&g_278 == l_1786) || g_10.f6), g_470.f5)) < (-4L)) && 2L), l_1787))), 1));
    }
    (*l_1789) ^= l_1778.f2;
    (*l_1789) = g_470.f0;
    for (g_10.f3 = 26; (g_10.f3 != 36); g_10.f3++)
    {
        unsigned short l_1792 = 0x9EA5L;
        int l_1793 = 0x36FD9F42L;
        int l_1800 = 0x585A14B6L;
        struct S1 l_1805 = {0xEF44185DL,0x8E7985AD84CAC18FLL,0x5E9DB4D3L,65535UL,0x1A65L,-4L,0x8CEC0DA90B827835LL,16286,0xE006DB83L};
        short l_1807 = (-1L);
        l_1793 &= l_1792;
        l_1800 ^= (safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*l_1789), (l_1792 <= (safe_add_func_int32_t_s_s(l_1793, g_245.f0))))), 1));
        (*l_1789) = ((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((((func_4(((l_1800 && l_1800) , l_1805), l_1805.f3, ((((1L < (((void*)0 != l_1806) ^ 0xE2DFL)) | (*l_1789)) | 0UL) & l_1805.f6), l_1807, g_245.f0) == 255UL) | g_103.f0) || (*l_1789)), l_1805.f7)), g_103.f6)) >= (*l_1806));
    }
    return g_470.f6;
}







static unsigned func_4(struct S1 p_5, char p_6, int p_7, unsigned short p_8, unsigned long long p_9)
{
    int *l_1347 = &g_10.f0;
    int *l_1348 = (void*)0;
    int *l_1349 = &g_10.f2;
    int *l_1350 = (void*)0;
    int *l_1351 = &g_470.f0;
    int *l_1352 = &g_470.f0;
    int *l_1353 = &g_10.f2;
    int *l_1354 = &g_10.f0;
    int *l_1355 = (void*)0;
    int *l_1356 = &g_843;
    int *l_1357 = &g_10.f5;
    int *l_1358 = &g_10.f0;
    int *l_1359 = (void*)0;
    int *l_1360 = (void*)0;
    int *l_1361 = &g_10.f0;
    int *l_1362 = (void*)0;
    int *l_1363 = &g_470.f5;
    int l_1364 = 0xC94E506DL;
    int *l_1365 = &g_470.f2;
    int *l_1366 = &g_470.f0;
    int *l_1367 = &g_10.f0;
    int *l_1368 = &g_843;
    int *l_1369 = &g_470.f0;
    int *l_1370 = &g_10.f0;
    int *l_1371 = (void*)0;
    int *l_1372 = &g_10.f2;
    int *l_1373 = &g_10.f5;
    int *l_1374 = (void*)0;
    int *l_1375 = &g_10.f0;
    int *l_1376 = &g_156;
    int *l_1377 = (void*)0;
    int *l_1378 = &g_470.f5;
    int *l_1379 = (void*)0;
    int *l_1380 = &l_1364;
    int *l_1381 = &l_1364;
    int *l_1382 = (void*)0;
    int *l_1383 = &g_843;
    int l_1384 = 0xBA050177L;
    int *l_1385 = &g_156;
    int l_1386 = 0x57E5D7DCL;
    int *l_1387 = &l_1364;
    int *l_1388 = &g_156;
    int *l_1389 = &l_1386;
    int *l_1390 = &g_843;
    int *l_1391 = &g_10.f0;
    int *l_1392 = &g_53;
    int *l_1393 = &g_10.f0;
    int *l_1394 = &g_156;
    int l_1395 = 1L;
    int *l_1396 = &l_1364;
    int *l_1397 = (void*)0;
    int *l_1398 = &g_10.f2;
    int *l_1399 = &l_1364;
    int *l_1400 = (void*)0;
    int *l_1401 = &l_1364;
    int *l_1402 = (void*)0;
    int *l_1403 = &g_843;
    int *l_1404 = (void*)0;
    int l_1405 = 6L;
    int *l_1406 = &g_470.f2;
    int *l_1407 = &l_1364;
    int *l_1408 = &g_10.f5;
    int *l_1409 = &l_1405;
    int *l_1410 = &g_53;
    int l_1411 = 0x3DA29361L;
    int l_1412 = 0x5C622307L;
    int l_1413 = (-6L);
    int *l_1414 = &g_10.f2;
    int *l_1415 = &g_156;
    int l_1416 = (-1L);
    int *l_1417 = (void*)0;
    int *l_1418 = &l_1405;
    int *l_1419 = &g_470.f2;
    int *l_1420 = &l_1411;
    int *l_1421 = &g_10.f0;
    int *l_1422 = &g_10.f5;
    int l_1423 = 1L;
    int *l_1424 = (void*)0;
    int *l_1425 = &g_843;
    int *l_1426 = &g_156;
    int *l_1427 = &l_1412;
    int *l_1428 = &l_1413;
    int *l_1429 = &g_10.f5;
    int l_1430 = 0x80EA3A02L;
    int *l_1431 = (void*)0;
    int *l_1432 = &l_1384;
    int *l_1433 = &g_470.f0;
    int *l_1434 = &l_1412;
    int *l_1435 = &l_1395;
    int *l_1436 = (void*)0;
    int *l_1437 = (void*)0;
    int l_1438 = 0xA90D4B8BL;
    int *l_1439 = &g_53;
    int *l_1440 = (void*)0;
    int *l_1441 = &l_1412;
    int l_1442 = 0x7994C64DL;
    int l_1443 = (-2L);
    int *l_1444 = &l_1395;
    int l_1445 = 0xA42A2E46L;
    int l_1446 = 0x63822965L;
    int *l_1447 = &l_1416;
    int *l_1448 = (void*)0;
    int *l_1449 = &l_1423;
    int *l_1450 = &g_10.f0;
    int *l_1451 = &l_1423;
    int l_1452 = (-1L);
    int *l_1453 = &l_1452;
    int *l_1454 = &l_1430;
    int *l_1455 = &l_1416;
    int *l_1456 = (void*)0;
    int *l_1457 = &l_1442;
    int *l_1458 = &g_843;
    int *l_1459 = (void*)0;
    int *l_1460 = &l_1445;
    int *l_1461 = &l_1430;
    int *l_1462 = &g_10.f5;
    int *l_1463 = &g_10.f5;
    int *l_1464 = &l_1395;
    int *l_1465 = (void*)0;
    int *l_1466 = &l_1364;
    int *l_1467 = (void*)0;
    int *l_1468 = &g_470.f2;
    int *l_1469 = &g_470.f5;
    int *l_1470 = &g_843;
    int *l_1471 = &l_1386;
    int *l_1472 = &g_10.f5;
    int l_1473 = 0x8C7CEB62L;
    int *l_1474 = &l_1423;
    int l_1475 = 0x8DB123E0L;
    int *l_1476 = &g_156;
    int *l_1477 = &l_1438;
    int *l_1478 = &l_1416;
    int l_1479 = (-6L);
    int *l_1480 = &l_1475;
    int l_1481 = 0x460FA50EL;
    int *l_1482 = &l_1446;
    int *l_1483 = &l_1481;
    int *l_1484 = &l_1430;
    int *l_1485 = &l_1473;
    int l_1486 = 0x6908017AL;
    int *l_1487 = &l_1442;
    int *l_1488 = (void*)0;
    int *l_1489 = &g_10.f2;
    int *l_1490 = &l_1423;
    int *l_1491 = &l_1442;
    int *l_1492 = (void*)0;
    int *l_1493 = &g_470.f2;
    int *l_1494 = &g_53;
    int *l_1495 = &g_470.f0;
    int l_1496 = 0x5770C747L;
    int *l_1497 = &g_156;
    int *l_1498 = &l_1496;
    int *l_1499 = (void*)0;
    int l_1500 = 0xCCD5DDE6L;
    int *l_1501 = (void*)0;
    int *l_1502 = &g_470.f2;
    int *l_1503 = (void*)0;
    int *l_1504 = &g_53;
    int *l_1505 = &l_1496;
    int l_1506 = (-5L);
    int *l_1507 = &g_10.f5;
    int *l_1508 = &l_1411;
    int *l_1509 = (void*)0;
    int l_1510 = 7L;
    int *l_1511 = &l_1416;
    int *l_1512 = (void*)0;
    int *l_1513 = &l_1416;
    int *l_1514 = &g_470.f0;
    int *l_1515 = &g_156;
    int *l_1516 = &g_10.f0;
    int *l_1517 = (void*)0;
    int *l_1518 = &l_1481;
    int l_1519 = (-1L);
    int l_1520 = 0x223E2B4DL;
    int *l_1521 = &l_1386;
    int *l_1522 = &l_1473;
    int l_1523 = 0x41529B44L;
    int *l_1524 = &l_1486;
    int *l_1525 = &l_1452;
    int *l_1526 = (void*)0;
    int *l_1527 = &g_470.f5;
    struct S3 l_1531 = {288,470,129,1940,-6430};
    int *l_1532 = &l_1438;
    int **l_1533 = &l_1407;
    --g_1528;
    (*l_1469) = p_5.f4;
    (*l_1533) = func_32((*g_1010), p_6, &l_1481, (*g_1010));
    return p_5.f4;
}







static unsigned func_12(int p_13, unsigned short p_14, struct S1 p_15, unsigned char p_16)
{
    unsigned l_1339 = 1UL;
    char l_1342 = 0L;
    struct S1 **l_1343 = &g_916;
    int *l_1344 = &g_470.f5;
    struct S3 l_1345 = {165,1397,125,279,-6056};
    struct S0 *l_1346 = &g_245;
    (*l_1344) = ((1L <= (safe_sub_func_uint8_t_u_u((g_103.f1 , l_1339), (2UL < (((((g_470.f0 || ((*g_1010) , ((safe_mod_func_uint32_t_u_u(l_1342, p_13)) == (1L | 0xD0D9FF14L)))) | 5L) , l_1343) != (void*)0) & l_1342))))) & l_1342);
    (*l_1344) = (*l_1344);
    (*l_1344) = (&g_880 == ((*g_1010) , l_1346));
    return g_10.f3;
}







static struct S1 func_17(char p_18)
{
    int l_900 = 0xFFCFE7A4L;
    unsigned l_903 = 0x31C16027L;
    int *l_913 = (void*)0;
    unsigned l_936 = 0x1F02EA22L;
    struct S1 l_941 = {0x6AC56C50L,18446744073709551615UL,0x83BBF517L,1UL,-1L,0x94D4AED3L,4UL,5401,3UL};
    struct S2 **l_945 = &g_212;
    struct S3 l_968 = {162,1110,51,1884,6010};
    struct S0 l_1002 = {0xBC2B94357F9B7349LL,0xB2L,0xD6L,0L,18446744073709551615UL,0x653DL};
    long long l_1055 = 0L;
    int l_1133 = 0x56B046CAL;
    int *l_1336 = &g_470.f5;
    if ((((l_900 > (p_18 > 0xB2L)) , g_10) , (g_298 , (l_900 != (safe_add_func_int8_t_s_s(l_903, l_903))))))
    {
        int l_914 = (-3L);
        struct S0 l_931 = {18446744073709551615UL,0xCEL,0x16L,-1L,0x2B36794B96A36F7FLL,0xCD0CL};
        struct S1 **l_934 = &g_916;
        unsigned short l_952 = 8UL;
        int *l_969 = &g_10.f5;
        struct S3 l_970 = {9,447,156,870,-3365};
        int *l_983 = &g_53;
        for (g_298 = 0; (g_298 <= (-11)); g_298 = safe_sub_func_uint16_t_u_u(g_298, 4))
        {
            unsigned l_908 = 18446744073709551615UL;
            int l_920 = (-8L);
            struct S0 l_933 = {0xAB8086CAE05A20F8LL,248UL,0L,0x92L,18446744073709551606UL,0x8116L};
            unsigned long long l_938 = 0xD417DDC2AC789325LL;
            if ((((((safe_rshift_func_uint16_t_u_s(l_908, (safe_rshift_func_int16_t_s_u(p_18, 7)))) < (safe_add_func_int64_t_s_s(((((void*)0 != l_913) , (void*)0) != (void*)0), l_914))) && p_18) , g_915) != (void*)0))
            {
                if (p_18)
                {
                    return (**g_915);
                }
                else
                {
                    unsigned char l_919 = 0xB2L;
                    l_920 |= (safe_mod_func_uint32_t_u_u(l_919, p_18));
                }
            }
            else
            {
                unsigned char l_932 = 247UL;
                int l_937 = 0xED3FE8A4L;
                g_103.f8 &= (((safe_add_func_int8_t_s_s(g_10.f6, g_67)) || (safe_mod_func_uint16_t_u_u(p_18, g_245.f5))) ^ ((g_10.f2 , l_934) == (void*)0));
                l_937 ^= (0UL < (g_470.f4 ^ ((safe_unary_minus_func_int32_t_s(p_18)) != (p_18 , ((0xDEB0F938L == (func_19(l_931.f2, l_933.f3, p_18, g_245) , 4294967295UL)) , l_936)))));
                if (l_938)
                    continue;
                for (l_931.f3 = 0; (l_931.f3 > (-16)); --l_931.f3)
                {
                    return l_941;
                }
            }
            for (g_245.f4 = 11; (g_245.f4 >= 60); ++g_245.f4)
            {
                struct S2 *l_944 = &g_103;
                l_920 = (l_914 > (((l_944 != &g_103) < (&g_156 != &g_156)) , (&g_212 == l_945)));
            }
        }
        if ((safe_rshift_func_int8_t_s_s(((((safe_sub_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(l_952, (g_10.f7 | (((p_18 > 7UL) <= ((p_18 , g_278) , 0x60L)) ^ g_880.f5)))) | p_18), g_103.f3)) , p_18) > l_931.f5) , g_880.f0), 2)))
        {
            int l_959 = 0x39B50308L;
            struct S3 *l_960 = &g_278;
            struct S0 *l_975 = (void*)0;
            struct S0 *l_976 = &g_245;
            if (g_470.f2)
            {
                struct S0 l_965 = {18446744073709551615UL,0xECL,-10L,0x5AL,18446744073709551613UL,0xC2CCL};
                int *l_966 = &g_470.f5;
                struct S3 l_967 = {135,103,61,2283,-7419};
                int **l_971 = (void*)0;
                (*l_966) = (safe_sub_func_uint64_t_u_u(g_53, (~(safe_rshift_func_uint8_t_u_u((((((((l_959 , l_960) == &g_278) & g_10.f5) , p_18) ^ (safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((g_245.f3 <= (func_19((g_470.f6 == g_470.f3), l_959, l_959, l_965) == g_470.f1)), 0xABL)) & 0UL), 14))) | l_965.f4) & p_18), 0)))));
                g_123 = func_32(l_968, g_10.f8, &g_843, l_970);
                l_945 = &g_212;
            }
            else
            {
                struct S0 *l_974 = (void*)0;
                struct S0 **l_973 = &l_974;
                struct S0 ***l_972 = &l_973;
                (*l_972) = (void*)0;
            }
            (*l_976) = l_931;
        }
        else
        {
            g_53 = 0x606117C1L;
            return l_941;
        }
        (*l_983) = ((safe_add_func_uint64_t_u_u(g_880.f0, ((g_10.f1 | ((safe_mod_func_int32_t_s_s((-8L), p_18)) , (safe_lshift_func_uint16_t_u_s(p_18, (g_425 && 0x7AL))))) , 0xFDB95095C499B9B3LL))) == g_53);
    }
    else
    {
        unsigned short l_993 = 0UL;
        struct S3 l_1007 = {522,118,65,2828,-861};
        unsigned char l_1011 = 255UL;
        struct S0 l_1026 = {0x17CD302F186E46DALL,0xB2L,0x74L,0x35L,0x70933C2CC476E003LL,0xE2B8L};
        unsigned long long l_1027 = 0x1BFD49392956B03BLL;
        char l_1104 = 5L;
        int l_1177 = 0L;
        int l_1198 = 6L;
        int l_1211 = 7L;
        int l_1284 = 0x8019D6AAL;
        int l_1287 = 0x958B0EA3L;
        int l_1322 = 8L;
        int l_1325 = 0x474AB9C3L;
        for (g_245.f4 = (-29); (g_245.f4 <= 15); ++g_245.f4)
        {
            int *l_986 = &g_156;
            int *l_987 = &l_941.f5;
            int *l_988 = &l_941.f2;
            int *l_989 = (void*)0;
            int *l_990 = &g_470.f0;
            int *l_991 = (void*)0;
            int *l_992 = &l_941.f5;
            unsigned l_1014 = 0x7566FCE3L;
            int l_1036 = 0L;
            int l_1090 = 0xDA042791L;
            int l_1109 = (-7L);
            int l_1235 = 0x24F32040L;
            int l_1280 = 0xBCBCAF43L;
            int l_1288 = 0L;
            int l_1294 = 1L;
            char l_1303 = 0x34L;
            int l_1323 = 0x598642E3L;
            ++l_993;
            (*l_987) &= p_18;
            if ((*l_988))
            {
                struct S1 l_996 = {0x3DF79DE3L,18446744073709551615UL,0L,1UL,6L,-1L,0x3AC1C0ACB233FFB6LL,21954,0xB96E0091L};
                (*l_987) ^= p_18;
                return l_996;
            }
            else
            {
                int l_1001 = (-8L);
                int l_1003 = 1L;
                struct S0 l_1004 = {0x0726FF2E95A49290LL,1UL,-9L,0x29L,0UL,0x4735L};
                unsigned l_1012 = 1UL;
                struct S3 *l_1019 = (void*)0;
                int l_1113 = (-10L);
                int *l_1144 = &g_470.f5;
                int *l_1145 = &g_470.f5;
                int *l_1146 = &l_1133;
                int *l_1147 = &g_843;
                int *l_1148 = &l_941.f5;
                int *l_1149 = &g_53;
                int *l_1150 = &l_1133;
                int *l_1151 = &l_941.f0;
                int *l_1152 = &g_843;
                int *l_1153 = &l_941.f2;
                int *l_1154 = &g_843;
                int *l_1155 = &l_1090;
                int *l_1156 = &g_843;
                int *l_1157 = &l_1109;
                int *l_1158 = &l_1036;
                int *l_1159 = &l_1133;
                int *l_1160 = &l_1090;
                int *l_1161 = &g_53;
                int *l_1162 = &l_941.f5;
                int *l_1163 = &g_470.f5;
                int *l_1164 = &l_941.f2;
                int *l_1165 = &g_53;
                int *l_1166 = &l_1109;
                int *l_1167 = &l_1133;
                int *l_1168 = &l_941.f0;
                int *l_1169 = &l_941.f2;
                int *l_1170 = &g_156;
                int *l_1171 = (void*)0;
                int *l_1172 = &l_941.f5;
                int *l_1173 = (void*)0;
                int *l_1174 = &l_941.f2;
                int *l_1175 = &g_156;
                int *l_1176 = &l_1113;
                int *l_1178 = &l_1133;
                int *l_1179 = &g_843;
                int *l_1180 = &g_53;
                int *l_1181 = &l_1113;
                int *l_1182 = &g_470.f5;
                int *l_1183 = &l_1113;
                int *l_1184 = &l_1090;
                int *l_1185 = (void*)0;
                int *l_1186 = (void*)0;
                int *l_1187 = &l_941.f2;
                int *l_1188 = &l_1036;
                int *l_1189 = &l_1036;
                int *l_1190 = &g_470.f5;
                int *l_1191 = &g_470.f5;
                int *l_1192 = &g_470.f5;
                int l_1193 = 0x76516ACDL;
                int *l_1194 = &l_1133;
                int l_1195 = 9L;
                int *l_1196 = &l_1109;
                int *l_1197 = (void*)0;
                int *l_1199 = (void*)0;
                int *l_1200 = &l_941.f2;
                int *l_1201 = &g_156;
                int *l_1202 = &l_1003;
                int *l_1203 = (void*)0;
                int l_1204 = 0L;
                int *l_1205 = (void*)0;
                int l_1206 = 1L;
                int *l_1207 = &l_1177;
                int *l_1208 = &g_470.f5;
                int *l_1209 = &l_1204;
                int *l_1210 = &l_1003;
                int *l_1212 = &l_1036;
                int *l_1213 = &g_470.f0;
                int *l_1214 = (void*)0;
                int *l_1215 = &l_1204;
                int *l_1216 = (void*)0;
                int l_1217 = 9L;
                int *l_1218 = &g_470.f0;
                int *l_1219 = &l_1198;
                int *l_1220 = &l_1109;
                int *l_1221 = &g_156;
                int *l_1222 = &g_470.f0;
                int *l_1223 = (void*)0;
                int *l_1224 = &l_1204;
                int *l_1225 = &g_470.f0;
                int *l_1226 = &l_941.f5;
                int *l_1227 = (void*)0;
                int *l_1228 = &l_1204;
                int *l_1229 = &l_1193;
                int *l_1230 = &g_843;
                int *l_1231 = &l_1036;
                int *l_1232 = &g_470.f5;
                int *l_1233 = &l_1217;
                int *l_1234 = &l_1003;
                int *l_1236 = &l_1235;
                int l_1237 = (-1L);
                int *l_1238 = &l_1235;
                int *l_1239 = (void*)0;
                int *l_1240 = (void*)0;
                int *l_1241 = &l_1237;
                int *l_1242 = (void*)0;
                int *l_1243 = &g_156;
                int *l_1244 = &l_1204;
                int *l_1245 = &g_470.f2;
                int *l_1246 = &l_1198;
                int *l_1247 = &l_1113;
                int *l_1248 = &l_941.f0;
                int *l_1249 = &l_1193;
                int *l_1250 = &g_470.f5;
                int *l_1251 = &l_941.f2;
                int *l_1252 = &l_1204;
                int *l_1253 = &l_1113;
                int *l_1254 = &l_1113;
                int *l_1255 = &l_1193;
                int *l_1256 = &g_470.f2;
                int *l_1257 = &g_843;
                int *l_1258 = (void*)0;
                int *l_1259 = &g_470.f5;
                int *l_1260 = &l_1177;
                int *l_1261 = &l_1198;
                int *l_1262 = (void*)0;
                int *l_1263 = &l_941.f0;
                int *l_1264 = &l_1036;
                int *l_1265 = &l_1211;
                int *l_1266 = &l_1193;
                int *l_1267 = &l_1113;
                int *l_1268 = &l_941.f5;
                int *l_1269 = &g_53;
                int *l_1270 = &l_1003;
                int *l_1271 = &g_470.f2;
                int *l_1272 = (void*)0;
                int *l_1273 = &l_1217;
                int *l_1274 = &l_1217;
                int *l_1275 = &l_1204;
                int *l_1276 = &l_1090;
                int l_1277 = 0x801FFC9DL;
                int *l_1278 = (void*)0;
                int *l_1279 = &l_1198;
                int *l_1281 = &l_1235;
                int *l_1282 = (void*)0;
                int *l_1283 = &l_1198;
                int *l_1285 = &l_1133;
                int *l_1286 = &g_470.f2;
                int *l_1289 = (void*)0;
                int *l_1290 = &l_1288;
                int *l_1291 = &l_1177;
                int *l_1292 = &g_843;
                int *l_1293 = &g_156;
                int *l_1295 = &l_941.f5;
                int *l_1296 = &l_1211;
                int *l_1297 = &l_1235;
                int *l_1298 = (void*)0;
                int *l_1299 = (void*)0;
                int *l_1300 = &l_1287;
                int *l_1301 = &l_1294;
                int l_1302 = 0L;
                int *l_1304 = (void*)0;
                int *l_1305 = &l_1280;
                int *l_1306 = (void*)0;
                int *l_1307 = &l_1193;
                int *l_1308 = &l_1277;
                int *l_1309 = &l_1235;
                int *l_1310 = &l_1302;
                int *l_1311 = &l_1113;
                int *l_1312 = &l_1287;
                int *l_1313 = &l_1090;
                int *l_1314 = &l_1287;
                int *l_1316 = &g_843;
                int *l_1317 = (void*)0;
                int *l_1318 = &l_1133;
                int *l_1319 = (void*)0;
                int *l_1320 = &l_1288;
                int *l_1321 = &l_1090;
                int *l_1324 = (void*)0;
                int *l_1326 = (void*)0;
                int *l_1327 = (void*)0;
                (*l_990) = (((safe_rshift_func_int16_t_s_s(p_18, 1)) ^ (func_19((0UL || g_10.f0), ((func_19(((1UL == (l_993 <= (1UL && (safe_lshift_func_int16_t_s_u(l_993, g_470.f7))))) > ((&g_103 != &g_103) && p_18)), p_18, l_1001, g_880) , l_1002) , 0x972C388BL), l_1003, l_1004) > 0xCC2DL)) < g_298);
                if ((safe_add_func_int8_t_s_s((p_18 == (l_993 & ((255UL >= 0xF7L) < (l_1004.f3 > (p_18 > (g_10.f7 != ((l_1007 , g_69) ^ p_18))))))), 1UL)))
                {
                    struct S0 l_1013 = {0x240F579A9955BA35LL,0xA0L,7L,0L,0xA1E85E7BF9CD476FLL,0xED83L};
                    (*l_987) ^= func_19(((**l_945) , ((((safe_add_func_int64_t_s_s(p_18, (g_1010 != &g_278))) < ((*g_212) , ((!(3UL && p_18)) >= (1L >= p_18)))) <= g_470.f5) != 0xB7B40A61C01CE1BDLL)), l_1011, l_1012, l_1013);
                    if (p_18)
                        continue;
                    (*l_992) |= (g_10.f5 == l_1014);
                    for (g_880.f1 = 0; (g_880.f1 != 31); ++g_880.f1)
                    {
                        (*l_987) = (p_18 <= (safe_add_func_uint8_t_u_u((((((void*)0 != l_1019) , (l_1013.f0 , (safe_add_func_int32_t_s_s(p_18, l_1011)))) == func_19((g_96 | 0xCF9C7286L), p_18, p_18, g_245)) | 0x994434E8L), 0x2BL)));
                        if (p_18)
                            continue;
                    }
                }
                else
                {
                    struct S1 *l_1022 = &g_470;
                    struct S3 l_1023 = {422,756,124,1358,943};
                    int l_1028 = 0x22AB394CL;
                    int *l_1029 = &l_1028;
                    int *l_1030 = (void*)0;
                    int *l_1031 = &l_1028;
                    int *l_1032 = &g_53;
                    int *l_1033 = &g_470.f5;
                    int *l_1034 = &l_1003;
                    int *l_1035 = &g_156;
                    int *l_1037 = &l_941.f2;
                    int *l_1038 = &l_1028;
                    int *l_1039 = (void*)0;
                    int *l_1040 = &l_941.f0;
                    int *l_1041 = &l_941.f0;
                    int *l_1042 = &g_470.f0;
                    int *l_1043 = &l_1003;
                    int *l_1044 = (void*)0;
                    int *l_1045 = &g_470.f2;
                    int *l_1046 = &g_470.f0;
                    int *l_1047 = &l_941.f5;
                    int *l_1048 = (void*)0;
                    int *l_1049 = (void*)0;
                    int *l_1050 = &l_1003;
                    int *l_1051 = &g_470.f5;
                    int *l_1052 = &l_941.f5;
                    int *l_1053 = &l_941.f0;
                    int *l_1054 = &g_470.f5;
                    int *l_1056 = &g_53;
                    int *l_1057 = &g_470.f5;
                    int *l_1058 = &g_470.f5;
                    int *l_1059 = &g_156;
                    int *l_1060 = (void*)0;
                    int *l_1061 = &l_1028;
                    int *l_1062 = &l_941.f5;
                    int *l_1063 = &g_53;
                    int *l_1064 = &l_941.f0;
                    int *l_1065 = (void*)0;
                    int *l_1066 = &l_1028;
                    int *l_1067 = &l_1028;
                    int *l_1068 = &g_156;
                    int *l_1069 = (void*)0;
                    int *l_1070 = (void*)0;
                    int *l_1071 = (void*)0;
                    int *l_1072 = &g_470.f5;
                    int *l_1073 = &l_1028;
                    int *l_1074 = (void*)0;
                    int *l_1075 = &l_1036;
                    int *l_1076 = (void*)0;
                    int *l_1077 = &l_941.f0;
                    int *l_1078 = &l_941.f0;
                    int *l_1079 = (void*)0;
                    int *l_1080 = &g_470.f5;
                    int *l_1081 = &l_1036;
                    int *l_1082 = (void*)0;
                    int *l_1083 = &g_470.f0;
                    int *l_1084 = &g_470.f2;
                    int *l_1085 = &l_1036;
                    int *l_1086 = &l_1036;
                    int *l_1087 = &g_53;
                    int *l_1088 = (void*)0;
                    int *l_1089 = &g_843;
                    int *l_1091 = &l_1090;
                    int *l_1092 = &g_156;
                    int *l_1093 = &g_470.f2;
                    int *l_1094 = &l_941.f5;
                    int *l_1095 = &l_1090;
                    int *l_1096 = (void*)0;
                    int *l_1097 = (void*)0;
                    int *l_1098 = (void*)0;
                    int *l_1099 = &l_941.f0;
                    int *l_1100 = &l_941.f5;
                    int *l_1101 = (void*)0;
                    int *l_1102 = (void*)0;
                    int *l_1103 = &l_1090;
                    int *l_1105 = &l_1036;
                    int *l_1106 = &g_53;
                    int *l_1107 = (void*)0;
                    int *l_1108 = (void*)0;
                    int *l_1110 = &g_470.f0;
                    int *l_1111 = &l_1109;
                    int *l_1112 = (void*)0;
                    int *l_1114 = &l_1109;
                    int *l_1115 = &l_1036;
                    int *l_1116 = &l_1090;
                    int *l_1117 = &l_1003;
                    int *l_1118 = &l_1090;
                    int *l_1119 = (void*)0;
                    int *l_1120 = &l_941.f2;
                    int *l_1121 = &g_470.f0;
                    int *l_1122 = &g_470.f2;
                    int *l_1123 = &g_843;
                    int *l_1124 = &l_1028;
                    int *l_1125 = &l_1036;
                    int *l_1126 = (void*)0;
                    int *l_1127 = &g_156;
                    int l_1128 = 0x23AEFB74L;
                    int *l_1129 = &g_843;
                    int *l_1130 = &g_470.f0;
                    int *l_1131 = &l_1003;
                    int *l_1132 = &l_941.f2;
                    int *l_1134 = &g_843;
                    int *l_1135 = &l_1133;
                    int *l_1136 = &l_1028;
                    int *l_1137 = &g_843;
                    int *l_1138 = &l_1133;
                    int *l_1139 = (void*)0;
                    int *l_1140 = &l_1133;
                    unsigned short l_1141 = 65527UL;
                    l_1028 &= ((p_18 , ((((0xCBL < 255UL) , l_1022) != (void*)0) , (l_1023 , (((((func_19(g_69, p_18, func_19((safe_sub_func_uint64_t_u_u(0UL, g_10.f5)), p_18, l_1004.f2, l_1026), l_1026) <= g_10.f7) || p_18) || g_103.f6) != 0x87F1B01BL) <= g_880.f4)))) || l_1027);
                    --l_1141;
                    return (*g_916);
                }
                g_1328--;
            }
            (*l_992) = p_18;
        }
    }
    for (g_1328 = (-3); (g_1328 > 53); ++g_1328)
    {
        int **l_1333 = &l_913;
        unsigned l_1334 = 0x96F33B2BL;
        int l_1335 = (-1L);
        (*l_1333) = (void*)0;
        l_1335 = l_1334;
    }
    (*l_1336) = l_968.f4;
    return (*g_916);
}







static unsigned char func_19(unsigned short p_20, int p_21, int p_22, struct S0 p_23)
{
    int l_882 = (-5L);
    struct S1 l_884 = {1L,0xEBB1BF4CB5FBA18FLL,0xFC29F0A5L,0UL,0xF18AL,0xE938B8B6L,0x6465C546C4435002LL,4700,0x027C7CE6L};
    int **l_892 = &g_277;
    if (p_20)
    {
        int *l_881 = &g_843;
        struct S3 *l_883 = &g_278;
        (*l_881) = p_20;
        l_882 &= p_23.f1;
        (*l_883) = g_278;
        (*l_881) |= p_23.f5;
    }
    else
    {
        struct S2 **l_885 = &g_212;
        struct S3 *l_886 = &g_278;
        int *l_891 = &g_156;
        l_884.f0 = p_23.f2;
        (*l_891) = (0xDDL > ((l_885 == (((void*)0 == l_886) , &g_212)) , (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((~(g_401 & p_23.f4)) != 7L), p_21)), 0xB9DCE845L))));
    }
    (*l_892) = &p_22;
    for (g_470.f0 = (-22); (g_470.f0 != 20); ++g_470.f0)
    {
        (*g_277) = (g_470.f5 & (&g_156 != &g_843));
        for (g_156 = 0; (g_156 == (-11)); g_156 = safe_sub_func_uint8_t_u_u(g_156, 3))
        {
            return g_103.f0;
        }
        (*l_892) = &p_22;
    }
    for (l_884.f8 = 28; (l_884.f8 <= 58); l_884.f8 = safe_add_func_uint32_t_u_u(l_884.f8, 4))
    {
        int *l_899 = &g_10.f2;
        (*l_892) = l_899;
        if ((*g_277))
            break;
    }
    return g_103.f0;
}







static int func_24(struct S1 p_25)
{
    int **l_615 = &g_123;
    struct S3 l_616 = {115,1259,76,931,-7174};
    struct S2 l_619 = {1842,3,15770,43,0,6703,1627,251UL,-59,0UL};
    short l_620 = 0xE2ECL;
    int l_688 = (-9L);
    int l_702 = 0x18352B95L;
    int l_708 = 0x231B19A3L;
    int l_728 = 8L;
    int l_731 = 0L;
    int l_766 = 0x2071DB97L;
    int l_777 = 0x034AA081L;
    int l_779 = 0xD88CE5F2L;
    int l_785 = 0x8EF21A1BL;
    int l_798 = 1L;
    int l_811 = 0L;
    int l_846 = 0x3AD9B7FCL;
    int *l_873 = &l_779;
    (*l_615) = func_28(g_31, g_31);
    if (((l_616.f4 || l_620) == p_25.f6))
    {
        int *l_621 = (void*)0;
        int *l_622 = (void*)0;
        int *l_623 = &g_53;
        int *l_624 = &g_470.f0;
        int *l_625 = &g_470.f0;
        int *l_626 = &g_53;
        int *l_627 = &g_470.f2;
        int *l_628 = &g_53;
        int *l_629 = &g_470.f5;
        int *l_630 = &g_156;
        int *l_631 = (void*)0;
        int *l_632 = (void*)0;
        int *l_633 = (void*)0;
        int *l_634 = &g_470.f5;
        int *l_635 = (void*)0;
        int *l_636 = &g_470.f0;
        int *l_637 = &g_53;
        int *l_638 = &g_156;
        int *l_639 = &g_156;
        int *l_640 = &g_53;
        int *l_641 = (void*)0;
        int *l_642 = &g_470.f0;
        int *l_643 = &g_470.f2;
        int *l_644 = &g_53;
        int *l_645 = &g_156;
        int *l_646 = (void*)0;
        int *l_647 = &g_156;
        int *l_648 = (void*)0;
        int *l_649 = &g_156;
        int *l_650 = &g_470.f2;
        int *l_651 = (void*)0;
        int l_652 = 0x3CAE9386L;
        int *l_653 = &g_470.f5;
        int *l_654 = &g_470.f2;
        int *l_655 = &g_156;
        int *l_656 = &g_470.f5;
        int *l_657 = &g_470.f5;
        int *l_658 = &l_652;
        int *l_659 = &g_470.f2;
        int *l_660 = &g_156;
        int *l_661 = &g_470.f0;
        int *l_662 = &g_470.f5;
        int *l_663 = (void*)0;
        int *l_664 = &g_156;
        int *l_665 = (void*)0;
        int *l_666 = &g_470.f0;
        unsigned char l_667 = 255UL;
        int *l_670 = &l_652;
        int *l_671 = &g_53;
        int *l_672 = (void*)0;
        int *l_673 = &g_470.f0;
        int *l_674 = &g_53;
        int *l_675 = &g_470.f2;
        int *l_676 = &l_652;
        int *l_677 = &g_470.f5;
        int *l_678 = &l_652;
        int *l_679 = &l_652;
        int *l_680 = &g_53;
        int *l_681 = &g_53;
        int *l_682 = &l_652;
        int *l_683 = (void*)0;
        int *l_684 = &g_470.f5;
        int *l_685 = (void*)0;
        int *l_686 = (void*)0;
        int *l_687 = &l_652;
        int *l_689 = &g_470.f0;
        int *l_690 = &g_470.f2;
        int *l_691 = (void*)0;
        int *l_692 = &g_470.f2;
        int *l_693 = &g_470.f2;
        int *l_694 = (void*)0;
        int *l_695 = &g_470.f0;
        int *l_696 = &g_470.f2;
        int *l_697 = &g_53;
        int *l_698 = &g_470.f5;
        int *l_699 = &g_53;
        int *l_700 = &l_688;
        int *l_701 = &g_53;
        int *l_703 = (void*)0;
        int *l_704 = &l_688;
        int *l_705 = &l_688;
        int *l_706 = (void*)0;
        int *l_707 = &g_470.f5;
        int *l_709 = &l_652;
        int *l_710 = (void*)0;
        int *l_711 = &l_652;
        int *l_712 = &l_702;
        int *l_713 = &g_470.f5;
        int *l_714 = &g_470.f5;
        int *l_715 = &g_53;
        int *l_716 = &g_470.f2;
        int *l_717 = &l_688;
        int *l_718 = &l_708;
        int *l_719 = &g_156;
        int *l_720 = &l_702;
        int l_721 = 0x5F2161BBL;
        int *l_722 = &g_156;
        int *l_723 = &l_688;
        int *l_724 = (void*)0;
        int *l_725 = (void*)0;
        int *l_726 = &l_708;
        int *l_727 = (void*)0;
        int *l_729 = &g_470.f2;
        int *l_730 = (void*)0;
        int *l_732 = &l_702;
        int *l_733 = &l_721;
        int *l_734 = &l_731;
        int *l_735 = &l_721;
        int *l_736 = &l_731;
        int *l_737 = &g_470.f5;
        int *l_738 = &g_470.f0;
        int *l_739 = (void*)0;
        int *l_740 = &l_721;
        int *l_741 = &l_708;
        int *l_742 = &l_731;
        int *l_743 = &g_156;
        int *l_744 = &l_708;
        int *l_745 = &g_470.f5;
        int *l_746 = &g_470.f2;
        int *l_747 = &l_688;
        int *l_748 = &g_470.f5;
        int *l_749 = &l_652;
        int *l_750 = &l_731;
        int *l_751 = &l_702;
        int *l_752 = &l_721;
        int *l_753 = &l_688;
        int *l_754 = &g_53;
        int *l_755 = &l_652;
        int *l_756 = (void*)0;
        int *l_757 = &g_156;
        int *l_758 = (void*)0;
        int *l_759 = (void*)0;
        int *l_760 = &l_702;
        int *l_761 = (void*)0;
        int *l_762 = &l_702;
        int *l_763 = &g_470.f5;
        int l_764 = 0xF1A4CECBL;
        int *l_765 = &l_702;
        int *l_767 = &l_702;
        int *l_768 = &g_470.f5;
        int *l_769 = &l_702;
        int *l_770 = &l_731;
        int *l_771 = (void*)0;
        int *l_772 = &l_728;
        int *l_773 = (void*)0;
        int *l_774 = &g_470.f2;
        int *l_775 = (void*)0;
        int *l_776 = &l_764;
        int *l_778 = &g_470.f5;
        int *l_780 = (void*)0;
        int *l_781 = &l_702;
        int *l_782 = &l_764;
        int *l_783 = (void*)0;
        int *l_784 = &l_728;
        int *l_786 = &l_779;
        int *l_787 = &g_156;
        int *l_788 = &g_470.f0;
        int *l_789 = &l_652;
        int *l_790 = &l_779;
        int *l_791 = (void*)0;
        int l_792 = 0x97D33F3FL;
        int *l_793 = &l_785;
        int *l_794 = &l_721;
        int *l_795 = &l_728;
        int *l_796 = &l_731;
        int *l_797 = &l_766;
        int *l_799 = &l_766;
        int *l_800 = &l_777;
        int *l_801 = &l_798;
        int *l_802 = &l_702;
        int *l_803 = &g_470.f2;
        int *l_804 = &l_777;
        int *l_805 = (void*)0;
        int *l_806 = &l_798;
        int l_807 = 1L;
        int *l_808 = &l_702;
        int *l_809 = &l_702;
        int *l_810 = &l_702;
        int l_812 = 0x6A85570AL;
        int *l_813 = &l_777;
        int *l_814 = &l_807;
        int *l_815 = (void*)0;
        int *l_816 = &g_156;
        int *l_817 = &l_812;
        int *l_818 = (void*)0;
        int *l_819 = &g_470.f2;
        int *l_820 = &l_785;
        int *l_821 = (void*)0;
        int *l_822 = &l_721;
        int *l_823 = &l_764;
        int *l_824 = &l_702;
        int *l_825 = (void*)0;
        int *l_826 = &g_470.f2;
        int *l_827 = &l_785;
        int *l_828 = &g_470.f5;
        int *l_829 = &g_53;
        int *l_830 = &l_811;
        int *l_831 = &l_764;
        int *l_832 = &l_766;
        int *l_833 = &g_156;
        int *l_834 = (void*)0;
        int l_835 = 0x32747575L;
        int *l_836 = &l_807;
        int *l_837 = (void*)0;
        int *l_838 = (void*)0;
        int *l_839 = &l_764;
        int *l_840 = &l_777;
        int *l_841 = &l_807;
        int *l_842 = &l_807;
        int *l_844 = &l_812;
        int *l_845 = (void*)0;
        int *l_847 = &l_777;
        int *l_848 = &g_156;
        int *l_849 = &l_721;
        int *l_850 = &l_731;
        int *l_851 = &l_702;
        int *l_852 = &l_777;
        int *l_853 = &g_156;
        int *l_854 = &g_470.f5;
        int *l_855 = &l_764;
        int *l_857 = &g_470.f2;
        int *l_858 = (void*)0;
        int *l_859 = (void*)0;
        int *l_860 = &l_652;
        int *l_861 = &l_777;
        int *l_862 = (void*)0;
        int *l_863 = (void*)0;
        int *l_864 = (void*)0;
        int l_865 = 0x74D60928L;
        int *l_866 = &l_811;
        int *l_867 = (void*)0;
        int *l_868 = &l_865;
        --l_667;
        g_869--;
    }
    else
    {
        struct S0 *l_872 = &g_245;
        (*l_872) = g_245;
        return p_25.f6;
    }
    if (((*g_277) == (-9L)))
    {
        int *l_874 = &g_53;
        int *l_875 = &l_785;
        (*l_615) = l_873;
        l_875 = l_874;
        return (*l_875);
    }
    else
    {
        int *l_876 = &g_10.f2;
        struct S3 l_877 = {344,491,110,1084,2242};
        int *l_878 = &l_777;
        struct S3 *l_879 = &l_877;
        (*l_615) = &g_843;
        (*l_879) = g_278;
    }
    return p_25.f2;
}







static int * func_28(int * p_29, int * p_30)
{
    int *l_41 = &g_10.f5;
    int **l_612 = &g_123;
    int l_613 = 0x6FB1F53EL;
    struct S0 *l_614 = &g_245;
    (*l_612) = func_32(func_37(l_41, l_41, p_30), (*l_41), p_29, g_278);
    l_613 &= 0x16AE204AL;
    (*l_614) = g_245;
    return p_29;
}







static int * func_32(struct S3 p_33, char p_34, int * p_35, struct S3 p_36)
{
    int *l_476 = &g_10.f0;
    int l_524 = 7L;
    int l_547 = 0L;
    int l_551 = 6L;
    int l_564 = 0x32767108L;
    int l_588 = 0x0BA0075EL;
    int l_589 = 8L;
    for (g_428 = (-19); (g_428 >= 59); ++g_428)
    {
        int **l_477 = &g_277;
        char l_505 = 0x6EL;
        int l_506 = 0x18DA397DL;
        int l_574 = 0xA4FAA434L;
        int l_594 = 0xA934EFD5L;
        (*l_477) = l_476;
        for (g_470.f6 = 20; (g_470.f6 != 46); ++g_470.f6)
        {
            int *l_480 = &g_470.f2;
            int l_481 = 3L;
            int *l_482 = (void*)0;
            int *l_483 = &g_470.f5;
            int *l_484 = &l_481;
            int l_485 = (-1L);
            int *l_486 = &g_470.f2;
            int *l_487 = &g_156;
            int *l_488 = &l_485;
            int *l_489 = &l_481;
            int *l_490 = &g_156;
            int *l_491 = &g_53;
            int *l_492 = &g_53;
            int *l_493 = &g_470.f2;
            int *l_494 = &l_485;
            int *l_495 = &g_470.f5;
            int *l_496 = &g_470.f2;
            int *l_497 = &l_481;
            int *l_498 = &g_470.f5;
            int *l_499 = &l_481;
            int *l_500 = &g_470.f5;
            int *l_501 = &l_485;
            int *l_502 = (void*)0;
            int *l_503 = &g_470.f5;
            int *l_504 = &g_156;
            int *l_507 = &l_481;
            int *l_508 = &g_470.f0;
            int *l_509 = &g_53;
            int *l_510 = (void*)0;
            int *l_511 = (void*)0;
            int *l_512 = &g_470.f0;
            int *l_513 = &g_53;
            int *l_514 = &g_53;
            int *l_515 = &g_470.f5;
            int *l_516 = &g_470.f0;
            int *l_517 = (void*)0;
            int *l_518 = &g_53;
            int *l_519 = &l_485;
            int *l_520 = &g_470.f2;
            int *l_521 = (void*)0;
            int *l_522 = &g_53;
            int *l_523 = &l_485;
            int *l_525 = (void*)0;
            int *l_526 = &l_506;
            int *l_527 = &l_485;
            int *l_528 = (void*)0;
            int *l_529 = &g_470.f2;
            int *l_530 = &l_506;
            int *l_531 = &g_53;
            int *l_532 = &g_53;
            int l_533 = 1L;
            int *l_534 = &l_506;
            int *l_535 = &g_53;
            int l_536 = (-1L);
            int *l_537 = &g_470.f2;
            int *l_538 = (void*)0;
            int *l_539 = (void*)0;
            int *l_540 = &l_481;
            int *l_541 = &g_156;
            int *l_542 = &l_485;
            int *l_543 = &g_156;
            int *l_544 = &g_470.f2;
            int *l_545 = &l_533;
            int *l_546 = &l_533;
            int *l_548 = &g_470.f2;
            int *l_549 = &l_506;
            int *l_550 = (void*)0;
            int *l_552 = &g_156;
            int *l_553 = &l_485;
            int *l_554 = &g_470.f0;
            int *l_555 = (void*)0;
            int *l_556 = &l_506;
            int *l_557 = (void*)0;
            int *l_558 = (void*)0;
            int *l_559 = (void*)0;
            int *l_560 = &l_485;
            int *l_561 = &l_536;
            int *l_562 = (void*)0;
            int *l_563 = &g_53;
            int *l_565 = &g_470.f2;
            int *l_566 = &l_564;
            int *l_567 = &l_481;
            int *l_568 = &g_156;
            int *l_569 = (void*)0;
            int *l_570 = &l_533;
            int *l_571 = &g_470.f2;
            int *l_572 = (void*)0;
            int *l_573 = &g_470.f0;
            int *l_575 = (void*)0;
            int *l_576 = &l_533;
            int *l_577 = &l_533;
            int *l_578 = &g_156;
            int *l_579 = (void*)0;
            int *l_580 = &l_564;
            int *l_581 = &g_156;
            int *l_582 = (void*)0;
            int l_583 = 1L;
            int *l_584 = (void*)0;
            int *l_585 = &g_470.f5;
            int *l_586 = &l_536;
            int *l_587 = &l_506;
            int *l_590 = &l_589;
            int l_591 = 0x384A0247L;
            int l_592 = (-1L);
            int *l_593 = &l_588;
            int l_595 = (-4L);
            int *l_596 = &l_533;
            int *l_597 = &l_589;
            int *l_598 = &g_470.f5;
            int *l_599 = &l_481;
            int l_600 = 0x553275E7L;
            int *l_601 = (void*)0;
            int *l_602 = &l_592;
            int *l_603 = (void*)0;
            int *l_604 = &l_591;
            int *l_605 = &l_547;
            int *l_606 = &l_551;
            int *l_607 = &l_592;
            int *l_608 = &g_470.f0;
            --g_609;
        }
        (*l_477) = (*l_477);
    }
    return p_35;
}







static struct S3 func_37(int * p_38, int * p_39, int * p_40)
{
    int *l_48 = &g_10.f2;
    struct S3 l_250 = {184,1387,127,2893,531};
    struct S2 l_269 = {1332,-4,4576,491,0,8868,1800,0xF0L,10,0x29L};
    unsigned char l_462 = 255UL;
    struct S1 *l_469 = &g_470;
    struct S0 l_471 = {0x2A196B4996438B3ELL,0x25L,5L,1L,0x6D669E67C957AF7ELL,0xD436L};
    struct S0 *l_472 = (void*)0;
    struct S0 *l_473 = &g_245;
    if (((*p_38) , func_42(p_38, p_39, l_48, (*l_48), (g_10.f4 & (g_31 == (void*)0)))))
    {
        int *l_231 = &g_53;
        int **l_232 = (void*)0;
        int **l_233 = &g_31;
        struct S0 *l_244 = &g_245;
        struct S1 l_261 = {0x9DCC0066L,0x46DC24EEE4FC8B53LL,0xF06D8403L,65527UL,0x5C62L,-1L,0x0BBD9F06A960B59DLL,22593,18446744073709551615UL};
        struct S0 l_276 = {9UL,0xC4L,0x4CL,7L,0x72512A262BF9C2CALL,65532UL};
        int l_403 = 0xBF712A38L;
        int *l_439 = &l_261.f5;
        struct S1 *l_466 = &l_261;
        struct S1 **l_465 = &l_466;
        (*l_233) = l_231;
        for (g_96 = 3; (g_96 > 31); g_96++)
        {
            long long l_242 = 0L;
            struct S0 *l_243 = (void*)0;
            int l_271 = 0L;
            if ((0x4A8836995D41F0D6LL & ((safe_mod_func_int32_t_s_s((((g_96 || (*l_231)) && 0x1FL) && (((**l_233) | ((((((((**l_233) == ((safe_mod_func_int8_t_s_s((((*g_212) , (safe_rshift_func_uint16_t_u_s(((*l_48) || l_242), 3))) , 6L), (*l_231))) , (*l_231))) , l_243) != (void*)0) , l_243) == l_244) & 0x14CDL) & g_67)) || 0x58L)), (*g_123))) == (**l_233))))
            {
                unsigned short l_259 = 5UL;
                int l_260 = 0x540C6107L;
                short l_265 = 1L;
                for (g_67 = (-12); (g_67 <= 3); g_67 = safe_add_func_int64_t_s_s(g_67, 8))
                {
                    for (l_242 = 3; (l_242 < (-20)); --l_242)
                    {
                        return l_250;
                    }
                }
                if ((((((safe_add_func_uint64_t_u_u(g_53, (*l_48))) > (safe_sub_func_int64_t_s_s((safe_sub_func_int32_t_s_s((*g_31), (((((*l_231) != ((safe_lshift_func_int16_t_s_u((0x7CL && l_242), ((*l_48) & ((0x2228BB7CL <= ((*g_123) >= 1L)) != 65535UL)))) , l_259)) , (-10L)) ^ g_10.f5) , (*g_123)))), g_103.f6))) & (*l_48)) | g_53) >= l_259))
                {
                    (*l_233) = p_39;
                    l_260 ^= (*p_38);
                    (*l_244) = (l_261 , g_245);
                }
                else
                {
                    unsigned l_264 = 0x198974C4L;
                    int l_266 = 0xBABCDBC6L;
                    l_266 ^= (((**l_233) || (safe_rshift_func_uint8_t_u_s(l_264, (l_48 != (g_245 , &g_156))))) , l_265);
                }
            }
            else
            {
                int l_270 = (-1L);
                l_271 ^= (((**l_233) == (safe_mod_func_int64_t_s_s((l_269 , (*l_231)), l_270))) ^ g_103.f8);
            }
            for (l_242 = 0; (l_242 != 13); l_242 = safe_add_func_int64_t_s_s(l_242, 1))
            {
                for (g_67 = 0; (g_67 > 22); g_67++)
                {
                    (*l_244) = l_276;
                }
                if ((*g_123))
                    break;
                if ((*g_31))
                    continue;
            }
            (*l_233) = g_277;
            return g_278;
        }
        if ((*g_31))
        {
            int *l_283 = (void*)0;
            int l_284 = 0L;
            struct S2 **l_290 = &g_212;
            struct S0 l_310 = {18446744073709551615UL,0xF8L,0L,1L,18446744073709551608UL,0x7083L};
            struct S3 l_311 = {161,162,9,1202,-5997};
            struct S1 *l_441 = &l_261;
            if (((0UL & 0x98L) , func_42(p_38, p_38, &g_156, ((0xDD94085A30D52BE0LL & (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((0xDD2CD65A0D80B1D0LL < g_103.f6) , (**l_233)), 8)), (*l_231)))) || l_284), (*l_48))))
            {
                unsigned short l_289 = 0UL;
                int *l_297 = &g_10.f0;
                l_284 &= (safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(1L, (&g_53 != (void*)0))), g_103.f2));
                l_284 = (*g_277);
                (*l_231) |= (((safe_add_func_int8_t_s_s(l_289, g_103.f7)) || (safe_rshift_func_int16_t_s_s((g_278.f3 & 0L), 12))) , (*g_123));
            }
            else
            {
                short l_308 = (-4L);
                int l_312 = 6L;
                int l_343 = 0xCEB0BC73L;
                int l_386 = 9L;
                int l_426 = 1L;
                unsigned long long l_440 = 0x7453D5FF9862D915LL;
                if ((*g_277))
                {
                    unsigned char l_309 = 0x53L;
                    int l_390 = 1L;
                    int l_397 = 1L;
                    l_269.f8 = (safe_add_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(g_278.f1, (safe_unary_minus_func_int8_t_s((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(func_42(&g_156, &g_156, &g_156, (g_278.f0 != 0x19075D6D8AE4E631LL), (((*p_38) , l_308) , func_42(l_48, p_39, p_38, l_284, l_309))), g_298)), g_10.f3)))))) | (*l_48)), l_308));
                    (*l_244) = l_310;
                    if ((*p_39))
                    {
                        return l_311;
                    }
                    else
                    {
                        int *l_313 = &g_53;
                        int *l_314 = &g_156;
                        int *l_315 = &l_261.f2;
                        int *l_316 = &g_53;
                        int *l_317 = &l_284;
                        int *l_318 = &l_261.f0;
                        int *l_319 = &l_261.f0;
                        int *l_320 = &g_156;
                        int *l_321 = &g_156;
                        int *l_322 = (void*)0;
                        int *l_323 = &l_284;
                        int *l_324 = &l_261.f5;
                        int *l_325 = &l_261.f2;
                        int *l_326 = &l_284;
                        int *l_327 = &l_261.f2;
                        int *l_328 = &l_261.f2;
                        int *l_329 = &g_53;
                        int *l_330 = &g_53;
                        int *l_331 = &g_53;
                        int *l_332 = &g_156;
                        int *l_333 = (void*)0;
                        int *l_334 = &l_284;
                        int *l_335 = &l_284;
                        int *l_336 = &l_261.f2;
                        int *l_337 = &l_261.f0;
                        int *l_338 = &g_156;
                        int *l_339 = (void*)0;
                        int *l_340 = &l_261.f5;
                        int *l_341 = &l_261.f2;
                        int *l_344 = &l_343;
                        int *l_345 = &g_53;
                        int *l_346 = &l_284;
                        int *l_347 = &l_261.f0;
                        int *l_348 = &g_53;
                        int *l_349 = &l_284;
                        int *l_350 = (void*)0;
                        int *l_351 = (void*)0;
                        int *l_352 = &l_284;
                        int *l_353 = &l_261.f2;
                        int *l_354 = &g_156;
                        int *l_355 = &g_156;
                        int *l_356 = (void*)0;
                        int *l_357 = &l_261.f5;
                        int l_358 = 0xA5D3A2AAL;
                        int *l_359 = &l_261.f5;
                        int *l_360 = &l_261.f0;
                        int *l_361 = &l_261.f5;
                        int *l_362 = &l_261.f0;
                        int *l_363 = &l_284;
                        int *l_364 = &l_261.f0;
                        int *l_365 = &l_261.f2;
                        int *l_366 = &l_261.f2;
                        int *l_367 = &l_261.f2;
                        int *l_368 = &l_284;
                        int *l_369 = &l_284;
                        int *l_370 = &l_358;
                        int *l_371 = &g_156;
                        int *l_372 = &g_53;
                        int *l_373 = &g_156;
                        int *l_374 = &l_358;
                        int *l_375 = &g_156;
                        int *l_376 = &l_343;
                        int *l_377 = &l_343;
                        int *l_378 = (void*)0;
                        int *l_379 = &l_261.f5;
                        int *l_380 = &g_156;
                        int *l_381 = &l_358;
                        int *l_382 = &l_261.f2;
                        int *l_383 = &l_284;
                        int *l_384 = (void*)0;
                        int *l_385 = &l_343;
                        int *l_387 = &l_284;
                        int *l_388 = &l_358;
                        int *l_389 = &l_343;
                        int *l_391 = (void*)0;
                        int *l_392 = (void*)0;
                        int *l_393 = &l_343;
                        int *l_394 = &l_386;
                        int *l_395 = &l_390;
                        int *l_396 = &l_261.f5;
                        int l_398 = 9L;
                        int *l_399 = (void*)0;
                        int *l_400 = &l_358;
                        int *l_402 = &l_343;
                        int *l_404 = &l_403;
                        int *l_405 = &l_261.f5;
                        int *l_406 = &l_398;
                        int *l_407 = &g_53;
                        int *l_408 = &g_53;
                        int *l_409 = &l_358;
                        int *l_410 = &l_390;
                        int *l_411 = &g_156;
                        int *l_412 = &l_358;
                        int *l_413 = &l_358;
                        int l_414 = 0x2467AC9BL;
                        int *l_415 = (void*)0;
                        int *l_416 = (void*)0;
                        int *l_417 = &g_53;
                        int *l_418 = &l_398;
                        int *l_419 = &l_284;
                        int *l_420 = &l_261.f0;
                        int *l_421 = &l_414;
                        int *l_422 = &l_386;
                        int *l_423 = &l_261.f2;
                        int *l_424 = &l_403;
                        int *l_427 = &l_358;
                        struct S1 **l_442 = &l_441;
                        g_428--;
                        (*l_421) = (g_103.f3 || ((l_310.f2 & ((*l_48) && l_308)) >= (safe_rshift_func_uint8_t_u_u((g_245 , (safe_mod_func_uint64_t_u_u(g_10.f6, (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((void*)0 == &l_231), 4)), ((((*l_48) > (*l_404)) & (*g_277)) , 0x04L)))))), (*l_439)))));
                        (*l_442) = l_441;
                    }
                }
                else
                {
                    int *l_443 = &g_53;
                    (*l_233) = l_443;
                    (*g_31) |= (*g_123);
                }
            }
        }
        else
        {
            unsigned l_444 = 4294967292UL;
            int *l_447 = &l_403;
            int *l_448 = (void*)0;
            int *l_449 = (void*)0;
            int *l_450 = &l_403;
            int *l_451 = &l_261.f2;
            int *l_452 = &l_261.f5;
            int *l_453 = &l_261.f0;
            int *l_454 = &l_261.f5;
            int *l_455 = (void*)0;
            int *l_456 = (void*)0;
            int *l_457 = &g_53;
            int *l_458 = &l_403;
            int *l_459 = (void*)0;
            int *l_460 = (void*)0;
            int *l_461 = &g_53;
            l_444 = ((*l_48) < g_10.f3);
            (*l_231) = (((!(safe_lshift_func_int16_t_s_u((*l_48), 4))) && l_444) < (*l_439));
            --l_462;
        }
        (*l_465) = (void*)0;
    }
    else
    {
        int *l_467 = &g_156;
        struct S1 *l_468 = &g_10;
        (*l_467) &= (*p_39);
        l_469 = l_468;
    }
    (*l_473) = l_471;
    return l_250;
}







static int func_42(int * p_43, int * p_44, int * p_45, char p_46, unsigned long long p_47)
{
    long long l_51 = 0xDBE4B24D3E44E821LL;
    int l_84 = (-5L);
    int l_89 = 1L;
    int l_151 = (-5L);
    int l_152 = (-1L);
    int *l_227 = (void*)0;
    long long l_230 = 0L;
    if ((safe_lshift_func_uint8_t_u_u(l_51, 5)))
    {
        int *l_52 = &g_53;
        int *l_54 = &g_53;
        int *l_55 = &g_53;
        int *l_56 = &g_53;
        int *l_57 = &g_53;
        int *l_58 = &g_53;
        int *l_59 = (void*)0;
        int *l_60 = &g_53;
        int *l_61 = &g_53;
        int *l_62 = &g_53;
        int *l_63 = &g_53;
        int *l_64 = &g_53;
        int *l_65 = &g_53;
        int *l_66 = &g_53;
        int *l_68 = &g_53;
        int l_70 = 0x59CA02B2L;
        int *l_71 = &g_53;
        int *l_72 = &l_70;
        int *l_73 = &l_70;
        int *l_74 = (void*)0;
        int *l_75 = (void*)0;
        int *l_76 = (void*)0;
        int *l_77 = (void*)0;
        int *l_78 = &l_70;
        int *l_79 = &g_53;
        int *l_80 = &g_53;
        int *l_81 = &l_70;
        int *l_82 = &g_53;
        int *l_83 = &l_70;
        int *l_85 = &l_84;
        int *l_86 = &l_70;
        int *l_87 = &l_70;
        int *l_88 = &l_84;
        int *l_90 = &l_84;
        int *l_91 = &g_53;
        int *l_92 = &l_70;
        int l_93 = 0x0CFA8270L;
        int *l_94 = &l_84;
        (*l_52) |= (*p_43);
        g_96++;
    }
    else
    {
        struct S2 *l_113 = &g_103;
        int **l_115 = &g_31;
        int l_128 = (-2L);
        int l_130 = 1L;
        int l_159 = (-1L);
        struct S2 *l_223 = &g_103;
        for (g_95 = (-13); (g_95 > (-27)); g_95 = safe_sub_func_uint32_t_u_u(g_95, 4))
        {
            long long l_114 = 0xFF2A7570BAEA4427LL;
            for (g_96 = 0; (g_96 <= 60); g_96 = safe_add_func_uint8_t_u_u(g_96, 3))
            {
                struct S2 *l_104 = &g_103;
                struct S0 l_111 = {1UL,0UL,0L,0x90L,0x34EF3EF0B8C27A4ALL,0x05A5L};
                (*l_104) = g_103;
                for (g_53 = (-4); (g_53 != 16); g_53 = safe_add_func_int64_t_s_s(g_53, 6))
                {
                    int *l_112 = &g_10.f5;
                    g_103.f1 &= ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((g_96 && p_46), ((l_111 , l_89) || (((((&g_53 == l_112) , l_113) == (void*)0) & (p_47 > (-1L))) & l_114)))), 0x33L)) == (*l_112));
                    return l_84;
                }
                l_115 = &p_43;
                if ((*p_45))
                    continue;
            }
        }
        if ((safe_mod_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(0xB652L, p_46)) == ((l_89 && (safe_unary_minus_func_int16_t_s(((p_47 == (&g_53 == ((safe_add_func_uint8_t_u_u(g_103.f3, (((0x609A124DL & p_47) , g_123) == &g_53))) , (void*)0))) && l_84)))) == g_10.f1)) > l_84), 65527UL)))
        {
            struct S3 l_183 = {710,475,55,1780,4729};
            for (g_53 = 0; (g_53 != 1); ++g_53)
            {
                int *l_129 = &l_89;
                int *l_131 = &l_89;
                int *l_132 = &l_84;
                int *l_133 = &l_84;
                int *l_134 = &l_130;
                int *l_135 = &l_128;
                int *l_136 = &l_128;
                int *l_137 = &l_89;
                int *l_138 = (void*)0;
                int *l_139 = &l_128;
                int *l_140 = (void*)0;
                int *l_141 = &l_84;
                int *l_142 = &l_84;
                int *l_143 = &l_128;
                int *l_144 = &l_84;
                int *l_145 = &l_89;
                int *l_146 = &l_84;
                int *l_147 = &l_84;
                int *l_148 = &l_128;
                int *l_149 = &l_84;
                int *l_150 = (void*)0;
                int *l_153 = &l_151;
                int *l_154 = &l_128;
                int *l_155 = (void*)0;
                int *l_157 = &l_89;
                int *l_158 = (void*)0;
                int *l_160 = (void*)0;
                int *l_161 = &l_128;
                int *l_162 = &g_156;
                int *l_163 = &g_156;
                int *l_164 = &l_159;
                int *l_165 = &g_156;
                int *l_166 = &g_156;
                int *l_167 = &l_159;
                int *l_168 = &g_156;
                int *l_169 = &l_89;
                int *l_170 = &l_128;
                int *l_171 = &l_151;
                int *l_172 = &l_128;
                int *l_173 = &l_159;
                int *l_174 = &l_151;
                int *l_175 = (void*)0;
                int *l_176 = &g_156;
                int *l_177 = &l_130;
                int *l_178 = (void*)0;
                int *l_179 = &l_128;
                long long l_218 = (-1L);
                for (p_46 = 0; (p_46 <= 17); p_46 = safe_add_func_int8_t_s_s(p_46, 3))
                {
                    (*l_115) = (void*)0;
                }
                g_180--;
                if (((l_183 , (l_183.f0 < ((safe_mod_func_uint8_t_u_u((l_183.f2 , (safe_add_func_int16_t_s_s(((safe_add_func_int64_t_s_s(p_47, (~((((void*)0 == p_44) < (((safe_add_func_uint16_t_u_u((0xDCL && ((g_96 > (safe_unary_minus_func_uint16_t_u(((0x64CE0CA3B740F3B8LL && p_47) != (*p_44))))) >= p_46)), 0x1F22L)) ^ g_53) | (-5L))) || g_156)))) > g_10.f0), l_183.f3))), 2UL)) , p_46))) == g_67))
                {
                    unsigned short l_193 = 1UL;
                    struct S2 *l_203 = (void*)0;
                    l_193++;
                    if ((safe_rshift_func_uint16_t_u_s((g_10 , 0x34B3L), (*l_134))))
                    {
                        unsigned short l_202 = 0UL;
                        if ((*g_123))
                            break;
                        (*l_132) |= (safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_202, ((&g_103 != l_203) | (safe_mod_func_int32_t_s_s(l_202, (safe_sub_func_int64_t_s_s((g_103.f5 && (0UL == (safe_lshift_func_uint8_t_u_s((((*l_115) != p_44) || g_10.f7), 7)))), g_10.f0))))))), g_103.f6));
                        (*l_129) &= ((l_193 , (0x4EL > (&g_123 == ((safe_add_func_uint16_t_u_u(((void*)0 != l_203), ((((g_212 == (void*)0) & (p_46 != l_202)) || (*p_45)) && (-1L)))) , &g_123)))) , (*g_123));
                    }
                    else
                    {
                        if ((*g_123))
                            break;
                    }
                    for (g_67 = 20; (g_67 != 24); g_67 = safe_add_func_uint8_t_u_u(g_67, 2))
                    {
                        struct S2 **l_215 = &l_113;
                        (*l_137) &= l_193;
                        (*l_215) = &g_103;
                    }
                }
                else
                {
                    for (l_128 = 0; (l_128 <= 9); ++l_128)
                    {
                        l_218 ^= (*p_45);
                    }
                    (*l_169) &= (safe_mod_func_uint8_t_u_u(((*l_166) < g_10.f5), p_47));
                }
            }
        }
        else
        {
            struct S0 l_228 = {0xE4816DB70B35F69DLL,0x81L,7L,0L,4UL,0xDD5BL};
            for (p_47 = 0; (p_47 != 22); p_47 = safe_add_func_int64_t_s_s(p_47, 3))
            {
                struct S0 *l_229 = &l_228;
            }
            return (*p_43);
        }
    }
    return l_230;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_10.f1, "g_10.f1", print_hash_value);
    transparent_crc(g_10.f2, "g_10.f2", print_hash_value);
    transparent_crc(g_10.f3, "g_10.f3", print_hash_value);
    transparent_crc(g_10.f4, "g_10.f4", print_hash_value);
    transparent_crc(g_10.f5, "g_10.f5", print_hash_value);
    transparent_crc(g_10.f6, "g_10.f6", print_hash_value);
    transparent_crc(g_10.f7, "g_10.f7", print_hash_value);
    transparent_crc(g_10.f8, "g_10.f8", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_103.f2, "g_103.f2", print_hash_value);
    transparent_crc(g_103.f3, "g_103.f3", print_hash_value);
    transparent_crc(g_103.f4, "g_103.f4", print_hash_value);
    transparent_crc(g_103.f5, "g_103.f5", print_hash_value);
    transparent_crc(g_103.f6, "g_103.f6", print_hash_value);
    transparent_crc(g_103.f7, "g_103.f7", print_hash_value);
    transparent_crc(g_103.f8, "g_103.f8", print_hash_value);
    transparent_crc(g_103.f9, "g_103.f9", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_245.f0, "g_245.f0", print_hash_value);
    transparent_crc(g_245.f1, "g_245.f1", print_hash_value);
    transparent_crc(g_245.f2, "g_245.f2", print_hash_value);
    transparent_crc(g_245.f3, "g_245.f3", print_hash_value);
    transparent_crc(g_245.f4, "g_245.f4", print_hash_value);
    transparent_crc(g_245.f5, "g_245.f5", print_hash_value);
    transparent_crc(g_278.f0, "g_278.f0", print_hash_value);
    transparent_crc(g_278.f1, "g_278.f1", print_hash_value);
    transparent_crc(g_278.f2, "g_278.f2", print_hash_value);
    transparent_crc(g_278.f3, "g_278.f3", print_hash_value);
    transparent_crc(g_278.f4, "g_278.f4", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_470.f0, "g_470.f0", print_hash_value);
    transparent_crc(g_470.f1, "g_470.f1", print_hash_value);
    transparent_crc(g_470.f2, "g_470.f2", print_hash_value);
    transparent_crc(g_470.f3, "g_470.f3", print_hash_value);
    transparent_crc(g_470.f4, "g_470.f4", print_hash_value);
    transparent_crc(g_470.f5, "g_470.f5", print_hash_value);
    transparent_crc(g_470.f6, "g_470.f6", print_hash_value);
    transparent_crc(g_470.f7, "g_470.f7", print_hash_value);
    transparent_crc(g_470.f8, "g_470.f8", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_843, "g_843", print_hash_value);
    transparent_crc(g_856, "g_856", print_hash_value);
    transparent_crc(g_869, "g_869", print_hash_value);
    transparent_crc(g_880.f0, "g_880.f0", print_hash_value);
    transparent_crc(g_880.f1, "g_880.f1", print_hash_value);
    transparent_crc(g_880.f2, "g_880.f2", print_hash_value);
    transparent_crc(g_880.f3, "g_880.f3", print_hash_value);
    transparent_crc(g_880.f4, "g_880.f4", print_hash_value);
    transparent_crc(g_880.f5, "g_880.f5", print_hash_value);
    transparent_crc(g_1315, "g_1315", print_hash_value);
    transparent_crc(g_1328, "g_1328", print_hash_value);
    transparent_crc(g_1528, "g_1528", print_hash_value);
    transparent_crc(g_1581, "g_1581", print_hash_value);
    transparent_crc(g_1669, "g_1669", print_hash_value);
    transparent_crc(g_1683, "g_1683", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
