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
   unsigned f0 : 3;
   unsigned f1 : 12;
   volatile signed f2 : 30;
   unsigned f3 : 18;
   volatile unsigned f4 : 25;
   volatile unsigned f5 : 12;
   signed f6 : 26;
   unsigned f7 : 7;
};

struct S1 {
   volatile unsigned f0;
   unsigned f1;
   volatile int f2;
   int f3;
};


static volatile int g_3 = 0xC40ED3C1L;
static int g_9 = 0xCFBCE008L;
static int g_12[4] = {6L, 6L, 6L, 6L};
static unsigned g_14 = 0xB13E4380L;
static int g_81[7][8][4] = {{{0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}}, {{0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}}, {{0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}}, {{0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}}, {{0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}}, {{0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}}, {{0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}, {0x580E9A89L, 0x2948FFD3L, 0xBCD1F540L, 0x2C662BADL}}};
static int *g_85 = &g_12[0];
static int **g_84 = &g_85;
static struct S0 g_121 = {1,6,-4151,201,1762,53,-562,6};
static struct S0 *g_120 = &g_121;
static struct S0 g_123[7] = {{1,39,-29991,247,5227,51,-6414,9}, {0,34,-22802,123,4875,18,4830,5}, {1,39,-29991,247,5227,51,-6414,9}, {0,34,-22802,123,4875,18,4830,5}, {1,39,-29991,247,5227,51,-6414,9}, {0,34,-22802,123,4875,18,4830,5}, {1,39,-29991,247,5227,51,-6414,9}};
static char g_154 = 0L;
static int g_164 = 0L;
static struct S0 g_166[8][4] = {{{0,13,-2635,282,988,8,-1219,9}, {0,32,-10666,436,420,39,805,2}, {1,21,-17780,180,1763,27,-499,9}, {0,32,-10666,436,420,39,805,2}}, {{0,13,-2635,282,988,8,-1219,9}, {0,32,-10666,436,420,39,805,2}, {1,21,-17780,180,1763,27,-499,9}, {0,32,-10666,436,420,39,805,2}}, {{0,13,-2635,282,988,8,-1219,9}, {0,32,-10666,436,420,39,805,2}, {1,21,-17780,180,1763,27,-499,9}, {0,32,-10666,436,420,39,805,2}}, {{0,13,-2635,282,988,8,-1219,9}, {0,32,-10666,436,420,39,805,2}, {1,21,-17780,180,1763,27,-499,9}, {0,32,-10666,436,420,39,805,2}}, {{0,13,-2635,282,988,8,-1219,9}, {0,32,-10666,436,420,39,805,2}, {1,21,-17780,180,1763,27,-499,9}, {0,32,-10666,436,420,39,805,2}}, {{0,13,-2635,282,988,8,-1219,9}, {0,32,-10666,436,420,39,805,2}, {1,21,-17780,180,1763,27,-499,9}, {0,32,-10666,436,420,39,805,2}}, {{0,13,-2635,282,988,8,-1219,9}, {0,32,-10666,436,420,39,805,2}, {1,21,-17780,180,1763,27,-499,9}, {0,32,-10666,436,420,39,805,2}}, {{0,13,-2635,282,988,8,-1219,9}, {0,32,-10666,436,420,39,805,2}, {1,21,-17780,180,1763,27,-499,9}, {0,32,-10666,436,420,39,805,2}}};
static struct S0 g_180 = {1,60,-32058,81,125,34,-1703,9};
static unsigned short g_231 = 65528UL;
static struct S1 g_257 = {0x184ADC3DL,0x89C71296L,1L,1L};
static struct S1 *g_256 = &g_257;
static struct S1 g_288 = {0x3A1F39B5L,18446744073709551609UL,-1L,0xB0545102L};
static struct S0 g_331 = {0,40,-4170,415,2975,30,-5767,4};
static struct S1 g_337 = {0UL,0x4BDF4553L,0x4A9CC8A5L,6L};
static unsigned char g_439 = 255UL;
static struct S1 g_492 = {0x1CB9C3F1L,18446744073709551615UL,0L,0xD4367444L};
static struct S0 g_523 = {1,53,-24554,176,5479,57,-3226,2};
static int g_584 = 8L;
static short g_624 = 0x70D0L;
static unsigned char g_625[3][3][5] = {{{1UL, 0x86L, 0xE1L, 0x55L, 255UL}, {1UL, 0x86L, 0xE1L, 0x55L, 255UL}, {1UL, 0x86L, 0xE1L, 0x55L, 255UL}}, {{1UL, 0x86L, 0xE1L, 0x55L, 255UL}, {1UL, 0x86L, 0xE1L, 0x55L, 255UL}, {1UL, 0x86L, 0xE1L, 0x55L, 255UL}}, {{1UL, 0x86L, 0xE1L, 0x55L, 255UL}, {1UL, 0x86L, 0xE1L, 0x55L, 255UL}, {1UL, 0x86L, 0xE1L, 0x55L, 255UL}}};
static struct S0 g_647[9][4] = {{{1,21,30053,132,2329,58,638,4}, {1,37,4421,460,2041,22,-3348,9}, {0,60,-550,421,1881,23,3298,0}, {1,37,4421,460,2041,22,-3348,9}}, {{1,21,30053,132,2329,58,638,4}, {1,37,4421,460,2041,22,-3348,9}, {0,60,-550,421,1881,23,3298,0}, {1,37,4421,460,2041,22,-3348,9}}, {{1,21,30053,132,2329,58,638,4}, {1,37,4421,460,2041,22,-3348,9}, {0,60,-550,421,1881,23,3298,0}, {1,37,4421,460,2041,22,-3348,9}}, {{1,21,30053,132,2329,58,638,4}, {1,37,4421,460,2041,22,-3348,9}, {0,60,-550,421,1881,23,3298,0}, {1,37,4421,460,2041,22,-3348,9}}, {{1,21,30053,132,2329,58,638,4}, {1,37,4421,460,2041,22,-3348,9}, {0,60,-550,421,1881,23,3298,0}, {1,37,4421,460,2041,22,-3348,9}}, {{1,21,30053,132,2329,58,638,4}, {1,37,4421,460,2041,22,-3348,9}, {0,60,-550,421,1881,23,3298,0}, {1,37,4421,460,2041,22,-3348,9}}, {{1,21,30053,132,2329,58,638,4}, {1,37,4421,460,2041,22,-3348,9}, {0,60,-550,421,1881,23,3298,0}, {1,37,4421,460,2041,22,-3348,9}}, {{1,21,30053,132,2329,58,638,4}, {1,37,4421,460,2041,22,-3348,9}, {0,60,-550,421,1881,23,3298,0}, {1,37,4421,460,2041,22,-3348,9}}, {{1,21,30053,132,2329,58,638,4}, {1,37,4421,460,2041,22,-3348,9}, {0,60,-550,421,1881,23,3298,0}, {1,37,4421,460,2041,22,-3348,9}}};
static struct S0 g_676[6][10][4] = {{{{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}}, {{{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}}, {{{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}}, {{{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}}, {{{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}}, {{{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}, {{0,27,-1751,282,1748,4,7459,5}, {1,61,-20862,506,249,14,-7789,4}, {0,8,-24988,445,5552,30,-1958,10}, {1,49,-24441,476,1879,36,-3434,9}}}};
static unsigned short g_726 = 4UL;
static struct S0 **g_797 = (void*)0;
static struct S0 ***g_796 = &g_797;
static struct S1 g_840 = {0xB60C0DF4L,0x27B6B5A9L,0x3C1B2167L,0L};
static char g_848 = 0xB0L;
static struct S1 g_906 = {0xD87C35BFL,0xA4FF4C34L,1L,-1L};
static struct S1 g_916 = {0x3F6B2518L,0x3C07C5E8L,0x64F0FF58L,-7L};
static unsigned short g_930 = 0xAB80L;
static volatile struct S0 g_967 = {0,18,-1977,51,692,28,-3742,7};
static struct S1 g_980 = {0x52D21D3CL,0x8CB46856L,0xD22E03FFL,0xB188EA93L};
static volatile short g_998 = 4L;
static int g_1004 = (-3L);
static struct S0 g_1006 = {1,36,17301,13,1233,48,7907,3};
static int g_1007 = (-7L);
static volatile short g_1027 = 0xA299L;
static struct S0 g_1044 = {0,46,-6089,443,3508,61,-6088,3};
static volatile struct S0 g_1063 = {0,10,17523,297,1872,6,7363,10};
static volatile struct S0 g_1064 = {0,52,2317,88,2132,47,6868,4};



static int func_1(void);
static unsigned short func_6(char p_7, int p_8);
static unsigned char func_23(unsigned p_24, unsigned p_25, int * p_26, int * p_27);
static unsigned func_32(char p_33, unsigned short p_34, int * p_35);
static int func_36(int * p_37);
static int * func_38(int p_39);
static int func_40(int p_41, char p_42, unsigned short p_43, char p_44);
static char func_47(int * p_48);
static int * func_49(unsigned short p_50, int p_51, unsigned short p_52, char p_53);
static int func_55(unsigned p_56, unsigned p_57, int p_58, short p_59);
static int func_1(void)
{
    unsigned char l_2 = 0xCAL;
    struct S1 *l_905 = &g_906;
    unsigned short l_909 = 1UL;
    short l_910 = 0xD8CBL;
    char l_935 = 0x22L;
    int l_941 = 0xCAA31D1FL;
    int l_945[5] = {1L, 0L, 1L, 0L, 1L};
    short l_959 = 0x4FD6L;
    unsigned l_960 = 0xB2A272E5L;
    struct S0 ***l_965 = &g_797;
    int *l_977 = (void*)0;
    int *l_987 = (void*)0;
    int *l_988 = &g_12[3];
    unsigned char l_999 = 0xC2L;
    unsigned l_1037[1][5][5] = {{{18446744073709551607UL, 18446744073709551607UL, 0x21115604L, 18446744073709551615UL, 18446744073709551613UL}, {18446744073709551607UL, 18446744073709551607UL, 0x21115604L, 18446744073709551615UL, 18446744073709551613UL}, {18446744073709551607UL, 18446744073709551607UL, 0x21115604L, 18446744073709551615UL, 18446744073709551613UL}, {18446744073709551607UL, 18446744073709551607UL, 0x21115604L, 18446744073709551615UL, 18446744073709551613UL}, {18446744073709551607UL, 18446744073709551607UL, 0x21115604L, 18446744073709551615UL, 18446744073709551613UL}}};
    unsigned l_1038 = 18446744073709551611UL;
    int *l_1045 = &g_81[0][7][1];
    int i, j, k;
    if ((((l_2 != ((g_3 == ((safe_lshift_func_int8_t_s_u((func_6(g_9, l_2) | 4UL), (safe_lshift_func_int8_t_s_u((l_905 == (void*)0), 7)))) <= (((safe_sub_func_int32_t_s_s(0xFDDE9DDDL, l_909)) > g_647[4][0].f0) ^ g_647[4][0].f1))) > 0x5D7EF7B8L)) | l_2) || l_910))
    {
        int *l_915 = (void*)0;
        unsigned l_919[4];
        int l_936 = 9L;
        int l_937 = 0x81126431L;
        int *l_942 = &g_164;
        int *l_943 = &l_937;
        int *l_944 = &g_81[1][2][2];
        int *l_946 = (void*)0;
        int *l_947 = &l_945[3];
        int *l_948 = (void*)0;
        int *l_949 = &g_12[1];
        int *l_950 = &g_81[6][0][2];
        int *l_951 = &g_12[3];
        int *l_952[5][9] = {{&l_937, &l_936, &g_81[6][5][1], &g_81[6][5][1], (void*)0, &g_81[6][5][1], &g_81[6][5][1], &l_936, &l_937}, {&l_937, &l_936, &g_81[6][5][1], &g_81[6][5][1], (void*)0, &g_81[6][5][1], &g_81[6][5][1], &l_936, &l_937}, {&l_937, &l_936, &g_81[6][5][1], &g_81[6][5][1], (void*)0, &g_81[6][5][1], &g_81[6][5][1], &l_936, &l_937}, {&l_937, &l_936, &g_81[6][5][1], &g_81[6][5][1], (void*)0, &g_81[6][5][1], &g_81[6][5][1], &l_936, &l_937}, {&l_937, &l_936, &g_81[6][5][1], &g_81[6][5][1], (void*)0, &g_81[6][5][1], &g_81[6][5][1], &l_936, &l_937}};
        unsigned l_953 = 5UL;
        unsigned char l_958 = 0x9EL;
        int i, j;
        for (i = 0; i < 4; i++)
            l_919[i] = 0x29287CFBL;
        if ((safe_add_func_uint16_t_u_u((0x112611EFL != (0xFD2EL > (safe_sub_func_int16_t_s_s((l_909 | l_909), l_910)))), l_2)))
        {
            unsigned short l_920 = 65528UL;
            int *l_921[2][3][5] = {{{&g_12[3], &g_81[6][5][1], &g_12[0], &g_12[0], &g_81[2][1][3]}, {&g_12[3], &g_81[6][5][1], &g_12[0], &g_12[0], &g_81[2][1][3]}, {&g_12[3], &g_81[6][5][1], &g_12[0], &g_12[0], &g_81[2][1][3]}}, {{&g_12[3], &g_81[6][5][1], &g_12[0], &g_12[0], &g_81[2][1][3]}, {&g_12[3], &g_81[6][5][1], &g_12[0], &g_12[0], &g_81[2][1][3]}, {&g_12[3], &g_81[6][5][1], &g_12[0], &g_12[0], &g_81[2][1][3]}}};
            int i, j, k;
            g_916 = g_337;
            g_840.f2 = ((safe_mod_func_uint8_t_u_u(((!l_919[3]) || l_920), g_906.f0)) | l_920);
            l_937 ^= ((((safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_166[7][3].f1, g_166[7][3].f2)), (safe_add_func_uint16_t_u_u((+((g_584 && (((0xA8E3L && (safe_add_func_int32_t_s_s(0L, (g_930 > (safe_lshift_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(l_935, g_930)) || l_910) == l_919[0]), 1)))))) > 251UL) && g_331.f1)) != 0x52L)), l_2)))) != g_121.f0) ^ l_936) || l_935);
            (*l_905) = (*l_905);
        }
        else
        {
            short l_938 = 3L;
            (*g_796) = (*g_796);
            l_936 = (((*g_796) != (void*)0) != ((g_257.f0 && l_938) & (safe_lshift_func_int16_t_s_u((l_941 > 0x57351215L), 6))));
        }
        ++l_953;
        if ((l_959 != g_180.f6))
        {
            int *l_961 = &l_937;
            (*l_949) |= l_909;
            (*g_84) = l_961;
            for (g_257.f1 = 0; (g_257.f1 < 38); g_257.f1++)
            {
                unsigned l_964 = 3UL;
                (*g_84) = (*g_84);
                (*g_85) |= (g_647[4][0].f5 == (l_964 != l_964));
                (*g_84) = func_49(g_257.f1, l_945[3], g_81[6][5][1], g_676[5][0][2].f2);
            }
        }
        else
        {
            struct S0 ***l_966 = &g_797;
            (*l_950) &= ((l_965 == l_966) != l_945[3]);
        }
        (*g_120) = g_967;
    }
    else
    {
        unsigned l_970 = 18446744073709551613UL;
        int *l_976 = (void*)0;
        char l_986 = 0x18L;
        (*g_84) = &g_81[0][7][0];
        l_977 = func_38((0x022AF2E6L >= (safe_lshift_func_int8_t_s_u(0x5DL, g_121.f2))));
        for (g_930 = 0; (g_930 > 3); ++g_930)
        {
            unsigned l_981[6][5] = {{0x57A7584BL, 0x1C0714C2L, 0x57A7584BL, 18446744073709551615UL, 0x5AA64E28L}, {0x57A7584BL, 0x1C0714C2L, 0x57A7584BL, 18446744073709551615UL, 0x5AA64E28L}, {0x57A7584BL, 0x1C0714C2L, 0x57A7584BL, 18446744073709551615UL, 0x5AA64E28L}, {0x57A7584BL, 0x1C0714C2L, 0x57A7584BL, 18446744073709551615UL, 0x5AA64E28L}, {0x57A7584BL, 0x1C0714C2L, 0x57A7584BL, 18446744073709551615UL, 0x5AA64E28L}, {0x57A7584BL, 0x1C0714C2L, 0x57A7584BL, 18446744073709551615UL, 0x5AA64E28L}};
            int i, j;
            g_980 = g_840;
            (*g_120) = (*g_120);
            if (l_981[5][0])
                break;
            if (func_32(g_967.f7, l_981[5][0], func_49(g_14, g_164, (~g_647[4][0].f0), ((2UL | ((g_123[3].f6 | (safe_add_func_int16_t_s_s((-2L), 0x81BCL))) & g_121.f7)) == 0x4622L))))
            {
                unsigned l_984 = 4294967295UL;
                int *l_985 = &l_945[4];
                (*l_985) = l_984;
                (*l_965) = (*g_796);
            }
            else
            {
                (*g_84) = l_976;
                l_986 |= g_257.f0;
            }
        }
    }
    (*l_988) ^= 0x45A3B6E3L;
    if (((safe_rshift_func_int16_t_s_u(g_166[7][3].f4, ((*l_988) | (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((*l_988) | (((*l_988) < (*l_988)) & ((void*)0 != &l_945[1]))), g_331.f1)), g_916.f3))))) < (*l_988)))
    {
        int *l_995 = (void*)0;
        int *l_996 = &l_945[3];
        int *l_997[10][9][2] = {{{&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}}, {{&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}}, {{&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}}, {{&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}}, {{&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}}, {{&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}}, {{&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}}, {{&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}}, {{&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}}, {{&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}, {&g_81[6][5][1], &g_12[2]}}};
        int i, j, k;
        (*g_84) = l_995;
        l_999++;
        (*l_996) = ((g_123[3].f3 > ((g_523.f7 & g_1004) == g_967.f6)) <= (*l_988));
        for (g_164 = 0; (g_164 <= 4); g_164 += 1)
        {
            int l_1005 = (-1L);
            int i;
            l_1005 &= l_945[g_164];
            for (g_1004 = 0; (g_1004 <= 6); g_1004 += 1)
            {
                int i;
                g_123[(g_164 + 1)] = g_1006;
            }
            (*g_84) = &l_945[3];
            for (g_439 = 0; (g_439 <= 6); g_439 += 1)
            {
                int l_1010 = 0L;
                struct S0 ***l_1034 = &g_797;
            }
        }
    }
    else
    {
        struct S0 *l_1039 = (void*)0;
        struct S0 **l_1040[10] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
        int l_1043[9][1][4] = {{{(-4L), 0x5BAF8CE3L, (-4L), 0x5BAF8CE3L}}, {{(-4L), 0x5BAF8CE3L, (-4L), 0x5BAF8CE3L}}, {{(-4L), 0x5BAF8CE3L, (-4L), 0x5BAF8CE3L}}, {{(-4L), 0x5BAF8CE3L, (-4L), 0x5BAF8CE3L}}, {{(-4L), 0x5BAF8CE3L, (-4L), 0x5BAF8CE3L}}, {{(-4L), 0x5BAF8CE3L, (-4L), 0x5BAF8CE3L}}, {{(-4L), 0x5BAF8CE3L, (-4L), 0x5BAF8CE3L}}, {{(-4L), 0x5BAF8CE3L, (-4L), 0x5BAF8CE3L}}, {{(-4L), 0x5BAF8CE3L, (-4L), 0x5BAF8CE3L}}};
        unsigned short l_1102 = 0xD5E4L;
        int i, j, k;
        g_120 = l_1039;
        for (g_9 = 0; (g_9 != 15); g_9 = safe_add_func_uint8_t_u_u(g_9, 9))
        {
            unsigned l_1060 = 18446744073709551615UL;
            int l_1076 = 0x34D8B0FDL;
            int l_1077 = 0L;
            int l_1078 = 7L;
            int l_1079 = 0x4ABC5703L;
            int l_1082[6] = {0x2953A829L, 1L, 0x2953A829L, 1L, 0x2953A829L, 1L};
            unsigned char l_1090 = 6UL;
            int i;
            (*l_988) = l_1043[5][0][2];
            g_647[4][0] = g_1044;
            for (l_1038 = 0; (l_1038 <= 6); l_1038 += 1)
            {
                int l_1046 = 0xC43B8418L;
                (*l_988) ^= (l_1046 && g_676[5][0][2].f5);
            }
            for (l_1038 = 0; (l_1038 > 39); l_1038++)
            {
                unsigned char l_1061 = 0xD3L;
                int l_1062 = 7L;
                int l_1080 = 1L;
                int l_1081[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1081[i] = 0x7EAEF043L;
                for (g_288.f1 = (-10); (g_288.f1 <= 24); g_288.f1++)
                {
                    unsigned l_1055 = 4UL;
                    int l_1071 = 0L;
                    int l_1074 = 0xC271BB43L;
                    int l_1075[2];
                    unsigned l_1083[8] = {0xA1E71633L, 4294967295UL, 0xA1E71633L, 4294967295UL, 0xA1E71633L, 4294967295UL, 0xA1E71633L, 4294967295UL};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1075[i] = 1L;
                    if (((safe_add_func_int16_t_s_s(4L, (((safe_rshift_func_int8_t_s_s(l_1055, (l_1061 ^ g_676[5][0][2].f7))) && 0x1353L) > l_1061))) ^ l_1060))
                    {
                        (*g_84) = &g_1004;
                        (*g_85) = (((void*)0 == (*g_84)) <= (-10L));
                        return l_1060;
                    }
                    else
                    {
                        int *l_1065 = &g_12[0];
                        int *l_1066 = &l_1062;
                        int *l_1067 = &l_945[4];
                        int *l_1068 = &g_164;
                        int *l_1069 = &l_945[3];
                        int *l_1070 = &g_12[3];
                        int *l_1072 = (void*)0;
                        int *l_1073[9][6][2] = {{{&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}}, {{&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}}, {{&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}}, {{&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}}, {{&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}}, {{&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}}, {{&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}}, {{&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}}, {{&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}, {&l_1043[3][0][1], &g_1004}}};
                        int i, j, k;
                        g_1064 = g_1063;
                        ++l_1083[0];
                    }
                    (*l_988) = (g_1006.f5 || ((+((safe_lshift_func_uint8_t_u_u(func_32(g_726, g_647[4][0].f6, &l_1071), ((safe_rshift_func_uint8_t_u_u(l_1090, 2)) | g_967.f1))) >= (+(safe_lshift_func_uint8_t_u_s(l_1077, g_647[4][0].f0))))) && 0xC15DL));
                }
                for (g_337.f1 = 1; (g_337.f1 <= 4); g_337.f1 += 1)
                {
                    for (l_960 = 0; (l_960 <= 1); l_960 += 1)
                    {
                        int i;
                        return l_1082[g_337.f1];
                    }
                }
                for (l_910 = 0; (l_910 >= 12); ++l_910)
                {
                    return g_980.f1;
                }
                l_1045 = &g_12[2];
            }
        }
    }
    (*l_988) |= (safe_lshift_func_uint16_t_u_u(((-5L) < g_257.f3), 14));
    return g_1006.f3;
}







