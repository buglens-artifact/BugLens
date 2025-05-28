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
   const unsigned long long f0;
   volatile unsigned long long f1;
   const unsigned short f2;
   volatile short f3;
   const volatile unsigned long long f4;
   short f5;
};

struct S1 {
   unsigned f0;
   volatile short f1;
   volatile struct S0 f2;
   long long f3;
   unsigned f4;
   const unsigned f5;
   int f6;
};


static volatile unsigned long long g_8 = 0x7563FFAF07207182LL;
static char g_14 = 0L;
static volatile int *g_29 = (void*)0;
static int g_78 = (-8L);
static const int * const g_92 = &g_78;
static const int * const *g_91 = &g_92;
static short g_94 = 0L;
static int g_106 = 1L;
static long long g_124 = 0x0E3964532E2BC135LL;
static char g_131 = 0xF7L;
static int g_145 = 0x1C7BDE7BL;
static unsigned char g_152 = 246UL;
static int g_167 = 9L;
static int *g_220 = (void*)0;
static int **g_219 = &g_220;
static short g_230 = 0x0769L;
static int g_233 = (-5L);
static int g_239 = 0x79D41D14L;
static long long g_253 = 0x90D2E26836565269LL;
static unsigned char g_263 = 0xEBL;
static unsigned char g_351 = 0x34L;
static unsigned long long g_479 = 0UL;
static int g_485 = 0x884B3820L;
static struct S0 g_538 = {0UL,0x0C2D3A3C200E4AEFLL,0x53EEL,0xE3BAL,0x06B647CE60284BEELL,0x2BB2L};
static unsigned char g_548 = 251UL;
static const int *g_550 = &g_167;
static const int **g_549 = &g_550;
static short g_588 = 8L;
static long long g_604 = 0x8D6F8AA3A57C6E5ALL;
static unsigned char g_621 = 0x08L;
static const short g_632 = 0L;
static long long g_635 = 0x0935403E42DC6AE7LL;
static struct S1 g_638 = {4294967295UL,1L,{0xC28ACF740BBC78A1LL,1UL,1UL,0x602FL,0x1BC675DA5E235CA9LL,0x5949L},0x6FA9FFA29DB58FC8LL,18446744073709551615UL,0x4EACBBFDL,0xBAFD6F98L};
static struct S1 g_641 = {0x003412ACL,0x6E9FL,{0x458C416E9E664B73LL,4UL,0x127DL,0xC6ADL,0xB0593DF1BCE807D0LL,0xAF47L},-8L,1UL,0x55895EBCL,9L};
static char g_733 = 0L;
static int g_800 = 0x2D8E4C54L;
static int g_805 = (-5L);
static int g_875 = (-8L);
static char g_885 = (-1L);
static unsigned char g_901 = 0x72L;
static unsigned short g_1043 = 0xF621L;
static struct S1 * const *g_1070 = (void*)0;
static struct S1 g_1073 = {0xF01BAD77L,0L,{18446744073709551615UL,5UL,65529UL,0xE749L,0UL,-8L},-6L,1UL,4294967293UL,0x37D9F5B3L};
static unsigned long long g_1107 = 0xCAE912BDF9B40688LL;
static unsigned g_1252 = 0x39C0E08FL;
static struct S0 g_1256 = {1UL,1UL,0UL,0x4A31L,0xBDF713FBC1D3AE5ELL,0x163CL};
static struct S0 *g_1255 = &g_1256;
static struct S1 g_1302 = {0xDF1211DDL,-7L,{18446744073709551608UL,0xFE511C42960D6F37LL,0x45CFL,4L,0x50B9E25248CC5FFALL,0xDF6BL},0x3A2A95BB7B62FB34LL,0UL,0xB9F0CF28L,0x71C15C1CL};
static int g_1476 = (-1L);
static unsigned long long g_1507 = 18446744073709551610UL;
static char g_1688 = 0x4FL;
static unsigned char g_1689 = 0UL;
static struct S1 g_1696 = {0x244CA453L,9L,{0x6243B202912FEA4ALL,18446744073709551611UL,0xFC34L,0x2E30L,18446744073709551615UL,1L},0xACAEB7F41336C75FLL,0x94D30B5CL,0x84CF80BCL,0xEEFACC3AL};
static struct S1 g_1698 = {4294967295UL,0xBD6FL,{0x0EFEF755A6E6647ALL,18446744073709551611UL,0x2B08L,-4L,0x63CF59F46DAA479ALL,0x4BBDL},0x269F4247E0EC75A8LL,0xF64E6608L,6UL,-2L};
static struct S1 g_1700 = {9UL,0x28D8L,{0xFF22AF5393CC686DLL,0x6D5F54598C3073A5LL,0xAED1L,1L,0x117A529469672059LL,0x4E23L},1L,18446744073709551611UL,1UL,0x6298F3CBL};
static unsigned long long g_2241 = 0x163186AB794F557ELL;
static struct S0 g_2387 = {0UL,0x796C886F5BB3F7AFLL,0x92B4L,0xB716L,18446744073709551608UL,0x8D55L};



static int func_1(void);
static long long func_11(int p_12, unsigned char p_13);
static long long func_21(unsigned p_22, short p_23, unsigned char p_24);
static short func_25(long long p_26);
static int * func_36(unsigned long long p_37, int * p_38, int * p_39, int p_40, char p_41);
static int * func_42(char p_43, const int ** p_44, char p_45);
static short func_51(unsigned char p_52, int ** p_53);
static int func_56(char p_57);
static int func_63(const int * const * p_64, const char p_65, int ** p_66, int ** p_67, int * p_68);
static const int * const * func_69(char p_70, int ** p_71);
static int func_1(void)
{
    long long l_17 = 4L;
    unsigned l_2391 = 0x11CA331AL;
    int *l_2392 = &g_1700.f6;
    (*l_2392) |= (((safe_add_func_int32_t_s_s((((safe_add_func_int16_t_s_s(1L, (safe_add_func_int16_t_s_s(((g_8 >= 0x74L) | ((safe_sub_func_uint64_t_u_u(18446744073709551607UL, func_11(((g_14 || g_14) & (safe_add_func_uint8_t_u_u((((((!l_17) == (((g_14 == (safe_rshift_func_int8_t_s_u(l_17, 3))) | 0L) <= 1L)) == 0xE4L) & g_14) | 0x70L), 0x46L))), l_17))) | l_2391)), l_17)))) ^ 6UL) || 0xE4D8L), 4294967295UL)) >= l_2391) > l_2391);
    return (*l_2392);
}







