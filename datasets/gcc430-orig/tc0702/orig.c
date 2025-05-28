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
   volatile unsigned char f0;
   unsigned short f1;
   volatile signed f2 : 23;
   signed f3 : 31;
};


static unsigned g_2 = 0xAFA2FAFDL;
static volatile struct S0 g_3 = {0x8AL,0x35A2L,403,-23276};
static volatile int g_6 = (-4L);
static int g_7 = 0x9E843631L;
static unsigned short g_64 = 0xC743L;
static unsigned short g_67 = 0x8B9DL;
static unsigned g_69 = 1UL;
static unsigned g_72 = 0x75426BECL;
static unsigned g_83 = 0xDAE0A732L;
static unsigned g_101 = 4294967287UL;
static char g_115 = 0xD0L;
static char g_132 = (-2L);
static unsigned g_133 = 0UL;
static char g_138 = 0L;
static int g_142 = 0x7EF0612DL;
static int g_143 = 0x338C8B0FL;
static char g_168 = (-4L);
static char g_204 = (-1L);
static unsigned long long g_225 = 18446744073709551611UL;
static int g_226 = 0x0CC145FEL;
static unsigned char g_255 = 0xB8L;
static short g_262 = 0x8E37L;
static int g_280 = (-10L);
static int g_281 = (-1L);
static unsigned char g_318 = 6UL;
static volatile struct S0 g_346 = {2UL,0xD4F8L,-263,-9046};
static unsigned long long g_351 = 0xC4A7E46AF6D6110CLL;
static struct S0 g_358 = {0xB7L,0x067AL,-1904,16043};
static volatile struct S0 g_359 = {0x22L,0xA2C1L,1485,-3533};
static struct S0 g_453 = {0x1FL,0UL,1387,-29778};
static volatile struct S0 g_459 = {0xCDL,65531UL,1110,-32096};
static unsigned g_535 = 0xD129FD41L;
static volatile struct S0 g_545 = {255UL,0x29F5L,1869,9729};
static struct S0 g_582 = {0x6FL,0xCCC6L,1468,28729};
static struct S0 g_596 = {255UL,0x1071L,-1922,-28490};
static unsigned char g_699 = 0xF0L;
static struct S0 g_700 = {0xFFL,0xB9BCL,-1087,25283};
static struct S0 g_733 = {0UL,0UL,-26,-23918};
static volatile struct S0 g_774 = {254UL,0UL,397,-12627};
static struct S0 g_790 = {0UL,0x546DL,2147,-46133};
static volatile struct S0 g_791 = {255UL,0xEE9BL,-1979,4513};
static unsigned long long g_831 = 4UL;
static struct S0 g_845 = {7UL,0x60CDL,1404,23764};
static struct S0 g_847 = {0UL,65531UL,-1694,9540};
static struct S0 g_865 = {0x54L,65528UL,1569,42200};
static short g_886 = 8L;
static const struct S0 g_888 = {0xFBL,0xE31FL,1395,-17476};
static struct S0 g_889 = {0x51L,0x5091L,-51,42774};
static struct S0 g_890 = {0x3DL,0xB27BL,-1424,26813};
static struct S0 g_891 = {0UL,1UL,-384,39798};
static struct S0 g_892 = {247UL,0x7205L,-1880,21720};
static struct S0 g_893 = {0x6FL,65535UL,2670,33810};
static short g_922 = 5L;
static long long g_942 = 0L;



static int func_1(void);
static struct S0 func_11(short p_12);
static unsigned char func_19(int p_20, unsigned char p_21, const unsigned p_22);
static unsigned func_24(char p_25, unsigned long long p_26, unsigned p_27, long long p_28, int p_29);
static char func_30(int p_31, unsigned short p_32);
static long long func_34(int p_35, long long p_36);
static int func_37(unsigned p_38);
static const struct S0 func_39(int p_40, unsigned p_41, unsigned p_42, short p_43);
static unsigned func_45(const unsigned p_46);
static short func_58(int p_59);
static int func_1(void)
{
    unsigned char l_10 = 250UL;
    int l_905 = 0x25FFD053L;
    int l_914 = (-8L);
    if (g_2)
    {
        g_3 = g_3;
        for (g_2 = 0; (g_2 == 5); g_2 = safe_add_func_int8_t_s_s(g_2, 8))
        {
            for (g_7 = 0; (g_7 <= (-21)); g_7 = safe_sub_func_uint64_t_u_u(g_7, 9))
            {
                g_3.f2 = l_10;
                g_892 = func_11(g_3.f1);
            }
            g_893 = func_11(g_886);
        }
    }
    else
    {
        unsigned l_906 = 4294967295UL;
        short l_911 = 5L;
        int l_928 = 0x2772719AL;
        int l_929 = 0L;
        g_545.f2 |= 0xC6BA9E48L;
        for (g_889.f1 = 0; (g_889.f1 < 45); g_889.f1++)
        {
            short l_899 = 0xC3E8L;
            int l_904 = 0xED891D6AL;
            int l_923 = 0x19A67884L;
            l_914 |= (safe_add_func_uint8_t_u_u((l_906 = ((safe_unary_minus_func_uint32_t_u(func_34(g_889.f2, (((l_899 = 0x0BB0L) ^ (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(1L, 5)), l_904))) && l_905)))) || (-8L))), ((safe_mod_func_int8_t_s_s((((safe_mod_func_int8_t_s_s(l_911, (safe_lshift_func_uint8_t_u_u((0x16819892204BF526LL > g_893.f1), g_845.f1)))) > 0x53L) >= l_904), g_582.f3)) && 9L)));
            l_914 = (safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s((g_890.f0 | l_899), g_892.f1)) == l_904), 2));
            g_889.f3 &= g_545.f2;
            for (l_904 = 10; (l_904 <= 26); l_904++)
            {
                unsigned short l_921 = 1UL;
                g_791.f2 = l_921;
                l_923 = (func_34(l_899, l_911) < (g_922 = (l_921 && g_699)));
                g_582 = func_39(g_888.f0, l_911, (safe_add_func_uint16_t_u_u((6UL ^ 255UL), ((l_905 | 0xDEL) < g_845.f3))), (g_922 = ((g_281 >= (l_914 = 0xDE1783AC8E102F7CLL)) && l_906)));
                l_914 &= (safe_div_func_int16_t_s_s((g_922 = (g_790.f1 || (l_905 < 0x9576E7F7L))), g_72));
            }
        }
        l_929 |= (l_928 = (g_143 ^= 0xEBC93006L));
        l_928 = l_906;
    }
    g_545.f2 |= l_905;
    g_891.f3 ^= (((safe_rshift_func_int16_t_s_u(0xE1D4L, func_34(g_453.f2, l_914))) || (l_914 = g_790.f3)) && (l_914 >= (l_905 = l_914)));
    g_790.f3 = (((safe_mod_func_int64_t_s_s((g_942 &= ((safe_sub_func_uint64_t_u_u(func_24(l_914, func_30(func_24((func_19(g_204, l_10, g_888.f2) && ((safe_add_func_int8_t_s_s((~g_865.f3), ((((safe_lshift_func_uint16_t_u_s(g_890.f1, (g_922 = (safe_div_func_uint32_t_u_u((((g_889.f1 = func_58(g_847.f2)) | l_914) && g_453.f0), l_905))))) || 1L) | l_905) | g_318))) > 0xB7L)), g_358.f3, l_905, g_133, g_535), g_893.f3), g_888.f3, g_889.f3, l_914), l_10)) || l_905)), l_905)) != l_905) || l_905);
    return l_914;
}







