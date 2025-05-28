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
   int f1;
};

union U1 {
   int f0;
   signed f1 : 8;
   char f2;
   volatile char * f3;
};


static char g_10 = (-3L);
static union U1 g_17 = {-10L};
static const struct S0 g_37 = {18446744073709551613UL,0xC9D94031L};
static char *g_42 = (void*)0;
static char **g_41 = &g_42;
static char *** volatile g_40 = &g_41;
static int g_52 = 0xB4373C94L;
static volatile unsigned short g_68 = 0x58D3L;
static const unsigned short g_74 = 65535UL;
static char g_92 = 0x95L;
static unsigned g_93 = 9UL;
static struct S0 g_97 = {1UL,0x2E276980L};
static struct S0 * const volatile g_96 = &g_97;
static struct S0 g_102 = {0x6ED293A85175EF58LL,-1L};
static const volatile int *g_104 = (void*)0;
static const volatile int ** const g_103 = &g_104;
static const volatile int **g_106 = &g_104;
static const volatile int *** volatile g_105 = &g_106;
static int g_133 = 0xA84ADD17L;
static int *g_132 = &g_133;
static long long g_155 = 0x08A12FBA81857D46LL;
static unsigned char g_176 = 0x64L;
static int * const volatile g_184 = &g_133;
static volatile long long g_236 = 2L;
static int g_238 = 0x9C37587FL;
static unsigned long long g_246 = 0xD0A6DBD2E68FD62BLL;
static int * volatile g_254 = &g_52;
static volatile union U1 *g_266 = (void*)0;
static volatile union U1 ** volatile g_265 = &g_266;
static int g_268 = 0xF72574CFL;
static volatile int g_413 = 0x927F863DL;
static unsigned g_421 = 4294967295UL;
static const int g_573 = (-3L);
static struct S0 *g_578 = (void*)0;
static struct S0 **g_577 = &g_578;
static struct S0 *** volatile g_576 = &g_577;
static int ** volatile g_601 = &g_132;
static volatile union U1 ** volatile g_602 = &g_266;
static struct S0 * volatile g_639 = &g_102;
static struct S0 *** volatile g_654 = &g_577;
static int **g_668 = &g_132;
static int *** volatile g_667 = &g_668;
static volatile long long g_694 = (-1L);
static const int *g_700 = (void*)0;
static const int ** volatile g_699 = &g_700;
static union U1 g_728 = {5L};
static union U1 *g_727 = &g_728;
static int ** volatile g_741 = &g_132;
static unsigned char g_978 = 0x91L;
static int *** volatile g_1019 = &g_668;
static struct S0 * volatile g_1022 = &g_97;
static long long g_1032 = 1L;
static int * volatile g_1034 = &g_268;
static int * volatile g_1224 = &g_52;



static char func_1(void);
static struct S0 func_2(const unsigned p_3, char * p_4, char p_5);
static struct S0 func_6(char * p_7, char * p_8);
static char * func_11(union U1 p_12, unsigned p_13, unsigned long long p_14, short p_15, char * p_16);
static int func_18(unsigned long long p_19, unsigned short p_20);
static int func_24(char p_25, char * p_26, const char * p_27, int p_28);
static unsigned long long func_29(union U1 p_30, int p_31);
static union U1 func_32(unsigned char p_33, const struct S0 p_34, short p_35);
static short func_44(unsigned p_45, unsigned long long p_46);
static unsigned long long func_48(int p_49, struct S0 p_50);
static char func_1(void)
{
    char *l_9 = &g_10;
    int l_21 = 0x956E74E8L;
    char l_996 = 0x1FL;
    l_21 = (func_2((func_6(l_9, func_11(g_17, g_17.f1, g_10, (((func_18((l_21 , g_17.f2), l_21) || (0L ^ g_97.f1)) == g_102.f1) ^ l_996), (*g_41))) , g_694), &l_996, l_21) , (*g_254));
    return l_21;
}







static struct S0 func_2(const unsigned p_3, char * p_4, char p_5)
{
    const char l_1223 = 0x01L;
    char *l_1225 = &g_92;
    struct S0 l_1226 = {0UL,-1L};
    int *l_1227 = &g_52;
    (*g_103) = (*g_103);
    (*g_1224) = l_1223;
    (*g_1022) = (l_1223 , l_1226);
    l_1227 = l_1227;
    return l_1226;
}







