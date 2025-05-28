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
   const volatile long long f1;
   long long f2;
   volatile unsigned short f3;
   volatile char f4;
   unsigned short f5;
   char f6;
   volatile unsigned short f7;
   long long f8;
};


static long long g_22 = 0L;
static int g_24 = (-10L);
static struct S0 g_55 = {7UL,0xCB64B6930509B955LL,0x0F30385D06F62939LL,0x0105L,-1L,0x1ABDL,0x11L,65529UL,0L};
static volatile int g_56 = 0L;
static int g_87 = 0xA2AAC5DAL;
static unsigned g_207 = 0xF9D813A6L;
static volatile char g_319 = (-6L);
static long long g_324 = 0x9A64F93B81CEEBA6LL;
static volatile unsigned long long g_338 = 5UL;
static volatile unsigned g_356 = 0x7F0EEFAAL;
static struct S0 g_369 = {4294967291UL,0xF1D640A94FD2C143LL,0L,0x266FL,0x1CL,0xA839L,0xA4L,0x7C26L,5L};
static struct S0 g_379 = {0xE721F199L,0xA37C214725579C5BLL,0xEDB8E35FDD6DB04ELL,0xA8FAL,0x95L,0UL,0x3EL,0UL,0xC4033B0487F1438CLL};
static struct S0 *g_378 = &g_379;
static struct S0 **g_377 = &g_378;
static int g_402 = 0x52471F1DL;
static volatile unsigned long long g_403 = 18446744073709551613UL;
static short g_449 = (-5L);
static volatile int g_453 = 0x14069CFBL;
static volatile unsigned g_460 = 1UL;
static volatile int g_494 = (-1L);
static int *g_569 = &g_87;
static int g_706 = 0L;
static volatile unsigned long long g_718 = 0x7C9A296DCEA92A1DLL;
static struct S0 g_723 = {0xC4EFA5E1L,0L,1L,8UL,0L,0x6FF9L,-3L,0x2332L,0xBAF50E186AC2539ALL};
static volatile unsigned long long g_748 = 0x1DE974F8D4325747LL;
static volatile unsigned long long g_807 = 0x64B12599E47D8943LL;
static int g_895 = 0x7A1B0EB0L;
static const int g_965 = 0x8EE16545L;
static int *g_967 = &g_24;
static volatile unsigned g_1084 = 0xAEBDBC00L;
static int g_1157 = 0x6D9D0912L;
static volatile unsigned g_1512 = 0x9ABE7FBEL;
static volatile struct S0 g_1515 = {6UL,-2L,0x323565834FAB2FF2LL,0UL,-2L,0x52A9L,0xA8L,65535UL,0L};
static volatile unsigned g_1570 = 9UL;