static long long func_11(int p_12, unsigned char p_13)
{
    int l_20 = 0x04ED09EBL;
    int l_1139 = 0x338A9E00L;
    int l_1209 = (-1L);
    struct S1 *l_1301 = &g_1302;
    int l_1490 = (-2L);
    int l_1614 = 0x45F67C34L;
    const int **l_1692 = &g_550;
    unsigned l_1791 = 0x7394B789L;
    int *l_1828 = &l_1614;
    int **l_1827 = &l_1828;
    int l_2099 = 0x041D6B38L;
    int l_2101 = 1L;
    int l_2109 = 0x079288E3L;
    int l_2134 = 0xC2B7A2C3L;
    int l_2135 = 1L;
    int l_2196 = (-10L);
    int l_2209 = 0x62D04648L;
    int l_2224 = 1L;
    int l_2233 = 1L;
    int l_2236 = 2L;
    unsigned short l_2379 = 0x6A17L;
    struct S0 *l_2386 = &g_2387;
    if (((l_20 == p_12) > func_21((l_20 ^ ((func_25(g_14) == (+(((0x6FL | 251UL) > (+0x7461D0EEL)) >= p_12))) ^ p_13)), l_20, g_14)))
    {
        for (g_538.f5 = (-26); (g_538.f5 > 5); g_538.f5 = safe_add_func_uint16_t_u_u(g_538.f5, 1))
        {
            int **l_1063 = &g_220;
            int *l_1064 = &g_638.f6;
            (*l_1064) = (((safe_add_func_int64_t_s_s(p_12, (0L == l_20))) && 0x20CDL) == p_13);
        }
    }
    else
    {
        short l_1065 = 1L;
        unsigned l_1066 = 0xC4981903L;
        int l_1082 = 0x524BBC59L;
        int l_1235 = 0x87CCFE37L;
        unsigned l_1307 = 0x3631E309L;
        short l_1414 = 1L;
        short l_1460 = 0xB04BL;
        int l_1477 = 5L;
        unsigned char l_1512 = 0x9EL;
        int l_1621 = 0x565CB262L;
        int l_1654 = 8L;
        int l_1666 = 0xA636E1EAL;
        struct S1 *l_1695 = &g_1696;
        short l_1798 = 0x490DL;
        unsigned l_1816 = 1UL;
        int l_1938 = 1L;
        int l_1961 = 0x838453D0L;
        int *l_1993 = &g_1700.f6;
        int *l_1994 = &g_167;
        int *l_1995 = &l_1139;
        int *l_1996 = &l_1477;
        int *l_1997 = &g_1302.f6;
        int *l_1998 = &g_1700.f6;
        int *l_1999 = &g_233;
        int *l_2000 = &l_1621;
        int *l_2001 = &l_1490;
        int *l_2002 = &l_20;
        int *l_2003 = (void*)0;
        int *l_2004 = &g_485;
        int *l_2005 = &l_1938;
        int *l_2006 = &l_1209;
        int *l_2007 = &g_638.f6;
        int *l_2008 = &l_1477;
        int *l_2009 = &l_1139;
        int *l_2010 = &g_800;
        int *l_2011 = &l_1209;
        int *l_2012 = (void*)0;
        int *l_2013 = &l_1490;
        int *l_2014 = &l_1654;
        int *l_2015 = &g_485;
        int *l_2016 = &g_638.f6;
        int *l_2017 = &l_1477;
        int *l_2018 = &g_78;
        int *l_2019 = &g_106;
        int *l_2020 = &g_1696.f6;
        int *l_2021 = &g_1698.f6;
        int *l_2022 = (void*)0;
        int *l_2023 = &g_1700.f6;
        int *l_2024 = &l_1209;
        int *l_2025 = &l_1961;
        int *l_2026 = (void*)0;
        int *l_2027 = &g_1698.f6;
        int *l_2028 = &g_78;
        int *l_2029 = &l_1139;
        int *l_2030 = &l_1938;
        int *l_2031 = &l_1139;
        int *l_2032 = (void*)0;
        int *l_2033 = &g_1696.f6;
        int *l_2034 = &l_1490;
        int *l_2035 = &g_106;
        int *l_2036 = &g_638.f6;
        int *l_2037 = &g_485;
        int *l_2038 = (void*)0;
        int *l_2039 = &l_1235;
        int *l_2040 = &g_485;
        int *l_2041 = (void*)0;
        int *l_2042 = (void*)0;
        int *l_2043 = &l_1654;
        int *l_2044 = &l_1139;
        int *l_2045 = &l_1654;
        int *l_2046 = &g_1700.f6;
        int *l_2047 = &l_1477;
        int *l_2048 = &l_1139;
        int *l_2049 = &l_1490;
        int *l_2050 = (void*)0;
        int *l_2051 = (void*)0;
        int *l_2052 = (void*)0;
        int *l_2053 = &g_1696.f6;
        int *l_2054 = &g_167;
        int *l_2055 = (void*)0;
        int *l_2056 = &g_1700.f6;
        int *l_2057 = &l_1139;
        int *l_2058 = (void*)0;
        int *l_2059 = &g_1073.f6;
        int *l_2060 = &l_1477;
        int *l_2061 = &g_167;
        int *l_2062 = &g_1696.f6;
        int *l_2063 = &g_485;
        int *l_2064 = &g_1700.f6;
        int *l_2065 = &g_78;
        int *l_2066 = &l_1139;
        int *l_2067 = (void*)0;
        int *l_2068 = &l_1614;
        int *l_2069 = &g_78;
        int *l_2070 = &l_1961;
        int *l_2071 = (void*)0;
        int *l_2072 = &g_78;
        int *l_2073 = (void*)0;
        int *l_2074 = &g_1302.f6;
        int *l_2075 = &l_1490;
        int *l_2076 = &l_1235;
        int *l_2077 = &l_1961;
        int *l_2078 = (void*)0;
        int *l_2079 = &g_106;
        int *l_2080 = &g_638.f6;
        int l_2081 = 0xAF8FA790L;
        int *l_2082 = &l_1235;
        int *l_2083 = &l_1139;
        int *l_2084 = &l_1490;
        int *l_2085 = &l_1614;
        int *l_2086 = &l_1209;
        int *l_2087 = &g_800;
        int *l_2088 = &g_233;
        int l_2089 = 0xBAB22E0EL;
        int *l_2090 = (void*)0;
        int *l_2091 = &g_1698.f6;
        int *l_2092 = &l_2081;
        int *l_2093 = &g_1302.f6;
        int *l_2094 = &l_1614;
        int l_2095 = 1L;
        int *l_2096 = &g_233;
        int *l_2097 = &l_2095;
        int *l_2098 = &l_2095;
        int *l_2100 = &g_1698.f6;
        int *l_2102 = (void*)0;
        int *l_2103 = (void*)0;
        int *l_2104 = &g_1696.f6;
        int *l_2105 = (void*)0;
        int *l_2106 = (void*)0;
        int *l_2107 = &l_2095;
        int *l_2108 = &l_1139;
        int *l_2110 = &l_2081;
        int *l_2111 = &l_20;
        int *l_2112 = &l_1139;
        int *l_2113 = &l_1082;
        int *l_2114 = &l_1938;
        int *l_2115 = &g_1696.f6;
        int *l_2116 = &l_1139;
        int *l_2117 = &g_1302.f6;
        int *l_2118 = &l_2099;
        int l_2119 = (-4L);
        int *l_2120 = &g_233;
        int *l_2121 = &g_641.f6;
        int *l_2122 = &g_638.f6;
        int *l_2123 = &l_1938;
        int *l_2124 = &l_1235;
        int *l_2125 = &l_20;
        int *l_2126 = &l_1621;
        int l_2127 = 0x7C75A919L;
        int *l_2128 = &l_1139;
        int *l_2129 = &l_1235;
        int *l_2130 = &l_1666;
        int *l_2131 = &l_2119;
        int *l_2132 = &l_2101;
        int *l_2133 = &l_2109;
        int *l_2136 = &l_2099;
        int *l_2137 = &g_78;
        int *l_2138 = &l_1235;
        int *l_2139 = &l_1938;
        int *l_2140 = &g_106;
        int *l_2141 = &g_1698.f6;
        int *l_2142 = &g_233;
        int *l_2143 = &g_1698.f6;
        int *l_2144 = (void*)0;
        int *l_2145 = &l_2119;
        int *l_2146 = &l_1082;
        int *l_2147 = &l_1654;
        int *l_2148 = &g_485;
        int *l_2149 = &l_1621;
        int *l_2150 = &l_1621;
        int *l_2151 = &l_2119;
        int *l_2152 = (void*)0;
        int *l_2153 = &g_167;
        int *l_2154 = &l_2099;
        int *l_2155 = (void*)0;
        int *l_2156 = &l_1621;
        int *l_2157 = &l_2119;
        int *l_2158 = &g_1698.f6;
        int *l_2159 = &l_2119;
        int l_2160 = 0xEC0645CAL;
        int l_2161 = (-1L);
        int *l_2162 = &g_1700.f6;
        int *l_2163 = &l_2134;
        int *l_2164 = &l_2099;
        int *l_2165 = &g_800;
        int *l_2166 = &l_2109;
        int *l_2167 = &l_1666;
        int *l_2168 = (void*)0;
        int *l_2169 = (void*)0;
        int *l_2170 = (void*)0;
        int l_2171 = 0x62D9E25FL;
        int *l_2172 = (void*)0;
        int *l_2173 = &l_2135;
        int *l_2174 = &g_106;
        int *l_2175 = &l_2160;
        int *l_2176 = &l_1666;
        int *l_2177 = &g_641.f6;
        int *l_2178 = &l_2101;
        int *l_2179 = (void*)0;
        int *l_2180 = &l_1235;
        int *l_2181 = &l_2160;
        int *l_2182 = (void*)0;
        int *l_2183 = &g_167;
        int *l_2184 = &l_1235;
        int *l_2185 = &l_1477;
        int *l_2186 = &l_2095;
        int l_2187 = (-9L);
        int *l_2188 = &l_1082;
        int *l_2189 = (void*)0;
        int *l_2190 = &l_2135;
        int *l_2191 = &g_1696.f6;
        int *l_2192 = &l_1938;
        int *l_2193 = &g_800;
        int *l_2194 = &l_1082;
        int *l_2195 = &l_1961;
        int *l_2197 = &g_638.f6;
        int *l_2198 = &g_233;
        int *l_2199 = &g_485;
        int *l_2200 = &l_1614;
        int *l_2201 = (void*)0;
        int *l_2202 = &l_1961;
        int *l_2203 = (void*)0;
        int l_2204 = 1L;
        int *l_2205 = (void*)0;
        int *l_2206 = &l_1666;
        int l_2207 = (-3L);
        int l_2208 = 8L;
        int *l_2210 = &g_78;
        int *l_2211 = &g_1302.f6;
        int *l_2212 = (void*)0;
        int *l_2213 = &l_2099;
        int *l_2214 = (void*)0;
        int *l_2215 = (void*)0;
        int l_2216 = 0L;
        int *l_2217 = (void*)0;
        int *l_2218 = &g_1696.f6;
        int *l_2219 = &l_2135;
        int *l_2220 = &g_78;
        int *l_2221 = &l_2127;
        int *l_2222 = &l_1614;
        int *l_2223 = &l_1139;
        int *l_2225 = &g_78;
        int *l_2226 = &l_1614;
        int *l_2227 = &l_1938;
        int *l_2228 = (void*)0;
        int *l_2229 = &l_1938;
        int *l_2230 = &l_2099;
        int *l_2231 = &l_2127;
        int *l_2232 = &l_2216;
        int *l_2234 = &l_2209;
        int *l_2235 = (void*)0;
        int *l_2237 = &l_2196;
        int *l_2238 = &l_2236;
        int *l_2239 = &l_1490;
        int *l_2240 = (void*)0;
        if ((g_124 ^ (func_56(l_1065) > (p_13 == g_621))))
        {
            int *l_1074 = (void*)0;
            char l_1077 = 8L;
            const int **l_1095 = (void*)0;
            int l_1127 = (-1L);
            int l_1149 = 0x8A2E92D9L;
            int l_1156 = 0xECDC32FBL;
            int l_1210 = 7L;
            int l_1492 = 0x26932966L;
            struct S1 *l_1699 = &g_1700;
            struct S1 **l_1701 = &l_1699;
            int *l_1702 = &g_167;
            if (l_1066)
            {
                struct S0 **l_1068 = (void*)0;
                struct S0 ***l_1067 = &l_1068;
                (*l_1067) = (void*)0;
                return p_13;
            }
            else
            {
                unsigned char l_1069 = 7UL;
                struct S1 * const l_1072 = &g_1073;
                struct S1 * const * const l_1071 = &l_1072;
                int l_1161 = 0L;
                int l_1192 = 0x210D7531L;
                int l_1226 = 0L;
                if (((func_21(p_12, l_1069, p_12) || (g_1070 == l_1071)) != (p_13 > l_1065)))
                {
                    unsigned l_1089 = 0x4426DFF5L;
                    (*g_219) = l_1074;
                    for (g_485 = 0; (g_485 > 25); g_485 = safe_add_func_int16_t_s_s(g_485, 4))
                    {
                        int *l_1078 = (void*)0;
                        int *l_1079 = &g_641.f6;
                        int *l_1080 = (void*)0;
                        int *l_1081 = &g_167;
                        int *l_1083 = &l_20;
                        int *l_1084 = &g_800;
                        int *l_1085 = &l_20;
                        int *l_1086 = &g_106;
                        int *l_1087 = (void*)0;
                        int *l_1088 = &g_641.f6;
                        ++l_1089;
                        (*l_1085) |= (p_13 && (safe_unary_minus_func_uint16_t_u((safe_add_func_uint32_t_u_u(g_239, (*g_550))))));
                        if (p_12)
                            break;
                    }
                    (*g_549) = func_42(g_638.f6, l_1095, p_13);
                    for (g_1073.f0 = 26; (g_1073.f0 != 39); g_1073.f0 = safe_add_func_uint32_t_u_u(g_1073.f0, 3))
                    {
                        (*g_549) = (*g_549);
                        if (l_20)
                            continue;
                    }
                }
                else
                {
                    int *l_1117 = &g_1073.f6;
                    int *l_1118 = &l_20;
                    int *l_1119 = &g_641.f6;
                    int *l_1120 = &g_167;
                    int *l_1121 = &g_106;
                    int *l_1122 = &g_800;
                    int *l_1123 = &g_641.f6;
                    int *l_1124 = &g_638.f6;
                    int *l_1125 = &g_78;
                    int *l_1126 = &g_641.f6;
                    int *l_1128 = &l_20;
                    int *l_1129 = &g_233;
                    int *l_1130 = &l_20;
                    int *l_1131 = &l_1082;
                    int *l_1132 = &g_485;
                    int *l_1133 = &g_167;
                    int *l_1134 = &g_800;
                    int *l_1135 = &l_1127;
                    int *l_1136 = &g_233;
                    int *l_1137 = &l_1082;
                    int *l_1138 = &g_233;
                    int *l_1140 = (void*)0;
                    int *l_1141 = (void*)0;
                    int *l_1142 = &g_233;
                    int *l_1143 = &l_20;
                    int *l_1144 = &l_1127;
                    int *l_1145 = (void*)0;
                    int *l_1146 = &l_1139;
                    int *l_1147 = (void*)0;
                    int *l_1148 = &g_78;
                    int *l_1150 = &g_485;
                    int *l_1151 = &g_485;
                    int *l_1152 = &g_641.f6;
                    int *l_1153 = &g_800;
                    int *l_1154 = &g_641.f6;
                    int *l_1155 = &l_1139;
                    int *l_1157 = &g_485;
                    int *l_1158 = &l_1127;
                    int *l_1159 = &g_1073.f6;
                    int *l_1160 = &g_800;
                    int *l_1162 = &l_1156;
                    int *l_1163 = &l_1161;
                    int *l_1164 = &l_1149;
                    int *l_1165 = (void*)0;
                    int *l_1166 = (void*)0;
                    int *l_1167 = &g_641.f6;
                    int *l_1168 = &g_485;
                    int *l_1169 = &l_1149;
                    int *l_1170 = &g_641.f6;
                    int *l_1171 = &l_1082;
                    int *l_1172 = &l_1149;
                    int *l_1173 = &g_233;
                    int *l_1174 = &l_1149;
                    int *l_1175 = &g_1073.f6;
                    int *l_1176 = &l_20;
                    int *l_1177 = &g_638.f6;
                    int *l_1178 = &g_106;
                    int *l_1179 = &l_20;
                    int *l_1180 = &g_641.f6;
                    int *l_1181 = &l_1082;
                    int *l_1182 = &g_106;
                    int *l_1183 = &g_1073.f6;
                    int *l_1184 = &l_20;
                    int *l_1185 = &g_1073.f6;
                    int *l_1186 = &l_1127;
                    int *l_1187 = (void*)0;
                    int *l_1188 = (void*)0;
                    int *l_1189 = &g_641.f6;
                    char l_1190 = 0xD3L;
                    int *l_1191 = &g_800;
                    int *l_1193 = &l_1156;
                    int *l_1194 = &l_1156;
                    int *l_1195 = &l_1139;
                    int *l_1196 = &l_1139;
                    int *l_1197 = &l_1139;
                    int *l_1198 = &g_485;
                    int *l_1199 = &g_106;
                    int *l_1200 = &g_485;
                    int *l_1201 = &g_1073.f6;
                    int *l_1202 = (void*)0;
                    int *l_1203 = &l_20;
                    int *l_1204 = &l_20;
                    int *l_1205 = &g_167;
                    int *l_1206 = &g_1073.f6;
                    int *l_1207 = &l_1156;
                    int *l_1208 = &g_167;
                    int *l_1211 = &l_1139;
                    int *l_1212 = &g_638.f6;
                    int *l_1213 = &g_233;
                    int *l_1214 = &g_485;
                    int *l_1215 = &l_20;
                    int *l_1216 = &g_233;
                    int *l_1217 = &l_1149;
                    int *l_1218 = &g_106;
                    int *l_1219 = &l_1149;
                    int *l_1220 = &l_1210;
                    int *l_1221 = &l_1139;
                    int *l_1222 = &l_1149;
                    int *l_1223 = &l_1156;
                    int *l_1224 = &g_233;
                    int *l_1225 = &g_1073.f6;
                    int l_1227 = 2L;
                    int *l_1228 = (void*)0;
                    int *l_1229 = &g_641.f6;
                    int *l_1230 = &l_1127;
                    int *l_1231 = &l_1227;
                    int *l_1232 = &g_167;
                    int *l_1233 = (void*)0;
                    int *l_1234 = &g_800;
                    int *l_1236 = &g_233;
                    int *l_1237 = &l_1161;
                    int *l_1238 = (void*)0;
                    int *l_1239 = (void*)0;
                    int *l_1240 = &g_106;
                    int *l_1241 = &l_1156;
                    int l_1242 = 0L;
                    int *l_1243 = &l_1139;
                    int *l_1244 = (void*)0;
                    int *l_1245 = &g_641.f6;
                    int *l_1246 = &l_1156;
                    int *l_1247 = &l_1235;
                    int *l_1248 = &g_1073.f6;
                    int *l_1249 = &g_233;
                    int *l_1250 = &l_1192;
                    int *l_1251 = &g_638.f6;
                    if (l_20)
                    {
                        int *l_1098 = &l_1082;
                        int *l_1099 = &l_1082;
                        int *l_1100 = &l_20;
                        int *l_1101 = &g_638.f6;
                        int *l_1102 = &g_641.f6;
                        int *l_1103 = (void*)0;
                        int *l_1104 = &g_485;
                        int *l_1105 = (void*)0;
                        int *l_1106 = &l_20;
                        ++g_1107;
                        (*l_1100) = l_1069;
                    }
                    else
                    {
                        int **l_1112 = &l_1074;
                        (*g_549) = (void*)0;
                        l_1082 &= (safe_sub_func_int64_t_s_s((l_1066 > (p_13 | (safe_add_func_uint64_t_u_u(p_13, (0UL || 0UL))))), 0xBB6672B9D6EF85B4LL));
                    }
                    g_1252++;
                    (*g_549) = &l_20;
                }
            }
            if (((g_1255 == (void*)0) || l_1235))
            {
                int *l_1294 = &l_1209;
                for (g_635 = 0; (g_635 <= 9); g_635 = safe_add_func_uint32_t_u_u(g_635, 5))
                {
                    int *l_1259 = &l_1082;
                    int *l_1260 = &g_233;
                    int *l_1261 = &l_1156;
                    int *l_1262 = &g_1073.f6;
                    int *l_1263 = &g_78;
                    int *l_1264 = (void*)0;
                    int *l_1265 = &l_1209;
                    int *l_1266 = &g_638.f6;
                    int *l_1267 = &l_1082;
                    int *l_1268 = &g_638.f6;
                    int *l_1269 = &l_1127;
                    int *l_1270 = &g_233;
                    int *l_1271 = (void*)0;
                    int *l_1272 = &g_233;
                    int *l_1273 = &l_1082;
                    int *l_1274 = (void*)0;
                    int *l_1275 = (void*)0;
                    int *l_1276 = &l_1235;
                    int *l_1277 = &g_638.f6;
                    int *l_1278 = &l_1082;
                    int *l_1279 = &l_1210;
                    int *l_1280 = &g_233;
                    int *l_1281 = &g_167;
                    int *l_1282 = &g_638.f6;
                    int *l_1283 = &g_638.f6;
                    int l_1284 = 7L;
                    int *l_1285 = &g_641.f6;
                    int *l_1286 = &g_800;
                    int *l_1287 = (void*)0;
                    int *l_1288 = &l_1139;
                    int *l_1289 = &g_1073.f6;
                    unsigned short l_1290 = 3UL;
                    ++l_1290;
                    if (p_13)
                        break;
                    if (func_25(((void*)0 == &l_1235)))
                    {
                        (*g_549) = &l_1209;
                        (*l_1276) ^= p_12;
                    }
                    else
                    {
                        unsigned l_1293 = 0x8A86E576L;
                        l_1293 ^= p_12;
                        (*g_219) = l_1294;
                    }
                    l_1139 |= (safe_rshift_func_uint8_t_u_s(p_12, (safe_lshift_func_int16_t_s_u(((((*l_1294) & (safe_sub_func_uint64_t_u_u((0x935AL >= l_1235), ((void*)0 != l_1301)))) <= (((((func_21((func_25(p_12) > g_479), g_1302.f0, g_641.f4) && (*l_1294)) || p_13) != (*l_1263)) & g_1256.f5) < l_1209)) < 0x92ADF27569AED1C0LL), g_548))));
                }
                (*l_1294) = (safe_mod_func_uint32_t_u_u(p_12, 4294967289UL));
            }
            else
            {
                int *l_1319 = (void*)0;
                int l_1335 = 5L;
                int l_1383 = (-1L);
                int l_1393 = 0xECC11D9EL;
                int l_1445 = 0xA8997092L;
                int l_1625 = 0x4AB032F9L;
                struct S1 *l_1697 = &g_1698;
                if ((safe_rshift_func_int8_t_s_u(g_131, l_1307)))
                {
                    int **l_1318 = &l_1074;
                    g_78 &= (p_12 > g_230);
                    if (p_13)
                    {
                        return g_805;
                    }
                    else
                    {
                        return g_106;
                    }
                }
                else
                {
                    int l_1348 = 0xA58A0DAAL;
                    int l_1366 = 0xC137CF85L;
                    int l_1478 = (-1L);
                    int *l_1513 = &l_1445;
                    int *l_1514 = &g_233;
                    int *l_1515 = &g_641.f6;
                    int *l_1516 = &g_800;
                    int *l_1517 = &g_233;
                    int *l_1518 = &l_1335;
                    int *l_1519 = &l_1210;
                    int *l_1520 = &g_1073.f6;
                    int *l_1521 = (void*)0;
                    int *l_1522 = &l_1383;
                    int *l_1523 = &l_1492;
                    int *l_1524 = &l_1366;
                    int *l_1525 = &l_1209;
                    int *l_1526 = (void*)0;
                    int *l_1527 = &g_1073.f6;
                    int *l_1528 = &l_1383;
                    int *l_1529 = &l_1210;
                    int *l_1530 = &g_233;
                    int *l_1531 = &l_1478;
                    int *l_1532 = &l_1335;
                    int *l_1533 = (void*)0;
                    int *l_1534 = (void*)0;
                    int *l_1535 = &g_800;
                    int *l_1536 = &l_1492;
                    int *l_1537 = &g_800;
                    int *l_1538 = &l_1139;
                    int *l_1539 = &l_1127;
                    int *l_1540 = (void*)0;
                    int *l_1541 = (void*)0;
                    int *l_1542 = &g_167;
                    int *l_1543 = (void*)0;
                    int *l_1544 = (void*)0;
                    int *l_1545 = &l_1149;
                    int *l_1546 = &g_641.f6;
                    int *l_1547 = &g_78;
                    int *l_1548 = &g_638.f6;
                    int *l_1549 = &l_1366;
                    int *l_1550 = (void*)0;
                    int *l_1551 = &l_1235;
                    int *l_1552 = &l_1127;
                    int *l_1553 = (void*)0;
                    int *l_1554 = &l_1210;
                    int *l_1555 = &l_1445;
                    int *l_1556 = &l_20;
                    int *l_1557 = (void*)0;
                    int *l_1558 = &l_1490;
                    int *l_1559 = &g_485;
                    int *l_1560 = &l_1366;
                    int *l_1561 = &l_1478;
                    int *l_1562 = &g_167;
                    int *l_1563 = (void*)0;
                    int *l_1564 = &l_1082;
                    int *l_1565 = &l_1156;
                    int *l_1566 = (void*)0;
                    int *l_1567 = &l_1383;
                    int *l_1568 = &g_233;
                    int *l_1569 = &g_78;
                    int *l_1570 = &g_1302.f6;
                    int *l_1571 = &g_638.f6;
                    int *l_1572 = &l_1492;
                    int *l_1573 = &l_1156;
                    int *l_1574 = &g_485;
                    int *l_1575 = &g_1073.f6;
                    int *l_1576 = &l_1477;
                    int *l_1577 = &l_1445;
                    int *l_1578 = (void*)0;
                    int *l_1579 = &g_1302.f6;
                    int *l_1580 = &l_1082;
                    int l_1581 = 0xC1F6FFB1L;
                    int *l_1582 = &g_638.f6;
                    int *l_1583 = (void*)0;
                    int *l_1584 = &g_233;
                    int *l_1585 = &l_1477;
                    int *l_1586 = (void*)0;
                    int *l_1587 = (void*)0;
                    int *l_1588 = &g_106;
                    int *l_1589 = &l_1335;
                    int *l_1590 = &l_1366;
                    int *l_1591 = &l_1490;
                    int *l_1592 = (void*)0;
                    int *l_1593 = &l_1477;
                    int *l_1594 = (void*)0;
                    int *l_1595 = &g_167;
                    int *l_1596 = &l_1082;
                    int *l_1597 = &l_20;
                    int *l_1598 = &g_485;
                    int *l_1599 = &l_1383;
                    int *l_1600 = &g_78;
                    int *l_1601 = &g_106;
                    int *l_1602 = &l_1366;
                    int *l_1603 = &l_1082;
                    int *l_1604 = &l_20;
                    int *l_1605 = &g_638.f6;
                    int *l_1606 = &g_78;
                    int *l_1607 = &l_1477;
                    int *l_1608 = &l_1383;
                    int *l_1609 = (void*)0;
                    int *l_1610 = &l_1492;
                    int *l_1611 = &l_1335;
                    int *l_1612 = &g_641.f6;
                    int *l_1613 = &l_1393;
                    int *l_1615 = &g_1073.f6;
                    int *l_1616 = &l_1614;
                    int *l_1617 = &g_1302.f6;
                    int *l_1618 = &l_1209;
                    int *l_1619 = &l_1614;
                    int *l_1620 = &l_20;
                    int *l_1622 = &l_1082;
                    int *l_1623 = &l_1139;
                    int *l_1624 = (void*)0;
                    int *l_1626 = &l_1366;
                    int *l_1627 = &l_1210;
                    int *l_1628 = (void*)0;
                    int *l_1629 = &l_1492;
                    int *l_1630 = &l_1614;
                    int *l_1631 = &l_1235;
                    int *l_1632 = (void*)0;
                    int *l_1633 = (void*)0;
                    int *l_1634 = &g_641.f6;
                    int *l_1635 = &l_1581;
                    int *l_1636 = &l_1335;
                    int *l_1637 = &l_1477;
                    int *l_1638 = (void*)0;
                    int *l_1639 = &g_800;
                    int *l_1640 = &l_1082;
                    int *l_1641 = &l_1383;
                    int *l_1642 = &l_1621;
                    int *l_1643 = &l_20;
                    int *l_1644 = &g_638.f6;
                    int *l_1645 = (void*)0;
                    int *l_1646 = &l_1477;
                    int *l_1647 = (void*)0;
                    int *l_1648 = &g_485;
                    int *l_1649 = &l_1127;
                    int *l_1650 = &l_1383;
                    int *l_1651 = &l_1490;
                    int *l_1652 = &l_1383;
                    int *l_1653 = &l_20;
                    int *l_1655 = &l_1393;
                    int *l_1656 = &l_1621;
                    int *l_1657 = &g_1302.f6;
                    int *l_1658 = &l_1149;
                    int *l_1659 = &g_485;
                    int *l_1660 = &l_1477;
                    int *l_1661 = &g_78;
                    int *l_1662 = (void*)0;
                    int *l_1663 = &l_1210;
                    int *l_1664 = &l_1235;
                    int *l_1665 = &l_1149;
                    int *l_1667 = &l_1666;
                    int *l_1668 = &l_1149;
                    int l_1669 = 3L;
                    int *l_1670 = &l_1478;
                    int *l_1671 = &l_1156;
                    int *l_1672 = &l_1492;
                    int *l_1673 = &l_1490;
                    int *l_1674 = &l_1669;
                    int *l_1675 = (void*)0;
                    int l_1676 = 9L;
                    int *l_1677 = &l_1082;
                    int *l_1678 = (void*)0;
                    int *l_1679 = &g_641.f6;
                    int *l_1680 = &l_1445;
                    int *l_1681 = &l_1581;
                    int *l_1682 = &l_1669;
                    int *l_1683 = &l_1127;
                    int *l_1684 = (void*)0;
                    int *l_1685 = (void*)0;
                    int *l_1686 = (void*)0;
                    int *l_1687 = (void*)0;
                    for (g_901 = (-22); (g_901 <= 38); g_901 = safe_add_func_uint64_t_u_u(g_901, 7))
                    {
                        int *l_1322 = &g_485;
                        int *l_1323 = (void*)0;
                        int *l_1324 = &g_641.f6;
                        int *l_1325 = (void*)0;
                        int *l_1326 = &l_1139;
                        int *l_1327 = &g_167;
                        int *l_1328 = &l_1082;
                        int *l_1329 = &l_1139;
                        int *l_1330 = (void*)0;
                        int *l_1331 = &g_800;
                        int *l_1332 = &g_1073.f6;
                        int *l_1333 = &g_638.f6;
                        int *l_1334 = (void*)0;
                        int *l_1336 = (void*)0;
                        int *l_1337 = &l_1210;
                        int *l_1338 = &g_800;
                        int *l_1339 = (void*)0;
                        int *l_1340 = (void*)0;
                        int *l_1341 = &l_1210;
                        int *l_1342 = &g_233;
                        int *l_1343 = &g_800;
                        int *l_1344 = &g_1073.f6;
                        int *l_1345 = &g_638.f6;
                        int *l_1346 = &l_1139;
                        int *l_1347 = &l_1082;
                        int *l_1349 = &l_1149;
                        int *l_1350 = &l_1149;
                        int *l_1351 = (void*)0;
                        int *l_1352 = &l_1149;
                        int *l_1353 = &l_1335;
                        int *l_1354 = &g_485;
                        int *l_1355 = &l_1139;
                        int *l_1356 = (void*)0;
                        int *l_1357 = &l_1235;
                        int *l_1358 = &l_1156;
                        int *l_1359 = &g_641.f6;
                        int *l_1360 = (void*)0;
                        int l_1361 = (-4L);
                        int *l_1362 = &g_167;
                        int *l_1363 = &g_638.f6;
                        int *l_1364 = &g_106;
                        int *l_1365 = &g_641.f6;
                        int *l_1367 = &g_800;
                        int *l_1368 = &l_1235;
                        int *l_1369 = &g_167;
                        int *l_1370 = &l_1156;
                        int *l_1371 = &g_106;
                        int *l_1372 = (void*)0;
                        int *l_1373 = &g_167;
                        int l_1374 = 1L;
                        int *l_1375 = &l_1127;
                        int *l_1376 = &g_167;
                        int *l_1377 = (void*)0;
                        int *l_1378 = (void*)0;
                        int *l_1379 = &g_1073.f6;
                        int *l_1380 = &g_106;
                        int *l_1381 = &g_1302.f6;
                        int *l_1382 = &l_1082;
                        int *l_1384 = &g_1073.f6;
                        int *l_1385 = (void*)0;
                        int *l_1386 = &l_1366;
                        int *l_1387 = &l_1139;
                        int *l_1388 = &l_1127;
                        int *l_1389 = (void*)0;
                        int *l_1390 = &l_1361;
                        int *l_1391 = &l_1374;
                        int *l_1392 = (void*)0;
                        int l_1394 = 0x836BE1B5L;
                        int *l_1395 = &l_20;
                        int *l_1396 = &l_1210;
                        int *l_1397 = &l_1149;
                        int *l_1398 = (void*)0;
                        int *l_1399 = &l_20;
                        int *l_1400 = &l_1209;
                        int *l_1401 = &l_1366;
                        int *l_1402 = &g_641.f6;
                        int *l_1403 = &l_20;
                        int *l_1404 = (void*)0;
                        int *l_1405 = &l_1335;
                        int *l_1406 = (void*)0;
                        int *l_1407 = &g_800;
                        int *l_1408 = &l_1210;
                        int *l_1409 = &l_1235;
                        int *l_1410 = &g_485;
                        int *l_1411 = &l_1139;
                        int *l_1412 = &l_1149;
                        int *l_1413 = &l_1361;
                        int *l_1415 = (void*)0;
                        int *l_1416 = &g_1302.f6;
                        int *l_1417 = &l_1127;
                        int *l_1418 = &l_1156;
                        int *l_1419 = (void*)0;
                        int *l_1420 = &l_1127;
                        int *l_1421 = &l_1209;
                        int *l_1422 = &l_1383;
                        int l_1423 = (-9L);
                        int *l_1424 = &l_1235;
                        int *l_1425 = &g_641.f6;
                        int l_1426 = 0xBB841FBEL;
                        int *l_1427 = &l_1426;
                        int *l_1428 = (void*)0;
                        int *l_1429 = &l_1082;
                        int *l_1430 = &g_106;
                        int *l_1431 = &l_1210;
                        int *l_1432 = &g_638.f6;
                        int *l_1433 = &l_1361;
                        int *l_1434 = &l_1156;
                        int *l_1435 = &l_1335;
                        int *l_1436 = &l_1423;
                        int *l_1437 = &g_485;
                        int *l_1438 = &l_1210;
                        int *l_1439 = &g_106;
                        int *l_1440 = &l_1423;
                        int *l_1441 = &g_1073.f6;
                        int *l_1442 = &l_1426;
                        int *l_1443 = &l_1374;
                        int *l_1444 = &l_1127;
                        int *l_1446 = (void*)0;
                        int *l_1447 = &g_106;
                        int *l_1448 = &l_1445;
                        int *l_1449 = (void*)0;
                        int *l_1450 = &g_800;
                        int *l_1451 = &g_233;
                        int *l_1452 = &l_1149;
                        int *l_1453 = &l_1082;
                        int *l_1454 = &l_1139;
                        int *l_1455 = &g_1302.f6;
                        int *l_1456 = &l_1149;
                        int *l_1457 = (void*)0;
                        int *l_1458 = &l_1210;
                        int *l_1459 = &l_1335;
                        int l_1461 = 0x85637D31L;
                        int *l_1462 = &l_1461;
                        int *l_1463 = &l_1361;
                        int *l_1464 = &l_1335;
                        int *l_1465 = &l_1209;
                        int *l_1466 = &l_1461;
                        int *l_1467 = &l_1383;
                        int *l_1468 = &g_485;
                        int *l_1469 = &l_1082;
                        int *l_1470 = &l_1361;
                        int *l_1471 = &l_1394;
                        int *l_1472 = &g_800;
                        int *l_1473 = &l_20;
                        int *l_1474 = &l_1235;
                        int *l_1475 = &l_1139;
                        int *l_1479 = &l_1393;
                        int *l_1480 = (void*)0;
                        int *l_1481 = &l_1149;
                        int *l_1482 = &l_1477;
                        int *l_1483 = &g_78;
                        int *l_1484 = &l_1210;
                        int *l_1485 = &l_1149;
                        int *l_1486 = &g_106;
                        int *l_1487 = &l_1361;
                        int *l_1488 = &l_1477;
                        int *l_1489 = (void*)0;
                        int *l_1491 = (void*)0;
                        int *l_1493 = &g_800;
                        int *l_1494 = &l_1127;
                        int *l_1495 = (void*)0;
                        int *l_1496 = &l_1492;
                        int *l_1497 = (void*)0;
                        int *l_1498 = &g_485;
                        int *l_1499 = (void*)0;
                        int *l_1500 = &l_1127;
                        int *l_1501 = &l_1210;
                        int *l_1502 = (void*)0;
                        int *l_1503 = &g_641.f6;
                        int *l_1504 = &l_1366;
                        int *l_1505 = &g_485;
                        int *l_1506 = &l_1374;
                        g_1507--;
                        return p_13;
                    }
                    for (g_604 = 18; (g_604 <= 18); ++g_604)
                    {
                        return l_1512;
                    }
                    l_1139 = ((void*)0 != &l_1095);
                    ++g_1689;
                }
                (*g_219) = func_42(g_885, l_1692, ((((p_13 > ((p_13 && (**g_91)) == (safe_sub_func_uint16_t_u_u(((**l_1692) || p_13), (func_21(g_131, (func_21((l_1695 != l_1697), g_641.f4, g_1476) > p_13), p_12) > (**g_549)))))) || g_638.f0) == g_1698.f0) <= l_1082));
            }
            (*l_1701) = l_1699;
            (*l_1702) |= p_12;
        }
        else
        {
            int l_1703 = 9L;
            int **l_1704 = (void*)0;
            struct S1 **l_1803 = &l_1301;
            int l_1808 = (-6L);
            int l_1810 = 0xDB59E552L;
            int *l_1840 = &g_1700.f6;
            int *l_1841 = &g_1696.f6;
            int *l_1842 = &l_1666;
            int *l_1843 = (void*)0;
            int *l_1844 = (void*)0;
            int *l_1845 = &l_1666;
            int *l_1846 = (void*)0;
            int *l_1847 = &l_1621;
            int *l_1848 = &l_1703;
            int *l_1849 = (void*)0;
            int *l_1850 = (void*)0;
            int *l_1851 = &g_1073.f6;
            int *l_1852 = (void*)0;
            int *l_1853 = &l_1614;
            int *l_1854 = (void*)0;
            int *l_1855 = &l_1614;
            int *l_1856 = &l_1139;
            int *l_1857 = &l_1139;
            int *l_1858 = (void*)0;
            int *l_1859 = &g_1073.f6;
            int *l_1860 = &g_638.f6;
            int *l_1861 = &g_106;
            int *l_1862 = &g_78;
            int *l_1863 = &g_800;
            int *l_1864 = &l_1621;
            int *l_1865 = &g_1696.f6;
            int *l_1866 = &g_800;
            int *l_1867 = &l_1490;
            int *l_1868 = &g_233;
            int *l_1869 = &l_1209;
            int *l_1870 = (void*)0;
            int *l_1871 = (void*)0;
            int *l_1872 = &g_1073.f6;
            int *l_1873 = &l_1490;
            int *l_1874 = &g_638.f6;
            int *l_1875 = &g_1302.f6;
            int *l_1876 = &g_485;
            int *l_1877 = &g_106;
            int *l_1878 = (void*)0;
            int *l_1879 = &l_20;
            int *l_1880 = (void*)0;
            int *l_1881 = &l_1666;
            int *l_1882 = &l_1808;
            int *l_1883 = (void*)0;
            int *l_1884 = &g_1696.f6;
            int *l_1885 = &l_20;
            int *l_1886 = &l_1490;
            int *l_1887 = &g_233;
            int *l_1888 = &g_1302.f6;
            int *l_1889 = &l_20;
            int *l_1890 = &g_233;
            int *l_1891 = &g_1700.f6;
            int *l_1892 = &l_1654;
            int *l_1893 = (void*)0;
            int *l_1894 = &l_1139;
            int *l_1895 = &l_1082;
            int *l_1896 = (void*)0;
            int *l_1897 = &g_638.f6;
            int *l_1898 = &l_1703;
            int *l_1899 = &g_641.f6;
            int *l_1900 = &l_1808;
            int *l_1901 = &l_20;
            int *l_1902 = &g_233;
            int l_1903 = 2L;
            int *l_1904 = &l_1209;
            int *l_1905 = &g_485;
            int *l_1906 = (void*)0;
            int *l_1907 = &l_1614;
            int *l_1908 = (void*)0;
            int *l_1909 = (void*)0;
            int *l_1910 = &g_167;
            int *l_1911 = &l_1621;
            int *l_1912 = &l_1209;
            int *l_1913 = (void*)0;
            int *l_1914 = &l_1703;
            int l_1915 = 0xC4890908L;
            int *l_1916 = (void*)0;
            int *l_1917 = (void*)0;
            int *l_1918 = &g_167;
            int *l_1919 = &g_1698.f6;
            int *l_1920 = &l_1621;
            int l_1921 = 0L;
            int *l_1922 = &l_1490;
            int *l_1923 = &l_1915;
            int *l_1924 = &l_1654;
            int *l_1925 = (void*)0;
            int *l_1926 = (void*)0;
            int *l_1927 = &l_1808;
            int *l_1928 = &l_1235;
            int l_1929 = 0x990DA9B1L;
            int *l_1930 = &l_1209;
            int *l_1931 = &l_1477;
            int *l_1932 = &g_233;
            int *l_1933 = &l_1477;
            int *l_1934 = &l_1921;
            int *l_1935 = &g_1696.f6;
            int *l_1936 = &g_78;
            int *l_1937 = &l_1614;
            int *l_1939 = &l_1915;
            int *l_1940 = (void*)0;
            int *l_1941 = &g_106;
            int l_1942 = 0L;
            int *l_1943 = &l_1082;
            int *l_1944 = &l_1490;
            int *l_1945 = &l_1235;
            int *l_1946 = (void*)0;
            int *l_1947 = &l_1915;
            int *l_1948 = &g_800;
            int *l_1949 = &l_1903;
            int *l_1950 = (void*)0;
            int *l_1951 = &g_485;
            int *l_1952 = &g_1302.f6;
            int *l_1953 = &g_78;
            int *l_1954 = &l_1614;
            int *l_1955 = &l_1139;
            int *l_1956 = &g_106;
            int *l_1957 = &l_1666;
            int *l_1958 = &l_1915;
            int *l_1959 = (void*)0;
            int *l_1960 = &l_1929;
            int *l_1962 = &l_20;
            int *l_1963 = (void*)0;
            int *l_1964 = &g_233;
            int *l_1965 = (void*)0;
            int *l_1966 = &g_1698.f6;
            int *l_1967 = &l_1810;
            int *l_1968 = &l_1915;
            int l_1969 = 0x6F402976L;
            int *l_1970 = (void*)0;
            int *l_1971 = (void*)0;
            int *l_1972 = &l_1938;
            int *l_1973 = &g_167;
            int *l_1974 = &l_1915;
            int *l_1975 = &g_800;
            int *l_1976 = &l_1666;
            int *l_1977 = &g_233;
            int *l_1978 = &g_233;
            int *l_1979 = (void*)0;
            int *l_1980 = (void*)0;
            int *l_1981 = &l_20;
            int *l_1982 = &g_78;
            int *l_1983 = &l_1903;
            int *l_1984 = &g_233;
            int *l_1985 = &g_1698.f6;
            int *l_1986 = &l_1921;
            int *l_1987 = &g_1698.f6;
            int *l_1988 = &l_1235;
            int *l_1989 = &l_1614;
            unsigned l_1990 = 0UL;
            if ((**g_91))
            {
                long long l_1765 = 0x1C904F463EAD8347LL;
                int l_1779 = (-8L);
                int l_1809 = (-1L);
                int l_1811 = (-1L);
                int **l_1824 = &g_220;
                int *l_1826 = &g_167;
                int **l_1825 = &l_1826;
                (*l_1692) = (*l_1692);
                if (p_13)
                {
                    return (**l_1692);
                }
                else
                {
                    unsigned l_1705 = 1UL;
                    int *l_1706 = &g_106;
                    int *l_1707 = (void*)0;
                    int *l_1708 = (void*)0;
                    int *l_1709 = &g_233;
                    int *l_1710 = &g_1073.f6;
                    int *l_1711 = &l_1614;
                    int *l_1712 = &g_1698.f6;
                    int *l_1713 = &l_1235;
                    int *l_1714 = (void*)0;
                    int l_1715 = (-1L);
                    int *l_1716 = &g_1696.f6;
                    int *l_1717 = &g_1696.f6;
                    int *l_1718 = &l_1654;
                    int *l_1719 = &l_1082;
                    int *l_1720 = (void*)0;
                    int *l_1721 = &l_1490;
                    int *l_1722 = &g_485;
                    int *l_1723 = &g_106;
                    int *l_1724 = &g_641.f6;
                    int *l_1725 = &g_106;
                    int *l_1726 = (void*)0;
                    int *l_1727 = &g_638.f6;
                    int *l_1728 = &g_78;
                    int *l_1729 = &l_1477;
                    int *l_1730 = &l_1666;
                    int *l_1731 = (void*)0;
                    int *l_1732 = &l_1477;
                    int *l_1733 = &g_485;
                    int *l_1734 = &g_800;
                    int *l_1735 = &g_1696.f6;
                    int *l_1736 = &l_1621;
                    int *l_1737 = &l_1139;
                    int *l_1738 = (void*)0;
                    int *l_1739 = &l_1654;
                    int *l_1740 = (void*)0;
                    int *l_1741 = &l_1654;
                    int *l_1742 = &g_641.f6;
                    int *l_1743 = &g_800;
                    int *l_1744 = &g_638.f6;
                    int *l_1745 = &l_1614;
                    int *l_1746 = &l_1209;
                    int *l_1747 = (void*)0;
                    int *l_1748 = (void*)0;
                    int *l_1749 = &g_641.f6;
                    int *l_1750 = &l_1235;
                    int *l_1751 = (void*)0;
                    int *l_1752 = &l_1082;
                    int *l_1753 = &g_1698.f6;
                    int *l_1754 = (void*)0;
                    int *l_1755 = &l_1614;
                    int l_1756 = (-5L);
                    int *l_1757 = &l_1490;
                    int *l_1758 = &g_1698.f6;
                    int *l_1759 = &l_1209;
                    int *l_1760 = &g_641.f6;
                    int *l_1761 = &l_1715;
                    int *l_1762 = &g_106;
                    int *l_1763 = &l_20;
                    int *l_1764 = &l_1490;
                    int *l_1766 = &l_1139;
                    int *l_1767 = &g_78;
                    int *l_1768 = &l_1621;
                    int *l_1769 = (void*)0;
                    int *l_1770 = &g_167;
                    int *l_1771 = &g_78;
                    int *l_1772 = &l_1703;
                    int *l_1773 = &g_78;
                    int *l_1774 = &l_1139;
                    int *l_1775 = &g_1696.f6;
                    int *l_1776 = &l_1666;
                    int *l_1777 = &l_1654;
                    int *l_1778 = &g_106;
                    int *l_1780 = &l_1779;
                    int *l_1781 = &g_641.f6;
                    int *l_1782 = (void*)0;
                    int *l_1783 = (void*)0;
                    int *l_1784 = &g_106;
                    int *l_1785 = &g_233;
                    int *l_1786 = (void*)0;
                    int *l_1787 = (void*)0;
                    int *l_1788 = &l_1654;
                    int *l_1789 = &g_233;
                    int *l_1790 = &l_1715;
                    unsigned short l_1829 = 1UL;
                    (*l_1706) = (0x84L == l_1705);
                    l_1791++;
                    if ((safe_lshift_func_int16_t_s_s((((18446744073709551607UL == (safe_rshift_func_int8_t_s_u(((!l_1779) && l_1307), (((&l_1779 == (void*)0) < p_12) >= (**l_1692))))) >= l_1798) > (safe_mod_func_uint64_t_u_u(0x197D56D4B28A20CDLL, 0xE4779186F70E4AD1LL))), g_538.f0)))
                    {
                        (*l_1723) = (safe_add_func_uint8_t_u_u(p_13, func_56(((l_1803 != (void*)0) < (safe_sub_func_uint8_t_u_u(p_12, (safe_add_func_int8_t_s_s(g_1073.f0, 0xF9L))))))));
                    }
                    else
                    {
                        unsigned l_1812 = 0x5394A811L;
                        int l_1815 = 0x0653D474L;
                        --l_1812;
                        l_1816++;
                        (*l_1774) = l_1765;
                    }
                    if ((g_1070 == &l_1695))
                    {
                        long long l_1823 = 6L;
                        (*l_1736) = ((**l_1692) < (p_12 >= func_21(((safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s((func_63(func_69((l_1823 >= 1L), l_1824), func_25(p_13), l_1825, l_1827, (*l_1827)) >= 1UL), l_1829)) || p_12), p_12)) || (*l_1826)), l_1823, g_638.f0)));
                    }
                    else
                    {
                        (*l_1760) |= p_12;
                        (*l_1739) = func_56(((void*)0 == &l_1692));
                    }
                }
            }
            else
            {
lbl_1839:
                (*g_549) = (*g_91);
                if ((**l_1692))
                {
                    (**l_1827) ^= (*g_92);
                    (*l_1828) = (**l_1692);
                }
                else
                {
                    int l_1830 = 0xB924A1EEL;
                    (**l_1827) |= l_1830;
                }
                for (g_351 = 17; (g_351 == 20); g_351 = safe_add_func_uint32_t_u_u(g_351, 1))
                {
                    unsigned l_1838 = 1UL;
                    if (l_1066)
                    {
                        if ((*g_92))
                            break;
                    }
                    else
                    {
                        unsigned short l_1835 = 7UL;
                        (*l_1828) = ((safe_mod_func_uint32_t_u_u((l_1835 > ((g_1252 || l_1512) <= 4294967286UL)), (**l_1827))) > 0xF4L);
                        g_1302.f6 = (3L || 0xDA5BL);
                        (*l_1803) = l_1695;
                        (*l_1828) = (*g_550);
                    }
                    if ((**g_91))
                    {
                        (*l_1828) = (0x0EL ^ (safe_add_func_int8_t_s_s(l_1838, p_13)));
                        if ((*g_92))
                            continue;
                        return p_13;
                    }
                    else
                    {
                        if (l_1209)
                            goto lbl_1839;
                    }
                    (*g_549) = (*g_219);
                    return g_1073.f4;
                }
            }
            --l_1990;
        }
        g_2241++;
        (*l_1692) = func_36((g_805 & (func_56((+(((void*)0 == (*g_549)) <= g_1700.f5))) <= (((safe_sub_func_uint16_t_u_u(((*g_219) != &l_2187), 1UL)) <= (0x2B138B44L & g_875)) & (*l_2190)))), (*l_1827), (*l_1827), p_13, (*l_2005));
    }
    for (g_1252 = 0; (g_1252 >= 12); g_1252 = safe_add_func_uint32_t_u_u(g_1252, 9))
    {
        if (p_13)
            break;
    }
    for (l_2134 = 0; (l_2134 != (-9)); --l_2134)
    {
        unsigned short l_2250 = 0xD09FL;
        int *l_2251 = &l_2236;
        int *l_2252 = (void*)0;
        int *l_2253 = (void*)0;
        int *l_2254 = (void*)0;
        int l_2255 = 0x6AB44F8EL;
        int *l_2256 = &l_1614;
        int *l_2257 = (void*)0;
        int *l_2258 = (void*)0;
        int *l_2259 = &l_2255;
        int *l_2260 = (void*)0;
        int *l_2261 = &g_167;
        int *l_2262 = (void*)0;
        int l_2263 = (-1L);
        int *l_2264 = &g_641.f6;
        int *l_2265 = &l_2196;
        int *l_2266 = &l_2255;
        int *l_2267 = &l_1139;
        int *l_2268 = &g_638.f6;
        int *l_2269 = &l_2233;
        int *l_2270 = &g_638.f6;
        int l_2271 = 0xCFFF841FL;
        int *l_2272 = &l_2209;
        int *l_2273 = &l_2196;
        int *l_2274 = &l_1614;
        int *l_2275 = &g_233;
        int *l_2276 = (void*)0;
        int *l_2277 = &l_2224;
        int *l_2278 = &g_1073.f6;
        int *l_2279 = &g_78;
        int *l_2280 = (void*)0;
        int *l_2281 = &g_641.f6;
        int *l_2282 = &l_2233;
        int *l_2283 = (void*)0;
        int *l_2284 = &g_1698.f6;
        int *l_2285 = &l_2236;
        int *l_2286 = (void*)0;
        int *l_2287 = &l_1139;
        int *l_2288 = &g_1698.f6;
        int *l_2289 = &l_2224;
        int *l_2290 = &g_78;
        int *l_2291 = (void*)0;
        int *l_2292 = &l_2263;
        int *l_2293 = &g_641.f6;
        int *l_2294 = &g_167;
        int *l_2295 = &l_2101;
        int l_2296 = 0L;
        int *l_2297 = &g_485;
        int *l_2298 = (void*)0;
        int *l_2299 = &l_2233;
        int *l_2300 = &g_638.f6;
        int *l_2301 = &g_641.f6;
        int *l_2302 = &l_2271;
        int *l_2303 = &g_233;
        int *l_2304 = (void*)0;
        int *l_2305 = &l_2101;
        int *l_2306 = &g_638.f6;
        int *l_2307 = &l_2255;
        int *l_2308 = &g_1302.f6;
        int *l_2309 = &l_2224;
        int *l_2310 = &l_2296;
        int *l_2311 = &l_2196;
        int *l_2312 = &g_1700.f6;
        int *l_2313 = &l_2224;
        int *l_2314 = &l_2135;
        int *l_2315 = &g_1696.f6;
        int *l_2316 = &l_2236;
        int *l_2317 = &l_2101;
        int *l_2318 = &l_1614;
        int *l_2319 = &l_2135;
        int *l_2320 = &l_2101;
        int *l_2321 = &g_1073.f6;
        int *l_2322 = &g_106;
        int *l_2323 = &g_485;
        int *l_2324 = &l_2263;
        int l_2325 = (-5L);
        int *l_2326 = &l_2271;
        int *l_2327 = &g_167;
        int *l_2328 = &l_1139;
        int *l_2329 = (void*)0;
        int *l_2330 = (void*)0;
        int *l_2331 = &l_2296;
        int *l_2332 = &g_485;
        int *l_2333 = (void*)0;
        int *l_2334 = (void*)0;
        int *l_2335 = &g_1073.f6;
        int *l_2336 = &l_2236;
        int *l_2337 = (void*)0;
        int *l_2338 = &g_1302.f6;
        int *l_2339 = &g_1696.f6;
        int *l_2340 = (void*)0;
        int *l_2341 = (void*)0;
        int *l_2342 = (void*)0;
        int *l_2343 = &l_2196;
        int *l_2344 = &l_2233;
        int *l_2345 = &l_2209;
        int *l_2346 = (void*)0;
        int *l_2347 = &g_1302.f6;
        int *l_2348 = &l_2255;
        int *l_2349 = &l_2271;
        int *l_2350 = &l_2233;
        int *l_2351 = &l_2099;
        int *l_2352 = &l_2236;
        int *l_2353 = &g_1302.f6;
        int *l_2354 = &l_2271;
        int *l_2355 = &l_2224;
        int *l_2356 = &g_485;
        int *l_2357 = (void*)0;
        int *l_2358 = &l_1139;
        int *l_2359 = &g_641.f6;
        int *l_2360 = &g_167;
        int l_2361 = (-1L);
        int *l_2362 = &l_1139;
        int *l_2363 = &g_1700.f6;
        int *l_2364 = &l_1139;
        int *l_2365 = (void*)0;
        int *l_2366 = &l_1614;
        int *l_2367 = &g_800;
        int *l_2368 = &l_2099;
        int *l_2369 = &g_1696.f6;
        int *l_2370 = (void*)0;
        int *l_2371 = &l_2135;
        int *l_2372 = &g_485;
        int *l_2373 = &g_106;
        int *l_2374 = &g_800;
        int *l_2375 = &g_485;
        int *l_2376 = (void*)0;
        int l_2377 = 4L;
        int *l_2378 = &g_1698.f6;
        if (l_2250)
            break;
        if ((*g_92))
            break;
        l_2379--;
    }
    if (((safe_rshift_func_int16_t_s_s(g_239, 2)) | 1UL))
    {
        const long long l_2388 = 0xA0B91D0A81826534LL;
        int **l_2389 = (void*)0;
        int *l_2390 = &l_1490;
        (*l_2390) ^= ((-3L) > ((((g_124 | func_25((g_1107 != (safe_sub_func_uint16_t_u_u((l_2386 != g_1255), l_2388))))) | (l_2388 < (**l_1692))) | (-1L)) || 0UL));
    }
    else
    {
        return p_13;
    }
    return p_13;
}







