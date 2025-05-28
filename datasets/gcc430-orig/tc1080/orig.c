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
   volatile char f0;
   unsigned f1;
   volatile char f2;
   unsigned short f3;
   volatile unsigned short f4;
   volatile unsigned f5;
   int f6;
};


static char g_12 = 0x65L;
static int g_22 = 0x46B43D27L;
static volatile int g_48 = 0x8F57F54AL;
static volatile int *g_47 = &g_48;
static volatile int **g_46 = &g_47;
static volatile struct S0 g_90 = {0xC6L,0x06A86E60L,-9L,0x04F3L,0xCCC8L,18446744073709551615UL,0xC4855F07L};
static volatile struct S0 g_91 = {0L,0x2D778712L,-1L,0x5972L,65533UL,18446744073709551615UL,0L};
static volatile struct S0 g_92 = {0xA9L,4294967295UL,0x34L,65535UL,0xA938L,0x81B7FFC8L,0xAB22BEB8L};
static int **g_106 = (void*)0;
static struct S0 g_108 = {-1L,0UL,-5L,65527UL,0x8C36L,0x4ADBCF70L,0xB84D8593L};
static struct S0 *g_135 = &g_108;
static struct S0 **g_134 = &g_135;
static struct S0 g_167 = {1L,0xC0205F72L,1L,0x15A1L,65526UL,18446744073709551611UL,0xFA4CC697L};
static struct S0 g_168 = {0x25L,4294967288UL,0L,1UL,0UL,0UL,0x64B399E4L};
static volatile struct S0 g_208 = {0L,4294967287UL,1L,6UL,0x2A9CL,18446744073709551615UL,0xAA6036CBL};
static volatile struct S0 g_209 = {0x92L,0UL,0xBAL,0x03F5L,65533UL,0x83723A68L,0x7BAAA9AAL};
static struct S0 g_211 = {0x4CL,0x27973213L,0x6DL,1UL,0xEAA7L,18446744073709551610UL,0x6B2B8A50L};
static struct S0 g_235 = {1L,0xEC19F97CL,0x15L,4UL,0xCE55L,6UL,0x1F8A238CL};
static struct S0 g_256 = {0x6AL,1UL,0x25L,0x94D9L,0xB292L,0UL,-1L};
static struct S0 g_257 = {1L,0UL,0xDEL,0xCC24L,1UL,0x36999CFFL,2L};
static struct S0 g_258 = {0L,0x7ECEE271L,0xBBL,0x26B0L,0x8311L,0x2F1326CCL,3L};
static struct S0 g_290 = {0L,1UL,-1L,0xB2C5L,1UL,7UL,-9L};
static int g_301 = (-7L);
static struct S0 g_311 = {-4L,4294967295UL,3L,0xF456L,1UL,0xECB843A2L,0x82E4A64BL};
static volatile unsigned g_327 = 0x939A52B0L;
static struct S0 g_361 = {0x73L,6UL,0xBBL,1UL,0x0558L,0xFFD927F8L,0x1178EC09L};
static int *g_418 = &g_361.f6;
static volatile struct S0 g_419 = {0x66L,0xCB006556L,1L,0x9C8DL,0x1828L,1UL,-1L};
static volatile struct S0 g_473 = {-3L,4294967295UL,0xC3L,0xCF6BL,0x9C9DL,1UL,0L};
static volatile struct S0 g_474 = {7L,4294967287UL,0x0AL,65535UL,0xB781L,18446744073709551607UL,0x57222329L};
static struct S0 g_475 = {-1L,0xC18769B8L,0L,0x7D27L,0xEA74L,18446744073709551611UL,-1L};
static struct S0 g_496 = {0x38L,4294967295UL,0x7AL,0UL,0xE838L,18446744073709551615UL,9L};
static volatile struct S0 g_500 = {-9L,4294967295UL,1L,65535UL,1UL,9UL,-7L};
static volatile struct S0 g_501 = {0x9DL,0x28B1CD87L,0x61L,9UL,0UL,0x924528D8L,0x49FB5295L};
static struct S0 g_502 = {-1L,0x67ACE2E2L,1L,0x8F2CL,0xD2FDL,0x3C1E563BL,0xC34FCC02L};
static struct S0 g_503 = {0x9BL,0x0CB32DE5L,0xFDL,0x09ABL,2UL,18446744073709551613UL,0x25CABFE9L};
static struct S0 g_551 = {1L,3UL,0x49L,0UL,3UL,0xD3C8734CL,0xB89E9367L};
static struct S0 g_553 = {1L,4294967295UL,-3L,0x94C8L,0x7FF3L,3UL,0x116E1489L};



static unsigned func_1(void);
static struct S0 func_2(unsigned p_3, unsigned p_4, int p_5, char p_6);
static int func_10(unsigned p_11);
static struct S0 func_13(int p_14, unsigned short p_15, unsigned p_16, int p_17, short p_18);
static int ** func_24(int * p_25, unsigned p_26, char p_27, int p_28, short p_29);
static int * func_30(unsigned p_31);
static struct S0 func_37(unsigned p_38, int ** p_39, int ** p_40, unsigned short p_41);
static int func_59(char p_60, int * p_61, unsigned char p_62, unsigned p_63, short p_64);
static unsigned char func_67(int * p_68, char p_69, char p_70);
static char func_73(unsigned p_74, int ** p_75);
static unsigned func_1(void)
{
    short l_7 = (-1L);
    struct S0 *l_552 = (void*)0;
    unsigned l_554 = 18446744073709551608UL;
    int *l_555 = &g_361.f6;
    g_553 = func_2(l_7, ((safe_add_func_int32_t_s_s(func_10(g_12), ((4UL >= ((1UL > ((safe_add_func_int16_t_s_s(g_211.f3, ((safe_lshift_func_uint16_t_u_s(g_502.f6, 10)) != (safe_sub_func_int8_t_s_s((g_211.f3 == l_7), l_7))))) <= 0x973744CBL)) < 0x3F8FA77AL)) | g_475.f6))) <= g_211.f3), g_502.f3, g_502.f3);

    ;

    ;

    (*l_555) = l_554;
    (*g_134) = (*g_134);
    return g_551.f5;
}