static unsigned short func_6(char p_7, int p_8)
{
    int *l_10 = (void*)0;
    int *l_11 = &g_12[0];
    int *l_13[2][7] = {{&g_12[0], (void*)0, &g_12[0], (void*)0, &g_12[0], (void*)0, &g_12[0]}, {&g_12[0], (void*)0, &g_12[0], (void*)0, &g_12[0], (void*)0, &g_12[0]}};
    struct S0 **l_778 = (void*)0;
    int l_787[5];
    unsigned l_789[8] = {0xD163C6DAL, 0x0B4261DCL, 0xD163C6DAL, 0x0B4261DCL, 0xD163C6DAL, 0x0B4261DCL, 0xD163C6DAL, 0x0B4261DCL};
    short l_814 = (-8L);
    unsigned l_820 = 4UL;
    int l_854 = 0xAB4597F1L;
    unsigned short l_868 = 0UL;
    short l_902 = 0L;
    int i, j;
    for (i = 0; i < 5; i++)
        l_787[i] = 0xAADEA14EL;
    --g_14;
    if ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(g_12[3], g_12[0])), 4)), func_23(g_9, (safe_lshift_func_uint8_t_u_s(4UL, (safe_add_func_int16_t_s_s(((g_9 | func_32(g_12[2], (func_36(func_38((!func_40((*l_11), (*l_11), (((safe_add_func_int8_t_s_s(0L, g_14)) < p_8) >= 4294967289UL), g_12[2])))) && p_7), &g_12[1])) > p_7), 1L)))), &g_12[0], l_13[0][1]))))
    {
        unsigned char l_767[7] = {0UL, 0UL, 5UL, 0UL, 0UL, 5UL, 0UL};
        int l_770 = (-2L);
        int l_771 = (-1L);
        int l_772[3];
        unsigned short l_773 = 0UL;
        int i;
        for (i = 0; i < 3; i++)
            l_772[i] = 0xBE913E3EL;
        --l_767[2];
        l_773++;
        (*l_11) = ((((safe_add_func_int16_t_s_s((0x1F97AB9CL <= l_767[2]), (l_778 != l_778))) > (g_584 && (safe_rshift_func_uint8_t_u_u(p_7, g_676[5][0][2].f7)))) < l_787[4]) == 0x1A6A1419L);
    }
    else
    {
        int l_788[4] = {0x876A695CL, 8L, 0x876A695CL, 8L};
        int ***l_798 = &g_84;
        int ***l_799[8];
        unsigned char l_857 = 0UL;
        unsigned l_886 = 0xF7304354L;
        char l_898 = 3L;
        unsigned short l_899[6] = {0x1EEFL, 0xA856L, 0x1EEFL, 0xA856L, 0x1EEFL, 0xA856L};
        int i;
        for (i = 0; i < 8; i++)
            l_799[i] = (void*)0;
        l_789[0]--;
        (*l_11) = ((safe_add_func_int16_t_s_s((p_8 || p_7), (l_788[2] || func_23((*l_11), g_180.f3, &l_788[3], &l_787[3])))) < (-5L));
        if (l_788[3])
        {
            unsigned char l_800 = 0xD3L;
            int *l_803 = (void*)0;
            int l_812 = 0x03012752L;
            int l_816[1];
            int i;
            for (i = 0; i < 1; i++)
                l_816[i] = 0x7A704D57L;
            if ((safe_sub_func_uint16_t_u_u(l_800, (254UL != p_8))))
            {
                for (g_492.f3 = 0; (g_492.f3 <= (-3)); g_492.f3--)
                {
                    return g_180.f1;
                }
            }
            else
            {
                (*l_11) = p_8;
            }
            for (g_154 = (-15); (g_154 > 29); g_154 = safe_add_func_int16_t_s_s(g_154, 6))
            {
                int l_810 = (-1L);
                char l_813 = 0x14L;
                int l_815 = (-5L);
                int l_817 = 0L;
                int **l_825 = &l_803;
                int l_843 = 0x8D9A2EA5L;
                int l_844 = 3L;
                int l_845[5][8] = {{0x4E0E193BL, (-1L), 0xC909ED33L, 3L, 0xC909ED33L, (-1L), 0x4E0E193BL, 1L}, {0x4E0E193BL, (-1L), 0xC909ED33L, 3L, 0xC909ED33L, (-1L), 0x4E0E193BL, 1L}, {0x4E0E193BL, (-1L), 0xC909ED33L, 3L, 0xC909ED33L, (-1L), 0x4E0E193BL, 1L}, {0x4E0E193BL, (-1L), 0xC909ED33L, 3L, 0xC909ED33L, (-1L), 0x4E0E193BL, 1L}, {0x4E0E193BL, (-1L), 0xC909ED33L, 3L, 0xC909ED33L, (-1L), 0x4E0E193BL, 1L}};
                char l_856 = (-7L);
                int i, j;
                (**l_798) = l_803;
                for (g_288.f1 = 0; (g_288.f1 <= 3); g_288.f1 += 1)
                {
                    int l_811 = 3L;
                    int l_818 = 0xFA30BA0CL;
                    int l_819[5][8][6] = {{{0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}}, {{0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}}, {{0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}}, {{0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}}, {{0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}, {0x14A1901AL, 0x3613BCF6L, 0x14A1901AL, 0L, 1L, 0x177B0077L}}};
                    int i, j, k;
                    l_820++;
                    for (p_7 = 0; (p_7 <= 3); p_7 += 1)
                    {
                        int i, j, k;
                        (*l_11) ^= ((safe_rshift_func_int8_t_s_u((&g_12[p_7] != &g_81[g_288.f1][(p_7 + 3)][p_7]), 6)) >= 4294967295UL);
                    }
                    for (l_813 = 0; (l_813 <= 3); l_813 += 1)
                    {
                        int l_838 = 1L;
                        struct S1 *l_839 = &g_840;
                        struct S1 **l_841 = &l_839;
                        short l_842 = 0L;
                        int l_846 = (-7L);
                        int l_847 = 0xE62B1B72L;
                        int l_849 = 0x7BC95A43L;
                        int l_850 = 0x6FA39598L;
                        int l_851 = 0x20C66DE2L;
                        int l_852 = 0x6D0F34BDL;
                        int l_853 = 0x2C732170L;
                        int l_855[5];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_855[i] = 0L;
                        l_838 |= (((0xB95BL >= ((((*l_798) == l_825) < g_12[l_813]) >= (safe_add_func_int32_t_s_s(0x2FF71411L, (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(g_81[g_288.f1][g_288.f1][g_288.f1], (safe_rshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(g_81[(g_288.f1 + 3)][l_813][l_813], 4)), p_8)) && 1UL), p_8)))), p_8)))))) == 0xD88BB3E4L) | g_81[3][5][0]);
                        (*l_841) = l_839;
                        --l_857;
                    }
                    (*l_11) = ((safe_rshift_func_uint8_t_u_s((g_257.f3 >= (safe_lshift_func_uint16_t_u_u(((g_676[5][0][2].f6 & (((0UL >= (0x8946L <= p_8)) ^ (safe_sub_func_uint8_t_u_u(0x9AL, p_7))) && p_7)) | g_121.f1), 0))), p_8)) <= p_8);
                    for (g_492.f1 = 0; (g_492.f1 <= 2); g_492.f1 += 1)
                    {
                        unsigned l_871 = 18446744073709551615UL;
                        (*l_11) = (g_166[7][3].f6 && (safe_add_func_uint16_t_u_u(8UL, l_818)));
                        ++l_868;
                        if (p_7)
                            break;
                        if (l_871)
                            break;
                    }
                }
                (**l_798) = (*g_84);
                return p_7;
            }
            for (g_624 = 0; (g_624 > (-7)); g_624--)
            {
                int ***l_874 = &g_84;
                (*l_11) = (&g_84 != l_874);
                (*l_11) ^= 0x653E2367L;
                for (g_584 = 0; (g_584 <= 4); g_584 += 1)
                {
                    int i;
                    l_816[0] ^= l_787[g_584];
                }
            }
        }
        else
        {
            int *l_875[3][4][8] = {{{&l_788[2], &g_12[0], &l_788[2], &l_787[0], &l_787[4], &l_787[4], &l_788[1], &g_164}, {&l_788[2], &g_12[0], &l_788[2], &l_787[0], &l_787[4], &l_787[4], &l_788[1], &g_164}, {&l_788[2], &g_12[0], &l_788[2], &l_787[0], &l_787[4], &l_787[4], &l_788[1], &g_164}, {&l_788[2], &g_12[0], &l_788[2], &l_787[0], &l_787[4], &l_787[4], &l_788[1], &g_164}}, {{&l_788[2], &g_12[0], &l_788[2], &l_787[0], &l_787[4], &l_787[4], &l_788[1], &g_164}, {&l_788[2], &g_12[0], &l_788[2], &l_787[0], &l_787[4], &l_787[4], &l_788[1], &g_164}, {&l_788[2], &g_12[0], &l_788[2], &l_787[0], &l_787[4], &l_787[4], &l_788[1], &g_164}, {&l_788[2], &g_12[0], &l_788[2], &l_787[0], &l_787[4], &l_787[4], &l_788[1], &g_164}}, {{&l_788[2], &g_12[0], &l_788[2], &l_787[0], &l_787[4], &l_787[4], &l_788[1], &g_164}, {&l_788[2], &g_12[0], &l_788[2], &l_787[0], &l_787[4], &l_787[4], &l_788[1], &g_164}, {&l_788[2], &g_12[0], &l_788[2], &l_787[0], &l_787[4], &l_787[4], &l_788[1], &g_164}, {&l_788[2], &g_12[0], &l_788[2], &l_787[0], &l_787[4], &l_787[4], &l_788[1], &g_164}}};
            int i, j, k;
            l_13[0][6] = l_875[0][2][0];
            for (g_439 = 28; (g_439 == 21); g_439--)
            {
                unsigned char l_893 = 1UL;
                int l_895 = 0x9B17F3B2L;
                for (p_7 = (-17); (p_7 != 24); p_7 = safe_add_func_uint16_t_u_u(p_7, 7))
                {
                    int *l_890[6][2];
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_890[i][j] = &g_81[6][5][1];
                    }
                    (*l_11) ^= (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((p_7 >= p_7) < p_7) && p_8), 0L)), 0x070BL));
                    for (g_257.f1 = 24; (g_257.f1 <= 46); g_257.f1 = safe_add_func_int8_t_s_s(g_257.f1, 2))
                    {
                        unsigned l_894 = 0xF9707417L;
                        g_81[6][5][1] &= l_893;
                        if (l_894)
                            break;
                        if (g_523.f3)
                            break;
                    }
                }
                l_895 ^= p_8;
            }
            (*l_11) &= (safe_mod_func_int16_t_s_s((+(-4L)), p_7));
        }
        --l_899[4];
    }
    (*g_84) = (void*)0;
    (*l_11) ^= l_902;
    return p_8;
}







