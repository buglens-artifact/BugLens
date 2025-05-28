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
   int f0;
   int f1;
   int f2;
   short f3;
   short f4;
   int f5;
};

struct S1 {
   unsigned f0;
   struct S0 f1;
   long long f2;
   struct S0 f3;
   unsigned short f4;
};

struct S2 {
   long long f0;
   char f1;
};


static char g_10 = 1L;
static unsigned g_12 = 0x53061ECEL;
static char g_38 = 5L;
static int g_40 = 0x509E13C9L;
static unsigned *g_55 = (void*)0;
static unsigned g_57 = 0x227FA2E5L;
static int *g_62 = &g_40;
static int **g_61 = &g_62;
static int ***g_60 = &g_61;
static struct S2 g_66 = {0x366113C509C0D0DALL,0x63L};
static struct S1 g_84 = {0x9F83FA7BL,{0L,-10L,0xE9BEE6A4L,-6L,-6L,1L},-1L,{0x832669E6L,0L,4L,-6L,-1L,-1L},0x86CDL};
static long long g_192 = 0xB8E824C827FE7776LL;
static struct S0 g_207 = {-1L,5L,0x7BC723BDL,1L,1L,1L};
static struct S0 g_234 = {0L,-8L,1L,-2L,0xD247L,0xEDEC4028L};
static int *g_239 = &g_234.f1;
static unsigned char g_246 = 0xB0L;
static unsigned char g_251 = 1UL;
static unsigned g_467 = 6UL;
static int g_506 = 0L;
static long long g_507 = 0L;
static long long g_521 = 0x0C3F18F34E97EDA3LL;
static char g_523 = 0x1CL;
static int g_538 = 0x705826A1L;
static int g_552 = 0x3392B9A8L;
static short g_553 = 1L;
static long long g_554 = 0xB582A47882F886A3LL;
static int g_557 = 0L;
static unsigned g_572 = 4294967287UL;
static short g_596 = (-1L);
static unsigned g_597 = 1UL;
static unsigned char g_893 = 0x6BL;
static unsigned long long g_909 = 18446744073709551615UL;
static unsigned char g_1098 = 1UL;
static unsigned long long g_1109 = 0xEB3F396E55328DF5LL;
static long long g_1113 = 0x5B7916086E17A9ECLL;
static unsigned long long g_1115 = 0x9A593BA6C4835364LL;
static int **g_1133 = (void*)0;
static long long g_1246 = 0xF453E879E329A3D1LL;
static unsigned short g_1270 = 0x04B5L;
static long long *g_1282 = &g_554;
static struct S1 *g_1290 = (void*)0;
static unsigned g_1474 = 1UL;
static unsigned **g_1655 = &g_55;
static struct S1 g_1680 = {7UL,{0x0DB0179BL,0xC147A1B0L,7L,0x05CEL,9L,0x5A898E23L},1L,{0xE442F2E6L,0x627536D9L,0x47A1205AL,0x1237L,0x2CDFL,0xC938A13BL},0x1A1BL};
static unsigned g_1689 = 0x55656FCBL;
static struct S0 *g_1697 = (void*)0;
static struct S0 **g_1696 = &g_1697;
static short g_1834 = 0x9D3AL;
static int g_1956 = 0L;
static unsigned char *g_2506 = &g_1098;
static unsigned short g_3378 = 0xEDB1L;
static unsigned long long g_3609 = 18446744073709551612UL;
static struct S1 g_3636 = {0x981CD0BDL,{0x2EA15917L,0xCC57EC1CL,0L,5L,0x41DAL,0xB178FC2FL},-10L,{0xB5A54D9CL,0L,0xE8055E56L,0x1DCAL,0xFF6CL,1L},0UL};
static struct S1 g_3642 = {4UL,{0x35A3626BL,0x892394D1L,-10L,-9L,0x87E5L,0x587B00F0L},0xCF59AA994B31527ELL,{1L,0x1EA67D94L,-1L,1L,0xF99AL,0xCFDEA815L},0UL};
static struct S1 g_3644 = {0xAE2C0E11L,{0xBB248504L,-6L,1L,1L,0L,0x89BB77EDL},-4L,{0L,0x7296A783L,-5L,2L,0x137AL,-9L},0xD1D2L};
static char g_3646 = 2L;



static unsigned char func_1(void);
static int * func_2(int * p_3, int * p_4, int * p_5);
static unsigned char func_15(unsigned * p_16, short p_17, struct S1 p_18, int * p_19);
static unsigned * func_20(int * p_21);
static int * func_22(unsigned char p_23);
static char func_32(char p_33, int *** p_34, int ** p_35);
static int *** func_41(unsigned p_42, long long p_43, struct S2 p_44, int p_45);
static unsigned char func_46(struct S1 p_47, long long p_48, int * p_49, struct S0 p_50, int *** p_51);
static struct S0 func_69(unsigned long long p_70, int p_71, int * p_72, short p_73);
static struct S1 func_75(int ** p_76, unsigned * p_77, struct S1 p_78, struct S1 p_79, struct S2 p_80);
static unsigned char func_1(void)
{
    unsigned *l_11 = &g_12;
    int l_24 = 5L;
    struct S1 l_3640 = {1UL,{0xC966085CL,0x2AA5E83CL,0L,0x515FL,1L,0x48D34289L},-1L,{1L,3L,-2L,0x4ADEL,0x14DEL,0xEB4B3C80L},0x8897L};
    struct S1 *l_3641 = &g_3642;
    struct S1 *l_3643 = &g_3644;
    char *l_3645 = &g_3646;
    int *l_3647 = &g_234.f5;
    int **l_3653 = &l_3647;
    int *l_3654 = &l_3640.f1.f1;
    int *l_3655 = &g_3642.f3.f1;
    int *l_3656 = (void*)0;
    int *l_3657 = &g_3636.f3.f0;
    int *l_3658 = &g_3636.f3.f0;
    int *l_3659 = &g_3642.f3.f1;
    int *l_3660 = &g_3644.f3.f5;
    int *l_3661 = &g_3642.f1.f0;
    int *l_3662 = &g_557;
    int *l_3663 = &l_3640.f3.f1;
    int *l_3664 = &g_207.f1;
    int *l_3665 = &g_234.f0;
    int *l_3666 = &g_3644.f1.f1;
    int *l_3667 = &g_84.f3.f0;
    int *l_3668 = &g_40;
    int *l_3669 = &g_84.f1.f5;
    int *l_3670 = &g_1680.f1.f5;
    int *l_3671 = &g_3644.f3.f5;
    int *l_3672 = &g_84.f3.f0;
    int *l_3673 = &l_3640.f1.f1;
    int *l_3674 = &g_3642.f3.f1;
    int *l_3675 = &g_3642.f1.f0;
    int *l_3676 = &l_3640.f1.f5;
    short l_3677 = 0x4A90L;
    int *l_3678 = &g_552;
    int *l_3679 = (void*)0;
    int *l_3680 = (void*)0;
    int *l_3681 = &g_3636.f1.f1;
    int *l_3682 = &g_3644.f3.f5;
    int *l_3683 = &g_3636.f3.f5;
    int *l_3684 = &g_3636.f1.f0;
    int *l_3685 = &g_3636.f3.f1;
    int *l_3686 = &g_3636.f3.f1;
    int *l_3687 = &g_3644.f1.f1;
    int *l_3688 = &g_84.f1.f1;
    int *l_3689 = &g_552;
    int *l_3690 = &g_557;
    int *l_3691 = &l_3640.f3.f0;
    int *l_3692 = &g_84.f3.f1;
    int *l_3693 = &g_1680.f1.f0;
    int *l_3694 = &g_3644.f1.f1;
    int *l_3695 = (void*)0;
    int *l_3696 = &g_84.f3.f5;
    int *l_3697 = (void*)0;
    int *l_3698 = &g_1680.f1.f0;
    int *l_3699 = &l_24;
    int *l_3700 = (void*)0;
    int *l_3701 = &l_3640.f3.f1;
    int *l_3702 = (void*)0;
    int *l_3703 = &g_3644.f3.f0;
    int *l_3704 = &g_3636.f1.f5;
    int *l_3705 = (void*)0;
    int *l_3706 = &g_207.f5;
    int *l_3707 = &g_207.f5;
    int *l_3708 = &g_1680.f3.f1;
    int *l_3709 = &g_1680.f3.f0;
    int *l_3710 = (void*)0;
    int *l_3711 = &g_40;
    int *l_3712 = &l_24;
    int *l_3713 = (void*)0;
    int *l_3714 = &g_552;
    int *l_3715 = &g_1680.f3.f1;
    int *l_3716 = &g_207.f0;
    int *l_3717 = (void*)0;
    int *l_3718 = &g_3642.f3.f0;
    int *l_3719 = &g_552;
    int *l_3720 = &g_3636.f3.f1;
    int *l_3721 = &g_3636.f1.f0;
    int *l_3722 = &g_3636.f3.f5;
    int *l_3723 = &g_3642.f3.f1;
    int *l_3724 = &g_84.f3.f5;
    int *l_3725 = (void*)0;
    int *l_3726 = &g_40;
    int *l_3727 = (void*)0;
    int *l_3728 = &g_3636.f1.f1;
    int *l_3729 = &g_3636.f1.f0;
    int *l_3730 = &g_3644.f3.f5;
    int *l_3731 = &g_3642.f3.f5;
    int *l_3732 = &g_3642.f3.f5;
    int *l_3733 = (void*)0;
    int *l_3734 = &g_234.f5;
    int *l_3735 = &g_3642.f1.f1;
    int *l_3736 = &g_3642.f3.f0;
    int *l_3737 = (void*)0;
    int *l_3738 = &l_3640.f3.f5;
    int *l_3739 = &g_3642.f3.f5;
    int *l_3740 = &g_3636.f1.f5;
    int *l_3741 = &g_3642.f3.f1;
    int *l_3742 = &g_1680.f3.f5;
    int *l_3743 = &g_3636.f3.f0;
    int *l_3744 = &g_207.f0;
    int *l_3745 = &g_207.f5;
    int *l_3746 = &g_3636.f1.f1;
    int *l_3747 = &g_3642.f1.f1;
    int *l_3748 = &g_3642.f3.f1;
    int *l_3749 = (void*)0;
    int *l_3750 = &g_84.f1.f1;
    int *l_3751 = (void*)0;
    int *l_3752 = &g_3636.f1.f5;
    int *l_3753 = (void*)0;
    int *l_3754 = (void*)0;
    int *l_3755 = &g_234.f0;
    int *l_3756 = (void*)0;
    int *l_3757 = &g_3642.f1.f0;
    int *l_3758 = &g_84.f1.f1;
    int l_3759 = (-7L);
    int *l_3760 = (void*)0;
    int *l_3761 = &g_207.f5;
    int *l_3762 = &g_3636.f1.f1;
    int *l_3763 = &g_234.f0;
    int *l_3764 = &g_40;
    int *l_3765 = &g_40;
    int *l_3766 = &g_84.f1.f5;
    unsigned char l_3767 = 255UL;
    (*l_3653) = func_2(((safe_add_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s(249UL, (((+(1L & (++(*l_11)))) & func_15(func_20(func_22(l_24)), g_3636.f2, ((*l_3641) = (l_3640 = g_3636)), ((((*l_3643) = g_3636) , ((*l_3647) = ((((*l_3645) = l_24) > g_3636.f3.f3) >= 0x69L))) , (void*)0))) | 0xE85CL))) == (-1L)) , (*l_3647)), l_24)) , &l_24), &l_24, &g_557);
    l_3767++;
    return (*g_2506);
}







static int * func_2(int * p_3, int * p_4, int * p_5)
{
    long long l_3650 = 0x7F950068587839BBLL;
    (*p_4) ^= (l_3650 != l_3650);
    for (g_84.f3.f4 = 0; (g_84.f3.f4 >= 5); g_84.f3.f4++)
    {
        return p_4;
    }
    return p_3;
}







static unsigned char func_15(unsigned * p_16, short p_17, struct S1 p_18, int * p_19)
{
    struct S1 *l_3648 = &g_1680;
    int l_3649 = 5L;
    (*l_3648) = p_18;
    return l_3649;
}