static long long func_1(void);
static unsigned short func_6(unsigned p_7, unsigned short p_8);
static short func_14(int p_15);
static int func_16(char p_17, short p_18);
static char func_19(char p_20, unsigned short p_21);
static unsigned short func_27(int * p_28, unsigned p_29, unsigned long long p_30);
static unsigned long long func_31(int p_32);
static int func_33(int * p_34, int * p_35, const unsigned long long p_36, int * p_37);
static int * func_38(int * p_39, int p_40, int * p_41);
static int * func_42(unsigned p_43, int * p_44, int * p_45, int * p_46);
static long long func_1(void)
{
    char l_11 = 0xFEL;
    char l_1142 = 0xDBL;
    int *l_1144 = (void*)0;
    int *l_1145 = (void*)0;
    int *l_1146 = &g_895;
    int l_1147 = 0x07AA9C7DL;
    unsigned l_1193 = 0UL;
    struct S0 **l_1274 = &g_378;
    int l_1456 = 0x12CDEFEAL;
    int l_1468 = 7L;
    int l_1485 = 0xA79794EDL;
    int *l_1529 = &l_1468;
    char l_1546 = 1L;
    (*l_1146) = ((safe_div_func_int8_t_s_s((-3L), ((safe_lshift_func_uint16_t_u_s(func_6((((safe_mul_func_uint16_t_u_u(l_11, (safe_add_func_int16_t_s_s(func_14(func_16(func_19(g_22, g_22), g_55.f0)), (safe_sub_func_int64_t_s_s(l_1142, l_1142)))))) > 0x36B3L) | g_379.f8), g_965), g_379.f5)) || g_379.f5))) | l_1142);

    ;
    ;
    (*g_377) = (void*)0;

    ;
    if ((*g_569))
    {
        unsigned l_1152 = 0UL;
        g_1157 |= ((safe_mul_func_int16_t_s_s((func_6(g_706, g_369.f6) , (safe_mod_func_uint32_t_u_u(func_31((*l_1146)), ((g_723.f5 , (l_1152 , (safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((g_965 , g_723.f6), 0x03B2DA0C6AE4CC57LL)), 0x67DA67200DE4D2F8LL)))) , 0xEC5E84F4L)))), 0xBC0DL)) & g_723.f2);
        return g_369.f1;
    }
    else
    {
        struct S0 ** const *l_1160 = &g_377;
        int l_1167 = 0x3FFECDD4L;
        int l_1182 = 0xC741AD4DL;
        unsigned char l_1184 = 250UL;
        unsigned long long l_1264 = 0x5AF233014DDA7528LL;
        unsigned long long l_1374 = 18446744073709551614UL;
        int l_1495 = 0xC4B7CD01L;
        int l_1498 = 8L;
        int **l_1524 = &l_1145;
        long long l_1543 = (-6L);
        int l_1568 = (-8L);
        if ((safe_sub_func_uint64_t_u_u((l_1160 == &g_377), (-1L))))
        {
            const short l_1176 = 0x3C2AL;
            long long l_1192 = 1L;
            int l_1194 = (-3L);
            const char l_1273 = 0x37L;
            int l_1306 = (-1L);
            unsigned short l_1323 = 1UL;
            unsigned char l_1412 = 4UL;
            if ((*g_569))
            {
                int l_1177 = 0x24EAA50EL;
                unsigned char l_1281 = 255UL;
                int *l_1289 = (void*)0;
                int *l_1290 = &g_706;
                int *l_1291 = &l_1194;
                int *l_1292 = (void*)0;
                int *l_1293 = (void*)0;
                int *l_1294 = &l_1147;
                int *l_1295 = &g_706;
                int *l_1296 = (void*)0;
                int *l_1297 = &l_1194;
                int *l_1298 = &l_1167;
                int *l_1299 = &l_1194;
                int *l_1300 = &l_1177;
                int *l_1301 = &g_895;
                int *l_1302 = &l_1177;
                int *l_1303 = &l_1177;
                int *l_1304 = &g_895;
                int *l_1305 = &l_1177;
                int *l_1307 = &l_1306;
                int l_1308 = 0xBB585D42L;
                int l_1309 = 0x6C061C9EL;
                int *l_1310 = (void*)0;
                int *l_1311 = &l_1147;
                int *l_1312 = &g_706;
                int *l_1313 = &l_1167;
                int *l_1314 = &g_706;
                int *l_1315 = &g_24;
                int *l_1316 = &g_706;
                int *l_1317 = &l_1306;
                int *l_1318 = &g_87;
                int *l_1319 = &l_1194;
                int *l_1320 = &l_1167;
                int *l_1321 = (void*)0;
                int *l_1322 = &l_1194;
                if (((((safe_add_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s(((safe_div_func_int32_t_s_s((l_1167 > (((safe_mod_func_int64_t_s_s((((safe_add_func_int8_t_s_s(g_718, g_55.f5)) == (((safe_rshift_func_int16_t_s_u(g_379.f0, ((safe_mod_func_int64_t_s_s(l_1167, ((*l_1146) , g_369.f5))) <= (g_706 <= (-1L))))) >= l_1176) ^ l_1176)) != g_723.f0), 18446744073709551610UL)) < l_1177) ^ g_369.f5)), 0x277D4DC0L)) , 1L), g_706)) || g_449) , l_1176), g_723.f0)) == l_1167) == 0xF2B9C834L) , (*g_569)))
                {
                    int l_1183 = 0xB186C5E6L;
                    if (l_1184)
                    {
                        int *l_1185 = &l_1183;
                        int **l_1186 = &l_1144;
                        (*l_1186) = (g_748 , l_1185);

                        ;
                        (**l_1186) |= l_1177;
                        (*l_1186) = &l_1183;
                    }
                    else
                    {
                        (*g_569) = l_1176;
                        return (*l_1146);
                    }

                    ;
                }
                else
                {
                    char l_1189 = 0L;
                    struct S0 *l_1190 = &g_723;
                    struct S0 ***l_1191 = &g_377;
                    (*l_1146) = (safe_mod_func_uint8_t_u_u((l_1176 , (g_449 >= l_1184)), g_55.f4));
                    (*g_569) = (*g_569);
                    l_1194 &= (func_31(l_1193) == 1L);
                    if ((func_14((*l_1146)) , l_1192))
                    {
                        volatile int *l_1196 = &g_56;
                        volatile int **l_1195 = &l_1196;
                        (*l_1195) = &g_494;

                        ;
                    }
                    else
                    {
                        return g_723.f4;
                    }
                }


                (*l_1146) = (safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(0x861BL, ((g_369.f7 == (-1L)) == ((*g_569) < ((9UL != 1L) , (safe_unary_minus_func_uint8_t_u(l_1182))))))), (safe_rshift_func_int16_t_s_s((l_1192 != ((*g_569) , g_723.f8)), l_1177))));
                for (g_369.f6 = 0; (g_369.f6 < (-23)); g_369.f6 = safe_sub_func_int64_t_s_s(g_369.f6, 1))
                {
                    const char l_1282 = 0xF8L;
                    for (g_55.f5 = 1; (g_55.f5 > 12); ++g_55.f5)
                    {
                        int **l_1208 = (void*)0;
                        int **l_1209 = &g_967;
                        int *l_1210 = &g_895;
                        int *l_1211 = &l_1177;
                        int *l_1212 = (void*)0;
                        int *l_1213 = &l_1167;
                        int *l_1214 = &l_1147;
                        int *l_1215 = &g_87;
                        int *l_1216 = (void*)0;
                        int *l_1217 = &l_1194;
                        int *l_1218 = &g_895;
                        int *l_1219 = &g_706;
                        int *l_1220 = (void*)0;
                        int *l_1221 = (void*)0;
                        int *l_1222 = &l_1167;
                        int *l_1223 = &l_1167;
                        int *l_1224 = &l_1147;
                        int *l_1225 = &g_706;
                        int *l_1226 = &g_87;
                        int *l_1227 = &l_1177;
                        int *l_1228 = &l_1177;
                        int *l_1229 = &l_1147;
                        int *l_1230 = &l_1194;
                        int *l_1231 = &g_87;
                        int *l_1232 = &g_24;
                        int *l_1233 = &g_87;
                        int *l_1234 = &g_24;
                        int *l_1235 = (void*)0;
                        int *l_1236 = &g_24;
                        int *l_1237 = &l_1177;
                        int *l_1238 = &g_87;
                        int *l_1239 = &l_1194;
                        int *l_1240 = &g_895;
                        int *l_1241 = &g_706;
                        int *l_1242 = &g_895;
                        int *l_1243 = &g_24;
                        int *l_1244 = (void*)0;
                        int *l_1245 = &g_87;
                        int *l_1246 = &g_895;
                        int *l_1247 = (void*)0;
                        int *l_1248 = (void*)0;
                        int *l_1249 = &g_706;
                        int *l_1250 = &l_1194;
                        int *l_1251 = &g_706;
                        int *l_1252 = &l_1167;
                        int *l_1253 = (void*)0;
                        int *l_1254 = &l_1167;
                        int *l_1255 = &g_24;
                        int *l_1256 = &g_24;
                        int *l_1257 = &l_1167;
                        int *l_1258 = &l_1147;
                        int *l_1259 = (void*)0;
                        int *l_1260 = &l_1147;
                        int *l_1261 = &l_1194;
                        int *l_1262 = &l_1167;
                        int *l_1263 = &g_24;
                        (*l_1209) = &l_1177;

                        ;
                        ++l_1264;
                        (*l_1224) &= ((g_356 , &g_569) != (void*)0);
                        (*l_1225) &= (l_1273 | ((!65535UL) < g_207));
                    }

                    ;
                    (*l_1146) ^= (((((&g_378 == l_1274) >= g_723.f1) <= (safe_mul_func_int16_t_s_s(func_6(((safe_add_func_int16_t_s_s(func_6((safe_rshift_func_uint16_t_u_u(func_6(g_369.f2, l_1281), (g_379.f5 > g_723.f0))), (g_55.f0 >= l_1282)), g_22)) == l_1282), l_1182), g_55.f8))) , &g_377) != &g_377);

                    ;
                    (*g_569) = (safe_mul_func_uint8_t_u_u((g_369.f0 , 0x2EL), l_1177));
                    (*g_569) |= (safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(l_1281, 4)), g_403));
                }
                --l_1323;
            }
            else
            {
                int *l_1326 = &l_1306;
                int *l_1327 = (void*)0;
                int *l_1328 = &l_1147;
                int *l_1329 = &g_24;
                int *l_1330 = &l_1306;
                int *l_1331 = (void*)0;
                int *l_1332 = (void*)0;
                int *l_1333 = &g_706;
                int *l_1334 = &l_1194;
                int *l_1335 = &g_706;
                int *l_1336 = &l_1194;
                int *l_1337 = &l_1167;
                int *l_1338 = &g_706;
                int *l_1339 = (void*)0;
                int *l_1340 = &g_706;
                int *l_1341 = &l_1194;
                int *l_1342 = (void*)0;
                int l_1343 = 0L;
                int *l_1344 = &l_1147;
                int *l_1345 = &g_24;
                int *l_1346 = &l_1343;
                int *l_1347 = &g_87;
                int *l_1348 = &g_895;
                int *l_1349 = &l_1343;
                int *l_1350 = &g_706;
                int *l_1351 = &g_24;
                int *l_1352 = &l_1167;
                int *l_1353 = (void*)0;
                int *l_1354 = &g_24;
                int *l_1355 = &l_1306;
                int *l_1356 = &g_706;
                int *l_1357 = &g_706;
                int *l_1358 = &l_1306;
                int *l_1359 = &g_895;
                int *l_1360 = &l_1343;
                int *l_1361 = (void*)0;
                int *l_1362 = &g_24;
                int *l_1363 = (void*)0;
                int *l_1364 = &g_24;
                int *l_1365 = &l_1147;
                int *l_1366 = &g_87;
                int *l_1367 = &l_1343;
                int *l_1368 = &g_706;
                int *l_1369 = &g_87;
                int *l_1370 = (void*)0;
                int *l_1371 = &g_87;
                int *l_1372 = &g_706;
                int *l_1373 = (void*)0;
                l_1374++;
                (*l_1366) = (((safe_div_func_uint8_t_u_u(g_369.f4, g_369.f5)) & 0xACL) || ((safe_sub_func_int16_t_s_s(g_723.f6, g_379.f2)) ^ (((((2L & ((!l_1323) == g_807)) , (*g_569)) < 0xECBED76FL) ^ 1L) >= (*l_1358))));
            }


            for (g_369.f6 = 0; (g_369.f6 > (-16)); --g_369.f6)
            {
                return g_87;
            }
            for (g_379.f6 = 0; (g_379.f6 == 8); g_379.f6 = safe_add_func_uint32_t_u_u(g_379.f6, 3))
            {
                return g_379.f2;
            }
            for (g_723.f6 = 21; (g_723.f6 > 15); g_723.f6 = safe_sub_func_uint32_t_u_u(g_723.f6, 6))
            {
                int l_1407 = 0L;
                (*l_1146) ^= ((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(func_33((((safe_mod_func_uint32_t_u_u(4294967295UL, ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((void*)0 != &g_377), (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_1407, ((safe_mul_func_int8_t_s_s(g_723.f4, 0xC0L)) && 1L))), ((safe_add_func_uint16_t_u_u((l_1194 & g_55.f2), l_1182)) == 0x1CB3L))))), 0UL)) | 0xE6B5L) ^ (-1L)), 6)), g_55.f8)) ^ 65535UL))) != 0xF9E3L) , &g_87), &l_1167, g_369.f8, &l_1407), 7)), 0x84A9L)) != l_1192), l_1412)) > 0x7EF9E0721091FE73LL);
                if ((((*g_569) >= ((g_55.f3 > (((g_55.f0 && (&g_569 != &g_967)) , (safe_rshift_func_uint16_t_u_s(g_55.f6, 14))) | (((l_1412 || (safe_add_func_int16_t_s_s(g_402, ((((&l_1306 == &l_1306) , 0x755FL) > g_723.f5) || 0x7DL)))) == 1UL) == (*l_1146)))) == 4294967295UL)) , l_1176))
                {
                    unsigned char l_1423 = 0x43L;
                    (*g_569) = (safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(1L, 8)) && (l_1182 != l_1194)), l_1264));
                }
                else
                {
                    (*l_1146) = 0L;
                }
            }
        }
        else
        {
            int **l_1424 = &g_967;
            int *l_1428 = &g_895;
            int *l_1429 = &g_706;
            int *l_1430 = (void*)0;
            int *l_1431 = &g_706;
            int *l_1432 = &g_895;
            int *l_1433 = &g_87;
            int *l_1434 = &g_87;
            int *l_1435 = &g_706;
            int *l_1436 = &g_87;
            int *l_1437 = &l_1147;
            int *l_1438 = &l_1147;
            int *l_1439 = &g_24;
            int *l_1440 = (void*)0;
            int *l_1441 = (void*)0;
            int *l_1442 = &g_24;
            int *l_1443 = &l_1167;
            int *l_1444 = &g_24;
            int *l_1445 = &g_87;
            int *l_1446 = &l_1147;
            int l_1447 = 0xC35DA2F2L;
            int *l_1448 = &g_24;
            int *l_1449 = &g_24;
            int *l_1450 = (void*)0;
            int *l_1451 = &l_1147;
            int *l_1452 = &l_1167;
            int *l_1453 = (void*)0;
            int *l_1454 = (void*)0;
            int *l_1455 = (void*)0;
            int *l_1457 = &l_1167;
            int *l_1458 = &g_24;
            int *l_1459 = &g_87;
            int *l_1460 = (void*)0;
            int *l_1461 = &g_895;
            int *l_1462 = (void*)0;
            int *l_1463 = (void*)0;
            int *l_1464 = &l_1167;
            int *l_1465 = &g_706;
            int *l_1466 = &g_706;
            int *l_1467 = &l_1447;
            int *l_1469 = (void*)0;
            int *l_1470 = &l_1468;
            int *l_1471 = &l_1456;
            int *l_1472 = (void*)0;
            int *l_1473 = &g_706;
            int *l_1474 = (void*)0;
            int *l_1475 = &g_706;
            int *l_1476 = (void*)0;
            int *l_1477 = &l_1147;
            int l_1478 = 0x7CE8210CL;
            int *l_1479 = &l_1478;
            int *l_1480 = &l_1456;
            int *l_1481 = &g_895;
            int *l_1482 = &g_706;
            int l_1483 = 1L;
            int *l_1484 = &l_1468;
            int *l_1486 = &l_1468;
            int *l_1487 = &l_1485;
            int *l_1488 = &g_706;
            int *l_1489 = &l_1447;
            int *l_1490 = &l_1447;
            int *l_1491 = &g_87;
            int *l_1492 = &l_1167;
            int *l_1493 = &l_1485;
            int *l_1494 = &l_1483;
            int *l_1496 = &l_1456;
            int *l_1497 = &g_895;
            int *l_1499 = &g_895;
            int *l_1500 = (void*)0;
            int *l_1501 = (void*)0;
            int *l_1502 = &l_1167;
            int *l_1503 = &g_87;
            int *l_1504 = &l_1495;
            int *l_1505 = &l_1485;
            int *l_1506 = &l_1495;
            int *l_1507 = &l_1167;
            int *l_1508 = &l_1478;
            int *l_1509 = &g_24;
            int *l_1510 = &l_1468;
            int *l_1511 = &l_1478;
            (*l_1424) = &l_1167;

            ;
            (**l_1424) &= ((g_356 != g_1157) && 5UL);
            g_1512--;
        }

        ;

        (*l_1524) = func_42(((g_1515 , (g_403 <= (((safe_lshift_func_int8_t_s_s(g_369.f0, 0)) <= ((((1L < g_723.f8) & func_6((safe_lshift_func_int16_t_s_s(g_895, 13)), (safe_mul_func_int16_t_s_s(0x1EE1L, g_449)))) && 1L) , g_723.f5)) == l_1167))) , l_1498), &g_706, &l_1147, &g_895);

        ;
        ;
        for (l_1485 = 0; (l_1485 > 17); ++l_1485)
        {
            unsigned l_1536 = 0x73F4E59DL;
            int l_1551 = (-2L);
            int *l_1552 = &l_1468;
            int *l_1553 = &g_87;
            int *l_1554 = &l_1456;
            int *l_1555 = &l_1498;
            int *l_1556 = &l_1498;
            int *l_1557 = &g_24;
            int *l_1558 = &l_1495;
            int *l_1559 = &l_1468;
            int *l_1560 = &g_895;
            int *l_1561 = &l_1167;
            int *l_1562 = &l_1147;
            int *l_1563 = &l_1147;
            int l_1564 = 1L;
            int *l_1565 = &l_1495;
            int *l_1566 = (void*)0;
            int *l_1567 = &l_1456;
            int *l_1569 = &l_1468;
            for (g_723.f6 = 0; (g_723.f6 == 14); ++g_723.f6)
            {
                (*l_1524) = l_1529;

                ;
                for (l_1182 = 0; (l_1182 >= (-15)); l_1182 = safe_sub_func_uint32_t_u_u(l_1182, 5))
                {
                    for (g_723.f2 = 7; (g_723.f2 >= 1); g_723.f2 = safe_sub_func_int64_t_s_s(g_723.f2, 2))
                    {
                        (*l_1529) = (safe_rshift_func_int16_t_s_u((g_460 , (**l_1524)), 1));
                    }
                }
                (*l_1145) ^= (-6L);
            }
            ++l_1536;
            l_1551 |= (safe_mul_func_int16_t_s_s((l_1536 | (~(safe_mod_func_uint32_t_u_u(l_1543, (safe_rshift_func_uint8_t_u_s(l_1546, (safe_rshift_func_int16_t_s_s((l_1536 && 5L), (safe_mod_func_uint64_t_u_u((*l_1145), (*l_1146))))))))))), ((3L != l_1536) || g_379.f1)));
            g_1570--;
        }

        ;
    }


    ;
    return g_453;
}







