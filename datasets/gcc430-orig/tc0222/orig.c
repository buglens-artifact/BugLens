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
   unsigned f0 : 11;
   unsigned f1 : 20;
   signed f2 : 6;
   int f3;
   unsigned f4 : 1;
   unsigned f5 : 20;
   unsigned f6 : 2;
   signed f7 : 15;
};

struct S1 {
   signed f0 : 6;
   signed f1 : 29;
};

struct S2 {
   signed f0 : 19;
   unsigned f1;
   unsigned short f2;
   unsigned f3 : 27;
   const signed f4 : 29;
};

struct S3 {
   unsigned char f0;
   struct S2 f1;
   const signed f2 : 14;
   signed f3 : 27;
   unsigned f4 : 17;
};

union U4 {
   int f0;
   unsigned short f1;
};

union U5 {
   const int f0;
   char * f1;
   int f2;
   unsigned short f3;
};

union U6 {
   unsigned short f0;
   int f1;
   int f2;
   const unsigned f3 : 11;
   signed f4 : 30;
};


static char g_13 = (-1L);
static char g_19 = (-1L);
static char * const g_18 = &g_19;
static int g_55 = 0x0CFFAE3CL;
static union U6 g_69 = {65535UL};
static const union U4 g_71 = {-1L};
static unsigned short g_84 = 65529UL;
static unsigned short g_86 = 0UL;
static char g_105 = 0x2DL;
static union U6 *g_122 = &g_69;
static union U6 **g_121 = &g_122;
static int g_129 = 0x690C02A0L;
static union U4 g_132 = {-1L};
static struct S1 g_149 = {-2,5118};
static union U5 g_151 = {0L};
static struct S2 g_152 = {-286,1UL,65528UL,10825,-14011};
static struct S0 g_175 = {5,852,6,0L,0,73,0,-96};
static struct S0 *g_174 = &g_175;
static int g_185 = 0xA49DC3AFL;
static int *g_195 = (void*)0;
static short g_204 = (-6L);
static unsigned char g_206 = 255UL;
static struct S3 g_274 = {0x3FL,{435,0x6F7F2E4BL,0x7F61L,11555,-12379},-1,-4550,213};
static char **g_277 = (void*)0;
static struct S1 *g_331 = &g_149;
static struct S1 **g_330 = &g_331;
static unsigned g_365 = 0xEE888F00L;
static short g_392 = 0xED81L;
static unsigned *g_416 = &g_152.f1;
static unsigned **g_415 = &g_416;
static unsigned g_421 = 0xFA0C2CFDL;
static struct S0 **g_439 = &g_174;
static char ***g_443 = &g_277;
static struct S0 g_448 = {38,256,2,0xF3796F63L,0,940,0,-4};
static struct S0 *g_457 = &g_175;
static struct S2 *g_460 = (void*)0;
static char g_470 = (-2L);
static struct S1 g_513 = {0,11129};
static const union U4 *g_606 = (void*)0;
static const union U4 ** const g_605 = &g_606;
static const union U4 ** const *g_604 = &g_605;
static char *g_637 = (void*)0;
static union U4 **g_690 = (void*)0;
static char *g_702 = &g_470;
static unsigned short *g_748 = &g_151.f3;
static short g_776 = 0x72BAL;
static int g_782 = (-7L);
static char g_785 = 0L;
static union U5 g_792 = {0x2A33EBFFL};



static int func_1(void);
static int func_2(unsigned p_3, char * const p_4, union U5 p_5, unsigned char p_6);
static unsigned char func_16(char * const p_17);
static union U6 func_22(char ** p_23, union U4 p_24);
static unsigned func_33(char p_34, union U4 p_35);
static union U4 func_37(char * p_38, union U6 p_39);
static char * func_40(char p_41, int p_42);
static struct S1 func_48(char * p_49);
static short func_62(char * p_63, const union U4 p_64);
static const union U4 func_65(struct S2 p_66);
static int func_1(void)
{
    unsigned l_11 = 0x34392F20L;
    char *l_12 = &g_13;
    char *l_21 = &g_19;
    char **l_20 = &l_21;
    char *l_784 = &g_785;
    int l_786 = 0x5A149CCBL;
    char l_789 = 1L;
    int *l_811 = &l_786;
    (*l_811) = func_2((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((((*l_12) = (!l_11)) & ((l_11 ^ ((safe_mod_func_uint8_t_u_u(func_16(((*l_20) = g_18)), (l_786 &= ((*l_784) = l_11)))) & (safe_rshift_func_uint16_t_u_u(l_789, 5)))) | ((safe_sub_func_uint32_t_u_u(l_789, (g_274.f1.f3 , 0xEF7A2924L))) , l_789))), 3)), 0xF05DFF27L)), g_702, g_792, l_11);
    return g_152.f0;
}







