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
   const signed f0 : 14;
   signed f1 : 13;
   unsigned f2 : 28;
   unsigned f3 : 23;
   signed f4 : 12;
   unsigned f5 : 21;
   const signed : 0;
   signed f6 : 19;
   unsigned f7 : 10;
};

struct S1 {
   const signed f0 : 1;
   volatile signed f1 : 25;
};


static long long g_2 = 0x15F0ED1AD67A4BEDLL;
static char g_4 = 2L;
static char g_6 = 0x72L;
static char *g_5 = &g_6;
static int g_10 = 0xEE1D1102L;
static const struct S1 g_12 = {0,3031};
static const struct S1 *g_11 = &g_12;
static unsigned char g_43 = 9UL;
static struct S1 g_74 = {0,-4980};
static unsigned g_90 = 0x2DE598C2L;
static unsigned long long g_96 = 0UL;
static const unsigned long long g_115 = 1UL;
static const unsigned long long *g_114 = &g_115;
static unsigned char g_120 = 8UL;
static unsigned char g_122 = 6UL;
static int g_124 = 0xACB2CDE8L;
static unsigned short g_129 = 0x2A35L;
static unsigned short g_132 = 0x8823L;
static unsigned long long g_144 = 0xBE0C2A5ADA2C71B4LL;
static short g_153 = 0x2025L;
static unsigned long long g_161 = 0xC36B57048E4E0DE4LL;
static int g_187 = 0x3153F037L;
static int *g_219 = &g_10;
static int **g_218 = &g_219;
static struct S0 g_275 = {109,63,2884,2579,-24,1350,-221,9};
static char g_276 = 0xBCL;
static short g_329 = (-1L);
static char g_353 = 0xDAL;
static char * const * const g_392 = (void*)0;
static struct S1 g_395 = {-0,-1845};
static int *g_397 = &g_187;
static long long g_418 = 1L;
static const struct S1 *** const *g_474 = (void*)0;
static short g_505 = (-9L);
static unsigned g_529 = 0x2BB4E62DL;
static long long *g_537 = &g_2;
static long long **g_536 = &g_537;
static unsigned g_555 = 0xB662D18CL;
static struct S0 g_589 = {125,41,6270,872,48,855,-201,30};
static struct S0 *g_588 = &g_589;
static long long g_599 = 0xAE79238BF0438074LL;
static volatile unsigned short *g_617 = (void*)0;
static volatile unsigned short **g_616 = &g_617;
static char g_661 = 0x14L;
static char * const g_660 = &g_661;
static char * const *g_659 = &g_660;
static volatile unsigned short g_662 = 65533UL;
static volatile int g_668 = 0xF60FD83BL;
static volatile int *g_667 = &g_668;



static int func_1(void);
static int * func_13(short p_14, int p_15, unsigned char p_16, unsigned short p_17);
static unsigned char func_20(int p_21, struct S0 p_22, struct S0 p_23);
static int func_24(unsigned p_25, unsigned long long p_26, const long long p_27);
static unsigned char func_34(unsigned char p_35);
static const struct S1 ** const func_44(char ** p_45, char * const * const p_46, struct S1 ** p_47);
static char ** func_48(struct S0 p_49, long long p_50);
static struct S0 func_51(short p_52, unsigned long long p_53);
static unsigned short func_56(short p_57, unsigned p_58);
static unsigned func_62(unsigned char * const p_63);
static int func_1(void)
{
    char *l_3 = &g_4;
    char *l_8 = &g_6;
    char **l_7 = &l_8;
    int *l_9 = &g_10;
    int *l_40 = &g_10;
    unsigned char *l_42 = &g_43;
    struct S0 l_653 = {10,73,12356,275,48,225,-375,29};
    short *l_700 = &g_153;
    unsigned char l_702 = 0UL;
    (*l_9) = (((*l_3) = g_2) != (g_5 != ((*l_7) = l_3)));

    ;
    g_11 = g_11;
    (*g_218) = func_13(((*l_700) = (((safe_lshift_func_int8_t_s_u(0x66L, g_4)) > (&g_4 == (*l_7))) | (func_20(((*l_9) = func_24(((safe_mod_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(((*l_42) = (((void*)0 == (*l_7)) && (safe_rshift_func_uint8_t_u_u(func_34((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((*g_5), ((l_40 != l_40) & (*l_40)))), g_10))), 7)))), (*g_5))), 18446744073709551615UL)) < g_4), g_12.f1, g_4)), l_653, g_589) & g_275.f4))), l_653.f6, g_589.f2, g_12.f0);

    ;
    ;
    ;
    ;
    ;
    return l_702;
}







static int * func_13(short p_14, int p_15, unsigned char p_16, unsigned short p_17)
{
    int *l_701 = (void*)0;
    (*g_397) = (g_275.f3 ^ g_124);
    return l_701;


}







