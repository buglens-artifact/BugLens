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
   unsigned f0;
   char f1;
   unsigned f2;
};

struct S1 {
   char f0;
   unsigned short f1;
   int f2;
   int f3;
   unsigned char f4;
   unsigned f5;
   int f6;
   unsigned f7;
   int f8;
   int f9;
};

struct S2 {
   struct S1 f0;
   int f1;
   const short f2;
   const unsigned f3;
   const int f4;
   unsigned char f5;
   unsigned f6;
};

struct S3 {
   int f0;
   char f1;
   struct S1 f2;
   const int f3;
   const struct S2 f4;
   unsigned f5;
   struct S2 f6;
   const struct S0 f7;
   unsigned short f8;
};

struct S4 {
   const unsigned short f0;
};

union U5 {
   struct S2 f0;
};


static int g_2 = 0x0F82BAEFL;
static struct S1 g_52 = {0x25L,0x9F82L,-9L,8L,0x73L,4294967294UL,1L,0xC507C227L,0x286A6E12L,-6L};
static struct S3 g_78 = {0xF9883E65L,0x99L,{0L,1UL,-1L,0x346C39F9L,0x20L,0x58E85FBCL,7L,18446744073709551614UL,0x686D89AFL,1L},0x9F5E4897L,{{0x6AL,65533UL,0xE1F64F3EL,0L,0xC3L,0x666566E7L,6L,0xDB4FB469L,0L,0xF43482B3L},-1L,-7L,2UL,0x36AC008CL,0x35L,18446744073709551608UL},4294967294UL,{{0x94L,0x59A6L,0L,0x8527E746L,0xC8L,0UL,1L,0x3C0A783FL,0x197DD293L,1L},0xA8CD555FL,-5L,1UL,2L,0x29L,0xC82483C1L},{1UL,0L,6UL},65535UL};
static struct S0 g_93 = {0x24737F3DL,1L,0x1D640A94L};
static struct S0 *g_102 = &g_93;
static struct S0 **g_101 = &g_102;
static const union U5 *g_106 = (void*)0;
static union U5 g_108 = {{{-10L,65533UL,0xEC079514L,0L,0UL,0xC825AF46L,0x97F85720L,0x6C04E2F6L,0L,-4L},0x8D128172L,0xEC9FL,18446744073709551615UL,0L,0UL,4UL}};
static struct S4 g_137 = {0x72FAL};
static union U5 g_149 = {{{0x4EL,0UL,1L,0x411A2B8DL,0x0EL,0xFBAA2C01L,0x0F11B7D9L,0x851E5C6FL,-9L,0xF86E4672L},0x85B3E65EL,0x2AE6L,0UL,1L,0x44L,0xED9A8A87L}};
static const union U5 **g_152 = &g_106;
static const union U5 ***g_151 = &g_152;
static const int *g_199 = &g_78.f4.f0.f2;
static struct S2 g_227 = {{1L,9UL,0xC4F9D47FL,0xEDEB6892L,0x8CL,0x8FD1D012L,0x3C4C20A3L,18446744073709551613UL,0x2BED9113L,0x768B3B24L},9L,0x38D3L,6UL,-2L,0UL,0x65866FCBL};
static struct S2 *g_226 = &g_227;
static struct S4 g_353 = {65528UL};
static struct S4 *g_352 = &g_353;
static struct S2 **g_402 = &g_226;
static struct S2 ***g_401 = &g_402;
static int g_435 = 0xCF09A673L;
static unsigned g_490 = 1UL;
static struct S3 **g_515 = (void*)0;
static const struct S1 * const g_551 = &g_78.f2;
static const struct S1 * const *g_550 = &g_551;
static short g_577 = 7L;
static struct S2 g_666 = {{0x06L,65528UL,0L,0x8A4616F3L,0xF0L,4294967293UL,0x6CF090FFL,0xD3C7280DL,4L,0x0A398DC9L},0xC8DDC3B1L,0xBCD0L,0xAB9276CFL,0x17B50232L,0xA1L,0xE969D165L};



