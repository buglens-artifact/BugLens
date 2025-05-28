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
   unsigned f0 : 22;
   signed f1 : 21;
   unsigned f2 : 4;
   unsigned f3 : 31;
   unsigned f4 : 20;
   signed f5 : 29;
   signed f6 : 8;
};


static int g_4 = (-1L);
static struct S0 g_7 = {634,-1275,1,15316,870,1224,6};
static unsigned g_25 = 0UL;
static int **g_77 = (void*)0;
static struct S0 g_80 = {905,-124,1,42951,126,-18653,14};
static unsigned short g_89 = 0UL;
static unsigned short g_96 = 0xF06EL;
static short g_102 = 8L;
static unsigned long long g_117 = 18446744073709551606UL;
static long long g_120 = 0xFC8EE3FDE7498C5FLL;
static unsigned char g_123 = 0UL;
static unsigned char g_183 = 0x05L;
static unsigned long long g_233 = 0x338F47762CD2BE79LL;
static unsigned short g_253 = 0x27ADL;
static struct S0 *g_340 = &g_80;
static int *g_361 = &g_4;
static short *g_400 = &g_102;
static short **g_399 = &g_400;
static short g_450 = 1L;
static unsigned long long g_523 = 8UL;
static unsigned g_529 = 8UL;
static unsigned char g_607 = 255UL;
static int g_620 = (-5L);
static int g_622 = 0xDF4331F7L;
static char g_635 = 0x10L;
static int g_677 = (-10L);
static unsigned char *g_697 = &g_607;
static unsigned char **g_696 = &g_697;
static unsigned char **g_699 = &g_697;
static char g_710 = (-1L);
static char g_790 = 0L;
static unsigned g_792 = 0x9D266918L;
static long long g_914 = 0L;
static short g_932 = (-3L);
static unsigned short g_937 = 7UL;
static unsigned char **g_948 = &g_697;
static unsigned g_1101 = 0x85FBFEE2L;
static char g_1125 = 1L;
static unsigned short g_1244 = 0x9D4AL;
static unsigned short g_1273 = 0x6159L;
static unsigned g_1304 = 9UL;
static unsigned long long *g_1520 = &g_117;
static long long g_1637 = 0xDAC2884DF243D945LL;
static unsigned char g_1650 = 0UL;
static char g_1678 = 1L;
static unsigned *g_1723 = &g_25;
static unsigned **g_1722 = &g_1723;
static struct S0 g_1882 = {230,-793,3,32500,320,-12638,-7};



static unsigned long long func_1(void);
static struct S0 func_10(unsigned char p_11, int * p_12, unsigned p_13, short p_14, long long p_15);
static struct S0 func_18(unsigned long long p_19, unsigned char p_20, short p_21);
static unsigned char func_29(unsigned short p_30, int * p_31, unsigned p_32, int * p_33);
static short func_34(char p_35, char p_36);
static char func_39(unsigned short p_40, unsigned long long p_41, short p_42, short p_43, int * p_44);
static unsigned char func_50(int * p_51, int * p_52, struct S0 p_53);
static int * func_55(struct S0 p_56, unsigned char p_57, long long p_58);
static struct S0 func_59(unsigned p_60, unsigned char p_61);
static int ** func_62(long long p_63, unsigned short p_64);
static unsigned long long func_1(void)
{
    unsigned l_2 = 0x0BA1BF2BL;
    int *l_3 = &g_4;
    int *l_16 = &g_4;
    unsigned long long l_17 = 0xA63A74ADF29855EELL;
    int *l_24 = &g_4;
    unsigned long long l_796 = 0UL;
    int l_2239 = 0L;
    struct S0 *l_2240 = &g_80;
    struct S0 l_2241 = {1740,474,2,6844,1013,15959,1};
    (*l_3) ^= l_2;
    l_2241 = ((*l_2240) = (g_4 , ((safe_lshift_func_uint16_t_u_u(0x2C36L, (g_7 , (safe_rshift_func_uint16_t_u_u(((func_10(((void*)0 != &g_4), l_16, l_17, (((func_18((!(g_25 = (safe_add_func_uint64_t_u_u(0x976B5A7DD9AE65C3LL, (l_3 == l_24))))), (*l_24), (*l_16)) , 7UL) || (**g_699)) || g_80.f0), l_796) , 9UL) != l_2239), g_1882.f5))))) , g_7)));




    ;
    return (*g_1520);
}