static struct S0 func_11(short p_12)
{
    unsigned long long l_23 = 18446744073709551611UL;
    int l_33 = 0x1210CBEDL;
    int l_830 = (-6L);
    long long l_856 = 1L;
    for (p_12 = (-5); (p_12 < (-10)); p_12 = safe_sub_func_uint64_t_u_u(p_12, 5))
    {
        unsigned char l_320 = 0x99L;
        int l_321 = 0xA8A002E8L;
        unsigned long long l_772 = 0x5BF86D384F699A27LL;
        long long l_828 = 0xE543EF3DBA8E3F1ELL;
        int l_832 = 1L;
        int l_835 = 6L;
        unsigned short l_884 = 0x29B9L;
        if (((safe_add_func_uint64_t_u_u(18446744073709551607UL, (g_2 != (l_321 = (safe_add_func_uint8_t_u_u(func_19(l_23, ((func_24(func_30(p_12, (((l_33 = p_12) <= (func_34((l_320 = func_37(p_12)), ((l_321 & l_23) >= 0x9068L)) & 0xF19FA5CB6F0BD834LL)) == l_321)), l_772, g_2, p_12, p_12) > l_772) != p_12), p_12), l_23)))))) || p_12))
        {
            char l_789 = (-5L);
            g_790 = func_39(p_12, (safe_div_func_int32_t_s_s(((l_33 = (safe_lshift_func_uint16_t_u_u(g_280, 11))) < g_459.f1), g_83)), (((safe_rshift_func_int16_t_s_s((l_321 = (g_2 & g_733.f3)), 11)) ^ (safe_add_func_int8_t_s_s(((0xF3L > (1L | (safe_lshift_func_int16_t_s_u((((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(g_72, l_772)), 15)) && l_789) == g_699), g_358.f1)))) == 0x91L), 0x55L))) >= l_23), l_320);
            g_596 = g_791;
            g_226 ^= g_790.f0;
        }
        else
        {
            unsigned char l_793 = 0x8BL;
            int l_796 = 0xC8784B8DL;
            unsigned long long l_885 = 0xB37B8B3FD80EB1B3LL;
            if ((p_12 > (func_37(l_33) == ((p_12 < ((safe_unary_minus_func_int16_t_s(p_12)) & 255UL)) == (l_793 ^= (p_12 & (l_321 = g_7)))))))
            {
                for (g_255 = 27; (g_255 <= 53); ++g_255)
                {
                    if (g_3.f3)
                        break;
                    if (g_72)
                        continue;
                    l_796 = 0x36D7113DL;
                }
                l_33 = p_12;
            }
            else
            {
                unsigned l_797 = 4294967295UL;
                int l_821 = 0x0FDBA4FFL;
                l_321 = g_359.f2;
                if (p_12)
                {
                    l_33 = p_12;
                }
                else
                {
                    int l_829 = (-10L);
                    l_797 = (g_132 || (-1L));
                    l_832 = (safe_sub_func_uint64_t_u_u(18446744073709551615UL, (g_831 &= ((safe_unary_minus_func_uint8_t_u((safe_div_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(0L, g_700.f1)), (safe_add_func_uint32_t_u_u((!(l_321 = l_797)), (l_830 = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((((g_67 & (l_33 = (safe_div_func_uint8_t_u_u((l_821 = p_12), (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((~l_33), ((g_168 || p_12) == l_828))), g_453.f0)), 0UL)))))) && l_829) | p_12), p_12)), 2)), (-1L))), l_829))))))), g_255)) >= 65526UL), g_358.f3)))) ^ p_12))));
                }
            }
            if ((safe_lshift_func_int8_t_s_s(l_835, p_12)))
            {
                int l_842 = 0x8B464EFBL;
                int l_850 = 0xF1275505L;
                long long l_855 = 0xB96FD2C1BA00E87CLL;
                g_733.f2 = 0L;
                if (p_12)
                {
                    long long l_843 = 0x7E9B69CA01CE761BLL;
                    int l_844 = 4L;
                    unsigned short l_846 = 65526UL;
                    for (g_351 = (-27); (g_351 < 21); g_351 = safe_add_func_uint64_t_u_u(g_351, 1))
                    {
                        g_845 = func_39(l_321, (l_843 &= (((0x62L && (g_115 &= ((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(((g_346.f3 <= ((g_138 = (l_842 |= (g_138 == p_12))) <= ((~p_12) && l_23))) == (~(g_2 || (g_133 > 0xD604364CL)))), 0x25CAL)), 6)) && 0x9E58L))) < 0x68ECL) && 0x72B6L)), l_844, g_535);
                        if (l_846)
                            continue;
                        g_3 = g_847;
                        l_850 ^= (g_847.f3 = ((safe_lshift_func_uint16_t_u_u((l_842 = l_835), 13)) & 0xBBL));
                    }
                }
                else
                {
                    unsigned l_864 = 0xAF666502L;
                    for (g_72 = 0; (g_72 != 44); g_72++)
                    {
                        return g_346;
                    }
                    if (l_23)
                        break;
                    for (g_845.f1 = (-12); (g_845.f1 <= 18); g_845.f1 = safe_add_func_uint64_t_u_u(g_845.f1, 4))
                    {
                        char l_859 = 1L;
                        l_856 ^= ((p_12 | (l_33 = l_855)) && (l_772 >= p_12));
                        g_865 = func_39((g_845.f3 |= (l_835 = (((safe_sub_func_uint64_t_u_u(((l_859 | l_859) != (p_12 != (safe_div_func_uint64_t_u_u((0UL | (0x66L > (func_19(func_30(((p_12 <= (safe_sub_func_uint16_t_u_u(p_12, ((func_19(g_133, l_793, l_842) >= 9L) != 0x10D65D9664106C4DLL)))) || p_12), p_12), g_790.f1, g_7) >= l_864))), (-8L))))), 18446744073709551615UL)) >= l_859) != 0xE96C1C52L))), g_790.f1, g_831, g_790.f1);
                    }
                    l_796 ^= 0xC098166FL;
                }
            }
            else
            {
                g_346.f3 = g_545.f1;
                for (l_835 = 27; (l_835 > (-27)); l_835 = safe_sub_func_uint8_t_u_u(l_835, 7))
                {
                    l_832 = p_12;
                }
                for (g_168 = 0; (g_168 > 8); g_168 = safe_add_func_uint16_t_u_u(g_168, 1))
                {
                    int l_887 = 0x0618523AL;
                    l_887 ^= (l_793 <= (((g_596.f2 ^ (p_12 == (g_262 |= (safe_lshift_func_int8_t_s_s(g_733.f3, 5))))) ^ (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(((+(0x7FL & (l_830 = 0UL))) && ((safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(l_793, (safe_rshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((0xAC28L >= g_535) >= 0L), l_884)), l_885)))), 0x9546B73BL)) | p_12)), g_886)), p_12))) | 65533UL));
                    if (l_33)
                        continue;
                }
            }
            g_889 = g_888;
            g_891 = g_890;
        }
    }
    return g_582;
}