static struct S0 func_6(char * p_7, char * p_8)
{
    short l_999 = 0L;
    struct S0 l_1000 = {18446744073709551615UL,-1L};
    struct S0 ***l_1001 = &g_577;
    union U1 l_1012 = {0L};
    char *l_1014 = &l_1012.f2;
    int **l_1016 = (void*)0;
    char l_1029 = 0x71L;
    int l_1045 = 0x27C9C7FDL;
    int l_1094 = (-1L);
    int l_1120 = (-7L);
    int l_1134 = (-1L);
    int l_1142 = 0xD9D3AB90L;
    int l_1149 = 0x2CBC95D0L;
    int l_1187 = 0x07244245L;
    const volatile int *l_1213 = &g_413;
    struct S0 l_1222 = {0xAE766D7A8B084CE3LL,-10L};
    (**g_668) = (18446744073709551608UL | ((l_999 && g_37.f0) != (l_999 | (l_999 >= 0x8059L))));
    (*g_132) = ((l_1000 , &g_577) != l_1001);
    if (((*l_1001) != (void*)0))
    {
        char l_1002 = 0x80L;
        struct S0 l_1005 = {3UL,0xD69C1DC5L};
        unsigned l_1013 = 1UL;
        int *l_1015 = &g_268;
        int ***l_1017 = (void*)0;
        int ***l_1018 = (void*)0;
        (*g_132) |= l_1002;
        (*l_1015) ^= ((safe_sub_func_int64_t_s_s(l_1002, (((l_1005 , ((l_1005.f1 == func_44((safe_mod_func_int64_t_s_s(l_1013, l_1013)), g_37.f1)) , 9UL)) <= g_74) && g_17.f0))) , l_1005.f1);
        (*g_668) = l_1015;
        (*g_1019) = l_1016;
    }
    else
    {
        short l_1033 = 0xE282L;
        union U1 l_1058 = {0x8155D4B5L};
        int l_1116 = (-6L);
        int l_1180 = 0L;
        int l_1197 = 0x25F6F314L;
        for (g_268 = 0; (g_268 <= (-28)); g_268 = safe_sub_func_uint64_t_u_u(g_268, 6))
        {
            (*g_1022) = (*g_96);
        }
        for (g_92 = (-21); (g_92 <= (-3)); ++g_92)
        {
            struct S0 **l_1030 = &g_578;
            int l_1031 = 5L;
            union U1 l_1055 = {0x0C93FF78L};
            int l_1157 = (-3L);
            int l_1182 = 5L;
            int l_1191 = 0xEE0DDC29L;
            int l_1198 = (-9L);
            unsigned l_1209 = 0x89081483L;
            (*g_1034) = ((g_102.f1 >= ((safe_rshift_func_int8_t_s_s(0x56L, 4)) ^ (func_44(((safe_lshift_func_int16_t_s_s(((l_1029 | ((l_1030 == (*g_654)) || l_1031)) == (~g_1032)), 13)) , 4294967295UL), (l_1033 != 0xF7676CE6FB6BC49FLL)) < l_1033))) <= 0x51D4L);
            for (g_52 = 7; (g_52 <= (-16)); g_52 = safe_sub_func_uint64_t_u_u(g_52, 1))
            {
                unsigned short l_1048 = 65528UL;
                int l_1071 = 0xF4E5B595L;
                int l_1123 = 1L;
                int l_1145 = 0x62B05023L;
                struct S0 l_1212 = {18446744073709551615UL,-1L};
                (**g_668) ^= (-1L);
                if (((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(func_18(l_1031, (((***g_1019) & ((safe_sub_func_uint64_t_u_u(l_1045, l_1031)) , (!0x9CA67752L))) , (safe_add_func_int8_t_s_s(((g_17.f0 & func_18(g_176, ((void*)0 != (*g_41)))) == g_97.f0), (*p_7))))), (-6L))), 1)) != l_1048) >= l_1048), 3)) >= l_1031))
                {
                    (**g_668) |= l_1048;
                }
                else
                {
                    const int l_1053 = 0x413A022EL;
                    struct S0 l_1054 = {0x8B2C49F178DF0CABLL,0x6C9771F1L};
                    (*g_132) = (((((safe_rshift_func_int16_t_s_s(((g_1032 > (l_1053 && (((l_1054 , &l_1031) != (*g_601)) >= 18446744073709551611UL))) | l_1048), 6)) > g_155) , l_1055) , &l_1055) != (void*)0);
                }
                if ((safe_lshift_func_int16_t_s_s(((l_1058 , func_18(func_18(l_1029, g_17.f2), l_1033)) >= ((l_1033 && g_37.f0) & (safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(l_1048, l_1048)) , 0UL) , 0UL), g_52)))), g_93)))
                {
                    long long l_1063 = 0L;
                    int l_1064 = 0x4DB7A2FFL;
                    int *l_1065 = &g_133;
                    int *l_1066 = (void*)0;
                    int l_1067 = 0L;
                    int *l_1068 = &l_1067;
                    int *l_1069 = (void*)0;
                    int *l_1070 = &l_1064;
                    int *l_1072 = &g_268;
                    int *l_1073 = &g_268;
                    int *l_1074 = &g_133;
                    int *l_1075 = &l_1031;
                    int *l_1076 = (void*)0;
                    int *l_1077 = &l_1064;
                    int *l_1078 = (void*)0;
                    int *l_1079 = &l_1031;
                    int *l_1080 = (void*)0;
                    int *l_1081 = &l_1064;
                    int *l_1082 = &l_1064;
                    int *l_1083 = &l_1064;
                    long long l_1084 = (-1L);
                    int *l_1085 = &g_268;
                    int *l_1086 = &l_1071;
                    int *l_1087 = (void*)0;
                    int *l_1088 = &l_1071;
                    int *l_1089 = &l_1031;
                    int *l_1090 = &g_268;
                    int *l_1091 = (void*)0;
                    int *l_1092 = &g_133;
                    int *l_1093 = &l_1067;
                    int *l_1095 = &l_1071;
                    int *l_1096 = &l_1094;
                    int l_1097 = 0xE28CF0BFL;
                    int *l_1098 = &l_1064;
                    int *l_1099 = &g_268;
                    int *l_1100 = &l_1097;
                    int *l_1101 = &l_1094;
                    int *l_1102 = &g_133;
                    int *l_1103 = &l_1067;
                    int *l_1104 = &l_1064;
                    int *l_1105 = &l_1031;
                    int *l_1106 = &l_1067;
                    int *l_1107 = &g_133;
                    int *l_1108 = (void*)0;
                    int *l_1109 = (void*)0;
                    int *l_1110 = &g_133;
                    int *l_1111 = &l_1067;
                    int *l_1112 = (void*)0;
                    int *l_1113 = &l_1067;
                    int *l_1114 = &g_268;
                    int *l_1115 = (void*)0;
                    int *l_1117 = &l_1094;
                    int *l_1118 = &l_1097;
                    int *l_1119 = &l_1097;
                    int *l_1121 = &l_1120;
                    int *l_1122 = &l_1097;
                    int *l_1124 = &l_1067;
                    int *l_1125 = (void*)0;
                    int *l_1126 = &l_1120;
                    int *l_1127 = &l_1097;
                    int *l_1128 = &l_1067;
                    int *l_1129 = &l_1097;
                    int *l_1130 = &l_1094;
                    int *l_1131 = &l_1071;
                    int *l_1132 = &l_1123;
                    int *l_1133 = &l_1067;
                    int *l_1135 = (void*)0;
                    int *l_1136 = &g_133;
                    int *l_1137 = &l_1067;
                    int *l_1138 = &l_1123;
                    int *l_1139 = &l_1064;
                    int *l_1140 = &l_1123;
                    int *l_1141 = &g_133;
                    int *l_1143 = &l_1094;
                    int *l_1144 = &l_1097;
                    int *l_1146 = &l_1067;
                    int *l_1147 = (void*)0;
                    int *l_1148 = &l_1064;
                    int *l_1150 = &l_1149;
                    int *l_1151 = (void*)0;
                    int *l_1152 = &l_1094;
                    int *l_1153 = (void*)0;
                    int *l_1154 = &l_1120;
                    int *l_1155 = &l_1031;
                    int *l_1156 = &l_1031;
                    int *l_1158 = &l_1149;
                    int *l_1159 = &l_1123;
                    int *l_1160 = &l_1116;
                    int *l_1161 = (void*)0;
                    int *l_1162 = &l_1116;
                    int *l_1163 = &l_1123;
                    int *l_1164 = &l_1134;
                    int *l_1165 = &l_1031;
                    int *l_1166 = &l_1067;
                    int *l_1167 = &l_1094;
                    int *l_1168 = &l_1067;
                    int *l_1169 = &l_1071;
                    int *l_1170 = &g_133;
                    int *l_1171 = (void*)0;
                    int *l_1172 = &g_133;
                    int *l_1173 = &l_1157;
                    int *l_1174 = (void*)0;
                    int *l_1175 = &g_133;
                    int *l_1176 = &l_1064;
                    int *l_1177 = &l_1031;
                    int *l_1178 = &l_1123;
                    int *l_1179 = &l_1145;
                    int *l_1181 = (void*)0;
                    int *l_1183 = &g_133;
                    int *l_1184 = &l_1149;
                    int *l_1185 = &l_1142;
                    int *l_1186 = &l_1182;
                    int *l_1188 = (void*)0;
                    int *l_1189 = &l_1123;
                    int *l_1190 = &l_1064;
                    int *l_1192 = &l_1187;
                    int *l_1193 = (void*)0;
                    int l_1194 = 0L;
                    int *l_1195 = &l_1142;
                    int *l_1196 = (void*)0;
                    int *l_1199 = &l_1064;
                    int *l_1200 = &l_1145;
                    int *l_1201 = &l_1191;
                    int *l_1202 = (void*)0;
                    int *l_1203 = (void*)0;
                    int *l_1204 = &l_1134;
                    int *l_1205 = (void*)0;
                    int *l_1206 = &g_133;
                    int *l_1207 = (void*)0;
                    int *l_1208 = &l_1187;
                    ++l_1209;
                }
                else
                {
                    return l_1212;
                }
            }
            (*g_132) &= (g_17.f0 >= func_18(g_52, l_1116));
        }
