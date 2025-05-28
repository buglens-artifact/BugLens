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


union U0 {
   int f0;
   unsigned long long f1;
   const unsigned f2;
};

union U1 {
   volatile int f0;
   const unsigned long long f1;
   const unsigned short f2;
   volatile unsigned f3;
};

union U2 {
   volatile unsigned short f0;
   char * f1;
   unsigned long long f2;
};

union U3 {
   volatile long long f0;
   unsigned short f1;
   const volatile char * f2;
   int f3;
   unsigned long long f4;
};


static char g_9 = 1L;
static int g_42 = 0L;
static int *g_44 = &g_42;
static short g_53 = (-10L);
static volatile unsigned char g_111 = 0UL;
static int g_116 = 2L;
static union U3 g_119 = {0xB2C9D536C3AC5B6CLL};
static short g_122 = 0x3614L;
static short *g_121 = &g_122;
static union U0 g_141 = {0L};
static union U0 g_152 = {1L};
static volatile unsigned long long g_158 = 0xE40316972AE31553LL;
static volatile unsigned long long *g_157 = &g_158;
static unsigned long long g_165 = 7UL;
static unsigned g_174 = 0xFDE0CEE1L;
static const volatile union U1 g_175 = {-1L};
static unsigned char g_177 = 0xECL;
static unsigned char g_179 = 0xADL;
static char g_181 = 0xDBL;
static char g_183 = 1L;
static union U1 g_185 = {0x75A0760AL};
static volatile unsigned char g_205 = 252UL;
static unsigned char g_210 = 249UL;
static char g_217 = (-1L);
static int *g_219 = (void*)0;
static int **g_218 = &g_219;
static long long g_243 = 0x78830C378F7CF680LL;
static unsigned g_266 = 0x6BDDA40BL;
static volatile unsigned g_319 = 4294967295UL;
static volatile short g_379 = 0x3E71L;
static long long g_384 = 0xD85EE549EA420728LL;
static volatile unsigned g_385 = 0x01FC4C82L;
static union U1 g_424 = {0x9EA918FDL};
static int g_453 = (-1L);
static volatile char g_479 = 0x9FL;
static volatile unsigned char g_491 = 0UL;
static union U0 **g_494 = (void*)0;
static union U3 g_514 = {-7L};
static int g_518 = 0xEE8527D9L;
static volatile unsigned long long g_549 = 18446744073709551610UL;
static volatile union U1 g_578 = {5L};
static int g_580 = (-8L);
static union U3 g_667 = {0xF25888DAD110EB22LL};
static union U2 g_708 = {0x3B5BL};
static volatile unsigned g_737 = 18446744073709551613UL;
static char **g_743 = (void*)0;
static unsigned long long g_813 = 0xD5698116AEC9CB53LL;
static volatile union U1 g_848 = {-3L};
static unsigned g_862 = 0xBCB3AB51L;
static unsigned g_863 = 0xFDE5F415L;
static const volatile union U1 g_907 = {7L};
static volatile int g_925 = 0xB927F4D0L;
static volatile int *g_924 = &g_925;
static volatile int **g_923 = &g_924;
static volatile int g_982 = 0x8CA061AEL;
static long long g_988 = 0xF6A103F6749B7E59LL;
static volatile char g_994 = 0xA1L;
static volatile unsigned g_1016 = 0x8C3E8DC0L;
static union U3 g_1052 = {6L};
static unsigned short g_1114 = 0x3CAAL;
static volatile unsigned g_1232 = 0x64223753L;
static union U3 g_1249 = {0xFF903F2D1DDB1451LL};
static volatile union U2 g_1253 = {0x0A35L};
static union U1 g_1266 = {0x88AE7727L};
static volatile union U3 g_1308 = {-9L};
static union U2 g_1309 = {65535UL};
static volatile union U1 *g_1323 = &g_848;
static volatile union U1 **g_1322 = &g_1323;
static volatile union U1 ***g_1321 = &g_1322;
static unsigned g_1404 = 4UL;
static unsigned char g_1490 = 0xF8L;
static union U3 g_1503 = {8L};
static union U2 g_1504 = {0x21C8L};
static unsigned long long g_1568 = 7UL;
static unsigned **g_1623 = (void*)0;
static unsigned ** const *g_1622 = &g_1623;
static union U2 *g_1650 = &g_708;
static union U2 **g_1649 = &g_1650;
static union U2 ***g_1648 = &g_1649;
static union U3 g_1652 = {2L};
static const long long g_1654 = 0x30D91F6F5085BFE5LL;
static union U3 g_1667 = {0x838C3AF183EA3C08LL};
static union U0 ***g_1675 = &g_494;
static volatile unsigned g_1716 = 4294967294UL;
static volatile int g_1728 = 0x9CE3C3AFL;
static union U1 g_1738 = {3L};



static union U0 func_1(void);
static const int func_2(const unsigned char p_3, const unsigned p_4, char * p_5, unsigned long long p_6, unsigned long long p_7);
static union U2 func_10(char * p_11, char p_12, int p_13, unsigned p_14);
static unsigned short func_15(char * p_16, char * p_17, union U0 p_18);
static union U0 func_21(long long p_22, union U0 p_23, unsigned char p_24, char ** p_25, unsigned p_26);
static union U0 func_27(const char * p_28, char ** p_29, char ** p_30, const char * p_31);
static char ** func_33(long long p_34, int p_35, char ** p_36);
static int func_38(char * p_39);
static union U1 func_56(int * p_57, unsigned char p_58, int ** p_59, int ** p_60, unsigned p_61);
static int * func_62(int p_63, long long p_64);
static union U0 func_1(void)
{
    char *l_8 = &g_9;
    char *l_20 = &g_9;
    char **l_19 = &l_20;
    const char *l_32 = &g_9;
    int l_37 = 0xF77722ABL;
    union U0 l_1793 = {0xD32E6954L};
    char *l_1802 = (void*)0;
    char **l_1803 = (void*)0;
    char **l_1804 = &l_8;
    union U0 l_1805 = {0L};
    if (func_2(((void*)0 == l_8), g_9, ((func_10(l_8, ((((func_15(l_8, ((*l_19) = l_8), func_21(g_9, func_27(l_32, func_33(l_37, l_37, &l_8), &l_8, &g_9), g_667.f3, g_743, g_667.f4)) == 1UL) , 0L) && g_1114) , l_37), g_667.f3, l_37) , g_1308) , (void*)0), l_37, l_37))
    {
        unsigned char *l_1778 = &g_210;
        int l_1779 = 0xCC890005L;
        char **l_1792 = &l_8;
        for (g_53 = 0; (g_53 == (-21)); --g_53)
        {
            unsigned long long l_1789 = 0xC6B3DB6680B620ABLL;
            int *l_1794 = &g_580;
            (*g_44) |= (l_1778 == &g_1490);
            (*g_44) = l_1779;
            (*g_218) = l_1794;
        }
    }
    else
    {
        char *l_1795 = (void*)0;
        unsigned long long *l_1798 = &g_1504.f2;
        unsigned long long *l_1799 = &g_667.f4;
        int *l_1800 = &g_453;
        int *l_1801 = &g_580;
        (*g_44) |= l_37;
        (*l_1801) = ((*l_1800) |= (l_1793.f0 < (safe_add_func_uint64_t_u_u((*g_157), ((*l_1799) = ((*l_1798) = func_38(&g_9)))))));
    }
    (*g_44) = (l_1793.f2 <= ((*g_121) == (safe_unary_minus_func_uint64_t_u((*g_157)))));
    (**g_1648) = (*g_1649);
    (*g_44) = l_37;
    return g_141;
}







