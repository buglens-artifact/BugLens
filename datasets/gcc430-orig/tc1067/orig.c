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
   unsigned short f0;
   volatile int f1;
   unsigned char f2;
   volatile unsigned f3;
};


static int g_10 = (-1L);
static volatile struct S0 g_73 = {0x226FL,5L,255UL,1UL};
static volatile struct S0 g_74 = {0xDD44L,-9L,0x5EL,4294967290UL};
static int g_75 = 0x83B0F605L;
static int g_87 = 0x957B0931L;
static char g_88 = 0x49L;
static struct S0 g_89 = {0x7C7EL,0x801B04C6L,0x3AL,0x642BED38L};
static struct S0 g_90 = {0xD2E1L,0xD6F38C13L,9UL,4294967287UL};
static unsigned g_114 = 0x99A04901L;
static volatile struct S0 g_122 = {0x6939L,-6L,250UL,0x47D00CD1L};
static volatile struct S0 g_123 = {0x7814L,1L,251UL,4294967295UL};
static volatile struct S0 g_131 = {65535UL,0xF82621F0L,0UL,0x92431699L};
static volatile struct S0 g_132 = {0UL,0x45573AC2L,0x98L,0x980C3003L};
static volatile struct S0 g_133 = {0x7D1DL,-6L,0x05L,0x3D222340L};
static struct S0 g_136 = {0x2F91L,0xA856C88DL,0x75L,1UL};
static struct S0 g_137 = {1UL,0xBF6F6D5BL,255UL,1UL};
static volatile struct S0 g_159 = {0x9119L,0x64559AEFL,255UL,4294967295UL};
static volatile struct S0 g_178 = {0x3EC4L,4L,0x89L,0x7ADD9F72L};
static int g_219 = 0x5883D100L;
static short g_242 = 0x6F3DL;
static unsigned char g_243 = 1UL;
static int g_250 = (-1L);
static volatile struct S0 g_313 = {0x970AL,0xFF5B7A33L,0UL,0UL};
static volatile struct S0 g_314 = {0x4F3BL,0L,0xCEL,0xEE16C9F1L};
static struct S0 g_333 = {6UL,-1L,8UL,4294967295UL};
static struct S0 g_339 = {0xA630L,0x6AAB4845L,0x3BL,4294967295UL};
static struct S0 g_340 = {0UL,-1L,255UL,4294967294UL};
static volatile struct S0 g_343 = {65528UL,1L,0xD0L,0x8DA7C8E9L};
static volatile struct S0 g_344 = {0xF761L,1L,5UL,0UL};
static volatile struct S0 g_360 = {4UL,0L,0xC5L,1UL};
static volatile struct S0 g_361 = {65535UL,0L,0xBCL,9UL};
static const volatile struct S0 g_365 = {65534UL,0x0C91DE95L,248UL,4294967293UL};
static struct S0 g_366 = {65527UL,0x8AF52E79L,0x31L,4294967289UL};
static struct S0 g_367 = {65529UL,0L,0x92L,8UL};
static volatile struct S0 g_408 = {65533UL,0L,1UL,0x1451A786L};
static struct S0 g_409 = {0x09FEL,0xCDB4F641L,0x9DL,0UL};
static volatile struct S0 g_410 = {1UL,0x5009F6B5L,255UL,4294967287UL};
static volatile struct S0 g_411 = {1UL,9L,254UL,0x7CD23BE1L};
static struct S0 g_412 = {6UL,0x2A9634C1L,0x9BL,2UL};
static struct S0 g_413 = {0xFD06L,0x089AC569L,0x01L,4294967288UL};
static unsigned char g_417 = 0xBFL;
static unsigned g_433 = 18446744073709551615UL;
static short g_459 = 0xF1C1L;
static unsigned char g_460 = 252UL;
static struct S0 g_474 = {1UL,0xDD26A858L,0UL,0x35749F27L};



