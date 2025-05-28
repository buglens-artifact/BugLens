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
   const unsigned short f1;
   const volatile int f2;
   unsigned short f3;
   const char f4;
   unsigned f5;
   volatile short f6;
   const volatile unsigned f7;
   char f8;
   const unsigned char f9;
};

struct S1 {
   short f0;
   volatile unsigned short f1;
   volatile short f2;
   const unsigned short f3;
   volatile struct S0 f4;
   const volatile char f5;
   struct S0 f6;
   const char f7;
   unsigned f8;
};

struct S2 {
   volatile short f0;
   volatile struct S0 f1;
   volatile char f2;
   volatile int f3;
   volatile unsigned short f4;
   char f5;
   unsigned f6;
   unsigned short f7;
   struct S0 f8;
};

struct S3 {
   unsigned f0;
   const unsigned short f1;
   unsigned short f2;
   const volatile int f3;
   volatile unsigned short f4;
   int f5;
};


static unsigned g_18 = 4UL;
static int * volatile g_40 = (void*)0;
static int g_42 = 7L;
static int * volatile g_41 = &g_42;
static int *g_75 = &g_42;
static int ** volatile g_74 = &g_75;
static struct S2 g_83 = {0x428AL,{0xABE65260L,0xBDE5L,0L,0xAB1AL,0xF1L,0xF3F2C75BL,0L,4294967295UL,1L,0xDCL},0xD5L,1L,0x192EL,0x5DL,1UL,0x4D75L,{1UL,65530UL,1L,0UL,0L,0x5A03F751L,0xD964L,0x00D43E6BL,0xC5L,0xECL}};
static int g_92 = 0x643AD1FFL;
static int * volatile g_95 = &g_92;
static volatile struct S3 g_141 = {0x48FED42CL,0x8528L,0xCD20L,0x8979A2FCL,65527UL,0x8EFA3C6AL};
static volatile struct S3 * volatile g_140 = &g_141;
static volatile struct S3 *g_151 = &g_141;
static volatile struct S3 ** volatile g_150 = &g_151;
static const struct S0 *g_154 = &g_83.f8;
static const struct S0 ** volatile g_153 = &g_154;
static const struct S0 **g_158 = &g_154;
static const struct S0 *** const volatile g_157 = &g_158;
static int ** volatile g_160 = &g_75;
static int * volatile g_161 = (void*)0;
static struct S2 *g_174 = (void*)0;
static struct S2 ** volatile g_173 = &g_174;
static int g_198 = (-3L);
static struct S3 g_215 = {0x55D3BE87L,65535UL,0x6FC2L,1L,1UL,0xC7E2C901L};
static struct S0 g_223 = {6UL,65532UL,1L,0x4742L,0xAFL,0xCB2317F3L,1L,4294967295UL,9L,0xAEL};
static struct S0 g_225 = {0xB2B15E5CL,0UL,0x769F214EL,65535UL,0x5BL,4294967290UL,0xBFC3L,1UL,-6L,1UL};
static volatile struct S1 g_264 = {-10L,0xC909L,0x01FCL,0xC820L,{0xCD84E662L,0UL,0L,1UL,0x41L,0UL,0L,4294967295UL,-1L,255UL},-1L,{0x8C75D323L,1UL,0xE8C1A8F9L,0x7999L,0xF8L,0x330E336DL,0L,0x24BBF924L,0x5EL,253UL},-8L,1UL};
static const volatile struct S1 *g_263 = &g_264;
static struct S2 g_289 = {0xF270L,{0UL,65533UL,0L,0xC0E9L,0x9CL,0xF9E24AC8L,2L,4294967295UL,0xD2L,255UL},0x81L,0L,65532UL,0L,18446744073709551615UL,0x174CL,{0xEB8A0FC8L,1UL,7L,0x7705L,0xEAL,2UL,1L,4294967286UL,0x4BL,0x82L}};
static struct S1 g_295 = {0xBA7BL,0x0661L,4L,0UL,{0x7CD90A56L,0x7EC7L,-1L,1UL,0x24L,7UL,1L,0x4CDD8667L,-9L,0x9EL},0x12L,{1UL,0x1AE2L,0x18014C4CL,0x2631L,0x32L,0x69CC728FL,0xA6B9L,0x0243BE30L,-8L,1UL},-1L,1UL};
static short g_302 = 0x55EAL;
static const struct S0 *** volatile g_303 = &g_158;
static struct S0 g_318 = {0x8F23A3FDL,0xDEE8L,0x27D9B145L,0xDAEEL,0xFFL,0UL,6L,0x14CCE56EL,-1L,0x75L};
static unsigned char g_349 = 0x45L;
static struct S2 g_352 = {2L,{0xEB1D1E02L,0UL,-7L,0x0CEAL,0xF1L,4294967291UL,0x3151L,0x496369D7L,-8L,7UL},0xE8L,1L,65528UL,8L,0xDE8332B8L,4UL,{0xAF65337CL,4UL,1L,0x9485L,5L,7UL,0x9572L,4294967287UL,-3L,0x91L}};
static int **g_361 = &g_75;
static int *** volatile g_360 = &g_361;
static struct S3 *g_364 = &g_215;
static struct S3 ** volatile g_363 = &g_364;
static int g_369 = 9L;
static int g_371 = (-7L);
static int * const g_370 = &g_371;
static struct S3 ** volatile g_375 = &g_364;
static unsigned char g_381 = 254UL;
static struct S1 g_509 = {-1L,1UL,1L,65527UL,{0x78BF05DAL,0UL,-9L,0x8A6AL,1L,0xEDE39CF4L,0xC85AL,9UL,0x6EL,255UL},-1L,{0xF3D4EFF0L,65535UL,0x593CC9B5L,0UL,0L,0x2EA1EFF7L,1L,0xDBDBB795L,0x9AL,251UL},-1L,9UL};
static struct S1 *g_508 = &g_509;
static volatile struct S1 *g_542 = &g_264;
static volatile struct S1 ** volatile g_541 = &g_542;
static struct S3 ** const volatile g_601 = &g_364;
static const struct S1 g_626 = {0xE1CEL,65529UL,0x4313L,0x6BCCL,{4UL,0xAD79L,0x63D44AFAL,65529UL,0L,0xB7484187L,0xCFE3L,1UL,0x71L,1UL},1L,{0x57BF9CFAL,0x98CFL,0xF19FFF15L,65535UL,0x92L,0xFCE7FC3DL,0x2F16L,1UL,0xFFL,9UL},0x18L,4UL};
static const struct S0 g_633 = {0UL,65529UL,0L,0x620CL,0xCBL,0x86884888L,0x843BL,0xB653A8C3L,0L,255UL};
static volatile struct S3 ** volatile g_645 = &g_151;
static unsigned g_668 = 0UL;



