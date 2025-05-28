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
   char f0;
   char f1;
   char f2;
};

struct S1 {
   int f0;
   int f1;
   unsigned short f2;
   short f3;
};

struct S2 {
   unsigned f0;
   int f1;
   short f2;
   unsigned long long f3;
   struct S0 f4;
   char f5;
   char f6;
};

struct S3 {
   unsigned f0;
   long long f1;
   unsigned short f2;
   struct S0 f3;
};

struct S4 {
   short f0;
   unsigned short f1;
   unsigned short f2;
   unsigned char f3;
   char f4;
   struct S0 f5;
   struct S0 f6;
   long long f7;
   unsigned long long f8;
};

struct S5 {
   char f0;
};

struct S6 {
   char f0;
   int f1;
   struct S3 f2;
   int f3;
   unsigned f4;
   unsigned short f5;
};

struct S7 {
   int f0;
   unsigned f1;
   unsigned long long f2;
   struct S5 f3;
   unsigned short f4;
   struct S0 f5;
   unsigned long long f6;
   struct S3 f7;
   struct S1 f8;
};

struct S8 {
   struct S5 f0;
   unsigned f1;
   unsigned long long f2;
   long long f3;
   long long f4;
   unsigned f5;
   unsigned long long f6;
   struct S2 f7;
   struct S1 f8;
};


static short g_10 = (-1L);
static struct S2 g_14 = {4294967295UL,5L,-1L,0x97C242EA6AE20245LL,{0L,0xEDL,0x66L},0x98L,-6L};
static struct S6 g_22 = {0x31L,5L,{4UL,1L,0xF882L,{0x77L,-1L,0x39L}},3L,8UL,0UL};
static struct S4 g_58 = {-1L,65532UL,0x8992L,0x17L,0x39L,{0L,-7L,0x2CL},{0x56L,0xF9L,0x2FL},-8L,0xCA0CB05F29889812LL};
static struct S1 g_59 = {-1L,0x078D04C5L,0UL,1L};
static struct S8 g_68 = {{0L},0x807F30BCL,18446744073709551610UL,0xAB526F66C249806CLL,0x2BCBDF4B4D06AD95LL,0xE107FD1BL,18446744073709551615UL,{4294967287UL,0x33BDD32EL,0L,0x6CCB9D5BE6635941LL,{0xC7L,0L,0x17L},0xD0L,0x89L},{0x83112419L,0xF755CB3DL,9UL,0xA9CDL}};
static int *g_80 = &g_59.f1;
static struct S8 g_129 = {{0x7DL},0UL,7UL,-1L,0L,18446744073709551606UL,0UL,{0x70F0F86BL,1L,1L,6UL,{0x5BL,5L,0x2BL},-1L,6L},{0xCDA90051L,0x552A8F97L,65531UL,0L}};
static struct S8 *g_128 = &g_129;
static struct S7 g_131 = {0xB537B2DEL,0x09F092F5L,0x2C128838847EDA4BLL,{-1L},1UL,{7L,0x6CL,0x95L},4UL,{18446744073709551615UL,0x48052E4B5579BDA6LL,0x49EEL,{0x0EL,0x6DL,-5L}},{0xB8B10F99L,-1L,0x33F5L,0xE081L}};
static struct S5 *g_193 = &g_68.f0;
static struct S4 *g_207 = &g_58;
static struct S6 *g_209 = (void*)0;
static struct S6 **g_208 = &g_209;
static char *g_229 = &g_14.f4.f1;
static char **g_228 = &g_229;
static unsigned long long *g_265 = &g_68.f7.f3;
static struct S3 *g_267 = &g_131.f7;
static struct S7 g_298 = {1L,0x60C1E190L,0x94755083AC8DA507LL,{0xB0L},0xA0F8L,{1L,0x7FL,0x9DL},3UL,{18446744073709551615UL,0x1F741FB1205E54A7LL,0x3B53L,{1L,0xF0L,-1L}},{0xC2A5C860L,8L,65532UL,0xCA14L}};
static struct S0 *g_349 = &g_58.f6;
static struct S2 *g_393 = (void*)0;
static struct S2 **g_392 = &g_393;
static short g_412 = 0xCCA1L;
static struct S6 *g_513 = &g_22;
static struct S7 **g_535 = (void*)0;
static char g_548 = 0x87L;



static struct S0 func_1(void);
static int func_2(unsigned char p_3, struct S3 p_4, struct S7 p_5, unsigned p_6);
static short func_12(struct S2 p_13);
static int func_15(struct S2 p_16, unsigned p_17);
static struct S2 func_18(struct S6 p_19, unsigned p_20, struct S3 p_21);
static char func_23(unsigned p_24, struct S3 p_25);
static short func_31(struct S1 p_32, short p_33, unsigned p_34, unsigned long long p_35, struct S7 p_36);
static struct S6 func_40(struct S8 p_41, int p_42, unsigned p_43);
static struct S8 func_44(struct S6 p_45, struct S0 p_46, char p_47, struct S1 p_48, unsigned p_49);
static struct S0 func_51(unsigned long long p_52, unsigned short p_53, struct S0 p_54);
static struct S0 func_1(void)
{
    short l_9 = 0x494DL;
    struct S3 l_11 = {0xA3A6D7D0L,0x549C4B05EF13550ELL,0x5260L,{1L,0x53L,-5L}};
    struct S7 l_270 = {0xCF7F68F9L,0xB7C17490L,0xF47E50A9CAA30F8ALL,{0xB1L},0x4F73L,{6L,0x14L,-1L},0x1EACA357E05E394CLL,{0xD9D83A20L,0xE50A03590A5F404ELL,0UL,{1L,-1L,-2L}},{-1L,1L,0x3568L,0xCE02L}};
    int *l_461 = &g_68.f8.f1;
    struct S6 l_464 = {0xC0L,0x36B97A07L,{18446744073709551615UL,0x4DDC6E0412640F0DLL,0UL,{3L,2L,0L}},0x0C3CC851L,18446744073709551615UL,0x05C1L};
    struct S8 l_467 = {{0x9AL},4294967289UL,0xB2C84721731D43FELL,-9L,0L,0x5AC42418L,18446744073709551615UL,{0x4EF56C79L,-1L,0x1CA5L,0x23EA01A74263DBFBLL,{3L,0L,-9L},0xBEL,-10L},{0x880525FDL,0x0F845E03L,0xAA95L,0x0174L}};
    unsigned l_473 = 4294967286UL;
    struct S2 l_476 = {0x32AE5405L,0x596CF206L,0xA21FL,0x2AEC7EE54CC02C38LL,{-1L,0xAAL,0x4BL},0L,0x77L};
    struct S0 *l_499 = &l_11.f3;
    int l_521 = (-5L);
    struct S7 *l_533 = &l_270;
    struct S7 **l_532 = &l_533;
    struct S7 ***l_534 = &l_532;
    struct S7 ***l_536 = &g_535;
    unsigned long long l_546 = 0xE6345D01E6A61EAELL;
    long long l_553 = (-1L);
    unsigned *l_556 = &l_270.f1;
    (*l_461) = func_2((safe_sub_func_uint16_t_u_u(l_9, g_10)), l_11, ((func_12(g_14) == l_9) , (((*g_207) = (*g_207)) , l_270)), g_131.f1);