static unsigned char func_19(int p_20, unsigned char p_21, const unsigned p_22)
{
    g_596 = g_774;
    return p_22;
}







static unsigned func_24(char p_25, unsigned long long p_26, unsigned p_27, long long p_28, int p_29)
{
    unsigned l_773 = 4294967290UL;
    g_582 = func_39(p_28, (p_27 >= l_773), p_28, g_3.f3);
    return p_26;
}







static char func_30(int p_31, unsigned short p_32)
{
    int l_475 = (-1L);
    int l_476 = 0xEAA68DCCL;
    int l_477 = 0x008BCAF0L;
    int l_478 = 0xED41813AL;
    int l_484 = (-8L);
    char l_536 = 0x47L;
    short l_747 = 0xBBD5L;
    unsigned char l_748 = 0x07L;
    if ((g_453.f3 = (safe_add_func_uint8_t_u_u(g_138, (l_478 |= func_58((l_477 = (safe_rshift_func_int8_t_s_s((g_168 = (func_58(l_475) | l_476)), 1)))))))))
    {
        const short l_479 = 1L;
        int l_491 = 0x75117920L;
        char l_594 = 0x55L;
        int l_692 = 0x84693693L;
        int l_712 = (-1L);
        l_477 ^= (g_358.f3 = ((l_479 < p_32) > ((((safe_sub_func_uint64_t_u_u((((l_484 = 0x1878L) <= g_453.f3) != (safe_rshift_func_int16_t_s_s(0xAAE4L, ((safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((l_491 &= p_32) & (safe_mod_func_uint32_t_u_u(g_69, (safe_add_func_uint16_t_u_u(g_64, ((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((l_478 = l_479), g_453.f3)), 5)), l_479)) <= g_346.f0)))))), p_31)), l_475)) >= l_479)))), p_32)) & 0UL) != 0x85816FB09E31F1BBLL) <= l_476)));