static struct S0 func_10(unsigned char p_11, int * p_12, unsigned p_13, short p_14, long long p_15)
{
    long long l_813 = 0xE51758D67EFEDBADLL;
    int l_818 = (-5L);
    int l_822 = 0x56584C18L;
    int l_834 = 2L;
    int l_848 = 1L;
    int l_862 = 1L;
    int l_881 = 0x0482F9EEL;
    int l_884 = 0xCB2FD846L;
    int l_898 = 0L;
    int l_918 = 0x426D9F76L;
    int l_927 = 0x26EDA249L;
    struct S0 *l_958 = &g_7;
    unsigned char *l_1117 = &g_183;
    unsigned l_1251 = 0xF42430F2L;
    unsigned char l_1307 = 0x78L;
    int *l_1524 = &l_918;
    unsigned l_1552 = 0xD4C93839L;
    int l_1569 = 0xBDAF4F3BL;
    unsigned long long *l_1700 = &g_523;
    unsigned char **l_1712 = &l_1117;
    char l_1846 = (-6L);
    int *l_1889 = &l_1569;
    int l_2122 = (-1L);
    unsigned long long l_2233 = 18446744073709551612UL;
lbl_1874:
    if ((*p_12))
    {
        int *l_797 = &g_4;
        int *l_798 = &g_620;
        int *l_799 = (void*)0;
        int *l_800 = &g_620;
        int *l_801 = &g_620;
        int *l_802 = &g_620;
        int *l_803 = &g_620;
        int *l_804 = &g_4;
        int *l_805 = &g_677;
        int *l_806 = &g_622;
        int *l_807 = &g_622;
        int *l_808 = &g_622;
        int *l_809 = &g_622;
        int *l_810 = &g_677;
        int l_811 = (-1L);
        int *l_812 = &g_622;
        int *l_814 = &g_677;
        int *l_815 = &g_622;
        int l_816 = (-1L);
        int *l_817 = &g_620;
        int *l_819 = &g_620;
        int *l_820 = &l_816;
        int *l_821 = (void*)0;
        int *l_823 = (void*)0;
        int *l_824 = &l_818;
        int *l_825 = &l_822;
        int l_826 = 0L;
        int *l_827 = &l_822;
        int *l_828 = &l_816;
        int *l_829 = &g_622;
        int *l_830 = &l_826;
        int l_831 = 0x1363A99EL;
        int *l_832 = &l_818;
        int *l_833 = &l_816;
        int *l_835 = &l_831;
        int *l_836 = (void*)0;
        int *l_837 = &l_834;
        int l_838 = 0x255D5288L;
        int *l_839 = &l_831;
        int *l_840 = &g_622;
        int *l_841 = &l_838;
        int *l_842 = &l_831;
        int *l_843 = &l_818;
        int *l_844 = &g_620;
        int *l_845 = (void*)0;
        int *l_846 = &l_826;
        int *l_847 = &g_4;
        int *l_849 = &l_834;
        int *l_850 = (void*)0;
        int *l_851 = &l_834;
        int *l_852 = (void*)0;
        int l_853 = (-7L);
        int *l_854 = &l_831;
        int *l_855 = (void*)0;
        int *l_856 = &g_677;
        int *l_857 = &l_838;
        int *l_858 = &l_848;
        int *l_859 = &g_620;
        int *l_860 = &g_622;
        int l_861 = 0xF8747779L;
        int *l_863 = &g_620;
        int *l_864 = &l_831;
        int *l_865 = &l_838;
        int *l_866 = &l_834;
        int *l_867 = &l_862;
        int l_868 = 0xC324E9AEL;
        int *l_869 = &l_861;
        int *l_870 = &g_622;
        int *l_871 = &l_811;
        int *l_872 = &g_677;
        int *l_873 = &l_853;
        int *l_874 = &l_848;
        int *l_875 = &l_853;
        int *l_876 = &l_831;
        int *l_877 = &l_818;
        int *l_878 = &l_861;
        int *l_879 = &l_822;
        int *l_880 = &g_4;
        int *l_882 = (void*)0;
        int l_883 = 1L;
        int *l_885 = (void*)0;
        int l_886 = 5L;
        int *l_887 = (void*)0;
        int *l_888 = &l_853;
        int *l_889 = &l_862;
        int *l_890 = &l_838;
        int *l_891 = &l_861;
        int *l_892 = (void*)0;
        int *l_893 = &l_826;
        int *l_894 = (void*)0;
        int *l_895 = &l_868;
        int *l_896 = (void*)0;
        int *l_897 = (void*)0;
        int *l_899 = &l_848;
        int l_900 = (-8L);
        int *l_901 = (void*)0;
        int *l_902 = &l_838;
        int *l_903 = &g_4;
        int *l_904 = &l_816;
        int *l_905 = (void*)0;
        int l_906 = 0x85D0EC21L;
        int *l_907 = &l_822;
        int *l_908 = &l_834;
        int *l_909 = &l_868;
        int *l_910 = &l_822;
        int *l_911 = (void*)0;
        int *l_912 = &l_898;
        int l_913 = 0L;
        int *l_915 = &l_853;
        int *l_916 = (void*)0;
        int *l_917 = &l_884;
        int *l_919 = &l_853;
        int *l_920 = (void*)0;
        int *l_921 = &l_853;
        int *l_922 = &l_811;
        int *l_923 = &g_620;
        int *l_924 = &l_822;
        int *l_925 = &l_900;
        int *l_926 = &l_868;
        int *l_928 = &l_811;
        int *l_929 = &l_881;
        int *l_930 = &l_868;
        int *l_931 = (void*)0;
        int *l_933 = &l_838;
        int *l_934 = &l_884;
        int *l_935 = (void*)0;
        int *l_936 = (void*)0;
        short **l_951 = &g_400;
        --g_937;
        (*l_880) &= 6L;
        if (((*p_12) |= 9L))
        {
            unsigned long long *l_940 = (void*)0;
            unsigned long long *l_941 = (void*)0;
            unsigned long long *l_942 = &g_523;
            struct S0 l_943 = {1561,-1303,3,9956,502,9622,15};
            (*l_820) ^= ((((*l_942) = g_102) ^ p_11) != p_11);
            return l_943;
        }
        else
        {
            unsigned char ***l_946 = &g_699;
            unsigned char ***l_947 = &g_696;
            g_361 = p_12;

            ;
            (*l_842) = (((*g_400) = func_29(p_14, p_12, p_15, p_12)) >= (safe_mod_func_int8_t_s_s(((p_11 & l_881) != (((*l_947) = ((*l_946) = &g_697)) == (g_948 = &g_697))), l_834)));
        }

        ;
        for (l_818 = 4; (l_818 >= 29); l_818++)
        {
            short ***l_952 = &l_951;
            (*l_952) = l_951;
        }
    }
    else
    {
        unsigned long long l_953 = 18446744073709551609UL;
        struct S0 **l_959 = (void*)0;
        struct S0 **l_960 = &g_340;
        unsigned short *l_961 = &g_937;
        unsigned l_964 = 0x7085C5D4L;
        int l_965 = 5L;
        int l_1047 = 0L;
        int l_1099 = 0x764D0BADL;
        short l_1126 = 0L;
        char *l_1266 = &g_1125;
        int **l_1274 = &g_361;
        unsigned l_1275 = 0x67C6649BL;
        unsigned char ***l_1522 = &g_696;
        unsigned long long l_1537 = 18446744073709551608UL;
        long long *l_1550 = (void*)0;
        struct S0 *l_1553 = &g_80;
        unsigned long long *l_1702 = &g_523;
        if (((l_965 ^= (l_953 ^ (safe_lshift_func_uint16_t_u_s((((safe_sub_func_uint32_t_u_u(((((((func_39(((*l_961) = ((((*l_960) = l_958) != (void*)0) > 0xABL)), ((9L <= (safe_sub_func_int16_t_s_s((l_953 == 0xE89759DFCCB9D443LL), (g_80 , (l_884 <= (*p_12)))))) != 1UL), (*g_400), p_15, p_12) >= l_898) || p_13) <= 0x7598C3E605667694LL) <= g_7.f4) | p_15) != g_117), l_964)) == 4UL) == 0xEA27C2E3E6FE7431LL), 5)))) != p_11))
        {
            int *l_975 = &g_620;
            struct S0 l_976 = {258,-874,1,5753,32,3879,7};
            char l_1082 = 0x94L;
            int l_1089 = 0L;
            int **l_1104 = &l_975;
            for (g_792 = 0; (g_792 > 17); g_792 = safe_add_func_int8_t_s_s(g_792, 7))
            {
                unsigned *l_968 = &l_964;
                int l_977 = 3L;
                char l_1059 = 1L;
            }
            (*l_1104) = p_12;

            ;
        }
        else
        {
            char l_1107 = (-8L);
            int *l_1108 = (void*)0;
            int **l_1109 = &l_1108;
            for (g_620 = 0; (g_620 < 4); g_620++)
            {
                if (l_1107)
                    break;
            }
            (*l_1109) = l_1108;
            for (g_4 = 6; (g_4 == (-24)); g_4--)
            {
                return (*l_958);
            }
        }

        ;
        for (l_818 = 0; (l_818 < 16); ++l_818)
        {
            int **l_1114 = &g_361;
            char *l_1120 = &g_710;
            char *l_1127 = &g_790;
            struct S0 l_1154 = {1886,-1434,3,9443,685,-5952,-3};
        }
        (*l_1274) = func_55(((((safe_rshift_func_int8_t_s_u(((g_80.f2 >= ((((g_80.f5 || ((*l_1266) = g_620)) != (((g_523 = ((g_1244 = l_1099) || (+((safe_mul_func_int16_t_s_s(p_13, l_1099)) , (safe_rshift_func_int8_t_s_u(((*l_958) , ((4294967287UL > ((safe_mod_func_int32_t_s_s(l_964, l_1126)) , l_822)) , g_1273)), 3)))))) == l_927) != l_881)) , &g_635) == l_1266)) || 5L), 3)) , g_790) < p_14) , (**l_960)), l_834, p_15);


        ;
        if (((func_50(p_12, &g_4, (*l_958)) ^ (l_848 && ((&l_1126 != &p_14) >= p_13))) ^ g_1125))
        {
            return g_80;
        }
        else
        {
            char l_1320 = (-10L);
            int l_1324 = 0x7EE2C99AL;
            int l_1330 = 6L;
            struct S0 l_1338 = {1417,-252,2,23874,329,-19912,15};
            int l_1469 = (-6L);
            int l_1480 = 0L;
            int l_1489 = 0x7B028AF9L;
            int l_1497 = 0x1276AE93L;
            int l_1498 = 0x435D89F1L;
            int l_1510 = (-9L);
            long long *l_1525 = &g_914;
            int *l_1526 = &l_848;
            int *l_1527 = &l_898;
            int *l_1528 = &l_898;
            int *l_1529 = &l_848;
            int *l_1530 = &g_677;
            int *l_1531 = (void*)0;
            int *l_1532 = &l_1324;
            int *l_1533 = &l_1469;
            int *l_1534 = &l_927;
            int *l_1535 = &l_818;
            int *l_1536 = &l_822;
            unsigned long long *l_1551 = (void*)0;
            for (g_233 = (-6); (g_233 >= 41); ++g_233)
            {
                unsigned char l_1291 = 0xEBL;
                struct S0 **l_1331 = &l_958;
                int *l_1337 = &g_677;
                int l_1377 = 0x1B4A4F1BL;
                int l_1388 = 0L;
                int l_1390 = 0x6C9AC66CL;
                int l_1492 = 0x9A29BC78L;
                int l_1514 = 0x458F0B7AL;
                unsigned char ***l_1523 = &g_696;
                (*l_960) = &g_80;

                ;
                if (((*p_12) = (*p_12)))
                {
                    unsigned l_1285 = 0UL;
                    (*l_1274) = &l_848;

                    ;
                    if (((**l_1274) = (**l_1274)))
                    {
                        unsigned long long l_1284 = 0x6B740A50EDF8F5ADLL;
                        int *l_1286 = &l_822;
                        (*l_1274) = (void*)0;

                        ;
                        (*l_1274) = &g_677;

                        ;
                        (*p_12) ^= (safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(0x315AL, (++(*l_961)))) | 0x0BL), ((l_1284 | 0xCCC3086EL) , ((!g_1244) >= func_29(g_7.f5, p_12, (l_1284 & ((**l_1274) , l_1285)), l_1286)))));
                    }
                    else
                    {
                        unsigned **l_1287 = (void*)0;
                        unsigned *l_1289 = &g_25;
                        unsigned **l_1288 = &l_1289;
                        unsigned *l_1290 = &l_1285;
                        (*g_361) &= (((*l_1288) = &p_13) != l_1290);

                        ;
                        l_1291 ^= (((*p_12) = ((**l_1274) = (-1L))) , 0x2A31E37FL);
                    }

                    ;
                }
                else
                {
                    unsigned l_1301 = 0x82F16D6BL;
                    int l_1313 = 0x31C5F446L;
                    int l_1358 = 0xE2714E93L;
                    int l_1435 = 0x5C1163CBL;
                    for (g_89 = 24; (g_89 != 53); g_89++)
                    {
                        int *l_1294 = &l_834;
                        int *l_1295 = &l_862;
                        int *l_1296 = &g_677;
                        int *l_1297 = &g_620;
                        int *l_1298 = &l_822;
                        int *l_1299 = &l_818;
                        int *l_1300 = &l_1047;
                        l_1301++;
                        (*l_1298) = (**l_1274);
                        g_1304++;
                    }
                    if (l_1307)
                        continue;
                    for (p_11 = (-18); (p_11 < 13); p_11 = safe_add_func_int16_t_s_s(p_11, 6))
                    {
                        int *l_1310 = &g_620;
                        int l_1311 = 0xB4E8CC5CL;
                        int *l_1312 = &g_677;
                        int *l_1314 = (void*)0;
                        int *l_1315 = &g_620;
                        int *l_1316 = &l_918;
                        int *l_1317 = &l_1311;
                        int *l_1318 = &l_1099;
                        int *l_1319 = &l_1047;
                        int *l_1321 = &l_848;
                        int *l_1322 = &l_881;
                        int *l_1323 = &l_1311;
                        unsigned char l_1325 = 0xA9L;
                        p_12 = p_12;
                        (*g_340) = (**l_960);
                        --l_1325;
                    }
                    for (g_620 = 19; (g_620 >= 4); g_620 = safe_sub_func_int64_t_s_s(g_620, 9))
                    {
                        struct S0 ***l_1332 = &l_959;
                        int l_1335 = 0x3731FD20L;
                        int *l_1336 = &l_965;
                        int *l_1339 = &l_1335;
                        int *l_1340 = &l_834;
                        int *l_1341 = &l_822;
                        int *l_1342 = (void*)0;
                        int *l_1343 = &l_898;
                        int *l_1344 = &l_965;
                        int *l_1345 = &g_622;
                        int *l_1346 = &l_822;
                        int *l_1347 = &l_1313;
                        int *l_1348 = &l_822;
                        int *l_1349 = &g_622;
                        int *l_1350 = &l_1335;
                        int *l_1351 = &l_965;
                        int *l_1352 = (void*)0;
                        int *l_1353 = &l_1047;
                        int *l_1354 = &g_677;
                        int *l_1355 = (void*)0;
                        int *l_1356 = &l_881;
                        int *l_1357 = &g_4;
                        int *l_1359 = &l_862;
                        int *l_1360 = &l_818;
                        int *l_1361 = (void*)0;
                        int *l_1362 = (void*)0;
                        int *l_1363 = &g_622;
                        int *l_1364 = &g_677;
                        int *l_1365 = &l_1324;
                        int *l_1366 = &l_822;
                        int *l_1367 = &l_965;
                        int *l_1368 = &l_1358;
                        int l_1369 = 9L;
                        int *l_1370 = &l_862;
                        int *l_1371 = &g_4;
                        int *l_1372 = &l_1313;
                        int *l_1373 = (void*)0;
                        int *l_1374 = &l_884;
                        int *l_1375 = &l_884;
                        int *l_1376 = (void*)0;
                        int *l_1378 = &l_898;
                        int *l_1379 = &l_1099;
                        int *l_1380 = &l_884;
                        int *l_1381 = &l_822;
                        int *l_1382 = &l_848;
                        int *l_1383 = &l_1324;
                        int *l_1384 = &l_1377;
                        int *l_1385 = &l_862;
                        int *l_1386 = &l_1335;
                        int *l_1387 = &l_1047;
                        int *l_1389 = &l_818;
                        int *l_1391 = &l_1388;
                        int *l_1392 = (void*)0;
                        int *l_1393 = &l_881;
                        int *l_1394 = &l_918;
                        int *l_1395 = &l_862;
                        int *l_1396 = (void*)0;
                        int *l_1397 = &l_822;
                        int *l_1398 = (void*)0;
                        int *l_1399 = &l_884;
                        int *l_1400 = &l_965;
                        int *l_1401 = (void*)0;
                        int *l_1402 = (void*)0;
                        int *l_1403 = (void*)0;
                        int *l_1404 = &l_1390;
                        int *l_1405 = &l_1099;
                        int *l_1406 = &l_1335;
                        int *l_1407 = &l_822;
                        int *l_1408 = &l_1047;
                        int *l_1409 = &l_1099;
                        int *l_1410 = &l_1324;
                        int *l_1411 = &l_898;
                        int *l_1412 = &l_1324;
                        int *l_1413 = (void*)0;
                        int *l_1414 = &l_1313;
                        int *l_1415 = &l_927;
                        int *l_1416 = &l_1047;
                        int *l_1417 = (void*)0;
                        int *l_1418 = &l_834;
                        int *l_1419 = (void*)0;
                        int *l_1420 = (void*)0;
                        int *l_1421 = &l_898;
                        int *l_1422 = &l_862;
                        int *l_1423 = &l_1390;
                        int *l_1424 = (void*)0;
                        int *l_1425 = &l_1377;
                        int *l_1426 = &l_1313;
                        int *l_1427 = &l_848;
                        int *l_1428 = &l_927;
                        int *l_1429 = &l_898;
                        int *l_1430 = &l_1388;
                        int *l_1431 = &l_1377;
                        int *l_1432 = &l_822;
                        int *l_1433 = &l_898;
                        int *l_1434 = &l_881;
                        int *l_1436 = &l_881;
                        int *l_1437 = &l_1358;
                        int *l_1438 = &l_884;
                        int *l_1439 = &l_1099;
                        int *l_1440 = &g_677;
                        int *l_1441 = &g_4;
                        int *l_1442 = &l_1099;
                        int *l_1443 = (void*)0;
                        int *l_1444 = &l_898;
                        int *l_1445 = &l_1435;
                        int *l_1446 = &l_1099;
                        int *l_1447 = &l_1047;
                        int *l_1448 = (void*)0;
                        int *l_1449 = (void*)0;
                        int *l_1450 = &l_818;
                        int *l_1451 = &g_677;
                        int *l_1452 = (void*)0;
                        int *l_1453 = &l_881;
                        int *l_1454 = &l_1377;
                        int *l_1455 = &l_1369;
                        int *l_1456 = (void*)0;
                        int *l_1457 = (void*)0;
                        int *l_1458 = &l_1335;
                        int *l_1459 = (void*)0;
                        int *l_1460 = (void*)0;
                        int l_1461 = 0x3F1E8F1EL;
                        int *l_1462 = &l_1377;
                        int *l_1463 = &l_898;
                        int *l_1464 = &l_848;
                        int *l_1465 = &l_1313;
                        int *l_1466 = &l_1047;
                        int *l_1467 = (void*)0;
                        int *l_1468 = (void*)0;
                        int *l_1470 = &l_918;
                        int *l_1471 = &l_1313;
                        int *l_1472 = (void*)0;
                        int l_1473 = 8L;
                        int *l_1474 = &g_622;
                        int *l_1475 = &l_848;
                        int *l_1476 = (void*)0;
                        int *l_1477 = (void*)0;
                        int *l_1478 = &l_1461;
                        int *l_1479 = &l_818;
                        int *l_1481 = &l_1461;
                        int *l_1482 = &l_898;
                        int *l_1483 = &l_1435;
                        int *l_1484 = (void*)0;
                        int *l_1485 = (void*)0;
                        int *l_1486 = &g_622;
                        int *l_1487 = (void*)0;
                        int *l_1488 = &l_1390;
                        int *l_1490 = (void*)0;
                        int *l_1491 = &l_881;
                        int *l_1493 = &l_1489;
                        int *l_1494 = &l_1469;
                        int *l_1495 = &l_1358;
                        int *l_1496 = (void*)0;
                        int *l_1499 = &l_1369;
                        int *l_1500 = &l_1335;
                        int *l_1501 = (void*)0;
                        int *l_1502 = &l_881;
                        int *l_1503 = (void*)0;
                        int *l_1504 = (void*)0;
                        int *l_1505 = &l_1461;
                        int *l_1506 = &l_1047;
                        int *l_1507 = &l_1377;
                        int *l_1508 = &l_1047;
                        int *l_1509 = &l_1489;
                        int *l_1511 = (void*)0;
                        int *l_1512 = &l_1498;
                        int *l_1513 = &l_1047;
                        unsigned short l_1515 = 0UL;
                        unsigned *l_1521 = &l_964;
                        l_1324 ^= (func_34(p_13, func_50((((((*l_1336) &= ((l_1330 > (((*l_1332) = l_1331) != (void*)0)) || ((safe_lshift_func_uint8_t_u_s((g_7.f4 , (*g_697)), 0)) ^ (g_790 < ((((*p_12) > 0xC54EED23L) <= l_1335) ^ l_1335))))) || (*l_1336)) < (**g_699)) , l_1337), p_12, l_1338)) || 0x07AEC9180DC6C2F3LL);

                        ;
                        ;
                        l_1515++;
                        if ((*p_12))
                            break;
                        (*l_1433) = ((0xA7579F20D3495E90LL <= (((*l_1521) |= (safe_mul_func_int8_t_s_s(func_34(func_50(p_12, ((*l_1274) = p_12), (*g_340)), ((p_15 , (+((void*)0 != g_1520))) , 0xC2L)), l_834))) < g_932)) , l_1469);
                    }

                    ;
                    ;
                }