static unsigned short func_6(unsigned p_7, unsigned short p_8)
{
    int **l_1143 = &g_967;
    (*l_1143) = (void*)0;

    ;
    (*g_569) &= ((*l_1143) != (void*)0);
    (*g_569) &= (-2L);
    return g_723.f0;
}







static short func_14(int p_15)
{
    int *l_1129 = (void*)0;
    unsigned l_1138 = 0xC2BBE005L;
    int *l_1139 = (void*)0;
    (*g_569) = func_33(l_1129, &g_706, g_449, &g_24);
    return g_965;
}







static int func_16(char p_17, short p_18)
{
    int l_872 = 0xECCE02C5L;
    int l_925 = 0xB65A9A6FL;
    int l_926 = (-9L);
    int l_939 = 4L;
    struct S0 **l_958 = &g_378;
    int l_970 = 0xFD4B3F3EL;
    int **l_973 = &g_967;
    int l_1018 = 0xE88A8EA4L;
    int l_1021 = 0x485BB7C5L;
    int l_1056 = 0x68A52474L;
    int l_1072 = 3L;
    unsigned short l_1120 = 0xA968L;
    for (g_379.f0 = 19; (g_379.f0 > 51); g_379.f0 = safe_add_func_int16_t_s_s(g_379.f0, 1))
    {
        long long l_870 = 0L;
        struct S0 **l_871 = &g_378;
        l_872 ^= ((l_870 , l_871) != &g_378);
        return p_17;
    }
    for (g_723.f8 = (-2); (g_723.f8 == (-25)); g_723.f8 = safe_sub_func_uint64_t_u_u(g_723.f8, 1))
    {
        unsigned l_879 = 4294967295UL;
        int *l_894 = &g_895;
        int *l_896 = &g_706;
        int *l_897 = &l_872;
        int *l_898 = &g_706;
        int *l_899 = &g_87;
        int *l_900 = &g_87;
        int *l_901 = (void*)0;
        int *l_902 = &g_895;
        int *l_903 = &g_895;
        int *l_904 = (void*)0;
        int *l_905 = &g_706;
        int *l_906 = &g_895;
        int *l_907 = &g_706;
        int *l_908 = &g_24;
        int *l_909 = &g_895;
        int *l_910 = &g_24;
        int *l_911 = (void*)0;
        int *l_912 = (void*)0;
        int l_913 = 0x61E1EB6AL;
        int l_914 = 0x299B8E3CL;
        int *l_915 = &g_87;
        int *l_916 = &g_706;
        int l_917 = 0x3A54D176L;
        int l_918 = 0x59539614L;
        int *l_919 = (void*)0;
        int *l_920 = &g_87;
        int *l_921 = &l_913;
        int *l_922 = &l_914;
        int *l_923 = (void*)0;
        int l_924 = 0xDA758631L;
        int *l_927 = &g_24;
        int *l_928 = (void*)0;
        int *l_929 = &l_917;
        int *l_930 = &l_872;
        int *l_931 = &g_706;
        int *l_932 = &l_913;
        int *l_933 = &g_87;
        int *l_934 = &l_918;
        int *l_935 = &g_895;
        int *l_936 = (void*)0;
        int *l_937 = &l_917;
        int *l_938 = (void*)0;
        int *l_940 = &l_939;
        int *l_941 = &l_926;
        int *l_942 = (void*)0;
        unsigned l_943 = 0xD05E8F6FL;
        unsigned char l_953 = 255UL;
        volatile int *l_972 = &g_494;
        volatile int **l_971 = &l_972;
        (*l_894) ^= (safe_rshift_func_uint8_t_u_s((4294967295UL && ((safe_lshift_func_uint8_t_u_u((l_879 < (safe_rshift_func_int16_t_s_u((safe_div_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_u(((0xCFL > ((((((func_19(g_55.f4, (p_17 , (safe_add_func_int32_t_s_s((g_369.f2 , (0xFFB4B3FAL || (+(((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(g_55.f6, (safe_sub_func_uint8_t_u_u((0xD19F843FL > 5UL), g_369.f8)))) != p_18), g_87)) , l_879) & l_872)))), g_324)))) & 18446744073709551615UL) | p_17) | 0x8C2FD508L) > 0UL) ^ g_55.f8) ^ 0x026EL)) , g_723.f6), 1)) > g_723.f0) ^ g_723.f6), g_22)), p_17))), g_55.f5)) != 0UL)), 1));
        --l_943;
        for (g_22 = 0; (g_22 != (-2)); g_22 = safe_sub_func_int16_t_s_s(g_22, 4))
        {
            int *l_948 = (void*)0;
            unsigned long long l_966 = 18446744073709551615UL;
            l_948 = &l_924;

            ;
        }
        (*l_971) = &g_56;

        ;
    }
    (*l_973) = &g_895;

    ;
    if (func_31((*g_967)))
    {
        (*l_973) = (void*)0;

        ;
        for (g_369.f0 = 0; (g_369.f0 == 6); g_369.f0 = safe_add_func_uint8_t_u_u(g_369.f0, 1))
        {
            if (p_18)
                break;
        }
    }
    else
    {
        unsigned l_996 = 0x2E41EBEDL;
        int *l_1007 = (void*)0;
        int *l_1008 = &g_87;
        int *l_1009 = &g_87;
        int *l_1010 = &l_872;
        int *l_1011 = &l_872;
        int *l_1012 = &g_706;
        int *l_1013 = &l_925;
        int *l_1014 = &g_706;
        int *l_1015 = (void*)0;
        int *l_1016 = &g_895;
        int *l_1017 = &g_87;
        int *l_1019 = &l_939;
        int *l_1020 = &l_1018;
        int *l_1022 = &g_87;
        int *l_1023 = &g_706;
        int *l_1024 = &l_872;
        int *l_1025 = &g_895;
        int *l_1026 = &l_939;
        int *l_1027 = &l_872;
        int *l_1028 = &g_706;
        int *l_1029 = &l_872;
        int *l_1030 = &l_872;
        int *l_1031 = &g_24;
        int *l_1032 = (void*)0;
        int *l_1033 = &g_895;
        int *l_1034 = &g_87;
        int *l_1035 = &g_24;
        int *l_1036 = (void*)0;
        int *l_1037 = &l_1018;
        int *l_1038 = &g_24;
        int *l_1039 = &g_87;
        int *l_1040 = &l_1018;
        int *l_1041 = &l_925;
        int *l_1042 = &l_925;
        int *l_1043 = &l_926;
        int *l_1044 = &g_706;
        int l_1045 = 1L;
        int l_1046 = 0L;
        int *l_1047 = &g_895;
        int *l_1048 = &l_939;
        int l_1049 = 0x8C5BE1E5L;
        int *l_1050 = (void*)0;
        int *l_1051 = (void*)0;
        int *l_1052 = (void*)0;
        int *l_1053 = (void*)0;
        int *l_1054 = &l_1049;
        int *l_1055 = &g_24;
        int *l_1057 = (void*)0;
        int *l_1058 = &g_706;
        int *l_1059 = (void*)0;
        int *l_1060 = &l_925;
        int *l_1061 = &l_1046;
        int *l_1062 = &l_939;
        int *l_1063 = (void*)0;
        int *l_1064 = &l_1045;
        int *l_1065 = &g_87;
        int *l_1066 = &g_24;
        int *l_1067 = (void*)0;
        int *l_1068 = &l_1045;
        int *l_1069 = &l_1045;
        int l_1070 = (-8L);
        int *l_1071 = &l_872;
        int *l_1073 = &l_1070;
        int *l_1074 = &l_1049;
        int *l_1075 = &l_1046;
        int *l_1076 = &g_24;
        int *l_1077 = &g_706;
        int *l_1078 = &l_939;
        int *l_1079 = &g_895;
        int *l_1080 = &g_706;
        int *l_1081 = &l_1045;
        int *l_1082 = &g_24;
        int *l_1083 = &l_1070;
        for (g_369.f8 = 0; (g_369.f8 > 1); g_369.f8 = safe_add_func_int8_t_s_s(g_369.f8, 8))
        {
            int *l_978 = &l_926;
            int *l_979 = &l_925;
            int *l_980 = &g_87;
            int *l_981 = &g_895;
            int *l_982 = &l_939;
            int *l_983 = &g_706;
            int *l_984 = &g_706;
            int *l_985 = &l_925;
            int *l_986 = &g_895;
            int *l_987 = (void*)0;
            int *l_988 = (void*)0;
            int *l_989 = &l_925;
            int *l_990 = &l_939;
            int *l_991 = &l_939;
            int *l_992 = &g_24;
            int *l_993 = &l_926;
            int *l_994 = &l_926;
            int *l_995 = &g_87;
            l_996++;
            (**l_973) = (safe_mul_func_uint8_t_u_u(0xB8L, (*l_980)));
        }
        (**l_973) = func_19(func_19(p_18, g_379.f4), ((4294967293UL == (*g_967)) == p_18));
        g_1084++;
        for (g_369.f2 = (-24); (g_369.f2 != 26); g_369.f2 = safe_add_func_uint16_t_u_u(g_369.f2, 9))
        {
            int l_1089 = 0x4E82E8FBL;
            int l_1090 = 0xCA462831L;
            int l_1091 = 0x40AD02C0L;
            int *l_1092 = &g_706;
            int *l_1093 = &g_706;
            int *l_1094 = &l_1072;
            int *l_1095 = &l_1049;
            int *l_1096 = &l_939;
            int *l_1097 = &l_1046;
            int *l_1098 = &l_1046;
            int *l_1099 = &l_1018;
            int l_1100 = (-9L);
            int *l_1101 = &l_1100;
            int *l_1102 = &g_87;
            int *l_1103 = &l_1049;
            int *l_1104 = &g_87;
            int l_1105 = 0x6D48C509L;
            int *l_1106 = &l_1070;
            int *l_1107 = &l_1100;
            int *l_1108 = &g_87;
            int *l_1109 = (void*)0;
            int l_1110 = (-1L);
            int *l_1111 = &l_1046;
            unsigned l_1112 = 0xD80FB5DFL;
            ++l_1112;
            if (p_17)
            {
                (*l_1083) = (*l_1064);
            }
            else
            {
                unsigned char l_1115 = 246UL;
                l_1115--;
            }
            (*l_1103) = (safe_sub_func_int16_t_s_s(g_324, ((l_1120 , 8L) == (safe_div_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u((**l_973), p_17)), (safe_div_func_uint64_t_u_u((*l_1103), ((*l_1099) , p_18))))) , g_453), 9L)))));
            (*l_973) = &l_1049;

            ;
        }

        ;
    }


    return p_17;
}