static struct S0 func_1(void);
static unsigned char func_3(int p_4);
static struct S1 func_8(struct S2 p_9, struct S0 p_10, const unsigned p_11, int p_12, struct S1 p_13);
static struct S2 func_14(struct S4 p_15, struct S0 p_16, short p_17, unsigned short p_18);
static struct S4 func_19(struct S2 p_20, unsigned char p_21, struct S1 p_22, const struct S1 p_23);
static struct S2 func_24(struct S0 p_25, struct S1 p_26, char p_27, struct S1 p_28);
static struct S2 func_29(int p_30, struct S3 p_31, unsigned p_32, unsigned p_33);
static int func_34(struct S2 p_35, unsigned char p_36);
static short func_41(struct S1 p_42, unsigned p_43, unsigned p_44);
static struct S1 func_45(unsigned p_46);
static struct S0 func_1(void)
{
    unsigned l_5 = 0UL;
    struct S2 *l_489 = (void*)0;
    int *l_491 = &g_78.f0;
    int **l_492 = &l_491;
    struct S1 l_496 = {0L,0x87CFL,-1L,-9L,0xCBL,0xCB35C063L,0xC20562A3L,0UL,-5L,0L};
    struct S0 l_500 = {1UL,8L,1UL};
    int l_525 = 0x44D520FFL;
    struct S4 l_548 = {65535UL};
    struct S1 *l_553 = &g_78.f2;
    struct S1 ** const l_552 = &l_553;
    const char l_556 = 0x67L;
    struct S2 *l_576 = &g_108.f0;
    unsigned short l_633 = 65534UL;
    union U5 *l_677 = &g_149;
    unsigned l_681 = 0x8FA88DE6L;
    struct S4 * const *l_696 = &g_352;
    (*l_491) = (g_2 | ((!func_3(l_5)) && ((+((((safe_div_func_int32_t_s_s(l_5, (*g_199))) , (safe_lshift_func_int8_t_s_u(0L, 7))) && 0xCA215E88L) && ((l_489 != l_489) | g_490))) | l_5)));
    (*l_492) = l_491;
    for (g_108.f0.f0.f4 = 0; (g_108.f0.f0.f4 < 27); ++g_108.f0.f0.f4)
    {
        const union U5 l_497 = {{{0x88L,0x9C7FL,7L,0L,255UL,4294967287UL,3L,0x3A4CF135L,0xE2CF7B02L,0xF407B7EFL},0xE0721091L,1L,0xE1CB3C12L,-1L,0x3DL,0x49B89060L}};
        struct S0 l_509 = {8UL,1L,0UL};
        int *l_516 = &g_78.f6.f1;
        struct S2 l_526 = {{-1L,0x0D78L,-5L,0xAB6AA0FCL,253UL,4294967294UL,2L,18446744073709551614UL,-9L,0xF9BB686EL},0x6885AED4L,0xD262L,18446744073709551610UL,1L,246UL,0xC8B079C3L};
        union U5 l_527 = {{{-1L,0xBA75L,0x51DD7DF3L,-1L,255UL,0x15014E69L,0x989CAA24L,1UL,0xD3C29757L,0L},0x998AB758L,0xCBA8L,1UL,1L,254UL,0x4C4B6280L}};
        struct S1 l_582 = {1L,1UL,-1L,0L,255UL,1UL,0x171CD1E6L,0x3CEA3E30L,0xE620DEFFL,3L};
        int l_600 = 0x51E7C020L;
        unsigned l_607 = 0xD5FAC7A9L;
        const struct S4 *l_628 = &g_137;
        const struct S4 **l_627 = &l_628;
        const struct S4 ***l_626 = &l_627;
        if ((*g_199))
        {
            unsigned short l_495 = 0xC31AL;
            union U5 l_501 = {{{1L,1UL,-5L,1L,0x9EL,0xFDE7CB62L,0x8873CB7AL,0xC106E5E7L,1L,8L},0x07735A14L,-1L,0xFEB7743CL,5L,255UL,0x9CD3A572L}};
            (*l_491) = l_495;
            if (func_41((g_78 , l_496), (l_497 , (safe_add_func_uint8_t_u_u(((l_500 , (((func_41(g_52, g_78.f2.f4, (l_501 , 0UL)) <= g_227.f0.f0) == 0L) && g_227.f1)) <= (*l_491)), l_497.f0.f6))), g_78.f4.f6))
            {
                unsigned l_506 = 0x7612125BL;
                (*l_491) = (l_497 , (0UL & ((safe_rshift_func_uint16_t_u_s((l_497.f0.f1 & (l_501.f0.f0.f6 , (-1L))), 10)) > ((safe_add_func_uint8_t_u_u(l_506, (safe_rshift_func_uint16_t_u_u((g_78.f4.f0.f8 >= (l_506 , 8L)), g_52.f2)))) , l_501.f0.f5))));
            }
            else
            {
                return l_509;
            }
        }
        else
        {
            struct S2 *l_510 = &g_108.f0;
            int *l_518 = &g_78.f2.f2;
            unsigned l_524 = 0xDC672CE8L;
            if (((void*)0 != l_510))
            {
                int l_514 = (-9L);
                for (g_78.f2.f3 = 0; (g_78.f2.f3 > (-26)); --g_78.f2.f3)
                {
                    const unsigned l_513 = 0x7823978BL;
                    int *l_517 = &g_435;
                    if ((((l_497.f0.f6 && (g_78.f2.f9 >= (0xF6L >= l_513))) , l_514) || func_41(func_45((func_41(func_45((((g_227.f3 , ((((g_515 == g_515) , ((((*g_401) == (void*)0) ^ 0x3A5BL) >= 0xE09B9A57L)) , 0xFCFF7DF8L) , (void*)0)) != &g_137) <= 1L)), l_513, l_497.f0.f0.f6) , 0x3D82D33AL)), l_514, g_108.f0.f2)))
                    {
                        (*l_492) = l_516;
                    }
                    else
                    {
                        (*l_516) = (*l_491);
                    }
                    l_518 = l_517;
                }
                if (l_514)
                    continue;
                if ((*g_199))
                    continue;
                if ((*g_199))
                {
                    (*l_518) = 0x805DB30EL;
                    (*l_516) = (0L <= (*g_199));
                    (*l_492) = &g_2;
                }
                else
                {
                    g_199 = &g_2;
                    if ((*l_518))
                        continue;
                }
            }
            else
            {
                (*l_492) = &g_2;
            }
            (*l_491) = (*g_199);
            if ((g_78.f6.f0.f9 >= (safe_unary_minus_func_uint8_t_u(((g_227.f0.f0 == (0x0C919DD8L == (safe_mod_func_uint16_t_u_u(func_41(g_108.f0.f0, (safe_mod_func_int32_t_s_s(((void*)0 == (*g_401)), (*l_518))), ((((((&l_510 != (*g_401)) ^ l_524) ^ l_525) , l_526) , l_527) , (*l_516))), g_52.f5)))) || (*l_516))))))
            {
                struct S3 **l_528 = (void*)0;
                struct S3 **l_529 = (void*)0;
                struct S3 *l_531 = &g_78;
                struct S3 **l_530 = &l_531;
                (*l_530) = &g_78;
            }
            else
            {
                const unsigned char l_546 = 0x66L;
                struct S1 l_547 = {0xCCL,0xAC3AL,0xE8033F8BL,-1L,0xBBL,1UL,3L,0xB8FDEB50L,1L,-1L};
                (*l_492) = (*l_492);
                (*l_516) = (safe_add_func_uint16_t_u_u(((g_2 <= func_41(func_45(((*l_516) >= (safe_sub_func_uint16_t_u_u((l_548 , 0x11EEL), (*l_516))))), (*l_518), g_78.f4.f0.f9)) , 0x793DL), g_78.f2.f3));
                if ((*g_199))
                    break;
            }
        }
        (*l_492) = &g_435;
        if ((*g_199))
        {
            const unsigned l_549 = 1UL;
            (*l_491) = (((func_41(g_227.f0, (l_549 ^ (*l_516)), (*l_516)) | ((g_550 != l_552) >= (safe_sub_func_uint8_t_u_u((g_78.f5 >= ((*l_516) > 0x0B0D2835L)), 255UL)))) ^ l_556) > g_227.f0.f1);
        }
        else
        {
            struct S1 l_559 = {0xC7L,65535UL,0xF98FD8D9L,0x174AF1DFL,4UL,0xDA16EDF8L,0xE2E02CB5L,1UL,0x435BE7A4L,0x7CF04CEFL};
            struct S0 *l_569 = (void*)0;
            int l_608 = 1L;
            struct S1 l_610 = {1L,1UL,0xE31F5BD1L,0x93494288L,248UL,4294967295UL,-1L,18446744073709551615UL,-7L,0x090127D7L};
            unsigned l_617 = 0x43F0A250L;
            const struct S3 *l_668 = &g_78;
            const struct S3 **l_667 = &l_668;
            struct S4 **l_673 = &g_352;
            if (((&l_491 == &l_516) & 0x92L))
            {
                int l_566 = 1L;
                const struct S3 *l_575 = (void*)0;
                const struct S3 **l_574 = &l_575;
                for (g_149.f0.f0.f3 = 21; (g_149.f0.f0.f3 > (-12)); g_149.f0.f0.f3 = safe_sub_func_int32_t_s_s(g_149.f0.f0.f3, 5))
                {
                    unsigned l_565 = 18446744073709551615UL;
                    struct S0 *l_570 = &l_509;
                    if ((func_41(((*g_551) , l_559), ((safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u(l_559.f0)) || g_227.f6), (l_565 & ((g_137.f0 > (l_565 <= g_78.f4.f0.f0)) , (func_41((**g_550), l_566, g_108.f0.f2) < 0x0A0AEA4EL))))) ^ 0xE528L), g_108.f0.f0.f5) < 0UL))
                    {
                        if ((*g_199))
                            break;
                        if ((*g_199))
                            break;
                        if (l_559.f8)
                            break;
                    }
                    else
                    {
                        const char l_571 = 3L;
                        const struct S1 *l_573 = &l_496;
                        const struct S1 **l_572 = &l_573;
                        g_435 = (((safe_div_func_int16_t_s_s(func_41(func_45((l_569 != (l_566 , l_570))), g_78.f2.f2, g_227.f0.f7), l_571)) < ((**g_550) , 65530UL)) || l_559.f0);
                        (*l_572) = (*g_550);
                    }
                }
                (*l_574) = ((g_108.f0.f0.f0 & (*l_516)) , (void*)0);
                (**g_401) = l_576;
            }
            else
            {
                (*l_516) = g_577;
            }
            if ((safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((((g_227.f0.f5 | func_41(l_582, ((safe_rshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(0x3FL, (*l_491))), ((((&g_353 != (void*)0) , ((+g_227.f0.f1) > g_78.f4.f0.f8)) && ((g_78.f6.f0.f5 & g_78.f2.f9) <= 0x6B9766CAL)) || (*l_491)))), 1)) | (**l_492)), g_78.f2.f4)) > g_93.f0) > (*l_491)) , 0UL), g_490)), 7UL)))
            {
                struct S0 l_589 = {1UL,-6L,0x2374CEFAL};
                return l_589;
            }
            else
            {
                unsigned l_609 = 0x9E318391L;
                struct S2 *l_665 = &g_666;
                (*l_492) = &g_2;
                if ((0UL < func_41((((safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(g_137.f0, (safe_div_func_int16_t_s_s((*l_491), l_600)))), ((safe_sub_func_int16_t_s_s((g_78.f6.f2 >= (*l_491)), (safe_rshift_func_int8_t_s_u(((((*g_199) == (safe_mod_func_int8_t_s_s((((*g_199) && (l_607 < 0x42D10869L)) , 0L), (*l_516)))) | l_608) < (**l_492)), 1)))) ^ g_78.f4.f2))) & (*l_491)) , 0xDA95L), g_78.f2.f0)), l_609)) , l_509) , l_610), l_559.f5, g_108.f0.f1)))
                {
                    unsigned char l_624 = 0xA2L;
                    for (g_149.f0.f6 = 11; (g_149.f0.f6 <= 36); g_149.f0.f6 = safe_add_func_int32_t_s_s(g_149.f0.f6, 1))
                    {
                        union U5 l_625 = {{{0x95L,7UL,0x082408A4L,1L,251UL,0x03A9E512L,0x68E19DADL,18446744073709551615UL,0xA5E4FEDDL,1L},0xC3AAFA27L,0x1BFFL,0xC627E158L,-8L,0x4BL,0x338A8F6CL}};
                        (**l_552) = func_45((((*l_516) & (safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s(func_41((*g_551), l_617, (g_78.f6.f0.f9 , (safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s(func_41(func_45((((((l_624 > l_610.f9) | g_78.f4.f0.f7) || ((((l_625 , (void*)0) == l_626) & 0x56L) || g_78.f6.f0.f5)) >= l_610.f9) , 8UL)), l_624, l_625.f0.f0.f5), (**l_492))) >= g_52.f9) > l_610.f2), g_93.f1)), g_108.f0.f0.f2)))), 0x68F2L)), (*l_516)))) > g_227.f0.f6));
                    }
                    g_2 = ((l_559.f3 < func_41(l_610, (safe_rshift_func_int16_t_s_s((*l_491), g_78.f1)), (**l_492))) == ((safe_div_func_int32_t_s_s(l_633, (safe_rshift_func_int16_t_s_u(((**l_492) , (g_353.f0 <= 0x2710L)), g_108.f0.f0.f2)))) & g_78.f6.f0.f7));
                }
                else
                {
                    unsigned l_640 = 0x522372EDL;
                    const struct S4 **l_654 = &l_628;
                    (**g_401) = l_489;
                    for (g_227.f0.f5 = 0; (g_227.f0.f5 == 31); ++g_227.f0.f5)
                    {
                        struct S0 *l_645 = &l_500;
                        struct S0 **l_646 = (void*)0;
                        struct S0 **l_647 = &l_645;
                        struct S3 l_653 = {0x0E961606L,3L,{0L,0UL,0x36B9FFA3L,0x0416CA58L,0x74L,0UL,1L,18446744073709551606UL,0x48F7D124L,-1L},2L,{{0xCAL,6UL,-1L,-8L,247UL,0x81F1AB70L,0x7AC02083L,0x58CCE428L,0x8CDB886FL,1L},0xBA96A32DL,0x7FFDL,1UL,2L,253UL,1UL},0x78CE1057L,{{0L,1UL,0xABDF47C9L,0xF1D8132BL,0xE5L,1UL,-1L,1UL,0L,3L},0x5DD98068L,0x9866L,0x52E6665CL,0xC51EACBFL,0x09L,1UL},{0xB9C14516L,0L,8UL},65535UL};
                        (*l_516) = (safe_rshift_func_int16_t_s_s(l_640, (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(l_640, g_78.f6.f6)), 1))));
                        (*l_647) = l_645;
                        (*l_491) = ((safe_add_func_uint16_t_u_u(func_41((*l_553), (safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint8_t_u_s(((func_45(l_610.f6) , (l_653 , &g_352)) == l_654), ((safe_div_func_int32_t_s_s(0xF08258C8L, (0xB02FL & (*l_516)))) == l_640))))), g_227.f2), g_52.f7)) > 0UL);
                    }
                    (*l_491) = ((safe_add_func_uint8_t_u_u(((g_93.f0 != (safe_lshift_func_uint16_t_u_s(((func_41(((*l_628) , l_610), g_78.f6.f0.f0, (*l_491)) && l_610.f5) & g_78.f2.f4), g_78.f6.f0.f3))) && (*l_491)), 0x53L)) <= (*g_199));
                }
                if ((*g_199))
                {
                    unsigned short l_670 = 1UL;
                    char l_678 = (-5L);
                    for (g_78.f6.f0.f3 = 19; (g_78.f6.f0.f3 > 26); g_78.f6.f0.f3 = safe_add_func_int32_t_s_s(g_78.f6.f0.f3, 5))
                    {
                        int l_669 = (-6L);
                        l_665 = &g_227;
                        (*l_491) = (((*g_199) <= ((void*)0 != l_667)) & (l_669 ^ func_41((**g_550), l_670, l_559.f3)));
                        if ((*g_199))
                            break;
                    }
                    if (((*l_516) > ((((safe_lshift_func_uint8_t_u_u(l_609, (l_559.f1 | ((!(l_673 != ((g_666.f5 && ((1L && (*l_491)) >= (safe_sub_func_int32_t_s_s(((*l_491) || func_41((**g_550), l_670, g_666.f0.f1)), 4294967286UL)))) , (void*)0))) , (*g_199))))) & g_78.f6.f0.f0) != 0L) != g_93.f1)))
                    {
                        (**l_492) = (l_670 == g_666.f0.f2);
                        return l_509;
                    }
                    else
                    {
                        struct S3 l_676 = {0xB26A778AL,-8L,{0xA8L,0x32E4L,0xDF77CA82L,0xD38E0B6DL,0UL,0x2C33BC2DL,0xCCB2B182L,1UL,0x0E9375C2L,3L},0L,{{0L,65531UL,0x83BD36DDL,0x79C80FDBL,0UL,5UL,1L,9UL,0x8A59DF1BL,0xBDE29A68L},-1L,0x84F6L,0x7474D6F8L,0x1C7EA1A4L,251UL,1UL},0UL,{{0x5DL,0UL,0x94DEE1B3L,0L,0x80L,4294967292UL,0xC900A152L,0x33A40F12L,-1L,-7L},0L,-5L,0UL,3L,0x3CL,0xB3B2F99AL},{0x7405F6D3L,5L,0x91197B9CL},65528UL};
                        g_199 = &g_2;
                        (*l_516) = (~(((g_78.f4.f0.f9 , ((l_676 , l_677) == (void*)0)) || (l_678 <= func_41(l_676.f4.f0, (safe_sub_func_uint16_t_u_u((((*l_516) | func_41((**g_550), ((*g_199) , g_78.f4.f0.f0), g_78.f7.f0)) | 3UL), 0x5632L)), (**l_492)))) ^ g_78.f4.f0.f1));
                    }
                    (**l_552) = func_45(l_681);
                    if ((*g_199))
                        break;
                }
                else
                {
                    for (l_609 = (-29); (l_609 == 53); ++l_609)
                    {
                        if ((*l_516))
                            break;
                    }
                    (*g_151) = (*g_151);
                }
            }
            if ((*g_199))
                break;
            (**l_492) = (g_78.f5 < (safe_rshift_func_int16_t_s_u(func_41(func_45(((func_41((((safe_rshift_func_uint16_t_u_u(1UL, (safe_sub_func_uint16_t_u_u((((*l_516) >= (safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(func_41(func_45(g_490), (l_696 == (void*)0), (l_559.f2 | ((((*l_516) , (*l_516)) < (*l_516)) , (*l_491)))), g_78.f6.f3)), g_78.f8)) ^ (*g_199)), l_610.f6))) >= (**l_492)), (**l_492))))) , l_527) , (*g_551)), g_52.f3, (*l_491)) , g_435) , g_108.f0.f5)), g_52.f3, g_227.f0.f4), 7)));
        }
    }
    return l_500;
}







