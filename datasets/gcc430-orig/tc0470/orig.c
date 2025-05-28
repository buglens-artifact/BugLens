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
   int f1;
   volatile unsigned short f2;
   volatile unsigned f3;
};


static long long g_7 = 0xDD68876942A1E948LL;
static int g_13 = 8L;
static int g_73 = 0x65DBDCDBL;
static struct S0 g_74 = {0xE584L,6L,0x8453L,0x70C164D1L};
static struct S0 g_75 = {0UL,0x64A48C55L,0x79C8L,4294967295UL};
static int *g_93 = &g_75.f1;
static struct S0 g_98 = {0xD9CDL,0xFDC0328AL,2UL,4294967295UL};
static unsigned g_162 = 1UL;
static volatile struct S0 g_269 = {1UL,0x01BA2FB8L,65532UL,0x56B1269FL};
static struct S0 g_286 = {0x0D00L,-1L,0xC672L,0x68D2024EL};
static volatile int ***g_287 = (void*)0;
static int *g_298 = &g_13;
static volatile unsigned short g_307 = 0x80D4L;
static unsigned char g_350 = 1UL;
static volatile int g_453 = 0L;
static volatile unsigned short g_483 = 65530UL;
static struct S0 g_509 = {0xBFDAL,0xD522F74BL,5UL,0x6719CF51L};
static volatile unsigned long long g_559 = 0xA406DD9175AB73C1LL;
static volatile struct S0 *g_608 = &g_269;
static volatile struct S0 **g_607 = &g_608;
static struct S0 g_635 = {0xE13BL,-5L,1UL,0x9AD6C758L};
static struct S0 g_650 = {65535UL,-1L,0x1491L,4UL};
static volatile unsigned g_1026 = 18446744073709551608UL;
static volatile unsigned g_1046 = 0xBA21415EL;
static unsigned g_1287 = 18446744073709551615UL;
static volatile struct S0 g_1323 = {7UL,0xFAB244EBL,8UL,4294967288UL};
static volatile struct S0 g_1347 = {9UL,-4L,0x4F74L,1UL};
static struct S0 g_1371 = {65533UL,0x208873F8L,0UL,6UL};
static volatile char g_1709 = (-4L);
static volatile int g_1750 = 0x65CD3D7BL;
static unsigned g_1768 = 4UL;
static long long g_1776 = 0L;
static volatile unsigned char g_1790 = 255UL;



static int func_1(void);
static int func_2(unsigned p_3, unsigned short p_4, long long p_5, int p_6);
static char func_9(int p_10, unsigned long long p_11);
static int func_15(unsigned long long p_16, unsigned char p_17, const int * p_18);
static unsigned long long func_19(int * p_20, unsigned p_21, unsigned p_22, unsigned p_23);
static int * func_24(unsigned long long p_25);
static unsigned short func_36(unsigned char p_37, short p_38, unsigned long long p_39);
static short func_46(char p_47, short p_48, unsigned p_49, unsigned long long p_50, int * p_51);
static unsigned func_63(unsigned long long p_64, unsigned char p_65, unsigned short p_66, unsigned p_67, int p_68);
static int * func_76(int p_77, long long p_78, unsigned long long p_79, unsigned short p_80);
static int func_1(void)
{
    unsigned char l_8 = 0x16L;
    int *l_1771 = &g_1371.f1;
    unsigned l_1785 = 18446744073709551607UL;
    int *l_1789 = (void*)0;
    int **l_1792 = &g_93;
    int ***l_1791 = &l_1792;
    (*l_1771) &= func_2(g_7, (l_8 && func_9(g_7, l_8)), g_98.f0, l_8);
    for (g_162 = 0; (g_162 >= 44); g_162++)
    {
        int *l_1774 = &g_98.f1;
        int **l_1775 = &g_93;
        int l_1788 = 0x9A56066AL;
        (*l_1775) = l_1774;
        (*l_1775) = func_76((*g_93), g_1776, (**l_1775), g_269.f0);
        l_1789 = func_76((**l_1775), ((safe_add_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((((safe_mod_func_int16_t_s_s(g_1347.f3, g_1371.f0)) != g_635.f1) < (g_73 && l_1785)), (g_650.f1 > (((safe_add_func_uint16_t_u_u(g_162, g_74.f0)) | g_1768) || l_1788)))), 0x1FC16E6EB331ED6ELL)), g_1371.f0)) < (-4L)), (**l_1775), (**l_1775));
        if ((**l_1775))
            break;
    }
    (*g_298) = ((*l_1771) == g_1790);
    (*l_1791) = &l_1789;
    return (*g_93);
}