static char func_19(char p_20, unsigned short p_21)
{
    int *l_23 = &g_24;
    unsigned short l_865 = 8UL;
    unsigned l_866 = 0x64FB8BECL;
    int *l_867 = &g_706;
    (*l_23) &= g_22;
    (*l_23) = (((safe_mul_func_int16_t_s_s(g_22, func_27(l_23, (*l_23), func_31(func_33(func_38(func_42((safe_lshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(g_22, (((void*)0 == l_23) , (safe_rshift_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(g_24, (g_55 , ((p_21 || p_21) == 0L)))) >= p_20) > (*l_23)), 7))))), 0)), l_23, l_23, l_23), g_55.f5, l_23), l_23, g_369.f8, &g_24))))) | g_723.f5) ^ 0xDEC1L);
    (*l_867) ^= (((((-8L) < (safe_rshift_func_int16_t_s_u((((*g_377) != (*g_377)) != 0xE2E9L), ((func_31(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((*l_23), 65535UL)), ((*l_23) < (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_56, (((safe_mod_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_s(p_20, (*l_23))) != l_865) , p_21) , (*l_23)), 0xF1BC9D70L)) != 0x36127EAECD1BFA40LL) > g_379.f0))), 0x90L))))) , l_866)) & 0UL) , g_379.f0)))) || (*l_23)) , g_402) > (*l_23));
    return g_379.f4;
}







static unsigned short func_27(int * p_28, unsigned p_29, unsigned long long p_30)
{
    int *l_810 = &g_87;
    int *l_811 = &g_87;
    int *l_812 = &g_706;
    int *l_813 = &g_87;
    int *l_814 = &g_706;
    int *l_815 = &g_24;
    int *l_816 = &g_87;
    int *l_817 = &g_24;
    int *l_818 = &g_87;
    int *l_819 = &g_24;
    int *l_820 = &g_706;
    int *l_821 = &g_24;
    int *l_822 = &g_706;
    int l_823 = 5L;
    int *l_824 = &g_24;
    int l_825 = 1L;
    int *l_826 = &l_823;
    int *l_827 = &g_87;
    int *l_828 = &l_823;
    int *l_829 = &g_24;
    int *l_830 = (void*)0;
    int *l_831 = &g_24;
    int l_832 = 6L;
    int l_833 = 0x867BA512L;
    int *l_834 = &l_833;
    int *l_835 = &l_833;
    int *l_836 = &g_87;
    int *l_837 = &l_832;
    int *l_838 = &g_24;
    int *l_839 = (void*)0;
    int *l_840 = (void*)0;
    int l_841 = 0x41ED1B32L;
    unsigned short l_842 = 0xB931L;
    struct S0 *l_849 = &g_55;
    const char l_850 = 6L;
    --l_842;
    g_706 &= (((safe_mod_func_uint32_t_u_u(((~((func_33(&l_832, &l_832, p_30, p_28) == (*l_835)) <= (*g_569))) && ((((0xC9F4L || ((safe_lshift_func_uint16_t_u_u((p_29 | p_29), 10)) || (*l_828))) , l_849) != l_849) || p_30)), 0x05B0582FL)) ^ p_30) == (*l_827));
    (*p_28) &= l_850;
    (*l_821) ^= ((**g_377) , (-1L));
    return p_30;
}