static int func_2(unsigned p_3, char * const p_4, union U5 p_5, unsigned char p_6)
{
    short l_797 = 0x9159L;
    union U4 l_798 = {0L};
    union U4 *l_799 = &l_798;
    unsigned short l_806 = 0x43FCL;
    int *l_807 = &l_798.f0;
    (*l_807) = ((((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((func_33(l_797, ((*l_799) = (p_3 , l_798))) >= (((safe_mul_func_uint16_t_u_u((((!p_6) && (g_448.f2 = (safe_sub_func_int8_t_s_s(0x79L, ((((*g_121) != (*g_121)) == (((p_3 != p_6) < l_797) & l_806)) , l_806))))) >= p_3), p_5.f0)) == l_797) != 0L)), g_175.f1)), p_6)) != 0x23L) != 255UL) != p_6);
    for (g_55 = (-8); (g_55 < 8); g_55 = safe_add_func_uint16_t_u_u(g_55, 7))
    {
        int **l_810 = &g_195;
        (*g_605) = (void*)0;
        (*l_810) = l_807;
    }
    return p_3;
}







static unsigned char func_16(char * const p_17)
{
    char *l_26 = &g_19;
    char **l_25 = &l_26;
    int l_36 = 5L;
    short l_43 = 0x32E0L;
    union U6 l_348 = {0xDCB8L};
    short *l_775 = &g_776;
    union U4 l_777 = {7L};
    char * const l_780 = &g_19;
    int *l_781 = &g_782;
    (*l_781) &= ((func_22(l_25, ((((*l_775) &= (safe_mod_func_uint16_t_u_u(((l_348.f1 = (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_26) = (g_19 > ((**g_415) = func_33((l_36 && (l_36 != (*p_17))), func_37(func_40(l_43, (safe_sub_func_int32_t_s_s((g_19 || l_43), 0x7B6C411EL))), l_348))))), l_43)), l_36))) || l_348.f2), l_36))) == 0x9FC8L) , l_777)) , l_780) != (void*)0);
    if ((*l_781))
    {
        struct S1 *l_783 = &g_149;
        (*l_783) = func_48((*l_25));
        (*l_781) = func_33((*l_781), l_777);
    }
    else
    {
        return g_513.f0;
    }
    return g_149.f0;
}







static union U6 func_22(char ** p_23, union U4 p_24)
{
    unsigned short l_778 = 0x199FL;
    union U6 l_779 = {0x0E4DL};
    l_778 |= p_24.f1;
    return l_779;
}