                ;
                ;
                (*l_1274) = p_12;

                ;
                (*l_1274) = (l_1524 = (((l_1522 == (((*g_340) = (p_13 , (*g_340))) , l_1523)) && ((((l_1331 == &g_340) ^ (p_13 > ((*l_961) = func_34(l_1324, p_15)))) < 0x6CD8L) , p_14)) , p_12));

                ;
            }


            ;
            ;
            (*p_12) ^= (((*l_1525) = 0xE08940D196DDE22CLL) > l_1324);
            --l_1537;
            if (((*l_1528) <= (((*g_1520) == 6L) == ((((*l_1532) != (p_14 = (g_80.f1 , ((safe_mod_func_uint8_t_u_u(((((*l_1525) = ((safe_sub_func_int16_t_s_s(p_15, g_1244)) > (0x58A0L | (+((++(*g_697)) <= g_120))))) , g_96) != 7UL), p_13)) <= 18446744073709551615UL)))) , (void*)0) != l_1553))))
            {
                short ***l_1566 = &g_399;
                int l_1594 = 0L;
                int l_1608 = 1L;
                int l_1616 = (-1L);
                if (((((((safe_sub_func_int16_t_s_s((((((safe_lshift_func_int16_t_s_u(((*l_1536) | 0x3107L), 14)) & p_11) , func_39((**l_1274), (p_11 || (((safe_sub_func_uint32_t_u_u(((--(*g_1520)) | 0xFC70B68E2DD50541LL), g_7.f2)) , (**l_1274)) & (p_14 | p_11))), (*g_400), (**l_1274), p_12)) , (**l_1274)) < l_862), (*g_400))) >= 1UL) , p_13) != g_123) , 0UL) ^ (*g_400)))
                {
                    short ***l_1567 = &g_399;
                    int l_1568 = 0xF7AB0BE9L;
                    (*l_1274) = func_55(func_18((*g_1520), ((g_620 | ((*g_697) = (((((safe_add_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(p_13, (l_1566 != l_1567))) || (((*p_12) != p_11) || (**g_696))), ((((*l_1266) = 0x7BL) || l_1568) || p_14))) | (*l_1527)) , p_14) ^ g_4) && p_11))) > 1UL), (*l_1533)), p_14, g_932);


                    g_361 = &l_1568;

                    ;
                }
                else
                {
                    int *l_1570 = &l_862;
                    int *l_1571 = &g_677;
                    int *l_1572 = &l_1498;
                    int *l_1573 = (void*)0;
                    int *l_1574 = &g_4;
                    int *l_1575 = &g_4;
                    int *l_1576 = &l_965;
                    int *l_1577 = (void*)0;
                    int l_1578 = 0x74032F87L;
                    int *l_1579 = (void*)0;
                    int *l_1580 = &l_1047;
                    int *l_1581 = (void*)0;
                    int l_1582 = 0x823D0966L;
                    int *l_1583 = &l_1099;
                    int *l_1584 = &g_622;
                    int *l_1585 = &l_862;
                    int *l_1586 = &g_622;
                    int *l_1587 = &l_1582;
                    int *l_1588 = &l_918;
                    int *l_1589 = &l_1510;
                    int *l_1590 = &l_862;
                    int *l_1591 = (void*)0;
                    int *l_1592 = &l_1469;
                    int *l_1593 = &l_818;
                    int *l_1595 = &l_927;
                    int *l_1596 = &l_1324;
                    int *l_1597 = &l_1498;
                    int *l_1598 = &l_898;
                    int *l_1599 = &l_918;
                    int *l_1600 = &l_862;
                    int *l_1601 = (void*)0;
                    int *l_1602 = &l_1578;
                    int *l_1603 = &g_620;
                    int *l_1604 = &l_1099;
                    int *l_1605 = &g_622;
                    int *l_1606 = &l_1497;
                    int l_1607 = (-6L);
                    int *l_1609 = &g_677;
                    int *l_1610 = &l_1047;
                    int l_1611 = 0xC4A232EEL;
                    int *l_1612 = &g_622;
                    int *l_1613 = (void*)0;
                    int *l_1614 = &l_1582;
                    int *l_1615 = (void*)0;
                    int *l_1617 = &l_898;
                    int *l_1618 = (void*)0;
                    int *l_1619 = &l_1489;
                    int *l_1620 = (void*)0;
                    int *l_1621 = &l_927;
                    int *l_1622 = &l_1594;
                    int *l_1623 = &l_965;
                    int *l_1624 = &l_1497;
                    int *l_1625 = &l_965;
                    int *l_1626 = &l_862;
                    int l_1627 = 0x22708D9EL;
                    int *l_1628 = &l_881;
                    int *l_1629 = (void*)0;
                    int *l_1630 = &l_1627;
                    int *l_1631 = (void*)0;
                    int *l_1632 = &g_4;
                    int *l_1633 = &l_1578;
                    int *l_1634 = &l_822;
                    int l_1635 = (-9L);
                    int *l_1636 = (void*)0;
                    int *l_1638 = (void*)0;
                    int l_1639 = 0L;
                    int *l_1640 = &l_898;
                    int *l_1641 = &l_965;
                    int *l_1642 = &l_898;
                    int *l_1643 = &l_927;
                    int *l_1644 = &g_677;
                    int *l_1645 = (void*)0;
                    int *l_1646 = &l_1578;
                    int *l_1647 = &g_622;
                    int *l_1648 = &l_881;
                    int *l_1649 = (void*)0;
                    g_1650--;
                }


            }
            else
            {
                unsigned l_1684 = 4294967287UL;
                unsigned long long **l_1701 = &l_1551;
                for (l_822 = 24; (l_822 < 28); ++l_822)
                {
                    char l_1699 = 0xAFL;
                }
                (*l_1524) = ((*g_1520) , ((((*l_1701) = l_1700) != (l_1702 = (void*)0)) , (safe_rshift_func_uint8_t_u_u((((*g_400) = p_13) != p_15), 1))));

                ;
                ;
            }


            ;
            ;
        }



        ;
        ;
        ;
    }


    ;
    if ((*l_1524))
    {
        unsigned l_1732 = 0UL;
        int l_1734 = 0x7592589CL;
        int l_1739 = 0L;
        struct S0 **l_1808 = (void*)0;
        char l_1830 = 0x82L;
        int *l_1840 = &g_620;
        struct S0 l_1865 = {1588,1196,0,38995,388,5156,-15};
        for (g_792 = 0; (g_792 <= 46); ++g_792)
        {
            int *l_1707 = (void*)0;
            int *l_1708 = &l_848;
            if ((*p_12))
                break;
            (*l_1708) &= (*p_12);
        }
        if ((*p_12))
        {
            unsigned char **l_1709 = (void*)0;
            unsigned char ***l_1710 = &g_699;
            unsigned char ***l_1711 = &g_696;
            (*l_1524) = (((*l_1710) = l_1709) != (l_1712 = ((*l_1711) = &g_697)));

            ;
            ;
        }
        else
        {
            unsigned l_1717 = 4UL;
            short *l_1720 = &g_932;
            int *l_1721 = &l_927;
            short ***l_1735 = (void*)0;
            int **l_1863 = &g_361;
            struct S0 l_1864 = {1763,-245,2,35240,717,14789,3};
            if ((((((*l_1700) = ((**g_699) || 0xBCL)) , (void*)0) != g_1722) > (*p_12)))
            {
                int *l_1733 = &g_622;
                (*l_1524) ^= (0xBC1EL | (safe_rshift_func_uint16_t_u_s(((l_1734 = ((((safe_rshift_func_uint16_t_u_u(p_13, g_932)) && 255UL) , l_1732) & 0x28L)) | g_523), 0)));
            }
            else
            {
                short ****l_1736 = &l_1735;
                unsigned **l_1744 = &g_1723;
                int l_1745 = (-1L);
                unsigned l_1803 = 18446744073709551606UL;
                struct S0 **l_1810 = &l_958;
lbl_1812:
                (*l_1524) = (&g_399 != ((*l_1736) = l_1735));
                if ((safe_sub_func_uint16_t_u_u(((l_1739 > (safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((*l_1721), (**g_1722))), 65535UL))) || (*g_1520)), p_13)))
                {
                    int *l_1746 = &g_4;
                    int *l_1747 = &l_848;
                    int l_1748 = (-1L);
                    int *l_1749 = &l_1745;
                    int *l_1750 = &l_1748;
                    int *l_1751 = &g_4;
                    int *l_1752 = &l_918;
                    int *l_1753 = &g_677;
                    int *l_1754 = &l_927;
                    int *l_1755 = &l_818;
                    int *l_1756 = &g_4;
                    int *l_1757 = &l_1734;
                    int *l_1758 = &l_1739;
                    int *l_1759 = &l_1739;
                    int *l_1760 = (void*)0;
                    int *l_1761 = &l_927;
                    int *l_1762 = &l_1745;
                    int *l_1763 = (void*)0;
                    int *l_1764 = &l_898;
                    int *l_1765 = (void*)0;
                    int *l_1766 = &l_898;
                    int *l_1767 = &l_1745;
                    int *l_1768 = &l_1739;
                    int *l_1769 = &g_620;
                    int *l_1770 = &l_822;
                    int *l_1771 = &l_918;
                    int *l_1772 = (void*)0;
                    int *l_1773 = &g_622;
                    int *l_1774 = &l_1748;
                    int *l_1775 = &l_884;
                    int *l_1776 = &g_620;
                    int *l_1777 = &l_848;
                    int *l_1778 = &g_622;
                    int *l_1779 = (void*)0;
                    int *l_1780 = &l_1745;
                    int *l_1781 = &l_818;
                    int *l_1782 = &l_1734;
                    int *l_1783 = &g_4;
                    int *l_1784 = (void*)0;
                    int *l_1785 = (void*)0;
                    int *l_1786 = &g_4;
                    int l_1787 = (-1L);
                    int *l_1788 = (void*)0;
                    int *l_1789 = &l_822;
                    int *l_1790 = &l_1748;
                    int *l_1791 = &l_918;
                    int *l_1792 = (void*)0;
                    int *l_1793 = (void*)0;
                    int *l_1794 = &g_620;
                    int *l_1795 = &l_884;
                    int *l_1796 = (void*)0;
                    int *l_1797 = &l_898;
                    int *l_1798 = &l_898;
                    int *l_1799 = &l_862;
                    int *l_1800 = (void*)0;
                    int *l_1801 = &l_818;
                    int *l_1802 = (void*)0;
                    --l_1803;
                }
                else
                {
                    struct S0 l_1813 = {738,-1384,0,332,728,-7783,-8};
                    for (l_884 = (-29); (l_884 < 6); l_884++)
                    {
                        struct S0 ***l_1809 = &l_1808;
                        unsigned short *l_1811 = &g_253;
                        if ((*p_12))
                            break;
                        if (l_1732)
                            continue;
                        (*p_12) = ((l_1739 = (((*l_1809) = l_1808) != l_1810)) || ((*l_1811) &= 5UL));
                    }
                    if (l_1739)
                        goto lbl_1812;
                    return l_1813;
                }
                for (g_607 = 0; (g_607 >= 39); ++g_607)
                {
                    char l_1845 = (-1L);
                    int **l_1861 = (void*)0;
                    int **l_1862 = &l_1524;
                }
                (*l_1524) = 0x408187F9L;
            }
            (*l_1863) = &l_1734;

            ;
            (*l_1524) ^= (*l_1840);
            (*l_958) = (((*p_12) <= ((*l_1721) |= (((**g_948) , (p_14 = ((func_50(&g_4, &l_1734, l_1864) == (*p_12)) , func_50(p_12, &l_818, (*l_958))))) | (*l_1840)))) , l_1865);

            ;
        }


        ;
        ;
    }
    else
    {
        struct S0 l_1868 = {994,-456,3,9377,1016,-2888,-3};
        int *l_1869 = &l_918;
        short l_1883 = (-1L);
        long long l_1987 = 0x433CDBCC443EE114LL;
        struct S0 **l_2126 = &l_958;
        struct S0 ***l_2125 = &l_2126;
        int l_2196 = 7L;
        int l_2199 = 0L;
        int **l_2236 = (void*)0;
        int **l_2237 = &l_1524;
        unsigned *l_2238 = &g_529;
        for (l_884 = 0; (l_884 < 22); l_884++)
        {
            int **l_1870 = (void*)0;
            int **l_1871 = &l_1524;
            struct S0 l_1894 = {1426,835,1,43664,999,-2289,-14};
            int l_1939 = 0x65D130CFL;
            int l_1992 = 0xC423B0A4L;
            int l_2005 = 0x0A3C17B0L;
            int l_2029 = 0x17E17C15L;
            int l_2051 = 0xA89AAB48L;
            int l_2098 = 0x3472B2D7L;
            int l_2099 = 0L;
            unsigned char l_2107 = 1UL;
            l_1868 = l_1868;
            (*l_1871) = l_1869;

            ;
            for (g_1678 = (-19); (g_1678 != (-17)); g_1678 = safe_add_func_uint32_t_u_u(g_1678, 8))
            {
                short l_1875 = 0xDEF5L;
                char *l_1886 = &g_710;
                long long *l_1887 = &l_813;
                int ***l_1888 = &l_1871;
                if (g_80.f2)
                    goto lbl_1874;
                (*l_1869) = (l_1875 != ((safe_add_func_int32_t_s_s((p_14 , (safe_mod_func_int8_t_s_s((p_15 & (g_1882 , (((*l_1888) = func_62(((((((l_1883 , (func_29(((p_13 , (((*l_1117) |= (p_11 = (((*l_1887) = ((safe_lshift_func_int8_t_s_s(((*l_1886) = ((**g_948) || 1L)), (*l_1524))) , (-4L))) , (**g_696)))) <= p_14)) & 0x7BL), p_12, g_1244, &l_927) , g_253)) == (*g_1520)) , (void*)0) != (void*)0) & (-3L)) , 0xF327ADCC46B1B536LL), g_253)) != (void*)0))), 254UL))), (*l_1869))) , g_1101));

                ;
            }

            ;
            if ((l_1889 == (((((*l_1889) = ((*g_1723) ^ (0UL < (safe_mul_func_int16_t_s_s((*l_1524), 4UL))))) , p_13) & g_792) , g_1723)))
            {
                int *l_1895 = &l_881;
                int *l_1896 = (void*)0;
                int *l_1897 = &g_620;
                int l_1898 = 7L;
                int *l_1899 = &l_927;
                int *l_1900 = &l_862;
                int *l_1901 = &g_4;
                int *l_1902 = &l_918;
                int *l_1903 = &l_927;
                int *l_1904 = &g_622;
                int *l_1905 = &l_834;
                int *l_1906 = &l_834;
                int *l_1907 = &l_927;
                int *l_1908 = &g_677;
                int *l_1909 = &l_927;
                int *l_1910 = &l_848;
                int *l_1911 = &l_822;
                int *l_1912 = &l_834;
                int *l_1913 = &l_898;
                int *l_1914 = &l_898;
                int *l_1915 = &l_927;
                int *l_1916 = (void*)0;
                int *l_1917 = (void*)0;
                int *l_1918 = &g_4;
                int *l_1919 = &l_822;
                int *l_1920 = (void*)0;
                int *l_1921 = (void*)0;
                int *l_1922 = &l_822;
                int *l_1923 = (void*)0;
                int *l_1924 = &l_1898;
                int *l_1925 = &l_1898;
                int *l_1926 = &g_622;
                int *l_1927 = &g_620;
                int *l_1928 = &g_677;
                int *l_1929 = (void*)0;
                int *l_1930 = &l_918;
                int *l_1931 = &l_918;
                int *l_1932 = &g_620;
                int *l_1933 = &l_1898;
                int *l_1934 = &l_927;
                int *l_1935 = &l_834;
                int *l_1936 = (void*)0;
                int *l_1937 = &g_620;
                int *l_1938 = (void*)0;
                int *l_1940 = &l_1898;
                int *l_1941 = &l_862;
                int *l_1942 = &l_881;
                int *l_1943 = &l_862;
                int *l_1944 = &l_927;
                int *l_1945 = &g_4;
                int *l_1946 = &l_862;
                int *l_1947 = (void*)0;
                int *l_1948 = &l_818;
                int l_1949 = 0x38F587A7L;
                int *l_1950 = &l_1939;
                int *l_1951 = &l_862;
                int *l_1952 = &l_1939;
                int *l_1953 = &l_818;
                int *l_1954 = &l_1939;
                int *l_1955 = &l_918;
                int *l_1956 = (void*)0;
                int *l_1957 = &l_848;
                int *l_1958 = (void*)0;
                int *l_1959 = &l_1898;
                int *l_1960 = &g_4;
                int *l_1961 = &l_918;
                int *l_1962 = &g_677;
                int *l_1963 = &l_1898;
                int *l_1964 = &l_1939;
                int *l_1965 = &g_622;
                int *l_1966 = &l_848;
                int *l_1967 = &g_620;
                int *l_1968 = (void*)0;
                int *l_1969 = &l_862;
                int *l_1970 = &g_622;
                int *l_1971 = (void*)0;
                int *l_1972 = &l_822;
                int *l_1973 = &l_898;
                int *l_1974 = &l_822;
                int *l_1975 = (void*)0;
                int *l_1976 = &l_1949;
                int *l_1977 = &l_1949;
                int *l_1978 = &l_1939;
                int *l_1979 = (void*)0;
                int *l_1980 = &g_677;
                int *l_1981 = &l_1939;
                int *l_1982 = &g_4;
                int *l_1983 = &l_862;
                int *l_1984 = &g_4;
                int *l_1985 = &l_898;
                int *l_1986 = &l_862;
                int *l_1988 = &l_1949;
                int *l_1989 = (void*)0;
                int *l_1990 = (void*)0;
                int *l_1991 = &l_918;
                int *l_1993 = &l_822;
                int *l_1994 = &g_677;
                int *l_1995 = &l_1939;
                int *l_1996 = (void*)0;
                int *l_1997 = &l_1898;
                int *l_1998 = &l_848;
                int *l_1999 = &l_1949;
                int *l_2000 = &l_862;
                int *l_2001 = &l_918;
                int *l_2002 = &g_677;
                int *l_2003 = &l_927;
                int *l_2004 = (void*)0;
                int *l_2006 = &l_1939;
                int *l_2007 = &l_1939;
                int *l_2008 = (void*)0;
                int *l_2009 = (void*)0;
                int *l_2010 = &l_834;
                int *l_2011 = &g_620;
                int *l_2012 = (void*)0;
                int *l_2013 = &l_834;
                int *l_2014 = &l_1939;
                int *l_2015 = &g_4;
                int *l_2016 = (void*)0;
                int *l_2017 = &l_848;
                int *l_2018 = &l_862;
                int *l_2019 = (void*)0;
                int *l_2020 = &l_862;
                int *l_2021 = &l_862;
                int *l_2022 = (void*)0;
                int *l_2023 = &l_2005;
                int *l_2024 = (void*)0;
                int *l_2025 = (void*)0;
                int *l_2026 = (void*)0;
                int *l_2027 = &l_927;
                int *l_2028 = &l_898;
                int *l_2030 = &l_822;
                int *l_2031 = &l_881;
                int *l_2032 = &l_918;
                int *l_2033 = &l_927;
                int *l_2034 = &l_881;
                int *l_2035 = &l_822;
                int *l_2036 = &l_1939;
                int *l_2037 = (void*)0;
                int *l_2038 = &l_881;
                int *l_2039 = &g_677;
                int *l_2040 = &l_1939;
                int *l_2041 = &l_898;
                int *l_2042 = &l_1898;
                int *l_2043 = &l_898;
                int *l_2044 = &g_620;
                int *l_2045 = &l_1992;
                int *l_2046 = &l_822;
                int *l_2047 = &l_927;
                int *l_2048 = &l_918;
                int *l_2049 = &l_898;
                int *l_2050 = &g_677;
                int *l_2052 = &l_1898;
                int *l_2053 = &l_1949;
                int *l_2054 = (void*)0;
                int *l_2055 = &l_898;
                int *l_2056 = &l_2029;
                int *l_2057 = &g_620;
                int *l_2058 = &l_2051;
                int *l_2059 = (void*)0;
                int *l_2060 = (void*)0;
                int *l_2061 = &l_2029;
                int *l_2062 = &l_2029;
                int *l_2063 = &l_1992;
                int *l_2064 = &l_881;
                int *l_2065 = &l_2029;
                int *l_2066 = &l_1939;
                int *l_2067 = &l_918;
                int *l_2068 = &l_918;
                int *l_2069 = &g_622;
                int *l_2070 = &l_862;
                int *l_2071 = &g_622;
                int *l_2072 = &l_818;
                int *l_2073 = &l_834;
                int *l_2074 = (void*)0;
                int l_2075 = 0xC8C4A0EBL;
                int *l_2076 = (void*)0;
                int *l_2077 = (void*)0;
                int *l_2078 = &l_927;
                int *l_2079 = &l_1939;
                int *l_2080 = &l_1949;
                int *l_2081 = &g_677;
                int *l_2082 = &g_620;
                int *l_2083 = &l_822;
                int *l_2084 = &g_4;
                int *l_2085 = (void*)0;
                int *l_2086 = &l_848;
                int *l_2087 = &g_4;
                int *l_2088 = (void*)0;
                int *l_2089 = &g_620;
                int *l_2090 = &l_927;
                int *l_2091 = &l_862;
                int *l_2092 = &l_1898;
                int *l_2093 = (void*)0;
                int *l_2094 = &l_818;
                int *l_2095 = &g_622;
                int *l_2096 = &l_927;
                int l_2097 = 0L;
                int *l_2100 = &l_818;
                int *l_2101 = &g_4;
                int *l_2102 = &g_622;
                int *l_2103 = &l_881;
                int *l_2104 = (void*)0;
                int *l_2105 = &l_2005;
                int *l_2106 = &l_2029;
                long long *l_2114 = (void*)0;
                int **l_2119 = &l_2039;
                ++l_2107;
                if (g_1650)
                    break;
                if ((*l_1869))
                    continue;
                (*l_2031) &= ((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((p_15 ^= 0x74C542C6BE1DA4A0LL) || p_13), (*l_1926))), p_11)) & (*g_1520));
            }
            else
            {
                int *l_2127 = &l_2098;
                int *l_2128 = (void*)0;
                int *l_2129 = (void*)0;
                int *l_2130 = &l_2005;
                int *l_2131 = &l_881;
                int *l_2132 = (void*)0;
                int *l_2133 = &l_2099;
                int *l_2134 = (void*)0;
                int *l_2135 = &l_2122;
                int *l_2136 = &l_1992;
                int *l_2137 = &l_818;
                int *l_2138 = &l_862;
                int *l_2139 = (void*)0;
                int *l_2140 = (void*)0;
                int *l_2141 = &l_2005;
                int *l_2142 = &l_2098;
                int *l_2143 = &l_848;
                int *l_2144 = &g_677;
                int *l_2145 = &l_2099;
                int *l_2146 = (void*)0;
                int *l_2147 = (void*)0;
                int *l_2148 = &l_848;
                int *l_2149 = &l_834;
                int *l_2150 = (void*)0;
                int *l_2151 = &l_2099;
                int *l_2152 = &g_677;
                int *l_2153 = &l_818;
                int *l_2154 = &l_822;
                int *l_2155 = (void*)0;
                int *l_2156 = (void*)0;
                int *l_2157 = &l_1992;
                int *l_2158 = &g_677;
                int *l_2159 = &l_862;
                int *l_2160 = &l_918;
                int *l_2161 = &g_620;
                int *l_2162 = (void*)0;
                int *l_2163 = &l_862;
                int *l_2164 = (void*)0;
                int *l_2165 = &l_2099;
                int *l_2166 = (void*)0;
                int *l_2167 = &l_862;
                int *l_2168 = (void*)0;
                int *l_2169 = &l_2098;
                int *l_2170 = (void*)0;
                int *l_2171 = &l_822;
                int *l_2172 = &l_2098;
                int *l_2173 = &l_1939;
                int *l_2174 = &l_881;
                int *l_2175 = &g_622;
                int *l_2176 = (void*)0;
                int *l_2177 = &l_822;
                int l_2178 = 0x86604D11L;
                int *l_2179 = &g_4;
                int *l_2180 = &l_918;
                int *l_2181 = (void*)0;
                int *l_2182 = &l_2029;
                int *l_2183 = &l_818;
                int *l_2184 = &g_4;
                int *l_2185 = &l_1939;
                int *l_2186 = &l_1992;
                int *l_2187 = &l_2005;
                int *l_2188 = &l_2029;
                int *l_2189 = &l_2098;
                int *l_2190 = &l_834;
                int *l_2191 = &l_2122;
                int *l_2192 = &l_2122;
                int *l_2193 = (void*)0;
                int *l_2194 = &g_677;
                int *l_2195 = (void*)0;
                int *l_2197 = &g_620;
                int *l_2198 = &l_2099;
                int *l_2200 = &l_881;
                int *l_2201 = (void*)0;
                int *l_2202 = (void*)0;
                int *l_2203 = &l_2098;
                int *l_2204 = &l_2196;
                int *l_2205 = &g_4;
                int *l_2206 = &l_2029;
                int *l_2207 = &l_818;
                int *l_2208 = &l_898;
                int *l_2209 = (void*)0;
                int *l_2210 = &l_927;
                int *l_2211 = &g_677;
                int *l_2212 = &l_2199;
                int *l_2213 = &g_622;
                int *l_2214 = &l_2051;
                int *l_2215 = &g_677;
                int *l_2216 = &l_2199;
                int *l_2217 = &l_898;
                int *l_2218 = &l_881;
                int *l_2219 = &g_4;
                int *l_2220 = &l_2029;
                int *l_2221 = (void*)0;
                int *l_2222 = &l_881;
                int *l_2223 = &l_2029;
                int *l_2224 = &l_2005;
                int *l_2225 = &l_2199;
                int *l_2226 = (void*)0;
                int *l_2227 = &l_881;
                int *l_2228 = (void*)0;
                int *l_2229 = (void*)0;
                int *l_2230 = &g_622;
                int *l_2231 = &l_881;
                int *l_2232 = &l_2029;
                for (p_13 = 0; (p_13 < 53); ++p_13)
                {
                    (*l_1524) |= ((void*)0 == l_2125);
                    return (*l_958);
                }
                l_2233--;
            }
        }
        (*l_2237) = p_12;

        ;
    }

    ;
    ;
    return (*l_958);
}