static const struct S1 func_1(void);
static short func_4(unsigned p_5, unsigned p_6, int p_7);
static char func_12(char p_13, int p_14, unsigned char p_15, int p_16, unsigned p_17);
static short func_28(unsigned short p_29, unsigned p_30);
static int func_43(short p_44, int * const p_45, int * const p_46);
static int * func_47(short p_48, unsigned char p_49);
static unsigned func_56(int * p_57, int * p_58, int * p_59, const short p_60, unsigned short p_61);
static int * func_62(const char p_63, int * p_64);
static int * func_65(unsigned short p_66, int p_67);
static short func_68(int p_69, unsigned short p_70, int * const p_71, short p_72);
static const struct S1 func_1(void)
{
    unsigned char l_25 = 0x0EL;
    unsigned char l_33 = 1UL;
    int l_380 = 0xC8AFDABBL;
    unsigned l_484 = 0x43158B2CL;
    short l_485 = 1L;
    struct S1 **l_623 = &g_508;
    unsigned char l_634 = 0x83L;
    unsigned l_635 = 9UL;
    char l_670 = 0L;
    int *l_680 = &g_371;
    int **l_682 = &l_680;
    (*g_370) = ((safe_lshift_func_uint8_t_u_u((func_4((safe_lshift_func_int16_t_s_s((((+((safe_rshift_func_int8_t_s_u(func_12(g_18, (safe_sub_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((((g_18 & (l_25 && g_18)) ^ ((((0x3EL == (g_18 ^ (g_18 & (safe_rshift_func_int16_t_s_u(func_28((safe_add_func_uint8_t_u_u((l_25 ^ l_25), l_33)), l_25), 14))))) || (*g_41)) & 255UL) <= (-3L))) | l_33) | (-6L)), 0L)), g_289.f8.f5)) <= l_380), l_380)), g_381, g_352.f8.f9, g_223.f9), l_380)) <= l_484)) < g_83.f8.f1) == 0xA39AL), g_83.f5)), g_83.f8.f9, l_485) || l_380), 5)) | l_484);

    ;
    ;
    if ((l_380 < (l_623 == l_623)))
    {
        struct S2 **l_624 = &g_174;
        (*l_624) = (void*)0;
    }
    else
    {
        char l_625 = 0x31L;
        const struct S0 *l_632 = &g_633;
        int * const l_644 = &g_371;
        int *l_646 = &l_380;
        const unsigned l_657 = 0xFB6AB543L;
        short l_681 = 0xF5E9L;
        if (l_625)
        {
            return g_626;
        }
        else
        {
            int **l_627 = &g_75;
            unsigned l_667 = 18446744073709551611UL;
            int l_669 = 0xB2AD70F7L;
            (*l_627) = func_47(g_352.f0, g_83.f8.f8);

            ;
            ;
            ;

            if ((g_626.f4.f6 | (+((safe_sub_func_uint32_t_u_u(g_381, (((l_625 | (g_289.f8.f0 == ((safe_lshift_func_uint16_t_u_s((g_295.f6.f5 >= 0x4025L), 5)) ^ (((l_25 | ((*g_158) == l_632)) & 65535UL) & g_371)))) || l_634) != l_625))) | l_634))))
            {
                (*g_370) = l_635;
                if (((safe_unary_minus_func_uint8_t_u((l_635 != g_295.f4.f8))) >= (*g_370)))
                {
                    const struct S1 *l_643 = &g_509;
                    int l_651 = (-4L);
                    unsigned l_654 = 0x191F61F6L;
                    (*l_627) = (void*)0;

                    ;
                    if ((safe_lshift_func_uint16_t_u_s(func_28((safe_add_func_uint32_t_u_u(3UL, 0L)), (safe_add_func_uint32_t_u_u(0xF6B23A2AL, ((func_68(((void*)0 == l_643), (g_289.f1.f4 >= l_625), l_644, (*l_644)) && 0UL) && 0x7C888965L)))), l_485)))
                    {
                        (*l_644) = ((void*)0 == g_645);
                        (*l_627) = &l_380;

                        ;
                        return (*g_542);


                    }
                    else
                    {
                        (*g_75) &= (((*l_644) > g_83.f3) <= g_295.f8);
                        (*l_627) = l_646;

                        ;
                    }

                    ;
                    (*g_75) = (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_651 >= (-7L)), (0UL && (safe_sub_func_int16_t_s_s(l_654, ((**l_627) < (safe_add_func_uint16_t_u_u(l_657, (safe_add_func_int32_t_s_s(8L, (safe_lshift_func_uint16_t_u_s(l_635, l_651)))))))))))), 9L));
                }
                else
                {
                    short l_662 = 0x8B19L;
                    (*l_644) &= (l_662 < (func_68((safe_sub_func_uint32_t_u_u(((*l_646) > ((-1L) || (g_295.f0 | ((*g_363) != (void*)0)))), l_667)), g_668, &g_92, l_669) || l_484));

                    ;
                }

                ;
                (*g_370) = (!(func_56((*l_627), func_65(g_141.f2, (**l_627)), &g_42, l_484, g_626.f6.f0) > l_670));
            }
            else
            {
                unsigned char l_675 = 0xD6L;
                (*l_644) |= l_25;
                (*l_646) |= ((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(g_352.f1.f4, ((~l_675) & g_509.f6.f0))), g_633.f8)) | g_318.f9);
                return (*g_263);
            }

            ;
            (*l_627) = (*g_74);
            for (g_381 = 0; (g_381 <= 48); ++g_381)
            {
                for (g_509.f6.f3 = 0; (g_509.f6.f3 >= 39); g_509.f6.f3 = safe_add_func_uint8_t_u_u(g_509.f6.f3, 7))
                {
                    if ((0xDB6F11A6L < g_626.f4.f2))
                    {
                        (*l_627) = l_680;

                        ;
                    }
                    else
                    {
                        (*g_75) = (g_215.f3 < 0UL);
                    }
                    if ((*g_41))
                        continue;
                    if (l_681)
                    {
                        (*g_173) = (*g_173);
                        (*l_627) = (*g_160);
                    }
                    else
                    {
                        (*l_680) = (*g_95);
                        if ((*l_644))
                            break;
                        (*g_370) &= ((*g_157) != (void*)0);
                    }
                    if ((*g_75))
                        break;
                }
            }

            ;
        }

        ;
        ;
        ;

    }

    ;
    ;
    ;

    (*l_682) = &l_380;

    ;
    return (*g_263);


}