static unsigned long long func_31(int p_32)
{
    int **l_539 = (void*)0;
    int *l_541 = &g_24;
    int **l_540 = &l_541;
    const struct S0 **l_546 = (void*)0;
    const struct S0 ***l_545 = &l_546;
    int *l_568 = &g_24;
    int *l_571 = &g_24;
    int l_584 = 9L;
    int l_617 = 1L;
    int l_621 = 8L;
    int l_639 = 1L;
    int l_675 = 0xE6AB817CL;
    int l_691 = (-1L);
    (*l_540) = &p_32;

    ;
    if (func_33(&g_24, func_38((*l_540), g_369.f6, &g_24), (((p_32 <= g_55.f2) , (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(((p_32 , l_545) == &l_546))), p_32))) || p_32), &g_24))
    {
        unsigned l_547 = 2UL;
        return l_547;
    }
    else
    {
        unsigned char l_552 = 0UL;
        char l_567 = 0xC0L;
        int *l_573 = (void*)0;
        int l_575 = (-1L);
        int l_592 = 0x2A50D181L;
        int l_596 = (-4L);
        int l_608 = 1L;
        int l_657 = (-1L);
        int l_670 = 0xDA4BF65BL;
        struct S0 *l_721 = (void*)0;
        int *l_724 = &l_621;
        int *l_725 = (void*)0;
        int *l_726 = &l_639;
        int *l_727 = &l_675;
        int *l_728 = (void*)0;
        int *l_729 = &l_691;
        int *l_730 = &l_657;
        int *l_731 = &l_575;
        int *l_732 = &g_706;
        int *l_733 = &l_670;
        int *l_734 = (void*)0;
        int *l_735 = &l_575;
        int *l_736 = &l_617;
        int *l_737 = &l_691;
        int *l_738 = &l_584;
        int *l_739 = &l_584;
        int *l_740 = &l_608;
        int *l_741 = &g_706;
        int *l_742 = &l_675;
        int *l_743 = (void*)0;
        int *l_744 = (void*)0;
        int *l_745 = &l_617;
        int *l_746 = &g_87;
        int *l_747 = &l_675;
        int *l_751 = &l_691;
        int *l_752 = &l_592;
        int *l_753 = &l_584;
        int *l_754 = &l_617;
        int *l_755 = (void*)0;
        int *l_756 = &g_706;
        int *l_757 = (void*)0;
        int *l_758 = &l_657;
        int *l_759 = &g_706;
        int *l_760 = &g_706;
        int *l_761 = (void*)0;
        int *l_762 = &l_584;
        int *l_763 = (void*)0;
        int *l_764 = (void*)0;
        int *l_765 = &l_592;
        int *l_766 = &l_621;
        int *l_767 = &l_657;
        int *l_768 = &g_706;
        int *l_769 = &l_691;
        int *l_770 = (void*)0;
        int *l_771 = &l_675;
        int *l_772 = (void*)0;
        int *l_773 = &l_617;
        int *l_774 = &l_657;
        int *l_775 = &l_639;
        int *l_776 = &l_575;
        int *l_777 = &l_675;
        int *l_778 = (void*)0;
        int *l_779 = &l_592;
        int *l_780 = &l_621;
        int *l_781 = &g_87;
        int *l_782 = &l_670;
        short l_783 = 0L;
        int *l_784 = &l_639;
        int *l_785 = &l_617;
        int *l_786 = &l_675;
        int *l_787 = &l_675;
        int *l_788 = &g_87;
        int *l_789 = &g_706;
        int *l_790 = &l_691;
        int *l_791 = &l_657;
        int *l_792 = &l_592;
        int *l_793 = &g_87;
        int *l_794 = &l_675;
        int *l_795 = &l_675;
        int *l_796 = &l_575;
        int *l_797 = &l_670;
        int *l_798 = &g_706;
        int *l_799 = &l_608;
        int *l_800 = &l_639;
        int *l_801 = &l_617;
        int *l_802 = (void*)0;
        int *l_803 = &l_621;
        int *l_804 = &l_657;
        int *l_805 = &l_617;
        int *l_806 = &l_575;
        if ((safe_mod_func_uint32_t_u_u(((((*l_541) ^ 253UL) == (((safe_lshift_func_uint8_t_u_s(4UL, (g_369.f8 != ((**l_540) || (p_32 , (l_552 != ((**l_540) ^ ((g_460 < g_402) != p_32)))))))) & p_32) || 0xAEAAL)) == (-1L)), 1UL)))
        {
            for (g_379.f6 = 0; (g_379.f6 >= (-10)); g_379.f6 = safe_sub_func_uint32_t_u_u(g_379.f6, 9))
            {
                return g_324;
            }
            (*l_541) = 0x1019B404L;
            g_569 = (((safe_mod_func_uint32_t_u_u(l_552, (safe_rshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s(((safe_div_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(func_33((((p_32 , g_453) >= l_567) , &p_32), &g_87, l_552, &g_24), (-9L))), l_567)) | 1L), p_32)), 8)))) , g_369.f3) , l_568);

            ;
        }
        else
        {
            int *l_570 = &g_24;
            int l_572 = 0L;
            short l_574 = 0x3655L;
            int *l_576 = &g_87;
            int *l_577 = &l_575;
            int *l_578 = &l_575;
            int *l_579 = &g_87;
            int *l_580 = &l_575;
            int *l_581 = &g_87;
            int *l_582 = &l_575;
            int *l_583 = &l_575;
            int *l_585 = &l_575;
            int *l_586 = &g_87;
            int *l_587 = (void*)0;
            int l_588 = 4L;
            int *l_589 = &g_87;
            int *l_590 = &l_584;
            int *l_591 = (void*)0;
            int *l_593 = &l_584;
            int *l_594 = (void*)0;
            int *l_595 = (void*)0;
            int *l_597 = &l_575;
            int *l_598 = &l_584;
            int *l_599 = &l_584;
            int *l_600 = &l_592;
            int *l_601 = &l_584;
            int *l_602 = &l_575;
            int *l_603 = &l_584;
            int *l_604 = &l_592;
            int *l_605 = (void*)0;
            int *l_606 = &l_592;
            int *l_607 = (void*)0;
            int *l_609 = &l_584;
            int *l_610 = (void*)0;
            int *l_611 = &l_608;
            int *l_612 = &g_87;
            int *l_613 = &g_87;
            int *l_614 = &l_584;
            int *l_615 = &l_608;
            int *l_616 = &l_584;
            int *l_618 = &l_588;
            int *l_619 = (void*)0;
            int *l_620 = (void*)0;
            int *l_622 = &l_621;
            int *l_623 = &l_608;
            int *l_624 = &l_575;
            int *l_625 = &l_592;
            int *l_626 = (void*)0;
            int *l_627 = &l_592;
            int *l_628 = &g_87;
            int *l_629 = (void*)0;
            int *l_630 = (void*)0;
            int *l_631 = &l_617;
            int *l_632 = (void*)0;
            int *l_633 = &g_87;
            int *l_634 = &l_575;
            int *l_635 = &l_617;
            int *l_636 = (void*)0;
            int *l_637 = &l_584;
            int *l_638 = &l_621;
            int *l_640 = &l_588;
            int *l_641 = &l_617;
            int *l_642 = &l_608;
            int *l_643 = &l_575;
            int *l_644 = &l_621;
            int *l_645 = &l_584;
            int *l_646 = &l_592;
            int *l_647 = &l_639;
            int *l_648 = &l_617;
            int *l_649 = &l_592;
            int *l_650 = &l_592;
            int *l_651 = &l_617;
            int *l_652 = &l_588;
            int *l_653 = (void*)0;
            int *l_654 = (void*)0;
            int *l_655 = (void*)0;
            int *l_656 = &l_575;
            int *l_658 = &l_608;
            int *l_659 = &g_87;
            int *l_660 = &g_87;
            int *l_661 = &l_621;
            int *l_662 = &l_588;
            int *l_663 = (void*)0;
            int *l_664 = &l_588;
            int *l_665 = &l_621;
            int *l_666 = &l_584;
            int *l_667 = &l_617;
            int *l_668 = &l_575;
            int *l_669 = &l_617;
            int l_671 = 1L;
            int *l_672 = &g_87;
            int *l_673 = &l_588;
            int *l_674 = (void*)0;
            int *l_676 = &l_592;
            int *l_677 = &l_575;
            int *l_678 = &l_588;
            int *l_679 = &l_575;
            int *l_680 = &g_87;
            int *l_681 = (void*)0;
            int *l_682 = &l_671;
            int *l_683 = &l_671;
            int *l_684 = &l_592;
            int *l_685 = &g_87;
            int *l_686 = &l_670;
            int l_687 = 0L;
            int *l_688 = &l_584;
            int *l_689 = &l_592;
            int *l_690 = &l_608;
            int *l_692 = (void*)0;
            int *l_693 = &l_617;
            int *l_694 = &l_608;
            int *l_695 = &g_87;
            int *l_696 = &l_691;
            int *l_697 = &l_617;
            int *l_698 = &l_617;
            int *l_699 = &l_670;
            int *l_700 = &l_670;
            int *l_701 = &l_617;
            int *l_702 = &l_608;
            int *l_703 = (void*)0;
            int *l_704 = &l_687;
            int l_705 = 0x925916D4L;
            int l_707 = 0x922CB8CFL;
            int *l_708 = (void*)0;
            int *l_709 = &l_675;
            int *l_710 = &l_575;
            int *l_711 = &g_87;
            int *l_712 = &l_575;
            int *l_713 = &l_584;
            int *l_714 = (void*)0;
            int *l_715 = &l_691;
            int *l_716 = &g_706;
            int *l_717 = &l_707;
            struct S0 *l_722 = &g_723;
            l_575 |= (func_33(&g_87, &g_87, func_33(&g_87, &p_32, func_33(l_570, &p_32, p_32, &g_87), &g_24), l_570) == l_574);
            p_32 = 1L;
            ++g_718;
            l_722 = l_721;

            ;
        }
        ++g_748;
        (*l_740) = 0L;
        --g_807;
    }
    return g_319;
}







