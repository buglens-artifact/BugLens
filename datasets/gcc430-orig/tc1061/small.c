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
   short f1;
   volatile long long f2;
   unsigned long long f3;
   char f4;
   int f5;
   short f6;
};

union U1 {
   volatile unsigned f0;
   struct S0 f1;
   volatile short f2;
};

union U2 {
   volatile char f0;
   unsigned long long f1;
};

union U3 {
   unsigned f0;
   volatile struct S0 f1;
   volatile struct S0 f2;
};

union U4 {
   const volatile int f0;
   volatile long long f1;
};

union U5 {
   unsigned f0;
   struct S0 f1;
   const volatile unsigned long long f2;
   unsigned short f3;
   unsigned short f4;
};


static unsigned long long g_11 = 2UL;
static const int g_16 = 0x9E3D3B0CL;
static int g_18 = 0x21F7D967L;
static int g_28 = 0xB64B6930L;
static int *g_27 = &g_28;
static union U2 g_63 = {0x33L};
static char g_80 = 0x16L;
static long long g_99 = 0x3DEF573153ED870BLL;
static long long g_103 = (-2L);
static union U4 g_109 = {-1L};
static short g_115 = 0x3783L;
static const struct S0 g_118 = {9UL,-9L,0x6F6B910F8796DE13LL,0xA9B92FD598C55CA0LL,0xA2L,-10L,0x8C64L};
static struct S0 g_120 = {0xA172C137L,8L,-8L,0x3BD055D51B5D7EC3LL,-1L,0x25B48F27L,3L};
static struct S0 g_121 = {1UL,0xB79DL,1L,0x1715C7436F42B88BLL,0x7CL,0x67D5F259L,0xC119L};
static union U2 **g_131 = (void*)0;
static unsigned char g_139 = 0UL;
static struct S0 g_145[10] = {{0xCD19B671L,1L,0x9F78EB292015BDF5LL,0x5002FA5D717EF146LL,0x44L,0x23B8D9BCL,0x39D2L}, {0xCD19B671L,1L,0x9F78EB292015BDF5LL,0x5002FA5D717EF146LL,0x44L,0x23B8D9BCL,0x39D2L}, {0xCD19B671L,1L,0x9F78EB292015BDF5LL,0x5002FA5D717EF146LL,0x44L,0x23B8D9BCL,0x39D2L}, {0xCD19B671L,1L,0x9F78EB292015BDF5LL,0x5002FA5D717EF146LL,0x44L,0x23B8D9BCL,0x39D2L}, {0xCD19B671L,1L,0x9F78EB292015BDF5LL,0x5002FA5D717EF146LL,0x44L,0x23B8D9BCL,0x39D2L}, {0xCD19B671L,1L,0x9F78EB292015BDF5LL,0x5002FA5D717EF146LL,0x44L,0x23B8D9BCL,0x39D2L}, {0xCD19B671L,1L,0x9F78EB292015BDF5LL,0x5002FA5D717EF146LL,0x44L,0x23B8D9BCL,0x39D2L}, {0xCD19B671L,1L,0x9F78EB292015BDF5LL,0x5002FA5D717EF146LL,0x44L,0x23B8D9BCL,0x39D2L}, {0xCD19B671L,1L,0x9F78EB292015BDF5LL,0x5002FA5D717EF146LL,0x44L,0x23B8D9BCL,0x39D2L}, {0xCD19B671L,1L,0x9F78EB292015BDF5LL,0x5002FA5D717EF146LL,0x44L,0x23B8D9BCL,0x39D2L}};
static union U1 g_155 = {0x40006811L};
static unsigned char *g_161 = &g_139;
static unsigned char **g_160 = &g_161;
static union U2 *g_180 = &g_63;
static volatile struct S0 g_182[3][7] = {{{18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}}, {{18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}}, {{18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}, {18446744073709551615UL,0xC08DL,0xA12BEBD04F644B9FLL,18446744073709551608UL,0xC2L,0L,0x5A08L}}};
static union U5 g_186 = {0x66566E71L};
static union U5 g_189 = {5UL};
static union U5 *g_188 = &g_189;
static union U4 *g_194 = &g_109;
static union U4 **g_193 = &g_194;
static struct S0 *g_196 = &g_120;
static struct S0 g_197 = {18446744073709551612UL,0xF93BL,2L,18446744073709551615UL,0x6CL,-6L,0L};
static struct S0 g_198 = {1UL,0L,0L,0xA3CFAA44792A7B37LL,0L,1L,0xCB28L};
static union U2 g_251 = {0x2CL};
static union U2 g_252 = {0xB9L};
static union U2 g_253 = {0x0FL};
static union U3 g_259 = {9UL};
static struct S0 g_288 = {2UL,9L,0xABD784E6EA63593ALL,0x38EC8A2884712A33LL,0xAAL,0x2EC7BEB2L,0x36C2L};
static volatile long long g_294 = (-2L);
static struct S0 g_304 = {1UL,0x60CFL,-9L,0xF1C1144BB95E3B4ELL,0xD3L,2L,5L};
static volatile long long *g_338 = &g_182[2][2].f2;
static volatile long long **g_337 = &g_338;
static const int *g_399 = &g_198.f5;
static unsigned g_405 = 0x0F51D359L;
static union U1 *g_429 = (void*)0;
static unsigned char ***g_433 = &g_160;
static const volatile struct S0 g_444[6] = {{0x471B65A9L,0x6FEBL,0x49FBD58D1894A564LL,0UL,-1L,-3L,-3L}, {0x471B65A9L,0x6FEBL,0x49FBD58D1894A564LL,0UL,-1L,-3L,-3L}, {0x695FC4E5L,0x5396L,-1L,1UL,0x81L,-4L,1L}, {0x471B65A9L,0x6FEBL,0x49FBD58D1894A564LL,0UL,-1L,-3L,-3L}, {0x471B65A9L,0x6FEBL,0x49FBD58D1894A564LL,0UL,-1L,-3L,-3L}, {0x695FC4E5L,0x5396L,-1L,1UL,0x81L,-4L,1L}};
static const struct S0 g_447 = {1UL,0x19B2L,-6L,0xB39EDF9B02AEB8FDLL,0xB3L,0x3EEA663EL,0x93BDL};
static volatile unsigned short g_477[5] = {65531UL, 65531UL, 65531UL, 65531UL, 65531UL};
static volatile unsigned short *g_476 = &g_477[2];
static volatile struct S0 g_478 = {0xA98DE215L,1L,0L,0UL,0L,0xF287F9BCL,0L};
static volatile struct S0 g_479[3] = {{0x3A5177CFL,-2L,-2L,0xEB1B3BD9BB61147DLL,7L,0xE0B50C69L,0x5E61L}, {0x3A5177CFL,-2L,-2L,0xEB1B3BD9BB61147DLL,7L,0xE0B50C69L,0x5E61L}, {0x3A5177CFL,-2L,-2L,0xEB1B3BD9BB61147DLL,7L,0xE0B50C69L,0x5E61L}};
static struct S0 g_496 = {8UL,0x00C7L,-2L,18446744073709551608UL,0x35L,7L,-4L};
static volatile struct S0 g_506 = {7UL,0x6AFCL,0L,0x85D5D54A946F482BLL,-1L,1L,1L};
static union U1 g_527 = {9UL};
static union U1 g_528 = {4294967291UL};
static union U1 g_529 = {4294967295UL};
static int **g_575 = &g_27;
static volatile struct S0 g_579 = {18446744073709551609UL,-8L,-1L,0xE4CC57741067DA67LL,0x00L,0L,-3L};
static const union U5 g_601 = {0UL};
static volatile struct S0 g_620 = {0UL,-5L,0x8DA0FDF9A714B071LL,0xBB40CF64BA935297LL,0x7EL,-1L,0x438FL};
static struct S0 g_621[10] = {{18446744073709551615UL,0x4D82L,0x0AB128351B1CD861LL,0xEFA6CD630E2F97B7LL,3L,1L,-5L}, {3UL,-1L,-1L,0xF7A8F2237D18402DLL,0xE9L,1L,0x1AD4L}, {18446744073709551615UL,0x4D82L,0x0AB128351B1CD861LL,0xEFA6CD630E2F97B7LL,3L,1L,-5L}, {3UL,-1L,-1L,0xF7A8F2237D18402DLL,0xE9L,1L,0x1AD4L}, {18446744073709551615UL,0x4D82L,0x0AB128351B1CD861LL,0xEFA6CD630E2F97B7LL,3L,1L,-5L}, {3UL,-1L,-1L,0xF7A8F2237D18402DLL,0xE9L,1L,0x1AD4L}, {18446744073709551615UL,0x4D82L,0x0AB128351B1CD861LL,0xEFA6CD630E2F97B7LL,3L,1L,-5L}, {3UL,-1L,-1L,0xF7A8F2237D18402DLL,0xE9L,1L,0x1AD4L}, {18446744073709551615UL,0x4D82L,0x0AB128351B1CD861LL,0xEFA6CD630E2F97B7LL,3L,1L,-5L}, {3UL,-1L,-1L,0xF7A8F2237D18402DLL,0xE9L,1L,0x1AD4L}};
static struct S0 g_622 = {18446744073709551615UL,1L,3L,1UL,0xE4L,1L,4L};
static char *g_624 = &g_80;
static char **g_623 = &g_624;
static volatile struct S0 g_653 = {0x6079EBA8L,0xFE93L,-5L,6UL,0L,0x1A6D681EL,0x4EDDL};
static const volatile struct S0 g_684 = {2UL,-10L,1L,0x96ADD63482E6B681LL,0x22L,0x2F4FD9F0L,5L};
static unsigned g_694[3] = {8UL, 8UL, 8UL};
static volatile struct S0 g_707 = {0xC9CD3A57L,0L,1L,0UL,0xDAL,0L,-1L};
static const union U3 g_719[6] = {{0x955FB34FL}, {0x955FB34FL}, {0x2D11B901L}, {0x955FB34FL}, {0x955FB34FL}, {0x2D11B901L}};
static const union U3 g_721 = {1UL};
static union U2 g_736[7] = {{0x80L}, {0x80L}, {0x80L}, {0x80L}, {0x80L}, {0x80L}, {0x80L}};
static union U3 *g_771 = &g_259;
static union U3 **g_770[8] = {&g_771, (void*)0, &g_771, (void*)0, &g_771, (void*)0, &g_771, (void*)0};
static struct S0 g_774[2][6] = {{{0xA793D4C5L,0L,0xAF57550756F9084BLL,0UL,0xA1L,1L,-1L}, {1UL,0x4F1AL,0x8F54CC146F6EAB7CLL,0UL,-9L,0x40F171D2L,0xC363L}, {0x2CEBB9E5L,-6L,1L,0UL,0xA8L,0L,0x81D2L}, {1UL,0x4F1AL,0x8F54CC146F6EAB7CLL,0UL,-9L,0x40F171D2L,0xC363L}, {0xA793D4C5L,0L,0xAF57550756F9084BLL,0UL,0xA1L,1L,-1L}, {0x78BBBA5FL,0x2A68L,0x60C1C72D7D9BB058LL,0UL,0x1EL,0x221BCD7EL,0x84F1L}}, {{0xA793D4C5L,0L,0xAF57550756F9084BLL,0UL,0xA1L,1L,-1L}, {1UL,0x4F1AL,0x8F54CC146F6EAB7CLL,0UL,-9L,0x40F171D2L,0xC363L}, {0x2CEBB9E5L,-6L,1L,0UL,0xA8L,0L,0x81D2L}, {1UL,0x4F1AL,0x8F54CC146F6EAB7CLL,0UL,-9L,0x40F171D2L,0xC363L}, {0xA793D4C5L,0L,0xAF57550756F9084BLL,0UL,0xA1L,1L,-1L}, {0x78BBBA5FL,0x2A68L,0x60C1C72D7D9BB058LL,0UL,0x1EL,0x221BCD7EL,0x84F1L}}};
static struct S0 g_775 = {18446744073709551615UL,0x6F2CL,-1L,18446744073709551615UL,0x1EL,0xB671592AL,-1L};
static union U1 **g_798 = &g_429;
static union U1 ***g_797 = &g_798;
static char g_804 = (-5L);
static int * const g_821 = &g_774[1][2].f5;
static struct S0 g_831[1] = {{1UL,0x730AL,-1L,4UL,0xDEL,0x8BE51E7CL,-1L}};
static const union U3 g_856[3][3][2] = {{{{1UL}, {18446744073709551610UL}}, {{1UL}, {18446744073709551610UL}}, {{1UL}, {18446744073709551610UL}}}, {{{1UL}, {18446744073709551610UL}}, {{1UL}, {18446744073709551610UL}}, {{1UL}, {18446744073709551610UL}}}, {{{1UL}, {18446744073709551610UL}}, {{1UL}, {18446744073709551610UL}}, {{1UL}, {18446744073709551610UL}}}};
static union U3 ***g_859[2][6] = {{&g_770[5], &g_770[3], &g_770[5], &g_770[3], &g_770[5], &g_770[3]}, {&g_770[5], &g_770[3], &g_770[5], &g_770[3], &g_770[5], &g_770[3]}};
static unsigned char g_867 = 5UL;