lbl_1219:
        l_1213 = (*g_103);
        for (g_246 = (-24); (g_246 > 56); g_246 = safe_add_func_int8_t_s_s(g_246, 5))
        {
            unsigned long long l_1218 = 0x1EF693DEA46531FBLL;
            (*g_668) = &l_1116;
            if ((safe_rshift_func_uint16_t_u_u(l_1218, 13)))
            {
                if (l_1058.f0)
                    goto lbl_1219;
                for (g_92 = 19; (g_92 != 20); g_92 = safe_add_func_int8_t_s_s(g_92, 2))
                {
                    return (*g_1022);
                }
            }
            else
            {
                if (l_1218)
                    break;
                (**g_741) = l_1058.f2;
            }
        }
    }
    l_1213 = (*g_106);
    return l_1222;
}







static char * func_11(union U1 p_12, unsigned p_13, unsigned long long p_14, short p_15, char * p_16)
{
    int l_997 = 0xCA24419CL;
    char *l_998 = &g_92;
    (*g_132) ^= l_997;
    return l_998;
}







static int func_18(unsigned long long p_19, unsigned short p_20)
{
    unsigned char l_36 = 0xD7L;
    int l_840 = 5L;
    int l_850 = 0xFB326C4EL;
    int l_868 = 9L;
    int l_887 = 0x6C6A838DL;
    int l_904 = (-7L);
    int l_917 = (-10L);
    int l_918 = 0xD73A4500L;
    const struct S0 l_983 = {18446744073709551615UL,0xE0619FA6L};
    char **l_989 = &g_42;
    for (p_19 = 0; (p_19 >= 32); p_19++)
    {
        char *l_429 = (void*)0;
        int *l_740 = &g_268;
        int l_796 = 0x819464EEL;
        int l_805 = 0xCB463358L;
        int l_820 = 0x6F21DA73L;
        int l_838 = 0x22C3D760L;
        int l_869 = 0x26A1E5F0L;
        int l_876 = 0xC7A52EC9L;
        int l_938 = 0x49E106DEL;
        char l_940 = 0L;
        int l_961 = 0xF1E5D0C2L;
        struct S0 **l_985 = (void*)0;
    }
    return l_918;
}