static long long func_21(unsigned p_22, short p_23, unsigned char p_24)
{
    int l_35 = 0L;
    const int *l_166 = &g_167;
    const int **l_165 = &l_166;
    int *l_214 = &g_167;
    unsigned long long l_499 = 9UL;
    int l_718 = 0x2D217F7EL;
    int l_742 = (-1L);
    short l_773 = 0L;
    int l_778 = 0x3B51D95EL;
    int l_779 = 0x7D74502AL;
    int l_791 = 0xD424D9CAL;
    int l_796 = 1L;
    int l_843 = 0xCC515082L;
    int l_898 = 3L;
    char l_928 = 6L;
    unsigned l_1053 = 0x66E0D8BFL;
    for (g_14 = 6; (g_14 != 8); g_14 = safe_add_func_int64_t_s_s(g_14, 1))
    {
        int *l_48 = &l_35;
        int ***l_508 = (void*)0;
        int l_563 = 0x69D72CE7L;
        int l_614 = 1L;
        int l_785 = (-1L);
        int l_820 = 0x4CB8D17BL;
        int l_839 = 0x067A9293L;
        int l_880 = 0x8D585AC5L;
        int l_883 = 0L;
        int *l_1052 = &l_718;
    }
    return (*l_166);
}







static short func_25(long long p_26)
{
    for (p_26 = 3; (p_26 <= (-20)); p_26--)
    {
        volatile int **l_30 = &g_29;
        (*l_30) = g_29;
    }
    return g_14;
}