static unsigned char func_23(unsigned p_24, unsigned p_25, int * p_26, int * p_27)
{
    int *l_375[4] = {&g_81[5][3][0], &g_12[0], &g_81[5][3][0], &g_12[0]};
    short l_383 = 0L;
    int l_384 = 5L;
    unsigned char l_440 = 254UL;
    int *l_490 = &g_81[0][6][0];
    struct S1 *l_506 = (void*)0;
    char l_507 = 0x00L;
    int l_520 = 0L;
    unsigned l_548[9][2][10] = {{{0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}, {0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}}, {{0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}, {0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}}, {{0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}, {0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}}, {{0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}, {0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}}, {{0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}, {0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}}, {{0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}, {0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}}, {{0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}, {0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}}, {{0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}, {0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}}, {{0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}, {0x442EF83EL, 0x809D2861L, 0UL, 1UL, 4294967286UL, 4294967295UL, 0x87FB9FFBL, 0UL, 1UL, 4UL}}};
    int l_598 = 0x4D7ED2AEL;
    char l_599[2];
    unsigned l_618[6][9] = {{18446744073709551615UL, 5UL, 0x2CC7648FL, 0x2CC7648FL, 5UL, 18446744073709551615UL, 5UL, 0x2CC7648FL, 0x2CC7648FL}, {18446744073709551615UL, 5UL, 0x2CC7648FL, 0x2CC7648FL, 5UL, 18446744073709551615UL, 5UL, 0x2CC7648FL, 0x2CC7648FL}, {18446744073709551615UL, 5UL, 0x2CC7648FL, 0x2CC7648FL, 5UL, 18446744073709551615UL, 5UL, 0x2CC7648FL, 0x2CC7648FL}, {18446744073709551615UL, 5UL, 0x2CC7648FL, 0x2CC7648FL, 5UL, 18446744073709551615UL, 5UL, 0x2CC7648FL, 0x2CC7648FL}, {18446744073709551615UL, 5UL, 0x2CC7648FL, 0x2CC7648FL, 5UL, 18446744073709551615UL, 5UL, 0x2CC7648FL, 0x2CC7648FL}, {18446744073709551615UL, 5UL, 0x2CC7648FL, 0x2CC7648FL, 5UL, 18446744073709551615UL, 5UL, 0x2CC7648FL, 0x2CC7648FL}};
    unsigned l_628[8][2] = {{0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}};
    struct S0 *l_646[1];
    unsigned char l_667[1];
    unsigned l_710[9];
    unsigned l_712 = 1UL;
    short l_742 = (-1L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_599[i] = (-5L);
    for (i = 0; i < 1; i++)
        l_646[i] = &g_647[4][0];
    for (i = 0; i < 1; i++)
        l_667[i] = 5UL;
    for (i = 0; i < 9; i++)
        l_710[i] = 0x0BA0DEFBL;
    for (g_337.f1 = 0; (g_337.f1 != 23); g_337.f1 = safe_add_func_uint32_t_u_u(g_337.f1, 1))
    {
        for (g_257.f3 = (-21); (g_257.f3 == (-18)); g_257.f3++)
        {
            (*g_84) = l_375[1];
            if ((**g_84))
                break;
        }
    }
    (*g_84) = p_27;
    if (((p_24 & g_123[3].f0) && (safe_unary_minus_func_int16_t_s(((p_24 ^ (safe_lshift_func_uint8_t_u_s(((0UL != (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((*g_84) == p_26) || (func_32(p_25, (((func_36(p_26) > g_121.f6) == p_24) & g_123[3].f7), p_26) || l_383)), 1)), g_121.f0))) >= p_25), p_25))) ^ (*p_26))))))
    {
        return l_384;
    }
    else
    {
        struct S1 **l_387 = &g_256;
        int l_400 = (-6L);
        int l_406 = 0x21BC4DFAL;
        int l_453 = (-2L);
        int l_468 = 0x291546CCL;
        char l_471 = 4L;
        int l_473 = 0x97BFC89BL;
        int l_474 = 0x88B1FB66L;
        int l_476[2][7] = {{8L, 8L, 0x6BA9E9AEL, 0x65247E1BL, (-6L), 0x65247E1BL, 0x6BA9E9AEL}, {8L, 8L, 0x6BA9E9AEL, 0x65247E1BL, (-6L), 0x65247E1BL, 0x6BA9E9AEL}};
        struct S0 *l_522 = &g_523;
        unsigned l_566 = 0x7D801A53L;
        short l_593[7] = {0x5629L, 3L, 0x5629L, 3L, 0x5629L, 3L, 0x5629L};
        int l_623[5] = {0x79ED494DL, 0x1D8774B3L, 0x79ED494DL, 0x1D8774B3L, 0x79ED494DL};
        int i, j;
        for (g_9 = 0; (g_9 == 18); g_9 = safe_add_func_int32_t_s_s(g_9, 4))
        {
            unsigned short l_395 = 0xA2F7L;
            int l_403 = 0x6CC2C994L;
            int l_404 = 7L;
            char l_452[6];
            int l_465 = 0x0AE9567BL;
            int l_479 = 5L;
            struct S1 **l_521 = &g_256;
            int i;
            for (i = 0; i < 6; i++)
                l_452[i] = 0x3CL;
        }
        for (g_288.f1 = 0; (g_288.f1 == 34); g_288.f1++)
        {
            unsigned l_530 = 4294967295UL;
            l_530++;
        }
        for (g_9 = 0; (g_9 != 7); g_9 = safe_add_func_int8_t_s_s(g_9, 1))
        {
            short l_535 = (-1L);
            int *l_549 = (void*)0;
            unsigned short l_550 = 0xE906L;
            int l_590 = 0xC03EA4A6L;
            int l_597 = 0x5F253B54L;
            int l_600 = 0xAC99B14CL;
            int l_603 = 0x9153F203L;
            int l_605[3];
            char l_610[5][9] = {{9L, 0x9AL, 9L, 0xE2L, 1L, 0xC4L, 0x3EL, (-9L), 0x11L}, {9L, 0x9AL, 9L, 0xE2L, 1L, 0xC4L, 0x3EL, (-9L), 0x11L}, {9L, 0x9AL, 9L, 0xE2L, 1L, 0xC4L, 0x3EL, (-9L), 0x11L}, {9L, 0x9AL, 9L, 0xE2L, 1L, 0xC4L, 0x3EL, (-9L), 0x11L}, {9L, 0x9AL, 9L, 0xE2L, 1L, 0xC4L, 0x3EL, (-9L), 0x11L}};
            int *l_617 = &l_400;
            struct S1 *l_629 = (void*)0;
            int i, j;
            for (i = 0; i < 3; i++)
                l_605[i] = 0x0AC8B36DL;
            (*l_490) = l_535;
            (*l_490) = l_535;
            if (l_535)
            {
                unsigned l_555[10][6][4] = {{{1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}}, {{1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}}, {{1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}}, {{1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}}, {{1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}}, {{1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}}, {{1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}}, {{1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}}, {{1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}}, {{1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}, {1UL, 0xBF6AD019L, 18446744073709551611UL, 0UL}}};
                int *l_567 = &g_12[0];
                char l_575 = 0x27L;
                int l_586 = 0x014A01D4L;
                int l_589 = (-1L);
                int l_592 = 1L;
                int l_594 = 0xAF5E3608L;
                int l_596 = 0xCBD1F403L;
                int l_601 = 0x190F1DCBL;
                int l_602 = 0xEFD6465BL;
                int l_604[1];
                int l_613 = 0L;
                int l_622 = (-1L);
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_604[i] = 6L;
                if (((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(g_166[7][3].f0, 3)), func_32((g_12[0] >= (+l_453)), l_406, l_549))), 0x9FL)) | l_474))
                {
                    unsigned l_551 = 0x1EAC9A92L;
                    for (l_383 = 0; (l_383 <= 3); l_383 += 1)
                    {
                        unsigned l_568[6][5] = {{0UL, 4294967287UL, 0xE093E520L, 4294967287UL, 0UL}, {0UL, 4294967287UL, 0xE093E520L, 4294967287UL, 0UL}, {0UL, 4294967287UL, 0xE093E520L, 4294967287UL, 0UL}, {0UL, 4294967287UL, 0xE093E520L, 4294967287UL, 0UL}, {0UL, 4294967287UL, 0xE093E520L, 4294967287UL, 0UL}, {0UL, 4294967287UL, 0xE093E520L, 4294967287UL, 0UL}};
                        int i, j;
                        l_468 = l_568[5][1];
                    }
                    l_473 = (((safe_sub_func_uint32_t_u_u(0UL, ((l_551 && g_164) | 4294967291UL))) == g_12[2]) || (g_14 < ((safe_mod_func_int8_t_s_s((0x67L >= (-10L)), (safe_add_func_uint16_t_u_u(0xE588L, l_476[0][2])))) < l_551)));
                    g_164 ^= (l_575 ^ (1UL > g_121.f6));
                }
                else
                {
                    char l_585 = 0xDEL;
                    int l_587[10];
                    int l_595 = 0xBB810753L;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_587[i] = 3L;
                    (*g_84) = p_27;
                    if (((2L != ((0UL | ((safe_mod_func_uint16_t_u_u(g_257.f1, (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_uint16_t_u_u((1UL || ((l_473 & (l_549 == (void*)0)) > (-1L))), ((((4294967287UL <= g_584) && 65535UL) == g_492.f1) >= p_25))) && 0L) == p_25), p_25)))) <= (*l_567))) < 0x2748L)) == g_257.f3))
                    {
                        int l_588 = 0x1C6545A3L;
                        int l_591[1][5];
                        unsigned l_606 = 0xE1B8FC6AL;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_591[i][j] = 0xE0D693A9L;
                        }
                        l_585 = (*p_26);
                        ++l_606;
                        (*g_84) = p_27;
                        return g_166[7][3].f1;
                    }
                    else
                    {
                        unsigned char l_609 = 0x67L;
                        if ((*p_26))
                            break;
                        l_610[4][3] ^= l_609;
                        (*l_490) = 0x1450FE1BL;
                    }
                    if (((-4L) > p_24))
                    {
                        int l_611 = 1L;
                        short l_612 = 5L;
                        (*l_490) &= l_611;
                        if (l_612)
                            break;
                    }
                    else
                    {
                        unsigned l_614 = 0x8496234FL;
                        --l_614;
                        (*l_617) = ((*g_84) != l_617);
                        l_618[4][4] = ((g_337.f3 == l_614) >= g_164);
                    }
                }
                for (l_453 = (-15); (l_453 <= 12); l_453 = safe_add_func_uint32_t_u_u(l_453, 6))
                {
                    short l_621 = 0xABFDL;
                    return l_621;
                }
                g_625[0][0][1]++;
            }
            else
            {
                p_27 = &l_623[1];
            }
            (*l_387) = l_629;
        }
        for (l_598 = 0; (l_598 >= 10); l_598++)
        {
            unsigned l_632[2];
            int ***l_637 = &g_84;
            int i;
            for (i = 0; i < 2; i++)
                l_632[i] = 0x6C9DFEFBL;
            (**l_637) = &g_81[6][5][1];
            (***l_637) = (*g_85);
            (***l_637) |= (safe_sub_func_uint32_t_u_u((l_476[0][5] || p_25), (safe_rshift_func_int8_t_s_s(g_180.f7, 4))));
            (*g_84) = &l_384;
        }
    }
    if ((safe_add_func_uint32_t_u_u(0UL, (p_25 >= 0x65L))))
    {
        unsigned l_654 = 0xC4CBA85CL;
        l_654--;
        if (l_654)
        {
            return p_24;
        }
        else
        {
            (*l_490) &= l_654;
        }
    }
    else
    {
        unsigned l_672[7] = {0UL, 0UL, 0x4FF3A871L, 0UL, 0UL, 0x4FF3A871L, 0UL};
        int l_691 = 0xE337B838L;
        struct S0 **l_695 = &l_646[0];
        int l_716[3][9][9] = {{{0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}}, {{0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}}, {{0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}, {0L, 0x5647110AL, 0xD4E65D52L, 0xB027F9E6L, 0x03AE40D3L, 0xB027F9E6L, 0xD4E65D52L, 0x5647110AL, 0L}}};
        unsigned char l_759 = 0x18L;
        int i, j, k;
        (*l_490) = (*p_26);
        if (((safe_add_func_uint16_t_u_u((p_25 || g_337.f1), ((safe_lshift_func_int8_t_s_u(p_24, 2)) > (safe_add_func_int8_t_s_s((((((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((l_667[0] ^ (*l_490)), 6)), 3)) & (safe_mod_func_int8_t_s_s(((~(safe_sub_func_uint8_t_u_u(l_672[5], (((safe_rshift_func_int16_t_s_s((&p_26 != (void*)0), 0)) != p_25) >= p_25)))) >= p_25), 6UL))) || g_154) || g_123[3].f0) && l_672[6]), 0x72L))))) ^ l_672[5]))
        {
            struct S0 *l_675 = &g_676[5][0][2];
            struct S0 **l_677 = (void*)0;
            struct S0 **l_678 = (void*)0;
            struct S0 **l_679 = (void*)0;
            struct S0 **l_680 = &g_120;
            (*l_490) ^= (g_14 || 0x36431209L);
            (*l_680) = l_675;
        }
        else
        {
            int ***l_681 = (void*)0;
            unsigned l_684[10] = {0xB0FF0ECCL, 18446744073709551615UL, 0x951A1406L, 0x951A1406L, 18446744073709551615UL, 0xB0FF0ECCL, 18446744073709551615UL, 0x951A1406L, 0x951A1406L, 18446744073709551615UL};
            int l_711 = 8L;
            struct S1 **l_758 = &g_256;
            int i;
            (*l_490) &= (l_681 == &g_84);
            if ((safe_lshift_func_uint8_t_u_u((g_676[5][0][2].f6 != l_684[1]), 5)))
            {
                int ***l_701 = &g_84;
                if ((p_24 < (-1L)))
                {
                    for (g_14 = 0; (g_14 > 18); g_14 = safe_add_func_uint32_t_u_u(g_14, 8))
                    {
                        (*l_490) &= 1L;
                        return g_676[5][0][2].f3;
                    }
                }
                else
                {
                    struct S1 **l_687 = (void*)0;
                    struct S1 **l_688 = &g_256;
                    (*l_688) = l_506;
                }
                for (l_440 = 22; (l_440 >= 39); l_440 = safe_add_func_uint16_t_u_u(l_440, 9))
                {
                    unsigned short l_692 = 0xADAEL;
                    struct S0 ***l_696 = &l_695;
                    l_692--;
                    (*l_696) = l_695;
                    g_647[4][0].f6 = (safe_add_func_uint8_t_u_u(p_25, 0x5CL));
                    (*l_490) = (l_672[1] <= p_24);
                }
                (*l_490) = ((safe_lshift_func_uint16_t_u_s(p_25, ((&g_84 != l_701) ^ (safe_rshift_func_uint16_t_u_s((!((g_492.f3 <= (safe_mul_func_uint8_t_u_u(p_25, (0xA16F999CL != ((((safe_lshift_func_uint8_t_u_u(g_231, 3)) <= l_691) && l_710[0]) != g_14))))) & 0x1068L)), g_166[7][3].f3))))) >= (*p_26));
            }
            else
            {
                unsigned char l_715[5][6] = {{248UL, 255UL, 1UL, 0x71L, 1UL, 255UL}, {248UL, 255UL, 1UL, 0x71L, 1UL, 255UL}, {248UL, 255UL, 1UL, 0x71L, 1UL, 255UL}, {248UL, 255UL, 1UL, 0x71L, 1UL, 255UL}, {248UL, 255UL, 1UL, 0x71L, 1UL, 255UL}};
                struct S1 **l_724 = &l_506;
                unsigned short l_747 = 0xE978L;
                int i, j;
                if (((g_180.f7 < l_672[2]) != l_716[2][4][2]))
                {
                    unsigned short l_717[2][3];
                    short l_725 = 0x5180L;
                    int l_727 = (-1L);
                    unsigned l_728 = 18446744073709551615UL;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_717[i][j] = 0x2B21L;
                    }
                    (*l_490) = (l_717[1][0] <= (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(g_121.f7, 4)) < (safe_add_func_int16_t_s_s(((&g_256 != l_724) != (l_717[1][0] && p_25)), (0xBBE0BA0EL || 0x412A6E02L)))), (l_725 && g_726))));
                    --l_728;
                    for (l_598 = (-28); (l_598 > (-4)); l_598 = safe_add_func_uint8_t_u_u(l_598, 5))
                    {
                        short l_735 = 9L;
                        l_691 = (*p_26);
                        (*l_490) = (safe_add_func_uint16_t_u_u(((l_742 == g_164) == g_676[5][0][2].f6), 4L));
                        (*l_490) = (safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(l_716[0][7][2], 65526UL)), 6));
                        (*l_490) = l_672[0];
                    }
                }
                else
                {
                    if (l_747)
                    {
                        return g_647[4][0].f0;
                    }
                    else
                    {
                        unsigned l_760[2][6];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_760[i][j] = 0x16D064B0L;
                        }
                        g_166[7][3].f6 = (safe_add_func_uint32_t_u_u((~(safe_mod_func_int8_t_s_s(g_625[0][0][1], 0xC2L))), (+(((safe_rshift_func_uint8_t_u_u((+255UL), 2)) <= (((255UL == ((*p_26) >= (safe_add_func_uint16_t_u_u((0UL | (safe_add_func_int32_t_s_s((l_758 == &g_256), 1L))), (-5L))))) ^ l_759) != l_760[1][4])) >= g_257.f1))));
                        return g_647[4][0].f7;
                    }
                }
            }
            (*l_490) = ((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((0UL == 4294967295UL) || (+((l_672[5] <= 0x78908034L) && (g_121.f6 & ((*p_26) & (g_726 == p_24)))))), ((safe_lshift_func_int16_t_s_s(g_257.f3, g_331.f6)) || 0x25L))), g_625[0][2][3])) != p_24);
        }
        (*g_84) = &l_691;
    }
    return g_676[5][0][2].f3;
}