static int func_1(void);
static struct S0 func_2(unsigned p_3, unsigned p_4, short p_5, unsigned char p_6, unsigned p_7);
static char func_12(char p_13, int p_14);
static unsigned char func_19(unsigned p_20, unsigned p_21, char p_22, int p_23);
static char func_26(unsigned p_27, short p_28, unsigned p_29, unsigned short p_30);
static int func_33(int p_34, char p_35, unsigned p_36, char p_37, unsigned p_38);
static int func_46(char p_47);
static char func_48(unsigned p_49, char p_50);
static unsigned func_54(short p_55, short p_56, unsigned char p_57);
static short func_58(unsigned char p_59, int p_60, short p_61, int p_62);
static int func_1(void)
{
    unsigned char l_11 = 1UL;
    int l_24 = 0x3493876AL;
    unsigned char l_418 = 0UL;
    int l_419 = (-1L);
    unsigned l_477 = 0x509C7314L;
    g_89 = func_2(((((~(safe_mod_func_uint8_t_u_u(g_10, (l_11 & ((4294967295UL ^ 4294967295UL) != (func_12((g_460 = (((safe_mod_func_int16_t_s_s((((g_459 = (safe_sub_func_uint8_t_u_u(g_10, (l_24 = func_19((l_24 < (l_418 = (g_10 == ((safe_unary_minus_func_uint32_t_u(1UL)) & (g_417 = func_26(((~(((((l_11 == g_10) < 0x4D4BL) < 0x26D8L) < 0x28129EC6L) == g_10)) ^ g_10), l_11, g_10, g_10)))))), l_419, g_412.f0, g_89.f2))))) > 9UL) && 0x10L), l_11)) <= l_419) == (-6L))), g_243) <= 0xFEL)))))) == l_419) & 0x25L) > g_339.f2), g_333.f2, g_333.f2, l_419, g_10);
    g_132.f1 = ((safe_rshift_func_int16_t_s_s((g_459 = g_131.f1), (l_477 = ((5L != (-1L)) == 0x37L)))) || ((0x47L | (func_48(g_333.f0, (((safe_rshift_func_int16_t_s_s(l_419, l_11)) < (safe_mod_func_int16_t_s_s(g_474.f3, 0x8426L))) != 0x13L)) != g_340.f2)) != 0xE5FDL));
    return g_367.f0;
}







static struct S0 func_2(unsigned p_3, unsigned p_4, short p_5, unsigned char p_6, unsigned p_7)
{
    char l_464 = 0xC7L;
    int l_473 = 0x12200324L;
    l_473 = (safe_rshift_func_uint16_t_u_s((l_464 > (safe_add_func_int16_t_s_s(l_464, g_131.f2))), (p_5 = ((p_4 != (g_137.f2 = 255UL)) & (l_464 > (safe_mod_func_int16_t_s_s((g_242 = (((safe_add_func_int16_t_s_s((l_464 && ((safe_mod_func_uint16_t_u_u((0UL || (g_409.f2 = (p_4 <= (-1L)))), p_7)) || 3UL)), p_7)) || l_464) != g_433)), 1L)))))));
    return g_474;
}







static char func_12(char p_13, int p_14)
{
    int l_461 = 0x1F51B593L;
    return l_461;
}







static unsigned char func_19(unsigned p_20, unsigned p_21, char p_22, int p_23)
{
    unsigned short l_420 = 65528UL;
    int l_421 = 0xBA66C2B6L;
    int l_422 = (-5L);
    int l_423 = (-1L);
    const int l_424 = 5L;
    int l_458 = 0x9DB045D2L;
    l_423 = (l_422 = (g_333.f0 != (l_421 = (g_417 = l_420))));
    g_366.f1 = (0L >= ((l_424 || (g_90.f2 = (safe_add_func_int32_t_s_s(g_73.f3, (safe_rshift_func_int8_t_s_s((g_88 = ((g_433 = (g_114 = ((safe_lshift_func_int16_t_s_s(p_23, 14)) ^ (safe_rshift_func_uint16_t_u_u(0xB244L, 7))))) == (g_87 = 0x124C2BE6L))), 7)))))) <= (0xEBL | p_21)));
    for (g_409.f0 = 0; (g_409.f0 <= 32); g_409.f0 = safe_add_func_int32_t_s_s(g_409.f0, 3))
    {
        short l_436 = 0x5D9CL;
        int l_437 = 0x4E5C12BEL;
        l_421 = 0L;
        l_437 = l_436;
    }
    l_422 = (p_23 <= ((safe_mod_func_uint16_t_u_u((g_340.f0 = (((safe_sub_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((p_22 != ((safe_sub_func_uint8_t_u_u(p_22, (p_20 ^ (l_421 = (safe_mod_func_int8_t_s_s(func_54(((((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((func_48(p_22, g_333.f3) && func_46((!l_422))), p_23)), p_23)), 1L)) & p_20) > l_458) < 0UL), l_458, g_75), 0x83L)))))) >= p_21)), g_433)), l_422)), p_20)) == 0x35670C95L), 255UL)) < 0xCDEDL) <= 6UL)), l_422)) >= p_21));
    return g_243;
}







