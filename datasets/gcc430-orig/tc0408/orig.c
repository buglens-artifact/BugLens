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
   unsigned short f1;
   unsigned long long f2;
   char f3;
   int f4;
   short f5;
   unsigned short f6;
   unsigned f7;
};

struct S1 {
   long long f0;
   struct S0 f1;
   unsigned f2;
   short f3;
   unsigned f4;
   unsigned f5;
   struct S0 f6;
   unsigned f7;
};

struct S2 {
   unsigned short f0;
   unsigned char f1;
   unsigned long long f2;
   struct S1 f3;
   unsigned f4;
   int f5;
};


static unsigned long long g_6 = 0x5EC62BB2C593C869LL;
static struct S0 g_31 = {2UL,0x7E6FL,8UL,0xE6L,-1L,0x0E0CL,0xF7DFL,8UL};
static struct S2 g_41 = {65527UL,1UL,3UL,{1L,{1UL,0xD9F9L,0x98E093FE373EA232LL,0x03L,3L,-1L,0x2D1BL,2UL},0x3D79527AL,1L,0x74B5D444L,0x5CFA680EL,{1UL,2UL,4UL,6L,-1L,7L,0UL,0xAC40A1D1L},0UL},2UL,0x274840ADL};
static int *g_84 = (void*)0;
static int **g_83 = &g_84;
static unsigned char g_115 = 1UL;
static long long g_179 = 0L;
static short g_190 = 1L;
static unsigned char g_204 = 0xA0L;
static long long g_274 = 0x5ABB853B75FD95FELL;
static int g_275 = (-1L);
static char g_287 = (-8L);
static char g_297 = 0xBCL;
static unsigned g_300 = 0x8B623E16L;
static unsigned char g_341 = 0xAEL;
static int *g_367 = &g_41.f3.f6.f4;
static struct S0 *g_383 = &g_41.f3.f6;
static struct S0 **g_382 = &g_383;
static char g_460 = 0x23L;
static char g_466 = (-1L);
static int g_476 = (-8L);
static unsigned long long g_496 = 0x4A1B1FD5959697A2LL;
static unsigned char g_499 = 246UL;
static short g_607 = 5L;
static long long g_624 = 0xA5103F6C65BC9967LL;
static unsigned char g_654 = 255UL;
static unsigned g_695 = 0x7CCEA3C1L;
static char g_715 = 0x4BL;
static int g_719 = 1L;
static unsigned g_733 = 1UL;
static long long g_752 = 1L;
static unsigned long long g_756 = 0x23C9C4A550FB86DCLL;
static struct S1 *g_777 = &g_41.f3;
static short g_825 = 0x8795L;
static unsigned g_842 = 0x03360F2EL;
static unsigned g_890 = 0UL;
static struct S2 g_953 = {0x2975L,0x8DL,18446744073709551615UL,{-4L,{0x164C41D1E5255420LL,0x9AD5L,3UL,0x3CL,0xDCF44BDBL,0x6EF5L,6UL,0x7C476644L},0x203E0F88L,0x823DL,4294967286UL,1UL,{0xC450958EB19117DBLL,0xC23BL,8UL,-1L,0xDB16F6B3L,0L,65534UL,0xE8C1D81EL},0UL},18446744073709551615UL,0x1A320B2AL};
static struct S2 *g_1099 = (void*)0;
static struct S2 **g_1098 = &g_1099;
static struct S2 ***g_1097 = &g_1098;
static unsigned short g_1127 = 6UL;
static unsigned char g_1131 = 0x64L;
static unsigned short g_1171 = 0x0E42L;
static struct S2 g_1554 = {65535UL,0x8BL,1UL,{0xC63FF37649737D8BLL,{0UL,0x85EEL,0x78AE418B261E236FLL,2L,0xA052A178L,-4L,65535UL,0UL},0xB6300C8DL,0x481BL,4294967295UL,0UL,{18446744073709551614UL,0x82DFL,1UL,0xC3L,-1L,0xB990L,65535UL,0x29D65B2AL},0x7D780834L},0x940BC819L,8L};
static char g_1659 = 0x7FL;
static unsigned char g_1660 = 0xB8L;
static int *g_1697 = &g_41.f3.f1.f4;
static int g_1767 = 1L;
static struct S0 *g_1774 = &g_41.f3.f1;
static unsigned g_1938 = 9UL;
static unsigned char g_2165 = 0x1FL;
static char g_2227 = (-1L);
static int g_2302 = 1L;
static unsigned char g_2311 = 0x95L;
static struct S0 g_2437 = {18446744073709551608UL,0xAC2CL,18446744073709551615UL,9L,0x8AA22C78L,-9L,1UL,0xD2870006L};
static int g_2785 = 0x5C52ABAAL;
static char g_2790 = (-3L);
static unsigned long long g_2819 = 1UL;



static unsigned func_1(void);
static unsigned short func_2(struct S0 p_3, unsigned p_4);
static unsigned char func_16(struct S2 p_17, struct S2 p_18, struct S0 p_19);
static struct S2 func_20(long long p_21, struct S1 p_22, int p_23, struct S1 p_24, struct S0 p_25);
static short func_38(struct S2 p_39, char p_40);
static int func_64(int * p_65, struct S2 p_66, int * p_67, long long p_68);
static int * func_69(int * p_70);
static int * func_71(int * p_72);
static int * func_73(unsigned short p_74, int * p_75, int * p_76, int p_77, int * p_78);
static int * func_79(int p_80, int * p_81);
static unsigned func_1(void)
{
    struct S0 l_5 = {18446744073709551615UL,0x2456L,0x60CBEB969161D594LL,-1L,0x7257EA0DL,0x18D3L,9UL,0x244C3F4FL};
    struct S1 l_30 = {-4L,{1UL,0x0DF4L,1UL,0xC3L,0x37DEDC86L,0xE9E4L,65534UL,0xB71623CCL},1UL,0x0817L,4294967292UL,0x0B3DF572L,{0x7C4FD0C6BF6C9303LL,0x9EC3L,0xA1128F678E9A5F1CLL,-10L,0x4F1F3A62L,4L,0UL,8UL},0UL};
    struct S2 l_1941 = {65535UL,8UL,0xA9D5001B30A20B19LL,{0x396740BAED3CACB6LL,{18446744073709551611UL,0xB288L,0UL,0x93L,1L,0x7E6DL,0x9AA9L,0x8AF651E2L},0xAD6A0657L,-1L,0x0119DFADL,0x2D877D48L,{9UL,0x0093L,18446744073709551615UL,1L,9L,-2L,0UL,0UL},0x67FECAD9L},0UL,3L};
    int *l_2995 = &g_1554.f3.f6.f4;
    if ((func_2(l_5, (g_6 == ((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((1UL && 1L), ((g_6 < (0xCD1D2A6FL & (safe_unary_minus_func_int16_t_s((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(func_16(func_20(g_6, ((+((safe_add_func_int64_t_s_s(g_6, ((safe_sub_func_uint16_t_u_u(g_6, l_5.f4)) , 0UL))) >= 4294967295UL)) , l_30), g_6, l_30, g_31), l_1941, l_1941.f3.f1), 0L)), g_1554.f3.f2)))))) & g_1554.f3.f5))), l_30.f1.f6)) <= g_341))) == 0x7521L))
    {
        int *l_2899 = &g_476;
        int *l_2900 = &g_1554.f3.f1.f4;
        int *l_2901 = &g_1554.f3.f1.f4;
        int *l_2902 = &g_2437.f4;
        int *l_2903 = (void*)0;
        int *l_2904 = (void*)0;
        int *l_2905 = &l_1941.f3.f6.f4;
        int *l_2906 = &l_1941.f3.f1.f4;
        int *l_2907 = &g_476;
        int *l_2908 = &l_1941.f3.f1.f4;
        int *l_2909 = (void*)0;
        int *l_2910 = &l_1941.f3.f1.f4;
        int *l_2911 = &g_953.f3.f6.f4;
        int *l_2912 = (void*)0;
        int *l_2913 = (void*)0;
        int *l_2914 = (void*)0;
        int *l_2915 = &g_31.f4;
        int *l_2916 = (void*)0;
        int *l_2917 = &g_2785;
        int *l_2918 = &l_1941.f3.f6.f4;
        int *l_2919 = &l_5.f4;
        int *l_2920 = &l_1941.f3.f1.f4;
        int *l_2921 = &g_476;
        int *l_2922 = &l_1941.f3.f6.f4;
        int l_2923 = 0x1FA22261L;
        int *l_2924 = &g_1554.f3.f1.f4;
        int *l_2925 = &g_41.f3.f6.f4;
        int *l_2926 = &g_1554.f3.f1.f4;
        int *l_2927 = &g_1554.f3.f1.f4;
        int *l_2928 = &g_953.f3.f1.f4;
        int *l_2929 = &g_953.f3.f6.f4;
        int *l_2930 = &g_953.f3.f6.f4;
        int l_2931 = 4L;
        int *l_2932 = (void*)0;
        int *l_2933 = &g_476;
        int *l_2934 = (void*)0;
        int *l_2935 = (void*)0;
        int *l_2936 = &l_1941.f3.f1.f4;
        int *l_2937 = &g_2302;
        int *l_2938 = &l_1941.f3.f6.f4;
        int *l_2939 = &g_1554.f3.f6.f4;
        int *l_2940 = (void*)0;
        int *l_2941 = &g_41.f3.f1.f4;
        int *l_2942 = &g_31.f4;
        int *l_2943 = &l_2923;
        int *l_2944 = &g_953.f3.f1.f4;
        int *l_2945 = (void*)0;
        int *l_2946 = (void*)0;
        int *l_2947 = &g_1554.f3.f6.f4;
        int *l_2948 = &l_30.f1.f4;
        int *l_2949 = &g_2437.f4;
        int *l_2950 = &g_31.f4;
        int *l_2951 = &l_1941.f3.f1.f4;
        int *l_2952 = (void*)0;
        int *l_2953 = &l_30.f1.f4;
        int *l_2954 = &l_30.f1.f4;
        int *l_2955 = &g_953.f3.f6.f4;
        int *l_2956 = &l_30.f6.f4;
        int *l_2957 = &g_953.f3.f6.f4;
        int *l_2958 = &g_2785;
        int *l_2959 = &l_30.f1.f4;
        int l_2960 = 0xCB8C2E7DL;
        int *l_2961 = &l_30.f1.f4;
        int *l_2962 = &g_1554.f3.f1.f4;
        int l_2963 = 0x8C6545C9L;
        int *l_2964 = &l_2931;
        int *l_2965 = &g_31.f4;
        int *l_2966 = &l_2931;
        int *l_2967 = (void*)0;
        int *l_2968 = (void*)0;
        int *l_2969 = &g_1554.f3.f1.f4;
        int *l_2970 = &l_5.f4;
        int *l_2971 = &g_31.f4;
        int *l_2972 = &l_30.f1.f4;
        int *l_2973 = (void*)0;
        int *l_2974 = &g_41.f3.f6.f4;
        int *l_2975 = &l_5.f4;
        int *l_2976 = &g_31.f4;
        int *l_2977 = &g_476;
        int *l_2978 = &g_1554.f3.f1.f4;
        int *l_2979 = &l_30.f6.f4;
        int l_2980 = 0x2198BB88L;
        int *l_2981 = &g_953.f3.f1.f4;
        int *l_2982 = &l_30.f1.f4;
        int *l_2983 = (void*)0;
        int *l_2984 = &l_5.f4;
        int *l_2985 = &l_30.f1.f4;
        int *l_2986 = &l_1941.f3.f1.f4;
        int *l_2987 = &l_2931;
        int *l_2988 = (void*)0;
        int l_2989 = 0xE07A8C25L;
        unsigned l_2990 = 18446744073709551615UL;
        for (l_1941.f3.f6.f2 = 14; (l_1941.f3.f6.f2 < 47); ++l_1941.f3.f6.f2)
        {
            for (l_30.f6.f3 = 0; (l_30.f6.f3 == (-23)); l_30.f6.f3 = safe_sub_func_uint64_t_u_u(l_30.f6.f3, 3))
            {
                unsigned l_2898 = 0x7078C291L;
                return l_2898;
            }
        }
        l_2990--;
        (*g_83) = l_2995;
        return g_953.f3.f4;
    }
    else
    {
        return g_953.f3.f1.f2;
    }
}