static unsigned func_32(char p_33, unsigned short p_34, int * p_35)
{
    unsigned char l_355 = 0x4AL;
    int *l_368 = &g_81[6][5][1];
    (*l_368) ^= ((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_33, 0)), l_355)) < (safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((-1L) && ((safe_rshift_func_uint8_t_u_u(p_34, 5)) || g_331.f6)), p_33)), g_288.f1)));
    (*l_368) = 5L;
    for (g_257.f3 = 19; (g_257.f3 < 3); g_257.f3 = safe_sub_func_uint32_t_u_u(g_257.f3, 7))
    {
        return g_123[3].f1;
    }
    return p_34;
}







static int func_36(int * p_37)
{
    unsigned char l_188[4];
    int l_196 = 5L;
    int l_197 = 0x825BB455L;
    short l_242 = (-6L);
    char l_244 = (-1L);
    unsigned short l_270 = 0xAE1BL;
    char l_275[7];
    struct S1 *l_287 = &g_288;
    int l_322[1];
    int l_333 = 0xBF9AE201L;
    int *l_346[4][8][4] = {{{&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}}, {{&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}}, {{&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}}, {{&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}, {&g_81[3][7][3], &g_164, &g_12[0], &l_333}}};
    unsigned l_347 = 4294967287UL;
    unsigned char l_350[2];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_188[i] = 254UL;
    for (i = 0; i < 7; i++)
        l_275[i] = (-7L);
    for (i = 0; i < 1; i++)
        l_322[i] = 0x96549D2BL;
    for (i = 0; i < 2; i++)
        l_350[i] = 0xE9L;
    if (l_188[1])
    {
        int l_198 = 0x7B55F812L;
        int l_243 = 0x3EB4AD31L;
        int l_249[2][7][5] = {{{1L, 1L, 0x174C6A9DL, 0L, 6L}, {1L, 1L, 0x174C6A9DL, 0L, 6L}, {1L, 1L, 0x174C6A9DL, 0L, 6L}, {1L, 1L, 0x174C6A9DL, 0L, 6L}, {1L, 1L, 0x174C6A9DL, 0L, 6L}, {1L, 1L, 0x174C6A9DL, 0L, 6L}, {1L, 1L, 0x174C6A9DL, 0L, 6L}}, {{1L, 1L, 0x174C6A9DL, 0L, 6L}, {1L, 1L, 0x174C6A9DL, 0L, 6L}, {1L, 1L, 0x174C6A9DL, 0L, 6L}, {1L, 1L, 0x174C6A9DL, 0L, 6L}, {1L, 1L, 0x174C6A9DL, 0L, 6L}, {1L, 1L, 0x174C6A9DL, 0L, 6L}, {1L, 1L, 0x174C6A9DL, 0L, 6L}}};
        unsigned l_253 = 0xB5220146L;
        int i, j, k;
        for (g_14 = 0; (g_14 < 43); g_14++)
        {
            unsigned char l_201 = 0xE8L;
            int l_248 = (-1L);
            short l_261 = 0x62C5L;
            for (g_164 = 0; (g_164 <= 20); g_164 = safe_add_func_uint8_t_u_u(g_164, 1))
            {
                char l_195 = (-3L);
                unsigned char l_232[1][9] = {{0x4FL, 0x5AL, 0x4FL, 0x5AL, 0x4FL, 0x5AL, 0x4FL, 0x5AL, 0x4FL}};
                unsigned l_233 = 0x1B7BA886L;
                int l_238 = 0xC50F563AL;
                short l_252 = 1L;
                int i, j;
                (*g_84) = (*g_84);
                l_196 &= (safe_add_func_int32_t_s_s(l_188[1], (l_195 == l_195)));
                for (l_196 = 0; (l_196 <= 3); l_196 += 1)
                {
                    int i, j, k;
                    g_81[(l_196 + 3)][(l_196 + 1)][l_196] &= l_188[l_196];
                    l_197 &= l_188[l_196];
                    g_81[(l_196 + 3)][(l_196 + 1)][l_196] ^= (l_198 && (safe_add_func_uint16_t_u_u(l_201, ((safe_mod_func_uint32_t_u_u(g_166[7][3].f6, l_188[1])) < g_121.f6))));
                }
                for (l_195 = (-28); (l_195 != (-29)); --l_195)
                {
                    unsigned l_208 = 0xB41CF9AAL;
                    int l_250 = 0L;
                    int l_251[10][3][4] = {{{0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}}, {{0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}}, {{0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}}, {{0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}}, {{0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}}, {{0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}}, {{0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}}, {{0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}}, {{0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}}, {{0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}, {0x3311D27AL, (-3L), 7L, 0xB0D71E8CL}}};
                    int i, j, k;
                    for (l_201 = 15; (l_201 < 17); l_201 = safe_add_func_int8_t_s_s(l_201, 1))
                    {
                        int *l_209 = &l_197;
                        int ***l_210[8] = {&g_84, &g_84, &g_84, &g_84, &g_84, &g_84, &g_84, &g_84};
                        char l_234 = 0x18L;
                        int i;
                        (*l_209) |= l_208;
                        g_84 = &g_85;
                        (*l_209) = ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(0L, (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(0xEEL, l_208)), (safe_add_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(l_198, l_208)), (safe_sub_func_int16_t_s_s(((g_121.f1 > (safe_sub_func_uint16_t_u_u((l_198 == (l_188[2] > l_208)), l_201))) > 0L), g_231)))) && l_208) == l_232[0][1]) == l_198), g_9)))))), g_166[7][3].f7)), l_233)) > (*l_209));
                        l_234 |= 1L;
                    }
                    if ((safe_sub_func_int16_t_s_s((g_121.f1 && 2L), ((g_166[7][3].f3 >= l_208) > (safe_unary_minus_func_uint32_t_u((0x55FAL ^ (+0x3DAAL))))))))
                    {
                        l_238 |= 0x91E4E1AFL;
                        if (l_201)
                            continue;
                    }
                    else
                    {
                        int *l_239 = &l_196;
                        int *l_240 = &l_196;
                        int *l_241 = &l_197;
                        int *l_245 = &g_81[5][2][3];
                        int *l_246 = &l_197;
                        int *l_247[1][1][8];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 8; k++)
                                    l_247[i][j][k] = &l_243;
                            }
                        }
                        l_253--;
                    }
                }
            }
            if ((1L <= 0x78L))
            {
                struct S1 **l_258 = &g_256;
                (*l_258) = g_256;
            }
            else
            {
                int l_262 = 0x5B9FE362L;
                short l_263 = 1L;
                int *l_264 = &l_249[0][1][2];
                g_123[3].f6 = (g_14 == g_123[3].f1);
                l_263 &= (safe_sub_func_uint16_t_u_u(g_180.f3, (((l_261 != ((g_180.f7 == l_243) | g_257.f1)) & (l_248 > (l_248 & (l_197 > ((l_262 == l_262) <= l_188[1]))))) < 4294967295UL)));
                (*l_264) = 0x36604195L;
                for (l_201 = 0; (l_201 <= 3); l_201 += 1)
                {
                    int i;
                    return l_188[l_201];
                }
            }
        }
        for (l_196 = (-19); (l_196 <= (-24)); l_196--)
        {
            int *l_267[6];
            int i;
            for (i = 0; i < 6; i++)
                l_267[i] = &l_197;
            l_197 = l_249[0][1][2];
            return l_198;
        }
        l_249[0][1][2] = ((g_121.f0 >= 65530UL) | ((safe_lshift_func_int8_t_s_s(l_249[1][3][3], l_243)) > 0xD9L));
    }
    else
    {
        g_180.f6 &= l_244;
    }
    if (((safe_lshift_func_int16_t_s_s(g_123[3].f1, 0)) == ((safe_unary_minus_func_int32_t_s(((&l_197 != p_37) != (l_196 ^ (safe_rshift_func_int16_t_s_s(l_275[4], 5)))))) ^ (g_123[3].f6 | l_197))))
    {
        short l_291 = (-1L);
        unsigned l_302 = 0UL;
        int l_319[1];
        struct S0 *l_330 = &g_331;
        struct S1 **l_332 = &g_256;
        unsigned l_343 = 0x321D2B17L;
        unsigned char l_344 = 0xD7L;
        int i;
        for (i = 0; i < 1; i++)
            l_319[i] = 0x03DD7E3BL;
        (*g_84) = func_49((l_291 > (safe_mod_func_uint32_t_u_u(((&g_256 == (void*)0) < l_291), (-1L)))), l_291, (safe_mod_func_int32_t_s_s((((~(l_188[3] == g_81[6][5][1])) != l_197) < 0x2DL), l_291)), g_257.f3);
        if ((**g_84))
        {
            unsigned char l_296 = 0x63L;
            int *l_297 = (void*)0;
            int *l_298 = &l_196;
            (*l_298) = (l_296 || 0xFD3989F6L);
            for (l_244 = (-21); (l_244 <= 19); l_244++)
            {
                l_197 ^= 1L;
            }
        }
        else
        {
            int *l_301 = &g_81[6][5][1];
            l_302++;
            for (l_302 = 26; (l_302 > 34); l_302 = safe_add_func_uint32_t_u_u(l_302, 1))
            {
                short l_316 = 0xF417L;
                int l_318[1][8][2] = {{{0xBD86C564L, (-6L)}, {0xBD86C564L, (-6L)}, {0xBD86C564L, (-6L)}, {0xBD86C564L, (-6L)}, {0xBD86C564L, (-6L)}, {0xBD86C564L, (-6L)}, {0xBD86C564L, (-6L)}, {0xBD86C564L, (-6L)}}};
                struct S1 *l_336[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_336[i] = &g_337;
                (*g_84) = p_37;
                for (g_288.f3 = 0; (g_288.f3 == (-12)); g_288.f3--)
                {
                    unsigned short l_313 = 0UL;
                    int l_320 = 0x9B91EF26L;
                    unsigned char l_323 = 255UL;
                    for (l_270 = 0; (l_270 > 53); l_270++)
                    {
                        int *l_317[6][2] = {{&g_81[2][4][3], &g_164}, {&g_81[2][4][3], &g_164}, {&g_81[2][4][3], &g_164}, {&g_81[2][4][3], &g_164}, {&g_81[2][4][3], &g_164}, {&g_81[2][4][3], &g_164}};
                        short l_321 = 0x0FBEL;
                        int i, j;
                        (*g_84) = l_317[3][1];
                        l_323++;
                        (*g_85) = (-1L);
                        (*g_84) = &l_319[0];
                    }
                }
                (*l_301) = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_319[0] < (l_322[0] <= ((void*)0 == l_330))), ((((void*)0 == l_332) >= 0xCEL) || l_270))), 2));
                (*l_301) = (((l_333 < ((safe_rshift_func_int8_t_s_u((0x2FF9L > g_81[6][5][1]), 2)) ^ g_331.f3)) > (*l_301)) == l_188[1]);
            }
        }
        return l_344;
    }
    else
    {
        int *l_345 = &g_81[2][6][2];
        (*l_345) |= (l_244 & ((void*)0 == g_256));
    }
    l_347--;
    return l_350[0];
}







