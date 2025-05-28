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
   unsigned f1;
   const unsigned f2;
   const unsigned char f3;
   unsigned f4;
   const short f5;
   unsigned short f6;
   unsigned f7;
   unsigned f8;
};

struct S1 {
   char f0;
   int f1;
   unsigned f2;
   int f3;
   int f4;
   short f5;
   int f6;
   short f7;
   int f8;
};

struct S2 {
   char f0;
   struct S1 f1;
   const int f2;
};


static int g_2 = 0x2A3B3F36L;
static int g_7[7][6] = {{0x0A3267E6L, 1L, 0x0A3267E6L, 1L, 0x0A3267E6L, 1L}, {0x0A3267E6L, 1L, 0x0A3267E6L, 1L, 0x0A3267E6L, 1L}, {0x0A3267E6L, 1L, 0x0A3267E6L, 1L, 0x0A3267E6L, 1L}, {0x0A3267E6L, 1L, 0x0A3267E6L, 1L, 0x0A3267E6L, 1L}, {0x0A3267E6L, 1L, 0x0A3267E6L, 1L, 0x0A3267E6L, 1L}, {0x0A3267E6L, 1L, 0x0A3267E6L, 1L, 0x0A3267E6L, 1L}, {0x0A3267E6L, 1L, 0x0A3267E6L, 1L, 0x0A3267E6L, 1L}};
static int g_8 = 0x97515801L;
static int g_9 = 0x3E713E19L;
static unsigned short g_16 = 0x484FL;
static struct S1 g_18 = {0L,1L,1UL,0L,-10L,-1L,0xFB6F8A3EL,0x9E13L,8L};
static struct S1 g_20 = {0xD2L,1L,1UL,0xA86D6A6CL,0x4309E953L,0x2A71L,0x1CA8FD5FL,4L,0x34D12EA0L};
static struct S2 g_41 = {0x43L,{0xA0L,1L,0x0D965893L,0x7CB90AFEL,-1L,0x84A4L,0L,1L,0x0C841BEEL},0xF453539CL};
static unsigned g_42 = 0xC311281BL;
static unsigned g_76[8][4] = {{0UL, 0UL, 0UL, 0xD82A544FL}, {0UL, 0UL, 0UL, 0xD82A544FL}, {0UL, 0UL, 0UL, 0xD82A544FL}, {0UL, 0UL, 0UL, 0xD82A544FL}, {0UL, 0UL, 0UL, 0xD82A544FL}, {0UL, 0UL, 0UL, 0xD82A544FL}, {0UL, 0UL, 0UL, 0xD82A544FL}, {0UL, 0UL, 0UL, 0xD82A544FL}};
static unsigned g_107[5] = {18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL};
static const unsigned char g_128 = 0xFCL;
static int g_175 = 0xC847D68FL;
static unsigned g_289 = 1UL;
static short g_310 = (-1L);
static unsigned short g_408 = 0UL;
static int g_495 = 0x3C3525F6L;
static unsigned char g_729 = 255UL;
static int g_736 = 0xB93A83EDL;
static int g_791 = 0x50ACA08DL;
static unsigned g_807 = 0x5A5E6038L;
static short g_894 = 0xA85BL;