static unsigned * func_20(int * p_21)
{
    unsigned char *l_1496 = &g_251;
    struct S1 l_1501 = {0UL,{0x6167F8CCL,0xDA6D9A63L,1L,0x5A2DL,0x12F1L,0x39574BE0L},-1L,{0x8D5D1FF1L,0L,0x4CD4B6BCL,0xE28FL,5L,0xD2ADCAA5L},1UL};
    unsigned *l_1502 = &g_57;
    unsigned l_1634 = 0UL;
    int l_1652 = 1L;
    int *l_1664 = &g_207.f1;
    struct S2 *l_1675 = &g_66;
    int *l_1678 = &g_207.f5;
    struct S0 **l_1698 = &g_1697;
    struct S1 **l_1700 = &g_1290;
    struct S0 l_1822 = {1L,0x2BC91FB1L,-1L,-8L,0xA082L,0xFD9F1270L};
    struct S0 l_1823 = {0xB551D48AL,0x007D9EEDL,0xA4C7287AL,0xA6A4L,0x2201L,4L};
    int l_2088 = (-1L);
    unsigned short l_2221 = 65526UL;
    int ***l_2236 = &g_1133;
    int l_2239 = 0x7CD6247CL;
    int l_2443 = (-8L);
    int l_2450 = 0x98A98B08L;
    int l_2451 = 3L;
    unsigned char *l_2481 = &g_251;
    short l_2762 = (-1L);
    unsigned long long *l_2794 = &g_909;
    unsigned l_2862 = 18446744073709551607UL;
    struct S0 l_2898 = {1L,0x3AAB267EL,0x0F506991L,-1L,0x43C0L,0xBFFABA18L};
    struct S2 l_3606 = {1L,0x65L};
    struct S2 l_3628 = {0xB4E11979DFD85B05LL,-4L};
    if ((((l_1496 == (void*)0) > (safe_rshift_func_int8_t_s_u(((g_1246 <= g_207.f2) & (safe_add_func_int64_t_s_s(1L, (((g_57 , ((l_1501 = l_1501) , l_1501.f3.f4)) , (((*g_1282) != 0L) && l_1501.f1.f1)) , g_10)))), 1))) > g_234.f0))
    {
        return l_1502;
    }
    else
    {
        int **l_1509 = &g_62;
        struct S1 l_1510 = {18446744073709551611UL,{0x3B9C8DE9L,3L,8L,0x21A8L,-7L,0xAA9B14E9L},-1L,{1L,0x07A18930L,0xC1F40841L,8L,0xD26AL,0x85E60058L},65535UL};
        struct S2 l_1511 = {0x19475F241C8A4E0BLL,-2L};
        short *l_1662 = &l_1501.f1.f3;
        char l_1665 = (-1L);
        struct S2 *l_1677 = &l_1511;
        struct S0 *l_1703 = &g_1680.f3;
        struct S0 **l_1825 = &l_1703;
        int l_1979 = (-1L);
        int l_1985 = 0x4AF940F4L;
        int l_2016 = 0xFA14E75BL;
        int l_2027 = 1L;
        int l_2142 = (-6L);
        int l_2166 = 0L;
        unsigned l_2169 = 0xFE73671EL;
        (*g_239) |= ((**l_1509) = ((l_1501.f3.f0 , ((safe_sub_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s(func_46(func_75(((*g_60) = l_1509), l_1502, l_1510, l_1510, l_1511), (*g_1282), &g_557, g_84.f1, &g_1133), 9)) <= (**l_1509)), g_207.f4)), g_557)) == (**l_1509))) != 1UL));
        l_1501.f3.f5 ^= (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s(l_1501.f1.f5)), 7));
        for (g_84.f0 = 0; (g_84.f0 > 40); ++g_84.f0)
        {
            int l_1517 = (-1L);
            int *l_1518 = &l_1510.f1.f1;
            int *l_1519 = &g_84.f3.f0;
            int *l_1520 = &g_84.f1.f1;
            int *l_1521 = (void*)0;
            int *l_1522 = &l_1501.f3.f0;
            int *l_1523 = &l_1510.f3.f5;
            int *l_1524 = &g_234.f1;
            int l_1525 = 0L;
            int *l_1526 = &l_1510.f3.f0;
            int *l_1527 = &l_1510.f1.f5;
            int *l_1528 = &g_84.f1.f1;
            int *l_1529 = &g_84.f3.f5;
            int *l_1530 = (void*)0;
            int *l_1531 = &l_1501.f3.f1;
            int *l_1532 = &l_1510.f3.f5;
            int *l_1533 = (void*)0;
            int *l_1534 = &g_552;
            int *l_1535 = &g_552;
            int *l_1536 = &g_552;
            int *l_1537 = &l_1517;
            int *l_1538 = &g_207.f5;
            int *l_1539 = &g_207.f5;
            int *l_1540 = &g_234.f1;
            int l_1541 = 0x0042C7B3L;
            int *l_1542 = &g_84.f3.f5;
            int *l_1543 = &g_207.f5;
            int *l_1544 = &l_1501.f1.f1;
            int *l_1545 = &l_1510.f3.f5;
            int *l_1546 = &l_1510.f1.f1;
            int *l_1547 = &l_1510.f3.f0;
            int *l_1548 = &l_1525;
            int *l_1549 = &l_1525;
            int *l_1550 = &g_234.f1;
            int *l_1551 = (void*)0;
            int *l_1552 = &g_207.f0;
            int *l_1553 = &g_84.f1.f5;
            int *l_1554 = &l_1510.f3.f5;
            int *l_1555 = &l_1510.f1.f5;
            int *l_1556 = &g_207.f1;
            int *l_1557 = (void*)0;
            int *l_1558 = &l_1501.f1.f0;
            int *l_1559 = &l_1541;
            int *l_1560 = &l_1510.f3.f5;
            int *l_1561 = &l_1510.f3.f5;
            int *l_1562 = &l_1510.f1.f5;
            int *l_1563 = &g_207.f5;
            int *l_1564 = &l_1510.f3.f1;
            int l_1565 = 4L;
            int *l_1566 = &l_1510.f3.f1;
            int *l_1567 = &l_1510.f1.f1;
            int *l_1568 = (void*)0;
            int l_1569 = (-1L);
            int *l_1570 = &g_207.f0;
            int *l_1571 = &l_1501.f1.f1;
            int *l_1572 = &g_234.f5;
            int *l_1573 = &l_1510.f3.f5;
            int *l_1574 = (void*)0;
            int *l_1575 = &l_1510.f1.f5;
            int *l_1576 = &l_1565;
            int *l_1577 = &g_234.f0;
            int *l_1578 = &g_234.f1;
            int *l_1579 = (void*)0;
            int *l_1580 = (void*)0;
            int *l_1581 = &l_1541;
            int *l_1582 = &g_234.f1;
            int *l_1583 = &g_84.f3.f5;
            int *l_1584 = &g_84.f3.f0;
            int *l_1585 = &g_84.f3.f1;
            int *l_1586 = &l_1510.f1.f1;
            int *l_1587 = &l_1501.f3.f1;
            int *l_1588 = (void*)0;
            int *l_1589 = &g_84.f3.f1;
            int *l_1590 = &g_84.f1.f0;
            int *l_1591 = (void*)0;
            int *l_1592 = &g_40;
            int *l_1593 = &g_234.f1;
            int *l_1594 = &l_1510.f3.f1;
            int *l_1595 = (void*)0;
            int *l_1596 = &l_1510.f3.f5;
            int l_1597 = (-1L);
            int *l_1598 = (void*)0;
            int *l_1599 = &l_1569;
            int *l_1600 = &g_207.f0;
            int *l_1601 = &g_234.f1;
            int *l_1602 = (void*)0;
            int *l_1603 = (void*)0;
            int *l_1604 = (void*)0;
            int *l_1605 = &l_1501.f3.f1;
            int *l_1606 = &l_1501.f3.f1;
            int *l_1607 = &l_1501.f3.f5;
            int *l_1608 = (void*)0;
            int *l_1609 = &l_1510.f3.f0;
            int l_1610 = (-6L);
            int *l_1611 = &l_1510.f1.f5;
            int *l_1612 = (void*)0;
            int *l_1613 = (void*)0;
            int *l_1614 = &l_1501.f3.f0;
            int *l_1615 = &g_207.f0;
            int *l_1616 = &g_84.f3.f5;
            int *l_1617 = (void*)0;
            int *l_1618 = &g_84.f1.f0;
            int *l_1619 = &g_234.f0;
            int *l_1620 = &g_40;
            int *l_1621 = (void*)0;
            int *l_1622 = &l_1501.f1.f5;
            int *l_1623 = (void*)0;
            int *l_1624 = &g_84.f1.f1;
            int *l_1625 = &l_1610;
            int *l_1626 = (void*)0;
            int *l_1627 = &g_40;
            int *l_1628 = &l_1541;
            int *l_1629 = (void*)0;
            int *l_1630 = (void*)0;
            int *l_1631 = &g_84.f1.f5;
            int *l_1632 = (void*)0;
            int *l_1633 = &g_84.f1.f0;
            l_1634--;
            return p_21;
        }
        if ((func_46(l_1510, (**l_1509), (p_21 = (*g_61)), l_1501.f1, &g_61) >= (g_66.f1 , l_1501.f4)))
        {
            int **l_1653 = &g_239;
            int l_1656 = (-5L);
            for (l_1501.f1.f1 = 29; (l_1501.f1.f1 < (-5)); --l_1501.f1.f1)
            {
                unsigned short *l_1639 = &g_1270;
                int l_1644 = (-5L);
                unsigned ***l_1645 = (void*)0;
                unsigned **l_1647 = &l_1502;
                unsigned ***l_1646 = &l_1647;
                unsigned **l_1654 = &l_1502;
                int *l_1657 = &g_234.f0;
                unsigned long long *l_1663 = &g_909;
            }
            (**l_1509) = l_1665;
            (*l_1509) = p_21;
        }
        else
        {
            unsigned long long *l_1674 = &g_1109;
            struct S2 **l_1676 = &l_1675;
            int l_1679 = 0x9EB08A13L;
            int **l_1701 = &l_1664;
            char l_1721 = 0x46L;
            char l_1831 = 0xE5L;
            struct S0 l_1879 = {-1L,5L,0xD84524F2L,6L,3L,9L};
            char l_1880 = 0x17L;
            short l_1922 = (-1L);
            int l_2031 = 0x4C40636DL;
            int l_2046 = 0xADE56A7BL;
            int l_2070 = 0xB74E4CACL;
            int l_2072 = (-1L);
            int l_2073 = 0L;
            int l_2100 = 0x45EE85E4L;
            int l_2132 = 0xD975DAF9L;
            struct S1 *l_2231 = &g_84;
            (*g_239) ^= (safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((+(g_1115 | g_192)), ((((func_75(&p_21, (((g_909 ^ ((4294967293UL < ((*p_21) == 0x3A015623L)) <= (((**g_60) = func_22((+(((((safe_add_func_uint64_t_u_u(((*l_1674) = (*l_1664)), ((l_1677 = ((*l_1676) = l_1675)) != &g_66))) , (**l_1509)) ^ g_557) | (*p_21)) , g_57)))) != l_1678))) == l_1679) , (*g_1655)), g_1680, g_1680, g_66) , g_207.f2) == g_1115) ^ (*l_1678)) , (*l_1664)))), (*l_1664)));
            if ((safe_unary_minus_func_uint32_t_u((*l_1664))))
            {
                int ***l_1688 = &g_1133;
                struct S0 *l_1702 = &l_1510.f1;
                int l_1728 = 0x4728C76FL;
                int l_1777 = 0x791084E2L;
                int l_1784 = 0L;
                char l_1787 = 0L;
                struct S1 l_1821 = {0x66D9642EL,{0x78054106L,0x07DC4320L,0xED58C2C0L,1L,0xC6B6L,0xD46E3788L},-1L,{-9L,0x568E1154L,0x88B85EE4L,0x65E6L,4L,0x27F24532L},3UL};
                long long l_1824 = 0xC3F2E7BC1E627B9DLL;
                unsigned short l_1876 = 8UL;
                int *l_1881 = &g_1680.f1.f1;
                int *l_1882 = &l_1822.f0;
                int *l_1883 = &l_1784;
                int *l_1884 = (void*)0;
                int *l_1885 = &l_1879.f5;
                int *l_1886 = &l_1823.f5;
                int *l_1887 = &l_1821.f3.f5;
                int *l_1888 = &l_1501.f3.f1;
                int *l_1889 = &l_1822.f1;
                int *l_1890 = &l_1510.f3.f0;
                int *l_1891 = &g_84.f1.f1;
                int *l_1892 = &l_1510.f1.f5;
                int *l_1893 = &l_1822.f0;
                int *l_1894 = &l_1510.f1.f0;
                int *l_1895 = &g_234.f1;
                int *l_1896 = (void*)0;
                int *l_1897 = &g_40;
                int *l_1898 = &g_84.f3.f5;
                int *l_1899 = &g_40;
                int *l_1900 = &g_1680.f1.f5;
                int *l_1901 = &l_1823.f1;
                int *l_1902 = &l_1510.f1.f1;
                int *l_1903 = (void*)0;
                int *l_1904 = (void*)0;
                int *l_1905 = &l_1501.f1.f0;
                int *l_1906 = &g_84.f1.f1;
                int *l_1907 = (void*)0;
                int *l_1908 = &l_1510.f1.f0;
                int *l_1909 = &g_207.f0;
                int *l_1910 = (void*)0;
                int *l_1911 = &g_234.f5;
                int *l_1912 = &l_1821.f3.f0;
                int *l_1913 = &g_207.f0;
                int *l_1914 = &l_1823.f5;
                int *l_1915 = &l_1501.f3.f5;
                int *l_1916 = (void*)0;
                int *l_1917 = (void*)0;
                int *l_1918 = &l_1510.f3.f1;
                int *l_1919 = (void*)0;
                int *l_1920 = &g_1680.f1.f1;
                int *l_1921 = &l_1822.f1;
                int *l_1923 = &g_207.f0;
                int *l_1924 = (void*)0;
                int *l_1925 = (void*)0;
                int *l_1926 = &g_234.f1;
                int *l_1927 = &l_1501.f1.f1;
                int *l_1928 = &l_1501.f1.f5;
                int *l_1929 = &g_234.f0;
                int *l_1930 = &l_1821.f1.f5;
                int *l_1931 = &l_1501.f1.f1;
                int *l_1932 = &g_84.f1.f5;
                int *l_1933 = &g_557;
                int *l_1934 = &g_84.f1.f0;
                int *l_1935 = &g_207.f5;
                int *l_1936 = &g_84.f3.f0;
                int *l_1937 = (void*)0;
                int *l_1938 = (void*)0;
                int *l_1939 = (void*)0;
                int *l_1940 = &l_1510.f1.f5;
                int *l_1941 = &g_1680.f3.f0;
                int *l_1942 = &l_1879.f5;
                int *l_1943 = &g_40;
                int *l_1944 = (void*)0;
                int *l_1945 = &l_1501.f3.f5;
                int *l_1946 = &l_1777;
                int *l_1947 = &l_1510.f3.f1;
                int *l_1948 = (void*)0;
                int *l_1949 = (void*)0;
                int *l_1950 = (void*)0;
                int *l_1951 = &g_1680.f1.f5;
                int *l_1952 = (void*)0;
                int *l_1953 = &l_1822.f0;
                int *l_1954 = &l_1821.f1.f0;
                int *l_1955 = &l_1510.f3.f5;
                int *l_1957 = &l_1823.f1;
                int *l_1958 = &l_1879.f1;
                int *l_1959 = &l_1879.f0;
                int *l_1960 = &l_1823.f5;
                int *l_1961 = &l_1821.f1.f5;
                int *l_1962 = (void*)0;
                int *l_1963 = &g_1680.f3.f5;
                int *l_1964 = (void*)0;
                int *l_1965 = &l_1821.f3.f0;
                int *l_1966 = &g_552;
                int *l_1967 = &g_557;
                int *l_1968 = &l_1501.f3.f0;
                int *l_1969 = &l_1822.f5;
                int *l_1970 = &g_1680.f1.f5;
                int *l_1971 = &l_1879.f5;
                int *l_1972 = &g_234.f5;
                int *l_1973 = &l_1821.f3.f1;
                int *l_1974 = &l_1821.f3.f1;
                int *l_1975 = (void*)0;
                int *l_1976 = &l_1821.f3.f0;
                int *l_1977 = &g_84.f3.f1;
                int *l_1978 = &g_557;
                int *l_1980 = &l_1510.f3.f1;
                int *l_1981 = &l_1501.f1.f5;
                int *l_1982 = (void*)0;
                int *l_1983 = &g_84.f3.f1;
                int *l_1984 = &l_1822.f1;
                int *l_1986 = &l_1822.f0;
                int *l_1987 = &g_234.f0;
                int *l_1988 = &g_1680.f1.f5;
                int *l_1989 = &l_1510.f1.f0;
                int *l_1990 = &l_1821.f3.f0;
                int *l_1991 = (void*)0;
                int *l_1992 = &l_1979;
                int *l_1993 = &l_1777;
                int *l_1994 = &g_1680.f3.f5;
                int *l_1995 = &g_557;
                int *l_1996 = (void*)0;
                int *l_1997 = &l_1979;
                int *l_1998 = &l_1823.f1;
                int *l_1999 = &l_1501.f3.f1;
                int *l_2000 = &g_1680.f1.f5;
                int *l_2001 = (void*)0;
                int *l_2002 = &l_1501.f1.f5;
                int *l_2003 = &l_1879.f5;
                int *l_2004 = (void*)0;
                int *l_2005 = &l_1501.f3.f1;
                int *l_2006 = &l_1501.f1.f5;
                int *l_2007 = &l_1510.f1.f1;
                int *l_2008 = &l_1501.f1.f0;
                int *l_2009 = &l_1501.f3.f1;
                int *l_2010 = &g_1680.f1.f0;
                int *l_2011 = &g_84.f1.f5;
                int *l_2012 = &g_84.f3.f0;
                int *l_2013 = &g_40;
                int *l_2014 = &g_84.f1.f0;
                int *l_2015 = &g_84.f3.f0;
                int *l_2017 = &l_1822.f0;
                int *l_2018 = &g_1680.f1.f5;
                int *l_2019 = &l_1501.f3.f5;
                int *l_2020 = &l_1679;
                int *l_2021 = &l_1777;
                int *l_2022 = &g_552;
                int *l_2023 = &l_1821.f3.f0;
                int *l_2024 = &l_1821.f1.f1;
                int *l_2025 = &g_1680.f1.f1;
                int *l_2026 = &l_1821.f3.f1;
                int *l_2028 = &g_207.f5;
                int *l_2029 = &l_1985;
                int *l_2030 = &g_207.f0;
                int *l_2032 = &l_1821.f3.f0;
                int *l_2033 = &l_1821.f1.f0;
                int *l_2034 = &g_234.f5;
                int *l_2035 = &g_552;
                int *l_2036 = &g_1680.f3.f1;
                int *l_2037 = (void*)0;
                int *l_2038 = &g_84.f1.f1;
                int *l_2039 = &l_1728;
                int *l_2040 = &g_84.f1.f5;
                int *l_2041 = (void*)0;
                int *l_2042 = &l_2016;
                int *l_2043 = (void*)0;
                int *l_2044 = &g_557;
                int *l_2045 = &g_234.f1;
                int *l_2047 = &l_1821.f1.f0;
                int *l_2048 = (void*)0;
                int *l_2049 = &l_1510.f1.f0;
                int *l_2050 = &l_1510.f3.f0;
                int *l_2051 = &l_1985;
                int *l_2052 = &g_552;
                int *l_2053 = &l_1510.f1.f0;
                int *l_2054 = (void*)0;
                int *l_2055 = &l_1777;
                int *l_2056 = &l_1821.f1.f5;
                int *l_2057 = &g_1680.f1.f0;
                int *l_2058 = &l_1879.f0;
                int *l_2059 = &g_234.f5;
                int *l_2060 = (void*)0;
                int *l_2061 = (void*)0;
                int *l_2062 = &g_234.f0;
                int *l_2063 = &g_84.f3.f5;
                int *l_2064 = &l_1821.f1.f5;
                int *l_2065 = &l_2031;
                int *l_2066 = &l_1821.f3.f0;
                int *l_2067 = &l_1501.f1.f0;
                int *l_2068 = (void*)0;
                int *l_2069 = &l_1821.f3.f0;
                int *l_2071 = (void*)0;
                int *l_2074 = &l_1510.f3.f0;
                int *l_2075 = &l_1501.f1.f5;
                int *l_2076 = &g_557;
                int *l_2077 = &g_207.f5;
                int *l_2078 = &g_84.f1.f5;
                int *l_2079 = &g_1680.f1.f1;
                int *l_2080 = &l_1510.f3.f5;
                int *l_2081 = &g_207.f0;
                int *l_2082 = &l_1879.f0;
                int *l_2083 = (void*)0;
                int *l_2084 = (void*)0;
                int *l_2085 = (void*)0;
                int *l_2086 = &l_1821.f1.f5;
                int *l_2087 = &g_234.f1;
                int *l_2089 = (void*)0;
                int *l_2090 = &l_1823.f0;
                int *l_2091 = (void*)0;
                int *l_2092 = &l_1821.f3.f1;
                int *l_2093 = (void*)0;
                int *l_2094 = &l_1510.f1.f0;
                int *l_2095 = &l_2072;
                int *l_2096 = &l_1823.f5;
                int *l_2097 = &l_1879.f1;
                int *l_2098 = &g_84.f3.f0;
                int *l_2099 = (void*)0;
                int *l_2101 = &g_1680.f1.f5;
                int *l_2102 = &l_1510.f3.f0;
                int *l_2103 = &g_234.f1;
                int *l_2104 = &l_2072;
                int *l_2105 = &l_2031;
                int *l_2106 = (void*)0;
                int *l_2107 = &g_552;
                int *l_2108 = &l_2073;
                int *l_2109 = &g_552;
                int *l_2110 = &g_1680.f3.f5;
                int *l_2111 = &l_2072;
                int *l_2112 = (void*)0;
                int *l_2113 = &l_1821.f1.f5;
                int *l_2114 = &l_1985;
                int *l_2115 = &l_1510.f1.f5;
                int *l_2116 = &l_1501.f3.f5;
                int *l_2117 = &g_207.f5;
                int *l_2118 = &l_1510.f3.f1;
                int *l_2119 = &l_1821.f3.f5;
                int *l_2120 = &l_1510.f3.f5;
                int *l_2121 = &g_84.f1.f5;
                int *l_2122 = &l_1822.f1;
                int *l_2123 = &g_557;
                int *l_2124 = &l_1501.f3.f1;
                int *l_2125 = &l_1823.f5;
                int *l_2126 = &l_1879.f1;
                int *l_2127 = &g_1680.f3.f1;
                int *l_2128 = &g_1680.f3.f1;
                int *l_2129 = &l_1510.f1.f5;
                int *l_2130 = &l_1510.f3.f0;
                int *l_2131 = &l_1879.f5;
                int *l_2133 = &g_1680.f1.f1;
                int *l_2134 = &l_1821.f3.f5;
                int *l_2135 = (void*)0;
                int *l_2136 = &g_207.f1;
                int *l_2137 = &l_1510.f3.f0;
                int *l_2138 = &g_1680.f3.f0;
                int *l_2139 = &g_84.f1.f0;
                int *l_2140 = &l_2073;
                int *l_2141 = &g_84.f1.f1;
                int *l_2143 = &l_2070;
                int *l_2144 = &g_557;
                int *l_2145 = &g_1680.f1.f0;
                int *l_2146 = &l_1501.f3.f5;
                int *l_2147 = &g_1680.f1.f0;
                int *l_2148 = &l_2070;
                int *l_2149 = &l_2072;
                int *l_2150 = (void*)0;
                int *l_2151 = &l_2027;
                int *l_2152 = &l_1821.f3.f0;
                int *l_2153 = &l_1510.f1.f0;
                int *l_2154 = (void*)0;
                int *l_2155 = (void*)0;
                int *l_2156 = (void*)0;
                int *l_2157 = &l_1821.f3.f5;
                int *l_2158 = (void*)0;
                int *l_2159 = &l_1501.f3.f1;
                int *l_2160 = &l_1679;
                int *l_2161 = &g_84.f1.f0;
                int *l_2162 = (void*)0;
                int *l_2163 = (void*)0;
                int *l_2164 = &l_2073;
                int *l_2165 = (void*)0;
                int *l_2167 = &l_1784;
                int *l_2168 = (void*)0;
                if ((*p_21))
                {
                    struct S1 *l_1686 = (void*)0;
                    struct S0 l_1687 = {0x57596F0BL,0xC0A7A2B1L,3L,0x891CL,-10L,0L};
                    (*l_1664) |= ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((g_251 | func_46(((*p_21) , func_75((*g_60), func_22((func_75((*g_60), (*g_1655), (g_84 = l_1510), l_1510, (**l_1676)) , 0xEFL)), l_1510, l_1501, g_66)), (*g_1282), (**g_60), l_1687, l_1688)), 0UL)), 7)) && g_1689);
                }
                else
                {
                    unsigned l_1693 = 0UL;
                    struct S0 ***l_1699 = &l_1698;
                    int l_1776 = (-1L);
                    unsigned short l_1814 = 0x490DL;
                    for (g_84.f3.f1 = 0; (g_84.f3.f1 != (-19)); g_84.f3.f1--)
                    {
                        int *l_1692 = &l_1501.f3.f0;
                        (*l_1509) = l_1692;
                        --l_1693;
                        (***g_60) ^= (*p_21);
                    }
                    if (l_1693)
                    {
                        l_1703 = l_1702;
                    }
                    else
                    {
                        int *l_1704 = &l_1501.f3.f1;
                        int *l_1705 = &g_1680.f3.f0;
                        int *l_1706 = &g_84.f3.f5;
                        int *l_1707 = (void*)0;
                        int *l_1708 = &l_1501.f1.f5;
                        int *l_1709 = (void*)0;
                        int *l_1710 = &l_1501.f1.f1;
                        int *l_1711 = (void*)0;
                        int *l_1712 = (void*)0;
                        int *l_1713 = &g_84.f3.f5;
                        int *l_1714 = &g_207.f5;
                        int *l_1715 = &g_1680.f3.f0;
                        int *l_1716 = (void*)0;
                        int *l_1717 = &g_84.f3.f5;
                        int *l_1718 = &g_557;
                        int *l_1719 = &l_1501.f3.f0;
                        int *l_1720 = (void*)0;
                        int *l_1722 = &l_1501.f3.f5;
                        int *l_1723 = (void*)0;
                        int *l_1724 = (void*)0;
                        int *l_1725 = (void*)0;
                        int *l_1726 = &g_234.f0;
                        int *l_1727 = &l_1501.f1.f1;
                        int *l_1729 = (void*)0;
                        int *l_1730 = (void*)0;
                        int *l_1731 = (void*)0;
                        int *l_1732 = &g_84.f3.f1;
                        int *l_1733 = &g_84.f1.f5;
                        int *l_1734 = (void*)0;
                        int *l_1735 = &g_557;
                        int *l_1736 = &g_234.f0;
                        int *l_1737 = &g_234.f0;
                        int *l_1738 = (void*)0;
                        int *l_1739 = &g_207.f5;
                        int *l_1740 = &l_1510.f1.f0;
                        int *l_1741 = &l_1510.f3.f1;
                        int *l_1742 = &g_234.f5;
                        int *l_1743 = &g_207.f5;
                        int *l_1744 = (void*)0;
                        int l_1745 = 3L;
                        int *l_1746 = &g_40;
                        int *l_1747 = &l_1510.f1.f1;
                        int *l_1748 = (void*)0;
                        int *l_1749 = &g_1680.f1.f1;
                        int *l_1750 = &l_1510.f1.f5;
                        int *l_1751 = &g_40;
                        int *l_1752 = (void*)0;
                        int *l_1753 = &l_1510.f1.f5;
                        int *l_1754 = &g_234.f5;
                        int *l_1755 = &l_1510.f1.f0;
                        int *l_1756 = &l_1501.f3.f5;
                        int l_1757 = 0xA11CB383L;
                        int *l_1758 = &l_1510.f3.f1;
                        int *l_1759 = &g_1680.f3.f1;
                        int *l_1760 = &l_1510.f3.f1;
                        int *l_1761 = (void*)0;
                        int *l_1762 = &g_207.f0;
                        int *l_1763 = (void*)0;
                        int *l_1764 = &l_1757;
                        int *l_1765 = &g_84.f1.f5;
                        int l_1766 = (-1L);
                        int *l_1767 = &g_40;
                        int *l_1768 = &g_1680.f3.f5;
                        int *l_1769 = (void*)0;
                        int *l_1770 = &l_1501.f3.f5;
                        int *l_1771 = &g_84.f3.f0;
                        int *l_1772 = (void*)0;
                        int *l_1773 = &l_1510.f3.f5;
                        int *l_1774 = &g_1680.f1.f0;
                        int *l_1775 = &l_1679;
                        int *l_1778 = (void*)0;
                        int *l_1779 = &l_1501.f3.f1;
                        int *l_1780 = &l_1510.f3.f1;
                        int *l_1781 = (void*)0;
                        int *l_1782 = &g_84.f1.f5;
                        int *l_1783 = &l_1510.f1.f5;
                        int *l_1785 = (void*)0;
                        int l_1786 = 9L;
                        int *l_1788 = &g_234.f0;
                        int *l_1789 = &l_1777;
                        int *l_1790 = (void*)0;
                        int *l_1791 = &g_207.f1;
                        int *l_1792 = &g_1680.f3.f5;
                        int *l_1793 = &g_1680.f3.f5;
                        int *l_1794 = &g_1680.f3.f1;
                        int *l_1795 = &g_84.f1.f0;
                        int *l_1796 = &l_1745;
                        int *l_1797 = (void*)0;
                        int l_1798 = (-1L);
                        int *l_1799 = &g_1680.f3.f1;
                        int *l_1800 = (void*)0;
                        int *l_1801 = &l_1510.f3.f5;
                        int *l_1802 = (void*)0;
                        int l_1803 = 0xD193D2B1L;
                        int *l_1804 = &g_207.f1;
                        int *l_1805 = &l_1510.f3.f1;
                        int *l_1806 = &l_1501.f3.f5;
                        int *l_1807 = &g_552;
                        int *l_1808 = &l_1510.f1.f0;
                        int *l_1809 = (void*)0;
                        int *l_1810 = &l_1728;
                        int *l_1811 = &l_1501.f1.f1;
                        int *l_1812 = &g_552;
                        int *l_1813 = &g_84.f1.f1;
                        --l_1814;
                        (*l_1764) |= (**l_1701);
                        (*l_1701) = p_21;
                    }
                    (**g_60) = (*l_1509);
                }
                if (((safe_lshift_func_uint16_t_u_s(((((g_572 , (**l_1701)) , g_207.f5) == 0x63L) >= l_1824), 3)) < 0UL))
                {
                    l_1825 = (void*)0;
                    (*l_1701) = (*l_1509);
                    (**g_60) = (*g_61);
                }
                else
                {
                    char l_1826 = 3L;
                    int l_1827 = 0L;
                    int *l_1828 = &l_1510.f3.f1;
                    int *l_1829 = &l_1821.f1.f5;
                    int *l_1830 = &l_1510.f3.f5;
                    int *l_1832 = &l_1501.f1.f1;
                    int *l_1833 = &g_1680.f3.f5;
                    int *l_1835 = &l_1510.f1.f0;
                    int *l_1836 = &g_207.f5;
                    int *l_1837 = &l_1822.f1;
                    int *l_1838 = &l_1821.f1.f1;
                    int *l_1839 = &l_1822.f5;
                    int *l_1840 = &l_1501.f1.f5;
                    int *l_1841 = &l_1728;
                    int *l_1842 = &l_1822.f1;
                    int *l_1843 = &g_207.f0;
                    int *l_1844 = &l_1501.f3.f1;
                    int *l_1845 = &g_557;
                    int *l_1846 = &g_1680.f3.f5;
                    int l_1847 = 5L;
                    int *l_1848 = &l_1784;
                    int *l_1849 = (void*)0;
                    int *l_1850 = &l_1822.f1;
                    int *l_1851 = &l_1510.f1.f5;
                    int *l_1852 = (void*)0;
                    int *l_1853 = &l_1821.f1.f1;
                    int *l_1854 = &g_1680.f3.f5;
                    int *l_1855 = &g_84.f1.f0;
                    int *l_1856 = &l_1501.f3.f1;
                    int *l_1857 = &g_1680.f3.f5;
                    int *l_1858 = &l_1777;
                    int *l_1859 = &l_1823.f5;
                    int *l_1860 = (void*)0;
                    int *l_1861 = &g_84.f3.f5;
                    int *l_1862 = &l_1821.f1.f5;
                    int *l_1863 = &l_1679;
                    int *l_1864 = &l_1510.f3.f0;
                    int *l_1865 = &l_1821.f1.f0;
                    int *l_1866 = &l_1510.f3.f0;
                    int *l_1867 = &g_234.f0;
                    int *l_1868 = (void*)0;
                    int *l_1869 = &l_1821.f1.f0;
                    int *l_1870 = &l_1822.f5;
                    int *l_1871 = &g_1680.f1.f5;
                    int *l_1872 = (void*)0;
                    int *l_1873 = &l_1823.f1;
                    int *l_1874 = &l_1823.f0;
                    int *l_1875 = &g_552;
                    l_1876--;
                }
                (*l_1703) = l_1879;
                l_2169--;
            }
            else
            {
                int l_2172 = 1L;
                int *l_2173 = &g_1680.f1.f1;
                int *l_2174 = &g_1680.f3.f5;
                int *l_2175 = &g_84.f1.f1;
                int *l_2176 = &l_1679;
                int *l_2177 = &g_1680.f1.f1;
                int *l_2178 = &l_1501.f1.f1;
                int l_2179 = 1L;
                int *l_2180 = &l_1879.f5;
                int *l_2181 = &l_1979;
                int *l_2182 = &l_1822.f5;
                int l_2183 = 0x92519FFAL;
                int *l_2184 = &l_2016;
                int *l_2185 = (void*)0;
                int *l_2186 = (void*)0;
                int *l_2187 = (void*)0;
                int *l_2188 = &g_1680.f3.f5;
                int *l_2189 = &l_1823.f0;
                int *l_2190 = (void*)0;
                int *l_2191 = &l_1979;
                int *l_2192 = &g_234.f1;
                int *l_2193 = &g_1680.f3.f5;
                int *l_2194 = &l_1822.f5;
                int *l_2195 = (void*)0;
                int *l_2196 = &g_234.f0;
                int *l_2197 = &l_1510.f1.f1;
                int *l_2198 = &g_234.f5;
                int *l_2199 = (void*)0;
                int *l_2200 = (void*)0;
                int *l_2201 = (void*)0;
                int *l_2202 = &l_1823.f0;
                int *l_2203 = &l_1510.f3.f1;
                int *l_2204 = &g_84.f3.f1;
                int *l_2205 = &l_1501.f3.f1;
                int *l_2206 = &l_1501.f3.f0;
                int *l_2207 = (void*)0;
                int *l_2208 = &l_2183;
                int *l_2209 = (void*)0;
                int *l_2210 = &l_2046;
                int *l_2211 = &g_40;
                int *l_2212 = (void*)0;
                int *l_2213 = &g_207.f5;
                int *l_2214 = &l_2016;
                int *l_2215 = &l_1822.f0;
                int *l_2216 = &g_552;
                int *l_2217 = &l_1879.f5;
                int *l_2218 = &g_557;
                int *l_2219 = &l_1979;
                int *l_2220 = &l_2016;
                long long *l_2228 = &l_1511.f0;
                (*g_61) = p_21;
                --l_2221;
                (*l_2189) &= (safe_lshift_func_int8_t_s_s(((**l_1509) < (((g_84.f2 , ((l_1496 = l_1496) != &g_251)) < ((*p_21) >= (+(((((*l_2228) = ((*l_1678) > (!(((*g_1282) &= (safe_rshift_func_uint8_t_u_s(((*p_21) > ((*p_21) >= (((*l_2213) , 0x97L) | 0xA0L))), 2))) , 0xF013L)))) & 0xDB655BD150D0B0A2LL) > 18446744073709551614UL) != g_1474)))) != (**l_1509))), 0));
                for (g_38 = 0; (g_38 != (-26)); --g_38)
                {
                    (*l_2176) = (**l_1509);
                    if ((*l_2214))
                        continue;
                    return l_1664;
                }
            }
            (*g_239) |= (func_75((*g_60), (*g_1655), ((*l_2231) = g_84), l_1501, (*l_1675)) , (-2L));
        }
    }
    if (((*g_1282) , (safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(func_46(l_1501, (*g_1282), (**g_60), l_1822, l_2236), (safe_mod_func_int8_t_s_s(((*g_1282) != (((255UL || 1UL) || l_2239) >= g_552)), (-4L))))), g_1680.f3.f1))))
    {
        int *l_2240 = &l_1501.f1.f0;
        int *l_2241 = &g_1680.f1.f0;
        int *l_2242 = &g_552;
        int *l_2243 = &l_1822.f0;
        int *l_2244 = (void*)0;
        int *l_2245 = &g_552;
        int *l_2246 = &g_207.f0;
        int l_2247 = 0x0F4B5293L;
        int *l_2248 = (void*)0;
        int *l_2249 = &l_1822.f0;
        int *l_2250 = &g_1680.f1.f0;
        int *l_2251 = &g_1680.f1.f0;
        int *l_2252 = &l_1823.f5;
        int *l_2253 = (void*)0;
        int *l_2254 = (void*)0;
        int *l_2255 = &l_1822.f0;
        int *l_2256 = &l_1501.f3.f5;
        int *l_2257 = &g_207.f0;
        int *l_2258 = (void*)0;
        int *l_2259 = &g_84.f1.f5;
        int *l_2260 = &l_1501.f1.f5;
        int *l_2261 = &l_1501.f3.f0;
        int *l_2262 = &g_234.f0;
        int *l_2263 = &l_1501.f3.f5;
        int l_2264 = (-6L);
        int l_2265 = 0xB1ADE7B6L;
        int *l_2266 = &l_1501.f1.f5;
        int *l_2267 = &l_2247;
        int *l_2268 = &g_207.f5;
        int *l_2269 = &l_1501.f3.f5;
        int *l_2270 = &g_234.f0;
        int *l_2271 = &l_1822.f0;
        int *l_2272 = &g_40;
        int l_2273 = 0x0B37AC5DL;
        int *l_2274 = &l_2239;
        int *l_2275 = &g_40;
        int *l_2276 = &g_234.f5;
        int *l_2277 = (void*)0;
        int l_2278 = 1L;
        int *l_2279 = (void*)0;
        int *l_2280 = &g_234.f1;
        int *l_2281 = &g_552;
        int *l_2282 = &l_2265;
        int *l_2283 = &g_84.f3.f5;
        int *l_2284 = &g_234.f0;
        int *l_2285 = &g_1680.f1.f0;
        int *l_2286 = (void*)0;
        int *l_2287 = &l_2273;
        int *l_2288 = &g_84.f1.f0;
        int *l_2289 = (void*)0;
        int *l_2290 = &g_207.f5;
        int *l_2291 = &g_1680.f3.f5;
        int *l_2292 = &l_2265;
        int *l_2293 = &l_1501.f3.f0;
        int *l_2294 = &l_1822.f5;
        int *l_2295 = &l_2264;
        int *l_2296 = &g_1680.f3.f1;
        int *l_2297 = &g_84.f3.f1;
        int *l_2298 = &l_1501.f3.f5;
        int *l_2299 = &g_1680.f1.f5;
        int *l_2300 = &g_1680.f1.f0;
        int *l_2301 = &g_1680.f3.f5;
        int *l_2302 = &l_1501.f3.f5;
        int *l_2303 = &g_1680.f1.f5;
        int *l_2304 = &l_2247;
        int *l_2305 = &l_1501.f1.f1;
        int *l_2306 = (void*)0;
        int *l_2307 = (void*)0;
        int *l_2308 = &g_1680.f3.f5;
        int *l_2309 = &g_84.f1.f1;
        int *l_2310 = &l_2239;
        int *l_2311 = &g_234.f0;
        int *l_2312 = &g_557;
        int *l_2313 = &l_1501.f3.f1;
        int *l_2314 = (void*)0;
        int *l_2315 = &g_207.f1;
        int *l_2316 = (void*)0;
        int *l_2317 = (void*)0;
        int *l_2318 = &l_1822.f5;
        int *l_2319 = &g_1680.f1.f1;
        int *l_2320 = &l_2264;
        int *l_2321 = &l_1823.f1;
        int *l_2322 = &g_557;
        int *l_2323 = &g_234.f5;
        int *l_2324 = (void*)0;
        int *l_2325 = (void*)0;
        int *l_2326 = &l_2264;
        int *l_2327 = &g_557;
        int *l_2328 = &g_207.f0;
        int *l_2329 = &l_1501.f1.f0;
        int *l_2330 = &l_1823.f5;
        int *l_2331 = &g_234.f0;
        int *l_2332 = (void*)0;
        int *l_2333 = &g_84.f1.f0;
        int *l_2334 = &l_2273;
        int *l_2335 = &g_1680.f3.f0;
        int *l_2336 = &l_2278;
        int *l_2337 = &g_84.f3.f1;
        int *l_2338 = &g_552;
        int *l_2339 = &g_84.f3.f0;
        int *l_2340 = (void*)0;
        int *l_2341 = &g_1680.f3.f5;
        int l_2342 = (-1L);
        int *l_2343 = &l_2239;
        int l_2344 = 0x868DE4CAL;
        int *l_2345 = (void*)0;
        int *l_2346 = &l_1501.f3.f5;
        int *l_2347 = &g_1680.f1.f0;
        int *l_2348 = (void*)0;
        int *l_2349 = &l_2264;
        int *l_2350 = &l_2265;
        int *l_2351 = &g_234.f1;
        int *l_2352 = (void*)0;
        int *l_2353 = &g_84.f3.f1;
        int *l_2354 = &g_234.f0;
        int l_2355 = 0x5309BA01L;
        int *l_2356 = &l_2247;
        int *l_2357 = (void*)0;
        int *l_2358 = &g_234.f0;
        int *l_2359 = &l_1501.f1.f0;
        int *l_2360 = &g_234.f5;
        int *l_2361 = &g_1680.f3.f1;
        int *l_2362 = &g_84.f1.f1;
        int *l_2363 = (void*)0;
        int *l_2364 = &g_84.f1.f1;
        int *l_2365 = &l_1501.f3.f0;
        int *l_2366 = &g_1680.f1.f0;
        int *l_2367 = &g_1680.f1.f1;
        int *l_2368 = &g_1680.f1.f0;
        int *l_2369 = &g_1680.f3.f0;
        int *l_2370 = &g_207.f0;
        int *l_2371 = &l_1822.f1;
        int *l_2372 = (void*)0;
        int *l_2373 = &l_2344;
        int *l_2374 = &l_1501.f1.f5;
        int *l_2375 = (void*)0;
        int *l_2376 = &g_84.f1.f5;
        int l_2377 = 0x46F62ADCL;
        int *l_2378 = &l_1501.f1.f5;
        int l_2379 = 0xB69D4BB0L;
        int *l_2380 = &l_1501.f1.f1;
        int *l_2381 = &g_84.f1.f1;
        int *l_2382 = &l_1822.f5;
        int *l_2383 = &g_84.f3.f5;
        int *l_2384 = &l_1501.f1.f0;
        int *l_2385 = &g_84.f3.f0;
        int *l_2386 = &l_1823.f0;
        int *l_2387 = &g_1680.f1.f5;
        int *l_2388 = &g_84.f1.f0;
        int *l_2389 = &l_2264;
        int l_2390 = 0xA5D4A50FL;
        int *l_2391 = &l_2344;
        int *l_2392 = &g_84.f1.f1;
        int *l_2393 = &l_1823.f0;
        int *l_2394 = &l_1823.f0;
        int *l_2395 = &l_2264;
        int *l_2396 = &g_207.f5;
        int *l_2397 = (void*)0;
        int *l_2398 = &l_2355;
        int *l_2399 = &g_1680.f3.f0;
        int *l_2400 = &l_2379;
        int *l_2401 = &l_2344;
        int *l_2402 = (void*)0;
        int l_2403 = 0L;
        int *l_2404 = &g_84.f3.f0;
        int *l_2405 = &g_1680.f3.f0;
        int *l_2406 = &g_207.f0;
        int *l_2407 = &g_40;
        int *l_2408 = &g_40;
        int *l_2409 = &g_1680.f3.f5;
        int *l_2410 = (void*)0;
        int *l_2411 = &l_2273;
        int *l_2412 = &l_1822.f0;
        int *l_2413 = &l_2355;
        int *l_2414 = &l_2344;
        int *l_2415 = &g_1680.f3.f0;
        int *l_2416 = &g_84.f3.f1;
        int *l_2417 = &g_84.f3.f5;
        int *l_2418 = (void*)0;
        int *l_2419 = (void*)0;
        int *l_2420 = &l_1822.f1;
        int *l_2421 = &g_234.f1;
        int *l_2422 = &l_1823.f1;
        int *l_2423 = &g_1680.f3.f0;
        int *l_2424 = (void*)0;
        int *l_2425 = &l_2239;
        int *l_2426 = &g_207.f5;
        int *l_2427 = &l_2278;
        int *l_2428 = &l_2273;
        int *l_2429 = (void*)0;
        int *l_2430 = (void*)0;
        int *l_2431 = (void*)0;
        int *l_2432 = &l_1823.f0;
        int *l_2433 = (void*)0;
        int *l_2434 = &l_2403;
        int *l_2435 = &g_1680.f3.f5;
        int *l_2436 = &l_2278;
        int *l_2437 = &g_552;
        int *l_2438 = &l_2264;
        int *l_2439 = &g_1680.f3.f0;
        int *l_2440 = (void*)0;
        int *l_2441 = &l_2377;
        int *l_2442 = &g_1680.f1.f5;
        int *l_2444 = &l_2443;
        int *l_2445 = &l_2344;
        int *l_2446 = &g_1680.f1.f5;
        int *l_2447 = &g_1680.f1.f5;
        int *l_2448 = &g_84.f1.f5;
        int *l_2449 = &g_1680.f3.f5;
        int *l_2452 = &l_1822.f5;
        int *l_2453 = (void*)0;
        int *l_2454 = (void*)0;
        int *l_2455 = &l_2451;
        int *l_2456 = &l_2443;
        int *l_2457 = &l_2342;
        int *l_2458 = &l_2390;
        int *l_2459 = &l_2344;
        unsigned long long l_2460 = 0x190FD4AF1F6AED01LL;
        struct S0 l_2487 = {1L,-1L,0L,0x5270L,-7L,0xCB5E1719L};
        short *l_2497 = &g_553;
        short **l_2496 = &l_2497;
        int ***l_2529 = &g_61;
        struct S1 l_2534 = {0UL,{0x109DA60AL,8L,-7L,3L,0x9E9DL,0L},8L,{-9L,1L,-1L,0xE05DL,0L,0x49095D84L},0x2FD1L};
        unsigned char l_2555 = 0xCBL;
        unsigned short l_2758 = 0x1B27L;
        struct S2 *l_2792 = &g_66;
        struct S1 l_2801 = {0x010F27CEL,{-2L,0x7C56E30EL,-10L,0x1412L,-1L,0x7906A809L},0x48D932D18CF9935ELL,{0xB2A99924L,0x134064D6L,0L,1L,0x0657L,0xC7F2A2A7L},65535UL};
        struct S0 *l_2857 = &l_2534.f1;
        l_2460++;
        if ((safe_lshift_func_int8_t_s_u((*l_2311), g_1834)))
        {
            unsigned l_2465 = 18446744073709551615UL;
            (*l_2435) = (*l_2396);
            l_2465--;
        }
        else
        {
            unsigned l_2470 = 0xA2BB59EEL;
            unsigned char **l_2480 = &l_1496;
            struct S1 l_2482 = {7UL,{0x6E96AD68L,2L,0xE8A8AA86L,0x9957L,0x0B55L,0x9FCB96ABL},0xCCF742E98B788F9ALL,{4L,0x3E2B4E20L,0x6F7401CBL,0L,0xBE9FL,1L},65535UL};
            struct S2 l_2483 = {5L,-1L};
            long long *l_2484 = (void*)0;
            long long *l_2485 = &g_507;
            int *l_2486 = &l_1501.f1.f1;
            for (g_1956 = 0; (g_1956 >= 15); g_1956 = safe_add_func_int16_t_s_s(g_1956, 1))
            {
                if (l_2470)
                {
                    return (*g_1655);
                }
                else
                {
                    short l_2473 = 0x352FL;
                    if ((*p_21))
                        break;
                    for (g_84.f1.f3 = 0; (g_84.f1.f3 < (-21)); g_84.f1.f3 = safe_sub_func_uint8_t_u_u(g_84.f1.f3, 4))
                    {
                        unsigned l_2474 = 0xEAF58BB6L;
                        char l_2477 = (-7L);
                        l_2474--;
                        (*l_2262) |= ((l_2477 | (!g_1680.f1.f2)) , (*p_21));
                        (*l_2336) = (*g_239);
                    }
                }
            }
            (*l_2486) = (safe_mod_func_uint64_t_u_u(func_46(func_75((*g_60), func_22((((*l_2480) = &g_251) == l_2481)), l_2482, g_1680, l_2483), ((*l_2485) |= (*g_1282)), l_2486, l_2487, &g_1133), (*l_2486)));
        }
        if ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(g_10, g_1680.f3.f5)), g_207.f2)))
        {
            int l_2500 = 0x34D7875EL;
            int ***l_2501 = (void*)0;
            unsigned char *l_2504 = (void*)0;
            struct S1 l_2526 = {0UL,{0L,0x91F51A5FL,9L,-1L,0xE754L,-5L},0xE7C5CF47A2257635LL,{0x7312BDF8L,0xDE056FC2L,1L,0x8BB9L,1L,5L},5UL};
            struct S0 **l_2528 = &g_1697;
            struct S1 l_2754 = {0x5C14E85CL,{-8L,-10L,0x16DF1C78L,-2L,0x92D3L,0x61F98265L},-9L,{0xC162E1E9L,1L,1L,0xF448L,0xB6CCL,0x88CCB79DL},0x1A58L};
            struct S0 l_2768 = {0x6C3FB0E1L,0L,0xED61CBD1L,-1L,0L,-8L};
            int **l_2782 = (void*)0;
            if ((l_2487 , (*p_21)))
            {
                unsigned char *l_2505 = &g_893;
                int l_2511 = 0x030AC276L;
                struct S1 l_2512 = {2UL,{-1L,0L,9L,0L,0xCF36L,-3L},0x36896A7AAFB41042LL,{0xBD6AD79EL,0xFFC5B91AL,0x4CC5FC95L,0x7D4BL,0x48A5L,1L},3UL};
                unsigned char l_2519 = 1UL;
                struct S0 ***l_2527 = &l_1698;
                for (g_1956 = 6; (g_1956 <= 22); g_1956 = safe_add_func_int16_t_s_s(g_1956, 7))
                {
                    (*l_2385) |= (*g_239);
                }
                if ((l_2504 != (g_2506 = l_2505)))
                {
                    int *l_2514 = &l_2377;
                    for (l_1501.f1.f0 = 0; (l_1501.f1.f0 > 3); l_1501.f1.f0++)
                    {
                        struct S1 *l_2513 = &l_2512;
                        int l_2517 = 9L;
                        char l_2518 = 0x49L;
                        (*p_21) |= (18446744073709551606UL == (safe_rshift_func_int8_t_s_s((func_46((l_2511 , (l_2487 , ((*l_2513) = func_75((*g_60), func_22(l_2511), (g_1680 = g_1680), l_2512, ((*l_1675) = (l_2512.f3 , g_66)))))), (*g_1282), l_2514, g_207, &g_1133) <= (*g_1282)), g_554)));
                        (*g_61) = func_22(((*g_2506) = (safe_add_func_int32_t_s_s(l_2512.f1.f4, (*p_21)))));
                        if (l_2517)
                            continue;
                        --l_2519;
                    }
                }
                else
                {
                    struct S0 *l_2523 = (void*)0;
                    struct S0 **l_2522 = &l_2523;
                    (*l_2522) = ((*g_1696) = (*g_1696));
                }
                l_2512.f1.f5 |= (safe_rshift_func_uint16_t_u_s((func_46(((l_2526 , (-1L)) , (l_2512.f4 , l_1501)), (*l_2399), func_22((0x33FFL > (((*l_2527) = &g_1697) == l_2528))), l_2526.f3, l_2529) , (*l_1678)), 9));
                return p_21;
            }
            else
            {
                int l_2532 = 0x4E63479DL;
                struct S0 l_2539 = {0x37E5AE01L,5L,0xCEED0655L,0xC714L,0xB92AL,-6L};
                unsigned long long l_2540 = 18446744073709551614UL;
                struct S1 l_2553 = {0x2C2D6463L,{0x8A8CBB5AL,0x21E03CEAL,0xB18A1697L,0xD1F8L,1L,0xD42D405AL},-1L,{1L,0x0A0FA5B0L,-2L,6L,1L,0x9FDAFE2EL},65531UL};
                unsigned l_2747 = 0x910C5E07L;
                int ***l_2757 = &g_61;
                struct S2 **l_2793 = &l_1675;
                int **l_2795 = &l_2426;
                (*g_61) = (void*)0;
                for (l_1501.f1.f2 = (-26); (l_1501.f1.f2 <= (-25)); l_1501.f1.f2 = safe_add_func_int64_t_s_s(l_1501.f1.f2, 8))
                {
                    struct S0 l_2533 = {0x0038E100L,-1L,1L,0xB612L,0x65D4L,-1L};
                    struct S1 *l_2535 = (void*)0;
                    struct S1 *l_2536 = &g_1680;
                    int **l_2551 = &l_2313;
                    int l_2661 = 0x95C2B185L;
                    int l_2727 = 0x56F1B295L;
                    if ((!(((*l_2269) > (l_2532 , ((*l_1502) = l_2532))) , ((l_2487 = l_2533) , ((*l_2320) ^= (g_84.f3.f1 | (func_46(((*l_2536) = l_2534), (((l_2540 = (2L || (!(safe_sub_func_int64_t_s_s(((*p_21) > func_46(l_2534, (*g_1282), p_21, l_2539, l_2501)), 0x5052EB51D0994840LL))))) && g_207.f2) >= (*g_1282)), p_21, l_2539, l_2236) , l_2533.f5)))))))
                    {
                        l_2534 = l_2534;
                        if ((*p_21))
                            continue;
                    }
                    else
                    {
                        unsigned short *l_2545 = &g_1270;
                        struct S0 l_2548 = {0xF5B85C66L,0x453F7D16L,-1L,-1L,-6L,0xD65AEA94L};
                        struct S1 l_2552 = {18446744073709551615UL,{9L,0x79C6446DL,-2L,0x0D13L,-5L,7L},0xE43D74FD92F4273DLL,{-1L,0x70228AD7L,1L,0x18EDL,0L,0x5F5A930DL},65535UL};
                        int ***l_2554 = &g_1133;
                        (*l_2262) |= (safe_lshift_func_int8_t_s_u((*l_2309), (safe_sub_func_int32_t_s_s((((++(*l_2545)) || (func_46(g_1680, ((*g_1282) = 2L), (**g_60), l_2548, l_2501) <= ((**l_2496) = (safe_add_func_int16_t_s_s(((((*l_1502) = (func_46(func_75(l_2551, func_22(func_46(l_2552, l_2548.f5, (**g_60), g_1680.f1, &l_2551)), l_2552, l_2553, (*l_1675)), (*l_2367), p_21, l_2534.f3, l_2554) <= l_2555)) , 0UL) == 0xDDL), g_1680.f2))))) > l_2553.f0), (*p_21)))));
                        (*l_2331) ^= (*g_239);
                    }
                    if ((*p_21))
                    {
                        unsigned l_2556 = 18446744073709551611UL;
                        int l_2559 = 2L;
                        int l_2560 = 1L;
                        int l_2561 = 0x1C87DE39L;
                        int l_2562 = 5L;
                        int l_2563 = 1L;
                        int l_2564 = 0x476393FEL;
                        int l_2565 = 0L;
                        int l_2566 = 0x1332D238L;
                        int *l_2567 = &l_2239;
                        int *l_2568 = &l_1822.f0;
                        int *l_2569 = &l_2564;
                        int *l_2570 = &l_2377;
                        int *l_2571 = &g_234.f0;
                        int *l_2572 = &l_1823.f5;
                        int *l_2573 = &l_1823.f1;
                        int *l_2574 = &l_1501.f3.f5;
                        int *l_2575 = &l_2534.f3.f0;
                        int *l_2576 = &l_2451;
                        int *l_2577 = &g_234.f1;
                        int *l_2578 = &l_2526.f3.f0;
                        int *l_2579 = &l_1501.f1.f1;
                        int *l_2580 = (void*)0;
                        int *l_2581 = &l_2559;
                        int *l_2582 = &l_1823.f5;
                        int *l_2583 = &g_84.f1.f5;
                        int *l_2584 = &l_2534.f1.f5;
                        int *l_2585 = &l_1822.f0;
                        int *l_2586 = &l_2539.f5;
                        int *l_2587 = &l_1501.f3.f0;
                        int *l_2588 = &l_2566;
                        int *l_2589 = (void*)0;
                        int *l_2590 = &l_2564;
                        int *l_2591 = &l_2526.f3.f0;
                        int *l_2592 = (void*)0;
                        int *l_2593 = &l_2377;
                        int *l_2594 = &l_2487.f0;
                        int *l_2595 = (void*)0;
                        int *l_2596 = &l_2553.f1.f1;
                        int *l_2597 = &l_2342;
                        int *l_2598 = (void*)0;
                        int *l_2599 = (void*)0;
                        int *l_2600 = &l_2534.f1.f5;
                        int *l_2601 = &l_2533.f1;
                        int *l_2602 = &g_1680.f3.f0;
                        int l_2603 = 0xCEFB00A8L;
                        int *l_2604 = &l_2379;
                        int l_2605 = 5L;
                        int *l_2606 = &l_2342;
                        int *l_2607 = &l_2487.f5;
                        int *l_2608 = (void*)0;
                        int *l_2609 = &l_2450;
                        int *l_2610 = &l_2534.f3.f5;
                        int *l_2611 = (void*)0;
                        int *l_2612 = &l_2534.f1.f1;
                        int *l_2613 = &l_2534.f3.f1;
                        int *l_2614 = &l_2533.f0;
                        int *l_2615 = &l_1822.f1;
                        int *l_2616 = &l_2534.f3.f5;
                        int *l_2617 = &l_2553.f1.f5;
                        int *l_2618 = &l_2561;
                        int *l_2619 = &l_2534.f1.f1;
                        int *l_2620 = &g_1680.f3.f1;
                        int *l_2621 = &l_2603;
                        int *l_2622 = &l_2553.f3.f0;
                        int *l_2623 = (void*)0;
                        int *l_2624 = &l_2603;
                        int *l_2625 = &l_1823.f0;
                        int *l_2626 = &l_2566;
                        int *l_2627 = &l_2553.f3.f1;
                        int *l_2628 = &l_2526.f3.f5;
                        int *l_2629 = &g_234.f0;
                        int *l_2630 = (void*)0;
                        int *l_2631 = &l_1501.f3.f1;
                        int *l_2632 = &g_84.f1.f1;
                        int *l_2633 = &g_1680.f3.f0;
                        int *l_2634 = &l_2534.f3.f5;
                        int *l_2635 = &g_84.f1.f5;
                        int *l_2636 = &l_2377;
                        int *l_2637 = &l_2553.f1.f1;
                        int *l_2638 = (void*)0;
                        int *l_2639 = &g_1680.f1.f5;
                        int *l_2640 = &l_2278;
                        int l_2641 = 0L;
                        int *l_2642 = &g_1680.f3.f5;
                        int *l_2643 = &l_2487.f0;
                        int *l_2644 = &l_2534.f3.f0;
                        int *l_2645 = &l_2533.f0;
                        int *l_2646 = (void*)0;
                        int *l_2647 = &l_2553.f1.f0;
                        int *l_2648 = &l_2239;
                        int *l_2649 = &l_1501.f1.f1;
                        int *l_2650 = (void*)0;
                        int *l_2651 = &l_2239;
                        int *l_2652 = &l_2553.f3.f5;
                        int *l_2653 = &l_2265;
                        int *l_2654 = &l_2487.f1;
                        int *l_2655 = (void*)0;
                        int *l_2656 = &l_2451;
                        int l_2657 = 0L;
                        int *l_2658 = &l_2605;
                        int *l_2659 = &l_2247;
                        int *l_2660 = &l_2273;
                        int *l_2662 = &l_2342;
                        int *l_2663 = &l_2539.f0;
                        int *l_2664 = &g_207.f0;
                        int *l_2665 = &l_2403;
                        int *l_2666 = &l_2657;
                        int *l_2667 = &g_84.f3.f0;
                        int *l_2668 = &l_2273;
                        int *l_2669 = (void*)0;
                        int *l_2670 = &l_1822.f0;
                        int *l_2671 = &l_2526.f3.f1;
                        int *l_2672 = &l_2657;
                        int *l_2673 = (void*)0;
                        int *l_2674 = &l_2344;
                        int *l_2675 = &l_2264;
                        int *l_2676 = (void*)0;
                        int *l_2677 = &l_1823.f1;
                        int *l_2678 = &l_2533.f0;
                        int *l_2679 = &l_2566;
                        int *l_2680 = &g_84.f1.f1;
                        int *l_2681 = &l_1822.f0;
                        int *l_2682 = &l_2566;
                        int *l_2683 = (void*)0;
                        int *l_2684 = (void*)0;
                        int *l_2685 = &g_552;
                        int *l_2686 = &l_2561;
                        int *l_2687 = &l_2559;
                        int *l_2688 = (void*)0;
                        int *l_2689 = &l_2533.f5;
                        int *l_2690 = &g_1680.f1.f0;
                        int *l_2691 = &l_2553.f1.f1;
                        int *l_2692 = &l_2264;
                        int *l_2693 = &l_1822.f5;
                        int *l_2694 = &l_2265;
                        int *l_2695 = &g_1680.f3.f0;
                        int *l_2696 = &l_2566;
                        int *l_2697 = &l_1501.f1.f0;
                        int *l_2698 = &l_2239;
                        int *l_2699 = &l_1501.f1.f0;
                        int *l_2700 = &l_2379;
                        int *l_2701 = &g_1680.f3.f1;
                        int *l_2702 = (void*)0;
                        int *l_2703 = &l_2533.f0;
                        int *l_2704 = &g_84.f1.f1;
                        int *l_2705 = &l_2390;
                        int *l_2706 = &l_2239;
                        int *l_2707 = &l_2487.f5;
                        int *l_2708 = &g_1680.f1.f1;
                        int *l_2709 = &l_1501.f1.f5;
                        int *l_2710 = &l_2553.f3.f0;
                        int *l_2711 = &g_207.f0;
                        int *l_2712 = (void*)0;
                        int *l_2713 = &l_2487.f5;
                        int *l_2714 = &l_2605;
                        int *l_2715 = &l_2534.f3.f0;
                        int *l_2716 = &l_2450;
                        int *l_2717 = &l_2377;
                        int *l_2718 = &l_2534.f1.f1;
                        int *l_2719 = (void*)0;
                        int *l_2720 = &l_2487.f5;
                        int *l_2721 = &g_1680.f1.f1;
                        int *l_2722 = &l_1501.f3.f0;
                        int *l_2723 = &l_2526.f1.f0;
                        int *l_2724 = (void*)0;
                        int *l_2725 = &l_2661;
                        int *l_2726 = &l_2539.f0;
                        int *l_2728 = &g_84.f1.f5;
                        int *l_2729 = &l_2265;
                        int *l_2730 = &l_2526.f3.f1;
                        int *l_2731 = &l_2247;
                        int *l_2732 = &g_84.f3.f0;
                        int *l_2733 = &l_2539.f5;
                        int *l_2734 = &l_2342;
                        int *l_2735 = &l_2534.f1.f1;
                        int *l_2736 = &l_2553.f3.f1;
                        int *l_2737 = &g_1680.f3.f5;
                        int *l_2738 = &l_2451;
                        int *l_2739 = &l_1822.f1;
                        int *l_2740 = &g_234.f5;
                        int *l_2741 = &l_2562;
                        int l_2742 = (-7L);
                        int *l_2743 = &g_1680.f3.f0;
                        int *l_2744 = &l_2559;
                        int *l_2745 = &l_2565;
                        int *l_2746 = &g_234.f1;
                        l_2556--;
                        --l_2747;
                        (*l_2662) ^= ((1L || 0x1BL) == ((safe_mod_func_uint64_t_u_u((((safe_mod_func_uint32_t_u_u(func_46(l_2754, (l_2540 != (**l_2551)), (*g_61), ((safe_rshift_func_uint8_t_u_u(((*g_2506) = ((*l_1496) = 0x0DL)), 5)) , l_2539), l_2757), 4294967293UL)) == l_2758) , g_1834), (*g_1282))) || (-5L)));
                    }
                    else
                    {
                        (*g_61) = p_21;
                    }
                    if (((*p_21) = (**l_2551)))
                    {
                        struct S2 **l_2759 = &l_1675;
                        (*l_2759) = &g_66;
                        if ((*g_239))
                            continue;
                    }
                    else
                    {
                        char *l_2765 = &g_10;
                        long long *l_2769 = &g_84.f2;
                        int *l_2770 = &l_2487.f0;
                        int ***l_2771 = &g_1133;
                        struct S1 l_2776 = {0UL,{6L,0L,0x2614A1B6L,-3L,1L,-2L},0x895932674B0F0D05LL,{2L,-9L,1L,0x516EL,1L,0xA04DAFBBL},65535UL};
                        unsigned long long *l_2779 = (void*)0;
                        unsigned *l_2787 = &g_597;
                        (*g_239) = ((safe_rshift_func_int8_t_s_s(l_2762, g_523)) ^ (((safe_lshift_func_int8_t_s_u(((*l_2765) = (~g_554)), (**l_2551))) && (((6UL <= (func_46(l_2553, ((safe_sub_func_int64_t_s_s((**l_2551), ((*l_2769) = ((*g_1282) = (((*l_1700) = (void*)0) != (l_2768 , &l_2754)))))) , (*g_1282)), l_2770, g_207, l_2771) <= (-1L))) > (*l_2275)) , (*p_21))) > (*g_2506)));
                        (*l_2422) &= (safe_sub_func_int32_t_s_s((*p_21), 1UL));
                        (*l_2381) ^= (*p_21);
                    }
                }
                (*l_2795) = ((*g_61) = (((((*l_2793) = l_2792) == (void*)0) < (((void*)0 == l_2794) <= (*g_239))) , (*g_61)));
                (*g_239) = 0x4F034279L;
            }
            (*g_61) = func_22((*l_2444));
        }
        else
        {
            unsigned short l_2798 = 0xC117L;
            long long *l_2831 = &l_2801.f2;
            int ***l_2839 = &g_61;
            (*l_2292) |= (*g_239);
            if ((safe_mod_func_int16_t_s_s(l_2798, (safe_lshift_func_int16_t_s_u((l_2801 , 0x45BAL), 3)))))
            {
                struct S1 l_2806 = {18446744073709551614UL,{0xB9FFC485L,0x594E2DB4L,0x21D893ECL,0xC287L,0x4C14L,0xE5DB1230L},8L,{0x9BE61605L,0xE1C8F1DBL,0x47B5BBFBL,0xB80BL,-1L,0x179C8D87L},65532UL};
                int *l_2827 = (void*)0;
                int ***l_2847 = &g_1133;
                char *l_2848 = &g_523;
                if (((((safe_rshift_func_int8_t_s_u((*l_2404), (((g_84.f3.f5 != (-1L)) ^ (*g_239)) >= (func_46(l_2806, l_2798, (l_2806.f3.f3 , (void*)0), l_2806.f1, l_2236) < 1UL)))) && (*g_2506)) , (*l_2301)) & (*g_1282)))
                {
                    struct S1 *l_2832 = (void*)0;
                    struct S1 *l_2834 = (void*)0;
                    struct S1 **l_2833 = &l_2834;
                    char *l_2837 = &g_66.f1;
                    char *l_2838 = &g_10;
                    (*l_2426) &= ((*l_2421) = (*p_21));
                    for (l_2221 = 0; (l_2221 != 35); ++l_2221)
                    {
                        int l_2813 = 3L;
                        struct S1 l_2820 = {0x8DB2BBC6L,{0xB2C4ABE5L,0L,1L,0L,-2L,5L},0xB80B994945C6BCF1LL,{0xC8A1066CL,0L,0xF38CF9F2L,0x8B53L,1L,7L},65532UL};
                        int ***l_2828 = &g_1133;
                        long long *l_2829 = &l_2806.f2;
                        long long **l_2830 = &l_2829;
                        (*l_2391) |= (0x39L == (safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_1496) &= (l_2813 ^ (safe_lshift_func_int16_t_s_u(g_506, (((*l_2830) = ((safe_add_func_uint8_t_u_u((*g_2506), (safe_mod_func_uint64_t_u_u(g_207.f3, func_46(l_2820, (l_2798 , (safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(g_1680.f0, ((*l_2794)--))) > (*l_1678)), l_2820.f3.f0))), l_2827, l_2534.f3, l_2828))))) , l_2829)) == l_2831))))), (*g_2506))), g_207.f3)));
                    }
                    (*l_2283) ^= (((*l_2319) < (l_2832 == ((*l_2833) = (g_1290 = (void*)0)))) & ((safe_lshift_func_int8_t_s_s(g_572, l_2798)) != 0xDEL));
                    (*l_2269) = ((l_2798 , (((*l_2838) |= ((*l_2837) = ((*l_2446) , g_66.f0))) != (l_2798 & (l_2839 != &g_1133)))) , ((safe_add_func_uint8_t_u_u((*g_2506), g_1680.f1.f5)) != g_40));
                }
                else
                {
                    short ***l_2842 = &l_2496;
                    (*l_2842) = (void*)0;
                    for (l_2798 = 12; (l_2798 < 48); l_2798++)
                    {
                        return (*g_1655);
                    }
                    (*g_239) = (*g_239);
                }
                (*l_1675) = ((*l_2329) , g_66);
                g_239 = ((*g_61) = func_22((g_40 , (g_1680.f3.f1 >= ((safe_lshift_func_uint16_t_u_s(((*l_2404) || ((*g_1282) & ((~func_46(g_84, (*l_2444), (**g_60), l_2801.f3, &g_1133)) == 0x8A10AC42L))), 12)) , (*p_21))))));
            }
            else
            {
                p_21 = (*g_61);
            }
            (**l_2529) = func_22((((*g_2506) | (safe_add_func_int8_t_s_s((*l_2294), (safe_add_func_uint8_t_u_u(((*l_1678) & (safe_sub_func_int8_t_s_s(1L, func_46(l_1501, ((safe_rshift_func_int8_t_s_u(g_553, 3)) > 1UL), func_22((((((*l_2304) ^ (((*l_2481) = (*g_2506)) , g_1680.f3.f5)) < 0xB9DD46CDL) <= (*l_2275)) >= (-7L))), l_2534.f1, l_2839)))), 0UL))))) && 0x43976B03A64ACFE7LL));
        }
        (*l_2857) = l_2534.f1;
    }
    else
    {
        struct S0 l_2858 = {0xC4143326L,9L,-7L,0x99F9L,0xEB39L,1L};
        int **l_2859 = &l_1664;
        short l_2860 = 0xFB2CL;
        short *l_2861 = &l_1822.f3;
        unsigned char l_2882 = 8UL;
        struct S1 l_2894 = {0xD2057C8DL,{0L,-3L,0xB996BD5DL,0L,0x505FL,-4L},0x5E436C35FB1CC9F9LL,{-1L,0x1688C79CL,6L,0xB620L,0x632EL,-6L},0xE20DL};
        unsigned short l_3087 = 65534UL;
        int *l_3381 = &g_1680.f3.f0;
        struct S1 l_3573 = {18446744073709551615UL,{-10L,0x853CF14AL,0xBCD0283CL,0x8382L,0xF159L,4L},-1L,{0xCF266107L,-5L,-1L,0L,0x0EB5L,6L},0xF6C7L};
        char *l_3576 = (void*)0;
        char *l_3577 = &g_66.f1;
        l_2862 ^= ((l_2858 , (((*l_2861) &= (((((*l_1678) != func_46(func_75(l_2859, l_1678, l_1501, g_1680, g_66), l_2858.f2, (*g_61), l_2858, &g_1133)) >= l_2858.f5) & l_2860) <= 0x47ACL)) < 0x8581L)) >= g_84.f1.f2);
        for (g_1680.f3.f1 = 0; (g_1680.f3.f1 != 8); g_1680.f3.f1 = safe_add_func_uint8_t_u_u(g_1680.f3.f1, 8))
        {
            char l_2865 = (-1L);
            int *l_2866 = &g_207.f0;
            int *l_2867 = &g_207.f0;
            int *l_2868 = &g_207.f5;
            int *l_2869 = &g_1680.f3.f5;
            int *l_2870 = &l_1822.f1;
            int *l_2871 = &l_1501.f1.f0;
            int *l_2872 = &l_2443;
            int *l_2873 = &l_2450;
            int *l_2874 = (void*)0;
            int *l_2875 = &g_234.f5;
            int *l_2876 = &g_1680.f3.f5;
            int *l_2877 = &l_2443;
            int *l_2878 = &l_2858.f1;
            int *l_2879 = &g_234.f0;
            int *l_2880 = &l_1822.f1;
            int *l_2881 = (void*)0;
            --l_2882;
            return (*g_1655);
        }
        for (l_1501.f2 = 0; (l_1501.f2 <= 3); l_1501.f2 = safe_add_func_uint64_t_u_u(l_1501.f2, 9))
        {
            struct S1 l_2892 = {0UL,{-1L,0xC49F19E8L,0x8EB55342L,0x9782L,1L,0x0AEBF62BL},0xA8E3CF634DDFF489LL,{0x09AB0FF2L,-1L,1L,-4L,-1L,-1L},0x1B37L};
            struct S2 l_2895 = {0xC851B14945B9DC2DLL,0xCDL};
            int *l_2897 = &l_1501.f1.f0;
            int l_3283 = 9L;
            int l_3298 = 1L;
            int l_3302 = (-1L);
            int l_3305 = 0xA6A42476L;
            int l_3329 = 0x0C4DCE61L;
            int l_3343 = 0x1F985885L;
            int l_3364 = 0xE1371A9EL;
            int l_3376 = 0L;
            long long l_3419 = 1L;
            unsigned short l_3568 = 0UL;
            (*l_2859) = ((*g_61) = func_22(((*g_60) == &p_21)));
            for (g_84.f1.f2 = 0; (g_84.f1.f2 < 9); g_84.f1.f2 = safe_add_func_uint32_t_u_u(g_84.f1.f2, 7))
            {
                struct S2 l_2893 = {0x88AE9EDAD2B206F9LL,-1L};
                struct S1 l_2896 = {0UL,{0x74037861L,0x082476DFL,-1L,0xDB57L,0x76AEL,-3L},0x68CE15BD6FB580D3LL,{-2L,6L,1L,-4L,0L,-1L},7UL};
                int *l_2899 = &l_1501.f1.f0;
                int *l_2900 = &g_84.f1.f5;
                int *l_2901 = &l_1501.f3.f5;
                int *l_2902 = &g_1680.f3.f0;
                int *l_2903 = &l_2894.f3.f0;
                int *l_2904 = &g_234.f0;
                int *l_2905 = &g_207.f5;
                int *l_2906 = &g_207.f5;
                int *l_2907 = &g_234.f5;
                int *l_2908 = (void*)0;
                int *l_2909 = (void*)0;
                int *l_2910 = &l_2898.f0;
                int *l_2911 = &l_2858.f5;
                int *l_2912 = &l_2443;
                int *l_2913 = &g_234.f0;
                int *l_2914 = &l_2894.f3.f5;
                int *l_2915 = &g_1680.f1.f0;
                int *l_2916 = &l_2443;
                int *l_2917 = (void*)0;
                int *l_2918 = &l_2892.f3.f5;
                int *l_2919 = (void*)0;
                int *l_2920 = &l_1501.f1.f1;
                int *l_2921 = &l_1823.f5;
                int *l_2922 = &l_2896.f1.f1;
                int *l_2923 = &l_2896.f1.f5;
                int *l_2924 = (void*)0;
                int *l_2925 = &g_207.f5;
                int *l_2926 = (void*)0;
                int *l_2927 = &l_2892.f1.f5;
                int *l_2928 = &g_234.f0;
                int *l_2929 = &g_234.f0;
                int *l_2930 = &l_1501.f3.f1;
                int *l_2931 = &l_2892.f1.f0;
                int *l_2932 = &l_2896.f3.f5;
                int *l_2933 = &l_1501.f1.f1;
                int *l_2934 = &g_1680.f3.f5;
                int *l_2935 = &l_2894.f1.f0;
                int *l_2936 = &l_1501.f1.f0;
                int *l_2937 = &g_557;
                int *l_2938 = (void*)0;
                int *l_2939 = (void*)0;
                int *l_2940 = &l_2896.f3.f0;
                int *l_2941 = &g_1680.f1.f5;
                int *l_2942 = &l_1501.f3.f1;
                int *l_2943 = (void*)0;
                int *l_2944 = &l_1501.f1.f5;
                int *l_2945 = &l_2894.f3.f5;
                int *l_2946 = &g_1680.f1.f0;
                int *l_2947 = &l_2892.f1.f5;
                int *l_2948 = &l_2892.f1.f5;
                int *l_2949 = (void*)0;
                int *l_2950 = &l_2898.f1;
                int *l_2951 = &l_1501.f3.f5;
                int *l_2952 = &g_84.f3.f5;
                int *l_2953 = &l_1822.f5;
                int *l_2954 = &l_2894.f3.f1;
                int *l_2955 = &g_1680.f3.f1;
                int *l_2956 = &g_84.f1.f5;
                int *l_2957 = &g_1680.f3.f5;
                int *l_2958 = (void*)0;
                int *l_2959 = (void*)0;
                int *l_2960 = &g_552;
                int *l_2961 = &l_2894.f1.f1;
                int *l_2962 = &g_84.f3.f1;
                int *l_2963 = &l_1822.f1;
                int *l_2964 = (void*)0;
                int *l_2965 = (void*)0;
                int *l_2966 = (void*)0;
                int *l_2967 = &l_1822.f5;
                int *l_2968 = (void*)0;
                int *l_2969 = &g_84.f3.f5;
                int *l_2970 = &g_1680.f3.f1;
                int *l_2971 = &l_1822.f5;
                int *l_2972 = (void*)0;
                int *l_2973 = &g_84.f3.f5;
                int *l_2974 = &l_2892.f1.f0;
                int *l_2975 = &l_2239;
                int *l_2976 = &g_84.f1.f0;
                int *l_2977 = &l_2892.f1.f5;
                int *l_2978 = &l_2894.f3.f1;
                int *l_2979 = &l_2892.f3.f0;
                int *l_2980 = &g_207.f0;
                int *l_2981 = (void*)0;
                int *l_2982 = &l_2892.f1.f0;
                int *l_2983 = (void*)0;
                int *l_2984 = &l_2896.f3.f5;
                int *l_2985 = &g_1680.f1.f5;
                int *l_2986 = &l_2892.f1.f1;
                int *l_2987 = (void*)0;
                int *l_2988 = &l_2892.f3.f1;
                int *l_2989 = &l_2443;
                int *l_2990 = &l_2898.f1;
                int *l_2991 = &l_1822.f1;
                int *l_2992 = &l_2898.f0;
                int *l_2993 = &g_1680.f3.f5;
                int *l_2994 = &l_1501.f3.f1;
                int *l_2995 = &l_1501.f3.f5;
                int *l_2996 = (void*)0;
                int *l_2997 = &l_1823.f0;
                int *l_2998 = &g_40;
                int *l_2999 = (void*)0;
                int *l_3000 = (void*)0;
                int *l_3001 = (void*)0;
                int *l_3002 = &g_1680.f3.f5;
                int *l_3003 = &l_1501.f1.f0;
                int *l_3004 = &g_207.f5;
                int *l_3005 = (void*)0;
                int *l_3006 = &l_1823.f5;
                int *l_3007 = &l_2892.f1.f1;
                int *l_3008 = (void*)0;
                int *l_3009 = &l_2894.f3.f0;
                int *l_3010 = &l_2451;
                int *l_3011 = (void*)0;
                int *l_3012 = &l_2896.f1.f1;
                int *l_3013 = (void*)0;
                int *l_3014 = &l_1501.f1.f5;
                int *l_3015 = &l_1822.f0;
                int *l_3016 = &l_2896.f3.f1;
                int *l_3017 = &l_2894.f1.f5;
                int *l_3018 = &l_1501.f1.f0;
                int *l_3019 = &g_84.f3.f5;
                int *l_3020 = &l_2239;
                int *l_3021 = &l_2898.f1;
                int *l_3022 = &g_1680.f3.f1;
                int *l_3023 = (void*)0;
                int *l_3024 = &l_2898.f1;
                int *l_3025 = &l_1501.f3.f5;
                int *l_3026 = (void*)0;
                int *l_3027 = &g_84.f1.f0;
                int *l_3028 = &g_234.f1;
                int *l_3029 = &l_2898.f5;
                int *l_3030 = (void*)0;
                int *l_3031 = &l_1501.f3.f1;
                int *l_3032 = &g_84.f1.f5;
                int *l_3033 = &l_1823.f0;
                int *l_3034 = &g_84.f1.f1;
                int *l_3035 = &g_84.f1.f1;
                int *l_3036 = (void*)0;
                int *l_3037 = &l_2894.f1.f0;
                int *l_3038 = &l_1501.f3.f5;
                int *l_3039 = &g_84.f3.f5;
                int *l_3040 = &l_1823.f1;
                int *l_3041 = (void*)0;
                int *l_3042 = (void*)0;
                int *l_3043 = &g_207.f5;
                int *l_3044 = &l_2892.f1.f0;
                int *l_3045 = (void*)0;
                int *l_3046 = &g_84.f3.f0;
                int *l_3047 = &l_2894.f3.f0;
                int *l_3048 = &l_2451;
                int *l_3049 = (void*)0;
                int *l_3050 = &l_2239;
                int *l_3051 = &l_2896.f1.f5;
                int *l_3052 = &l_2896.f3.f1;
                int l_3053 = (-1L);
                int *l_3054 = &g_234.f1;
                int *l_3055 = &l_2892.f1.f1;
                int *l_3056 = (void*)0;
                int *l_3057 = &l_1823.f5;
                int *l_3058 = &l_1823.f1;
                int *l_3059 = &l_1501.f1.f0;
                int *l_3060 = &g_1680.f3.f0;
                int *l_3061 = &l_2450;
                int *l_3062 = &l_2892.f3.f5;
                int *l_3063 = &l_1823.f1;
                int *l_3064 = &l_1501.f3.f5;
                int *l_3065 = &l_2898.f0;
                int *l_3066 = &g_1680.f1.f0;
                int *l_3067 = (void*)0;
                int *l_3068 = &g_84.f3.f1;
                int *l_3069 = &g_1680.f3.f1;
                int *l_3070 = &l_2858.f5;
                int *l_3071 = (void*)0;
                int *l_3072 = &l_2896.f1.f0;
                int *l_3073 = &l_2894.f1.f0;
                int *l_3074 = &l_2451;
                int *l_3075 = &l_2894.f1.f1;
                int *l_3076 = &l_1501.f3.f0;
                int *l_3077 = (void*)0;
                int *l_3078 = &l_2858.f0;
                int *l_3079 = &l_2892.f1.f1;
                int *l_3080 = &l_2894.f3.f5;
                int *l_3081 = &l_2894.f3.f5;
                int *l_3082 = &l_2892.f3.f1;
                int *l_3083 = &g_207.f0;
                int *l_3084 = &l_2892.f3.f1;
                int *l_3085 = &l_1501.f3.f1;
                int *l_3086 = (void*)0;
                for (l_2858.f2 = 0; (l_2858.f2 == (-8)); l_2858.f2--)
                {
                    unsigned l_2891 = 4UL;
                    (*l_1678) = l_2891;
                    (*g_1696) = (*g_1696);
                    (*g_61) = p_21;
                }
                (*g_239) = func_46((l_2896 = func_75(l_2859, ((*g_1655) = p_21), func_75(((*g_60) = (*g_60)), &g_57, l_1501, func_75((*l_2236), p_21, l_1501, l_2892, (*l_1675)), l_2893), l_2894, l_2895)), (*g_1282), l_2897, l_2898, l_2236);
                --l_3087;
            }
            for (g_909 = 0; (g_909 > 46); g_909 = safe_add_func_uint8_t_u_u(g_909, 5))
            {
                unsigned l_3092 = 0x48D29A74L;
                int l_3164 = 0x158229BDL;
                int l_3339 = 0x9B09F668L;
                int **l_3382 = (void*)0;
                struct S2 l_3383 = {0L,2L};
                int l_3525 = 5L;
                int l_3527 = 0x872DDB8AL;
                int l_3561 = 0L;
                struct S1 *l_3571 = &g_1680;
                struct S1 *l_3572 = &l_2894;
                if ((g_1680.f3.f1 != l_3092))
                {
                    (*l_2897) = (*p_21);
                    (*l_2897) = ((*l_1678) = (&l_2860 != (void*)0));
                }
                else
                {
                    int l_3093 = (-5L);
                    int *l_3094 = &l_2894.f1.f0;
                    int *l_3095 = &g_84.f3.f1;
                    int *l_3096 = (void*)0;
                    int *l_3097 = &g_40;
                    int *l_3098 = &l_1501.f3.f1;
                    int *l_3099 = &l_2443;
                    int *l_3100 = &g_207.f1;
                    int *l_3101 = &l_2239;
                    int *l_3102 = &g_84.f1.f0;
                    int *l_3103 = &l_2894.f3.f1;
                    int *l_3104 = &g_234.f1;
                    int *l_3105 = &l_1501.f1.f0;
                    int *l_3106 = &g_1680.f3.f0;
                    int *l_3107 = &l_1822.f0;
                    int *l_3108 = &g_84.f1.f0;
                    int *l_3109 = &l_1823.f5;
                    int *l_3110 = &l_2898.f0;
                    int *l_3111 = &l_1501.f3.f0;
                    int *l_3112 = (void*)0;
                    int *l_3113 = &l_2894.f1.f1;
                    int *l_3114 = &l_2898.f1;
                    int *l_3115 = &l_2892.f1.f0;
                    int *l_3116 = &l_2894.f1.f0;
                    int *l_3117 = &l_1822.f5;
                    int *l_3118 = &l_1501.f1.f1;
                    int *l_3119 = (void*)0;
                    int *l_3120 = &l_1501.f1.f5;
                    int *l_3121 = &l_1822.f1;
                    int *l_3122 = &g_84.f1.f5;
                    int *l_3123 = (void*)0;
                    int l_3124 = 0x6C34E9C7L;
                    int *l_3125 = (void*)0;
                    int *l_3126 = &g_234.f5;
                    int *l_3127 = &l_2892.f1.f1;
                    int *l_3128 = (void*)0;
                    int *l_3129 = (void*)0;
                    int *l_3130 = &l_1822.f5;
                    int *l_3131 = &l_1822.f1;
                    int *l_3132 = &g_84.f3.f1;
                    int *l_3133 = (void*)0;
                    int *l_3134 = &l_2892.f3.f5;
                    int *l_3135 = (void*)0;
                    int *l_3136 = &l_2894.f3.f0;
                    int *l_3137 = &g_84.f3.f1;
                    int *l_3138 = &l_2894.f1.f5;
                    int *l_3139 = &l_2450;
                    int *l_3140 = &l_2892.f3.f0;
                    int *l_3141 = &g_84.f1.f5;
                    int *l_3142 = (void*)0;
                    int *l_3143 = &l_2898.f5;
                    int *l_3144 = &g_207.f0;
                    int *l_3145 = (void*)0;
                    int *l_3146 = &l_2894.f1.f0;
                    int *l_3147 = &g_207.f0;
                    int *l_3148 = &l_2898.f0;
                    int *l_3149 = &l_2451;
                    int *l_3150 = &g_1680.f3.f1;
                    int *l_3151 = &g_84.f3.f5;
                    int *l_3152 = &l_2894.f3.f1;
                    int *l_3153 = &g_84.f3.f1;
                    int *l_3154 = &l_2898.f5;
                    int *l_3155 = &l_2892.f1.f0;
                    int *l_3156 = &l_2894.f1.f0;
                    int *l_3157 = &g_207.f5;
                    int *l_3158 = &l_2892.f3.f1;
                    int *l_3159 = &l_2892.f3.f0;
                    int l_3160 = 0x045079C7L;
                    int *l_3161 = (void*)0;
                    int *l_3162 = &l_2898.f0;
                    int *l_3163 = &l_2894.f3.f1;
                    int *l_3165 = &g_84.f1.f0;
                    int *l_3166 = &g_84.f1.f1;
                    int *l_3167 = &l_3164;
                    int *l_3168 = &l_1501.f3.f5;
                    int *l_3169 = &l_2894.f1.f5;
                    int *l_3170 = &l_2894.f1.f0;
                    int *l_3171 = &l_2892.f1.f0;
                    int *l_3172 = &l_2892.f3.f5;
                    int *l_3173 = &g_207.f1;
                    int *l_3174 = &l_3164;
                    int *l_3175 = (void*)0;
                    int *l_3176 = &l_2858.f0;
                    int *l_3177 = &l_1501.f3.f0;
                    int *l_3178 = (void*)0;
                    int *l_3179 = (void*)0;
                    int *l_3180 = &l_2892.f3.f1;
                    int *l_3181 = (void*)0;
                    int *l_3182 = &l_1822.f1;
                    int *l_3183 = &g_1680.f1.f1;
                    int *l_3184 = &g_1680.f1.f5;
                    int *l_3185 = &g_207.f1;
                    int *l_3186 = &g_84.f3.f5;
                    int *l_3187 = &g_84.f1.f5;
                    int *l_3188 = &g_84.f1.f1;
                    int *l_3189 = &l_1823.f0;
                    int *l_3190 = (void*)0;
                    int *l_3191 = &l_2892.f1.f1;
                    int *l_3192 = &g_84.f3.f5;
                    int *l_3193 = (void*)0;
                    int *l_3194 = &g_234.f1;
                    int *l_3195 = (void*)0;
                    int *l_3196 = &l_2894.f3.f0;
                    int *l_3197 = (void*)0;
                    int *l_3198 = &l_1823.f5;
                    int *l_3199 = &l_1822.f0;
                    int *l_3200 = &g_1680.f3.f1;
                    int *l_3201 = &g_1680.f1.f0;
                    int *l_3202 = &g_207.f5;
                    int *l_3203 = &g_84.f3.f0;
                    int *l_3204 = &g_1680.f3.f1;
                    int *l_3205 = &l_2892.f1.f5;
                    int *l_3206 = (void*)0;
                    int *l_3207 = &g_84.f3.f5;
                    int *l_3208 = (void*)0;
                    int *l_3209 = &l_3160;
                    int *l_3210 = &g_84.f3.f1;
                    int *l_3211 = &g_552;
                    int *l_3212 = &l_2894.f1.f5;
                    int *l_3213 = &g_84.f3.f5;
                    int *l_3214 = &g_84.f1.f5;
                    int *l_3215 = &g_1680.f1.f1;
                    int *l_3216 = &l_3093;
                    int *l_3217 = &g_1680.f3.f1;
                    int *l_3218 = &l_2894.f3.f5;
                    int *l_3219 = &l_2892.f3.f0;
                    int *l_3220 = &g_234.f5;
                    int *l_3221 = &g_234.f0;
                    int *l_3222 = &l_2858.f1;
                    int *l_3223 = &l_1501.f3.f5;
                    int *l_3224 = &l_2894.f3.f0;
                    int *l_3225 = &l_2858.f1;
                    int *l_3226 = (void*)0;
                    int *l_3227 = &l_2451;
                    int *l_3228 = &l_2894.f3.f0;
                    int *l_3229 = (void*)0;
                    int *l_3230 = &l_2858.f0;
                    int *l_3231 = &l_2898.f1;
                    int *l_3232 = &l_1501.f1.f1;
                    int *l_3233 = (void*)0;
                    int *l_3234 = &g_40;
                    int *l_3235 = &g_1680.f3.f0;
                    int *l_3236 = &l_2858.f5;
                    int *l_3237 = &l_2450;
                    int *l_3238 = &l_2894.f3.f1;
                    int *l_3239 = (void*)0;
                    int *l_3240 = &g_84.f3.f5;
                    int *l_3241 = &g_84.f1.f1;
                    int *l_3242 = &l_2450;
                    int *l_3243 = &l_1822.f1;
                    int *l_3244 = &l_2892.f1.f0;
                    int *l_3245 = &l_2894.f1.f5;
                    int *l_3246 = &g_84.f3.f5;
                    int *l_3247 = (void*)0;
                    int *l_3248 = &l_2898.f1;
                    int *l_3249 = (void*)0;
                    int *l_3250 = &g_552;
                    int *l_3251 = &l_3093;
                    int *l_3252 = &l_2858.f5;
                    int *l_3253 = &l_2239;
                    int *l_3254 = &l_2894.f3.f1;
                    int *l_3255 = &g_552;
                    int *l_3256 = &g_1680.f1.f1;
                    int *l_3257 = &g_552;
                    int *l_3258 = &g_1680.f1.f1;
                    int *l_3259 = &g_207.f1;
                    int *l_3260 = &l_1501.f3.f5;
                    int *l_3261 = &g_84.f1.f1;
                    int *l_3262 = (void*)0;
                    int *l_3263 = (void*)0;
                    int *l_3264 = &l_1822.f0;
                    int *l_3265 = &l_3164;
                    int *l_3266 = &g_1680.f3.f5;
                    int *l_3267 = (void*)0;
                    int *l_3268 = &l_1501.f3.f1;
                    int *l_3269 = (void*)0;
                    int *l_3270 = &l_1822.f0;
                    int *l_3271 = &l_1501.f3.f0;
                    int *l_3272 = &g_40;
                    int *l_3273 = &g_84.f3.f5;
                    int *l_3274 = &g_84.f3.f5;
                    int *l_3275 = &l_2892.f3.f5;
                    int *l_3276 = &l_1501.f1.f0;
                    int *l_3277 = (void*)0;
                    int *l_3278 = &g_84.f3.f0;
                    int *l_3279 = &l_2858.f0;
                    int *l_3280 = &l_2450;
                    int *l_3281 = &l_2451;
                    int *l_3282 = &l_2858.f0;
                    int *l_3284 = &g_234.f0;
                    int l_3285 = 0L;
                    int *l_3286 = &g_1680.f1.f0;
                    int *l_3287 = &g_552;
                    int *l_3288 = &g_84.f3.f5;
                    int *l_3289 = &l_3283;
                    int *l_3290 = &l_2858.f0;
                    int *l_3291 = &l_2894.f3.f5;
                    int *l_3292 = &l_2892.f1.f1;
                    int *l_3293 = &g_1680.f1.f5;
                    int *l_3294 = &l_1823.f5;
                    int *l_3295 = &g_207.f1;
                    int *l_3296 = &l_3164;
                    int *l_3297 = &l_3285;
                    int *l_3299 = (void*)0;
                    int *l_3300 = (void*)0;
                    int *l_3301 = (void*)0;
                    int *l_3303 = &l_1822.f1;
                    int *l_3304 = (void*)0;
                    int *l_3306 = &l_1822.f5;
                    int *l_3307 = &g_84.f3.f0;
                    int *l_3308 = (void*)0;
                    int *l_3309 = &l_3160;
                    int *l_3310 = (void*)0;
                    int *l_3311 = &g_1680.f3.f0;
                    int *l_3312 = &l_3124;
                    int *l_3313 = (void*)0;
                    int *l_3314 = &l_2443;
                    int *l_3315 = &l_2898.f0;
                    int *l_3316 = &l_2450;
                    int *l_3317 = &l_2892.f3.f0;
                    int *l_3318 = &l_2894.f3.f5;
                    int *l_3319 = (void*)0;
                    int *l_3320 = (void*)0;
                    int *l_3321 = &g_1680.f1.f5;
                    int *l_3322 = &l_3285;
                    int *l_3323 = &l_2892.f1.f5;
                    int *l_3324 = &l_2451;
                    int *l_3325 = &g_207.f1;
                    int *l_3326 = &l_2898.f5;
                    int *l_3327 = (void*)0;
                    int l_3328 = 0x8B77E369L;
                    int *l_3330 = (void*)0;
                    int *l_3331 = &g_1680.f1.f0;
                    int *l_3332 = &l_2892.f3.f0;
                    int *l_3333 = &l_2239;
                    int *l_3334 = &l_1822.f5;
                    int *l_3335 = &g_84.f3.f5;
                    int *l_3336 = &l_1823.f1;
                    int *l_3337 = &l_1822.f1;
                    int *l_3338 = &l_2892.f1.f0;
                    int *l_3340 = &l_3298;
                    int *l_3341 = (void*)0;
                    int *l_3342 = (void*)0;
                    int *l_3344 = &l_1822.f1;
                    int *l_3345 = &l_3329;
                    int *l_3346 = (void*)0;
                    int *l_3347 = (void*)0;
                    int *l_3348 = &l_2898.f0;
                    int *l_3349 = &l_3093;
                    int *l_3350 = &g_84.f3.f5;
                    int *l_3351 = &l_3298;
                    int *l_3352 = (void*)0;
                    int *l_3353 = (void*)0;
                    int *l_3354 = (void*)0;
                    int *l_3355 = &l_2443;
                    int *l_3356 = &l_3283;
                    int *l_3357 = &g_1680.f1.f5;
                    int *l_3358 = &l_1822.f0;
                    int *l_3359 = &l_3343;
                    int *l_3360 = &g_234.f5;
                    int *l_3361 = &l_2894.f1.f5;
                    int *l_3362 = &l_2450;
                    int *l_3363 = (void*)0;
                    int *l_3365 = &g_1680.f3.f5;
                    int *l_3366 = &l_2892.f3.f1;
                    int *l_3367 = (void*)0;
                    int *l_3368 = &l_2898.f1;
                    int *l_3369 = &l_2858.f0;
                    int *l_3370 = &l_1823.f0;
                    int *l_3371 = (void*)0;
                    int l_3372 = (-4L);
                    int *l_3373 = &l_3302;
                    int *l_3374 = &l_1501.f3.f1;
                    int *l_3375 = &l_3339;
                    int *l_3377 = &l_1822.f5;
                    (*l_1675) = g_66;
                    (*l_2859) = (p_21 = p_21);
                    --g_3378;
                    l_3240 = l_3381;
                }
                (*l_3381) = (((*g_1282) = (*l_3381)) > (((func_46(func_75(l_3382, (*g_1655), func_75(((*g_60) = (*g_60)), l_1502, l_2894, l_2892, l_3383), l_2894, g_66), (*l_1678), &l_3302, l_2894.f1, &g_1133) , g_84.f1.f2) & 1UL) ^ 0x0239L));
                for (l_2892.f2 = 18; (l_2892.f2 <= 15); l_2892.f2--)
                {
                    unsigned l_3386 = 0xBD3FA186L;
                    int *l_3387 = &l_1501.f1.f5;
                    int *l_3388 = &g_1680.f1.f5;
                    int *l_3389 = &l_2898.f5;
                    int *l_3390 = &l_3283;
                    int *l_3391 = &g_207.f5;
                    int *l_3392 = &l_2858.f5;
                    int l_3393 = 0x26D45C87L;
                    int *l_3394 = (void*)0;
                    int *l_3395 = &l_3298;
                    int *l_3396 = &l_3343;
                    int *l_3397 = &l_2443;
                    int l_3398 = 9L;
                    int *l_3399 = (void*)0;
                    int *l_3400 = (void*)0;
                    int *l_3401 = &g_1680.f3.f5;
                    int *l_3402 = &l_3398;
                    int *l_3403 = (void*)0;
                    int *l_3404 = (void*)0;
                    int *l_3405 = &g_40;
                    int *l_3406 = &l_3398;
                    int *l_3407 = (void*)0;
                    int *l_3408 = &l_2858.f0;
                    int *l_3409 = &l_1501.f3.f1;
                    int *l_3410 = (void*)0;
                    int *l_3411 = &g_1680.f1.f1;
                    int *l_3412 = &g_234.f0;
                    int *l_3413 = &g_84.f1.f5;
                    int *l_3414 = (void*)0;
                    int *l_3415 = &l_2894.f3.f1;
                    int *l_3416 = &l_3376;
                    int *l_3417 = (void*)0;
                    int *l_3418 = &g_234.f5;
                    int *l_3420 = &g_84.f3.f1;
                    int *l_3421 = &l_3302;
                    int *l_3422 = (void*)0;
                    int *l_3423 = &g_1680.f3.f1;
                    int *l_3424 = &l_2894.f1.f0;
                    int *l_3425 = &l_2894.f1.f1;
                    int *l_3426 = &l_3164;
                    int *l_3427 = &l_2892.f3.f5;
                    int *l_3428 = (void*)0;
                    int *l_3429 = &l_1823.f0;
                    int *l_3430 = (void*)0;
                    int *l_3431 = (void*)0;
                    int *l_3432 = &l_1822.f0;
                    int *l_3433 = &l_2450;
                    int *l_3434 = &g_207.f5;
                    int *l_3435 = &l_1822.f1;
                    int *l_3436 = &l_1501.f1.f0;
                    int *l_3437 = &l_1822.f0;
                    int *l_3438 = &l_2898.f1;
                    int *l_3439 = &l_2239;
                    int *l_3440 = &l_1822.f1;
                    int *l_3441 = (void*)0;
                    int *l_3442 = &l_2892.f1.f1;
                    int *l_3443 = (void*)0;
                    int *l_3444 = &l_1501.f1.f5;
                    int *l_3445 = &g_1680.f3.f5;
                    int *l_3446 = &g_1680.f3.f1;
                    int *l_3447 = &l_1823.f1;
                    int *l_3448 = &g_84.f1.f0;
                    int *l_3449 = &g_1680.f1.f1;
                    int *l_3450 = &l_1501.f3.f5;
                    int *l_3451 = &l_2892.f3.f1;
                    int *l_3452 = &l_2894.f3.f0;
                    int *l_3453 = &l_1822.f0;
                    int *l_3454 = &l_3364;
                    int *l_3455 = &l_3302;
                    int *l_3456 = &l_1823.f5;
                    int *l_3457 = (void*)0;
                    int *l_3458 = (void*)0;
                    int *l_3459 = &l_2898.f1;
                    int *l_3460 = &l_2898.f0;
                    int *l_3461 = (void*)0;
                    int *l_3462 = (void*)0;
                    int *l_3463 = &l_2443;
                    int *l_3464 = &l_3305;
                    int *l_3465 = &l_1501.f1.f5;
                    int *l_3466 = &l_2894.f1.f0;
                    int *l_3467 = &l_2858.f0;
                    int *l_3468 = &l_2892.f1.f0;
                    int *l_3469 = (void*)0;
                    int *l_3470 = (void*)0;
                    int *l_3471 = &l_2858.f1;
                    int *l_3472 = &g_234.f5;
                    int *l_3473 = &l_2443;
                    int *l_3474 = (void*)0;
                    int *l_3475 = &l_1823.f1;
                    int *l_3476 = &g_207.f0;
                    int *l_3477 = (void*)0;
                    int *l_3478 = &l_1501.f3.f1;
                    int *l_3479 = &g_234.f0;
                    int *l_3480 = (void*)0;
                    int *l_3481 = (void*)0;
                    int *l_3482 = &l_2451;
                    int *l_3483 = &l_3302;
                    int *l_3484 = &l_3376;
                    int *l_3485 = &l_1501.f1.f1;
                    int l_3486 = 0xA88BBB80L;
                    int *l_3487 = &l_3398;
                    int l_3488 = 1L;
                    int *l_3489 = &g_234.f1;
                    int *l_3490 = &g_1680.f1.f0;
                    int *l_3491 = &g_557;
                    int *l_3492 = &l_1501.f3.f5;
                    int *l_3493 = &l_2894.f1.f1;
                    int *l_3494 = &g_234.f0;
                    int *l_3495 = &l_1823.f5;
                    int l_3496 = 0L;
                    int *l_3497 = (void*)0;
                    int *l_3498 = &l_2892.f1.f5;
                    int *l_3499 = (void*)0;
                    int l_3500 = 0x9EB96630L;
                    int *l_3501 = &l_3364;
                    int *l_3502 = &l_3164;
                    int *l_3503 = &l_2894.f3.f1;
                    int *l_3504 = &l_3500;
                    int *l_3505 = (void*)0;
                    int *l_3506 = (void*)0;
                    int *l_3507 = &l_3164;
                    int *l_3508 = &g_1680.f3.f1;
                    int *l_3509 = &l_1501.f1.f0;
                    int *l_3510 = &l_2898.f0;
                    int *l_3511 = &l_3486;
                    int *l_3512 = &g_1680.f1.f5;
                    int *l_3513 = &g_1680.f1.f5;
                    int *l_3514 = &l_2892.f3.f1;
                    int *l_3515 = &l_2894.f3.f0;
                    int *l_3516 = &l_2892.f1.f1;
                    int *l_3517 = (void*)0;
                    int *l_3518 = &l_2892.f1.f0;
                    int *l_3519 = (void*)0;
                    int *l_3520 = &l_3364;
                    int *l_3521 = &g_1680.f1.f0;
                    int *l_3522 = (void*)0;
                    int *l_3523 = &l_1822.f5;
                    int *l_3524 = (void*)0;
                    int *l_3526 = &l_2898.f0;
                    int *l_3528 = &l_2451;
                    int *l_3529 = &l_3500;
                    int *l_3530 = &l_2898.f5;
                    int *l_3531 = &l_2892.f3.f5;
                    int *l_3532 = &g_207.f1;
                    int *l_3533 = &l_2898.f0;
                    int *l_3534 = &g_84.f1.f0;
                    int *l_3535 = (void*)0;
                    int *l_3536 = &g_552;
                    int *l_3537 = &l_3496;
                    int *l_3538 = &l_3496;
                    int *l_3539 = &l_2239;
                    int *l_3540 = &l_2894.f3.f1;
                    int *l_3541 = &l_2858.f1;
                    int *l_3542 = &l_2898.f5;
                    int *l_3543 = &l_3329;
                    int *l_3544 = &g_234.f0;
                    int *l_3545 = &l_3393;
                    int *l_3546 = &g_84.f1.f5;
                    int *l_3547 = (void*)0;
                    int *l_3548 = &l_3339;
                    int *l_3549 = (void*)0;
                    int *l_3550 = &g_84.f1.f1;
                    int *l_3551 = &g_207.f5;
                    int *l_3552 = &g_234.f1;
                    int l_3553 = 0x46EF2D09L;
                    int *l_3554 = &l_3298;
                    int *l_3555 = &g_1680.f1.f5;
                    int *l_3556 = &l_2894.f1.f1;
                    int *l_3557 = (void*)0;
                    int *l_3558 = &g_1680.f3.f0;
                    int *l_3559 = &l_2894.f3.f1;
                    int *l_3560 = &l_3553;
                    int *l_3562 = &l_1823.f0;
                    int *l_3563 = &l_2892.f1.f1;
                    int *l_3564 = &l_1823.f5;
                    int *l_3565 = (void*)0;
                    int *l_3566 = &l_2892.f3.f5;
                    int *l_3567 = (void*)0;
                    (*l_1678) |= (l_3386 | (*l_2897));
                    ++l_3568;
                }
                (*l_3572) = ((*l_3571) = l_2892);
            }
            (*g_239) = func_46(l_3573, ((*g_1282) &= (*l_2897)), func_22((*g_2506)), l_3573.f3, &g_1133);
        }
        (*p_21) &= (safe_rshift_func_int8_t_s_s(((*l_3577) = 0xD8L), 4));
    }
    for (g_1680.f4 = 0; (g_1680.f4 <= 45); g_1680.f4 = safe_add_func_int64_t_s_s(g_1680.f4, 7))
    {
        unsigned l_3580 = 4294967295UL;
        int l_3603 = 0L;
        struct S1 l_3613 = {0x1623D434L,{0x0231B6CCL,-1L,0x029C1F67L,0xF2F7L,0x5F5EL,0L},-1L,{0x9CB0D9CBL,0x5EEF64C3L,0x498AFA85L,0xCEDFL,1L,0x41C2C4E5L},0xA4DFL};
        struct S1 *l_3639 = &g_84;
        --l_3580;
        for (l_2221 = 0; (l_2221 != 14); l_2221 = safe_add_func_int64_t_s_s(l_2221, 4))
        {
            short l_3587 = 0L;
            int *l_3594 = &g_40;
            struct S1 l_3620 = {0x6FF61307L,{0L,-7L,0L,0x53FCL,9L,1L},0xD2BFA87C1A12B866LL,{-1L,5L,7L,-10L,1L,5L},0x6D3BL};
            struct S2 l_3621 = {0x5D0D784FBA825919LL,0x49L};
            int ***l_3626 = &g_61;
            if (((*l_3594) &= (((18446744073709551606UL > (*l_1678)) && (l_3587 == (((+l_3580) <= ((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_84.f4, 0xBAL)), l_3580)), g_1270)) != (*g_1282))) ^ (*l_1678)))) >= l_3587)))
            {
                unsigned l_3604 = 0xD93F1987L;
                struct S2 l_3605 = {-1L,0x14L};
                int **l_3610 = &l_1664;
                if ((0x9F5C5F148AA1DDC4LL != (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_1680.f3.f2, 12)), (*l_3594)))))
                {
                    (*l_1675) = l_3606;
                    (*g_61) = (*g_61);
                    for (g_84.f3.f1 = 23; (g_84.f3.f1 > (-10)); g_84.f3.f1 = safe_sub_func_int64_t_s_s(g_84.f3.f1, 1))
                    {
                        return (*g_1655);
                    }
                }
                else
                {
                    (*l_1678) = l_3603;
                    (*l_1678) = g_3609;
                    if ((*l_1678))
                        continue;
                }
                (*l_3610) = (l_3594 = ((**g_60) = func_22((*g_2506))));
                if (l_3605.f0)
                    break;
            }
            else
            {
                short l_3618 = 3L;
                unsigned **l_3619 = &l_1502;
                struct S1 l_3622 = {18446744073709551615UL,{-9L,0x6A51B76BL,0L,-3L,-9L,0L},0x4CCD8563215EAD78LL,{0x8F507198L,0xA3A3DA43L,0x3DD5C2DCL,0L,0x793CL,-7L},0x011FL};
                struct S2 l_3623 = {2L,1L};
                int ****l_3624 = &l_2236;
                char *l_3625 = &l_3623.f1;
                int *l_3638 = &g_1680.f1.f0;
                if ((safe_rshift_func_uint8_t_u_s((g_1834 >= g_84.f3.f3), 5)))
                {
                    unsigned char l_3627 = 0x28L;
                    l_3627 |= (*l_3594);
                }
                else
                {
                    unsigned char *l_3633 = &g_246;
                    int l_3637 = 0x855E8B84L;
                    (*l_1675) = ((*g_1282) , l_3628);
                    if ((*l_3594))
                        continue;
                    (*l_1678) = ((func_46(func_75(&p_21, ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((((0xF4A9L || (*l_3594)) , l_3633) == (void*)0), ((g_246 > func_46(func_75((*l_2236), ((l_3620.f1 , (safe_sub_func_int16_t_s_s(func_46(func_75((*l_2236), (*g_1655), l_3620, g_1680, g_66), (*g_1282), &l_3603, l_3620.f3, (*l_3624)), (-1L)))) , (void*)0), g_3636, l_3620, l_3623), l_3637, p_21, l_3620.f1, &g_1133)) & l_3637))), l_3637)) , (void*)0), l_3622, g_1680, g_66), l_3637, l_3638, l_3622.f3, &g_61) , g_893) , (-1L));
                }
                (*l_1678) ^= (*l_3638);
            }
        }
        (*l_1678) &= func_46(((*l_3639) = g_3636), (*g_1282), p_21, g_3636.f3, &g_1133);
        (*g_61) = func_22((*l_1678));
    }
    return l_1678;
}