static int * func_38(int p_39)
{
    unsigned l_171 = 9UL;
    int l_173 = (-8L);
    struct S0 *l_179 = &g_180;
    unsigned short l_185 = 65529UL;
    if (p_39)
    {
        int *l_169 = &g_164;
        int *l_170 = (void*)0;
        g_120 = g_120;
        l_170 = l_169;
    }
    else
    {
        int *l_172[7][6] = {{(void*)0, (void*)0, &g_12[0], (void*)0, &g_12[0], &g_12[0]}, {(void*)0, (void*)0, &g_12[0], (void*)0, &g_12[0], &g_12[0]}, {(void*)0, (void*)0, &g_12[0], (void*)0, &g_12[0], &g_12[0]}, {(void*)0, (void*)0, &g_12[0], (void*)0, &g_12[0], &g_12[0]}, {(void*)0, (void*)0, &g_12[0], (void*)0, &g_12[0], &g_12[0]}, {(void*)0, (void*)0, &g_12[0], (void*)0, &g_12[0], &g_12[0]}, {(void*)0, (void*)0, &g_12[0], (void*)0, &g_12[0], &g_12[0]}};
        int i, j;
        l_173 = (0x3BL && l_171);
    }
    p_39 &= (-1L);
    if ((**g_84))
    {
        int *l_176 = &g_81[6][5][1];
        int l_181 = 0L;
        (*g_84) = (*g_84);
        l_181 &= func_55(g_9, l_171, ((g_121.f0 || (+g_154)) ^ ((p_39 == (p_39 <= (safe_rshift_func_uint8_t_u_s(246UL, 7)))) <= ((l_179 == g_120) > p_39))), p_39);
        for (l_173 = 0; (l_173 != (-6)); --l_173)
        {
            int *l_184 = &g_81[6][5][1];
            l_184 = &l_181;
            (*g_84) = func_49(l_185, (((void*)0 != l_184) ^ 0x8D2B03CDL), (*l_184), (&l_173 == &l_173));
            (*l_176) = (safe_add_func_int32_t_s_s((*g_85), (g_14 >= g_166[7][3].f3)));
        }
        (*g_84) = (void*)0;
    }
    else
    {
        return (*g_84);
    }
    return (*g_84);
}