static unsigned char func_3(int p_4)
{
    struct S2 l_37 = {{0x06L,0x7A08L,-1L,0x7CEBB1B1L,0x7DL,2UL,0x85723E82L,0x2A807506L,-1L,1L},0x99CEA194L,-1L,0UL,0x1196D9F7L,249UL,1UL};
    struct S0 l_38 = {18446744073709551615UL,-1L,0xD3AFC3C3L};
    struct S3 l_131 = {1L,1L,{9L,0x87E9L,0x7C02C535L,0x0D671F37L,255UL,1UL,-9L,0xB18E8DE4L,-1L,0x03A96076L},1L,{{0L,0x1A28L,0x51E7A812L,2L,0x1EL,0UL,0x1357962FL,0x5AABCAB2L,0xAD9D747DL,3L},0xCD4BFFB1L,0xAC4DL,0x22D2A8B1L,0x90E2B50EL,0xB8L,0UL},0UL,{{0L,0UL,0xC3B88169L,0x939C0F99L,255UL,0UL,1L,0xF61EEE09L,0L,0xA656022EL},0x11DCCF77L,0x7CE1L,5UL,0x719AC70EL,9UL,18446744073709551614UL},{18446744073709551607UL,0xB7L,0UL},0xA1A7L};
    struct S4 l_327 = {5UL};
    union U5 l_346 = {{{0xD3L,2UL,0L,0xF8CB9DB3L,1UL,4294967295UL,0x2BA32941L,0x4E62406EL,0x5C0F2CF6L,0x69DC975DL},0xCA3F6194L,0xEE9EL,0x8EE94C0DL,0xA4628319L,0x09L,0x7DF42935L}};
    int **l_368 = (void*)0;
    int ***l_367 = &l_368;
    char l_391 = 0x8AL;
    struct S2 **l_399 = &g_226;
    struct S2 *** const l_398 = &l_399;
    char l_405 = 0xB7L;
    unsigned short l_436 = 1UL;
    int l_460 = 0x8918AD2AL;
    struct S3 *l_469 = &g_78;
    struct S3 ** const l_468 = &l_469;
    int l_476 = 1L;
    if ((+(safe_mod_func_uint32_t_u_u((~(func_8(func_14(func_19(func_24((func_29(func_34(l_37, ((l_38 , g_2) < (safe_div_func_int16_t_s_s(func_41(func_45((l_37.f0.f9 < ((0x2C83D21EL & g_2) , (((((0L >= g_2) > (safe_sub_func_int16_t_s_s(g_2, 5L))) , 0xD3DACF38L) , 0x7237EC01L) , g_2)))), p_4, g_2), 1L)))), l_131, p_4, l_37.f5) , (*g_102)), g_78.f4.f0, p_4, g_78.f6.f0), p_4, l_131.f2, l_37.f0), g_93, l_131.f5, p_4), l_38, g_78.f6.f2, g_78.f6.f4, l_37.f0) , g_227.f5)), g_227.f0.f8))))
    {
        struct S0 **l_325 = &g_102;
        (*l_325) = &l_38;
    }
    else
    {
        const int l_326 = 0x358DDAE5L;
        unsigned char l_330 = 249UL;
        unsigned char l_337 = 0x93L;
        union U5 l_338 = {{{0x39L,0xA06FL,0L,5L,0x21L,0xBCC12BECL,0x3DA5228BL,9UL,-1L,0x554102A1L},-1L,0xEA8EL,0xC578D276L,2L,0x21L,0x6B111D19L}};
        int *l_339 = &g_78.f0;
        (*l_339) = ((l_326 | func_41(l_131.f2, (l_327 , ((!0x4A99CD74L) < ((!p_4) >= (safe_rshift_func_uint8_t_u_u(l_330, (safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((l_337 != ((p_4 <= (l_338 , p_4)) != 0L)), p_4)), l_131.f6.f6))))))), g_78.f6.f0.f1)) & (*g_199));
        (*l_339) = (*l_339);
        (*g_102) = l_38;
    }
    for (g_78.f2.f5 = 27; (g_78.f2.f5 < 24); g_78.f2.f5 = safe_sub_func_uint32_t_u_u(g_78.f2.f5, 3))
    {
        struct S4 *l_351 = (void*)0;
        const int l_356 = 0x83B653CFL;
        struct S3 l_357 = {0xDFAB536FL,0x42L,{0x2BL,0xE422L,-4L,0x37AD80FBL,0xDFL,4294967294UL,3L,18446744073709551615UL,0L,0x2B612238L},0xF98635AFL,{{-1L,0xDD7FL,-1L,0xC8DA064AL,0x71L,4294967287UL,9L,0UL,-1L,0L},0xC2ED5490L,8L,0UL,-4L,0UL,18446744073709551615UL},1UL,{{0x87L,0xFBD0L,-1L,0x2E84A6A0L,0xE2L,1UL,0x3EC3B919L,0xE4522F5FL,0x96B6E9BEL,0x38D8F312L},0x624F9B19L,0x215AL,0x680D9EBCL,0x3731AD53L,0x98L,0xBAA7D61EL},{0x7F8364DBL,1L,0xDBF84F4DL},0x183EL};
        union U5 l_358 = {{{0L,0UL,0x7DCCA314L,0x886D9A1AL,4UL,0x5971CEC4L,2L,5UL,0x90F03AFBL,0L},0x5356A868L,0x1863L,0xA8EA08D6L,0xC8F50BC2L,0xABL,0xE2FA5B43L}};
        const struct S1 l_373 = {0L,0xC7D4L,-5L,2L,0xF5L,0xDB09391DL,0xF90F2B9CL,0UL,0xB33DAC6BL,0x5699BB93L};
        int *l_376 = &l_358.f0.f1;
        union U5 **l_382 = (void*)0;
        union U5 ***l_381 = &l_382;
        int *l_440 = &g_78.f6.f0.f2;
        unsigned l_474 = 0xA393D950L;
        const int *l_477 = &l_357.f6.f0.f2;
    }
    return p_4;
}