static unsigned func_33(char p_34, union U4 p_35)
{
    char l_481 = 0x60L;
    const struct S0 l_483 = {7,688,-7,0xF2FACD07L,0,765,0,75};
    char *l_512 = &g_105;
    const union U4 l_522 = {0x873B4EECL};
    struct S1 l_528 = {5,13607};
    int * const l_533 = &g_55;
    union U5 l_537 = {-1L};
    char ***l_540 = &g_277;
    int **l_566 = (void*)0;
    const struct S2 l_571 = {-87,0xEFBBBDF6L,0x71EAL,10808,-5419};
    union U4 l_615 = {-1L};
    unsigned l_626 = 0x9CE89255L;
    int l_656 = 6L;
    struct S3 l_710 = {3UL,{-587,0UL,0x76FCL,11095,-12108},50,137,157};
    union U6 l_766 = {1UL};
    for (g_470 = 0; (g_470 != 8); g_470 = safe_add_func_int32_t_s_s(g_470, 2))
    {
        char l_477 = 0xD0L;
        unsigned *l_478 = &g_274.f1.f1;
        char *l_484 = &g_105;
        struct S2 l_516 = {409,0UL,0x57E0L,7458,-18085};
        struct S1 l_526 = {0,10089};
        if ((safe_lshift_func_uint16_t_u_u((+((g_149.f1 ^= ((((((**g_121) , p_35.f1) != ((*l_478) = ((**g_415) = l_477))) , &g_439) != (void*)0) & (safe_rshift_func_int16_t_s_u((l_481 ^ (safe_unary_minus_func_int16_t_s(((((*l_484) = ((l_483 , (void*)0) == (void*)0)) <= 0x53L) != 0xECB8L)))), 7)))) & p_35.f0)), 9)))
        {
            char *l_485 = &l_477;
            int *l_486 = &g_132.f0;
            (*l_486) &= (func_62(l_485, p_35) >= 0L);
            (*l_486) &= (0x691C45DCL < (0xB14EL > l_483.f5));
        }
        else
        {
            unsigned char l_489 = 0xF8L;
            int *l_490 = (void*)0;
            int l_491 = (-4L);
            struct S1 l_511 = {-6,2329};
            int **l_515 = &g_195;
            short *l_517 = &g_392;
            short l_518 = (-1L);
            char *l_521 = (void*)0;
            for (g_392 = 0; (g_392 < (-2)); g_392--)
            {
                if (p_34)
                {
                    int *l_492 = (void*)0;
                    int *l_493 = (void*)0;
                    int *l_494 = &g_129;
                    if (l_489)
                        break;
                    l_490 = (void*)0;
                    (*l_494) ^= l_491;
                    g_513 = func_48((l_512 = &l_481));
                }
                else
                {
                    int **l_514 = &l_490;
                    (*l_514) = &g_55;
                }
                if (g_129)
                    break;
            }
            (*l_515) = l_490;
            l_518 = (g_274 , (p_35.f0 , ((func_65(l_516) , ((*l_517) = l_516.f0)) || g_274.f1.f3)));
            for (g_129 = (-8); (g_129 <= 14); g_129 = safe_add_func_int8_t_s_s(g_129, 4))
            {
                int *l_523 = &g_132.f0;
                (*l_523) = p_34;
                return (**g_415);
            }
        }
        for (g_129 = 22; (g_129 <= (-9)); g_129--)
        {
            struct S1 *l_527 = &g_149;
            int l_549 = 3L;
            struct S0 *l_565 = &g_448;
            l_528 = (g_151 , ((*l_527) = l_526));
            for (g_274.f1.f2 = 11; (g_274.f1.f2 < 45); g_274.f1.f2 = safe_add_func_uint16_t_u_u(g_274.f1.f2, 1))
            {
                int *l_531 = &g_151.f2;
                int **l_532 = &l_531;
                int **l_534 = &l_531;
                union U6 **l_564 = (void*)0;
                (*l_532) = l_531;
                (*l_534) = l_533;
                for (l_481 = 0; (l_481 <= 2); l_481 = safe_add_func_int32_t_s_s(l_481, 7))
                {
                    char ****l_541 = &g_443;
                    int l_542 = 0x5BF2FEC3L;
                    unsigned char *l_543 = (void*)0;
                    unsigned char *l_544 = &g_206;
                    union U4 *l_557 = &g_132;
                    union U6 **l_563 = &g_122;
                }
                (*g_439) = l_565;
            }
        }
    }
    g_195 = l_533;
    if (((void*)0 != (*g_330)))
    {
        int **l_567 = &g_195;
        int *l_569 = &g_55;
        int **l_568 = &l_569;
        (*l_568) = ((*l_567) = &g_185);
    }
    else
    {
        struct S3 l_570 = {253UL,{-170,4294967295UL,0UL,9336,7069},-112,5453,360};
        struct S0 *l_572 = &g_175;
        struct S0 l_573 = {18,29,-6,4L,0,653,1,-113};
        const union U4 l_574 = {-1L};
        unsigned short *l_577 = &l_570.f1.f2;
        int *l_580 = &g_132.f0;
        l_572 = (l_570 , (l_571 , ((*g_439) = (*g_439))));
        (*l_580) ^= ((func_62(&p_34, (l_573 , (g_149.f0 , l_574))) <= l_573.f2) == ((*l_533) ^= (safe_rshift_func_uint16_t_u_u(((*l_577) |= (g_151.f2 & p_34)), ((safe_mod_func_int16_t_s_s(p_35.f1, l_570.f0)) , p_34)))));
        (*g_195) = p_35.f0;
        (*g_330) = (*g_330);
    }
    for (g_274.f1.f2 = 28; (g_274.f1.f2 <= 24); g_274.f1.f2 = safe_sub_func_int16_t_s_s(g_274.f1.f2, 1))
    {
        struct S0 l_587 = {29,808,1,-1L,0,14,0,-148};
        struct S1 ***l_610 = &g_330;
        unsigned short l_662 = 0x75ECL;
        char ***l_669 = (void*)0;
        union U5 l_694 = {-1L};
        char ****l_695 = &l_540;
        char ** const *l_697 = (void*)0;
        char ** const **l_696 = &l_697;
        char **l_701 = &g_637;
        short *l_707 = (void*)0;
        unsigned char *l_717 = &g_274.f0;
        unsigned char *l_718 = &g_206;
        unsigned char *l_730 = &g_274.f0;
        unsigned l_764 = 1UL;
    }
    return (*l_533);
}