static unsigned char func_1(void);
static unsigned short func_10(unsigned p_11);
static struct S1 func_13(struct S1 p_14);
static unsigned char func_24(const unsigned short p_25, unsigned short p_26, short p_27);
static char func_28(const unsigned short p_29, unsigned p_30, char p_31, struct S1 p_32, struct S1 p_33);
static unsigned func_36(struct S2 p_37, struct S1 p_38, unsigned char p_39, short p_40);
static struct S2 func_49(struct S1 p_50, struct S1 p_51, unsigned short p_52, unsigned short p_53);
static unsigned char func_57(short p_58, char p_59);
static struct S1 func_73(unsigned short p_74);
static struct S1 func_81(unsigned p_82, struct S1 p_83, unsigned p_84, unsigned short p_85);
static unsigned char func_1(void)
{
    unsigned l_6[4] = {18446744073709551614UL, 0UL, 18446744073709551614UL, 0UL};
    int l_19 = 0x85637EACL;
    unsigned short l_578 = 0x38B2L;
    unsigned l_652 = 0UL;
    int l_689 = 0L;
    struct S1 l_755 = {0xCDL,-3L,4294967293UL,0L,0xC7B0B8C8L,0x1CD7L,-1L,3L,0x835D2287L};
    int l_770 = (-3L);
    unsigned char l_771[7] = {0x64L, 0x50L, 0x64L, 0x50L, 0x64L, 0x50L, 0x64L};
    char l_797 = 8L;
    struct S1 l_1083 = {0L,0x32999189L,0xC4A6619CL,0xDF1EA45AL,0xE649A414L,0x4978L,-1L,0xBD04L,0x97CF50D7L};
    struct S2 l_1140 = {0xAAL,{0xA6L,7L,4294967295UL,0x319AADA2L,0x59A24EEBL,0xAEE9L,0xDD055330L,0x5799L,0x564BA2D4L},1L};
    unsigned char l_1147 = 0x6AL;
    unsigned short l_1176 = 65529UL;
    unsigned l_1201[8] = {0UL, 8UL, 0UL, 8UL, 0UL, 8UL, 0UL, 8UL};
    char l_1203 = 0L;
    int i;
lbl_898:
    for (g_2 = (-16); (g_2 <= (-5)); ++g_2)
    {
        const unsigned l_5 = 4294967287UL;
        if (l_5)
            break;
    }
    for (g_2 = 3; (g_2 >= 0); g_2 -= 1)
    {
        struct S1 l_21[7][7][4] = {{{{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}}, {{{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}}, {{{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}}, {{{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}}, {{{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}}, {{{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}}, {{{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}, {{-1L,0x9F15FC87L,1UL,-9L,1L,-9L,0x7A232894L,0L,0x91E2C025L}, {0L,-8L,0x37C870D1L,0x41160C00L,0xE742402BL,9L,0x0B5C327FL,0x81B2L,0L}, {1L,0x939616D9L,0xD53D6C1CL,0L,0L,6L,-4L,0L,0x7682755FL}, {-1L,0x2610AA4AL,0UL,0xA4289548L,0x7A000C97L,0x708CL,1L,0xB93DL,0x2A25C95EL}}}};
        unsigned short l_648 = 65535UL;
        unsigned short l_653 = 1UL;
        struct S2 l_754 = {0x39L,{-2L,1L,4294967291UL,0xFE4729F3L,0x8ABAF294L,0x1E15L,0L,-1L,0x44032FA8L},0x6547C22FL};
        int i, j, k;
        for (g_7[1][3] = 0; (g_7[1][3] <= 3); g_7[1][3] += 1)
        {
            char l_23 = 0L;
            int l_555 = 0x96EC0867L;
            for (g_8 = 0; (g_8 <= 3); g_8 += 1)
            {
                int l_539 = (-4L);
                struct S1 l_540 = {0L,0x3A4B2E41L,0UL,0L,0x026780B7L,-1L,0x93EC72EAL,3L,0L};
                unsigned char l_552 = 5UL;
                for (g_9 = 0; (g_9 <= 3); g_9 += 1)
                {
                    struct S1 l_15 = {0x52L,0x3B9C309AL,1UL,0xB61943ECL,0xE1B8D813L,0xDDA8L,0xB8B0D58EL,0xEA1BL,2L};
                    const unsigned short l_527 = 0xD340L;
                    int i;
                    if ((func_10(l_6[g_9]) ^ g_7[1][3]))
                    {
                        g_18 = func_13(l_15);
                        l_19 = g_18.f2;
                        l_21[4][1][0] = func_13(g_20);
                    }
                    else
                    {
                        const char l_22 = 1L;
                        g_18.f1 = (l_22 || func_10(l_23));
                        l_21[4][1][0].f1 = ((g_18.f2 ^ (l_23 & func_10(g_7[2][5]))) && func_24((func_28((safe_mod_func_int16_t_s_s(0x7763L, g_20.f3)), func_36(g_41, g_41.f1, g_18.f8, g_42), g_16, g_20, g_20) >= l_527), l_6[3], l_6[1]));
                        if (l_539)
                            break;
                    }
                    for (l_15.f7 = 3; (l_15.f7 >= 0); l_15.f7 -= 1)
                    {
                        g_20 = l_540;
                        g_18.f1 = l_6[0];
                        g_41.f1.f1 = l_540.f8;
                    }
                    for (g_41.f1.f1 = 0; (g_41.f1.f1 <= 3); g_41.f1.f1 += 1)
                    {
                        struct S1 l_541 = {0xF8L,1L,0x17C942A9L,0x600A9A87L,0xA9FF5FE8L,1L,-1L,0x215CL,0x4F2D5581L};
                        l_541 = l_15;
                    }
                }
                for (g_20.f0 = 0; (g_20.f0 <= 3); g_20.f0 += 1)
                {
                    unsigned l_556 = 0x0FB43F21L;
                    for (g_18.f1 = 0; (g_18.f1 <= 3); g_18.f1 += 1)
                    {
                        int l_557 = (-1L);
                        int i, j;
                        g_18.f6 = (safe_rshift_func_int8_t_s_u((g_76[g_18.f1][g_20.f0] != (safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s((-1L), g_20.f8)), 65529UL))), 6));
                        g_41.f1 = g_18;
                        l_557 = (safe_rshift_func_uint8_t_u_s((0x0700L >= ((safe_rshift_func_int8_t_s_u((l_552 || (safe_rshift_func_uint16_t_u_u(func_10(((((g_41.f1.f8 != g_76[g_18.f1][g_20.f0]) | ((g_9 == ((g_8 == func_36(g_41, g_18, (3UL <= 0UL), l_23)) > l_555)) & g_175)) & l_540.f3) | l_21[4][1][0].f5)), 15))), l_556)) == g_18.f4)), 6));
                        g_41.f1 = g_41.f1;
                    }
                    for (l_540.f6 = 3; (l_540.f6 >= 0); l_540.f6 -= 1)
                    {
                        g_41.f1.f1 = (safe_mul_func_int16_t_s_s(func_57(((g_41.f1.f7 <= g_20.f1) < l_556), g_41.f1.f0), g_18.f3));
                    }
                    if (g_18.f7)
                        continue;
                    l_540.f3 = 0x2821F11DL;
                }
                if (g_20.f6)
                    break;
            }
            for (g_495 = 0; (g_495 <= 3); g_495 += 1)
            {
                return g_20.f7;
            }
            if (g_20.f4)
                break;
        }
        for (g_20.f1 = 0; (g_20.f1 <= 3); g_20.f1 += 1)
        {
            struct S2 l_575 = {1L,{0x2FL,0x2C00899FL,0xC7E41E77L,-1L,0x24811D9DL,0L,0L,-1L,7L},0x14DEB2C4L};
            g_20.f3 = (safe_mod_func_int16_t_s_s(g_41.f1.f1, g_41.f1.f7));
            for (g_16 = 0; (g_16 <= 3); g_16 += 1)
            {
                unsigned l_570[9] = {0xF42F7E76L, 1UL, 0xF42F7E76L, 1UL, 0xF42F7E76L, 1UL, 0xF42F7E76L, 1UL, 0xF42F7E76L};
                int l_588 = (-7L);
                struct S2 l_678 = {-8L,{0x7DL,0x5C5335A2L,1UL,8L,0x4E05E219L,0x2B91L,1L,0xB413L,0x06AD65C5L},0x5582B3F6L};
                struct S1 l_690 = {0L,-10L,4294967295UL,2L,0xEF914834L,0x8E85L,0x51EF3A59L,0xEF1BL,-1L};
                int i;
                if (l_21[4][1][0].f0)
                {
                    struct S1 l_579 = {0x77L,-1L,0x262CCC5DL,1L,0x42D70645L,1L,0x06AC85F0L,1L,0L};
                    struct S2 l_611 = {0xD0L,{0x5CL,-8L,0xAA9345F6L,0L,0L,-1L,0x5C4DB497L,1L,0xDD8FDE71L},-2L};
                    for (g_20.f5 = 3; (g_20.f5 >= 0); g_20.f5 -= 1)
                    {
                        if (g_18.f4)
                            break;
                    }
                    if ((((func_10((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(func_36(g_41, g_41.f1, (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((g_107[4] < l_570[3]) < (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((((func_36(l_575, func_73(((safe_mul_func_int8_t_s_s((((0x31BEL == (g_2 | ((func_36(l_575, g_41.f1, g_2, l_570[3]) > g_41.f1.f0) && g_41.f1.f4))) == g_20.f1) == 0x794A50CAL), l_575.f1.f8)) ^ 1UL)), g_41.f1.f3, g_41.f0) ^ l_21[4][1][0].f3) >= (-5L)) != 65535UL), 1L)), g_107[4]))), 0x7EL)), l_578)), l_19), g_41.f2)), g_18.f8))) <= l_570[6]) | 0x6EEFL) & l_570[3]))
                    {
                        struct S1 l_580 = {0x14L,1L,4294967289UL,4L,0x7D2406A5L,-3L,0L,8L,1L};
                        l_580 = l_579;
                        if (l_19)
                            continue;
                        return l_579.f2;
                    }
                    else
                    {
                        unsigned short l_587 = 0x1422L;
                        unsigned l_600 = 4294967294UL;
                        g_20.f3 = (8L == (((safe_lshift_func_uint16_t_u_s(func_10(func_57(g_7[0][5], l_579.f3)), 10)) && (l_578 != 0x0FL)) < (((safe_sub_func_int32_t_s_s((0x4BA0L == (-9L)), l_587)) || l_588) && g_20.f5)));
                        l_575.f1.f6 = (l_579.f1 | ((safe_sub_func_uint16_t_u_u(func_10(l_579.f4), func_10(g_7[1][3]))) != (l_587 >= 4294967292UL)));
                        g_20.f6 = (((l_587 || g_310) ^ (safe_mul_func_uint8_t_u_u(((l_575.f1.f3 < l_570[2]) < (g_18.f2 <= ((safe_unary_minus_func_int32_t_s(g_41.f1.f5)) != (safe_div_func_int16_t_s_s(l_588, g_76[4][0]))))), func_10(((~((((safe_mod_func_int16_t_s_s(0x4912L, l_600)) == g_18.f6) && g_41.f1.f1) || g_2)) & l_570[3]))))) < l_21[4][1][0].f3);
                    }
                    l_19 = (((!l_21[4][1][0].f7) < l_19) == (safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(g_2, func_36(g_41, g_20, (safe_mul_func_int8_t_s_s(func_57(l_570[0], l_19), (safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((g_41.f1.f2 == (-1L)) | 1L), 9L)) == g_18.f7), l_575.f1.f7)))), l_578))), 6)));
                    if (func_36(l_611, func_73(func_36(g_41, func_73((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(g_41.f2, g_18.f3)), (safe_lshift_func_uint8_t_u_u(l_575.f1.f2, 1))))), l_21[4][1][0].f3, ((safe_mul_func_uint8_t_u_u(g_310, l_19)) != g_20.f5))), l_611.f1.f7, l_575.f1.f5))
                    {
                        return g_495;
                    }
                    else
                    {
                        l_575.f1 = func_73((safe_mul_func_uint16_t_u_u(g_41.f1.f8, g_41.f1.f4)));
                        l_575.f1.f6 = (g_42 == l_21[4][1][0].f0);
                        g_41.f1.f6 = (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(l_588, ((l_588 || (65531UL & (safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(l_575.f1.f6, l_578)), 1UL)), (l_611.f1.f6 == g_41.f1.f0))))) != g_20.f8))), 0x9DD7L));
                    }
                }
                else
                {
                    for (g_18.f2 = 0; g_18.f2 < 5; g_18.f2 += 1)
                    {
                        g_107[g_18.f2] = 0x4132536EL;
                    }
                    for (l_578 = 0; (l_578 <= 3); l_578 += 1)
                    {
                        unsigned short l_651 = 0xB051L;
                        l_652 = ((safe_sub_func_uint16_t_u_u(g_41.f1.f6, func_57((safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((l_21[4][1][0].f8 <= ((safe_add_func_int8_t_s_s((((0x64L & (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_s(func_10(g_20.f8), (safe_div_func_uint16_t_u_u((((l_648 == g_20.f5) < 0x37L) >= (safe_sub_func_uint16_t_u_u(l_575.f1.f8, g_42))), g_76[0][2])))) != 1L), g_128)), g_8))) & 1UL) != g_20.f6), l_21[4][1][0].f6)) || 0xFCBDL)), l_651)), l_575.f1.f7)), g_18.f7))) && l_588);
                    }
                    for (l_575.f1.f6 = 3; (l_575.f1.f6 >= 0); l_575.f1.f6 -= 1)
                    {
                        l_588 = g_42;
                    }
                }
                for (g_18.f8 = 3; (g_18.f8 >= 0); g_18.f8 -= 1)
                {
                    int l_672 = (-3L);
                    l_653 = l_575.f0;
                    l_588 = (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((g_41.f1.f1 || ((safe_add_func_int8_t_s_s((!l_652), (((g_18.f8 && ((safe_mul_func_int8_t_s_s(l_575.f1.f7, ((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(1L, (g_18.f5 | (safe_lshift_func_int8_t_s_s(6L, 2))))), ((safe_sub_func_int16_t_s_s((!(safe_mod_func_int32_t_s_s(7L, (g_20.f4 && 65535UL)))), l_652)) & g_107[4]))) != 0x02L))) == l_575.f1.f0)) & g_20.f8) < 0x1FL))) >= g_42)) != l_672), l_19)), 0x061EL));
                    if (l_570[3])
                    {
                        unsigned char l_675 = 0xFBL;
                        g_18.f6 = func_10(((g_128 == (safe_mul_func_int16_t_s_s(1L, l_675))) < (safe_mod_func_int8_t_s_s(func_57(func_36(l_678, g_41.f1, g_18.f0, g_16), l_575.f1.f0), l_575.f1.f4))));
                        g_41.f1 = func_73(l_575.f1.f4);
                    }
                    else
                    {
                        l_21[4][1][0].f3 = (((g_289 || ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(3UL, l_19)), (+0x98L))) & 0L)) != (safe_mul_func_int16_t_s_s(g_20.f2, (!(((!0x16B90B19L) && (((((func_57((safe_mod_func_int8_t_s_s(0xF5L, (~g_8))), g_495) | l_575.f1.f5) > g_18.f4) == l_678.f1.f8) != g_41.f1.f1) > g_41.f0)) > 0xD0L))))) && 255UL);
                    }
                    if ((l_678.f0 <= (((safe_mod_func_int16_t_s_s(l_689, 1UL)) < func_57(g_18.f1, g_7[6][1])) < (0xA2L & g_18.f8))))
                    {
                        g_41.f1 = l_690;
                        return g_289;
                    }
                    else
                    {
                        unsigned l_691 = 0xAE781246L;
                        if (l_691)
                            break;
                    }
                }
                l_575.f1 = g_20;
                return g_9;
            }
        }
        for (g_20.f8 = 3; (g_20.f8 >= 0); g_20.f8 -= 1)
        {
            unsigned l_715[6][4][6] = {{{0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}}, {{0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}}, {{0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}}, {{0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}}, {{0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}}, {{0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}, {0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL, 0x11ABE317L, 4294967295UL}}};
            char l_768 = 1L;
            int l_773 = 0x04248741L;
            int i, j, k;
            for (g_20.f0 = 0; (g_20.f0 <= 3); g_20.f0 += 1)
            {
                int i, j;
                g_7[(g_20.f8 + 1)][(g_20.f8 + 1)] = (safe_sub_func_uint32_t_u_u(g_7[(g_20.f8 + 2)][(g_20.f8 + 1)], ((safe_add_func_int32_t_s_s((-7L), g_7[(g_20.f0 + 3)][g_20.f8])) | ((((func_36(g_41, func_13(func_13(func_13(g_20))), ((safe_add_func_int16_t_s_s(l_578, 65535UL)) >= 1UL), g_20.f4) == g_41.f1.f8) & g_41.f1.f4) || 0x8CL) & 8L))));
                if ((8UL | (safe_unary_minus_func_int32_t_s((g_7[(g_20.f8 + 2)][(g_20.f8 + 1)] && ((safe_sub_func_uint8_t_u_u(((+((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(0UL, func_57(g_7[(g_20.f8 + 1)][(g_20.f8 + 1)], ((safe_rshift_func_uint16_t_u_s(g_41.f1.f8, ((((safe_mul_func_int8_t_s_s((((g_41.f1.f1 & 0x1AL) || (safe_div_func_uint32_t_u_u(0x8D2AFAB6L, g_7[(g_20.f8 + 2)][(g_20.f8 + 1)]))) < 1UL), l_715[3][2][2])) == 1L) >= g_41.f1.f0) != 1L))) == g_7[(g_20.f0 + 3)][g_20.f8])))) < l_21[4][1][0].f1), (-6L))) && l_715[3][2][2]) & l_689), g_18.f7)), g_41.f1.f5)) > l_715[5][0][2])) < 0x90L), 0L)) < g_18.f2))))))
                {
                    l_21[4][1][0].f3 = func_36(g_41, g_41.f1, (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(0x57L, func_57(g_18.f5, ((((safe_sub_func_int32_t_s_s((g_7[(g_20.f8 + 1)][(g_20.f8 + 1)] <= 0x474DL), l_689)) | (l_652 >= l_578)) != g_20.f2) != g_41.f1.f4)))), 0x0500L)), g_20.f5);
                    for (l_652 = 0; (l_652 <= 4); l_652 += 1)
                    {
                        int i, j, k;
                        l_21[(g_20.f0 + 1)][(g_2 + 2)][g_2] = g_18;
                        return l_6[g_2];
                    }
                }
                else
                {
                    const unsigned short l_726 = 0x9F90L;
                    if (l_21[4][1][0].f7)
                    {
                        int i, j, k;
                        l_21[(g_2 + 1)][(g_20.f0 + 1)][g_2] = func_13(g_41.f1);
                        g_18.f6 = (safe_sub_func_uint8_t_u_u(0x28L, (safe_sub_func_uint16_t_u_u(l_726, g_41.f1.f7))));
                        if (l_21[(g_2 + 1)][(g_20.f0 + 1)][g_2].f1)
                            continue;
                    }
                    else
                    {
                        return g_18.f7;
                    }
                    for (g_175 = 0; (g_175 <= 4); g_175 += 1)
                    {
                        int i;
                        g_20.f6 = g_107[(g_20.f0 + 1)];
                    }
                    g_41.f1.f3 = (g_9 > 2UL);
                }
                l_21[4][1][0].f6 = ((safe_rshift_func_int8_t_s_u(func_10(l_715[3][2][2]), g_729)) | (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s(g_20.f7, (safe_add_func_int32_t_s_s((g_736 ^ func_10(g_7[(g_20.f8 + 1)][(g_20.f8 + 1)])), func_57(l_715[2][2][2], g_41.f1.f8))))), 0x004CL)));
            }
            for (g_20.f0 = 0; (g_20.f0 <= 3); g_20.f0 += 1)
            {
                short l_751 = (-2L);
                int i, j;
                for (g_41.f1.f5 = 0; (g_41.f1.f5 <= 5); g_41.f1.f5 += 1)
                {
                    struct S2 l_743 = {0xC5L,{0xFDL,0x1657857BL,0xE50B15AFL,0xDF1E0BD9L,0x375F601FL,0L,1L,0x99BAL,0L},-1L};
                    int i, j, k;
                    g_7[(g_20.f8 + 1)][g_41.f1.f5] = (~g_7[g_20.f0][(g_2 + 2)]);
                    if (((safe_sub_func_int8_t_s_s((l_6[g_2] < l_715[0][0][3]), (g_107[4] ^ (safe_add_func_uint8_t_u_u(g_8, ((+0x2AL) | 1UL)))))) > ((g_107[4] || l_715[4][1][5]) & (safe_add_func_uint8_t_u_u(g_18.f8, l_6[g_2])))))
                    {
                        g_20.f3 = 0xDBCF4172L;
                    }
                    else
                    {
                        const unsigned char l_744 = 0xE0L;
                        g_7[1][3] = func_10(func_36(l_743, g_41.f1, l_743.f2, l_21[4][1][0].f2));
                        l_19 = ((l_744 == ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(l_751, (safe_add_func_int32_t_s_s((((~l_743.f1.f4) <= (l_744 & func_36(l_754, l_755, l_751, (~(safe_add_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_s(g_41.f1.f6, 5)) <= (safe_rshift_func_int16_t_s_s((-1L), l_21[4][1][0].f1))) ^ 4294967286UL) && g_18.f0), g_2)))))) == l_751), 0xBB44C106L)))), g_20.f1)), l_21[4][1][0].f4)) & 0xC2L)) || l_755.f3);
                    }
                    l_21[(g_20.f8 + 2)][(g_20.f0 + 2)][g_2] = l_743.f1;
                    l_21[4][1][0].f1 = (safe_add_func_uint16_t_u_u(0x88BDL, (safe_mod_func_uint16_t_u_u(g_8, (safe_div_func_int32_t_s_s(l_715[2][1][4], (0x22C43DC5L || func_36(g_41, func_73(g_310), (l_743.f2 && g_41.f1.f6), l_743.f1.f6))))))));
                }
                g_7[(g_2 + 3)][(g_2 + 2)] = 0x5BA6C557L;
                if (g_7[(g_20.f8 + 3)][(g_20.f0 + 2)])
                {
                    struct S1 l_769 = {7L,-1L,0UL,-1L,1L,1L,1L,0xB35BL,-1L};
                    int i, j, k;
                    if (l_768)
                        break;
                    l_21[(g_2 + 1)][g_20.f0][g_20.f8] = l_769;
                    if (l_755.f3)
                        continue;
                    for (l_755.f4 = 0; (l_755.f4 <= 3); l_755.f4 += 1)
                    {
                        g_7[(g_20.f8 + 3)][(g_20.f0 + 2)] = l_770;
                        return l_771[0];
                    }
                }
                else
                {
                    const short l_772 = 0L;
                    l_773 = (l_768 >= (g_408 | l_772));
                    g_41.f1 = func_73(g_2);
                }
            }
        }
        if ((safe_sub_func_int16_t_s_s(l_21[4][1][0].f4, (g_7[5][5] >= g_41.f1.f6))))
        {
            l_755.f1 = (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(5UL, 2)), g_736)), (safe_rshift_func_uint8_t_u_s(l_755.f5, 4))));
            g_9 = ((((g_107[4] > (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((g_128 ^ ((~9UL) && 0x94L)), g_8)), (0x3E2F4C5DL & (func_10(g_18.f2) < g_729))))) < g_18.f3) != 0x13065BD2L) || g_736);
        }
        else
        {
            int l_825 = 0x2B0B1825L;
            int l_874[4];
            unsigned char l_903[2];
            short l_929 = (-1L);
            int i;
            for (i = 0; i < 4; i++)
                l_874[i] = 1L;
            for (i = 0; i < 2; i++)
                l_903[i] = 8UL;
            for (l_754.f1.f0 = 3; (l_754.f1.f0 >= 0); l_754.f1.f0 -= 1)
            {
                char l_788 = 0xA7L;
                g_41.f1.f6 = (g_41.f1.f5 ^ g_18.f4);
                l_788 = l_755.f4;
                if (g_18.f7)
                    break;
                if (((-2L) ^ (((0x12FD2A34L && (safe_sub_func_int16_t_s_s((-6L), (l_788 < g_791)))) || (safe_lshift_func_uint8_t_u_u(0UL, 4))) != g_18.f7)))
                {
                    struct S1 l_794 = {1L,0x6FD4A3D4L,1UL,-7L,0x0B2A6665L,8L,1L,0xACE6L,-1L};
                    l_794 = g_20;
                    g_41.f1.f1 = (safe_lshift_func_uint8_t_u_u(l_754.f1.f6, l_797));
                }
                else
                {
                    unsigned char l_804 = 1UL;
                    unsigned short l_811 = 2UL;
                    char l_837[4][10][6] = {{{(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}}, {{(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}}, {{(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}}, {{(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}, {(-1L), (-1L), 0L, 1L, (-1L), 0x59L}}};
                    int i, j, k;
                    if ((safe_sub_func_uint16_t_u_u(func_24(g_41.f1.f8, (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(l_21[4][1][0].f2, func_57((0xC0L > l_804), g_18.f1))), (safe_div_func_uint8_t_u_u(g_18.f2, 1L)))), (l_788 >= g_807)), g_289)))
                    {
                        struct S1 l_808 = {4L,0xFBC485F5L,0x96930F1AL,0x9B475DE1L,0xD567092CL,-4L,0xD68D22BBL,-7L,0xDBC523E8L};
                        g_736 = ((g_495 | 0L) | func_24(g_9, g_20.f6, g_495));
                        g_18 = l_808;
                    }
                    else
                    {
                        unsigned char l_824 = 247UL;
                        int l_828 = 0x4EB1DA08L;
                        l_811 = (safe_rshift_func_uint8_t_u_s(g_41.f1.f5, 6));
                        l_828 = ((safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(g_2, g_7[6][3])) || 0x6A149095L) & g_20.f6), (!(safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(func_57(l_788, l_824), 0)), l_825)), func_10((safe_mul_func_uint16_t_u_u((+l_825), l_824))))), g_20.f3))))) <= 0xA7L);
                    }
                    l_21[4][1][0].f1 = (safe_div_func_uint32_t_u_u(func_57((l_804 <= (0UL == (safe_add_func_int8_t_s_s((0UL == (safe_sub_func_int8_t_s_s(l_811, func_28((safe_add_func_int16_t_s_s(9L, ((g_20.f7 < l_6[2]) < (((g_2 > l_825) > g_107[4]) ^ g_41.f1.f1)))), g_20.f1, l_754.f0, l_755, g_20)))), l_755.f5)))), g_729), l_837[3][7][3]));
                    g_41.f1.f3 = ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((((l_21[4][1][0].f1 | ((safe_div_func_int8_t_s_s((g_18.f7 ^ (!(9UL < (safe_rshift_func_uint16_t_u_u(((g_107[2] & (l_788 >= (safe_sub_func_uint32_t_u_u(0xD46F9500L, (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int16_t_s(((safe_mul_func_int16_t_s_s(g_41.f1.f7, g_128)) || l_754.f1.f0))), 0)))))) >= l_754.f1.f7), g_8))))), 0x93L)) >= 0xBD0D4418L)) ^ g_791) >= 0x8028L), 15)), 4294967290UL)) || g_76[6][3]);
                }
            }
            g_41.f1.f6 = (g_791 || (l_21[4][1][0].f8 >= (safe_rshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((l_825 ^ (safe_add_func_uint8_t_u_u((((((safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s(l_825, 3UL)), g_791)) >= (safe_lshift_func_uint16_t_u_u(g_20.f1, 5))) == g_18.f4) ^ g_41.f1.f4) <= g_18.f0), 0x3FL))), 0x41A4L)), l_754.f1.f5)))), l_825)) > 0x55E0L), g_18.f6))));
            if (g_807)
            {
                unsigned l_890 = 0UL;
                unsigned short l_891 = 65532UL;
                struct S1 l_897 = {0xEDL,-1L,0UL,0x38BCDC9DL,-7L,8L,0xCFF84680L,-10L,9L};
                unsigned l_918 = 0x730A49E9L;
                int l_934 = 0x97A25FC8L;
                for (l_19 = 3; (l_19 >= 0); l_19 -= 1)
                {
                    short l_887 = 0xC499L;
                    l_874[2] = (safe_lshift_func_uint8_t_u_s(0xC1L, l_21[4][1][0].f8));
                    if (l_21[4][1][0].f1)
                        break;
                    if (g_495)
                        break;
                    for (g_310 = 3; (g_310 >= 0); g_310 -= 1)
                    {
                        l_891 = (((safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_771[0], (l_754.f0 || (safe_lshift_func_int8_t_s_s((!(safe_mod_func_int16_t_s_s(((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((l_874[3] > l_771[0]) <= g_20.f3), l_887)), l_887)) < 4UL), func_57((safe_add_func_uint32_t_u_u(1UL, l_887)), l_887)))), 2))))), (-6L))) || 0x827833E0L) ^ l_890);
                    }
                }
                l_755.f1 = 6L;
                for (l_754.f1.f6 = 0; (l_754.f1.f6 <= 4); l_754.f1.f6 += 1)
                {
                    unsigned short l_926 = 3UL;
                    for (g_18.f6 = 4; (g_18.f6 >= 0); g_18.f6 -= 1)
                    {
                        int i;
                        l_897.f3 = (safe_add_func_uint8_t_u_u(l_771[(g_18.f6 + 2)], func_57(g_894, ((l_755.f0 >= (l_890 >= (safe_sub_func_uint8_t_u_u(func_36(g_41, func_73(l_771[(g_18.f6 + 2)]), g_18.f1, func_36(g_41, l_897, l_891, g_7[0][1])), 0x8FL)))) ^ g_18.f0))));
                        if (g_807)
                            goto lbl_898;
                    }
                    if (g_128)
                        goto lbl_898;
                    if (((func_36(g_41, g_20, g_107[4], l_897.f2) >= (func_10(g_18.f5) || ((g_408 > (safe_div_func_int8_t_s_s((g_18.f0 == 0x7CL), g_20.f4))) > 65534UL))) < l_903[0]))
                    {
                        g_20.f3 = l_903[1];
                    }
                    else
                    {
                        g_20 = func_73(g_20.f5);
                        if (g_41.f0)
                            break;
                    }
                    if (((+func_36(l_754, g_41.f1, (safe_sub_func_uint16_t_u_u(g_2, 0x4D77L)), (safe_div_func_uint8_t_u_u(g_736, g_175)))) == ((-1L) <= ((safe_rshift_func_uint16_t_u_s(6UL, g_76[1][3])) == g_20.f7))))
                    {
                        unsigned l_921 = 0xF17B75C1L;
                        unsigned short l_937 = 0x6E51L;
                        g_18.f6 = (safe_rshift_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u((8L | l_903[0]), (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(g_18.f6, l_918)) && ((safe_div_func_int8_t_s_s(0L, l_897.f2)) < ((l_921 > (safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((0x99E8091DL & g_20.f1), g_41.f1.f1)), 5))) > l_926))), 65533UL)))) == (-2L)) ^ 0xDF40DE5EL), 2));
                        g_18 = func_13(func_81(l_897.f7, l_897, (safe_mul_func_uint16_t_u_u(g_128, l_929)), (safe_sub_func_uint16_t_u_u((l_755.f3 != ((l_652 < ((g_41.f1.f2 == g_41.f1.f0) == ((safe_sub_func_uint32_t_u_u(l_934, 0L)) < g_41.f0))) == g_20.f3)), l_754.f1.f2))));
                        l_937 = (((safe_lshift_func_int8_t_s_u(g_18.f3, g_41.f1.f8)) || func_57(g_20.f0, l_755.f5)) < (l_929 || (l_921 >= l_926)));
                    }
                    else
                    {
                        return l_926;
                    }
                }
                if (l_897.f6)
                    goto lbl_898;
            }
            else
            {
                int l_962 = 1L;
                struct S1 l_969 = {0x5BL,0xE08B8BCFL,4294967288UL,0xA21E766CL,-10L,1L,0x550B09F7L,0x9B5BL,0x92DBDB6BL};
                for (g_18.f4 = 0; (g_18.f4 <= 3); g_18.f4 += 1)
                {
                    struct S1 l_938 = {0xFCL,-8L,4294967288UL,0x60B1E6F2L,-3L,0x7518L,0xAF080395L,7L,0x18024168L};
                    unsigned l_970 = 4294967286UL;
                    for (g_41.f1.f1 = 0; (g_41.f1.f1 <= 4); g_41.f1.f1 += 1)
                    {
                        int i;
                        l_938 = func_13(func_13(func_73(l_771[(g_2 + 2)])));
                        if (l_771[g_2])
                            break;
                        return g_107[g_18.f4];
                    }
                    g_7[6][0] = (safe_add_func_int8_t_s_s(l_903[0], (0x8D550ED7L >= 0x60FCA55BL)));
                    g_41.f1.f1 = (safe_lshift_func_int16_t_s_u((l_874[2] ^ (safe_sub_func_uint16_t_u_u(0x946BL, (-5L)))), (safe_div_func_int8_t_s_s(func_10((safe_add_func_uint8_t_u_u((g_310 && l_771[0]), g_2))), g_791))));
                    for (l_652 = 0; (l_652 <= 3); l_652 += 1)
                    {
                        const int l_955 = 0xFD5A8F05L;
                        g_41.f1.f3 = (safe_add_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(l_955, ((safe_div_func_int32_t_s_s((g_18.f8 && (((~(safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_289, 7)), l_754.f1.f4))) | l_962) < (safe_mod_func_int16_t_s_s(l_21[4][1][0].f7, g_175)))), (safe_sub_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((l_770 < (l_19 && (-4L))), g_41.f0)) | 0x218CL), g_7[1][3])))) ^ 0UL))), 0)) > 0x81E4L) >= g_791) <= l_938.f7), (-10L)));
                        l_969 = g_41.f1;
                        l_754.f1.f1 = ((+l_970) != (l_955 & (safe_mul_func_int16_t_s_s(func_57(g_18.f6, l_938.f2), l_6[2]))));
                    }
                }
            }
        }
    }
    for (g_408 = 0; (g_408 > 54); g_408 = safe_add_func_int32_t_s_s(g_408, 7))
    {
        unsigned short l_981 = 0x6B64L;
        int l_991 = 1L;
        struct S1 l_1061[8][1] = {{{0x2BL,0x45542AD3L,0UL,0x6F3A3BF3L,0L,0x5E4CL,1L,0x9D75L,-5L}}, {{0x2BL,0x45542AD3L,0UL,0x6F3A3BF3L,0L,0x5E4CL,1L,0x9D75L,-5L}}, {{0x2BL,0x45542AD3L,0UL,0x6F3A3BF3L,0L,0x5E4CL,1L,0x9D75L,-5L}}, {{0x2BL,0x45542AD3L,0UL,0x6F3A3BF3L,0L,0x5E4CL,1L,0x9D75L,-5L}}, {{0x2BL,0x45542AD3L,0UL,0x6F3A3BF3L,0L,0x5E4CL,1L,0x9D75L,-5L}}, {{0x2BL,0x45542AD3L,0UL,0x6F3A3BF3L,0L,0x5E4CL,1L,0x9D75L,-5L}}, {{0x2BL,0x45542AD3L,0UL,0x6F3A3BF3L,0L,0x5E4CL,1L,0x9D75L,-5L}}, {{0x2BL,0x45542AD3L,0UL,0x6F3A3BF3L,0L,0x5E4CL,1L,0x9D75L,-5L}}};
        short l_1127 = 1L;
        unsigned l_1148 = 0UL;
        int i, j;
        for (g_18.f4 = (-27); (g_18.f4 >= 11); ++g_18.f4)
        {
            const char l_984 = 1L;
            struct S1 l_994 = {0xD2L,0xB26FB88DL,0x7106B728L,0x8CBA548BL,0x03E6AC93L,9L,0xAFBFE496L,0x1E5BL,1L};
            struct S2 l_1009 = {0x54L,{0xEBL,-1L,4294967293UL,0x683AA48EL,-9L,1L,0L,1L,0xF30EA7DEL},-1L};
            unsigned l_1031 = 1UL;
            if ((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((l_981 | g_76[0][1]), l_981)) && 0UL), 4)))
            {
                unsigned short l_990 = 65535UL;
                int l_1012 = 0x8CBC2C32L;
                const unsigned short l_1041 = 0x0A3AL;
                if ((safe_mul_func_uint16_t_u_u(0x81B4L, ((0x9577BB93L && l_771[0]) < l_984))))
                {
                    struct S1 l_985 = {8L,0xF3C96FA2L,0x8FFE931FL,-10L,4L,0x8822L,0x48CDE260L,0xD1ECL,-8L};
                    l_985 = l_755;
                    l_991 = (((g_9 || (safe_div_func_int32_t_s_s(func_36(g_41, func_73(l_985.f5), (255UL && l_985.f0), g_41.f1.f8), (safe_mod_func_uint16_t_u_u((g_18.f1 && 0x403FFA99L), g_18.f3))))) & l_990) >= 0x6C7CL);
                    for (g_310 = 0; (g_310 > (-24)); g_310 = safe_sub_func_int16_t_s_s(g_310, 2))
                    {
                        short l_1001 = 3L;
                        l_985 = l_994;
                        if (l_990)
                            break;
                        g_20.f1 = (safe_rshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((l_6[1] || (safe_mul_func_uint8_t_u_u(g_20.f8, (l_1001 == 0x5BB18B8DL)))), 4294967287UL)), 7));
                    }
                }
                else
                {
                    struct S1 l_1006 = {0x82L,0xDECA4D1DL,0x5579A06DL,0x5B01DAE2L,0x1B3F6CD0L,9L,0x829E0A11L,-3L,4L};
                    for (l_994.f4 = 22; (l_994.f4 < 1); l_994.f4 = safe_sub_func_int8_t_s_s(l_994.f4, 8))
                    {
                        g_20.f1 = ((safe_mul_func_int16_t_s_s(g_20.f7, g_20.f3)) | func_57(l_994.f2, l_994.f3));
                    }
                    l_1006 = g_20;
                    l_1012 = (((g_18.f3 >= (safe_div_func_uint16_t_u_u(0xD550L, l_1006.f7))) || (func_10(l_990) ^ (func_36(l_1009, g_18, (safe_mul_func_uint16_t_u_u(((l_1006.f1 | g_107[4]) <= l_981), l_990)), l_797) ^ g_76[1][0]))) == g_41.f1.f8);
                    for (g_41.f1.f7 = 0; (g_41.f1.f7 <= 5); g_41.f1.f7 += 1)
                    {
                        struct S1 l_1032 = {2L,-1L,4294967291UL,0x05ABFB6AL,-7L,0x3710L,0xAC494D90L,0x3816L,8L};
                        int i, j;
                        g_7[(g_41.f1.f7 + 1)][g_41.f1.f7] = 0L;
                        g_175 = (safe_div_func_uint32_t_u_u((((g_42 & g_18.f0) <= ((safe_mod_func_uint32_t_u_u(g_18.f4, l_981)) < g_41.f2)) != ((safe_rshift_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(0xAFL, 0)), (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(g_729, ((g_41.f1.f3 ^ (safe_add_func_uint16_t_u_u(g_18.f0, 0xD472L))) > g_7[(g_41.f1.f7 + 1)][g_41.f1.f7]))), l_755.f1)))) & l_1012) <= l_994.f6), 3)) ^ l_1009.f1.f0)), l_1031));
                        g_20 = func_13(func_13(l_1032));
                        if (g_18.f5)
                            break;
                    }
                }
                g_495 = ((g_41.f1.f0 && 0x7BL) & (65535UL > (safe_div_func_uint8_t_u_u(((((safe_div_func_uint16_t_u_u(g_289, g_310)) < ((((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s(func_57(((-1L) <= 0x8EL), l_994.f8), 0xAEF85409L)), l_990)) >= g_7[5][5]) ^ 0x40D2L) && 4294967289UL)) < l_1041) != g_41.f2), 0x20L))));
                return l_797;
            }
            else
            {
                int l_1056 = 0L;
                for (l_755.f1 = 19; (l_755.f1 == (-8)); l_755.f1--)
                {
                    for (g_20.f3 = 0; (g_20.f3 < 16); g_20.f3 = safe_add_func_uint8_t_u_u(g_20.f3, 6))
                    {
                        g_8 = l_994.f8;
                    }
                    for (l_994.f5 = 9; (l_994.f5 < 24); l_994.f5++)
                    {
                        struct S2 l_1060 = {0x9BL,{0x9EL,0x8D27D410L,1UL,4L,0xA39893F9L,0xE0FDL,1L,-4L,-9L},0xFC2ABAB8L};
                        g_18.f1 = (safe_add_func_uint32_t_u_u((g_128 ^ (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(l_994.f7, 12)), l_1056)), (g_20.f2 < l_755.f4)))), (g_20.f1 < (safe_unary_minus_func_uint32_t_u((safe_add_func_int32_t_s_s(l_1056, ((+func_36(l_1060, l_1061[7][0], g_16, g_9)) || 0xA9C7L))))))));
                    }
                }
                return l_1061[7][0].f5;
            }
        }
        for (g_18.f2 = (-22); (g_18.f2 >= 3); g_18.f2 = safe_add_func_int16_t_s_s(g_18.f2, 8))
        {
            int l_1088 = 0x7479BB60L;
            for (l_755.f1 = 0; (l_755.f1 > (-30)); l_755.f1 = safe_sub_func_int32_t_s_s(l_755.f1, 5))
            {
                unsigned l_1068 = 3UL;
                int l_1089 = 1L;
                struct S1 l_1090 = {0x35L,0L,0xD55DFA67L,0x7DF0DEB9L,0x2E0FCE23L,0x006EL,0x2D7C7ED0L,0x48C8L,1L};
                for (g_41.f1.f7 = 0; g_41.f1.f7 < 4; g_41.f1.f7 += 1)
                {
                    l_6[g_41.f1.f7] = 18446744073709551612UL;
                }
                for (g_729 = (-10); (g_729 < 10); g_729 = safe_add_func_uint8_t_u_u(g_729, 5))
                {
                    return l_1068;
                }
                for (g_729 = 0; (g_729 != 35); ++g_729)
                {
                    int l_1078 = 0xE69A134DL;
                    if (g_2)
                    {
                        unsigned l_1077 = 18446744073709551609UL;
                        l_991 = (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((func_57(g_18.f4, (func_10(l_1068) != ((((0xE0BD09D3L > (safe_lshift_func_uint16_t_u_s(func_57(g_20.f0, g_18.f2), 10))) ^ l_755.f2) || (l_1077 ^ g_107[4])) > l_1061[7][0].f6))) | g_41.f1.f2) != 0x179EL), l_1078)), 8L));
                        g_41.f1.f1 = (safe_sub_func_uint8_t_u_u(g_18.f0, (safe_add_func_int8_t_s_s(l_1077, 246UL))));
                        g_20 = l_1083;
                    }
                    else
                    {
                        l_1088 = (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(g_41.f1.f2, 2)) <= g_18.f8), g_20.f3));
                        g_18.f6 = l_1078;
                    }
                    l_1089 = l_1078;
                    l_1090 = g_20;
                }
            }
        }
        for (g_18.f6 = 4; (g_18.f6 >= 0); g_18.f6 -= 1)
        {
            struct S1 l_1145 = {0xBFL,0x54FC1046L,1UL,0x6D0E0ACCL,-7L,0x283FL,0xF7D7564DL,0x0FC4L,-1L};
            const unsigned l_1188 = 0x95E624BBL;
            const struct S1 l_1200 = {-1L,5L,4294967295UL,5L,-5L,0L,-1L,0x3AA8L,0xE3896828L};
            int i;
            if (l_771[(g_18.f6 + 1)])
            {
                unsigned short l_1091 = 65535UL;
                char l_1126 = 0x71L;
                struct S1 l_1179 = {0x64L,1L,0xD03BC0E1L,0x5B3D8BABL,0xBFFEEEE2L,0x7E5BL,2L,0x3DFEL,-1L};
                l_1061[7][0].f6 = ((5L && (l_1091 == g_41.f1.f6)) < (safe_div_func_uint32_t_u_u((g_20.f8 | ((l_771[(g_18.f6 + 1)] != (func_10((l_771[(g_18.f6 + 1)] <= ((safe_rshift_func_uint16_t_u_s(l_981, (safe_rshift_func_uint16_t_u_s(func_10(l_771[(g_18.f6 + 1)]), 14)))) < 0xEBE7D6D1L))) < l_1061[7][0].f6)) == (-1L))), g_41.f1.f7)));
                if (func_10(((g_41.f2 < l_19) >= ((safe_mul_func_uint16_t_u_u(g_20.f7, (safe_div_func_int32_t_s_s((!(l_771[(g_18.f6 + 1)] & ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(1L, (safe_div_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(0x137765A3L, l_1061[7][0].f5)) | (l_1061[7][0].f4 < g_76[6][3])), g_20.f5)))), l_770)), g_807)) || g_20.f8))), g_7[4][3])))) <= g_107[1]))))
                {
                    int l_1146[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1146[i] = 0x0276F047L;
                    g_8 = (1L ^ g_107[4]);
                    l_755.f6 = 1L;
                    if ((l_1091 > func_57(g_20.f2, l_755.f3)))
                    {
                        return g_41.f1.f7;
                    }
                    else
                    {
                        char l_1135 = 6L;
                        char l_1136 = (-6L);
                        g_9 = (safe_mul_func_uint8_t_u_u(g_18.f0, g_107[0]));
                        g_9 = (safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(g_729, (safe_mul_func_int8_t_s_s((g_20.f3 <= (l_1126 <= l_1127)), ((func_10(g_20.f5) ^ ((safe_mul_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(0L, (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(func_10((((~func_10(g_7[1][3])) >= g_18.f7) >= l_1135)))), g_8)))) && 0x95A7L) > 0x440CL), g_20.f2)) | 1UL)) ^ g_736))))) > g_41.f1.f8), 5));
                        g_2 = ((l_1136 == g_20.f8) < (g_41.f2 != (safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s((-5L))) == l_1126), func_36(l_1140, func_73((func_57(((65535UL | (safe_mod_func_int16_t_s_s(g_495, (safe_mul_func_uint8_t_u_u(func_36(g_41, l_1145, l_1140.f1.f1, l_771[(g_18.f6 + 1)]), g_20.f3))))) >= 6UL), l_1061[7][0].f8) | l_1146[0])), g_16, g_41.f2)))));
                        g_175 = (g_128 >= (l_1145.f1 | 0L));
                    }
                    g_7[5][4] = func_57(g_20.f1, l_1147);
                }
                else
                {
                    unsigned char l_1164 = 0xD5L;
                    unsigned short l_1170 = 65530UL;
                    unsigned short l_1189 = 65535UL;
                    for (g_18.f1 = 6; (g_18.f1 >= 0); g_18.f1 -= 1)
                    {
                        int i;
                        return l_771[(g_18.f6 + 1)];
                    }
                    if (func_36(g_41, func_73(l_1145.f6), g_20.f1, l_1148))
                    {
                        const char l_1153[10][8][3] = {{{0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}}, {{0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}}, {{0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}}, {{0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}}, {{0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}}, {{0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}}, {{0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}}, {{0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}}, {{0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}}, {{0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}, {0xE4L, (-4L), (-1L)}}};
                        struct S1 l_1173[6][9] = {{{0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {9L,0xA09B9A2CL,0x3A8C98B0L,0x36200C67L,0x98DD0C75L,0x1C31L,-8L,0x0084L,0x30DB849EL}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {9L,0xA09B9A2CL,0x3A8C98B0L,0x36200C67L,0x98DD0C75L,0x1C31L,-8L,0x0084L,0x30DB849EL}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}}, {{0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {9L,0xA09B9A2CL,0x3A8C98B0L,0x36200C67L,0x98DD0C75L,0x1C31L,-8L,0x0084L,0x30DB849EL}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {9L,0xA09B9A2CL,0x3A8C98B0L,0x36200C67L,0x98DD0C75L,0x1C31L,-8L,0x0084L,0x30DB849EL}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}}, {{0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {9L,0xA09B9A2CL,0x3A8C98B0L,0x36200C67L,0x98DD0C75L,0x1C31L,-8L,0x0084L,0x30DB849EL}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {9L,0xA09B9A2CL,0x3A8C98B0L,0x36200C67L,0x98DD0C75L,0x1C31L,-8L,0x0084L,0x30DB849EL}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}}, {{0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {9L,0xA09B9A2CL,0x3A8C98B0L,0x36200C67L,0x98DD0C75L,0x1C31L,-8L,0x0084L,0x30DB849EL}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {9L,0xA09B9A2CL,0x3A8C98B0L,0x36200C67L,0x98DD0C75L,0x1C31L,-8L,0x0084L,0x30DB849EL}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}}, {{0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {9L,0xA09B9A2CL,0x3A8C98B0L,0x36200C67L,0x98DD0C75L,0x1C31L,-8L,0x0084L,0x30DB849EL}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {9L,0xA09B9A2CL,0x3A8C98B0L,0x36200C67L,0x98DD0C75L,0x1C31L,-8L,0x0084L,0x30DB849EL}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}}, {{0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {9L,0xA09B9A2CL,0x3A8C98B0L,0x36200C67L,0x98DD0C75L,0x1C31L,-8L,0x0084L,0x30DB849EL}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {9L,0xA09B9A2CL,0x3A8C98B0L,0x36200C67L,0x98DD0C75L,0x1C31L,-8L,0x0084L,0x30DB849EL}, {0x54L,0xC17728AFL,0x2928A458L,0x24751758L,0x0CB6DC23L,-8L,0x8D95C079L,-7L,0x424561D8L}, {0x0CL,-5L,3UL,7L,0L,7L,6L,0x07FAL,1L}}};
                        int i, j, k;
                        g_41.f1.f6 = ((safe_sub_func_int16_t_s_s((l_1153[0][0][1] && ((((safe_mod_func_uint16_t_u_u(l_1061[7][0].f1, g_76[6][1])) & g_18.f0) & (((safe_lshift_func_int16_t_s_u((((safe_add_func_uint16_t_u_u(g_18.f4, (safe_mul_func_uint16_t_u_u(func_36(g_41, g_41.f1, l_1061[7][0].f6, (safe_mul_func_uint16_t_u_u(g_41.f1.f5, l_1164))), l_1061[7][0].f5)))) || (-2L)) || l_770), 8)) ^ 0x6976L) < l_1153[0][5][0])) < 7UL)), g_408)) && l_1153[0][0][1]);
                        l_1173[1][7].f6 = ((safe_unary_minus_func_uint16_t_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((g_42 >= 0xC5C7916AL) ^ 0xB8L) ^ (l_1170 != l_1153[1][2][0])), 2)), (safe_add_func_uint32_t_u_u((l_1170 <= (((((func_36(g_41, func_13(func_13(func_13(l_1173[1][7]))), l_1091, g_18.f8) | 0x61AD0138L) != g_41.f2) || l_1173[1][7].f6) & g_18.f7) >= g_807)), 0x4AFE2CE4L)))))) || 0x32098349L);
                        g_18.f1 = 0x4D65CA08L;
                        g_175 = l_1061[7][0].f6;
                    }
                    else
                    {
                        g_20 = func_73((((safe_mul_func_int16_t_s_s(((g_20.f3 > (l_1176 == ((l_1127 && (g_20.f5 || l_1061[7][0].f5)) ^ g_41.f1.f2))) <= 0xE3L), (func_57(l_1140.f1.f2, ((safe_sub_func_int32_t_s_s(((g_41.f1.f8 ^ g_18.f6) > 0x4EF6F766L), g_408)) | g_41.f1.f2)) != 0L))) >= g_41.f1.f4) & l_1091));
                    }
                    g_41.f1 = l_1179;
                    for (l_755.f0 = 0; (l_755.f0 <= 6); l_755.f0 += 1)
                    {
                        g_20.f1 = ((safe_rshift_func_uint8_t_u_u((g_408 || g_18.f0), g_18.f2)) == (safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((l_1188 | ((0x56923AE8L != (l_1179.f3 == (g_41.f1.f5 >= l_1189))) ^ (safe_lshift_func_int16_t_s_s(func_57(g_18.f2, l_1170), g_76[5][2])))) & g_76[5][2]), g_894)), g_175)), l_1061[7][0].f7)));
                        g_175 = (g_408 & ((safe_sub_func_uint8_t_u_u(l_771[1], (((safe_div_func_uint16_t_u_u((g_8 && (safe_add_func_int16_t_s_s((!0xEAD8L), g_41.f1.f7))), ((g_20.f2 && 0xF2A0A7D9L) || (safe_rshift_func_uint16_t_u_s(g_894, 1))))) || 9UL) > g_41.f0))) <= l_1179.f5));
                        g_41.f1 = l_1200;
                        return g_107[4];
                    }
                }
                g_736 = (-2L);
                l_1179 = func_73((((+l_1145.f7) > l_1201[2]) < g_41.f1.f5));
            }
            else
            {
                unsigned l_1202 = 0UL;
                return l_1202;
            }
            for (l_1140.f1.f6 = 6; (l_1140.f1.f6 >= 0); l_1140.f1.f6 -= 1)
            {
                return l_1203;
            }
        }
        return g_18.f8;
    }
    g_41.f1.f6 = (l_755.f8 >= g_41.f1.f6);
    return l_1140.f1.f0;
}