lbl_583:
        g_453.f3 = (safe_div_func_int32_t_s_s((g_346.f1 > (safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(0UL, ((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(0L, 0x11670AD5L)), p_32)) == 9L))), l_491))), (safe_rshift_func_int16_t_s_s(((0xA05FD7C74CE602A5LL && (safe_add_func_int8_t_s_s(p_31, 6UL))) ^ g_142), 6))));
        if (func_58(((l_491 = (safe_sub_func_int8_t_s_s(g_358.f1, l_484))) || ((l_484 &= ((safe_rshift_func_uint16_t_u_u((g_453.f3 && func_37(g_143)), p_32)) <= p_32)) & (g_351 >= g_281)))))
        {
            unsigned short l_532 = 0UL;
            int l_538 = 0x461E19B1L;
            int l_543 = 0xC4F86ED9L;
            long long l_561 = (-7L);
            l_477 = (((g_255 &= (g_318 &= (p_31 < (safe_unary_minus_func_uint64_t_u((g_7 && 0x00L)))))) & (0L && (g_225 & (safe_lshift_func_int8_t_s_u(l_476, (safe_rshift_func_int8_t_s_u(g_346.f0, (l_491 < 0x68L)))))))) & l_475);
            for (g_115 = (-8); (g_115 <= (-28)); --g_115)
            {
                l_478 = 1L;
                return g_115;
            }
            for (g_133 = 0; (g_133 <= 49); g_133++)
            {
                unsigned l_531 = 0xCE011796L;
                int l_537 = 0x368298F3L;
                int l_546 = 0L;
                unsigned long long l_637 = 0xC37D7D59375B487FLL;
                l_537 = (l_536 = (l_531 ^ (g_143 = (g_351 <= (g_101 = (((l_532 = 18446744073709551608UL) > (0x7839F555L | ((safe_lshift_func_int16_t_s_s(p_32, 12)) != g_69))) & (g_535 &= 0xB0A3D4F46D5D9253LL)))))));
                g_143 &= (l_538 = (3UL > (g_358.f3 >= l_484)));
                if ((l_538 ^= l_532))
                {
                    unsigned l_544 = 1UL;
                    int l_595 = 0xF658D928L;
                    char l_615 = 0xB4L;
                    if ((g_226 &= func_58((safe_sub_func_uint8_t_u_u(g_133, l_537)))))
                    {
                        unsigned char l_542 = 9UL;
                        g_3.f3 ^= 0xA0AD549BL;
                        l_543 ^= (g_280 = (l_542 = (l_538 = (safe_unary_minus_func_uint32_t_u(g_3.f1)))));
                        if (l_491)
                            break;
                        l_544 ^= 0xA349F03EL;
                    }
                    else
                    {
                        if (p_32)
                            break;
                        g_545 = g_459;
                        g_346.f3 = g_115;
                        l_538 = ((1UL ^ ((((g_101 |= func_58(p_31)) >= (l_546 != ((safe_sub_func_int8_t_s_s(p_31, (p_32 | (safe_mod_func_uint8_t_u_u((g_255 = l_543), (p_32 | (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(g_7, p_31)) ^ l_546), 5)))))))) || p_32))) >= 0xEEL) || p_32)) | p_31);
                    }
                    g_280 ^= (safe_mod_func_int64_t_s_s((p_31 || g_359.f2), ((((safe_mod_func_int16_t_s_s((-3L), l_491)) == (l_546 = (safe_sub_func_uint64_t_u_u(l_544, l_561)))) && ((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(p_31, 14)) || func_58((safe_mod_func_uint8_t_u_u(0xCBL, (g_138 = (safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(((+(safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(0xEBL, 6)), (-1L)))) && l_561), (-1L))) == 0x794BL), 3))))))), 0xF1L)), 0)), p_32)) != p_32)) || p_32)));
                    for (l_531 = 14; (l_531 > 2); l_531--)
                    {
                        g_582 = func_39(((g_453.f2 <= l_491) != 0x430A2925L), g_453.f3, l_479, p_31);
                        if (g_358.f1)
                            goto lbl_583;
                        g_545.f2 = (l_546 |= l_561);
                    }
                    if (((g_358.f3 |= ((l_595 = (safe_rshift_func_int8_t_s_u((p_32 ^ ((p_32 ^ ((p_31 & ((safe_lshift_func_int8_t_s_s((+(safe_rshift_func_int16_t_s_u((((g_453.f1 ^ l_538) == 7L) && ((l_543 = g_545.f1) > (g_453.f3 ^ l_476))), 1))), l_594)) < g_226)) && g_359.f3)) > 4294967294UL)), p_31))) <= p_32)) != l_537))
                    {
                        int l_601 = 8L;
                        g_545 = g_596;
                        g_459.f2 = ((((g_459.f3 > (((safe_sub_func_uint16_t_u_u(p_32, (g_115 >= (g_262 ^= func_58((safe_mod_func_uint32_t_u_u(((l_601 != (((l_476 >= func_58(l_543)) | (0xEAB0986DL ^ (safe_sub_func_int32_t_s_s(l_594, (-1L))))) & 0x7DL)) ^ g_133), (-5L)))))))) || 0x890BL) <= p_32)) ^ l_532) <= p_31) < l_532);
                    }
                    else
                    {
                        char l_608 = (-10L);
                        int l_616 = 0x4F3D1165L;
                        g_453.f3 |= ((((g_359.f1 == (g_69 = l_479)) <= (safe_rshift_func_uint16_t_u_u((p_32 >= 0x1166D391C8D4B4F2LL), 3))) < p_31) || (safe_add_func_int64_t_s_s((l_608 >= (safe_lshift_func_uint16_t_u_s((0xE12FA61DL > (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(l_608, 15)), (l_608 || l_476)))), 6))), p_31)));
                        l_616 = (g_545.f0 == (g_358.f3 | (+l_615)));
                    }
                }
                else
                {
                    char l_619 = 6L;
                    int l_620 = 0x9393C2D5L;
                    int l_638 = 0L;
                    int l_639 = 0xFDD9E36FL;
                    if (l_475)
                        break;
                    if (g_226)
                        continue;
                    l_620 = (safe_mod_func_int32_t_s_s((l_619 = (g_453.f1 && p_31)), p_31));
                    l_639 |= (safe_mod_func_uint16_t_u_u(((l_543 < (0xC1L & (p_31 ^ (safe_lshift_func_int8_t_s_s(((((l_537 = p_31) >= (safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_s(((l_620 = g_115) | (safe_add_func_int8_t_s_s(1L, (safe_rshift_func_uint8_t_u_u((l_638 &= ((l_637 = (+(safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(1UL, (g_453.f1 = p_31))), g_545.f0)))) | (-1L))), 4))))), l_479)) >= g_318), p_31))) != g_262) & p_31), p_32))))) >= l_491), 9L));
                }
                l_543 ^= l_594;
            }
        }
        else
        {
            unsigned l_641 = 0x7D170F1EL;
            int l_658 = 0xBC61252BL;
            if ((g_453.f1 >= 0xEE92L))
            {
                const unsigned short l_640 = 0x91EFL;
                int l_652 = (-1L);
                g_359.f2 &= func_45(l_640);
                l_641 |= 7L;
lbl_711:
                l_491 = ((((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(1UL, ((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u((func_58((safe_lshift_func_uint8_t_u_u((l_652 = l_479), p_31))) <= (l_479 | l_536)), g_596.f0)), g_7)) ^ g_204))), 0xCBA9L)) < 0xECB92477L) & l_479) != 0UL);
                for (g_535 = 0; (g_535 > 18); g_535 = safe_add_func_int32_t_s_s(g_535, 1))
                {
                    char l_657 = (-5L);
                    int l_698 = (-1L);
                    l_484 |= 0x4EFA41E1L;
                    l_658 = (l_478 &= ((safe_sub_func_int64_t_s_s((l_657 >= ((p_31 > g_582.f0) <= (~l_657))), (-1L))) < l_640));
                    if ((l_658 = ((safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(func_45(l_657), (((p_32 < (((safe_div_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(0x53L, 6)), 4)), p_32)), (safe_mod_func_uint32_t_u_u(((g_318 = 0UL) | l_594), (l_652 = (safe_lshift_func_int8_t_s_s((l_657 & ((safe_unary_minus_func_uint32_t_u(8UL)) <= 65533UL)), 1))))))) ^ l_640) != p_31)) > (-3L)) > l_641))) <= 0xDCL), 0x67A9C4D5L)) > g_358.f3)))
                    {
                        g_358.f2 = ((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((p_32 == (l_658 = (l_657 != (safe_rshift_func_int16_t_s_u(0xB8A4L, 15))))), ((safe_add_func_int8_t_s_s((~(!0xD0L)), ((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_641, l_657)), (g_115 == func_58(g_255)))) > p_31))) == l_594))), (-1L))), g_351)) | 0x21L);
                        l_692 = (-7L);
                    }
                    else
                    {
                        long long l_693 = 0xA544E2B2987633D1LL;
                        int l_713 = 3L;
                        g_700 = func_39(l_693, ((safe_sub_func_uint8_t_u_u(p_32, 255UL)) & (l_484 = func_34(l_491, (safe_mod_func_int8_t_s_s(((l_692 |= ((l_698 &= (l_477 &= 0x10CADBFEL)) != p_31)) <= g_225), (p_32 & (g_699 = l_476))))))), l_479, g_7);
                        g_359.f3 = ((g_138 = (safe_sub_func_int8_t_s_s((0x800AF2D98B7E4ED3LL == (-8L)), (safe_rshift_func_int16_t_s_s(p_32, 12))))) ^ ((safe_sub_func_int8_t_s_s((!((safe_div_func_uint64_t_u_u(0x048864D22286C82FLL, l_658)) || func_58((safe_add_func_uint8_t_u_u(g_700.f3, p_32))))), 254UL)) & g_596.f1));
                        if (g_281)
                            goto lbl_711;
                        l_713 &= l_712;
                    }
                }
            }
            else
            {
                int l_728 = 0x3566885BL;
                l_477 = ((func_58((p_31 | func_45((safe_sub_func_uint16_t_u_u(((p_32 && ((l_641 == ((safe_rshift_func_uint16_t_u_s((p_32 == ((0xF039508CD3113D83LL != ((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((p_32 != ((safe_sub_func_int32_t_s_s((((safe_div_func_uint64_t_u_u(func_37(g_3.f2), p_32)) & g_582.f3) > 0x6407L), g_2)) < 0x71EFL)), p_31)), g_535)), l_728)) | 1UL)) != 0xEB36802E4203405DLL)), 13)) && 0xD3L)) != p_31)) ^ (-1L)), 0xD4CFL))))) <= g_358.f1) | 0xB2D109EBL);
                return p_31;
            }
            g_733 = func_39(func_37(l_475), (l_692 ^= g_358.f3), (safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(g_358.f3, (l_491 = (-2L)))), (g_2 > (p_32 <= (l_476 > (0x91L ^ l_594)))))), p_31);
            l_692 &= (func_58(((g_262 = 2L) >= (l_491 &= (safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_3.f2, (((safe_unary_minus_func_uint16_t_u(p_32)) <= func_58(p_31)) <= 0UL))), l_536))))) == p_32);
        }
    }
    else
    {
        unsigned char l_752 = 255UL;
        l_484 = (safe_div_func_int64_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(l_475, g_733.f0)), l_477)), (g_69 | l_747))), (l_748 = g_733.f3)));
        for (g_281 = 0; (g_281 != 27); g_281++)
        {
            int l_751 = 1L;
            int l_759 = 0L;
            l_752 = ((g_535 ^ ((l_751 && l_536) >= g_359.f3)) | 6L);
            g_733.f3 = p_31;
            l_759 = (l_475 || (safe_add_func_int32_t_s_s(0xB483EAACL, ((p_31 || (g_133 < (safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(l_752, 0x5FB9L)), (+p_32))))) && g_459.f1))));
        }
        g_596.f3 ^= func_34((l_536 ^ g_359.f0), g_262);
    }
    l_477 = (g_582.f3 &= (safe_mod_func_uint64_t_u_u(18446744073709551610UL, func_34((g_226 ^= 0x56AECD74L), g_358.f0))));
    g_346.f3 |= l_747;
    for (g_143 = 0; (g_143 > 27); g_143++)
    {
        for (g_168 = 0; (g_168 == 17); g_168 = safe_add_func_uint64_t_u_u(g_168, 5))
        {
            short l_771 = 0xEEC6L;
            l_477 |= (g_346.f3 ^ (safe_sub_func_int16_t_s_s(p_31, g_72)));
            for (g_133 = (-30); (g_133 > 21); ++g_133)
            {
                short l_770 = 0xAC8CL;
                l_770 ^= p_32;
            }
            return l_771;
        }
        return p_32;
    }
    return g_733.f2;
}