static int func_2(unsigned p_3, unsigned short p_4, long long p_5, int p_6)
{
    volatile struct S0 ***l_1473 = &g_607;
    int l_1474 = 0x3D9F9330L;
    int *l_1475 = &l_1474;
    int *l_1476 = &g_74.f1;
    int *l_1477 = &g_75.f1;
    int l_1478 = 0x47D60FA8L;
    int *l_1479 = (void*)0;
    int *l_1480 = &g_650.f1;
    int *l_1481 = &g_650.f1;
    int *l_1482 = &g_635.f1;
    int *l_1483 = (void*)0;
    int l_1484 = 0x119AC282L;
    int *l_1485 = &g_286.f1;
    int *l_1486 = &l_1484;
    int *l_1487 = &g_98.f1;
    int *l_1488 = &g_13;
    int *l_1489 = (void*)0;
    int *l_1490 = &l_1478;
    int *l_1491 = &g_650.f1;
    int *l_1492 = &g_74.f1;
    int *l_1493 = &g_509.f1;
    int *l_1494 = &g_650.f1;
    int *l_1495 = &l_1478;
    int *l_1496 = &g_74.f1;
    int *l_1497 = &l_1484;
    int l_1498 = 0xA85DEA4EL;
    int *l_1499 = &l_1498;
    int *l_1500 = &g_75.f1;
    int *l_1501 = (void*)0;
    int *l_1502 = &g_98.f1;
    int *l_1503 = &g_635.f1;
    int *l_1504 = &g_98.f1;
    int *l_1505 = &g_286.f1;
    int *l_1506 = &l_1478;
    int *l_1507 = (void*)0;
    int *l_1508 = &g_650.f1;
    int *l_1509 = &g_98.f1;
    int *l_1510 = (void*)0;
    int *l_1511 = &g_98.f1;
    int *l_1512 = (void*)0;
    int *l_1513 = &l_1478;
    int *l_1514 = &l_1474;
    int *l_1515 = (void*)0;
    int *l_1516 = (void*)0;
    int *l_1517 = &g_75.f1;
    int *l_1518 = &g_74.f1;
    int *l_1519 = &g_286.f1;
    int *l_1520 = &l_1498;
    int *l_1521 = (void*)0;
    int *l_1522 = &g_73;
    int *l_1523 = (void*)0;
    int *l_1524 = &g_73;
    int *l_1525 = &g_74.f1;
    int *l_1526 = &g_635.f1;
    int *l_1527 = (void*)0;
    int *l_1528 = &l_1484;
    int *l_1529 = (void*)0;
    int *l_1530 = &l_1498;
    int *l_1531 = &g_75.f1;
    int *l_1532 = (void*)0;
    int l_1533 = 1L;
    int *l_1534 = (void*)0;
    int l_1535 = 0x6FE11A3CL;
    int *l_1536 = &l_1478;
    int *l_1537 = &g_650.f1;
    int l_1538 = 0x4C60860CL;
    int *l_1539 = &l_1478;
    int *l_1540 = &g_75.f1;
    int l_1541 = 0xF9F1694BL;
    int *l_1542 = &l_1498;
    int *l_1543 = &l_1498;
    int *l_1544 = &l_1474;
    int *l_1545 = &g_635.f1;
    int *l_1546 = &l_1535;
    int *l_1547 = &l_1533;
    int *l_1548 = &l_1541;
    int *l_1549 = &l_1535;
    int *l_1550 = (void*)0;
    int *l_1551 = &g_635.f1;
    int *l_1552 = &g_509.f1;
    int *l_1553 = &g_1371.f1;
    int l_1554 = (-10L);
    int *l_1555 = &g_1371.f1;
    int *l_1556 = &g_75.f1;
    int *l_1557 = (void*)0;
    int *l_1558 = &l_1535;
    int *l_1559 = &l_1478;
    int *l_1560 = (void*)0;
    int *l_1561 = &l_1533;
    int *l_1562 = &l_1474;
    int *l_1563 = &g_75.f1;
    int *l_1564 = &l_1541;
    int *l_1565 = &l_1474;
    int *l_1566 = &g_286.f1;
    int *l_1567 = &g_286.f1;
    int *l_1568 = &g_13;
    int *l_1569 = &l_1474;
    int l_1570 = 1L;
    int l_1571 = (-6L);
    int l_1572 = 1L;
    int *l_1573 = &l_1571;
    int *l_1574 = (void*)0;
    int *l_1575 = &l_1478;
    int *l_1576 = &l_1572;
    int *l_1577 = &g_74.f1;
    int *l_1578 = &g_650.f1;
    int l_1579 = 6L;
    int *l_1580 = (void*)0;
    int *l_1581 = &g_75.f1;
    int l_1582 = 0xB3FA2FBDL;
    int *l_1583 = &g_75.f1;
    int *l_1584 = &l_1541;
    int *l_1585 = &l_1582;
    int *l_1586 = &l_1498;
    int *l_1587 = &g_635.f1;
    int *l_1588 = (void*)0;
    int *l_1589 = (void*)0;
    int *l_1590 = &l_1541;
    int l_1591 = 1L;
    int *l_1592 = (void*)0;
    int *l_1593 = &g_13;
    int *l_1594 = &g_650.f1;
    int *l_1595 = &l_1478;
    int *l_1596 = &l_1591;
    int l_1597 = 0x75D4052CL;
    int *l_1598 = &g_635.f1;
    int *l_1599 = &l_1597;
    int *l_1600 = &l_1554;
    int *l_1601 = &l_1533;
    int *l_1602 = &l_1554;
    int *l_1603 = &l_1591;
    int l_1604 = 0xD4FC5E9DL;
    int *l_1605 = &g_13;
    int *l_1606 = &l_1478;
    int *l_1607 = &g_75.f1;
    int *l_1608 = (void*)0;
    int *l_1609 = (void*)0;
    int *l_1610 = &g_98.f1;
    int l_1611 = (-1L);
    int *l_1612 = &l_1478;
    int *l_1613 = (void*)0;
    int *l_1614 = &l_1538;
    int *l_1615 = &l_1541;
    int *l_1616 = &l_1538;
    int *l_1617 = (void*)0;
    int *l_1618 = (void*)0;
    int *l_1619 = &g_75.f1;
    int *l_1620 = &g_286.f1;
    int *l_1621 = &l_1538;
    int *l_1622 = &g_286.f1;
    int *l_1623 = &g_650.f1;
    int *l_1624 = &l_1478;
    int *l_1625 = &l_1570;
    int *l_1626 = &l_1541;
    int *l_1627 = &l_1533;
    int l_1628 = (-4L);
    int *l_1629 = &g_75.f1;
    int *l_1630 = &g_73;
    int *l_1631 = &l_1611;
    int *l_1632 = &l_1611;
    int *l_1633 = (void*)0;
    int *l_1634 = (void*)0;
    int *l_1635 = (void*)0;
    int *l_1636 = (void*)0;
    int *l_1637 = &l_1591;
    int *l_1638 = &l_1541;
    int l_1639 = 0L;
    int *l_1640 = &g_1371.f1;
    int *l_1641 = &l_1628;
    int l_1642 = 2L;
    int *l_1643 = (void*)0;
    int *l_1644 = &g_74.f1;
    int *l_1645 = &g_98.f1;
    int *l_1646 = (void*)0;
    int *l_1647 = &l_1628;
    int *l_1648 = &l_1484;
    int *l_1649 = &l_1498;
    int *l_1650 = &l_1535;
    int *l_1651 = &l_1541;
    int *l_1652 = (void*)0;
    int *l_1653 = &l_1572;
    int *l_1654 = (void*)0;
    int *l_1655 = (void*)0;
    int *l_1656 = &g_286.f1;
    int l_1657 = 0xAF9FB629L;
    int *l_1658 = &g_74.f1;
    int *l_1659 = &l_1582;
    int l_1660 = 0x9C91ADFEL;
    int *l_1661 = &l_1535;
    int *l_1662 = (void*)0;
    int *l_1663 = (void*)0;
    int *l_1664 = (void*)0;
    int *l_1665 = &l_1572;
    int *l_1666 = &l_1570;
    int *l_1667 = &g_73;
    int *l_1668 = (void*)0;
    int l_1669 = (-7L);
    int *l_1670 = (void*)0;
    int *l_1671 = &l_1669;
    int *l_1672 = (void*)0;
    int *l_1673 = &l_1538;
    int *l_1674 = &g_98.f1;
    int *l_1675 = &l_1538;
    int *l_1676 = (void*)0;
    int *l_1677 = &l_1657;
    int *l_1678 = &l_1579;
    int *l_1679 = &l_1657;
    int *l_1680 = &l_1642;
    int l_1681 = 3L;
    int *l_1682 = &l_1498;
    int *l_1683 = &l_1597;
    int *l_1684 = (void*)0;
    int *l_1685 = &g_75.f1;
    int *l_1686 = &g_98.f1;
    int *l_1687 = &l_1474;
    int *l_1688 = &g_73;
    int *l_1689 = &l_1579;
    int *l_1690 = &l_1611;
    int *l_1691 = &l_1478;
    int l_1692 = 0xC3015C58L;
    int *l_1693 = &l_1541;
    int *l_1694 = (void*)0;
    int *l_1695 = (void*)0;
    int *l_1696 = &l_1535;
    int *l_1697 = &l_1660;
    int *l_1698 = &l_1611;
    int *l_1699 = &l_1474;
    int *l_1700 = &g_13;
    int *l_1701 = &l_1554;
    int *l_1702 = &l_1669;
    int *l_1703 = &g_635.f1;
    int *l_1704 = (void*)0;
    int *l_1705 = &l_1681;
    int *l_1706 = &l_1538;
    int *l_1707 = &l_1639;
    int l_1708 = 0x9AC6989FL;
    int *l_1710 = &g_75.f1;
    int *l_1711 = &l_1708;
    int *l_1712 = &l_1571;
    int *l_1713 = &l_1604;
    int *l_1714 = &l_1533;
    int *l_1715 = (void*)0;
    int *l_1716 = &l_1639;
    int *l_1717 = (void*)0;
    int *l_1718 = &l_1604;
    int *l_1719 = &l_1681;
    int *l_1720 = &g_98.f1;
    int *l_1721 = &l_1604;
    int l_1722 = 0x75C6D023L;
    int *l_1723 = (void*)0;
    int *l_1724 = &l_1669;
    int *l_1725 = &g_73;
    int *l_1726 = &l_1604;
    int *l_1727 = &l_1484;
    int *l_1728 = &l_1474;
    int *l_1729 = (void*)0;
    int *l_1730 = (void*)0;
    int *l_1731 = &g_1371.f1;
    int *l_1732 = (void*)0;
    int *l_1733 = &l_1571;
    int *l_1734 = &g_75.f1;
    int *l_1735 = &g_74.f1;
    int *l_1736 = &l_1628;
    int *l_1737 = &l_1582;
    int l_1738 = 1L;
    int *l_1739 = &l_1692;
    int *l_1740 = &g_286.f1;
    int l_1741 = 0x15EB7009L;
    int l_1742 = 0xD8903F8DL;
    int *l_1743 = (void*)0;
    int *l_1744 = &l_1582;
    int *l_1745 = &l_1554;
    int *l_1746 = (void*)0;
    int *l_1747 = &l_1657;
    int *l_1748 = &g_74.f1;
    int l_1749 = 1L;
    int *l_1751 = &l_1708;
    int l_1752 = 0x41EDE75EL;
    int *l_1753 = (void*)0;
    int *l_1754 = &l_1474;
    int l_1755 = 0x22BC4BE7L;
    int *l_1756 = &l_1582;
    int *l_1757 = &l_1628;
    int *l_1758 = &l_1639;
    int *l_1759 = (void*)0;
    int *l_1760 = &l_1478;
    int *l_1761 = &l_1572;
    int *l_1762 = &l_1681;
    int *l_1763 = &l_1611;
    int *l_1764 = &g_1371.f1;
    int *l_1765 = &g_13;
    int *l_1766 = &g_650.f1;
    int *l_1767 = &g_635.f1;
    (*l_1473) = &g_608;
    g_1768++;
    return (*g_298);
}