static unsigned short func_10(unsigned p_11)
{
    unsigned short l_12 = 0xD228L;
    l_12 = g_2;
    return g_7[6][0];
}







static struct S1 func_13(struct S1 p_14)
{
    struct S1 l_17[3][1][1] = {{{{7L,0x3CFEBDABL,0xAC39B398L,0xF544BD1AL,0xF32215F8L,-6L,0x3F3734BDL,2L,0xD5376E30L}}}, {{{7L,0x3CFEBDABL,0xAC39B398L,0xF544BD1AL,0xF32215F8L,-6L,0x3F3734BDL,2L,0xD5376E30L}}}, {{{7L,0x3CFEBDABL,0xAC39B398L,0xF544BD1AL,0xF32215F8L,-6L,0x3F3734BDL,2L,0xD5376E30L}}}};
    int i, j, k;
    g_16 = func_10(p_14.f7);
    return l_17[2][0][0];
}







static unsigned char func_24(const unsigned short p_25, unsigned short p_26, short p_27)
{
    const unsigned char l_530 = 0x17L;
    unsigned l_531 = 18446744073709551615UL;
    struct S1 l_538 = {0x76L,0L,4294967294UL,-2L,0x5C807DF5L,0x6882L,0xD96D7E95L,0x73D1L,-5L};
    l_538.f1 = (safe_rshift_func_uint8_t_u_s(l_530, (func_10((((0x66D8L != l_531) | func_28(g_42, (safe_mod_func_int32_t_s_s(l_531, ((safe_mod_func_int16_t_s_s(func_28(p_26, g_41.f1.f4, (safe_rshift_func_int16_t_s_s(0xFCB4L, func_10(l_531))), l_538, g_41.f1), g_2)) | 4UL))), l_538.f4, l_538, l_538)) | 6L)) > l_530)));
    return p_26;
}