static struct S1 func_8(struct S2 p_9, struct S0 p_10, const unsigned p_11, int p_12, struct S1 p_13)
{
    struct S0 l_273 = {18446744073709551612UL,1L,0UL};
    union U5 l_290 = {{{-9L,0xF36CL,1L,0x8F5E76F5L,0x9BL,4294967295UL,0xFB39EDF9L,0UL,1L,0xFD4B3F3EL},-4L,0L,0x93BDE2CDL,0x37CF3C3DL,0xB0L,1UL}};
    if (p_13.f4)
    {
        int l_270 = 0L;
        struct S4 *l_280 = &g_137;
        struct S4 **l_279 = &l_280;
        unsigned l_287 = 1UL;
        struct S3 *l_291 = &g_78;
        struct S0 *l_299 = &l_273;
        struct S1 l_301 = {0xE6L,0x7067L,0xAC47DBB0L,0x0C00B2D0L,0xBCL,4294967289UL,4L,0xE8037975L,-4L,0xEA9329BDL};
        int l_314 = (-10L);
        if ((l_270 && ((((g_52 , (*g_199)) && (safe_rshift_func_uint8_t_u_u((l_273 , p_9.f3), 6))) ^ g_78.f6.f4) && p_13.f5)))
        {
            short l_278 = 0L;
            unsigned char l_288 = 0xE8L;
            int *l_289 = &g_78.f6.f0.f2;
            (*l_289) = (safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s((((l_278 , l_279) != &l_280) != (*g_199)), (safe_div_func_int16_t_s_s((!func_41(func_45(func_41((func_45(p_13.f8) , g_78.f2), ((safe_rshift_func_uint16_t_u_s(0x58ECL, 14)) >= (safe_rshift_func_int16_t_s_s(l_287, 6))), l_288)), p_9.f2, p_13.f7)), p_9.f0.f1)))), g_78.f6.f6));
            (*l_289) = (l_290 , ((void*)0 == l_291));
        }
        else
        {
            char l_296 = 0x3AL;
            int l_319 = 0xA1E71ED8L;
            for (g_78.f6.f0.f5 = 0; (g_78.f6.f0.f5 < 13); g_78.f6.f0.f5++)
            {
                for (g_78.f2.f0 = 0; (g_78.f2.f0 < (-22)); g_78.f2.f0--)
                {
                    int *l_297 = (void*)0;
                    if (l_296)
                    {
                        int **l_298 = &l_297;
                        (*l_298) = l_297;
                        (*l_298) = &l_270;
                    }
                    else
                    {
                        struct S0 **l_300 = &l_299;
                        (*l_300) = l_299;
                    }
                    return l_301;
                }
                g_149.f0.f0 = g_227.f0;
                (*l_299) = (*l_299);
                (**g_151) = &l_290;
            }
            for (l_290.f0.f0.f4 = 0; (l_290.f0.f0.f4 == 19); l_290.f0.f0.f4++)
            {
                char l_317 = 0L;
                int *l_320 = &l_301.f2;
                if ((safe_rshift_func_uint16_t_u_s(g_78.f2.f5, ((g_137 , (((safe_add_func_uint16_t_u_u((p_9 , g_52.f2), ((-1L) != p_9.f6))) | l_301.f3) ^ ((safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((((((((void*)0 == &g_152) == (*g_199)) != l_296) || p_9.f5) <= 0x99DF287FL) || 0xC2AB461DL) <= p_9.f0.f8) && g_93.f2), l_273.f1)), l_314)) == l_301.f4))) & p_13.f6))))
                {
                    struct S4 ***l_315 = &l_279;
                    struct S1 l_316 = {0L,0x7DD6L,1L,0xB50C69E5L,0UL,0xC4608ED7L,0x7D9476D2L,0xF4E3DEA1L,1L,0x8E32D842L};
                    int *l_318 = (void*)0;
                    (*l_315) = &l_280;
                    l_319 = func_41(func_45((l_316 , ((l_317 && 0x4014L) != l_314))), g_78.f6.f0.f1, l_301.f7);
                }
                else
                {
                    int **l_321 = &l_320;
                    (*l_321) = l_320;
                    (*l_321) = &g_2;
                }
                g_108.f0.f0.f2 = l_290.f0.f6;
            }
        }
    }
    else
    {
        int *l_322 = &g_78.f6.f1;
        struct S4 *l_323 = &g_137;
        struct S4 **l_324 = &l_323;
        (*l_322) = (*g_199);
        (*l_324) = l_323;
    }
    return p_13;
}