static int func_24(char p_25, char * p_26, const char * p_27, int p_28)
{
    int *l_430 = &g_52;
    int *l_431 = &g_133;
    int *l_432 = (void*)0;
    int l_433 = (-10L);
    int *l_434 = &g_52;
    int *l_435 = &g_133;
    int *l_436 = &g_52;
    int *l_437 = (void*)0;
    int *l_438 = &l_433;
    int *l_439 = &g_52;
    int l_440 = 0x08245ED7L;
    int *l_441 = (void*)0;
    int *l_442 = &g_133;
    int *l_443 = &g_133;
    int *l_444 = &l_440;
    int *l_445 = &g_133;
    int l_446 = 0x6D92C262L;
    int *l_447 = &l_446;
    int *l_448 = (void*)0;
    int *l_449 = &l_433;
    int *l_450 = &g_133;
    int l_451 = 2L;
    int *l_452 = (void*)0;
    int *l_453 = &l_451;
    int *l_454 = &l_440;
    int *l_455 = &l_451;
    int *l_456 = (void*)0;
    int *l_457 = &l_451;
    int *l_458 = &l_446;
    int *l_459 = &l_433;
    int *l_460 = (void*)0;
    int *l_461 = &l_446;
    int l_462 = 0x4E00818EL;
    int l_463 = (-1L);
    int *l_464 = &g_52;
    int *l_465 = &g_268;
    int l_466 = 0x4A4C6B17L;
    int *l_467 = &l_446;
    int *l_468 = &l_440;
    int *l_469 = (void*)0;
    int *l_470 = (void*)0;
    int *l_471 = &l_463;
    int *l_472 = &l_440;
    int *l_473 = &l_446;
    int *l_474 = (void*)0;
    int *l_475 = (void*)0;
    int *l_476 = (void*)0;
    int *l_477 = &l_463;
    int *l_478 = &l_446;
    int *l_479 = &l_466;
    int *l_480 = (void*)0;
    int *l_481 = &l_466;
    int l_482 = 0x9152CE2EL;
    int *l_483 = &l_463;
    int *l_484 = &l_440;
    int *l_485 = &l_433;
    int l_486 = (-1L);
    int l_487 = 0xADDDA188L;
    int l_488 = 0x9CB60F8DL;
    int *l_489 = &l_462;
    int *l_490 = &l_488;
    int *l_491 = &l_488;
    int *l_492 = &l_488;
    int *l_493 = (void*)0;
    int *l_494 = &g_133;
    int *l_495 = &l_462;
    int *l_496 = &g_52;
    int *l_497 = &g_133;
    int *l_498 = (void*)0;
    int *l_499 = &l_440;
    int *l_500 = &l_463;
    int *l_501 = &l_487;
    int l_502 = 1L;
    int l_503 = 0x006AEBFFL;
    int *l_504 = &l_446;
    int *l_505 = &l_466;
    int *l_506 = &l_451;
    int *l_507 = (void*)0;
    int *l_508 = &l_486;
    int *l_509 = &l_446;
    int *l_510 = &l_487;
    int *l_511 = &g_52;
    int *l_512 = &l_482;
    int *l_513 = &l_466;
    int *l_514 = &l_466;
    int *l_515 = &l_446;
    int l_516 = 1L;
    int l_517 = 1L;
    int *l_518 = &l_487;
    int *l_519 = &l_487;
    int l_520 = 0x0D427A97L;
    int *l_521 = (void*)0;
    int *l_522 = &l_451;
    int *l_523 = &g_268;
    int *l_524 = &g_52;
    int *l_525 = &l_446;
    int *l_526 = &l_486;
    int *l_527 = &l_517;
    int l_528 = (-3L);
    int *l_529 = &l_528;
    int *l_530 = &l_486;
    int *l_531 = &l_502;
    int *l_532 = (void*)0;
    int *l_533 = &l_462;
    int l_534 = (-1L);
    int *l_535 = &l_528;
    int *l_536 = &l_446;
    int *l_537 = &g_268;
    int *l_538 = &l_528;
    int *l_539 = &l_534;
    int *l_540 = &g_133;
    int *l_541 = (void*)0;
    int *l_542 = &l_433;
    int *l_543 = (void*)0;
    int *l_544 = &l_462;
    int *l_545 = &l_487;
    int *l_546 = &l_433;
    int l_547 = 0x90589B7EL;
    long long l_548 = 0xD9764715F0C1A52BLL;
    int *l_549 = &l_482;
    int *l_550 = &l_503;
    int *l_551 = (void*)0;
    int *l_552 = &l_520;
    int *l_553 = (void*)0;
    int *l_554 = &l_547;
    int *l_555 = &g_52;
    int *l_556 = &l_502;
    int *l_557 = &l_440;
    int *l_558 = &l_482;
    int *l_559 = &l_516;
    int *l_560 = &l_446;
    int *l_561 = &l_528;
    int l_562 = 0xFEB27B65L;
    unsigned long long l_563 = 0x39D3A4715469824FLL;
    const struct S0 *l_566 = &g_102;
    unsigned l_636 = 0x89C4CF2EL;
    union U1 *l_683 = &g_17;
    union U1 **l_682 = &l_683;
    char l_686 = (-9L);
    --l_563;
    if (func_44(p_28, (((*p_27) , (l_566 == &g_102)) & 0UL)))
    {
        union U1 *l_569 = &g_17;
        int l_570 = 4L;
        struct S0 ***l_582 = &g_577;
        struct S0 l_590 = {1UL,0L};
        int l_607 = (-10L);
        int l_608 = 0x4F165C23L;
        int l_609 = 0L;
        int l_610 = 0L;
        long long l_611 = (-1L);
        int l_612 = 9L;
        int l_613 = (-1L);
        int *l_614 = &l_562;
        int *l_615 = &l_612;
        int *l_616 = &l_462;
        int *l_617 = &l_462;
        int *l_618 = &l_487;
        int *l_619 = (void*)0;
        int *l_620 = &l_613;
        int *l_621 = (void*)0;
        int *l_622 = &l_570;
        int *l_623 = &l_502;
        int *l_624 = &l_534;
        int *l_625 = &l_612;
        int *l_626 = &l_502;
        int *l_627 = &l_462;
        int *l_628 = &l_609;
        int *l_629 = &l_534;
        int *l_630 = &l_463;
        int *l_631 = &l_451;
        unsigned char l_632 = 9UL;
        if (((((((((((g_246 > (safe_add_func_int32_t_s_s((*l_510), (((*g_265) != l_569) >= (((void*)0 == &g_17) && g_238))))) <= (l_570 , (safe_lshift_func_int8_t_s_u(g_573, 1)))) != g_268) , (*l_453)) > 0x74A20B93434B8ED6LL) || 0x68208D1EL) >= 4294967293UL) & 0x4D559065AF7AC0CDLL) | p_25) < g_133))
        {
            struct S0 *l_575 = (void*)0;
            struct S0 **l_574 = &l_575;
            struct S0 l_579 = {0UL,0L};
            unsigned short l_583 = 65535UL;
            (*g_576) = l_574;
            (*l_519) = func_44((p_25 | g_421), (((func_44(((((l_579 , ((safe_lshift_func_uint8_t_u_u(((void*)0 != l_582), p_25)) ^ 0x5E58DAA2L)) > ((l_583 & (safe_rshift_func_int8_t_s_s(((safe_add_func_uint64_t_u_u((!(safe_sub_func_uint64_t_u_u((g_68 ^ 0x1B31EB3652A6E1ADLL), p_25))), 0L)) | 0L), l_583))) ^ 0xF46207BFL)) <= 0xCA70L) , 4294967287UL), p_25) , g_52) , l_590) , p_25));
        }
        else
        {
            unsigned l_604 = 18446744073709551615UL;
            for (g_93 = (-7); (g_93 < 14); g_93 = safe_add_func_uint8_t_u_u(g_93, 9))
            {
                int l_593 = 0xAA1B837CL;
                int l_603 = 1L;
                if (l_593)
                    break;
                for (g_176 = (-6); (g_176 != 13); ++g_176)
                {
                    unsigned l_598 = 5UL;
                    char *l_599 = &g_92;
                    (*g_106) = (*g_106);
                    for (l_593 = (-10); (l_593 < (-8)); ++l_593)
                    {
                        int *l_600 = &l_562;
                        if (l_598)
                            break;
                        (*l_511) = (l_599 != (void*)0);
                        (*l_438) = (&p_28 != l_600);
                    }
                    (*g_601) = &p_28;
                }
                (*g_602) = (*g_265);
                l_604++;
                if (l_487)
                    goto lbl_635;
            }
            return p_25;
        }
lbl_635:
        --l_632;
        (*l_481) |= (*l_490);
        ++l_636;
    }
    else
    {
        unsigned long long l_640 = 0UL;
        int ***l_680 = &g_668;
        const struct S0 l_689 = {18446744073709551615UL,1L};
        (*g_639) = ((func_32((*l_510), (*l_566), p_25) , g_102.f0) , (*l_566));
        if ((0x1EA6511E1152EBCALL == l_640))
        {
            char **l_647 = (void*)0;
            int l_653 = 0xCB9D765CL;
            if ((((safe_lshift_func_uint8_t_u_s(func_44(p_28, ((((safe_sub_func_int64_t_s_s((0xB405L ^ 0x031EL), (safe_add_func_uint8_t_u_u(g_52, 255UL)))) | (((((*l_522) , ((l_647 == l_647) , p_28)) , p_28) , &p_28) == (void*)0)) >= 0xA9D412B1CDF8BA94LL) < 0xB4C8L)), 0)) | (-8L)) ^ 0x07L))
            {
                int **l_648 = &l_454;
                (*l_648) = &p_28;
                for (g_93 = 0; (g_93 <= 20); ++g_93)
                {
                    struct S0 l_655 = {1UL,0xDFD42932L};
                    union U1 *l_660 = &g_17;
                    union U1 **l_659 = &l_660;
                    int l_661 = (-10L);
                    int **l_665 = &l_494;
                    const unsigned l_669 = 0x41DCE14EL;
                    for (l_440 = 0; (l_440 >= 8); l_440 = safe_add_func_int64_t_s_s(l_440, 9))
                    {
                        (*l_648) = &p_28;
                        (*g_103) = (void*)0;
                        if (l_653)
                            break;
                        (*g_654) = (*g_576);
                    }
                    (*l_648) = &p_28;
                    if ((l_655 , (safe_unary_minus_func_int64_t_s((safe_lshift_func_uint8_t_u_s(0UL, (&g_266 == l_659)))))))
                    {
                        unsigned short l_662 = 65533UL;
                        int ***l_666 = (void*)0;
                        --l_662;
                        if (p_25)
                            continue;
                        (*g_667) = l_665;
                    }
                    else
                    {
                        unsigned short l_670 = 0x108FL;
                        if (l_669)
                            break;
                        (*l_506) &= func_44(p_25, l_670);
                        (*g_668) = &p_28;
                    }
                }
            }
            else
            {
                union U1 *l_687 = &g_17;
                int l_688 = 0xC1C0669FL;
                for (l_517 = 0; (l_517 >= (-18)); l_517--)
                {
                    union U1 l_675 = {0xE30C4F04L};
                    int l_681 = (-7L);
                    struct S0 *l_690 = &g_102;
                    l_681 ^= (((safe_mod_func_uint16_t_u_u(((l_675 , ((safe_lshift_func_uint8_t_u_s(p_28, (+(~((safe_sub_func_uint8_t_u_u(g_93, ((p_28 , &p_25) != &p_25))) | g_155))))) , l_680)) != &g_103), 0x9AC1L)) > l_675.f0) ^ 0UL);
                    (*l_690) = (((p_25 >= func_48((((((p_28 , ((void*)0 != l_682)) || (safe_add_func_uint8_t_u_u(((l_686 , &p_27) != (*g_40)), (g_176 <= ((l_687 == &g_17) | 0x97A5L))))) >= l_688) , &l_547) != (*g_103)), (*l_566))) && g_133) , l_689);
                }
            }
        }
        else
        {
            unsigned short l_691 = 0x56FFL;
            unsigned l_703 = 0x96216E67L;
            unsigned long long l_714 = 7UL;
            int l_719 = 0x01792889L;
            int l_721 = (-1L);
            union U1 *l_726 = (void*)0;
            (*l_519) |= (*l_560);
lbl_731:
            if (((func_29((*l_683), g_573) , p_25) , 0x6059952DL))
            {
                l_691--;
            }
            else
            {
                const int *l_698 = (void*)0;
                int l_701 = 0L;
                int l_702 = 1L;
                struct S0 * const *l_716 = &g_578;
                struct S0 * const **l_715 = &l_716;
                int l_720 = (-4L);
                if (g_694)
                {
                    (**l_680) = &l_488;
                    if ((***l_680))
                    {
                        const unsigned long long l_695 = 0x9BA9D16ABC98EC51LL;
                        p_28 ^= l_695;
                    }
                    else
                    {
                        (*l_438) ^= (***g_667);
                    }
                }
                else
                {
                    unsigned short l_709 = 0x16D8L;
                    for (g_246 = 0; (g_246 != 47); g_246 = safe_add_func_int8_t_s_s(g_246, 6))
                    {
                        (*g_601) = (void*)0;
                        (*l_680) = (*g_667);
                        (*g_699) = l_698;
                        --l_703;
                    }
                    for (l_487 = 12; (l_487 != 24); l_487 = safe_add_func_int16_t_s_s(l_487, 1))
                    {
                        long long l_708 = 0L;
                        ++l_709;
                    }
                }
                if ((p_25 && (g_68 & ((g_37.f1 , (void*)0) == ((safe_mod_func_int64_t_s_s(p_25, (l_714 | g_97.f0))) , l_715)))))
                {
                    unsigned short l_725 = 65535UL;
                    for (l_562 = (-29); (l_562 > 16); l_562 = safe_add_func_uint8_t_u_u(l_562, 3))
                    {
                        unsigned long long l_722 = 2UL;
                        l_722--;
                        if (l_725)
                            break;
                        (*g_96) = (*g_96);
                    }
                }
                else
                {
                    g_727 = l_726;
                }
            }
            for (g_97.f0 = (-23); (g_97.f0 > 32); g_97.f0 = safe_add_func_uint64_t_u_u(g_97.f0, 6))
            {
                if (p_28)
                    goto lbl_731;
                return l_691;
            }
        }
    }
    return p_25;
}