static union U4 func_37(char * p_38, union U6 p_39)
{
    int l_351 = 1L;
    int *l_372 = &g_151.f2;
    const union U4 l_430 = {0x71713243L};
    unsigned l_451 = 0UL;
    unsigned char l_453 = 255UL;
    const struct S0 l_458 = {43,692,-5,0x5C263F21L,0,69,0,-15};
    struct S2 *l_459 = &g_152;
    const char *l_465 = &g_19;
    const char **l_464 = &l_465;
    int l_471 = 0x6BC4DDF6L;
    if ((p_39.f0 , (((~(~p_39.f0)) > 4UL) > (safe_add_func_int16_t_s_s(0L, l_351)))))
    {
        char l_354 = 0x03L;
        union U4 l_408 = {-10L};
        int *l_414 = &g_132.f0;
        struct S1 * const **l_422 = (void*)0;
        char ** const *l_445 = &g_277;
        struct S0 *l_456 = (void*)0;
        if ((safe_sub_func_uint32_t_u_u(l_354, (l_354 & (*p_38)))))
        {
            int **l_355 = &g_195;
            char ***l_442 = &g_277;
            (*l_355) = &g_129;
            for (p_39.f1 = (-11); (p_39.f1 > 7); p_39.f1++)
            {
                unsigned *l_369 = &g_274.f1.f1;
                union U5 l_371 = {0x6B623827L};
                struct S0 *l_383 = &g_175;
                char *l_409 = &l_354;
                unsigned **l_417 = (void*)0;
                int **l_424 = &g_195;
                for (g_86 = 27; (g_86 == 46); ++g_86)
                {
                    unsigned l_362 = 0x36921B34L;
                    unsigned **l_370 = &l_369;
                }
            }
            for (g_175.f3 = 22; (g_175.f3 < (-21)); g_175.f3 = safe_sub_func_int32_t_s_s(g_175.f3, 3))
            {
                unsigned l_434 = 0xC2BA1C7AL;
            }
        }
        else
        {
            int **l_452 = (void*)0;
            int **l_454 = (void*)0;
            int **l_455 = &l_414;
            l_414 = (void*)0;
            g_195 = &g_55;
            (*l_455) = (l_453 , l_372);
            return g_132;
        }
        g_457 = ((*g_439) = l_456);
        g_195 = l_414;
    }
    else
    {
        (*g_174) = l_458;
        g_460 = l_459;
    }
    (*l_372) &= (g_71 , p_39.f0);
    for (l_453 = 1; (l_453 >= 49); l_453 = safe_add_func_int8_t_s_s(l_453, 6))
    {
        struct S1 *l_463 = (void*)0;
        const char ***l_466 = (void*)0;
        const char ***l_467 = &l_464;
        char *l_468 = &g_105;
        char *l_469 = &g_470;
        struct S2 l_472 = {-219,0x1428B240L,65534UL,1192,5966};
        (*g_330) = l_463;
        (*l_372) |= (func_62(l_469, func_65(l_472)) && g_69.f3);
    }
    return l_430;
}