static char func_26(unsigned p_27, short p_28, unsigned p_29, unsigned short p_30)
{
    const unsigned char l_43 = 2UL;
    int l_44 = 1L;
    unsigned l_351 = 0xB8FDB146L;
    char l_352 = 0xB1L;
    unsigned l_356 = 0x75757182L;
    for (p_30 = 0; (p_30 >= 39); p_30 = safe_add_func_int32_t_s_s(p_30, 4))
    {
        char l_45 = (-3L);
        int l_350 = 0xB601889AL;
        int l_402 = 8L;
        if (func_33(g_10, (l_44 = ((safe_sub_func_int8_t_s_s(p_29, (9UL >= (safe_add_func_uint8_t_u_u(p_30, l_43))))) == p_27)), g_10, l_45, (p_28 & g_10)))
        {
            const unsigned l_347 = 0x41AA2878L;
            int l_357 = (-1L);
            g_340 = g_339;
            for (g_333.f0 = 0; (g_333.f0 >= 30); g_333.f0++)
            {
                int l_353 = (-9L);
                g_344 = g_343;
                l_353 = ((safe_mod_func_uint8_t_u_u(g_313.f3, l_347)) && (l_352 = (l_351 = (g_133.f1 | (l_347 || (func_58(p_27, g_339.f2, g_114, (l_44 = (l_350 = ((g_87 = ((g_90.f0 >= g_250) >= g_136.f0)) || p_30)))) == g_114))))));
            }
            if ((((safe_lshift_func_int16_t_s_u((((l_356 | g_73.f3) || (l_357 = g_333.f3)) | l_347), g_137.f0)) < p_28) && (l_44 = (((func_58((0xB2AFL & (((((-3L) & l_44) <= p_27) | 4294967291UL) < p_30)), g_122.f2, g_340.f0, g_137.f2) ^ p_30) && g_333.f3) == g_89.f2))))
            {
                char l_384 = 0x28L;
                int l_397 = 0xE37A2396L;
                if (g_74.f2)
                {
                    for (l_352 = 22; (l_352 >= (-28)); l_352 = safe_sub_func_uint32_t_u_u(l_352, 8))
                    {
                        unsigned short l_362 = 0xC239L;
                        g_361 = g_360;
                        l_357 = l_362;
                        return l_350;
                    }
                    return p_27;
                }
                else
                {
                    g_344 = g_361;
                    for (g_340.f0 = 18; (g_340.f0 >= 44); g_340.f0 = safe_add_func_uint8_t_u_u(g_340.f0, 1))
                    {
                        g_360 = g_365;
                    }
                    g_367 = g_366;
                    g_137.f1 = p_27;
                }
                if (l_45)
                {
                    short l_383 = 0xD7ADL;
                    for (g_136.f2 = (-21); (g_136.f2 >= 14); g_136.f2 = safe_add_func_int8_t_s_s(g_136.f2, 7))
                    {
                        l_384 = (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s((l_357 = (safe_mod_func_int16_t_s_s((+((((p_30 < (safe_sub_func_int32_t_s_s(((0L > (g_365.f1 || ((func_54((safe_unary_minus_func_uint32_t_u(g_90.f1)), g_333.f0, ((g_339.f0 || 0x5EL) || (safe_lshift_func_uint8_t_u_u(l_350, 7)))) == p_29) & g_10))) | p_28), g_366.f0))) | 0xB993L) >= l_383) == l_44)), l_350))), p_29)) <= 0UL), 0)) <= g_10), g_339.f0));
                        l_350 = ((l_44 = 249UL) > func_33((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(func_58(((g_114 = (safe_lshift_func_uint16_t_u_u((0x9201D88EL && ((0x44969DDCL || g_122.f3) > (((l_357 <= (safe_add_func_uint32_t_u_u((p_27 = g_340.f0), 4294967295UL))) || (g_87 = (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(l_384, ((l_397 = p_29) ^ 0x1BC2L))) | l_356), l_45)))) | 0xF6BAL))), 11))) < g_339.f0), p_30, g_137.f2, g_367.f0), 65529UL)), 8)), p_28, l_350, l_347, p_28));
                        l_397 = func_46(l_357);
                        g_73.f1 = (g_87 = p_28);
                    }
                    l_397 = (l_44 = p_29);
                    l_402 = ((p_28 != (safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(g_137.f2, p_30)), func_46(p_28)))) <= 4294967295UL);
                    if (p_27)
                    {
                        unsigned char l_407 = 0x48L;
                        g_339.f1 = (l_407 = (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u(0x2648L, func_54(g_90.f2, l_383, (p_28 & (g_90.f0 > (0x20B1L | (l_357 <= 65535UL))))))) && l_383), 13)));
                        l_350 = l_383;
                    }
                    else
                    {
                        g_408 = g_344;
                        g_409 = g_89;
                    }
                }
                else
                {
                    g_411 = g_410;
                }
                l_44 = l_352;
                if (l_45)
                    break;
            }
            else
            {
                return p_27;
            }
        }
        else
        {
            g_413 = g_412;
        }
    }
    for (l_356 = (-29); (l_356 == 5); l_356 = safe_add_func_int8_t_s_s(l_356, 8))
    {
        unsigned l_416 = 0xE59C2AA1L;
        return l_416;
    }
    l_44 = (0x17L ^ (-1L));
    return l_44;
}