static unsigned char func_20(int p_21, struct S0 p_22, struct S0 p_23)
{
    const unsigned short l_654 = 0x9EC7L;
    char * const *l_658 = (void*)0;
    int *l_671 = &g_124;
    unsigned char *l_697 = (void*)0;
    if (l_654)
    {
        unsigned l_655 = 0x264726F9L;
        int l_663 = 0xA0C7B91BL;
        int *l_664 = &g_10;
        (*g_397) &= l_655;
        p_23.f6 = (-4L);
        if (((safe_lshift_func_uint16_t_u_s((p_23.f2 < (l_654 | p_23.f7)), 14)) <= g_555))
        {
            long long l_674 = (-2L);
            for (l_663 = (-30); (l_663 <= (-27)); l_663 = safe_add_func_uint64_t_u_u(l_663, 1))
            {
                volatile int **l_669 = (void*)0;
                volatile int **l_670 = &g_667;
                (*l_670) = g_667;
                (*g_218) = l_671;

                ;
            }
            l_674 &= (((safe_lshift_func_int16_t_s_u(g_589.f4, p_22.f0)) > 0L) >= 1UL);
        }
        else
        {
            long long l_675 = 0x6C1F45683BCC397BLL;
            unsigned long long *l_676 = &g_161;
            unsigned *l_677 = &l_655;
            (*l_664) = (((*l_677) ^= func_56(g_12.f0, ((*l_664) < ((*l_676) &= (!l_675))))) || (*g_667));
            return p_23.f5;
        }
    }
    else
    {
        (*g_667) &= 1L;
    }
    if ((*l_671))
    {
        int *l_680 = (void*)0;
        int l_687 = 0x4BC7D744L;
        (*l_671) = (-3L);
        (*l_671) = (safe_lshift_func_int8_t_s_u((((void*)0 != l_680) && (((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(((*l_671) ^ func_56(((void*)0 == (*g_536)), p_21)), (func_34((safe_lshift_func_int8_t_s_s(((*g_660) ^= p_23.f6), (1UL < l_687)))) & (*g_5)))), p_22.f1)) >= g_418) || g_161)), g_329));
    }
    else
    {
        unsigned *l_698 = &g_90;
        int l_699 = 0x2CA81169L;
        (*g_667) |= ((safe_add_func_int32_t_s_s((p_22.f3 && (*g_660)), 0x35322353L)) && (((((g_4 == (g_275.f1 != (safe_unary_minus_func_int16_t_s((safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((((*l_698) |= (safe_rshift_func_uint8_t_u_s((((-1L) && p_22.f3) != (((l_697 != l_697) <= 0x8103L) >= (*g_537))), 6))) == l_699), p_23.f5)) && (*g_397)) ^ (*l_671)), 0)))))) != (*l_671)) > 3L) < g_329) >= 0xC8C9CDA7E6F5E8B3LL));
    }
    return p_22.f4;
}