static long long func_34(int p_35, long long p_36)
{
    unsigned long long l_322 = 2UL;
    unsigned l_323 = 4294967295UL;
    unsigned short l_326 = 0UL;
    int l_328 = 0x29E244CAL;
    int l_329 = (-6L);
    int l_332 = 0x6F7BA14FL;
    l_323 = (!(l_322 &= func_58(p_36)));
    if ((p_36 < (((l_326 && (p_36 && (3L >= (l_329 = (g_101 = (safe_unary_minus_func_uint8_t_u((func_58(g_3.f2) ^ (l_328 = g_262))))))))) == (safe_add_func_int32_t_s_s(((l_332 = (0xF5L || (l_322 > 0xF3346647A815BEFCLL))) == 0x01BAD9EBL), 0x7787A40EL))) <= 1L)))
    {
        unsigned l_337 = 0UL;
        int l_354 = 0x09B9A7E0L;
        int l_371 = (-4L);
        if (((safe_mod_func_int16_t_s_s((func_45(p_36) != p_35), ((safe_div_func_uint8_t_u_u((l_337 != (l_337 < 0x62126B8E5C99A564LL)), (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_328, ((safe_mod_func_uint64_t_u_u(p_36, p_35)) <= p_35))), g_2)), 0xED16L)))) | l_322))) != 1L))
        {
            g_346 = g_3;
        }
        else
        {
            l_332 = (~((safe_add_func_int8_t_s_s(((p_36 == ((func_45((safe_mod_func_uint64_t_u_u(p_36, g_67))) | p_36) <= (g_351 = p_36))) > ((safe_rshift_func_uint16_t_u_s(0xCA57L, 7)) | (l_354 = g_346.f2))), g_281)) >= g_318));
            return p_35;
        }
        if (g_72)
        {
            long long l_355 = 0x77EC1DAE7D111132LL;
            int l_356 = 0x19E8DAD6L;
            l_356 = ((l_355 = 0x1D2BL) > g_346.f2);
            g_358 = func_39(g_3.f0, p_36, (safe_unary_minus_func_uint32_t_u(func_58(p_36))), (p_35 >= (~((g_262 = g_142) & l_356))));
        }
        else
        {
            const unsigned char l_364 = 1UL;
            g_359 = g_346;
            g_226 ^= (safe_lshift_func_uint8_t_u_s(((l_329 < (safe_rshift_func_uint16_t_u_u(l_337, 13))) < ((l_332 = 0x2EF8L) & p_36)), 5));
            g_346.f2 = l_364;
        }
        if (p_36)
        {
            unsigned short l_372 = 0xDC7DL;
            int l_404 = 0xE7A68C11L;
            int l_415 = 0L;
            l_372 |= (g_6 < (safe_sub_func_int8_t_s_s(8L, (g_318 ^= (l_371 &= func_45(((safe_add_func_uint8_t_u_u(p_35, g_143)) ^ ((p_35 || l_354) <= (safe_add_func_uint8_t_u_u(1UL, (((-3L) != l_354) && g_133)))))))))));
            for (g_143 = 0; (g_143 < (-17)); --g_143)
            {
                short l_392 = 1L;
                int l_397 = 0x7B53E73FL;
                for (l_328 = (-5); (l_328 == (-16)); l_328 = safe_sub_func_uint32_t_u_u(l_328, 1))
                {
                    l_354 &= p_35;
                }
                p_35 = (safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(func_58((l_354 < (safe_unary_minus_func_uint16_t_u(((safe_mod_func_uint8_t_u_u(l_326, (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(func_58(l_337), ((0xE13DL > (safe_mod_func_int32_t_s_s(g_204, (g_101 |= l_392)))) >= ((safe_mod_func_int32_t_s_s((g_346.f2 || (l_397 = ((safe_lshift_func_int16_t_s_u(l_328, 15)) > g_133))), 0x91F53D3AL)) | g_225)))), g_7)), p_35)))) > p_36))))), g_133)) | p_35), l_372));
                if (l_372)
                    break;
            }
            g_358.f3 ^= (safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_371 > (((safe_mod_func_uint64_t_u_u(l_332, (l_404 = l_371))) >= (18446744073709551615UL & (safe_lshift_func_uint8_t_u_s(l_326, p_36)))) <= ((l_328 = (l_415 = ((l_329 = func_45((safe_lshift_func_uint16_t_u_u(0x5779L, ((l_372 < (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(func_37((0UL == l_326)), p_36)), 0xDAAFL)), 0x1C89L))) > p_36))))) > l_372))) == l_372))), l_372)), g_2));
            return g_346.f3;
        }
        else
        {
            return g_359.f1;
        }
    }
    else
    {
        unsigned l_416 = 7UL;
        int l_438 = 1L;
        p_35 = l_416;
        g_3.f3 = p_35;
        l_328 |= l_416;
        for (g_67 = 0; (g_67 < 55); ++g_67)
        {
            unsigned char l_425 = 0x80L;
            int l_458 = 0xC0886355L;
            if ((safe_sub_func_int16_t_s_s((!(safe_sub_func_int8_t_s_s(l_322, ((((safe_sub_func_int16_t_s_s(p_36, l_425)) ^ (safe_div_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s((+(safe_rshift_func_uint16_t_u_u(l_425, p_35))), (g_138 != p_35))), ((safe_div_func_uint16_t_u_u((g_64 = ((p_36 | p_35) && g_3.f2)), l_416)) >= 0xCC8FL))) ^ 0x4097L), g_142))) || p_36) > p_35)))), g_67)))
            {
                return p_36;
            }
            else
            {
                unsigned l_452 = 0UL;
                unsigned l_454 = 0x3DFC46E6L;
                if ((8UL || (safe_sub_func_int16_t_s_s(((g_359.f2 == (0UL | (0x08L & (l_329 = g_351)))) != l_425), g_351))))
                {
                    l_438 &= l_328;
                }
                else
                {
                    unsigned l_443 = 1UL;
                    if ((+g_67))
                    {
                        p_35 = (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(p_36, l_443)), 3));
                    }
                    else
                    {
                        char l_444 = 0xECL;
                        p_35 &= l_444;
                        if (g_225)
                            continue;
                        g_453 = func_39(p_35, g_138, (((0x18AAL || (g_358.f1 |= (safe_unary_minus_func_uint8_t_u(l_323)))) ^ ((l_416 <= (safe_rshift_func_uint16_t_u_s(((p_35 ^ (((safe_rshift_func_uint8_t_u_s((g_255 |= 0xB5L), p_36)) && (l_452 |= p_36)) && 0x0D1AL)) == l_416), 2))) >= l_444)) | 9L), p_36);
                        p_35 &= l_454;
                    }
                    for (l_438 = 21; (l_438 != 24); l_438++)
                    {
                        long long l_457 = (-1L);
                        l_458 &= l_457;
                        g_459 = g_346;
                    }
                }
            }
            if (g_168)
            {
                int l_460 = 0xF76A16CEL;
                l_438 = g_280;
                g_453.f2 = (l_329 = l_460);
                l_329 = (safe_add_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((safe_lshift_func_int8_t_s_s(g_142, 3)))), g_142));
            }
            else
            {
                p_35 = ((g_225 |= (l_458 ^ (g_143 = (g_453.f3 = (safe_sub_func_uint16_t_u_u(((g_64 | l_438) < l_425), p_36)))))) & p_35);
            }
        }
    }
    p_35 = ((((safe_div_func_uint8_t_u_u(g_262, (l_328 && (4294967294UL != g_138)))) || l_326) && 0x34D34D7AL) ^ (safe_unary_minus_func_uint64_t_u(p_36)));
    return g_358.f2;
}