static char * func_40(char p_41, int p_42)
{
    int *l_186 = &g_55;
    char **l_187 = (void*)0;
    char ***l_188 = &l_187;
    char *l_191 = &g_19;
    char **l_190 = &l_191;
    char ***l_189 = &l_190;
    struct S1 *l_247 = (void*)0;
    struct S1 l_262 = {-1,-15421};
    struct S0 l_263 = {25,894,-4,-2L,0,33,0,-88};
    int l_282 = (-6L);
    const unsigned char *l_316 = &g_206;
    const unsigned char **l_315 = &l_316;
    struct S3 l_324 = {0x00L,{-410,0x1BD345BAL,7UL,7085,-22520},-67,1068,1};
    union U4 l_328 = {0x24B52CCDL};
    char *l_347 = &g_19;
    for (p_42 = 6; (p_42 >= (-4)); p_42 = safe_sub_func_int32_t_s_s(p_42, 4))
    {
        char **l_50 = (void*)0;
        char *l_52 = (void*)0;
        char **l_51 = &l_52;
        int *l_182 = (void*)0;
        int *l_183 = (void*)0;
        int *l_184 = &g_185;
        (*l_184) |= (((func_48(((*l_51) = &g_19)) , &g_105) == ((*g_174) , (void*)0)) < g_151.f2);
        (*l_184) = g_175.f6;
        l_186 = &g_129;
        if (g_175.f7)
            continue;
    }
    (*l_189) = ((*l_188) = l_187);
    if ((*l_186))
    {
        char l_196 = 8L;
        int l_200 = (-4L);
        char l_243 = 0xD1L;
        char **l_276 = (void*)0;
        if (p_42)
        {
            int *l_194 = &g_129;
            union U6 **l_225 = &g_122;
            int l_251 = (-9L);
            union U4 *l_255 = (void*)0;
            union U4 **l_254 = &l_255;
            for (g_69.f1 = 0; (g_69.f1 <= 28); g_69.f1 = safe_add_func_int16_t_s_s(g_69.f1, 4))
            {
                union U6 l_199 = {6UL};
                short *l_203 = &g_204;
                unsigned char *l_205 = &g_206;
                union U4 *l_253 = &g_132;
                union U4 **l_252 = &l_253;
                g_195 = l_194;
                if (((((*l_205) = (((g_84 = ((!((*l_194) = ((l_196 >= ((0x97L <= g_152.f1) | (65527UL <= (((safe_rshift_func_int8_t_s_u(((p_41 >= (l_199 , l_200)) <= (safe_add_func_int16_t_s_s(((*l_203) = 0xB782L), ((*l_186) && 0xAEL)))), p_41)) <= 0L) != l_196)))) <= p_42))) ^ g_149.f1)) == g_151.f0) || 0xCEBAA7D4L)) != p_42) & 3UL))
                {
                    const union U4 ***l_208 = (void*)0;
                    union U4 ***l_209 = (void*)0;
                    union U4 ***l_210 = (void*)0;
                    union U4 *l_213 = &g_132;
                    union U4 **l_212 = &l_213;
                    union U4 ***l_211 = &l_212;
                    union U5 l_216 = {-1L};
                    union U6 l_221 = {0UL};
                    int *l_222 = &g_185;
                    unsigned l_234 = 0UL;
                    (*l_186) |= ((safe_unary_minus_func_uint32_t_u(g_152.f2)) != 0x24E3L);
                    (*l_211) = (void*)0;
                    g_152.f0 |= ((*l_194) ^ ((*l_222) |= ((safe_sub_func_int16_t_s_s((l_216 , p_42), 0x5CEDL)) , ((safe_mul_func_int8_t_s_s((-4L), (safe_mul_func_uint8_t_u_u(l_216.f0, l_216.f0)))) >= (l_221 , 3L)))));
                    if ((safe_add_func_uint16_t_u_u((((void*)0 == l_225) , (safe_lshift_func_uint8_t_u_s(0xA3L, (safe_sub_func_uint32_t_u_u(((g_206 != p_42) || g_175.f6), (((g_151.f2 , (safe_lshift_func_uint16_t_u_s(((p_41 = ((safe_mul_func_int8_t_s_s(((((*l_222) = ((((g_71.f1 != (g_175.f1 , l_196)) && 2UL) , g_149) , (*g_18))) < 0xE1L) && l_234), 0xAFL)) <= p_41)) == l_199.f0), 9))) ^ p_42) < 0x5E0CL)))))), 65535UL)))
                    {
                        int *l_240 = &g_175.f3;
                        unsigned *l_244 = &l_234;
                        unsigned *l_245 = &g_152.f1;
                        unsigned l_246 = 9UL;
                        (*l_186) = (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s(p_42)), 13));
                        (*l_186) = (((((p_42 , (((safe_add_func_uint8_t_u_u(((*l_205) = g_55), 0xD2L)) , p_42) != (((*l_240) |= (*l_186)) , ((safe_mul_func_int16_t_s_s((((*l_245) ^= ((*l_244) = l_243)) ^ 0xC3962B67L), 0x3329L)) && ((0x7DL && l_246) | p_41))))) , p_42) || p_42) , 0x20F3L) | g_151.f0);
                        if ((*g_195))
                            break;
                        (*g_195) ^= l_200;
                    }
                    else
                    {
                        struct S1 **l_248 = &l_247;
                        union U6 l_249 = {0UL};
                        (*l_225) = (*g_121);
                        (*l_248) = l_247;
                        (*l_194) = ((((*l_203) |= (l_249 , g_206)) , 0x77A049A3L) , p_41);
                        if (p_42)
                            break;
                    }
                }
                else
                {
                    int **l_250 = &l_186;
                    (*l_250) = &p_42;
                    (*l_194) ^= ((*l_186) > 1L);
                    l_251 &= (*g_195);
                }
                if ((l_252 == l_254))
                {
                    int *l_256 = &l_199.f1;
                    int *l_257 = &g_185;
                    struct S0 l_258 = {14,339,-3,2L,0,8,1,131};
                    int **l_259 = &l_256;
                    (*l_257) ^= ((*l_186) = (p_42 != g_152.f1));
                    (*g_174) = l_258;
                    (*l_257) = (((*l_259) = &p_42) != &g_129);
                }
                else
                {
                    for (l_199.f0 = 0; (l_199.f0 < 44); l_199.f0++)
                    {
                        (*l_194) &= p_41;
                    }
                }
            }
            (*l_194) = 0L;
            (*g_174) = (l_262 , l_263);
        }
        else
        {
            short l_275 = 0x5F7FL;
            (*l_186) = (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(0xFB83L, (safe_mod_func_int8_t_s_s((p_41 = (safe_mul_func_uint16_t_u_u((func_62(&g_19, func_65(g_152)) && (safe_add_func_int32_t_s_s(p_41, (g_274 , 0xE444B370L)))), (*l_186)))), 0x92L)))), l_275));
        }
        g_277 = l_276;
        return &g_105;
    }
    else
    {
        struct S1 l_296 = {3,-19517};
        struct S2 l_302 = {202,4294967295UL,0x053FL,8622,19826};
        char *l_320 = &g_19;
        const union U4 l_325 = {0xC6F49F01L};
        struct S3 l_343 = {0x64L,{536,0x68605452L,0xFE03L,1593,1595},-76,82,294};
        if ((safe_rshift_func_uint16_t_u_u(p_42, (safe_add_func_int32_t_s_s(l_282, 0x9DC8EBE9L)))))
        {
            int **l_283 = &g_195;
            int **l_284 = &l_186;
            int l_290 = (-7L);
            union U4 *l_293 = &g_132;
            union U4 **l_292 = &l_293;
            union U4 *** const l_291 = &l_292;
            unsigned char *l_318 = &g_206;
            unsigned char ** const l_317 = &l_318;
            int l_319 = 0L;
            (*l_284) = ((*l_283) = &g_55);
            if ((g_149 , (*l_186)))
            {
                unsigned char l_298 = 0xDDL;
                for (g_105 = 23; (g_105 == 27); g_105 = safe_add_func_uint32_t_u_u(g_105, 8))
                {
                    int **l_287 = &g_195;
                    char *l_288 = &g_19;
                    char **l_289 = &l_191;
                    union U4 ***l_294 = &l_292;
                }
            }
            else
            {
                struct S1 *l_321 = &l_296;
                for (g_132.f0 = (-15); (g_132.f0 < 7); g_132.f0 = safe_add_func_uint8_t_u_u(g_132.f0, 6))
                {
                    int *l_303 = &g_69.f1;
                    int *l_304 = (void*)0;
                    int *l_305 = (void*)0;
                    int *l_306 = &g_129;
                    unsigned char *l_312 = &g_206;
                    unsigned char **l_311 = &l_312;
                    (*l_306) |= (l_302 , (*g_195));
                    if ((*g_195))
                        break;
                    p_42 ^= (safe_lshift_func_int16_t_s_u(g_69.f0, ((((*l_311) = l_191) == l_191) > (((**l_283) & ((safe_mod_func_int8_t_s_s(((g_274 , l_315) != l_317), (l_319 ^= (-2L)))) >= p_41)) == (-2L)))));
                }
                (*l_321) = func_48(l_320);
                (*l_284) = (*l_284);
                p_42 ^= (*g_195);
            }
            (**l_284) &= (0x3EC0L <= (safe_mul_func_int16_t_s_s(func_62((l_324 , l_320), l_325), g_151.f2)));
        }
        else
        {
            union U4 *l_329 = &g_132;
            struct S1 ***l_332 = (void*)0;
            struct S1 ***l_333 = &g_330;
            short *l_336 = &g_204;
            int l_344 = 0x57563AC0L;
            short l_345 = 0xFD95L;
            char *l_346 = &g_105;
            l_186 = &l_282;
            (*l_186) = (((safe_add_func_int8_t_s_s(((g_152.f0 , ((*l_333) = (((*l_329) = l_328) , g_330))) == (void*)0), (((safe_lshift_func_int16_t_s_u(((*l_336) = p_41), 2)) , ((*l_346) = ((((safe_sub_func_uint8_t_u_u(func_62(((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((l_343 , (((((*l_336) |= ((g_151 , l_324.f1) , g_105)) != p_42) , 1L) < l_344)), p_41)), l_345)) , l_320), l_325), 0x3AL)) & (-1L)) < 0xFE6DE962L) | p_42))) <= l_345))) | 0x98L) <= l_344);
        }
        return l_347;
    }
}