    ;
    if ((*l_461))
    {
        struct S8 *l_462 = &g_129;
        struct S8 **l_463 = &l_462;
        int l_472 = 0xEF643513L;
        struct S6 *l_474 = &g_22;
        struct S4 l_475 = {0x9DBDL,65530UL,65535UL,251UL,-8L,{0x54L,5L,0xD1L},{0x5AL,0xABL,-1L},0x2FAF2E1369F4A766LL,18446744073709551614UL};
        int **l_477 = &l_461;
        short *l_478 = (void*)0;
        short *l_479 = &g_14.f2;
        struct S7 l_480 = {0xA820F3FBL,2UL,1UL,{0x04L},65535UL,{-2L,0x9DL,-1L},18446744073709551609UL,{0UL,0x420E61F080417E1FLL,0xC847L,{0L,0xC0L,0L}},{-1L,0L,0x5157L,0L}};
        (*l_463) = l_462;
        (*l_461) = ((*l_461) >= (**l_477));
        g_128 = (g_68 , &g_129);

        ;
    }
    else
    {
        struct S6 l_481 = {0xC5L,0x52909D06L,{0x22335016L,0x838D6F7D79F69E9CLL,0UL,{0x16L,0xB0L,0x77L}},-1L,18446744073709551613UL,3UL};
        unsigned *l_484 = &l_476.f0;
        struct S8 *l_485 = &g_129;
        int *l_528 = (void*)0;
        int *l_529 = &g_22.f3;
        (*l_485) = func_44(l_481, l_481.f2.f3, l_481.f5, g_131.f8, ((*l_484) = ((((safe_sub_func_uint8_t_u_u(l_481.f2.f1, (4294967295UL <= (*l_461)))) == (*l_461)) & (((+(*l_461)) < g_412) == (-5L))) || g_298.f8.f0)));
        if (((*l_461) || l_481.f2.f3.f2))
        {
            int l_486 = 0L;
            l_486 = 0x72B2773BL;
            (*g_193) = (*g_193);
        }
        else
        {
            unsigned short l_491 = 0x7A04L;
            struct S1 l_497 = {-5L,-9L,65532UL,-1L};
            struct S3 *l_508 = &g_131.f7;
            char *l_514 = &l_481.f2.f3.f1;
            short l_522 = 1L;
            unsigned short *l_523 = (void*)0;
            unsigned short *l_524 = &g_298.f8.f2;
            unsigned short *l_525 = &g_58.f2;
            int *l_526 = &l_467.f8.f1;
            int *l_527 = &g_131.f8.f1;
            l_491 = (safe_sub_func_uint32_t_u_u(4294967295UL, ((safe_mul_func_int8_t_s_s(l_481.f2.f3.f2, (*g_229))) >= (*l_461))));
            for (l_270.f7.f3.f2 = 0; (l_270.f7.f3.f2 == 15); l_270.f7.f3.f2++)
            {
                int **l_494 = &g_80;
                struct S5 *l_503 = &g_68.f0;
                g_80 = l_484;

                ;
                (*l_494) = l_484;
                for (l_464.f2.f3.f2 = (-4); (l_464.f2.f3.f2 != 26); l_464.f2.f3.f2++)
                {
                    if ((0x5509C6C62DB9F4E6LL <= (l_491 == (0x00L & (g_80 != (void*)0)))))
                    {
                        struct S1 *l_498 = &l_497;
                        struct S0 **l_500 = &l_499;
                        (*l_498) = l_497;
                        (*l_500) = l_499;
                    }
                    else
                    {
                        if ((*g_80))
                            break;
                        (*g_193) = (*g_193);
                    }
                    for (g_298.f5.f2 = (-17); (g_298.f5.f2 == (-30)); g_298.f5.f2 = safe_sub_func_uint8_t_u_u(g_298.f5.f2, 5))
                    {
                        struct S5 **l_504 = &g_193;
                        long long *l_505 = &g_58.f7;
                        (*l_504) = l_503;
                        (*l_461) = ((*g_80) = (18446744073709551615UL | ((*l_505) = 8L)));
                    }
                }
                if ((*l_461))
                    continue;
            }


            for (g_298.f7.f3.f2 = 0; (g_298.f7.f3.f2 >= (-5)); --g_298.f7.f3.f2)
            {
                struct S3 **l_509 = (void*)0;
                struct S3 **l_510 = &g_267;
                struct S6 *l_512 = &l_481;
                struct S6 **l_511 = &l_512;
                (*l_510) = ((*g_207) , l_508);
                (*l_461) = (*l_461);
                g_513 = ((*l_511) = ((*g_208) = &g_22));

                ;
                ;
                (*l_512) = (*l_512);
            }


            (*l_527) = (l_467.f7.f1 = ((*l_526) = ((*l_461) = (((l_481.f4 || ((*l_514) = ((*g_229) = 1L))) < (0x26DCL == (safe_add_func_uint32_t_u_u((g_68.f1 = 0x6D30CEB9L), ((((*l_525) = ((*l_524) = (g_298.f5.f1 >= ((!((((g_68.f7.f6 || (safe_add_func_uint32_t_u_u(((*g_265) ^ ((safe_mul_func_uint8_t_u_u((((*g_267) , 1UL) >= 0xA4F0L), 7UL)) & l_521)), l_522))) , g_193) != (void*)0) && (*l_461))) >= g_14.f2)))) & (*l_461)) && 0x4728L))))) , g_298.f2))));
        }



        (*l_529) = ((*l_461) = l_481.f2.f1);
        (*l_461) = (safe_lshift_func_uint8_t_u_s((*l_529), 0));
    }



    if ((((*l_534) = l_532) != ((*l_536) = g_535)))
    {
        int **l_537 = &l_461;
        (*l_537) = (void*)0;

        ;
        return (*g_349);


    }
    else
    {
        struct S6 l_538 = {0xD0L,0xE9114DBAL,{1UL,0x463B8A5B6AFDF78CLL,1UL,{0xD2L,0x25L,0x4EL}},3L,0x96982CC6L,5UL};
        struct S6 **l_539 = &g_513;
        struct S7 l_547 = {0xA6DCCB70L,0xBED054A2L,0x2B6B5E6654BB79E5LL,{9L},0x932FL,{0L,0x0DL,0xB1L},0x10D017E9B6823EB9LL,{0x881E116AL,0x874095FE46712680LL,0xBC4AL,{0x1CL,0L,0x32L}},{-1L,0x5DFD4CD5L,0x74E4L,0xDBDDL}};
        unsigned long long *l_549 = &g_129.f2;
        unsigned short *l_550 = &g_59.f2;
        (*g_349) = func_51((*g_265), (&g_513 != (l_538 , l_539)), func_51((*g_265), ((*l_550) = (l_538.f0 | (((safe_mod_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(0x46E384BFB23D24B6LL, ((*l_549) = (g_548 ^ g_22.f2.f1)))), (*g_265))) | (*g_265)) <= g_298.f5.f1))), l_547.f7.f3));
        (*l_461) = 0x7B0EB3A3L;
    }
    (*l_461) = g_14.f3;
    return (*g_349);


}