static int * func_36(unsigned long long p_37, int * p_38, int * p_39, int p_40, char p_41)
{
    int *l_215 = &g_106;
    const int * const *l_218 = (void*)0;
    int l_232 = 0L;
    int l_242 = 0L;
    int l_245 = 1L;
    unsigned short l_348 = 0x65D8L;
    int l_469 = (-1L);
    unsigned l_498 = 1UL;
    (*p_38) ^= ((*g_91) != l_215);
    if (((safe_sub_func_uint32_t_u_u(((~(*l_215)) & ((*l_215) | ((0x2F77L | (p_37 || (g_145 <= (((*l_215) || (0x40E15510CE241EA3LL <= ((*l_215) ^ g_145))) < 0xA095L)))) > 3UL))), p_41)) >= (*g_92)))
    {
        int *l_221 = &g_106;
        int *l_222 = &g_106;
        int *l_223 = (void*)0;
        int *l_224 = &g_106;
        int *l_225 = &g_167;
        int *l_226 = &g_106;
        int *l_227 = (void*)0;
        int *l_228 = &g_78;
        int *l_229 = (void*)0;
        int *l_231 = &g_167;
        int *l_234 = (void*)0;
        int *l_235 = (void*)0;
        int *l_236 = &l_232;
        int *l_237 = &g_167;
        int *l_238 = &g_233;
        int *l_240 = &g_233;
        int *l_241 = &g_106;
        int *l_243 = (void*)0;
        int *l_244 = &l_232;
        int *l_246 = &g_106;
        int *l_247 = &l_245;
        int *l_248 = (void*)0;
        int *l_249 = &g_78;
        int l_250 = 1L;
        int l_251 = (-1L);
        int *l_252 = &g_167;
        int *l_254 = &l_242;
        int *l_255 = &l_242;
        int *l_256 = &l_242;
        int *l_257 = &g_106;
        int *l_258 = &l_242;
        int *l_259 = &l_251;
        int *l_260 = &g_78;
        int l_261 = 0xA9B1A085L;
        int *l_262 = &g_233;
        --g_263;
    }
    else
    {
        unsigned l_268 = 0x9A4E49BDL;
        const int **l_281 = (void*)0;
        int l_299 = (-1L);
        unsigned l_370 = 0UL;
        unsigned char l_373 = 1UL;
        char l_380 = (-1L);
        unsigned char l_395 = 253UL;
        unsigned l_400 = 0x0CA4C308L;
        int l_412 = 0x8D8505F0L;
        int l_417 = (-7L);
        int l_433 = 6L;
        int l_447 = 0x0BCE42B7L;
        int l_448 = (-10L);
        int l_452 = 1L;
        unsigned char l_482 = 0xAAL;
        (*p_38) = (((void*)0 != p_39) && ((0x4C1FEDC4L | func_25(((&p_39 != &p_38) || (((*p_38) > (safe_sub_func_uint16_t_u_u(65526UL, p_41))) > (p_39 == (*g_91)))))) | g_167));
        --l_268;
        if ((((1UL && (**g_91)) != (p_38 != (void*)0)) >= ((safe_sub_func_uint16_t_u_u(p_41, (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((18446744073709551612UL ^ (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_94, ((void*)0 != l_281))), 5))), g_230)), p_40)))) > 0x4CFD5CC310F39FE9LL)))
        {
            for (l_268 = 0; (l_268 > 45); l_268 = safe_add_func_int8_t_s_s(l_268, 4))
            {
                int *l_284 = &g_233;
                return l_284;
            }
            if (p_40)
                goto lbl_364;
        }
        else
        {
            int *l_285 = &l_245;
            int *l_286 = &g_167;
            int l_287 = 9L;
            int *l_288 = &l_242;
            int *l_289 = &l_242;
            int *l_290 = &g_106;
            int *l_291 = &l_245;
            int *l_292 = (void*)0;
            int *l_293 = &l_242;
            int l_294 = 0xAE1B054BL;
            int *l_295 = &l_287;
            int *l_296 = (void*)0;
            int *l_297 = &l_245;
            int *l_298 = &g_106;
            int *l_300 = &g_78;
            int *l_301 = &l_232;
            int *l_302 = &l_242;
            int *l_303 = (void*)0;
            int *l_304 = &l_299;
            int *l_305 = &g_78;
            int *l_306 = (void*)0;
            int *l_307 = &l_299;
            int *l_308 = &l_245;
            int *l_309 = &g_106;
            int *l_310 = &l_242;
            int *l_311 = &g_106;
            int *l_312 = &l_232;
            int *l_313 = &l_245;
            int *l_314 = &l_299;
            int *l_315 = &l_232;
            int *l_316 = &l_299;
            int *l_317 = &g_78;
            int *l_318 = &l_299;
            int *l_319 = &l_294;
            int *l_320 = &g_167;
            int *l_321 = (void*)0;
            int *l_322 = &g_167;
            int l_323 = 0x14E0A7E5L;
            int *l_324 = &l_287;
            int *l_325 = &g_167;
            int *l_326 = &g_78;
            int *l_327 = &l_294;
            int *l_328 = (void*)0;
            int *l_329 = (void*)0;
            int *l_330 = &g_78;
            int *l_331 = &g_106;
            int *l_332 = (void*)0;
            int *l_333 = &g_106;
            int *l_334 = &l_232;
            int *l_335 = &g_106;
            int *l_336 = &l_232;
            int *l_337 = &g_78;
            int *l_338 = &l_299;
            int *l_339 = &l_294;
            int *l_340 = (void*)0;
            int *l_341 = &l_294;
            int *l_342 = (void*)0;
            int *l_343 = &g_106;
            int *l_344 = &l_245;
            int *l_345 = &l_245;
            int *l_346 = &l_232;
            int *l_347 = &l_287;
            ++l_348;
            if (g_106)
                goto lbl_358;
            l_299 = g_351;
lbl_358:
            (*l_297) ^= (((void*)0 == &l_325) | (((safe_rshift_func_int8_t_s_u(g_230, 7)) <= (1L == (safe_rshift_func_uint16_t_u_u(p_37, g_167)))) & (((((*g_91) == (*g_219)) && (+(safe_rshift_func_int16_t_s_s((((!0xC5638F8FL) & 4294967289UL) < g_94), (*l_341))))) >= (*l_215)) > (*l_305))));
            (*p_38) |= (0x1A12L != (safe_rshift_func_uint8_t_u_s(0x6FL, (*l_215))));
        }
        if ((safe_mod_func_int32_t_s_s((g_106 || (l_299 > p_41)), 0xB4E8AFE3L)))
        {
            (*l_215) = (*l_215);
            if ((*p_39))
            {
                int *l_363 = &g_106;
                return l_363;
            }
            else
            {
                if ((**g_91))
                {
lbl_364:
                    (*p_38) |= 0xAEFE7210L;
                    l_370 = (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint8_t_u(((safe_mod_func_uint16_t_u_u(p_41, func_25(g_145))) || (246UL || p_41)))), 4));
                    for (l_348 = 0; (l_348 < 5); l_348++)
                    {
                        l_373--;
                        (*l_215) &= (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((l_380 | (0xCDD3E714L || (*p_38))), 0)), 12));
                    }
                    for (l_232 = (-21); (l_232 != 17); l_232 = safe_add_func_uint8_t_u_u(l_232, 7))
                    {
                        int *l_383 = &l_242;
                        int *l_384 = (void*)0;
                        int *l_385 = &l_242;
                        int *l_386 = (void*)0;
                        int *l_387 = &l_245;
                        int *l_388 = &l_245;
                        int *l_389 = (void*)0;
                        int *l_390 = &l_245;
                        int *l_391 = (void*)0;
                        int *l_392 = &g_106;
                        int *l_393 = (void*)0;
                        int *l_394 = &g_106;
                        ++l_395;
                    }
                }
                else
                {
                    (*l_215) = (p_37 < (safe_rshift_func_uint8_t_u_u(p_37, 5)));
                }
            }
            (*l_215) = l_400;
        }
        else
        {
            int ***l_401 = &g_219;
            int *l_402 = &l_245;
            int *l_403 = &g_233;
            int *l_404 = &g_167;
            int *l_405 = &g_233;
            int *l_406 = (void*)0;
            int *l_407 = &l_232;
            int *l_408 = &l_242;
            int *l_409 = &l_245;
            int *l_410 = &l_299;
            int l_411 = 2L;
            int *l_413 = &g_78;
            int *l_414 = &g_167;
            int *l_415 = &l_242;
            int l_416 = 0x5096FAD9L;
            int *l_418 = (void*)0;
            int *l_419 = &g_106;
            int *l_420 = &l_417;
            int *l_421 = &l_299;
            int *l_422 = &l_417;
            int *l_423 = &g_167;
            int *l_424 = &l_416;
            int *l_425 = (void*)0;
            int *l_426 = &g_78;
            int *l_427 = &l_245;
            int *l_428 = &l_416;
            int *l_429 = (void*)0;
            int *l_430 = (void*)0;
            int *l_431 = &g_167;
            int *l_432 = &g_167;
            int *l_434 = &l_416;
            int *l_435 = &l_417;
            int *l_436 = &l_433;
            int *l_437 = (void*)0;
            int *l_438 = &g_78;
            int *l_439 = &l_232;
            int *l_440 = &g_78;
            int *l_441 = (void*)0;
            int *l_442 = (void*)0;
            int *l_443 = &l_245;
            int *l_444 = &g_78;
            int *l_445 = &l_232;
            int *l_446 = &g_167;
            int *l_449 = &l_447;
            int *l_450 = (void*)0;
            int *l_451 = &l_245;
            int *l_453 = &l_433;
            int *l_454 = (void*)0;
            int *l_455 = (void*)0;
            int *l_456 = &l_433;
            int *l_457 = &l_433;
            int *l_458 = (void*)0;
            int *l_459 = &l_416;
            int *l_460 = &l_412;
            int *l_461 = (void*)0;
            int *l_462 = (void*)0;
            int *l_463 = &g_106;
            int *l_464 = &g_233;
            int *l_465 = &g_233;
            int *l_466 = &g_78;
            int *l_467 = &g_106;
            int *l_468 = &l_242;
            int *l_470 = &l_242;
            int *l_471 = &l_412;
            int *l_472 = &g_233;
            int *l_473 = &l_299;
            int *l_474 = &l_447;
            int *l_475 = &l_452;
            int *l_476 = &l_299;
            int *l_477 = &l_232;
            int *l_478 = &g_233;
            int **l_486 = (void*)0;
            int **l_487 = &l_459;
            (*l_401) = (void*)0;
            g_479--;
            l_482--;
            (*l_487) = func_42(g_485, l_281, g_351);
        }
    }
    (*p_38) = 0x05192C4AL;
    (*p_39) = ((g_152 == (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((*l_215), (safe_lshift_func_uint16_t_u_u(((func_25(p_40) | ((((*l_215) ^ 65527UL) != ((*l_215) <= (*p_39))) < l_498)) == g_230), (*l_215))))), 3)), 5))) == 3UL);
    return p_38;
}