static int func_33(int * p_34, int * p_35, const unsigned long long p_36, int * p_37)
{
    volatile int *l_464 = &g_56;
    volatile int **l_463 = &l_464;
    int l_535 = 0x144BB95EL;
    (*l_463) = &g_56;
    for (g_324 = 19; (g_324 == (-19)); g_324 = safe_sub_func_uint16_t_u_u(g_324, 6))
    {
        int *l_467 = &g_87;
        int l_468 = 0xFBDC08B3L;
        int *l_469 = &g_87;
        int *l_470 = (void*)0;
        int *l_471 = &g_87;
        int *l_472 = &g_87;
        int *l_473 = &g_87;
        int *l_474 = &g_87;
        int *l_475 = &g_87;
        int *l_476 = &g_87;
        int *l_477 = (void*)0;
        int *l_478 = &g_87;
        int *l_479 = &l_468;
        int *l_480 = &g_87;
        int *l_481 = &l_468;
        int *l_482 = &g_87;
        int *l_483 = &l_468;
        int *l_484 = &g_87;
        int *l_485 = &g_87;
        int *l_486 = &g_87;
        int *l_487 = &g_87;
        int *l_488 = &g_87;
        int *l_489 = &l_468;
        int *l_490 = &l_468;
        int *l_491 = (void*)0;
        int *l_492 = &l_468;
        int *l_493 = &l_468;
        int *l_495 = &g_87;
        int *l_496 = &g_87;
        int l_497 = (-1L);
        int *l_498 = &g_87;
        int *l_499 = &g_87;
        int l_500 = 0xDEFB31ECL;
        int *l_501 = &l_468;
        int *l_502 = (void*)0;
        int *l_503 = &l_497;
        int *l_504 = &g_87;
        int *l_505 = &l_500;
        int *l_506 = &g_87;
        char l_507 = 0L;
        int l_508 = 0x26E57CC7L;
        int *l_509 = &g_87;
        int *l_510 = (void*)0;
        int l_511 = 9L;
        int *l_512 = &l_511;
        int *l_513 = &l_508;
        int *l_514 = &g_87;
        int *l_515 = (void*)0;
        int *l_516 = &l_497;
        int *l_517 = (void*)0;
        int *l_518 = (void*)0;
        int *l_519 = &l_497;
        int *l_520 = &g_87;
        int *l_521 = &l_500;
        unsigned short l_522 = 65532UL;
        struct S0 * const *l_538 = &g_378;
        ++l_522;
        for (g_369.f0 = 14; (g_369.f0 <= 60); g_369.f0 = safe_add_func_int16_t_s_s(g_369.f0, 9))
        {
            const short l_536 = (-10L);
            int l_537 = (-1L);
            l_537 = ((((((255UL & ((safe_add_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u(0xFEL, (g_453 <= 0x4E45L))) & (g_369.f6 , (safe_div_func_int32_t_s_s(g_402, 0xDCBFC918L)))), 1UL)) <= (safe_add_func_int64_t_s_s(l_535, p_36)))) || g_369.f0) & (-7L)) <= (-8L)) < (*l_473)) >= l_536);
        }
        if ((*p_35))
            break;
        l_538 = (void*)0;

        ;
    }
    return (*l_464);
}