static const int func_2(const unsigned char p_3, const unsigned p_4, char * p_5, unsigned long long p_6, unsigned long long p_7)
{
    int *l_1505 = &g_453;
    int *l_1506 = &g_580;
    int *l_1507 = &g_453;
    int l_1508 = 0L;
    int *l_1509 = &l_1508;
    int *l_1510 = (void*)0;
    int *l_1511 = &g_42;
    int *l_1512 = (void*)0;
    int *l_1513 = &l_1508;
    int *l_1514 = (void*)0;
    int *l_1515 = (void*)0;
    int *l_1516 = &l_1508;
    int l_1517 = 0xE54D2894L;
    int *l_1518 = &g_580;
    int *l_1519 = &g_580;
    int *l_1520 = (void*)0;
    int *l_1521 = &g_580;
    int *l_1522 = &g_580;
    int *l_1523 = &l_1517;
    int l_1524 = (-1L);
    int *l_1525 = &g_42;
    int *l_1526 = &g_453;
    int *l_1527 = &g_580;
    int l_1528 = 0xBFEDFF84L;
    int l_1529 = 8L;
    int *l_1530 = &l_1517;
    int *l_1531 = &g_42;
    int *l_1532 = &g_580;
    int *l_1533 = &l_1524;
    int *l_1534 = &l_1529;
    int *l_1535 = &l_1508;
    int *l_1536 = (void*)0;
    int *l_1537 = &l_1528;
    int *l_1538 = &l_1529;
    int *l_1539 = &g_42;
    int *l_1540 = &l_1508;
    int *l_1541 = &g_453;
    int l_1542 = 1L;
    int *l_1543 = &g_580;
    int *l_1544 = &g_580;
    int *l_1545 = &g_42;
    int *l_1546 = (void*)0;
    int *l_1547 = &l_1528;
    int *l_1548 = (void*)0;
    int *l_1549 = &g_42;
    int *l_1550 = (void*)0;
    int *l_1551 = &l_1524;
    int *l_1552 = (void*)0;
    int *l_1553 = &l_1508;
    int *l_1554 = &l_1529;
    int *l_1555 = &g_453;
    int *l_1556 = &g_42;
    int *l_1557 = &l_1524;
    int *l_1558 = &l_1542;
    int *l_1559 = &g_42;
    int *l_1560 = &l_1542;
    int *l_1561 = &l_1517;
    int *l_1562 = &l_1524;
    int *l_1563 = &l_1529;
    int *l_1564 = (void*)0;
    int l_1565 = 0xE83186B2L;
    int *l_1566 = &l_1508;
    int *l_1567 = &l_1508;
    union U0 l_1575 = {0L};
    unsigned char *l_1583 = (void*)0;
    char *l_1589 = &g_217;
    char **l_1588 = &l_1589;
    unsigned short l_1630 = 1UL;
    char *l_1643 = &g_181;
    union U0 l_1658 = {0x2F5E306AL};
    union U1 *l_1737 = &g_1738;
    union U1 * const *l_1736 = &l_1737;
    union U1 * const **l_1735 = &l_1736;
    int l_1744 = 0xFECBB4EDL;
    union U2 ** const *l_1753 = &g_1649;
    union U2 **l_1773 = &g_1650;
    unsigned ***l_1775 = &g_1623;
    unsigned ****l_1774 = &l_1775;
    --g_1568;
    for (g_266 = (-28); (g_266 != 28); g_266 = safe_add_func_uint32_t_u_u(g_266, 1))
    {
        char *l_1573 = (void*)0;
        char *l_1574 = &g_183;
        (*l_1538) &= p_3;
        if ((*l_1532))
            continue;
        if (p_4)
            continue;
    }
    if ((safe_sub_func_int64_t_s_s((*l_1519), (-1L))))
    {
        unsigned char *l_1580 = &g_210;
        unsigned char l_1581 = 255UL;
        char *l_1582 = (void*)0;
        unsigned char *l_1585 = &g_177;
        unsigned char **l_1584 = &l_1585;
        unsigned char l_1586 = 4UL;
        union U0 l_1587 = {-2L};
        int *l_1594 = &l_1528;
        union U2 *l_1647 = &g_1504;
        union U2 **l_1646 = &l_1647;
        union U2 ***l_1645 = &l_1646;
        const long long *l_1653 = &g_1654;
        union U0 ***l_1672 = &g_494;
        int l_1679 = 7L;
        union U1 **l_1748 = &l_1737;
        union U1 ***l_1749 = (void*)0;
        union U1 ***l_1750 = &l_1748;
        unsigned long long *l_1754 = &g_1052.f4;
        l_1581 = (safe_add_func_uint8_t_u_u(0xFDL, ((*l_1580) ^= g_1249.f1)));
        if (l_1581)
        {
            int l_1595 = 3L;
            unsigned long long l_1621 = 0x7FE5E037C26B4365LL;
            for (g_141.f0 = 0; (g_141.f0 >= (-5)); g_141.f0 = safe_sub_func_int8_t_s_s(g_141.f0, 6))
            {
                unsigned long long l_1592 = 18446744073709551615UL;
                char *l_1610 = &g_181;
                (*g_218) = l_1594;
                l_1595 |= l_1592;
                (*l_1567) = (safe_add_func_uint8_t_u_u((l_1595 ^= (p_4 >= (*l_1560))), (*l_1594)));
                if ((safe_rshift_func_int16_t_s_s(((+((safe_mod_func_uint16_t_u_u((*l_1544), (safe_add_func_int16_t_s_s(l_1592, l_1595)))) != g_1490)) <= (g_667 , l_1592)), 4)))
                {
                    short l_1629 = (-4L);
                    (*l_1539) = p_6;
                    if ((+((*l_1553) = ((0x55L != g_1249.f4) != 0x5E3EL))))
                    {
                        unsigned * const l_1604 = &g_862;
                        char *l_1607 = &g_9;
                        (*l_1561) = ((((void*)0 != l_1604) & ((g_1052 , (safe_add_func_uint32_t_u_u(func_38(l_1607), (0x29B50C77L && ((void*)0 == (**g_1321)))))) < p_4)) , p_6);
                        (*l_1537) ^= (*g_44);
                    }
                    else
                    {
                        int l_1611 = 1L;
                        unsigned *l_1616 = &g_174;
                        unsigned ** const **l_1624 = &g_1622;
                        unsigned ***l_1625 = &g_1623;
                        unsigned ****l_1626 = &l_1625;
                        char *l_1631 = &g_217;
                        (*l_1505) = ((safe_sub_func_int16_t_s_s((func_38(((*l_1588) = l_1610)) , (l_1611 |= (-1L))), ((~(p_7 && p_4)) , ((((safe_sub_func_int16_t_s_s((*g_121), p_3)) , ((*l_1616) = (g_266 &= (safe_add_func_uint16_t_u_u(((void*)0 == &l_1582), (*l_1545)))))) , &p_7) == &g_1568)))) | 7L);
                        (*l_1549) = (func_21(g_907.f3, l_1587, ((safe_mod_func_uint8_t_u_u(((g_667.f4 , ((safe_mod_func_uint64_t_u_u(((l_1621 , ((*l_1624) = g_1622)) != ((*l_1626) = l_1625)), func_38(l_1585))) || ((safe_add_func_uint32_t_u_u((18446744073709551615UL || g_1249.f3), l_1629)) > g_667.f3))) <= l_1629), 255UL)) || l_1629), &l_1582, l_1630) , 5L);
                        (*l_1549) = (*l_1527);
                        (**g_218) &= func_38(((*l_1588) = l_1631));
                    }
                }
                else
                {
                    union U0 *l_1633 = &g_141;
                    union U0 **l_1632 = &l_1633;
                    char **l_1642 = (void*)0;
                    int l_1644 = (-9L);
                    (*l_1632) = &l_1575;
                    (*l_1559) = (safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(p_7, ((safe_add_func_uint16_t_u_u((((((*l_1561) &= (~((safe_add_func_uint32_t_u_u((func_38(p_5) >= p_6), p_4)) & (*g_121)))) , (func_38((l_1643 = ((*l_1588) = p_5))) , ((*g_44) < 0x2A203D1DL))) > p_6) > (*g_219)), l_1644)) | 1UL))), p_6));
                }
            }
        }
        else
        {
            union U2 ****l_1651 = &g_1648;
            char *l_1657 = &g_217;
            int l_1659 = 0xAE2A3003L;
            int *l_1669 = &g_580;
            union U0 ***l_1673 = (void*)0;
            int l_1682 = 0L;
            int l_1695 = 0x49587553L;
            int l_1699 = (-10L);
            int l_1711 = 0xB31CC15AL;
            (*l_1558) |= ((l_1645 == ((*l_1651) = g_1648)) && ((g_1652 , (+(((&g_384 == (l_1653 = &g_384)) , (safe_lshift_func_int8_t_s_u(l_1659, g_424.f2))) & p_6))) == 0L));
            for (g_116 = (-19); (g_116 == (-26)); g_116 = safe_sub_func_uint16_t_u_u(g_116, 8))
            {
                int l_1666 = 0x1F427528L;
                int l_1677 = 0x50BA5B17L;
                int l_1694 = (-10L);
                unsigned long long *l_1743 = &l_1658.f1;
                for (g_183 = 0; (g_183 <= (-22)); --g_183)
                {
                    unsigned long long l_1676 = 18446744073709551615UL;
                    int l_1678 = (-4L);
                    int l_1710 = 0xBC2B373FL;
                    for (g_210 = (-18); (g_210 >= 48); g_210++)
                    {
                        int *l_1668 = &l_1528;
                        (*l_1523) &= ((*g_44) |= (1UL ^ g_424.f0));
                        (*g_44) = (+l_1666);
                        (*g_218) = (g_1667 , l_1668);
                        (*g_218) = (*g_218);
                    }
                    (*g_218) = l_1669;
                    for (l_1542 = 0; (l_1542 >= 28); l_1542 = safe_add_func_uint32_t_u_u(l_1542, 1))
                    {
                        union U0 ****l_1674 = &l_1673;
                        int l_1680 = (-1L);
                        int l_1681 = 0L;
                        int *l_1683 = &l_1565;
                        int *l_1684 = &l_1678;
                        int *l_1685 = &l_1681;
                        int *l_1686 = &l_1682;
                        int *l_1687 = &g_453;
                        int *l_1688 = (void*)0;
                        int *l_1689 = &l_1680;
                        int *l_1690 = &g_453;
                        int *l_1691 = (void*)0;
                        int *l_1692 = (void*)0;
                        int *l_1693 = (void*)0;
                        int *l_1696 = &l_1680;
                        int *l_1697 = (void*)0;
                        int *l_1698 = &l_1694;
                        int *l_1700 = &l_1529;
                        int *l_1701 = (void*)0;
                        int *l_1702 = (void*)0;
                        int *l_1703 = &l_1699;
                        int l_1704 = 0x9FCA8989L;
                        int *l_1705 = &l_1529;
                        int *l_1706 = (void*)0;
                        int *l_1707 = &l_1677;
                        int *l_1708 = &l_1678;
                        int *l_1709 = &l_1528;
                        int *l_1712 = &l_1710;
                        int *l_1713 = &g_42;
                        int *l_1714 = &l_1565;
                        int *l_1715 = &l_1659;
                        unsigned *l_1727 = &g_863;
                        l_1676 = ((func_38(l_1657) < (p_7 || 0UL)) < ((l_1672 == (g_1675 = ((*l_1674) = l_1673))) <= (~(g_1667.f0 & (~(((((*l_1534) , 0x8BB6D26FL) && 0x438366E9L) && 0xCFF4L) <= (*g_121)))))));
                        g_1716++;
                        (*g_219) = (g_1404 & (0L ^ (safe_rshift_func_int8_t_s_s((1L ^ ((*g_121) , ((g_1308 , (safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s((((*l_1727) = ((0x90E8397AA347D4CFLL || p_7) , (safe_add_func_uint32_t_u_u(l_1710, (((func_38(&g_9) || p_4) >= 0UL) > (*l_1713)))))) | p_7), g_1728)) , (*g_121)), 13))) <= p_4))), l_1710))));
                        (*g_218) = &l_1679;
                    }
                    (*g_218) = &l_1677;
                }
                (*l_1555) |= (((safe_mod_func_uint64_t_u_u((l_1694 <= func_38(p_5)), (*g_157))) == (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((((void*)0 == l_1735) >= (safe_mod_func_uint64_t_u_u(((*l_1743) = (((*g_121) = ((safe_rshift_func_uint16_t_u_s(1UL, 7)) & g_667.f3)) <= (*l_1594))), p_6))), (*l_1509))), g_179))) ^ l_1744);
            }
            (*l_1521) |= ((func_38(((*l_1588) = (l_1657 = &g_9))) ^ 0UL) | (*l_1594));
        }
        (*l_1561) ^= ((**l_1736) , (+(p_7 > (func_10(l_1585, p_6, (((**l_1584) = p_3) > g_1249.f1), (*l_1507)) , 0xFD42A1CCL))));
        (*l_1538) |= ((safe_unary_minus_func_uint64_t_u(0x4162D9E25FA778BBLL)) <= ((*l_1754) = (safe_lshift_func_uint8_t_u_u((g_266 > (((*l_1750) = l_1748) == (*l_1735))), (safe_add_func_uint32_t_u_u(((void*)0 != l_1753), p_6))))));
    }
    else
    {
        unsigned *l_1757 = &g_863;
        unsigned ***l_1763 = &g_1623;
        unsigned ****l_1762 = &l_1763;
        unsigned *****l_1764 = (void*)0;
        unsigned *****l_1765 = &l_1762;
        int l_1770 = 0L;
        (*g_218) = ((p_7 == (safe_sub_func_uint32_t_u_u(func_38(p_5), ((((*g_121) = (((*l_1757)--) | ((safe_mod_func_uint16_t_u_u((((*l_1765) = l_1762) == ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((!l_1770), ((0x9D31D54F8F9AFA54LL < ((safe_lshift_func_int16_t_s_u((*l_1539), 2)) >= (l_1773 == (void*)0))) == p_4))), 2)) , l_1774)), 0x5F8DL)) >= (*l_1547)))) && (*l_1533)) > 0x7396L)))) , (void*)0);
    }
    return p_3;
}