static unsigned long long func_29(union U1 p_30, int p_31)
{
    unsigned l_253 = 0xCECC9C5EL;
    char *l_259 = &g_10;
    int l_264 = 0x90526190L;
    int l_330 = 0L;
    int l_333 = 0L;
    int l_392 = 0x1E312FF3L;
    int l_401 = (-1L);
    for (g_246 = 25; (g_246 > 13); g_246--)
    {
        unsigned l_257 = 0x1BF8528BL;
        int l_258 = 0xDCF8F5F8L;
        int *l_267 = &g_268;
        int l_398 = (-1L);
        unsigned l_424 = 9UL;
        if ((safe_unary_minus_func_uint16_t_u(p_30.f2)))
        {
            (*g_254) = l_253;
            if (p_30.f1)
                continue;
        }
        else
        {
            return p_30.f1;
        }
        (*l_267) |= (safe_add_func_int8_t_s_s((((l_257 , &g_92) != (l_258 , l_259)) , (((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(func_44(l_264, (0x5E47C546E72F9FE9LL != (0x6A8CL > (!(((*g_96) , g_265) != &g_266))))), g_97.f1)), p_30.f0)) || 7L) ^ 0xEEAAD7C9L)), l_253));
        (*l_267) ^= (p_31 , p_30.f1);
        for (g_93 = 24; (g_93 != 47); g_93 = safe_add_func_uint64_t_u_u(g_93, 1))
        {
            int *l_271 = &g_133;
            int *l_272 = &l_264;
            int *l_273 = &g_52;
            int *l_274 = (void*)0;
            int *l_275 = &g_268;
            int l_276 = 1L;
            int *l_277 = &g_52;
            int l_278 = 0x3550C489L;
            int *l_279 = &g_52;
            int *l_280 = (void*)0;
            int *l_281 = &g_268;
            int *l_282 = (void*)0;
            int *l_283 = (void*)0;
            int *l_284 = &g_268;
            int *l_285 = &l_276;
            int *l_286 = &g_52;
            int *l_287 = &l_264;
            int *l_288 = &l_276;
            int *l_289 = &g_268;
            int *l_290 = &l_276;
            int *l_291 = &l_278;
            int *l_292 = &g_268;
            int *l_293 = &g_52;
            int *l_294 = &g_133;
            int *l_295 = &l_276;
            int *l_296 = &g_52;
            int *l_297 = &l_278;
            int *l_298 = (void*)0;
            int *l_299 = (void*)0;
            int *l_300 = &g_133;
            int *l_301 = &l_276;
            int *l_302 = &l_264;
            int l_303 = (-9L);
            int *l_304 = &l_303;
            int *l_305 = (void*)0;
            int *l_306 = &l_303;
            int *l_307 = (void*)0;
            int *l_308 = &g_133;
            int *l_309 = &l_264;
            int *l_310 = (void*)0;
            int *l_311 = &g_52;
            int *l_312 = &l_303;
            int *l_313 = &l_303;
            int *l_314 = (void*)0;
            int *l_315 = &l_264;
            int *l_316 = &l_278;
            int *l_317 = &l_303;
            int *l_318 = &g_52;
            int *l_319 = &l_303;
            int *l_320 = (void*)0;
            int *l_321 = &l_264;
            int *l_322 = (void*)0;
            int *l_323 = (void*)0;
            int *l_324 = &l_303;
            int *l_325 = &g_268;
            int *l_326 = (void*)0;
            int *l_327 = &l_276;
            int *l_328 = (void*)0;
            int *l_329 = &l_264;
            int *l_331 = &g_268;
            int *l_332 = &l_303;
            int *l_334 = &l_276;
            int *l_335 = &l_278;
            int *l_336 = (void*)0;
            int *l_337 = &l_333;
            int *l_338 = &g_52;
            int *l_339 = &l_333;
            int *l_340 = &g_133;
            int *l_341 = &l_264;
            int *l_342 = &l_278;
            int *l_343 = &l_303;
            int *l_344 = &l_330;
            int *l_345 = &g_268;
            int *l_346 = &l_330;
            int l_347 = 1L;
            int *l_348 = &g_52;
            int *l_349 = (void*)0;
            int *l_350 = &l_333;
            int *l_351 = &l_278;
            int *l_352 = (void*)0;
            int *l_353 = &g_133;
            int *l_354 = &g_52;
            int *l_355 = &l_333;
            int *l_356 = &l_347;
            int l_357 = 0x5C09B1F2L;
            int *l_358 = &l_357;
            int *l_359 = (void*)0;
            int *l_360 = &l_264;
            int *l_361 = &l_330;
            int *l_362 = &g_268;
            int *l_363 = &l_276;
            int *l_364 = &g_133;
            int *l_365 = &l_333;
            int *l_366 = &l_264;
            int *l_367 = &l_264;
            int *l_368 = &l_357;
            int *l_369 = &g_133;
            int *l_370 = &l_347;
            int *l_371 = &l_333;
            int *l_372 = &g_133;
            int *l_373 = &l_278;
            int *l_374 = &l_357;
            int *l_375 = (void*)0;
            int *l_376 = &l_303;
            int *l_377 = (void*)0;
            int *l_378 = &l_264;
            int *l_379 = &l_264;
            int *l_380 = (void*)0;
            int *l_381 = &l_333;
            int *l_382 = &l_278;
            int *l_383 = &l_330;
            int *l_384 = &l_303;
            int *l_385 = &g_268;
            int *l_386 = &g_268;
            int *l_387 = &l_333;
            int *l_388 = &g_52;
            int *l_389 = &g_268;
            int *l_390 = &l_276;
            int *l_391 = &l_278;
            int *l_393 = &l_276;
            int *l_394 = &l_333;
            int *l_395 = &g_52;
            int *l_396 = &g_52;
            int *l_397 = &l_330;
            int *l_399 = &g_52;
            int *l_400 = &l_278;
            int *l_402 = &l_398;
            int *l_403 = &g_133;
            int *l_404 = &l_392;
            int *l_405 = &g_268;
            int *l_406 = (void*)0;
            int *l_407 = &g_268;
            int *l_408 = &l_392;
            int *l_409 = &l_357;
            int *l_410 = &l_392;
            int *l_411 = &l_347;
            int *l_412 = (void*)0;
            int *l_414 = &l_398;
            int l_415 = 0x86E9F2B4L;
            int *l_416 = &l_398;
            int *l_417 = &g_133;
            int *l_418 = &l_401;
            int *l_419 = &l_357;
            int *l_420 = &l_278;
            g_421--;
            l_424--;
        }
    }
    return g_176;
}