static char func_9(int p_10, unsigned long long p_11)
{
    int l_52 = 0x56BF5EE8L;
    int *l_53 = &l_52;
    unsigned l_1331 = 0xA65133C1L;
    const struct S0 * const l_1375 = &g_635;
    char l_1422 = 0x2CL;
    int l_1432 = 0x3C09A7A6L;
    int *l_1462 = &g_286.f1;
    int **l_1463 = (void*)0;
    int **l_1464 = &l_1462;
    if (g_7)
    {
        int *l_12 = &g_13;
        int *l_14 = &g_13;
        volatile int *l_1373 = &g_1347.f1;
        int **l_1374 = &g_93;
        l_14 = l_12;
        if (func_15((((p_11 >= (!(func_19(func_24((0xB3L != (((safe_sub_func_uint8_t_u_u(((safe_add_func_int64_t_s_s((safe_div_func_int32_t_s_s((*l_14), (safe_add_func_int16_t_s_s((g_13 ^ (*l_12)), func_36(((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(func_46(((((&g_13 == (void*)0) < (1UL ^ (((void*)0 != l_12) >= 0xCB2D505BC98072F2LL))) & p_11) | 18446744073709551615UL), l_52, g_13, p_11, l_53), 0x51B4L)) != 0xC94681C37F5E1753LL), g_13)), g_13)) || g_7), g_13, p_11))))), g_7)) >= p_11), 0L)) > g_13) ^ 0L))), p_10, g_483, (*l_53)) ^ 0x06C664802D2A682FLL))) != g_650.f0) || 18446744073709551610UL), g_73, &g_73))
        {
            int *l_1325 = &g_75.f1;
            int **l_1326 = &g_93;
            int *l_1346 = &g_74.f1;
            (*l_1326) = l_1325;
            (*l_53) &= (0L > ((*l_14) & (safe_div_func_uint16_t_u_u(((safe_div_func_int64_t_s_s(l_1331, g_1287)) || (safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s(g_453, (g_286.f1 < p_10))), (*l_12)))), ((((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(func_36((**l_1326), g_286.f0, (*l_12)), p_11)), g_350)) || g_13) >= 1L) | p_11)))));
            if ((((void*)0 == &l_12) & func_46((**l_1326), (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(g_75.f1, 7)) < (*l_53)), 0x9AB7AE47L)), ((safe_sub_func_int16_t_s_s(((func_19(&g_13, g_98.f2, (*l_1325), (*l_53)) || p_11) != 0x724AAFF9L), (*l_53))) && 0xFFL), p_11, l_1346)))
            {
                int *l_1352 = &g_509.f1;
                (**g_607) = g_1347;
                (*g_298) ^= ((safe_rshift_func_uint16_t_u_u(g_74.f0, 13)) & ((g_286.f3 | (p_11 != 0UL)) > ((l_14 != l_1352) <= p_10)));
                l_53 = func_24((safe_div_func_uint32_t_u_u((p_10 < 0x11L), p_10)));
                (*l_1326) = func_76((*l_1352), (*l_12), g_453, (*l_14));
            }
            else
            {
                struct S0 *l_1370 = &g_1371;
                struct S0 **l_1369 = &l_1370;
                int *l_1372 = &g_635.f1;
                (*l_1372) |= (safe_div_func_uint8_t_u_u(((func_63(g_1323.f1, ((safe_rshift_func_int16_t_s_s(1L, ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(p_10, (safe_div_func_uint16_t_u_u(func_46((safe_sub_func_uint32_t_u_u(p_11, ((safe_mod_func_uint8_t_u_u(p_10, (-1L))) == g_650.f1))), p_11, ((&g_608 == l_1369) > (*l_1346)), p_10, l_1372), g_509.f0)))), 3)) && (*g_93)))) > p_10), p_10, g_1287, g_7) != p_11) == 0x8BB59151FB835E60LL), p_11));
                (*l_1326) = l_1372;
            }
        }
        else
        {
            l_1373 = &g_453;
        }
        (*l_1374) = l_14;
    }
    else
    {
        unsigned l_1376 = 0xF5CA71FEL;
        int l_1387 = 1L;
        int l_1415 = 9L;
        int l_1425 = 0x48CA937CL;
        long long l_1449 = 0x0005D079621B1831LL;
        int l_1451 = 9L;
        (*g_298) |= p_11;
        (*l_53) &= (*g_298);
        (*g_298) ^= (((void*)0 != l_1375) <= l_1376);
        if (p_10)
        {
            int *l_1377 = (void*)0;
            int *l_1378 = &g_635.f1;
            int *l_1379 = &g_650.f1;
            int *l_1380 = (void*)0;
            int *l_1381 = &l_52;
            int *l_1382 = &g_98.f1;
            int *l_1383 = &g_74.f1;
            int *l_1384 = &g_286.f1;
            int *l_1385 = (void*)0;
            int *l_1386 = &g_98.f1;
            int *l_1388 = &g_286.f1;
            int *l_1389 = &g_635.f1;
            int *l_1390 = &g_650.f1;
            int *l_1391 = (void*)0;
            int *l_1392 = &g_98.f1;
            int *l_1393 = &g_650.f1;
            int *l_1394 = &g_635.f1;
            int *l_1395 = &g_74.f1;
            int *l_1396 = &g_13;
            int *l_1397 = &g_13;
            int *l_1398 = &g_635.f1;
            int *l_1399 = (void*)0;
            int *l_1400 = &g_75.f1;
            int *l_1401 = &g_98.f1;
            int *l_1402 = &l_1387;
            int *l_1403 = &g_1371.f1;
            int *l_1404 = &g_73;
            int *l_1405 = &g_509.f1;
            int *l_1406 = &g_509.f1;
            int *l_1407 = &g_650.f1;
            int *l_1408 = &g_13;
            int *l_1409 = &l_1387;
            int *l_1410 = &g_650.f1;
            int *l_1411 = &g_1371.f1;
            int *l_1412 = &l_1387;
            int *l_1413 = &g_73;
            int *l_1414 = &g_98.f1;
            int *l_1416 = &g_74.f1;
            int *l_1417 = (void*)0;
            int *l_1418 = &l_52;
            int *l_1419 = &g_509.f1;
            int *l_1420 = &g_98.f1;
            int *l_1421 = &g_75.f1;
            int *l_1423 = &g_74.f1;
            int *l_1424 = &l_1387;
            int *l_1426 = (void*)0;
            int *l_1427 = &g_286.f1;
            int *l_1428 = &g_13;
            int *l_1429 = &g_1371.f1;
            int *l_1430 = &g_1371.f1;
            int *l_1431 = &g_650.f1;
            int *l_1433 = &g_73;
            int *l_1434 = (void*)0;
            int *l_1435 = &l_1415;
            int *l_1436 = &l_52;
            int *l_1437 = (void*)0;
            int *l_1438 = (void*)0;
            int *l_1439 = &l_1432;
            int *l_1440 = (void*)0;
            int *l_1441 = &g_98.f1;
            int *l_1442 = &g_13;
            int *l_1443 = &g_650.f1;
            int *l_1444 = &l_1425;
            int *l_1445 = &g_509.f1;
            int *l_1446 = &g_13;
            int *l_1447 = &g_73;
            int *l_1448 = &l_1432;
            int *l_1450 = &l_1432;
            int *l_1452 = (void*)0;
            int *l_1453 = &l_52;
            int *l_1454 = &l_1451;
            int l_1455 = 0L;
            int *l_1456 = &g_635.f1;
            int *l_1457 = &g_286.f1;
            unsigned l_1458 = 1UL;
            ++l_1458;
            (*l_53) = (&l_1387 != (void*)0);
        }
        else
        {
            int **l_1461 = &l_53;
            (*l_1461) = func_24(p_11);
            (*l_53) ^= (*g_298);
            (**l_1461) ^= l_1376;
            (**l_1461) &= l_1376;
        }
    }
    (*l_1464) = l_1462;
    for (g_1287 = (-30); (g_1287 < 27); g_1287 = safe_add_func_int64_t_s_s(g_1287, 1))
    {
        (*l_1462) = ((void*)0 != &g_608);
    }
    (*l_1464) = func_76(((safe_div_func_uint32_t_u_u((g_307 ^ ((void*)0 != &l_1464)), (*g_298))) != (-5L)), (safe_add_func_int16_t_s_s(p_11, (safe_lshift_func_uint8_t_u_s(((g_7 <= (&l_1462 == &l_53)) < g_635.f0), (**l_1464))))), p_10, p_10);
    return p_10;
}