static struct S0 func_2(unsigned p_3, unsigned p_4, int p_5, char p_6)
{
    unsigned l_547 = 2UL;
    int **l_548 = &g_418;
    struct S0 ***l_549 = (void*)0;
    struct S0 ***l_550 = &g_134;
    (*l_548) = &p_5;

    ;
    (*l_548) = &p_5;
    (*l_550) = &g_135;

    ;
    return g_551;


}







static int func_10(unsigned p_11)
{
    unsigned l_19 = 4294967289UL;
    unsigned l_20 = 18446744073709551615UL;
    struct S0 *l_362 = (void*)0;
    struct S0 *l_363 = &g_108;
    int *l_364 = &g_167.f6;
    int l_377 = (-9L);
    char l_378 = 0x2FL;
    int ***l_385 = &g_106;
    short l_428 = 0x1537L;
    unsigned l_435 = 7UL;
    unsigned char l_460 = 1UL;
    int l_493 = 0xDE6C0F03L;
    int **l_494 = &l_364;
    (*l_363) = func_13(l_19, l_20, l_20, g_12, g_12);

    ;
    ;

    if (l_378)
    {
        (*l_363) = (*l_363);
    }
    else
    {
        char l_400 = 0xD6L;
        int *l_407 = &g_22;
        unsigned char l_408 = 0x21L;
        struct S0 **l_413 = &g_135;
        for (l_377 = 0; (l_377 > (-8)); l_377 = safe_sub_func_uint8_t_u_u(l_377, 6))
        {
            unsigned l_390 = 5UL;
            int *l_397 = &g_361.f6;
            for (g_167.f1 = 0; (g_167.f1 < 29); ++g_167.f1)
            {
                int *l_396 = &g_168.f6;
                (*l_364) = (func_67(&g_22, g_167.f0, (safe_sub_func_uint32_t_u_u((((void*)0 == l_385) == (((void*)0 == &g_135) && (p_11 >= (p_11 >= (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(g_235.f6, g_167.f6)), l_390)))))), g_256.f3))) != g_256.f6);
                for (g_257.f1 = 2; (g_257.f1 >= 47); g_257.f1 = safe_add_func_int16_t_s_s(g_257.f1, 9))
                {
                    int *l_395 = &g_258.f6;
                    for (g_167.f6 = 0; (g_167.f6 != 17); g_167.f6++)
                    {
                        g_235.f6 = l_390;
                        (*g_46) = (*g_46);
                        return p_11;
                    }
                    if (p_11)
                        continue;
                    l_396 = l_395;

                    ;
                }

                ;
            }
            (*l_364) = (l_390 <= l_390);
            if (func_67(l_397, (g_257.f1 >= (((*l_397) >= (safe_rshift_func_uint8_t_u_u(l_400, (safe_mul_func_int8_t_s_s((-9L), (safe_div_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s(p_11, l_400)) || func_67(l_407, g_209.f1, g_108.f1)) || (*l_397)), 0xDAC24A83L))))))) || 0UL)), g_257.f1))
            {
                int l_416 = 0xE85ABD3DL;
                struct S0 **l_417 = &l_362;
                (*g_46) = (*g_46);
            }
            else
            {
                g_418 = l_397;
            }
        }
        l_364 = l_407;

        ;
        (*l_363) = g_419;
    }

    ;
    for (g_311.f3 = 15; (g_311.f3 == 32); ++g_311.f3)
    {
        char l_429 = 1L;
        int l_434 = 0x4B101EA0L;
        struct S0 *l_441 = &g_290;
        struct S0 ***l_469 = &g_134;
        short l_490 = (-1L);
        int *l_499 = (void*)0;
        if ((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((g_290.f0 != (~((safe_rshift_func_uint8_t_u_u(l_428, l_429)) >= (((255UL < 0xA6L) <= (g_256.f6 != (safe_div_func_int16_t_s_s((p_11 != l_429), (safe_mod_func_int16_t_s_s(l_434, l_435)))))) == 0x39L)))), g_167.f3)), g_290.f6)))
        {
            (*g_418) = p_11;
            for (g_257.f6 = 15; (g_257.f6 < (-7)); g_257.f6 = safe_sub_func_uint16_t_u_u(g_257.f6, 3))
            {
                int l_438 = (-2L);
                (*g_46) = (*g_46);
                (*l_364) = (-4L);
                l_438 = p_11;
            }
        }
        else
        {
            short l_446 = 0xD287L;
            int **l_451 = &l_364;
            (*l_451) = &l_377;

            ;
            for (g_211.f6 = 0; (g_211.f6 < (-25)); g_211.f6 = safe_sub_func_int32_t_s_s(g_211.f6, 1))
            {
                int ***l_472 = (void*)0;
                for (l_19 = (-1); (l_19 <= 14); l_19 = safe_add_func_uint16_t_u_u(l_19, 3))
                {
                    int l_468 = (-1L);
                    (**l_451) = p_11;
                    if ((safe_mul_func_int8_t_s_s(((p_11 && (((safe_div_func_uint8_t_u_u((p_11 && (l_460 != ((+(safe_div_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(g_90.f4, p_11)) != l_434), ((safe_unary_minus_func_int8_t_s((safe_mul_func_int16_t_s_s((65530UL || g_301), l_468)))) | g_290.f6)))) <= l_468))), 0xCDL)) > p_11) < p_11)) ^ g_361.f6), p_11)))
                    {
                        (*l_364) = (*g_418);
                        return p_11;
                    }
                    else
                    {
                        (*g_46) = (*g_46);
                        (*l_451) = (*l_451);
                    }
                }
                for (g_235.f3 = 0; (g_235.f3 <= 19); g_235.f3 = safe_add_func_int8_t_s_s(g_235.f3, 1))
                {
                    (*g_418) = (&g_46 == l_472);
                    (*l_441) = g_473;
                    (*g_46) = (*g_46);
                }
                (*l_363) = g_474;
                (*l_441) = g_475;
            }
        }
        (*l_441) = (*l_363);
        if (p_11)
        {
            (*l_364) = (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_div_func_int32_t_s_s(p_11, (*g_418))), g_474.f1)), (safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_12, g_290.f1)), g_256.f6)), 15))));
            (*l_469) = &g_135;

            ;
        }
        else
        {
            int l_489 = 0x7E50A9CAL;
            int **l_495 = (void*)0;
            (*l_441) = g_496;
            for (g_235.f6 = 27; (g_235.f6 < (-10)); g_235.f6 = safe_sub_func_uint32_t_u_u(g_235.f6, 3))
            {
                l_499 = &l_434;

                ;
                g_501 = g_500;
            }

            ;
            g_503 = g_502;
            (*l_494) = (*l_494);
        }

        ;
    }

    ;
    if ((((~p_11) <= (safe_rshift_func_int16_t_s_u((*l_364), p_11))) & p_11))
    {
        int l_508 = 0x21A3EE31L;
        short l_515 = 0x3BA1L;
        int l_524 = (-1L);
        (*l_364) = ((p_11 ^ (safe_add_func_int8_t_s_s(l_508, p_11))) < (safe_lshift_func_int16_t_s_u(0x4037L, 3)));
        (**l_494) = l_508;
        for (g_311.f3 = 0; (g_311.f3 >= 1); g_311.f3 = safe_add_func_uint16_t_u_u(g_311.f3, 1))
        {
            short l_523 = 0x6B0EL;
            int *l_526 = (void*)0;
            if ((safe_mod_func_int16_t_s_s(0x802BL, l_515)))
            {
                int *l_516 = (void*)0;
                (*l_494) = l_516;

                ;
                l_524 = (safe_mod_func_uint16_t_u_u(func_67(&g_22, (safe_mod_func_int8_t_s_s((-2L), (safe_sub_func_uint32_t_u_u(0xC849F49CL, ((p_11 != (l_523 > (-6L))) >= p_11))))), g_90.f6), l_508));
                if (p_11)
                {
                    (*g_46) = (*g_46);
                }
                else
                {
                    if (p_11)
                    {
                        int **l_525 = &l_364;
                        (*l_385) = l_525;

                        ;
                    }
                    else
                    {
                        (*l_494) = l_526;
                    }
                    (*g_418) = (safe_rshift_func_int8_t_s_u(p_11, 3));
                }
            }
            else
            {
                unsigned l_529 = 0UL;
                (*g_418) = (l_529 & (safe_div_func_int16_t_s_s(g_90.f3, p_11)));
            }
            if (p_11)
                continue;
        }

        ;
        ;
    }
    else
    {
        int *l_532 = &g_211.f6;
        struct S0 **l_533 = (void*)0;
        int *l_538 = &g_257.f6;
        (*l_494) = l_532;

        ;
        g_134 = l_533;

        ;
        (*l_363) = (*l_363);
        for (g_496.f1 = 0; (g_496.f1 > 21); g_496.f1++)
        {
            (*l_494) = l_532;
            (*g_46) = (*g_46);
            if (p_11)
                break;
            (*l_494) = l_532;
        }
    }

    ;

    ;
    return p_11;


}