static int * func_38(int * p_39, int p_40, int * p_41)
{
    long long l_71 = 0x075D7B1ECBC59A62LL;
    int l_106 = 0x031552AEL;
    unsigned l_117 = 4294967295UL;
    unsigned l_126 = 0xB3C28C64L;
    int *l_138 = (void*)0;
    int *l_230 = &g_87;
    short l_233 = 1L;
    int *l_235 = &g_87;
    unsigned l_237 = 3UL;
    int l_320 = 0xDAE69F5BL;
    int l_321 = 0xF6E5673AL;
    struct S0 **l_360 = (void*)0;
    int *l_371 = &g_87;
    struct S0 ***l_383 = &l_360;
    int l_410 = 0L;
    int *l_411 = &g_87;
    int *l_412 = &l_106;
    int *l_413 = (void*)0;
    int *l_414 = &l_320;
    int *l_415 = &g_87;
    int *l_416 = &l_106;
    int *l_417 = &l_320;
    int *l_418 = &l_321;
    int *l_419 = &l_321;
    int *l_420 = &l_320;
    int *l_421 = &l_320;
    int *l_422 = (void*)0;
    int *l_423 = &l_320;
    int *l_424 = &l_320;
    int *l_425 = &l_106;
    int *l_426 = &l_106;
    int *l_427 = &l_321;
    int *l_428 = &g_87;
    int *l_429 = &l_320;
    int *l_430 = (void*)0;
    int *l_431 = (void*)0;
    int *l_432 = &l_320;
    int *l_433 = &l_321;
    int *l_434 = &l_106;
    int *l_435 = (void*)0;
    int *l_436 = &l_106;
    int l_437 = 0x8256006EL;
    int *l_438 = &l_106;
    int *l_439 = &l_321;
    int *l_440 = &g_87;
    int *l_441 = &g_87;
    int *l_442 = &g_87;
    int *l_443 = &l_437;
    int *l_444 = &l_320;
    int *l_445 = &l_320;
    int *l_446 = &g_87;
    int *l_447 = &l_437;
    int *l_448 = &l_106;
    int *l_450 = &l_106;
    int *l_451 = (void*)0;
    int *l_452 = &g_87;
    int *l_454 = &l_437;
    int *l_455 = &l_106;
    int *l_456 = (void*)0;
    int *l_457 = &l_106;
    int *l_458 = &l_321;
    int *l_459 = &l_321;
    if ((safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(p_40, 5)) || (g_55.f4 <= (l_71 <= g_55.f8))), (g_22 | 0x57A880E1L))))
    {
        unsigned short l_80 = 0x1BFDL;
        int * const *l_85 = (void*)0;
        int l_105 = (-1L);
        int l_110 = 0x2C906C22L;
        struct S0 * const l_120 = (void*)0;
        int l_203 = (-1L);
        int *l_217 = &l_110;
        int **l_226 = &l_217;
        if ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(g_55.f4, ((g_55.f2 , (safe_div_func_int32_t_s_s((((((((safe_lshift_func_uint16_t_u_u(l_80, 15)) | (safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(((void*)0 == l_85), g_55.f8)), g_22))) , 3UL) | 0xEEL) , (void*)0) != l_85) != p_40), 6UL))) == p_40))), 0L)))
        {
            int *l_86 = &g_87;
            int *l_88 = &g_87;
            int *l_89 = (void*)0;
            int *l_90 = (void*)0;
            int *l_91 = &g_87;
            int *l_92 = &g_87;
            int *l_93 = &g_87;
            int *l_94 = &g_87;
            int *l_95 = &g_87;
            int *l_96 = &g_87;
            int *l_97 = &g_87;
            int *l_98 = &g_87;
            int *l_99 = &g_87;
            int *l_100 = (void*)0;
            int *l_101 = &g_87;
            int *l_102 = &g_87;
            int *l_103 = &g_87;
            int *l_104 = &g_87;
            int *l_107 = &g_87;
            int *l_108 = &l_106;
            int *l_109 = &l_105;
            int *l_111 = &l_110;
            int *l_112 = &l_105;
            int *l_113 = &g_87;
            int *l_114 = &g_87;
            int *l_115 = (void*)0;
            int *l_116 = &g_87;
            struct S0 **l_121 = (void*)0;
            struct S0 *l_123 = &g_55;
            struct S0 **l_122 = &l_123;
            --l_117;
            (*l_109) ^= l_117;
            (*l_122) = l_120;

            ;
        }
        else
        {
            int l_133 = (-1L);
            int l_178 = 0x7506916AL;
            int l_202 = 1L;
            int **l_210 = &l_138;
            if ((((g_22 == (p_40 >= ((l_126 , l_85) != l_85))) != ((safe_sub_func_int64_t_s_s(((safe_add_func_uint32_t_u_u((0x83L != ((safe_rshift_func_uint16_t_u_u(g_55.f7, l_133)) >= ((((((void*)0 != &g_24) , p_40) <= g_55.f2) && p_40) >= p_40))), 7L)) & g_55.f5), p_40)) , p_40)) || g_87))
            {
                struct S0 **l_134 = (void*)0;
                struct S0 ***l_135 = &l_134;
                (*l_135) = l_134;
                return &g_24;


            }
            else
            {
                int *l_137 = &g_24;
                int **l_136 = &l_137;
                (*l_136) = &p_40;

                ;
                l_138 = func_42(p_40, (g_22 , &l_106), &g_87, func_42((((p_40 | p_40) ^ (0xDFL | (p_40 <= p_40))) || g_55.f5), &l_106, &l_110, &g_24));

                ;
                for (l_133 = (-4); (l_133 < (-14)); --l_133)
                {
                    unsigned l_141 = 0x4A76911FL;
                    (*l_136) = func_42(p_40, &g_87, (l_141 , &g_24), (*l_136));

                    ;
                    l_105 = (*p_41);
                }

                ;
                g_87 &= (*p_41);
            }

            ;
            for (l_110 = 0; (l_110 == 19); ++l_110)
            {
                int *l_144 = &l_105;
                int *l_145 = &l_105;
                int *l_146 = &l_105;
                int *l_147 = (void*)0;
                int *l_148 = (void*)0;
                int *l_149 = &l_106;
                int *l_150 = &l_133;
                int *l_151 = &l_133;
                int *l_152 = (void*)0;
                int *l_153 = &l_105;
                int *l_154 = &l_133;
                int *l_155 = &l_105;
                int *l_156 = &l_106;
                int *l_157 = (void*)0;
                int *l_158 = &l_133;
                int *l_159 = &g_87;
                int *l_160 = &l_106;
                int *l_161 = (void*)0;
                int *l_162 = &l_133;
                int *l_163 = &l_106;
                int *l_164 = &g_87;
                int *l_165 = (void*)0;
                int *l_166 = &l_133;
                int *l_167 = &l_106;
                int *l_168 = (void*)0;
                int *l_169 = (void*)0;
                int *l_170 = (void*)0;
                int *l_171 = &l_106;
                int *l_172 = &l_106;
                int *l_173 = &g_87;
                int *l_174 = &l_106;
                int *l_175 = &l_133;
                int *l_176 = &l_106;
                int *l_177 = &g_87;
                int *l_179 = (void*)0;
                int *l_180 = &l_106;
                int *l_181 = &l_106;
                int *l_182 = &l_133;
                int *l_183 = &l_178;
                int *l_184 = &l_133;
                int *l_185 = &l_178;
                int *l_186 = &l_106;
                int *l_187 = (void*)0;
                int *l_188 = &l_106;
                int *l_189 = &l_133;
                int *l_190 = &l_178;
                int *l_191 = (void*)0;
                int *l_192 = &l_105;
                int *l_193 = (void*)0;
                int *l_194 = &g_87;
                int *l_195 = &g_87;
                int *l_196 = &l_106;
                int *l_197 = &g_87;
                int *l_198 = &l_133;
                int *l_199 = (void*)0;
                int *l_200 = &l_133;
                int *l_201 = &l_178;
                int *l_204 = &l_133;
                int *l_205 = (void*)0;
                int *l_206 = &l_203;
                if (g_55.f0)
                    break;
                (*l_144) &= (*p_39);
                ++g_207;
            }
            (*l_210) = func_42(p_40, &g_24, &l_203, &g_87);
        }

        ;
        for (l_203 = (-24); (l_203 > (-11)); l_203 = safe_add_func_uint32_t_u_u(l_203, 7))
        {
            int **l_216 = &l_138;
            for (l_117 = 0; (l_117 >= 1); l_117 = safe_add_func_uint32_t_u_u(l_117, 1))
            {
                int *l_215 = &l_105;
                (*l_215) |= (*p_39);
            }
            (*l_216) = &g_87;

            ;
        }

        ;
        (*l_226) = func_42(p_40, l_217, func_42(((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(p_40, g_24)) , g_55.f1), (0x2DL == (*l_217)))), 3)) , (safe_div_func_int8_t_s_s(((((((0x2773L & (*l_217)) , (void*)0) == (void*)0) && 0xC227L) , (void*)0) != &g_87), g_55.f6))), &g_87, &l_105, &l_110), &g_24);

        ;
        g_56 ^= g_207;
    }
    else
    {
        int *l_227 = &g_87;
        (*l_227) = (g_55.f4 <= p_40);
        (*l_227) = g_56;
        (*l_227) = (safe_div_func_int32_t_s_s(g_55.f6, (*l_227)));
    }

    ;
    (*l_230) = (*p_41);
    if (g_55.f2)
    {
        const int l_234 = (-1L);
        int **l_236 = &l_235;
        (*l_236) = func_42(g_87, func_42(g_55.f6, func_42((((((*l_230) == (safe_mod_func_uint8_t_u_u(p_40, (l_233 ^ g_55.f3)))) != ((p_40 >= (0x8D45AB6BL == (g_207 & l_234))) & l_234)) , l_234) > 0x2A54L), &g_87, &g_24, &g_87), &l_106, &l_106), &l_106, l_235);

        ;
        (*l_230) = 0L;
        l_237--;
    }
    else
    {
        int *l_240 = &l_106;
        int *l_241 = &g_87;
        int *l_242 = &l_106;
        int *l_243 = &g_87;
        int *l_244 = &l_106;
        int *l_245 = &g_87;
        int *l_246 = &g_87;
        int *l_247 = &l_106;
        int *l_248 = &g_87;
        int *l_249 = &g_87;
        int *l_250 = &l_106;
        int *l_251 = &g_87;
        int l_252 = (-1L);
        int *l_253 = &l_252;
        int *l_254 = &g_87;
        int *l_255 = &l_106;
        int *l_256 = &l_106;
        int *l_257 = (void*)0;
        int *l_258 = &l_252;
        int *l_259 = &l_252;
        int *l_260 = &l_252;
        int *l_261 = &l_252;
        int *l_262 = &g_87;
        int *l_263 = &l_106;
        int *l_264 = (void*)0;
        int *l_265 = &l_252;
        int *l_266 = &l_252;
        int *l_267 = (void*)0;
        int *l_268 = &l_252;
        int *l_269 = &l_252;
        int *l_270 = &g_87;
        int *l_271 = &l_252;
        int *l_272 = &l_106;
        int *l_273 = (void*)0;
        int *l_274 = &l_252;
        int *l_275 = &l_252;
        int l_276 = (-10L);
        int *l_277 = &l_276;
        int *l_278 = &l_276;
        int *l_279 = &l_106;
        int *l_280 = &l_276;
        int *l_281 = (void*)0;
        int *l_282 = &l_252;
        int *l_283 = &l_106;
        int *l_284 = &l_106;
        int *l_285 = &l_106;
        int *l_286 = &l_276;
        int *l_287 = (void*)0;
        int *l_288 = (void*)0;
        int *l_289 = &l_276;
        int l_290 = 4L;
        int *l_291 = &l_276;
        int *l_292 = (void*)0;
        int *l_293 = (void*)0;
        int *l_294 = &g_87;
        int *l_295 = &l_252;
        int l_296 = (-8L);
        int *l_297 = &l_106;
        int *l_298 = &l_106;
        int *l_299 = &l_296;
        int *l_300 = &l_290;
        int *l_301 = &g_87;
        int *l_302 = (void*)0;
        int *l_303 = &l_296;
        int *l_304 = &l_290;
        int *l_305 = (void*)0;
        int *l_306 = &l_276;
        int *l_307 = &l_106;
        int *l_308 = (void*)0;
        int *l_309 = &g_87;
        int *l_310 = &l_252;
        int l_311 = 0xDAB54255L;
        int *l_312 = &l_106;
        int *l_313 = &g_87;
        int *l_314 = (void*)0;
        int *l_315 = &l_311;
        int *l_316 = &l_276;
        int *l_317 = &g_87;
        int *l_318 = &l_290;
        int *l_322 = (void*)0;
        int *l_323 = &g_87;
        int *l_325 = (void*)0;
        int *l_326 = &l_290;
        int *l_327 = &l_276;
        int l_328 = (-9L);
        int *l_329 = &l_290;
        int l_330 = 0L;
        int *l_331 = &l_106;
        int *l_332 = (void*)0;
        int *l_333 = (void*)0;
        int *l_334 = &l_330;
        int *l_335 = &l_276;
        int *l_336 = &l_330;
        int *l_337 = &l_290;
        struct S0 *l_343 = (void*)0;
        short l_407 = 0x77AAL;
        struct S0 **l_409 = &g_378;
        --g_338;
        if (g_55.f2)
        {
            int **l_341 = (void*)0;
            int **l_342 = &l_312;
            int l_352 = 0L;
            int l_354 = 0x866EE0FFL;
            (*l_342) = (void*)0;

            ;
            (*l_294) = 1L;
            if (g_55.f5)
            {
                struct S0 **l_344 = &l_343;
                (*l_344) = l_343;
            }
            else
            {
                unsigned char l_345 = 0xEBL;
                struct S0 *l_351 = (void*)0;
                int l_353 = 0xD4868E2EL;
                int l_355 = 0x0AEBB82BL;
                l_345--;
                for (g_55.f6 = (-14); (g_55.f6 >= (-26)); --g_55.f6)
                {
                    struct S0 **l_350 = (void*)0;
                    l_351 = &g_55;

                    ;
                    (*l_315) = (0x66744F56941D114ALL <= l_345);
                }

                ;
                ++g_356;
            }
            p_39 = &g_87;

            ;
        }
        else
        {
            int *l_359 = &l_328;
            int **l_408 = &l_335;
            if ((*p_41))
            {
                int **l_361 = &l_301;
                (*l_250) ^= (1L < g_55.f7);
                (*l_361) = func_42(g_55.f5, l_359, func_42(p_40, l_359, &g_24, (g_55.f1 , &p_40)), (((void*)0 == l_360) , &g_87));

                ;
            }
            else
            {
                short l_372 = (-1L);
                int l_382 = 0x9F885BBEL;
                int l_401 = 0x2F05AABCL;
                for (l_233 = 0; (l_233 >= 0); l_233 = safe_add_func_uint64_t_u_u(l_233, 9))
                {
                    unsigned l_364 = 7UL;
                    int **l_370 = &l_262;
                    --l_364;
                    (*l_370) = func_42((g_55 , ((safe_mod_func_int8_t_s_s(0x67L, 255UL)) , (g_369 , g_55.f6))), &g_24, l_359, &g_87);

                    ;
                    return l_371;


                }
                l_372 ^= (g_369.f6 , (*p_39));
                if ((((!(safe_mod_func_int64_t_s_s(g_356, ((safe_sub_func_int32_t_s_s((((void*)0 != g_377) , (safe_lshift_func_uint8_t_u_u((((((g_379.f8 >= (((l_382 <= p_40) <= ((((6L == (&g_87 == (void*)0)) != p_40) , 18446744073709551615UL) , 1L)) , 5UL)) < 0x2238L) < p_40) > l_382) == p_40), p_40))), g_55.f6)) , p_40)))) , g_369.f1) ^ l_372))
                {
                    unsigned short l_388 = 65535UL;
                    int l_399 = 0xC02C5358L;
                    int l_400 = 0x1E7A812AL;
                    if ((*p_41))
                    {
                        (*l_309) ^= (~((g_55.f4 , l_343) != l_343));
                    }
                    else
                    {
                        return &g_87;


                    }
                    (*l_244) |= ((void*)0 != l_383);
                    if ((*p_41))
                    {
                        return &g_24;


                    }
                    else
                    {
                        volatile int *l_385 = (void*)0;
                        volatile int **l_384 = &l_385;
                        (*l_384) = &g_56;

                        ;
                        (*l_309) |= (safe_mul_func_int16_t_s_s((p_40 & (l_388 > (((-10L) & l_372) > (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((p_40 || l_388), 4)) >= 0xF0L), (safe_mod_func_uint16_t_u_u(65528UL, (safe_mod_func_int64_t_s_s(((void*)0 != &g_56), p_40)))))), 0x6BL))))), g_379.f2));
                        ++g_403;
                        (*l_262) = (*l_385);
                    }
                }
                else
                {
                    int **l_406 = &l_298;
                    (*l_406) = func_42(p_40, &p_40, &l_321, func_42(g_379.f3, &g_87, &g_87, &g_87));

                    ;
                    (*l_262) = 0x0E9CB2D0L;
                    return &g_24;


                }
            }

            ;
            (*l_408) = func_42(l_407, &g_24, l_359, l_359);

            ;
            (*l_408) = func_42(g_369.f5, func_42((*l_359), &p_40, &p_40, (*l_408)), &p_40, &g_87);
            (*l_313) |= (l_409 != (void*)0);
        }


        ;
        ;
        ;
    }


    ;
    g_460--;
    return &g_87;


}