static int func_15(unsigned long long p_16, unsigned char p_17, const int * p_18)
{
    unsigned char l_1324 = 0xCEL;
    for (p_16 = 4; (p_16 == 60); ++p_16)
    {
        (*g_608) = g_1323;
        (*g_298) = l_1324;
    }
    return (*g_298);
}







static unsigned long long func_19(int * p_20, unsigned p_21, unsigned p_22, unsigned p_23)
{
    char l_1320 = 5L;
    (*g_298) = l_1320;
    return g_286.f1;
}







static int * func_24(unsigned long long p_25)
{
    unsigned l_69 = 0xC3A435FAL;
    int **l_497 = &g_93;
    const struct S0 * const l_527 = &g_509;
    int l_579 = 0x67AB59E9L;
    short l_580 = (-5L);
    int *** const l_586 = &l_497;
    int l_663 = 0L;
    int l_684 = 0x2CB46335L;
    short l_714 = 2L;
    unsigned l_732 = 0x1B386BFEL;
    char l_733 = 1L;
    int l_918 = 4L;
    int l_972 = 6L;
    int l_978 = 0x9F178DF0L;
    int l_987 = 0L;
    int l_1001 = 0xB5CDEC1CL;
    int l_1004 = (-1L);
    unsigned char l_1049 = 1UL;
    unsigned l_1104 = 3UL;
    unsigned l_1109 = 2UL;
    unsigned l_1292 = 0xDEE4BE1EL;
    return (*l_497);
}