static short func_4(unsigned p_5, unsigned p_6, int p_7)
{
    int ***l_486 = &g_361;
    struct S0 *l_487 = &g_83.f8;
    int l_488 = (-1L);
    struct S0 ** const l_503 = (void*)0;
    struct S0 ** const *l_502 = &l_503;
    unsigned short l_504 = 65532UL;
    const struct S2 **l_561 = (void*)0;
    const struct S2 ***l_560 = &l_561;
    struct S3 *l_600 = &g_215;
    (*g_370) = (l_486 != &g_74);
    (*g_370) = (-8L);
    if ((g_223.f6 || g_289.f3))
    {
        (*g_158) = l_487;
    }
    else
    {
        struct S0 **l_501 = &l_487;
        struct S0 ***l_500 = &l_501;
        int l_505 = 0xB2F99BDFL;
        struct S1 *l_507 = (void*)0;
        short l_515 = 0x3F8FL;
        unsigned short l_533 = 65526UL;
        unsigned short l_539 = 0xAD42L;
        int ** const *l_549 = &g_361;
        char l_566 = 1L;
        struct S2 **l_581 = &g_174;
        short l_597 = 0L;
        unsigned l_619 = 0xCC96DE90L;
        l_488 |= (*g_95);
        if (p_5)
        {
            unsigned short l_495 = 0UL;
            int *l_506 = &l_488;
            (*g_361) = func_65(g_215.f1, p_5);
            (*l_506) &= ((safe_sub_func_int16_t_s_s((+(safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((((l_495 <= p_7) == ((func_28((safe_rshift_func_uint8_t_u_u(g_352.f8.f0, 4)), (safe_rshift_func_int8_t_s_s(g_318.f4, l_495))) && p_5) || p_5)) && g_352.f1.f0), l_504)) & l_505), 0xF046565EL))), g_223.f9)) >= (*g_370));
            (*l_506) = l_505;
        }
        else
        {
            g_508 = l_507;

            ;
        }

        ;
        for (g_289.f8.f5 = 16; (g_289.f8.f5 > 6); --g_289.f8.f5)
        {
            unsigned short l_514 = 65534UL;
            int l_516 = 0x554B1301L;
            struct S0 **l_573 = (void*)0;
            (*g_370) &= (-1L);
            l_516 = (254UL & (p_6 == ((safe_lshift_func_int16_t_s_s(l_505, (((+p_7) || ((l_514 ^ (p_7 < g_352.f8.f3)) > g_509.f4.f8)) > l_516))) < l_505)));
            if ((safe_lshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(p_5, (((safe_sub_func_uint32_t_u_u(p_5, 2UL)) && ((safe_mod_func_int16_t_s_s(g_83.f8.f8, (safe_rshift_func_uint16_t_u_s(0x4A7BL, (safe_add_func_uint16_t_u_u(l_505, p_7)))))) & p_5)) || p_6))) > l_514), 5)))
            {
                int l_534 = 0x09303A34L;
                int *l_537 = &l_516;
                short l_538 = 1L;
                if ((l_533 != ((l_516 || 7UL) | l_516)))
                {
                    int ** const *l_550 = (void*)0;
                    int l_551 = 0x1E50EE93L;
                    if ((l_514 && (0x74L || l_533)))
                    {
                        volatile struct S1 **l_540 = (void*)0;
                        if (p_7)
                            break;
                        (*l_537) = 0x634743B2L;
                        (*g_541) = &g_264;
                    }
                    else
                    {
                        (**l_486) = (**l_486);
                        l_551 ^= (safe_lshift_func_int16_t_s_u(p_6, func_68((safe_rshift_func_int8_t_s_s(g_215.f1, 3)), func_43((((l_516 < g_83.f1.f3) || (l_549 != l_550)) & g_295.f7), (*g_361), l_537), (**l_549), g_509.f6.f5)));

                        ;
                        if ((***g_360))
                            continue;
                    }
                    l_516 = (safe_rshift_func_int16_t_s_s(((((((safe_lshift_func_uint8_t_u_u(p_6, 5)) <= (g_352.f1.f1 & (((safe_add_func_int32_t_s_s(0x80E4268DL, (g_289.f6 < (+(safe_mod_func_uint32_t_u_u(((l_560 != (void*)0) && ((safe_sub_func_uint16_t_u_u(0x3D14L, (l_516 < ((safe_add_func_uint8_t_u_u(((p_7 >= 0x080C145BL) >= 0x6058L), p_6)) || g_295.f6.f3)))) == 1UL)), (*g_370))))))) ^ g_18) >= (-1L)))) == g_352.f8.f5) ^ 0xF71369ECL) <= 0xC097L) < g_289.f5), 6));
                    (*g_370) = p_7;
                }
                else
                {
                    const unsigned l_578 = 0xDF798552L;
                    int ***l_582 = &g_361;
                    if (l_566)
                    {
                        int l_567 = 0x0E85511FL;
                        return l_567;
                    }
                    else
                    {
                        unsigned short l_568 = 65535UL;
                        (*l_537) = func_43(g_295.f6.f6, (**l_549), l_537);
                        if (p_7)
                            continue;
                        (*l_537) = ((l_568 && (safe_rshift_func_uint8_t_u_s(g_509.f0, (p_6 & ((void*)0 != l_573))))) < (safe_lshift_func_int8_t_s_s(g_264.f8, (((safe_rshift_func_int16_t_s_u((-3L), (0xE599L <= g_42))) > p_7) == p_6))));
                        (*g_370) ^= p_6;
                    }
                    if ((*g_95))
                        break;
                    if (l_578)
                        continue;
                    for (g_289.f6 = 0; (g_289.f6 >= 1); ++g_289.f6)
                    {
                        (*l_537) &= p_6;
                        (*g_361) = func_62(((l_581 == (void*)0) && ((void*)0 != l_582)), l_537);
                        (*g_361) = (**l_582);
                    }

                    ;
                }

                ;
                (*g_370) = (((func_43(func_68(((safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s((((p_7 & ((func_28(((safe_rshift_func_int8_t_s_s((0x0688L != (0L <= 1UL)), 6)) ^ (safe_mod_func_uint8_t_u_u((func_28(((p_6 >= (g_83.f1.f2 >= (*l_537))) != (0x78L == (65526UL == g_289.f8.f8))), g_509.f6.f1) ^ p_5), (-2L)))), p_5) >= p_6) > (*l_537))) | p_6) ^ g_225.f8), 7)) <= 0x4918L) < l_504), 10)) > g_18), (*l_537), l_537, p_5), &l_516, l_537) || 253UL) > 0x7DABL) ^ 0x0AL);

                ;
                (*g_75) &= (safe_rshift_func_int16_t_s_s((!(((((*l_537) && p_5) == (safe_rshift_func_uint16_t_u_u((5UL != (*l_537)), l_597))) && 65535UL) <= (safe_mod_func_int8_t_s_s((+(*l_537)), g_223.f5)))), g_289.f7));
            }
            else
            {
                int *l_621 = &g_371;
                (*g_601) = l_600;
                for (g_295.f6.f5 = 28; (g_295.f6.f5 != 20); --g_295.f6.f5)
                {
                    unsigned l_611 = 0x8F505825L;
                    int l_618 = (-1L);
                    struct S3 *l_620 = &g_215;
                    int *l_622 = &g_92;
                    if (((safe_sub_func_uint32_t_u_u(func_28((safe_rshift_func_uint16_t_u_s((((l_514 != ((safe_unary_minus_func_int32_t_s((*g_370))) <= l_611)) && g_289.f1.f5) > (safe_lshift_func_int16_t_s_s((0x37453181L < ((safe_mul_func_int16_t_s_s(g_289.f7, (l_516 <= ((safe_lshift_func_uint16_t_u_s(p_7, 11)) || ((*g_370) || 0x9C6E8C28L))))) | g_198)), p_7))), 6)), p_5), g_289.f8.f8)) <= l_618))
                    {
                        (**l_549) = func_65(l_619, (l_600 == l_620));
                    }
                    else
                    {
                        l_621 = (**g_360);

                        ;
                    }

                    ;
                    (*g_361) = l_622;

                    ;
                    return g_225.f1;
                }
            }
        }

        ;
    }

    ;
    ;
    (**l_486) = (**l_486);
    return p_6;
}







static char func_12(char p_13, int p_14, unsigned char p_15, int p_16, unsigned p_17)
{
    unsigned l_384 = 18446744073709551609UL;
    struct S1 *l_386 = (void*)0;
    struct S1 **l_385 = &l_386;
    int l_402 = 0L;
    int l_473 = 1L;
    struct S2 * const l_476 = &g_352;
    unsigned char l_483 = 0xFDL;
    if (((safe_rshift_func_int16_t_s_u(func_28(p_16, l_384), (~p_15))) & (((p_16 && (&g_263 != l_385)) ^ (((p_16 || g_289.f7) > l_384) && p_17)) | g_289.f8.f0)))
    {
        int ***l_391 = (void*)0;
        unsigned short l_396 = 0x1F83L;
        unsigned l_397 = 0UL;
        const struct S0 *l_400 = (void*)0;
        unsigned l_401 = 0xF00F43E6L;
        struct S2 *** const l_426 = (void*)0;
        if ((safe_add_func_uint32_t_u_u(l_384, (safe_add_func_int8_t_s_s(func_43((l_391 == l_391), (*g_74), (*g_361)), (((safe_add_func_uint8_t_u_u((p_13 >= (p_17 == (safe_add_func_int32_t_s_s((((p_13 != 0xCDL) ^ p_14) < g_318.f0), 3UL)))), l_384)) >= g_352.f5) == l_396))))))
        {
            int *l_442 = (void*)0;
            if (l_397)
            {
                for (g_295.f0 = (-26); (g_295.f0 < 6); g_295.f0++)
                {
                    if (p_16)
                        break;
                    (**g_361) ^= ((g_141.f2 & 0x9FL) | 0xEFL);
                }
                (*g_75) = (l_402 && l_384);
            }
            else
            {
                char l_428 = 0xFDL;
                for (g_225.f3 = 0; (g_225.f3 <= 10); g_225.f3 = safe_add_func_uint8_t_u_u(g_225.f3, 1))
                {
                    unsigned short l_427 = 65535UL;
                    int *l_429 = (void*)0;
                    for (g_352.f8.f8 = 14; (g_352.f8.f8 == (-28)); g_352.f8.f8 = safe_sub_func_int32_t_s_s(g_352.f8.f8, 4))
                    {
                        l_429 = func_65((p_13 > (safe_lshift_func_int16_t_s_u((p_13 != (((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((0x37353A07L == (safe_lshift_func_uint8_t_u_s(p_17, ((safe_unary_minus_func_uint16_t_u((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(func_68(p_16, ((g_83.f1.f2 ^ g_349) || (safe_mod_func_uint8_t_u_u((((void*)0 == l_426) && 1UL), g_83.f0))), (*g_361), p_13), 15)), g_318.f0)), g_215.f5)) || g_264.f4.f9) > 8L), l_427)))) && l_428)))), 1)), 1)) & (-1L)) == p_14)), 3))), l_427);

                        ;
                        (*g_158) = (**g_303);
                    }

                    ;
                    if ((safe_lshift_func_uint16_t_u_u(p_13, (safe_mod_func_int32_t_s_s((((void*)0 != &l_400) > (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((((+p_13) | 0xC73C4E1CL) ^ (safe_rshift_func_int8_t_s_s(l_402, g_223.f0))), 3L)) >= p_17), p_14)), g_223.f3))), l_384)))))
                    {
                        struct S2 **l_445 = &g_174;
                        (*g_370) = (p_13 != ((**g_303) != (void*)0));
                        (*g_75) = ((&g_174 == l_445) < p_13);
                    }
                    else
                    {
                        unsigned short l_456 = 0UL;
                        (*g_75) ^= (7UL || 0xDAF8L);
                        (*g_75) = ((safe_mod_func_uint32_t_u_u((g_141.f5 | ((((((((safe_add_func_uint16_t_u_u((p_13 ^ 0UL), g_289.f8.f8)) > (safe_rshift_func_int16_t_s_s(p_15, (safe_rshift_func_int16_t_s_s(1L, 8))))) >= p_15) | (safe_add_func_int8_t_s_s(p_14, (l_456 != g_92)))) >= g_223.f1) != 0xE933L) != 0xFB6EL) | p_13)), g_83.f7)) == l_428);
                    }
                }
            }
        }
        else
        {
            char l_459 = 0x2AL;
            for (l_384 = 17; (l_384 != 15); --l_384)
            {
                short l_460 = 0x0943L;
                int l_463 = 1L;
                (**g_361) = (0xE0L && (l_459 != (0L ^ 0x202CL)));
                if (((1L ^ 0xF6CB5FA0L) < (l_460 && (safe_mod_func_uint16_t_u_u(((-6L) == 0x4EDDL), l_402)))))
                {
                    (**g_361) &= (!0x4887EBCFL);
                    if ((*g_41))
                    {
                        l_463 = l_460;
                        (*g_361) = (*g_74);
                    }
                    else
                    {
                        (*g_158) = (*g_158);
                    }
                }
                else
                {
                    for (g_352.f8.f3 = 20; (g_352.f8.f3 > 43); ++g_352.f8.f3)
                    {
                        int *l_466 = &g_371;
                        (*g_361) = l_466;

                        ;
                        (*l_466) ^= (p_17 || p_16);
                    }
                }
            }

            ;
        }

        ;
    }
    else
    {
        (*g_370) = p_13;
        (*g_75) = (***g_360);
        (**g_361) &= 0L;
    }

    ;
    l_473 = (safe_sub_func_int8_t_s_s(l_384, (safe_rshift_func_int8_t_s_s(p_16, (((safe_mod_func_int32_t_s_s((***g_360), (*g_75))) != (p_16 != 0x22L)) & 0UL)))));
    for (g_352.f8.f8 = 0; (g_352.f8.f8 == (-15)); g_352.f8.f8 = safe_sub_func_uint32_t_u_u(g_352.f8.f8, 6))
    {
        struct S0 *l_481 = (void*)0;
        struct S0 **l_480 = &l_481;
        struct S0 *** const l_479 = &l_480;
        int l_482 = 0xB7C7D884L;
        (**g_361) = func_28(((void*)0 != l_476), (safe_mod_func_int32_t_s_s((&g_158 != l_479), ((&g_153 != &l_480) & l_482))));
        (*g_75) |= l_473;
    }
    (*g_361) = (void*)0;

    ;
    return l_483;
}