static int func_40(int p_41, char p_42, unsigned short p_43, char p_44)
{
    int *l_54 = &g_12[0];
    int *l_168[9][3] = {{&g_164, &g_81[6][5][1], &g_81[3][1][1]}, {&g_164, &g_81[6][5][1], &g_81[3][1][1]}, {&g_164, &g_81[6][5][1], &g_81[3][1][1]}, {&g_164, &g_81[6][5][1], &g_81[3][1][1]}, {&g_164, &g_81[6][5][1], &g_81[3][1][1]}, {&g_164, &g_81[6][5][1], &g_81[3][1][1]}, {&g_164, &g_81[6][5][1], &g_81[3][1][1]}, {&g_164, &g_81[6][5][1], &g_81[3][1][1]}, {&g_164, &g_81[6][5][1], &g_81[3][1][1]}};
    int i, j;
    g_121.f6 = (func_47(func_49((0L && (((void*)0 == l_54) || ((void*)0 != l_54))), func_55(p_44, (safe_lshift_func_int16_t_s_s((p_41 > (*l_54)), p_44)), (*l_54), g_12[3]), p_43, g_9)) | 0x1FL);
    return (*g_85);
}







static char func_47(int * p_48)
{
    int l_107 = 0xDDE4CA51L;
    int *l_112[4][5] = {{&g_12[1], &g_81[6][5][1], &g_81[6][5][1], &g_81[6][5][1], &g_12[1]}, {&g_12[1], &g_81[6][5][1], &g_81[6][5][1], &g_81[6][5][1], &g_12[1]}, {&g_12[1], &g_81[6][5][1], &g_81[6][5][1], &g_81[6][5][1], &g_12[1]}, {&g_12[1], &g_81[6][5][1], &g_81[6][5][1], &g_81[6][5][1], &g_12[1]}};
    char l_119 = 0x59L;
    unsigned l_150 = 0x5512EEACL;
    int i, j;
    g_81[6][5][1] = ((l_107 && func_55(((((**g_84) != (l_107 ^ (l_107 | (safe_sub_func_int32_t_s_s((*p_48), (0x59A2L > func_55(l_107, ((safe_lshift_func_int8_t_s_u(g_81[6][5][1], 3)) & l_107), g_81[6][2][3], l_107))))))) != l_107) > l_107), l_107, g_9, l_107)) & l_107);
    for (g_14 = 0; (g_14 <= 3); g_14 += 1)
    {
        char l_113[8] = {0x09L, 0x09L, 0xC0L, 0x09L, 0x09L, 0xC0L, 0x09L, 0x09L};
        int l_135 = 0x37AA7C1CL;
        int l_137[8];
        unsigned short l_141 = 0xB7A9L;
        struct S0 *l_165 = &g_166[7][3];
        int i;
        for (i = 0; i < 8; i++)
            l_137[i] = 0x37871E8FL;
        for (l_107 = 0; (l_107 <= 3); l_107 += 1)
        {
            int l_118 = 0x0057DF22L;
            int l_136[10][8] = {{0x6D5AF62CL, (-3L), 0x2F9AD659L, (-1L), 0x357069F2L, 0x732C53F8L, (-1L), 0xC59DEA67L}, {0x6D5AF62CL, (-3L), 0x2F9AD659L, (-1L), 0x357069F2L, 0x732C53F8L, (-1L), 0xC59DEA67L}, {0x6D5AF62CL, (-3L), 0x2F9AD659L, (-1L), 0x357069F2L, 0x732C53F8L, (-1L), 0xC59DEA67L}, {0x6D5AF62CL, (-3L), 0x2F9AD659L, (-1L), 0x357069F2L, 0x732C53F8L, (-1L), 0xC59DEA67L}, {0x6D5AF62CL, (-3L), 0x2F9AD659L, (-1L), 0x357069F2L, 0x732C53F8L, (-1L), 0xC59DEA67L}, {0x6D5AF62CL, (-3L), 0x2F9AD659L, (-1L), 0x357069F2L, 0x732C53F8L, (-1L), 0xC59DEA67L}, {0x6D5AF62CL, (-3L), 0x2F9AD659L, (-1L), 0x357069F2L, 0x732C53F8L, (-1L), 0xC59DEA67L}, {0x6D5AF62CL, (-3L), 0x2F9AD659L, (-1L), 0x357069F2L, 0x732C53F8L, (-1L), 0xC59DEA67L}, {0x6D5AF62CL, (-3L), 0x2F9AD659L, (-1L), 0x357069F2L, 0x732C53F8L, (-1L), 0xC59DEA67L}, {0x6D5AF62CL, (-3L), 0x2F9AD659L, (-1L), 0x357069F2L, 0x732C53F8L, (-1L), 0xC59DEA67L}};
            int i, j;
            if (((*g_84) != (void*)0))
            {
                unsigned l_126[7][5][7] = {{{0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}}, {{0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}}, {{0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}}, {{0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}}, {{0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}}, {{0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}}, {{0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}, {0x84A77F9EL, 1UL, 4294967293UL, 4294967295UL, 0x387A4150L, 0x8BFFBD8FL, 0x3FC6CF09L}}};
                int l_134[4][4][4] = {{{1L, 0x99BC534DL, (-2L), 0x434C744DL}, {1L, 0x99BC534DL, (-2L), 0x434C744DL}, {1L, 0x99BC534DL, (-2L), 0x434C744DL}, {1L, 0x99BC534DL, (-2L), 0x434C744DL}}, {{1L, 0x99BC534DL, (-2L), 0x434C744DL}, {1L, 0x99BC534DL, (-2L), 0x434C744DL}, {1L, 0x99BC534DL, (-2L), 0x434C744DL}, {1L, 0x99BC534DL, (-2L), 0x434C744DL}}, {{1L, 0x99BC534DL, (-2L), 0x434C744DL}, {1L, 0x99BC534DL, (-2L), 0x434C744DL}, {1L, 0x99BC534DL, (-2L), 0x434C744DL}, {1L, 0x99BC534DL, (-2L), 0x434C744DL}}, {{1L, 0x99BC534DL, (-2L), 0x434C744DL}, {1L, 0x99BC534DL, (-2L), 0x434C744DL}, {1L, 0x99BC534DL, (-2L), 0x434C744DL}, {1L, 0x99BC534DL, (-2L), 0x434C744DL}}};
                int i, j, k;
                if ((l_113[6] != l_113[6]))
                {
                    struct S0 *l_122[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_122[i] = &g_123[3];
                    l_119 = ((safe_add_func_int32_t_s_s(l_113[6], ((safe_mod_func_uint16_t_u_u(g_12[2], l_118)) < 0x01L))) != 0xE5L);
                    l_122[0] = g_120;
                    for (l_119 = 0; (l_119 <= 1); l_119 += 1)
                    {
                        int i, j;
                        l_122[l_119] = l_122[l_119];
                        l_112[l_119][g_14] = p_48;
                    }
                    l_112[g_14][(g_14 + 1)] = func_49(l_118, (safe_sub_func_uint8_t_u_u((0UL && 0xA5L), l_126[2][2][3])), g_81[4][7][1], ((*g_85) <= ((0x28F82DB5L != (g_121.f1 & (1UL <= g_121.f3))) < (*p_48))));
                }
                else
                {
                    char l_133 = 0x47L;
                    int l_138 = 0L;
                    int l_139 = 0xB6203BAEL;
                    int l_140 = 1L;
                    for (l_119 = 28; (l_119 > (-1)); --l_119)
                    {
                        int l_131 = 5L;
                        unsigned l_132 = 0xCDC36BB0L;
                        (*g_84) = func_49((0x3F65L < ((*g_85) <= (g_12[1] != (safe_sub_func_int8_t_s_s(l_131, ((void*)0 != g_120)))))), l_113[6], l_131, l_132);
                        l_131 = ((void*)0 != &g_85);
                    }
                    l_141++;
                }
            }
            else
            {
                unsigned char l_144 = 246UL;
                if ((*p_48))
                {
                    int l_149 = (-1L);
                    l_144 &= (*g_85);
                    if ((**g_84))
                        break;
                    l_137[4] = ((-2L) ^ ((l_144 ^ ((((safe_lshift_func_uint16_t_u_s(((*p_48) | l_149), 14)) >= (l_137[3] > g_123[3].f7)) < (l_149 != ((*p_48) & (g_81[5][3][1] ^ 0x3BF8L)))) >= l_150)) && 0x6EL));
                    if ((*p_48))
                        continue;
                }
                else
                {
                    int l_153 = 0xBC2BF2A8L;
                    l_153 = (safe_rshift_func_int16_t_s_s(g_121.f1, 14));
                    (*g_84) = func_49(g_154, (!(safe_lshift_func_int8_t_s_s(l_113[6], 1))), l_144, g_121.f3);
                    (*g_84) = (*g_84);
                }
            }
            for (l_135 = 24; (l_135 >= 4); l_135 = safe_sub_func_int16_t_s_s(l_135, 8))
            {
                int l_163[2][4];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_163[i][j] = (-1L);
                }
                l_136[6][3] = ((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(l_118, l_118)), (**g_84))) >= l_163[1][1]);
                l_137[0] &= (g_81[4][5][3] | 1UL);
                if (g_164)
                    continue;
            }
        }
        l_135 |= (l_137[3] || l_137[3]);
        l_137[3] &= (g_123[3].f0 >= g_123[3].f7);
        l_137[2] = ((&l_112[1][3] == &p_48) ^ (g_120 == l_165));
        for (l_150 = 0; (l_150 <= 3); l_150 += 1)
        {
            int l_167[7];
            int i;
            for (i = 0; i < 7; i++)
                l_167[i] = 7L;
            return l_167[5];
        }
    }
    (*g_84) = func_49(g_166[7][3].f0, g_81[0][1][0], g_121.f6, g_166[7][3].f7);
    return g_166[7][3].f0;
}