static struct S2 func_14(struct S4 p_15, struct S0 p_16, short p_17, unsigned short p_18)
{
    struct S2 l_160 = {{1L,65528UL,0x58A64CC7L,0x7CEC86A8L,0xDDL,0UL,0xE5877543L,0x05D4DD67L,-1L,0x39783EACL},0xF1A482D9L,0x3754L,0x6D3CF257L,-1L,248UL,18446744073709551607UL};
    struct S0 l_170 = {18446744073709551610UL,6L,7UL};
    char l_214 = 0x59L;
    struct S1 *l_234 = &g_78.f2;
    struct S1 ** const l_233 = &l_234;
    const struct S1 l_252 = {0xD4L,65535UL,-1L,0x8CB26E2EL,5UL,0x55210349L,-4L,1UL,0x587AF162L,0x423FCD32L};
    if ((l_160 , g_78.f4.f0.f0))
    {
        unsigned l_164 = 0x9CF198F1L;
        struct S1 *l_167 = &g_52;
        struct S0 ***l_172 = &g_101;
        int *l_174 = (void*)0;
        int **l_173 = &l_174;
        struct S0 *l_201 = &l_170;
        unsigned char l_228 = 1UL;
        struct S2 l_229 = {{1L,65529UL,3L,0xA3264663L,246UL,0x352F5B1EL,0xF49778D7L,0xF31F02A5L,0x1613AEFAL,8L},1L,0x176AL,0x64B12599L,0x47D89434L,0xD3L,0x320F75E0L};
        if (g_78.f6.f0.f2)
        {
            struct S3 *l_162 = &g_78;
            struct S3 **l_161 = &l_162;
            int l_163 = 1L;
            (*l_161) = (void*)0;
            l_163 = func_41(((p_17 ^ (p_15.f0 & l_163)) , l_160.f0), g_78.f2.f9, ((l_160.f5 , p_16.f1) < l_164));
        }
        else
        {
            struct S3 *l_166 = &g_78;
            struct S3 **l_165 = &l_166;
            (*l_165) = &g_78;
        }
        (*l_167) = g_78.f2;
        if ((safe_div_func_uint16_t_u_u((g_78.f2.f6 ^ l_160.f0.f5), l_160.f4)))
        {
            struct S0 ***l_171 = &g_101;
            int **l_175 = &l_174;
            struct S4 *l_187 = (void*)0;
            int l_191 = (-1L);
            struct S1 l_193 = {-4L,0x00E8L,0x7104FF23L,-7L,6UL,0x3558DE3DL,-7L,0xB233FA9AL,-1L,0L};
            union U5 l_210 = {{{-2L,0UL,1L,0L,0x3CL,0x4C035615L,0x922CB8CFL,0x1FED1F27L,6L,3L},0xFF869411L,0x75A7L,0xCFEF7487L,0x3886A773L,1UL,0UL}};
            struct S1 * const *l_224 = &l_167;
            int *l_232 = (void*)0;
            int *l_237 = &g_227.f0.f2;
            if (((((func_41(func_45(p_16.f0), (p_17 <= (l_170 , g_52.f1)), ((l_171 == l_172) > l_160.f3)) , g_78.f4.f0.f7) ^ 0x3DFD6F59L) , l_173) == l_175))
            {
                for (g_149.f0.f0.f7 = 0; (g_149.f0.f0.f7 > 28); g_149.f0.f0.f7 = safe_add_func_int16_t_s_s(g_149.f0.f0.f7, 1))
                {
                    struct S2 l_178 = {{0x92L,0x50D1L,0L,0xBCC292E9L,0UL,4294967295UL,0xDDB987CAL,0xC57EA85AL,1L,1L},0x12CC45B1L,1L,0x0E0FF557L,0x8C40FE08L,0x73L,0xDE5C421FL};
                    return l_178;
                }
            }
            else
            {
                int l_188 = 0x1C5595F8L;
                struct S1 l_198 = {0x8BL,0xB7DFL,0x1DA4BF65L,-8L,0xCBL,4294967295UL,0L,18446744073709551615UL,-1L,8L};
                for (g_108.f0.f0.f7 = 14; (g_108.f0.f0.f7 <= 11); --g_108.f0.f0.f7)
                {
                    unsigned short l_192 = 9UL;
                    l_193 = func_45((((safe_add_func_uint8_t_u_u(g_78.f6.f0.f3, (safe_sub_func_uint32_t_u_u(g_78.f2.f5, func_41(l_160.f0, (safe_rshift_func_int16_t_s_s((l_187 == &g_137), l_160.f0.f3)), l_188))))) || ((safe_rshift_func_uint8_t_u_s((l_191 , 4UL), g_78.f6.f0.f4)) | l_192)) >= l_188));
                    for (g_78.f2.f8 = 0; (g_78.f2.f8 > 15); g_78.f2.f8 = safe_add_func_uint32_t_u_u(g_78.f2.f8, 1))
                    {
                        const int **l_200 = &g_199;
                        l_198 = ((safe_sub_func_int8_t_s_s(g_108.f0.f3, 8L)) , g_78.f6.f0);
                        (*l_175) = &g_2;
                        (*l_200) = g_199;
                    }
                    l_201 = (g_78.f4.f4 , &l_170);
                }
            }
            for (g_149.f0.f0.f5 = (-19); (g_149.f0.f0.f5 <= 40); g_149.f0.f0.f5 = safe_add_func_uint16_t_u_u(g_149.f0.f0.f5, 1))
            {
                int l_215 = 0xFE29DAE9L;
                (*l_167) = g_108.f0.f0;
                for (l_170.f1 = 5; (l_170.f1 > (-26)); --l_170.f1)
                {
                    const struct S1 *l_206 = &g_149.f0.f0;
                    const struct S1 **l_207 = &l_206;
                    struct S2 l_213 = {{0xDCL,0xEACAL,1L,-7L,255UL,0xFAC9C4EFL,-4L,0UL,0x6277D689L,8L},0xF939F623L,-8L,0xAF50E186L,0xC2539A14L,0UL,1UL};
                    (*l_207) = l_206;
                    l_191 = p_16.f2;
                    if ((((safe_sub_func_int16_t_s_s(g_78.f6.f0.f9, g_149.f0.f4)) > ((l_210 , (func_41((**l_207), (safe_div_func_int8_t_s_s(g_78.f3, g_78.f7.f2)), l_214) & 5L)) && l_215)) >= l_215))
                    {
                        (*l_175) = (void*)0;
                        (*l_175) = &g_2;
                        if (p_16.f2)
                            break;
                    }
                    else
                    {
                        struct S2 **l_225 = (void*)0;
                        g_108.f0.f1 = (safe_sub_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(l_160.f0.f9, (safe_rshift_func_uint16_t_u_u((0xA1D27C7CL && l_213.f0.f6), (g_149.f0.f0.f8 < ((((l_224 != ((l_160.f0 , g_78.f4.f0) , (void*)0)) , func_41((**l_224), p_17, g_78.f2.f3)) <= 0x06F14D4AL) > 0x40L)))))), 13)) | g_78.f4.f0.f9) & p_16.f2), g_78.f6.f6));
                        g_226 = &l_160;
                    }
                    if (((p_16.f2 , ((l_228 ^ func_41(func_45((p_15 , g_93.f1)), (l_229 , (g_137 , p_16.f1)), p_18)) < p_17)) || p_18))
                    {
                        const struct S3 *l_230 = (void*)0;
                        const struct S3 **l_231 = &l_230;
                        (*l_231) = l_230;
                        if (p_16.f0)
                            continue;
                        g_78.f0 = (*g_199);
                    }
                    else
                    {
                        (*l_175) = (*l_175);
                    }
                }
            }
            l_160.f1 = (*g_199);
            (*l_237) = ((func_41((*l_167), g_78.f4.f0.f1, p_17) , p_16.f2) ^ (((*g_199) != (l_233 != (void*)0)) > (safe_div_func_int16_t_s_s(g_93.f0, g_78.f6.f0.f0))));
        }
        else
        {
            short l_238 = 1L;
            int l_257 = 0xA703EDE6L;
            struct S4 *l_258 = (void*)0;
            struct S0 l_259 = {18446744073709551615UL,7L,4294967294UL};
            struct S2 **l_261 = &g_226;
            struct S2 ***l_260 = &l_261;
            (*l_173) = &g_2;
            if (func_41(g_227.f0, p_16.f2, l_238))
            {
                int l_241 = (-1L);
                if ((safe_mod_func_int16_t_s_s(func_41(g_149.f0.f0, p_15.f0, p_15.f0), l_241)))
                {
                    const short l_246 = 0xAE18L;
                    if (p_16.f0)
                    {
                        struct S4 *l_243 = (void*)0;
                        struct S4 **l_242 = &l_243;
                        struct S0 **l_244 = (void*)0;
                        struct S0 **l_245 = &l_201;
                        (*l_173) = &g_2;
                        (*l_242) = (void*)0;
                        (*l_245) = &p_16;
                    }
                    else
                    {
                        short l_247 = (-4L);
                        g_78.f0 = (l_246 , (l_247 | (safe_div_func_uint8_t_u_u(p_17, p_15.f0))));
                    }
                    for (l_170.f2 = 10; (l_170.f2 < 23); l_170.f2++)
                    {
                        (*l_167) = l_252;
                        (*l_173) = &g_2;
                    }
                    return (*g_226);
                }
                else
                {
                    return (*g_226);
                }
            }
            else
            {
                unsigned l_253 = 4294967295UL;
                struct S2 l_254 = {{0xD7L,0x7F36L,0x27EAECD1L,-8L,0x07L,6UL,-6L,18446744073709551613UL,0L,0L},0L,0x4FB8L,0UL,5L,0x43L,18446744073709551609UL};
                int *l_255 = (void*)0;
                int *l_256 = (void*)0;
                l_257 = (p_15.f0 , (~l_254.f0.f7));
                l_258 = l_258;
                (*g_102) = l_259;
                (*l_167) = g_108.f0.f0;
            }
            (*l_260) = &g_226;
        }
    }
    else
    {
        struct S2 l_266 = {{0x0FL,0x4C3AL,0L,0x285380D9L,0x05L,0x8237D19FL,0x43F08F74L,0xA5F23C35L,7L,9L},0L,0x9BC0L,0xBFC92646L,0xA2ED9F7EL,250UL,18446744073709551615UL};
        struct S2 l_269 = {{5L,0x8631L,1L,-5L,255UL,0UL,0xFEB249FBL,0x58D1894AL,6L,-1L},3L,-3L,0xAF2A16E3L,0x149C9556L,0x41L,7UL};
        if (p_17)
        {
            struct S2 **l_264 = &g_226;
            int l_265 = 9L;
            struct S1 l_267 = {0x9AL,3UL,0xEB4B3A25L,-8L,0xE0L,0x3748E4E2L,0x96302688L,0xE6014ED6L,0L,0xF6ABB0ADL};
            int *l_268 = &g_78.f2.f2;
            (*l_268) = (((safe_sub_func_int8_t_s_s((((0x28A4E22AL ^ (((void*)0 != l_264) ^ l_265)) , (l_266 , ((g_227.f0.f4 <= 1UL) & p_17))) && l_252.f4), 0L)) , 0x39479F0CL) || (*g_199));
            return l_269;
        }
        else
        {
            return l_266;
        }
    }
    return l_160;
}