static struct S0 func_18(unsigned long long p_19, unsigned char p_20, short p_21)
{
    unsigned l_45 = 1UL;
    int *l_619 = &g_620;
    unsigned l_624 = 0x155FE3F1L;
    int *l_715 = (void*)0;
    int *l_716 = &g_620;
    int *l_717 = &g_677;
    int *l_718 = &g_677;
    int *l_719 = &g_4;
    int *l_720 = &g_4;
    int l_721 = 0xB42C5639L;
    int *l_722 = &g_620;
    int l_723 = 0x9D6BABC2L;
    int *l_724 = (void*)0;
    int *l_725 = &g_620;
    int *l_726 = &l_723;
    int *l_727 = &l_721;
    int l_728 = 0x0FA2B4C9L;
    int *l_729 = &g_677;
    int *l_730 = &g_4;
    int *l_731 = &l_721;
    int *l_732 = &g_622;
    int l_733 = 7L;
    int *l_734 = &g_620;
    int *l_735 = &g_620;
    int *l_736 = &g_620;
    int *l_737 = &l_728;
    int *l_738 = &g_677;
    int *l_739 = &g_4;
    int l_740 = 1L;
    int *l_741 = &l_733;
    int *l_742 = &l_728;
    int *l_743 = &l_733;
    int *l_744 = &l_728;
    int *l_745 = &l_723;
    int *l_746 = &g_622;
    int l_747 = (-2L);
    int l_748 = 0x8ECFF052L;
    int l_749 = 1L;
    int *l_750 = (void*)0;
    int *l_751 = (void*)0;
    int *l_752 = &l_733;
    int *l_753 = &l_748;
    int *l_754 = &l_749;
    int *l_755 = (void*)0;
    int *l_756 = (void*)0;
    int *l_757 = (void*)0;
    int *l_758 = &l_748;
    int *l_759 = &l_748;
    int *l_760 = (void*)0;
    int *l_761 = &l_748;
    int *l_762 = &l_733;
    int *l_763 = &l_728;
    int *l_764 = (void*)0;
    int *l_765 = &l_733;
    int *l_766 = &l_747;
    int l_767 = 1L;
    int *l_768 = &l_723;
    int *l_769 = &l_747;
    int l_770 = 5L;
    int *l_771 = &l_770;
    int *l_772 = &l_767;
    int *l_773 = &l_767;
    int *l_774 = &l_747;
    int *l_775 = &g_620;
    int *l_776 = &l_767;
    int *l_777 = &l_721;
    int *l_778 = &l_749;
    int *l_779 = &l_770;
    int *l_780 = (void*)0;
    int l_781 = 0xD0D20FDDL;
    int *l_782 = &l_740;
    int *l_783 = &l_723;
    int *l_784 = &g_620;
    int l_785 = 0x5EDE8513L;
    int *l_786 = (void*)0;
    int l_787 = 1L;
    int l_788 = 0x68DBB40DL;
    int *l_789 = &l_781;
    int *l_791 = &l_728;
    struct S0 l_795 = {949,-1198,1,9693,487,7937,9};
    for (p_19 = 19; (p_19 != 43); ++p_19)
    {
        unsigned l_54 = 0UL;
        int *l_676 = &g_677;
        unsigned short *l_691 = &g_89;
        unsigned char ***l_698 = &g_696;
        unsigned short *l_706 = &g_253;
        int *l_707 = &g_4;
        unsigned long long l_708 = 7UL;
        unsigned long long *l_709 = &g_117;
        unsigned l_711 = 0x17F42B53L;
        unsigned *l_712 = &l_624;
        int l_713 = 0x7816A1F9L;
        struct S0 l_714 = {1851,620,0,37363,519,1134,10};
        (*l_676) ^= ((safe_unary_minus_func_int8_t_s((func_29((func_34((safe_sub_func_int8_t_s_s(func_39(l_45, g_7.f6, ((safe_rshift_func_uint8_t_u_u((0xF5F2FE868E0133D4LL < (safe_mul_func_uint16_t_u_u(p_19, p_20))), func_50((l_54 , (void*)0), func_55(func_59(l_54, p_21), g_102, g_7.f5), g_7))) , (*g_400)), p_19, l_619), l_54)), l_624) , g_7.f5), l_676, g_7.f6, l_619) == p_21))) ^ 0x9DDDB834L);

        ;
        ;
        l_713 |= (safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((*l_619), ((*l_712) |= func_34((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(((*l_709) ^= ((safe_lshift_func_uint16_t_u_u((g_96 = ((*l_691) = g_123)), (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((*l_698) = g_696) == (g_699 = &g_697)), ((((*l_707) = ((*l_676) = ((~((*l_619) & (safe_lshift_func_int8_t_s_u(((safe_add_func_int64_t_s_s((((&g_340 != (void*)0) , 0x5205L) & (safe_lshift_func_uint16_t_u_u(((*l_706) |= ((*l_619) & p_21)), g_677))), g_523)) == (*l_619)), (*g_697))))) , 0x516C40D3L))) >= g_183) == p_20))), g_607)))) >= l_708)), p_19)) & p_19), (*l_619))) >= 255UL), g_710)), l_711)))), 2));
        return l_714;
    }
    --g_792;
    return l_795;
}