static unsigned short func_36(unsigned char p_37, short p_38, unsigned long long p_39)
{
    return p_39;
}







static short func_46(char p_47, short p_48, unsigned p_49, unsigned long long p_50, int * p_51)
{
    int l_54 = 0x21DD8E18L;
    return l_54;
}







static unsigned func_63(unsigned long long p_64, unsigned char p_65, unsigned short p_66, unsigned p_67, int p_68)
{
    unsigned l_85 = 4294967295UL;
    int *l_90 = &g_73;
    int l_146 = 0xB120E24CL;
    int **l_219 = (void*)0;
    int ***l_218 = &l_219;
    unsigned long long l_230 = 0x34DB89AE2E44F393LL;
    unsigned l_341 = 0x2588ED02L;
    int l_361 = (-6L);
    int l_381 = (-6L);
    int l_476 = 0x2100304DL;
    for (g_13 = 0; (g_13 <= 24); g_13 = safe_add_func_int16_t_s_s(g_13, 4))
    {
        int *l_72 = &g_73;
        (*l_72) = (-1L);
    }
lbl_285:
    g_75 = g_74;
lbl_270:
    g_93 = func_76(p_67, (safe_add_func_int64_t_s_s((safe_add_func_int16_t_s_s(l_85, ((void*)0 != &g_13))), ((~func_46(((safe_mod_func_uint64_t_u_u(p_66, func_36((((p_68 < ((safe_mod_func_int64_t_s_s(p_66, l_85)) > l_85)) ^ 0xE8L) || l_85), p_67, p_68))) > g_74.f1), p_65, p_67, l_85, l_90)) | 0x93E9ABA4L))), g_73, (*l_90));
    for (p_66 = 0; (p_66 < 35); p_66 = safe_add_func_uint32_t_u_u(p_66, 1))
    {
        unsigned char l_102 = 0x58L;
        int **l_119 = &g_93;
        int l_126 = 1L;
        int l_132 = 1L;
        int l_133 = 9L;
        int l_150 = 0xB43BFD27L;
        int l_253 = (-1L);
        unsigned l_268 = 4294967286UL;
        for (g_73 = 0; (g_73 > 25); g_73 = safe_add_func_int16_t_s_s(g_73, 9))
        {
            struct S0 *l_99 = &g_74;
            int l_107 = 0x5503930AL;
            int l_197 = 0x7D46BBF9L;
            int **l_252 = &g_93;
            char l_312 = 1L;
            int l_457 = 0x3FAA92D2L;
            (*l_99) = g_98;
            if ((*l_90))
            {
                unsigned char l_110 = 0x3DL;
                int l_111 = 0x423D5115L;
                int l_182 = 0xC527E36AL;
                short l_239 = 0xD567L;
                (*g_93) = (safe_sub_func_uint8_t_u_u(l_102, (safe_sub_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(l_107, (safe_rshift_func_uint8_t_u_s(0x9DL, (g_75.f0 && g_7))))) < (g_73 & (((void*)0 == &g_13) <= 0xBD2E7792L))) == 1L), l_110))));
                if (p_67)
                {
                    unsigned short l_112 = 0xF671L;
                    int l_115 = 0x95DF25DBL;
                    ++l_112;
                    l_115 &= (*g_93);
                }
                else
                {
                    int **l_116 = &g_93;
                    int l_160 = 0xA657C725L;
                    (*l_116) = &g_73;
                    for (g_75.f0 = 0; (g_75.f0 < 39); ++g_75.f0)
                    {
                        int ***l_120 = &l_116;
                        (*l_120) = l_119;
                    }
                    if (p_66)
                    {
                        int *l_121 = &l_111;
                        int *l_122 = &g_98.f1;
                        int *l_123 = &l_111;
                        int *l_124 = &g_74.f1;
                        int *l_125 = &g_75.f1;
                        int *l_127 = &g_13;
                        int *l_128 = &l_126;
                        int *l_129 = &g_98.f1;
                        int *l_130 = &g_75.f1;
                        int *l_131 = &g_75.f1;
                        int *l_134 = &g_98.f1;
                        int *l_135 = &g_13;
                        int *l_136 = &l_107;
                        int *l_137 = &l_107;
                        int *l_138 = &l_111;
                        int *l_139 = &g_74.f1;
                        int *l_140 = (void*)0;
                        int *l_141 = &l_111;
                        int l_142 = 0x6A2966C6L;
                        int *l_143 = &l_107;
                        int *l_144 = &l_133;
                        int *l_145 = &g_75.f1;
                        int *l_147 = &g_98.f1;
                        int *l_148 = &g_74.f1;
                        int *l_149 = (void*)0;
                        int *l_151 = &g_74.f1;
                        int *l_152 = &g_74.f1;
                        int *l_153 = (void*)0;
                        int *l_154 = (void*)0;
                        int *l_155 = &l_126;
                        short l_156 = (-1L);
                        int *l_157 = &l_142;
                        int *l_158 = &g_98.f1;
                        int *l_159 = &g_75.f1;
                        int *l_161 = (void*)0;
                        int *l_165 = &g_98.f1;
                        int *l_166 = &l_150;
                        int *l_167 = &l_107;
                        int *l_168 = &l_126;
                        int *l_169 = &l_160;
                        int *l_170 = &l_111;
                        int *l_171 = &l_126;
                        int *l_172 = &g_98.f1;
                        int *l_173 = &l_111;
                        int *l_174 = &l_146;
                        int *l_175 = &l_142;
                        int *l_176 = &l_146;
                        int *l_177 = &l_133;
                        int *l_178 = &g_13;
                        int *l_179 = (void*)0;
                        int *l_180 = &l_126;
                        int *l_181 = &l_107;
                        int *l_183 = &l_111;
                        int *l_184 = &l_132;
                        int *l_185 = &l_150;
                        int *l_186 = &l_111;
                        int *l_187 = &l_126;
                        int *l_188 = &g_13;
                        int *l_189 = (void*)0;
                        int *l_190 = &l_182;
                        int *l_191 = &l_133;
                        int *l_192 = &g_13;
                        int *l_193 = &g_74.f1;
                        int *l_194 = (void*)0;
                        int *l_195 = &g_13;
                        int *l_196 = &l_107;
                        int *l_198 = (void*)0;
                        int *l_199 = (void*)0;
                        int *l_200 = (void*)0;
                        int *l_201 = (void*)0;
                        int *l_202 = &g_98.f1;
                        int *l_203 = &g_75.f1;
                        int *l_204 = (void*)0;
                        int *l_205 = &l_142;
                        int *l_206 = &l_146;
                        int *l_207 = &g_75.f1;
                        int *l_208 = (void*)0;
                        int *l_209 = &l_146;
                        int *l_210 = (void*)0;
                        unsigned short l_211 = 65535UL;
                        ++g_162;
                        --l_211;
                    }
                    else
                    {
                        int *l_220 = (void*)0;
                        int *l_221 = &g_75.f1;
                        (*l_221) |= (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((l_218 != &l_219), 0)), 6));
                        g_93 = func_76(p_65, g_75.f2, g_75.f1, (safe_div_func_uint16_t_u_u((!((safe_add_func_int64_t_s_s((((safe_mod_func_int32_t_s_s(0x8978726BL, (safe_sub_func_uint32_t_u_u(p_66, (l_230 && (func_46(((((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((g_13 <= g_75.f1) == ((safe_rshift_func_uint16_t_u_s(((((safe_div_func_uint64_t_u_u(p_65, l_107)) < p_64) | g_13) ^ p_67), p_65)) | g_7)), p_66)), 0x62E2FC08L)) || g_7) ^ p_68) || g_13), l_111, g_98.f1, p_66, &g_73) >= p_64)))))) == p_66) > g_13), 9L)) && l_239)), g_74.f1)));
                    }
                    if ((func_46((func_36((safe_add_func_uint8_t_u_u(((l_197 >= (((safe_lshift_func_uint16_t_u_s(((*g_93) <= (safe_div_func_int16_t_s_s((safe_add_func_int64_t_s_s((~(safe_sub_func_uint64_t_u_u((0x2E23DBE8L == (~(&g_93 == l_252))), func_46(g_73, g_13, (((&l_219 == (void*)0) != g_73) <= p_68), p_67, &l_182)))), l_253)), 1L))), 12)) | 0xADCECC9CL) < 0UL)) >= p_67), 0x2BL)), p_65, p_68) <= (**l_119)), g_98.f3, p_68, (**l_119), &g_13) == p_64))
                    {
                        long long l_254 = 0x89A5045441F61FBCLL;
                        long long l_257 = (-1L);
                        if ((*g_93))
                            break;
                        (*l_116) = func_76((l_254 > p_64), func_36((safe_sub_func_uint8_t_u_u(l_257, g_74.f0)), (safe_add_func_int16_t_s_s(p_67, (safe_rshift_func_int8_t_s_s(((*l_119) == &g_13), (safe_lshift_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(func_36((**l_252), (**l_116), g_162), p_66)), p_67)) == g_75.f0) & 0x78F4EEAAL), l_257)))))), p_68), l_268, (**l_252));
                        (*l_99) = g_269;
                    }
                    else
                    {
                        unsigned short l_278 = 65531UL;
                        (*l_99) = g_269;
                        if (l_110)
                            goto lbl_270;
                        l_160 ^= (safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((+func_36((safe_rshift_func_int8_t_s_s(g_7, 2)), (g_75.f0 || (g_98.f2 ^ (safe_unary_minus_func_int64_t_s(l_278)))), p_66)), (p_65 | (safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(p_65, (safe_mod_func_int8_t_s_s(((l_239 | (-4L)) | l_278), 255UL)))), (*g_93)))))), 3));
                    }
                }
                if (l_107)
                    goto lbl_285;
                g_286 = g_286;
            }
            else
            {
                int ***l_288 = &l_119;
                unsigned l_297 = 0xA2B7FD2DL;
                g_298 = func_76(((g_287 != &l_252) >= ((((((l_288 != g_287) == 0x14DDL) || (safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((((safe_sub_func_uint64_t_u_u(((**l_119) < ((safe_sub_func_int8_t_s_s((((-1L) || l_297) != g_286.f0), g_286.f0)) ^ p_68)), 18446744073709551615UL)) & (*l_90)) != g_13), 65527UL)), (-4L)))) & 0xD6L) != g_269.f3) < 0xE1L)), p_67, (**l_252), p_67);
                (***l_288) &= ((void*)0 != (**l_288));
                if (p_65)
                    break;
            }
            if (p_67)
            {
                int l_324 = 0x8326687BL;
                int l_331 = 0x63C6DC1AL;
                l_133 |= ((-7L) && (((safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s((1UL || (safe_mod_func_int8_t_s_s((((safe_add_func_int16_t_s_s(0xBAFCL, g_307)) > p_65) || (safe_div_func_int64_t_s_s((**l_252), 0x79B5F31F8F648F5DLL))), func_36(((safe_rshift_func_int8_t_s_s(0x5AL, (func_46((g_75.f0 || p_66), p_68, (**l_119), g_75.f0, &g_73) == (**l_252)))) >= 7UL), g_98.f0, p_64)))), 0x318DL)), 6L)) != l_312) <= 18446744073709551615UL));
                if ((*g_93))
                {
                    int *l_313 = &l_132;
                    (*l_252) = l_313;
                    (*g_93) = (0xB3L | g_307);
                }
                else
                {
                    int *l_314 = &g_75.f1;
                    int *l_315 = (void*)0;
                    int *l_316 = (void*)0;
                    int *l_317 = (void*)0;
                    int *l_318 = &g_286.f1;
                    int *l_319 = &g_74.f1;
                    int *l_320 = &l_253;
                    int *l_321 = &g_98.f1;
                    int *l_322 = &g_13;
                    int *l_323 = &l_126;
                    int *l_325 = &g_98.f1;
                    int *l_326 = &l_253;
                    int *l_327 = &l_107;
                    int *l_328 = &g_74.f1;
                    int *l_329 = &g_75.f1;
                    int *l_330 = &g_98.f1;
                    int *l_332 = &g_98.f1;
                    int *l_333 = &l_133;
                    int *l_334 = &l_126;
                    int *l_335 = &l_126;
                    int *l_336 = &g_74.f1;
                    int *l_337 = &l_107;
                    int *l_338 = (void*)0;
                    int *l_339 = &l_324;
                    int *l_340 = &g_75.f1;
                    l_341--;
                    (*l_323) = (safe_lshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(((g_75.f2 || 0x8245ED7DL) >= func_46(g_75.f1, ((0xA5FC61F8F8EE2CA6LL || func_36((safe_unary_minus_func_int64_t_s(g_7)), g_75.f0, (((void*)0 == &l_252) == ((*l_252) != (*l_252))))) == p_67), l_331, (*l_90), &l_331)))), 0UL)) > (**l_252)), 4));
                    (*l_329) = ((l_119 == l_252) && g_350);
                }
                return p_66;
            }
            else
            {
                long long l_452 = (-7L);
                if ((p_65 != ((0x94E24BC701F6389BLL >= 0x2A8A470504D8E8CDLL) >= 4UL)))
                {
                    return g_286.f3;
                }
                else
                {
                    long long l_395 = 7L;
                    int l_434 = 6L;
                    for (l_312 = (-1); (l_312 < (-23)); l_312--)
                    {
                        int *l_353 = (void*)0;
                        int *l_354 = &g_98.f1;
                        int *l_355 = &g_74.f1;
                        int *l_356 = (void*)0;
                        int *l_357 = &l_107;
                        int *l_358 = &l_253;
                        int *l_359 = &g_13;
                        int *l_360 = &g_286.f1;
                        int *l_362 = &l_253;
                        int *l_363 = &g_98.f1;
                        int *l_364 = &l_253;
                        int *l_365 = &g_74.f1;
                        int *l_366 = &l_150;
                        int *l_367 = &l_150;
                        int *l_368 = (void*)0;
                        int *l_369 = &g_13;
                        int *l_370 = &l_107;
                        int *l_371 = &g_98.f1;
                        int *l_372 = &l_197;
                        int *l_373 = (void*)0;
                        int *l_374 = &l_197;
                        int *l_375 = &l_146;
                        int *l_376 = (void*)0;
                        int *l_377 = &l_253;
                        int l_378 = 1L;
                        int *l_379 = (void*)0;
                        int *l_380 = (void*)0;
                        int *l_382 = &l_381;
                        int *l_383 = (void*)0;
                        int *l_384 = (void*)0;
                        int *l_385 = &l_132;
                        int *l_386 = &l_197;
                        int *l_387 = &g_13;
                        int *l_388 = &l_133;
                        int *l_389 = (void*)0;
                        int *l_390 = &l_132;
                        int *l_391 = (void*)0;
                        int *l_392 = &l_253;
                        int l_393 = 0xD427A97BL;
                        int *l_394 = &g_286.f1;
                        int *l_396 = &l_253;
                        int *l_397 = &l_197;
                        int *l_398 = &g_13;
                        int *l_399 = (void*)0;
                        int *l_400 = &g_98.f1;
                        int *l_401 = &l_378;
                        int *l_402 = (void*)0;
                        int *l_403 = &l_150;
                        int *l_404 = &g_98.f1;
                        int *l_405 = &l_378;
                        int *l_406 = &g_13;
                        int *l_407 = &l_133;
                        int *l_408 = (void*)0;
                        int *l_409 = &l_146;
                        int *l_410 = &l_393;
                        int *l_411 = &l_253;
                        int *l_412 = &l_393;
                        int *l_413 = &g_98.f1;
                        int *l_414 = &l_381;
                        int *l_415 = &l_381;
                        int *l_416 = &g_74.f1;
                        int *l_417 = &l_197;
                        int *l_418 = &l_381;
                        int *l_419 = &g_75.f1;
                        int *l_420 = (void*)0;
                        int *l_421 = &l_150;
                        int *l_422 = (void*)0;
                        int *l_423 = &l_133;
                        int *l_424 = &g_13;
                        int *l_425 = (void*)0;
                        int *l_426 = (void*)0;
                        int *l_427 = &l_361;
                        int *l_428 = &l_133;
                        int *l_429 = (void*)0;
                        int *l_430 = &g_74.f1;
                        int *l_431 = &g_75.f1;
                        int *l_432 = &l_393;
                        int *l_433 = (void*)0;
                        int *l_435 = &l_133;
                        int *l_436 = (void*)0;
                        int *l_437 = &l_133;
                        int *l_438 = &l_381;
                        int *l_439 = (void*)0;
                        int *l_440 = &l_132;
                        int *l_441 = (void*)0;
                        int *l_442 = &l_378;
                        int *l_443 = &l_197;
                        int *l_444 = &l_361;
                        int *l_445 = &g_13;
                        int *l_446 = &l_150;
                        int *l_447 = &g_98.f1;
                        int *l_448 = (void*)0;
                        int *l_449 = (void*)0;
                        int *l_450 = (void*)0;
                        int *l_451 = (void*)0;
                        int *l_454 = &g_98.f1;
                        int *l_455 = &l_126;
                        int *l_456 = &l_393;
                        int *l_458 = &l_146;
                        int *l_459 = &l_132;
                        int *l_460 = &g_98.f1;
                        int *l_461 = &l_146;
                        int *l_462 = &l_107;
                        int l_463 = 0L;
                        int *l_464 = &l_457;
                        int *l_465 = &l_457;
                        int *l_466 = (void*)0;
                        int *l_467 = &l_361;
                        int *l_468 = &g_98.f1;
                        int *l_469 = &l_361;
                        int *l_470 = &l_361;
                        int *l_471 = &l_381;
                        int *l_472 = &l_197;
                        int *l_473 = &l_197;
                        int *l_474 = (void*)0;
                        int *l_475 = &g_75.f1;
                        int *l_477 = &l_378;
                        int *l_478 = &l_463;
                        int *l_479 = &l_457;
                        int *l_480 = &l_146;
                        int *l_481 = &l_393;
                        int *l_482 = &l_133;
                        (*g_298) = (**l_252);
                        --g_483;
                    }
                    (*l_252) = (*l_119);
                    (*l_119) = &l_146;
                }
                if ((*g_298))
                    break;
            }
            l_119 = l_252;
        }
        return g_286.f0;
    }
    return g_286.f2;
}