static struct S4 func_19(struct S2 p_20, unsigned char p_21, struct S1 p_22, const struct S1 p_23)
{
    int *l_157 = &g_78.f6.f0.f2;
    int **l_156 = &l_157;
    int ***l_155 = &l_156;
    struct S0 *l_158 = &g_93;
    struct S4 l_159 = {65533UL};
    (*g_152) = (*g_152);
    (*l_155) = (void*)0;
    l_158 = l_158;
    return l_159;
}







static struct S2 func_24(struct S0 p_25, struct S1 p_26, char p_27, struct S1 p_28)
{
    struct S4 **l_134 = (void*)0;
    struct S4 *l_136 = &g_137;
    struct S4 **l_135 = &l_136;
    int l_140 = 0xE0713F51L;
    const struct S0 **l_142 = (void*)0;
    const struct S0 ***l_141 = &l_142;
    union U5 *l_144 = &g_108;
    struct S1 l_150 = {4L,0x2921L,-5L,0x271E2304L,1UL,7UL,0x6EF46315L,18446744073709551615UL,-9L,0xE0F2169EL};
    int *l_153 = &g_78.f6.f1;
    struct S2 l_154 = {{7L,0x4A8CL,-1L,0xD34A9AF0L,255UL,0xA3C25BD7L,-1L,0x9F9090C8L,-1L,-1L},0xC94AE0E3L,-4L,18446744073709551607UL,-1L,0x1AL,0xFA46E22EL};
    (*l_135) = (void*)0;
    if ((p_28.f4 > (((((void*)0 != &g_2) || (safe_mod_func_uint32_t_u_u((l_140 == p_26.f3), p_28.f4))) || g_78.f4.f0.f4) , 1UL)))
    {
        int *l_143 = &g_108.f0.f0.f2;
        (*l_143) = (l_141 != &g_101);
    }
    else
    {
        int *l_145 = (void*)0;
        int *l_146 = &g_108.f0.f0.f2;
        union U5 **l_147 = (void*)0;
        union U5 *l_148 = &g_149;
        (*l_146) = (l_144 == &g_108);
        l_148 = &g_108;
        p_28 = func_45(g_108.f0.f0.f5);
    }
    (*l_153) = (func_41(l_150, p_28.f4, g_78.f4.f0.f6) <= (g_151 == &g_152));
    return l_154;
}







static struct S2 func_29(int p_30, struct S3 p_31, unsigned p_32, unsigned p_33)
{
    int *l_132 = &g_78.f2.f2;
    int **l_133 = &l_132;
    (*l_133) = l_132;
    return g_78.f4;
}