static int func_2(unsigned char p_3, struct S3 p_4, struct S7 p_5, unsigned p_6)
{
    struct S6 l_273 = {0L,0x925A57E2L,{0xEE42AA83L,0xBAE9A8F569DD28B1LL,0xD878L,{0L,0x76L,0x3BL}},-2L,1UL,2UL};
    int *l_274 = &l_273.f1;
    struct S7 *l_307 = &g_298;
    struct S4 l_342 = {0xEBE7L,1UL,65535UL,0x18L,1L,{2L,0xDAL,-1L},{0x81L,0xDEL,0xCAL},0xB7A86694FA723D82LL,0x54025B2839A542B2LL};
    struct S6 **l_347 = &g_209;
    struct S8 l_356 = {{-2L},4294967292UL,5UL,-9L,-7L,0x558B11A5L,18446744073709551606UL,{1UL,0xAD292A59L,-4L,18446744073709551608UL,{0xB0L,1L,0xBAL},0x6AL,-1L},{0x12E59073L,0x2761C861L,4UL,0L}};
    struct S0 **l_460 = &g_349;
    g_129.f8.f1 = ((safe_lshift_func_uint8_t_u_u((l_273 , ((((*l_274) = g_14.f2) , ((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s(g_58.f6.f1, (*g_229))) || (safe_sub_func_int16_t_s_s(0x232AL, p_5.f7.f3.f2))), (safe_mod_func_int8_t_s_s(((6UL || 4294967291UL) | (safe_mod_func_int64_t_s_s((p_4.f2 && p_4.f2), 0x17AF109C62E95EEELL))), (*g_229))))) >= (*g_229)), 7)), g_58.f7)) > p_4.f3.f2)) ^ 0x870B58B7DE9521A3LL)), 6)) ^ l_273.f5);
    if (l_273.f4)
    {
        char l_306 = (-1L);
        struct S4 **l_322 = &g_207;
        for (p_4.f3.f2 = 13; (p_4.f3.f2 > (-14)); p_4.f3.f2--)
        {
            int *l_291 = &g_129.f8.f1;
            int **l_292 = &l_291;
            unsigned short *l_321 = (void*)0;
            (*l_292) = l_291;
            for (g_68.f7.f4.f2 = 25; (g_68.f7.f4.f2 == (-5)); g_68.f7.f4.f2 = safe_sub_func_int8_t_s_s(g_68.f7.f4.f2, 6))
            {
                short *l_297 = &g_131.f8.f3;
                int *l_316 = (void*)0;
                if ((0x6176L >= ((safe_lshift_func_int16_t_s_u(((*l_297) = 0x76CDL), (g_58.f5.f2 > (0xC849F49CL ^ (g_298 , (safe_mul_func_int8_t_s_s(p_4.f3.f2, ((safe_lshift_func_uint16_t_u_u((l_297 != (void*)0), 14)) , (safe_unary_minus_func_int64_t_s((safe_sub_func_int8_t_s_s(p_5.f8.f3, 0xE2L)))))))))))) <= l_306)))
                {
                    struct S7 **l_308 = &l_307;
                    (*g_208) = &l_273;

                    ;
                    (*l_308) = l_307;
                    (**l_308) = g_131;
                }
                else
                {
                    struct S6 *l_315 = &g_22;
                    struct S8 l_325 = {{0L},4294967293UL,0x7C905D4C12D44AA6LL,-1L,0x7E9815BAD930829DLL,0x7DA5877DL,0xCC50CA02927D2287LL,{0x8BD340B4L,0L,-1L,5UL,{-1L,9L,-1L},1L,0xE8L},{-3L,0L,0xEA32L,1L}};
                    int *l_326 = (void*)0;
                    int *l_327 = (void*)0;
                    int *l_328 = &g_68.f7.f1;
                    for (g_131.f1 = 0; (g_131.f1 < 7); g_131.f1++)
                    {
                        struct S2 *l_312 = (void*)0;
                        struct S2 **l_311 = &l_312;
                        int *l_313 = (void*)0;
                        int *l_314 = &g_131.f8.f1;
                        (*l_311) = &g_14;

                        ;
                        (*l_292) = (void*)0;

                        ;
                        (*l_314) = p_5.f8.f3;
                    }
                    if ((&l_273 != (l_315 = (*g_208))))
                    {
                        if (p_5.f5.f2)
                            break;
                        return p_5.f8.f0;


                    }
                    else
                    {
                        int *l_317 = &g_68.f7.f1;
                        struct S7 l_320 = {1L,0x73744CB7L,1UL,{-7L},0x77A2L,{0xA8L,5L,0xCEL},18446744073709551615UL,{0xEE760F33L,-7L,0x3E7CL,{0L,0x46L,0x3CL}},{0x4977D024L,0L,0UL,0x743EL}};
                        l_316 = (*l_292);

                        ;
                        (*l_317) = g_58.f5.f0;
                        (*l_292) = ((g_68.f7.f5 == g_58.f6.f0) , g_80);

                        ;
                        (*l_317) = (l_321 != l_321);
                    }

                    ;
                    ;
                    ;
                    (*g_267) = (*g_267);
                    p_5.f8.f1 = ((((void*)0 != l_322) , l_273.f0) < (safe_add_func_uint64_t_u_u((((*l_328) = ((l_325 , (p_3 & ((void*)0 == &g_80))) , g_14.f4.f0)) > l_273.f3), p_4.f0)));
                }

                ;
            }

            ;
        }

        ;
    }
    else
    {
        int l_337 = 0xBDC78A02L;
        struct S3 l_338 = {0xBC4F6B61L,1L,0x914BL,{0L,0xCEL,0x84L}};
        struct S8 *l_369 = (void*)0;
        long long l_377 = (-1L);
        struct S6 *l_385 = &l_273;
        int *l_416 = (void*)0;
        int **l_459 = &g_80;
        for (p_4.f3.f0 = 0; (p_4.f3.f0 <= 27); p_4.f3.f0++)
        {
            unsigned l_345 = 6UL;
            int l_348 = 0xD3318047L;
            struct S4 l_354 = {0x0530L,65531UL,4UL,0x6DL,0x48L,{0x87L,0x62L,0x52L},{0L,1L,0x52L},0x7FCE3681FFCAB2DALL,7UL};
            struct S5 *l_378 = &g_68.f0;
            short l_390 = 0xFD5DL;
            struct S7 l_408 = {-10L,0xEA4BDFA9L,0xDB249513B74C9B03LL,{4L},0x9404L,{-1L,1L,7L},18446744073709551614UL,{0x64B7174BL,0x46B3206FF2449368LL,0x18BAL,{0L,-1L,1L}},{0x92F5C42CL,0x1942F1F7L,0xCB4BL,1L}};
            struct S2 *l_419 = &l_356.f7;
            unsigned short *l_424 = &l_342.f1;
            char *l_433 = &g_131.f7.f3.f2;
            int *l_434 = &l_356.f8.f1;
            for (g_58.f3 = (-10); (g_58.f3 == 47); g_58.f3 = safe_add_func_int32_t_s_s(g_58.f3, 1))
            {
                char l_339 = 0x19L;
                struct S5 l_346 = {0xE1L};
                struct S8 l_368 = {{-9L},0UL,0x1D735536F551B235LL,0x8EA5440B150522D7LL,0x1D92DE4FB7707C6ELL,0UL,18446744073709551615UL,{5UL,4L,0xB27DL,0UL,{0x3FL,0xB8L,0xF6L},0x51L,-1L},{1L,0x0E71E966L,7UL,0xFDA3L}};
                struct S6 *l_376 = &l_273;
                if ((l_348 = (safe_sub_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s(((l_339 || ((safe_add_func_uint8_t_u_u(((l_342 , ((safe_rshift_func_int16_t_s_u(((l_345 > ((g_298.f3.f0 , (p_5.f3 , ((((*g_193) = l_346) , &g_209) != l_347))) != (*g_229))) != 4UL), g_14.f4.f0)) & (*g_229))) , 0x87L), g_68.f7.f2)) || 0xB4AB5E08B1FF4740LL)) || (-10L)), 0)) < l_342.f0) > g_131.f7.f0), 0xED76DF1DL))))
                {
                    struct S0 **l_350 = &g_349;
                    struct S4 l_355 = {0x23C3L,0x2EC7L,1UL,255UL,1L,{0x1DL,0x0AL,0xCCL},{0x28L,0x05L,1L},-1L,0xB8D6EC7CFEDC1265LL};
                    int **l_358 = (void*)0;
                    (*l_350) = g_349;
                    for (g_68.f7.f0 = 0; (g_68.f7.f0 <= 26); g_68.f7.f0 = safe_add_func_int16_t_s_s(g_68.f7.f0, 6))
                    {
                        int *l_353 = &g_131.f8.f1;
                        struct S8 *l_357 = &g_129;
                        p_5.f8.f1 = (0xB306L == 0x4611L);
                        (*l_353) = p_5.f5.f1;
                        l_355 = l_354;
                        (*l_357) = l_356;
                    }
                    g_80 = g_80;
                    for (l_355.f1 = (-28); (l_355.f1 <= 22); l_355.f1 = safe_add_func_uint8_t_u_u(l_355.f1, 1))
                    {
                        int *l_364 = &g_129.f8.f1;
                        p_5.f8.f1 = (safe_unary_minus_func_int16_t_s(0x6966L));
                        (*l_364) = (safe_lshift_func_uint16_t_u_s(l_346.f0, 7));
                        (*g_349) = ((0x25L & l_338.f3.f0) , l_354.f6);
                    }
                }
                else
                {
                    int *l_365 = (void*)0;
                    int **l_366 = &g_80;
                    int *l_367 = &g_68.f8.f1;
                    (*l_366) = l_365;

                    ;
                    (*l_367) = p_5.f7.f3.f2;
                    (*l_367) = l_273.f5;
                }
                (*l_376) = func_40(l_368, (&g_129 == l_369), (g_129.f7.f0 = g_298.f7.f2));
                if (l_377)
                {
                    struct S5 **l_379 = &g_193;
                    (*l_379) = l_378;
                }
                else
                {
                    unsigned l_384 = 0UL;
                    int *l_411 = &g_68.f7.f1;
                    if (g_59.f2)
                    {
                        struct S8 **l_382 = &g_128;
                        int *l_383 = &l_356.f7.f1;
                        (*l_383) = (&g_68 == ((*l_382) = &l_356));

                        ;
                    }
                    else
                    {
                        return p_5.f1;




                    }

                    ;
                    if ((((l_384 > (l_338.f3 , (((*g_349) , ((((((*l_347) = l_385) == &g_22) == (safe_mod_func_uint8_t_u_u(p_5.f5.f2, (safe_mul_func_uint8_t_u_u(l_390, p_5.f5.f2))))) , 0L) | 0xDF2F7C1CL)) != p_4.f0))) >= l_338.f3.f0) > 65531UL))
                    {
                        int **l_391 = &g_80;
                        (*g_267) = (*g_267);
                        (*l_391) = l_274;

                        ;
                    }
                    else
                    {
                        struct S2 ***l_394 = &g_392;
                        int **l_395 = &g_80;
                        (*l_394) = g_392;
                        (*l_395) = (void*)0;

                        ;
                        p_5.f8.f1 = l_384;
                    }

                    ;
                    ;
                    if (p_5.f8.f0)
                    {
                        int **l_396 = &g_80;
                        (*l_396) = g_80;
                    }
                    else
                    {
                        unsigned long long l_401 = 0x190E2B769E396BB4LL;
                        struct S5 l_413 = {-1L};
                        g_80 = g_80;
                        l_356.f8.f1 = ((((((((*g_207) , (safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u(l_401, g_58.f2)) != ((safe_rshift_func_int16_t_s_s(0xDDC9L, (safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s((l_408 , (!((*g_265) >= ((g_412 = (l_384 != ((safe_add_func_int32_t_s_s(((void*)0 != l_411), g_22.f2.f3.f1)) ^ 18446744073709551610UL))) != 0xEFL)))), g_68.f0.f0)), p_5.f1)))) & l_356.f8.f3)), 8))) && 0x347E3F54L) | g_298.f6) > l_408.f6) >= p_4.f0) && p_5.f7.f0) && 0L);
                        (*l_411) = (l_413 , (safe_mod_func_uint64_t_u_u(0UL, (-1L))));
                    }
                    if (g_68.f0.f0)
                        break;
                }
            }
            l_416 = (void*)0;

            ;
            (*l_434) = ((p_5.f7.f2 , l_354.f5.f1) != g_14.f4.f2);
            for (g_131.f7.f3.f2 = 0; (g_131.f7.f3.f2 >= (-13)); g_131.f7.f3.f2 = safe_sub_func_int64_t_s_s(g_131.f7.f3.f2, 1))
            {
                unsigned long long l_439 = 0x19F3DCFFBF41D302LL;
                char **l_455 = (void*)0;
                for (g_22.f2.f2 = 3; (g_22.f2.f2 < 31); ++g_22.f2.f2)
                {
                    unsigned l_441 = 0xD82CFA0FL;
                    unsigned *l_442 = (void*)0;
                    unsigned *l_443 = &g_129.f1;
                    char l_444 = 0x0BL;
                    int *l_445 = (void*)0;
                    int *l_446 = (void*)0;
                    int *l_447 = &g_131.f8.f1;
                    struct S3 l_448 = {0UL,0x1E0AFE9ADDFFD7A1LL,0x17BBL,{0x7BL,0x33L,0x2CL}};
                    if (((((g_58.f3 = 248UL) != ((*g_229) = l_439)) <= (1UL | p_5.f8.f0)) | (safe_add_func_uint8_t_u_u(p_5.f3.f0, 255UL))))
                    {
                        int **l_451 = (void*)0;
                        p_5.f8.f1 = (1UL & 0xDEL);
                        if (g_298.f7.f0)
                            continue;
                        l_416 = g_80;
                    }
                    else
                    {
                        int **l_452 = (void*)0;
                        int **l_453 = &l_447;
                        char ***l_454 = &g_228;
                        (*l_453) = g_80;

                        ;
                        (*l_434) = ((((!0x488C696C593E1CC0LL) | l_439) == (l_273.f1 > (((*l_454) = &g_229) == (p_4.f2 , l_455)))) != (*g_265));

                        ;
                        (*l_347) = l_385;

                        ;
                    }

                    ;
                    if (g_68.f7.f4.f1)
                    {
                        int **l_456 = &l_447;
                        (*l_456) = g_80;

                        ;
                    }
                    else
                    {
                        char l_457 = 0xC0L;
                        struct S3 *l_458 = &g_298.f7;
                        (*l_434) = l_457;
                        (*l_458) = (*g_267);
                    }
                }
            }

            ;
        }

        ;
        ;
        ;
        ;
        (*l_459) = (l_416 = g_80);
    }

    ;
    ;
    ;
    (*l_460) = g_349;
    return l_342.f0;




}