static struct S0 func_13(int p_14, unsigned short p_15, unsigned p_16, int p_17, short p_18)
{
    int *l_21 = &g_22;
    int **l_23 = &l_21;
    char l_261 = 1L;
    int ***l_360 = &g_106;
    (*l_23) = l_21;
    (*l_360) = func_24(func_30((((-6L) > (safe_div_func_int32_t_s_s((0x9EL > (**l_23)), (*l_21)))) ^ (safe_unary_minus_func_uint16_t_u((1L > (!(+(&g_22 == (*l_23))))))))), ((0x8C1E0F0DL | 0xF811F13EL) & p_18), g_257.f3, l_261, p_15);

    ;
    ;

    return g_361;
}







static int ** func_24(int * p_25, unsigned p_26, char p_27, int p_28, short p_29)
{
    struct S0 *l_270 = (void*)0;
    int l_273 = 1L;
    struct S0 ***l_348 = &g_134;
    int **l_359 = (void*)0;
    if ((safe_mul_func_int8_t_s_s(((safe_div_func_int8_t_s_s((~(safe_mul_func_uint8_t_u_u(g_208.f0, p_26))), ((((void*)0 == l_270) <= g_256.f6) ^ ((safe_rshift_func_uint16_t_u_u(g_211.f6, p_27)) == g_167.f3)))) <= l_273), 0x50L)))
    {
        int l_276 = 0x6A697142L;
        (*p_25) = (**g_46);
        for (g_235.f3 = 1; (g_235.f3 < 7); ++g_235.f3)
        {
            (*g_47) = (*g_47);
            p_25 = func_30(l_276);
            (*p_25) = l_273;
            (*p_25) = (*p_25);
        }
    }
    else
    {
        struct S0 *l_288 = (void*)0;
        int ***l_298 = (void*)0;
        unsigned char l_303 = 0xB9L;
        int **l_332 = (void*)0;
        int *l_347 = &g_257.f6;
        int **l_346 = &l_347;
        for (g_235.f3 = 21; (g_235.f3 >= 60); g_235.f3 = safe_add_func_uint8_t_u_u(g_235.f3, 4))
        {
            int *l_283 = &g_167.f6;
            struct S0 *l_285 = &g_256;
            int *l_286 = &g_22;
            int l_328 = 0x79D23C0DL;
            volatile int *l_331 = &g_209.f6;
            int *l_333 = &g_257.f6;
            int **l_344 = &l_286;
            unsigned char l_345 = 0xC9L;
            if ((safe_lshift_func_uint8_t_u_s(p_27, 0)))
            {
                int l_302 = 0x0F614CB5L;
                for (g_12 = 26; (g_12 <= 13); g_12 = safe_sub_func_int8_t_s_s(g_12, 7))
                {
                    int **l_291 = &l_286;
                    if ((0xFB93L || p_28))
                    {
                        int *l_284 = &g_256.f6;
                        l_284 = l_283;

                        ;
                        (*g_134) = l_285;

                        ;
                    }
                    else
                    {
                        int **l_287 = &l_283;
                        (*g_46) = (void*)0;

                        ;
                        (*l_287) = l_286;

                        ;
                        (*g_134) = l_288;

                        ;
                        return g_106;


                    }

                    ;
                    if ((*p_25))
                    {
                        int **l_289 = &l_286;
                        (*l_289) = &l_273;

                        ;
                        (**l_289) = (*g_47);
                        (*l_289) = &p_28;

                        ;
                        if ((*p_25))
                            break;
                    }
                    else
                    {
                        (*g_135) = g_290;
                        (*g_135) = func_37(p_29, g_106, l_291, func_67(&l_273, (g_168.f2 & (**l_291)), p_28));
                        (*g_46) = (*g_46);
                    }
                }

                ;
                (*l_286) = (((safe_add_func_int32_t_s_s((*p_25), (-7L))) == ((~func_59((safe_mod_func_int16_t_s_s(0xCF5EL, (g_235.f2 | (safe_sub_func_uint16_t_u_u(((*l_286) != (l_298 == (void*)0)), (safe_rshift_func_uint8_t_u_u(0UL, 5))))))), &g_22, g_257.f1, g_301, l_302)) && l_303)) || p_27);
            }
            else
            {
                unsigned l_316 = 8UL;
                for (g_108.f6 = 0; (g_108.f6 != (-26)); g_108.f6 = safe_sub_func_int32_t_s_s(g_108.f6, 1))
                {
                    int **l_306 = &l_283;
                    (*l_306) = &p_28;

                    ;
                    (*g_46) = (*g_46);
                    for (g_256.f1 = 15; (g_256.f1 == 44); g_256.f1++)
                    {
                        (*g_47) = (l_298 != &g_46);
                        (*g_46) = (*g_46);
                        (*l_283) = ((0xBEL < (safe_rshift_func_int16_t_s_u((-1L), 15))) < 0x68L);
                        if ((*p_25))
                            continue;
                    }
                }

                ;
                g_311 = (*l_285);
                for (g_256.f1 = 15; (g_256.f1 != 4); --g_256.f1)
                {
                    (*g_46) = (*g_46);
                }
                if (((safe_mod_func_uint32_t_u_u(l_316, p_29)) && 0x10L))
                {
                    unsigned l_334 = 5UL;
                    (*p_25) = (safe_lshift_func_int16_t_s_s(g_311.f6, (safe_mul_func_uint16_t_u_u(0xA5BFL, ((safe_sub_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((*p_25), (*p_25))) & (!g_327)), 11)) || (&l_273 != (void*)0)) || p_26), l_328)) != 1UL)))));
                    for (g_168.f6 = (-7); (g_168.f6 >= (-27)); --g_168.f6)
                    {
                        (*l_283) = 0L;
                        l_331 = (*g_46);

                        ;
                        l_332 = &p_25;

                        ;
                        (*l_332) = l_333;

                        ;
                    }

                    ;
                    if ((l_334 < (safe_lshift_func_int16_t_s_u(func_59(g_311.f5, &l_328, (l_273 && (0x67C2L || (safe_mul_func_int16_t_s_s(0x77CEL, (((void*)0 == &g_106) < (*p_25)))))), p_28, p_29), 10))))
                    {
                        return g_106;


                    }
                    else
                    {
                        (*l_285) = (*l_285);
                        (**g_46) = (*p_25);
                        (*l_285) = func_37(p_29, g_106, g_106, p_26);
                    }
                    if ((*p_25))
                        break;
                }
                else
                {
                    for (g_12 = (-29); (g_12 > 26); g_12 = safe_add_func_int32_t_s_s(g_12, 1))
                    {
                        unsigned l_341 = 4294967294UL;
                        (*p_25) = (l_341 && (p_26 != g_108.f0));
                    }
                }

                ;
            }

            ;
            ;
            ;
            (*l_285) = g_258;
            (*g_47) = (func_67(&l_273, (safe_lshift_func_int8_t_s_s(1L, (((((void*)0 != l_344) ^ g_12) != 0x8260FE3EL) >= ((func_67(&l_273, l_345, p_28) != g_257.f1) & 9UL)))), g_311.f6) >= (*p_25));
        }

        ;
        ;
        ;
        p_25 = func_30(l_273);

        ;
        (*l_346) = &p_28;

        ;
    }

    ;
    (*l_348) = &l_270;

    ;
    for (p_27 = 4; (p_27 > (-13)); p_27 = safe_sub_func_int32_t_s_s(p_27, 6))
    {
        int **l_351 = (void*)0;
        int **l_352 = (void*)0;
        int *l_354 = &g_211.f6;
        int **l_353 = &l_354;
        (*l_353) = func_30(l_273);

        ;
        (*l_354) = (**g_46);
        (**g_46) = (0x73L >= (safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((**l_353), g_235.f1)), 7L)));
        (*g_46) = (*g_46);
    }
    return l_359;



}