static short func_28(unsigned short p_29, unsigned p_30)
{
    unsigned short l_38 = 3UL;
    for (p_30 = 0; (p_30 < 40); ++p_30)
    {
        int l_50 = (-1L);
        for (p_29 = 9; (p_29 < 21); ++p_29)
        {
            unsigned l_39 = 1UL;
            l_38 = p_29;
            (*g_41) ^= l_39;
            if (p_29)
                break;
        }
    }
    return p_30;
}







static int func_43(short p_44, int * const p_45, int * const p_46)
{
    const char l_379 = (-7L);
    for (g_371 = 0; (g_371 == (-24)); g_371--)
    {
        struct S3 *l_374 = &g_215;
        int l_376 = 0x096BAAEFL;
        (*g_375) = l_374;
        return l_376;
    }
    for (g_289.f8.f3 = (-20); (g_289.f8.f3 >= 26); g_289.f8.f3 = safe_add_func_uint16_t_u_u(g_289.f8.f3, 6))
    {
        (*p_46) ^= ((g_352.f8.f5 | l_379) == 0x98L);
    }
    return (*g_95);
}







static int * func_47(short p_48, unsigned char p_49)
{
    char l_53 = 1L;
    int * const l_73 = (void*)0;
    int *l_155 = &g_42;
    int *l_236 = &g_42;
    struct S0 **l_269 = (void*)0;
    struct S0 ***l_268 = &l_269;
    int l_283 = 0xDCF6FB75L;
    unsigned short l_311 = 0UL;
    struct S0 *l_359 = (void*)0;
    (*l_155) = ((safe_sub_func_int8_t_s_s(((l_53 || ((safe_mod_func_uint8_t_u_u(g_42, g_18)) == (!func_56(func_62(p_49, func_65(l_53, (p_48 <= func_68(p_48, p_48, l_73, g_42)))), &g_42, l_155, g_83.f7, g_83.f7)))) <= p_48), 8UL)) == p_49);

    ;
    if ((*g_95))
    {
        struct S0 *l_224 = &g_225;
        int * const *l_227 = &g_75;
        int *l_230 = &g_198;
        unsigned short l_241 = 65535UL;
        short l_275 = 0xCDD1L;
        const unsigned l_328 = 0UL;
        unsigned l_329 = 0xC200E4AEL;
        unsigned l_348 = 18446744073709551615UL;
        struct S2 *l_350 = &g_83;
        if (p_48)
        {
            int **l_202 = &g_75;
            const struct S3 *l_214 = &g_215;
            int l_249 = 0xC49979F6L;
            struct S2 **l_258 = (void*)0;
            struct S2 *l_288 = &g_289;
            struct S1 *l_307 = (void*)0;
            struct S1 **l_306 = &l_307;
            (*l_202) = (void*)0;

            ;
            for (g_83.f8.f8 = 0; (g_83.f8.f8 == (-26)); g_83.f8.f8 = safe_sub_func_int32_t_s_s(g_83.f8.f8, 8))
            {
                unsigned char l_209 = 5UL;
                struct S0 *l_222 = &g_223;
                (*l_155) = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(g_83.f8.f3, func_68(l_209, (g_83.f8.f9 ^ 5UL), (*g_160), g_83.f7))), 7));

                ;
                for (g_83.f8.f3 = (-11); (g_83.f8.f3 != 40); g_83.f8.f3++)
                {
                    int * const l_226 = &g_92;
                    (*l_155) = (safe_lshift_func_uint16_t_u_s(((p_49 & ((*g_150) == l_214)) > ((safe_sub_func_uint8_t_u_u(p_49, p_49)) < ((safe_add_func_uint8_t_u_u((g_42 & 0xAFL), (safe_rshift_func_int8_t_s_s((l_222 == l_224), 4)))) > g_83.f8.f0))), 6));
                    (*l_226) = (func_68((*l_155), g_83.f8.f9, l_226, p_49) || func_68(((((void*)0 == l_227) < (*l_226)) && ((void*)0 != l_202)), g_83.f8.f7, &g_42, p_48));
                    (**l_202) = (0UL && (safe_mod_func_uint8_t_u_u((&l_155 != &g_161), g_225.f8)));
                    return l_230;


                }
            }

            ;
            for (g_215.f2 = 0; (g_215.f2 > 25); g_215.f2 = safe_add_func_int16_t_s_s(g_215.f2, 3))
            {
                int *l_233 = &g_42;
                struct S0 * const *l_271 = (void*)0;
                struct S0 * const **l_270 = &l_271;
                if ((func_56(func_65(p_49, (*g_41)), l_233, &g_92, g_225.f9, p_49) ^ g_215.f5))
                {
                    short l_248 = 0x55B5L;
                    for (g_223.f8 = (-4); (g_223.f8 > (-21)); g_223.f8 = safe_sub_func_int16_t_s_s(g_223.f8, 1))
                    {
                        l_249 &= (func_56((*g_74), &g_42, l_236, ((safe_rshift_func_uint8_t_u_s(255UL, (safe_mod_func_uint16_t_u_u(l_241, (safe_add_func_int32_t_s_s(0xF74C4BF4L, (safe_rshift_func_int16_t_s_s((+(safe_rshift_func_uint16_t_u_u(g_83.f8.f4, 7))), p_48)))))))) > l_248), (*l_230)) < 0x4EL);
                        (*l_155) = ((0UL < ((safe_rshift_func_uint8_t_u_u(247UL, 0)) & p_48)) && p_48);
                        (*l_230) = p_49;
                    }
                    (*l_155) ^= (safe_rshift_func_uint16_t_u_s(g_83.f8.f5, 8));
                }
                else
                {
                    struct S2 ***l_257 = (void*)0;
                    if (p_48)
                    {
                        int *l_254 = &g_198;
                        (*l_202) = l_254;

                        ;
                    }
                    else
                    {
                        (*l_202) = (*g_160);
                        return (*g_160);


                    }

                    ;
                    for (g_83.f6 = (-21); (g_83.f6 >= 30); g_83.f6++)
                    {
                        if ((**g_160))
                            break;
                    }
                    if (p_48)
                        continue;
                    l_258 = (void*)0;
                }
                for (g_225.f3 = (-5); (g_225.f3 < 33); g_225.f3 = safe_add_func_uint16_t_u_u(g_225.f3, 3))
                {
                    return l_233;


                }
                for (g_215.f5 = 0; (g_215.f5 > (-2)); --g_215.f5)
                {
                    const volatile struct S1 **l_265 = &g_263;
                    int l_274 = 0x80D2B85DL;
                    (*l_265) = g_263;
                    (*l_202) = (*g_74);
                    if ((safe_sub_func_uint8_t_u_u(((((l_268 == l_270) >= p_48) | (((func_68(l_274, g_264.f4.f4, &g_198, l_275) & ((*l_233) == 0xA45ED285L)) || 3L) >= 7L)) > p_48), (*l_155))))
                    {
                        int l_276 = 0xB2F59E0DL;
                        (*l_236) = l_276;
                        (*l_155) = ((1UL != p_49) >= ((safe_rshift_func_uint16_t_u_u(p_48, 7)) >= ((safe_mod_func_int8_t_s_s((p_49 <= func_56(l_230, (*g_74), &g_198, g_223.f3, (safe_add_func_int16_t_s_s(g_215.f0, g_215.f5)))), 0xB9L)) <= l_274)));
                        (*g_160) = func_65(((*l_236) < l_283), (safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_s(l_274, 15)))));
                    }
                    else
                    {
                        struct S2 **l_287 = (void*)0;
                        struct S1 *l_294 = &g_295;
                        int l_301 = (-1L);
                        l_288 = (void*)0;

                        ;
                        (*l_155) ^= (safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((p_48 < (((void*)0 == (*g_150)) < (g_83.f8.f0 | p_48))) && ((void*)0 != l_294)), l_274)), 1));
                        l_274 = (safe_unary_minus_func_uint32_t_u(func_68((**g_160), p_48, &l_274, (~(((void*)0 != g_174) ^ (p_48 & (0x3EB804E7L || (0xC0E4DF45L <= (safe_mod_func_uint16_t_u_u(((((safe_mod_func_int8_t_s_s(l_301, p_48)) >= g_289.f8.f8) <= g_302) >= p_48), l_301))))))))));
                    }

                    ;
                    (*l_202) = l_233;
                }
                (*g_303) = (*g_157);
            }

            ;
            ;
            if ((safe_sub_func_uint8_t_u_u((&g_263 != l_306), p_49)))
            {
                unsigned l_308 = 0xEB418FD8L;
                struct S0 *l_317 = &g_318;
                int *l_322 = &g_198;
                struct S2 *l_351 = &g_352;
                if ((l_308 < (p_49 >= ((((safe_add_func_uint16_t_u_u(((*g_95) >= p_48), 0x25A0L)) == 0xA7L) ^ p_48) > g_225.f1))))
                {
                    short l_319 = 5L;
                    if ((*l_236))
                    {
                        int *l_316 = &g_198;
                        (*l_236) = (safe_rshift_func_uint8_t_u_u((0xE5621D0CL != ((l_224 != (void*)0) || (safe_lshift_func_int8_t_s_u(((*l_230) & (*l_155)), p_48)))), 0));
                        l_230 = l_322;
                    }
                    else
                    {
                        int l_323 = 0x99F6EB00L;
                        (*l_306) = &g_295;

                        ;
                        (*l_322) |= l_319;
                        (*l_155) |= p_48;
                        (*l_230) = ((l_323 <= func_68((*l_322), (safe_rshift_func_int8_t_s_u(0xEEL, 0)), (*g_160), (*l_322))) > p_48);

                        ;
                    }

                    ;
                    (*l_155) = ((func_68(l_319, l_319, (*g_160), (((safe_add_func_uint16_t_u_u(g_215.f5, g_289.f8.f3)) | p_49) & l_328)) != g_295.f0) == l_329);

                    ;
                    (*l_202) = &l_283;

                    ;
                }
                else
                {
                    (*g_158) = (*g_153);
                    return (*g_74);


                }

                ;
                ;
                for (g_83.f5 = 0; (g_83.f5 >= (-1)); g_83.f5 = safe_sub_func_int32_t_s_s(g_83.f5, 9))
                {
                    (*g_158) = l_224;

                    ;
                }

                ;
                g_349 ^= ((1UL < (((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(g_295.f6.f0, (safe_sub_func_int32_t_s_s(((**g_160) || ((*l_236) | ((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(0xD9598FA4L, (safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((func_68((p_49 >= 253UL), ((p_48 > 0x8C49F85FL) <= (-4L)), (*l_227), (**l_227)) >= p_48), g_223.f0)) >= 0x844AL), (*l_322))) == 1L), 7)))), p_48)) > g_223.f1))), p_48)))) == p_49), l_348)) >= p_48) <= g_83.f8.f4)) > (*l_322));

                ;
                l_351 = l_350;

                ;
            }
            else
            {
                volatile struct S3 **l_356 = &g_151;
                volatile struct S3 ***l_355 = &l_356;
                for (g_289.f8.f8 = 3; (g_289.f8.f8 != 24); g_289.f8.f8++)
                {
                    (*l_236) ^= 0x742C0025L;
                    (*l_230) ^= (*g_41);
                    (*l_155) = 0x46167307L;
                }
                (*l_355) = &g_151;
                (*l_202) = (*l_202);
            }

            ;
            ;
            ;
        }
        else
        {
            int *l_357 = &g_42;
            unsigned char l_358 = 254UL;
            l_358 ^= func_56(func_65(g_264.f4.f7, (*l_236)), l_357, &g_92, (((-1L) && p_49) <= (*l_155)), g_295.f6.f9);
            l_359 = l_359;
        }

        ;
        ;
        (*g_360) = &l_230;

        ;
        return l_230;




    }
    else
    {
        struct S3 *l_362 = &g_215;
        (*g_363) = l_362;
    }
    (*l_155) = (g_295.f4.f7 && ((+(*g_95)) <= (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(g_369, 2)) & (*l_155)), 1UL))));
    return (**g_360);


}