static unsigned short func_2(struct S0 p_3, unsigned p_4)
{
    int l_1942 = (-9L);
    struct S2 l_1944 = {0x805FL,0x91L,0xDCE8653296EB68B7LL,{1L,{0x88B882D0C636A403LL,0UL,0x15140D3F9E84998DLL,-9L,0x68309FB9L,-7L,6UL,0x551B87AAL},0xFE6175AEL,0x336EL,0x4D7B7170L,1UL,{0x68D9B9EC88FF83ACLL,0xCF1FL,6UL,-9L,0xDB38800DL,0L,0UL,9UL},0xB695D000L},0x4D9BF495L,-3L};
    struct S1 *l_1949 = &g_953.f3;
    unsigned char l_2073 = 6UL;
    int *l_2078 = &g_1554.f3.f6.f4;
    int l_2120 = 6L;
    int l_2124 = (-4L);
    char l_2155 = 0x95L;
    int l_2265 = (-2L);
    int l_2291 = 4L;
    int l_2307 = 0xE0A05E4FL;
    struct S0 **l_2339 = &g_1774;
    int l_2436 = 0x17E3159CL;
    struct S0 l_2502 = {1UL,0x8D13L,1UL,0xF7L,0x53718D27L,-1L,65529UL,0x9109B52FL};
    char l_2503 = (-10L);
    unsigned char l_2589 = 0x68L;
    struct S2 ***l_2652 = (void*)0;
    int *l_2893 = &g_953.f3.f1.f4;
    if (p_3.f7)
    {
        l_1942 = 0L;
    }
    else
    {
        struct S2 l_1943 = {0xAE11L,0x19L,0xAC3006F5A4FFDD1ALL,{0xA6839E900251EE66LL,{18446744073709551609UL,65535UL,0x89915474DEAEC815LL,0x81L,-4L,0x7969L,0x7627L,7UL},0x8F644C32L,0L,0UL,0xCC690796L,{0x7F27CF48A31EF728LL,0xCEF3L,0x4747745C5A546CB9LL,4L,9L,0x3E56L,6UL,0xF02A8096L},6UL},0x92B26A6AL,0x11649D67L};
        (*g_367) &= (+(l_1943 , func_16(l_1944, l_1944, (*g_1774))));
        (*g_367) ^= ((!((l_1943 , g_275) && g_953.f3.f1.f6)) > 0x42AEL);
    }
    if ((l_1949 == g_777))
    {
        unsigned l_1950 = 1UL;
        l_1950 = (*g_367);
        (*g_83) = (void*)0;
    }
    else
    {
        int *l_1951 = &g_1554.f3.f6.f4;
        int l_1952 = 0L;
        int *l_1953 = &g_41.f3.f6.f4;
        int *l_1954 = &g_953.f3.f1.f4;
        int *l_1955 = &g_1554.f3.f6.f4;
        int *l_1956 = &g_953.f3.f6.f4;
        int *l_1957 = &g_953.f3.f1.f4;
        int *l_1958 = (void*)0;
        int *l_1959 = &g_1554.f3.f6.f4;
        int *l_1960 = &g_41.f3.f6.f4;
        int *l_1961 = &g_953.f3.f6.f4;
        int *l_1962 = &g_953.f3.f6.f4;
        int *l_1963 = &g_1554.f3.f6.f4;
        int l_1964 = 8L;
        int l_1965 = 0xA046C396L;
        int *l_1966 = &g_953.f3.f1.f4;
        int *l_1967 = &g_1554.f3.f1.f4;
        int *l_1968 = &g_41.f3.f1.f4;
        int *l_1969 = &g_1554.f3.f6.f4;
        int *l_1970 = &l_1965;
        int *l_1971 = &g_1554.f3.f1.f4;
        int *l_1972 = &l_1944.f3.f6.f4;
        int *l_1973 = &g_953.f3.f1.f4;
        int *l_1974 = &g_31.f4;
        int *l_1975 = (void*)0;
        int *l_1976 = &g_1554.f3.f1.f4;
        int *l_1977 = &g_31.f4;
        int *l_1978 = &l_1952;
        int *l_1979 = &g_953.f3.f6.f4;
        int *l_1980 = &l_1944.f3.f6.f4;
        int *l_1981 = &g_41.f3.f1.f4;
        int *l_1982 = &l_1965;
        int *l_1983 = &l_1944.f3.f1.f4;
        int *l_1984 = &g_41.f3.f1.f4;
        int *l_1985 = &g_1554.f3.f1.f4;
        int *l_1986 = &l_1944.f3.f6.f4;
        int *l_1987 = &g_953.f3.f1.f4;
        int l_1988 = 1L;
        int *l_1989 = &l_1965;
        int *l_1990 = &l_1964;
        int *l_1991 = (void*)0;
        int *l_1992 = &l_1952;
        int *l_1993 = &g_41.f3.f1.f4;
        int *l_1994 = (void*)0;
        int *l_1995 = &g_31.f4;
        int *l_1996 = &l_1952;
        int *l_1997 = &l_1988;
        int *l_1998 = &l_1944.f3.f6.f4;
        int *l_1999 = &g_41.f3.f6.f4;
        int *l_2000 = &l_1988;
        int *l_2001 = &g_1554.f3.f6.f4;
        int *l_2002 = &g_1554.f3.f1.f4;
        int *l_2003 = &g_41.f3.f1.f4;
        int *l_2004 = &l_1988;
        int *l_2005 = &g_31.f4;
        int *l_2006 = (void*)0;
        int *l_2007 = &g_31.f4;
        int *l_2008 = &l_1952;
        int *l_2009 = &g_476;
        int *l_2010 = &l_1988;
        int *l_2011 = &l_1964;
        int l_2012 = 1L;
        int *l_2013 = &g_476;
        int *l_2014 = &g_41.f3.f1.f4;
        int *l_2015 = &g_41.f3.f1.f4;
        int *l_2016 = (void*)0;
        int *l_2017 = &l_1964;
        int *l_2018 = &l_1988;
        int *l_2019 = &l_1964;
        int *l_2020 = &l_1964;
        int *l_2021 = &g_41.f3.f6.f4;
        int *l_2022 = &l_1944.f3.f6.f4;
        int *l_2023 = &l_1952;
        int *l_2024 = &l_1988;
        int *l_2025 = &g_1554.f3.f6.f4;
        int *l_2026 = (void*)0;
        int *l_2027 = &g_953.f3.f6.f4;
        int *l_2028 = &l_1988;
        int *l_2029 = &l_1965;
        int l_2030 = 1L;
        int *l_2031 = &l_1952;
        int *l_2032 = &l_1965;
        int *l_2033 = &g_1554.f3.f6.f4;
        int l_2034 = (-1L);
        int *l_2035 = &g_476;
        int *l_2036 = &g_31.f4;
        int *l_2037 = (void*)0;
        int *l_2038 = &l_1964;
        int l_2039 = 2L;
        int *l_2040 = (void*)0;
        int *l_2041 = &l_2030;
        int l_2042 = 0x035B0064L;
        int *l_2043 = &g_1554.f3.f6.f4;
        int *l_2044 = &g_476;
        int *l_2045 = &l_1944.f3.f1.f4;
        int l_2046 = 4L;
        int *l_2047 = &g_1554.f3.f1.f4;
        int *l_2048 = &l_2046;
        int *l_2049 = &g_1554.f3.f1.f4;
        int *l_2050 = &l_2039;
        int *l_2051 = &l_1944.f3.f1.f4;
        int *l_2052 = &g_953.f3.f1.f4;
        int *l_2053 = (void*)0;
        int *l_2054 = &g_953.f3.f1.f4;
        int *l_2055 = &l_2046;
        int *l_2056 = &g_1554.f3.f6.f4;
        int *l_2057 = &l_1965;
        int *l_2058 = &l_1952;
        int l_2059 = 0xCAAEC916L;
        int l_2060 = 0L;
        int *l_2061 = (void*)0;
        int *l_2062 = &l_1944.f3.f6.f4;
        int *l_2063 = &l_1944.f3.f1.f4;
        int *l_2064 = &g_41.f3.f1.f4;
        int *l_2065 = &g_31.f4;
        int l_2066 = 0xA4C1477FL;
        int *l_2067 = &l_2066;
        int *l_2068 = &l_2039;
        int *l_2069 = &g_1554.f3.f1.f4;
        int l_2070 = 0xB74FB04EL;
        int *l_2071 = &g_476;
        int *l_2072 = &g_31.f4;
        struct S1 l_2076 = {0xFD064D516F4D07F2LL,{0x6B5FF87F7170628ELL,0x1DBAL,1UL,-4L,0x09C1DE56L,0xFCE7L,65535UL,18446744073709551607UL},5UL,1L,0xD1819F80L,0xE4472F92L,{0xF27405B41330B2B0LL,0x9774L,0x19F217F8B953163DLL,0x33L,0L,0xC05CL,0xF085L,0x82B6B11BL},0UL};
        struct S2 l_2077 = {8UL,0xCCL,0UL,{5L,{0xB4437559B5FB522ELL,0x4EB3L,0xAB8A3FB219BB6B9DLL,0xA8L,1L,-1L,0x6431L,0x86CF7479L},0x63EAFC8BL,0x7242L,3UL,0xE961BA88L,{0x5A00FD2FA43C8345LL,0x24D2L,0x6F6EDDFD34E89E15LL,-1L,0x7CC967D5L,-3L,65532UL,0UL},4294967295UL},1UL,-1L};
        unsigned l_2131 = 0x6CB34A7FL;
        int l_2154 = 2L;
        long long l_2171 = 0x09192FEEA971BC08LL;
        unsigned short l_2190 = 0x69E1L;
        long long l_2212 = (-2L);
        --l_2073;
        (*g_83) = l_2078;
        if ((*l_2014))
        {
            unsigned l_2081 = 9UL;
            struct S2 l_2091 = {4UL,255UL,0xD539FBEEFD3C7F00LL,{-6L,{0x80D4174696141B9FLL,0UL,0x89E635D8B2067131LL,-5L,1L,4L,8UL,0x2A49AF38L},0x5E288072L,-3L,0x8DAE3C6AL,0xFCCBC54CL,{18446744073709551615UL,1UL,0xCEC87E3CB86EB71CLL,3L,0xFC1A779CL,0x200FL,65535UL,0x6C1094CAL},4UL},0x91D9A125L,0xD8A80B77L};
            int *l_2097 = &l_2076.f1.f4;
            int l_2099 = 0L;
            unsigned long long l_2172 = 18446744073709551615UL;
            struct S2 **l_2199 = &g_1099;
            long long l_2205 = (-1L);
            struct S2 *l_2256 = &g_1554;
            long long l_2262 = 0xAD3BB44B4DC42D7ELL;
            int l_2264 = 0x2D914D95L;
            int l_2266 = (-6L);
            (*g_1697) = 0x74C45AE4L;
            (*l_2055) = p_3.f0;
            if (func_16(l_1944, ((0xCC9099DDE52B5A77LL >= (+((safe_sub_func_uint32_t_u_u(l_2081, 0xDCA06456L)) , ((*g_777) , g_953.f3.f1.f1)))) , l_1944), p_3))
            {
                (*g_1774) = l_1944.f3.f1;
            }
            else
            {
                unsigned short l_2086 = 0x205EL;
                struct S2 l_2092 = {7UL,0x2EL,2UL,{-6L,{18446744073709551606UL,0xE9CCL,0x99B1A4D8694CDE73LL,0L,1L,-8L,0UL,1UL},0UL,0x4B33L,4294967295UL,0x02693051L,{0x6CE739608DD73972LL,0x5BF5L,2UL,0L,0L,0x8FF3L,6UL,0x7629C951L},4294967295UL},0x6B8F842EL,0x0D113B8FL};
                struct S2 l_2096 = {0xB86AL,0x43L,18446744073709551606UL,{0x8485319392FFE11ELL,{1UL,65535UL,0x52054D3691B74AC7LL,0xE7L,0x523A69AFL,0x7DD5L,3UL,0xD72F43E7L},0xAD8E975EL,0x4EB6L,0x1A8DA427L,18446744073709551612UL,{0xF5004FFF7DD035D2LL,65526UL,18446744073709551615UL,0L,0xAF6D29D9L,0x2E6FL,65535UL,0x13DCA02DL},7UL},18446744073709551615UL,0x22E61BE2L};
                for (g_41.f3.f1.f7 = (-25); (g_41.f3.f1.f7 == 33); g_41.f3.f1.f7++)
                {
                    struct S2 l_2095 = {2UL,0x11L,0xBDBA83D46DA9740FLL,{0x7DEB82823045CF64LL,{0xEC8747C5548C068ELL,0UL,0x477F08A637C1BF01LL,0xE9L,-1L,0xE8E5L,0UL,0x0F360E32L},18446744073709551615UL,-1L,0x43BC3D18L,18446744073709551615UL,{0x73DEBE603BDAFBCBLL,0xF577L,0x25C4A9EF0E286F34LL,0x22L,0x118D9768L,-9L,0xCDA2L,18446744073709551607UL},0x7EA96514L},18446744073709551615UL,-1L};
                    int **l_2098 = &l_2067;
                    int *l_2100 = (void*)0;
                    int *l_2101 = (void*)0;
                    int *l_2102 = (void*)0;
                    int *l_2103 = (void*)0;
                    int *l_2104 = &g_41.f3.f1.f4;
                    int *l_2105 = &l_1965;
                    int *l_2106 = &l_2077.f3.f6.f4;
                    int *l_2107 = &l_2012;
                    int *l_2108 = &l_1952;
                    int *l_2109 = &l_1944.f3.f6.f4;
                    int l_2110 = 1L;
                    int *l_2111 = &g_953.f3.f6.f4;
                    int *l_2112 = &l_2091.f3.f6.f4;
                    int *l_2113 = &l_2095.f3.f1.f4;
                    int *l_2114 = (void*)0;
                    int *l_2115 = &l_2060;
                    int *l_2116 = &l_2046;
                    int *l_2117 = &g_1554.f3.f1.f4;
                    int *l_2118 = &l_1988;
                    int *l_2119 = (void*)0;
                    int *l_2121 = &g_41.f3.f1.f4;
                    int *l_2122 = &g_953.f3.f6.f4;
                    int *l_2123 = &l_2092.f3.f6.f4;
                    int *l_2125 = &g_953.f3.f1.f4;
                    int *l_2126 = &l_2092.f3.f6.f4;
                    int *l_2127 = (void*)0;
                    int *l_2128 = &l_2095.f3.f1.f4;
                    int *l_2129 = &l_2091.f3.f6.f4;
                    int *l_2130 = (void*)0;
                    unsigned short l_2134 = 0xF5E4L;
                    (*l_2011) &= (0x95L || (safe_rshift_func_uint8_t_u_s(((l_2086 | (((0UL | (safe_rshift_func_uint16_t_u_s((+65535UL), g_341))) & g_953.f5) == (safe_mod_func_int16_t_s_s(((*l_2000) , ((l_1944 , p_3.f2) > g_624)), g_953.f3.f0)))) , 0x5BL), 6)));
                    (*l_2098) = func_79((func_16(l_2091, (l_2086 , l_2092), p_3) , (((safe_sub_func_int64_t_s_s((func_16(l_2095, l_2096, (*g_1774)) | g_41.f3.f1.f3), g_41.f3.f1.f6)) | 249UL) < l_2091.f3.f1.f5)), l_2097);
                    --l_2131;
                    if ((l_2134 & (func_16(l_2091, l_2096, (*g_1774)) != 0x9EL)))
                    {
                        unsigned char l_2135 = 0x21L;
                        struct S2 l_2142 = {0x08C2L,0x39L,7UL,{1L,{0x1432078F93C3C528LL,0xE8E3L,0x1A4517F64BDBB540LL,0x22L,9L,0x249EL,0x602EL,18446744073709551614UL},18446744073709551610UL,0x6520L,0x38AEE1FEL,0xC7D988EDL,{0xCCB8BE025539E2EELL,0x4A04L,18446744073709551615UL,0L,0x8F2D74F8L,-1L,0x1722L,0x91BC7C25L},0UL},0xBCB067F4L,-8L};
                        l_2135 |= 0x81C7F1CCL;
                        (*l_1998) &= 0L;
                        (*l_1986) = (safe_div_func_uint32_t_u_u(((0x9D3DL < ((safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(func_16((g_496 , l_1944), l_2142, ((safe_lshift_func_uint16_t_u_s(p_3.f0, (g_953.f3.f2 | func_16(l_2091, l_2092, p_3)))) , l_2142.f3.f6)), p_3.f4)), g_300)) , g_204)) && p_3.f3), 0xFDC4C29CL));
                    }
                    else
                    {
                        (*l_2097) ^= (safe_lshift_func_uint16_t_u_s((*l_2117), (l_2096.f3.f1.f5 , (g_953.f4 == p_3.f4))));
                    }
                }
                return g_41.f3.f1.f6;
            }
            if ((**g_83))
            {
                int *l_2151 = &l_1944.f3.f6.f4;
                struct S2 l_2156 = {0xC295L,1UL,0x07DF4FBD7040F4A0LL,{-3L,{18446744073709551608UL,0UL,1UL,0xE2L,0x0E93B05AL,0xDBEDL,0UL,0x60782951L},0x49DA1E28L,0L,0UL,0UL,{0UL,0x13B9L,18446744073709551614UL,0L,-4L,0x9FECL,0x7B45L,0x258512F6L},3UL},0x3CB24112L,0x2F072515L};
                int l_2164 = 0xB8468E90L;
                char l_2170 = (-5L);
                if ((safe_rshift_func_uint16_t_u_s(((((*l_1986) < g_953.f3.f1.f2) & (((safe_mod_func_uint16_t_u_u(g_1554.f3.f6.f4, (*l_2020))) ^ p_3.f3) && g_115)) ^ 4294967292UL), 2)))
                {
                    int l_2163 = 8L;
                    (*l_2069) = ((*l_2097) >= func_38(l_2156, (((2UL | (((*g_1097) != ((safe_div_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((((((*g_777) , (&g_383 == (void*)0)) != (((*l_2097) | 0x4C8E3A7CL) > 0xB003DFE7F8F217DCLL)) < p_3.f3) && g_953.f3.f6.f6) < g_41.f3.f2), 3)) | (*l_2078)), p_3.f5)), p_3.f2)) , (void*)0)) ^ l_2163)) ^ g_41.f3.f6.f4) , 0x28L)));
                    --g_2165;
                }
                else
                {
                    for (l_2076.f6.f4 = 0; (l_2076.f6.f4 > (-7)); --l_2076.f6.f4)
                    {
                        (*g_83) = (*g_83);
                    }
                }
                ++l_2172;
                (*l_1980) = ((safe_mod_func_uint16_t_u_u((5L != (*g_84)), p_3.f4)) < 0x5CA843C9FABF54D1LL);
                if ((*l_2097))
                {
                    unsigned char l_2179 = 0UL;
                    struct S2 l_2187 = {0x3EBFL,0x82L,1UL,{0x1C485F00D557D339LL,{0UL,65535UL,1UL,0x14L,0x9D892E53L,3L,0x9F93L,0x914106C8L},0x5F927AD4L,-7L,0x547EFD0BL,0x827FF4B0L,{0UL,2UL,0xE36D6D29ABF444ECLL,0x1CL,0x98802720L,9L,2UL,0xBF0429CBL},0UL},1UL,0x282312F0L};
                    for (l_2077.f3.f1.f7 = (-23); (l_2077.f3.f1.f7 == 55); l_2077.f3.f1.f7 = safe_add_func_int64_t_s_s(l_2077.f3.f1.f7, 3))
                    {
                        unsigned long long l_2184 = 0x59F1701D852F4D38LL;
                        (*g_83) = func_69((*g_83));
                        l_2179--;
                        (*g_83) = &l_2046;
                        (*l_2000) = (safe_lshift_func_int16_t_s_u((((l_2184 == (safe_rshift_func_uint8_t_u_u(func_38(l_2187, g_953.f3.f2), ((1UL > ((g_953.f2 , g_1554.f3.f5) == p_3.f0)) , (+p_3.f6))))) | 0x5BL) & (*l_2151)), l_2187.f3.f4));
                    }
                }
                else
                {
                    int *l_2200 = &l_1965;
                    for (l_2156.f3.f7 = (-4); (l_2156.f3.f7 < 53); ++l_2156.f3.f7)
                    {
                        --l_2190;
                        (*g_83) = (*g_83);
                    }
                    (*l_2007) = (((*g_777) , (safe_div_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u((&g_83 != (void*)0), (*l_2065))) | (g_31.f4 | (safe_add_func_int64_t_s_s(((g_953.f3.f6.f4 , l_2199) != (*g_1097)), 9L)))), 1L))) && p_3.f4);
                    (*g_83) = l_2200;
                }
            }
            else
            {
                int *l_2208 = &l_2046;
                struct S2 l_2209 = {9UL,0UL,0UL,{0xC15CE72595E3D4C2LL,{7UL,65535UL,0xDD4EF06930F30CC4LL,0L,0L,0x27C0L,1UL,0x0CD44E19L},18446744073709551613UL,0x2332L,0xCF57B3C0L,0x4BCA6F74L,{18446744073709551615UL,0UL,0x455677DEE1DD500BLL,-1L,7L,0x7875L,0xC018L,18446744073709551615UL},3UL},8UL,0xB9F3D72AL};
                struct S2 ***l_2213 = &l_2199;
                unsigned long long l_2238 = 0x658109819C863DBBLL;
                int l_2296 = 0x12377087L;
                if ((~((safe_div_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(g_1554.f5, 0x1C9065A0L)), (l_2205 , (*l_2097)))) | (((func_64(l_2208, l_2209, l_2208, (*l_2208)) >= (*l_2078)) < g_190) || 0L))))
                {
                    short l_2216 = (-5L);
                    if ((*g_367))
                    {
                        struct S2 *l_2228 = (void*)0;
                        (*l_1984) &= (-3L);
                        (*l_1962) &= (safe_sub_func_int64_t_s_s((g_953.f2 && g_1554.f3.f4), l_2216));
                        (*g_1098) = ((safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((*g_84), (p_3.f4 && 0x1DL))), (safe_lshift_func_uint16_t_u_u((((safe_mod_func_int64_t_s_s((*l_1972), (safe_lshift_func_int8_t_s_s((g_41.f3.f6.f2 || g_2227), 6)))) > 0x47L) , g_31.f1), (0xC92FCF3266E19E11LL <= 18446744073709551615UL))))) , l_2228);
                    }
                    else
                    {
                        unsigned l_2229 = 5UL;
                        struct S0 **l_2236 = (void*)0;
                        int l_2237 = 0x93FD30B7L;
                        --l_2229;
                        (*l_2003) &= (((safe_mod_func_uint16_t_u_u((p_3.f1 >= ((((safe_lshift_func_int8_t_s_s(((void*)0 != &l_2124), 3)) != (((((((((*l_2097) , p_3.f6) , l_2236) != (void*)0) , (*g_1097)) == (void*)0) | (-5L)) , p_3.f5) < (*l_2097))) <= 1L) > (*l_2208))), g_1554.f4)) >= g_953.f3.f1.f2) || 0L);
                        --l_2238;
                    }
                }
                else
                {
                    char l_2247 = 9L;
                    int l_2261 = 7L;
                    short l_2263 = 0x98DEL;
                    int *l_2267 = &l_2209.f3.f1.f4;
                    int *l_2268 = &g_31.f4;
                    int *l_2269 = (void*)0;
                    int *l_2270 = &l_2076.f6.f4;
                    int *l_2271 = &l_1944.f3.f1.f4;
                    int *l_2272 = &g_1554.f3.f1.f4;
                    int l_2273 = 1L;
                    int *l_2274 = (void*)0;
                    int *l_2275 = &l_1944.f3.f6.f4;
                    int l_2276 = 0x05FAED77L;
                    int *l_2277 = &l_2266;
                    int *l_2278 = (void*)0;
                    int *l_2279 = &l_2034;
                    int *l_2280 = &l_1944.f3.f1.f4;
                    int *l_2281 = &g_953.f3.f6.f4;
                    int *l_2282 = &l_2154;
                    int *l_2283 = &l_2034;
                    int *l_2284 = &g_1554.f3.f1.f4;
                    int *l_2285 = (void*)0;
                    int *l_2286 = (void*)0;
                    int *l_2287 = &l_1964;
                    int *l_2288 = &l_2077.f3.f1.f4;
                    int *l_2289 = &g_41.f3.f1.f4;
                    int *l_2290 = &l_2276;
                    int *l_2292 = &l_2030;
                    int *l_2293 = &l_2077.f3.f6.f4;
                    int *l_2294 = &l_1952;
                    int *l_2295 = &l_2066;
                    int *l_2297 = &l_1988;
                    int *l_2298 = (void*)0;
                    int *l_2299 = &l_2124;
                    int *l_2300 = &g_953.f3.f6.f4;
                    int *l_2301 = &l_2076.f6.f4;
                    int *l_2303 = &l_2209.f3.f6.f4;
                    int *l_2304 = &g_953.f3.f1.f4;
                    int *l_2305 = &g_1554.f3.f6.f4;
                    int *l_2306 = &l_2276;
                    int *l_2308 = &l_2296;
                    int l_2309 = 0xC3170D32L;
                    int *l_2310 = &l_2124;
                    struct S1 **l_2314 = &l_1949;
                    if ((safe_add_func_int16_t_s_s((((!(g_1554.f3.f6.f2 , (p_3.f7 , p_3.f3))) == g_41.f3.f5) != p_3.f3), p_3.f0)))
                    {
                        int l_2257 = 0L;
                        struct S1 l_2258 = {0x774D4F27C3334079LL,{18446744073709551611UL,4UL,3UL,0x1CL,0xC54119D5L,0x1D0FL,65535UL,0xC28896DCL},0UL,0x481EL,0UL,18446744073709551615UL,{8UL,65527UL,0UL,0xDBL,5L,0x960FL,0xCA55L,0x3E5CB630L},2UL};
                        struct S2 l_2259 = {1UL,0x72L,18446744073709551608UL,{1L,{0x453175861D263B78LL,0x0A9EL,6UL,9L,0x96C528CEL,0x3163L,0xEAC6L,0x74DE5B13L},0xA9A286CCL,-1L,1UL,0x7ECCE6E5L,{0x940CE2C722A4151FLL,0x5B4CL,3UL,0xCDL,0x46071720L,0x4152L,0x9E97L,0UL},4294967295UL},18446744073709551612UL,0x3B6BA2DEL};
                        (*g_83) = l_2208;
                        (*l_2049) = (&l_1949 == ((*l_2208) , (void*)0));
                    }
                    else
                    {
                        unsigned short l_2260 = 0x218BL;
                        return l_2260;
                    }
                    g_2311++;
                    l_2314 = &g_777;
                }
            }
        }
        else
        {
            char l_2323 = (-1L);
            for (g_2227 = 0; (g_2227 < 8); ++g_2227)
            {
                struct S2 l_2317 = {0xC6ECL,0UL,0xE7216AF0575F35E0LL,{0x63BE86588FCD219DLL,{0x88DF23BE7A926F84LL,1UL,0UL,0xE7L,-9L,0x39CBL,0xCA0BL,0xCAE3DE56L},0xEB86763DL,0x5E26L,1UL,3UL,{0xDC64305BA5D1972DLL,0xD97EL,0x77B3557FD0D94A53LL,-9L,-2L,0L,0xC2B2L,0xC6421DD7L},4294967295UL},0x7625B0FDL,8L};
                struct S2 *l_2318 = &g_953;
                (*l_2318) = l_2317;
                (*l_2010) &= ((((p_3.f0 <= ((safe_mod_func_int32_t_s_s(p_3.f2, (safe_mod_func_int64_t_s_s(l_2323, (*l_2078))))) < (((l_2323 , (*l_2078)) == p_3.f1) , ((g_953.f0 , (void*)0) != (*g_1097))))) , p_3.f5) , &l_2078) == &g_367);
            }
            (*g_1774) = p_3;
            (*l_2002) = (*l_2078);
        }
    }
    if ((func_16(l_1944, l_1944, l_1944.f3.f6) < 0x62EBA85F3E59AC6ALL))
    {
        struct S2 ***l_2332 = (void*)0;
        short l_2344 = (-9L);
        (*g_367) &= ((void*)0 != l_2332);
        (*g_83) = &g_476;
        (*g_1697) = (safe_mod_func_uint8_t_u_u(((((((!0x1454L) < 0xC0B9L) | ((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((void*)0 == l_2339), (safe_add_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(((void*)0 == &l_2078), (l_1949 != l_1949))) >= g_1554.f3.f4) > 2UL), g_1554.f3.f6.f2)))), p_3.f3)) , g_1171)) & 0xB60B1512L) < p_3.f4) , 0xB7L), 0xBEL));
    }
    else
    {
        char l_2389 = 0x9EL;
        int l_2412 = (-6L);
        struct S2 l_2418 = {65529UL,2UL,1UL,{0L,{0xA6ED526661D8962ALL,0x9251L,0x848737A827A6E4CBLL,0x94L,-1L,0x6C36L,65527UL,1UL},18446744073709551615UL,0L,4294967286UL,0x076A02C3L,{0xC6DCBDF79AAA9B3ALL,65535UL,0x5BABD6343385CB9ALL,0xACL,9L,-1L,0UL,0x13CF4393L},3UL},0x06F24256L,0xFCB284F7L};
        struct S2 l_2435 = {65535UL,0x0EL,0xA4E96F5C0A7B156BLL,{0x83F244F4A1837904LL,{6UL,65534UL,18446744073709551612UL,1L,-1L,3L,0x2B28L,2UL},0UL,1L,0UL,0xBA22A659L,{8UL,2UL,0x1B989084BEDBF2F4LL,0L,0x2381F8A8L,0x17C5L,0xE652L,0UL},2UL},0x822F0C1CL,0x22CFCE65L};
        struct S1 l_2452 = {0x1F17FCF4DE3B6101LL,{18446744073709551615UL,2UL,0x509231EBFDAF15DFLL,0x04L,-2L,0L,0x712CL,0xBA531BA1L},18446744073709551610UL,0x868EL,0xD4B5C51EL,1UL,{0x69C8840A180DF2C1LL,0xD3FAL,0x7A30B8B7E7C31E42LL,0x19L,0xF0B3CD28L,0x86CBL,0xEF78L,0xAAC7B1F2L},0x2B8113A3L};
        int **l_2466 = (void*)0;
        unsigned long long l_2478 = 4UL;
        struct S1 **l_2501 = &g_777;
        struct S2 **l_2651 = (void*)0;
        struct S0 *l_2653 = &g_31;
        for (g_953.f3.f1.f1 = (-8); (g_953.f3.f1.f1 >= 51); g_953.f3.f1.f1++)
        {
            int *l_2347 = &g_2302;
            int *l_2348 = &l_2124;
            int *l_2349 = &l_2307;
            int l_2350 = 0x07270C51L;
            int *l_2351 = (void*)0;
            int *l_2352 = (void*)0;
            int *l_2353 = &g_41.f3.f6.f4;
            int *l_2354 = &l_2307;
            int *l_2355 = &g_476;
            int *l_2356 = &l_2124;
            int *l_2357 = &g_1554.f3.f1.f4;
            int *l_2358 = &l_2307;
            int *l_2359 = &l_2265;
            int *l_2360 = &l_2124;
            int *l_2361 = &l_2307;
            int *l_2362 = &l_1944.f3.f1.f4;
            int *l_2363 = &g_476;
            int *l_2364 = &g_41.f3.f6.f4;
            int *l_2365 = &l_2350;
            int *l_2366 = (void*)0;
            int *l_2367 = &g_476;
            int *l_2368 = &g_31.f4;
            int *l_2369 = (void*)0;
            int *l_2370 = &g_476;
            int *l_2371 = &g_31.f4;
            int *l_2372 = &l_2120;
            int *l_2373 = &l_2350;
            int *l_2374 = &g_1554.f3.f1.f4;
            int *l_2375 = &g_1554.f3.f6.f4;
            int *l_2376 = &g_31.f4;
            int *l_2377 = &g_1554.f3.f1.f4;
            int *l_2378 = &l_2124;
            int *l_2379 = (void*)0;
            int *l_2380 = (void*)0;
            int *l_2381 = &g_1554.f3.f1.f4;
            int *l_2382 = &g_476;
            int *l_2383 = &g_953.f3.f6.f4;
            int *l_2384 = &l_2124;
            int *l_2385 = &g_1554.f3.f1.f4;
            int *l_2386 = &g_1554.f3.f1.f4;
            int *l_2387 = &g_2302;
            int *l_2388 = &l_2120;
            int *l_2390 = (void*)0;
            int *l_2391 = (void*)0;
            int *l_2392 = &g_1554.f3.f1.f4;
            int *l_2393 = &l_2124;
            int *l_2394 = &g_31.f4;
            int *l_2395 = (void*)0;
            int *l_2396 = &l_2120;
            int *l_2397 = &l_2120;
            int *l_2398 = (void*)0;
            int *l_2399 = &l_1944.f3.f6.f4;
            int *l_2400 = &g_953.f3.f1.f4;
            int *l_2401 = &g_953.f3.f6.f4;
            int *l_2402 = &g_31.f4;
            int *l_2403 = (void*)0;
            int *l_2404 = &l_2265;
            int *l_2405 = (void*)0;
            int *l_2406 = (void*)0;
            int *l_2407 = &g_953.f3.f1.f4;
            int *l_2408 = &l_2120;
            unsigned l_2409 = 0xF627A0C2L;
            struct S2 l_2417 = {8UL,0x2CL,1UL,{0xBB3A9320D17F1BC8LL,{18446744073709551608UL,0x1684L,0x1ED70A3D4C95F937LL,6L,0L,-1L,0xCED3L,0x13B24B55L},0x5E05E2C1L,0L,0xFB1423F2L,0x3C54BF81L,{0xD32C4D411FF8E4D7LL,0xC9E8L,0x69D0937735F0FC72LL,6L,0L,0xA25AL,65535UL,0UL},0x7547E682L},1UL,0x074EAB39L};
            --l_2409;
            (*l_2394) = 4L;
            if (l_2412)
                break;
            (*g_83) = &l_2350;
        }
        if ((safe_rshift_func_int16_t_s_u(func_16(l_1944, l_1944, g_2437), (*l_2078))))
        {
            int *l_2438 = &l_2120;
            struct S2 **l_2441 = (void*)0;
            struct S2 l_2444 = {0UL,0x03L,0x94BDD908742F0175LL,{1L,{0xE15B255D53F49CEBLL,0x64B9L,7UL,-1L,0x8DDC484DL,-4L,1UL,0x9FE20D8CL},18446744073709551615UL,-2L,0x8896C288L,0x91D73FFDL,{0UL,65535UL,0xBC2A4F5D57FFB604LL,0x35L,0L,-1L,0xF1C0L,0x252286B0L},0xAFCDCBE1L},0xF6A73A13L,0x1BA4A2EDL};
            p_3.f4 &= (func_64(l_2438, (((((*l_2078) & (((safe_rshift_func_int16_t_s_s(1L, (p_3.f6 & ((g_41.f3.f6.f7 , l_2441) != (void*)0)))) || (((safe_sub_func_uint32_t_u_u(((func_64(&l_2412, l_1944, l_2438, p_3.f3) < p_3.f3) != 0x9060C652L), p_3.f0)) >= p_4) & p_3.f2)) | l_2418.f3.f1.f1)) | 255UL) < g_890) , l_2444), &l_2124, l_2418.f3.f4) , (*l_2438));
            return p_3.f6;
        }
        else
        {
            char l_2455 = 0x77L;
            int *l_2456 = &l_2452.f6.f4;
            struct S2 **l_2463 = (void*)0;
            struct S0 l_2471 = {0x2C5F327FD1169ED0LL,0UL,0x0CBE25719ED7F25FLL,1L,8L,-1L,0x3DDDL,18446744073709551615UL};
            struct S0 l_2489 = {0x5EC1DF960A4947F6LL,0x5F33L,0x317D15FACDBE21D7LL,0x8BL,0L,9L,65530UL,1UL};
            struct S1 l_2499 = {-8L,{8UL,0UL,7UL,0xFCL,0L,0xA6BCL,0x7156L,0x3A55A411L},3UL,0x6456L,4294967295UL,1UL,{0xD4E203D7E6DE11D6LL,0xC043L,18446744073709551615UL,0L,0x06852DB5L,-1L,65534UL,0xFA2B8731L},0x85A0FF81L};
            int ***l_2500 = &l_2466;
            unsigned l_2594 = 18446744073709551609UL;
            int l_2666 = 1L;
            unsigned long long l_2828 = 0x9BC40DEA73EE16D2LL;
            int l_2867 = 0L;
            for (g_2437.f1 = (-18); (g_2437.f1 > 14); ++g_2437.f1)
            {
                int *l_2447 = (void*)0;
                struct S2 l_2467 = {0x9F14L,0x6BL,3UL,{0xA02C9800CEBA5614LL,{0x7F207B071EA15F7DLL,0xA308L,0x8A5887D3A2CDE4E0LL,9L,-2L,0xE2A0L,0x29BAL,0UL},0xB5C07A1BL,-3L,4294967292UL,0x7D6AAE5CL,{0xC972B452729CF19DLL,0xDA0DL,1UL,-9L,0x035474EBL,0L,0xF37AL,0xD95EA744L},0x10A0A8A6L},18446744073709551615UL,0x6A7AF58CL};
                l_2456 = &l_2412;
                if ((safe_sub_func_uint64_t_u_u((0x9CL > (((safe_mod_func_uint8_t_u_u(253UL, ((g_274 > (*l_2078)) || ((*g_1097) != l_2463)))) < ((safe_mod_func_uint32_t_u_u((p_3.f2 ^ ((void*)0 == l_2466)), g_953.f3.f6.f0)) != (*l_2456))) <= 0UL)), (*l_2456))))
                {
                    struct S2 l_2470 = {1UL,1UL,0UL,{0x317FFADB6D2CD733LL,{18446744073709551609UL,0xA863L,0xAC9E9D3B1B94F347LL,-1L,0xB34D2A2EL,0xB9BFL,0UL,0x934D6B83L},0xCB6AD5A4L,0x8FD7L,3UL,0x18DB6470L,{0x8B8D98653A53984ALL,0xD29FL,0x207CBFEBF97F6750LL,7L,2L,0L,4UL,0x810DB14AL},0UL},0xEE57CBA1L,-3L};
                    if (p_3.f7)
                    {
                        (*l_2078) = ((p_3.f7 , (-8L)) && 4294967291UL);
                        (*g_83) = &g_476;
                    }
                    else
                    {
                        (*g_83) = l_2447;
                        if ((*l_2078))
                            continue;
                        if (p_4)
                            continue;
                    }
                    p_3.f4 |= ((*l_2456) & ((1UL | (l_2463 == (l_1944 , (p_3.f0 , (*g_1097))))) == func_16(l_2418, l_2470, l_2471)));
                    if (((*l_2456) , (func_20((g_1554.f3.f4 != (&l_1944 != (*g_1098))), (*g_777), (p_3.f4 , p_4), ((+(*l_2078)) , (*g_777)), l_2418.f3.f6) , (*l_2456))))
                    {
                        struct S1 l_2474 = {-1L,{18446744073709551615UL,1UL,0x9255627AA5B181B7LL,0x6CL,-1L,-1L,0UL,18446744073709551609UL},0x9268D1FBL,2L,1UL,8UL,{0x8B7BE7B26419C07DLL,0xE65FL,0UL,-1L,0x65497B4EL,5L,65535UL,0x60E77CC7L},0UL};
                        short l_2475 = 0x2E7FL;
                        (*g_1697) |= ((safe_lshift_func_uint8_t_u_u(((*l_2456) , (*l_2078)), g_1554.f3.f6.f7)) < 0x24L);
                        p_3.f4 = ((safe_rshift_func_int16_t_s_s(l_2474.f2, 11)) , (*l_2078));
                        if (l_2478)
                            break;
                        (*g_83) = (l_2470.f5 , &g_2302);
                    }
                    else
                    {
                        (*g_83) = &l_2436;
                        (*g_1774) = (**l_2339);
                    }
                    (**g_83) = (*g_367);
                }
                else
                {
                    struct S2 l_2488 = {0x29E9L,8UL,1UL,{0x9321BC28A3C03DCBLL,{0x831800B86BB93A6ELL,0x6F52L,0x2A8D9C09EC38E1BFLL,8L,1L,0xCE76L,65535UL,18446744073709551615UL},0x009588F7L,0x67C8L,4294967286UL,2UL,{0UL,2UL,0x6BA42AF8549E2CD4LL,0xCBL,0x821A9890L,1L,0x7F42L,0x28AFB7D9L},0x33D69C62L},0UL,1L};
                    if (p_3.f3)
                    {
                        struct S1 **l_2487 = &l_1949;
                        struct S2 l_2492 = {0xAA96L,0x16L,0x647DEC89B1834C02LL,{-2L,{0xE42FD781A022790BLL,0x8661L,1UL,-1L,0L,0x7571L,0x77E8L,18446744073709551615UL},0xFEBAEEF2L,-4L,1UL,3UL,{18446744073709551615UL,0xECCCL,0x1E2C0D37AD4351CDLL,0xB3L,-3L,-1L,0x3E64L,0x147909B7L},1UL},0xBC781CEDL,0xF6EFBA1AL};
                        (*l_2487) = g_777;
                        (*l_2456) ^= ((p_3.f3 >= func_16(l_1944, l_2488, l_2489)) <= (safe_lshift_func_uint8_t_u_s((l_1949 == (l_2492 , g_777)), 2)));
                    }
                    else
                    {
                        (*g_777) = (*g_777);
                        p_3.f4 |= ((p_3.f7 , ((safe_add_func_int16_t_s_s((g_2437.f7 != (((((safe_rshift_func_int8_t_s_s((p_3.f2 != g_1767), (safe_rshift_func_uint16_t_u_u(p_4, 8)))) && 0x4399L) <= func_16(l_1944, l_1944, l_2467.f3.f6)) < 0x97689278A4911CCFLL) , (*l_2078))), l_2488.f3.f0)) >= g_31.f7)) <= 0xEA65L);
                    }
                }
                if (p_3.f3)
                    continue;
            }
            if (func_16(l_2418, l_1944, p_3))
            {
                struct S2 l_2511 = {0UL,246UL,18446744073709551612UL,{0L,{0x208E89F23B65C4ECLL,7UL,0UL,-10L,0x7002ECD4L,0x03A8L,9UL,0UL},0x1305499CL,0xBA90L,0xB767B376L,18446744073709551615UL,{0x0187A30E59352247LL,0UL,0xB4DF10050AECCFC7LL,0xCEL,3L,0x4EE8L,0xCA97L,18446744073709551615UL},1UL},0x19133D48L,0xAB10ED2AL};
                int l_2537 = 0xD3918D4DL;
                int l_2551 = (-3L);
                int **l_2659 = (void*)0;
                if (l_2503)
                {
                    struct S2 l_2512 = {65535UL,0x38L,0x5F573F6651D59FB4LL,{-6L,{0x99DB0DCC42B5F307LL,0x1BA6L,0x49601793202A9B44LL,0xB5L,0xA5FD5C3AL,1L,0xC490L,0x50DD9F31L},0x5B027A91L,0xFA9DL,0xF15C8862L,18446744073709551613UL,{0x0C39718655DCCE30LL,0x38D5L,0xD7BA2CA0061E2E1ELL,0xBCL,0xB78FF20EL,0x08E4L,0xAEF1L,7UL},0x2307333BL},0UL,-9L};
                    int l_2570 = 1L;
                    int l_2597 = (-5L);
                    unsigned l_2648 = 0UL;
                    if (p_3.f6)
                    {
                        struct S2 l_2508 = {0xE514L,0x86L,6UL,{0xE0D2C3DA88E9DE53LL,{0UL,65535UL,18446744073709551615UL,0x2DL,0x648FB317L,0x5C3EL,65529UL,3UL},0x415B52D1L,-1L,0UL,18446744073709551610UL,{0xC7D9ACC98CB2CAB9LL,0xE7F8L,0xE0BD880D91824DA4LL,0xCCL,-7L,-7L,3UL,18446744073709551611UL},6UL},0x8F2C1609L,0x65E11ED7L};
                        (*l_2078) = ((3L >= ((safe_sub_func_uint32_t_u_u((l_2435 , g_953.f3.f6.f0), p_3.f3)) , 0x9EL)) ^ (*l_2078));
                        l_2508 = l_2512;
                        (*l_1949) = l_2499;
                    }
                    else
                    {
                        int *l_2513 = (void*)0;
                        int *l_2514 = (void*)0;
                        int *l_2515 = &l_2511.f3.f1.f4;
                        int *l_2516 = &g_41.f3.f1.f4;
                        int *l_2517 = (void*)0;
                        int *l_2518 = &g_1554.f3.f1.f4;
                        int *l_2519 = &l_2489.f4;
                        char l_2520 = 8L;
                        int *l_2521 = &l_2452.f1.f4;
                        int *l_2522 = &l_2435.f3.f6.f4;
                        int *l_2523 = &g_2302;
                        int *l_2524 = &g_476;
                        int *l_2525 = &l_2502.f4;
                        int *l_2526 = &l_2436;
                        int *l_2527 = &l_2124;
                        int *l_2528 = (void*)0;
                        int *l_2529 = &g_1554.f3.f6.f4;
                        int *l_2530 = &l_2489.f4;
                        int *l_2531 = &l_2435.f3.f6.f4;
                        int *l_2532 = (void*)0;
                        int *l_2533 = &l_2412;
                        int l_2534 = 0x4A6D0D7EL;
                        int *l_2535 = &l_2471.f4;
                        int *l_2536 = &l_2489.f4;
                        int *l_2538 = (void*)0;
                        int *l_2539 = &l_2265;
                        int *l_2540 = &l_2436;
                        int *l_2541 = (void*)0;
                        int *l_2542 = (void*)0;
                        int *l_2543 = &l_2499.f6.f4;
                        int *l_2544 = (void*)0;
                        int *l_2545 = &l_2489.f4;
                        int *l_2546 = (void*)0;
                        int *l_2547 = &l_2534;
                        int *l_2548 = &l_2124;
                        int *l_2549 = &l_2489.f4;
                        int *l_2550 = (void*)0;
                        int *l_2552 = &l_2537;
                        int *l_2553 = (void*)0;
                        int *l_2554 = &l_2499.f1.f4;
                        int *l_2555 = &l_2418.f3.f1.f4;
                        int *l_2556 = &l_2512.f3.f6.f4;
                        int *l_2557 = &l_2265;
                        int *l_2558 = &l_2511.f3.f6.f4;
                        int *l_2559 = &l_2512.f3.f6.f4;
                        int *l_2560 = &l_2452.f6.f4;
                        int *l_2561 = &l_2512.f3.f6.f4;
                        int *l_2562 = &l_2512.f3.f6.f4;
                        int *l_2563 = &l_2412;
                        int *l_2564 = &l_2307;
                        int *l_2565 = &l_2265;
                        int *l_2566 = (void*)0;
                        int *l_2567 = &l_2502.f4;
                        int *l_2568 = &l_1944.f3.f1.f4;
                        int *l_2569 = &l_2124;
                        int *l_2571 = &l_1944.f3.f1.f4;
                        int *l_2572 = &l_2551;
                        int *l_2573 = &l_2418.f3.f6.f4;
                        int l_2574 = 0x1D8526C4L;
                        int *l_2575 = &l_2512.f3.f1.f4;
                        int *l_2576 = &l_2471.f4;
                        int *l_2577 = (void*)0;
                        int *l_2578 = &l_2265;
                        int *l_2579 = &l_2471.f4;
                        int *l_2580 = &l_2418.f3.f1.f4;
                        int *l_2581 = &g_1554.f3.f1.f4;
                        int *l_2582 = &l_2307;
                        int *l_2583 = &g_1554.f3.f6.f4;
                        int *l_2584 = &l_2307;
                        int *l_2585 = &l_2435.f3.f1.f4;
                        int *l_2586 = &l_2265;
                        int *l_2587 = (void*)0;
                        int *l_2588 = &g_41.f3.f1.f4;
                        struct S0 ***l_2592 = (void*)0;
                        struct S0 ***l_2593 = &l_2339;
                        int *l_2598 = &g_41.f3.f1.f4;
                        int *l_2599 = &g_31.f4;
                        int *l_2600 = &g_41.f3.f6.f4;
                        int *l_2601 = &l_2597;
                        int *l_2602 = (void*)0;
                        int *l_2603 = &l_2307;
                        int *l_2604 = (void*)0;
                        int *l_2605 = &l_1944.f3.f1.f4;
                        int *l_2606 = (void*)0;
                        int *l_2607 = &l_2120;
                        int *l_2608 = &l_2570;
                        int *l_2609 = &l_2511.f3.f6.f4;
                        int *l_2610 = (void*)0;
                        int *l_2611 = &l_2120;
                        int *l_2612 = &l_2499.f6.f4;
                        int *l_2613 = &l_2452.f1.f4;
                        int *l_2614 = &l_2511.f3.f1.f4;
                        int *l_2615 = &l_2570;
                        int *l_2616 = (void*)0;
                        int *l_2617 = &g_953.f3.f1.f4;
                        int *l_2618 = &l_2597;
                        int *l_2619 = &g_953.f3.f1.f4;
                        int *l_2620 = &l_2551;
                        int *l_2621 = (void*)0;
                        int *l_2622 = &l_2537;
                        int *l_2623 = &g_953.f3.f6.f4;
                        int *l_2624 = &g_953.f3.f1.f4;
                        int *l_2625 = &l_2499.f6.f4;
                        int *l_2626 = &l_2412;
                        int *l_2627 = &l_2574;
                        int *l_2628 = &l_2499.f1.f4;
                        int *l_2629 = &g_2302;
                        int *l_2630 = &l_2307;
                        int *l_2631 = &l_2452.f6.f4;
                        int *l_2632 = &l_2436;
                        int *l_2633 = (void*)0;
                        int *l_2634 = &l_2452.f1.f4;
                        int *l_2635 = &l_2307;
                        int *l_2636 = (void*)0;
                        int *l_2637 = (void*)0;
                        int *l_2638 = &l_2574;
                        int *l_2639 = &l_2512.f3.f1.f4;
                        int *l_2640 = (void*)0;
                        int *l_2641 = (void*)0;
                        int *l_2642 = &l_2512.f3.f1.f4;
                        int *l_2643 = &l_2452.f1.f4;
                        int *l_2644 = &l_2418.f3.f1.f4;
                        int *l_2645 = (void*)0;
                        int *l_2646 = (void*)0;
                        int *l_2647 = &l_2499.f1.f4;
                        l_2589--;
                        (*l_2593) = (l_2435 , &g_1774);
                        l_2594--;
                        --l_2648;
                    }
                    (*g_367) = ((((void*)0 == l_2651) <= ((((((void*)0 == l_2652) & (252UL && (l_2653 == (void*)0))) != ((p_3.f7 , func_64(&g_2302, l_1944, &l_2597, g_953.f3.f1.f4)) < g_41.f1)) == g_1554.f3.f6.f3) , 9L)) >= g_733);
                    (*l_2456) &= (g_1554.f3.f6.f0 <= p_3.f4);
                    (*l_2078) &= (*g_367);
                }
                else
                {
                    unsigned long long l_2654 = 1UL;
                    (*l_2078) = l_2654;
                }
                for (l_2452.f3 = 0; (l_2452.f3 == (-24)); l_2452.f3--)
                {
                    unsigned l_2662 = 0xF3568317L;
                    int *l_2665 = &l_2418.f3.f6.f4;
                    int l_2672 = 0x71F7C409L;
                    int l_2719 = 0xC4FF34F1L;
                    int l_2725 = 0xD5ED675EL;
                    int l_2731 = 0x7CD04371L;
                    int l_2759 = 0x6CBD431BL;
                    int l_2760 = 0xD6ED070BL;
                    struct S2 l_2826 = {0UL,1UL,0UL,{-9L,{0x8945BD8592EA19C4LL,0xE012L,0x58955185C183433BLL,-1L,5L,-1L,0xC78FL,4UL},18446744073709551615UL,1L,2UL,0xA399B6E6L,{0x7C35638F954F9986LL,0UL,0x825439125E5609E3LL,0x49L,-1L,0xBA9EL,0xA809L,18446744073709551611UL},0x9902668FL},0UL,0x555E3E62L};
                    if ((p_3 , (p_3 , (safe_lshift_func_int16_t_s_s(((+(*g_367)) && ((((((l_2659 != &g_1697) != (safe_rshift_func_int8_t_s_s((p_3.f1 != p_3.f5), g_953.f3.f1.f7))) || (p_3.f4 > 1L)) , (*l_2456)) || g_1554.f3.f3) , p_3.f4)), p_3.f0)))))
                    {
                        --l_2662;
                        p_3.f4 = 0x653A475FL;
                        (*l_2456) &= func_64(&l_2124, l_2511, l_2665, g_1554.f3.f1.f6);
                    }
                    else
                    {
                        int *l_2667 = &l_1944.f3.f6.f4;
                        int *l_2668 = (void*)0;
                        int *l_2669 = (void*)0;
                        int *l_2670 = (void*)0;
                        int *l_2671 = &l_2511.f3.f1.f4;
                        int *l_2673 = &l_2499.f1.f4;
                        int *l_2674 = &l_2499.f6.f4;
                        int *l_2675 = &l_2672;
                        int *l_2676 = &g_2437.f4;
                        int *l_2677 = &g_953.f3.f6.f4;
                        int *l_2678 = &g_41.f3.f6.f4;
                        int *l_2679 = &g_2437.f4;
                        int *l_2680 = (void*)0;
                        int *l_2681 = (void*)0;
                        int *l_2682 = &l_2511.f3.f6.f4;
                        int *l_2683 = &g_1554.f3.f6.f4;
                        int *l_2684 = &g_1554.f3.f6.f4;
                        int *l_2685 = &l_2502.f4;
                        int *l_2686 = &l_2499.f1.f4;
                        int *l_2687 = &l_2435.f3.f1.f4;
                        int *l_2688 = (void*)0;
                        int l_2689 = 4L;
                        int *l_2690 = &g_476;
                        int *l_2691 = &l_2120;
                        int *l_2692 = &g_41.f3.f1.f4;
                        int *l_2693 = &l_2551;
                        int *l_2694 = &l_2672;
                        int *l_2695 = &l_2502.f4;
                        int *l_2696 = &l_2689;
                        int *l_2697 = (void*)0;
                        int *l_2698 = &l_2452.f6.f4;
                        int *l_2699 = &l_2551;
                        int *l_2700 = &l_2672;
                        int *l_2701 = &l_2436;
                        int *l_2702 = (void*)0;
                        int *l_2703 = (void*)0;
                        int *l_2704 = &l_1944.f3.f6.f4;
                        int *l_2705 = &g_476;
                        int l_2706 = 0x4001837DL;
                        int *l_2707 = &l_2502.f4;
                        int *l_2708 = &l_2418.f3.f6.f4;
                        int *l_2709 = &l_2499.f6.f4;
                        int l_2710 = 7L;
                        int *l_2711 = (void*)0;
                        int *l_2712 = &g_476;
                        int *l_2713 = (void*)0;
                        int *l_2714 = &l_2120;
                        int *l_2715 = (void*)0;
                        int *l_2716 = &l_2418.f3.f1.f4;
                        int *l_2717 = &g_31.f4;
                        int *l_2718 = &l_2412;
                        int *l_2720 = &l_2710;
                        int *l_2721 = (void*)0;
                        int *l_2722 = &l_2719;
                        int *l_2723 = &l_2124;
                        int *l_2724 = &g_2302;
                        int *l_2726 = &l_2537;
                        int *l_2727 = &l_2418.f3.f6.f4;
                        int *l_2728 = (void*)0;
                        int *l_2729 = &l_1944.f3.f6.f4;
                        int *l_2730 = &g_953.f3.f6.f4;
                        int *l_2732 = &l_2511.f3.f6.f4;
                        int *l_2733 = &l_2511.f3.f6.f4;
                        int *l_2734 = &l_2124;
                        int *l_2735 = &l_2418.f3.f6.f4;
                        int *l_2736 = &l_2435.f3.f6.f4;
                        int *l_2737 = (void*)0;
                        int *l_2738 = &l_2435.f3.f1.f4;
                        int *l_2739 = &l_2710;
                        int l_2740 = 8L;
                        int *l_2741 = &l_2710;
                        int *l_2742 = (void*)0;
                        int *l_2743 = &l_2551;
                        int *l_2744 = &l_1944.f3.f1.f4;
                        int *l_2745 = &l_2740;
                        int *l_2746 = &g_953.f3.f6.f4;
                        int *l_2747 = &l_2418.f3.f1.f4;
                        int *l_2748 = &l_2499.f6.f4;
                        int *l_2749 = (void*)0;
                        int *l_2750 = &l_2502.f4;
                        int *l_2751 = &l_2551;
                        int *l_2752 = &l_1944.f3.f6.f4;
                        int *l_2753 = (void*)0;
                        int *l_2754 = &l_2499.f1.f4;
                        int *l_2755 = &l_2452.f6.f4;
                        char l_2756 = 3L;
                        int *l_2757 = &l_2689;
                        int *l_2758 = &l_2452.f1.f4;
                        int *l_2761 = &l_2124;
                        int *l_2762 = &l_2436;
                        int *l_2763 = &l_2124;
                        int *l_2764 = &l_2452.f1.f4;
                        int *l_2765 = &l_2725;
                        int *l_2766 = &l_2471.f4;
                        int *l_2767 = &l_2672;
                        int *l_2768 = &l_2412;
                        int *l_2769 = (void*)0;
                        int *l_2770 = &l_2551;
                        int *l_2771 = (void*)0;
                        int *l_2772 = &l_2452.f6.f4;
                        int *l_2773 = &l_2731;
                        int *l_2774 = &l_2689;
                        int *l_2775 = (void*)0;
                        int *l_2776 = (void*)0;
                        int *l_2777 = &l_2511.f3.f6.f4;
                        int *l_2778 = &l_2418.f3.f1.f4;
                        int *l_2779 = &l_2551;
                        int *l_2780 = &l_2551;
                        int *l_2781 = (void*)0;
                        int *l_2782 = &l_2740;
                        int *l_2783 = &l_2412;
                        int *l_2784 = (void*)0;
                        int *l_2786 = &l_1944.f3.f1.f4;
                        int *l_2787 = &l_2672;
                        int *l_2788 = &l_2719;
                        int *l_2789 = &l_2710;
                        int *l_2791 = &g_41.f3.f6.f4;
                        int *l_2792 = &l_2435.f3.f1.f4;
                        int *l_2793 = &l_2759;
                        int *l_2794 = &l_2511.f3.f1.f4;
                        int *l_2795 = (void*)0;
                        int *l_2796 = &l_2499.f1.f4;
                        int *l_2797 = &l_2710;
                        int *l_2798 = &g_1554.f3.f6.f4;
                        int *l_2799 = (void*)0;
                        int *l_2800 = &l_2436;
                        int *l_2801 = &l_2719;
                        int *l_2802 = &l_2725;
                        int *l_2803 = &l_2436;
                        int *l_2804 = (void*)0;
                        int *l_2805 = &l_2452.f1.f4;
                        int *l_2806 = (void*)0;
                        int *l_2807 = (void*)0;
                        int *l_2808 = &g_41.f3.f6.f4;
                        int *l_2809 = &l_2452.f6.f4;
                        int *l_2810 = &l_2710;
                        int *l_2811 = &g_476;
                        int *l_2812 = &g_953.f3.f6.f4;
                        int *l_2813 = &g_476;
                        int *l_2814 = &l_2452.f6.f4;
                        int *l_2815 = &l_2511.f3.f1.f4;
                        int *l_2816 = &l_2551;
                        int *l_2817 = (void*)0;
                        int *l_2818 = &l_2265;
                        struct S2 l_2827 = {65535UL,0x63L,0xA83157B272C45AEDLL,{-1L,{0xE39DC0D136BAE73DLL,0xC584L,0x502CA6F656E5FB2DLL,-1L,-9L,1L,0xE08CL,18446744073709551615UL},0x12092695L,1L,4294967290UL,0UL,{3UL,5UL,0xD6710213713BC4FDLL,0x7FL,-1L,4L,3UL,0UL},0xD48B72D2L},0xB8E15B23L,0x12BD3F51L};
                        g_2819--;
                        l_2456 = &l_2265;
                        (*g_83) = &g_2302;
                        (*l_2693) |= (*g_367);
                    }
                }
            }
            else
            {
                int ***l_2829 = (void*)0;
                (*l_2078) = (p_3 , (l_2829 != &l_2466));
                p_3.f4 |= 0xDCB4754EL;
                for (l_2435.f5 = 7; (l_2435.f5 >= (-6)); --l_2435.f5)
                {
                    unsigned char l_2890 = 0UL;
                    (*g_1774) = p_3;
                    for (l_1944.f3.f6.f0 = 11; (l_1944.f3.f6.f0 == 22); ++l_1944.f3.f6.f0)
                    {
                        int *l_2834 = &l_2307;
                        int *l_2835 = &l_1944.f3.f6.f4;
                        int *l_2836 = &l_2489.f4;
                        int *l_2837 = &l_2412;
                        int *l_2838 = &g_41.f3.f1.f4;
                        int *l_2839 = &l_2418.f3.f1.f4;
                        int *l_2840 = &g_476;
                        int *l_2841 = (void*)0;
                        int *l_2842 = (void*)0;
                        int *l_2843 = &l_2120;
                        int *l_2844 = (void*)0;
                        int *l_2845 = (void*)0;
                        int *l_2846 = &g_1554.f3.f1.f4;
                        int *l_2847 = (void*)0;
                        int *l_2848 = &l_2418.f3.f1.f4;
                        int *l_2849 = (void*)0;
                        int l_2850 = (-1L);
                        int *l_2851 = (void*)0;
                        int *l_2852 = &l_2265;
                        int *l_2853 = &g_476;
                        int *l_2854 = &l_2452.f6.f4;
                        int *l_2855 = &g_1554.f3.f6.f4;
                        int *l_2856 = (void*)0;
                        int *l_2857 = &l_2452.f6.f4;
                        int *l_2858 = &l_2499.f1.f4;
                        int *l_2859 = &l_2412;
                        int *l_2860 = (void*)0;
                        int *l_2861 = &g_1554.f3.f6.f4;
                        int *l_2862 = &g_2437.f4;
                        int *l_2863 = &l_2435.f3.f1.f4;
                        int *l_2864 = (void*)0;
                        int *l_2865 = &g_41.f3.f1.f4;
                        int *l_2866 = (void*)0;
                        int *l_2868 = (void*)0;
                        int *l_2869 = &l_2502.f4;
                        int *l_2870 = &l_2867;
                        int *l_2871 = &g_476;
                        int *l_2872 = &g_2785;
                        int *l_2873 = (void*)0;
                        int *l_2874 = (void*)0;
                        int *l_2875 = (void*)0;
                        int *l_2876 = &l_2418.f3.f6.f4;
                        int *l_2877 = (void*)0;
                        int *l_2878 = &l_2499.f6.f4;
                        int *l_2879 = &g_2785;
                        int *l_2880 = &l_1944.f3.f6.f4;
                        int *l_2881 = &g_31.f4;
                        int *l_2882 = &l_2452.f6.f4;
                        int *l_2883 = &g_2437.f4;
                        int *l_2884 = &l_2435.f3.f6.f4;
                        int *l_2885 = &l_2265;
                        int *l_2886 = &l_1944.f3.f6.f4;
                        int *l_2887 = (void*)0;
                        int *l_2888 = &g_41.f3.f1.f4;
                        int *l_2889 = &g_2437.f4;
                        --l_2890;
                    }
                }
                return p_3.f7;
            }
        }
        (*g_83) = func_69(l_2893);
    }
    return g_953.f3.f1.f4;
}