static char func_28(const unsigned short p_29, unsigned p_30, char p_31, struct S1 p_32, struct S1 p_33)
{
    const unsigned char l_44[3][6] = {{1UL, 1UL, 0x40L, 0x40L, 1UL, 1UL}, {1UL, 1UL, 0x40L, 0x40L, 1UL, 1UL}, {1UL, 1UL, 0x40L, 0x40L, 1UL, 1UL}};
    struct S1 l_54 = {0xE1L,1L,4294967288UL,5L,-1L,1L,0L,0x01E2L,0xC5FADB94L};
    unsigned short l_444 = 0x9624L;
    struct S2 l_456 = {0x50L,{-3L,0xC8454C82L,0UL,0x381B1951L,-1L,0xA314L,0L,0x3BB5L,0x4E32DE11L},0x31BE535BL};
    struct S1 l_524 = {1L,0xBF8F57F5L,0x29BDE8BDL,0xB33D0D5CL,1L,-3L,0x16BE48E9L,0x1699L,1L};
    int i, j;
    if ((l_44[0][5] == (safe_sub_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((+l_44[0][4]), func_36(func_49(l_54, p_33, (safe_sub_func_int16_t_s_s(((65535UL || 7UL) <= func_57(p_33.f5, ((safe_lshift_func_int16_t_s_u((p_33.f4 < (safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(1L, g_9)) == 252UL), p_33.f4)), p_30))), 4)) & l_44[0][2]))), p_32.f1)), l_44[2][0]), l_54, p_32.f1, g_408))) < p_29), 0L))))
    {
        char l_437 = 0x30L;
        for (p_33.f7 = 3; (p_33.f7 >= 0); p_33.f7 -= 1)
        {
            g_41.f1.f6 = func_10(g_20.f1);
            if (p_32.f2)
                break;
            for (p_33.f8 = 1; (p_33.f8 <= 4); p_33.f8 += 1)
            {
                for (g_18.f4 = 3; (g_18.f4 >= 0); g_18.f4 -= 1)
                {
                    int i, j;
                    return g_76[(p_33.f7 + 4)][p_33.f7];
                }
                g_18 = p_33;
                g_20.f3 = (safe_lshift_func_uint8_t_u_s(0x6AL, 7));
            }
            for (l_54.f2 = 0; (l_54.f2 <= 3); l_54.f2 += 1)
            {
                int i, j;
                p_33.f3 = func_57(g_76[(l_54.f2 + 1)][p_33.f7], (safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(6UL, 3)) == (safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(func_57(g_18.f1, g_18.f4), ((safe_lshift_func_uint8_t_u_u(g_408, 1)) > (g_16 < (safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_33.f2, (safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((p_32.f8 > l_54.f1) > g_20.f6), g_41.f1.f1)), p_33.f8)))), g_76[(l_54.f2 + 1)][p_33.f7])))))), 0xBEL))), 0x05L)), 7)));
            }
        }
        l_54.f6 = ((9UL && l_437) <= g_18.f1);
        p_33.f1 = ((0x8299L == func_57(((((func_10((safe_sub_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u(g_18.f5, l_54.f1)) != (-1L)) >= (safe_sub_func_uint32_t_u_u((l_444 >= func_57(g_18.f3, (((safe_lshift_func_int8_t_s_s(3L, 4)) < ((g_42 || g_18.f0) ^ g_20.f1)) ^ g_8))), p_33.f1))), l_54.f5))) ^ g_310) >= 0xFC98EF52L) || l_54.f1) & g_41.f1.f7), p_33.f5)) > p_32.f8);
    }
    else
    {
        unsigned char l_447[2][4][6] = {{{0x6BL, 249UL, 5UL, 249UL, 0x6BL, 0UL}, {0x6BL, 249UL, 5UL, 249UL, 0x6BL, 0UL}, {0x6BL, 249UL, 5UL, 249UL, 0x6BL, 0UL}, {0x6BL, 249UL, 5UL, 249UL, 0x6BL, 0UL}}, {{0x6BL, 249UL, 5UL, 249UL, 0x6BL, 0UL}, {0x6BL, 249UL, 5UL, 249UL, 0x6BL, 0UL}, {0x6BL, 249UL, 5UL, 249UL, 0x6BL, 0UL}, {0x6BL, 249UL, 5UL, 249UL, 0x6BL, 0UL}}};
        struct S2 l_463 = {-6L,{0x08L,0L,0x3BD125AAL,0x71866206L,7L,3L,0L,9L,0x8DB5B809L},-2L};
        int i, j, k;
        for (g_310 = 0; (g_310 <= 4); g_310 += 1)
        {
            int i;
            p_32 = g_18;
            if (func_10(g_107[g_310]))
            {
                int l_467[9][3][9] = {{{5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}}, {{5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}}, {{5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}}, {{5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}}, {{5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}}, {{5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}}, {{5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}}, {{5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}}, {{5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}, {5L, 0L, 0x0C95C292L, 0x0C95C292L, 0L, 5L, 0L, 0x0C95C292L, 0x0C95C292L}}};
                int i, j, k;
                for (p_32.f6 = 3; (p_32.f6 >= 0); p_32.f6 -= 1)
                {
                    int i, j;
                    g_20.f6 = (g_76[(g_310 + 3)][p_32.f6] != (0L <= (g_107[g_310] > ((l_447[1][3][5] ^ (g_41.f1.f0 ^ (safe_div_func_uint8_t_u_u(0xA6L, (safe_add_func_uint32_t_u_u(0x26DDCC53L, (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(func_10(l_44[0][5]), p_32.f3)), 1L)))))))) || 0xFC9EL))));
                    for (l_54.f7 = 0; (l_54.f7 <= 4); l_54.f7 += 1)
                    {
                        if (p_33.f8)
                            break;
                    }
                }
                g_18 = func_13(p_33);
                g_18 = func_81(((p_33.f5 > 0x526EL) <= (g_107[g_310] <= 8UL)), func_73(((func_36(l_456, p_32, (g_107[g_310] && 3UL), (p_32.f0 > g_128)) | p_32.f1) < g_107[g_310])), g_107[g_310], p_33.f4);
                if (g_20.f2)
                {
                    unsigned char l_466[2][2] = {{0UL, 0x18L}, {0UL, 0x18L}};
                    int i, j;
                    p_33 = g_20;
                    g_18.f3 = ((safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u(g_20.f5, (0xAF01L < func_36(l_463, g_41.f1, (safe_rshift_func_uint16_t_u_u(65535UL, 4)), g_41.f1.f3)))), ((p_32.f6 <= l_466[1][1]) | l_467[5][0][4]))), 7)) || 0xF5L);
                }
                else
                {
                    char l_478 = (-1L);
                    int l_502 = 0x4FDE97FBL;
                    if ((safe_mul_func_uint16_t_u_u((l_467[5][0][4] >= g_20.f1), ((safe_mod_func_uint32_t_u_u(l_463.f1.f7, func_10(g_7[4][0]))) != (safe_mul_func_uint8_t_u_u(l_54.f7, ((safe_add_func_int32_t_s_s(func_10(func_10((g_42 < (-2L)))), 4294967287UL)) <= p_32.f6)))))))
                    {
                        if (p_32.f7)
                            break;
                        g_41.f1.f6 = (l_456.f1.f2 < ((safe_div_func_int32_t_s_s(p_32.f0, l_478)) && 0xF629L));
                        g_41.f1.f6 = (safe_rshift_func_int16_t_s_s(((((!(safe_lshift_func_int16_t_s_u(g_20.f2, 10))) != func_57((((safe_mod_func_int8_t_s_s(l_54.f2, (safe_div_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s(g_495, (g_107[4] <= (safe_add_func_int8_t_s_s(6L, (((!l_467[6][2][5]) > 2UL) == (safe_add_func_uint8_t_u_u(g_18.f2, (safe_lshift_func_int16_t_s_u((l_478 > 65533UL), g_20.f6)))))))))), 0x88L)), p_33.f2)), g_41.f1.f5)) && p_32.f8), p_33.f6)))) <= 0x199021E4L) || g_2), l_502)) & l_467[5][0][4]) == g_495), p_31));
                        if (p_33.f2)
                            break;
                    }
                    else
                    {
                        p_33 = p_32;
                        g_18 = func_13(p_32);
                    }
                }
            }
            else
            {
                p_32.f3 = (((safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s((((l_456.f1.f3 == 0xB203L) && 0x0974L) | p_32.f2), func_57(l_463.f1.f3, l_456.f1.f6))), g_18.f7)) || (func_57(p_33.f3, p_32.f2) > 0x49A9DA03L)) <= g_310);
            }
            for (g_18.f0 = 0; (g_18.f0 <= 3); g_18.f0 += 1)
            {
                struct S1 l_526 = {5L,0xEE11520CL,0xEC373E0DL,0x504BD36AL,0x07AA2659L,0L,5L,0L,1L};
                int i, j;
                if ((((((g_76[(g_310 + 2)][g_18.f0] != g_41.f1.f0) != ((safe_div_func_int32_t_s_s((g_20.f2 >= ((safe_sub_func_int8_t_s_s((((-4L) != p_33.f3) && l_456.f0), (p_32.f0 ^ ((safe_add_func_uint16_t_u_u((~l_463.f1.f1), (l_463.f1.f4 >= g_9))) & 0L)))) >= 0x8D34E887L)), 0x2040F4F1L)) >= g_41.f1.f6)) ^ g_495) > g_107[g_310]) <= (-6L)))
                {
                    const int l_518 = 1L;
                    if (((g_20.f6 < ((safe_unary_minus_func_uint8_t_u(l_463.f1.f1)) & l_518)) != func_57(g_41.f1.f8, (safe_lshift_func_int8_t_s_s((g_107[g_310] && (((g_107[g_310] ^ (safe_mod_func_uint32_t_u_u((g_310 <= 0xD09E9166L), l_463.f1.f8))) ^ g_107[4]) | p_33.f5)), 5)))))
                    {
                        struct S1 l_523[9][1] = {{{0L,-1L,1UL,0L,0xF45BBAE9L,9L,0x799FDC12L,0L,0x1E21ABC9L}}, {{0L,-1L,1UL,0L,0xF45BBAE9L,9L,0x799FDC12L,0L,0x1E21ABC9L}}, {{0L,-1L,1UL,0L,0xF45BBAE9L,9L,0x799FDC12L,0L,0x1E21ABC9L}}, {{0L,-1L,1UL,0L,0xF45BBAE9L,9L,0x799FDC12L,0L,0x1E21ABC9L}}, {{0L,-1L,1UL,0L,0xF45BBAE9L,9L,0x799FDC12L,0L,0x1E21ABC9L}}, {{0L,-1L,1UL,0L,0xF45BBAE9L,9L,0x799FDC12L,0L,0x1E21ABC9L}}, {{0L,-1L,1UL,0L,0xF45BBAE9L,9L,0x799FDC12L,0L,0x1E21ABC9L}}, {{0L,-1L,1UL,0L,0xF45BBAE9L,9L,0x799FDC12L,0L,0x1E21ABC9L}}, {{0L,-1L,1UL,0L,0xF45BBAE9L,9L,0x799FDC12L,0L,0x1E21ABC9L}}};
                        int i, j;
                        p_33.f1 = 0xF809D96DL;
                        l_456.f1.f6 = g_76[(g_310 + 2)][g_18.f0];
                        g_41.f1 = l_523[0][0];
                    }
                    else
                    {
                        char l_525[10] = {(-3L), (-3L), (-10L), (-3L), (-3L), (-10L), (-3L), (-3L), (-10L), (-3L)};
                        int i;
                        l_524 = func_13(func_73(p_32.f0));
                        l_526 = func_81(g_18.f7, g_18, (l_518 != l_463.f0), l_525[4]);
                    }
                    return g_41.f0;
                }
                else
                {
                    l_463.f1.f1 = l_463.f1.f3;
                    if (p_32.f7)
                        continue;
                }
                return l_54.f4;
            }
            for (p_33.f1 = 0; (p_33.f1 <= 3); p_33.f1 += 1)
            {
                int i, j;
                p_32.f1 = g_76[(g_310 + 3)][p_33.f1];
            }
        }
    }
    for (g_20.f3 = 0; g_20.f3 < 5; g_20.f3 += 1)
    {
        g_107[g_20.f3] = 0x50102A83L;
    }
    l_524.f3 = (l_524.f4 && p_32.f5);
    return g_20.f2;
}