static struct S1 func_48(char * p_49)
{
    unsigned char l_53 = 0xACL;
    int *l_54 = &g_55;
    struct S2 l_67 = {315,0x0FD77138L,1UL,8783,9852};
    unsigned char *l_110 = &l_53;
    union U4 l_134 = {0L};
    struct S0 l_143 = {14,892,7,0x337E63E7L,0,854,0,-162};
    struct S0 *l_144 = &l_143;
    short l_161 = (-5L);
    int * const l_162 = (void*)0;
    int *l_180 = (void*)0;
    struct S1 l_181 = {-4,9082};
    if (((((*l_54) = l_53) , ((*l_110) = (safe_add_func_uint32_t_u_u(((*l_54) & 0xEC7EL), (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((func_62(&g_19, func_65(l_67)) == g_19), (+(*g_18)))), 255UL)))))) || (*l_54)))
    {
        struct S3 l_115 = {0x87L,{493,0x99732ED8L,0UL,6422,-17093},26,-1572,256};
        union U6 **l_124 = (void*)0;
        const union U4 l_125 = {0xC892F938L};
        for (l_67.f1 = 0; (l_67.f1 < 17); ++l_67.f1)
        {
            unsigned *l_118 = &l_115.f1.f1;
            union U5 l_123 = {-1L};
            int *l_126 = (void*)0;
            int *l_127 = (void*)0;
            int *l_128 = &g_129;
            (*l_128) &= (safe_sub_func_uint32_t_u_u(((l_115 , (safe_mod_func_uint32_t_u_u(((*l_118) = 0x8C8F4DBAL), ((1L & (safe_add_func_int8_t_s_s(((g_121 != (l_123 , l_124)) <= (func_62(p_49, l_125) <= (*g_18))), (-1L)))) && l_115.f3)))) <= (*l_54)), g_19));
        }
    }
    else
    {
        char *l_130 = &g_105;
        union U4 *l_131 = &g_132;
        int l_133 = 1L;
        int *l_139 = &g_129;
        int *l_142 = &l_134.f0;
        (*l_139) ^= (g_71 , (l_133 < (((l_134 , (safe_sub_func_int16_t_s_s(((g_69.f0 <= (~(safe_sub_func_int32_t_s_s((((g_105 && (0xB0D1CDFBL >= ((*l_54) = l_133))) > l_133) && 0x6B6A2D83L), 4294967295UL)))) && (*l_54)), l_133))) , l_133) > 1UL)));
        (*l_142) &= (safe_sub_func_uint8_t_u_u((+(((*l_139) & g_71.f1) || (*l_54))), g_105));
    }
    (*l_144) = l_143;
    if ((*l_54))
    {
        const union U4 l_148 = {-6L};
        struct S1 *l_150 = &g_149;
        char *l_159 = &g_105;
        struct S2 l_160 = {113,0x50CCDA4AL,0xFB27L,2273,19323};
        for (l_134.f1 = 22; (l_134.f1 <= 57); l_134.f1 = safe_add_func_uint8_t_u_u(l_134.f1, 6))
        {
            int *l_147 = &g_132.f0;
            (*l_147) &= (*l_54);
            (*l_54) |= func_62(p_49, l_148);
        }
        (*l_150) = g_149;
        g_132.f0 &= (((g_151 , ((*l_159) |= ((*p_49) == ((l_160.f0 = (((safe_mod_func_int16_t_s_s(l_148.f0, (safe_rshift_func_uint16_t_u_s((((**g_121) , (safe_sub_func_int16_t_s_s((!(*l_54)), l_161))) <= 0UL), l_148.f1)))) >= g_19) || 4294967289UL)) <= 1L)))) , g_19) > (*g_18));
    }
    else
    {
        int **l_163 = &l_54;
        const struct S1 l_164 = {-7,18800};
        struct S1 *l_165 = &g_149;
        char *l_166 = &g_105;
        const union U4 l_167 = {0x495938EEL};
        unsigned *l_170 = &l_67.f1;
        union U5 l_178 = {-1L};
        (*l_163) = l_162;
        (*l_165) = l_164;
        if (((g_86 , ((*l_170) |= (safe_add_func_int8_t_s_s(func_62(&g_19, g_132), l_167.f1)))) < g_152.f4))
        {
            struct S0 **l_176 = &l_144;
            int *l_177 = &g_69.f2;
            for (g_69.f0 = (-23); (g_69.f0 != 49); g_69.f0 = safe_add_func_uint32_t_u_u(g_69.f0, 2))
            {
                struct S1 *l_173 = &g_149;
                l_173 = &g_149;
                if (g_151.f0)
                    continue;
            }
            (*l_176) = g_174;
            (*l_177) = g_175.f0;
        }
        else
        {
            int *l_179 = &l_134.f0;
            (*l_179) = (((*g_122) , l_178) , (~(g_69.f1 ^= l_178.f0)));
        }
    }
    l_180 = l_162;
    return l_181;
}