static unsigned char func_16(struct S2 p_17, struct S2 p_18, struct S0 p_19)
{
    (*g_1697) = (p_17.f3.f4 , ((*g_382) != (*g_382)));
    return g_41.f3.f6.f0;
}







static struct S2 func_20(long long p_21, struct S1 p_22, int p_23, struct S1 p_24, struct S0 p_25)
{
    unsigned l_1344 = 0xA2916D89L;
    int l_1391 = 0L;
    int l_1399 = 0x22176C30L;
    int l_1412 = 1L;
    int l_1432 = 0x6DB23F56L;
    int l_1460 = 0x1FD6359EL;
    short l_1534 = 5L;
    unsigned l_1537 = 0x92E126FCL;
    struct S2 l_1546 = {0x6CB3L,0x4BL,0UL,{-2L,{7UL,65527UL,0xD2340EAC7D585224LL,0x59L,0x17992301L,1L,1UL,0UL},0xB4304DBEL,-1L,4294967289UL,18446744073709551610UL,{0UL,65533UL,18446744073709551613UL,0xA6L,1L,-1L,65532UL,0x4471ECECL},4294967295UL},0x33544C7CL,0x4028FFECL};
    unsigned char l_1675 = 0x20L;
    int *l_1781 = &l_1412;
    int *l_1782 = &l_1391;
    int *l_1783 = &l_1432;
    int *l_1784 = &l_1399;
    int *l_1785 = &l_1391;
    int *l_1786 = &l_1391;
    int *l_1787 = (void*)0;
    int *l_1788 = &g_31.f4;
    int *l_1789 = &l_1460;
    int *l_1790 = (void*)0;
    int *l_1791 = &l_1412;
    int *l_1792 = &g_1554.f3.f6.f4;
    int *l_1793 = &l_1460;
    int *l_1794 = &g_31.f4;
    int *l_1795 = (void*)0;
    int *l_1796 = &l_1546.f3.f1.f4;
    int *l_1797 = (void*)0;
    int *l_1798 = (void*)0;
    int *l_1799 = &g_476;
    int *l_1800 = &g_953.f3.f1.f4;
    int *l_1801 = &l_1460;
    int *l_1802 = &g_41.f3.f6.f4;
    int *l_1803 = &g_31.f4;
    int *l_1804 = &g_1554.f3.f6.f4;
    int *l_1805 = &g_1554.f3.f6.f4;
    int *l_1806 = &g_1554.f3.f6.f4;
    int *l_1807 = (void*)0;
    int *l_1808 = &l_1546.f3.f6.f4;
    int *l_1809 = &l_1546.f3.f6.f4;
    int *l_1810 = &g_953.f3.f6.f4;
    int *l_1811 = &g_953.f3.f6.f4;
    int *l_1812 = &g_1554.f3.f1.f4;
    int *l_1813 = (void*)0;
    int *l_1814 = &g_41.f3.f6.f4;
    int *l_1815 = (void*)0;
    int *l_1816 = &l_1399;
    int *l_1817 = &g_41.f3.f6.f4;
    int *l_1818 = (void*)0;
    int *l_1819 = &l_1391;
    int *l_1820 = &g_31.f4;
    int *l_1821 = (void*)0;
    int *l_1822 = &l_1460;
    int *l_1823 = &g_476;
    int *l_1824 = &g_1554.f3.f1.f4;
    int *l_1825 = &g_1554.f3.f6.f4;
    int *l_1826 = &l_1546.f3.f6.f4;
    int *l_1827 = &l_1460;
    int *l_1828 = &l_1412;
    int *l_1829 = &g_953.f3.f1.f4;
    int *l_1830 = &l_1391;
    int *l_1831 = &l_1391;
    int l_1832 = 2L;
    int *l_1833 = (void*)0;
    int *l_1834 = &g_41.f3.f6.f4;
    int *l_1835 = &l_1412;
    int *l_1836 = &l_1832;
    int *l_1837 = &l_1832;
    int *l_1838 = &g_476;
    int *l_1839 = (void*)0;
    int *l_1840 = (void*)0;
    int *l_1841 = (void*)0;
    int *l_1842 = &g_41.f3.f1.f4;
    int *l_1843 = &l_1391;
    int *l_1844 = (void*)0;
    int *l_1845 = (void*)0;
    int *l_1846 = &l_1460;
    int *l_1847 = &g_41.f3.f6.f4;
    int *l_1848 = (void*)0;
    int *l_1849 = &g_41.f3.f6.f4;
    int *l_1850 = &l_1391;
    int *l_1851 = &l_1412;
    int *l_1852 = &l_1432;
    int *l_1853 = &g_1554.f3.f1.f4;
    int l_1854 = 1L;
    int *l_1855 = &g_1554.f3.f1.f4;
    int *l_1856 = &l_1546.f3.f6.f4;
    int *l_1857 = &l_1546.f3.f1.f4;
    int *l_1858 = &l_1832;
    int *l_1859 = (void*)0;
    int *l_1860 = &l_1412;
    int *l_1861 = &g_31.f4;
    int *l_1862 = (void*)0;
    int *l_1863 = &l_1832;
    int *l_1864 = &l_1432;
    int *l_1865 = &l_1546.f3.f6.f4;
    int *l_1866 = &g_41.f3.f1.f4;
    int *l_1867 = (void*)0;
    int *l_1868 = &g_953.f3.f6.f4;
    int *l_1869 = &g_953.f3.f6.f4;
    int *l_1870 = &l_1854;
    int *l_1871 = &l_1832;
    int *l_1872 = &l_1399;
    int *l_1873 = &g_953.f3.f6.f4;
    int *l_1874 = &l_1546.f3.f6.f4;
    int *l_1875 = &l_1546.f3.f1.f4;
    int *l_1876 = (void*)0;
    int *l_1877 = &l_1412;
    int *l_1878 = &g_41.f3.f6.f4;
    int *l_1879 = &g_41.f3.f6.f4;
    int *l_1880 = &l_1432;
    int *l_1881 = (void*)0;
    int *l_1882 = &g_1554.f3.f6.f4;
    int *l_1883 = &l_1412;
    int *l_1884 = &g_476;
    int *l_1885 = &g_31.f4;
    int *l_1886 = &l_1432;
    int *l_1887 = &g_41.f3.f1.f4;
    int *l_1888 = &l_1546.f3.f6.f4;
    int *l_1889 = (void*)0;
    int *l_1890 = &l_1399;
    int *l_1891 = &g_1554.f3.f1.f4;
    int *l_1892 = &g_41.f3.f6.f4;
    int *l_1893 = (void*)0;
    int *l_1894 = &g_953.f3.f6.f4;
    int *l_1895 = (void*)0;
    int *l_1896 = &g_476;
    int *l_1897 = &g_31.f4;
    int *l_1898 = &l_1854;
    int *l_1899 = &l_1399;
    int *l_1900 = &g_41.f3.f1.f4;
    int *l_1901 = (void*)0;
    int *l_1902 = &l_1854;
    int *l_1903 = &g_1554.f3.f6.f4;
    int *l_1904 = &g_1554.f3.f1.f4;
    int *l_1905 = &l_1432;
    int *l_1906 = (void*)0;
    int *l_1907 = &g_476;
    int l_1908 = 0x85DD4155L;
    int *l_1909 = &l_1432;
    int *l_1910 = &g_41.f3.f6.f4;
    int *l_1911 = &g_41.f3.f1.f4;
    int *l_1912 = &g_953.f3.f1.f4;
    int l_1913 = (-7L);
    int *l_1914 = (void*)0;
    int l_1915 = (-3L);
    int l_1916 = (-9L);
    int *l_1917 = &l_1399;
    int *l_1918 = &l_1854;
    int *l_1919 = (void*)0;
    int *l_1920 = &l_1460;
    int *l_1921 = (void*)0;
    int *l_1922 = &g_1554.f3.f6.f4;
    int l_1923 = (-3L);
    int *l_1924 = (void*)0;
    int *l_1925 = (void*)0;
    int *l_1926 = &l_1854;
    int l_1927 = 0xF627E3EEL;
    int l_1928 = 0xEE338162L;
    int *l_1929 = &g_41.f3.f1.f4;
    int *l_1930 = &l_1923;
    int *l_1931 = &l_1832;
    int *l_1932 = &g_1554.f3.f1.f4;
    int *l_1933 = &l_1460;
    int *l_1934 = &l_1832;
    int *l_1935 = &l_1928;
    int *l_1936 = &l_1854;
    int *l_1937 = &l_1391;
    if (g_31.f7)
    {
        int l_42 = (-9L);
        struct S2 l_1346 = {65535UL,0x92L,0UL,{-1L,{0xDE7AAD53182A9196LL,1UL,0UL,0x2AL,-1L,0x0290L,65535UL,4UL},0xE8340AE8L,-7L,4UL,0UL,{6UL,0xEA6FL,0xEBE1E596BDAB363FLL,0x61L,-1L,5L,0xDF4AL,18446744073709551615UL},7UL},8UL,0xE9A8B554L};
        int *l_1363 = &g_953.f3.f1.f4;
        struct S2 ***l_1388 = &g_1098;
        char l_1480 = 0x1DL;
        if (((+((safe_mod_func_uint8_t_u_u(g_31.f2, (safe_div_func_uint64_t_u_u(g_31.f6, (safe_add_func_int8_t_s_s(((func_38(g_41, l_42) | 0UL) < ((-3L) <= ((4L && g_41.f0) & l_1344))), g_41.f1)))))) != 0L)) == l_42))
        {
            int *l_1345 = &g_476;
            (*g_83) = l_1345;
            l_42 &= p_24.f1.f4;
            return l_1346;
        }
        else
        {
            char l_1358 = 0xC2L;
            struct S0 l_1366 = {0x853C268103C5E834LL,0x9C60L,0x911E8B0EECC9F243LL,0xF2L,1L,-8L,3UL,0xE1671D0DL};
            int l_1440 = 0x6200BDB1L;
            int l_1502 = (-1L);
            int l_1522 = 3L;
            struct S2 l_1533 = {1UL,255UL,0x4AEBAD8823E18B28LL,{0xFCB8EF62472B62A2LL,{0x8E9280190C4685FELL,65535UL,0x586529188A903AB6LL,0L,0x91193964L,0x5AE4L,0x97EDL,18446744073709551615UL},18446744073709551606UL,3L,0xC566C537L,18446744073709551606UL,{18446744073709551609UL,0xB182L,7UL,-1L,-5L,4L,65535UL,0x5EAE585DL},4294967295UL},0x10E2E695L,-8L};
            if (func_38(l_1346, ((*g_777) , g_953.f3.f5)))
            {
                unsigned char l_1355 = 0x4CL;
                struct S0 *l_1367 = &l_1346.f3.f1;
                struct S2 **l_1390 = &g_1099;
                int l_1497 = 1L;
                int l_1510 = 7L;
                int l_1511 = 0x11CAF25EL;
                int l_1526 = 0xB73875C4L;
                for (p_22.f1.f5 = 0; (p_22.f1.f5 == (-1)); p_22.f1.f5--)
                {
                    int *l_1349 = &g_41.f3.f1.f4;
                    int *l_1350 = &g_476;
                    int *l_1351 = (void*)0;
                    int *l_1352 = &g_41.f3.f6.f4;
                    int *l_1353 = &g_476;
                    int *l_1354 = &g_476;
                    l_1355--;
                    if (l_1358)
                    {
                        return l_1346;
                    }
                    else
                    {
                        struct S2 l_1362 = {0xEE6FL,0x3BL,0x92BF7CCB50686C7ELL,{0x1684C54C606FA391LL,{0x7350C4CE3B8225F8LL,0x3AE6L,0xD7AA1BBCDFDA4C65LL,0xF2L,6L,-1L,0UL,1UL},0x347F6C77L,0L,1UL,0x3A66A203L,{1UL,5UL,18446744073709551613UL,0x2BL,0x10BDE20CL,-9L,0xA84DL,0x11B2D7B6L},0xAD45CB7BL},0x3BC705A1L,0xA8F403D0L};
                        p_24.f6.f4 = ((((p_24 , (*g_1098)) != (void*)0) | (18446744073709551610UL < 0x5C307993967BED49LL)) | ((safe_div_func_int8_t_s_s((((g_41.f3.f6.f7 | g_41.f3.f1.f6) ^ (safe_unary_minus_func_uint16_t_u(((l_1355 , p_22.f1.f5) != (*l_1354))))) ^ 0x6EF55FB8L), (-1L))) && p_24.f5));
                        l_1363 = (l_1362 , func_69(l_1363));
                        (*l_1352) &= (*l_1353);
                        if ((*l_1363))
                            continue;
                    }
                }
                for (l_1346.f3.f6.f3 = 0; (l_1346.f3.f6.f3 < 24); l_1346.f3.f6.f3++)
                {
                    unsigned l_1530 = 7UL;
                    (*l_1363) = (l_1366 , p_22.f0);
                    if ((l_1367 != (*g_382)))
                    {
                        struct S2 ***l_1389 = &g_1098;
                        (*g_367) = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((((safe_mod_func_int8_t_s_s((0UL <= (((p_25.f7 > (safe_add_func_int8_t_s_s(0x39L, (safe_div_func_uint16_t_u_u((0x9E29CA46L == (((!(safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((g_953.f1 , (((((safe_rshift_func_uint8_t_u_u((~l_1355), 7)) >= (safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u((p_22.f5 == 65531UL), ((l_1388 == l_1389) == p_24.f6.f4))), (-4L)))) & g_953.f0) , l_1390) == l_1390)), g_300)), l_1344))) ^ l_1366.f3) ^ l_1355)), g_752))))) , p_22.f1.f3) , p_24.f1.f6)), 255UL)) >= 0x92L) , p_24.f6.f5) >= p_25.f7), 3)), g_41.f3.f7));
                    }
                    else
                    {
                        int *l_1392 = &g_41.f3.f6.f4;
                        int *l_1393 = &l_42;
                        int *l_1394 = &l_1391;
                        int *l_1395 = &l_1346.f3.f1.f4;
                        int *l_1396 = (void*)0;
                        int *l_1397 = &g_41.f3.f1.f4;
                        int *l_1398 = &g_476;
                        int *l_1400 = &l_1346.f3.f1.f4;
                        int *l_1401 = &l_1399;
                        int *l_1402 = &l_1399;
                        int *l_1403 = &g_31.f4;
                        int *l_1404 = &g_953.f3.f6.f4;
                        int *l_1405 = &g_476;
                        int *l_1406 = &l_1346.f3.f6.f4;
                        int *l_1407 = &g_953.f3.f6.f4;
                        int *l_1408 = &l_42;
                        int *l_1409 = &g_953.f3.f6.f4;
                        int *l_1410 = &g_476;
                        int *l_1411 = &l_42;
                        int *l_1413 = (void*)0;
                        int *l_1414 = &l_1391;
                        int *l_1415 = (void*)0;
                        int *l_1416 = &g_31.f4;
                        int *l_1417 = (void*)0;
                        int *l_1418 = &g_31.f4;
                        int *l_1419 = &g_41.f3.f6.f4;
                        int *l_1420 = &l_1366.f4;
                        int *l_1421 = (void*)0;
                        int l_1422 = 0x98E45538L;
                        int *l_1423 = &g_41.f3.f6.f4;
                        int *l_1424 = &g_31.f4;
                        int l_1425 = 0x4B3602B2L;
                        int *l_1426 = (void*)0;
                        int *l_1427 = &l_1399;
                        int *l_1428 = &l_1346.f3.f6.f4;
                        int *l_1429 = &g_31.f4;
                        int *l_1430 = &l_1366.f4;
                        int l_1431 = 0x69DADCDFL;
                        int *l_1433 = &l_1366.f4;
                        int *l_1434 = (void*)0;
                        int *l_1435 = &g_953.f3.f1.f4;
                        int *l_1436 = (void*)0;
                        int *l_1437 = &l_1346.f3.f1.f4;
                        int *l_1438 = &l_1432;
                        int *l_1439 = &g_41.f3.f6.f4;
                        int *l_1441 = &g_953.f3.f1.f4;
                        int *l_1442 = &l_42;
                        int *l_1443 = (void*)0;
                        int *l_1444 = (void*)0;
                        int *l_1445 = &l_1422;
                        int *l_1446 = (void*)0;
                        int *l_1447 = &l_1412;
                        int *l_1448 = (void*)0;
                        int *l_1449 = &l_1391;
                        int *l_1450 = &l_1366.f4;
                        int *l_1451 = &g_953.f3.f6.f4;
                        int *l_1452 = (void*)0;
                        int *l_1453 = (void*)0;
                        int *l_1454 = &g_41.f3.f1.f4;
                        int *l_1455 = &l_1425;
                        int *l_1456 = &l_1366.f4;
                        int *l_1457 = (void*)0;
                        int *l_1458 = &l_1431;
                        int l_1459 = 6L;
                        int *l_1461 = &g_953.f3.f6.f4;
                        int *l_1462 = &l_1460;
                        int *l_1463 = (void*)0;
                        int *l_1464 = &g_476;
                        int *l_1465 = &g_953.f3.f1.f4;
                        int *l_1466 = &l_1412;
                        int *l_1467 = (void*)0;
                        int *l_1468 = &l_42;
                        int *l_1469 = &l_1460;
                        int *l_1470 = (void*)0;
                        int *l_1471 = (void*)0;
                        int *l_1472 = (void*)0;
                        int *l_1473 = &l_1425;
                        int *l_1474 = &l_1346.f3.f1.f4;
                        int *l_1475 = &l_1366.f4;
                        int *l_1476 = &l_1440;
                        int *l_1477 = &l_1346.f3.f6.f4;
                        int *l_1478 = &g_476;
                        int *l_1479 = &l_42;
                        int *l_1481 = &l_1366.f4;
                        int *l_1482 = &g_953.f3.f1.f4;
                        int *l_1483 = (void*)0;
                        int *l_1484 = &g_41.f3.f1.f4;
                        int *l_1485 = &l_1346.f3.f1.f4;
                        int *l_1486 = (void*)0;
                        int *l_1487 = &l_1459;
                        int *l_1488 = &g_476;
                        int *l_1489 = (void*)0;
                        int *l_1490 = &g_41.f3.f1.f4;
                        int *l_1491 = (void*)0;
                        int *l_1492 = &g_476;
                        int *l_1493 = (void*)0;
                        int *l_1494 = (void*)0;
                        int *l_1495 = &l_1422;
                        int *l_1496 = &l_1425;
                        int *l_1498 = (void*)0;
                        int l_1499 = (-1L);
                        int *l_1500 = &l_1391;
                        int *l_1501 = &g_953.f3.f6.f4;
                        int *l_1503 = &l_1440;
                        int *l_1504 = &l_1502;
                        int *l_1505 = &g_41.f3.f6.f4;
                        int *l_1506 = &g_953.f3.f1.f4;
                        int *l_1507 = &l_1346.f3.f1.f4;
                        int *l_1508 = (void*)0;
                        int *l_1509 = &l_42;
                        int *l_1512 = (void*)0;
                        int *l_1513 = &l_1497;
                        int *l_1514 = &l_1440;
                        int *l_1515 = &l_1412;
                        int *l_1516 = &l_1412;
                        int *l_1517 = &l_1346.f3.f6.f4;
                        int *l_1518 = &l_1497;
                        int *l_1519 = &l_1346.f3.f1.f4;
                        int *l_1520 = (void*)0;
                        int *l_1521 = &l_1432;
                        int *l_1523 = (void*)0;
                        int *l_1524 = &l_1391;
                        int *l_1525 = &l_1522;
                        int *l_1527 = &g_953.f3.f6.f4;
                        int *l_1528 = &g_953.f3.f6.f4;
                        int *l_1529 = &l_1346.f3.f6.f4;
                        ++l_1530;
                    }
                }
                (*g_777) = (*g_777);
                (*g_367) |= 0xAC226F01L;
            }
            else
            {
                (*g_367) = ((void*)0 != &g_777);
            }
            (*g_83) = func_69(&p_23);
            (*g_367) ^= p_23;
        }
    }
    else
    {
        struct S2 l_1541 = {1UL,0xEBL,18446744073709551613UL,{-9L,{0xA47456B96E90B23CLL,1UL,18446744073709551606UL,0xC7L,2L,4L,65530UL,1UL},0x0C7A8383L,0x577CL,0xED1D0064L,0UL,{1UL,65535UL,0x53ED01B77B6E57DBLL,0x4BL,0x67F80080L,0xBF3CL,9UL,18446744073709551609UL},4294967292UL},18446744073709551610UL,7L};
        long long l_1549 = 0L;
        int *l_1551 = &l_1432;
        int l_1563 = (-6L);
        int l_1569 = 0L;
        char l_1589 = 0xABL;
        int *l_1683 = &l_1391;
        struct S1 **l_1684 = &g_777;
        int *l_1707 = &l_1391;
        unsigned l_1769 = 1UL;
        if (((1L >= l_1534) & 0x65DBL))
        {
            int ***l_1540 = (void*)0;
            struct S2 l_1550 = {0x3942L,0x65L,0x1DBBB309ADD2C354LL,{1L,{18446744073709551608UL,0x10EEL,1UL,-1L,0x01CB5538L,0L,0UL,18446744073709551615UL},18446744073709551610UL,-6L,0xBBC75A52L,0x150A1F7EL,{0xD0409A8B88393512LL,1UL,18446744073709551615UL,0x18L,1L,9L,0x726AL,0UL},0xCA4B2E3BL},1UL,0xA643AD26L};
            for (p_24.f7 = 0; (p_24.f7 > 3); p_24.f7++)
            {
                (*g_777) = (*g_777);
            }
            if (((0UL < (g_953.f3.f5 | (((void*)0 != &g_383) | 0x8F527CB9L))) ^ l_1537))
            {
                l_1460 &= (g_41.f3.f6.f5 && (safe_lshift_func_int16_t_s_u(0xB455L, ((&g_83 != l_1540) <= (func_38(l_1541, p_24.f1.f7) > p_24.f2)))));
            }
            else
            {
                unsigned char l_1542 = 0x3EL;
                l_1542 = l_1412;
            }
            if ((*g_367))
            {
                int l_1545 = 0x244E07F7L;
                (*l_1551) |= ((safe_sub_func_uint16_t_u_u(((0x35817621A2747070LL ^ (l_1545 | func_38(l_1546, ((((safe_sub_func_int8_t_s_s(l_1549, ((l_1546.f3.f1.f3 && func_64(&l_1391, l_1550, l_1551, ((*g_777) , l_1545))) ^ 0x35L))) == p_22.f6.f7) && 4UL) , (-5L))))) & p_24.f1.f7), l_1545)) || p_24.f6.f5);
            }
            else
            {
                int *l_1552 = (void*)0;
                struct S2 l_1553 = {0x4C20L,5UL,0xCFEDA0F265B800DCLL,{4L,{1UL,1UL,0xEBEF8D74AA29F7D3LL,8L,0L,1L,0x82D1L,0x41A389FDL},0x7222FD1BL,0xBCD8L,0x89D4EFB6L,0x50247602L,{5UL,0xF574L,0UL,0L,0x6A6F0A1AL,9L,0x2134L,0x53F8549CL},0x1ABFB2AAL},0x75720F51L,1L};
                struct S2 *l_1564 = &g_953;
                (*l_1551) = p_22.f6.f1;
                (*l_1551) |= p_23;
                (*l_1564) = l_1546;
            }
            (*g_83) = (void*)0;
        }
        else
        {
            struct S2 l_1574 = {0x965FL,0xA8L,2UL,{-8L,{0x0DD5C459DCAB4852LL,0xD620L,0x4EA1BE4648F32E36LL,-9L,-9L,0xB715L,0xDD51L,0x7900BBD4L},0xCE305F7FL,-6L,1UL,0x5B01B69BL,{0x9BB102C5B24F646ELL,0xB8D0L,0x02537076F9F51369LL,-5L,1L,0L,1UL,1UL},0xDA7E2FEDL},18446744073709551608UL,-5L};
            if (((func_64(func_69(&p_23), l_1541, l_1551, (((void*)0 == (*g_1097)) <= p_25.f6)) | (safe_div_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s(p_24.f1.f3, (*l_1551))) , 0xB2L) && p_22.f6.f4) < g_41.f4), l_1569))) > p_24.f1.f2))
            {
                int *l_1579 = &l_1412;
                int *l_1580 = &l_1432;
                int *l_1581 = &l_1432;
                int *l_1582 = &g_1554.f3.f6.f4;
                int *l_1583 = &g_31.f4;
                int *l_1584 = (void*)0;
                int *l_1585 = &l_1460;
                int *l_1586 = &g_476;
                int *l_1587 = &l_1574.f3.f1.f4;
                int *l_1588 = &l_1391;
                int *l_1590 = &g_1554.f3.f6.f4;
                int *l_1591 = &l_1574.f3.f1.f4;
                int *l_1592 = &g_1554.f3.f1.f4;
                int *l_1593 = &l_1412;
                int *l_1594 = &g_953.f3.f6.f4;
                int *l_1595 = (void*)0;
                int *l_1596 = (void*)0;
                int *l_1597 = &l_1546.f3.f1.f4;
                int *l_1598 = &g_1554.f3.f6.f4;
                int l_1599 = 0L;
                int *l_1600 = &l_1391;
                int *l_1601 = &l_1546.f3.f1.f4;
                int *l_1602 = &l_1541.f3.f6.f4;
                int *l_1603 = &g_41.f3.f6.f4;
                int *l_1604 = &l_1432;
                int *l_1605 = (void*)0;
                int *l_1606 = (void*)0;
                int *l_1607 = &l_1432;
                int *l_1608 = &g_1554.f3.f1.f4;
                int *l_1609 = (void*)0;
                int *l_1610 = &g_1554.f3.f6.f4;
                int *l_1611 = &g_41.f3.f1.f4;
                int *l_1612 = (void*)0;
                int *l_1613 = &l_1574.f3.f6.f4;
                int *l_1614 = (void*)0;
                int *l_1615 = &l_1412;
                int *l_1616 = (void*)0;
                int *l_1617 = &l_1541.f3.f6.f4;
                int *l_1618 = &g_1554.f3.f1.f4;
                int *l_1619 = &l_1546.f3.f6.f4;
                int *l_1620 = &l_1541.f3.f1.f4;
                int *l_1621 = &g_41.f3.f6.f4;
                int *l_1622 = &l_1574.f3.f1.f4;
                int *l_1623 = &l_1541.f3.f1.f4;
                int *l_1624 = &l_1546.f3.f6.f4;
                int *l_1625 = &l_1546.f3.f6.f4;
                int *l_1626 = &g_1554.f3.f6.f4;
                int *l_1627 = &l_1460;
                int l_1628 = 0xA65CE329L;
                int *l_1629 = (void*)0;
                int *l_1630 = (void*)0;
                int *l_1631 = &l_1546.f3.f6.f4;
                int *l_1632 = &l_1599;
                int *l_1633 = &l_1412;
                int *l_1634 = &l_1546.f3.f1.f4;
                int *l_1635 = &g_41.f3.f6.f4;
                int *l_1636 = (void*)0;
                int *l_1637 = &g_1554.f3.f6.f4;
                int *l_1638 = &g_31.f4;
                int *l_1639 = &g_1554.f3.f1.f4;
                int *l_1640 = &g_953.f3.f6.f4;
                int *l_1641 = (void*)0;
                int *l_1642 = &g_1554.f3.f1.f4;
                int *l_1643 = (void*)0;
                int *l_1644 = &g_41.f3.f1.f4;
                int *l_1645 = (void*)0;
                int *l_1646 = &l_1599;
                int *l_1647 = &g_1554.f3.f1.f4;
                int *l_1648 = &g_953.f3.f6.f4;
                int *l_1649 = (void*)0;
                int *l_1650 = &l_1541.f3.f1.f4;
                int *l_1651 = &l_1546.f3.f6.f4;
                int *l_1652 = &g_1554.f3.f6.f4;
                int *l_1653 = &l_1628;
                int *l_1654 = &l_1574.f3.f1.f4;
                int *l_1655 = &g_1554.f3.f1.f4;
                int *l_1656 = &l_1599;
                int *l_1657 = &l_1546.f3.f1.f4;
                int *l_1658 = (void*)0;
                for (l_1541.f3.f6.f3 = 0; (l_1541.f3.f6.f3 < 8); l_1541.f3.f6.f3 = safe_add_func_uint64_t_u_u(l_1541.f3.f6.f3, 1))
                {
                    struct S2 l_1572 = {0xD1ABL,0x76L,1UL,{0L,{1UL,1UL,0x28E06D4B592322B5LL,1L,-1L,0xED27L,0xC2B9L,18446744073709551615UL},1UL,0xC204L,1UL,18446744073709551610UL,{18446744073709551615UL,0UL,18446744073709551612UL,0L,1L,-10L,7UL,0x0FAEC227L},0xC7FF2AC7L},0x00627251L,2L};
                    int *l_1573 = &l_1546.f3.f6.f4;
                    if (p_24.f6.f7)
                    {
                        p_23 |= func_64(func_71(func_69(&g_476)), l_1572, l_1573, ((0x6414EE58L ^ 0x59F385B7L) || g_953.f2));
                        return l_1574;
                    }
                    else
                    {
                        struct S0 *l_1575 = (void*)0;
                        unsigned long long l_1576 = 4UL;
                        (*g_367) = (-2L);
                        (*g_382) = l_1575;
                        --l_1576;
                        return l_1546;
                    }
                }
                --g_1660;
                return l_1546;
            }
            else
            {
                int *l_1663 = &g_953.f3.f1.f4;
                int *l_1664 = &g_41.f3.f1.f4;
                int *l_1665 = &g_1554.f3.f6.f4;
                int *l_1666 = &l_1399;
                int *l_1667 = &g_41.f3.f1.f4;
                int *l_1668 = &l_1574.f3.f6.f4;
                int *l_1669 = &g_953.f3.f1.f4;
                int *l_1670 = (void*)0;
                int *l_1671 = &l_1412;
                int *l_1672 = &g_41.f3.f6.f4;
                int *l_1673 = &g_953.f3.f1.f4;
                int *l_1674 = &l_1391;
                struct S2 *l_1678 = &l_1546;
                --l_1675;
                (*l_1666) |= (l_1678 == &l_1541);
            }
        }
        (*l_1683) ^= ((safe_lshift_func_uint8_t_u_s(((void*)0 == &p_25), (*l_1551))) , (safe_sub_func_uint16_t_u_u(((g_41.f3.f4 , (*g_777)) , g_953.f3.f6.f6), p_22.f6.f2)));
        if ((l_1684 != l_1684))
        {
            struct S2 **l_1689 = &g_1099;
            int *l_1692 = &g_953.f3.f6.f4;
            int *l_1706 = (void*)0;
            if ((g_953.f3.f1.f0 , (safe_div_func_int64_t_s_s((0xCA3DL <= (((((!(((safe_rshift_func_uint8_t_u_u(p_24.f1.f6, p_22.f6.f0)) || p_24.f1.f7) == 0xF7ABL)) && p_24.f1.f5) > (g_1554.f3.f3 != g_297)) , l_1689) != (*g_1097))), 4UL))))
            {
                int *l_1705 = &l_1391;
                for (g_297 = 29; (g_297 != 0); g_297--)
                {
                    l_1692 = &p_23;
                    if (((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(p_22.f4, 3)), 0x833807884AA8B045LL)) ^ l_1546.f5))
                    {
                        (*l_1683) = p_24.f5;
                        if ((*g_367))
                            break;
                        return l_1541;
                    }
                    else
                    {
                        struct S2 l_1698 = {0x3117L,0x74L,0xC471BEA553112D11LL,{0x1846268E2B809EC1LL,{0x8E42BDCC2A0F60A7LL,1UL,18446744073709551609UL,-1L,-1L,0L,65530UL,7UL},18446744073709551606UL,0x4FBDL,0xF1C0F784L,0UL,{0xCB179B2E9491E2B5LL,8UL,0x52367489195A1316LL,0x53L,0xEBE516BEL,8L,65529UL,18446744073709551608UL},4294967295UL},0x5F29164AL,3L};
                        (*l_1683) = (*g_367);
                        if ((*l_1692))
                            continue;
                    }
                }
                for (p_24.f0 = 0; (p_24.f0 < (-9)); p_24.f0 = safe_sub_func_uint8_t_u_u(p_24.f0, 9))
                {
                    int *l_1710 = &l_1546.f3.f1.f4;
                    int *l_1711 = &l_1460;
                    int *l_1712 = (void*)0;
                    int *l_1713 = &l_1412;
                    int *l_1714 = &l_1412;
                    int *l_1715 = &l_1546.f3.f1.f4;
                    int *l_1716 = &l_1541.f3.f1.f4;
                    int *l_1717 = &l_1541.f3.f1.f4;
                    int *l_1718 = &l_1546.f3.f1.f4;
                    int *l_1719 = &g_953.f3.f6.f4;
                    int *l_1720 = &g_41.f3.f6.f4;
                    int *l_1721 = &l_1399;
                    int *l_1722 = (void*)0;
                    int *l_1723 = &l_1541.f3.f1.f4;
                    int *l_1724 = &l_1460;
                    int *l_1725 = &g_953.f3.f1.f4;
                    int *l_1726 = &l_1391;
                    int *l_1727 = &g_1554.f3.f6.f4;
                    int *l_1728 = (void*)0;
                    int *l_1729 = &g_41.f3.f1.f4;
                    int *l_1730 = &l_1412;
                    int l_1731 = 9L;
                    int *l_1732 = (void*)0;
                    int *l_1733 = (void*)0;
                    int *l_1734 = &g_1554.f3.f1.f4;
                    int *l_1735 = &l_1546.f3.f1.f4;
                    int *l_1736 = &l_1391;
                    int *l_1737 = &l_1541.f3.f1.f4;
                    int *l_1738 = &l_1432;
                    int *l_1739 = &g_41.f3.f1.f4;
                    int *l_1740 = &l_1731;
                    int *l_1741 = &g_476;
                    int *l_1742 = &g_41.f3.f6.f4;
                    int *l_1743 = &g_953.f3.f1.f4;
                    int *l_1744 = &g_41.f3.f6.f4;
                    int *l_1745 = &l_1731;
                    int *l_1746 = (void*)0;
                    int *l_1747 = &l_1412;
                    int *l_1748 = &l_1391;
                    int *l_1749 = (void*)0;
                    int *l_1750 = &g_31.f4;
                    int *l_1751 = &g_1554.f3.f6.f4;
                    int *l_1752 = &g_1554.f3.f1.f4;
                    int l_1753 = 1L;
                    int *l_1754 = &g_1554.f3.f1.f4;
                    int *l_1755 = &l_1460;
                    int *l_1756 = &l_1541.f3.f6.f4;
                    int *l_1757 = &l_1546.f3.f1.f4;
                    int *l_1758 = (void*)0;
                    int *l_1759 = (void*)0;
                    int *l_1760 = &g_41.f3.f6.f4;
                    int *l_1761 = &l_1460;
                    int *l_1762 = &l_1541.f3.f6.f4;
                    int *l_1763 = &l_1546.f3.f1.f4;
                    int *l_1764 = &g_1554.f3.f1.f4;
                    int *l_1765 = (void*)0;
                    int *l_1766 = &l_1460;
                    int *l_1768 = &g_31.f4;
                    p_22.f1.f4 = ((void*)0 == l_1705);
                    l_1769++;
                }
            }
            else
            {
                struct S2 l_1772 = {1UL,0xFCL,1UL,{0xE9B224F7229040E8LL,{9UL,0UL,18446744073709551615UL,1L,0x84E5E4ECL,0xC75CL,9UL,0x447CC9B9L},1UL,-1L,0UL,0x26AE5B58L,{18446744073709551607UL,0x6BA3L,7UL,-6L,0x972EF1F6L,5L,65528UL,1UL},4294967295UL},0x6968001EL,0L};
                int *l_1773 = &l_1412;
                (*g_1697) = ((p_25.f1 & (func_64(&l_1460, l_1772, l_1773, p_25.f5) , 0UL)) <= g_287);
                return l_1541;
            }
            (*g_382) = g_1774;
        }
        else
        {
            long long l_1777 = (-9L);
            (*g_83) = ((((p_25.f4 & (safe_div_func_int32_t_s_s(((l_1777 != (p_22.f6.f3 < ((((safe_rshift_func_uint8_t_u_u(func_64(&l_1391, l_1541, ((safe_unary_minus_func_uint32_t_u(l_1546.f3.f1.f1)) , (void*)0), g_496), p_24.f1.f2)) > 0xDFCE11DADF146331LL) & 0x08L) & g_341))) & 0x1B76A02153CB9F8BLL), p_24.f0))) != p_24.f6.f7) & p_22.f0) , &p_23);
        }
    }
    ++g_1938;
    return l_1546;
}