static unsigned func_56(int * p_57, int * p_58, int * p_59, const short p_60, unsigned short p_61)
{
    int *l_159 = &g_42;
    char l_194 = 0x6BL;
    if ((*g_95))
    {
        int l_156 = 0x8B9C3B6FL;
        int l_162 = 0xD68FCE54L;
        if (l_156)
        {
            return g_42;
        }
        else
        {
            (*g_157) = &g_154;
        }
        (*g_160) = l_159;

        ;
        if ((*l_159))
        {
            l_162 |= (*p_59);
        }
        else
        {
            const unsigned l_165 = 0UL;
            struct S0 *l_167 = &g_83.f8;
            struct S0 **l_166 = &l_167;
            int *l_168 = &g_92;
            (*l_168) |= (safe_sub_func_uint8_t_u_u(l_165, (l_165 > ((void*)0 == l_166))));
            if ((0UL | p_60))
            {
                int *l_169 = &l_162;
                (*l_169) |= (*g_95);
            }
            else
            {
                short l_172 = (-8L);
                l_172 ^= ((0L == (safe_rshift_func_uint16_t_u_u(p_60, 3))) >= 0x463FL);
                (*l_168) ^= (*p_58);
                (*g_173) = &g_83;

                ;
                for (l_162 = 13; (l_162 > 21); l_162 = safe_add_func_uint16_t_u_u(l_162, 5))
                {
                    return p_60;
                }
            }
        }
    }
    else
    {
        char l_181 = 0xECL;
        int *l_201 = &g_198;
        for (g_83.f8.f8 = 7; (g_83.f8.f8 <= (-2)); g_83.f8.f8--)
        {
            short l_182 = 0xFC2BL;
            int *l_189 = &g_92;
            int *l_197 = &g_198;
            const struct S0 ***l_199 = &g_158;
            int **l_200 = &l_197;
            (*l_189) = (((((safe_lshift_func_int8_t_s_u((p_61 != func_68(l_181, p_61, func_65(g_141.f2, l_182), (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(l_182, p_61)), ((safe_mod_func_int16_t_s_s(((g_83.f8.f4 != l_182) != g_83.f8.f3), p_61)) <= l_182))))), 6)) && 0x83L) | (-1L)) == 5UL) > l_182);

            ;
            (*l_197) &= (l_181 > (safe_add_func_int8_t_s_s(func_68((safe_lshift_func_uint8_t_u_u((l_194 | 0xA40BL), 1)), g_83.f1.f2, p_58, (g_42 | p_61)), (safe_sub_func_uint32_t_u_u(((0x8E8CL > g_18) && p_61), g_83.f8.f0)))));
            (*l_199) = (*g_157);
            (*l_200) = func_65(g_83.f1.f8, (*g_75));

            ;
        }
        (*l_201) ^= l_181;
    }
    return g_83.f8.f9;
}