static int func_37(unsigned p_38)
{
    unsigned l_44 = 4294967290UL;
    int l_315 = 0xB8D93B70L;
    int l_319 = 0L;
    g_3 = func_39(g_3.f2, l_44, func_45(p_38), ((l_319 = (g_318 = ((l_315 = p_38) ^ (safe_mod_func_uint8_t_u_u(l_44, g_7))))) != p_38));
    return p_38;
}







static const struct S0 func_39(int p_40, unsigned p_41, unsigned p_42, short p_43)
{
    return g_3;
}







static unsigned func_45(const unsigned p_46)
{
    unsigned char l_94 = 0x3BL;
    int l_100 = 0xC0C381FEL;
    int l_193 = 0x6AABEE15L;
    unsigned long long l_198 = 0x2E916BB261D96121LL;
    unsigned l_253 = 0x5867A26EL;
    if (p_46)
    {
        unsigned l_53 = 0xDE21E525L;
        int l_62 = 0xCEA59F7CL;
        int l_91 = 1L;
        const int l_177 = 0L;
        int l_185 = 0x23CDDDF8L;
        if ((((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_53 = p_46), ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(0x5D5DL, ((0xB8AE0512ED4033E2LL == 0xBB1DCEDE6A6B93DCLL) != func_58((((safe_add_func_uint32_t_u_u((~(g_2 == g_7)), (l_62 != (g_7 & p_46)))) && l_62) | g_7))))), 6)) >= l_62))), g_2)) & 0xEFF8EE85L), g_2)) | 0x25L) == g_2))
        {
            unsigned l_84 = 0x961AC8BEL;
            unsigned long long l_118 = 0xDAAD4FDB33FCDF6ELL;
            int l_119 = 0xEBE1D701L;
            if ((l_84 || g_7))
            {
                char l_99 = (-4L);
                int l_108 = 0xA5CECF82L;
                g_101 &= ((safe_mod_func_int16_t_s_s((0x13CFL | (l_91 = (1UL <= (l_62 = (0x77D2L | (safe_add_func_uint64_t_u_u(g_72, p_46))))))), (safe_lshift_func_uint8_t_u_u(g_67, 4)))) <= (l_94 != (l_100 = ((safe_sub_func_int8_t_s_s(g_69, (safe_mod_func_int8_t_s_s((((((p_46 & p_46) | 1L) == p_46) & p_46) && l_84), g_64)))) <= l_99))));
                g_115 = (l_100 = (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(p_46, (l_108 ^= l_99))), l_99)), (0xE968L && (func_58(g_69) & (safe_rshift_func_uint8_t_u_s(255UL, ((safe_sub_func_int16_t_s_s(p_46, (safe_sub_func_uint64_t_u_u(g_101, g_101)))) == l_99))))))));
            }
            else
            {
                return g_67;
            }
            l_119 = (safe_sub_func_int8_t_s_s((l_62 ^= l_84), (l_118 = (l_100 = (g_69 < 0x8A1103C6C282E8BCLL)))));
            g_133 |= (safe_rshift_func_int8_t_s_u(((safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s(0x5E7CE460L, 0xF8D1BEB7L)), (safe_sub_func_int32_t_s_s(l_84, ((0x8548FAEAFAE61C72LL ^ (safe_add_func_int64_t_s_s(((func_58((g_132 = (safe_mod_func_uint8_t_u_u(((4L | g_83) != l_84), p_46)))) == 0x0586L) > 0x78ABL), 1L))) ^ 0UL))))) < g_115), p_46));
        }
        else
        {
            int l_136 = 9L;
            int l_137 = 0x56540EC6L;
            l_137 &= ((!func_58((l_136 = (safe_div_func_uint64_t_u_u(func_58(p_46), (-1L)))))) <= (1L >= (p_46 & (-1L))));
            g_138 &= p_46;
            for (l_62 = 10; (l_62 >= 16); ++l_62)
            {
                unsigned long long l_141 = 0xFA0F4C7584E37E41LL;
                return l_141;
            }
        }
        g_142 = g_101;
        l_100 = (g_143 = ((l_100 || l_94) | p_46));
        if (func_58(func_58((safe_div_func_int8_t_s_s(p_46, g_67)))))
        {
            const int l_184 = 0xD1DAF1BBL;
            int l_227 = 0x9F763CE0L;
            int l_261 = 0x9ED16096L;
            int l_263 = 7L;
            for (l_100 = 0; (l_100 == (-3)); --l_100)
            {
                unsigned l_166 = 0x715EE1BDL;
                int l_167 = (-1L);
                unsigned l_238 = 0xB295318BL;
                unsigned l_239 = 4294967288UL;
                unsigned char l_242 = 0x9AL;
                for (g_143 = 0; (g_143 == (-9)); g_143--)
                {
                    int l_164 = 0x53F318A4L;
                    int l_165 = (-1L);
                    unsigned l_192 = 18446744073709551615UL;
                    short l_207 = 0x472EL;
                    int l_208 = 0x0707C832L;
                    for (l_53 = 21; (l_53 < 7); l_53--)
                    {
                        l_165 = func_58((safe_sub_func_int64_t_s_s((l_164 |= (((0x9400L | (!p_46)) | func_58(p_46)) & (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(0xE2L, (safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((((g_133 >= g_138) && (p_46 || l_53)) <= l_94), p_46)), (-1L))))) <= 0L), 4)), p_46)))), 5L)));
                        g_168 = (l_167 = l_166);
                    }
                    if (l_165)
                    {
                        int l_203 = 0xFAC6FD51L;
                        l_185 = (safe_lshift_func_uint8_t_u_s(((0L & (p_46 || (p_46 ^ (safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(0x70F0A5B6558982A7LL, (-1L))), (safe_rshift_func_int8_t_s_u(((p_46 || l_177) <= 0x12ACL), 3))))))) <= (safe_sub_func_int32_t_s_s(((safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(l_184, 7)) || 0x037CFC11L), 0x3264L)) == g_142), l_164))), p_46));
                        g_204 = func_58((safe_div_func_int32_t_s_s((l_203 = ((safe_lshift_func_int8_t_s_s((l_198 = ((l_165 = (l_193 = (safe_lshift_func_uint16_t_u_u((+g_132), (l_192 |= func_58((((-1L) >= p_46) != l_53))))))) & (safe_lshift_func_uint8_t_u_s(p_46, (safe_div_func_int64_t_s_s(p_46, 0x7C9332BA1A25AED9LL)))))), 3)) & (safe_sub_func_uint32_t_u_u((l_167 = (safe_add_func_uint64_t_u_u(p_46, p_46))), 1UL)))), p_46)));
                        l_193 = func_58(p_46);
                        l_207 = (safe_div_func_uint16_t_u_u((+g_64), l_203));
                    }
                    else
                    {
                        l_208 = (4294967295UL != ((g_2 < p_46) | l_91));
                    }
                    if ((safe_mod_func_uint8_t_u_u(255UL, (safe_div_func_int64_t_s_s((g_64 > (safe_mod_func_uint8_t_u_u((l_227 = (g_226 ^= ((safe_lshift_func_uint16_t_u_s(l_167, 11)) < (l_91 = ((l_62 = ((!(safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((~l_198), ((l_193 == 0L) < ((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((g_225 = g_83), l_167)), g_115)) == g_168)))), p_46))) < (-1L))) && g_64))))), p_46))), l_192)))))
                    {
                        return p_46;
                    }
                    else
                    {
                        l_227 = (p_46 < ((safe_rshift_func_uint16_t_u_s((l_167 = (safe_mod_func_int32_t_s_s((g_226 = g_138), (-2L)))), 15)) > func_58((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_143, 6)), ((g_64 ^ ((safe_sub_func_uint64_t_u_u(1UL, l_185)) | ((((l_238 = g_67) || g_64) == l_239) && p_46))) | 0x55F10B7823F5755ELL))))));
                        l_62 |= l_91;
                    }
                }
                l_227 ^= (safe_sub_func_uint8_t_u_u(0x16L, ((func_58(func_58(p_46)) <= ((l_242 = (-1L)) | (safe_lshift_func_uint16_t_u_u(p_46, 9)))) ^ (safe_add_func_uint32_t_u_u((l_193 |= g_225), (((safe_sub_func_uint32_t_u_u(g_204, l_239)) & (-9L)) | g_143))))));
                l_62 = (l_238 <= (safe_rshift_func_int8_t_s_u((l_91 = func_58((g_69 || (g_225 = g_132)))), 0)));
                l_263 ^= (l_62 = ((safe_mod_func_int8_t_s_s((0x53F0FEBAL < (g_133 = func_58(((func_58(((g_255 ^= (l_253 & (safe_unary_minus_func_int32_t_s(p_46)))) ^ 0x189EED151B0854EALL)) == (g_262 = ((safe_add_func_int32_t_s_s(((((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_int16_t_s_u((p_46 != ((l_53 == (l_261 = (((l_91 = (l_227 = l_242)) || l_242) >= 0x7FL))) && l_261)), 13)) <= p_46))) || 0xE256FD15697580FFLL) || 0x0D10L) < 0x4991866434410D69LL), p_46)) | 7L))) <= g_138)))), 0xFAL)) || p_46));
            }
        }
        else
        {
            unsigned char l_274 = 250UL;
            int l_275 = (-1L);
            g_226 = func_58(p_46);
            g_280 &= (safe_add_func_uint16_t_u_u(g_226, (safe_sub_func_int64_t_s_s(((p_46 >= (safe_sub_func_uint32_t_u_u((0xF6L < ((safe_lshift_func_int8_t_s_s((func_58((l_275 = func_58((g_143 = (l_274 |= g_2))))) && ((g_255 == ((func_58(((safe_sub_func_int32_t_s_s((g_204 <= (g_255 & l_253)), g_204)) | 0L)) > p_46) > g_115)) ^ l_94)), g_7)) < 0xFE045DE4L)), 0xF31A84B0L))) ^ 0x73L), 0x1BB3FC7F9658A0C0LL))));
            g_226 ^= g_281;
            g_226 ^= ((safe_add_func_uint16_t_u_u((l_275 = l_274), (((((safe_rshift_func_int8_t_s_s((!(p_46 && p_46)), 4)) && ((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(p_46, (safe_rshift_func_uint16_t_u_u((l_91 = ((safe_rshift_func_int16_t_s_u((g_262 = ((safe_add_func_uint8_t_u_u(8UL, (p_46 > (4294967288UL <= ((l_100 = (g_132 |= l_62)) >= func_58((safe_rshift_func_uint8_t_u_s((4294967292UL || p_46), 6)))))))) & 0x5D59L)), 6)) > g_255)), 8)))) >= p_46), p_46)) || 0x18L)) != g_204) != g_2) >= l_274))) & 0x621F2825L);
        }
    }
    else
    {
        int l_314 = (-6L);
        g_226 &= func_58((safe_rshift_func_uint8_t_u_u(l_94, 1)));
        g_226 = (safe_add_func_uint64_t_u_u(p_46, func_58((g_225 <= (((((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0x72L, g_225)), (((-7L) > (safe_rshift_func_int8_t_s_s(((func_58((0xC7L | (safe_mod_func_int64_t_s_s(((p_46 || ((safe_sub_func_uint64_t_u_u(g_83, p_46)) < l_100)) & l_314), l_314)))) != g_262) <= g_143), 5))) == 0xB5BDE487L))) >= g_281) ^ p_46) > 0x3B1FCE4B785A8A2ALL) > 0L)))));
    }
    return g_7;
}