static short func_38(struct S2 p_39, char p_40)
{
    unsigned char l_61 = 2UL;
    int *l_86 = (void*)0;
    unsigned l_1314 = 0xBCDA9573L;
    int *l_1315 = &g_41.f3.f6.f4;
    int *l_1316 = &g_476;
    int *l_1317 = (void*)0;
    int *l_1318 = &g_41.f3.f6.f4;
    int *l_1319 = &g_41.f3.f6.f4;
    int *l_1320 = &g_953.f3.f6.f4;
    int *l_1321 = &g_31.f4;
    int *l_1322 = &g_41.f3.f1.f4;
    int *l_1323 = &g_41.f3.f1.f4;
    int *l_1324 = &g_41.f3.f6.f4;
    int *l_1325 = &g_953.f3.f1.f4;
    int *l_1326 = &g_476;
    int *l_1327 = (void*)0;
    int *l_1328 = &g_476;
    int *l_1329 = &g_953.f3.f1.f4;
    int l_1330 = 0x57813E47L;
    int *l_1331 = &g_41.f3.f6.f4;
    int *l_1332 = &g_953.f3.f1.f4;
    int *l_1333 = &g_41.f3.f6.f4;
    int *l_1334 = &g_953.f3.f6.f4;
    int *l_1335 = &l_1330;
    int l_1336 = 7L;
    int *l_1337 = (void*)0;
    int *l_1338 = &l_1330;
    int *l_1339 = (void*)0;
    int *l_1340 = (void*)0;
    unsigned l_1341 = 2UL;
    for (p_39.f0 = (-18); (p_39.f0 >= 38); p_39.f0 = safe_add_func_uint32_t_u_u(p_39.f0, 8))
    {
        int *l_45 = &g_31.f4;
        int *l_46 = &g_41.f3.f1.f4;
        int *l_47 = &g_41.f3.f6.f4;
        int *l_48 = (void*)0;
        int *l_49 = &g_41.f3.f6.f4;
        int *l_50 = &g_41.f3.f6.f4;
        int *l_51 = &g_31.f4;
        int *l_52 = &g_31.f4;
        int *l_53 = &g_41.f3.f1.f4;
        int *l_54 = (void*)0;
        int *l_55 = (void*)0;
        int *l_56 = &g_41.f3.f1.f4;
        int *l_57 = &g_31.f4;
        int *l_58 = (void*)0;
        int *l_59 = &g_31.f4;
        int *l_60 = &g_31.f4;
        unsigned l_82 = 0UL;
        struct S2 l_1190 = {0x269FL,0xA4L,1UL,{-6L,{1UL,0x9C50L,0UL,-6L,0L,1L,0x06FAL,0x7483A6EEL},1UL,1L,0xBEC37149L,1UL,{0x819860080FEC9043LL,65529UL,0x3AB8EA8033A346A7LL,-1L,-1L,9L,65535UL,0xE0163A8DL},4294967293UL},18446744073709551611UL,0xA84BDF7BL};
        unsigned char l_1313 = 0xE5L;
        ++l_61;
        p_39.f3.f1.f4 &= func_64(func_69(func_71(func_73(p_39.f3.f6.f4, func_79(l_82, l_53), l_46, p_39.f3.f1.f3, l_86))), l_1190, l_54, l_61);
        (*g_83) = func_71(&g_476);
        l_1313 |= (func_64(l_49, (((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s((-2L), (safe_lshift_func_int16_t_s_u((*l_57), g_466)))), p_39.f2)) && (!((*l_53) , (safe_mod_func_uint8_t_u_u(p_39.f5, p_39.f3.f1.f0))))) , p_39), (*g_83), p_39.f3.f6.f2) == 0L);
    }
    (*g_367) |= l_1314;
    p_39.f3.f6.f4 &= 0x6E77E49CL;
    --l_1341;
    return p_39.f5;
}