static short func_12(struct S2 p_13)
{
    unsigned l_30 = 0x553ECF38L;
    struct S1 l_37 = {0xB2076913L,0x9F8C36B4L,0xDBCFL,0L};
    struct S6 l_50 = {-1L,0xF6D6459FL,{0x39C94463L,0x91B5B2358A988067LL,0xC1DFL,{-1L,0x16L,0L}},0x9D48ECECL,0x5015C65DL,65535UL};
    struct S7 l_55 = {0L,0xA6FF2856L,0x8B997ADCAF14A35BLL,{0x86L},0x2F7AL,{0x6CL,0xAEL,1L},0x6975085CE8A8DCBELL,{0x6AE0A195L,1L,65534UL,{0xBCL,0xADL,-1L}},{0x728D9C3DL,-1L,0UL,0xB4F0L}};
    int l_72 = 0x60ADCB03L;
    unsigned *l_100 = &g_14.f0;
    unsigned *l_101 = &l_50.f2.f0;
    int *l_269 = &g_131.f8.f1;
    (*l_269) = func_15(func_18(g_22, (0x2BEB855BL != (func_23(((*l_101) = ((0x5637402BL | (p_13.f6 != p_13.f5)) < ((((*l_100) = (safe_lshift_func_uint16_t_u_u((((safe_add_func_int64_t_s_s(l_30, (func_31(l_37, (safe_sub_func_uint16_t_u_u((l_72 = (func_40(func_44(l_50, func_51((l_55 , 5UL), g_14.f6, g_14.f4), p_13.f5, g_59, g_22.f2.f2), g_22.f2.f3.f1, g_22.f3) , l_55.f7.f3.f2)), g_59.f2)), g_59.f3, p_13.f4.f0, l_55) >= p_13.f4.f0))) , p_13.f4.f0) || l_50.f2.f0), g_68.f2))) > g_59.f0) , 0x33L))), l_55.f7) & 0x92L)), l_55.f7), l_50.f2.f3.f0);

    ;
    ;
    ;
    return (*l_269);
}