static int * func_22(unsigned char p_23)
{
    unsigned short l_36 = 0x9D68L;
    struct S1 l_52 = {1UL,{0L,0x140931BCL,-5L,0x8520L,-4L,-4L},0x8A1BD053A6575E0ALL,{-2L,0x4D56B862L,0x336FDE00L,-6L,0x8F57L,0x434BB1B2L},0x1506L};
    unsigned *l_56 = &g_57;
    int *l_576 = &g_234.f1;
    int **l_575 = &l_576;
    struct S1 l_1298 = {0x04AF8F2BL,{0xADA3F384L,-1L,1L,0xEC35L,0x66C9L,1L},-9L,{-4L,1L,6L,0x1C48L,0L,3L},0x8461L};
    struct S0 *l_1301 = (void*)0;
    struct S0 **l_1300 = &l_1301;
    struct S2 *l_1317 = &g_66;
    struct S2 l_1327 = {0x54A54A22433141A4LL,0x60L};
    int ***l_1484 = (void*)0;
    int l_1485 = (-7L);
    for (g_10 = 0; (g_10 > 21); g_10 = safe_add_func_uint16_t_u_u(g_10, 6))
    {
        int **l_27 = (void*)0;
        int ***l_28 = (void*)0;
        int ***l_29 = &l_27;
        char *l_37 = &g_38;
        int *l_39 = &g_40;
        int *l_58 = &l_52.f3.f1;
        struct S0 l_59 = {0xD465C301L,1L,0xC2A7322EL,0x46ECL,-1L,0L};
        struct S1 l_1299 = {18446744073709551607UL,{0x21A57F9AL,0x9FBEC304L,0L,8L,0x8956L,0x03E6E1A3L},0x6143BD9DA3AEF948LL,{1L,0x9167835BL,-1L,-10L,0L,-5L},0x7D2FL};
        int *l_1305 = (void*)0;
        int *l_1332 = &l_1299.f3.f1;
        long long l_1351 = 3L;
        int l_1471 = 0L;
        struct S1 l_1481 = {0x9A1AB13CL,{0x8B44399AL,0x1EF329DFL,-1L,-5L,0xD833L,1L},4L,{0x8EBA5894L,0xC3CB78EFL,0x7028AC9FL,0x785DL,0xE9BDL,0x2F4E0978L},7UL};
        (*l_29) = (g_10 , l_27);
    }
    (*l_575) = (**g_60);
    for (g_84.f1.f4 = 0; (g_84.f1.f4 >= (-9)); g_84.f1.f4--)
    {
        int *l_1495 = (void*)0;
        return l_1495;
    }
    return (*g_61);
}