static int func_1(void);
static int * func_2(int * p_3, char p_4);
static int * func_5(int * p_6);
static int * func_7(unsigned short p_8, unsigned p_9, unsigned p_10);
static unsigned char func_21(unsigned p_22, int * p_23, unsigned p_24, int * p_25);
static union U2 * func_33(int * p_34, unsigned p_35, union U2 * p_36, unsigned short p_37, union U2 * p_38);
static union U2 * func_39(union U2 * p_40);
static union U2 * func_41(int p_42, unsigned short p_43, const unsigned long long p_44);
static int func_54(int * p_55, unsigned long long p_56, union U2 * p_57);
static long long func_64(union U2 ** p_65, unsigned char p_66, int ** p_67, unsigned short p_68);
static int func_1(void)
{
    unsigned l_12[2];
    char *l_769 = &g_304.f4;
    int i;
    for (i = 0; i < 2; i++)
        l_12[i] = 0x124DC41FL;
    (*g_575) = func_2(func_5(func_7(g_11, g_11, l_12[0])), ((*l_769) = (safe_rshift_func_uint16_t_u_s(l_12[1], 10))));
    return g_867;
}







static int * func_2(int * p_3, char p_4)
{
    union U3 ***l_772[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
    const unsigned char *l_778 = &g_139;
    const unsigned char **l_777[5];
    const unsigned char ***l_776 = &l_777[3];
    const unsigned char ****l_779 = (void*)0;
    const unsigned char ****l_780 = &l_776;
    const unsigned char ***l_782[10] = {&l_777[1], &l_777[1], &l_777[1], &l_777[1], &l_777[1], &l_777[1], &l_777[1], &l_777[1], &l_777[1], &l_777[1]};
    const unsigned char ****l_781 = &l_782[8];
    int l_791 = 6L;
    int l_793 = 0x17B56CCAL;
    const union U1 *l_796 = &g_528;
    const union U1 * const *l_795 = &l_796;
    const union U1 * const **l_794 = &l_795;
    union U1 ***l_801 = &g_798;
    long long l_802 = 1L;
    unsigned l_814 = 0x4751D6D5L;
    int l_819 = 0L;
    union U2 **l_820 = &g_180;
    int i;
    for (i = 0; i < 5; i++)
        l_777[i] = &l_778;
    if (((g_770[1] = g_770[3]) == &g_771))
    {
        (*g_575) = p_3;
    }
    else
    {
        for (g_109.f1 = 0; g_109.f1 < 7; g_109.f1 += 1)
        {
            l_772[g_109.f1] = &g_770[3];
        }
        for (g_288.f6 = 9; (g_288.f6 >= 1); g_288.f6 -= 1)
        {
            int *l_773 = &g_18;
            return l_773;
        }
        (*p_3) = (*p_3);
        (*p_3) = 0xF616F391L;
    }
    g_775 = g_774[1][2];
    if ((((*l_781) = ((*l_780) = l_776)) == &g_160))
    {
        short *l_789 = &g_189.f1.f1;
        short *l_790[3][2];
        union U1 ****l_799 = (void*)0;
        union U1 ****l_800[10][3] = {{&g_797, &g_797, (void*)0}, {&g_797, &g_797, (void*)0}, {&g_797, &g_797, (void*)0}, {&g_797, &g_797, (void*)0}, {&g_797, &g_797, (void*)0}, {&g_797, &g_797, (void*)0}, {&g_797, &g_797, (void*)0}, {&g_797, &g_797, (void*)0}, {&g_797, &g_797, (void*)0}, {&g_797, &g_797, (void*)0}};
        int l_803[2];
        union U2 *l_809 = (void*)0;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_790[i][j] = &g_622.f6;
        }
        for (i = 0; i < 2; i++)
            l_803[i] = 0L;
        l_803[0] = ((*p_3) = ((safe_lshift_func_int8_t_s_u(((**g_623) = p_4), ((safe_div_func_int16_t_s_s((l_791 = ((*l_789) = 6L)), 1UL)) <= ((safe_unary_minus_func_uint32_t_u((4L >= l_793))) < p_4)))) | ((g_804 = (((*g_161) = ((l_794 != (l_801 = g_797)) >= ((l_802 == l_793) >= g_118.f3))) ^ l_803[1])) && (***g_433))));
        (*g_575) = &l_793;
        g_180 = func_33(p_3, ((((safe_div_func_int16_t_s_s(0L, (~(*g_476)))) > g_145[4].f5) | 0x21L) & (safe_add_func_int8_t_s_s(l_803[1], (*g_624)))), l_809, (safe_rshift_func_uint16_t_u_s(g_622.f5, 15)), l_809);
    }
    else
    {
        int l_812 = 0x9B294A87L;
        long long *l_813 = &g_99;
        int l_815[2][6] = {{0x92DE224DL, 0L, 0xD38649FCL, 0xD38649FCL, 0L, 0x92DE224DL}, {0x92DE224DL, 0L, 0xD38649FCL, 0xD38649FCL, 0L, 0x92DE224DL}};
        unsigned short *l_816 = &g_189.f3;
        union U1 **l_833[6] = {&g_429, &g_429, &g_429, &g_429, &g_429, &g_429};
        int i, j;
        if (l_819)
        {
            int **l_822 = (void*)0;
            int **l_823 = &g_27;
            short *l_839 = (void*)0;
            int l_842[1];
            const union U3 *l_855 = &g_856[1][1][0];
            const union U3 **l_854 = &l_855;
            const union U3 ***l_853 = &l_854;
            union U3 ***l_857[2];
            union U3 ****l_858[2][1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_842[i] = 0xE3E88606L;
            for (i = 0; i < 2; i++)
                l_857[i] = &g_770[1];
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_858[i][j] = &l_772[5];
            }
            (*l_823) = g_821;
            for (g_288.f5 = 0; (g_288.f5 >= (-13)); g_288.f5 = safe_sub_func_int32_t_s_s(g_288.f5, 5))
            {
                short *l_832 = &g_528.f1.f6;
                long long ** const l_838 = (void*)0;
                for (g_496.f4 = 0; (g_496.f4 <= 4); g_496.f4 += 1)
                {
                    for (g_288.f0 = 0; (g_288.f0 <= 4); g_288.f0 += 1)
                    {
                        const int l_830 = 0L;
                        int i;
                        (*g_821) = (safe_add_func_int64_t_s_s(g_477[g_288.f0], (((safe_mod_func_uint32_t_u_u(0xD4048716L, l_830)) <= p_4) || (((*g_27) & (*p_3)) > (&p_4 == &p_4)))));
                        if ((**g_575))
                            break;
                        (*g_196) = g_831[0];
                        (*l_823) = &l_819;
                    }
                }
                (*l_820) = func_41(p_4, ((**g_623) ^ ((***g_433) = (!(((*l_832) = l_812) != ((((**g_337) | g_405) < ((*g_797) != l_833[1])) < l_814))))), g_118.f1);
                (*p_3) = (safe_add_func_uint64_t_u_u((((safe_lshift_func_int16_t_s_u(0x27D7L, func_21((l_838 == &g_338), p_3, g_120.f0, &l_793))) ^ (g_601.f0 < ((((g_622.f4 || 0x18723D5F99014E73LL) ^ g_831[0].f5) ^ p_4) && g_304.f1))) <= l_802), 0UL));
                (*l_823) = p_3;
            }
            (*p_3) = (((g_775.f1 = l_815[1][2]) > ((safe_rshift_func_uint8_t_u_u((*g_161), (((*g_476) | (~1UL)) > p_4))) <= (*g_821))) >= l_842[0]);
            l_812 = (safe_add_func_int32_t_s_s((*p_3), (safe_div_func_int32_t_s_s(((*g_821) = (safe_add_func_uint64_t_u_u(((p_4 <= p_4) || ((((g_694[1] >= (l_819 = 0xAAFA27A1BFF1C627LL)) ^ (*g_338)) == (safe_mul_func_int8_t_s_s((l_853 != (g_859[0][3] = l_857[0])), (p_4 && 0L)))) > (-1L))), 5L))), p_4))));
        }
        else
        {
            unsigned char l_866 = 246UL;
            l_866 = ((*g_821) = (0UL != (safe_div_func_int64_t_s_s((safe_mod_func_int8_t_s_s(((*p_3) > 6UL), (safe_rshift_func_uint8_t_u_u((***g_433), p_4)))), (**g_337)))));
            return p_3;
        }
        (*g_575) = (*g_575);
    }
    (**g_575) = 1L;
    return p_3;
}