static unsigned char func_29(unsigned short p_30, int * p_31, unsigned p_32, int * p_33)
{
    int l_678 = 0xBA69A890L;
    (*p_33) ^= l_678;
    return p_30;
}







static short func_34(char p_35, char p_36)
{
    unsigned short l_625 = 0x3EF8L;
    long long *l_632 = &g_120;
    char *l_633 = (void*)0;
    char *l_634 = &g_635;
    char l_638 = 0x5EL;
    short *l_639 = &g_450;
    struct S0 l_640 = {436,1090,1,32854,530,-4002,-5};
    int *l_641 = (void*)0;
    int *l_659 = &g_622;
    unsigned short l_660 = 3UL;
    int *l_661 = &g_620;
    int *l_662 = &g_620;
    int *l_663 = &g_4;
    int *l_664 = &g_620;
    int *l_665 = &g_620;
    int *l_666 = &g_620;
    int *l_667 = (void*)0;
    int *l_668 = &g_620;
    int *l_669 = &g_4;
    int *l_670 = &g_622;
    int *l_671 = &g_4;
    int *l_672 = &g_622;
    unsigned char l_673 = 1UL;
    l_625--;
    l_640 = func_59((safe_lshift_func_int16_t_s_s((*g_400), (((safe_sub_func_int16_t_s_s(l_625, ((void*)0 == l_632))) || g_96) , ((*l_639) = (0x16E25D9CL > ((((((*l_634) = p_36) || p_35) & (safe_mul_func_int8_t_s_s(0x29L, p_35))) && 65529UL) <= l_638)))))), l_638);
    if (p_35)
    {
        int **l_642 = &g_361;
        (*l_642) = l_641;

        ;
        (*l_642) = l_641;
    }
    else
    {
        int **l_645 = &g_361;
        unsigned short *l_658 = &g_96;
        l_640.f5 = g_523;
        (*l_645) = (((safe_add_func_uint64_t_u_u(p_36, ((void*)0 == l_632))) | g_80.f6) , l_641);

        ;
        (*l_659) = (safe_add_func_uint16_t_u_u((g_7.f1 == (safe_add_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(18446744073709551612UL, (p_36 <= (safe_mul_func_int8_t_s_s((g_635 = ((((g_96 && (safe_sub_func_int64_t_s_s(((*l_632) = ((((safe_mul_func_int16_t_s_s(l_640.f3, p_35)) ^ (((g_183 < (((*g_400) > p_36) <= g_253)) ^ 65530UL) | g_120)) < p_35) == l_660)), g_7.f6))) & g_183) < g_123) & 0xEAEF42EDL)), 0xEAL))))), g_102))), 0xCA9EL));
    }

    ;
    l_673++;
    return p_35;
}