static char func_32(char p_33, int *** p_34, int ** p_35)
{
    short l_587 = 1L;
    int ***l_591 = &g_61;
    struct S0 l_595 = {0x1D2EC53AL,-1L,0xC815E9DAL,0x21F8L,0xCADEL,0x8C4C7AEAL};
    struct S1 l_604 = {18446744073709551615UL,{0xAF25807FL,0x871EF909L,1L,0xEA74L,0L,8L},-5L,{0L,-1L,0L,1L,-4L,-6L},0x5C02L};
    struct S1 l_620 = {0UL,{0x4400A923L,0x82ECB3F2L,1L,0L,0L,-4L},1L,{0x9B7F6DFAL,0x8B04AFA7L,0x6ECC7D16L,0xA5B1L,5L,0x5FE35067L},65535UL};
    unsigned char l_630 = 0xBDL;
    long long l_659 = (-4L);
    char l_938 = 0xB8L;
    struct S2 l_971 = {-8L,0L};
    struct S0 *l_1002 = &l_604.f1;
    struct S2 l_1127 = {0x079A17C1317FF5CFLL,-4L};
    long long *l_1283 = &g_554;
    struct S2 *l_1286 = &l_971;
    if ((***p_34))
    {
        int **l_581 = (void*)0;
        unsigned *l_583 = &g_572;
        struct S1 l_585 = {0x4F82BEE0L,{-10L,-1L,0xF48FCCC5L,-10L,0xC8C8L,1L},0x6A2B4BA6EBA7E83DLL,{0x5847E237L,0xDFDD3D1EL,-2L,0xE29CL,0x6E52L,0x64A254CFL},0xB1FDL};
        struct S0 *l_622 = &l_604.f1;
        struct S2 l_623 = {0L,0x42L};
        struct S1 *l_624 = &l_604;
        struct S1 l_625 = {0xD6A7E884L,{0x2D46EC26L,9L,-1L,0x4E42L,5L,0L},0x0865BAA1E77EB65DLL,{0x25F126BDL,0L,-10L,1L,-5L,0L},0xA6C7L};
        short l_631 = (-1L);
        char *l_632 = &g_38;
        int *l_633 = &l_625.f3.f1;
        short *l_634 = &l_620.f1.f3;
        int *l_635 = &g_557;
        int ***l_645 = (void*)0;
        unsigned char l_951 = 0xCEL;
        for (g_572 = 0; (g_572 != 1); ++g_572)
        {
            unsigned *l_579 = &g_572;
            struct S2 l_580 = {0xEE28E7B18CDE90CALL,0x0BL};
            int ***l_582 = &l_581;
            struct S1 l_584 = {0xA7DFFA2BL,{0x18FB7409L,-1L,0x23776A21L,0L,0x158BL,0x53B4D7E9L},0x89782121E1F049ECLL,{0x370320F7L,0x85F638A5L,0L,0xF7C0L,4L,1L},7UL};
            struct S1 *l_586 = &l_585;
            long long *l_590 = &g_507;
            unsigned *l_592 = &g_57;
            int ***l_621 = &l_581;
            (*l_586) = func_75((*g_60), l_579, func_75((l_580 , ((*l_582) = l_581)), l_583, g_84, (l_584 = l_584), g_66), l_585, g_66);
        }
        (*l_635) ^= (((*l_622) = l_585.f3) , (func_46((l_623 , ((*l_624) = l_585)), (0xC7L >= (((*l_634) = (func_46(l_625, func_46(l_620, g_84.f3.f2, ((((***g_60) = (-6L)) == (safe_sub_func_int8_t_s_s(((*l_632) = (safe_lshift_func_uint8_t_u_s((l_630 && l_631), p_33))), 0L))) , (**p_34)), g_234, &g_61), l_633, l_595, &g_61) & (*l_633))) , 0x1AL)), (*g_61), g_84.f1, &g_61) , (***l_591)));
        if ((*l_633))
        {
            struct S0 l_644 = {0x41CF8291L,0xE801B891L,6L,0xC62FL,-1L,-3L};
            int l_812 = 0x4A840EFFL;
            (***p_34) = ((((safe_add_func_int32_t_s_s((-5L), ((safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s(((*l_632) |= g_84.f3.f2), (safe_lshift_func_uint8_t_u_s(((func_46(l_620, g_84.f1.f3, (*g_61), l_644, l_645) >= (safe_sub_func_uint64_t_u_u(func_46(l_604, g_40, (**g_60), g_84.f3, &l_581), g_207.f3))) , 0x3EL), 5)))), g_84.f3.f2)) & 18446744073709551615UL))) < p_33) != l_644.f3) | g_84.f1.f2);
            for (g_84.f4 = (-15); (g_84.f4 != 50); g_84.f4 = safe_add_func_int64_t_s_s(g_84.f4, 4))
            {
                int l_654 = (-1L);
                struct S0 *l_655 = &l_625.f3;
                int l_658 = 5L;
                int l_732 = 0x24CF9DDBL;
                int l_814 = 1L;
                int l_882 = 4L;
            }
            if (l_644.f4)
            {
                struct S0 **l_898 = &l_622;
                int l_910 = (-5L);
                (*g_62) |= l_644.f0;
                (*l_898) = &g_207;
                if ((**p_35))
                {
                    int l_907 = 0xC7628B59L;
                    unsigned long long *l_908 = &g_909;
                    (*g_62) = (p_33 | (safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(l_644.f5, (p_33 & (((safe_lshift_func_int16_t_s_s(((*l_634) &= g_507), (l_907 <= (((((***l_591) >= ((*l_908) ^= (***l_591))) >= ((((*l_583) ^= (***l_591)) , (l_910 , 0x4B2E925395B7BF6CLL)) && (-1L))) || (*g_62)) , 5UL)))) , (void*)0) != l_622)))), 2UL)) >= (***l_591)), 4UL)));
                }
                else
                {
                    return l_910;
                }
            }
            else
            {
                int *l_911 = &g_84.f3.f5;
                int *l_912 = (void*)0;
                int *l_913 = &l_625.f3.f1;
                int *l_914 = &l_604.f3.f1;
                int *l_915 = &l_620.f1.f1;
                int *l_916 = &g_84.f3.f5;
                int *l_917 = &l_604.f1.f1;
                int *l_918 = (void*)0;
                int *l_919 = &g_234.f5;
                int *l_920 = &l_625.f1.f5;
                int *l_921 = &g_557;
                int *l_922 = &l_585.f1.f5;
                int *l_923 = &l_604.f1.f0;
                int *l_924 = (void*)0;
                int *l_925 = &g_207.f5;
                int *l_926 = &l_620.f3.f1;
                int *l_927 = &l_625.f1.f1;
                int *l_928 = &l_644.f1;
                int *l_929 = &l_620.f1.f0;
                int *l_930 = &l_812;
                int *l_931 = (void*)0;
                int *l_932 = (void*)0;
                int *l_933 = &g_40;
                int *l_934 = &l_604.f3.f0;
                int *l_935 = &l_585.f3.f5;
                int *l_936 = &l_585.f3.f0;
                int *l_937 = (void*)0;
                int l_939 = 0x988D5C14L;
                int *l_940 = &l_620.f1.f1;
                int *l_941 = &l_585.f1.f5;
                int *l_942 = &l_625.f3.f5;
                int *l_943 = &l_625.f1.f0;
                int *l_944 = &g_557;
                int *l_945 = &l_604.f3.f1;
                int *l_946 = &g_84.f3.f1;
                int *l_947 = &l_812;
                int *l_948 = &l_620.f3.f0;
                int *l_949 = &l_585.f3.f0;
                int *l_950 = &l_585.f3.f1;
                --l_951;
            }
            (*l_633) = (((***l_591) , (((((0xCCL != ((-2L) <= p_33)) == p_33) > (safe_lshift_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(0x81D78136F2E867E5LL, (safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((p_33 ^ (g_234.f0 > (0x194AB73FL && (*l_635)))), 2L)) > g_521), p_33)))) | g_207.f2), 6))) < 0UL) || 1L)) || p_33);
        }
        else
        {
            unsigned long long *l_968 = &g_909;
            (*l_633) = ((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((-1L), (((safe_sub_func_int32_t_s_s((((((*l_634) = (((*l_968) = g_66.f0) >= ((l_968 != &l_659) & (((*l_632) = (safe_lshift_func_uint8_t_u_s((~0UL), 5))) ^ g_234.f3)))) >= (0xD0F755DAD2A46112LL <= (0x39FCL != ((***l_591) = func_46(func_75((*g_60), &g_572, g_84, g_84, l_971), g_553, (**g_60), (*l_622), &g_61))))) , 4294967292UL) ^ 0xC9BEA415L), (**p_35))) != g_507) > g_246))), 11)) , 0x6DE86D87L);
        }
        (**g_60) = (void*)0;
    }
    else
    {
        struct S0 *l_972 = &l_620.f1;
        short *l_973 = &l_604.f3.f4;
        int l_986 = 2L;
        struct S1 l_1019 = {18446744073709551615UL,{-1L,-10L,0x7DED4C4CL,0L,0x2745L,0x7120AC12L},0x394351BA1A5A9C67LL,{0xCD24657EL,0x765CDD98L,1L,0L,0x0BA7L,0L},0x463FL};
        int *l_1024 = &g_84.f1.f0;
        struct S2 l_1116 = {0xEEBEA8E5EC2A538FLL,-10L};
        int l_1132 = 0x686267A1L;
        long long *l_1284 = &g_192;
        if (((((((&l_595 == l_972) && ((((***l_591) = (p_33 == (((*l_973) = g_66.f1) || (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(p_33, 4)), (g_84.f1.f5 < (safe_sub_func_int16_t_s_s((((void*)0 == &l_595) | ((void*)0 == &g_572)), g_909)))))))) && 0L) == 1L)) <= 0x42L) >= 4294967295UL) < g_909) , 0L))
        {
            struct S1 l_982 = {6UL,{9L,1L,0x6AE6EA18L,-1L,0x1CBFL,0xBBED8AEFL},0xACCA5F4EB896647DLL,{-1L,0x9862A53AL,-8L,0x430EL,0x4C66L,-5L},1UL};
            char l_983 = 0L;
            unsigned short *l_987 = &l_620.f4;
            long long l_997 = 0xCE295FA680D8A17CLL;
            int ***l_998 = &g_61;
            unsigned short l_1011 = 0x0925L;
            struct S2 l_1121 = {-10L,-1L};
            if (((-10L) > ((safe_rshift_func_uint16_t_u_s((((*l_987) = (func_46(l_982, (0x90684ACDL | l_983), (*p_35), l_982.f3, &p_35) >= (safe_mod_func_int32_t_s_s(l_986, (**p_35))))) > g_84.f1.f2), 7)) > p_33)))
            {
                struct S2 l_996 = {0x53189A27764EEB62LL,0x3AL};
                int l_999 = 6L;
                unsigned *l_1018 = &g_57;
                unsigned long long *l_1107 = &g_909;
                unsigned long long *l_1108 = &g_1109;
                short **l_1110 = &l_973;
                long long *l_1111 = (void*)0;
                long long *l_1112 = &g_521;
                unsigned long long *l_1114 = &g_1115;
                if ((**p_35))
                {
                    int **l_993 = &g_239;
                    l_999 &= (((***l_591) <= ((*l_987) = (((((func_46(g_84, l_982.f3.f2, (*p_35), ((*l_972) = (((safe_sub_func_int64_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint64_t_u((func_46(g_84, g_521, ((*l_993) = ((***l_591) , (**p_34))), ((((safe_add_func_uint64_t_u_u(0xD2529E37AB1A51E9LL, g_10)) == l_986) , l_996) , (*l_972)), &g_61) , p_33))), 9)) != (***l_591)) < l_997), p_33)) , 0L) , g_84.f1)), l_998) == g_84.f4) ^ 0x4DC2BA232C95722CLL) <= 65535UL) , 65526UL) >= p_33))) | g_84.f1.f5);
                    (*l_993) = (g_207 , &l_999);
                }
                else
                {
                    if (l_999)
                    {
                        struct S0 *l_1003 = &l_604.f1;
                        char *l_1006 = &g_523;
                        struct S1 l_1020 = {0UL,{0x3BBBC4D5L,0x293EC146L,0L,0x9514L,0x1BF0L,1L},-1L,{4L,0xBD85BC5DL,6L,0xC2B1L,0xCDF4L,0xCECAC4A6L},65529UL};
                        struct S2 l_1021 = {-1L,0x0AL};
                        int ***l_1022 = &g_61;
                        unsigned long long *l_1023 = &g_909;
                        (**g_61) = (~(func_46(g_84, (safe_mod_func_int32_t_s_s((((*l_973) &= (l_1002 != l_1003)) ^ p_33), p_33)), (**p_34), g_207, &g_61) > p_33));
                        (***l_591) ^= (((((safe_lshift_func_int8_t_s_u(((*l_1006) = (7UL == g_84.f3.f3)), 0)) | (safe_rshift_func_int16_t_s_s(g_234.f0, 15))) != p_33) | (safe_mod_func_uint32_t_u_u((0xC864L != (~(l_999 , 1L))), (~l_1011)))) > (safe_lshift_func_int16_t_s_s(g_246, 8)));
                        l_1024 = ((**l_998) = ((((*l_1023) = (1UL > (((((l_986 == (***p_34)) == g_84.f2) != l_999) >= (((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((p_33 | func_46(func_75((*p_34), l_1018, l_1019, l_1020, l_1021), p_33, (*g_61), l_982.f1, l_1022)), 7)) || l_996.f1), 0xC3L)) != l_1019.f1.f3) < 18446744073709551607UL)) != p_33))) < (***l_998)) , (**g_60)));
                    }
                    else
                    {
                        return l_999;
                    }
                }
                (***p_34) &= (-1L);
                for (g_234.f3 = 0; (g_234.f3 != (-29)); g_234.f3--)
                {
                    int l_1036 = 1L;
                    int l_1037 = 0xD5A7DE6DL;
                    struct S2 *l_1104 = (void*)0;
                    struct S2 **l_1103 = &l_1104;
                    (*p_35) = ((*g_61) = (**l_998));
                    for (g_507 = 20; (g_507 > 25); g_507++)
                    {
                        long long l_1031 = 0xE451FCD5B2A180ECLL;
                        int l_1038 = (-1L);
                        int *l_1039 = &l_982.f1.f5;
                        int *l_1040 = &l_595.f0;
                        int *l_1041 = &l_1036;
                        int *l_1042 = (void*)0;
                        int *l_1043 = (void*)0;
                        int *l_1044 = &l_982.f3.f0;
                        int *l_1045 = &l_620.f3.f1;
                        int *l_1046 = &l_595.f5;
                        int l_1047 = 0x67111919L;
                        int *l_1048 = &l_604.f3.f1;
                        int *l_1049 = &g_84.f3.f5;
                        int *l_1050 = &g_234.f5;
                        int *l_1051 = (void*)0;
                        int *l_1052 = (void*)0;
                        int *l_1053 = &l_620.f1.f1;
                        int l_1054 = 0xBC149DCCL;
                        int *l_1055 = (void*)0;
                        int *l_1056 = &l_620.f3.f5;
                        int *l_1057 = (void*)0;
                        int *l_1058 = &g_552;
                        int *l_1059 = &g_84.f1.f1;
                        int *l_1060 = (void*)0;
                        int *l_1061 = &l_595.f1;
                        int *l_1062 = &g_84.f3.f0;
                        int *l_1063 = &l_620.f1.f5;
                        int *l_1064 = &l_604.f3.f5;
                        int *l_1065 = (void*)0;
                        int *l_1066 = &l_1038;
                        int *l_1067 = &l_1019.f3.f1;
                        int *l_1068 = (void*)0;
                        int *l_1069 = &l_1054;
                        int *l_1070 = &l_604.f3.f5;
                        int *l_1071 = &l_1038;
                        int *l_1072 = &l_1037;
                        int *l_1073 = &g_552;
                        int *l_1074 = &l_604.f1.f5;
                        int *l_1075 = (void*)0;
                        int *l_1076 = &l_1019.f1.f0;
                        int *l_1077 = (void*)0;
                        int *l_1078 = (void*)0;
                        int *l_1079 = &l_620.f1.f1;
                        int *l_1080 = &l_982.f1.f0;
                        int *l_1081 = (void*)0;
                        int *l_1082 = &l_595.f1;
                        int *l_1083 = &l_999;
                        int *l_1084 = &g_207.f5;
                        int *l_1085 = &l_604.f1.f0;
                        int *l_1086 = (void*)0;
                        int *l_1087 = (void*)0;
                        int *l_1088 = (void*)0;
                        int *l_1089 = &l_604.f1.f5;
                        int *l_1090 = &l_604.f1.f1;
                        int *l_1091 = &l_620.f3.f1;
                        int *l_1092 = (void*)0;
                        int *l_1093 = &l_604.f1.f1;
                        int *l_1094 = (void*)0;
                        int *l_1095 = &l_604.f1.f0;
                        int *l_1096 = (void*)0;
                        int *l_1097 = &l_604.f1.f0;
                        (**g_60) = (*p_35);
                        (***l_998) &= (safe_lshift_func_int8_t_s_u(l_1031, 6));
                        l_1037 &= ((((safe_sub_func_int8_t_s_s((-1L), p_33)) , (l_996.f0 , g_557)) && ((*l_973) = g_552)) , (8L > ((**p_35) = ((safe_rshift_func_uint16_t_u_s(((l_1036 , (***p_34)) & (***l_591)), 7)) == 0xA80DL))));
                        --g_1098;
                    }
                    for (g_40 = (-12); (g_40 >= 23); g_40 = safe_add_func_uint32_t_u_u(g_40, 2))
                    {
                        return (*l_1024);
                    }
                    (*l_1103) = &g_66;
                }
                l_999 &= (safe_lshift_func_int16_t_s_s((((((*l_1114) &= (g_1113 &= (1L | (g_84.f1.f2 > (((*l_1108) |= ((*l_1107) = p_33)) == ((***l_998) != func_46(l_1019, (g_507 = ((*l_1112) = (((*l_1110) = &l_587) == &g_596))), ((*p_35) = &l_986), ((*l_1002) = g_207), l_998))))))) , &l_630) != &l_630) , (-3L)), g_66.f1));
            }
            else
            {
                struct S1 l_1126 = {18446744073709551611UL,{-1L,1L,0L,-9L,0x33D2L,0x4245C47DL},0x9B6D2312B999E289LL,{0xBA6B2C7EL,0x09260C5EL,0xBAF3955AL,2L,0x22CEL,0x2BDCAC6FL},1UL};
                unsigned long long *l_1128 = &g_909;
                char *l_1129 = (void*)0;
                char *l_1130 = &l_1127.f1;
                char *l_1131 = &l_971.f1;
                unsigned long long *l_1138 = &g_1115;
                int *l_1141 = &l_1019.f1.f1;
                int *l_1142 = &g_234.f5;
                int *l_1143 = &l_604.f1.f0;
                int *l_1144 = &l_1019.f3.f1;
                int *l_1145 = &g_234.f5;
                int *l_1146 = &g_40;
                int *l_1147 = &l_595.f0;
                int *l_1148 = &l_1126.f3.f0;
                int *l_1149 = (void*)0;
                int *l_1150 = &g_552;
                int *l_1151 = &g_234.f1;
                int *l_1152 = &l_604.f1.f1;
                int *l_1153 = &l_982.f3.f1;
                int *l_1154 = &g_234.f1;
                int *l_1155 = &g_207.f5;
                int *l_1156 = &l_604.f3.f0;
                int *l_1157 = &g_84.f1.f5;
                int *l_1158 = &l_620.f1.f1;
                int *l_1159 = &l_620.f3.f0;
                int *l_1160 = &l_982.f3.f1;
                int *l_1161 = &l_986;
                int *l_1162 = &g_84.f1.f5;
                int *l_1163 = &g_84.f3.f1;
                int *l_1164 = &g_84.f1.f0;
                int *l_1165 = &l_982.f3.f5;
                int *l_1166 = &l_1019.f3.f0;
                int *l_1167 = &g_207.f5;
                int *l_1168 = &l_1019.f1.f0;
                int *l_1169 = (void*)0;
                int *l_1170 = &g_84.f3.f5;
                int *l_1171 = &g_40;
                int *l_1172 = (void*)0;
                int *l_1173 = &g_84.f3.f1;
                int *l_1174 = &g_557;
                int *l_1175 = &g_552;
                int *l_1176 = &g_234.f0;
                int *l_1177 = &g_84.f3.f1;
                int *l_1178 = &l_595.f0;
                int *l_1179 = &l_604.f1.f5;
                int *l_1180 = &l_604.f3.f1;
                int *l_1181 = &l_1132;
                int *l_1182 = &l_986;
                int *l_1183 = &l_604.f1.f1;
                int *l_1184 = (void*)0;
                int *l_1185 = &l_595.f0;
                int *l_1186 = &l_595.f5;
                int *l_1187 = &g_207.f0;
                int *l_1188 = &g_84.f3.f5;
                int *l_1189 = (void*)0;
                int *l_1190 = &l_1126.f3.f1;
                int *l_1191 = &l_604.f3.f1;
                int *l_1192 = &l_1126.f1.f0;
                int *l_1193 = (void*)0;
                int *l_1194 = &l_1019.f3.f5;
                int *l_1195 = (void*)0;
                int *l_1196 = &l_620.f1.f0;
                int *l_1197 = &g_207.f0;
                int *l_1198 = (void*)0;
                int *l_1199 = &l_1132;
                int *l_1200 = &l_1019.f3.f1;
                int *l_1201 = &l_982.f1.f5;
                int *l_1202 = &l_1019.f1.f1;
                int *l_1203 = &l_1019.f3.f5;
                int *l_1204 = (void*)0;
                int *l_1205 = &l_986;
                int *l_1206 = &g_234.f0;
                int *l_1207 = &l_1019.f1.f5;
                int *l_1208 = &l_1126.f1.f1;
                int *l_1209 = (void*)0;
                int *l_1210 = &g_207.f0;
                int *l_1211 = (void*)0;
                int *l_1212 = (void*)0;
                int *l_1213 = &l_604.f3.f5;
                int *l_1214 = (void*)0;
                int *l_1215 = &l_620.f3.f5;
                int *l_1216 = &g_40;
                int *l_1217 = (void*)0;
                int *l_1218 = &l_1126.f1.f1;
                int *l_1219 = (void*)0;
                int *l_1220 = (void*)0;
                int *l_1221 = (void*)0;
                int *l_1222 = &l_982.f3.f5;
                int *l_1223 = (void*)0;
                int *l_1224 = (void*)0;
                int *l_1225 = (void*)0;
                int *l_1226 = &l_1019.f1.f5;
                int *l_1227 = &l_1126.f1.f1;
                int *l_1228 = (void*)0;
                int *l_1229 = &g_207.f5;
                int *l_1230 = &g_234.f5;
                int *l_1231 = &l_604.f3.f5;
                int *l_1232 = &l_1126.f3.f0;
                int *l_1233 = &g_234.f1;
                int *l_1234 = &l_1019.f1.f1;
                int *l_1235 = &l_1126.f3.f1;
                int *l_1236 = &g_84.f1.f5;
                int *l_1237 = &l_620.f3.f0;
                int *l_1238 = (void*)0;
                int *l_1239 = (void*)0;
                int *l_1240 = &l_620.f3.f0;
                int *l_1241 = &g_84.f3.f0;
                int *l_1242 = &g_207.f5;
                int *l_1243 = (void*)0;
                int *l_1244 = (void*)0;
                int *l_1245 = &l_604.f3.f5;
                int *l_1247 = (void*)0;
                int *l_1248 = &l_604.f3.f0;
                int *l_1249 = &l_604.f3.f0;
                int *l_1250 = &g_234.f0;
                int *l_1251 = &l_604.f3.f0;
                int *l_1252 = &l_604.f3.f0;
                int *l_1253 = &l_1019.f3.f0;
                int *l_1254 = &l_604.f1.f1;
                int *l_1255 = &g_84.f1.f0;
                int *l_1256 = (void*)0;
                int *l_1257 = &l_1019.f3.f1;
                int *l_1258 = &g_207.f1;
                int *l_1259 = &l_595.f5;
                int *l_1260 = &l_620.f1.f0;
                int *l_1261 = &l_595.f0;
                int *l_1262 = &g_84.f1.f1;
                int *l_1263 = (void*)0;
                int *l_1264 = &l_1019.f3.f5;
                int *l_1265 = &l_1126.f1.f0;
                int *l_1266 = &g_207.f1;
                int *l_1267 = &g_40;
                int *l_1268 = &l_595.f0;
                int *l_1269 = &l_1126.f3.f0;
                if (((l_1116 , g_234.f5) > (((safe_mod_func_int16_t_s_s((((0x90D5L || ((*l_987) &= (***l_998))) == (((((safe_rshift_func_uint8_t_u_s(g_1115, 7)) ^ (l_1121 , (((safe_add_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s(((*l_1131) ^= ((*l_1130) = ((p_33 = (p_33 | ((*l_1128) ^= func_46((func_75((*p_34), &g_597, l_604, l_1126, l_1127) , l_982), p_33, (**p_34), (*l_972), &g_61)))) & (*l_1024)))), l_1132)) != (***l_591)), 0xEAAAC9A36765892CLL)) & (***l_998)) == 0x55D5C1C6L))) < l_1126.f1.f2) | 0xAB88L) ^ g_506)) | l_1126.f3.f5), 0xCA18L)) | l_1126.f1.f5) , (*l_1024))))
                {
                    unsigned short l_1134 = 8UL;
                    (*g_239) = ((g_1133 == ((*p_34) = (*g_60))) | l_1134);
                }
                else
                {
                    struct S1 l_1136 = {1UL,{0x64733BAEL,0x24D16BE8L,0xB665618AL,0L,2L,0x0D521418L},0xF3690179A29889C3LL,{0xE758B41EL,9L,-1L,1L,0L,0x6871AC9AL},0UL};
                    (***p_34) = (-2L);
                    if (((**g_61) , (***p_34)))
                    {
                        (***p_34) ^= 0L;
                    }
                    else
                    {
                        struct S1 *l_1135 = &l_620;
                        unsigned long long **l_1137 = &l_1128;
                        unsigned long long **l_1139 = (void*)0;
                        unsigned long long **l_1140 = &l_1138;
                        (***g_60) = func_46(((*l_1135) = g_84), (g_1113 = (func_46(l_1136, p_33, (**l_998), l_1136.f3, &g_1133) <= p_33)), ((*p_35) = (**l_591)), l_982.f3, &g_61);
                        (*l_1024) &= ((((*l_1137) = (void*)0) != ((*l_1140) = l_1138)) <= (***l_998));
                        (*p_35) = (l_1126.f1 , ((**p_34) = (**l_591)));
                        l_982.f1.f0 |= (((***p_34) , (g_84.f3.f4 , &g_597)) != &g_597);
                    }
                    (**p_34) = (void*)0;
                }
                ++g_1270;
            }
            (**p_35) = (*l_1024);
            l_982.f3.f5 |= ((**p_35) ^= l_982.f2);
        }
        else
        {
            long long l_1275 = (-5L);
            unsigned char *l_1278 = &l_630;
            struct S0 l_1285 = {-8L,0xC35032A7L,-6L,9L,0xFD07L,-2L};
            struct S1 *l_1287 = &l_1019;
            struct S1 **l_1288 = &l_1287;
            struct S1 **l_1289 = (void*)0;
            for (l_1019.f1.f3 = (-25); (l_1019.f1.f3 <= 21); l_1019.f1.f3 = safe_add_func_uint64_t_u_u(l_1019.f1.f3, 8))
            {
                return l_1275;
            }
            (*g_62) ^= (((p_33 , (safe_add_func_uint8_t_u_u((--(*l_1278)), func_46(func_75((*g_60), &g_597, l_1019, g_84, l_971), (safe_unary_minus_func_uint8_t_u(((l_1283 = (g_1282 = &g_1113)) != l_1284))), (*g_61), l_1285, &g_61)))) >= 0xBEL) || g_597);
            l_1286 = &l_971;
            g_1290 = ((*l_1288) = l_1287);
        }
    }
    return g_84.f3.f3;
}