static int func_64(int * p_65, struct S2 p_66, int * p_67, long long p_68)
{
    unsigned short l_1196 = 0x8EBEL;
    unsigned l_1209 = 18446744073709551608UL;
    int l_1210 = (-2L);
    int *l_1211 = &g_476;
    int *l_1212 = &g_41.f3.f6.f4;
    int *l_1213 = &g_953.f3.f6.f4;
    int *l_1214 = &g_41.f3.f6.f4;
    int *l_1215 = &l_1210;
    int *l_1216 = &g_953.f3.f6.f4;
    int l_1217 = 0x82DACC76L;
    int *l_1218 = &g_476;
    int *l_1219 = &g_31.f4;
    int *l_1220 = &g_31.f4;
    int *l_1221 = &g_41.f3.f1.f4;
    int *l_1222 = (void*)0;
    int *l_1223 = &l_1217;
    int *l_1224 = &l_1210;
    int *l_1225 = &g_41.f3.f6.f4;
    int *l_1226 = &g_41.f3.f6.f4;
    int *l_1227 = (void*)0;
    int *l_1228 = &g_41.f3.f6.f4;
    int *l_1229 = &l_1210;
    int *l_1230 = &g_953.f3.f6.f4;
    int *l_1231 = &g_31.f4;
    int *l_1232 = &g_41.f3.f6.f4;
    int *l_1233 = &g_953.f3.f6.f4;
    int *l_1234 = (void*)0;
    int *l_1235 = &l_1217;
    int *l_1236 = &g_953.f3.f1.f4;
    int *l_1237 = &g_31.f4;
    int *l_1238 = &g_953.f3.f1.f4;
    int *l_1239 = &g_41.f3.f6.f4;
    int *l_1240 = (void*)0;
    int *l_1241 = &l_1217;
    int *l_1242 = &g_953.f3.f1.f4;
    int *l_1243 = &g_953.f3.f6.f4;
    int *l_1244 = (void*)0;
    int *l_1245 = &g_31.f4;
    int *l_1246 = &g_953.f3.f1.f4;
    int *l_1247 = &g_953.f3.f1.f4;
    int *l_1248 = &g_41.f3.f6.f4;
    int *l_1249 = (void*)0;
    int l_1250 = 0xAB33F171L;
    int *l_1251 = &g_31.f4;
    int *l_1252 = &g_953.f3.f6.f4;
    int *l_1253 = &g_31.f4;
    int *l_1254 = &g_476;
    int l_1255 = 0L;
    int *l_1256 = (void*)0;
    int *l_1257 = (void*)0;
    int *l_1258 = &l_1217;
    int *l_1259 = (void*)0;
    int *l_1260 = &g_41.f3.f6.f4;
    int *l_1261 = (void*)0;
    int *l_1262 = &g_41.f3.f1.f4;
    int *l_1263 = (void*)0;
    int *l_1264 = &g_31.f4;
    int *l_1265 = &g_31.f4;
    int *l_1266 = &g_41.f3.f6.f4;
    int *l_1267 = &l_1210;
    int l_1268 = 1L;
    int l_1269 = (-6L);
    int *l_1270 = &l_1217;
    int *l_1271 = &l_1255;
    int l_1272 = 0x95D56BEAL;
    int l_1273 = 0xA16FF277L;
    int *l_1274 = (void*)0;
    int *l_1275 = &l_1272;
    int *l_1276 = (void*)0;
    int *l_1277 = &g_953.f3.f6.f4;
    int *l_1278 = &g_31.f4;
    char l_1279 = 0x65L;
    int *l_1280 = &g_41.f3.f1.f4;
    int *l_1281 = &g_41.f3.f1.f4;
    int *l_1282 = &l_1255;
    int *l_1283 = &g_953.f3.f6.f4;
    int l_1284 = 0x00759AFCL;
    int *l_1285 = (void*)0;
    int *l_1286 = &l_1268;
    int l_1287 = 0L;
    int *l_1288 = (void*)0;
    int *l_1289 = &g_41.f3.f1.f4;
    int *l_1290 = (void*)0;
    int *l_1291 = &l_1269;
    int *l_1292 = (void*)0;
    int *l_1293 = &l_1273;
    int l_1294 = (-1L);
    int *l_1295 = &l_1269;
    int *l_1296 = (void*)0;
    int *l_1297 = &g_953.f3.f1.f4;
    int *l_1298 = (void*)0;
    int l_1299 = 0x255770D6L;
    unsigned l_1300 = 1UL;
    struct S0 *l_1303 = &g_953.f3.f1;
    int *l_1304 = &l_1269;
    for (g_953.f0 = 0; (g_953.f0 <= 35); ++g_953.f0)
    {
        short l_1197 = 1L;
        (*g_83) = &g_476;
        for (g_953.f3.f1.f7 = 0; (g_953.f3.f1.f7 > 48); g_953.f3.f1.f7 = safe_add_func_uint64_t_u_u(g_953.f3.f1.f7, 9))
        {
            int *l_1195 = &g_476;
            (*g_83) = func_69(l_1195);
            (*p_65) &= ((!(((*l_1195) , (0x67763ADFL != (0x88C6L ^ l_1196))) || (l_1197 && p_66.f3.f6.f0))) , ((safe_mod_func_uint64_t_u_u(((safe_div_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s(g_41.f3.f1.f4, g_41.f3.f6.f1)) , (+((g_624 ^ 0x15FA98BFL) , p_66.f3.f1.f0))), g_41.f3.f6.f6)) | l_1197) , l_1197), p_66.f3.f6.f5)) > 0x5CC1L), g_624)) , l_1197));
        }
        (*p_65) |= (safe_unary_minus_func_int16_t_s((safe_sub_func_uint16_t_u_u(((+g_733) || l_1197), l_1197))));
        if (l_1209)
            break;
    }
    ++l_1300;
    p_67 = &g_476;
    return (*p_67);
}