static union U2 func_10(char * p_11, char p_12, int p_13, unsigned p_14)
{
    const union U2 **l_1496 = (void*)0;
    const union U2 ***l_1495 = &l_1496;
    int l_1497 = 0x497F5756L;
    union U3 *l_1499 = &g_1249;
    union U3 **l_1498 = &l_1499;
    union U3 * const l_1502 = &g_1503;
    union U3 * const *l_1501 = &l_1502;
    union U3 * const **l_1500 = &l_1501;
    l_1497 = (l_1495 == (void*)0);
    l_1497 = ((*g_44) = (l_1498 != ((*l_1500) = &l_1499)));
    return g_1504;
}







static unsigned short func_15(char * p_16, char * p_17, union U0 p_18)
{
    char *l_835 = &g_183;
    int *l_838 = &g_580;
    short *l_846 = &g_53;
    union U0 l_847 = {0xBC145E12L};
    int *l_927 = (void*)0;
    int * const *l_926 = &l_927;
    int l_939 = 0x1093D144L;
    int l_955 = (-1L);
    unsigned char l_1231 = 9UL;
    unsigned long long l_1237 = 1UL;
    unsigned short l_1271 = 65526UL;
    unsigned l_1303 = 3UL;
    char *l_1407 = &g_217;
    int l_1454 = 0x4D7E49B5L;
    int l_1465 = 0xA808B6CEL;
    union U2 *l_1493 = &g_708;
    unsigned l_1494 = 18446744073709551609UL;
    if (func_38(l_835))
    {
        for (g_165 = (-10); (g_165 != 41); ++g_165)
        {
            if ((*g_44))
                break;
        }
        (*g_218) = l_838;
        (**g_218) = p_18.f0;
    }
    else
    {
        unsigned l_839 = 0xBA9AD869L;
        l_839--;
    }
    if ((((((((*l_838) ^= p_18.f0) >= (((((safe_add_func_int64_t_s_s(func_38(p_17), (((l_846 != (l_847 , l_846)) <= (p_18.f0 >= (p_18.f2 > ((g_708 , p_18.f2) != 1L)))) ^ p_18.f2))) && 0x12B4ED70ABE7DC28LL) , g_848) , (*p_16)) ^ g_514.f1)) >= 0x0465L) && 0x62L) == (*g_121)) >= g_141.f2))
    {
        int l_851 = 0x6215978BL;
        int l_864 = 0L;
        l_838 = l_838;
        for (l_847.f0 = 0; (l_847.f0 < 2); l_847.f0++)
        {
            unsigned l_860 = 4294967289UL;
            unsigned *l_861 = &g_862;
            (*g_44) = (0L & l_851);
            l_864 = (func_38(p_17) == ((g_863 ^= (p_18.f2 <= (!((*l_861) = ((safe_sub_func_int8_t_s_s((((*l_838) & g_578.f3) != ((safe_add_func_int16_t_s_s((((*p_16) == (l_851 && (safe_sub_func_int64_t_s_s(g_580, (l_860 = (*l_838)))))) < g_667.f4), (*g_121))) != g_514.f4)), 0x3EL)) ^ p_18.f2))))) | 0L));
        }
    }
    else
    {
        int l_865 = (-2L);
        int l_891 = 0x6BAA5C3DL;
        union U0 **l_896 = (void*)0;
        int l_922 = 0x7F7B4584L;
        int l_964 = (-10L);
        int l_1002 = 0x051AA074L;
        unsigned l_1021 = 1UL;
        int l_1035 = 0L;
        union U1 *l_1037 = (void*)0;
        union U1 **l_1036 = &l_1037;
        int l_1095 = (-7L);
        const union U2 *l_1120 = &g_708;
        const union U2 **l_1119 = &l_1120;
        char *l_1424 = (void*)0;
        long long l_1472 = (-2L);
        if (l_865)
        {
            union U2 *l_877 = &g_708;
            int l_890 = (-1L);
            unsigned char *l_901 = &g_210;
            (*g_44) = 1L;
            (*l_838) = func_38(p_16);
            for (l_847.f0 = 26; (l_847.f0 < 8); l_847.f0--)
            {
                char l_870 = 0x8AL;
                int l_882 = (-1L);
                unsigned char *l_887 = &g_177;
                unsigned char *l_888 = (void*)0;
                unsigned char *l_889 = &g_210;
                for (p_18.f1 = 15; (p_18.f1 < 21); p_18.f1++)
                {
                    int *l_874 = &g_42;
                    (*l_838) = l_870;
                    for (g_863 = 0; (g_863 == 6); g_863++)
                    {
                        unsigned l_873 = 0x7074A178L;
                        (*g_218) = l_874;
                    }
                    for (g_181 = (-12); (g_181 < 17); ++g_181)
                    {
                        l_877 = &g_708;
                    }
                }
                for (g_384 = 0; (g_384 > 16); g_384++)
                {
                    return g_141.f0;
                }
                l_891 = ((((((*l_889) &= ((*l_887) = (safe_lshift_func_uint8_t_u_u((l_882 &= func_38(p_17)), (((*l_838) = (safe_mod_func_int64_t_s_s(((((0xAA83L | 0x3371L) < 0L) , p_18.f1) && (safe_sub_func_uint32_t_u_u(0x4FD802E3L, 0xE696E447L))), p_18.f1))) , l_870))))) > 0x0CL) && l_870) <= l_847.f0) < l_890);
            }
            if (((((*g_218) != (void*)0) || 0x83F45E6CL) <= ((*l_901) = (((safe_rshift_func_uint16_t_u_s(((((l_891 = ((((*g_157) , p_18.f0) , g_494) != l_896)) > (0x7BL >= (safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(4294967291UL, 0x49E8AF5EL)), (*l_838))))) ^ l_890) >= l_890), (*g_121))) || p_18.f0) && l_891))))
            {
                for (g_863 = (-10); (g_863 == 54); g_863++)
                {
                    return l_890;
                }
                (*l_838) = (p_18.f0 >= (func_38(p_17) ^ ((((*l_901) ^= g_116) <= 0x86L) <= (*l_838))));
            }
            else
            {
                char l_933 = 5L;
                if (((((*g_44) > ((safe_unary_minus_func_uint16_t_u(((g_907 , p_18.f0) > g_152.f0))) < (safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(((*l_838) >= l_890), 6)) < (-1L)), ((safe_sub_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(g_667.f1, ((safe_mod_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((p_18.f2 , 0x06FAL), 0x46F9L)), l_922)) , g_923) == l_926) <= g_116), p_18.f0)) , p_18.f2))), g_266)) && 1UL))))) , (*p_17)) || p_18.f2))
                {
                    int *l_928 = (void*)0;
                    int *l_929 = (void*)0;
                    int *l_930 = (void*)0;
                    int *l_931 = (void*)0;
                    int *l_932 = &l_891;
                    int l_934 = (-1L);
                    int *l_935 = &l_934;
                    int *l_936 = &l_890;
                    int *l_937 = &g_42;
                    int *l_938 = &l_934;
                    int *l_940 = &g_580;
                    int *l_941 = &l_939;
                    int *l_942 = &g_580;
                    int *l_943 = &g_42;
                    int *l_944 = &g_453;
                    int *l_945 = &l_890;
                    int *l_946 = &g_42;
                    int *l_947 = &l_939;
                    int *l_948 = &l_939;
                    int *l_949 = &l_891;
                    int *l_950 = &g_580;
                    int *l_951 = &l_891;
                    int *l_952 = &l_891;
                    int *l_953 = &l_890;
                    int *l_954 = &g_42;
                    int *l_956 = &l_891;
                    int *l_957 = &g_580;
                    int *l_958 = &l_939;
                    int *l_959 = &l_890;
                    int *l_960 = &g_42;
                    int *l_961 = &l_934;
                    int *l_962 = &l_955;
                    int *l_963 = &l_934;
                    int *l_965 = &g_42;
                    int *l_966 = (void*)0;
                    int *l_967 = &l_955;
                    int *l_968 = &g_453;
                    int *l_969 = &l_890;
                    int *l_970 = &g_580;
                    int *l_971 = &l_891;
                    int *l_972 = &g_42;
                    int *l_973 = &g_580;
                    int *l_974 = &l_890;
                    int *l_975 = (void*)0;
                    int *l_976 = &l_891;
                    int *l_977 = &g_453;
                    int *l_978 = &l_891;
                    int *l_979 = &l_891;
                    int *l_980 = &l_964;
                    int *l_981 = &l_890;
                    int *l_983 = &l_890;
                    int *l_984 = (void*)0;
                    int *l_985 = &l_955;
                    int *l_986 = (void*)0;
                    int *l_987 = (void*)0;
                    int *l_989 = &l_939;
                    int *l_990 = &l_939;
                    int *l_991 = (void*)0;
                    int *l_992 = &l_891;
                    int *l_993 = &g_453;
                    int *l_995 = (void*)0;
                    int *l_996 = &l_939;
                    int *l_997 = &g_453;
                    int *l_998 = (void*)0;
                    int *l_999 = (void*)0;
                    int l_1000 = (-1L);
                    int *l_1001 = &g_42;
                    int *l_1003 = &g_42;
                    int *l_1004 = &l_939;
                    int *l_1005 = (void*)0;
                    int *l_1006 = &l_955;
                    int *l_1007 = &g_580;
                    int l_1008 = 1L;
                    int *l_1009 = &g_580;
                    int *l_1010 = &l_1000;
                    int *l_1011 = &l_955;
                    int *l_1012 = (void*)0;
                    int *l_1013 = &l_955;
                    int *l_1014 = &l_939;
                    int *l_1015 = &l_1002;
                    g_1016--;
                    l_838 = ((*g_218) = &l_890);
                }
                else
                {
                    (*g_218) = &l_964;
                    return g_53;
                }
            }
        }
        else
        {
            int *l_1032 = &g_580;
            int l_1084 = 0xDCF08A58L;
            int l_1088 = 0x4B249482L;
            int l_1198 = 0xBBEE8F0BL;
            int l_1224 = 0x7D783B10L;
            long long *l_1258 = &g_243;
            union U0 *l_1285 = &l_847;
            union U0 **l_1284 = &l_1285;
            union U3 **l_1313 = (void*)0;
            int l_1380 = 0L;
            int l_1389 = 0x82F4507FL;
            int l_1398 = (-1L);
            union U2 *l_1416 = (void*)0;
            int *l_1425 = &g_580;
            int *l_1426 = &g_580;
            int *l_1427 = &l_1389;
            int *l_1428 = (void*)0;
            int *l_1429 = &l_1002;
            int *l_1430 = &l_1224;
            int *l_1431 = (void*)0;
            int *l_1432 = &l_891;
            int *l_1433 = &g_453;
            int *l_1434 = &l_1088;
            int *l_1435 = &l_1198;
            int *l_1436 = &l_1002;
            int *l_1437 = &l_939;
            int *l_1438 = (void*)0;
            int *l_1439 = &l_1380;
            int *l_1440 = (void*)0;
            int *l_1441 = &l_1198;
            int *l_1442 = &l_1389;
            int *l_1443 = &g_42;
            int *l_1444 = &l_1084;
            int *l_1445 = &g_580;
            int *l_1446 = &l_891;
            int *l_1447 = &l_1198;
            int *l_1448 = &l_955;
            int *l_1449 = (void*)0;
            int *l_1450 = &g_453;
            int *l_1451 = &l_939;
            int *l_1452 = &l_1095;
            int *l_1453 = &l_1198;
            int *l_1455 = &l_891;
            int *l_1456 = &g_580;
            int *l_1457 = &g_580;
            int *l_1458 = (void*)0;
            int *l_1459 = &l_955;
            int *l_1460 = &l_1198;
            int *l_1461 = &g_453;
            int *l_1462 = &l_964;
            int *l_1463 = &l_1398;
            int *l_1464 = &g_42;
            int *l_1466 = &l_891;
            int *l_1467 = &l_1084;
            int *l_1468 = &l_939;
            int *l_1469 = &l_1198;
            int *l_1470 = &l_1198;
            int *l_1471 = &l_1465;
            int *l_1473 = &l_891;
            int *l_1474 = &l_1454;
            int *l_1475 = &l_939;
            int *l_1476 = &l_891;
            int *l_1477 = (void*)0;
            int *l_1478 = &l_1380;
            int *l_1479 = &l_939;
            int *l_1480 = &l_1380;
            int *l_1481 = &g_42;
            int *l_1482 = &l_939;
            int *l_1483 = &l_964;
            int *l_1484 = &l_1095;
            int *l_1485 = &l_1465;
            int *l_1486 = &l_955;
            int *l_1487 = &l_1389;
            int *l_1488 = &g_580;
            int *l_1489 = &g_580;
            if (p_18.f0)
            {
                long long *l_1024 = &g_988;
                int *l_1031 = &l_939;
                int **l_1033 = &l_838;
                short l_1034 = (-1L);
                int l_1138 = (-1L);
                int l_1150 = 0L;
                unsigned l_1228 = 0x85B3631EL;
                unsigned short l_1260 = 6UL;
                union U0 l_1261 = {1L};
                char *l_1267 = (void*)0;
                if ((safe_mod_func_uint16_t_u_u((l_1021 ^ (safe_rshift_func_int8_t_s_u((((*l_1024) ^= (func_38(p_17) <= 5L)) | (safe_lshift_func_int16_t_s_u(p_18.f2, 11))), ((*p_17) | (((safe_lshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((g_174 > ((*l_1032) = (((*g_218) = l_1031) != ((*l_1033) = l_1032)))) | l_1034), p_18.f2)), l_1035)) & 0xB1L) | p_18.f0))))), (*l_1031))))
                {
                    long long l_1055 = 0L;
                    int l_1067 = (-1L);
                    int l_1076 = 1L;
                    if ((**l_1033))
                    {
                        union U1 ***l_1038 = &l_1036;
                        int l_1049 = 1L;
                        (*g_219) = (**g_218);
                        (*g_218) = &l_955;
                    }
                    else
                    {
                        int *l_1056 = (void*)0;
                        int *l_1057 = &g_580;
                        int *l_1058 = (void*)0;
                        int *l_1059 = &g_453;
                        int *l_1060 = &g_42;
                        int *l_1061 = &l_964;
                        int *l_1062 = &l_891;
                        int *l_1063 = &g_453;
                        int *l_1064 = &l_1002;
                        int *l_1065 = &g_453;
                        int *l_1066 = &g_580;
                        int *l_1068 = &l_1002;
                        int *l_1069 = &l_1067;
                        int *l_1070 = &l_1067;
                        int *l_1071 = &l_964;
                        int *l_1072 = &g_42;
                        int *l_1073 = &g_42;
                        int *l_1074 = &g_42;
                        int *l_1075 = &l_891;
                        int *l_1077 = &l_1076;
                        int *l_1078 = &g_453;
                        int *l_1079 = &g_42;
                        int *l_1080 = &g_453;
                        int *l_1081 = (void*)0;
                        int *l_1082 = (void*)0;
                        int *l_1083 = &l_1002;
                        int *l_1085 = &l_964;
                        int *l_1086 = &l_964;
                        int *l_1087 = &g_580;
                        int *l_1089 = &l_955;
                        int *l_1090 = &g_580;
                        int *l_1091 = (void*)0;
                        int *l_1092 = (void*)0;
                        int *l_1093 = &l_1067;
                        int *l_1094 = &g_453;
                        int *l_1096 = (void*)0;
                        int *l_1097 = (void*)0;
                        int *l_1098 = &l_1095;
                        int *l_1099 = (void*)0;
                        int *l_1100 = (void*)0;
                        int *l_1101 = &g_580;
                        int *l_1102 = &l_1084;
                        int *l_1103 = &l_1076;
                        int *l_1104 = &l_964;
                        int *l_1105 = (void*)0;
                        int *l_1106 = (void*)0;
                        int *l_1107 = &l_955;
                        int *l_1108 = &g_453;
                        int *l_1109 = &l_1076;
                        int *l_1110 = &l_1067;
                        int *l_1111 = &l_1088;
                        int *l_1112 = &l_955;
                        int *l_1113 = &l_1088;
                        (*g_219) = (safe_sub_func_int16_t_s_s(l_922, ((~0xA2L) ^ g_175.f0)));
                        --g_1114;
                    }
                    for (g_165 = 18; (g_165 >= 48); ++g_165)
                    {
                        const union U2 ***l_1121 = (void*)0;
                        const union U2 ***l_1122 = (void*)0;
                        const union U2 ***l_1123 = &l_1119;
                        (*l_1123) = l_1119;
                        (**l_1033) |= (*g_44);
                    }
                    for (g_518 = (-4); (g_518 > 15); ++g_518)
                    {
                        const volatile union U1 *l_1127 = &g_175;
                        const volatile union U1 **l_1126 = &l_1127;
                        (*l_1031) = (*l_838);
                        (*l_1126) = &g_175;
                        (*g_219) = (p_18.f2 == (0x317378FAE77A61D2LL >= 0xA187154011A1ABBFLL));
                        (**g_218) = p_18.f2;
                    }
                }
                else
                {
                    int *l_1128 = &l_964;
                    int *l_1129 = &l_1088;
                    int *l_1130 = &l_1002;
                    int *l_1131 = &l_939;
                    int *l_1132 = &l_1088;
                    int *l_1133 = &l_1088;
                    int *l_1134 = &l_1002;
                    int *l_1135 = &l_939;
                    int l_1136 = 0xC137D7A3L;
                    int *l_1137 = &l_939;
                    int *l_1139 = &l_1002;
                    int *l_1140 = &g_580;
                    int *l_1141 = &g_453;
                    int *l_1142 = &g_42;
                    int *l_1143 = &l_1136;
                    int *l_1144 = (void*)0;
                    int *l_1145 = &l_891;
                    int *l_1146 = &g_453;
                    int *l_1147 = &l_1002;
                    int *l_1148 = &l_964;
                    int *l_1149 = &l_1002;
                    int *l_1151 = &g_453;
                    int *l_1152 = &g_42;
                    int *l_1153 = &l_891;
                    int *l_1154 = &l_939;
                    int *l_1155 = &l_1084;
                    int *l_1156 = &l_1095;
                    int *l_1157 = (void*)0;
                    int *l_1158 = (void*)0;
                    int *l_1159 = &l_891;
                    int *l_1160 = &l_1002;
                    int *l_1161 = &l_1088;
                    int *l_1162 = &g_42;
                    int *l_1163 = &l_1150;
                    int *l_1164 = &l_1002;
                    int *l_1165 = (void*)0;
                    int *l_1166 = &l_1136;
                    int *l_1167 = (void*)0;
                    int l_1168 = 0x65C5E325L;
                    int *l_1169 = (void*)0;
                    int *l_1170 = (void*)0;
                    int *l_1171 = &g_453;
                    int *l_1172 = &l_964;
                    int *l_1173 = &l_955;
                    int *l_1174 = &g_453;
                    int *l_1175 = &l_1138;
                    int *l_1176 = &l_964;
                    int *l_1177 = &g_453;
                    int *l_1178 = &g_580;
                    int *l_1179 = &l_939;
                    int *l_1180 = &l_891;
                    int *l_1181 = &l_1138;
                    int *l_1182 = &g_580;
                    int *l_1183 = (void*)0;
                    int *l_1184 = &g_453;
                    int l_1185 = 0L;
                    int *l_1186 = &l_964;
                    int *l_1187 = (void*)0;
                    int *l_1188 = &g_453;
                    int *l_1189 = &g_42;
                    int *l_1190 = (void*)0;
                    int *l_1191 = &l_1095;
                    int l_1192 = 0x6B67564EL;
                    int *l_1193 = &l_964;
                    int *l_1194 = (void*)0;
                    int *l_1195 = &l_1136;
                    int *l_1196 = &g_580;
                    int *l_1197 = &l_964;
                    int *l_1199 = &l_1002;
                    int *l_1200 = &l_1084;
                    int l_1201 = 0xBC90BA02L;
                    int *l_1202 = &l_1168;
                    int *l_1203 = &g_453;
                    int *l_1204 = &l_1150;
                    int *l_1205 = &l_1002;
                    int *l_1206 = &g_42;
                    int *l_1207 = (void*)0;
                    int *l_1208 = &l_1168;
                    int *l_1209 = (void*)0;
                    int *l_1210 = &l_1201;
                    int *l_1211 = &g_42;
                    int *l_1212 = &l_1185;
                    int *l_1213 = &g_580;
                    int *l_1214 = &l_1138;
                    int *l_1215 = &l_1168;
                    int l_1216 = 0xF445D051L;
                    int *l_1217 = &l_1084;
                    int *l_1218 = &l_1185;
                    int *l_1219 = &l_1168;
                    int *l_1220 = &l_1198;
                    int *l_1221 = (void*)0;
                    int *l_1222 = &g_580;
                    int *l_1223 = &g_453;
                    int *l_1225 = &l_1185;
                    int *l_1226 = (void*)0;
                    int *l_1227 = &l_1192;
                    l_1228++;
                    (*l_1033) = (*l_1033);
                    if ((((void*)0 == &g_708) & (*l_1197)))
                    {
                        (*l_1177) |= l_1231;
                        ++g_1232;
                        (*g_218) = (*l_1033);
                        (*l_1195) = p_18.f2;
                    }
                    else
                    {
                        unsigned char l_1238 = 1UL;
                        (*l_1151) = (safe_sub_func_int8_t_s_s((**l_1033), (*p_17)));
                        (*l_1166) |= l_1237;
                        l_1238++;
                        (*l_1033) = &l_955;
                    }
                }
                (*l_1033) = (void*)0;
                for (l_865 = 22; (l_865 >= 29); l_865++)
                {
                    unsigned char *l_1250 = &g_210;
                    long long *l_1259 = &g_384;
                    int *l_1262 = (void*)0;
                    int *l_1263 = &g_453;
                    unsigned *l_1268 = &l_1228;
                    (*l_1263) &= ((safe_lshift_func_int8_t_s_u(((*l_835) |= (((safe_rshift_func_uint16_t_u_s(((((*l_1032) = ((safe_mod_func_int32_t_s_s((func_38(l_835) >= (g_1249 , (((g_177 = ((*l_1250) = ((*l_1032) ^ g_185.f3))) , (((safe_lshift_func_uint8_t_u_u((g_1253 , (((((safe_add_func_int64_t_s_s((((g_177 , ((*g_157) <= ((((safe_rshift_func_int16_t_s_u(((0x985A7FC4L & (-3L)) ^ l_1095), p_18.f2)) != (*g_121)) >= (*g_121)) || (*g_121)))) , l_1258) == l_1259), p_18.f0)) >= l_1260) , p_18.f2) , (*g_121)) != l_922)), g_181)) < (*g_121)) , l_1261)) , p_18.f0))), (**g_218))) , (*g_219))) == l_1095) <= g_53), p_18.f2)) != p_18.f0) != 0xD7E5L)), 7)) | (*p_17));
                    (*g_44) = (l_1271 &= ((*g_121) || ((safe_add_func_uint32_t_u_u(g_210, ((g_175 , g_1266) , ((void*)0 != l_1267)))) , ((((*l_1268) |= g_424.f0) || g_848.f0) , (((safe_add_func_uint16_t_u_u(p_18.f2, (*g_121))) , 0x51CCAF7E29DE1207LL) <= p_18.f0)))));
                }
            }
            else
            {
                unsigned short *l_1278 = &g_1052.f1;
                int l_1281 = (-1L);
                int *l_1282 = (void*)0;
                int *l_1283 = &l_1002;
                int *l_1286 = &g_453;
                union U3 *l_1319 = &g_514;
                union U3 **l_1318 = &l_1319;
                (*l_1286) = ((((((safe_sub_func_uint32_t_u_u(p_18.f2, ((0xBCF1L != 0x0AFAL) , func_38(&g_183)))) , ((*l_1283) &= (safe_lshift_func_int16_t_s_s(func_38(&g_181), ((*l_846) = ((*g_121) = (((safe_mod_func_uint16_t_u_u(((*l_838) = (--(*l_1278))), (-4L))) & (((*l_1258) |= p_18.f0) != p_18.f2)) != l_1281))))))) , 0x66C4L) & p_18.f0) , g_494) == l_1284);
                for (l_1021 = (-9); (l_1021 != 34); l_1021++)
                {
                    unsigned short l_1297 = 4UL;
                    unsigned **l_1298 = (void*)0;
                    unsigned *l_1300 = &g_266;
                    unsigned **l_1299 = &l_1300;
                    unsigned *l_1302 = &g_266;
                    unsigned **l_1301 = &l_1302;
                    (*g_218) = (*g_218);
                    (*l_1283) |= ((((safe_sub_func_uint32_t_u_u(p_18.f0, ((*l_838) |= l_1297))) != (((*l_835) = ((&g_185 != (void*)0) <= p_18.f2)) >= (((safe_sub_func_int16_t_s_s((!(((func_38(p_17) , g_1308) , g_1309) , 0xC6E0L)), p_18.f0)) <= p_18.f2) ^ (*l_1286)))) , (*l_838)) >= (-1L));
                    return g_1308.f1;
                }
                if ((((p_18.f2 <= func_38(&g_9)) <= (-1L)) , ((0L || g_1266.f0) , (!((*l_1032) = l_964)))))
                {
                    unsigned char *l_1328 = &g_210;
                    int *l_1329 = (void*)0;
                    int *l_1330 = &g_42;
                    int *l_1331 = &l_1198;
                    int *l_1332 = &l_1084;
                    int *l_1333 = &l_1198;
                    int *l_1334 = &l_1088;
                    int *l_1335 = (void*)0;
                    int *l_1336 = &l_1224;
                    int *l_1337 = (void*)0;
                    int *l_1338 = (void*)0;
                    int *l_1339 = &l_1088;
                    int *l_1340 = (void*)0;
                    int *l_1341 = &l_939;
                    int *l_1342 = &l_939;
                    int *l_1343 = (void*)0;
                    int *l_1344 = (void*)0;
                    int *l_1345 = &l_1095;
                    int *l_1346 = &l_1088;
                    int *l_1347 = &g_453;
                    int *l_1348 = &l_1088;
                    int *l_1349 = &l_955;
                    int *l_1350 = &g_42;
                    int *l_1351 = &l_1088;
                    int *l_1352 = &l_1198;
                    int *l_1353 = (void*)0;
                    int *l_1354 = &l_1198;
                    int l_1355 = (-4L);
                    int *l_1356 = &l_1198;
                    int *l_1357 = &l_1281;
                    int *l_1358 = &l_939;
                    int *l_1359 = &l_1002;
                    int *l_1360 = &l_891;
                    int *l_1361 = &g_42;
                    int *l_1362 = &l_1355;
                    int *l_1363 = &g_42;
                    int *l_1364 = &g_580;
                    int *l_1365 = &l_1002;
                    int *l_1366 = &l_1198;
                    int *l_1367 = &g_453;
                    int *l_1368 = (void*)0;
                    int *l_1369 = &l_1224;
                    int *l_1370 = &l_1088;
                    int *l_1371 = (void*)0;
                    int *l_1372 = &g_42;
                    int *l_1373 = &l_891;
                    int *l_1374 = &l_1355;
                    int *l_1375 = (void*)0;
                    int *l_1376 = &l_964;
                    int *l_1377 = (void*)0;
                    int *l_1378 = &l_1224;
                    int *l_1379 = &l_939;
                    int *l_1381 = &l_1088;
                    int *l_1382 = &l_964;
                    int *l_1383 = &l_1224;
                    int l_1384 = 0L;
                    int *l_1385 = &l_1088;
                    int *l_1386 = &l_939;
                    int *l_1387 = (void*)0;
                    int *l_1388 = &l_1281;
                    int *l_1390 = (void*)0;
                    int *l_1391 = &l_964;
                    int *l_1392 = &l_1002;
                    int *l_1393 = (void*)0;
                    int *l_1394 = &l_939;
                    int *l_1395 = &l_1084;
                    int *l_1396 = &l_1384;
                    int *l_1397 = &g_580;
                    int l_1399 = 0xBA6779D8L;
                    int *l_1400 = (void*)0;
                    int *l_1401 = (void*)0;
                    int *l_1402 = (void*)0;
                    int *l_1403 = (void*)0;
                    for (l_1035 = 14; (l_1035 >= (-22)); l_1035 = safe_sub_func_uint16_t_u_u(l_1035, 1))
                    {
                        char **l_1312 = &l_835;
                        union U3 *l_1317 = &g_1052;
                        union U3 **l_1316 = &l_1317;
                        char ***l_1320 = &g_743;
                        (*l_1032) = (((void*)0 != l_1032) < (func_38(((*l_1312) = &g_183)) | g_122));
                        (*g_44) ^= p_18.f0;
                        (*g_44) = (l_1313 != (((*p_17) && (safe_mod_func_uint64_t_u_u(((*l_838) == g_514.f4), (-7L)))) , (l_1318 = l_1316)));
                        (*l_1320) = &p_17;
                    }
                    (*l_1286) = ((void*)0 != g_1321);
                    (*g_44) = (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(p_18.f0, (g_578.f0 == (((*l_1328) = g_152.f2) || (*l_1032))))), 3L));
                    --g_1404;
                }
                else
                {
                    (*g_44) = p_18.f2;
                    if ((func_38(p_17) , l_1021))
                    {
                        (*l_1284) = &p_18;
                    }
                    else
                    {
                        (*l_838) ^= (((*g_121) | (g_424.f3 == g_42)) > (g_514.f1 < (*p_16)));
                        (*l_1286) &= ((0x2E30CC7B8DCACAEBLL != p_18.f2) , p_18.f2);
                    }
                    (*l_838) = func_38(l_1407);
                }
                if (p_18.f0)
                {
                    char *l_1412 = &g_9;
                    int **l_1415 = &l_838;
                    if ((*g_44))
                    {
                        (*l_1032) = ((safe_lshift_func_uint8_t_u_s((p_18.f2 != (g_708 , (l_1002 = (safe_rshift_func_uint8_t_u_s((p_18.f0 >= ((g_580 , func_38(l_1412)) < ((*g_157) != (*l_1032)))), (safe_rshift_func_int8_t_s_u((l_1415 == (void*)0), 1))))))), (*p_16))) , 0x6F40EFEFL);
                    }
                    else
                    {
                        union U2 **l_1417 = &l_1416;
                        (*l_1283) = (((*l_1417) = l_1416) == (void*)0);
                        (**l_1415) &= p_18.f0;
                    }
                }
                else
                {
                    unsigned char l_1420 = 8UL;
                    for (l_847.f1 = 0; (l_847.f1 <= 7); l_847.f1++)
                    {
                        if (l_1420)
                            break;
                    }
                    for (l_1237 = 26; (l_1237 > 7); l_1237 = safe_sub_func_int32_t_s_s(l_1237, 6))
                    {
                        int *l_1423 = (void*)0;
                        (*g_218) = l_1423;
                        (*g_218) = (void*)0;
                        if (p_18.f0)
                            break;
                        (*l_1286) |= func_38(l_1424);
                    }
                    (*l_1283) |= ((p_18.f0 ^ (*g_44)) < ((*l_1286) ^= (*l_838)));
                    (*g_218) = (*g_218);
                }
            }
            --g_1490;
        }
        (*l_1119) = l_1493;
    }
    l_1494 = p_18.f0;
    return g_737;
}