static int *** func_41(unsigned p_42, long long p_43, struct S2 p_44, int p_45)
{
    unsigned *l_74 = (void*)0;
    unsigned short l_86 = 65526UL;
    struct S0 l_87 = {0x6F5F90F0L,1L,-1L,0x1F8CL,0L,0xE9FC46A6L};
    int ***l_88 = &g_61;
    struct S1 l_89 = {18446744073709551615UL,{-1L,2L,-6L,0xDC58L,0L,5L},0x2055579FD635786DLL,{1L,1L,0xCA4AAA59L,0L,0x0AA7L,0xCB204CE7L},0xBFBDL};
    int *l_240 = &g_84.f1.f5;
    unsigned char *l_245 = &g_246;
    unsigned char *l_250 = &g_251;
    long long l_252 = 0x3C6A0BBF4FE60449LL;
    int l_357 = (-1L);
    int l_369 = 0xCEC343EBL;
    int l_375 = 0x65BC54D0L;
    int l_383 = (-1L);
    int l_391 = 0x479D718FL;
    int l_401 = 1L;
    int l_402 = 0L;
    int l_419 = 0xE737CADDL;
    int l_448 = 0x8C0DA536L;
    int l_459 = 0x2C47F08EL;
    for (g_66.f1 = 0; (g_66.f1 != (-5)); g_66.f1 = safe_sub_func_int64_t_s_s(g_66.f1, 1))
    {
        int **l_81 = (void*)0;
        unsigned *l_82 = (void*)0;
        unsigned **l_83 = &l_82;
        struct S1 l_85 = {0x8A0B6D6EL,{1L,0x31CA04C8L,-7L,0xF3ECL,0x3249L,0L},-1L,{-1L,0x39C23854L,-10L,0xD9F2L,1L,8L},1UL};
        struct S2 l_90 = {0x6A680CA0C949183CLL,-1L};
        struct S1 *l_205 = &l_89;
        int *l_206 = (void*)0;
        l_240 = (func_69(((void*)0 == l_74), func_46(((*l_205) = func_75(l_81, ((*l_83) = l_82), (g_84 = g_84), (func_46(l_85, l_86, l_74, l_87, l_88) , l_89), l_90)), p_45, l_206, g_207, &g_61), (*g_61), g_66.f0) , (*g_61));
    }
    (*g_62) = (((((safe_rshift_func_uint8_t_u_u(((*l_245) = (func_46(l_89, (safe_rshift_func_int8_t_s_u(((*l_240) || 0UL), 2)), (**l_88), l_89.f1, l_88) <= g_234.f1)), ((*l_250) ^= (safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint64_t_u((g_192 && (*l_240)))) | 0xD5L), 0x20C6L))))) , p_44.f0) >= g_207.f4) ^ (*l_240)) >= g_84.f1.f4);
    if (((*g_62) = (p_42 && func_46((l_89 = func_75((*l_88), l_74, l_89, g_84, p_44)), l_252, (**l_88), l_87, &g_61))))
    {
        int *l_253 = &l_89.f3.f0;
        int *l_254 = &l_89.f1.f0;
        int *l_255 = &g_234.f0;
        int *l_256 = &l_89.f3.f5;
        int *l_257 = &l_87.f0;
        int *l_258 = &g_84.f1.f1;
        int *l_259 = &l_89.f1.f5;
        int *l_260 = &g_84.f1.f0;
        int *l_261 = (void*)0;
        int *l_262 = (void*)0;
        int *l_263 = &g_234.f5;
        int l_264 = 0x4E1F444AL;
        int *l_265 = &g_84.f1.f1;
        int *l_266 = &g_207.f0;
        int *l_267 = (void*)0;
        int *l_268 = (void*)0;
        int l_269 = 0xE641A28EL;
        int *l_270 = (void*)0;
        int *l_271 = &g_207.f5;
        int *l_272 = &g_234.f0;
        int *l_273 = &g_84.f3.f0;
        int *l_274 = &g_84.f3.f0;
        int l_275 = (-1L);
        int *l_276 = &g_84.f1.f5;
        int *l_277 = &g_207.f1;
        int *l_278 = &g_40;
        int *l_279 = &l_89.f1.f0;
        int *l_280 = (void*)0;
        int *l_281 = &l_87.f1;
        int *l_282 = &g_84.f1.f5;
        int *l_283 = &l_87.f5;
        int *l_284 = (void*)0;
        int *l_285 = &g_84.f1.f0;
        int *l_286 = &g_84.f1.f0;
        int *l_287 = &g_40;
        int *l_288 = &l_89.f3.f1;
        int *l_289 = (void*)0;
        int *l_290 = &g_84.f1.f0;
        int *l_291 = &g_84.f3.f5;
        int *l_292 = &g_84.f1.f1;
        int *l_293 = &l_89.f3.f0;
        int *l_294 = (void*)0;
        int *l_295 = &g_207.f0;
        int *l_296 = &g_234.f5;
        int *l_297 = &l_87.f5;
        int *l_298 = (void*)0;
        int *l_299 = &l_269;
        int l_300 = 0L;
        int *l_301 = &l_87.f1;
        int *l_302 = (void*)0;
        int *l_303 = (void*)0;
        int l_304 = 0x102DFB2CL;
        int *l_305 = &l_89.f1.f1;
        int *l_306 = (void*)0;
        int *l_307 = (void*)0;
        int *l_308 = &l_304;
        int *l_309 = &l_264;
        int *l_310 = (void*)0;
        int *l_311 = &l_89.f1.f5;
        int *l_312 = &l_87.f1;
        int *l_313 = &g_207.f1;
        int *l_314 = (void*)0;
        int *l_315 = (void*)0;
        int *l_316 = &l_89.f3.f0;
        int *l_317 = &l_269;
        int *l_318 = &g_84.f1.f5;
        int *l_319 = &l_89.f1.f5;
        int *l_320 = &g_207.f1;
        int *l_321 = &g_84.f3.f0;
        int *l_322 = &g_84.f1.f1;
        int l_323 = 8L;
        int *l_324 = (void*)0;
        int *l_325 = &l_89.f3.f5;
        int *l_326 = &g_207.f5;
        int *l_327 = &g_84.f1.f1;
        int *l_328 = &g_207.f0;
        int *l_329 = &l_264;
        int *l_330 = (void*)0;
        int *l_331 = (void*)0;
        int l_332 = 2L;
        int *l_333 = &l_89.f1.f0;
        int l_334 = 2L;
        int *l_335 = &g_84.f3.f1;
        int *l_336 = &g_84.f3.f5;
        int *l_337 = &g_234.f1;
        int *l_338 = &l_89.f1.f1;
        int *l_339 = &l_89.f3.f5;
        int l_340 = (-9L);
        int *l_341 = &l_89.f3.f1;
        int *l_342 = &g_207.f1;
        int *l_343 = &g_207.f5;
        int l_344 = (-6L);
        int *l_345 = &g_84.f1.f5;
        int *l_346 = &l_87.f1;
        int *l_347 = &l_87.f5;
        int *l_348 = &g_234.f1;
        int *l_349 = &l_334;
        int *l_350 = (void*)0;
        int *l_351 = &l_269;
        int *l_352 = (void*)0;
        int *l_353 = &g_234.f0;
        int *l_354 = &l_275;
        int *l_355 = &l_334;
        int *l_356 = (void*)0;
        int *l_358 = &g_84.f1.f0;
        int *l_359 = &l_323;
        int *l_360 = &l_332;
        int *l_361 = &l_89.f1.f0;
        int l_362 = 0xCA18A4ECL;
        int *l_363 = &g_84.f3.f0;
        int *l_364 = &l_87.f1;
        int *l_365 = &l_269;
        int *l_366 = &l_89.f3.f1;
        int *l_367 = &g_207.f5;
        int *l_368 = &l_89.f1.f5;
        int *l_370 = &l_334;
        int *l_371 = &g_207.f5;
        int *l_372 = &l_340;
        int l_373 = 0x094BE114L;
        int *l_374 = &g_234.f1;
        int *l_376 = &g_207.f0;
        int *l_377 = &l_357;
        int *l_378 = &l_304;
        int *l_379 = &g_84.f3.f1;
        int *l_380 = &l_264;
        int l_381 = (-9L);
        int *l_382 = &l_332;
        int *l_384 = &l_357;
        int *l_385 = (void*)0;
        int *l_386 = &l_304;
        int *l_387 = &l_373;
        int *l_388 = &l_357;
        int *l_389 = &l_357;
        int *l_390 = &l_340;
        int l_392 = (-6L);
        int *l_393 = &g_207.f5;
        int *l_394 = &l_391;
        int *l_395 = &l_357;
        int *l_396 = (void*)0;
        int l_397 = 0x20C041A9L;
        int *l_398 = &l_89.f1.f0;
        int *l_399 = &g_84.f3.f0;
        int *l_400 = &l_381;
        int *l_403 = &l_264;
        int *l_404 = &l_334;
        int *l_405 = &l_89.f1.f0;
        int *l_406 = &g_234.f0;
        int *l_407 = &l_383;
        int *l_408 = &l_369;
        int *l_409 = &l_323;
        int *l_410 = &l_392;
        int *l_411 = &g_40;
        int *l_412 = (void*)0;
        int *l_413 = &l_369;
        int *l_414 = (void*)0;
        int *l_415 = &g_207.f5;
        int *l_416 = (void*)0;
        int *l_417 = &g_207.f0;
        int *l_418 = &l_332;
        int *l_420 = &g_84.f1.f0;
        int *l_421 = &l_373;
        int *l_422 = &l_89.f1.f1;
        int *l_423 = (void*)0;
        int *l_424 = (void*)0;
        int *l_425 = &l_357;
        int *l_426 = &g_207.f5;
        int *l_427 = &l_402;
        int *l_428 = &l_89.f3.f5;
        int *l_429 = &l_369;
        int *l_430 = (void*)0;
        int l_431 = 3L;
        int *l_432 = &l_381;
        int *l_433 = (void*)0;
        int *l_434 = &g_84.f1.f5;
        int *l_435 = (void*)0;
        int *l_436 = &l_373;
        int *l_437 = &l_264;
        int *l_438 = &l_362;
        int *l_439 = &l_89.f3.f1;
        int l_440 = (-10L);
        int *l_441 = &g_84.f3.f1;
        int *l_442 = &l_440;
        int *l_443 = &l_340;
        int *l_444 = (void*)0;
        int *l_445 = (void*)0;
        int *l_446 = (void*)0;
        int *l_447 = &l_264;
        int *l_449 = &l_87.f0;
        int *l_450 = &l_87.f0;
        int *l_451 = &l_344;
        int *l_452 = &l_89.f3.f1;
        int *l_453 = &l_275;
        int *l_454 = &l_402;
        int *l_455 = &g_234.f1;
        int *l_456 = &g_84.f1.f1;
        int *l_457 = &l_419;
        int *l_458 = &l_440;
        int *l_460 = &g_84.f1.f1;
        int *l_461 = &l_89.f3.f5;
        int *l_462 = &l_375;
        int *l_463 = &l_89.f3.f1;
        int l_464 = (-1L);
        int *l_465 = (void*)0;
        short l_466 = 0xD5CCL;
        int *l_470 = &l_375;
        int *l_471 = (void*)0;
        int *l_472 = &l_89.f1.f1;
        int *l_473 = &g_207.f0;
        int *l_474 = &l_300;
        int *l_475 = &l_375;
        int *l_476 = &g_207.f1;
        int *l_477 = &g_40;
        int *l_478 = &l_391;
        int *l_479 = &l_269;
        int *l_480 = (void*)0;
        int *l_481 = &l_357;
        int *l_482 = &l_373;
        int *l_483 = &l_300;
        int *l_484 = &g_234.f1;
        int *l_485 = &g_207.f1;
        int *l_486 = &l_89.f3.f1;
        int *l_487 = &l_397;
        int *l_488 = &l_383;
        int *l_489 = &l_401;
        int *l_490 = &g_84.f3.f5;
        int *l_491 = (void*)0;
        int *l_492 = &l_269;
        int *l_493 = &g_84.f1.f1;
        int *l_494 = &l_381;
        int *l_495 = &l_459;
        int *l_496 = &l_369;
        int *l_497 = (void*)0;
        int *l_498 = &g_84.f3.f1;
        int *l_499 = (void*)0;
        int *l_500 = &l_369;
        int *l_501 = &g_84.f1.f5;
        int *l_502 = (void*)0;
        int *l_503 = &l_332;
        int *l_504 = &g_40;
        int *l_505 = (void*)0;
        int *l_508 = &l_89.f1.f1;
        int *l_509 = &l_383;
        int *l_510 = (void*)0;
        int *l_511 = &l_275;
        int *l_512 = &l_304;
        int *l_513 = &l_340;
        int *l_514 = (void*)0;
        int *l_515 = &g_207.f1;
        char l_516 = (-7L);
        int *l_517 = &g_234.f1;
        int *l_518 = &l_332;
        int *l_519 = &g_207.f1;
        int *l_520 = (void*)0;
        int *l_522 = &l_89.f1.f0;
        int *l_524 = &l_431;
        int *l_525 = &l_323;
        int *l_526 = &l_264;
        int *l_527 = &l_87.f0;
        int *l_528 = &l_89.f1.f5;
        int *l_529 = &l_89.f3.f5;
        int *l_530 = &l_362;
        int *l_531 = &l_448;
        int *l_532 = (void*)0;
        char l_533 = (-3L);
        int *l_534 = &l_392;
        int *l_535 = &l_89.f1.f5;
        int *l_536 = &l_381;
        int *l_537 = &g_207.f0;
        int *l_539 = &l_375;
        int *l_540 = (void*)0;
        int *l_541 = (void*)0;
        int *l_542 = (void*)0;
        int *l_543 = &l_340;
        int l_544 = (-1L);
        int *l_545 = &l_419;
        int *l_546 = (void*)0;
        int *l_547 = &l_392;
        int *l_548 = (void*)0;
        int *l_549 = &l_344;
        int *l_550 = &g_234.f5;
        int *l_551 = &l_87.f1;
        int *l_555 = &l_373;
        int *l_556 = &g_40;
        int *l_558 = &l_275;
        int *l_559 = &g_552;
        int *l_560 = &l_89.f3.f1;
        int *l_561 = &l_323;
        int *l_562 = &g_557;
        int *l_563 = (void*)0;
        int *l_564 = &l_323;
        int *l_565 = &g_234.f0;
        int *l_566 = &l_392;
        int *l_567 = &l_300;
        int *l_568 = &l_448;
        int *l_569 = &l_381;
        int *l_570 = (void*)0;
        int *l_571 = (void*)0;
        (*l_240) = p_42;
        g_467--;
        ++g_572;
    }
    else
    {
        (**g_61) = (*g_239);
    }
    return l_88;
}