static int func_24(unsigned p_25, unsigned long long p_26, const long long p_27)
{
    char l_59 = (-2L);
    unsigned char * const l_64 = &g_43;
    struct S1 *l_394 = &g_395;
    struct S1 **l_393 = &l_394;
    const struct S1 **l_413 = &g_11;
    const struct S1 ***l_412 = &l_413;
    unsigned long long **l_419 = (void*)0;
    int **l_435 = &g_219;
    char l_436 = 0xAAL;
    int l_449 = 0x02055A8EL;
    int *l_557 = &g_10;
    struct S0 *l_587 = &g_275;
    (*l_412) = func_44(func_48(func_51(p_26, (8L > ((safe_lshift_func_uint16_t_u_u(func_56(l_59, (safe_mod_func_uint32_t_u_u(l_59, func_62(l_64)))), 6)) < p_26))), p_26), g_392, l_393);

    ;
    ;
    ;
    if ((safe_add_func_int64_t_s_s(l_59, (((safe_mod_func_int32_t_s_s(((func_56(g_353, g_418) != (l_419 != (void*)0)) | (func_34(((1L | l_59) | ((g_10 | l_59) & 1L))) == 247UL)), g_275.f7)) <= g_275.f1) == 0xA6616F3AL))))
    {
        return (*g_397);
    }
    else
    {
        const unsigned l_420 = 7UL;
        short *l_421 = &g_153;
        char **l_423 = &g_5;
        char ***l_422 = &l_423;
        int *l_424 = &g_10;
        unsigned short *l_429 = &g_132;
        long long *l_434 = &g_2;
        unsigned long long *l_437 = &g_144;
        (**g_218) = (g_187 <= (p_25 <= g_275.f2));
        (*l_422) = func_48(func_51(((*l_421) = ((**g_218) <= l_420)), p_26), p_27);

        ;
        (*g_218) = l_424;
        (**l_435) = (safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_u((65532UL | (1UL != ((*l_429) |= p_26))), p_25)) >= (((*l_434) = (safe_rshift_func_uint16_t_u_u(0x902CL, 0))) <= (0UL & p_26))), ((*l_437) = (((*l_424) || (((l_435 == l_435) < l_436) <= (*l_424))) != 0x0B6D76849D5BDE55LL))));
    }

    ;
    (*l_435) = (*l_435);
    if (((**l_435) &= ((*l_435) == (*g_218))))
    {
        long long *l_442 = (void*)0;
        long long *l_443 = &g_2;
        int *** const l_448 = &g_218;
        const int l_452 = 0xDDE085E6L;
        unsigned char *l_471 = &g_120;
        unsigned char **l_470 = &l_471;
        int l_486 = 0x345972E4L;
        char l_490 = (-2L);
        unsigned char l_497 = 0x5CL;
        struct S1 *l_533 = (void*)0;
        char l_611 = (-4L);
        long long l_627 = 0x7BDA1A9B85F00FC0LL;
        (*g_218) = (void*)0;

        ;
        if ((safe_rshift_func_int16_t_s_u(1L, (((*l_443) = ((safe_lshift_func_int8_t_s_u((p_27 || p_25), 6)) || p_26)) ^ (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((l_448 == l_448) == ((((l_449 != ((*g_397) = (safe_mod_func_int16_t_s_s(((p_25 == p_26) | 65535UL), l_452)))) && g_43) & 1L) < (*g_5))), g_275.f5)), g_74.f1))))))
        {
            int *l_453 = &l_449;
            struct S1 ***l_460 = &l_393;
            unsigned l_556 = 0x4EE74461L;
            unsigned l_586 = 18446744073709551615UL;
            long long *l_595 = &g_2;
            unsigned char *l_605 = &g_122;
            const unsigned short *l_607 = &g_129;
            const unsigned short **l_606 = &l_607;
            (**l_412) = ((*l_393) = &g_395);

            ;
            if (p_25)
            {
                short l_478 = 1L;
                int *l_479 = &l_449;
                if (p_26)
                {
                    char l_454 = 0L;
                    struct S1 ****l_461 = &l_460;
                    unsigned short *l_462 = &g_132;
                    (*g_397) &= 0xFAA0B6E3L;
                    (*l_435) = l_453;

                    ;
                    g_10 &= ((*g_397) = (l_454 < ((safe_sub_func_uint8_t_u_u(g_4, (safe_unary_minus_func_uint32_t_u(p_26)))) ^ (((*l_64) = (**l_435)) != (safe_sub_func_int16_t_s_s((((*l_461) = l_460) != (void*)0), ((*l_462) ^= l_454)))))));
                }
                else
                {
                    char l_467 = 0xDBL;
                    for (p_25 = 0; (p_25 != 25); p_25 = safe_add_func_int8_t_s_s(p_25, 2))
                    {
                        unsigned l_466 = 6UL;
                        (*l_453) |= (safe_unary_minus_func_int64_t_s(((*l_443) = l_466)));
                        (*g_397) = p_26;
                        (*l_453) &= (l_467 = p_27);
                    }
                }

                ;
                (*g_397) = (safe_rshift_func_uint16_t_u_u(func_34(((void*)0 == l_470)), 13));
                for (g_153 = 0; (g_153 <= (-22)); --g_153)
                {
                    struct S1 ****l_476 = (void*)0;
                    struct S1 *****l_475 = &l_476;
                    int l_477 = 0x084778C1L;
                    (*l_453) ^= (g_275.f5 ^ (func_34(((*l_64) = (g_474 == ((*l_475) = &l_460)))) == (l_477 >= (l_478 <= (0x96008A21L <= (l_479 == (*l_435)))))));

                    ;
                }
                for (g_153 = 0; (g_153 >= (-19)); g_153 = safe_sub_func_uint64_t_u_u(g_153, 8))
                {
                    return (*g_397);


                }
            }
            else
            {
                short *l_482 = (void*)0;
                short *l_483 = &g_153;
                (*g_397) |= 0L;
                l_486 &= ((*g_397) = (g_275.f3 ^ (func_34((((*g_397) |= (*l_453)) || func_56((g_90 || (func_56(((*l_483) = g_275.f5), (*l_453)) <= (*l_453))), (safe_add_func_uint8_t_u_u(func_34((0x4B3A1EB6L > p_25)), p_25))))) | p_27)));

                ;
            }

            ;
            if (((p_25 > ((*l_453) = l_449)) & (safe_rshift_func_uint8_t_u_s(func_56(((safe_unary_minus_func_uint8_t_u((((**l_470) = g_122) < (*g_5)))) || func_34(l_490)), g_353), ((!((*g_397) = (-2L))) != 0x35AE16F7L)))))
            {
                char l_515 = 0x62L;
                int *l_516 = (void*)0;
                unsigned short *l_553 = &g_132;
                unsigned short **l_552 = &l_553;
                if (((safe_lshift_func_uint16_t_u_u(g_124, p_25)) && ((*g_397) & (safe_lshift_func_int8_t_s_s((((*l_443) = 0x243F2C433C4BAA0ELL) == ((safe_mod_func_int8_t_s_s(((g_275.f6 ^ func_34(g_4)) || func_34(l_497)), (*l_453))) == g_275.f2)), (*g_5))))))
                {
                    short *l_504 = &g_505;
                    int l_512 = (-1L);
                    (*l_453) ^= (func_34((safe_rshift_func_int16_t_s_s(g_120, (func_34(g_10) < (safe_mod_func_int16_t_s_s(g_329, (safe_sub_func_int32_t_s_s(0x600DF704L, (((((g_153 &= g_161) | g_129) < (func_56(((*l_504) = p_25), g_129) | p_26)) && (-8L)) & p_25))))))))) >= p_25);
                    if (g_132)
                        goto lbl_520;
lbl_520:
                    for (l_59 = (-24); (l_59 <= (-19)); ++l_59)
                    {
                        int * const l_517 = &g_187;
                        (*l_517) = ((*l_453) = (func_56(((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(l_512, p_27)), (safe_add_func_uint64_t_u_u((*g_114), l_515)))) ^ (func_34(((~(*l_453)) == (l_516 == l_517))) <= (safe_sub_func_int64_t_s_s((~0xED0F1044939D9F19LL), (*g_114))))), g_96) || g_12.f1));
                    }
                    for (g_129 = 0; (g_129 < 26); g_129 = safe_add_func_int16_t_s_s(g_129, 9))
                    {
                        (*l_453) |= ((*g_397) ^= 7L);
                    }
                }
                else
                {
                    unsigned *l_525 = &g_90;
                    unsigned *l_526 = (void*)0;
                    unsigned *l_527 = (void*)0;
                    unsigned *l_528 = &g_529;
                    (*g_397) ^= (((*l_528) = ((*l_525) = (safe_rshift_func_uint8_t_u_u((0UL != p_25), 4)))) | 1L);
                }
                for (g_529 = 11; (g_529 < 19); g_529++)
                {
                    int *l_532 = &g_124;
                    unsigned *l_542 = &g_90;
                    unsigned long long *l_545 = &g_161;
                    short *l_549 = (void*)0;
                    short *l_550 = (void*)0;
                    short *l_551 = &g_505;
                    unsigned *l_554 = &g_555;
                    l_532 = ((*g_218) = (*g_218));

                    ;
                    (*l_393) = l_533;

                    ;
                    (*l_453) &= (p_27 & ((*l_542) = (safe_mod_func_uint64_t_u_u(((void*)0 == g_536), (safe_add_func_uint64_t_u_u((!(p_26 &= func_34(g_275.f5))), (safe_sub_func_int32_t_s_s(p_27, (*g_397)))))))));
                    (*g_397) &= (safe_add_func_int64_t_s_s(((((*l_545) = 0x07783B1FB111B97CLL) | 18446744073709551612UL) <= ((safe_unary_minus_func_int64_t_s((safe_add_func_uint16_t_u_u(g_275.f3, (((*g_114) & p_26) <= (func_56(((*l_551) = g_122), ((*l_554) = (g_4 & ((void*)0 != l_552)))) | (-1L))))))) == (-1L))), l_556));
                }

                ;
                (**l_448) = (*g_218);
            }
            else
            {
                int **l_558 = &l_557;
                short *l_567 = (void*)0;
                unsigned short *l_568 = (void*)0;
                unsigned short *l_569 = &g_132;
                int *l_570 = (void*)0;
                int *l_571 = (void*)0;
                int *l_572 = &l_486;
                unsigned char * const l_575 = &g_122;
                (*l_572) &= (((*l_569) ^= ((((*l_435) = l_453) == ((*l_558) = l_557)) < (((*l_453) = ((*l_453) > (safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s((*g_5), (*g_5))) ^ (((*g_397) = ((g_129 &= p_26) && (g_153 |= (safe_sub_func_uint64_t_u_u(((p_27 > p_26) >= (*l_453)), (*g_114)))))) != 4294967295UL)) | (*l_453)) > 0x8CA1072EL), g_275.f1)) | g_275.f0) && p_26), (*g_5))))) <= p_26))) > 65535UL);

                ;
                (*l_453) = (safe_lshift_func_uint8_t_u_u(g_353, 3));
                if (p_25)
                {
                    if (p_27)
                    {
                        (*g_397) = (p_27 | (safe_rshift_func_int16_t_s_u(((-7L) | (safe_rshift_func_int8_t_s_s(((((g_120 & (safe_rshift_func_uint8_t_u_u(p_25, g_329))) < (*g_114)) & ((g_275.f2 | (!((*l_557) | (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((*g_5) < (*g_5)), 0x8C5826D921CB7CBDLL)), 3))))) ^ g_161)) <= 0x24D1L), l_586))), g_74.f1)));
                        (**l_412) = (**l_412);
                    }
                    else
                    {
                        struct S0 **l_590 = &l_587;
                        long long *l_591 = &g_418;
                        long long **l_596 = (void*)0;
                        long long **l_597 = &l_443;
                        long long *l_598 = &g_599;
                        (**l_558) = (**g_218);
                        (*l_590) = (g_588 = l_587);

                        ;
                        if (g_129)
                            goto lbl_600;
lbl_600:
                        (*l_453) = ((**g_536) | ((*l_598) = (((*l_591) |= (***l_448)) <= ((func_34(((*g_219) && ((*g_397) |= (safe_unary_minus_func_int32_t_s((*g_219)))))) >= (((g_276 >= ((((safe_mod_func_int8_t_s_s(0L, ((((*l_597) = l_595) == (void*)0) || (***l_448)))) & 0x8495CEEA3F10B30ELL) > 0UL) ^ (**g_218))) || p_27) > 1UL)) ^ (***l_448)))));
                        (**g_218) &= (safe_sub_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(g_589.f2, p_26)), ((void*)0 != l_605)));
                    }

                    ;
                }
                else
                {
                    const unsigned short ***l_608 = &l_606;
                    int l_612 = 0xB5297FB7L;
                    if ((((((&l_569 == ((*l_608) = l_606)) && (*l_453)) <= (l_611 >= (l_612 < (((**g_536) && ((void*)0 == &g_120)) >= ((safe_add_func_uint8_t_u_u(0x04L, 0x0AL)) >= p_27))))) ^ (***l_448)) == (*g_219)))
                    {
                        unsigned l_615 = 0UL;
                        unsigned *l_618 = &g_529;
                        short *l_619 = &g_505;
                        (*g_397) = (-1L);
                        l_615 ^= func_34((***l_448));
                        (*l_453) = (65535UL <= ((*l_619) = (g_589.f6 ^ (((*l_618) ^= (g_616 == (*l_608))) >= l_612))));
                    }
                    else
                    {
                        unsigned l_626 = 0x1F13D141L;
                        (**l_558) = (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((*l_557), 0L)), (safe_sub_func_uint16_t_u_u(l_626, l_627))));
                        (**l_435) = (+l_626);
                        return (*l_557);


                    }
                }

                ;
                (**l_448) = (*g_218);
            }

            ;
            ;
        }
        else
        {
            return (*g_397);
        }

        ;
        ;
        ;
        ;
    }
    else
    {
        struct S0 **l_632 = &g_588;
        unsigned long long *l_635 = &g_96;
        short *l_636 = (void*)0;
        short *l_637 = (void*)0;
        int l_638 = 7L;
        unsigned short *l_649 = &g_129;
        long long ***l_650 = (void*)0;
        (*g_397) &= (l_638 |= func_56(((safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((((**g_536) = (l_632 != &g_588)) != 18446744073709551610UL), (-5L))), ((*g_5) = p_26))) ^ (p_26 && (safe_add_func_uint8_t_u_u(((g_329 = (p_26 != (((+((*l_635) = (&g_11 == (*l_412)))) | 0UL) ^ 0x35DCC851L))) != 0x790DL), 0xDEL)))), (**l_435)));

        ;
        for (g_555 = 0; (g_555 > 36); g_555 = safe_add_func_uint8_t_u_u(g_555, 2))
        {
            (*l_435) = (*g_218);
        }
        (*g_397) |= (safe_mod_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((((!(*g_537)) >= (safe_sub_func_uint16_t_u_u((((*l_649) |= (safe_mod_func_uint32_t_u_u(p_26, p_26))) <= (p_26 && ((void*)0 != l_650))), 0xBA58L))) == 0x5BD1C8FAA22A236BLL), (!((safe_mod_func_uint16_t_u_u((**l_435), 1L)) <= (**l_435))))) >= 0x3EE5101FL), (*l_557)));
    }

    ;
    ;
    ;
    ;
    return p_27;


}