static char func_39(unsigned short p_40, unsigned long long p_41, short p_42, short p_43, int * p_44)
{
    struct S0 **l_621 = &g_340;
    int l_623 = 5L;
    (*l_621) = &g_80;

    ;
    (*p_44) |= (~(g_622 & ((-1L) != l_623)));
    return p_43;
}







static unsigned char func_50(int * p_51, int * p_52, struct S0 p_53)
{
    unsigned l_568 = 1UL;
    int l_580 = 0x5D18551CL;
    int l_583 = 0x4609C7BAL;
    int l_594 = 1L;
    int l_599 = 0xCA084E21L;
    --l_568;
    for (g_120 = 0; (g_120 <= (-12)); g_120 = safe_sub_func_int16_t_s_s(g_120, 1))
    {
        unsigned long long l_573 = 0x8D3A0BBA59C755D3LL;
        int *l_574 = &g_4;
        int *l_575 = &g_4;
        int *l_576 = (void*)0;
        int *l_577 = (void*)0;
        int *l_578 = &g_4;
        int *l_579 = &g_4;
        int *l_581 = &g_4;
        int *l_582 = &l_580;
        int *l_584 = &g_4;
        int *l_585 = &g_4;
        int *l_586 = &g_4;
        int *l_587 = &g_4;
        int *l_588 = &g_4;
        int *l_589 = &l_580;
        int *l_590 = &l_583;
        int *l_591 = (void*)0;
        int *l_592 = &l_580;
        int *l_593 = &l_580;
        int *l_595 = &g_4;
        int *l_596 = &l_594;
        int *l_597 = &l_580;
        int l_598 = 0x8C3105B0L;
        int *l_600 = &l_598;
        int *l_601 = &l_594;
        int *l_602 = (void*)0;
        int *l_603 = &l_594;
        int *l_604 = &l_583;
        int *l_605 = &l_598;
        int *l_606 = &l_598;
        g_7.f1 |= (*p_52);
        if (l_573)
            continue;
        if (l_573)
            continue;
        ++g_607;
    }
    for (g_523 = 0; (g_523 == 48); g_523 = safe_add_func_uint64_t_u_u(g_523, 4))
    {
        unsigned short l_612 = 0xCC3AL;
        --l_612;
        for (l_594 = 15; (l_594 == (-25)); --l_594)
        {
            int **l_617 = (void*)0;
            int **l_618 = &g_361;
            (*l_618) = p_51;


        }
    }


    return l_583;
}