static int * func_42(char p_43, const int ** p_44, char p_45)
{
    int *l_168 = &g_78;
    int *l_169 = &g_106;
    int l_170 = 0x1203DB6AL;
    int l_171 = (-4L);
    int *l_172 = &g_106;
    int l_173 = 0L;
    int l_174 = 0x256599A5L;
    int *l_175 = &g_106;
    int *l_176 = &l_173;
    int *l_177 = (void*)0;
    int l_178 = 0xCF7F40F1L;
    int *l_179 = &g_167;
    int *l_180 = &l_170;
    int *l_181 = &l_174;
    int *l_182 = &l_170;
    int l_183 = 4L;
    int *l_184 = &l_170;
    int *l_185 = &l_173;
    int l_186 = 0xDE943933L;
    int *l_187 = &l_171;
    int l_188 = 0x9DC94FE3L;
    int *l_189 = &l_170;
    int *l_190 = &l_174;
    int l_191 = 0L;
    int *l_192 = &l_188;
    int *l_193 = &g_106;
    int *l_194 = &l_191;
    int *l_195 = &g_167;
    int *l_196 = &l_186;
    int *l_197 = (void*)0;
    int *l_198 = (void*)0;
    int *l_199 = &g_167;
    int *l_200 = &g_106;
    int *l_201 = &l_174;
    int *l_202 = (void*)0;
    int l_203 = 0x1899B7E0L;
    int *l_204 = &l_191;
    unsigned short l_205 = 3UL;
    --l_205;
    (*l_181) ^= ((((safe_lshift_func_uint8_t_u_u((2UL == g_14), 4)) & func_51((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(p_43, (0x8CL > ((void*)0 == &l_196)))), (p_45 <= (-1L)))), &l_180)) < p_43) >= g_145);
    (*l_169) &= (**g_91);
    return &g_78;
}