static int * func_69(int * p_70)
{
    int *l_546 = (void*)0;
    int *l_547 = (void*)0;
    int *l_548 = &g_31.f4;
    int *l_549 = &g_31.f4;
    int l_550 = 0L;
    int *l_551 = &g_476;
    int *l_552 = (void*)0;
    int *l_553 = &g_476;
    int *l_554 = (void*)0;
    int *l_555 = &g_31.f4;
    int *l_556 = &l_550;
    int *l_557 = &g_31.f4;
    int *l_558 = (void*)0;
    int *l_559 = &g_31.f4;
    int l_560 = 0x03A5248FL;
    int *l_561 = &g_31.f4;
    int *l_562 = (void*)0;
    int l_563 = 0xF214C5D9L;
    int *l_564 = &g_31.f4;
    int *l_565 = &g_41.f3.f6.f4;
    int *l_566 = &l_550;
    int *l_567 = &l_550;
    int *l_568 = &l_560;
    int l_569 = 0x140F058EL;
    int *l_570 = (void*)0;
    int l_571 = 0xEB6AE51CL;
    int l_572 = 8L;
    int *l_573 = &l_572;
    int *l_574 = &g_41.f3.f1.f4;
    int *l_575 = &l_571;
    int *l_576 = &g_476;
    int *l_577 = &l_550;
    int *l_578 = &l_563;
    int *l_579 = &l_571;
    int *l_580 = &g_41.f3.f6.f4;
    int l_581 = 0xCC4756F3L;
    int *l_582 = &l_581;
    int *l_583 = (void*)0;
    int *l_584 = &g_476;
    int *l_585 = (void*)0;
    int *l_586 = &l_550;
    int *l_587 = &g_31.f4;
    int *l_588 = &g_41.f3.f6.f4;
    int *l_589 = &g_41.f3.f6.f4;
    int l_590 = 0x453BFCFDL;
    int *l_591 = (void*)0;
    int *l_592 = (void*)0;
    int *l_593 = &l_550;
    int *l_594 = &l_571;
    int *l_595 = &g_31.f4;
    int l_596 = 0x9A42EA00L;
    int *l_597 = (void*)0;
    int *l_598 = &g_476;
    int *l_599 = (void*)0;
    int *l_600 = &l_560;
    int l_601 = 8L;
    int l_602 = 0x5DA31A8DL;
    int *l_603 = (void*)0;
    int *l_604 = &l_590;
    int *l_605 = &l_560;
    int *l_606 = &l_560;
    int *l_608 = &l_560;
    int *l_609 = &l_560;
    int l_610 = 0L;
    int *l_611 = &l_571;
    int *l_612 = &l_581;
    int *l_613 = &l_550;
    int *l_614 = &l_550;
    int l_615 = 0x77C31347L;
    int *l_616 = &l_615;
    int *l_617 = &g_41.f3.f6.f4;
    int *l_618 = &g_41.f3.f1.f4;
    int *l_619 = (void*)0;
    int *l_620 = &g_476;
    int l_621 = 0xA0CDD81BL;
    int *l_622 = (void*)0;
    int *l_623 = &l_601;
    int *l_625 = &l_581;
    int *l_626 = &l_590;
    int *l_627 = &l_621;
    int *l_628 = &l_563;
    int *l_629 = (void*)0;
    int l_630 = 7L;
    int l_631 = 2L;
    int *l_632 = &g_41.f3.f6.f4;
    int *l_633 = (void*)0;
    int *l_634 = (void*)0;
    int l_635 = (-1L);
    int *l_636 = &l_581;
    int *l_637 = &l_563;
    int *l_638 = &l_601;
    int *l_639 = &l_602;
    int *l_640 = &l_563;
    int *l_641 = &l_630;
    int *l_642 = (void*)0;
    int *l_643 = (void*)0;
    int *l_644 = (void*)0;
    int *l_645 = &g_31.f4;
    int l_646 = 0xBDFB6E76L;
    int *l_647 = &l_610;
    int *l_648 = &l_635;
    int *l_649 = &l_646;
    int *l_650 = (void*)0;
    int *l_651 = &l_571;
    int *l_652 = &l_646;
    int *l_653 = (void*)0;
    long long l_705 = 0xB5985E65880C793FLL;
    unsigned l_721 = 1UL;
    unsigned l_789 = 18446744073709551609UL;
    struct S0 l_793 = {1UL,0xEA2FL,0xD54BE625EC164725LL,0x51L,0x3568338DL,9L,65535UL,0xB607BE6CL};
    struct S1 l_796 = {0x72F6020C1B5EF209LL,{0x09101AA8C37DAEDALL,65528UL,0xE080B40DB5CB826ELL,4L,0xFA484FA2L,0xB5DBL,0UL,1UL},4UL,0x0FDBL,4294967288UL,4UL,{18446744073709551606UL,0x2C41L,18446744073709551614UL,0L,0x8EAEC340L,2L,0x80EEL,0UL},0x3B5434D4L};
    int l_839 = 0x9FF75ECFL;
    struct S1 *l_871 = &l_796;
    long long l_947 = 0x61F56AC50B07A273LL;
    struct S2 l_1018 = {1UL,0xB6L,1UL,{0x6FFDD26C31707BB6LL,{1UL,65530UL,0x1C3E8EB9971B4D92LL,-9L,-7L,0xABD9L,65529UL,0xDE3E2C0DL},1UL,0x1097L,0xB348CEC4L,0x5A1AC6A9L,{18446744073709551613UL,65535UL,0x98F56725CD01DBFELL,0L,0xC49F694DL,-1L,0x9F4BL,6UL},0x99E50EFCL},0x41663729L,0x7DFBAB4BL};
    unsigned l_1019 = 1UL;
    int l_1032 = 1L;
    struct S2 ***l_1100 = (void*)0;
    struct S0 **l_1175 = &g_383;
    int *l_1187 = &l_610;
    int *l_1188 = &l_1018.f3.f6.f4;
    int *l_1189 = &l_569;
    --g_654;
    if ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((*l_616), (((safe_mod_func_int8_t_s_s(g_41.f3.f6.f2, g_115)) > ((*l_637) , (safe_sub_func_int8_t_s_s((*l_611), ((0x6075L < ((((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((&g_367 == &g_367) && (*l_647)), 5)), 0xBBEFL)) || (*p_70)) <= g_41.f2) || (*l_594))) == g_499))))) && 0L))), (*l_577))))
    {
        char l_677 = 0x0DL;
        int l_714 = (-1L);
        int l_716 = 1L;
        int l_717 = 0x2284E647L;
        int l_754 = 8L;
        struct S1 l_769 = {0xB27EEED8A75D22DCLL,{1UL,0x36CCL,0x64DDDEF379ED2561LL,0x49L,0xDADDD404L,0x5893L,0xC02FL,0UL},18446744073709551606UL,0x768DL,1UL,6UL,{18446744073709551615UL,9UL,18446744073709551607UL,1L,1L,0x472CL,65530UL,18446744073709551615UL},4294967291UL};
        struct S0 **l_778 = (void*)0;
        struct S1 *l_804 = &l_769;
        long long l_824 = 0xEB5CACCFC526BA69LL;
        int *l_826 = &l_572;
        int *l_827 = (void*)0;
        int *l_828 = &l_630;
        int *l_829 = &l_601;
        int *l_830 = &l_602;
        int *l_831 = (void*)0;
        int *l_832 = &l_769.f1.f4;
        int *l_833 = &l_796.f6.f4;
        int *l_834 = &g_476;
        int *l_835 = (void*)0;
        int *l_836 = &l_716;
        int *l_837 = &l_630;
        int *l_838 = &l_569;
        int *l_840 = &l_602;
        int *l_841 = &l_754;
        struct S2 *l_885 = &g_41;
        struct S2 **l_884 = &l_885;
        struct S2 ***l_883 = &l_884;
        unsigned l_948 = 0xC02CB336L;
        int ***l_963 = &g_83;
        unsigned l_968 = 1UL;
        for (g_41.f3.f2 = 0; (g_41.f3.f2 > 5); g_41.f3.f2 = safe_add_func_int8_t_s_s(g_41.f3.f2, 5))
        {
            struct S2 l_672 = {65529UL,0x10L,1UL,{-9L,{1UL,0x684BL,18446744073709551611UL,-8L,0x1CA09A80L,0xD15FL,0x5071L,18446744073709551610UL},0xCB4711B2L,0xF4EDL,5UL,0xB5AF0C84L,{0x3D0F52B31E8E3318LL,65535UL,0x95383CB7436B2F34LL,0xA9L,0x6C87197EL,0x407FL,0x4B37L,0xCC4D57B7L},0x79A25661L},0x6E5EF7C4L,0L};
            struct S1 *l_683 = &g_41.f3;
            int *l_726 = &g_31.f4;
            int *l_765 = &l_563;
            long long l_799 = (-10L);
            int l_821 = 0x6FDA269DL;
            char l_823 = 0xC2L;
        }
        --g_842;
        for (g_41.f5 = 0; (g_41.f5 >= 18); g_41.f5++)
        {
            unsigned long long l_853 = 3UL;
            int **l_870 = &l_833;
            int l_889 = (-1L);
            struct S0 *l_945 = &g_41.f3.f6;
            struct S2 *l_951 = &g_41;
            struct S1 *l_986 = &l_796;
            int l_994 = 0x4D16CA57L;
            int l_995 = (-7L);
            unsigned char l_1003 = 252UL;
        }
        (**l_963) = (((*p_70) , (*l_834)) , &l_572);
    }
    else
    {
        struct S1 *l_1044 = &l_1018.f3;
        int l_1076 = 1L;
        int l_1101 = 0x882F2BDCL;
        int l_1102 = 0xE1E0C23DL;
        int l_1105 = 1L;
        for (l_796.f2 = (-5); (l_796.f2 <= 12); ++l_796.f2)
        {
            struct S1 **l_1045 = &l_1044;
            int l_1060 = 0x7A4CADA7L;
            int l_1103 = 0x1832B2F1L;
            int l_1123 = 0xB9906E28L;
            (*l_1045) = l_1044;
            for (l_1018.f3.f1.f2 = 0; (l_1018.f3.f1.f2 <= 16); l_1018.f3.f1.f2 = safe_add_func_int32_t_s_s(l_1018.f3.f1.f2, 1))
            {
                unsigned long long l_1056 = 0x779A6DBF73DF8DEFLL;
                int l_1061 = 1L;
                int l_1130 = 0L;
                l_1061 |= (safe_sub_func_int64_t_s_s((&g_953 != (void*)0), ((g_733 , ((safe_mod_func_int64_t_s_s(1L, g_41.f3.f6.f7)) || (safe_div_func_int64_t_s_s(3L, l_1056)))) & ((safe_unary_minus_func_int64_t_s(((safe_rshift_func_uint8_t_u_u(l_1060, 3)) == 1UL))) == l_1056))));
                for (l_610 = 1; (l_610 != 4); ++l_610)
                {
                    struct S1 *l_1077 = &g_953.f3;
                    int l_1096 = (-1L);
                    int l_1104 = 1L;
                    int *l_1106 = &g_476;
                    int *l_1107 = &l_571;
                    int *l_1108 = &l_590;
                    int *l_1109 = &l_596;
                    int *l_1110 = &l_601;
                    int l_1111 = 0xB3EF5D05L;
                    int *l_1112 = (void*)0;
                    int *l_1113 = &l_1101;
                    int *l_1114 = &l_572;
                    int *l_1115 = &l_621;
                    int *l_1116 = &l_1103;
                    int *l_1117 = &l_1018.f3.f1.f4;
                    int *l_1118 = (void*)0;
                    int *l_1119 = &g_476;
                    int *l_1120 = &g_953.f3.f6.f4;
                    int *l_1121 = &l_1104;
                    int *l_1122 = &l_590;
                    int *l_1124 = (void*)0;
                    int l_1125 = (-1L);
                    int *l_1126 = &l_1102;
                    if (((safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((&g_367 != (void*)0) | 6L), ((safe_sub_func_uint64_t_u_u((g_31.f0 | ((*l_1045) == (((*p_70) || (g_953.f3.f6.f2 || (safe_mod_func_int64_t_s_s(g_953.f3.f6.f4, (safe_lshift_func_uint16_t_u_u(((l_1076 | 0x6DDC655EDA164009LL) > 0x2DE6F556L), g_953.f3.f1.f5)))))) , l_1077))), 6UL)) , l_1056))), (-2L))), 1L)) >= g_41.f3.f6.f3))
                    {
                        unsigned l_1078 = 0x56E12069L;
                        l_1078++;
                        (*l_1045) = (void*)0;
                    }
                    else
                    {
                        short l_1089 = 0x6F9FL;
                        (*g_777) = (*l_871);
                        (*l_561) &= (((safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((((g_953.f5 > ((g_41 , (((((safe_lshift_func_int8_t_s_s(l_1089, 5)) == l_1076) , ((safe_div_func_uint64_t_u_u((l_1089 ^ (safe_div_func_int32_t_s_s((((((g_715 ^ 0L) ^ (safe_sub_func_int64_t_s_s(g_115, (((((((+0x3FL) != l_1076) < (*g_367)) < 0x63L) , 0UL) & g_31.f3) | g_953.f5)))) <= g_41.f3.f6.f0) <= l_1096) <= l_1076), l_1096))), g_41.f3.f1.f7)) < l_1061)) == g_41.f2) == g_953.f3.f1.f2)) >= (*l_574))) || l_1056) , g_41.f1), (*l_637))), (-5L))) , 0x2AL) & 0UL);
                        (*g_83) = p_70;
                    }
                    g_1127--;
                }
                g_1131--;
            }
            (*g_83) = (g_31.f6 , &g_476);
            for (l_572 = 16; (l_572 < (-19)); l_572 = safe_sub_func_uint32_t_u_u(l_572, 6))
            {
                unsigned l_1148 = 0x02BACFBBL;
                (*l_641) = (((*g_367) , (*l_1045)) != ((((safe_rshift_func_uint16_t_u_s(l_1102, (*l_639))) >= (((~(safe_sub_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(l_1060, (safe_sub_func_int16_t_s_s(((((((safe_sub_func_uint32_t_u_u(l_1148, l_1148)) , g_41.f3.f7) != l_1148) < g_953.f3.f1.f2) == g_31.f3) | (-9L)), g_31.f6)))) <= 0x81E760B90356A09CLL), g_31.f0)) >= (*l_551)), (*p_70)))) , g_953.f3.f1.f1) | (-5L))) | l_1148) , l_1044));
                (*g_367) ^= ((safe_rshift_func_int16_t_s_s((*l_568), (safe_div_func_int16_t_s_s(g_953.f2, (safe_lshift_func_uint8_t_u_u(246UL, 2)))))) <= l_1103);
                (*g_83) = func_71(p_70);
                (*g_84) = (safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((*p_70), (l_1148 && 0xB1DBE8CAL))), g_41.f5));
            }
        }
        (*l_637) &= (safe_mod_func_uint16_t_u_u((l_796.f1 , 0xA4FAL), (g_953.f4 | g_953.f3.f6.f1)));
    }
    for (g_654 = 0; (g_654 <= 10); g_654++)
    {
        int *l_1163 = &l_569;
        (*g_83) = l_1163;
    }
    for (l_796.f1.f3 = 0; (l_796.f1.f3 >= 4); l_796.f1.f3++)
    {
        unsigned l_1168 = 0xE24C3CB2L;
        int l_1178 = 0x2E251EB3L;
        struct S1 *l_1185 = &l_1018.f3;
        struct S2 l_1186 = {3UL,1UL,1UL,{-1L,{0xD1BD78A7E610A649LL,0xCC64L,1UL,2L,0x3AC908BDL,0x9C60L,1UL,2UL},18446744073709551609UL,0x54C4L,0xCE71E7CFL,0UL,{1UL,0UL,0xC0E8A7843650AA69LL,1L,0x4EB4301AL,-1L,0x7548L,0xB24DDD47L},4294967295UL},8UL,9L};
        for (l_1018.f1 = 4; (l_1018.f1 < 51); l_1018.f1++)
        {
            unsigned l_1174 = 0x18A03114L;
            l_1168--;
            (*l_612) = (g_1171 <= ((void*)0 != &l_871));
            l_1178 &= (safe_rshift_func_uint8_t_u_s(l_1174, (((((&g_1098 == (l_1174 , (void*)0)) , l_1175) == &g_383) , ((l_1174 || (safe_sub_func_int32_t_s_s(((((((*l_609) || (((g_953.f4 || l_1168) <= l_1174) & g_496)) , 5UL) >= 0xDB07L) <= l_1174) == 0x035EL), (*p_70)))) & (*p_70))) <= g_1131)));
            (*l_604) = (safe_add_func_int64_t_s_s(((safe_add_func_uint16_t_u_u(((3L || (safe_add_func_uint16_t_u_u(l_1178, g_41.f3.f6.f7))) >= (((0UL == (*l_612)) || (l_1185 == (((l_1186 , (*p_70)) < (l_1186.f3.f6 , l_1186.f3.f5)) , (void*)0))) & (*l_600))), l_1186.f2)) ^ 0xC0L), g_31.f7));
        }
    }
    return p_70;
}