static int * func_49(unsigned short p_50, int p_51, unsigned short p_52, char p_53)
{
    int *l_106 = &g_12[2];
    (*g_84) = (*g_84);
    return l_106;
}







static int func_55(unsigned p_56, unsigned p_57, int p_58, short p_59)
{
    int *l_62 = &g_12[0];
    int **l_63 = &l_62;
    int l_64[1][1][9] = {{{0x523A5B0BL, 0x523A5B0BL, 0x199855EAL, 0x523A5B0BL, 0x523A5B0BL, 0x199855EAL, 0x523A5B0BL, 0x523A5B0BL, 0x199855EAL}}};
    int l_90[3][5][8] = {{{(-10L), 7L, 0xFC757FEEL, 0x5C477D8FL, 0xA0D4A109L, (-1L), 1L, 0L}, {(-10L), 7L, 0xFC757FEEL, 0x5C477D8FL, 0xA0D4A109L, (-1L), 1L, 0L}, {(-10L), 7L, 0xFC757FEEL, 0x5C477D8FL, 0xA0D4A109L, (-1L), 1L, 0L}, {(-10L), 7L, 0xFC757FEEL, 0x5C477D8FL, 0xA0D4A109L, (-1L), 1L, 0L}, {(-10L), 7L, 0xFC757FEEL, 0x5C477D8FL, 0xA0D4A109L, (-1L), 1L, 0L}}, {{(-10L), 7L, 0xFC757FEEL, 0x5C477D8FL, 0xA0D4A109L, (-1L), 1L, 0L}, {(-10L), 7L, 0xFC757FEEL, 0x5C477D8FL, 0xA0D4A109L, (-1L), 1L, 0L}, {(-10L), 7L, 0xFC757FEEL, 0x5C477D8FL, 0xA0D4A109L, (-1L), 1L, 0L}, {(-10L), 7L, 0xFC757FEEL, 0x5C477D8FL, 0xA0D4A109L, (-1L), 1L, 0L}, {(-10L), 7L, 0xFC757FEEL, 0x5C477D8FL, 0xA0D4A109L, (-1L), 1L, 0L}}, {{(-10L), 7L, 0xFC757FEEL, 0x5C477D8FL, 0xA0D4A109L, (-1L), 1L, 0L}, {(-10L), 7L, 0xFC757FEEL, 0x5C477D8FL, 0xA0D4A109L, (-1L), 1L, 0L}, {(-10L), 7L, 0xFC757FEEL, 0x5C477D8FL, 0xA0D4A109L, (-1L), 1L, 0L}, {(-10L), 7L, 0xFC757FEEL, 0x5C477D8FL, 0xA0D4A109L, (-1L), 1L, 0L}, {(-10L), 7L, 0xFC757FEEL, 0x5C477D8FL, 0xA0D4A109L, (-1L), 1L, 0L}}};
    unsigned l_105 = 0x50E9BAB3L;
    int i, j, k;
    (*l_63) = l_62;
    for (p_59 = 0; (p_59 >= 0); p_59 -= 1)
    {
        int *l_76 = &g_12[0];
        int l_96 = 0x5E9411A3L;
        int l_99 = (-6L);
        int l_100[5] = {6L, (-1L), 6L, (-1L), 6L};
        int l_104[4][8] = {{1L, 0xF82BC33DL, (-4L), 0xF82BC33DL, 1L, 1L, (-4L), 1L}, {1L, 0xF82BC33DL, (-4L), 0xF82BC33DL, 1L, 1L, (-4L), 1L}, {1L, 0xF82BC33DL, (-4L), 0xF82BC33DL, 1L, 1L, (-4L), 1L}, {1L, 0xF82BC33DL, (-4L), 0xF82BC33DL, 1L, 1L, (-4L), 1L}};
        int i, j;
        (*l_63) = &g_12[0];
        if (((((((safe_lshift_func_uint8_t_u_s(p_58, 5)) & (*l_62)) < g_12[1]) | p_56) != (g_9 > 0UL)) || (safe_add_func_int16_t_s_s(g_12[1], ((~(((0xE60E50EEL ^ p_59) == g_14) && 0x11L)) ^ 0x7CL)))))
        {
            unsigned l_75[10][8] = {{0UL, 0x33BBF8E7L, 0xEF225987L, 0x2B630719L, 0xBEDE7E56L, 0xAFF6A51DL, 0xBEDE7E56L, 0x2B630719L}, {0UL, 0x33BBF8E7L, 0xEF225987L, 0x2B630719L, 0xBEDE7E56L, 0xAFF6A51DL, 0xBEDE7E56L, 0x2B630719L}, {0UL, 0x33BBF8E7L, 0xEF225987L, 0x2B630719L, 0xBEDE7E56L, 0xAFF6A51DL, 0xBEDE7E56L, 0x2B630719L}, {0UL, 0x33BBF8E7L, 0xEF225987L, 0x2B630719L, 0xBEDE7E56L, 0xAFF6A51DL, 0xBEDE7E56L, 0x2B630719L}, {0UL, 0x33BBF8E7L, 0xEF225987L, 0x2B630719L, 0xBEDE7E56L, 0xAFF6A51DL, 0xBEDE7E56L, 0x2B630719L}, {0UL, 0x33BBF8E7L, 0xEF225987L, 0x2B630719L, 0xBEDE7E56L, 0xAFF6A51DL, 0xBEDE7E56L, 0x2B630719L}, {0UL, 0x33BBF8E7L, 0xEF225987L, 0x2B630719L, 0xBEDE7E56L, 0xAFF6A51DL, 0xBEDE7E56L, 0x2B630719L}, {0UL, 0x33BBF8E7L, 0xEF225987L, 0x2B630719L, 0xBEDE7E56L, 0xAFF6A51DL, 0xBEDE7E56L, 0x2B630719L}, {0UL, 0x33BBF8E7L, 0xEF225987L, 0x2B630719L, 0xBEDE7E56L, 0xAFF6A51DL, 0xBEDE7E56L, 0x2B630719L}, {0UL, 0x33BBF8E7L, 0xEF225987L, 0x2B630719L, 0xBEDE7E56L, 0xAFF6A51DL, 0xBEDE7E56L, 0x2B630719L}};
            int l_79 = 1L;
            int i, j;
            l_79 ^= (((safe_lshift_func_uint8_t_u_s(255UL, (safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((l_75[0][0] <= ((void*)0 == l_76)), (((((((!g_12[0]) <= (g_14 || (safe_add_func_uint32_t_u_u(0x8C9BA8F9L, 0UL)))) & (*l_76)) || 0x65L) | p_58) != (*l_76)) == g_9))), 4294967295UL)))) > (*l_62)) < 3L);
            if (l_75[0][0])
                continue;
        }
        else
        {
            unsigned l_91 = 18446744073709551615UL;
            int l_94 = 0x8C12B718L;
            int l_95[8][10] = {{0x5C9F2415L, (-5L), 0xB6AB4965L, 1L, 0xAB1BAC27L, (-7L), (-6L), 0L, 0L, 0xEE52D582L}, {0x5C9F2415L, (-5L), 0xB6AB4965L, 1L, 0xAB1BAC27L, (-7L), (-6L), 0L, 0L, 0xEE52D582L}, {0x5C9F2415L, (-5L), 0xB6AB4965L, 1L, 0xAB1BAC27L, (-7L), (-6L), 0L, 0L, 0xEE52D582L}, {0x5C9F2415L, (-5L), 0xB6AB4965L, 1L, 0xAB1BAC27L, (-7L), (-6L), 0L, 0L, 0xEE52D582L}, {0x5C9F2415L, (-5L), 0xB6AB4965L, 1L, 0xAB1BAC27L, (-7L), (-6L), 0L, 0L, 0xEE52D582L}, {0x5C9F2415L, (-5L), 0xB6AB4965L, 1L, 0xAB1BAC27L, (-7L), (-6L), 0L, 0L, 0xEE52D582L}, {0x5C9F2415L, (-5L), 0xB6AB4965L, 1L, 0xAB1BAC27L, (-7L), (-6L), 0L, 0L, 0xEE52D582L}, {0x5C9F2415L, (-5L), 0xB6AB4965L, 1L, 0xAB1BAC27L, (-7L), (-6L), 0L, 0L, 0xEE52D582L}};
            int i, j;
            for (p_56 = 0; (p_56 <= 0); p_56 += 1)
            {
                unsigned short l_86 = 65529UL;
                int l_87 = 1L;
                int l_97 = 0x36F7E945L;
                int l_98[9][5][5] = {{{0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}}, {{0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}}, {{0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}}, {{0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}}, {{0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}}, {{0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}}, {{0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}}, {{0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}}, {{0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}, {0xBEC7C54EL, 0x9B082438L, (-4L), 0x2F34E296L, 1L}}};
                int i, j, k;
                if (g_14)
                    break;
                for (p_58 = 0; (p_58 >= 0); p_58 -= 1)
                {
                    for (g_14 = 0; (g_14 <= 0); g_14 += 1)
                    {
                        int *l_80 = &g_81[6][5][1];
                        int i, j, k;
                        (*l_80) = l_64[p_58][g_14][g_14];
                        if ((**l_63))
                            continue;
                        (*l_63) = &g_81[6][5][1];
                    }
                }
                g_81[6][5][1] ^= p_57;
                for (g_14 = 0; (g_14 <= 0); g_14 += 1)
                {
                    int *l_88 = &g_81[6][5][1];
                    int *l_89[1][7][10] = {{{&g_81[1][0][2], &g_12[3], &l_87, &g_12[3], &g_81[1][0][2], &g_12[3], &l_87, &g_12[3], &g_81[1][0][2], &g_12[3]}, {&g_81[1][0][2], &g_12[3], &l_87, &g_12[3], &g_81[1][0][2], &g_12[3], &l_87, &g_12[3], &g_81[1][0][2], &g_12[3]}, {&g_81[1][0][2], &g_12[3], &l_87, &g_12[3], &g_81[1][0][2], &g_12[3], &l_87, &g_12[3], &g_81[1][0][2], &g_12[3]}, {&g_81[1][0][2], &g_12[3], &l_87, &g_12[3], &g_81[1][0][2], &g_12[3], &l_87, &g_12[3], &g_81[1][0][2], &g_12[3]}, {&g_81[1][0][2], &g_12[3], &l_87, &g_12[3], &g_81[1][0][2], &g_12[3], &l_87, &g_12[3], &g_81[1][0][2], &g_12[3]}, {&g_81[1][0][2], &g_12[3], &l_87, &g_12[3], &g_81[1][0][2], &g_12[3], &l_87, &g_12[3], &g_81[1][0][2], &g_12[3]}, {&g_81[1][0][2], &g_12[3], &l_87, &g_12[3], &g_81[1][0][2], &g_12[3], &l_87, &g_12[3], &g_81[1][0][2], &g_12[3]}}};
                    unsigned l_101 = 0x4237FCBAL;
                    int i, j, k;
                    l_86 &= ((safe_rshift_func_uint8_t_u_u(((void*)0 == g_84), 2)) | (*l_76));
                    l_91++;
                    l_101--;
                }
            }
            if ((*g_85))
            {
                for (p_57 = 0; (p_57 <= 4); p_57 += 1)
                {
                    int i;
                    for (l_96 = 0; (l_96 >= 0); l_96 -= 1)
                    {
                        int i, j, k;
                        (*l_63) = &l_100[l_96];
                        g_81[(p_59 + 5)][(l_96 + 6)][(p_59 + 3)] = (g_81[(p_57 + 2)][(p_57 + 2)][(l_96 + 1)] != ((void*)0 == &g_85));
                    }
                    return l_100[p_57];
                }
                for (p_57 = 0; p_57 < 7; p_57 += 1)
                {
                    for (l_99 = 0; l_99 < 8; l_99 += 1)
                    {
                        for (l_96 = 0; l_96 < 4; l_96 += 1)
                        {
                            g_81[p_57][l_99][l_96] = (-6L);
                        }
                    }
                }
            }
            else
            {
                g_81[6][5][1] = l_94;
            }
        }
        for (l_96 = 0; (l_96 >= 0); l_96 -= 1)
        {
            l_104[3][2] = (*l_76);
            return (**l_63);
        }
    }
    return l_105;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_12[i], "g_12[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_81[i][j][k], "g_81[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_121.f0, "g_121.f0", print_hash_value);
    transparent_crc(g_121.f1, "g_121.f1", print_hash_value);
    transparent_crc(g_121.f2, "g_121.f2", print_hash_value);
    transparent_crc(g_121.f3, "g_121.f3", print_hash_value);
    transparent_crc(g_121.f4, "g_121.f4", print_hash_value);
    transparent_crc(g_121.f5, "g_121.f5", print_hash_value);
    transparent_crc(g_121.f6, "g_121.f6", print_hash_value);
    transparent_crc(g_121.f7, "g_121.f7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_123[i].f0, "g_123[i].f0", print_hash_value);
        transparent_crc(g_123[i].f1, "g_123[i].f1", print_hash_value);
        transparent_crc(g_123[i].f2, "g_123[i].f2", print_hash_value);
        transparent_crc(g_123[i].f3, "g_123[i].f3", print_hash_value);
        transparent_crc(g_123[i].f4, "g_123[i].f4", print_hash_value);
        transparent_crc(g_123[i].f5, "g_123[i].f5", print_hash_value);
        transparent_crc(g_123[i].f6, "g_123[i].f6", print_hash_value);
        transparent_crc(g_123[i].f7, "g_123[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_166[i][j].f0, "g_166[i][j].f0", print_hash_value);
            transparent_crc(g_166[i][j].f1, "g_166[i][j].f1", print_hash_value);
            transparent_crc(g_166[i][j].f2, "g_166[i][j].f2", print_hash_value);
            transparent_crc(g_166[i][j].f3, "g_166[i][j].f3", print_hash_value);
            transparent_crc(g_166[i][j].f4, "g_166[i][j].f4", print_hash_value);
            transparent_crc(g_166[i][j].f5, "g_166[i][j].f5", print_hash_value);
            transparent_crc(g_166[i][j].f6, "g_166[i][j].f6", print_hash_value);
            transparent_crc(g_166[i][j].f7, "g_166[i][j].f7", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_180.f0, "g_180.f0", print_hash_value);
    transparent_crc(g_180.f1, "g_180.f1", print_hash_value);
    transparent_crc(g_180.f2, "g_180.f2", print_hash_value);
    transparent_crc(g_180.f3, "g_180.f3", print_hash_value);
    transparent_crc(g_180.f4, "g_180.f4", print_hash_value);
    transparent_crc(g_180.f5, "g_180.f5", print_hash_value);
    transparent_crc(g_180.f6, "g_180.f6", print_hash_value);
    transparent_crc(g_180.f7, "g_180.f7", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_257.f0, "g_257.f0", print_hash_value);
    transparent_crc(g_257.f1, "g_257.f1", print_hash_value);
    transparent_crc(g_257.f2, "g_257.f2", print_hash_value);
    transparent_crc(g_257.f3, "g_257.f3", print_hash_value);
    transparent_crc(g_288.f0, "g_288.f0", print_hash_value);
    transparent_crc(g_288.f1, "g_288.f1", print_hash_value);
    transparent_crc(g_288.f2, "g_288.f2", print_hash_value);
    transparent_crc(g_288.f3, "g_288.f3", print_hash_value);
    transparent_crc(g_331.f0, "g_331.f0", print_hash_value);
    transparent_crc(g_331.f1, "g_331.f1", print_hash_value);
    transparent_crc(g_331.f2, "g_331.f2", print_hash_value);
    transparent_crc(g_331.f3, "g_331.f3", print_hash_value);
    transparent_crc(g_331.f4, "g_331.f4", print_hash_value);
    transparent_crc(g_331.f5, "g_331.f5", print_hash_value);
    transparent_crc(g_331.f6, "g_331.f6", print_hash_value);
    transparent_crc(g_331.f7, "g_331.f7", print_hash_value);
    transparent_crc(g_337.f0, "g_337.f0", print_hash_value);
    transparent_crc(g_337.f1, "g_337.f1", print_hash_value);
    transparent_crc(g_337.f2, "g_337.f2", print_hash_value);
    transparent_crc(g_337.f3, "g_337.f3", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_492.f0, "g_492.f0", print_hash_value);
    transparent_crc(g_492.f1, "g_492.f1", print_hash_value);
    transparent_crc(g_492.f2, "g_492.f2", print_hash_value);
    transparent_crc(g_492.f3, "g_492.f3", print_hash_value);
    transparent_crc(g_523.f0, "g_523.f0", print_hash_value);
    transparent_crc(g_523.f1, "g_523.f1", print_hash_value);
    transparent_crc(g_523.f2, "g_523.f2", print_hash_value);
    transparent_crc(g_523.f3, "g_523.f3", print_hash_value);
    transparent_crc(g_523.f4, "g_523.f4", print_hash_value);
    transparent_crc(g_523.f5, "g_523.f5", print_hash_value);
    transparent_crc(g_523.f6, "g_523.f6", print_hash_value);
    transparent_crc(g_523.f7, "g_523.f7", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_625[i][j][k], "g_625[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_647[i][j].f0, "g_647[i][j].f0", print_hash_value);
            transparent_crc(g_647[i][j].f1, "g_647[i][j].f1", print_hash_value);
            transparent_crc(g_647[i][j].f2, "g_647[i][j].f2", print_hash_value);
            transparent_crc(g_647[i][j].f3, "g_647[i][j].f3", print_hash_value);
            transparent_crc(g_647[i][j].f4, "g_647[i][j].f4", print_hash_value);
            transparent_crc(g_647[i][j].f5, "g_647[i][j].f5", print_hash_value);
            transparent_crc(g_647[i][j].f6, "g_647[i][j].f6", print_hash_value);
            transparent_crc(g_647[i][j].f7, "g_647[i][j].f7", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_676[i][j][k].f0, "g_676[i][j][k].f0", print_hash_value);
                transparent_crc(g_676[i][j][k].f1, "g_676[i][j][k].f1", print_hash_value);
                transparent_crc(g_676[i][j][k].f2, "g_676[i][j][k].f2", print_hash_value);
                transparent_crc(g_676[i][j][k].f3, "g_676[i][j][k].f3", print_hash_value);
                transparent_crc(g_676[i][j][k].f4, "g_676[i][j][k].f4", print_hash_value);
                transparent_crc(g_676[i][j][k].f5, "g_676[i][j][k].f5", print_hash_value);
                transparent_crc(g_676[i][j][k].f6, "g_676[i][j][k].f6", print_hash_value);
                transparent_crc(g_676[i][j][k].f7, "g_676[i][j][k].f7", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_726, "g_726", print_hash_value);
    transparent_crc(g_840.f0, "g_840.f0", print_hash_value);
    transparent_crc(g_840.f1, "g_840.f1", print_hash_value);
    transparent_crc(g_840.f2, "g_840.f2", print_hash_value);
    transparent_crc(g_840.f3, "g_840.f3", print_hash_value);
    transparent_crc(g_848, "g_848", print_hash_value);
    transparent_crc(g_906.f0, "g_906.f0", print_hash_value);
    transparent_crc(g_906.f1, "g_906.f1", print_hash_value);
    transparent_crc(g_906.f2, "g_906.f2", print_hash_value);
    transparent_crc(g_906.f3, "g_906.f3", print_hash_value);
    transparent_crc(g_916.f0, "g_916.f0", print_hash_value);
    transparent_crc(g_916.f1, "g_916.f1", print_hash_value);
    transparent_crc(g_916.f2, "g_916.f2", print_hash_value);
    transparent_crc(g_916.f3, "g_916.f3", print_hash_value);
    transparent_crc(g_930, "g_930", print_hash_value);
    transparent_crc(g_967.f0, "g_967.f0", print_hash_value);
    transparent_crc(g_967.f1, "g_967.f1", print_hash_value);
    transparent_crc(g_967.f2, "g_967.f2", print_hash_value);
    transparent_crc(g_967.f3, "g_967.f3", print_hash_value);
    transparent_crc(g_967.f4, "g_967.f4", print_hash_value);
    transparent_crc(g_967.f5, "g_967.f5", print_hash_value);
    transparent_crc(g_967.f6, "g_967.f6", print_hash_value);
    transparent_crc(g_967.f7, "g_967.f7", print_hash_value);
    transparent_crc(g_980.f0, "g_980.f0", print_hash_value);
    transparent_crc(g_980.f1, "g_980.f1", print_hash_value);
    transparent_crc(g_980.f2, "g_980.f2", print_hash_value);
    transparent_crc(g_980.f3, "g_980.f3", print_hash_value);
    transparent_crc(g_998, "g_998", print_hash_value);
    transparent_crc(g_1004, "g_1004", print_hash_value);
    transparent_crc(g_1006.f0, "g_1006.f0", print_hash_value);
    transparent_crc(g_1006.f1, "g_1006.f1", print_hash_value);
    transparent_crc(g_1006.f2, "g_1006.f2", print_hash_value);
    transparent_crc(g_1006.f3, "g_1006.f3", print_hash_value);
    transparent_crc(g_1006.f4, "g_1006.f4", print_hash_value);
    transparent_crc(g_1006.f5, "g_1006.f5", print_hash_value);
    transparent_crc(g_1006.f6, "g_1006.f6", print_hash_value);
    transparent_crc(g_1006.f7, "g_1006.f7", print_hash_value);
    transparent_crc(g_1007, "g_1007", print_hash_value);
    transparent_crc(g_1027, "g_1027", print_hash_value);
    transparent_crc(g_1044.f0, "g_1044.f0", print_hash_value);
    transparent_crc(g_1044.f1, "g_1044.f1", print_hash_value);
    transparent_crc(g_1044.f2, "g_1044.f2", print_hash_value);
    transparent_crc(g_1044.f3, "g_1044.f3", print_hash_value);
    transparent_crc(g_1044.f4, "g_1044.f4", print_hash_value);
    transparent_crc(g_1044.f5, "g_1044.f5", print_hash_value);
    transparent_crc(g_1044.f6, "g_1044.f6", print_hash_value);
    transparent_crc(g_1044.f7, "g_1044.f7", print_hash_value);
    transparent_crc(g_1063.f0, "g_1063.f0", print_hash_value);
    transparent_crc(g_1063.f1, "g_1063.f1", print_hash_value);
    transparent_crc(g_1063.f2, "g_1063.f2", print_hash_value);
    transparent_crc(g_1063.f3, "g_1063.f3", print_hash_value);
    transparent_crc(g_1063.f4, "g_1063.f4", print_hash_value);
    transparent_crc(g_1063.f5, "g_1063.f5", print_hash_value);
    transparent_crc(g_1063.f6, "g_1063.f6", print_hash_value);
    transparent_crc(g_1063.f7, "g_1063.f7", print_hash_value);
    transparent_crc(g_1064.f0, "g_1064.f0", print_hash_value);
    transparent_crc(g_1064.f1, "g_1064.f1", print_hash_value);
    transparent_crc(g_1064.f2, "g_1064.f2", print_hash_value);
    transparent_crc(g_1064.f3, "g_1064.f3", print_hash_value);
    transparent_crc(g_1064.f4, "g_1064.f4", print_hash_value);
    transparent_crc(g_1064.f5, "g_1064.f5", print_hash_value);
    transparent_crc(g_1064.f6, "g_1064.f6", print_hash_value);
    transparent_crc(g_1064.f7, "g_1064.f7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