static short func_58(int p_59)
{
    unsigned char l_63 = 1UL;
    int l_75 = 0xF50EDC67L;
    int l_78 = 0x51693878L;
    p_59 = (l_63 > (0x7135L >= l_63));
    g_64 = l_63;
    if (((p_59 || l_63) <= 3UL))
    {
        unsigned long long l_68 = 1UL;
        g_69 = (!((l_68 = ((safe_rshift_func_int8_t_s_s(g_2, 0)) && ((g_67 = (g_64 = p_59)) || p_59))) == 0xB32A1BF33464EB7FLL));
    }
    else
    {
        unsigned l_81 = 18446744073709551615UL;
        int l_82 = 0x81FF7B51L;
        g_83 |= (l_82 ^= ((g_72 = (safe_rshift_func_int16_t_s_u((-1L), 1))) && (safe_mod_func_uint32_t_u_u(((l_75 = 0xC758019D44E4153CLL) >= (((((((g_72 != g_67) | ((safe_lshift_func_int16_t_s_s((((l_78 = p_59) >= (g_69 = (safe_div_func_int16_t_s_s(p_59, l_63)))) || 8UL), (((l_81 || 1UL) || 0x5007L) && g_67))) || 0UL)) > 9L) ^ g_64) >= p_59) & l_81) <= g_64)), l_81))));
    }
    return p_59;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3.f0, "g_3.f0", print_hash_value);
    transparent_crc(g_3.f1, "g_3.f1", print_hash_value);
    transparent_crc(g_3.f2, "g_3.f2", print_hash_value);
    transparent_crc(g_3.f3, "g_3.f3", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_346.f0, "g_346.f0", print_hash_value);
    transparent_crc(g_346.f1, "g_346.f1", print_hash_value);
    transparent_crc(g_346.f2, "g_346.f2", print_hash_value);
    transparent_crc(g_346.f3, "g_346.f3", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_358.f0, "g_358.f0", print_hash_value);
    transparent_crc(g_358.f1, "g_358.f1", print_hash_value);
    transparent_crc(g_358.f2, "g_358.f2", print_hash_value);
    transparent_crc(g_358.f3, "g_358.f3", print_hash_value);
    transparent_crc(g_359.f0, "g_359.f0", print_hash_value);
    transparent_crc(g_359.f1, "g_359.f1", print_hash_value);
    transparent_crc(g_359.f2, "g_359.f2", print_hash_value);
    transparent_crc(g_359.f3, "g_359.f3", print_hash_value);
    transparent_crc(g_453.f0, "g_453.f0", print_hash_value);
    transparent_crc(g_453.f1, "g_453.f1", print_hash_value);
    transparent_crc(g_453.f2, "g_453.f2", print_hash_value);
    transparent_crc(g_453.f3, "g_453.f3", print_hash_value);
    transparent_crc(g_459.f0, "g_459.f0", print_hash_value);
    transparent_crc(g_459.f1, "g_459.f1", print_hash_value);
    transparent_crc(g_459.f2, "g_459.f2", print_hash_value);
    transparent_crc(g_459.f3, "g_459.f3", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    transparent_crc(g_545.f0, "g_545.f0", print_hash_value);
    transparent_crc(g_545.f1, "g_545.f1", print_hash_value);
    transparent_crc(g_545.f2, "g_545.f2", print_hash_value);
    transparent_crc(g_545.f3, "g_545.f3", print_hash_value);
    transparent_crc(g_582.f0, "g_582.f0", print_hash_value);
    transparent_crc(g_582.f1, "g_582.f1", print_hash_value);
    transparent_crc(g_582.f2, "g_582.f2", print_hash_value);
    transparent_crc(g_582.f3, "g_582.f3", print_hash_value);
    transparent_crc(g_596.f0, "g_596.f0", print_hash_value);
    transparent_crc(g_596.f1, "g_596.f1", print_hash_value);
    transparent_crc(g_596.f2, "g_596.f2", print_hash_value);
    transparent_crc(g_596.f3, "g_596.f3", print_hash_value);
    transparent_crc(g_699, "g_699", print_hash_value);
    transparent_crc(g_700.f0, "g_700.f0", print_hash_value);
    transparent_crc(g_700.f1, "g_700.f1", print_hash_value);
    transparent_crc(g_700.f2, "g_700.f2", print_hash_value);
    transparent_crc(g_700.f3, "g_700.f3", print_hash_value);
    transparent_crc(g_733.f0, "g_733.f0", print_hash_value);
    transparent_crc(g_733.f1, "g_733.f1", print_hash_value);
    transparent_crc(g_733.f2, "g_733.f2", print_hash_value);
    transparent_crc(g_733.f3, "g_733.f3", print_hash_value);
    transparent_crc(g_774.f0, "g_774.f0", print_hash_value);
    transparent_crc(g_774.f1, "g_774.f1", print_hash_value);
    transparent_crc(g_774.f2, "g_774.f2", print_hash_value);
    transparent_crc(g_774.f3, "g_774.f3", print_hash_value);
    transparent_crc(g_790.f0, "g_790.f0", print_hash_value);
    transparent_crc(g_790.f1, "g_790.f1", print_hash_value);
    transparent_crc(g_790.f2, "g_790.f2", print_hash_value);
    transparent_crc(g_790.f3, "g_790.f3", print_hash_value);
    transparent_crc(g_791.f0, "g_791.f0", print_hash_value);
    transparent_crc(g_791.f1, "g_791.f1", print_hash_value);
    transparent_crc(g_791.f2, "g_791.f2", print_hash_value);
    transparent_crc(g_791.f3, "g_791.f3", print_hash_value);
    transparent_crc(g_831, "g_831", print_hash_value);
    transparent_crc(g_845.f0, "g_845.f0", print_hash_value);
    transparent_crc(g_845.f1, "g_845.f1", print_hash_value);
    transparent_crc(g_845.f2, "g_845.f2", print_hash_value);
    transparent_crc(g_845.f3, "g_845.f3", print_hash_value);
    transparent_crc(g_847.f0, "g_847.f0", print_hash_value);
    transparent_crc(g_847.f1, "g_847.f1", print_hash_value);
    transparent_crc(g_847.f2, "g_847.f2", print_hash_value);
    transparent_crc(g_847.f3, "g_847.f3", print_hash_value);
    transparent_crc(g_865.f0, "g_865.f0", print_hash_value);
    transparent_crc(g_865.f1, "g_865.f1", print_hash_value);
    transparent_crc(g_865.f2, "g_865.f2", print_hash_value);
    transparent_crc(g_865.f3, "g_865.f3", print_hash_value);
    transparent_crc(g_886, "g_886", print_hash_value);
    transparent_crc(g_888.f0, "g_888.f0", print_hash_value);
    transparent_crc(g_888.f1, "g_888.f1", print_hash_value);
    transparent_crc(g_888.f2, "g_888.f2", print_hash_value);
    transparent_crc(g_888.f3, "g_888.f3", print_hash_value);
    transparent_crc(g_889.f0, "g_889.f0", print_hash_value);
    transparent_crc(g_889.f1, "g_889.f1", print_hash_value);
    transparent_crc(g_889.f2, "g_889.f2", print_hash_value);
    transparent_crc(g_889.f3, "g_889.f3", print_hash_value);
    transparent_crc(g_890.f0, "g_890.f0", print_hash_value);
    transparent_crc(g_890.f1, "g_890.f1", print_hash_value);
    transparent_crc(g_890.f2, "g_890.f2", print_hash_value);
    transparent_crc(g_890.f3, "g_890.f3", print_hash_value);
    transparent_crc(g_891.f0, "g_891.f0", print_hash_value);
    transparent_crc(g_891.f1, "g_891.f1", print_hash_value);
    transparent_crc(g_891.f2, "g_891.f2", print_hash_value);
    transparent_crc(g_891.f3, "g_891.f3", print_hash_value);
    transparent_crc(g_892.f0, "g_892.f0", print_hash_value);
    transparent_crc(g_892.f1, "g_892.f1", print_hash_value);
    transparent_crc(g_892.f2, "g_892.f2", print_hash_value);
    transparent_crc(g_892.f3, "g_892.f3", print_hash_value);
    transparent_crc(g_893.f0, "g_893.f0", print_hash_value);
    transparent_crc(g_893.f1, "g_893.f1", print_hash_value);
    transparent_crc(g_893.f2, "g_893.f2", print_hash_value);
    transparent_crc(g_893.f3, "g_893.f3", print_hash_value);
    transparent_crc(g_922, "g_922", print_hash_value);
    transparent_crc(g_942, "g_942", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