static union U0 func_21(long long p_22, union U0 p_23, unsigned char p_24, char ** p_25, unsigned p_26)
{
    unsigned short l_744 = 65528UL;
    int l_745 = 0xD38F8D48L;
    int *l_746 = (void*)0;
    int *l_747 = &g_42;
    int *l_748 = &g_580;
    int *l_749 = &l_745;
    int *l_750 = &g_453;
    int *l_751 = &g_42;
    int *l_752 = &g_580;
    int *l_753 = &g_453;
    int *l_754 = &l_745;
    int l_755 = (-6L);
    int *l_756 = &g_42;
    int *l_757 = &g_42;
    int *l_758 = &l_755;
    int *l_759 = &g_42;
    int l_760 = 0xE50A85A7L;
    unsigned char l_761 = 252UL;
    unsigned long long l_781 = 5UL;
    unsigned char *l_783 = &g_210;
    short l_784 = (-2L);
    unsigned short *l_785 = &g_119.f1;
    union U0 l_786 = {1L};
    unsigned *l_826 = &g_266;
    unsigned **l_825 = &l_826;
    unsigned long long l_827 = 0x046D7A7EDF8D0564LL;
    unsigned long long *l_828 = &l_827;
    l_745 = ((*g_121) , ((g_708 , l_744) , func_38((((void*)0 != &p_22) , &g_183))));
    --l_761;
    if ((safe_sub_func_uint64_t_u_u(((*l_753) , (*g_157)), (1L >= (safe_unary_minus_func_uint32_t_u((((safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(g_116, ((*l_749) | (safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s((safe_sub_func_int8_t_s_s(((0xFBC69C0EL & ((p_22 || ((*l_785) &= (safe_add_func_uint8_t_u_u(((*l_783) = (safe_lshift_func_uint16_t_u_u((((((l_781 , (safe_unary_minus_func_int32_t_s(func_38(&g_181)))) || 0xA31DF79AB40D9E61LL) < g_518) != 4294967292UL) == g_243), 13))), l_784)))) == 0x2982E590319A3A14LL)) && 0x4F04L), (*l_752))), 0x4CCA481A4CEB56BELL)), 3))))) == 0x449F41A8L) != (*l_756)), (*l_759))) > 1UL) >= p_24)))))))
    {
        l_748 = (*g_218);
        return l_786;
    }
    else
    {
        char l_791 = (-1L);
        int *l_792 = &g_580;
        int *l_793 = &l_760;
        int *l_794 = &g_453;
        int *l_795 = (void*)0;
        int *l_796 = &g_580;
        int *l_797 = &g_42;
        int *l_798 = &l_745;
        short l_799 = 0L;
        int *l_800 = (void*)0;
        int *l_801 = &l_745;
        int *l_802 = (void*)0;
        int *l_803 = &g_580;
        int *l_804 = &g_580;
        int *l_805 = &l_755;
        int *l_806 = &l_745;
        int *l_807 = &l_755;
        int *l_808 = &g_580;
        int *l_809 = &l_760;
        int l_810 = 0xC542ED70L;
        int *l_811 = &l_760;
        int *l_812 = &g_453;
        (*l_751) = (safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(0L, func_38(&g_183))), (*g_157)));
        g_813--;
        for (g_384 = (-9); (g_384 > (-27)); g_384 = safe_sub_func_int64_t_s_s(g_384, 1))
        {
            unsigned long long l_818 = 0x64395F246BEC49E2LL;
            (*l_804) |= l_818;
        }
    }
    (*l_753) = (((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(((g_175 , &g_737) == ((*l_825) = (void*)0)), ((*l_783) &= (((*l_828) = l_827) && (((safe_rshift_func_uint8_t_u_s(func_38(l_783), (g_453 == (((!(safe_unary_minus_func_int16_t_s(((((g_514.f3 ^ (+((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int8_t_s(((*l_748) ^ (-5L)))), 3)) < g_42))) > (-2L)) , (*l_750)) < (*l_756))))) , (*l_758)) <= g_165)))) != g_514.f4) <= g_42))))), 0x534F3B6E0478C9F5LL)) > (*l_748)), (*l_754))) <= p_23.f2) != p_24);
    return l_786;
}