static short func_51(unsigned char p_52, int ** p_53)
{
    int l_60 = 0xB4B20F95L;
    (**p_53) &= g_14;
    for (p_52 = (-29); (p_52 <= 37); p_52++)
    {
        unsigned l_160 = 3UL;
        (**p_53) = (**p_53);
        if (func_56((safe_lshift_func_uint8_t_u_u(func_25(l_60), 3))))
        {
            (**p_53) = (**p_53);
            for (g_152 = 27; (g_152 > 42); ++g_152)
            {
                const int *l_159 = &g_78;
                const int **l_158 = &l_159;
                (*l_158) = (*g_91);
            }
        }
        else
        {
            if (l_160)
            {
                return p_52;
            }
            else
            {
                (**p_53) = (-1L);
            }
            g_78 ^= ((*p_53) != (*p_53));
            g_106 &= ((((&g_92 != (void*)0) ^ (g_78 <= func_25(p_52))) && 0x58L) > l_160);
        }
        for (l_60 = (-9); (l_60 > 15); l_60 = safe_add_func_int8_t_s_s(l_60, 7))
        {
            (**p_53) ^= ((-1L) & (safe_rshift_func_int16_t_s_s((l_60 | (1L <= (func_25(((*g_91) != (*g_91))) & 0xD7CEL))), 15)));
        }
    }
    return l_60;
}