static int func_15(struct S2 p_16, unsigned p_17)
{
    unsigned l_130 = 0x08B2C5ECL;
    int l_132 = 0x3A823F19L;
    unsigned l_134 = 0UL;
    struct S3 l_172 = {18446744073709551615UL,0x61D60E98C55A45B1LL,8UL,{1L,-4L,9L}};
    struct S5 *l_211 = &g_68.f0;
    unsigned *l_222 = &g_129.f1;
    struct S7 l_251 = {0xE1AD203FL,1UL,2UL,{-1L},0xF103L,{-1L,1L,-1L},0x9B00F3D2DFCA0B9FLL,{4UL,0xD5A18F370180479ALL,65526UL,{1L,-1L,0x34L}},{0x321536BBL,-1L,0UL,1L}};
    struct S3 **l_268 = &g_267;
    for (g_14.f4.f2 = 0; (g_14.f4.f2 >= 13); ++g_14.f4.f2)
    {
        char l_122 = 0x48L;
        int *l_127 = &g_22.f3;
        int **l_133 = &g_80;
        l_132 = func_31(g_59, p_16.f0, ((safe_lshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s(l_122, (safe_mul_func_int16_t_s_s(((safe_add_func_int64_t_s_s((((((*l_127) = ((*g_80) = p_16.f5)) ^ p_16.f4.f2) >= 0L) > 0x1ECD175016619B43LL), 0x7B5F17608B0E2667LL)) == (g_128 != (void*)0)), p_16.f4.f0)))) && l_130), p_16.f6)) > g_129.f7.f0), g_22.f2.f2, g_131);
        (*l_133) = g_80;
    }
    if (l_134)
    {
        struct S6 *l_135 = &g_22;
        struct S6 **l_136 = &l_135;
        struct S1 *l_138 = (void*)0;
        struct S1 **l_137 = &l_138;
        struct S3 l_156 = {1UL,-1L,6UL,{5L,-9L,-7L}};
        int *l_169 = (void*)0;
        int *l_170 = &g_59.f0;
        unsigned char l_171 = 0xF5L;
        unsigned long long *l_173 = (void*)0;
        unsigned long long *l_174 = &g_68.f2;
        struct S7 l_213 = {0xA0A2A0B7L,4294967292UL,18446744073709551614UL,{-6L},0xCEA8L,{0x0BL,0xB0L,2L},0xECF1100C429CBB98LL,{0UL,0x1811AB46CC7DBC72LL,0UL,{0x5EL,0L,0xDEL}},{0xB98AA170L,-1L,5UL,-1L}};
        struct S8 **l_225 = &g_128;
        (*l_136) = l_135;
        (*l_137) = &g_59;

        ;
        if (((*g_80) = (*g_80)))
        {
            struct S3 l_152 = {1UL,0xA5BFF3A3253BE1FALL,65527UL,{0x58L,0xF0L,1L}};
            for (g_131.f7.f0 = 0; (g_131.f7.f0 == 13); g_131.f7.f0 = safe_add_func_int32_t_s_s(g_131.f7.f0, 7))
            {
                unsigned char l_151 = 4UL;
                unsigned char *l_153 = &g_58.f3;
                int *l_154 = &g_22.f3;
                (*l_154) = ((((*l_153) = (func_23((l_151 = (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(p_16.f4.f1, (func_31(g_59, (safe_mul_func_int8_t_s_s(l_134, (0L == (p_16.f0 > (g_14.f1 > ((-2L) ^ 0x0BE3B6334DF25EA7LL)))))), g_14.f4.f0, p_16.f4.f0, g_131) | 0x8AC1276BL))), l_134)), g_22.f2.f0))), l_152) ^ g_131.f5.f1)) < g_131.f8.f1) | l_134);
            }
        }
        else
        {
            struct S3 l_155 = {0UL,0x068D38584AD03F48LL,3UL,{0x3CL,-10L,-10L}};
            struct S8 **l_165 = (void*)0;
            struct S8 **l_166 = &g_128;
            l_156 = l_155;
            for (g_129.f7.f4.f2 = 3; (g_129.f7.f4.f2 != (-7)); --g_129.f7.f4.f2)
            {
                int **l_159 = (void*)0;
                int **l_160 = &g_80;
                char *l_163 = (void*)0;
                char *l_164 = &g_58.f5.f1;
                (*l_160) = g_80;
                (**l_160) = (8L != ((*l_164) = ((safe_mul_func_uint8_t_u_u(g_68.f6, g_131.f7.f2)) <= l_130)));
                return (*g_80);
            }
            (*l_166) = &g_68;

            ;
        }

        ;
        if ((g_58 , (safe_mod_func_uint16_t_u_u((0x065729E0859B879CLL >= ((*l_174) = ((p_16.f4 , func_18(func_40((*g_128), ((*l_170) = (-1L)), l_171), g_68.f3, l_172)) , g_68.f7.f0))), l_156.f3.f2))))
        {
            unsigned l_196 = 0x69F1B75CL;
            struct S4 *l_203 = &g_58;
            char **l_227 = (void*)0;
            int **l_230 = &g_80;
            if ((safe_lshift_func_int16_t_s_s((g_68.f7.f4.f0 & l_132), 12)))
            {
                int l_182 = (-1L);
                struct S4 **l_204 = (void*)0;
                struct S4 **l_205 = (void*)0;
                struct S4 *l_206 = (void*)0;
                for (g_68.f4 = 0; (g_68.f4 > (-25)); --g_68.f4)
                {
                    if ((*g_80))
                    {
                        int **l_179 = &g_80;
                        (*l_179) = (void*)0;

                        ;
                    }
                    else
                    {
                        struct S5 *l_180 = &g_131.f3;
                        int **l_181 = &g_80;
                        g_129.f0 = ((*l_180) = g_129.f0);
                        (*l_181) = g_80;
                        (*g_80) = 0x6EC9F72AL;
                    }

                    ;
                    return l_182;
                }
                (*g_80) = ((safe_sub_func_uint64_t_u_u((g_68.f8 , ((*l_174) = p_16.f2)), (safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int8_t_s_s(p_16.f0, 6)) <= ((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_182, (((void*)0 == g_193) && p_16.f4.f0))), 65535UL)) ^ (safe_lshift_func_int8_t_s_u((((0xD5CE51773A403BB1LL == 0x588FFD927F821178LL) > (*g_80)) | l_156.f2), l_196)))) > 7L), 0)))) | l_156.f3.f1);
                (*g_80) = (func_23(g_14.f2, g_22.f2) >= (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(g_59.f1, (g_129.f7.f2 != (l_172.f0 , (((g_14.f4.f0 < g_22.f1) | (g_22 , 0L)) , l_196))))) > g_22.f2.f2), l_182)), g_129.f6)));
                g_207 = (l_206 = l_203);

                ;
            }
            else
            {
                struct S6 ***l_210 = &l_136;
                struct S5 **l_212 = &l_211;
                struct S7 *l_214 = &l_213;
                struct S3 l_215 = {4UL,1L,0x1A7BL,{0xF3L,1L,0xA4L}};
                int *l_226 = &g_129.f7.f1;
                (*l_210) = g_208;

                ;
                (*l_212) = l_211;
                (*l_214) = l_213;
                (*l_226) = ((func_51(((((l_215 , l_156.f2) , (~(safe_mul_func_uint8_t_u_u(func_31(g_68.f8, (safe_lshift_func_int8_t_s_u(((((p_16.f0 || (l_215.f3.f2 | ((safe_sub_func_int64_t_s_s(((l_222 = g_80) == g_80), (safe_rshift_func_uint16_t_u_s(0x6143L, 0)))) & p_16.f6))) < p_16.f4.f2) , p_17) | g_58.f6.f0), g_129.f5)), l_215.f3.f2, g_129.f7.f4.f2, g_131), 9L)))) , l_225) != (void*)0), l_213.f5.f0, p_16.f4) , 8L) & p_16.f1);

                ;
            }

            ;
            ;
            g_228 = (g_131.f8 , l_227);

            ;
            (*l_230) = l_170;

            ;
            (*l_230) = l_170;
        }
        else
        {
            struct S3 l_233 = {0x1FE2523DL,-1L,1UL,{0x26L,5L,1L}};
            unsigned char *l_234 = &l_171;
            (*g_80) = (safe_mul_func_uint8_t_u_u(func_23((p_16.f2 == 255UL), l_233), ((*l_234) = g_14.f2)));
        }

        ;
        ;
        ;
        ;
    }
    else
    {
        struct S8 l_237 = {{-7L},1UL,0x35BF2678B3911666LL,0xB30EF8FC4F5A4C17LL,-7L,0x4498844DL,0UL,{0x2370B228L,-1L,1L,0x81537B4442B03CFDLL,{-1L,0xEBL,-10L},1L,0xEAL},{1L,-1L,8UL,0x5099L}};
        struct S6 l_264 = {0x98L,1L,{18446744073709551610UL,-8L,0x9BA4L,{0x20L,0xD7L,0xA0L}},3L,0x1537DBF6L,0UL};
        for (g_68.f7.f5 = (-11); (g_68.f7.f5 <= (-24)); --g_68.f7.f5)
        {
            unsigned short l_246 = 0xF120L;
            int *l_247 = &g_131.f8.f0;
            struct S6 l_248 = {1L,0xB2AEFC5BL,{18446744073709551611UL,-1L,0UL,{1L,0x01L,-6L}},-1L,2UL,0xD80EL};
            struct S7 *l_252 = (void*)0;
            struct S7 *l_253 = &l_251;
            l_248 = func_40(l_237, ((*l_247) = (safe_add_func_uint16_t_u_u(g_68.f7.f2, (safe_add_func_uint32_t_u_u((~g_68.f3), ((l_172.f0 == (safe_lshift_func_int8_t_s_u((g_131.f8.f2 >= (safe_mul_func_uint16_t_u_u(g_129.f7.f6, g_58.f5.f2))), (l_246 >= l_246)))) , p_16.f4.f0)))))), g_68.f8.f2);
            for (g_58.f1 = 0; (g_58.f1 != 28); g_58.f1 = safe_add_func_int16_t_s_s(g_58.f1, 3))
            {
                if ((*g_80))
                    break;
                return (*g_80);
            }
            (*l_253) = l_251;
            if ((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((p_16.f4 , p_17), (safe_mod_func_int8_t_s_s(((void*)0 == &g_128), (safe_sub_func_int8_t_s_s(((((*l_222) = (g_14.f4.f2 , (safe_add_func_int64_t_s_s(l_246, (0xEABC095BL > l_172.f2))))) | (((((((l_264 , g_265) != (void*)0) | l_248.f0) | l_237.f8.f0) == p_16.f2) >= 0x0F14L) < 0x4E9201B3478E54A3LL)) != p_16.f3), 0xE5L)))))), l_172.f3.f0)))
            {
                return p_16.f4.f1;
            }
            else
            {
                struct S1 **l_266 = (void*)0;
                (*g_80) = (l_266 == (void*)0);
            }
        }
    }

    ;
    ;
    ;
    ;
    (*l_268) = g_267;
    (*l_268) = ((**l_268) , g_267);
    return p_16.f6;
}