static unsigned func_36(struct S2 p_37, struct S1 p_38, unsigned char p_39, short p_40)
{
    unsigned short l_43 = 0xBC62L;
    return l_43;
}







static struct S2 func_49(struct S1 p_50, struct S1 p_51, unsigned short p_52, unsigned short p_53)
{
    struct S2 l_232 = {1L,{0xD9L,1L,1UL,0L,0x75524799L,0x5437L,0x190295BBL,0xE847L,0xF5A79499L},-1L};
    int l_372 = 0xD2985154L;
    for (g_18.f8 = 5; (g_18.f8 < 20); g_18.f8++)
    {
        unsigned short l_79 = 0x3540L;
        int l_243[2][9] = {{0x382C4D35L, 0x66C3AEF1L, 0x16227AC3L, 0x16227AC3L, 0x66C3AEF1L, 0x382C4D35L, 0x66C3AEF1L, 0x16227AC3L, 0x16227AC3L}, {0x382C4D35L, 0x66C3AEF1L, 0x16227AC3L, 0x16227AC3L, 0x66C3AEF1L, 0x382C4D35L, 0x66C3AEF1L, 0x16227AC3L, 0x16227AC3L}};
        struct S1 l_244 = {0xEDL,4L,0xBEE6FAA4L,-1L,-1L,0x0BB3L,0x1A0008B6L,0x3837L,0x134BDB9BL};
        struct S2 l_254 = {0xC1L,{0x6EL,0L,7UL,-3L,-2L,0xF470L,1L,0xC02FL,0xE8996C2EL},1L};
        char l_275 = 0xB1L;
        short l_288 = 0xAF06L;
        unsigned l_329 = 0UL;
        unsigned short l_334[10][6] = {{1UL, 1UL, 0xB8BDL, 0UL, 1UL, 0x40ECL}, {1UL, 1UL, 0xB8BDL, 0UL, 1UL, 0x40ECL}, {1UL, 1UL, 0xB8BDL, 0UL, 1UL, 0x40ECL}, {1UL, 1UL, 0xB8BDL, 0UL, 1UL, 0x40ECL}, {1UL, 1UL, 0xB8BDL, 0UL, 1UL, 0x40ECL}, {1UL, 1UL, 0xB8BDL, 0UL, 1UL, 0x40ECL}, {1UL, 1UL, 0xB8BDL, 0UL, 1UL, 0x40ECL}, {1UL, 1UL, 0xB8BDL, 0UL, 1UL, 0x40ECL}, {1UL, 1UL, 0xB8BDL, 0UL, 1UL, 0x40ECL}, {1UL, 1UL, 0xB8BDL, 0UL, 1UL, 0x40ECL}};
        short l_378[8];
        int i, j;
        for (i = 0; i < 8; i++)
            l_378[i] = 0x10E4L;
        for (p_50.f6 = 0; (p_50.f6 <= (-23)); p_50.f6--)
        {
            unsigned short l_208[8] = {0xFE32L, 65535UL, 0xFE32L, 65535UL, 0xFE32L, 65535UL, 0xFE32L, 65535UL};
            struct S2 l_221 = {1L,{3L,0xDA80F472L,1UL,-1L,0x188BAE6DL,-6L,0x759F0075L,1L,0x90C6BC6AL},-1L};
            unsigned l_233 = 18446744073709551615UL;
            short l_335 = 0x3081L;
            const short l_371 = 0x60DFL;
            int i;
            p_51 = func_73(g_18.f4);
            g_20 = func_73(g_18.f3);
            if (l_79)
            {
                struct S2 l_80 = {0x7BL,{0xFBL,-1L,1UL,0x1C2D92C0L,-1L,1L,0x6546BCCEL,-1L,1L},0x284F4F27L};
                unsigned l_234[2][4] = {{0xF60E3B9EL, 0xF60E3B9EL, 0UL, 0xF60E3B9EL}, {0xF60E3B9EL, 0xF60E3B9EL, 0UL, 0xF60E3B9EL}};
                struct S1 l_245 = {0x18L,0L,0x65EDA587L,0x45E46161L,0L,0L,-3L,0x0A78L,0xB7301D2BL};
                int i, j;
                p_50.f1 = func_36(l_80, func_81(g_41.f1.f4, func_73((safe_lshift_func_uint8_t_u_u(0xEDL, 1))), p_50.f2, g_2), l_208[2], p_51.f0);
                l_80.f1 = func_81(l_208[7], g_41.f1, (5UL == g_42), ((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(l_208[2], 5)), (p_51.f3 && p_50.f1))) != l_80.f1.f0) > (l_79 >= p_50.f3)), g_18.f8)), g_18.f5)) && 0UL));
                if ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(func_36(l_221, func_73(p_50.f2), (safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(func_57(l_221.f1.f5, g_7[5][0]), ((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(func_36(l_232, l_221.f1, l_233, p_50.f0), g_9)), g_41.f1.f0)) ^ l_80.f0))) & p_50.f7) ^ g_41.f1.f6), g_18.f1)), 0xA4ACL)), p_50.f5), 7)), p_50.f3)))
                {
                    g_20.f1 = l_234[1][0];
                    for (g_41.f1.f5 = 3; (g_41.f1.f5 >= 0); g_41.f1.f5 -= 1)
                    {
                        unsigned l_235 = 1UL;
                        struct S2 l_238 = {1L,{-6L,0x5B2B4C9BL,1UL,-9L,0x063CE230L,0x5E8CL,0xE4E6E4FBL,0xFEA1L,0xC2CD02ECL},0x4FEF4640L};
                        l_80.f1.f1 = l_235;
                        p_51 = g_20;
                        l_80.f1.f1 = ((safe_lshift_func_uint8_t_u_s(l_235, 5)) != func_36(l_238, g_18, g_20.f1, g_41.f1.f8));
                        g_20 = g_20;
                    }
                }
                else
                {
                    for (g_18.f4 = 0; (g_18.f4 == (-30)); g_18.f4--)
                    {
                        p_50.f1 = g_7[0][3];
                        p_50.f1 = (g_18.f6 >= func_10(g_41.f2));
                        g_41.f1 = g_20;
                        if (g_76[5][2])
                            continue;
                    }
                    for (g_20.f4 = 0; (g_20.f4 >= (-11)); g_20.f4 = safe_sub_func_uint16_t_u_u(g_20.f4, 7))
                    {
                        l_243[0][2] = g_18.f7;
                        p_50.f3 = p_50.f1;
                    }
                    for (l_80.f1.f7 = 0; (l_80.f1.f7 <= 1); l_80.f1.f7 += 1)
                    {
                        int i, j;
                        g_18.f3 = (g_76[l_80.f1.f7][(l_80.f1.f7 + 1)] == (-1L));
                        g_18.f1 = l_243[l_80.f1.f7][(l_80.f1.f7 + 1)];
                        l_245 = l_244;
                        g_20 = p_51;
                    }
                }
                l_243[0][2] = (safe_mul_func_uint16_t_u_u(func_36(g_41, func_13(l_232.f1), p_52, (((p_51.f2 < (func_36(g_41, p_50, ((safe_add_func_uint32_t_u_u(g_8, 1L)) < p_50.f3), l_232.f1.f6) && p_50.f5)) >= l_243[0][5]) & g_18.f3)), g_41.f1.f1));
            }
            else
            {
                int l_250 = 0xB87F05BAL;
                struct S2 l_255 = {-1L,{-1L,4L,0x33C43EEAL,0L,1L,0L,0L,-9L,7L},0x85D14037L};
                if (l_250)
                {
                    unsigned short l_274 = 65535UL;
                    struct S2 l_280[10] = {{0x9BL,{4L,0L,7UL,0x0D75D45AL,0xC4206CAFL,0L,0x4B1D6F62L,0x5AF4L,0x48F44127L},0x561FC705L}, {0x9BL,{4L,0L,7UL,0x0D75D45AL,0xC4206CAFL,0L,0x4B1D6F62L,0x5AF4L,0x48F44127L},0x561FC705L}, {0xA9L,{-1L,1L,0x6B50900CL,0x53A14165L,1L,-6L,-1L,0x251AL,-1L},1L}, {0x9BL,{4L,0L,7UL,0x0D75D45AL,0xC4206CAFL,0L,0x4B1D6F62L,0x5AF4L,0x48F44127L},0x561FC705L}, {0x9BL,{4L,0L,7UL,0x0D75D45AL,0xC4206CAFL,0L,0x4B1D6F62L,0x5AF4L,0x48F44127L},0x561FC705L}, {0xA9L,{-1L,1L,0x6B50900CL,0x53A14165L,1L,-6L,-1L,0x251AL,-1L},1L}, {0x9BL,{4L,0L,7UL,0x0D75D45AL,0xC4206CAFL,0L,0x4B1D6F62L,0x5AF4L,0x48F44127L},0x561FC705L}, {0x9BL,{4L,0L,7UL,0x0D75D45AL,0xC4206CAFL,0L,0x4B1D6F62L,0x5AF4L,0x48F44127L},0x561FC705L}, {0xA9L,{-1L,1L,0x6B50900CL,0x53A14165L,1L,-6L,-1L,0x251AL,-1L},1L}, {0x9BL,{4L,0L,7UL,0x0D75D45AL,0xC4206CAFL,0L,0x4B1D6F62L,0x5AF4L,0x48F44127L},0x561FC705L}};
                    const short l_285[7][4][3] = {{{(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}}, {{(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}}, {{(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}}, {{(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}}, {{(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}}, {{(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}}, {{(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}, {(-8L), 0x64A2L, 0L}}};
                    int i, j, k;
                    if (func_57(g_107[3], func_10(l_244.f2)))
                    {
                        unsigned char l_253[4][1];
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_253[i][j] = 249UL;
                        }
                        g_175 = (safe_mod_func_uint32_t_u_u(l_250, ((func_10(p_51.f6) >= l_232.f1.f2) | l_253[1][0])));
                        p_50.f1 = l_232.f1.f5;
                        g_41.f1.f6 = ((((func_36(l_254, p_51, g_18.f7, (1L && 1UL)) != (((-1L) > 253UL) && (+p_50.f8))) >= l_253[1][0]) || 0x66A9L) && 0xBFL);
                        return l_255;
                    }
                    else
                    {
                        g_41.f1 = g_41.f1;
                        l_255.f1 = func_81(l_221.f1.f8, l_221.f1, (safe_mul_func_uint16_t_u_u(func_36(g_41, func_73((safe_sub_func_uint8_t_u_u((~g_175), (p_51.f7 & (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(p_51.f6, 11)), 0xE565L)))))), p_50.f7, g_20.f0), 0xE164L)), g_7[3][0]);
                        l_221.f1.f6 = (p_50.f7 ^ ((+(p_51.f6 ^ ((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((g_7[1][5] | (((l_255.f1.f1 > (safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_232.f1.f6, l_274)), p_50.f0))) == func_57(l_255.f1.f8, p_50.f3)) || 0x24L)), 1UL)) ^ p_52), 0x77L)), g_41.f1.f3)) < 0xBBL))) == l_275));
                    }
                    for (g_18.f5 = (-2); (g_18.f5 <= (-26)); g_18.f5 = safe_sub_func_uint8_t_u_u(g_18.f5, 1))
                    {
                        g_20 = func_13(p_50);
                    }
                    if ((65532UL & ((safe_mod_func_int8_t_s_s(((func_36(l_280[7], g_20, ((safe_lshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(0x5199B7FEL, l_285[6][2][1])) || ((safe_mul_func_uint16_t_u_u(p_51.f8, (p_51.f5 >= g_20.f5))) < (!p_51.f0))), 4)) && l_255.f1.f3), l_288) & p_53) != g_289), p_50.f1)) & p_50.f2)))
                    {
                        p_50.f3 = ((((l_255.f1.f3 || 1UL) & (func_36(g_41, p_51, (safe_sub_func_uint32_t_u_u(p_51.f7, (safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u((g_41.f2 > (l_255.f0 >= 0x372AL)), 1)) >= func_10(p_50.f5)), p_50.f8)))), l_244.f2) ^ 255UL)) ^ g_128) != g_41.f1.f6);
                        l_243[0][2] = g_41.f1.f4;
                    }
                    else
                    {
                        p_50.f1 = ((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(0xE2L, 2UL)), (safe_sub_func_int32_t_s_s(func_36(l_280[7], func_81(p_51.f5, func_73(g_20.f0), ((p_50.f0 & p_51.f8) > (safe_mod_func_uint32_t_u_u(0xB7A0C809L, p_50.f5))), g_20.f6), l_208[7], p_50.f3), p_51.f6)))) || p_51.f3), 0UL)) || p_51.f2), 0UL)) != p_53);
                        g_310 = p_51.f7;
                        l_232.f1.f3 = g_175;
                    }
                }
                else
                {
                    short l_336 = (-1L);
                    for (g_41.f1.f3 = 0; (g_41.f1.f3 == (-29)); g_41.f1.f3--)
                    {
                        int l_319 = 0x4F892F03L;
                        short l_324 = 0x8EB7L;
                        l_221.f1.f6 = (safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((l_319 | ((+((!((((safe_lshift_func_uint8_t_u_s((g_41.f1.f4 <= ((+(+(g_289 & g_20.f3))) && (safe_sub_func_int32_t_s_s(l_319, g_18.f6)))), 7)) | p_50.f2) || (0x43L && p_51.f2)) & p_50.f1)) && p_50.f0)) < p_50.f1)) | g_41.f1.f2), l_324)), 0x73L));
                    }
                    if ((~(safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_329, 6)), 1))))
                    {
                        g_18.f3 = func_57(g_128, ((l_221.f1.f8 > ((func_10((((safe_add_func_int32_t_s_s(((0x95L != p_50.f7) != (+(((((safe_rshift_func_uint8_t_u_s(func_36(g_41, func_13(func_13(g_18)), p_50.f6, l_334[2][1]), l_244.f1)) < p_51.f5) > 0x67L) < l_254.f1.f1) > 0xF0L))), 4294967295UL)) || p_51.f5) && g_41.f2)) >= l_232.f1.f2) <= l_335)) != p_51.f7));
                        l_336 = (-1L);
                    }
                    else
                    {
                        g_41.f1.f6 = (safe_sub_func_int8_t_s_s(p_51.f3, l_221.f1.f2));
                    }
                }
                l_243[0][2] = (safe_add_func_uint32_t_u_u(func_10(g_20.f1), g_41.f1.f6));
                p_51.f3 = g_42;
            }
            if (l_221.f1.f8)
            {
                g_20 = g_41.f1;
                g_20 = p_50;
                for (l_254.f1.f8 = (-19); (l_254.f1.f8 <= 6); ++l_254.f1.f8)
                {
                    struct S2 l_345[8][9][1] = {{{{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}}, {{{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}}, {{{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}}, {{{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}}, {{{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}}, {{{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}}, {{{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}}, {{{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}, {{0L,{0x9EL,1L,0xC141DDEFL,0L,1L,0x80F6L,0x40D14365L,0x1BD4L,1L},-7L}}}};
                    int i, j, k;
                    for (p_51.f4 = (-7); (p_51.f4 >= 6); ++p_51.f4)
                    {
                        return l_345[5][5][0];
                    }
                }
            }
            else
            {
                int l_392 = (-1L);
                for (l_254.f1.f1 = 0; (l_254.f1.f1 <= 5); l_254.f1.f1 += 1)
                {
                    struct S1 l_373 = {0xB2L,0x9FF47A50L,0x4066393BL,0x5133E99CL,0x55E90683L,2L,0x16D6E9D4L,0xE806L,0xF4F51CFEL};
                    int i, j;
                    if (l_334[(l_254.f1.f1 + 1)][l_254.f1.f1])
                        break;
                    for (g_41.f1.f5 = 3; (g_41.f1.f5 >= 0); g_41.f1.f5 -= 1)
                    {
                        int i, j;
                        g_18.f3 = ((safe_mul_func_int8_t_s_s(0x53L, (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(((safe_sub_func_int16_t_s_s(l_334[(g_41.f1.f5 + 3)][(g_41.f1.f5 + 1)], ((g_76[l_254.f1.f1][g_41.f1.f5] && ((((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_41.f2, (safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(func_36(l_254, g_18, l_334[(g_41.f1.f5 + 3)][(g_41.f1.f5 + 1)], (((p_50.f8 | ((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(l_371, g_7[4][0])) == l_334[(l_254.f1.f1 + 1)][l_254.f1.f1]), g_20.f8)), l_334[(l_254.f1.f1 + 1)][l_254.f1.f1])) && p_51.f1)) | l_334[(l_254.f1.f1 + 1)][l_254.f1.f1]) <= l_372)), 0x00L)), 6)))), 0x4924L)) <= l_244.f0) == l_334[(l_254.f1.f1 + 1)][l_254.f1.f1]) <= g_41.f1.f1)) == g_76[1][0]))) && g_20.f8))), 0UL)) || p_51.f6), g_20.f2)), 1)))) != g_20.f5);
                        p_51 = p_51;
                        p_51 = func_73(l_334[(l_254.f1.f1 + 1)][l_254.f1.f1]);
                        l_373 = l_232.f1;
                    }
                }
                for (l_232.f1.f3 = (-16); (l_232.f1.f3 <= (-10)); ++l_232.f1.f3)
                {
                    unsigned l_389 = 0x111D7167L;
                    if (((safe_sub_func_int8_t_s_s(0xB2L, l_378[5])) != (safe_add_func_int32_t_s_s(func_10((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_50.f0, ((safe_div_func_int16_t_s_s((((0xA6FC38F3L | ((((safe_mod_func_uint16_t_u_u(l_232.f1.f7, g_128)) || l_389) ^ func_10((safe_div_func_uint32_t_u_u((func_10(l_389) > p_53), 0x6D34E7B4L)))) >= p_52)) >= g_41.f2) <= p_50.f1), g_18.f1)) | g_18.f1))), 0x6D24L))), p_51.f3))))
                    {
                        p_51.f3 = 0x7B0BE39CL;
                    }
                    else
                    {
                        g_20.f3 = func_36(g_41, p_51, g_175, g_18.f4);
                        return g_41;
                    }
                }
                if (((g_41.f2 >= l_392) != (safe_mul_func_int16_t_s_s(l_392, p_51.f0))))
                {
                    unsigned short l_401 = 0x3534L;
                    if ((l_221.f1.f3 == p_50.f5))
                    {
                        g_20 = p_50;
                    }
                    else
                    {
                        struct S1 l_402[7] = {{0xE1L,0x41FD5A42L,0x7E91CF66L,0x670661C4L,2L,0xCEA0L,0x91481AF5L,0xCA1BL,-7L}, {0x30L,-10L,0xB1543895L,-1L,-4L,0L,1L,0L,-5L}, {0xE1L,0x41FD5A42L,0x7E91CF66L,0x670661C4L,2L,0xCEA0L,0x91481AF5L,0xCA1BL,-7L}, {0x30L,-10L,0xB1543895L,-1L,-4L,0L,1L,0L,-5L}, {0xE1L,0x41FD5A42L,0x7E91CF66L,0x670661C4L,2L,0xCEA0L,0x91481AF5L,0xCA1BL,-7L}, {0x30L,-10L,0xB1543895L,-1L,-4L,0L,1L,0L,-5L}, {0xE1L,0x41FD5A42L,0x7E91CF66L,0x670661C4L,2L,0xCEA0L,0x91481AF5L,0xCA1BL,-7L}};
                        int i;
                        l_402[5] = func_73(((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(0xCEA9CE39L, ((0x4AD6L < (safe_mod_func_uint32_t_u_u(l_244.f5, l_401))) && func_57(l_221.f1.f7, (0x930FL < (l_232.f2 ^ p_51.f3)))))), l_392)) || 65527UL));
                    }
                    if ((g_289 & (-10L)))
                    {
                        const char l_405 = (-1L);
                        g_18.f6 = ((((g_20.f6 != 0x008DL) == l_275) >= p_50.f3) <= 0x27L);
                        l_221.f1.f1 = (p_50.f8 <= (func_36(l_221, p_50, l_378[5], (safe_mul_func_int8_t_s_s(p_50.f8, (g_20.f3 != (-1L))))) <= (l_405 | 1UL)));
                    }
                    else
                    {
                        p_51.f3 = (g_41.f1.f8 > (safe_rshift_func_int8_t_s_u(g_310, 7)));
                        if (l_233)
                            continue;
                        g_18.f6 = p_53;
                        g_41.f1.f6 = g_408;
                    }
                }
                else
                {
                    return l_232;
                }
            }
        }
        g_175 = (safe_add_func_uint16_t_u_u(p_50.f3, (((((l_254.f1.f2 & g_41.f1.f4) >= (func_57((l_232.f1.f5 < 65535UL), l_254.f1.f3) & g_107[4])) > (safe_sub_func_uint16_t_u_u(((((!((p_50.f1 | g_9) <= g_41.f0)) & g_20.f7) >= 0x9ACDEF97L) != 0x43D5FC76L), g_9))) | p_50.f2) ^ p_51.f3)));
    }
    return l_232;
}