static int * func_5(int * p_6)
{
    int *l_752 = &g_145[4].f5;
    for (g_304.f3 = 4; (g_304.f3 >= 20); g_304.f3++)
    {
        int *l_751 = &g_120.f5;
        int l_753[3];
        long long *l_766 = &g_103;
        int i;
        for (i = 0; i < 3; i++)
            l_753[i] = (-1L);
        (*g_575) = l_751;
        (*g_575) = l_752;
        (*g_575) = (*g_575);
        (*l_751) = ((**g_575) = (l_753[1] == (g_189.f1.f3 = (safe_mul_func_int16_t_s_s((g_120.f4 == ((safe_sub_func_int16_t_s_s((((**g_623) = ((*l_752) | (!(*l_752)))) == (safe_sub_func_uint32_t_u_u((*l_752), ((safe_div_func_uint64_t_u_u(18446744073709551615UL, (*l_752))) <= (((safe_add_func_uint64_t_u_u(((*g_338) >= ((*l_766) = (*l_752))), 1UL)) != (*l_752)) && (*l_752)))))), 0x57D2L)) <= 0L)), (*l_751))))));
    }
    return l_752;
}







static int * func_7(unsigned short p_8, unsigned p_9, unsigned p_10)
{
    const int *l_15 = &g_16;
    int *l_26 = (void*)0;
    union U2 ***l_703 = &g_131;
    union U2 *l_735 = &g_736[1];
    if (p_9)
    {
        int *l_17 = &g_18;
        long long l_657 = 0x25A58B6C9D207CD3LL;
        unsigned short *l_696 = &g_186.f3;
        const union U3 *l_720 = &g_721;
        union U3 *l_722 = &g_259;
        union U2 **l_725 = &g_180;
        union U4 **l_726[8];
        int i;
        for (i = 0; i < 8; i++)
            l_726[i] = &g_194;
        if ((safe_lshift_func_int16_t_s_s(g_11, (((l_15 != (void*)0) | (((*l_17) = p_10) <= ((-10L) & (l_657 = (g_11 == (0x422D5FBA2522ABF7LL | ((safe_mul_func_uint8_t_u_u(func_21(g_16, l_26, g_11, g_27), 0xFFL)) || (**g_623)))))))) < p_10))))
        {
            unsigned short l_664 = 0xD07DL;
            int l_683[2];
            int l_701 = 0x129EF448L;
            int i;
            for (i = 0; i < 2; i++)
                l_683[i] = 3L;
            if ((**g_575))
            {
                long long l_676 = 0xBDD2E197BDA7B8C8LL;
                for (g_528.f1.f6 = 0; (g_528.f1.f6 != (-7)); g_528.f1.f6 = safe_sub_func_int64_t_s_s(g_528.f1.f6, 2))
                {
                    for (g_529.f1.f5 = 0; (g_529.f1.f5 != 9); g_529.f1.f5 = safe_add_func_int8_t_s_s(g_529.f1.f5, 3))
                    {
                        short *l_665[9] = {&g_120.f6, &g_120.f6, &g_622.f1, &g_120.f6, &g_120.f6, &g_622.f1, &g_120.f6, &g_120.f6, &g_622.f1};
                        unsigned long long l_677 = 0x4AFCB5AB9E2DAFB5LL;
                        unsigned long long *l_681[8][7][4] = {{{&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}}, {{&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}}, {{&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}}, {{&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}}, {{&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}}, {{&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}}, {{&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}}, {{&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}, {&g_198.f3, &g_621[4].f3, &g_198.f3, &g_621[4].f3}}};
                        int l_682 = 0xB8BBD448L;
                        int i, j, k;
                        (**g_575) = 0xBEE93BF8L;
                        (*g_27) = ((safe_add_func_int16_t_s_s(((*l_17) = l_664), ((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(0x42L, (((safe_mod_func_uint32_t_u_u((l_676 > p_9), l_677)) & ((g_189.f1.f3 = ((0x16778F55D4BF706ALL >= ((((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((l_682 = ((0x61C9E113L ^ 0x66B73B2EL) != (-7L))))), p_8)) >= (*g_476)) <= g_197.f4) && l_676)) >= p_9)) == 7UL)) > l_683[1]))), g_304.f1)), 3)), g_198.f5)) ^ 1L))) > (**g_575));
                        (**g_575) = p_9;
                        (*g_196) = g_684;
                    }
                }
                for (g_155.f1.f3 = 0; (g_155.f1.f3 > 60); g_155.f1.f3 = safe_add_func_int32_t_s_s(g_155.f1.f3, 4))
                {
                    return l_17;
                }
            }
            else
            {
                unsigned *l_693[5][7][7] = {{{&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}}, {{&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}}, {{&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}}, {{&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}}, {{&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}, {&g_694[1], (void*)0, &g_694[1], &g_694[2], &g_694[1], &g_694[0], &g_694[2]}}};
                int l_695 = 0xCA215E88L;
                int l_699 = 0x254E882AL;
                long long *l_700 = &g_103;
                unsigned long long *l_702 = &g_288.f3;
                int i, j, k;
                (**g_575) = ((*g_27) < (((*l_702) = ((safe_div_func_uint16_t_u_u((~(0x6DL ^ (safe_div_func_uint32_t_u_u((((((l_683[1] < ((*g_338) ^ (((((*l_17) = ((l_695 = (g_197.f1 | l_683[1])) && (l_696 == l_696))) >= ((*l_700) = (!(safe_lshift_func_uint16_t_u_s(((*l_696) = g_118.f5), l_699))))) && l_664) == 0xAAC8C6B5L))) | g_496.f5) ^ (*l_15)) || 0x20L) & p_8), (**g_575))))), 0x3E65L)) | l_701)) ^ 1UL));
            }
            if ((((&g_131 == l_703) < p_9) > ((*l_15) & 1UL)))
            {
                const unsigned long long l_706[7] = {0x298873CB7A9C106ELL, 0x298873CB7A9C106ELL, 0x298873CB7A9C106ELL, 0x298873CB7A9C106ELL, 0x298873CB7A9C106ELL, 0x298873CB7A9C106ELL, 0x298873CB7A9C106ELL};
                union U2 **l_710[3][8][5] = {{{&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}}, {{&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}}, {{&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}, {&g_180, &g_180, (void*)0, &g_180, &g_180}}};
                int *l_724 = &g_288.f5;
                int i, j, k;
                if (((0L < g_684.f2) || ((func_21((0x58L <= (safe_sub_func_uint32_t_u_u(0x8063E04CL, ((*l_17) = ((*g_27) || p_8))))), (*g_575), ((p_9 > 255UL) == l_664), &l_683[1]) || l_683[1]) ^ p_10)))
                {
                    (**g_575) = l_706[5];
                    (*g_575) = (void*)0;
                }
                else
                {
                    int l_712 = 0x2E9B1C8DL;
                    (*g_575) = (*g_575);
                    (*g_196) = g_707;
                    for (g_198.f6 = 19; (g_198.f6 != (-5)); g_198.f6 = safe_sub_func_uint8_t_u_u(g_198.f6, 3))
                    {
                        int ***l_711 = &g_575;
                        (**g_575) = l_712;
                        (**l_711) = (void*)0;
                        return (*g_575);
                    }
                    for (g_527.f1.f3 = 0; (g_527.f1.f3 <= 2); g_527.f1.f3 += 1)
                    {
                        const union U3 *l_718 = &g_719[2];
                        const union U3 **l_717[1][6] = {{(void*)0, &l_718, (void*)0, &l_718, (void*)0, &l_718}};
                        short *l_723 = &g_186.f1.f6;
                        union U4 * const **l_727 = (void*)0;
                        union U4 * const l_730[3] = {(void*)0, (void*)0, (void*)0};
                        union U4 * const *l_729 = &l_730[0];
                        union U4 * const **l_728 = &l_729;
                        union U4 * const *l_732 = &l_730[0];
                        union U4 * const **l_731[9][3] = {{(void*)0, &l_732, (void*)0}, {(void*)0, &l_732, (void*)0}, {(void*)0, &l_732, (void*)0}, {(void*)0, &l_732, (void*)0}, {(void*)0, &l_732, (void*)0}, {(void*)0, &l_732, (void*)0}, {(void*)0, &l_732, (void*)0}, {(void*)0, &l_732, (void*)0}, {(void*)0, &l_732, (void*)0}};
                        union U4 * const l_734 = (void*)0;
                        union U4 * const *l_733 = &l_734;
                        int l_737 = 0x84162759L;
                        int i, j;
                        if (p_8)
                            break;
                    }
                }
            }
            else
            {
                for (p_8 = 0; (p_8 <= 1); p_8 += 1)
                {
                    int *l_738[10][6][4] = {{{(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}}, {{(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}}, {{(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}}, {{(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}}, {{(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}}, {{(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}}, {{(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}}, {{(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}}, {{(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}}, {{(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}, {(void*)0, &l_683[0], &g_288.f5, &g_288.f5}}};
                    int i, j, k;
                    return (*g_575);
                }
                (**g_575) = 4L;
                (*g_575) = l_26;
            }
            return l_17;
        }
        else
        {
            int *l_739[2][5] = {{&g_496.f5, (void*)0, &g_496.f5, (void*)0, &g_496.f5}, {&g_496.f5, (void*)0, &g_496.f5, (void*)0, &g_496.f5}};
            int i, j;
            (*g_27) = (*l_17);
            (*g_575) = l_739[0][1];
        }
    }
    else
    {
        long long l_747 = 1L;
        int *l_748 = &g_145[4].f5;
        for (g_527.f1.f5 = (-13); (g_527.f1.f5 < 8); g_527.f1.f5 = safe_add_func_uint64_t_u_u(g_527.f1.f5, 1))
        {
            unsigned l_742 = 0x8573F65FL;
            (*g_27) = l_742;
        }
        (*l_748) = (safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(func_21((*l_15), (*g_575), g_621[4].f2, (*g_575)), l_747)), 0xF73552D7D8E779ABLL));
        (*g_27) = (&g_131 == (void*)0);
    }
    return l_26;
}







static unsigned char func_21(unsigned p_22, int * p_23, unsigned p_24, int * p_25)
{
    long long l_486 = 0x326D3AFBABC1C822LL;
    union U2 *l_489 = &g_253;
    union U2 ***l_503 = &g_131;
    union U2 ****l_502 = &l_503;
    int *l_510[1];
    union U1 *l_519 = (void*)0;
    union U1 * const l_526[4][9] = {{&g_529, &g_529, &g_528, &g_529, &g_529, &g_528, &g_529, &g_529, &g_528}, {&g_529, &g_529, &g_528, &g_529, &g_529, &g_528, &g_529, &g_529, &g_528}, {&g_529, &g_529, &g_528, &g_529, &g_529, &g_528, &g_529, &g_529, &g_528}, {&g_529, &g_529, &g_528, &g_529, &g_529, &g_528, &g_529, &g_529, &g_528}};
    union U1 * const *l_525 = &l_526[1][3];
    const union U5 *l_602[3];
    unsigned long long l_617 = 1UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_510[i] = &g_155.f1.f5;
    for (i = 0; i < 3; i++)
        l_602[i] = (void*)0;
    if (((*g_27) = ((safe_rshift_func_int16_t_s_u((g_11 | p_24), 15)) != (-4L))))
    {
        union U2 *l_250[2][5] = {{&g_253, &g_253, &g_252, &g_253, &g_253}, {&g_253, &g_253, &g_252, &g_253, &g_253}};
        union U3 *l_504 = (void*)0;
        int i, j;
        for (p_24 = 0; (p_24 < 17); ++p_24)
        {
            char l_47 = 0x7CL;
            const int l_147 = 0x7C478769L;
            union U3 *l_493 = &g_259;
            int l_501[7][2][1] = {{{1L}, {1L}}, {{1L}, {1L}}, {{1L}, {1L}}, {{1L}, {1L}}, {{1L}, {1L}}, {{1L}, {1L}}, {{1L}, {1L}}};
            int i, j, k;
            if ((*g_27))
            {
                int *l_58 = &g_28;
                int **l_59 = (void*)0;
                int **l_60 = &g_27;
                union U2 *l_62 = &g_63;
                union U2 **l_61 = &l_62;
                (*l_61) = func_33(&g_28, p_24, ((*l_61) = func_39(func_41(p_24, (l_47 = (safe_sub_func_int64_t_s_s(6L, p_24))), ((!(safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(func_54(((*l_60) = l_58), g_16, ((*l_61) = (void*)0)), g_118.f5)), p_22)), g_16))) < l_147)))), g_16, l_250[1][1]);
                if ((*p_25))
                {
                    int ***l_487 = (void*)0;
                    int ***l_488 = &l_59;
                    unsigned short *l_490 = &g_186.f4;
                    (*l_58) = (*p_25);
                    if ((*p_25))
                        continue;
                    if (((safe_sub_func_uint16_t_u_u(((void*)0 == l_493), (safe_rshift_func_uint8_t_u_u((***g_433), 5)))) && (0x33C2L <= (p_22 < 1UL))))
                    {
                        return (*g_161);
                    }
                    else
                    {
                        (**l_60) = (*g_399);
                        (*g_196) = g_496;
                        if ((*g_27))
                            continue;
                    }
                }
                else
                {
                    const int **l_497 = &g_399;
                    (*l_60) = &g_28;
                    (*l_497) = &g_16;
                }
            }
            else
            {
                l_501[6][1][0] = (p_22 & (0xC6D0834EL >= (safe_unary_minus_func_uint64_t_u((((*p_25) = (safe_add_func_uint8_t_u_u(0xCDL, 0x40L))) && func_64(&g_180, l_47, &g_27, l_486))))));
                if (l_486)
                    break;
                if (((void*)0 != l_502))
                {
                    l_493 = l_504;
                }
                else
                {
                    const int **l_505 = &g_399;
                    (*l_505) = &g_16;
                    for (g_189.f0 = 0; (g_189.f0 <= 2); g_189.f0 += 1)
                    {
                        int i;
                        (*l_505) = &g_16;
                        return g_477[(g_189.f0 + 1)];
                    }
                }
            }
            (*g_196) = g_506;
        }
        for (g_28 = 0; (g_28 > 10); ++g_28)
        {
            int **l_509[5];
            int i;
            for (i = 0; i < 5; i++)
                l_509[i] = &g_27;
            l_510[0] = p_23;
        }
        l_489 = &g_63;
    }
    else
    {
        union U1 * const *l_523 = &l_519;
        const int l_555 = 0xEE50C0E8L;
        int l_563 = (-1L);
        unsigned long long l_578 = 0UL;
        union U5 *l_654 = &g_189;
        for (g_198.f4 = 0; (g_198.f4 != (-28)); --g_198.f4)
        {
            unsigned *l_520 = &g_189.f0;
            unsigned char l_521[5][5] = {{0xFCL, 0x17L, 0xA0L, 0x17L, 0xFCL}, {0xFCL, 0x17L, 0xA0L, 0x17L, 0xFCL}, {0xFCL, 0x17L, 0xA0L, 0x17L, 0xFCL}, {0xFCL, 0x17L, 0xA0L, 0x17L, 0xFCL}, {0xFCL, 0x17L, 0xA0L, 0x17L, 0xFCL}};
            union U1 **l_522 = (void*)0;
            union U1 * const **l_524[3];
            short *l_530 = &g_198.f6;
            int l_531 = (-1L);
            union U2 **l_541 = &g_180;
            struct S0 *l_564 = &g_496;
            int **l_574 = &g_27;
            union U4 *l_614 = &g_109;
            const int l_652 = 0x523BDCE6L;
            int i, j;
            for (i = 0; i < 3; i++)
                l_524[i] = &l_523;
            l_531 = (safe_mod_func_uint64_t_u_u((safe_div_func_int8_t_s_s((!g_11), 6UL)), (safe_add_func_uint32_t_u_u(((*l_520) = (l_519 == (void*)0)), ((l_521[4][4] > 0x0B76L) != (p_22 <= ((*l_530) = (l_522 != (l_525 = l_523)))))))));
        }
    }
    (*g_575) = p_25;
    return p_24;
}







static union U2 * func_33(int * p_34, unsigned p_35, union U2 * p_36, unsigned short p_37, union U2 * p_38)
{
    union U2 *l_256 = &g_252;
    int l_267 = 0L;
    int **l_355 = (void*)0;
    int l_361 = 0x7D03E1FDL;
    unsigned l_373[4];
    union U1 *l_428 = &g_155;
    short l_472[5][8] = {{1L, 0xAF24L, (-1L), 0xA274L, (-1L), 0xAF24L, 1L, 6L}, {1L, 0xAF24L, (-1L), 0xA274L, (-1L), 0xAF24L, 1L, 6L}, {1L, 0xAF24L, (-1L), 0xA274L, (-1L), 0xAF24L, 1L, 6L}, {1L, 0xAF24L, (-1L), 0xA274L, (-1L), 0xAF24L, 1L, 6L}, {1L, 0xAF24L, (-1L), 0xA274L, (-1L), 0xAF24L, 1L, 6L}};
    int i, j;
    for (i = 0; i < 4; i++)
        l_373[i] = 0x4F7C9AC9L;
    if ((safe_lshift_func_uint16_t_u_u(0UL, 1)))
    {
        return l_256;
    }
    else
    {
        union U3 *l_258 = &g_259;
        union U3 **l_257 = &l_258;
        int l_276[2][7] = {{0x06207C1DL, 0x06207C1DL, 0x1823D53BL, (-1L), 0xA9F4418AL, (-1L), 0x1823D53BL}, {0x06207C1DL, 0x06207C1DL, 0x1823D53BL, (-1L), 0xA9F4418AL, (-1L), 0x1823D53BL}};
        int i, j;
        (*l_257) = (void*)0;
        for (g_197.f3 = 2; (g_197.f3 <= 9); g_197.f3 += 1)
        {
            unsigned l_264[6][2] = {{0UL, 4294967288UL}, {0UL, 4294967288UL}, {0UL, 4294967288UL}, {0UL, 4294967288UL}, {0UL, 4294967288UL}, {0UL, 4294967288UL}};
            int i, j;
        }
        for (g_120.f5 = 0; (g_120.f5 > (-3)); g_120.f5 = safe_sub_func_int32_t_s_s(g_120.f5, 9))
        {
            union U2 **l_312[2][2] = {{&g_180, &l_256}, {&g_180, &l_256}};
            union U2 *l_313 = &g_251;
            int i, j;
            l_313 = p_36;
        }
    }
    for (g_186.f4 = 0; (g_186.f4 <= 9); g_186.f4 += 1)
    {
        short *l_316[8][5] = {{(void*)0, (void*)0, &g_121.f1, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_121.f1, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_121.f1, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_121.f1, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_121.f1, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_121.f1, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_121.f1, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_121.f1, (void*)0, (void*)0}};
        long long l_321 = (-6L);
        unsigned long long *l_322 = &g_288.f3;
        int *l_340 = &g_121.f5;
        union U2 **l_350 = &l_256;
        struct S0 **l_381 = &g_196;
        union U5 *l_395 = (void*)0;
        char l_398 = 0xC8L;
        int i, j;
    }
    return p_36;
}







static union U2 * func_39(union U2 * p_40)
{
    unsigned char **l_164 = (void*)0;
    const union U2 *l_173 = &g_63;
    const union U2 * const *l_172 = &l_173;
    const union U2 * const **l_171 = &l_172;
    int *l_178 = &g_145[4].f5;
    union U5 *l_185 = &g_186;
    union U4 *l_192 = &g_109;
    union U4 **l_191[10];
    struct S0 *l_195 = &g_145[6];
    unsigned short l_217 = 65529UL;
    union U2 **l_223 = &g_180;
    unsigned short *l_226 = (void*)0;
    unsigned long long *l_229 = &g_145[4].f3;
    int i;
    for (i = 0; i < 10; i++)
        l_191[i] = &l_192;
    for (g_80 = 9; (g_80 >= 0); g_80 -= 1)
    {
        unsigned char ***l_162 = (void*)0;
        unsigned char ***l_163 = (void*)0;
        union U1 *l_170 = (void*)0;
        union U1 **l_169 = &l_170;
        char * const l_210 = &g_145[g_80].f4;
        int l_214[9] = {(-5L), 0x33A8AAE3L, (-5L), 0x33A8AAE3L, (-5L), 0x33A8AAE3L, (-5L), 0x33A8AAE3L, (-5L)};
        int **l_218 = &g_27;
        int i;
        l_164 = g_160;
        if ((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((+(*g_161)), (((void*)0 != &g_145[g_80]) < ((void*)0 == l_169)))), ((void*)0 != l_171))))
        {
            unsigned l_176 = 0xE54454DEL;
            long long *l_177 = &g_99;
            if (((*g_27) = (((*l_177) = l_176) != (g_145[4].f3 < ((void*)0 == l_177)))))
            {
                int **l_179 = &g_27;
                (*l_179) = l_178;
                return g_180;
            }
            else
            {
                int **l_181 = &g_27;
                (*l_181) = l_178;
                for (g_155.f1.f5 = 6; (g_155.f1.f5 >= 0); g_155.f1.f5 -= 1)
                {
                    struct S0 *l_184 = &g_145[g_80];
                    int *l_190 = &g_121.f5;
                    for (g_120.f4 = 9; (g_120.f4 >= 1); g_120.f4 -= 1)
                    {
                        volatile struct S0 *l_183 = &g_182[2][6];
                        int i;
                        (*l_183) = g_182[2][2];
                    }
                    (*l_184) = g_145[g_80];
                    if ((*g_27))
                    {
                        union U5 **l_187[9][10][2] = {{{&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}}, {{&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}}, {{&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}}, {{&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}}, {{&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}}, {{&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}}, {{&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}}, {{&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}}, {{&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}, {&l_185, (void*)0}}};
                        int i, j, k;
                        g_188 = l_185;
                        (*l_181) = l_190;
                        g_193 = l_191[3];
                        g_196 = l_195;
                    }
                    else
                    {
                        (*l_181) = l_178;
                        if ((*g_27))
                            continue;
                        g_198 = g_197;
                    }
                }
            }
            if ((*g_27))
                break;
        }
        else
        {
            int *l_199[1];
            union U5 *l_207[1];
            int i;
            for (i = 0; i < 1; i++)
                l_199[i] = &g_145[g_80].f5;
            for (i = 0; i < 1; i++)
                l_207[i] = &g_189;
            for (g_103 = 0; (g_103 <= 2); g_103 += 1)
            {
                int i;
                g_145[(g_103 + 5)] = g_145[(g_103 + 7)];
            }
            for (g_189.f1.f5 = 9; (g_189.f1.f5 >= 1); g_189.f1.f5 -= 1)
            {
                long long *l_206 = (void*)0;
                for (g_99 = 9; (g_99 >= 1); g_99 -= 1)
                {
                    int **l_200 = (void*)0;
                    int **l_201 = &g_27;
                    int **l_202 = (void*)0;
                    int **l_203 = &l_199[0];
                    if (g_145[g_80].f0)
                        break;
                    (*l_203) = ((*l_201) = l_199[0]);
                    for (g_186.f1.f4 = 0; (g_186.f1.f4 <= 9); g_186.f1.f4 += 1)
                    {
                        (*l_203) = &g_28;
                        (*g_27) = (safe_div_func_uint8_t_u_u(0x78L, g_145[g_80].f3));
                    }
                    for (g_197.f5 = 7; (g_197.f5 >= 3); g_197.f5 -= 1)
                    {
                        long long *l_213 = &g_103;
                        int i;
                        l_214[5] = ((**l_201) = ((l_206 != (void*)0) != (((&g_186 == l_207[0]) >= ((*l_213) = (safe_mul_func_int16_t_s_s((l_210 != &g_80), (safe_sub_func_uint8_t_u_u((((((**l_201) >= (*g_161)) == g_145[g_80].f4) & g_118.f5) | 1L), 0x6CL)))))) && 1L)));
                        (*l_195) = g_145[g_197.f5];
                        (*l_203) = l_178;
                    }
                }
            }
            (*l_178) = ((l_214[5] ^ ((*g_161) = ((*l_178) != 0xE470BC13450B3EC0LL))) && g_145[g_80].f1);
            if ((*l_178))
                continue;
        }
        (**l_218) = ((*g_161) | (safe_mul_func_int16_t_s_s(func_64(&g_180, l_217, l_218, (**l_218)), g_198.f3)));
    }
    for (g_139 = 7; (g_139 <= 49); ++g_139)
    {
        int **l_221 = (void*)0;
        int **l_222 = &l_178;
        (*l_222) = l_178;
        (*l_178) = 9L;
    }
    (*l_223) = func_41(func_64(l_223, (*l_178), &l_178, g_197.f4), (g_189.f4 = (safe_rshift_func_uint16_t_u_u(g_120.f1, 4))), g_197.f5);
    if (((*l_178) >= (safe_lshift_func_int8_t_s_u((*l_178), ((*l_178) ^ ((*l_178) >= g_155.f0))))))
    {
        unsigned short l_242 = 0UL;
        union U2 **l_243 = &g_180;
        unsigned char **l_246 = (void*)0;
        int **l_247 = &l_178;
        for (g_189.f1.f3 = 22; (g_189.f1.f3 < 33); ++g_189.f1.f3)
        {
            const int *l_233 = &g_118.f5;
            const int **l_232 = &l_233;
            (*l_232) = &g_16;
            (*g_27) = (+0xFE23BEAFL);
            if ((*g_27))
                break;
            (*l_195) = (*g_196);
        }
        for (g_198.f5 = 0; (g_198.f5 <= 11); g_198.f5++)
        {
            int **l_236 = &l_178;
            char *l_237 = &g_80;
            (*l_236) = (void*)0;
            (*g_27) = (*g_27);
        }
        (*g_27) = l_242;
    }
    else
    {
        int **l_248 = (void*)0;
        int **l_249 = &g_27;
        (*l_249) = &g_28;
    }
    return (*l_223);
}