static struct S2 func_18(struct S6 p_19, unsigned p_20, struct S3 p_21)
{
    int *l_107 = &g_68.f7.f1;
    int **l_108 = &g_80;
    struct S1 *l_109 = &g_68.f8;
    struct S1 **l_110 = (void*)0;
    struct S1 **l_111 = &l_109;
    struct S8 l_114 = {{4L},0xB73E6FF0L,0xA5C68B7B37179735LL,6L,0xED83160587D15F6ALL,0x3A504EC7L,0x9E8CB06A753925E9LL,{0xD96B292EL,1L,0xB48AL,1UL,{0xBDL,2L,0x0AL},0x4AL,0xAAL},{-9L,0xDA9CF794L,65529UL,0xA9A8L}};
    struct S8 *l_115 = &l_114;
    (*l_108) = l_107;

    ;
    (*l_111) = l_109;
    for (g_68.f7.f2 = 0; (g_68.f7.f2 >= (-6)); g_68.f7.f2 = safe_sub_func_int8_t_s_s(g_68.f7.f2, 1))
    {
        (**l_108) = (*l_107);
    }
    (*l_115) = l_114;
    return l_114.f7;
}







static char func_23(unsigned p_24, struct S3 p_25)
{
    struct S8 *l_102 = &g_68;
    int *l_105 = (void*)0;
    int **l_106 = &l_105;
    (*l_102) = g_68;
    (*g_80) = (safe_mul_func_uint16_t_u_u(g_59.f0, p_25.f0));
    (*l_106) = l_105;
    return p_25.f3.f1;
}