static union U1 func_32(unsigned char p_33, const struct S0 p_34, short p_35)
{
    char **l_38 = (void*)0;
    char ***l_39 = (void*)0;
    const int l_43 = (-1L);
    unsigned char l_47 = 5UL;
    int l_213 = 0x82C06C68L;
    int l_245 = 0xC4BAC231L;
    union U1 l_249 = {1L};
    (*g_40) = l_38;
    if (((0xFE0C2378L >= l_43) , ((((func_44(l_47, func_48(g_17.f1, g_37)) <= g_102.f0) | (p_34.f0 && p_34.f0)) != l_47) > g_37.f1)))
    {
        union U1 l_190 = {-1L};
        return l_190;
    }
    else
    {
        int *l_191 = (void*)0;
        int *l_192 = &g_52;
        int *l_193 = (void*)0;
        int *l_194 = &g_52;
        int *l_195 = &g_52;
        int *l_196 = &g_52;
        int *l_197 = &g_133;
        int *l_198 = &g_52;
        int *l_199 = &g_133;
        int *l_200 = &g_52;
        int *l_201 = &g_52;
        int *l_202 = &g_133;
        int *l_203 = &g_133;
        int *l_204 = &g_133;
        int *l_205 = &g_133;
        int *l_206 = &g_52;
        int *l_207 = &g_133;
        int *l_208 = &g_133;
        int *l_209 = &g_52;
        int *l_210 = &g_52;
        int *l_211 = (void*)0;
        int l_212 = 0x61C51346L;
        int *l_214 = &l_212;
        int *l_215 = (void*)0;
        int l_216 = 0L;
        int *l_217 = &l_212;
        int *l_218 = &l_212;
        int *l_219 = &l_212;
        int *l_220 = &g_52;
        int *l_221 = &l_212;
        int *l_222 = &l_213;
        int *l_223 = &l_212;
        int *l_224 = (void*)0;
        int *l_225 = &l_213;
        int *l_226 = &l_213;
        int *l_227 = &g_133;
        int *l_228 = &l_213;
        int *l_229 = &l_216;
        int *l_230 = &l_212;
        int *l_231 = &g_133;
        int *l_232 = &g_52;
        int *l_233 = &l_213;
        int *l_234 = &g_52;
        int *l_235 = &g_52;
        int *l_237 = &g_133;
        int *l_239 = &g_52;
        int *l_240 = &l_216;
        int l_241 = 0L;
        int *l_242 = &g_133;
        int *l_243 = &l_216;
        int *l_244 = &l_241;
        g_246--;
    }
    return l_249;
}