static int * func_71(int * p_72)
{
    int l_385 = 0xF97B9983L;
    struct S0 *l_410 = &g_41.f3.f6;
    int l_454 = 0L;
    int l_462 = 0x90A49770L;
    long long l_484 = 0x2E879498F9A72F8ELL;
    struct S1 l_506 = {-2L,{18446744073709551609UL,1UL,0x469A72E95C9E9F9FLL,-1L,0xB5FD5A45L,1L,65529UL,0xD97C3141L},0x2FBE916AL,2L,0x37C0EC75L,0x0BD98901L,{0UL,1UL,0x4BD8C23D63E783C8LL,1L,-3L,-1L,0xED79L,18446744073709551615UL},1UL};
    int **l_507 = &g_84;
    int l_508 = 0x360E75E4L;
    int *l_509 = &g_31.f4;
    int *l_545 = &g_41.f3.f6.f4;
    if (l_385)
    {
        unsigned l_386 = 0UL;
        struct S1 l_401 = {0xDCA90D6450104A5CLL,{18446744073709551608UL,0x5C7CL,0x5D51ADBA321759A1LL,0x5CL,5L,0xD1AFL,65535UL,0xA89CF423L},18446744073709551615UL,0x0A10L,0UL,1UL,{18446744073709551612UL,0x431CL,0x5419F9BF1DC84013LL,-8L,0L,0xACE9L,0x9139L,1UL},0UL};
        struct S2 *l_404 = &g_41;
        struct S2 **l_403 = &l_404;
        (*g_367) = ((0x6C36L ^ l_386) , (g_41.f3.f4 | g_41.f3.f6.f3));
        if ((*g_367))
        {
            unsigned char l_393 = 0x69L;
            for (g_41.f3.f6.f5 = (-26); (g_41.f3.f6.f5 >= 15); g_41.f3.f6.f5++)
            {
                unsigned long long l_394 = 0xB7131E292A1E5884LL;
                (*g_367) ^= (safe_sub_func_int32_t_s_s((g_41.f3.f5 , l_385), (safe_mod_func_int8_t_s_s(l_393, (0UL ^ l_394)))));
            }
        }
        else
        {
            struct S2 ***l_402 = (void*)0;
            int l_405 = 0xC42E18E0L;
            l_403 = ((l_385 <= (((0x7607ED46L | (safe_div_func_uint32_t_u_u(4294967291UL, (-7L)))) == (((safe_rshift_func_int16_t_s_u(l_385, 2)) > l_385) ^ (safe_rshift_func_int8_t_s_s(l_386, ((l_401 , g_41.f3.f2) <= g_41.f3.f1.f0))))) || 8UL)) , (void*)0);
            (*g_367) |= ((l_405 == 0x9FCE0E03FC564E5ELL) , (safe_sub_func_uint8_t_u_u(g_41.f3.f6.f5, (((safe_add_func_int32_t_s_s(3L, l_385)) , l_410) != (void*)0))));
            (*g_83) = &l_385;
        }
        (*g_367) |= (safe_rshift_func_int8_t_s_u(((g_341 , (safe_rshift_func_uint8_t_u_s((!(safe_sub_func_uint32_t_u_u((~l_401.f6.f3), (((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(g_41.f3.f6.f1, (-7L))), ((safe_rshift_func_int8_t_s_u((0L ^ g_297), (&l_403 != (void*)0))) , (safe_sub_func_int64_t_s_s(l_401.f6.f2, l_401.f3))))) > g_41.f3.f1.f0) >= g_41.f3.f6.f3)))), 3))) , l_385), l_385));
        (*g_83) = &l_385;
    }
    else
    {
        int *l_425 = &l_385;
        int *l_426 = &g_41.f3.f1.f4;
        int *l_427 = &l_385;
        int *l_428 = &g_41.f3.f1.f4;
        int *l_429 = (void*)0;
        int *l_430 = &g_41.f3.f1.f4;
        int *l_431 = (void*)0;
        int *l_432 = &g_41.f3.f6.f4;
        int *l_433 = &l_385;
        int *l_434 = &g_41.f3.f1.f4;
        int *l_435 = &g_41.f3.f1.f4;
        int *l_436 = (void*)0;
        int *l_437 = &g_41.f3.f1.f4;
        int *l_438 = &g_41.f3.f6.f4;
        int l_439 = (-1L);
        int *l_440 = &l_439;
        int *l_441 = &g_31.f4;
        int *l_442 = &g_41.f3.f1.f4;
        int *l_443 = &g_31.f4;
        int *l_444 = &g_41.f3.f1.f4;
        int *l_445 = &g_31.f4;
        int *l_446 = &l_385;
        int *l_447 = &g_41.f3.f1.f4;
        int *l_448 = &g_41.f3.f6.f4;
        int *l_449 = (void*)0;
        int *l_450 = (void*)0;
        int *l_451 = (void*)0;
        int *l_452 = &l_385;
        int *l_453 = &l_385;
        int *l_455 = &l_385;
        int *l_456 = &g_31.f4;
        int *l_457 = &g_41.f3.f6.f4;
        int *l_458 = &g_31.f4;
        int *l_459 = (void*)0;
        int l_461 = (-6L);
        int *l_463 = &l_439;
        int *l_464 = (void*)0;
        int *l_465 = &l_439;
        int *l_467 = &l_454;
        int *l_468 = &g_41.f3.f1.f4;
        int *l_469 = &l_439;
        int *l_470 = &l_462;
        int *l_471 = &l_454;
        int *l_472 = &g_41.f3.f1.f4;
        int l_473 = 0x9DDA993EL;
        int *l_474 = (void*)0;
        int *l_475 = &g_41.f3.f6.f4;
        int *l_477 = &g_31.f4;
        int *l_478 = &l_462;
        int *l_479 = &g_41.f3.f1.f4;
        int *l_480 = &l_461;
        int *l_481 = &l_462;
        int *l_482 = (void*)0;
        int *l_483 = &l_473;
        int *l_485 = (void*)0;
        int *l_486 = &g_476;
        int *l_487 = &l_385;
        int *l_488 = &l_385;
        short l_489 = 0xA81CL;
        int *l_490 = (void*)0;
        int *l_491 = &l_439;
        int *l_492 = (void*)0;
        int *l_493 = &l_462;
        int *l_494 = &l_461;
        int *l_495 = &g_476;
        (*l_410) = (*l_410);
        (*g_382) = (void*)0;
        --g_496;
        g_499--;
    }
    (*l_509) |= (safe_sub_func_int8_t_s_s(0L, ((((safe_lshift_func_int16_t_s_u((l_462 && (g_460 != (l_484 ^ ((18446744073709551606UL && ((l_506 , (l_506.f1.f2 , l_507)) != ((*l_410) , &p_72))) <= l_508)))), 12)) && (-1L)) < 0xF5F5L) , l_506.f4)));
    (*g_367) ^= (safe_sub_func_uint32_t_u_u((g_41.f3.f1.f0 & (*l_509)), (*l_509)));
    for (g_41.f3.f6.f2 = 9; (g_41.f3.f6.f2 != 22); ++g_41.f3.f6.f2)
    {
        struct S2 *l_514 = &g_41;
        int l_515 = 0L;
        struct S2 **l_535 = &l_514;
        struct S2 ***l_534 = &l_535;
        (*g_367) = (l_514 != (void*)0);
        (*g_83) = p_72;
        (*l_509) = l_515;
        if ((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_515, ((0x6458A4B5909CF48CLL != (g_275 <= g_274)) >= (l_515 > (l_515 >= (g_41.f3.f2 <= (*l_509))))))), (safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((g_115 ^ l_515), 0x98BDA5A5L)), l_515)), 246UL)))), l_515)))
        {
            unsigned l_539 = 0UL;
            if (((g_496 , l_534) != (void*)0))
            {
                (*g_367) = (-1L);
                for (g_499 = (-16); (g_499 >= 19); g_499++)
                {
                    (*g_367) = (*g_367);
                    g_41.f3.f1 = ((*l_410) , (*l_410));
                }
            }
            else
            {
                int l_538 = 2L;
                (*l_509) ^= l_538;
            }
            (*g_83) = p_72;
            (*l_509) |= 3L;
            ++l_539;
        }
        else
        {
            unsigned short l_544 = 0xF9DEL;
            (*g_367) ^= (safe_div_func_uint32_t_u_u(l_515, l_544));
        }
    }
    return l_545;
}