static int func_33(int p_34, char p_35, unsigned p_36, char p_37, unsigned p_38)
{
    unsigned l_53 = 0x57E8F534L;
    int l_71 = 0xD22F7F1CL;
    int l_334 = 0x54275DC9L;
    l_334 = func_46(func_48((p_36 = (~((safe_lshift_func_uint16_t_u_u((l_53 <= ((func_54(func_58(l_53, l_53, ((((safe_sub_func_int8_t_s_s(g_10, (-1L))) && (-1L)) != (safe_lshift_func_uint16_t_u_u(0x2AB1L, 14))) || (safe_lshift_func_uint16_t_u_s(l_53, (l_71 = (safe_sub_func_int32_t_s_s(l_53, p_38)))))), l_53), g_10, l_53) <= p_36) != g_243)), p_38)) <= 0x7AFC9A66L))), p_34));
    g_159.f1 = (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(65526UL, g_178.f1)), (p_34 != (func_58((p_36 >= (l_71 = (g_333.f2 == l_71))), p_36, func_58(g_243, l_334, p_35, g_114), l_334) ^ 0x5BL))));
    return g_250;
}







static int func_46(char p_47)
{
    unsigned l_317 = 18446744073709551615UL;
    int l_332 = 0xB8125710L;
    g_314 = g_313;
    l_317 = func_48(p_47, (safe_add_func_int16_t_s_s((g_131.f3 == 1UL), g_89.f2)));
    for (g_250 = 0; (g_250 < (-23)); --g_250)
    {
        int l_326 = (-1L);
        char l_327 = 0x59L;
        l_332 = (safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(0xE832L, (((g_132.f0 > 0xEFL) == l_326) == l_327))), (safe_lshift_func_uint16_t_u_u(0x41D0L, g_88)))), (safe_rshift_func_int16_t_s_u((0x19BAF287L < (-1L)), 11))));
    }
    g_90 = g_333;
    return g_122.f2;
}







static char func_48(unsigned p_49, char p_50)
{
    unsigned l_290 = 0UL;
    int l_295 = (-1L);
    int l_296 = 0xDA303FCAL;
    int l_297 = (-3L);
    int l_302 = 0xCEDDB29EL;
    g_133.f1 = (l_290 & (safe_rshift_func_int8_t_s_u((g_88 = (p_50 = func_58((l_297 = (safe_lshift_func_uint8_t_u_u(0xA6L, (l_296 = (l_295 = p_50))))), (0x19L <= (safe_sub_func_int8_t_s_s((((1UL == g_74.f3) >= g_250) > l_290), ((l_302 = (safe_rshift_func_uint16_t_u_s((g_89.f0 = p_49), 6))) <= l_290)))), l_290, p_50))), l_290)));
    g_136.f1 = ((safe_mod_func_int32_t_s_s((g_122.f0 | (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((0x20A3L & g_242), l_296)), 0))), p_49)) & (safe_lshift_func_int16_t_s_u(((!(l_297 == (((l_302 = ((g_114 = (safe_sub_func_int8_t_s_s(g_250, ((func_58(g_137.f0, (g_219 = (func_58(p_50, l_297, g_10, p_49) <= l_295)), l_295, p_49) && g_75) && 65527UL)))) & g_87)) < 0x4BL) ^ 0x9C09685FL))) < p_49), l_296)));
    return g_123.f3;
}