static short func_62(char * p_63, const union U4 p_64)
{
    int l_72 = 9L;
    union U5 l_77 = {0x02F310E2L};
    int *l_78 = &g_69.f2;
    int *l_79 = (void*)0;
    int l_80 = (-6L);
    char * const l_81 = &g_19;
    unsigned short *l_82 = (void*)0;
    unsigned short *l_83 = &g_84;
    unsigned short *l_85 = &g_86;
    struct S1 l_90 = {-1,-2420};
    if ((g_69 , (l_72 | (1UL < (l_72 , ((safe_sub_func_uint16_t_u_u((p_64.f1 | g_71.f1), ((*l_85) ^= (((safe_mul_func_int8_t_s_s((((*l_78) = (l_77 , (l_80 |= g_19))) != (((*l_83) = (l_81 != (void*)0)) || g_19)), 0x7CL)) , 0x95L) < g_71.f1)))) < p_64.f0))))))
    {
        struct S1 l_88 = {4,10641};
        int *l_106 = &l_77.f2;
        int **l_107 = &l_79;
        if (g_69.f3)
        {
            union U6 *l_87 = (void*)0;
            struct S1 *l_89 = &l_88;
            l_87 = l_87;
            (*l_89) = l_88;
            (*l_78) = g_19;
        }
        else
        {
            struct S1 *l_91 = &l_88;
            (*l_91) = l_90;
        }
        for (g_69.f1 = 9; (g_69.f1 >= (-2)); g_69.f1--)
        {
            char *l_104 = &g_105;
            l_88.f0 ^= ((*p_63) ^ ((safe_sub_func_int8_t_s_s(0xB9L, l_88.f1)) , ((*l_104) = ((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(9L, g_69.f2)), (p_64.f1 || (*p_63)))) ^ ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((*g_18) , (*l_78)), 1UL)), 4)) & 0xE450752DL)))));
        }
        (*l_106) ^= (l_88.f1 = (*l_78));
        (*l_107) = l_106;
    }
    else
    {
        int **l_108 = (void*)0;
        int **l_109 = &l_79;
        (*l_109) = &g_55;
    }
    return (*l_78);
}