static unsigned char func_57(short p_58, char p_59)
{
    struct S1 l_68 = {1L,0xFB5E83B3L,0x4D8F4AAFL,0xA0E2E69AL,0x289B7103L,-2L,-3L,1L,0xDD28A493L};
    l_68 = l_68;
    return p_59;
}







static struct S1 func_73(unsigned short p_74)
{
    unsigned short l_75 = 65534UL;
lbl_78:
    l_75 = g_41.f1.f1;
    for (g_20.f4 = 0; (g_20.f4 <= 3); g_20.f4 += 1)
    {
        int l_77[5] = {0xD141200AL, (-1L), 0xD141200AL, (-1L), 0xD141200AL};
        int i;
        if (g_41.f1.f5)
            break;
        for (g_18.f5 = 0; (g_18.f5 <= 3); g_18.f5 += 1)
        {
            l_77[1] = 1L;
        }
    }
    if (g_20.f4)
        goto lbl_78;
    return g_18;
}







static struct S1 func_81(unsigned p_82, struct S1 p_83, unsigned p_84, unsigned short p_85)
{
    unsigned l_101[7];
    struct S1 l_108 = {-1L,1L,4294967295UL,1L,0x27857591L,0xBC1FL,0x7979257AL,1L,-4L};
    unsigned char l_116[4] = {253UL, 0xD6L, 253UL, 0xD6L};
    int l_153 = 0x535721BEL;
    int l_178[5] = {(-10L), 0x3550A750L, (-10L), 0x3550A750L, (-10L)};
    int l_206 = 0x48D6DF37L;
    int i;
    for (i = 0; i < 7; i++)
        l_101[i] = 4294967295UL;
lbl_137:
    g_20 = g_20;
    for (p_84 = 0; (p_84 <= 3); p_84 += 1)
    {
        const char l_94 = (-1L);
        struct S2 l_104 = {0xCCL,{0x66L,0x2D585D5FL,1UL,0xD9609697L,0x5A790BE2L,0xE8C5L,0x517A9B7EL,0x1FF4L,-9L},0xCC6211D8L};
        unsigned char l_164[7] = {6UL, 249UL, 6UL, 249UL, 6UL, 249UL, 6UL};
        int i;
        if (g_41.f1.f2)
        {
            int l_97 = 0x2EEB9F0DL;
            unsigned short l_100 = 65532UL;
            g_41.f1.f6 = ((-3L) && (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(l_94, (!l_94))), (((safe_mod_func_uint8_t_u_u((l_97 | ((safe_div_func_int8_t_s_s(l_100, p_83.f2)) < l_101[0])), (safe_rshift_func_uint16_t_u_s(l_97, 0)))) && func_36(l_104, g_18, p_83.f4, l_101[0])) <= g_41.f1.f8))), 4294967292UL)));
        }
        else
        {
            g_41.f1 = func_13(g_41.f1);
            if (p_83.f3)
                break;
        }
        if (((safe_add_func_int16_t_s_s(g_18.f0, l_101[0])) <= l_104.f0))
        {
            int l_120 = 0x11E251C8L;
            for (g_18.f2 = 0; (g_18.f2 <= 6); g_18.f2 += 1)
            {
                int l_115 = 7L;
                for (g_41.f1.f5 = 4; (g_41.f1.f5 >= 0); g_41.f1.f5 -= 1)
                {
                    g_107[4] = 0x2CCF1A2FL;
                }
                for (g_20.f4 = 3; (g_20.f4 >= 0); g_20.f4 -= 1)
                {
                    unsigned l_123 = 4294967295UL;
                    for (g_41.f0 = 3; (g_41.f0 >= 0); g_41.f0 -= 1)
                    {
                        return l_108;
                    }
                    if (l_104.f2)
                    {
                        const char l_119 = 1L;
                        p_83 = l_104.f1;
                        l_104.f1.f3 = (((g_41.f1.f5 | (safe_sub_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((l_115 ^ 0x25L) == l_116[3]), g_20.f6)), (4UL > (!(safe_rshift_func_uint8_t_u_u(255UL, g_18.f2)))))) >= (9UL != g_20.f3)) > l_119), p_83.f5))) ^ p_83.f4) > l_120);
                        l_120 = (safe_mul_func_int8_t_s_s(func_10(l_123), (safe_mul_func_int8_t_s_s((p_83.f7 | 0x9E7E5C91L), (l_116[1] != p_83.f0)))));
                        return g_18;
                    }
                    else
                    {
                        g_20.f6 = ((l_115 != ((func_10((safe_add_func_int16_t_s_s((g_128 < (l_120 >= 0L)), (safe_add_func_int8_t_s_s(g_20.f5, p_82))))) != (safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((l_120 <= ((p_83.f0 < p_82) >= g_41.f1.f4)), l_104.f1.f8)), g_107[4])), 6))) | g_41.f1.f2)) != p_83.f8);
                        g_20.f1 = (p_83.f1 && 0xB9L);
                        if (g_20.f0)
                            goto lbl_137;
                    }
                }
            }
            for (l_108.f7 = 3; (l_108.f7 >= 0); l_108.f7 -= 1)
            {
                unsigned l_138[6] = {0x103EE402L, 0UL, 0x103EE402L, 0UL, 0x103EE402L, 0UL};
                int i;
                for (l_108.f0 = 0; (l_108.f0 <= 3); l_108.f0 += 1)
                {
                    for (l_104.f1.f2 = 0; (l_104.f1.f2 <= 3); l_104.f1.f2 += 1)
                    {
                        p_83 = func_73(g_41.f1.f1);
                    }
                }
                if (l_138[1])
                    continue;
            }
            for (l_104.f1.f7 = 0; (l_104.f1.f7 <= 4); l_104.f1.f7 += 1)
            {
                int i;
                g_41.f1.f3 = (g_107[l_104.f1.f7] != ((l_116[p_84] != (safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u(l_116[p_84], ((safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(l_116[p_84], g_18.f4)), (((safe_div_func_int32_t_s_s(p_83.f6, g_18.f8)) > ((safe_mul_func_uint16_t_u_u(p_83.f8, (safe_mul_func_uint16_t_u_u(l_153, p_83.f5)))) != g_20.f2)) & g_2))) & g_16))), 0x37C6L))) && g_107[l_104.f1.f7]));
            }
        }
        else
        {
            char l_177 = 0xAEL;
            for (l_104.f1.f0 = 0; (l_104.f1.f0 <= 3); l_104.f1.f0 += 1)
            {
                struct S2 l_156 = {0xE3L,{0x7DL,4L,0xDCF2520FL,-9L,-7L,0L,0L,0x2015L,0x945AA5DFL},0x7E7BF935L};
                p_83.f6 = (safe_lshift_func_int8_t_s_u((((((1L && func_36(l_156, p_83, ((safe_unary_minus_func_int32_t_s(p_83.f8)) <= ((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(func_57(g_76[5][1], ((!(l_164[6] | (safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((!(safe_add_func_int8_t_s_s(func_57(g_175, (safe_unary_minus_func_uint16_t_u(l_177))), g_18.f0))), 0xCDA1L)), p_83.f4)), g_20.f4)), p_83.f1)))) && 1UL)), l_177)) >= g_41.f1.f6), l_156.f2)), p_83.f8)) | l_178[3])), p_83.f2)) != 0x085EF97BL) | p_83.f2) < p_83.f1) > 0x906056CCL), 4));
                g_41.f1.f1 = (g_41.f1.f6 && (g_20.f2 | l_104.f1.f7));
            }
        }
        for (l_108.f0 = 0; (l_108.f0 <= 3); l_108.f0 += 1)
        {
            unsigned char l_181[2];
            unsigned char l_188[10][8] = {{0UL, 3UL, 0xB6L, 0x58L, 8UL, 0x52L, 0x48L, 0xDDL}, {0UL, 3UL, 0xB6L, 0x58L, 8UL, 0x52L, 0x48L, 0xDDL}, {0UL, 3UL, 0xB6L, 0x58L, 8UL, 0x52L, 0x48L, 0xDDL}, {0UL, 3UL, 0xB6L, 0x58L, 8UL, 0x52L, 0x48L, 0xDDL}, {0UL, 3UL, 0xB6L, 0x58L, 8UL, 0x52L, 0x48L, 0xDDL}, {0UL, 3UL, 0xB6L, 0x58L, 8UL, 0x52L, 0x48L, 0xDDL}, {0UL, 3UL, 0xB6L, 0x58L, 8UL, 0x52L, 0x48L, 0xDDL}, {0UL, 3UL, 0xB6L, 0x58L, 8UL, 0x52L, 0x48L, 0xDDL}, {0UL, 3UL, 0xB6L, 0x58L, 8UL, 0x52L, 0x48L, 0xDDL}, {0UL, 3UL, 0xB6L, 0x58L, 8UL, 0x52L, 0x48L, 0xDDL}};
            int l_202[8];
            int i, j;
            for (i = 0; i < 2; i++)
                l_181[i] = 0x39L;
            for (i = 0; i < 8; i++)
                l_202[i] = 0xF253EEF9L;
            l_104.f1.f1 = (safe_div_func_uint8_t_u_u(((l_181[0] == (safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((((p_83.f8 > p_83.f6) >= (safe_add_func_uint8_t_u_u(p_83.f6, (p_83.f4 >= g_41.f1.f2)))) & (((g_41.f1.f4 & 255UL) | p_83.f4) >= g_18.f4)), 0x92FDL)), 4))) == p_82), l_188[5][3]));
            for (l_104.f1.f8 = 3; (l_104.f1.f8 >= 0); l_104.f1.f8 -= 1)
            {
                l_202[1] = ((safe_mul_func_int8_t_s_s((-7L), (func_10(p_83.f1) == ((0xBA23L > (safe_div_func_int16_t_s_s((255UL <= (0xAE8343DDL >= (((-4L) && (safe_sub_func_uint16_t_u_u(g_20.f0, (safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((safe_add_func_uint32_t_u_u(((l_188[5][3] == 0L) == 0x8E7DL), 0xFE579FFBL)))), g_7[3][1]))))) != 0x54F258C9L))), (-1L)))) < l_104.f0)))) < g_107[4]);
                for (l_104.f1.f3 = 3; (l_104.f1.f3 >= 0); l_104.f1.f3 -= 1)
                {
                    struct S1 l_203 = {1L,0L,4294967295UL,0xC1C1F29EL,0x3EF5591AL,1L,0x3D103FD7L,-1L,0xF44FDC1EL};
                    return l_203;
                }
            }
            g_18.f6 = ((((1UL >= (safe_lshift_func_uint16_t_u_u(l_104.f1.f4, 7))) & l_164[6]) == 255UL) | 5UL);
            for (l_108.f2 = 0; (l_108.f2 <= 3); l_108.f2 += 1)
            {
                l_206 = func_10(g_20.f0);
            }
        }
        g_175 = (safe_unary_minus_func_int8_t_s(p_83.f3));
        for (p_83.f0 = 0; (p_83.f0 <= 3); p_83.f0 += 1)
        {
            if (g_41.f1.f1)
                break;
            return p_83;
        }
    }
    g_20 = p_83;
    return g_41.f1;
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_18.f2, "g_18.f2", print_hash_value);
    transparent_crc(g_18.f3, "g_18.f3", print_hash_value);
    transparent_crc(g_18.f4, "g_18.f4", print_hash_value);
    transparent_crc(g_18.f5, "g_18.f5", print_hash_value);
    transparent_crc(g_18.f6, "g_18.f6", print_hash_value);
    transparent_crc(g_18.f7, "g_18.f7", print_hash_value);
    transparent_crc(g_18.f8, "g_18.f8", print_hash_value);
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_20.f1, "g_20.f1", print_hash_value);
    transparent_crc(g_20.f2, "g_20.f2", print_hash_value);
    transparent_crc(g_20.f3, "g_20.f3", print_hash_value);
    transparent_crc(g_20.f4, "g_20.f4", print_hash_value);
    transparent_crc(g_20.f5, "g_20.f5", print_hash_value);
    transparent_crc(g_20.f6, "g_20.f6", print_hash_value);
    transparent_crc(g_20.f7, "g_20.f7", print_hash_value);
    transparent_crc(g_20.f8, "g_20.f8", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f1.f0, "g_41.f1.f0", print_hash_value);
    transparent_crc(g_41.f1.f1, "g_41.f1.f1", print_hash_value);
    transparent_crc(g_41.f1.f2, "g_41.f1.f2", print_hash_value);
    transparent_crc(g_41.f1.f3, "g_41.f1.f3", print_hash_value);
    transparent_crc(g_41.f1.f4, "g_41.f1.f4", print_hash_value);
    transparent_crc(g_41.f1.f5, "g_41.f1.f5", print_hash_value);
    transparent_crc(g_41.f1.f6, "g_41.f1.f6", print_hash_value);
    transparent_crc(g_41.f1.f7, "g_41.f1.f7", print_hash_value);
    transparent_crc(g_41.f1.f8, "g_41.f1.f8", print_hash_value);
    transparent_crc(g_41.f2, "g_41.f2", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_76[i][j], "g_76[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_107[i], "g_107[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_729, "g_729", print_hash_value);
    transparent_crc(g_736, "g_736", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_807, "g_807", print_hash_value);
    transparent_crc(g_894, "g_894", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