static short func_31(struct S1 p_32, short p_33, unsigned p_34, unsigned long long p_35, struct S7 p_36)
{
    char l_77 = 0xE8L;
    int l_92 = 0x72DA4C94L;
    unsigned l_97 = 0xAA8155E1L;
    struct S4 l_98 = {1L,65535UL,6UL,0xB8L,0L,{-1L,0x61L,0L},{0x7DL,0x0AL,0xBDL},1L,18446744073709551615UL};
    struct S4 *l_99 = &g_58;
    if ((safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(l_77, l_77)), p_32.f2)))
    {
        unsigned long long l_78 = 0x232D534F4898C356LL;
        return l_78;
    }
    else
    {
        int *l_79 = &g_59.f1;
        (*l_79) = (p_36.f0 , p_36.f2);
        (*l_79) = p_36.f8.f3;
    }
    if (p_36.f7.f0)
    {
        int **l_81 = &g_80;
        unsigned short *l_90 = (void*)0;
        unsigned short *l_91 = (void*)0;
        unsigned *l_93 = &g_68.f7.f0;
        int l_94 = 0x3EFB9AABL;
        g_80 = g_80;
        (*l_81) = g_80;
        l_94 = ((**l_81) = (((*l_93) = (p_36.f7.f1 ^ (+(p_36.f7.f1 || ((safe_sub_func_int16_t_s_s((!(g_59 , g_22.f1)), (safe_lshift_func_uint8_t_u_u(p_32.f0, 7)))) && (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((p_36.f7.f2 = g_14.f1), l_92)), 0x3D7EL))))))) | p_36.f7.f0));
    }
    else
    {
        int *l_95 = &g_14.f1;
        int **l_96 = &l_95;
        (*l_96) = l_95;
    }
    (*g_80) = (l_97 >= (*g_80));
    (*l_99) = l_98;
    return p_36.f8.f0;
}







static struct S6 func_40(struct S8 p_41, int p_42, unsigned p_43)
{
    unsigned char l_69 = 1UL;
    int *l_70 = &g_59.f1;
    struct S6 l_71 = {0x14L,-1L,{0x5690952CL,0x253E1635C7AEBA48LL,65527UL,{0x36L,0L,-9L}},0xB096D488L,0xEDD942F1L,0xC1EFL};
    (*l_70) = l_69;
    return l_71;
}







static struct S8 func_44(struct S6 p_45, struct S0 p_46, char p_47, struct S1 p_48, unsigned p_49)
{
    unsigned long long l_60 = 18446744073709551608UL;
    struct S2 l_63 = {0x8C976AA7L,0x2102788AL,0x5519L,0UL,{0x0BL,-1L,0x76L},0x72L,0xFAL};
    short *l_66 = (void*)0;
    short *l_67 = &l_63.f2;
    g_59.f1 = ((l_60 != (safe_lshift_func_uint16_t_u_u(p_46.f0, 7))) >= ((*l_67) = (l_63 , (safe_lshift_func_int8_t_s_u((-10L), 5)))));
    return g_68;
}