static unsigned char func_34(unsigned char p_35)
{
    int *l_41 = &g_10;
    (*l_41) = 0x9E588CE3L;
    return (*l_41);
}







static const struct S1 ** const func_44(char ** p_45, char * const * const p_46, struct S1 ** p_47)
{
    short l_396 = (-1L);
    unsigned char * const l_401 = &g_122;
    if (l_396)
    {
        int **l_398 = &g_397;
        const struct S1 ** const l_399 = &g_11;
        (*l_398) = ((*g_218) = g_397);

        ;
        return l_399;


    }
    else
    {
        unsigned l_400 = 0x15EE7ADFL;
        unsigned short *l_408 = &g_129;
        unsigned short *l_411 = &g_132;
        (*g_397) |= (l_400 > (*g_219));
        (*g_397) = (((func_56(((safe_lshift_func_int16_t_s_u((((*g_219) &= (1L ^ ((*l_408) = (0x8363C87DL < (safe_mod_func_uint8_t_u_u(l_400, (-2L))))))) && l_400), (safe_lshift_func_int16_t_s_u(0x0CD1L, (l_400 || 0xCCBD1039L))))) == l_396), l_400) > l_396) || 0x958AL) | l_396);

        ;
        (*g_397) = ((**g_218) ^= (249UL > (g_4 || ((*l_411) = ((*l_408) = 5UL)))));
    }

    ;
    (**g_218) = l_396;
    (*g_218) = (*g_218);
    return &g_11;


}