static int * func_55(struct S0 p_56, unsigned char p_57, long long p_58)
{
    short *l_371 = (void*)0;
    short **l_370 = &l_371;
    short *l_372 = &g_102;
    short **l_373 = &l_372;
    int l_376 = 0xE52B6295L;
    long long *l_377 = &g_120;
    long long *l_378 = (void*)0;
    int l_379 = 0xF8ACBF38L;
    int **l_380 = &g_361;
    int l_381 = 4L;
    int *l_382 = &g_4;
    unsigned l_396 = 0x796CF950L;
    long long l_540 = 4L;
    unsigned l_551 = 0x96EA2A7FL;
    unsigned char **l_558 = (void*)0;
    long long l_562 = 0x41A13487E794C5C5LL;
    struct S0 **l_563 = &g_340;
    int *l_566 = (void*)0;
    int *l_567 = &l_376;
    for (g_233 = 0; (g_233 <= 21); g_233 = safe_add_func_int8_t_s_s(g_233, 4))
    {
        int *l_364 = &g_4;
        struct S0 l_365 = {845,-1145,1,31608,895,23070,-15};
        (*l_364) &= 1L;
        if (p_56.f1)
            continue;
        l_365 = (*g_340);
    }
lbl_459:
    (*l_382) = (safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(g_80.f4, ((((*g_340) , func_62((l_379 ^= (l_376 = (((((*l_370) = &g_102) == ((*l_373) = l_372)) != (+g_7.f4)) <= ((((*l_377) = ((p_56 , (0x34D346F2252D0A62LL & 0xB05F751341D71C53LL)) , (safe_mul_func_uint16_t_u_u(p_58, l_376)))) >= g_7.f1) ^ l_376)))), p_58)) == l_380) <= (-1L)))), l_381));

    ;
    for (g_4 = 3; (g_4 != (-12)); g_4--)
    {
        int *l_461 = (void*)0;
        int l_469 = (-6L);
        int l_479 = (-4L);
        int l_510 = 8L;
        int l_521 = 0x5E54C1A6L;
        int *l_538 = (void*)0;
        int *l_539 = &l_521;
        unsigned l_554 = 4294967288UL;
        for (p_58 = 0; (p_58 == 3); p_58 = safe_add_func_uint64_t_u_u(p_58, 6))
        {
            unsigned l_456 = 8UL;
            unsigned l_460 = 0xB936B78CL;
            char l_517 = 0x21L;
            if (g_7.f1)
            {
                int *l_405 = (void*)0;
                if ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(g_89, (!((*l_382) == (safe_rshift_func_uint8_t_u_s((p_57 > 0xE032L), 3)))))), p_56.f2)))
                {
                    int *l_393 = &l_376;
                    (*l_380) = l_393;

                    ;
                    for (g_96 = 0; (g_96 < 50); g_96++)
                    {
                        short **l_397 = &l_372;
                        short ***l_398 = (void*)0;
                        (*l_380) = ((!l_396) , l_393);
                        g_399 = l_397;

                        ;
                    }
                    for (g_183 = (-19); (g_183 < 42); g_183++)
                    {
                        struct S0 **l_404 = &g_340;
                        struct S0 ***l_403 = &l_404;
                        (*l_403) = &g_340;
                        (*l_380) = l_405;

                        ;
                        return &g_4;




                    }
                }
                else
                {
                    int *l_406 = &l_381;
                    int *l_407 = &l_376;
                    int *l_408 = &l_381;
                    int *l_409 = &l_381;
                    int *l_410 = &l_376;
                    int *l_411 = &l_381;
                    int *l_412 = (void*)0;
                    int *l_413 = &l_376;
                    int *l_414 = &l_376;
                    int l_415 = 0x1C866570L;
                    int *l_416 = (void*)0;
                    int *l_417 = &l_381;
                    int *l_418 = &l_376;
                    int *l_419 = &l_376;
                    int *l_420 = &l_376;
                    int *l_421 = &l_415;
                    int *l_422 = &l_376;
                    int *l_423 = &l_376;
                    int *l_424 = &l_376;
                    int *l_425 = &l_415;
                    int *l_426 = &l_381;
                    int *l_427 = &l_376;
                    int *l_428 = (void*)0;
                    int *l_429 = &l_379;
                    int *l_430 = &l_415;
                    int *l_431 = &l_376;
                    int *l_432 = &l_381;
                    int *l_433 = &l_379;
                    int *l_434 = (void*)0;
                    int *l_435 = &l_376;
                    int *l_436 = &l_376;
                    int *l_437 = &l_415;
                    int *l_438 = &l_376;
                    int *l_439 = (void*)0;
                    int *l_440 = &l_376;
                    int *l_441 = (void*)0;
                    int *l_442 = &l_379;
                    int *l_443 = &l_376;
                    int *l_444 = &l_379;
                    int *l_445 = &l_415;
                    int *l_446 = &l_379;
                    int *l_447 = &l_381;
                    int *l_448 = (void*)0;
                    int *l_449 = &l_379;
                    int *l_451 = &l_379;
                    int *l_452 = (void*)0;
                    int *l_453 = &l_379;
                    int *l_454 = (void*)0;
                    int *l_455 = &l_376;
                    ++l_456;
                    if (l_456)
                        goto lbl_459;
                    (*l_453) = (g_7.f0 ^ ((g_80.f0 = l_460) == l_456));
                }
            }
            else
            {
                int *l_462 = (void*)0;
                int *l_463 = &l_379;
                int *l_464 = &l_379;
                int *l_465 = &l_379;
                int *l_466 = &l_379;
                int *l_467 = &l_379;
                int *l_468 = &l_381;
                int *l_470 = &l_376;
                int *l_471 = (void*)0;
                int *l_472 = &l_469;
                int *l_473 = (void*)0;
                int *l_474 = &l_376;
                int *l_475 = &l_381;
                int *l_476 = &l_376;
                int *l_477 = &l_376;
                int *l_478 = &l_376;
                int *l_480 = &l_479;
                int *l_481 = (void*)0;
                int *l_482 = &l_379;
                int *l_483 = &l_479;
                int *l_484 = &l_376;
                int *l_485 = &l_379;
                int *l_486 = &l_469;
                int *l_487 = &l_381;
                int *l_488 = &l_469;
                int *l_489 = &l_376;
                int *l_490 = &l_381;
                int *l_491 = (void*)0;
                int *l_492 = &l_376;
                int *l_493 = &l_469;
                int *l_494 = &l_379;
                int *l_495 = &l_381;
                int *l_496 = &l_376;
                int *l_497 = &l_469;
                int *l_498 = &l_479;
                int *l_499 = &l_479;
                int *l_500 = &l_469;
                int *l_501 = &l_469;
                int *l_502 = (void*)0;
                int *l_503 = (void*)0;
                int *l_504 = (void*)0;
                int *l_505 = &l_379;
                int *l_506 = &l_379;
                int *l_507 = (void*)0;
                int *l_508 = &l_379;
                int *l_509 = &l_376;
                int *l_511 = &l_469;
                int *l_512 = &l_376;
                int *l_513 = (void*)0;
                int *l_514 = &l_381;
                int *l_515 = &l_479;
                int *l_516 = &l_469;
                int *l_518 = (void*)0;
                int *l_519 = (void*)0;
                int *l_520 = &l_510;
                int *l_522 = (void*)0;
                l_462 = l_461;
                g_523--;
                if (g_183)
                    continue;
                if (((+0x22L) >= p_56.f1))
                {
                    short l_526 = 0xB6A4L;
                    int *l_527 = (void*)0;
                    int *l_528 = &l_479;
                    (*l_380) = (void*)0;

                    ;
                    ++g_529;
                }
                else
                {
                    struct S0 **l_532 = &g_340;
                    (*l_532) = &p_56;

                    ;
                }
            }
            for (l_517 = 9; (l_517 != 15); ++l_517)
            {
                int *l_535 = &l_479;
                (*l_535) = 0L;
            }
        }
        (*l_539) = ((*l_382) || (safe_mul_func_int8_t_s_s(p_58, g_25)));
        if (l_540)
        {
            int *l_544 = &g_4;
            for (l_469 = 0; (l_469 != 28); ++l_469)
            {
                int *l_543 = &l_376;
                (*l_380) = l_543;

                ;
                if ((*g_361))
                {
                    (*l_380) = &l_521;

                    ;
                    return &g_4;





                }
                else
                {
                    return l_544;





                }
            }
            if (p_58)
            {
                unsigned short *l_545 = &g_89;
                int l_548 = 0x3014E35AL;
                g_80.f5 = ((0xA9DAL | (++(*l_545))) , l_548);
                (*l_539) = p_56.f0;
            }
            else
            {
                (*l_539) = 3L;
                p_56.f5 |= (*l_382);
                p_56.f1 ^= (*l_539);
                (*l_539) = (safe_mul_func_int16_t_s_s(((*l_372) |= (g_96 & 5L)), l_551));
            }
        }
        else
        {
            unsigned short l_555 = 1UL;
            for (g_523 = 3; (g_523 <= 18); g_523++)
            {
                (*l_380) = (void*)0;

                ;
                p_56.f5 &= p_56.f3;
            }
            if (l_554)
                break;
            if (l_555)
                continue;
        }
    }
    (*l_567) &= (safe_mod_func_int32_t_s_s((l_558 == l_558), (safe_add_func_uint16_t_u_u((*l_382), ((((*g_400) <= (safe_unary_minus_func_int64_t_s((((((g_523 , l_562) , &g_340) == l_563) < ((safe_rshift_func_int8_t_s_u(g_233, 0)) , g_123)) && g_4)))) , g_4) , p_56.f1)))));
    return &g_4;





}