static int * func_73(unsigned short p_74, int * p_75, int * p_76, int p_77, int * p_78)
{
    int *l_87 = &g_31.f4;
    int *l_88 = &g_31.f4;
    int *l_89 = (void*)0;
    int *l_90 = &g_41.f3.f1.f4;
    int *l_91 = &g_41.f3.f1.f4;
    int *l_92 = &g_31.f4;
    int l_93 = 0xE4F01166L;
    int *l_94 = (void*)0;
    int l_95 = 0xE62A828AL;
    int *l_96 = &l_93;
    int *l_97 = &l_93;
    int *l_98 = (void*)0;
    int l_99 = 0x75760097L;
    int *l_100 = &g_41.f3.f1.f4;
    int *l_101 = &g_41.f3.f6.f4;
    int *l_102 = &g_41.f3.f6.f4;
    unsigned char l_103 = 0x1BL;
    int ***l_106 = &g_83;
    int *l_330 = &l_93;
    int *l_331 = &g_41.f3.f1.f4;
    struct S0 l_370 = {18446744073709551615UL,8UL,8UL,-1L,-7L,0x9CCBL,1UL,18446744073709551615UL};
    int **l_384 = (void*)0;
    --l_103;
    (*g_83) = (*g_83);
    if (((p_74 , ((l_106 == ((((safe_add_func_int8_t_s_s((+((((safe_add_func_int32_t_s_s((*p_76), ((*g_83) != &p_77))) , ((18446744073709551615UL | p_74) == (safe_mod_func_uint16_t_u_u(p_74, p_74)))) , (void*)0) == &g_83)), p_74)) || g_41.f0) || g_41.f3.f2) , &g_83)) ^ p_77)) != p_77))
    {
        struct S1 l_118 = {0x007F3C8A69FFD4D6LL,{0x5E02EBC21351B3B9LL,0x2DD5L,0x0D50F805FC65D9BCLL,5L,0L,0L,0x665AL,0xAB1AC60CL},0x9E47E5CDL,2L,4294967287UL,0x2D639CECL,{1UL,1UL,0UL,-6L,0x7A52A20EL,3L,0xB2BDL,18446744073709551607UL},0UL};
        struct S1 *l_119 = &g_41.f3;
        for (g_41.f3.f1.f0 = 0; (g_41.f3.f1.f0 >= 55); g_41.f3.f1.f0 = safe_add_func_uint64_t_u_u(g_41.f3.f1.f0, 5))
        {
            return (*g_83);
        }
        --g_115;
        (*l_119) = l_118;
        (*l_119) = (*l_119);
    }
    else
    {
        unsigned l_127 = 0x61C1880EL;
        long long l_128 = 0L;
        int l_146 = 0xCCBAE7F3L;
        short l_153 = (-5L);
        int l_187 = (-1L);
        char l_196 = (-4L);
        short l_316 = 0xCE76L;
        if ((g_41.f3.f1 , 1L))
        {
            unsigned long long l_122 = 1UL;
            (*l_92) = (((safe_add_func_uint16_t_u_u(l_122, (((safe_sub_func_int32_t_s_s((g_41.f3.f6.f7 != p_74), ((safe_mod_func_int16_t_s_s(p_77, 0x77E9L)) >= (g_31.f1 ^ ((g_41.f3.f1.f2 >= ((l_127 , p_74) , 0x3E6AA4E5B741154DLL)) <= (*p_76)))))) != 0x45B2L) | p_74))) < l_128) <= 18446744073709551609UL);
            return (*g_83);
        }
        else
        {
            char l_158 = 0xC3L;
            unsigned char l_159 = 0xA6L;
            int l_163 = 0x63BCB85BL;
            int l_164 = 0xA4E550D2L;
            for (g_41.f3.f6.f5 = 13; (g_41.f3.f6.f5 != (-28)); g_41.f3.f6.f5 = safe_sub_func_int16_t_s_s(g_41.f3.f6.f5, 2))
            {
                unsigned l_135 = 7UL;
                int l_182 = 0x671EDED3L;
                unsigned l_247 = 0xAC760A83L;
                int l_252 = 0x7C800197L;
                int *l_253 = &l_95;
                int *l_254 = &l_182;
                int *l_255 = &l_146;
                int *l_256 = (void*)0;
                int *l_257 = &l_146;
                int *l_258 = &g_31.f4;
                int *l_259 = &l_93;
                int *l_260 = &l_146;
                int *l_261 = (void*)0;
                int *l_262 = &l_93;
                int *l_263 = &g_41.f3.f6.f4;
                int *l_264 = &l_163;
                int *l_265 = &g_41.f3.f1.f4;
                int *l_266 = &l_187;
                int *l_267 = &l_252;
                int *l_268 = (void*)0;
                int *l_269 = (void*)0;
                int *l_270 = &g_31.f4;
                int *l_271 = &l_164;
                int *l_272 = (void*)0;
                int *l_273 = &l_163;
                int *l_276 = &l_164;
                int *l_277 = &g_31.f4;
                int *l_278 = &l_95;
                int *l_279 = (void*)0;
                int *l_280 = (void*)0;
                int *l_281 = (void*)0;
                int *l_282 = (void*)0;
                int *l_283 = &l_99;
                int *l_284 = (void*)0;
                int *l_285 = &l_182;
                int *l_286 = (void*)0;
                int *l_288 = &l_187;
                int *l_289 = &l_252;
                int *l_290 = &l_163;
                int *l_291 = &l_182;
                int *l_292 = (void*)0;
                int *l_293 = &l_182;
                int *l_294 = &l_146;
                int *l_295 = &l_164;
                int *l_296 = &g_31.f4;
                int *l_298 = (void*)0;
                int *l_299 = &g_41.f3.f6.f4;
                for (g_41.f3.f6.f6 = (-3); (g_41.f3.f6.f6 <= 50); ++g_41.f3.f6.f6)
                {
                    unsigned l_138 = 0xD3E3130CL;
                    for (g_41.f5 = 4; (g_41.f5 == (-4)); g_41.f5 = safe_sub_func_uint64_t_u_u(g_41.f5, 4))
                    {
                        int **l_145 = &l_101;
                        l_135++;
                        (*l_145) = func_79(l_138, &p_77);
                        l_146 |= l_135;
                    }
                }
                (*l_88) ^= ((1UL & (&p_77 == (*g_83))) , (safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint64_t_u_u(8UL, (p_74 | (l_153 , (((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((*p_76), p_74)), (((0xADL == 0xB1L) && g_41.f3.f1.f2) != l_158))) , 0L) & l_127))))) , l_159), l_159)) , 4294967294UL) != g_31.f3), 1)));
            }
        }
        if (((g_41.f3.f1.f4 <= 0x8855L) | (*l_91)))
        {
            for (g_41.f3.f1.f0 = (-2); (g_41.f3.f1.f0 <= 6); g_41.f3.f1.f0++)
            {
                return (*g_83);
            }
            (*g_83) = &p_77;
        }
        else
        {
            int *l_305 = &l_93;
            int *l_306 = &l_95;
            int *l_307 = &l_187;
            int *l_308 = &l_187;
            int *l_309 = &l_99;
            int *l_310 = &g_41.f3.f1.f4;
            int *l_311 = (void*)0;
            int *l_312 = &g_31.f4;
            int *l_313 = &g_31.f4;
            int *l_314 = &l_93;
            int *l_315 = &l_146;
            int *l_317 = &l_99;
            int *l_318 = (void*)0;
            int *l_319 = &l_187;
            int *l_320 = &l_99;
            int *l_321 = (void*)0;
            int *l_322 = (void*)0;
            int *l_323 = (void*)0;
            int *l_324 = (void*)0;
            int *l_325 = &l_187;
            int *l_326 = (void*)0;
            unsigned l_327 = 0xB1098895L;
            ++l_327;
        }
        return l_331;
    }
    for (g_41.f4 = 11; (g_41.f4 > 34); g_41.f4 = safe_add_func_int32_t_s_s(g_41.f4, 2))
    {
        unsigned l_336 = 0xDA5584C7L;
        for (g_41.f3.f1.f4 = (-25); (g_41.f3.f1.f4 <= 6); g_41.f3.f1.f4 = safe_add_func_uint32_t_u_u(g_41.f3.f1.f4, 1))
        {
            unsigned char l_358 = 0x45L;
            if ((l_336 ^ (-1L)))
            {
                int l_342 = 0xCE891F90L;
                (*l_87) ^= (((safe_rshift_func_uint8_t_u_s(((g_41.f3.f6.f2 == (safe_rshift_func_int8_t_s_s(0x37L, (g_341 , g_31.f3)))) , 0UL), 2)) || 0x7BL) > l_342);
            }
            else
            {
                unsigned long long l_366 = 0x3A2BE1988FE78D94LL;
                for (g_41.f3.f6.f0 = (-9); (g_41.f3.f6.f0 < 2); g_41.f3.f6.f0 = safe_add_func_int8_t_s_s(g_41.f3.f6.f0, 2))
                {
                    int l_353 = 0x55A2FE9DL;
                    struct S1 l_359 = {0x8F8D6407A8616AA9LL,{18446744073709551615UL,0x2D5FL,0UL,2L,0x815A9018L,0xF9AAL,0x7C46L,0xDB716601L},5UL,-4L,0xA1D19CB7L,0xB11A2948L,{8UL,8UL,2UL,-1L,0x8E2FBED1L,0x83E8L,0x93DBL,18446744073709551615UL},0x789288F0L};
                    struct S2 *l_362 = (void*)0;
                    (*l_102) = (((safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((g_179 > ((safe_rshift_func_uint16_t_u_s((*l_92), 1)) , p_77)) && (safe_sub_func_uint8_t_u_u(0UL, p_74))), (&g_31 != (void*)0))), (((l_353 <= ((((safe_lshift_func_int16_t_s_s((((safe_add_func_int32_t_s_s(l_358, 0x72F012C4L)) >= g_41.f3.f6.f3) == 6UL), 5)) != l_358) & (*l_96)) && p_74)) <= l_358) ^ l_336))) & p_74) > p_77);
                    if ((l_359 , 0xB265C909L))
                    {
                        struct S2 **l_363 = (void*)0;
                        struct S2 **l_364 = (void*)0;
                        struct S2 **l_365 = &l_362;
                        (*l_365) = (((6UL <= (g_190 < p_74)) <= p_77) , l_362);
                        (*l_97) = ((g_41 , &g_83) == &g_83);
                        l_366 |= 0L;
                        if (l_366)
                            continue;
                    }
                    else
                    {
                        (*l_88) ^= ((void*)0 == (*l_106));
                    }
                    (*g_83) = &p_77;
                    (**l_106) = g_367;
                }
            }
            for (g_115 = 0; (g_115 <= 5); ++g_115)
            {
                struct S0 *l_371 = (void*)0;
                struct S0 *l_372 = &l_370;
                (*l_372) = l_370;
            }
            (*g_367) = (((((((safe_add_func_uint8_t_u_u(l_358, ((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_add_func_int64_t_s_s(g_300, ((void*)0 != g_382))), 0x4EB88B96L)), 7)))) | g_31.f3))) || ((l_384 == (void*)0) & (p_74 > 0xCCL))) | p_77) & p_74) < l_336) , 0x98ABA70BE18EF67CLL) & g_41.f3.f6.f2);
        }
    }
    return (**l_106);
}







static int * func_79(int p_80, int * p_81)
{
    int ***l_85 = &g_83;
    (*p_81) &= g_41.f3.f1.f2;
    (*l_85) = g_83;
    return (**l_85);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
    transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
    transparent_crc(g_31.f2, "g_31.f2", print_hash_value);
    transparent_crc(g_31.f3, "g_31.f3", print_hash_value);
    transparent_crc(g_31.f4, "g_31.f4", print_hash_value);
    transparent_crc(g_31.f5, "g_31.f5", print_hash_value);
    transparent_crc(g_31.f6, "g_31.f6", print_hash_value);
    transparent_crc(g_31.f7, "g_31.f7", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f1, "g_41.f1", print_hash_value);
    transparent_crc(g_41.f2, "g_41.f2", print_hash_value);
    transparent_crc(g_41.f3.f0, "g_41.f3.f0", print_hash_value);
    transparent_crc(g_41.f3.f1.f0, "g_41.f3.f1.f0", print_hash_value);
    transparent_crc(g_41.f3.f1.f1, "g_41.f3.f1.f1", print_hash_value);
    transparent_crc(g_41.f3.f1.f2, "g_41.f3.f1.f2", print_hash_value);
    transparent_crc(g_41.f3.f1.f3, "g_41.f3.f1.f3", print_hash_value);
    transparent_crc(g_41.f3.f1.f4, "g_41.f3.f1.f4", print_hash_value);
    transparent_crc(g_41.f3.f1.f5, "g_41.f3.f1.f5", print_hash_value);
    transparent_crc(g_41.f3.f1.f6, "g_41.f3.f1.f6", print_hash_value);
    transparent_crc(g_41.f3.f1.f7, "g_41.f3.f1.f7", print_hash_value);
    transparent_crc(g_41.f3.f2, "g_41.f3.f2", print_hash_value);
    transparent_crc(g_41.f3.f3, "g_41.f3.f3", print_hash_value);
    transparent_crc(g_41.f3.f4, "g_41.f3.f4", print_hash_value);
    transparent_crc(g_41.f3.f5, "g_41.f3.f5", print_hash_value);
    transparent_crc(g_41.f3.f6.f0, "g_41.f3.f6.f0", print_hash_value);
    transparent_crc(g_41.f3.f6.f1, "g_41.f3.f6.f1", print_hash_value);
    transparent_crc(g_41.f3.f6.f2, "g_41.f3.f6.f2", print_hash_value);
    transparent_crc(g_41.f3.f6.f3, "g_41.f3.f6.f3", print_hash_value);
    transparent_crc(g_41.f3.f6.f4, "g_41.f3.f6.f4", print_hash_value);
    transparent_crc(g_41.f3.f6.f5, "g_41.f3.f6.f5", print_hash_value);
    transparent_crc(g_41.f3.f6.f6, "g_41.f3.f6.f6", print_hash_value);
    transparent_crc(g_41.f3.f6.f7, "g_41.f3.f6.f7", print_hash_value);
    transparent_crc(g_41.f3.f7, "g_41.f3.f7", print_hash_value);
    transparent_crc(g_41.f4, "g_41.f4", print_hash_value);
    transparent_crc(g_41.f5, "g_41.f5", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_654, "g_654", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    transparent_crc(g_719, "g_719", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_752, "g_752", print_hash_value);
    transparent_crc(g_756, "g_756", print_hash_value);
    transparent_crc(g_825, "g_825", print_hash_value);
    transparent_crc(g_842, "g_842", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_953.f0, "g_953.f0", print_hash_value);
    transparent_crc(g_953.f1, "g_953.f1", print_hash_value);
    transparent_crc(g_953.f2, "g_953.f2", print_hash_value);
    transparent_crc(g_953.f3.f0, "g_953.f3.f0", print_hash_value);
    transparent_crc(g_953.f3.f1.f0, "g_953.f3.f1.f0", print_hash_value);
    transparent_crc(g_953.f3.f1.f1, "g_953.f3.f1.f1", print_hash_value);
    transparent_crc(g_953.f3.f1.f2, "g_953.f3.f1.f2", print_hash_value);
    transparent_crc(g_953.f3.f1.f3, "g_953.f3.f1.f3", print_hash_value);
    transparent_crc(g_953.f3.f1.f4, "g_953.f3.f1.f4", print_hash_value);
    transparent_crc(g_953.f3.f1.f5, "g_953.f3.f1.f5", print_hash_value);
    transparent_crc(g_953.f3.f1.f6, "g_953.f3.f1.f6", print_hash_value);
    transparent_crc(g_953.f3.f1.f7, "g_953.f3.f1.f7", print_hash_value);
    transparent_crc(g_953.f3.f2, "g_953.f3.f2", print_hash_value);
    transparent_crc(g_953.f3.f3, "g_953.f3.f3", print_hash_value);
    transparent_crc(g_953.f3.f4, "g_953.f3.f4", print_hash_value);
    transparent_crc(g_953.f3.f5, "g_953.f3.f5", print_hash_value);
    transparent_crc(g_953.f3.f6.f0, "g_953.f3.f6.f0", print_hash_value);
    transparent_crc(g_953.f3.f6.f1, "g_953.f3.f6.f1", print_hash_value);
    transparent_crc(g_953.f3.f6.f2, "g_953.f3.f6.f2", print_hash_value);
    transparent_crc(g_953.f3.f6.f3, "g_953.f3.f6.f3", print_hash_value);
    transparent_crc(g_953.f3.f6.f4, "g_953.f3.f6.f4", print_hash_value);
    transparent_crc(g_953.f3.f6.f5, "g_953.f3.f6.f5", print_hash_value);
    transparent_crc(g_953.f3.f6.f6, "g_953.f3.f6.f6", print_hash_value);
    transparent_crc(g_953.f3.f6.f7, "g_953.f3.f6.f7", print_hash_value);
    transparent_crc(g_953.f3.f7, "g_953.f3.f7", print_hash_value);
    transparent_crc(g_953.f4, "g_953.f4", print_hash_value);
    transparent_crc(g_953.f5, "g_953.f5", print_hash_value);
    transparent_crc(g_1127, "g_1127", print_hash_value);
    transparent_crc(g_1131, "g_1131", print_hash_value);
    transparent_crc(g_1171, "g_1171", print_hash_value);
    transparent_crc(g_1554.f0, "g_1554.f0", print_hash_value);
    transparent_crc(g_1554.f1, "g_1554.f1", print_hash_value);
    transparent_crc(g_1554.f2, "g_1554.f2", print_hash_value);
    transparent_crc(g_1554.f3.f0, "g_1554.f3.f0", print_hash_value);
    transparent_crc(g_1554.f3.f1.f0, "g_1554.f3.f1.f0", print_hash_value);
    transparent_crc(g_1554.f3.f1.f1, "g_1554.f3.f1.f1", print_hash_value);
    transparent_crc(g_1554.f3.f1.f2, "g_1554.f3.f1.f2", print_hash_value);
    transparent_crc(g_1554.f3.f1.f3, "g_1554.f3.f1.f3", print_hash_value);
    transparent_crc(g_1554.f3.f1.f4, "g_1554.f3.f1.f4", print_hash_value);
    transparent_crc(g_1554.f3.f1.f5, "g_1554.f3.f1.f5", print_hash_value);
    transparent_crc(g_1554.f3.f1.f6, "g_1554.f3.f1.f6", print_hash_value);
    transparent_crc(g_1554.f3.f1.f7, "g_1554.f3.f1.f7", print_hash_value);
    transparent_crc(g_1554.f3.f2, "g_1554.f3.f2", print_hash_value);
    transparent_crc(g_1554.f3.f3, "g_1554.f3.f3", print_hash_value);
    transparent_crc(g_1554.f3.f4, "g_1554.f3.f4", print_hash_value);
    transparent_crc(g_1554.f3.f5, "g_1554.f3.f5", print_hash_value);
    transparent_crc(g_1554.f3.f6.f0, "g_1554.f3.f6.f0", print_hash_value);
    transparent_crc(g_1554.f3.f6.f1, "g_1554.f3.f6.f1", print_hash_value);
    transparent_crc(g_1554.f3.f6.f2, "g_1554.f3.f6.f2", print_hash_value);
    transparent_crc(g_1554.f3.f6.f3, "g_1554.f3.f6.f3", print_hash_value);
    transparent_crc(g_1554.f3.f6.f4, "g_1554.f3.f6.f4", print_hash_value);
    transparent_crc(g_1554.f3.f6.f5, "g_1554.f3.f6.f5", print_hash_value);
    transparent_crc(g_1554.f3.f6.f6, "g_1554.f3.f6.f6", print_hash_value);
    transparent_crc(g_1554.f3.f6.f7, "g_1554.f3.f6.f7", print_hash_value);
    transparent_crc(g_1554.f3.f7, "g_1554.f3.f7", print_hash_value);
    transparent_crc(g_1554.f4, "g_1554.f4", print_hash_value);
    transparent_crc(g_1554.f5, "g_1554.f5", print_hash_value);
    transparent_crc(g_1659, "g_1659", print_hash_value);
    transparent_crc(g_1660, "g_1660", print_hash_value);
    transparent_crc(g_1767, "g_1767", print_hash_value);
    transparent_crc(g_1938, "g_1938", print_hash_value);
    transparent_crc(g_2165, "g_2165", print_hash_value);
    transparent_crc(g_2227, "g_2227", print_hash_value);
    transparent_crc(g_2302, "g_2302", print_hash_value);
    transparent_crc(g_2311, "g_2311", print_hash_value);
    transparent_crc(g_2437.f0, "g_2437.f0", print_hash_value);
    transparent_crc(g_2437.f1, "g_2437.f1", print_hash_value);
    transparent_crc(g_2437.f2, "g_2437.f2", print_hash_value);
    transparent_crc(g_2437.f3, "g_2437.f3", print_hash_value);
    transparent_crc(g_2437.f4, "g_2437.f4", print_hash_value);
    transparent_crc(g_2437.f5, "g_2437.f5", print_hash_value);
    transparent_crc(g_2437.f6, "g_2437.f6", print_hash_value);
    transparent_crc(g_2437.f7, "g_2437.f7", print_hash_value);
    transparent_crc(g_2785, "g_2785", print_hash_value);
    transparent_crc(g_2790, "g_2790", print_hash_value);
    transparent_crc(g_2819, "g_2819", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