static struct S0 func_51(unsigned long long p_52, unsigned short p_53, struct S0 p_54)
{
    int *l_56 = &g_14.f1;
    struct S4 l_57 = {1L,1UL,1UL,0x34L,0x33L,{0x05L,4L,6L},{6L,-3L,4L},-10L,0xD73F8B2FE2E92E3BLL};
    (*l_56) = 1L;
    (*l_56) = p_54.f0;
    g_58 = l_57;
    return p_54;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_14.f1, "g_14.f1", print_hash_value);
    transparent_crc(g_14.f2, "g_14.f2", print_hash_value);
    transparent_crc(g_14.f3, "g_14.f3", print_hash_value);
    transparent_crc(g_14.f4.f0, "g_14.f4.f0", print_hash_value);
    transparent_crc(g_14.f4.f1, "g_14.f4.f1", print_hash_value);
    transparent_crc(g_14.f4.f2, "g_14.f4.f2", print_hash_value);
    transparent_crc(g_14.f5, "g_14.f5", print_hash_value);
    transparent_crc(g_14.f6, "g_14.f6", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    transparent_crc(g_22.f2.f0, "g_22.f2.f0", print_hash_value);
    transparent_crc(g_22.f2.f1, "g_22.f2.f1", print_hash_value);
    transparent_crc(g_22.f2.f2, "g_22.f2.f2", print_hash_value);
    transparent_crc(g_22.f2.f3.f0, "g_22.f2.f3.f0", print_hash_value);
    transparent_crc(g_22.f2.f3.f1, "g_22.f2.f3.f1", print_hash_value);
    transparent_crc(g_22.f2.f3.f2, "g_22.f2.f3.f2", print_hash_value);
    transparent_crc(g_22.f3, "g_22.f3", print_hash_value);
    transparent_crc(g_22.f4, "g_22.f4", print_hash_value);
    transparent_crc(g_22.f5, "g_22.f5", print_hash_value);
    transparent_crc(g_58.f0, "g_58.f0", print_hash_value);
    transparent_crc(g_58.f1, "g_58.f1", print_hash_value);
    transparent_crc(g_58.f2, "g_58.f2", print_hash_value);
    transparent_crc(g_58.f3, "g_58.f3", print_hash_value);
    transparent_crc(g_58.f4, "g_58.f4", print_hash_value);
    transparent_crc(g_58.f5.f0, "g_58.f5.f0", print_hash_value);
    transparent_crc(g_58.f5.f1, "g_58.f5.f1", print_hash_value);
    transparent_crc(g_58.f5.f2, "g_58.f5.f2", print_hash_value);
    transparent_crc(g_58.f6.f0, "g_58.f6.f0", print_hash_value);
    transparent_crc(g_58.f6.f1, "g_58.f6.f1", print_hash_value);
    transparent_crc(g_58.f6.f2, "g_58.f6.f2", print_hash_value);
    transparent_crc(g_58.f7, "g_58.f7", print_hash_value);
    transparent_crc(g_58.f8, "g_58.f8", print_hash_value);
    transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
    transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
    transparent_crc(g_59.f2, "g_59.f2", print_hash_value);
    transparent_crc(g_59.f3, "g_59.f3", print_hash_value);
    transparent_crc(g_68.f0.f0, "g_68.f0.f0", print_hash_value);
    transparent_crc(g_68.f1, "g_68.f1", print_hash_value);
    transparent_crc(g_68.f2, "g_68.f2", print_hash_value);
    transparent_crc(g_68.f3, "g_68.f3", print_hash_value);
    transparent_crc(g_68.f4, "g_68.f4", print_hash_value);
    transparent_crc(g_68.f5, "g_68.f5", print_hash_value);
    transparent_crc(g_68.f6, "g_68.f6", print_hash_value);
    transparent_crc(g_68.f7.f0, "g_68.f7.f0", print_hash_value);
    transparent_crc(g_68.f7.f1, "g_68.f7.f1", print_hash_value);
    transparent_crc(g_68.f7.f2, "g_68.f7.f2", print_hash_value);
    transparent_crc(g_68.f7.f3, "g_68.f7.f3", print_hash_value);
    transparent_crc(g_68.f7.f4.f0, "g_68.f7.f4.f0", print_hash_value);
    transparent_crc(g_68.f7.f4.f1, "g_68.f7.f4.f1", print_hash_value);
    transparent_crc(g_68.f7.f4.f2, "g_68.f7.f4.f2", print_hash_value);
    transparent_crc(g_68.f7.f5, "g_68.f7.f5", print_hash_value);
    transparent_crc(g_68.f7.f6, "g_68.f7.f6", print_hash_value);
    transparent_crc(g_68.f8.f0, "g_68.f8.f0", print_hash_value);
    transparent_crc(g_68.f8.f1, "g_68.f8.f1", print_hash_value);
    transparent_crc(g_68.f8.f2, "g_68.f8.f2", print_hash_value);
    transparent_crc(g_68.f8.f3, "g_68.f8.f3", print_hash_value);
    transparent_crc(g_129.f0.f0, "g_129.f0.f0", print_hash_value);
    transparent_crc(g_129.f1, "g_129.f1", print_hash_value);
    transparent_crc(g_129.f2, "g_129.f2", print_hash_value);
    transparent_crc(g_129.f3, "g_129.f3", print_hash_value);
    transparent_crc(g_129.f4, "g_129.f4", print_hash_value);
    transparent_crc(g_129.f5, "g_129.f5", print_hash_value);
    transparent_crc(g_129.f6, "g_129.f6", print_hash_value);
    transparent_crc(g_129.f7.f0, "g_129.f7.f0", print_hash_value);
    transparent_crc(g_129.f7.f1, "g_129.f7.f1", print_hash_value);
    transparent_crc(g_129.f7.f2, "g_129.f7.f2", print_hash_value);
    transparent_crc(g_129.f7.f3, "g_129.f7.f3", print_hash_value);
    transparent_crc(g_129.f7.f4.f0, "g_129.f7.f4.f0", print_hash_value);
    transparent_crc(g_129.f7.f4.f1, "g_129.f7.f4.f1", print_hash_value);
    transparent_crc(g_129.f7.f4.f2, "g_129.f7.f4.f2", print_hash_value);
    transparent_crc(g_129.f7.f5, "g_129.f7.f5", print_hash_value);
    transparent_crc(g_129.f7.f6, "g_129.f7.f6", print_hash_value);
    transparent_crc(g_129.f8.f0, "g_129.f8.f0", print_hash_value);
    transparent_crc(g_129.f8.f1, "g_129.f8.f1", print_hash_value);
    transparent_crc(g_129.f8.f2, "g_129.f8.f2", print_hash_value);
    transparent_crc(g_129.f8.f3, "g_129.f8.f3", print_hash_value);
    transparent_crc(g_131.f0, "g_131.f0", print_hash_value);
    transparent_crc(g_131.f1, "g_131.f1", print_hash_value);
    transparent_crc(g_131.f2, "g_131.f2", print_hash_value);
    transparent_crc(g_131.f3.f0, "g_131.f3.f0", print_hash_value);
    transparent_crc(g_131.f4, "g_131.f4", print_hash_value);
    transparent_crc(g_131.f5.f0, "g_131.f5.f0", print_hash_value);
    transparent_crc(g_131.f5.f1, "g_131.f5.f1", print_hash_value);
    transparent_crc(g_131.f5.f2, "g_131.f5.f2", print_hash_value);
    transparent_crc(g_131.f6, "g_131.f6", print_hash_value);
    transparent_crc(g_131.f7.f0, "g_131.f7.f0", print_hash_value);
    transparent_crc(g_131.f7.f1, "g_131.f7.f1", print_hash_value);
    transparent_crc(g_131.f7.f2, "g_131.f7.f2", print_hash_value);
    transparent_crc(g_131.f7.f3.f0, "g_131.f7.f3.f0", print_hash_value);
    transparent_crc(g_131.f7.f3.f1, "g_131.f7.f3.f1", print_hash_value);
    transparent_crc(g_131.f7.f3.f2, "g_131.f7.f3.f2", print_hash_value);
    transparent_crc(g_131.f8.f0, "g_131.f8.f0", print_hash_value);
    transparent_crc(g_131.f8.f1, "g_131.f8.f1", print_hash_value);
    transparent_crc(g_131.f8.f2, "g_131.f8.f2", print_hash_value);
    transparent_crc(g_131.f8.f3, "g_131.f8.f3", print_hash_value);
    transparent_crc(g_298.f0, "g_298.f0", print_hash_value);
    transparent_crc(g_298.f1, "g_298.f1", print_hash_value);
    transparent_crc(g_298.f2, "g_298.f2", print_hash_value);
    transparent_crc(g_298.f3.f0, "g_298.f3.f0", print_hash_value);
    transparent_crc(g_298.f4, "g_298.f4", print_hash_value);
    transparent_crc(g_298.f5.f0, "g_298.f5.f0", print_hash_value);
    transparent_crc(g_298.f5.f1, "g_298.f5.f1", print_hash_value);
    transparent_crc(g_298.f5.f2, "g_298.f5.f2", print_hash_value);
    transparent_crc(g_298.f6, "g_298.f6", print_hash_value);
    transparent_crc(g_298.f7.f0, "g_298.f7.f0", print_hash_value);
    transparent_crc(g_298.f7.f1, "g_298.f7.f1", print_hash_value);
    transparent_crc(g_298.f7.f2, "g_298.f7.f2", print_hash_value);
    transparent_crc(g_298.f7.f3.f0, "g_298.f7.f3.f0", print_hash_value);
    transparent_crc(g_298.f7.f3.f1, "g_298.f7.f3.f1", print_hash_value);
    transparent_crc(g_298.f7.f3.f2, "g_298.f7.f3.f2", print_hash_value);
    transparent_crc(g_298.f8.f0, "g_298.f8.f0", print_hash_value);
    transparent_crc(g_298.f8.f1, "g_298.f8.f1", print_hash_value);
    transparent_crc(g_298.f8.f2, "g_298.f8.f2", print_hash_value);
    transparent_crc(g_298.f8.f3, "g_298.f8.f3", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