static unsigned func_54(short p_55, short p_56, unsigned char p_57)
{
    int l_72 = 0xBA5CD23EL;
    int l_76 = (-1L);
    int l_107 = 0L;
    unsigned l_118 = 0x68C9B47AL;
    int l_158 = 0L;
    int l_164 = 0xB4229225L;
    unsigned short l_173 = 0xA482L;
    unsigned l_279 = 0x878C3C85L;
    if (l_72)
    {
        g_74 = g_73;
    }
    else
    {
        int l_85 = 0x950CF10AL;
        int l_86 = 0x91C1AAD5L;
        int l_115 = 0x15219C01L;
        l_76 = (g_75 = (-1L));
        l_76 = (safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(0x69FAL, ((safe_lshift_func_uint16_t_u_u(g_73.f1, 8)) || (safe_lshift_func_uint8_t_u_s(func_58(((0xC08FL | (((l_76 & (p_57 == p_56)) <= (g_88 = (g_87 = (l_86 = (((((func_58((0xC43CL || (l_76 ^ l_72)), l_85, l_76, g_73.f2) < 0x67A2L) != 0x279A1AFFL) <= l_85) < l_85) || g_74.f0))))) >= p_57)) == l_85), g_75, g_10, p_57), 7))))), l_85));
        g_90 = g_89;
        for (l_76 = 0; (l_76 == 1); ++l_76)
        {
            unsigned char l_103 = 255UL;
            int l_106 = 0xA077DDA0L;
            int l_116 = 0xE4CEB914L;
            int l_117 = (-1L);
            int l_119 = 0x6465E51FL;
            l_107 = ((p_55 && g_89.f3) == (l_72 == (safe_mod_func_uint32_t_u_u((l_106 = ((-2L) & (0x253094EEL == (((((safe_sub_func_int16_t_s_s((p_57 || ((((1L | (safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(func_58(l_103, (safe_rshift_func_uint8_t_u_u(248UL, 6)), g_89.f2, p_57), g_89.f0)), 0UL)), l_86))) < g_75) < l_72) | g_10)), p_56)) | p_56) >= (-1L)) & 0xEAL) || 1UL)))), l_85))));
            l_119 = (((((l_117 = (l_116 = (0UL || (l_115 = ((l_86 = (l_106 = (safe_rshift_func_int16_t_s_u(g_73.f2, (safe_add_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((((l_86 & func_58(g_87, (g_10 | g_88), (g_114 = l_86), ((((((l_85 >= g_87) & l_72) < l_72) & p_56) | p_56) >= g_87))) < p_57) <= 0xB3408E22L), p_56)) >= g_89.f0), 0x7F2DL)))))) < l_103))))) != l_85) >= 0x132677FAL) ^ 0x1F7AE596L) > l_118);
        }
    }
    for (g_90.f0 = 20; (g_90.f0 > 13); g_90.f0 = safe_sub_func_int16_t_s_s(g_90.f0, 5))
    {
        unsigned l_172 = 4294967287UL;
        int l_175 = 0x0F996A62L;
        g_73 = g_90;
        if (g_74.f0)
        {
            unsigned l_156 = 1UL;
            short l_165 = (-1L);
            unsigned short l_174 = 0xA368L;
            int l_187 = (-1L);
            if (((l_76 = p_56) ^ (5L != g_89.f0)))
            {
                g_123 = g_122;
                if (g_89.f2)
                {
                    return g_114;
                }
                else
                {
                    if (p_55)
                        break;
                    g_87 = (safe_rshift_func_uint8_t_u_u(g_90.f3, ((safe_rshift_func_uint16_t_u_u(p_57, 1)) & g_90.f0)));
                    for (g_87 = 0; (g_87 <= (-29)); g_87 = safe_sub_func_int16_t_s_s(g_87, 5))
                    {
                        int l_130 = 0x0BAFF8C0L;
                        l_130 = g_89.f0;
                        g_122.f1 = (l_130 | p_55);
                        g_132 = g_131;
                        g_133 = g_123;
                    }
                }
            }
            else
            {
                unsigned char l_146 = 5UL;
                int l_153 = (-1L);
                int l_157 = 0x02FB210DL;
                for (l_107 = 0; (l_107 > (-8)); --l_107)
                {
                    g_137 = g_136;
                }
                if (g_123.f0)
                    break;
                if (g_73.f1)
                    break;
                if ((((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((p_55 <= ((safe_add_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((l_146 = p_56), g_73.f2)) & (((safe_sub_func_int16_t_s_s(g_137.f0, ((safe_lshift_func_uint8_t_u_u(0xD1L, (safe_mod_func_int32_t_s_s((65535UL ^ (l_153 = p_55)), (safe_rshift_func_int16_t_s_s(l_156, func_58(l_157, g_75, l_156, p_57))))))) == l_158))) & g_137.f0) > p_55)) >= 0xBD5CD434L), l_118)) <= 65529UL)), 8)) & 0x33L), g_90.f2)) < p_55) >= 0x25L))
                {
                    g_159 = g_131;
                }
                else
                {
                    unsigned l_179 = 0UL;
                    for (g_136.f0 = 0; (g_136.f0 == 9); ++g_136.f0)
                    {
                        return l_156;
                    }
                    l_175 = ((g_88 ^ func_58((safe_add_func_int32_t_s_s(((l_164 < l_165) & (p_57 != g_122.f0)), (safe_lshift_func_int16_t_s_u((l_158 | ((((((l_173 = (safe_add_func_int16_t_s_s((1UL <= (-1L)), (safe_sub_func_uint8_t_u_u((l_172 = 255UL), g_114))))) != 0L) ^ (-1L)) == l_157) | (-9L)) < g_10)), l_107)))), p_57, l_174, l_146)) | g_10);
                    l_157 = (~((safe_rshift_func_uint8_t_u_u(p_57, (l_76 >= g_75))) | g_133.f1));
                    if (g_132.f3)
                    {
                        g_132 = g_178;
                        l_179 = p_56;
                        l_175 = g_137.f1;
                    }
                    else
                    {
                        unsigned l_185 = 0xC28C5A1FL;
                        int l_186 = 0xD1AC5971L;
                        g_74.f1 = (p_56 < (-1L));
                        l_107 = (safe_rshift_func_int16_t_s_u(0xFCF3L, (l_186 = (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(l_185)), 4)))));
                        return g_90.f1;
                    }
                }
            }
            l_187 = l_172;
            l_187 = (g_87 = ((((g_136.f2 <= (safe_rshift_func_uint16_t_u_s((((g_88 = (safe_sub_func_int8_t_s_s(0x00L, 0UL))) < 0x7CL) > (l_174 > ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((p_57 <= l_175), l_187)), (safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(g_132.f3, p_55)), 0L)))) == l_164))), 9))) < p_55) == g_136.f0) != l_156));
        }
        else
        {
            unsigned l_218 = 9UL;
            int l_222 = 0x5944C72FL;
            unsigned l_263 = 18446744073709551613UL;
            unsigned short l_264 = 65531UL;
            for (p_57 = 27; (p_57 > 36); ++p_57)
            {
                unsigned char l_220 = 255UL;
                int l_221 = 0x0E5491D3L;
                if ((((((safe_rshift_func_uint16_t_u_u(g_132.f1, ((g_88 = (+(((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((((g_136.f0 = (((safe_rshift_func_int16_t_s_s(((p_55 > l_175) == g_75), 15)) > 0x1EL) == l_175)) >= ((func_58((safe_add_func_uint8_t_u_u(0xB0L, ((((p_57 > (g_219 = (~(safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(p_57, l_218)), 0x1F18L)), 1L))))) && p_55) & p_55) >= 0x9C812F4BL))), l_172, l_158, g_137.f2) || l_220) > g_10)) ^ g_10) | l_218), (-6L))), p_55)) | g_114) != (-1L)))) != l_172))) != (-9L)) >= 0x44ACA4CAL) | (-1L)) & 0x666CFFB0L))
                {
                    g_133.f1 = (l_158 = g_131.f0);
                    g_122.f1 = l_220;
                    g_73.f1 = (l_221 = 0x78988055L);
                    l_222 = l_221;
                }
                else
                {
                    unsigned char l_225 = 0x43L;
                    int l_232 = (-6L);
                    int l_233 = 0xEC96D48FL;
                    l_233 = (safe_sub_func_int8_t_s_s(l_225, (safe_mod_func_int32_t_s_s((~((g_136.f0 >= ((l_76 = (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((p_57 >= (l_232 = 0x1DL)), 1)), func_58(g_114, g_159.f1, ((((func_58((((255UL != p_55) >= p_56) < 9UL), g_219, p_55, p_56) <= g_114) <= g_89.f2) == p_56) | l_225), l_220)))) < 0xA2L)) == (-3L))), p_56))));
                    if (g_133.f2)
                    {
                        int l_248 = 0xDC5E76BDL;
                        int l_249 = (-2L);
                        l_107 = (((safe_sub_func_uint16_t_u_u((((g_242 = ((0xC4L <= (-10L)) <= (((l_175 = l_107) ^ 0x6F966829L) >= (safe_add_func_int8_t_s_s(((l_233 | g_136.f0) != (0x8AB577FEL < (0x8EL ^ (safe_sub_func_uint8_t_u_u(g_136.f0, g_74.f0))))), l_222))))) >= g_114) & p_55), p_55)) <= p_56) == p_57);
                        l_249 = ((g_88 = ((((l_175 = g_243) <= (l_158 = p_55)) < l_72) == (safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(p_56, func_58(((l_248 = 0xE0F0L) < (l_221 = 3L)), g_219, (~func_58((((0x78L <= p_55) < g_133.f0) != p_56), l_218, p_56, l_173)), p_56))), 5)))) != g_10);
                    }
                    else
                    {
                        g_132.f1 = g_250;
                        l_175 = ((p_56 | ((+g_10) ^ (g_137.f1 > ((p_55 = g_89.f0) ^ func_58((safe_add_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(l_218, (safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(l_172, (((l_221 = (safe_add_func_int16_t_s_s(l_263, (7UL >= 0xB639L)))) && p_57) < (-2L)))), p_56)))) || l_264), 0xD4L)), g_136.f2, l_232, l_158))))) == l_225);
                        l_233 = l_118;
                        g_131.f1 = (-1L);
                    }
                }
            }
            l_175 = (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((g_90.f2 = (safe_rshift_func_int16_t_s_u((((g_90.f3 == ((l_279 = ((safe_rshift_func_uint16_t_u_s(((((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((g_88 && l_164), 65535UL)), 1UL)) < p_57) || g_90.f0) && ((safe_lshift_func_uint16_t_u_u(g_90.f0, 15)) < (1L ^ 65535UL))), p_56)) == 0UL)) || g_219)) < 255UL) == g_90.f2), 6))), 0L)), l_107));
            g_74.f1 = (safe_sub_func_uint8_t_u_u(((l_158 || ((-7L) == (g_114 <= p_57))) ^ (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_172 != (l_76 = (-4L))), g_73.f2)), 65535UL)), l_158)), 3))), 0x89L));
        }
    }
    l_158 = (g_159.f0 || p_55);
    return g_242;
}