static union U2 * func_41(int p_42, unsigned short p_43, const unsigned long long p_44)
{
    const int *l_149 = &g_121.f5;
    const int **l_148 = &l_149;
    struct S0 *l_150 = &g_145[4];
    union U2 *l_159 = &g_63;
    (*l_148) = &g_16;
    (*l_150) = g_120;
    for (g_139 = 27; (g_139 < 2); g_139 = safe_sub_func_uint16_t_u_u(g_139, 5))
    {
        const union U1 *l_154 = &g_155;
        const union U1 **l_153 = &l_154;
        union U2 *l_158 = &g_63;
        (*l_150) = (*l_150);
        (*l_153) = (void*)0;
        for (g_155.f1.f3 = 0; (g_155.f1.f3 > 14); ++g_155.f1.f3)
        {
            return l_158;
        }
    }
    return l_159;
}







static int func_54(int * p_55, unsigned long long p_56, union U2 * p_57)
{
    union U2 ***l_69[2];
    union U2 *l_71 = &g_63;
    union U2 **l_70[5][9][5] = {{{&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}}, {{&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}}, {{&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}}, {{&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}}, {{&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}, {&l_71, &l_71, &l_71, (void*)0, &l_71}}};
    const int l_76[1][1] = {{0L}};
    char *l_79 = &g_80;
    short *l_114 = &g_115;
    unsigned long long l_141 = 2UL;
    union U4 *l_144 = &g_109;
    union U4 **l_143 = &l_144;
    struct S0 *l_146[9] = {&g_145[4], (void*)0, &g_145[4], (void*)0, &g_145[4], (void*)0, &g_145[4], (void*)0, &g_145[4]};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_69[i] = (void*)0;
    if ((func_64((l_70[2][1][3] = (void*)0), (safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(l_76[0][0], ((*l_79) = (safe_mul_func_int16_t_s_s(g_11, l_76[0][0]))))), g_28)), &g_27, l_76[0][0]) < (((*l_114) = 0x688EL) > l_76[0][0])))
    {
        long long l_122 = 0x97105BA9186717EFLL;
        int l_125 = 0x8933AC5CL;
        union U2 **l_128[6][1];
        union U4 *l_130[8][9][3] = {{{&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}}, {{&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}}, {{&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}}, {{&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}}, {{&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}}, {{&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}}, {{&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}}, {{&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}, {&g_109, &g_109, &g_109}}};
        union U4 **l_129 = &l_130[1][6][0];
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_128[i][j] = (void*)0;
        }
        for (g_115 = 23; (g_115 > (-20)); g_115 = safe_sub_func_uint64_t_u_u(g_115, 4))
        {
            struct S0 *l_119[9];
            long long *l_123 = &l_122;
            int l_124 = 0x2706CD28L;
            const int *l_127 = &l_124;
            const int **l_126 = &l_127;
            int i;
            for (i = 0; i < 9; i++)
                l_119[i] = &g_120;
            g_121 = g_118;
            l_125 = (+((l_122 && ((*l_123) = (((*p_55) = l_76[0][0]) ^ 0UL))) && (g_120.f6 != l_124)));
            (*l_126) = (void*)0;
        }
        l_128[3][0] = &p_57;
        (*l_129) = &g_109;
        for (g_121.f3 = 0; (g_121.f3 <= 2); g_121.f3 += 1)
        {
            unsigned char *l_138 = (void*)0;
            long long *l_140 = &g_103;
            (*g_27) = (!func_64(g_131, l_76[0][0], &g_27, p_56));
            if ((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(p_56, ((p_56 <= g_121.f4) & (safe_rshift_func_uint8_t_u_s((g_139 = p_56), ((*l_79) = (((*l_140) = p_56) >= (p_56 <= (p_57 != p_57))))))))) != l_141), g_120.f5)))
            {
                int l_142 = 0x9C8F7CEBL;
                return l_142;
            }
            else
            {
                return (*p_55);
            }
        }
    }
    else
    {
        return (*g_27);
    }
    p_57 = (void*)0;
    (*l_143) = &g_109;
    g_121 = g_145[4];
    return (*g_27);
}