static union U0 func_27(const char * p_28, char ** p_29, char ** p_30, const char * p_31)
{
    unsigned l_500 = 0x339FBE77L;
    int *l_515 = (void*)0;
    unsigned short l_577 = 0x5559L;
    int l_678 = 1L;
    int l_681 = 0x9C5949C6L;
    union U0 l_742 = {0xDE4944E8L};
    for (g_152.f0 = 0; (g_152.f0 != (-13)); g_152.f0--)
    {
        long long l_570 = 1L;
        int *l_574 = &g_453;
        union U0 *** const l_599 = &g_494;
        int l_632 = (-2L);
        char l_675 = 0x00L;
        unsigned short l_702 = 65528UL;
        union U2 * const l_705 = (void*)0;
        for (g_141.f1 = 0; (g_141.f1 == 57); g_141.f1 = safe_add_func_int32_t_s_s(g_141.f1, 3))
        {
            int l_501 = (-10L);
            int l_505 = (-1L);
            union U0 l_509 = {-1L};
            long long l_593 = (-1L);
            unsigned char *l_596 = &g_210;
            int l_618 = 0xD86BD461L;
            int l_635 = 0xDEA62C9CL;
            unsigned char l_660 = 4UL;
            if (l_500)
            {
                if (l_501)
                    break;
                (*g_44) &= l_501;
            }
            else
            {
                unsigned char *l_502 = (void*)0;
                unsigned char *l_503 = (void*)0;
                unsigned char *l_504 = &g_210;
                int *l_507 = &g_141.f0;
                int **l_506 = &l_507;
                int ***l_508 = &l_506;
                l_505 &= (((*l_504) = l_501) && (func_38(&g_181) , ((**p_30) , 0x86L)));
                (*l_508) = l_506;
                return l_509;
            }
            for (g_453 = 0; (g_453 >= (-2)); g_453--)
            {
                int l_516 = 4L;
                int l_535 = 0x0A43986BL;
                for (l_509.f0 = 22; (l_509.f0 < 27); l_509.f0 = safe_add_func_uint8_t_u_u(l_509.f0, 9))
                {
                    short l_536 = 0xDCD8L;
                    int l_547 = (-1L);
                    int l_561 = 0x1EB0C2D3L;
                    const unsigned l_562 = 18446744073709551615UL;
                    int l_563 = 0L;
                    int **l_576 = &g_219;
                    if (func_38(&g_9))
                    {
                        int *l_517 = &l_505;
                        int *l_519 = &g_42;
                        int *l_520 = &g_42;
                        int *l_521 = &g_42;
                        int *l_522 = &g_42;
                        int *l_523 = &l_505;
                        int *l_524 = (void*)0;
                        int *l_525 = &l_505;
                        int *l_526 = (void*)0;
                        int l_527 = (-7L);
                        int *l_528 = &g_42;
                        int *l_529 = (void*)0;
                        int *l_530 = &l_505;
                        int *l_531 = &l_501;
                        int *l_532 = (void*)0;
                        int *l_533 = &l_505;
                        int *l_534 = &l_527;
                        int *l_537 = &g_42;
                        int *l_538 = &g_42;
                        int *l_539 = &l_505;
                        int *l_540 = &l_527;
                        int *l_541 = &l_527;
                        int *l_542 = (void*)0;
                        int *l_543 = &g_42;
                        int *l_544 = &l_527;
                        int *l_545 = &l_527;
                        int *l_546 = &g_42;
                        int *l_548 = (void*)0;
                        (*g_218) = (g_514 , l_515);
                        ++g_549;
                        (*l_534) = func_38((*p_29));
                    }
                    else
                    {
                        unsigned long long *l_554 = &g_514.f4;
                        int l_559 = (-3L);
                        l_563 &= (((((((((safe_sub_func_uint64_t_u_u(((*l_554) = l_547), ((safe_lshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s(l_559, 0xD8D492CEL)) <= (safe_unary_minus_func_uint16_t_u((func_56(&l_505, (l_561 = 0x14L), &l_515, &g_44, l_516) , g_266)))), g_152.f0)) ^ l_509.f0))) | (-7L)) != 0x2BL) , g_379) <= l_562) <= l_559) == l_516) , 0xC6D1L) , 0xC724B248L);
                        return g_152;
                    }
                    for (g_165 = (-18); (g_165 != 21); g_165++)
                    {
                        unsigned *l_571 = &l_500;
                        int **l_575 = &l_574;
                        int *l_579 = &l_505;
                        g_580 |= ((((safe_mod_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((~((*l_571) = l_570)), ((*l_579) &= ((((safe_mod_func_int32_t_s_s(((l_570 , g_578) , func_38(&g_181)), (**l_575))) <= 0x97L) , l_516) <= (-10L))))) && (*g_157)), (**l_575))) > l_577) < (*l_574)) | g_174);
                        (*l_579) = (g_243 , (*g_44));
                        if ((*g_44))
                            continue;
                        (*l_579) = (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(g_453, 15)), 1)), 5)), (*l_574)));
                    }
                    for (g_53 = 21; (g_53 != (-17)); g_53 = safe_sub_func_uint8_t_u_u(g_53, 1))
                    {
                        unsigned char l_591 = 1UL;
                        (*g_218) = l_515;
                        (*g_44) = (0x3DL && l_501);
                        (*g_44) &= 1L;
                        if (l_591)
                            break;
                    }
                }
                if ((*l_574))
                    break;
            }
            l_505 = ((safe_unary_minus_func_int64_t_s(l_593)) && (safe_sub_func_uint8_t_u_u(((*l_596) &= (*l_574)), (safe_sub_func_uint8_t_u_u((l_599 != (void*)0), func_38((*p_29)))))));
            for (g_453 = 0; (g_453 > 11); g_453++)
            {
                long long l_674 = 0xD637A361F727BE67LL;
                int l_676 = (-1L);
                union U2 *l_707 = &g_708;
                union U2 **l_706 = &l_707;
                int **l_709 = &l_574;
            }
        }
        if ((*l_574))
            continue;
        for (g_116 = 28; (g_116 < (-28)); --g_116)
        {
            (*l_574) = l_678;
        }
    }
    return l_742;
}