static int * func_30(unsigned p_31)
{
    int *l_50 = &g_22;
    int **l_49 = &l_50;
    unsigned l_95 = 0x77E47599L;
    int **l_174 = (void*)0;
    for (g_22 = 0; (g_22 <= 12); g_22 = safe_add_func_uint8_t_u_u(g_22, 1))
    {
        int *l_71 = &g_22;
        char l_72 = (-7L);
        int **l_76 = &l_71;
        short l_173 = 0x3024L;
        g_258 = func_37((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((g_46 == l_49), (p_31 > (safe_sub_func_uint32_t_u_u((5UL & ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(65534UL, 14)), (safe_add_func_int8_t_s_s((func_59((safe_lshift_func_uint8_t_u_s(func_67(l_71, l_72, func_73((g_22 && g_48), l_76)), (*l_50))), (*l_49), l_95, (**l_76), p_31) & (*l_71)), l_173)))) != g_167.f1)), g_167.f3))))), g_167.f1)), l_174, g_106, g_167.f3);
        (**g_46) = (g_92.f4 >= (safe_add_func_uint32_t_u_u(p_31, p_31)));
    }
    return &g_22;


}







static struct S0 func_37(unsigned p_38, int ** p_39, int ** p_40, unsigned short p_41)
{
    int *l_175 = &g_168.f6;
    int **l_176 = &l_175;
    (*l_176) = l_175;
    for (p_38 = 0; (p_38 < 8); p_38++)
    {
        unsigned l_206 = 0xC78807F3L;
        int *l_228 = &g_22;
        unsigned short l_246 = 0x32F4L;
        int **l_252 = (void*)0;
        for (g_167.f6 = 0; (g_167.f6 >= 9); ++g_167.f6)
        {
            short l_185 = 0L;
            int *l_216 = &g_211.f6;
            unsigned l_255 = 0x68B7B371L;
        }
        (*g_46) = (*g_46);
    }
    if ((**g_46))
    {
        return g_256;
    }
    else
    {
        return g_257;
    }
}