static char ** func_48(struct S0 p_49, long long p_50)
{
    long long l_282 = 0xCD95909B31E182C6LL;
    struct S1 *l_287 = &g_74;
    struct S1 **l_286 = &l_287;
    const short l_295 = 0x47CFL;
    int l_313 = (-1L);
    unsigned char * const l_385 = &g_122;
    int *l_386 = &g_10;
    char **l_391 = &g_5;
    return l_391;


}







static struct S0 func_51(short p_52, unsigned long long p_53)
{
    int * const l_273 = &g_10;
    int **l_274 = &g_219;
    (*l_274) = l_273;

    ;
    return g_275;
}







static unsigned short func_56(short p_57, unsigned p_58)
{
    int *l_272 = &g_124;
    for (g_90 = (-4); (g_90 == 13); g_90 = safe_add_func_int32_t_s_s(g_90, 7))
    {
        (*g_218) = l_272;

        ;
    }
    return g_120;
}







static unsigned func_62(unsigned char * const p_63)
{
    unsigned l_77 = 0x6CC22523L;
    int *l_97 = &g_10;
    const unsigned long long *l_113 = (void*)0;
    const unsigned long long **l_112 = &l_113;
    long long *l_116 = (void*)0;
    long long *l_117 = (void*)0;
    long long *l_118 = &g_2;
    long long *l_119 = (void*)0;
    unsigned char *l_121 = &g_122;
    int *l_123 = &g_124;
    unsigned short l_127 = 0x520CL;
    unsigned short *l_128 = &g_129;
    unsigned short *l_130 = (void*)0;
    unsigned short *l_131 = &g_132;
    int l_133 = 0xCFD0E8CDL;
    int l_263 = (-8L);
    for (g_2 = 0; (g_2 > 1); g_2 = safe_add_func_uint32_t_u_u(g_2, 8))
    {
        long long l_81 = 0xC0E03A8461A3ECB1LL;
        int *l_83 = (void*)0;
        int *l_84 = &g_10;
        for (g_6 = (-30); (g_6 >= (-29)); g_6 = safe_add_func_uint32_t_u_u(g_6, 5))
        {
            struct S1 *l_73 = &g_74;
            int l_80 = (-3L);
            int *l_82 = &g_10;
            (*l_82) = (safe_rshift_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(((((void*)0 == l_73) >= (safe_sub_func_uint8_t_u_u((l_77 != (func_34(((safe_mod_func_int64_t_s_s(0xE2A2D6201886A608LL, l_77)) & (l_77 < l_80))) <= ((l_81 >= l_81) || l_81))), l_80))) != l_77), l_80)) || l_77) == l_80), 6));
        }
        (*l_84) |= 1L;
        for (l_77 = (-9); (l_77 == 35); ++l_77)
        {
            unsigned *l_89 = &g_90;
            unsigned long long *l_95 = &g_96;
            (*l_84) |= (safe_sub_func_uint8_t_u_u((((*l_89) = g_2) & 0xB8F78F01L), ((safe_add_func_int64_t_s_s((-1L), g_74.f0)) == ((*l_95) = ((!(safe_rshift_func_uint8_t_u_u(0xF2L, 5))) <= g_4)))));
            (*l_84) = ((void*)0 == &l_77);
        }
    }