static char ** func_33(long long p_34, int p_35, char ** p_36)
{
    char *l_40 = &g_9;
    int *l_45 = &g_42;
    unsigned l_208 = 1UL;
    union U1 *l_434 = &g_185;
    int l_450 = 0L;
    int l_457 = (-4L);
    int l_461 = 0xD5B2A228L;
    int l_473 = 0L;
    union U0 ***l_495 = &g_494;
    (*l_45) = func_38(l_40);
    for (p_34 = 20; (p_34 < 3); --p_34)
    {
        short *l_52 = &g_53;
        int l_65 = 0x7228D029L;
        unsigned char *l_209 = &g_210;
        unsigned char *l_211 = (void*)0;
        unsigned char *l_212 = (void*)0;
        unsigned char *l_213 = (void*)0;
        unsigned char *l_214 = (void*)0;
        int l_215 = 9L;
        char *l_216 = &g_217;
        int l_440 = 6L;
        if (p_34)
            break;
    }
    (*l_495) = g_494;
    return p_36;
}







static int func_38(char * p_39)
{
    int *l_41 = &g_42;
    int **l_43 = (void*)0;
    g_44 = l_41;
    return (*g_44);
}







static union U1 func_56(int * p_57, unsigned char p_58, int ** p_59, int ** p_60, unsigned p_61)
{
    unsigned char *l_222 = &g_210;
    int l_225 = 6L;
    unsigned long long *l_226 = &g_119.f4;
    unsigned long long *l_227 = &g_141.f1;
    int l_228 = 1L;
    long long l_233 = 0L;
    char *l_332 = (void*)0;
    int *l_417 = &l_225;
    if ((safe_mod_func_uint8_t_u_u(((*l_222) ^= ((-3L) & p_58)), (safe_lshift_func_int8_t_s_s(l_225, (((l_228 |= p_58) > 1UL) , (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(65535UL, ((g_179 = p_58) , (((l_228 ^ l_228) || 18446744073709551615UL) > l_233)))), l_228))))))))
    {
        char *l_240 = &g_183;
        long long *l_241 = &l_233;
        long long *l_242 = &g_243;
        union U1 * const l_244 = (void*)0;
        int l_245 = 0x471D0ACDL;
        int *l_246 = &g_42;
        int *l_247 = &l_245;
        int *l_248 = (void*)0;
        int *l_249 = &l_225;
        int *l_250 = &l_228;
        int *l_251 = (void*)0;
        int l_252 = 0xAAE0F3F8L;
        int *l_253 = &l_225;
        int *l_254 = &l_252;
        int *l_255 = (void*)0;
        int *l_256 = &l_228;
        int *l_257 = (void*)0;
        int *l_258 = &l_245;
        int *l_259 = &l_228;
        int *l_260 = (void*)0;
        int *l_261 = &l_252;
        int *l_262 = &l_228;
        int *l_263 = (void*)0;
        int *l_264 = &l_225;
        int *l_265 = &g_42;
        short l_269 = 5L;
        (*p_57) = (((safe_add_func_uint8_t_u_u((&l_228 == (*g_218)), ((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((func_38(l_240) , (0xA095ECA5D8F89870LL || ((((*l_240) = g_42) < (&g_185 != (((*l_242) ^= ((*l_241) = 0L)) , l_244))) , l_228))) & p_58), 7)), p_61)) ^ 0UL) , (-1L)) , l_245))) == p_58) ^ (*p_57));
        --g_266;
        (*l_261) = (l_269 || (safe_sub_func_uint8_t_u_u((l_233 ^ p_61), (safe_add_func_int64_t_s_s((*l_258), ((g_119.f3 , (((g_116 = ((g_9 == (((((*l_249) = ((safe_mod_func_uint16_t_u_u(func_38(l_222), l_233)) != (*l_247))) && (*p_57)) < (-4L)) == p_61)) && 0x70L)) , l_233) || p_58)) && l_225))))));
    }
    else
    {
        unsigned long long *l_282 = &g_165;
        unsigned short *l_283 = (void*)0;
        unsigned short *l_284 = &g_119.f1;
        int l_289 = 0L;
        unsigned char *l_290 = (void*)0;
        unsigned char *l_291 = (void*)0;
        unsigned char *l_292 = &g_177;
        int l_293 = 1L;
        unsigned *l_411 = (void*)0;
        unsigned **l_410 = &l_411;
        if ((g_116 & ((0x81L & ((*l_222)++)) || (l_293 &= ((safe_sub_func_uint8_t_u_u(p_58, (g_185.f2 , (l_228 = ((*l_292) = (((*l_284) = (safe_sub_func_uint16_t_u_u((l_226 != l_282), ((*g_121) = func_38(&g_217))))) , ((*l_222) |= (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s(((((*l_284) = (l_289 | l_233)) > 0x99CAL) <= p_58), 10)) , l_225), p_61))))))))) && 0x6D446BF52A38B0DALL)))))
        {
            short l_303 = 0x255CL;
            for (g_177 = 28; (g_177 <= 32); ++g_177)
            {
                long long l_296 = 0x4742CAFECB2317F3LL;
                int *l_297 = (void*)0;
                int *l_298 = &l_293;
                int *l_299 = &l_228;
                int *l_300 = &l_228;
                int *l_301 = &l_293;
                int *l_302 = &l_289;
                int *l_304 = &l_293;
                int *l_305 = (void*)0;
                int *l_306 = &l_293;
                int *l_307 = (void*)0;
                int *l_308 = &l_225;
                int *l_309 = &g_42;
                int *l_310 = &l_293;
                int *l_311 = &l_293;
                int *l_312 = &l_228;
                int *l_313 = (void*)0;
                int *l_314 = (void*)0;
                int *l_315 = &l_225;
                int *l_316 = (void*)0;
                int *l_317 = &g_42;
                int *l_318 = &g_42;
                l_296 ^= (*g_44);
                ++g_319;
            }
        }
        else
        {
            short l_334 = 0xF8F8L;
            int l_335 = 0x929257CBL;
            union U1 * const l_399 = &g_185;
            unsigned ***l_412 = &l_410;
            unsigned *l_413 = &g_174;
            union U3 *l_416 = &g_119;
            if ((~func_38(&g_183)))
            {
                (*p_57) ^= (g_152.f0 == g_205);
                for (g_266 = 0; (g_266 > 13); g_266 = safe_add_func_uint16_t_u_u(g_266, 9))
                {
                    union U1 *l_325 = &g_185;
                    union U1 **l_324 = &l_325;
                    union U1 *l_327 = (void*)0;
                    union U1 **l_326 = &l_327;
                    (*l_326) = ((*l_324) = &g_185);
                    (*g_44) = (9L >= (p_58 , 18446744073709551611UL));
                }
            }
            else
            {
                char *l_333 = &g_183;
                int l_337 = 0L;
                int l_382 = 0x0111C0EDL;
                int *l_409 = &l_382;
                for (g_177 = 0; (g_177 >= 52); g_177++)
                {
                    char l_388 = 0x18L;
                    unsigned long long l_392 = 2UL;
                    union U1 *l_400 = (void*)0;
                    long long *l_401 = &g_384;
                    unsigned short l_402 = 0UL;
                }
                (*l_409) = (safe_sub_func_uint32_t_u_u((g_384 && (250UL && (safe_rshift_func_uint8_t_u_u((l_284 != l_283), (safe_add_func_int32_t_s_s(l_382, ((((((l_335 = l_228) ^ l_334) , (~3UL)) == ((*p_57) = (**p_60))) || l_293) & 65535UL))))))), 0x4F8C334BL));
            }
            (*l_412) = l_410;
            l_335 ^= ((*g_44) |= (!(((++(*l_413)) , ((&g_119 != l_416) <= p_58)) == 0x34L)));
        }
        l_417 = &l_293;
        (*l_417) = (((func_38(&g_183) , 0x028CL) ^ (((g_185.f3 & 0x24ACL) , ((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_141.f2, (((void*)0 != l_284) != ((((safe_add_func_uint32_t_u_u(g_185.f0, l_293)) < l_289) & g_183) < p_61)))), 65535UL)) | (*l_417))) < (*g_121))) != g_185.f2);
    }
    (*p_57) = (*p_57);
    return g_424;
}