static unsigned char func_46(struct S1 p_47, long long p_48, int * p_49, struct S0 p_50, int *** p_51)
{
    unsigned l_63 = 3UL;
    l_63++;
    return l_63;
}







static struct S0 func_69(unsigned long long p_70, int p_71, int * p_72, short p_73)
{
    struct S1 l_208 = {0x05A9798AL,{-1L,0xC2C7609BL,0xFE7B2001L,0x5B8BL,-1L,0L},-10L,{-1L,0xBF198892L,0x445B3C7DL,1L,0x3EE7L,1L},0x42B5L};
    int **l_221 = (void*)0;
    int ***l_220 = &l_221;
    int **l_223 = &g_62;
    int ***l_222 = &l_223;
    struct S1 l_228 = {7UL,{0xEF8BEE2BL,8L,-1L,0xD30AL,0xCD8AL,0xF224AD8BL},0x9D11109A14F9FC25LL,{-7L,5L,0x045E9809L,0L,-5L,0xAFF57C1CL},0x0E78L};
    int **l_230 = &g_62;
    int ***l_229 = &l_230;
    char *l_231 = &g_66.f1;
    unsigned *l_232 = (void*)0;
    unsigned *l_233 = &g_57;
    int *l_235 = (void*)0;
    int *l_236 = (void*)0;
    int *l_237 = &l_208.f3.f1;
    int l_238 = 0x24A0B941L;
    (*g_62) = ((func_46(l_208, (((*l_233) = (safe_unary_minus_func_uint16_t_u(((((((safe_mod_func_uint32_t_u_u(4294967287UL, ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((((*g_60) = (*g_60)) != ((*l_222) = ((*l_220) = (void*)0))) == (safe_sub_func_uint32_t_u_u(((((void*)0 == &g_10) & ((func_46(l_228, p_70, p_72, l_208.f3, l_229) , (***l_229)) > 0xE3407224L)) <= (**l_230)), (*g_62)))) <= 0x1734L), 4)), p_73)), g_207.f0)), p_70)) , (*p_72)))) , l_228) , l_231) == &g_10) , l_232) == l_232)))) & p_70), (*l_230), g_234, &l_230) & (-1L)) , 1L);
    (*l_237) |= (***l_229);
    (*l_237) = ((p_70 ^ (0xE66764A772E67D20LL | (l_231 == (void*)0))) || (l_238 , g_84.f1.f4));
    g_239 = ((*l_230) = p_72);
    return l_228.f3;
}