static struct S0 func_59(unsigned p_60, unsigned char p_61)
{
    int *l_66 = &g_4;
    int **l_65 = &l_66;
    short *l_101 = &g_102;
    struct S0 l_124 = {1024,239,2,38938,308,2056,-13};
    unsigned l_320 = 0x00390C6CL;
    int *l_360 = &g_4;
    if (g_7.f0)
    {
        int ***l_78 = &l_65;
        struct S0 *l_79 = &g_80;
        int **l_81 = &l_66;
        (*l_78) = func_62(p_61, ((g_7.f6 , l_65) != (void*)0));

        ;
        (*l_79) = g_7;
        (*l_81) = (void*)0;

        ;
    }
    else
    {
        unsigned short *l_88 = &g_89;
        int l_94 = 0xCC2ED117L;
        unsigned short *l_95 = &g_96;
        unsigned l_97 = 0UL;
        unsigned *l_98 = (void*)0;
        unsigned *l_99 = (void*)0;
        unsigned *l_100 = &g_25;
        int l_146 = 0xBD0DCC65L;
        int **l_338 = &l_66;
        if ((((((*l_100) = (safe_add_func_uint64_t_u_u(((g_7.f3 , ((safe_add_func_int32_t_s_s(((+((((safe_rshift_func_int16_t_s_u((g_4 <= 0x9CL), ((*l_95) = (((*l_88) = 1UL) , (0xC6L ^ ((safe_sub_func_uint16_t_u_u(0x797AL, g_80.f6)) , ((*l_66) && ((safe_mod_func_int8_t_s_s(g_4, l_94)) , 0x3214E450L)))))))) <= p_61) , (void*)0) != &l_66)) , (**l_65)), l_97)) != l_94)) , 18446744073709551615UL), g_80.f1))) != 0x2FCEF8C3L) , l_101) != (void*)0))
        {
            long long l_113 = 0x0D67C409728EF6BELL;
            int l_118 = 0x5C792442L;
            struct S0 l_125 = {1352,-724,1,31372,902,2072,-5};
            int l_174 = (-1L);
            int l_175 = 8L;
            int *l_258 = (void*)0;
            int *l_259 = &g_4;
            int *l_260 = &l_146;
            int *l_261 = &l_146;
            int *l_262 = &l_175;
            int *l_263 = &l_118;
            int *l_264 = &l_175;
            int *l_265 = (void*)0;
            int *l_266 = &l_118;
            int *l_267 = &g_4;
            int *l_268 = (void*)0;
            int *l_269 = (void*)0;
            int *l_270 = (void*)0;
            int *l_271 = &l_118;
            int *l_272 = &l_94;
            int *l_273 = &l_146;
            int *l_274 = &l_94;
            int *l_275 = &l_146;
            int *l_276 = (void*)0;
            int *l_277 = (void*)0;
            int *l_278 = &l_118;
            int *l_279 = (void*)0;
            int *l_280 = &l_94;
            int *l_281 = &l_175;
            int *l_282 = &l_174;
            int *l_283 = &l_94;
            int *l_284 = &l_146;
            int *l_285 = &l_94;
            int *l_286 = &l_94;
            int *l_287 = &l_94;
            int *l_288 = (void*)0;
            int *l_289 = &g_4;
            int *l_290 = &l_146;
            int *l_291 = (void*)0;
            int *l_292 = &l_146;
            int *l_293 = &l_118;
            int *l_294 = &g_4;
            int *l_295 = &l_118;
            int *l_296 = &l_174;
            int *l_297 = &l_174;
            int *l_298 = &l_146;
            int *l_299 = &l_94;
            int *l_300 = &l_175;
            int *l_301 = &g_4;
            int *l_302 = (void*)0;
            int *l_303 = &l_118;
            int *l_304 = &l_94;
            int *l_305 = &g_4;
            int *l_306 = (void*)0;
            int *l_307 = &l_146;
            int *l_308 = &l_118;
            int *l_309 = &l_175;
            int *l_310 = &l_174;
            int *l_311 = &l_146;
            int *l_312 = (void*)0;
            int *l_313 = &g_4;
            int *l_314 = &l_175;
            int *l_315 = &l_175;
            int *l_316 = &l_174;
            int *l_317 = &l_118;
            int *l_318 = &l_175;
            int *l_319 = &l_175;
            unsigned char *l_342 = &g_183;
            for (p_61 = 0; (p_61 != 28); ++p_61)
            {
                unsigned long long *l_116 = &g_117;
                long long *l_119 = &g_120;
                unsigned char *l_121 = (void*)0;
                unsigned char *l_122 = &g_123;
                (*l_66) ^= 0x5E7DF305L;
                (**l_65) = (((*l_122) &= ((safe_mod_func_int8_t_s_s(0x1EL, (safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_61, (p_61 || (safe_mod_func_uint8_t_u_u(g_102, l_113))))), ((((*l_119) = ((l_113 , ((safe_add_func_uint64_t_u_u(0xEF1F7F3414C507BDLL, ((*l_116) ^= g_89))) & (p_60 == 1UL))) && l_118)) ^ p_61) > l_113))))) , p_61)) & 255UL);
                (*l_65) = &l_118;

                ;
                l_125 = l_124;
            }

            ;
            for (g_4 = 0; (g_4 >= 3); g_4 = safe_add_func_int32_t_s_s(g_4, 9))
            {
                int *l_128 = &l_94;
                int *l_129 = &l_118;
                int *l_130 = (void*)0;
                int *l_131 = &l_118;
                int *l_132 = &l_118;
                int *l_133 = &l_94;
                int l_134 = (-9L);
                int *l_135 = &l_118;
                int *l_136 = (void*)0;
                int *l_137 = &l_118;
                int *l_138 = &l_94;
                int *l_139 = &l_118;
                int *l_140 = &l_118;
                int *l_141 = (void*)0;
                int *l_142 = (void*)0;
                int *l_143 = &l_134;
                int *l_144 = (void*)0;
                int *l_145 = &l_118;
                int *l_147 = &l_94;
                int *l_148 = &l_118;
                int *l_149 = &l_134;
                int *l_150 = &l_134;
                int *l_151 = &l_146;
                int *l_152 = (void*)0;
                int *l_153 = (void*)0;
                int *l_154 = &l_146;
                int *l_155 = &l_118;
                int *l_156 = (void*)0;
                int *l_157 = &l_146;
                int *l_158 = (void*)0;
                int *l_159 = &l_94;
                int *l_160 = &l_94;
                int *l_161 = &l_134;
                int *l_162 = &l_118;
                int *l_163 = &l_94;
                int *l_164 = &l_94;
                int *l_165 = (void*)0;
                int *l_166 = (void*)0;
                int *l_167 = (void*)0;
                int *l_168 = &l_146;
                int *l_169 = &l_118;
                int *l_170 = &l_146;
                int *l_171 = &l_134;
                int *l_172 = (void*)0;
                int *l_173 = &l_118;
                int *l_176 = &l_118;
                int *l_177 = (void*)0;
                int *l_178 = &l_118;
                int *l_179 = (void*)0;
                int *l_180 = &l_118;
                int *l_181 = &l_175;
                int *l_182 = &l_118;
                g_80.f1 = l_125.f6;
                --g_183;
            }
            ++l_320;
            for (l_113 = 19; (l_113 >= (-16)); l_113 = safe_sub_func_int8_t_s_s(l_113, 1))
            {
                short l_329 = 1L;
                unsigned long long l_332 = 0xF0493C28935D499BLL;
                int ***l_337 = (void*)0;
                unsigned long long *l_339 = &g_117;
                for (l_320 = 0; (l_320 < 16); l_320 = safe_add_func_int8_t_s_s(l_320, 9))
                {
                    for (l_94 = 0; (l_94 < 23); l_94++)
                    {
                        (*l_66) = 3L;
                        (*l_65) = &g_4;

                        ;
                        if (l_329)
                            continue;
                        (*l_273) ^= p_61;
                    }
                }
                if (((*l_314) ^= (((p_60 , ((((**l_65) != g_80.f4) && ((p_61 == (safe_sub_func_uint16_t_u_u(l_332, ((((*l_339) = ((((l_338 = func_62(((safe_lshift_func_int16_t_s_u(((1L & (g_80.f1 >= ((safe_add_func_int64_t_s_s((*l_313), l_146)) , g_102))) <= 1UL), 14)) >= p_61), g_7.f1)) != (void*)0) < g_7.f5) >= 0UL)) > 0xAFFA9D3D98685255LL) , (*l_263))))) < p_60)) ^ g_7.f5)) , &l_338) == &g_77)))
                {
                    struct S0 **l_341 = &g_340;
                    unsigned char **l_343 = &l_342;
                    (*l_341) = g_340;
                    (*l_315) ^= (&g_123 == ((*l_343) = l_342));
                }
                else
                {
                    int *l_344 = &l_174;
                    (*l_65) = l_344;

                    ;
                    (*l_289) = (p_61 > g_102);
                    if (p_61)
                        continue;
                }
                for (l_175 = 0; (l_175 >= 6); l_175 = safe_add_func_uint64_t_u_u(l_175, 8))
                {
                    long long l_353 = 0xCBC17C50ED043E5BLL;
                    (*l_294) = ((safe_sub_func_uint16_t_u_u((~g_7.f0), ((safe_lshift_func_uint16_t_u_s(g_7.f0, (safe_rshift_func_int8_t_s_u(p_61, 7)))) == (-1L)))) <= ((l_353 , (safe_lshift_func_uint16_t_u_s(g_120, 5))) , (g_80.f6 && (*l_289))));
                    if (p_61)
                        break;
                    if (l_353)
                        continue;
                }
                (*l_280) = p_60;
            }

            ;
            ;
        }
        else
        {
            struct S0 **l_356 = &g_340;
            int l_357 = 0xF6E9D70CL;
            (*l_356) = &g_7;

            ;
            (*l_66) ^= (((0xBEL != ((l_357 <= (safe_mod_func_int64_t_s_s(l_357, g_102))) >= p_61)) ^ g_80.f4) > p_60);
            return (**l_356);
        }


        ;
    }


    ;
    (*g_340) = (*g_340);
    (*l_360) = ((+p_60) && p_60);
    g_361 = (void*)0;

    ;
    return (*g_340);
}







static int ** func_62(long long p_63, unsigned short p_64)
{
    short l_69 = 1L;
    short *l_70 = &l_69;
    int *l_71 = &g_4;
    struct S0 *l_74 = &g_7;
    struct S0 **l_75 = &l_74;
    struct S0 l_76 = {1334,-686,0,5141,511,-4444,-4};
    (*l_71) |= (p_64 || (safe_mod_func_int16_t_s_s(((*l_70) = l_69), p_63)));
    (*l_75) = ((safe_mul_func_uint8_t_u_u(((void*)0 == &g_7), (*l_71))) , l_74);
    l_76 = (*l_74);
    return g_77;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_7.f1, "g_7.f1", print_hash_value);
    transparent_crc(g_7.f2, "g_7.f2", print_hash_value);
    transparent_crc(g_7.f3, "g_7.f3", print_hash_value);
    transparent_crc(g_7.f4, "g_7.f4", print_hash_value);
    transparent_crc(g_7.f5, "g_7.f5", print_hash_value);
    transparent_crc(g_7.f6, "g_7.f6", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_80.f0, "g_80.f0", print_hash_value);
    transparent_crc(g_80.f1, "g_80.f1", print_hash_value);
    transparent_crc(g_80.f2, "g_80.f2", print_hash_value);
    transparent_crc(g_80.f3, "g_80.f3", print_hash_value);
    transparent_crc(g_80.f4, "g_80.f4", print_hash_value);
    transparent_crc(g_80.f5, "g_80.f5", print_hash_value);
    transparent_crc(g_80.f6, "g_80.f6", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_622, "g_622", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_677, "g_677", print_hash_value);
    transparent_crc(g_710, "g_710", print_hash_value);
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_792, "g_792", print_hash_value);
    transparent_crc(g_914, "g_914", print_hash_value);
    transparent_crc(g_932, "g_932", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    transparent_crc(g_1101, "g_1101", print_hash_value);
    transparent_crc(g_1125, "g_1125", print_hash_value);
    transparent_crc(g_1244, "g_1244", print_hash_value);
    transparent_crc(g_1273, "g_1273", print_hash_value);
    transparent_crc(g_1304, "g_1304", print_hash_value);
    transparent_crc(g_1637, "g_1637", print_hash_value);
    transparent_crc(g_1650, "g_1650", print_hash_value);
    transparent_crc(g_1678, "g_1678", print_hash_value);
    transparent_crc(g_1882.f0, "g_1882.f0", print_hash_value);
    transparent_crc(g_1882.f1, "g_1882.f1", print_hash_value);
    transparent_crc(g_1882.f2, "g_1882.f2", print_hash_value);
    transparent_crc(g_1882.f3, "g_1882.f3", print_hash_value);
    transparent_crc(g_1882.f4, "g_1882.f4", print_hash_value);
    transparent_crc(g_1882.f5, "g_1882.f5", print_hash_value);
    transparent_crc(g_1882.f6, "g_1882.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