static int * func_62(int p_63, long long p_64)
{
    char *l_67 = &g_9;
    char ** const l_66 = &l_67;
    int l_114 = (-1L);
    int l_120 = 0L;
    union U3 *l_127 = &g_119;
    short *l_132 = (void*)0;
    char **l_133 = &l_67;
    const union U0 *l_153 = &g_141;
    int *l_161 = (void*)0;
    union U1 *l_184 = &g_185;
    int *l_187 = (void*)0;
    int *l_188 = &g_42;
    int *l_189 = &l_114;
    int *l_190 = &g_42;
    int *l_191 = (void*)0;
    int *l_192 = &l_114;
    int *l_193 = &g_42;
    int *l_194 = &l_120;
    int *l_195 = &l_120;
    int *l_196 = (void*)0;
    int *l_197 = &g_42;
    int *l_198 = &g_42;
    int *l_199 = &l_120;
    int *l_200 = &l_120;
    int *l_201 = &l_120;
    int *l_202 = &l_114;
    int *l_203 = &g_42;
    int *l_204 = &l_114;
    if ((l_66 != (void*)0))
    {
        int **l_68 = &g_44;
        (*l_68) = &g_42;
    }
    else
    {
        int *l_69 = &g_42;
        int *l_70 = &g_42;
        int *l_71 = &g_42;
        int *l_72 = (void*)0;
        int *l_73 = (void*)0;
        int *l_74 = &g_42;
        int *l_75 = &g_42;
        int *l_76 = &g_42;
        int *l_77 = (void*)0;
        int *l_78 = &g_42;
        int l_79 = 0x11E8E103L;
        int *l_80 = (void*)0;
        int *l_81 = &l_79;
        int *l_82 = &l_79;
        int *l_83 = &g_42;
        int *l_84 = &g_42;
        int *l_85 = &g_42;
        int *l_86 = &l_79;
        int *l_87 = &g_42;
        int *l_88 = &l_79;
        int *l_89 = (void*)0;
        int l_90 = 2L;
        int *l_91 = (void*)0;
        int *l_92 = (void*)0;
        int *l_93 = &l_90;
        int *l_94 = &l_79;
        int *l_95 = &g_42;
        int l_96 = (-8L);
        int *l_97 = &g_42;
        int *l_98 = &g_42;
        int *l_99 = &l_79;
        int *l_100 = &g_42;
        int *l_101 = &l_90;
        int *l_102 = &g_42;
        int *l_103 = &l_96;
        int *l_104 = &g_42;
        int *l_105 = &l_96;
        int *l_106 = (void*)0;
        int *l_107 = &g_42;
        int l_108 = (-1L);
        int *l_109 = &g_42;
        int *l_110 = &l_79;
        unsigned long long l_115 = 0x495B2841C2FCEC4ELL;
        union U0 *l_151 = &g_152;
        unsigned l_170 = 0x8A92953CL;
        unsigned *l_173 = &g_174;
        unsigned char *l_176 = &g_177;
        unsigned char *l_178 = &g_179;
        char *l_180 = &g_181;
        char *l_182 = &g_183;
        union U1 **l_186 = &l_184;
        --g_111;
        if (((((l_114 = p_63) || 0xE6B7L) || ((g_116 = l_115) <= (safe_mod_func_uint16_t_u_u(func_38((g_119 , (*l_66))), p_64)))) > (g_119.f1 , ((l_120 = (((g_119.f3 == 0UL) & g_119.f1) , (*l_107))) , l_120))))
        {
            unsigned char l_125 = 0xC5L;
            unsigned long long *l_126 = &l_115;
            union U3 **l_128 = &l_127;
            char **l_135 = &l_67;
            union U0 *l_145 = &g_141;
            (*l_95) ^= (((p_63 , g_121) != (void*)0) ^ ((*l_126) = (safe_add_func_int32_t_s_s(l_125, ((void*)0 != &g_42)))));
            (*l_128) = l_127;
            if ((*g_44))
            {
                int **l_129 = (void*)0;
                int **l_130 = &l_103;
                char ***l_134 = &l_133;
                g_44 = &g_42;
                (*l_130) = &l_120;
                if (((((safe_unary_minus_func_uint8_t_u(g_119.f1)) == ((**l_130) > (p_64 >= (((g_122 , 2UL) , (void*)0) != l_132)))) && ((((*l_134) = l_133) == l_135) < p_63)) , p_63))
                {
                    l_120 = 0x7817F253L;
                    for (l_79 = 0; (l_79 != 2); l_79 = safe_add_func_int64_t_s_s(l_79, 2))
                    {
                        union U0 **l_138 = (void*)0;
                        union U0 *l_140 = &g_141;
                        union U0 **l_139 = &l_140;
                        int l_142 = 0x229B2AB3L;
                        (*l_128) = &g_119;
                        p_63 = ((*l_101) |= ((void*)0 == l_128));
                        (*l_139) = (void*)0;
                        (*g_44) &= l_142;
                    }
                }
                else
                {
                    union U0 *l_144 = &g_141;
                    union U0 **l_143 = &l_144;
                    union U0 **l_146 = &l_145;
                    int *l_149 = &g_119.f3;
                    int *l_150 = (void*)0;
                    l_150 = (((*l_149) = (g_111 == ((((*l_143) = &g_141) != ((*l_146) = l_145)) == ((l_125 != ((safe_lshift_func_int16_t_s_u(0L, 12)) != p_64)) ^ p_63)))) , &g_42);
                }
            }
            else
            {
                const union U0 **l_154 = &l_153;
                l_151 = &g_141;
                (*l_154) = (((*l_69) = (&g_122 == &g_122)) , l_153);
                for (g_152.f1 = 14; (g_152.f1 == 14); g_152.f1 = safe_add_func_uint64_t_u_u(g_152.f1, 2))
                {
                    unsigned char l_159 = 0x26L;
                    if ((g_157 != (void*)0))
                    {
                        unsigned l_160 = 0xB81D3E15L;
                        int **l_162 = &l_80;
                        (*l_100) &= (l_159 || (l_160 == (((*l_162) = l_161) != (void*)0)));
                        if ((*g_44))
                            break;
                        if ((*g_44))
                            break;
                        if ((*g_44))
                            continue;
                    }
                    else
                    {
                        int **l_163 = (void*)0;
                        int **l_164 = &l_82;
                        if ((*g_44))
                            break;
                        (*l_164) = &p_63;
                    }
                    return &g_42;
                }
            }
        }
        else
        {
            ++g_165;
            return &g_42;
        }
        (*l_186) = ((((p_63 = (p_63 | ((((*l_74) = (safe_rshift_func_uint16_t_u_u(4UL, 7))) < ((*l_88) = 0xFE90CC9FL)) < g_152.f0))) & ((&g_122 != ((((*l_182) = ((*l_180) = (((((p_64 != (l_170 | ((*l_178) &= ((*l_176) ^= (safe_sub_func_int16_t_s_s(((((*l_173) |= p_64) , g_175) , 0L), 0xF0F7L)))))) || p_64) < 0xB1440151F1203DB6LL) > 0x91EAL) == g_141.f0))) && 7UL) , &g_122)) <= g_119.f1)) ^ 0x68L) , l_184);
    }
    ++g_205;
    return &g_42;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_119.f1, "g_119.f1", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_141.f0, "g_141.f0", print_hash_value);
    transparent_crc(g_141.f2, "g_141.f2", print_hash_value);
    transparent_crc(g_152.f0, "g_152.f0", print_hash_value);
    transparent_crc(g_152.f2, "g_152.f2", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_175.f0, "g_175.f0", print_hash_value);
    transparent_crc(g_175.f2, "g_175.f2", print_hash_value);
    transparent_crc(g_175.f3, "g_175.f3", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_185.f0, "g_185.f0", print_hash_value);
    transparent_crc(g_185.f2, "g_185.f2", print_hash_value);
    transparent_crc(g_185.f3, "g_185.f3", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_424.f0, "g_424.f0", print_hash_value);
    transparent_crc(g_424.f2, "g_424.f2", print_hash_value);
    transparent_crc(g_424.f3, "g_424.f3", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_514.f0, "g_514.f0", print_hash_value);
    transparent_crc(g_514.f1, "g_514.f1", print_hash_value);
    transparent_crc(g_514.f3, "g_514.f3", print_hash_value);
    transparent_crc(g_514.f4, "g_514.f4", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_578.f0, "g_578.f0", print_hash_value);
    transparent_crc(g_578.f2, "g_578.f2", print_hash_value);
    transparent_crc(g_578.f3, "g_578.f3", print_hash_value);
    transparent_crc(g_580, "g_580", print_hash_value);
    transparent_crc(g_667.f0, "g_667.f0", print_hash_value);
    transparent_crc(g_667.f1, "g_667.f1", print_hash_value);
    transparent_crc(g_667.f3, "g_667.f3", print_hash_value);
    transparent_crc(g_667.f4, "g_667.f4", print_hash_value);
    transparent_crc(g_708.f0, "g_708.f0", print_hash_value);
    transparent_crc(g_737, "g_737", print_hash_value);
    transparent_crc(g_813, "g_813", print_hash_value);
    transparent_crc(g_848.f0, "g_848.f0", print_hash_value);
    transparent_crc(g_848.f2, "g_848.f2", print_hash_value);
    transparent_crc(g_848.f3, "g_848.f3", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_863, "g_863", print_hash_value);
    transparent_crc(g_907.f0, "g_907.f0", print_hash_value);
    transparent_crc(g_907.f2, "g_907.f2", print_hash_value);
    transparent_crc(g_907.f3, "g_907.f3", print_hash_value);
    transparent_crc(g_925, "g_925", print_hash_value);
    transparent_crc(g_982, "g_982", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_994, "g_994", print_hash_value);
    transparent_crc(g_1016, "g_1016", print_hash_value);
    transparent_crc(g_1052.f1, "g_1052.f1", print_hash_value);
    transparent_crc(g_1114, "g_1114", print_hash_value);
    transparent_crc(g_1232, "g_1232", print_hash_value);
    transparent_crc(g_1249.f0, "g_1249.f0", print_hash_value);
    transparent_crc(g_1249.f1, "g_1249.f1", print_hash_value);
    transparent_crc(g_1249.f3, "g_1249.f3", print_hash_value);
    transparent_crc(g_1249.f4, "g_1249.f4", print_hash_value);
    transparent_crc(g_1253.f0, "g_1253.f0", print_hash_value);
    transparent_crc(g_1266.f0, "g_1266.f0", print_hash_value);
    transparent_crc(g_1266.f2, "g_1266.f2", print_hash_value);
    transparent_crc(g_1266.f3, "g_1266.f3", print_hash_value);
    transparent_crc(g_1308.f0, "g_1308.f0", print_hash_value);
    transparent_crc(g_1308.f1, "g_1308.f1", print_hash_value);
    transparent_crc(g_1308.f3, "g_1308.f3", print_hash_value);
    transparent_crc(g_1308.f4, "g_1308.f4", print_hash_value);
    transparent_crc(g_1309.f0, "g_1309.f0", print_hash_value);
    transparent_crc(g_1404, "g_1404", print_hash_value);
    transparent_crc(g_1490, "g_1490", print_hash_value);
    transparent_crc(g_1503.f0, "g_1503.f0", print_hash_value);
    transparent_crc(g_1503.f1, "g_1503.f1", print_hash_value);
    transparent_crc(g_1503.f3, "g_1503.f3", print_hash_value);
    transparent_crc(g_1503.f4, "g_1503.f4", print_hash_value);
    transparent_crc(g_1504.f0, "g_1504.f0", print_hash_value);
    transparent_crc(g_1568, "g_1568", print_hash_value);
    transparent_crc(g_1652.f0, "g_1652.f0", print_hash_value);
    transparent_crc(g_1652.f1, "g_1652.f1", print_hash_value);
    transparent_crc(g_1652.f3, "g_1652.f3", print_hash_value);
    transparent_crc(g_1652.f4, "g_1652.f4", print_hash_value);
    transparent_crc(g_1654, "g_1654", print_hash_value);
    transparent_crc(g_1667.f0, "g_1667.f0", print_hash_value);
    transparent_crc(g_1667.f1, "g_1667.f1", print_hash_value);
    transparent_crc(g_1667.f3, "g_1667.f3", print_hash_value);
    transparent_crc(g_1667.f4, "g_1667.f4", print_hash_value);
    transparent_crc(g_1716, "g_1716", print_hash_value);
    transparent_crc(g_1728, "g_1728", print_hash_value);
    transparent_crc(g_1738.f0, "g_1738.f0", print_hash_value);
    transparent_crc(g_1738.f2, "g_1738.f2", print_hash_value);
    transparent_crc(g_1738.f3, "g_1738.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