static int * func_62(const char p_63, int * p_64)
{
    unsigned char l_96 = 255UL;
    int **l_122 = &g_75;
    struct S2 *l_126 = &g_83;
    struct S2 * const *l_125 = &l_126;
    const struct S0 *l_152 = &g_83.f8;
    (*g_95) = (p_63 < (safe_sub_func_int16_t_s_s(0x9E4BL, g_83.f8.f5)));
    if (((g_83.f8.f5 <= (l_96 <= ((safe_lshift_func_uint16_t_u_u(g_18, 15)) ^ (+g_83.f8.f0)))) >= (safe_rshift_func_int8_t_s_s(p_63, g_83.f8.f2))))
    {
        unsigned l_105 = 0UL;
        int *l_106 = &g_92;
        int l_119 = 0L;
        (*l_106) |= (safe_rshift_func_uint8_t_u_s((p_63 && g_83.f5), ((safe_mod_func_uint8_t_u_u(g_83.f8.f4, l_105)) || p_63)));
        (*l_106) = (safe_lshift_func_uint16_t_u_s((((*p_64) > (*l_106)) == (safe_rshift_func_uint16_t_u_s(l_96, p_63))), (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(p_63, (((safe_sub_func_uint32_t_u_u(g_18, ((void*)0 != l_106))) <= l_96) || 4UL))), (*l_106))) || 4294967295UL) != 0x61CEL)));
        (*l_106) = (safe_mod_func_uint8_t_u_u((func_68(((*l_106) >= 0xE576L), (*l_106), func_65(l_119, ((+(*l_106)) < 0xE3DAACA8L)), l_96) <= l_96), g_83.f7));

        ;
        if ((safe_lshift_func_int8_t_s_s((((&g_40 == l_122) <= (safe_sub_func_uint32_t_u_u(((void*)0 == l_125), (*g_75)))) ^ ((~(*l_106)) > (*p_64))), 6)))
        {
            for (g_83.f5 = (-2); (g_83.f5 < (-9)); g_83.f5 = safe_sub_func_uint32_t_u_u(g_83.f5, 4))
            {
                int *l_134 = (void*)0;
                for (l_105 = 0; (l_105 <= 38); ++l_105)
                {
                    int *l_135 = (void*)0;
                    for (g_83.f8.f8 = 0; (g_83.f8.f8 == 0); g_83.f8.f8 = safe_add_func_uint32_t_u_u(g_83.f8.f8, 9))
                    {
                        int * const l_133 = &g_42;
                        l_134 = l_133;

                        ;
                        (*l_122) = l_135;

                        ;
                    }
                }

                ;
            }

            ;
            for (l_96 = 26; (l_96 == 40); l_96 = safe_add_func_uint16_t_u_u(l_96, 1))
            {
                for (g_83.f5 = (-27); (g_83.f5 != 1); g_83.f5 = safe_add_func_uint8_t_u_u(g_83.f5, 7))
                {
                    volatile struct S3 * volatile *l_142 = &g_140;
                    (*l_142) = g_140;
                }
                (*g_74) = (void*)0;

                ;
                return (*g_74);


            }
        }
        else
        {
            (*l_122) = (*l_122);
            return (*g_74);


        }

        ;
    }
    else
    {
        int * const l_149 = &g_92;
        for (l_96 = 13; (l_96 >= 14); l_96 = safe_add_func_uint16_t_u_u(l_96, 8))
        {
            for (g_83.f8.f0 = (-16); (g_83.f8.f0 > 59); ++g_83.f8.f0)
            {
                (*l_149) = ((safe_rshift_func_uint16_t_u_s(p_63, 0)) || func_68((*p_64), g_83.f1.f0, l_149, g_83.f6));
            }
            (*g_150) = &g_141;
            (*l_122) = (*l_122);
        }
    }
    (*g_153) = l_152;

    ;
    return p_64;


}







static int * func_65(unsigned short p_66, int p_67)
{
    return (*g_74);


}