static int func_56(char p_57)
{
    int *l_77 = &g_78;
    int **l_76 = &l_77;
    const int l_93 = 0L;
    unsigned short l_114 = 65531UL;
    int l_132 = 1L;
    int l_139 = 0L;
    int *l_155 = &l_139;
    for (p_57 = 25; (p_57 != 12); p_57 = safe_sub_func_uint16_t_u_u(p_57, 7))
    {
        int l_87 = 0L;
        int **l_88 = &l_77;
        l_87 = (func_63(func_69(((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((!g_14), p_57)), 7)) <= (l_76 != (void*)0)) ^ ((safe_mod_func_uint32_t_u_u((func_25((g_78 > (g_78 ^ (safe_mod_func_uint8_t_u_u(((*l_77) | ((safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((+(l_87 & func_25(g_78))), l_87)), 0x4AL)) < g_78)), p_57))))) ^ (*l_77)), 1L)) || (-1L))) > 0x940354EEL), l_88), l_93, l_76, l_76, &g_78) || g_14);
        for (g_78 = 0; (g_78 > 21); g_78++)
        {
            if ((**g_91))
                break;
            l_87 ^= (**g_91);
        }
        (*l_77) = (**g_91);
    }
    for (g_94 = 0; (g_94 <= 6); ++g_94)
    {
        int **l_103 = &l_77;
        int *l_105 = &g_106;
        int *l_113 = &g_78;
        int *l_117 = &g_106;
        int *l_118 = (void*)0;
        int *l_119 = &g_78;
        int *l_120 = &g_106;
        int *l_121 = &g_106;
        int *l_122 = &g_106;
        int *l_123 = (void*)0;
        int *l_125 = &g_106;
        int *l_126 = &g_106;
        int *l_127 = &g_78;
        int *l_128 = &g_106;
        int *l_129 = &g_78;
        int *l_130 = (void*)0;
        int *l_133 = &g_78;
        int *l_134 = (void*)0;
        int *l_135 = &l_132;
        int *l_136 = &g_106;
        int *l_137 = &g_106;
        int *l_138 = &g_106;
        int *l_140 = &l_139;
        int *l_141 = (void*)0;
        int *l_142 = &l_132;
        int *l_143 = (void*)0;
        int *l_144 = &g_78;
        int *l_146 = &l_132;
        int *l_147 = &g_106;
        int *l_148 = &l_139;
        int *l_149 = &g_106;
        int *l_150 = &l_132;
        int *l_151 = &g_106;
        (*l_105) &= (~((safe_rshift_func_int8_t_s_u((253UL >= (safe_unary_minus_func_int8_t_s((p_57 < ((void*)0 != l_103))))), g_14)) <= (safe_unary_minus_func_int32_t_s((*l_77)))));
        (*l_105) &= (safe_add_func_int32_t_s_s((p_57 || (safe_add_func_int32_t_s_s(((-1L) == (safe_sub_func_int16_t_s_s(((*g_91) == l_113), ((l_114 | p_57) <= p_57)))), (safe_rshift_func_int8_t_s_s(0L, (*l_77)))))), p_57));
        g_152--;
    }
    (*l_155) &= (~(**l_76));
    return p_57;
}