static int * func_76(int p_77, long long p_78, unsigned long long p_79, unsigned short p_80)
{
    struct S0 *l_91 = &g_75;
    int *l_92 = &g_13;
    (*l_91) = g_75;
    return l_92;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_74.f2, "g_74.f2", print_hash_value);
    transparent_crc(g_74.f3, "g_74.f3", print_hash_value);
    transparent_crc(g_75.f0, "g_75.f0", print_hash_value);
    transparent_crc(g_75.f1, "g_75.f1", print_hash_value);
    transparent_crc(g_75.f2, "g_75.f2", print_hash_value);
    transparent_crc(g_75.f3, "g_75.f3", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_98.f1, "g_98.f1", print_hash_value);
    transparent_crc(g_98.f2, "g_98.f2", print_hash_value);
    transparent_crc(g_98.f3, "g_98.f3", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_269.f0, "g_269.f0", print_hash_value);
    transparent_crc(g_269.f1, "g_269.f1", print_hash_value);
    transparent_crc(g_269.f2, "g_269.f2", print_hash_value);
    transparent_crc(g_269.f3, "g_269.f3", print_hash_value);
    transparent_crc(g_286.f0, "g_286.f0", print_hash_value);
    transparent_crc(g_286.f1, "g_286.f1", print_hash_value);
    transparent_crc(g_286.f2, "g_286.f2", print_hash_value);
    transparent_crc(g_286.f3, "g_286.f3", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_509.f0, "g_509.f0", print_hash_value);
    transparent_crc(g_509.f1, "g_509.f1", print_hash_value);
    transparent_crc(g_509.f2, "g_509.f2", print_hash_value);
    transparent_crc(g_509.f3, "g_509.f3", print_hash_value);
    transparent_crc(g_559, "g_559", print_hash_value);
    transparent_crc(g_635.f0, "g_635.f0", print_hash_value);
    transparent_crc(g_635.f1, "g_635.f1", print_hash_value);
    transparent_crc(g_635.f2, "g_635.f2", print_hash_value);
    transparent_crc(g_635.f3, "g_635.f3", print_hash_value);
    transparent_crc(g_650.f0, "g_650.f0", print_hash_value);
    transparent_crc(g_650.f1, "g_650.f1", print_hash_value);
    transparent_crc(g_650.f2, "g_650.f2", print_hash_value);
    transparent_crc(g_650.f3, "g_650.f3", print_hash_value);
    transparent_crc(g_1026, "g_1026", print_hash_value);
    transparent_crc(g_1046, "g_1046", print_hash_value);
    transparent_crc(g_1287, "g_1287", print_hash_value);
    transparent_crc(g_1323.f0, "g_1323.f0", print_hash_value);
    transparent_crc(g_1323.f1, "g_1323.f1", print_hash_value);
    transparent_crc(g_1323.f2, "g_1323.f2", print_hash_value);
    transparent_crc(g_1323.f3, "g_1323.f3", print_hash_value);
    transparent_crc(g_1347.f0, "g_1347.f0", print_hash_value);
    transparent_crc(g_1347.f1, "g_1347.f1", print_hash_value);
    transparent_crc(g_1347.f2, "g_1347.f2", print_hash_value);
    transparent_crc(g_1347.f3, "g_1347.f3", print_hash_value);
    transparent_crc(g_1371.f0, "g_1371.f0", print_hash_value);
    transparent_crc(g_1371.f1, "g_1371.f1", print_hash_value);
    transparent_crc(g_1371.f2, "g_1371.f2", print_hash_value);
    transparent_crc(g_1371.f3, "g_1371.f3", print_hash_value);
    transparent_crc(g_1709, "g_1709", print_hash_value);
    transparent_crc(g_1750, "g_1750", print_hash_value);
    transparent_crc(g_1768, "g_1768", print_hash_value);
    transparent_crc(g_1776, "g_1776", print_hash_value);
    transparent_crc(g_1790, "g_1790", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