lbl_209:
    (*l_97) &= g_2;
    (*l_123) ^= (((*p_63) & func_34(((*l_121) |= ((((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(0x2AL, 2)), (((((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(0x3B0AL, ((void*)0 == &g_5))), (*l_97))) != ((g_114 = ((*l_112) = &g_96)) == (void*)0)) > ((+(((g_120 = ((*l_118) = (65534UL || 0x7DE8L))) | (*l_97)) == (*l_97))) <= 1L)) || (*l_97)) && (*l_97)))), g_96)) < (*l_97)) < g_74.f0) != 1UL)))) && (*g_5));

    ;
    ;
    if (((*l_97) = ((((0xC3162E1517482C4BLL < ((*l_118) = l_127)) != (*l_123)) <= ((*l_97) >= (*l_123))) & ((8UL > ((*l_131) = ((*l_128) = g_12.f1))) > l_133))))
    {
        unsigned l_145 = 0UL;
        int *l_146 = &g_124;
        (*l_146) = (((safe_add_func_uint32_t_u_u(((*l_123) != 7UL), ((g_96 = ((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((g_144 ^= g_6), (!l_145))), (((*l_97) ^= l_145) == (*l_123)))), l_145)), (&g_124 != l_146))) ^ g_2)) == (*l_146)))) == 0x0DE55945L) < 0x590F8A91L);
        for (g_90 = 0; (g_90 < 57); g_90 = safe_add_func_uint16_t_u_u(g_90, 1))
        {
            int **l_149 = &l_146;
            short *l_152 = &g_153;
            unsigned l_155 = 18446744073709551615UL;
            long long **l_163 = &l_116;
            (*l_149) = l_146;
            if ((*l_123))
                break;
            (**l_149) = (*l_146);
            if (((func_34(func_34(((*l_146) = ((*l_121) = 253UL)))) < (safe_add_func_int64_t_s_s((-5L), (g_129 && ((*l_152) ^= (((*l_149) != (void*)0) | (((*l_118) = g_4) == (g_12.f1 <= g_96)))))))) & (*g_114)))
            {
                short l_154 = 3L;
                unsigned long long *l_156 = (void*)0;
                unsigned long long *l_157 = &g_144;
                unsigned short **l_160 = &l_131;
                unsigned *l_162 = &l_77;
                long long ***l_164 = (void*)0;
                long long ***l_165 = &l_163;
                g_161 &= ((func_34(l_154) == ((*l_152) = (((*l_157) = l_155) == (safe_lshift_func_uint16_t_u_u(65535UL, 3))))) < ((*l_123) ^ (&g_129 != ((*l_160) = &g_132))));
                (*l_146) &= (1UL >= ((*l_162) = 9UL));
                if (l_154)
                    continue;
                (*l_165) = l_163;
            }
            else
            {
                unsigned long long l_166 = 6UL;
                int *l_175 = &g_124;
                unsigned short **l_185 = &l_128;
                int *l_186 = &g_187;
                (*l_123) &= l_166;
                if (func_34((*p_63)))
                {
                    unsigned char l_167 = 0x37L;
                    (*l_146) = l_167;
                }
                else
                {
                    char l_170 = (-1L);
                    for (g_132 = 0; (g_132 == 31); g_132 = safe_add_func_uint64_t_u_u(g_132, 4))
                    {
                        (*l_97) ^= l_170;
                        (*l_123) |= g_120;
                        (*l_123) = l_166;
                    }
                    for (g_153 = (-5); (g_153 > (-25)); --g_153)
                    {
                        (*l_146) = g_12.f1;
                    }
                    for (l_145 = 0; (l_145 > 21); l_145++)
                    {
                        l_175 = ((*l_149) = &g_124);
                    }
                    for (g_96 = 20; (g_96 < 4); g_96--)
                    {
                        (**l_149) = ((!g_43) > g_12.f1);
                    }
                }
                for (g_153 = 0; (g_153 < (-15)); --g_153)
                {
                    int ***l_182 = &l_149;
                    for (l_166 = 0; (l_166 < 8); l_166 = safe_add_func_int32_t_s_s(l_166, 7))
                    {
                        l_175 = &g_10;

                        ;
                    }
                    (*l_182) = &l_146;
                }

                ;
                (*l_186) |= (safe_mod_func_uint8_t_u_u((&g_129 != ((*l_185) = &g_132)), (*l_175)));

                ;
            }
        }

        ;
        (*l_123) = g_115;
        (*l_123) = func_34((((void*)0 == l_123) || (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((((*p_63) = (g_129 && g_144)) || ((*g_5) = (g_144 != ((*l_97) = ((safe_rshift_func_uint16_t_u_u((func_34((safe_lshift_func_uint8_t_u_s(((*l_146) <= ((*l_97) == ((safe_rshift_func_uint8_t_u_s(((!(*l_123)) == (*g_114)), (*l_146))) && 0x130AL))), (*l_146)))) != 0x3C95L), 7)) ^ (*l_146)))))) | 0xB5CEBA81L), 4)), (*l_123))), (*l_146)))));
    }
    else
    {
        char **l_202 = &g_5;
        unsigned long long *l_205 = &g_96;
        int l_206 = 1L;
        unsigned *l_207 = &g_90;
        char l_208 = 0xE2L;
        unsigned char *l_228 = &g_43;
        if (((*l_123) = (((+(*g_114)) && 1UL) != (safe_lshift_func_uint8_t_u_s((((*l_202) = l_121) == p_63), ((safe_add_func_uint16_t_u_u((l_205 == (void*)0), (1UL != (((*l_207) = l_206) == (*l_123))))) >= l_208))))))
        {
            if (l_206)
                goto lbl_209;
        }
        else
        {
            unsigned l_220 = 0xF9836C0EL;
            unsigned char **l_248 = (void*)0;
            char l_261 = 0xA1L;
            int *l_266 = &l_263;
            if ((safe_rshift_func_int8_t_s_s(1L, 3)))
            {
                short *l_240 = &g_153;
                unsigned char **l_247 = &l_121;
                unsigned char ***l_246 = &l_247;
                unsigned char ***l_249 = &l_248;
                for (g_144 = (-19); (g_144 <= 47); g_144++)
                {
                    const short l_223 = 0xA6C1L;
                    for (g_187 = 0; (g_187 >= (-3)); --g_187)
                    {
                        unsigned char **l_229 = &l_121;
                        int l_230 = 0L;
                        short **l_239 = (void*)0;
                        (*g_219) &= (safe_sub_func_int8_t_s_s((((g_218 == (void*)0) && l_206) == l_220), (g_12.f0 ^ (safe_lshift_func_int8_t_s_u((l_223 == (((*l_128) = g_90) | (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((l_230 &= (((*l_229) = l_228) != (void*)0)) >= (*l_123)), g_132)), (*g_5))))), 6)))));

                        ;
                        (*g_219) = 0x9FA2D9F9L;
                        (*l_123) ^= (safe_lshift_func_uint8_t_u_s(((+(safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(((l_240 = l_131) != (void*)0), 3)), (safe_unary_minus_func_int16_t_s(l_223)))), 2))) ^ (((**l_229) = 0x6EL) != ((safe_mod_func_uint32_t_u_u(l_230, l_223)) > ((void*)0 != &g_219)))), 3));

                        ;
                    }
                    if ((*g_219))
                        continue;
                }

                ;
                ;
                if ((g_12.f0 >= (safe_mod_func_uint32_t_u_u(((*l_207) ^= 0xF25848B5L), (0xF922L || (((*l_246) = &l_121) != ((*l_249) = l_248)))))))
                {
                    int l_250 = 0xA663DAEBL;
                    int l_251 = 0x70432E41L;
                    l_251 = l_250;
                }
                else
                {
                    (*l_123) = func_34((*p_63));
                }
            }
            else
            {
                short *l_262 = &g_153;
                for (g_10 = 0; (g_10 <= (-14)); g_10 = safe_sub_func_uint16_t_u_u(g_10, 8))
                {
                    short l_258 = (-4L);
                    for (g_122 = 0; (g_122 <= 7); g_122 = safe_add_func_uint8_t_u_u(g_122, 4))
                    {
                        l_206 = ((*l_123) = (safe_rshift_func_int8_t_s_s((*g_5), l_206)));
                        (*l_123) = (*g_219);
                        (*g_218) = (*g_218);
                        (*l_123) &= (**g_218);
                    }
                    (*g_218) = (*g_218);
                    if ((*g_219))
                    {
                        return l_258;
                    }
                    else
                    {
                        (*g_218) = l_97;
                    }
                }
                (*l_97) = (l_263 &= ((safe_rshift_func_int8_t_s_u((*g_5), g_74.f1)) >= ((((*g_219) == (g_6 && 0x3CFF6BEFEFA7DB85LL)) != ((*l_262) ^= ((((!(l_261 < (*g_5))) || 0x6D9DE8EE48BEC9A0LL) && ((((*l_118) = l_206) | (*l_123)) != g_12.f0)) >= (-1L)))) >= 0xC3L)));
                (*g_219) = (**g_218);
            }

            ;
            for (l_127 = 5; (l_127 < 60); l_127 = safe_add_func_uint16_t_u_u(l_127, 6))
            {
                unsigned short l_267 = 0x05FCL;
                (*g_218) = l_266;

                ;
                return l_267;


            }
            (*l_97) = ((((void*)0 != &l_263) ^ func_34((*p_63))) & ((safe_add_func_int16_t_s_s(((((*l_118) = (*l_123)) < g_12.f1) & (*l_266)), ((*l_123) || ((*l_128) = 0UL)))) | (*l_266)));
        }

        ;
        ;
        (*g_218) = (void*)0;

        ;
    }

    ;
    ;
    ;
    return (*l_123);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_275.f0, "g_275.f0", print_hash_value);
    transparent_crc(g_275.f1, "g_275.f1", print_hash_value);
    transparent_crc(g_275.f2, "g_275.f2", print_hash_value);
    transparent_crc(g_275.f3, "g_275.f3", print_hash_value);
    transparent_crc(g_275.f4, "g_275.f4", print_hash_value);
    transparent_crc(g_275.f5, "g_275.f5", print_hash_value);
    transparent_crc(g_275.f6, "g_275.f6", print_hash_value);
    transparent_crc(g_275.f7, "g_275.f7", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_395.f0, "g_395.f0", print_hash_value);
    transparent_crc(g_395.f1, "g_395.f1", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_589.f0, "g_589.f0", print_hash_value);
    transparent_crc(g_589.f1, "g_589.f1", print_hash_value);
    transparent_crc(g_589.f2, "g_589.f2", print_hash_value);
    transparent_crc(g_589.f3, "g_589.f3", print_hash_value);
    transparent_crc(g_589.f4, "g_589.f4", print_hash_value);
    transparent_crc(g_589.f5, "g_589.f5", print_hash_value);
    transparent_crc(g_589.f6, "g_589.f6", print_hash_value);
    transparent_crc(g_589.f7, "g_589.f7", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