static int func_63(const int * const * p_64, const char p_65, int ** p_66, int ** p_67, int * p_68)
{
    if ((*p_68))
    {
        (**p_67) = (**g_91);
        return (**p_66);
    }
    else
    {
        unsigned long long l_95 = 18446744073709551612UL;
        g_94 ^= ((~((+(g_14 != g_78)) > 0L)) & ((*g_92) ^ (*g_92)));
        return l_95;
    }
}







static const int * const * func_69(char p_70, int ** p_71)
{
    const int * const l_90 = &g_78;
    const int * const *l_89 = &l_90;
    (*p_71) = (*p_71);
    (*p_71) = (*p_71);
    return g_91;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_485, "g_485", print_hash_value);
    transparent_crc(g_538.f0, "g_538.f0", print_hash_value);
    transparent_crc(g_538.f1, "g_538.f1", print_hash_value);
    transparent_crc(g_538.f2, "g_538.f2", print_hash_value);
    transparent_crc(g_538.f3, "g_538.f3", print_hash_value);
    transparent_crc(g_538.f4, "g_538.f4", print_hash_value);
    transparent_crc(g_538.f5, "g_538.f5", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_588, "g_588", print_hash_value);
    transparent_crc(g_604, "g_604", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_638.f0, "g_638.f0", print_hash_value);
    transparent_crc(g_638.f1, "g_638.f1", print_hash_value);
    transparent_crc(g_638.f2.f0, "g_638.f2.f0", print_hash_value);
    transparent_crc(g_638.f2.f1, "g_638.f2.f1", print_hash_value);
    transparent_crc(g_638.f2.f2, "g_638.f2.f2", print_hash_value);
    transparent_crc(g_638.f2.f3, "g_638.f2.f3", print_hash_value);
    transparent_crc(g_638.f2.f4, "g_638.f2.f4", print_hash_value);
    transparent_crc(g_638.f2.f5, "g_638.f2.f5", print_hash_value);
    transparent_crc(g_638.f3, "g_638.f3", print_hash_value);
    transparent_crc(g_638.f4, "g_638.f4", print_hash_value);
    transparent_crc(g_638.f5, "g_638.f5", print_hash_value);
    transparent_crc(g_638.f6, "g_638.f6", print_hash_value);
    transparent_crc(g_641.f0, "g_641.f0", print_hash_value);
    transparent_crc(g_641.f1, "g_641.f1", print_hash_value);
    transparent_crc(g_641.f2.f0, "g_641.f2.f0", print_hash_value);
    transparent_crc(g_641.f2.f1, "g_641.f2.f1", print_hash_value);
    transparent_crc(g_641.f2.f2, "g_641.f2.f2", print_hash_value);
    transparent_crc(g_641.f2.f3, "g_641.f2.f3", print_hash_value);
    transparent_crc(g_641.f2.f4, "g_641.f2.f4", print_hash_value);
    transparent_crc(g_641.f2.f5, "g_641.f2.f5", print_hash_value);
    transparent_crc(g_641.f3, "g_641.f3", print_hash_value);
    transparent_crc(g_641.f4, "g_641.f4", print_hash_value);
    transparent_crc(g_641.f5, "g_641.f5", print_hash_value);
    transparent_crc(g_641.f6, "g_641.f6", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_800, "g_800", print_hash_value);
    transparent_crc(g_805, "g_805", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_885, "g_885", print_hash_value);
    transparent_crc(g_901, "g_901", print_hash_value);
    transparent_crc(g_1043, "g_1043", print_hash_value);
    transparent_crc(g_1073.f0, "g_1073.f0", print_hash_value);
    transparent_crc(g_1073.f1, "g_1073.f1", print_hash_value);
    transparent_crc(g_1073.f2.f0, "g_1073.f2.f0", print_hash_value);
    transparent_crc(g_1073.f2.f1, "g_1073.f2.f1", print_hash_value);
    transparent_crc(g_1073.f2.f2, "g_1073.f2.f2", print_hash_value);
    transparent_crc(g_1073.f2.f3, "g_1073.f2.f3", print_hash_value);
    transparent_crc(g_1073.f2.f4, "g_1073.f2.f4", print_hash_value);
    transparent_crc(g_1073.f2.f5, "g_1073.f2.f5", print_hash_value);
    transparent_crc(g_1073.f3, "g_1073.f3", print_hash_value);
    transparent_crc(g_1073.f4, "g_1073.f4", print_hash_value);
    transparent_crc(g_1073.f5, "g_1073.f5", print_hash_value);
    transparent_crc(g_1073.f6, "g_1073.f6", print_hash_value);
    transparent_crc(g_1107, "g_1107", print_hash_value);
    transparent_crc(g_1252, "g_1252", print_hash_value);
    transparent_crc(g_1256.f0, "g_1256.f0", print_hash_value);
    transparent_crc(g_1256.f1, "g_1256.f1", print_hash_value);
    transparent_crc(g_1256.f2, "g_1256.f2", print_hash_value);
    transparent_crc(g_1256.f3, "g_1256.f3", print_hash_value);
    transparent_crc(g_1256.f4, "g_1256.f4", print_hash_value);
    transparent_crc(g_1256.f5, "g_1256.f5", print_hash_value);
    transparent_crc(g_1302.f0, "g_1302.f0", print_hash_value);
    transparent_crc(g_1302.f1, "g_1302.f1", print_hash_value);
    transparent_crc(g_1302.f2.f0, "g_1302.f2.f0", print_hash_value);
    transparent_crc(g_1302.f2.f1, "g_1302.f2.f1", print_hash_value);
    transparent_crc(g_1302.f2.f2, "g_1302.f2.f2", print_hash_value);
    transparent_crc(g_1302.f2.f3, "g_1302.f2.f3", print_hash_value);
    transparent_crc(g_1302.f2.f4, "g_1302.f2.f4", print_hash_value);
    transparent_crc(g_1302.f2.f5, "g_1302.f2.f5", print_hash_value);
    transparent_crc(g_1302.f3, "g_1302.f3", print_hash_value);
    transparent_crc(g_1302.f4, "g_1302.f4", print_hash_value);
    transparent_crc(g_1302.f5, "g_1302.f5", print_hash_value);
    transparent_crc(g_1302.f6, "g_1302.f6", print_hash_value);
    transparent_crc(g_1476, "g_1476", print_hash_value);
    transparent_crc(g_1507, "g_1507", print_hash_value);
    transparent_crc(g_1688, "g_1688", print_hash_value);
    transparent_crc(g_1689, "g_1689", print_hash_value);
    transparent_crc(g_1696.f0, "g_1696.f0", print_hash_value);
    transparent_crc(g_1696.f1, "g_1696.f1", print_hash_value);
    transparent_crc(g_1696.f2.f0, "g_1696.f2.f0", print_hash_value);
    transparent_crc(g_1696.f2.f1, "g_1696.f2.f1", print_hash_value);
    transparent_crc(g_1696.f2.f2, "g_1696.f2.f2", print_hash_value);
    transparent_crc(g_1696.f2.f3, "g_1696.f2.f3", print_hash_value);
    transparent_crc(g_1696.f2.f4, "g_1696.f2.f4", print_hash_value);
    transparent_crc(g_1696.f2.f5, "g_1696.f2.f5", print_hash_value);
    transparent_crc(g_1696.f3, "g_1696.f3", print_hash_value);
    transparent_crc(g_1696.f4, "g_1696.f4", print_hash_value);
    transparent_crc(g_1696.f5, "g_1696.f5", print_hash_value);
    transparent_crc(g_1696.f6, "g_1696.f6", print_hash_value);
    transparent_crc(g_1698.f0, "g_1698.f0", print_hash_value);
    transparent_crc(g_1698.f1, "g_1698.f1", print_hash_value);
    transparent_crc(g_1698.f2.f0, "g_1698.f2.f0", print_hash_value);
    transparent_crc(g_1698.f2.f1, "g_1698.f2.f1", print_hash_value);
    transparent_crc(g_1698.f2.f2, "g_1698.f2.f2", print_hash_value);
    transparent_crc(g_1698.f2.f3, "g_1698.f2.f3", print_hash_value);
    transparent_crc(g_1698.f2.f4, "g_1698.f2.f4", print_hash_value);
    transparent_crc(g_1698.f2.f5, "g_1698.f2.f5", print_hash_value);
    transparent_crc(g_1698.f3, "g_1698.f3", print_hash_value);
    transparent_crc(g_1698.f4, "g_1698.f4", print_hash_value);
    transparent_crc(g_1698.f5, "g_1698.f5", print_hash_value);
    transparent_crc(g_1698.f6, "g_1698.f6", print_hash_value);
    transparent_crc(g_1700.f0, "g_1700.f0", print_hash_value);
    transparent_crc(g_1700.f1, "g_1700.f1", print_hash_value);
    transparent_crc(g_1700.f2.f0, "g_1700.f2.f0", print_hash_value);
    transparent_crc(g_1700.f2.f1, "g_1700.f2.f1", print_hash_value);
    transparent_crc(g_1700.f2.f2, "g_1700.f2.f2", print_hash_value);
    transparent_crc(g_1700.f2.f3, "g_1700.f2.f3", print_hash_value);
    transparent_crc(g_1700.f2.f4, "g_1700.f2.f4", print_hash_value);
    transparent_crc(g_1700.f2.f5, "g_1700.f2.f5", print_hash_value);
    transparent_crc(g_1700.f3, "g_1700.f3", print_hash_value);
    transparent_crc(g_1700.f4, "g_1700.f4", print_hash_value);
    transparent_crc(g_1700.f5, "g_1700.f5", print_hash_value);
    transparent_crc(g_1700.f6, "g_1700.f6", print_hash_value);
    transparent_crc(g_2241, "g_2241", print_hash_value);
    transparent_crc(g_2387.f0, "g_2387.f0", print_hash_value);
    transparent_crc(g_2387.f1, "g_2387.f1", print_hash_value);
    transparent_crc(g_2387.f2, "g_2387.f2", print_hash_value);
    transparent_crc(g_2387.f3, "g_2387.f3", print_hash_value);
    transparent_crc(g_2387.f4, "g_2387.f4", print_hash_value);
    transparent_crc(g_2387.f5, "g_2387.f5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