static int func_34(struct S2 p_35, unsigned char p_36)
{
    unsigned char l_65 = 0UL;
    struct S1 *l_70 = &g_52;
    struct S1 **l_69 = &l_70;
    union U5 l_76 = {{{1L,0x0834L,0xC3BFC78DL,-1L,255UL,0x2B228E05L,0xC286E787L,18446744073709551614UL,-1L,4L},0x514ADC3BL,1L,18446744073709551614UL,0x296FF799L,0xEAL,0x6E628875L}};
    struct S0 *l_92 = &g_93;
    const union U5 *l_107 = &g_108;
    int *l_113 = &l_76.f0.f0.f2;
    if (((safe_sub_func_int32_t_s_s(((safe_div_func_int8_t_s_s(func_41(func_45(g_52.f7), p_35.f0.f2, g_52.f7), 0xCEL)) > 0xA4L), ((p_35.f6 & p_35.f0.f8) , p_35.f2))) > g_52.f0))
    {
        int *l_66 = &g_52.f2;
        (*l_66) = (l_65 < g_52.f0);
    }
    else
    {
        short l_75 = 0xA12BL;
        struct S1 *l_77 = &g_52;
        unsigned char l_84 = 0xC9L;
        if ((safe_add_func_int32_t_s_s((((g_52.f0 , l_69) != (void*)0) || (safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((l_75 != ((l_76 , l_77) == ((g_52.f4 && ((g_78 , ((-1L) != p_35.f3)) > l_76.f0.f6)) , (*l_69)))), 5)) | 1L), g_78.f6.f0.f7))), 0xFF88FC33L)))
        {
            char l_83 = 0x84L;
            if (p_35.f6)
            {
                const unsigned short l_85 = 0x3F2CL;
                struct S0 **l_109 = &l_92;
                int *l_112 = &l_76.f0.f1;
                if (g_78.f4.f3)
                {
                    struct S0 ***l_103 = (void*)0;
                    struct S0 ***l_104 = (void*)0;
                    struct S0 ***l_105 = &g_101;
                    for (l_76.f0.f0.f9 = (-9); (l_76.f0.f0.f9 == 14); ++l_76.f0.f0.f9)
                    {
                        int *l_90 = (void*)0;
                        int *l_91 = &g_78.f0;
                        struct S0 **l_94 = &l_92;
                        (*l_91) = (safe_lshift_func_int16_t_s_u((p_36 || l_83), (func_41(g_78.f2, l_84, (func_41(g_52, g_78.f2.f5, (l_85 && (safe_lshift_func_uint8_t_u_s(248UL, ((safe_lshift_func_int16_t_s_u(0xE694L, l_76.f0.f2)) == 0x78546D85L))))) && g_78.f2.f8)) & p_35.f5)));
                        (*l_94) = l_92;
                        (*l_91) = (g_78.f4.f0.f4 | (safe_rshift_func_int8_t_s_u(((((safe_lshift_func_int16_t_s_s((((p_35.f0.f5 <= func_41(p_35.f0, g_52.f4, ((p_35.f1 != (func_41(g_78.f6.f0, g_78.f6.f4, ((((safe_add_func_int16_t_s_s(0xBDFEL, (255UL >= 0x48L))) & g_78.f2.f5) >= 0x48E721F1L) && p_35.f4)) >= 0xDB8EL)) ^ 255UL))) , p_35.f0.f4) | g_78.f7.f0), g_93.f1)) != 0x0487L) <= 0x8CL) != l_85), 3)));
                    }
                    (*l_105) = g_101;
                    l_107 = g_106;
                    (*l_105) = l_109;
                }
                else
                {
                    int **l_110 = (void*)0;
                    int *l_111 = (void*)0;
                    l_111 = &g_2;
                    l_113 = l_112;
                }
            }
            else
            {
                int *l_114 = (void*)0;
                int **l_115 = &l_114;
                struct S0 **l_116 = (void*)0;
                union U5 *l_118 = &g_108;
                union U5 **l_117 = &l_118;
                union U5 ***l_119 = &l_117;
                (*l_115) = l_114;
                (*l_113) = (l_116 == &g_102);
                (*l_119) = l_117;
                (*l_115) = (*l_115);
            }
        }
        else
        {
            int * const l_120 = (void*)0;
            int **l_121 = &l_113;
            int *l_130 = &g_108.f0.f0.f2;
            (*l_121) = l_120;
            (*l_121) = &g_2;
            (*g_101) = (((safe_mod_func_uint16_t_u_u(func_41(g_78.f6.f0, ((safe_rshift_func_int16_t_s_s((0UL < g_52.f6), 4)) || g_78.f2.f7), g_78.f6.f0.f9), l_84)) || (g_108.f0.f0.f1 | (safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u((255UL < g_108.f0.f2), g_52.f2)), 0x9678L)))) , (*g_101));
            (*l_130) = func_41(func_45(p_35.f0.f4), (p_35 , (**l_121)), p_35.f6);
        }
    }
    return p_35.f1;
}







static short func_41(struct S1 p_42, unsigned p_43, unsigned p_44)
{
    int *l_53 = &g_52.f2;
    int **l_54 = &l_53;
    (*l_53) = p_42.f7;
    (*l_54) = l_53;
    (**l_54) = (0L >= (((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((**l_54), 12)), ((((p_42.f9 >= ((*l_53) >= 0L)) || p_42.f2) <= (safe_mod_func_uint8_t_u_u((*l_53), g_52.f6))) , g_52.f0))) > g_52.f3) <= g_52.f9));
    return p_42.f3;
}