static int * func_42(unsigned p_43, int * p_44, int * p_45, int * p_46)
{
    int *l_59 = &g_24;
    unsigned l_64 = 0x35309F33L;
    volatile int *l_66 = &g_56;
    volatile int **l_65 = &l_66;
    g_56 ^= 0xE6B87C26L;
    (*l_65) = ((safe_rshift_func_uint16_t_u_s(((l_59 == (p_43 , &g_24)) != (safe_div_func_uint64_t_u_u((((*l_59) && ((p_43 >= g_24) <= p_43)) != (*l_59)), ((safe_add_func_int32_t_s_s(g_55.f5, l_64)) , (*l_59))))), p_43)) , &g_56);
    return l_59;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
    transparent_crc(g_55.f1, "g_55.f1", print_hash_value);
    transparent_crc(g_55.f2, "g_55.f2", print_hash_value);
    transparent_crc(g_55.f3, "g_55.f3", print_hash_value);
    transparent_crc(g_55.f4, "g_55.f4", print_hash_value);
    transparent_crc(g_55.f5, "g_55.f5", print_hash_value);
    transparent_crc(g_55.f6, "g_55.f6", print_hash_value);
    transparent_crc(g_55.f7, "g_55.f7", print_hash_value);
    transparent_crc(g_55.f8, "g_55.f8", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_369.f0, "g_369.f0", print_hash_value);
    transparent_crc(g_369.f1, "g_369.f1", print_hash_value);
    transparent_crc(g_369.f2, "g_369.f2", print_hash_value);
    transparent_crc(g_369.f3, "g_369.f3", print_hash_value);
    transparent_crc(g_369.f4, "g_369.f4", print_hash_value);
    transparent_crc(g_369.f5, "g_369.f5", print_hash_value);
    transparent_crc(g_369.f6, "g_369.f6", print_hash_value);
    transparent_crc(g_369.f7, "g_369.f7", print_hash_value);
    transparent_crc(g_369.f8, "g_369.f8", print_hash_value);
    transparent_crc(g_379.f0, "g_379.f0", print_hash_value);
    transparent_crc(g_379.f1, "g_379.f1", print_hash_value);
    transparent_crc(g_379.f2, "g_379.f2", print_hash_value);
    transparent_crc(g_379.f3, "g_379.f3", print_hash_value);
    transparent_crc(g_379.f4, "g_379.f4", print_hash_value);
    transparent_crc(g_379.f5, "g_379.f5", print_hash_value);
    transparent_crc(g_379.f6, "g_379.f6", print_hash_value);
    transparent_crc(g_379.f7, "g_379.f7", print_hash_value);
    transparent_crc(g_379.f8, "g_379.f8", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_706, "g_706", print_hash_value);
    transparent_crc(g_718, "g_718", print_hash_value);
    transparent_crc(g_723.f0, "g_723.f0", print_hash_value);
    transparent_crc(g_723.f1, "g_723.f1", print_hash_value);
    transparent_crc(g_723.f2, "g_723.f2", print_hash_value);
    transparent_crc(g_723.f3, "g_723.f3", print_hash_value);
    transparent_crc(g_723.f4, "g_723.f4", print_hash_value);
    transparent_crc(g_723.f5, "g_723.f5", print_hash_value);
    transparent_crc(g_723.f6, "g_723.f6", print_hash_value);
    transparent_crc(g_723.f7, "g_723.f7", print_hash_value);
    transparent_crc(g_723.f8, "g_723.f8", print_hash_value);
    transparent_crc(g_748, "g_748", print_hash_value);
    transparent_crc(g_807, "g_807", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    transparent_crc(g_965, "g_965", print_hash_value);
    transparent_crc(g_1084, "g_1084", print_hash_value);
    transparent_crc(g_1157, "g_1157", print_hash_value);
    transparent_crc(g_1512, "g_1512", print_hash_value);
    transparent_crc(g_1515.f0, "g_1515.f0", print_hash_value);
    transparent_crc(g_1515.f1, "g_1515.f1", print_hash_value);
    transparent_crc(g_1515.f2, "g_1515.f2", print_hash_value);
    transparent_crc(g_1515.f3, "g_1515.f3", print_hash_value);
    transparent_crc(g_1515.f4, "g_1515.f4", print_hash_value);
    transparent_crc(g_1515.f5, "g_1515.f5", print_hash_value);
    transparent_crc(g_1515.f6, "g_1515.f6", print_hash_value);
    transparent_crc(g_1515.f7, "g_1515.f7", print_hash_value);
    transparent_crc(g_1515.f8, "g_1515.f8", print_hash_value);
    transparent_crc(g_1570, "g_1570", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