static int func_59(char p_60, int * p_61, unsigned char p_62, unsigned p_63, short p_64)
{
    int **l_98 = (void*)0;
    int l_101 = 0L;
    struct S0 *l_157 = (void*)0;
    int *l_169 = (void*)0;
    int **l_170 = (void*)0;
    int **l_171 = (void*)0;
    int **l_172 = &l_169;
    (*g_47) = (safe_lshift_func_uint8_t_u_u(((&g_47 == l_98) & (**g_46)), (((0xE3B6L | p_64) || (p_64 <= g_22)) || (safe_add_func_uint16_t_u_u(65532UL, (((void*)0 != &l_98) & l_101))))));
    if ((safe_lshift_func_int16_t_s_s(l_101, 5)))
    {
        struct S0 *l_107 = &g_108;
        int l_166 = 0x0B7C7C06L;
        (*g_47) = (l_107 == (void*)0);
        for (g_108.f3 = (-8); (g_108.f3 >= 25); ++g_108.f3)
        {
            unsigned l_111 = 2UL;
            unsigned l_123 = 4294967295UL;
            (**g_46) = (**g_46);
            if (l_111)
                continue;
            if ((safe_rshift_func_int16_t_s_s(p_62, ((+p_60) != ((safe_mul_func_uint16_t_u_u(0x71DFL, g_90.f3)) <= (((g_108.f6 == (safe_unary_minus_func_uint32_t_u(((safe_sub_func_uint8_t_u_u(l_111, g_22)) == g_108.f3)))) != (l_111 >= l_111)) != g_108.f6))))))
            {
                short l_124 = 0L;
                unsigned short l_131 = 0xF135L;
                if ((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_123 ^ l_124), (safe_lshift_func_uint16_t_u_s(l_124, 9)))), (safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_131, ((safe_sub_func_uint32_t_u_u(l_123, ((*p_61) < 4294967289UL))) >= (!((&g_106 != (void*)0) >= p_62))))), g_108.f5)))))
                {
                    int *l_140 = &g_108.f6;
                    if ((((void*)0 != g_134) ^ (safe_lshift_func_uint16_t_u_s(0xC446L, 9))))
                    {
                        int *l_139 = &l_101;
                        int **l_138 = &l_139;
                        (*l_138) = p_61;


                        (*l_138) = l_140;

                        ;
                        if ((*p_61))
                            break;
                    }
                    else
                    {
                        (*l_140) = (*p_61);
                        (*g_47) = (*p_61);
                    }
                    if ((*p_61))
                        break;
                    for (g_12 = (-26); (g_12 < 24); g_12 = safe_add_func_int16_t_s_s(g_12, 7))
                    {
                        int **l_143 = (void*)0;
                        int **l_144 = (void*)0;
                        int **l_145 = (void*)0;
                        int *l_146 = &l_101;
                        l_146 = p_61;


                        (*g_46) = (*g_46);
                        return (**g_46);
                    }
                }
                else
                {
                    (*g_46) = (*g_46);
                    (**g_46) = ((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u((0xD6459F13L == p_60), (safe_div_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(((void*)0 != &l_98), (g_91.f5 || p_63))) > (safe_rshift_func_int8_t_s_s(g_12, 7))), ((~l_101) | (l_157 != (*g_134))))))), 7UL)) != l_123);
                    (**g_46) = ((*g_46) != (*g_46));
                }
                (*g_47) = func_67(p_61, g_90.f0, l_124);
                return (*p_61);
            }
            else
            {
                (*g_134) = l_157;
                (*g_47) = ((**g_46) != (safe_div_func_int16_t_s_s(((g_22 || (safe_rshift_func_uint16_t_u_u(p_64, ((p_62 != 0x7CL) | 0xD7CEL)))) < (safe_lshift_func_int8_t_s_u((g_12 > (!(safe_sub_func_uint16_t_u_u(p_64, ((void*)0 == &l_157))))), l_166))), g_108.f3)));
            }
        }
        g_168 = g_167;
        (*g_46) = (*g_46);
    }
    else
    {
        return l_101;
    }
    (*l_172) = l_169;
    return (*p_61);
}