static struct S1 func_45(unsigned p_46)
{
    struct S1 **l_49 = (void*)0;
    struct S1 *l_51 = &g_52;
    struct S1 **l_50 = &l_51;
    (*l_50) = (void*)0;
    return g_52;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
    transparent_crc(g_52.f1, "g_52.f1", print_hash_value);
    transparent_crc(g_52.f2, "g_52.f2", print_hash_value);
    transparent_crc(g_52.f3, "g_52.f3", print_hash_value);
    transparent_crc(g_52.f4, "g_52.f4", print_hash_value);
    transparent_crc(g_52.f5, "g_52.f5", print_hash_value);
    transparent_crc(g_52.f6, "g_52.f6", print_hash_value);
    transparent_crc(g_52.f7, "g_52.f7", print_hash_value);
    transparent_crc(g_52.f8, "g_52.f8", print_hash_value);
    transparent_crc(g_52.f9, "g_52.f9", print_hash_value);
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_78.f1, "g_78.f1", print_hash_value);
    transparent_crc(g_78.f2.f0, "g_78.f2.f0", print_hash_value);
    transparent_crc(g_78.f2.f1, "g_78.f2.f1", print_hash_value);
    transparent_crc(g_78.f2.f2, "g_78.f2.f2", print_hash_value);
    transparent_crc(g_78.f2.f3, "g_78.f2.f3", print_hash_value);
    transparent_crc(g_78.f2.f4, "g_78.f2.f4", print_hash_value);
    transparent_crc(g_78.f2.f5, "g_78.f2.f5", print_hash_value);
    transparent_crc(g_78.f2.f6, "g_78.f2.f6", print_hash_value);
    transparent_crc(g_78.f2.f7, "g_78.f2.f7", print_hash_value);
    transparent_crc(g_78.f2.f8, "g_78.f2.f8", print_hash_value);
    transparent_crc(g_78.f2.f9, "g_78.f2.f9", print_hash_value);
    transparent_crc(g_78.f3, "g_78.f3", print_hash_value);
    transparent_crc(g_78.f4.f0.f0, "g_78.f4.f0.f0", print_hash_value);
    transparent_crc(g_78.f4.f0.f1, "g_78.f4.f0.f1", print_hash_value);
    transparent_crc(g_78.f4.f0.f2, "g_78.f4.f0.f2", print_hash_value);
    transparent_crc(g_78.f4.f0.f3, "g_78.f4.f0.f3", print_hash_value);
    transparent_crc(g_78.f4.f0.f4, "g_78.f4.f0.f4", print_hash_value);
    transparent_crc(g_78.f4.f0.f5, "g_78.f4.f0.f5", print_hash_value);
    transparent_crc(g_78.f4.f0.f6, "g_78.f4.f0.f6", print_hash_value);
    transparent_crc(g_78.f4.f0.f7, "g_78.f4.f0.f7", print_hash_value);
    transparent_crc(g_78.f4.f0.f8, "g_78.f4.f0.f8", print_hash_value);
    transparent_crc(g_78.f4.f0.f9, "g_78.f4.f0.f9", print_hash_value);
    transparent_crc(g_78.f4.f1, "g_78.f4.f1", print_hash_value);
    transparent_crc(g_78.f4.f2, "g_78.f4.f2", print_hash_value);
    transparent_crc(g_78.f4.f3, "g_78.f4.f3", print_hash_value);
    transparent_crc(g_78.f4.f4, "g_78.f4.f4", print_hash_value);
    transparent_crc(g_78.f4.f5, "g_78.f4.f5", print_hash_value);
    transparent_crc(g_78.f4.f6, "g_78.f4.f6", print_hash_value);
    transparent_crc(g_78.f5, "g_78.f5", print_hash_value);
    transparent_crc(g_78.f6.f0.f0, "g_78.f6.f0.f0", print_hash_value);
    transparent_crc(g_78.f6.f0.f1, "g_78.f6.f0.f1", print_hash_value);
    transparent_crc(g_78.f6.f0.f2, "g_78.f6.f0.f2", print_hash_value);
    transparent_crc(g_78.f6.f0.f3, "g_78.f6.f0.f3", print_hash_value);
    transparent_crc(g_78.f6.f0.f4, "g_78.f6.f0.f4", print_hash_value);
    transparent_crc(g_78.f6.f0.f5, "g_78.f6.f0.f5", print_hash_value);
    transparent_crc(g_78.f6.f0.f6, "g_78.f6.f0.f6", print_hash_value);
    transparent_crc(g_78.f6.f0.f7, "g_78.f6.f0.f7", print_hash_value);
    transparent_crc(g_78.f6.f0.f8, "g_78.f6.f0.f8", print_hash_value);
    transparent_crc(g_78.f6.f0.f9, "g_78.f6.f0.f9", print_hash_value);
    transparent_crc(g_78.f6.f1, "g_78.f6.f1", print_hash_value);
    transparent_crc(g_78.f6.f2, "g_78.f6.f2", print_hash_value);
    transparent_crc(g_78.f6.f3, "g_78.f6.f3", print_hash_value);
    transparent_crc(g_78.f6.f4, "g_78.f6.f4", print_hash_value);
    transparent_crc(g_78.f6.f5, "g_78.f6.f5", print_hash_value);
    transparent_crc(g_78.f6.f6, "g_78.f6.f6", print_hash_value);
    transparent_crc(g_78.f7.f0, "g_78.f7.f0", print_hash_value);
    transparent_crc(g_78.f7.f1, "g_78.f7.f1", print_hash_value);
    transparent_crc(g_78.f7.f2, "g_78.f7.f2", print_hash_value);
    transparent_crc(g_78.f8, "g_78.f8", print_hash_value);
    transparent_crc(g_93.f0, "g_93.f0", print_hash_value);
    transparent_crc(g_93.f1, "g_93.f1", print_hash_value);
    transparent_crc(g_93.f2, "g_93.f2", print_hash_value);
    transparent_crc(g_108.f0.f0.f0, "g_108.f0.f0.f0", print_hash_value);
    transparent_crc(g_108.f0.f0.f1, "g_108.f0.f0.f1", print_hash_value);
    transparent_crc(g_108.f0.f0.f2, "g_108.f0.f0.f2", print_hash_value);
    transparent_crc(g_108.f0.f0.f3, "g_108.f0.f0.f3", print_hash_value);
    transparent_crc(g_108.f0.f0.f4, "g_108.f0.f0.f4", print_hash_value);
    transparent_crc(g_108.f0.f0.f5, "g_108.f0.f0.f5", print_hash_value);
    transparent_crc(g_108.f0.f0.f6, "g_108.f0.f0.f6", print_hash_value);
    transparent_crc(g_108.f0.f0.f7, "g_108.f0.f0.f7", print_hash_value);
    transparent_crc(g_108.f0.f0.f8, "g_108.f0.f0.f8", print_hash_value);
    transparent_crc(g_108.f0.f0.f9, "g_108.f0.f0.f9", print_hash_value);
    transparent_crc(g_108.f0.f1, "g_108.f0.f1", print_hash_value);
    transparent_crc(g_108.f0.f2, "g_108.f0.f2", print_hash_value);
    transparent_crc(g_108.f0.f3, "g_108.f0.f3", print_hash_value);
    transparent_crc(g_108.f0.f4, "g_108.f0.f4", print_hash_value);
    transparent_crc(g_108.f0.f5, "g_108.f0.f5", print_hash_value);
    transparent_crc(g_108.f0.f6, "g_108.f0.f6", print_hash_value);
    transparent_crc(g_137.f0, "g_137.f0", print_hash_value);
    transparent_crc(g_227.f0.f0, "g_227.f0.f0", print_hash_value);
    transparent_crc(g_227.f0.f1, "g_227.f0.f1", print_hash_value);
    transparent_crc(g_227.f0.f2, "g_227.f0.f2", print_hash_value);
    transparent_crc(g_227.f0.f3, "g_227.f0.f3", print_hash_value);
    transparent_crc(g_227.f0.f4, "g_227.f0.f4", print_hash_value);
    transparent_crc(g_227.f0.f5, "g_227.f0.f5", print_hash_value);
    transparent_crc(g_227.f0.f6, "g_227.f0.f6", print_hash_value);
    transparent_crc(g_227.f0.f7, "g_227.f0.f7", print_hash_value);
    transparent_crc(g_227.f0.f8, "g_227.f0.f8", print_hash_value);
    transparent_crc(g_227.f0.f9, "g_227.f0.f9", print_hash_value);
    transparent_crc(g_227.f1, "g_227.f1", print_hash_value);
    transparent_crc(g_227.f2, "g_227.f2", print_hash_value);
    transparent_crc(g_227.f3, "g_227.f3", print_hash_value);
    transparent_crc(g_227.f4, "g_227.f4", print_hash_value);
    transparent_crc(g_227.f5, "g_227.f5", print_hash_value);
    transparent_crc(g_227.f6, "g_227.f6", print_hash_value);
    transparent_crc(g_353.f0, "g_353.f0", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_490, "g_490", print_hash_value);
    transparent_crc(g_577, "g_577", print_hash_value);
    transparent_crc(g_666.f0.f0, "g_666.f0.f0", print_hash_value);
    transparent_crc(g_666.f0.f1, "g_666.f0.f1", print_hash_value);
    transparent_crc(g_666.f0.f2, "g_666.f0.f2", print_hash_value);
    transparent_crc(g_666.f0.f3, "g_666.f0.f3", print_hash_value);
    transparent_crc(g_666.f0.f4, "g_666.f0.f4", print_hash_value);
    transparent_crc(g_666.f0.f5, "g_666.f0.f5", print_hash_value);
    transparent_crc(g_666.f0.f6, "g_666.f0.f6", print_hash_value);
    transparent_crc(g_666.f0.f7, "g_666.f0.f7", print_hash_value);
    transparent_crc(g_666.f0.f8, "g_666.f0.f8", print_hash_value);
    transparent_crc(g_666.f0.f9, "g_666.f0.f9", print_hash_value);
    transparent_crc(g_666.f1, "g_666.f1", print_hash_value);
    transparent_crc(g_666.f2, "g_666.f2", print_hash_value);
    transparent_crc(g_666.f3, "g_666.f3", print_hash_value);
    transparent_crc(g_666.f4, "g_666.f4", print_hash_value);
    transparent_crc(g_666.f5, "g_666.f5", print_hash_value);
    transparent_crc(g_666.f6, "g_666.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