static short func_68(int p_69, unsigned short p_70, int * const p_71, short p_72)
{
    unsigned char l_80 = 0x14L;
    struct S2 *l_82 = &g_83;
    struct S2 **l_81 = &l_82;
    int *l_91 = &g_92;
    (*g_74) = &g_42;

    ;
    p_69 = (((void*)0 == (*g_74)) < ((((p_72 == (g_42 | p_69)) ^ ((0x35A08C81L != ((safe_rshift_func_int16_t_s_u(g_18, (safe_add_func_uint32_t_u_u(p_70, (l_80 <= l_80))))) ^ p_69)) == l_80)) == 0xC5L) >= 0UL));
    (*l_81) = (void*)0;

    ;
    (*l_91) = (safe_sub_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((((*g_75) | (p_69 <= (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((6L >= (!p_69)) || ((&p_71 == (void*)0) | ((*g_74) == &g_42))), (*g_75))) == l_80), 0x47L)))) || p_70))), l_80));
    return (*l_91);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_83.f1.f0, "g_83.f1.f0", print_hash_value);
    transparent_crc(g_83.f1.f1, "g_83.f1.f1", print_hash_value);
    transparent_crc(g_83.f1.f2, "g_83.f1.f2", print_hash_value);
    transparent_crc(g_83.f1.f3, "g_83.f1.f3", print_hash_value);
    transparent_crc(g_83.f1.f4, "g_83.f1.f4", print_hash_value);
    transparent_crc(g_83.f1.f5, "g_83.f1.f5", print_hash_value);
    transparent_crc(g_83.f1.f6, "g_83.f1.f6", print_hash_value);
    transparent_crc(g_83.f1.f7, "g_83.f1.f7", print_hash_value);
    transparent_crc(g_83.f1.f8, "g_83.f1.f8", print_hash_value);
    transparent_crc(g_83.f1.f9, "g_83.f1.f9", print_hash_value);
    transparent_crc(g_83.f2, "g_83.f2", print_hash_value);
    transparent_crc(g_83.f3, "g_83.f3", print_hash_value);
    transparent_crc(g_83.f4, "g_83.f4", print_hash_value);
    transparent_crc(g_83.f5, "g_83.f5", print_hash_value);
    transparent_crc(g_83.f6, "g_83.f6", print_hash_value);
    transparent_crc(g_83.f7, "g_83.f7", print_hash_value);
    transparent_crc(g_83.f8.f0, "g_83.f8.f0", print_hash_value);
    transparent_crc(g_83.f8.f1, "g_83.f8.f1", print_hash_value);
    transparent_crc(g_83.f8.f2, "g_83.f8.f2", print_hash_value);
    transparent_crc(g_83.f8.f3, "g_83.f8.f3", print_hash_value);
    transparent_crc(g_83.f8.f4, "g_83.f8.f4", print_hash_value);
    transparent_crc(g_83.f8.f5, "g_83.f8.f5", print_hash_value);
    transparent_crc(g_83.f8.f6, "g_83.f8.f6", print_hash_value);
    transparent_crc(g_83.f8.f7, "g_83.f8.f7", print_hash_value);
    transparent_crc(g_83.f8.f8, "g_83.f8.f8", print_hash_value);
    transparent_crc(g_83.f8.f9, "g_83.f8.f9", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_141.f0, "g_141.f0", print_hash_value);
    transparent_crc(g_141.f1, "g_141.f1", print_hash_value);
    transparent_crc(g_141.f2, "g_141.f2", print_hash_value);
    transparent_crc(g_141.f3, "g_141.f3", print_hash_value);
    transparent_crc(g_141.f4, "g_141.f4", print_hash_value);
    transparent_crc(g_141.f5, "g_141.f5", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_215.f0, "g_215.f0", print_hash_value);
    transparent_crc(g_215.f1, "g_215.f1", print_hash_value);
    transparent_crc(g_215.f2, "g_215.f2", print_hash_value);
    transparent_crc(g_215.f3, "g_215.f3", print_hash_value);
    transparent_crc(g_215.f4, "g_215.f4", print_hash_value);
    transparent_crc(g_215.f5, "g_215.f5", print_hash_value);
    transparent_crc(g_223.f0, "g_223.f0", print_hash_value);
    transparent_crc(g_223.f1, "g_223.f1", print_hash_value);
    transparent_crc(g_223.f2, "g_223.f2", print_hash_value);
    transparent_crc(g_223.f3, "g_223.f3", print_hash_value);
    transparent_crc(g_223.f4, "g_223.f4", print_hash_value);
    transparent_crc(g_223.f5, "g_223.f5", print_hash_value);
    transparent_crc(g_223.f6, "g_223.f6", print_hash_value);
    transparent_crc(g_223.f7, "g_223.f7", print_hash_value);
    transparent_crc(g_223.f8, "g_223.f8", print_hash_value);
    transparent_crc(g_223.f9, "g_223.f9", print_hash_value);
    transparent_crc(g_225.f0, "g_225.f0", print_hash_value);
    transparent_crc(g_225.f1, "g_225.f1", print_hash_value);
    transparent_crc(g_225.f2, "g_225.f2", print_hash_value);
    transparent_crc(g_225.f3, "g_225.f3", print_hash_value);
    transparent_crc(g_225.f4, "g_225.f4", print_hash_value);
    transparent_crc(g_225.f5, "g_225.f5", print_hash_value);
    transparent_crc(g_225.f6, "g_225.f6", print_hash_value);
    transparent_crc(g_225.f7, "g_225.f7", print_hash_value);
    transparent_crc(g_225.f8, "g_225.f8", print_hash_value);
    transparent_crc(g_225.f9, "g_225.f9", print_hash_value);
    transparent_crc(g_264.f0, "g_264.f0", print_hash_value);
    transparent_crc(g_264.f1, "g_264.f1", print_hash_value);
    transparent_crc(g_264.f2, "g_264.f2", print_hash_value);
    transparent_crc(g_264.f3, "g_264.f3", print_hash_value);
    transparent_crc(g_264.f4.f0, "g_264.f4.f0", print_hash_value);
    transparent_crc(g_264.f4.f1, "g_264.f4.f1", print_hash_value);
    transparent_crc(g_264.f4.f2, "g_264.f4.f2", print_hash_value);
    transparent_crc(g_264.f4.f3, "g_264.f4.f3", print_hash_value);
    transparent_crc(g_264.f4.f4, "g_264.f4.f4", print_hash_value);
    transparent_crc(g_264.f4.f5, "g_264.f4.f5", print_hash_value);
    transparent_crc(g_264.f4.f6, "g_264.f4.f6", print_hash_value);
    transparent_crc(g_264.f4.f7, "g_264.f4.f7", print_hash_value);
    transparent_crc(g_264.f4.f8, "g_264.f4.f8", print_hash_value);
    transparent_crc(g_264.f4.f9, "g_264.f4.f9", print_hash_value);
    transparent_crc(g_264.f5, "g_264.f5", print_hash_value);
    transparent_crc(g_264.f6.f0, "g_264.f6.f0", print_hash_value);
    transparent_crc(g_264.f6.f1, "g_264.f6.f1", print_hash_value);
    transparent_crc(g_264.f6.f2, "g_264.f6.f2", print_hash_value);
    transparent_crc(g_264.f6.f3, "g_264.f6.f3", print_hash_value);
    transparent_crc(g_264.f6.f4, "g_264.f6.f4", print_hash_value);
    transparent_crc(g_264.f6.f5, "g_264.f6.f5", print_hash_value);
    transparent_crc(g_264.f6.f6, "g_264.f6.f6", print_hash_value);
    transparent_crc(g_264.f6.f7, "g_264.f6.f7", print_hash_value);
    transparent_crc(g_264.f6.f8, "g_264.f6.f8", print_hash_value);
    transparent_crc(g_264.f6.f9, "g_264.f6.f9", print_hash_value);
    transparent_crc(g_264.f7, "g_264.f7", print_hash_value);
    transparent_crc(g_264.f8, "g_264.f8", print_hash_value);
    transparent_crc(g_289.f0, "g_289.f0", print_hash_value);
    transparent_crc(g_289.f1.f0, "g_289.f1.f0", print_hash_value);
    transparent_crc(g_289.f1.f1, "g_289.f1.f1", print_hash_value);
    transparent_crc(g_289.f1.f2, "g_289.f1.f2", print_hash_value);
    transparent_crc(g_289.f1.f3, "g_289.f1.f3", print_hash_value);
    transparent_crc(g_289.f1.f4, "g_289.f1.f4", print_hash_value);
    transparent_crc(g_289.f1.f5, "g_289.f1.f5", print_hash_value);
    transparent_crc(g_289.f1.f6, "g_289.f1.f6", print_hash_value);
    transparent_crc(g_289.f1.f7, "g_289.f1.f7", print_hash_value);
    transparent_crc(g_289.f1.f8, "g_289.f1.f8", print_hash_value);
    transparent_crc(g_289.f1.f9, "g_289.f1.f9", print_hash_value);
    transparent_crc(g_289.f2, "g_289.f2", print_hash_value);
    transparent_crc(g_289.f3, "g_289.f3", print_hash_value);
    transparent_crc(g_289.f4, "g_289.f4", print_hash_value);
    transparent_crc(g_289.f5, "g_289.f5", print_hash_value);
    transparent_crc(g_289.f6, "g_289.f6", print_hash_value);
    transparent_crc(g_289.f7, "g_289.f7", print_hash_value);
    transparent_crc(g_289.f8.f0, "g_289.f8.f0", print_hash_value);
    transparent_crc(g_289.f8.f1, "g_289.f8.f1", print_hash_value);
    transparent_crc(g_289.f8.f2, "g_289.f8.f2", print_hash_value);
    transparent_crc(g_289.f8.f3, "g_289.f8.f3", print_hash_value);
    transparent_crc(g_289.f8.f4, "g_289.f8.f4", print_hash_value);
    transparent_crc(g_289.f8.f5, "g_289.f8.f5", print_hash_value);
    transparent_crc(g_289.f8.f6, "g_289.f8.f6", print_hash_value);
    transparent_crc(g_289.f8.f7, "g_289.f8.f7", print_hash_value);
    transparent_crc(g_289.f8.f8, "g_289.f8.f8", print_hash_value);
    transparent_crc(g_289.f8.f9, "g_289.f8.f9", print_hash_value);
    transparent_crc(g_295.f0, "g_295.f0", print_hash_value);
    transparent_crc(g_295.f1, "g_295.f1", print_hash_value);
    transparent_crc(g_295.f2, "g_295.f2", print_hash_value);
    transparent_crc(g_295.f3, "g_295.f3", print_hash_value);
    transparent_crc(g_295.f4.f0, "g_295.f4.f0", print_hash_value);
    transparent_crc(g_295.f4.f1, "g_295.f4.f1", print_hash_value);
    transparent_crc(g_295.f4.f2, "g_295.f4.f2", print_hash_value);
    transparent_crc(g_295.f4.f3, "g_295.f4.f3", print_hash_value);
    transparent_crc(g_295.f4.f4, "g_295.f4.f4", print_hash_value);
    transparent_crc(g_295.f4.f5, "g_295.f4.f5", print_hash_value);
    transparent_crc(g_295.f4.f6, "g_295.f4.f6", print_hash_value);
    transparent_crc(g_295.f4.f7, "g_295.f4.f7", print_hash_value);
    transparent_crc(g_295.f4.f8, "g_295.f4.f8", print_hash_value);
    transparent_crc(g_295.f4.f9, "g_295.f4.f9", print_hash_value);
    transparent_crc(g_295.f5, "g_295.f5", print_hash_value);
    transparent_crc(g_295.f6.f0, "g_295.f6.f0", print_hash_value);
    transparent_crc(g_295.f6.f1, "g_295.f6.f1", print_hash_value);
    transparent_crc(g_295.f6.f2, "g_295.f6.f2", print_hash_value);
    transparent_crc(g_295.f6.f3, "g_295.f6.f3", print_hash_value);
    transparent_crc(g_295.f6.f4, "g_295.f6.f4", print_hash_value);
    transparent_crc(g_295.f6.f5, "g_295.f6.f5", print_hash_value);
    transparent_crc(g_295.f6.f6, "g_295.f6.f6", print_hash_value);
    transparent_crc(g_295.f6.f7, "g_295.f6.f7", print_hash_value);
    transparent_crc(g_295.f6.f8, "g_295.f6.f8", print_hash_value);
    transparent_crc(g_295.f6.f9, "g_295.f6.f9", print_hash_value);
    transparent_crc(g_295.f7, "g_295.f7", print_hash_value);
    transparent_crc(g_295.f8, "g_295.f8", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_318.f0, "g_318.f0", print_hash_value);
    transparent_crc(g_318.f1, "g_318.f1", print_hash_value);
    transparent_crc(g_318.f2, "g_318.f2", print_hash_value);
    transparent_crc(g_318.f3, "g_318.f3", print_hash_value);
    transparent_crc(g_318.f4, "g_318.f4", print_hash_value);
    transparent_crc(g_318.f5, "g_318.f5", print_hash_value);
    transparent_crc(g_318.f6, "g_318.f6", print_hash_value);
    transparent_crc(g_318.f7, "g_318.f7", print_hash_value);
    transparent_crc(g_318.f8, "g_318.f8", print_hash_value);
    transparent_crc(g_318.f9, "g_318.f9", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_352.f0, "g_352.f0", print_hash_value);
    transparent_crc(g_352.f1.f0, "g_352.f1.f0", print_hash_value);
    transparent_crc(g_352.f1.f1, "g_352.f1.f1", print_hash_value);
    transparent_crc(g_352.f1.f2, "g_352.f1.f2", print_hash_value);
    transparent_crc(g_352.f1.f3, "g_352.f1.f3", print_hash_value);
    transparent_crc(g_352.f1.f4, "g_352.f1.f4", print_hash_value);
    transparent_crc(g_352.f1.f5, "g_352.f1.f5", print_hash_value);
    transparent_crc(g_352.f1.f6, "g_352.f1.f6", print_hash_value);
    transparent_crc(g_352.f1.f7, "g_352.f1.f7", print_hash_value);
    transparent_crc(g_352.f1.f8, "g_352.f1.f8", print_hash_value);
    transparent_crc(g_352.f1.f9, "g_352.f1.f9", print_hash_value);
    transparent_crc(g_352.f2, "g_352.f2", print_hash_value);
    transparent_crc(g_352.f3, "g_352.f3", print_hash_value);
    transparent_crc(g_352.f4, "g_352.f4", print_hash_value);
    transparent_crc(g_352.f5, "g_352.f5", print_hash_value);
    transparent_crc(g_352.f6, "g_352.f6", print_hash_value);
    transparent_crc(g_352.f7, "g_352.f7", print_hash_value);
    transparent_crc(g_352.f8.f0, "g_352.f8.f0", print_hash_value);
    transparent_crc(g_352.f8.f1, "g_352.f8.f1", print_hash_value);
    transparent_crc(g_352.f8.f2, "g_352.f8.f2", print_hash_value);
    transparent_crc(g_352.f8.f3, "g_352.f8.f3", print_hash_value);
    transparent_crc(g_352.f8.f4, "g_352.f8.f4", print_hash_value);
    transparent_crc(g_352.f8.f5, "g_352.f8.f5", print_hash_value);
    transparent_crc(g_352.f8.f6, "g_352.f8.f6", print_hash_value);
    transparent_crc(g_352.f8.f7, "g_352.f8.f7", print_hash_value);
    transparent_crc(g_352.f8.f8, "g_352.f8.f8", print_hash_value);
    transparent_crc(g_352.f8.f9, "g_352.f8.f9", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_509.f0, "g_509.f0", print_hash_value);
    transparent_crc(g_509.f1, "g_509.f1", print_hash_value);
    transparent_crc(g_509.f2, "g_509.f2", print_hash_value);
    transparent_crc(g_509.f3, "g_509.f3", print_hash_value);
    transparent_crc(g_509.f4.f0, "g_509.f4.f0", print_hash_value);
    transparent_crc(g_509.f4.f1, "g_509.f4.f1", print_hash_value);
    transparent_crc(g_509.f4.f2, "g_509.f4.f2", print_hash_value);
    transparent_crc(g_509.f4.f3, "g_509.f4.f3", print_hash_value);
    transparent_crc(g_509.f4.f4, "g_509.f4.f4", print_hash_value);
    transparent_crc(g_509.f4.f5, "g_509.f4.f5", print_hash_value);
    transparent_crc(g_509.f4.f6, "g_509.f4.f6", print_hash_value);
    transparent_crc(g_509.f4.f7, "g_509.f4.f7", print_hash_value);
    transparent_crc(g_509.f4.f8, "g_509.f4.f8", print_hash_value);
    transparent_crc(g_509.f4.f9, "g_509.f4.f9", print_hash_value);
    transparent_crc(g_509.f5, "g_509.f5", print_hash_value);
    transparent_crc(g_509.f6.f0, "g_509.f6.f0", print_hash_value);
    transparent_crc(g_509.f6.f1, "g_509.f6.f1", print_hash_value);
    transparent_crc(g_509.f6.f2, "g_509.f6.f2", print_hash_value);
    transparent_crc(g_509.f6.f3, "g_509.f6.f3", print_hash_value);
    transparent_crc(g_509.f6.f4, "g_509.f6.f4", print_hash_value);
    transparent_crc(g_509.f6.f5, "g_509.f6.f5", print_hash_value);
    transparent_crc(g_509.f6.f6, "g_509.f6.f6", print_hash_value);
    transparent_crc(g_509.f6.f7, "g_509.f6.f7", print_hash_value);
    transparent_crc(g_509.f6.f8, "g_509.f6.f8", print_hash_value);
    transparent_crc(g_509.f6.f9, "g_509.f6.f9", print_hash_value);
    transparent_crc(g_509.f7, "g_509.f7", print_hash_value);
    transparent_crc(g_509.f8, "g_509.f8", print_hash_value);
    transparent_crc(g_626.f0, "g_626.f0", print_hash_value);
    transparent_crc(g_626.f1, "g_626.f1", print_hash_value);
    transparent_crc(g_626.f2, "g_626.f2", print_hash_value);
    transparent_crc(g_626.f3, "g_626.f3", print_hash_value);
    transparent_crc(g_626.f4.f0, "g_626.f4.f0", print_hash_value);
    transparent_crc(g_626.f4.f1, "g_626.f4.f1", print_hash_value);
    transparent_crc(g_626.f4.f2, "g_626.f4.f2", print_hash_value);
    transparent_crc(g_626.f4.f3, "g_626.f4.f3", print_hash_value);
    transparent_crc(g_626.f4.f4, "g_626.f4.f4", print_hash_value);
    transparent_crc(g_626.f4.f5, "g_626.f4.f5", print_hash_value);
    transparent_crc(g_626.f4.f6, "g_626.f4.f6", print_hash_value);
    transparent_crc(g_626.f4.f7, "g_626.f4.f7", print_hash_value);
    transparent_crc(g_626.f4.f8, "g_626.f4.f8", print_hash_value);
    transparent_crc(g_626.f4.f9, "g_626.f4.f9", print_hash_value);
    transparent_crc(g_626.f5, "g_626.f5", print_hash_value);
    transparent_crc(g_626.f6.f0, "g_626.f6.f0", print_hash_value);
    transparent_crc(g_626.f6.f1, "g_626.f6.f1", print_hash_value);
    transparent_crc(g_626.f6.f2, "g_626.f6.f2", print_hash_value);
    transparent_crc(g_626.f6.f3, "g_626.f6.f3", print_hash_value);
    transparent_crc(g_626.f6.f4, "g_626.f6.f4", print_hash_value);
    transparent_crc(g_626.f6.f5, "g_626.f6.f5", print_hash_value);
    transparent_crc(g_626.f6.f6, "g_626.f6.f6", print_hash_value);
    transparent_crc(g_626.f6.f7, "g_626.f6.f7", print_hash_value);
    transparent_crc(g_626.f6.f8, "g_626.f6.f8", print_hash_value);
    transparent_crc(g_626.f6.f9, "g_626.f6.f9", print_hash_value);
    transparent_crc(g_626.f7, "g_626.f7", print_hash_value);
    transparent_crc(g_626.f8, "g_626.f8", print_hash_value);
    transparent_crc(g_633.f0, "g_633.f0", print_hash_value);
    transparent_crc(g_633.f1, "g_633.f1", print_hash_value);
    transparent_crc(g_633.f2, "g_633.f2", print_hash_value);
    transparent_crc(g_633.f3, "g_633.f3", print_hash_value);
    transparent_crc(g_633.f4, "g_633.f4", print_hash_value);
    transparent_crc(g_633.f5, "g_633.f5", print_hash_value);
    transparent_crc(g_633.f6, "g_633.f6", print_hash_value);
    transparent_crc(g_633.f7, "g_633.f7", print_hash_value);
    transparent_crc(g_633.f8, "g_633.f8", print_hash_value);
    transparent_crc(g_633.f9, "g_633.f9", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