static unsigned char func_67(int * p_68, char p_69, char p_70)
{
    volatile struct S0 *l_93 = &g_91;
    volatile struct S0 **l_94 = &l_93;
    (*l_93) = g_92;
    (*l_94) = l_93;
    (*l_93) = (*l_93);
    return p_69;
}







static char func_73(unsigned p_74, int ** p_75)
{
    unsigned char l_85 = 0xBFL;
    unsigned char l_89 = 249UL;
    if (((safe_mul_func_int16_t_s_s(g_22, p_74)) ^ p_74))
    {
        (*g_46) = (*g_46);
        for (g_12 = (-21); (g_12 == 18); g_12++)
        {
            volatile int **l_82 = &g_47;
            volatile int ***l_81 = &l_82;
            (*l_81) = &g_47;
        }
        (**g_46) = (safe_mod_func_int16_t_s_s(l_85, (safe_mul_func_uint8_t_u_u(g_48, g_12))));
        (*g_46) = (*g_46);
    }
    else
    {
        volatile unsigned l_88 = 1UL;
        l_88 = (*g_47);
        (**g_46) = l_89;
        g_91 = g_90;
        (**g_46) = (*g_47);
    }
    (*g_46) = (*g_46);
    (**g_46) = (**p_75);
    return p_74;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_90.f2, "g_90.f2", print_hash_value);
    transparent_crc(g_90.f3, "g_90.f3", print_hash_value);
    transparent_crc(g_90.f4, "g_90.f4", print_hash_value);
    transparent_crc(g_90.f5, "g_90.f5", print_hash_value);
    transparent_crc(g_90.f6, "g_90.f6", print_hash_value);
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_91.f1, "g_91.f1", print_hash_value);
    transparent_crc(g_91.f2, "g_91.f2", print_hash_value);
    transparent_crc(g_91.f3, "g_91.f3", print_hash_value);
    transparent_crc(g_91.f4, "g_91.f4", print_hash_value);
    transparent_crc(g_91.f5, "g_91.f5", print_hash_value);
    transparent_crc(g_91.f6, "g_91.f6", print_hash_value);
    transparent_crc(g_92.f0, "g_92.f0", print_hash_value);
    transparent_crc(g_92.f1, "g_92.f1", print_hash_value);
    transparent_crc(g_92.f2, "g_92.f2", print_hash_value);
    transparent_crc(g_92.f3, "g_92.f3", print_hash_value);
    transparent_crc(g_92.f4, "g_92.f4", print_hash_value);
    transparent_crc(g_92.f5, "g_92.f5", print_hash_value);
    transparent_crc(g_92.f6, "g_92.f6", print_hash_value);
    transparent_crc(g_108.f0, "g_108.f0", print_hash_value);
    transparent_crc(g_108.f1, "g_108.f1", print_hash_value);
    transparent_crc(g_108.f2, "g_108.f2", print_hash_value);
    transparent_crc(g_108.f3, "g_108.f3", print_hash_value);
    transparent_crc(g_108.f4, "g_108.f4", print_hash_value);
    transparent_crc(g_108.f5, "g_108.f5", print_hash_value);
    transparent_crc(g_108.f6, "g_108.f6", print_hash_value);
    transparent_crc(g_167.f0, "g_167.f0", print_hash_value);
    transparent_crc(g_167.f1, "g_167.f1", print_hash_value);
    transparent_crc(g_167.f2, "g_167.f2", print_hash_value);
    transparent_crc(g_167.f3, "g_167.f3", print_hash_value);
    transparent_crc(g_167.f4, "g_167.f4", print_hash_value);
    transparent_crc(g_167.f5, "g_167.f5", print_hash_value);
    transparent_crc(g_167.f6, "g_167.f6", print_hash_value);
    transparent_crc(g_168.f0, "g_168.f0", print_hash_value);
    transparent_crc(g_168.f1, "g_168.f1", print_hash_value);
    transparent_crc(g_168.f2, "g_168.f2", print_hash_value);
    transparent_crc(g_168.f3, "g_168.f3", print_hash_value);
    transparent_crc(g_168.f4, "g_168.f4", print_hash_value);
    transparent_crc(g_168.f5, "g_168.f5", print_hash_value);
    transparent_crc(g_168.f6, "g_168.f6", print_hash_value);
    transparent_crc(g_208.f0, "g_208.f0", print_hash_value);
    transparent_crc(g_208.f1, "g_208.f1", print_hash_value);
    transparent_crc(g_208.f2, "g_208.f2", print_hash_value);
    transparent_crc(g_208.f3, "g_208.f3", print_hash_value);
    transparent_crc(g_208.f4, "g_208.f4", print_hash_value);
    transparent_crc(g_208.f5, "g_208.f5", print_hash_value);
    transparent_crc(g_208.f6, "g_208.f6", print_hash_value);
    transparent_crc(g_209.f0, "g_209.f0", print_hash_value);
    transparent_crc(g_209.f1, "g_209.f1", print_hash_value);
    transparent_crc(g_209.f2, "g_209.f2", print_hash_value);
    transparent_crc(g_209.f3, "g_209.f3", print_hash_value);
    transparent_crc(g_209.f4, "g_209.f4", print_hash_value);
    transparent_crc(g_209.f5, "g_209.f5", print_hash_value);
    transparent_crc(g_209.f6, "g_209.f6", print_hash_value);
    transparent_crc(g_211.f0, "g_211.f0", print_hash_value);
    transparent_crc(g_211.f1, "g_211.f1", print_hash_value);
    transparent_crc(g_211.f2, "g_211.f2", print_hash_value);
    transparent_crc(g_211.f3, "g_211.f3", print_hash_value);
    transparent_crc(g_211.f4, "g_211.f4", print_hash_value);
    transparent_crc(g_211.f5, "g_211.f5", print_hash_value);
    transparent_crc(g_211.f6, "g_211.f6", print_hash_value);
    transparent_crc(g_235.f0, "g_235.f0", print_hash_value);
    transparent_crc(g_235.f1, "g_235.f1", print_hash_value);
    transparent_crc(g_235.f2, "g_235.f2", print_hash_value);
    transparent_crc(g_235.f3, "g_235.f3", print_hash_value);
    transparent_crc(g_235.f4, "g_235.f4", print_hash_value);
    transparent_crc(g_235.f5, "g_235.f5", print_hash_value);
    transparent_crc(g_235.f6, "g_235.f6", print_hash_value);
    transparent_crc(g_256.f0, "g_256.f0", print_hash_value);
    transparent_crc(g_256.f1, "g_256.f1", print_hash_value);
    transparent_crc(g_256.f2, "g_256.f2", print_hash_value);
    transparent_crc(g_256.f3, "g_256.f3", print_hash_value);
    transparent_crc(g_256.f4, "g_256.f4", print_hash_value);
    transparent_crc(g_256.f5, "g_256.f5", print_hash_value);
    transparent_crc(g_256.f6, "g_256.f6", print_hash_value);
    transparent_crc(g_257.f0, "g_257.f0", print_hash_value);
    transparent_crc(g_257.f1, "g_257.f1", print_hash_value);
    transparent_crc(g_257.f2, "g_257.f2", print_hash_value);
    transparent_crc(g_257.f3, "g_257.f3", print_hash_value);
    transparent_crc(g_257.f4, "g_257.f4", print_hash_value);
    transparent_crc(g_257.f5, "g_257.f5", print_hash_value);
    transparent_crc(g_257.f6, "g_257.f6", print_hash_value);
    transparent_crc(g_258.f0, "g_258.f0", print_hash_value);
    transparent_crc(g_258.f1, "g_258.f1", print_hash_value);
    transparent_crc(g_258.f2, "g_258.f2", print_hash_value);
    transparent_crc(g_258.f3, "g_258.f3", print_hash_value);
    transparent_crc(g_258.f4, "g_258.f4", print_hash_value);
    transparent_crc(g_258.f5, "g_258.f5", print_hash_value);
    transparent_crc(g_258.f6, "g_258.f6", print_hash_value);
    transparent_crc(g_290.f0, "g_290.f0", print_hash_value);
    transparent_crc(g_290.f1, "g_290.f1", print_hash_value);
    transparent_crc(g_290.f2, "g_290.f2", print_hash_value);
    transparent_crc(g_290.f3, "g_290.f3", print_hash_value);
    transparent_crc(g_290.f4, "g_290.f4", print_hash_value);
    transparent_crc(g_290.f5, "g_290.f5", print_hash_value);
    transparent_crc(g_290.f6, "g_290.f6", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_311.f0, "g_311.f0", print_hash_value);
    transparent_crc(g_311.f1, "g_311.f1", print_hash_value);
    transparent_crc(g_311.f2, "g_311.f2", print_hash_value);
    transparent_crc(g_311.f3, "g_311.f3", print_hash_value);
    transparent_crc(g_311.f4, "g_311.f4", print_hash_value);
    transparent_crc(g_311.f5, "g_311.f5", print_hash_value);
    transparent_crc(g_311.f6, "g_311.f6", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_361.f0, "g_361.f0", print_hash_value);
    transparent_crc(g_361.f1, "g_361.f1", print_hash_value);
    transparent_crc(g_361.f2, "g_361.f2", print_hash_value);
    transparent_crc(g_361.f3, "g_361.f3", print_hash_value);
    transparent_crc(g_361.f4, "g_361.f4", print_hash_value);
    transparent_crc(g_361.f5, "g_361.f5", print_hash_value);
    transparent_crc(g_361.f6, "g_361.f6", print_hash_value);
    transparent_crc(g_419.f0, "g_419.f0", print_hash_value);
    transparent_crc(g_419.f1, "g_419.f1", print_hash_value);
    transparent_crc(g_419.f2, "g_419.f2", print_hash_value);
    transparent_crc(g_419.f3, "g_419.f3", print_hash_value);
    transparent_crc(g_419.f4, "g_419.f4", print_hash_value);
    transparent_crc(g_419.f5, "g_419.f5", print_hash_value);
    transparent_crc(g_419.f6, "g_419.f6", print_hash_value);
    transparent_crc(g_473.f0, "g_473.f0", print_hash_value);
    transparent_crc(g_473.f1, "g_473.f1", print_hash_value);
    transparent_crc(g_473.f2, "g_473.f2", print_hash_value);
    transparent_crc(g_473.f3, "g_473.f3", print_hash_value);
    transparent_crc(g_473.f4, "g_473.f4", print_hash_value);
    transparent_crc(g_473.f5, "g_473.f5", print_hash_value);
    transparent_crc(g_473.f6, "g_473.f6", print_hash_value);
    transparent_crc(g_474.f0, "g_474.f0", print_hash_value);
    transparent_crc(g_474.f1, "g_474.f1", print_hash_value);
    transparent_crc(g_474.f2, "g_474.f2", print_hash_value);
    transparent_crc(g_474.f3, "g_474.f3", print_hash_value);
    transparent_crc(g_474.f4, "g_474.f4", print_hash_value);
    transparent_crc(g_474.f5, "g_474.f5", print_hash_value);
    transparent_crc(g_474.f6, "g_474.f6", print_hash_value);
    transparent_crc(g_475.f0, "g_475.f0", print_hash_value);
    transparent_crc(g_475.f1, "g_475.f1", print_hash_value);
    transparent_crc(g_475.f2, "g_475.f2", print_hash_value);
    transparent_crc(g_475.f3, "g_475.f3", print_hash_value);
    transparent_crc(g_475.f4, "g_475.f4", print_hash_value);
    transparent_crc(g_475.f5, "g_475.f5", print_hash_value);
    transparent_crc(g_475.f6, "g_475.f6", print_hash_value);
    transparent_crc(g_496.f0, "g_496.f0", print_hash_value);
    transparent_crc(g_496.f1, "g_496.f1", print_hash_value);
    transparent_crc(g_496.f2, "g_496.f2", print_hash_value);
    transparent_crc(g_496.f3, "g_496.f3", print_hash_value);
    transparent_crc(g_496.f4, "g_496.f4", print_hash_value);
    transparent_crc(g_496.f5, "g_496.f5", print_hash_value);
    transparent_crc(g_496.f6, "g_496.f6", print_hash_value);
    transparent_crc(g_500.f0, "g_500.f0", print_hash_value);
    transparent_crc(g_500.f1, "g_500.f1", print_hash_value);
    transparent_crc(g_500.f2, "g_500.f2", print_hash_value);
    transparent_crc(g_500.f3, "g_500.f3", print_hash_value);
    transparent_crc(g_500.f4, "g_500.f4", print_hash_value);
    transparent_crc(g_500.f5, "g_500.f5", print_hash_value);
    transparent_crc(g_500.f6, "g_500.f6", print_hash_value);
    transparent_crc(g_501.f0, "g_501.f0", print_hash_value);
    transparent_crc(g_501.f1, "g_501.f1", print_hash_value);
    transparent_crc(g_501.f2, "g_501.f2", print_hash_value);
    transparent_crc(g_501.f3, "g_501.f3", print_hash_value);
    transparent_crc(g_501.f4, "g_501.f4", print_hash_value);
    transparent_crc(g_501.f5, "g_501.f5", print_hash_value);
    transparent_crc(g_501.f6, "g_501.f6", print_hash_value);
    transparent_crc(g_502.f0, "g_502.f0", print_hash_value);
    transparent_crc(g_502.f1, "g_502.f1", print_hash_value);
    transparent_crc(g_502.f2, "g_502.f2", print_hash_value);
    transparent_crc(g_502.f3, "g_502.f3", print_hash_value);
    transparent_crc(g_502.f4, "g_502.f4", print_hash_value);
    transparent_crc(g_502.f5, "g_502.f5", print_hash_value);
    transparent_crc(g_502.f6, "g_502.f6", print_hash_value);
    transparent_crc(g_503.f0, "g_503.f0", print_hash_value);
    transparent_crc(g_503.f1, "g_503.f1", print_hash_value);
    transparent_crc(g_503.f2, "g_503.f2", print_hash_value);
    transparent_crc(g_503.f3, "g_503.f3", print_hash_value);
    transparent_crc(g_503.f4, "g_503.f4", print_hash_value);
    transparent_crc(g_503.f5, "g_503.f5", print_hash_value);
    transparent_crc(g_503.f6, "g_503.f6", print_hash_value);
    transparent_crc(g_551.f0, "g_551.f0", print_hash_value);
    transparent_crc(g_551.f1, "g_551.f1", print_hash_value);
    transparent_crc(g_551.f2, "g_551.f2", print_hash_value);
    transparent_crc(g_551.f3, "g_551.f3", print_hash_value);
    transparent_crc(g_551.f4, "g_551.f4", print_hash_value);
    transparent_crc(g_551.f5, "g_551.f5", print_hash_value);
    transparent_crc(g_551.f6, "g_551.f6", print_hash_value);
    transparent_crc(g_553.f0, "g_553.f0", print_hash_value);
    transparent_crc(g_553.f1, "g_553.f1", print_hash_value);
    transparent_crc(g_553.f2, "g_553.f2", print_hash_value);
    transparent_crc(g_553.f3, "g_553.f3", print_hash_value);
    transparent_crc(g_553.f4, "g_553.f4", print_hash_value);
    transparent_crc(g_553.f5, "g_553.f5", print_hash_value);
    transparent_crc(g_553.f6, "g_553.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