static struct S1 func_75(int ** p_76, unsigned * p_77, struct S1 p_78, struct S1 p_79, struct S2 p_80)
{
    struct S0 *l_91 = (void*)0;
    struct S0 *l_92 = &g_84.f3;
    int l_112 = 0xE5F14FE5L;
    char l_115 = 6L;
    int l_136 = 0x63847764L;
    int l_143 = 6L;
    int l_150 = 1L;
    int l_155 = 0xDA24A5CBL;
    int l_161 = 0xB3BDE5FCL;
    unsigned l_201 = 0x20615643L;
    (*l_92) = g_84.f3;
    for (p_78.f1.f3 = 0; (p_78.f1.f3 >= (-6)); p_78.f1.f3--)
    {
        unsigned long long l_111 = 0xC71E7B35E0E5596ELL;
        int *l_116 = &g_40;
        int *l_117 = &g_40;
        int *l_118 = (void*)0;
        int *l_119 = &g_84.f1.f0;
        int *l_120 = &g_84.f1.f0;
        int *l_121 = (void*)0;
        int *l_122 = &g_40;
        int *l_123 = &g_84.f3.f1;
        int *l_124 = &g_84.f3.f1;
        int *l_125 = &g_84.f3.f1;
        int *l_126 = &g_84.f1.f1;
        int *l_127 = &g_84.f1.f0;
        int *l_128 = &g_84.f3.f0;
        int *l_129 = &g_84.f1.f1;
        int *l_130 = &g_84.f3.f0;
        int *l_131 = (void*)0;
        int *l_132 = (void*)0;
        int *l_133 = &g_40;
        int *l_134 = &l_112;
        int *l_135 = &g_84.f1.f0;
        int *l_137 = &l_136;
        int *l_138 = &g_84.f3.f0;
        int *l_139 = (void*)0;
        int *l_140 = &g_84.f1.f1;
        int *l_141 = &g_84.f3.f0;
        int *l_142 = &g_84.f3.f0;
        int *l_144 = (void*)0;
        int *l_145 = &g_84.f3.f1;
        int *l_146 = &g_84.f3.f0;
        int *l_147 = &g_84.f1.f5;
        int *l_148 = &l_143;
        int *l_149 = &g_40;
        int *l_151 = &l_136;
        int *l_152 = &g_84.f1.f0;
        int *l_153 = (void*)0;
        int *l_154 = &g_40;
        int *l_156 = &g_40;
        int *l_157 = (void*)0;
        int *l_158 = &g_40;
        int *l_159 = &l_143;
        int *l_160 = &g_84.f1.f0;
        int *l_162 = &g_84.f1.f0;
        int *l_163 = &l_143;
        int *l_164 = &l_155;
        int *l_165 = &g_84.f3.f0;
        int *l_166 = &g_84.f1.f5;
        int *l_167 = &l_112;
        int *l_168 = (void*)0;
        int *l_169 = &g_84.f1.f0;
        int *l_170 = &g_84.f3.f1;
        int *l_171 = &l_112;
        int *l_172 = &l_150;
        int *l_173 = (void*)0;
        int *l_174 = &g_84.f3.f5;
        int *l_175 = &g_84.f1.f0;
        int l_176 = 0x6151272DL;
        int *l_177 = (void*)0;
        int *l_178 = &l_176;
        int *l_179 = &l_143;
        int *l_180 = &g_84.f3.f0;
        int l_181 = (-1L);
        int *l_182 = (void*)0;
        int *l_183 = &g_40;
        int *l_184 = &l_181;
        int *l_185 = &g_84.f1.f0;
        int *l_186 = (void*)0;
        int *l_187 = (void*)0;
        int *l_188 = &g_84.f1.f5;
        int *l_189 = &g_84.f1.f0;
        int *l_190 = &l_176;
        int l_191 = 0x6B6E5B2EL;
        int *l_193 = (void*)0;
        int *l_194 = &g_84.f3.f0;
        int *l_195 = (void*)0;
        int *l_196 = &l_143;
        int *l_197 = &l_112;
        int *l_198 = &g_84.f1.f1;
        int l_199 = (-2L);
        int *l_200 = &l_150;
        struct S1 *l_204 = &g_84;
    }
    return g_84;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
    transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1.f0, "g_84.f1.f0", print_hash_value);
    transparent_crc(g_84.f1.f1, "g_84.f1.f1", print_hash_value);
    transparent_crc(g_84.f1.f2, "g_84.f1.f2", print_hash_value);
    transparent_crc(g_84.f1.f3, "g_84.f1.f3", print_hash_value);
    transparent_crc(g_84.f1.f4, "g_84.f1.f4", print_hash_value);
    transparent_crc(g_84.f1.f5, "g_84.f1.f5", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    transparent_crc(g_84.f3.f0, "g_84.f3.f0", print_hash_value);
    transparent_crc(g_84.f3.f1, "g_84.f3.f1", print_hash_value);
    transparent_crc(g_84.f3.f2, "g_84.f3.f2", print_hash_value);
    transparent_crc(g_84.f3.f3, "g_84.f3.f3", print_hash_value);
    transparent_crc(g_84.f3.f4, "g_84.f3.f4", print_hash_value);
    transparent_crc(g_84.f3.f5, "g_84.f3.f5", print_hash_value);
    transparent_crc(g_84.f4, "g_84.f4", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_207.f0, "g_207.f0", print_hash_value);
    transparent_crc(g_207.f1, "g_207.f1", print_hash_value);
    transparent_crc(g_207.f2, "g_207.f2", print_hash_value);
    transparent_crc(g_207.f3, "g_207.f3", print_hash_value);
    transparent_crc(g_207.f4, "g_207.f4", print_hash_value);
    transparent_crc(g_207.f5, "g_207.f5", print_hash_value);
    transparent_crc(g_234.f0, "g_234.f0", print_hash_value);
    transparent_crc(g_234.f1, "g_234.f1", print_hash_value);
    transparent_crc(g_234.f2, "g_234.f2", print_hash_value);
    transparent_crc(g_234.f3, "g_234.f3", print_hash_value);
    transparent_crc(g_234.f4, "g_234.f4", print_hash_value);
    transparent_crc(g_234.f5, "g_234.f5", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_553, "g_553", print_hash_value);
    transparent_crc(g_554, "g_554", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_893, "g_893", print_hash_value);
    transparent_crc(g_909, "g_909", print_hash_value);
    transparent_crc(g_1098, "g_1098", print_hash_value);
    transparent_crc(g_1109, "g_1109", print_hash_value);
    transparent_crc(g_1113, "g_1113", print_hash_value);
    transparent_crc(g_1115, "g_1115", print_hash_value);
    transparent_crc(g_1246, "g_1246", print_hash_value);
    transparent_crc(g_1270, "g_1270", print_hash_value);
    transparent_crc(g_1474, "g_1474", print_hash_value);
    transparent_crc(g_1680.f0, "g_1680.f0", print_hash_value);
    transparent_crc(g_1680.f1.f0, "g_1680.f1.f0", print_hash_value);
    transparent_crc(g_1680.f1.f1, "g_1680.f1.f1", print_hash_value);
    transparent_crc(g_1680.f1.f2, "g_1680.f1.f2", print_hash_value);
    transparent_crc(g_1680.f1.f3, "g_1680.f1.f3", print_hash_value);
    transparent_crc(g_1680.f1.f4, "g_1680.f1.f4", print_hash_value);
    transparent_crc(g_1680.f1.f5, "g_1680.f1.f5", print_hash_value);
    transparent_crc(g_1680.f2, "g_1680.f2", print_hash_value);
    transparent_crc(g_1680.f3.f0, "g_1680.f3.f0", print_hash_value);
    transparent_crc(g_1680.f3.f1, "g_1680.f3.f1", print_hash_value);
    transparent_crc(g_1680.f3.f2, "g_1680.f3.f2", print_hash_value);
    transparent_crc(g_1680.f3.f3, "g_1680.f3.f3", print_hash_value);
    transparent_crc(g_1680.f3.f4, "g_1680.f3.f4", print_hash_value);
    transparent_crc(g_1680.f3.f5, "g_1680.f3.f5", print_hash_value);
    transparent_crc(g_1680.f4, "g_1680.f4", print_hash_value);
    transparent_crc(g_1689, "g_1689", print_hash_value);
    transparent_crc(g_1834, "g_1834", print_hash_value);
    transparent_crc(g_1956, "g_1956", print_hash_value);
    transparent_crc(g_3378, "g_3378", print_hash_value);
    transparent_crc(g_3609, "g_3609", print_hash_value);
    transparent_crc(g_3636.f0, "g_3636.f0", print_hash_value);
    transparent_crc(g_3636.f1.f0, "g_3636.f1.f0", print_hash_value);
    transparent_crc(g_3636.f1.f1, "g_3636.f1.f1", print_hash_value);
    transparent_crc(g_3636.f1.f2, "g_3636.f1.f2", print_hash_value);
    transparent_crc(g_3636.f1.f3, "g_3636.f1.f3", print_hash_value);
    transparent_crc(g_3636.f1.f4, "g_3636.f1.f4", print_hash_value);
    transparent_crc(g_3636.f1.f5, "g_3636.f1.f5", print_hash_value);
    transparent_crc(g_3636.f2, "g_3636.f2", print_hash_value);
    transparent_crc(g_3636.f3.f0, "g_3636.f3.f0", print_hash_value);
    transparent_crc(g_3636.f3.f1, "g_3636.f3.f1", print_hash_value);
    transparent_crc(g_3636.f3.f2, "g_3636.f3.f2", print_hash_value);
    transparent_crc(g_3636.f3.f3, "g_3636.f3.f3", print_hash_value);
    transparent_crc(g_3636.f3.f4, "g_3636.f3.f4", print_hash_value);
    transparent_crc(g_3636.f3.f5, "g_3636.f3.f5", print_hash_value);
    transparent_crc(g_3636.f4, "g_3636.f4", print_hash_value);
    transparent_crc(g_3642.f0, "g_3642.f0", print_hash_value);
    transparent_crc(g_3642.f1.f0, "g_3642.f1.f0", print_hash_value);
    transparent_crc(g_3642.f1.f1, "g_3642.f1.f1", print_hash_value);
    transparent_crc(g_3642.f1.f2, "g_3642.f1.f2", print_hash_value);
    transparent_crc(g_3642.f1.f3, "g_3642.f1.f3", print_hash_value);
    transparent_crc(g_3642.f1.f4, "g_3642.f1.f4", print_hash_value);
    transparent_crc(g_3642.f1.f5, "g_3642.f1.f5", print_hash_value);
    transparent_crc(g_3642.f2, "g_3642.f2", print_hash_value);
    transparent_crc(g_3642.f3.f0, "g_3642.f3.f0", print_hash_value);
    transparent_crc(g_3642.f3.f1, "g_3642.f3.f1", print_hash_value);
    transparent_crc(g_3642.f3.f2, "g_3642.f3.f2", print_hash_value);
    transparent_crc(g_3642.f3.f3, "g_3642.f3.f3", print_hash_value);
    transparent_crc(g_3642.f3.f4, "g_3642.f3.f4", print_hash_value);
    transparent_crc(g_3642.f3.f5, "g_3642.f3.f5", print_hash_value);
    transparent_crc(g_3642.f4, "g_3642.f4", print_hash_value);
    transparent_crc(g_3644.f0, "g_3644.f0", print_hash_value);
    transparent_crc(g_3644.f1.f0, "g_3644.f1.f0", print_hash_value);
    transparent_crc(g_3644.f1.f1, "g_3644.f1.f1", print_hash_value);
    transparent_crc(g_3644.f1.f2, "g_3644.f1.f2", print_hash_value);
    transparent_crc(g_3644.f1.f3, "g_3644.f1.f3", print_hash_value);
    transparent_crc(g_3644.f1.f4, "g_3644.f1.f4", print_hash_value);
    transparent_crc(g_3644.f1.f5, "g_3644.f1.f5", print_hash_value);
    transparent_crc(g_3644.f2, "g_3644.f2", print_hash_value);
    transparent_crc(g_3644.f3.f0, "g_3644.f3.f0", print_hash_value);
    transparent_crc(g_3644.f3.f1, "g_3644.f3.f1", print_hash_value);
    transparent_crc(g_3644.f3.f2, "g_3644.f3.f2", print_hash_value);
    transparent_crc(g_3644.f3.f3, "g_3644.f3.f3", print_hash_value);
    transparent_crc(g_3644.f3.f4, "g_3644.f3.f4", print_hash_value);
    transparent_crc(g_3644.f3.f5, "g_3644.f3.f5", print_hash_value);
    transparent_crc(g_3644.f4, "g_3644.f4", print_hash_value);
    transparent_crc(g_3646, "g_3646", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