static const union U4 func_65(struct S2 p_66)
{
    union U6 *l_68 = &g_69;
    union U6 **l_70 = &l_68;
    (*l_70) = l_68;
    return g_71;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    transparent_crc(g_132.f1, "g_132.f1", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_149.f1, "g_149.f1", print_hash_value);
    transparent_crc(g_151.f0, "g_151.f0", print_hash_value);
    transparent_crc(g_151.f2, "g_151.f2", print_hash_value);
    transparent_crc(g_151.f3, "g_151.f3", print_hash_value);
    transparent_crc(g_152.f0, "g_152.f0", print_hash_value);
    transparent_crc(g_152.f1, "g_152.f1", print_hash_value);
    transparent_crc(g_152.f2, "g_152.f2", print_hash_value);
    transparent_crc(g_152.f3, "g_152.f3", print_hash_value);
    transparent_crc(g_152.f4, "g_152.f4", print_hash_value);
    transparent_crc(g_175.f0, "g_175.f0", print_hash_value);
    transparent_crc(g_175.f1, "g_175.f1", print_hash_value);
    transparent_crc(g_175.f2, "g_175.f2", print_hash_value);
    transparent_crc(g_175.f3, "g_175.f3", print_hash_value);
    transparent_crc(g_175.f4, "g_175.f4", print_hash_value);
    transparent_crc(g_175.f5, "g_175.f5", print_hash_value);
    transparent_crc(g_175.f6, "g_175.f6", print_hash_value);
    transparent_crc(g_175.f7, "g_175.f7", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_274.f0, "g_274.f0", print_hash_value);
    transparent_crc(g_274.f1.f0, "g_274.f1.f0", print_hash_value);
    transparent_crc(g_274.f1.f1, "g_274.f1.f1", print_hash_value);
    transparent_crc(g_274.f1.f2, "g_274.f1.f2", print_hash_value);
    transparent_crc(g_274.f1.f3, "g_274.f1.f3", print_hash_value);
    transparent_crc(g_274.f1.f4, "g_274.f1.f4", print_hash_value);
    transparent_crc(g_274.f2, "g_274.f2", print_hash_value);
    transparent_crc(g_274.f3, "g_274.f3", print_hash_value);
    transparent_crc(g_274.f4, "g_274.f4", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_448.f0, "g_448.f0", print_hash_value);
    transparent_crc(g_448.f1, "g_448.f1", print_hash_value);
    transparent_crc(g_448.f2, "g_448.f2", print_hash_value);
    transparent_crc(g_448.f3, "g_448.f3", print_hash_value);
    transparent_crc(g_448.f4, "g_448.f4", print_hash_value);
    transparent_crc(g_448.f5, "g_448.f5", print_hash_value);
    transparent_crc(g_448.f6, "g_448.f6", print_hash_value);
    transparent_crc(g_448.f7, "g_448.f7", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_513.f0, "g_513.f0", print_hash_value);
    transparent_crc(g_513.f1, "g_513.f1", print_hash_value);
    transparent_crc(g_776, "g_776", print_hash_value);
    transparent_crc(g_782, "g_782", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_792.f0, "g_792.f0", print_hash_value);
    transparent_crc(g_792.f2, "g_792.f2", print_hash_value);
    transparent_crc(g_792.f3, "g_792.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