static long long func_64(union U2 ** p_65, unsigned char p_66, int ** p_67, unsigned short p_68)
{
    char l_83 = 0x97L;
    long long *l_102 = &g_103;
    int l_105[2][10][2] = {{{0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}}, {{0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}, {0xC7196A48L, 0x152D5F2AL}}};
    int i, j, k;
    (**p_67) = (*g_27);
    for (g_28 = (-18); (g_28 == 9); g_28++)
    {
        long long *l_98 = &g_99;
        int l_104 = 1L;
        union U4 *l_108[3];
        int i;
        for (i = 0; i < 3; i++)
            l_108[i] = &g_109;
        l_83 = 0xA880E1B4L;
        if ((safe_div_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_28, (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((*l_98) = 0xBFD6FFBBA6F2DB44LL) < (-6L)), 0x90L)), (-8L))) >= g_63.f0), (safe_lshift_func_int8_t_s_u((p_68 && ((l_105[1][1][0] = ((l_98 == l_102) != l_104)) == 251UL)), 6)))), g_103)))), l_83)) == 0xE74433A0L), 0x2AE0L)))
        {
            const int *l_107 = (void*)0;
            const int **l_106 = &l_107;
            union U4 **l_110 = &l_108[2];
            (*l_106) = &g_16;
            (*l_110) = l_108[2];
        }
        else
        {
            unsigned char l_111 = 1UL;
            int *l_112 = &l_104;
            union U4 **l_113 = &l_108[0];
            (*l_112) = l_111;
            (*l_113) = l_108[0];
        }
    }
    return g_103;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_118.f0, "g_118.f0", print_hash_value);
    transparent_crc(g_118.f1, "g_118.f1", print_hash_value);
    transparent_crc(g_118.f2, "g_118.f2", print_hash_value);
    transparent_crc(g_118.f3, "g_118.f3", print_hash_value);
    transparent_crc(g_118.f4, "g_118.f4", print_hash_value);
    transparent_crc(g_118.f5, "g_118.f5", print_hash_value);
    transparent_crc(g_118.f6, "g_118.f6", print_hash_value);
    transparent_crc(g_120.f0, "g_120.f0", print_hash_value);
    transparent_crc(g_120.f1, "g_120.f1", print_hash_value);
    transparent_crc(g_120.f2, "g_120.f2", print_hash_value);
    transparent_crc(g_120.f3, "g_120.f3", print_hash_value);
    transparent_crc(g_120.f4, "g_120.f4", print_hash_value);
    transparent_crc(g_120.f5, "g_120.f5", print_hash_value);
    transparent_crc(g_120.f6, "g_120.f6", print_hash_value);
    transparent_crc(g_121.f0, "g_121.f0", print_hash_value);
    transparent_crc(g_121.f1, "g_121.f1", print_hash_value);
    transparent_crc(g_121.f2, "g_121.f2", print_hash_value);
    transparent_crc(g_121.f3, "g_121.f3", print_hash_value);
    transparent_crc(g_121.f4, "g_121.f4", print_hash_value);
    transparent_crc(g_121.f5, "g_121.f5", print_hash_value);
    transparent_crc(g_121.f6, "g_121.f6", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_145[i].f0, "g_145[i].f0", print_hash_value);
        transparent_crc(g_145[i].f1, "g_145[i].f1", print_hash_value);
        transparent_crc(g_145[i].f2, "g_145[i].f2", print_hash_value);
        transparent_crc(g_145[i].f3, "g_145[i].f3", print_hash_value);
        transparent_crc(g_145[i].f4, "g_145[i].f4", print_hash_value);
        transparent_crc(g_145[i].f5, "g_145[i].f5", print_hash_value);
        transparent_crc(g_145[i].f6, "g_145[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_155.f0, "g_155.f0", print_hash_value);
    transparent_crc(g_155.f2, "g_155.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_182[i][j].f0, "g_182[i][j].f0", print_hash_value);
            transparent_crc(g_182[i][j].f1, "g_182[i][j].f1", print_hash_value);
            transparent_crc(g_182[i][j].f2, "g_182[i][j].f2", print_hash_value);
            transparent_crc(g_182[i][j].f3, "g_182[i][j].f3", print_hash_value);
            transparent_crc(g_182[i][j].f4, "g_182[i][j].f4", print_hash_value);
            transparent_crc(g_182[i][j].f5, "g_182[i][j].f5", print_hash_value);
            transparent_crc(g_182[i][j].f6, "g_182[i][j].f6", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_186.f3, "g_186.f3", print_hash_value);
    transparent_crc(g_186.f4, "g_186.f4", print_hash_value);
    transparent_crc(g_189.f3, "g_189.f3", print_hash_value);
    transparent_crc(g_189.f4, "g_189.f4", print_hash_value);
    transparent_crc(g_197.f0, "g_197.f0", print_hash_value);
    transparent_crc(g_197.f1, "g_197.f1", print_hash_value);
    transparent_crc(g_197.f2, "g_197.f2", print_hash_value);
    transparent_crc(g_197.f3, "g_197.f3", print_hash_value);
    transparent_crc(g_197.f4, "g_197.f4", print_hash_value);
    transparent_crc(g_197.f5, "g_197.f5", print_hash_value);
    transparent_crc(g_197.f6, "g_197.f6", print_hash_value);
    transparent_crc(g_198.f0, "g_198.f0", print_hash_value);
    transparent_crc(g_198.f1, "g_198.f1", print_hash_value);
    transparent_crc(g_198.f2, "g_198.f2", print_hash_value);
    transparent_crc(g_198.f3, "g_198.f3", print_hash_value);
    transparent_crc(g_198.f4, "g_198.f4", print_hash_value);
    transparent_crc(g_198.f5, "g_198.f5", print_hash_value);
    transparent_crc(g_198.f6, "g_198.f6", print_hash_value);
    transparent_crc(g_251.f0, "g_251.f0", print_hash_value);
    transparent_crc(g_252.f0, "g_252.f0", print_hash_value);
    transparent_crc(g_253.f0, "g_253.f0", print_hash_value);
    transparent_crc(g_259.f0, "g_259.f0", print_hash_value);
    transparent_crc(g_288.f0, "g_288.f0", print_hash_value);
    transparent_crc(g_288.f1, "g_288.f1", print_hash_value);
    transparent_crc(g_288.f2, "g_288.f2", print_hash_value);
    transparent_crc(g_288.f3, "g_288.f3", print_hash_value);
    transparent_crc(g_288.f4, "g_288.f4", print_hash_value);
    transparent_crc(g_288.f5, "g_288.f5", print_hash_value);
    transparent_crc(g_288.f6, "g_288.f6", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_304.f0, "g_304.f0", print_hash_value);
    transparent_crc(g_304.f1, "g_304.f1", print_hash_value);
    transparent_crc(g_304.f2, "g_304.f2", print_hash_value);
    transparent_crc(g_304.f3, "g_304.f3", print_hash_value);
    transparent_crc(g_304.f4, "g_304.f4", print_hash_value);
    transparent_crc(g_304.f5, "g_304.f5", print_hash_value);
    transparent_crc(g_304.f6, "g_304.f6", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_444[i].f0, "g_444[i].f0", print_hash_value);
        transparent_crc(g_444[i].f1, "g_444[i].f1", print_hash_value);
        transparent_crc(g_444[i].f2, "g_444[i].f2", print_hash_value);
        transparent_crc(g_444[i].f3, "g_444[i].f3", print_hash_value);
        transparent_crc(g_444[i].f4, "g_444[i].f4", print_hash_value);
        transparent_crc(g_444[i].f5, "g_444[i].f5", print_hash_value);
        transparent_crc(g_444[i].f6, "g_444[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_447.f0, "g_447.f0", print_hash_value);
    transparent_crc(g_447.f1, "g_447.f1", print_hash_value);
    transparent_crc(g_447.f2, "g_447.f2", print_hash_value);
    transparent_crc(g_447.f3, "g_447.f3", print_hash_value);
    transparent_crc(g_447.f4, "g_447.f4", print_hash_value);
    transparent_crc(g_447.f5, "g_447.f5", print_hash_value);
    transparent_crc(g_447.f6, "g_447.f6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_477[i], "g_477[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_478.f0, "g_478.f0", print_hash_value);
    transparent_crc(g_478.f1, "g_478.f1", print_hash_value);
    transparent_crc(g_478.f2, "g_478.f2", print_hash_value);
    transparent_crc(g_478.f3, "g_478.f3", print_hash_value);
    transparent_crc(g_478.f4, "g_478.f4", print_hash_value);
    transparent_crc(g_478.f5, "g_478.f5", print_hash_value);
    transparent_crc(g_478.f6, "g_478.f6", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_479[i].f0, "g_479[i].f0", print_hash_value);
        transparent_crc(g_479[i].f1, "g_479[i].f1", print_hash_value);
        transparent_crc(g_479[i].f2, "g_479[i].f2", print_hash_value);
        transparent_crc(g_479[i].f3, "g_479[i].f3", print_hash_value);
        transparent_crc(g_479[i].f4, "g_479[i].f4", print_hash_value);
        transparent_crc(g_479[i].f5, "g_479[i].f5", print_hash_value);
        transparent_crc(g_479[i].f6, "g_479[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_496.f0, "g_496.f0", print_hash_value);
    transparent_crc(g_496.f1, "g_496.f1", print_hash_value);
    transparent_crc(g_496.f2, "g_496.f2", print_hash_value);
    transparent_crc(g_496.f3, "g_496.f3", print_hash_value);
    transparent_crc(g_496.f4, "g_496.f4", print_hash_value);
    transparent_crc(g_496.f5, "g_496.f5", print_hash_value);
    transparent_crc(g_496.f6, "g_496.f6", print_hash_value);
    transparent_crc(g_506.f0, "g_506.f0", print_hash_value);
    transparent_crc(g_506.f1, "g_506.f1", print_hash_value);
    transparent_crc(g_506.f2, "g_506.f2", print_hash_value);
    transparent_crc(g_506.f3, "g_506.f3", print_hash_value);
    transparent_crc(g_506.f4, "g_506.f4", print_hash_value);
    transparent_crc(g_506.f5, "g_506.f5", print_hash_value);
    transparent_crc(g_506.f6, "g_506.f6", print_hash_value);
    transparent_crc(g_527.f0, "g_527.f0", print_hash_value);
    transparent_crc(g_527.f2, "g_527.f2", print_hash_value);
    transparent_crc(g_528.f0, "g_528.f0", print_hash_value);
    transparent_crc(g_528.f2, "g_528.f2", print_hash_value);
    transparent_crc(g_529.f0, "g_529.f0", print_hash_value);
    transparent_crc(g_529.f2, "g_529.f2", print_hash_value);
    transparent_crc(g_579.f0, "g_579.f0", print_hash_value);
    transparent_crc(g_579.f1, "g_579.f1", print_hash_value);
    transparent_crc(g_579.f2, "g_579.f2", print_hash_value);
    transparent_crc(g_579.f3, "g_579.f3", print_hash_value);
    transparent_crc(g_579.f4, "g_579.f4", print_hash_value);
    transparent_crc(g_579.f5, "g_579.f5", print_hash_value);
    transparent_crc(g_579.f6, "g_579.f6", print_hash_value);
    transparent_crc(g_601.f0, "g_601.f0", print_hash_value);
    transparent_crc(g_601.f3, "g_601.f3", print_hash_value);
    transparent_crc(g_601.f4, "g_601.f4", print_hash_value);
    transparent_crc(g_620.f0, "g_620.f0", print_hash_value);
    transparent_crc(g_620.f1, "g_620.f1", print_hash_value);
    transparent_crc(g_620.f2, "g_620.f2", print_hash_value);
    transparent_crc(g_620.f3, "g_620.f3", print_hash_value);
    transparent_crc(g_620.f4, "g_620.f4", print_hash_value);
    transparent_crc(g_620.f5, "g_620.f5", print_hash_value);
    transparent_crc(g_620.f6, "g_620.f6", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_621[i].f0, "g_621[i].f0", print_hash_value);
        transparent_crc(g_621[i].f1, "g_621[i].f1", print_hash_value);
        transparent_crc(g_621[i].f2, "g_621[i].f2", print_hash_value);
        transparent_crc(g_621[i].f3, "g_621[i].f3", print_hash_value);
        transparent_crc(g_621[i].f4, "g_621[i].f4", print_hash_value);
        transparent_crc(g_621[i].f5, "g_621[i].f5", print_hash_value);
        transparent_crc(g_621[i].f6, "g_621[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_622.f0, "g_622.f0", print_hash_value);
    transparent_crc(g_622.f1, "g_622.f1", print_hash_value);
    transparent_crc(g_622.f2, "g_622.f2", print_hash_value);
    transparent_crc(g_622.f3, "g_622.f3", print_hash_value);
    transparent_crc(g_622.f4, "g_622.f4", print_hash_value);
    transparent_crc(g_622.f5, "g_622.f5", print_hash_value);
    transparent_crc(g_622.f6, "g_622.f6", print_hash_value);
    transparent_crc(g_653.f0, "g_653.f0", print_hash_value);
    transparent_crc(g_653.f1, "g_653.f1", print_hash_value);
    transparent_crc(g_653.f2, "g_653.f2", print_hash_value);
    transparent_crc(g_653.f3, "g_653.f3", print_hash_value);
    transparent_crc(g_653.f4, "g_653.f4", print_hash_value);
    transparent_crc(g_653.f5, "g_653.f5", print_hash_value);
    transparent_crc(g_653.f6, "g_653.f6", print_hash_value);
    transparent_crc(g_684.f0, "g_684.f0", print_hash_value);
    transparent_crc(g_684.f1, "g_684.f1", print_hash_value);
    transparent_crc(g_684.f2, "g_684.f2", print_hash_value);
    transparent_crc(g_684.f3, "g_684.f3", print_hash_value);
    transparent_crc(g_684.f4, "g_684.f4", print_hash_value);
    transparent_crc(g_684.f5, "g_684.f5", print_hash_value);
    transparent_crc(g_684.f6, "g_684.f6", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_694[i], "g_694[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_707.f0, "g_707.f0", print_hash_value);
    transparent_crc(g_707.f1, "g_707.f1", print_hash_value);
    transparent_crc(g_707.f2, "g_707.f2", print_hash_value);
    transparent_crc(g_707.f3, "g_707.f3", print_hash_value);
    transparent_crc(g_707.f4, "g_707.f4", print_hash_value);
    transparent_crc(g_707.f5, "g_707.f5", print_hash_value);
    transparent_crc(g_707.f6, "g_707.f6", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_719[i].f0, "g_719[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_721.f0, "g_721.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_736[i].f0, "g_736[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_774[i][j].f0, "g_774[i][j].f0", print_hash_value);
            transparent_crc(g_774[i][j].f1, "g_774[i][j].f1", print_hash_value);
            transparent_crc(g_774[i][j].f2, "g_774[i][j].f2", print_hash_value);
            transparent_crc(g_774[i][j].f3, "g_774[i][j].f3", print_hash_value);
            transparent_crc(g_774[i][j].f4, "g_774[i][j].f4", print_hash_value);
            transparent_crc(g_774[i][j].f5, "g_774[i][j].f5", print_hash_value);
            transparent_crc(g_774[i][j].f6, "g_774[i][j].f6", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_775.f0, "g_775.f0", print_hash_value);
    transparent_crc(g_775.f1, "g_775.f1", print_hash_value);
    transparent_crc(g_775.f2, "g_775.f2", print_hash_value);
    transparent_crc(g_775.f3, "g_775.f3", print_hash_value);
    transparent_crc(g_775.f4, "g_775.f4", print_hash_value);
    transparent_crc(g_775.f5, "g_775.f5", print_hash_value);
    transparent_crc(g_775.f6, "g_775.f6", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_831[i].f0, "g_831[i].f0", print_hash_value);
        transparent_crc(g_831[i].f1, "g_831[i].f1", print_hash_value);
        transparent_crc(g_831[i].f2, "g_831[i].f2", print_hash_value);
        transparent_crc(g_831[i].f3, "g_831[i].f3", print_hash_value);
        transparent_crc(g_831[i].f4, "g_831[i].f4", print_hash_value);
        transparent_crc(g_831[i].f5, "g_831[i].f5", print_hash_value);
        transparent_crc(g_831[i].f6, "g_831[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_856[i][j][k].f0, "g_856[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_867, "g_867", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