static short func_58(unsigned char p_59, int p_60, short p_61, int p_62)
{
    return p_61;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    transparent_crc(g_73.f2, "g_73.f2", print_hash_value);
    transparent_crc(g_73.f3, "g_73.f3", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_74.f2, "g_74.f2", print_hash_value);
    transparent_crc(g_74.f3, "g_74.f3", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_89.f1, "g_89.f1", print_hash_value);
    transparent_crc(g_89.f2, "g_89.f2", print_hash_value);
    transparent_crc(g_89.f3, "g_89.f3", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_90.f2, "g_90.f2", print_hash_value);
    transparent_crc(g_90.f3, "g_90.f3", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_122.f0, "g_122.f0", print_hash_value);
    transparent_crc(g_122.f1, "g_122.f1", print_hash_value);
    transparent_crc(g_122.f2, "g_122.f2", print_hash_value);
    transparent_crc(g_122.f3, "g_122.f3", print_hash_value);
    transparent_crc(g_123.f0, "g_123.f0", print_hash_value);
    transparent_crc(g_123.f1, "g_123.f1", print_hash_value);
    transparent_crc(g_123.f2, "g_123.f2", print_hash_value);
    transparent_crc(g_123.f3, "g_123.f3", print_hash_value);
    transparent_crc(g_131.f0, "g_131.f0", print_hash_value);
    transparent_crc(g_131.f1, "g_131.f1", print_hash_value);
    transparent_crc(g_131.f2, "g_131.f2", print_hash_value);
    transparent_crc(g_131.f3, "g_131.f3", print_hash_value);
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    transparent_crc(g_132.f1, "g_132.f1", print_hash_value);
    transparent_crc(g_132.f2, "g_132.f2", print_hash_value);
    transparent_crc(g_132.f3, "g_132.f3", print_hash_value);
    transparent_crc(g_133.f0, "g_133.f0", print_hash_value);
    transparent_crc(g_133.f1, "g_133.f1", print_hash_value);
    transparent_crc(g_133.f2, "g_133.f2", print_hash_value);
    transparent_crc(g_133.f3, "g_133.f3", print_hash_value);
    transparent_crc(g_136.f0, "g_136.f0", print_hash_value);
    transparent_crc(g_136.f1, "g_136.f1", print_hash_value);
    transparent_crc(g_136.f2, "g_136.f2", print_hash_value);
    transparent_crc(g_136.f3, "g_136.f3", print_hash_value);
    transparent_crc(g_137.f0, "g_137.f0", print_hash_value);
    transparent_crc(g_137.f1, "g_137.f1", print_hash_value);
    transparent_crc(g_137.f2, "g_137.f2", print_hash_value);
    transparent_crc(g_137.f3, "g_137.f3", print_hash_value);
    transparent_crc(g_159.f0, "g_159.f0", print_hash_value);
    transparent_crc(g_159.f1, "g_159.f1", print_hash_value);
    transparent_crc(g_159.f2, "g_159.f2", print_hash_value);
    transparent_crc(g_159.f3, "g_159.f3", print_hash_value);
    transparent_crc(g_178.f0, "g_178.f0", print_hash_value);
    transparent_crc(g_178.f1, "g_178.f1", print_hash_value);
    transparent_crc(g_178.f2, "g_178.f2", print_hash_value);
    transparent_crc(g_178.f3, "g_178.f3", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_313.f0, "g_313.f0", print_hash_value);
    transparent_crc(g_313.f1, "g_313.f1", print_hash_value);
    transparent_crc(g_313.f2, "g_313.f2", print_hash_value);
    transparent_crc(g_313.f3, "g_313.f3", print_hash_value);
    transparent_crc(g_314.f0, "g_314.f0", print_hash_value);
    transparent_crc(g_314.f1, "g_314.f1", print_hash_value);
    transparent_crc(g_314.f2, "g_314.f2", print_hash_value);
    transparent_crc(g_314.f3, "g_314.f3", print_hash_value);
    transparent_crc(g_333.f0, "g_333.f0", print_hash_value);
    transparent_crc(g_333.f1, "g_333.f1", print_hash_value);
    transparent_crc(g_333.f2, "g_333.f2", print_hash_value);
    transparent_crc(g_333.f3, "g_333.f3", print_hash_value);
    transparent_crc(g_339.f0, "g_339.f0", print_hash_value);
    transparent_crc(g_339.f1, "g_339.f1", print_hash_value);
    transparent_crc(g_339.f2, "g_339.f2", print_hash_value);
    transparent_crc(g_339.f3, "g_339.f3", print_hash_value);
    transparent_crc(g_340.f0, "g_340.f0", print_hash_value);
    transparent_crc(g_340.f1, "g_340.f1", print_hash_value);
    transparent_crc(g_340.f2, "g_340.f2", print_hash_value);
    transparent_crc(g_340.f3, "g_340.f3", print_hash_value);
    transparent_crc(g_343.f0, "g_343.f0", print_hash_value);
    transparent_crc(g_343.f1, "g_343.f1", print_hash_value);
    transparent_crc(g_343.f2, "g_343.f2", print_hash_value);
    transparent_crc(g_343.f3, "g_343.f3", print_hash_value);
    transparent_crc(g_344.f0, "g_344.f0", print_hash_value);
    transparent_crc(g_344.f1, "g_344.f1", print_hash_value);
    transparent_crc(g_344.f2, "g_344.f2", print_hash_value);
    transparent_crc(g_344.f3, "g_344.f3", print_hash_value);
    transparent_crc(g_360.f0, "g_360.f0", print_hash_value);
    transparent_crc(g_360.f1, "g_360.f1", print_hash_value);
    transparent_crc(g_360.f2, "g_360.f2", print_hash_value);
    transparent_crc(g_360.f3, "g_360.f3", print_hash_value);
    transparent_crc(g_361.f0, "g_361.f0", print_hash_value);
    transparent_crc(g_361.f1, "g_361.f1", print_hash_value);
    transparent_crc(g_361.f2, "g_361.f2", print_hash_value);
    transparent_crc(g_361.f3, "g_361.f3", print_hash_value);
    transparent_crc(g_365.f0, "g_365.f0", print_hash_value);
    transparent_crc(g_365.f1, "g_365.f1", print_hash_value);
    transparent_crc(g_365.f2, "g_365.f2", print_hash_value);
    transparent_crc(g_365.f3, "g_365.f3", print_hash_value);
    transparent_crc(g_366.f0, "g_366.f0", print_hash_value);
    transparent_crc(g_366.f1, "g_366.f1", print_hash_value);
    transparent_crc(g_366.f2, "g_366.f2", print_hash_value);
    transparent_crc(g_366.f3, "g_366.f3", print_hash_value);
    transparent_crc(g_367.f0, "g_367.f0", print_hash_value);
    transparent_crc(g_367.f1, "g_367.f1", print_hash_value);
    transparent_crc(g_367.f2, "g_367.f2", print_hash_value);
    transparent_crc(g_367.f3, "g_367.f3", print_hash_value);
    transparent_crc(g_408.f0, "g_408.f0", print_hash_value);
    transparent_crc(g_408.f1, "g_408.f1", print_hash_value);
    transparent_crc(g_408.f2, "g_408.f2", print_hash_value);
    transparent_crc(g_408.f3, "g_408.f3", print_hash_value);
    transparent_crc(g_409.f0, "g_409.f0", print_hash_value);
    transparent_crc(g_409.f1, "g_409.f1", print_hash_value);
    transparent_crc(g_409.f2, "g_409.f2", print_hash_value);
    transparent_crc(g_409.f3, "g_409.f3", print_hash_value);
    transparent_crc(g_410.f0, "g_410.f0", print_hash_value);
    transparent_crc(g_410.f1, "g_410.f1", print_hash_value);
    transparent_crc(g_410.f2, "g_410.f2", print_hash_value);
    transparent_crc(g_410.f3, "g_410.f3", print_hash_value);
    transparent_crc(g_411.f0, "g_411.f0", print_hash_value);
    transparent_crc(g_411.f1, "g_411.f1", print_hash_value);
    transparent_crc(g_411.f2, "g_411.f2", print_hash_value);
    transparent_crc(g_411.f3, "g_411.f3", print_hash_value);
    transparent_crc(g_412.f0, "g_412.f0", print_hash_value);
    transparent_crc(g_412.f1, "g_412.f1", print_hash_value);
    transparent_crc(g_412.f2, "g_412.f2", print_hash_value);
    transparent_crc(g_412.f3, "g_412.f3", print_hash_value);
    transparent_crc(g_413.f0, "g_413.f0", print_hash_value);
    transparent_crc(g_413.f1, "g_413.f1", print_hash_value);
    transparent_crc(g_413.f2, "g_413.f2", print_hash_value);
    transparent_crc(g_413.f3, "g_413.f3", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_459, "g_459", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_474.f0, "g_474.f0", print_hash_value);
    transparent_crc(g_474.f1, "g_474.f1", print_hash_value);
    transparent_crc(g_474.f2, "g_474.f2", print_hash_value);
    transparent_crc(g_474.f3, "g_474.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