static short func_44(unsigned p_45, unsigned long long p_46)
{
    int *l_189 = &g_52;
    for (g_97.f0 = 0; (g_97.f0 < 33); g_97.f0 = safe_add_func_int8_t_s_s(g_97.f0, 5))
    {
        int *l_185 = &g_133;
        int **l_186 = &g_132;
        (*g_184) |= p_45;
        (*l_186) = l_185;
    }
    (*g_103) = (void*)0;
    (*l_189) = (safe_lshift_func_int8_t_s_u(p_45, 7));
    return g_17.f0;
}







static unsigned long long func_48(int p_49, struct S0 p_50)
{
    int *l_51 = &g_52;
    int *l_53 = (void*)0;
    int *l_54 = &g_52;
    int *l_55 = &g_52;
    int *l_56 = &g_52;
    int *l_57 = &g_52;
    int *l_58 = &g_52;
    int *l_59 = &g_52;
    int *l_60 = (void*)0;
    int *l_61 = &g_52;
    int *l_62 = (void*)0;
    int l_63 = 7L;
    int *l_64 = &g_52;
    int *l_65 = &g_52;
    int *l_66 = (void*)0;
    int *l_67 = &l_63;
    unsigned short l_71 = 65535UL;
    const char * const **l_83 = (void*)0;
    union U1 l_84 = {0x70D28CDDL};
    struct S0 *l_108 = &g_102;
    int l_137 = 0x4BCF314CL;
    int l_150 = 0xF280801EL;
    int l_162 = 6L;
    int l_172 = 1L;
    ++g_68;
lbl_179:
    (*l_61) |= 0x19043831L;
    if (((l_71 & (safe_sub_func_int64_t_s_s(g_74, (((((p_49 < (safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(65532UL, (safe_mod_func_uint64_t_u_u((!(l_83 == l_83)), (*l_54))))), (l_84 , p_50.f1))), (*l_51)))) <= 0x1F9F6D65DBDCDB7ALL) && (*l_56)) >= p_50.f0) <= g_10)))) | 0xDDF9C202D2A5DBDFLL))
    {
        unsigned long long l_101 = 0x5C746EA38556AD51LL;
        struct S0 *l_107 = &g_97;
        if (p_50.f1)
        {
            int l_91 = 1L;
            for (g_52 = 0; (g_52 == (-6)); --g_52)
            {
                char l_87 = (-1L);
                if (l_87)
                {
                    return p_50.f0;
                }
                else
                {
                    int **l_88 = &l_61;
                    (*l_88) = (g_17.f0 , (void*)0);
                    for (p_50.f1 = (-4); (p_50.f1 != 8); p_50.f1++)
                    {
                        char l_98 = 8L;
                        g_93--;
                        (*g_96) = p_50;
                        l_91 = l_98;
                    }
                    l_91 = (((safe_rshift_func_uint8_t_u_u((0xF8299994L & ((l_101 , l_83) == &g_41)), 5)) != (*l_64)) <= g_17.f1);
                    (*l_67) ^= l_91;
                }
            }
            (*g_105) = ((g_102 , 8UL) , g_103);
        }
        else
        {
            return g_17.f0;
        }
        (*l_64) |= (((((0x186DL | p_50.f1) , l_101) || ((void*)0 != l_83)) != ((l_107 != ((*g_96) , l_108)) < l_101)) ^ p_49);
    }
    else
    {
        unsigned l_124 = 9UL;
        int l_136 = 0x0504CB07L;
        int l_142 = 1L;
        int l_147 = (-4L);
        int l_161 = 7L;
        int l_163 = 2L;
        int l_165 = 1L;
        union U1 *l_181 = &l_84;
        union U1 **l_180 = &l_181;
        (*g_106) = (**g_105);
        for (g_102.f1 = 13; (g_102.f1 != 19); ++g_102.f1)
        {
            return p_49;
        }
        for (g_52 = (-5); (g_52 != 13); g_52 = safe_add_func_uint8_t_u_u(g_52, 5))
        {
            unsigned l_125 = 0x822D1E25L;
            int *l_134 = &g_133;
            int l_141 = 0x6958E35CL;
            int l_149 = 0xC7A4504AL;
            int l_175 = 8L;
            for (g_93 = 23; (g_93 > 7); --g_93)
            {
                unsigned long long l_131 = 0x9873F28D20E956D3LL;
                int *l_138 = &g_133;
                int *l_139 = &l_136;
                int *l_140 = &l_63;
                int *l_143 = &g_133;
                int *l_144 = &l_63;
                int *l_145 = &g_133;
                int *l_146 = &l_136;
                int *l_148 = (void*)0;
                int *l_151 = &l_136;
                int *l_152 = &l_149;
                int *l_153 = &l_150;
                int *l_154 = &l_137;
                int *l_156 = &l_63;
                int *l_157 = &l_149;
                int *l_158 = &l_137;
                int *l_159 = &l_63;
                int *l_160 = &l_149;
                int *l_164 = &g_133;
                int l_166 = (-1L);
                int *l_167 = &l_63;
                int *l_168 = &g_133;
                int *l_169 = (void*)0;
                int *l_170 = &l_165;
                int *l_171 = &l_165;
                int *l_173 = &l_150;
                int *l_174 = &l_172;
                if ((g_17.f0 && ((p_50.f1 == (safe_unary_minus_func_uint16_t_u((((safe_lshift_func_uint8_t_u_u(0x7CL, p_50.f1)) && (p_50.f1 >= (safe_add_func_uint16_t_u_u((g_102.f1 , (((+((((safe_add_func_int8_t_s_s(((((l_124 > ((!p_50.f1) <= p_50.f0)) == l_125) < 0L) && (-6L)), l_124)) > p_49) , p_50.f1) && p_50.f0)) | (-1L)) < g_68)), p_50.f0)))) , g_93)))) | p_50.f0)))
                {
                    const unsigned char l_128 = 0x12L;
                    if (p_50.f0)
                        break;
                    if (((safe_mod_func_int16_t_s_s(l_128, (safe_sub_func_uint32_t_u_u(((p_49 ^ p_49) >= (0xC0L < p_50.f1)), l_131)))) >= g_93))
                    {
                        if (p_50.f0)
                            break;
                    }
                    else
                    {
                        g_132 = &l_63;
                        (*g_103) = (void*)0;
                    }
                }
                else
                {
                    int **l_135 = &l_51;
                    (*l_135) = l_134;
                    return g_10;
                }
                ++g_176;
            }
            if (g_52)
                goto lbl_179;
            return g_133;
        }
        (*l_180) = &g_17;
    }
    return p_50.f0;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
    transparent_crc(g_17.f1, "g_17.f1", print_hash_value);
    transparent_crc(g_17.f2, "g_17.f2", print_hash_value);
    transparent_crc(g_37.f0, "g_37.f0", print_hash_value);
    transparent_crc(g_37.f1, "g_37.f1", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    transparent_crc(g_97.f1, "g_97.f1", print_hash_value);
    transparent_crc(g_102.f0, "g_102.f0", print_hash_value);
    transparent_crc(g_102.f1, "g_102.f1", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_728.f0, "g_728.f0", print_hash_value);
    transparent_crc(g_728.f1, "g_728.f1", print_hash_value);
    transparent_crc(g_728.f2, "g_728.f2", print_hash_value);
    transparent_crc(g_978, "g_978", print_hash_value);
    transparent_crc(g_1032, "g_1032", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
