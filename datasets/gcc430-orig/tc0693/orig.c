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
   const unsigned short f0;
   const unsigned f1;
   const unsigned f2;
   char f3;
};

struct S1 {
   struct S0 f0;
   int f1;
   unsigned f2;
   unsigned f3;
   unsigned f4;
   const short f5;
   unsigned f6;
   char f7;
};


static unsigned g_2 = 0UL;
static int g_4 = 0L;
static int g_6 = 0x09D01078L;
static int g_8 = 6L;
static int g_28 = (-1L);
static unsigned char g_57 = 0x63L;
static unsigned char g_73 = 0x89L;
static unsigned char *g_72 = &g_73;
static int g_83 = (-1L);
static unsigned char g_95 = 0UL;
static unsigned char g_97 = 0xBEL;
static struct S0 g_101 = {1UL,0xB6EB866BL,0xF1F252ACL,7L};
static struct S0 *g_105 = (void*)0;
static struct S0 **g_104 = &g_105;
static unsigned g_114 = 2UL;
static struct S1 g_131 = {{65527UL,1UL,4294967295UL,0x7AL},1L,0UL,18446744073709551609UL,0x3C071E14L,0xE225L,0x2E691EA7L,-7L};
static int **g_136 = (void*)0;
static int *g_138 = (void*)0;
static struct S1 g_211 = {{0x65DDL,0x268686F0L,0x635C2736L,0x97L},0x8C801306L,0UL,0x074B32EEL,0x2D120FEEL,0x5024L,18446744073709551611UL,0x7CL};
static struct S1 *g_265 = (void*)0;
static struct S1 **g_264 = &g_265;
static unsigned short g_306 = 0UL;
static int g_323 = 0x21A587B8L;
static const unsigned char ***g_399 = (void*)0;
static short g_456 = 9L;
static short g_457 = 0L;
static unsigned *g_479 = &g_2;
static unsigned **g_478 = &g_479;
static unsigned short *g_540 = (void*)0;
static unsigned short * const *g_539 = &g_540;
static struct S0 ***g_564 = (void*)0;
static struct S0 ****g_563 = &g_564;
static const struct S0 * const g_568 = (void*)0;
static const struct S0 * const *g_567 = &g_568;
static const struct S0 * const **g_566 = &g_567;
static const struct S0 * const ***g_565 = &g_566;
static short ** const g_625 = (void*)0;
static int *g_670 = &g_323;
static int **g_669 = &g_670;
static unsigned char **g_686 = (void*)0;
static const struct S0 *g_703 = (void*)0;
static const struct S0 **g_702 = &g_703;



static struct S1 func_1(void);
static short func_11(int * p_12, int * p_13, int p_14, int * p_15);
static int * func_16(int * p_17);
static char func_21(char p_22, char p_23);
static int * func_29(unsigned short p_30, int * p_31, short p_32, short p_33, int * p_34);
static int func_43(int p_44, struct S1 p_45, const unsigned char p_46, const int * p_47, const struct S0 p_48);
static struct S1 func_49(unsigned short p_50);
static int * func_51(unsigned p_52, unsigned char p_53, struct S0 p_54, int * p_55);
static struct S0 func_58(unsigned char * p_59, int * p_60, const int * p_61);
static const int * func_63(struct S1 p_64, int p_65, unsigned char * p_66);
static struct S1 func_1(void)
{
    int *l_3 = &g_4;
    int *l_5 = &g_6;
    int *l_7 = &g_8;
    int *l_18 = &g_4;
    short l_687 = 0L;
    int l_688 = (-10L);
    struct S0 l_706 = {65527UL,0xA0B5550CL,0xC82D792DL,0x9FL};
    char *l_724 = &g_211.f0.f3;
    char *l_725 = &g_131.f7;
    unsigned ***l_730 = &g_478;
    struct S1 l_731 = {{65535UL,18446744073709551607UL,4294967291UL,1L},0xCB6B0A30L,0xD0AD34D2L,0xD44C5EDDL,0UL,6L,18446744073709551615UL,0xCCL};
    (*l_7) ^= ((*l_5) ^= ((*l_3) = g_2));
    l_688 |= (safe_add_func_uint32_t_u_u((func_11(func_16(l_7), l_18, (*l_5), l_7) == (safe_sub_func_uint8_t_u_u(g_6, (g_2 > func_21((*l_5), g_2))))), l_687));


    ;
    ;
    if ((*l_18))
    {
        int **l_689 = (void*)0;
        int **l_690 = &l_18;
        struct S1 l_712 = {{0xF0CFL,0UL,0x8748853FL,0xE4L},0x7D29C467L,0x09835704L,5UL,0x39D4FFBFL,0xB8F6L,0x4D934DF2L,0L};
        (*l_690) = func_16(((*l_690) = func_16(&l_688)));

        ;
        for (g_131.f0.f3 = 0; (g_131.f0.f3 > 11); g_131.f0.f3 = safe_add_func_uint32_t_u_u(g_131.f0.f3, 2))
        {
            short l_697 = 0L;
            int l_717 = 0x3D92FC4BL;
            for (g_57 = 4; (g_57 == 55); g_57++)
            {
                struct S1 l_698 = {{7UL,18446744073709551606UL,6UL,0L},2L,8UL,8UL,4294967294UL,0xBF1AL,0UL,0L};
                const struct S0 l_699 = {0UL,0x3B414C5FL,0x0BF07EA5L,-1L};
                int *l_709 = &g_4;
                for (g_211.f2 = 0; (g_211.f2 != 38); g_211.f2 = safe_add_func_int16_t_s_s(g_211.f2, 8))
                {
                    int *l_707 = &g_83;
                    int *l_708 = (void*)0;
                    const struct S0 l_718 = {0x2987L,0x115D6B1DL,0x8AE5680CL,1L};
                    if (g_131.f0.f2)
                    {
                        const struct S0 ***l_704 = (void*)0;
                        const struct S0 ***l_705 = &g_702;
                        (**l_690) |= func_43(l_697, l_698, (*g_72), &g_6, l_699);
                        if (g_131.f0.f0)
                            break;
                        (*l_5) = ((safe_div_func_int32_t_s_s(g_211.f0.f2, 1UL)) > 0x783E99A4L);
                        (*l_5) = (*l_707);
                    }
                    else
                    {
                        (*l_707) &= (0L != (safe_lshift_func_int8_t_s_u(((((g_131.f5 == 0xAA78DDB6L) ^ ((*g_479) = (*l_7))) == 0x625AL) > g_101.f0), 5)));
                    }
                    if ((((*g_72) = 4UL) > (*l_7)))
                    {
                        (*l_18) ^= g_457;
                    }
                    else
                    {
                        (*l_690) = l_709;

                        ;
                        return l_712;
                    }
                    for (l_712.f3 = 0; (l_712.f3 > 40); l_712.f3 = safe_add_func_int32_t_s_s(l_712.f3, 1))
                    {
                        (*l_7) = ((*l_3) = (l_697 == (safe_sub_func_uint32_t_u_u(0x97D52BCBL, g_457))));
                        l_717 = (*l_5);
                        (**l_690) = func_43(g_456, g_131, (*g_72), &g_28, l_718);
                    }
                }
                (*l_5) = (*l_5);
            }
            (**l_690) &= l_697;
        }
        return g_211;
    }
    else
    {
        int **l_719 = &g_138;
        (*l_719) = &l_688;

        ;
        (*g_702) = (*g_702);
        (*l_7) = ((**l_719) | (safe_add_func_uint8_t_u_u((&g_28 == &l_688), g_211.f0.f2)));
    }

    ;
    if ((safe_sub_func_int32_t_s_s(1L, (((*l_725) ^= ((*l_724) = g_8)) > (safe_lshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((((~((void*)0 == l_730)) & func_43((*l_18), l_731, func_43((*l_5), l_731, (*l_18), &l_688, l_731.f0), &l_688, l_706)) || (*l_3)), 1L)), 13))))))
    {
        struct S1 l_732 = {{0xB60DL,0xA582F206L,0x2F201ECAL,0L},0x80E67452L,18446744073709551615UL,0xC4ECF6A4L,4294967295UL,1L,0x4992BF55L,0x9DL};
        return l_732;


    }
    else
    {
        short l_733 = (-1L);
        int l_734 = (-1L);
        (*l_7) = l_733;
        (*l_5) &= (*l_7);
        l_734 ^= (*l_7);
    }

    ;
    return l_731;


}







static short func_11(int * p_12, int * p_13, int p_14, int * p_15)
{
    (*p_13) = ((*p_15) = (*p_12));
    return g_8;
}







static int * func_16(int * p_17)
{
    return p_17;


}







static char func_21(char p_22, char p_23)
{
    int l_26 = 0x47E0FA1AL;
    int *l_27 = &g_28;
    char l_40 = 0xFAL;
    int *l_685 = &g_131.f1;
    for (p_23 = 0; (p_23 == (-2)); p_23 = safe_sub_func_uint8_t_u_u(p_23, 8))
    {
        return l_26;
    }
    (*l_27) = g_6;
    (*l_27) &= g_2;
    if (g_6)
    {
        int *l_35 = &g_28;
        const int *l_472 = &g_6;
        const struct S0 l_473 = {1UL,1UL,0x77F8ABC9L,0x1AL};
        unsigned short *l_544 = &g_306;
        l_685 = func_29(((*l_544) = ((l_35 == l_27) >= (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_40, ((safe_add_func_uint32_t_u_u(0x4E5477A7L, func_43(g_28, func_49(g_2), (*l_35), l_472, l_473))) < 4294967295UL))), p_22)))), &g_6, p_23, g_131.f2, l_27);


        ;
        ;
        ;
    }
    else
    {
        g_686 = (void*)0;
    }


    ;
    ;
    ;
    return g_114;
}







static int * func_29(unsigned short p_30, int * p_31, short p_32, short p_33, int * p_34)
{
    struct S0 *l_547 = &g_131.f0;
    int *l_548 = (void*)0;
    int l_549 = (-7L);
    struct S1 **l_550 = &g_265;
    struct S1 ***l_551 = &g_264;
    struct S1 **l_553 = &g_265;
    struct S1 ***l_552 = &l_553;
    unsigned short *l_554 = (void*)0;
    unsigned short *l_555 = &g_306;
    short l_559 = 0xBE62L;
    int *l_560 = (void*)0;
    unsigned **l_561 = &g_479;
    unsigned ***l_562 = &g_478;
    const struct S0 * const ****l_569 = &g_565;
    unsigned short l_580 = 0xCD74L;
    unsigned char * const l_584 = &g_95;
    unsigned char *l_590 = (void*)0;
    unsigned short l_617 = 0x73B2L;
    int **l_671 = (void*)0;
    (*p_34) ^= (((safe_rshift_func_uint16_t_u_s(p_30, 3)) | ((void*)0 == l_547)) > (!(((void*)0 == l_548) != (l_549 < (*p_31)))));
    l_560 = func_51((*g_479), ((*g_72) = (((l_549 &= ((*l_555) &= (((*l_551) = l_550) == ((*l_552) = &g_265)))) && ((((*l_551) != (*l_552)) == ((((safe_unary_minus_func_uint8_t_u((((safe_mod_func_uint32_t_u_u(((-10L) | 1L), (0x83L | (p_30 ^ p_32)))) && 0xA3L) >= 0xF9C3L))) | p_30) != g_28) != p_33)) != l_559)) < 7L)), (*l_547), &g_6);

    ;
    (*l_562) = l_561;
    if ((g_563 == ((*l_569) = g_565)))
    {
        short *l_574 = &g_457;
        struct S0 l_575 = {0UL,0xAFA81A0DL,0UL,0x3BL};
        int **l_576 = &l_560;
        int **l_577 = (void*)0;
        int *l_579 = &g_323;
        int **l_578 = &l_579;
        struct S1 l_583 = {{9UL,18446744073709551609UL,6UL,0L},2L,18446744073709551610UL,0x2FF743EAL,1UL,0x72DFL,0x7FAA7E2DL,0x77L};
        unsigned char *l_585 = &g_97;
        (*p_34) |= (safe_add_func_int32_t_s_s((((((*l_574) = (safe_lshift_func_int16_t_s_s((*l_560), 10))) >= (l_560 != (void*)0)) | 1L) && ((((*l_578) = func_51(p_33, (*g_72), (*l_547), ((*l_576) = func_51((*g_479), (*l_560), l_575, &l_549)))) == (void*)0) == 254UL)), l_580));

        ;
        ;
        (*p_34) = ((p_30 <= (g_131.f4 == (safe_rshift_func_int16_t_s_u(func_43((*p_31), l_583, (l_584 != l_585), &g_83, l_583.f0), (**l_576))))) | g_131.f7);
        (*l_576) = (void*)0;

        ;
    }
    else
    {
        int *l_593 = &g_6;
        const unsigned * const * const *l_601 = (void*)0;
        unsigned short l_619 = 65529UL;
        short *l_627 = &g_456;
        short **l_626 = &l_627;
        unsigned l_644 = 0xCDB71C40L;
        for (g_83 = 0; (g_83 != (-1)); g_83--)
        {
            int **l_594 = &g_138;
            char *l_597 = &g_131.f7;
            unsigned char **l_600 = &g_72;
            (*l_594) = l_593;

            ;
            (*p_34) |= ((((*g_72) = ((*g_479) && (p_30 == (*g_138)))) <= (-1L)) | ((*l_597) = (safe_lshift_func_uint8_t_u_u(((g_211.f0.f1 ^ (*l_593)) ^ ((*l_593) == (p_30 > ((((1UL ^ (-1L)) < 7L) >= g_211.f0.f0) && g_131.f0.f3)))), 3))));
            (*p_34) &= (safe_sub_func_int16_t_s_s(0xED03L, (((*l_597) = ((**l_594) > (&l_584 != l_600))) ^ (l_601 == (void*)0))));
        }
        for (g_73 = 0; (g_73 != 38); g_73 = safe_add_func_uint16_t_u_u(g_73, 1))
        {
            int l_608 = 0x029BF50BL;
            int l_611 = 0x1C66950DL;
            char l_622 = 0xCFL;
            int *l_656 = &l_608;
            int **l_655 = &l_656;
            int l_657 = 0x0A452EFAL;
            int l_677 = 1L;
            unsigned char **l_683 = &l_590;
            unsigned char ***l_682 = &l_683;
            unsigned char ****l_681 = &l_682;
            for (g_95 = 0; (g_95 <= 20); g_95++)
            {
                (*p_34) = (*p_31);
                for (g_131.f0.f3 = 0; (g_131.f0.f3 == 2); g_131.f0.f3 = safe_add_func_int32_t_s_s(g_131.f0.f3, 9))
                {
                    (*p_34) |= (0x2FL != 0x14L);
                    if (l_608)
                        continue;
                }
            }
            if (((((safe_sub_func_uint16_t_u_u(((*l_593) ^ l_608), p_30)) && p_30) <= g_6) == ((-8L) < ((l_611 |= p_30) | p_33))))
            {
                int ***l_612 = &g_136;
                (*l_612) = &p_34;

                ;
            }
            else
            {
                const unsigned short l_618 = 65527UL;
                int *l_654 = &l_608;
                int **l_653 = &l_654;
                (*p_34) = (*p_31);
                (*p_34) = (safe_add_func_int8_t_s_s(l_608, (((*l_555) |= (safe_lshift_func_uint16_t_u_u(l_617, l_618))) == (l_618 < p_33))));
                if (((*p_34) = l_618))
                {
                    int **l_623 = (void*)0;
                    int **l_624 = &l_548;
                    (*p_34) &= l_619;
                    for (g_211.f4 = (-22); (g_211.f4 == 55); g_211.f4++)
                    {
                        (*p_34) = (*l_593);
                    }
                    (*p_34) &= l_622;
                    (*l_624) = p_31;

                    ;
                }
                else
                {
                    short l_645 = 0x5D3AL;
                    if (l_618)
                        break;
                    l_626 = g_625;

                    ;
                    if ((1L < ((((g_95 >= (safe_add_func_int16_t_s_s(((*l_560) == ((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((-1L), ((safe_mod_func_int32_t_s_s(((*p_34) = ((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((((*g_479) > l_644) < (*l_593)), (~(p_30 > l_608)))) >= (-9L)) || 0xD4L), p_33)), 8)) != (*g_72))), l_645)) == l_622))), (**g_478))), l_608)) > (*l_593))), 1L))) && 0L) >= l_618) || 4UL)))
                    {
                        if (l_618)
                            break;
                        (*p_34) = (p_32 & ((safe_div_func_int16_t_s_s((((*l_562) = &g_479) == (void*)0), 0x1932L)) ^ (safe_unary_minus_func_int32_t_s(l_611))));
                        l_657 = (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(g_131.f7, 3)), (((l_653 != l_655) && (l_611 = (*l_560))) ^ (*l_593))));
                    }
                    else
                    {
                        char *l_662 = &l_622;
                        int l_665 = (-5L);
                        int **l_668 = (void*)0;
                        int ***l_672 = &l_671;
                        if (l_618)
                            break;
                        (*p_34) = (l_677 ^= ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((65531UL & p_32), 7)), (((*l_662) = ((void*)0 != (**l_569))) && (((safe_rshift_func_uint8_t_u_u(l_665, 0)) == p_32) < ((((safe_div_func_uint32_t_u_u(((g_669 = l_668) != ((*l_672) = l_671)), (safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_611, 255UL)), (*l_593))))) < (*p_34)) == (-1L)) >= l_657))))) != l_657));
                        if ((*l_593))
                            break;
                        (**l_551) = (*g_264);
                    }
                    if ((*p_34))
                        continue;
                }
                for (g_95 = (-18); (g_95 > 29); g_95++)
                {
                    int **l_680 = &l_548;
                    unsigned *l_684 = &g_211.f4;
                    (*l_680) = p_31;

                    ;
                    (*p_34) = (0x2BA1L || (((&g_399 == l_681) || g_211.f0.f2) || ((*l_684) = p_30)));
                }
            }
            if ((*l_593))
                continue;
        }

        ;
        ;
        ;
        ;
    }

    ;
    ;
    ;
    ;
    return p_31;



}







static int func_43(int p_44, struct S1 p_45, const unsigned char p_46, const int * p_47, const struct S0 p_48)
{
    unsigned l_474 = 0xFF4E7C8DL;
    unsigned **l_480 = &g_479;
    struct S1 * const *l_519 = &g_265;
    int l_520 = 0xA053129CL;
    unsigned char l_521 = 0UL;
    int l_523 = (-1L);
    unsigned short *l_536 = &g_306;
    unsigned short **l_535 = &l_536;
    if (l_474)
    {
        unsigned l_477 = 0x4F8B6844L;
        int *l_484 = &g_28;
        int **l_506 = &g_138;
        int **l_507 = &l_484;
        struct S0 **l_515 = &g_105;
        int *l_516 = &g_211.f1;
        if ((safe_lshift_func_uint8_t_u_s(((*g_72) = p_45.f0.f0), ((g_2 > l_477) | 2UL))))
        {
            l_480 = g_478;
        }
        else
        {
            int *l_481 = &g_211.f1;
            (*l_481) = (p_44 = ((+0x02L) | g_6));
            for (p_45.f0.f3 = 0; (p_45.f0.f3 <= 21); p_45.f0.f3++)
            {
                int **l_485 = &l_481;
                (*l_485) = l_484;

                ;
            }

            ;
            if ((*l_484))
            {
                unsigned char *l_496 = (void*)0;
                int l_499 = 0L;
                int *l_500 = &g_131.f1;
                if ((safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(g_73, 0)) <= (safe_sub_func_int32_t_s_s(((*l_500) = (((((*l_481) = (*l_481)) ^ p_48.f1) >= (65526UL ^ (0L ^ (safe_mod_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((g_97 ^= p_46), 0x13L)), ((safe_sub_func_int8_t_s_s(l_499, p_46)) | p_45.f6)))))) < 0xC62E073BL)), p_45.f0.f1))), 0x6BL)))
                {
                    (*l_481) = (*p_47);
                }
                else
                {
                    for (l_474 = 0; (l_474 != 55); ++l_474)
                    {
                        unsigned char **l_504 = &l_496;
                        unsigned char ***l_503 = &l_504;
                        unsigned short l_505 = 0x5997L;
                        (*l_484) = ((((*l_503) = &g_72) == (void*)0) < ((*l_481) <= l_505));

                        ;
                    }
                }
            }
            else
            {
                return (*l_481);
            }
        }
        (*l_516) ^= ((65530UL | (((((*l_506) = (void*)0) != ((*l_507) = func_16(l_484))) == ((*g_72) = (safe_div_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((*p_47))), (-1L))))) | p_48.f2)) <= (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(((void*)0 != l_515), 2)) >= l_474), 0xA7D16AB6L)));

        ;
        (*l_516) = ((*l_515) != (*g_104));
        return (*l_484);
    }
    else
    {
        char *l_522 = &g_211.f7;
        int l_531 = 0x8CAE0675L;
        int l_534 = 6L;
        unsigned short ***l_537 = (void*)0;
        unsigned short ***l_538 = &l_535;
        int *l_541 = (void*)0;
        int *l_542 = (void*)0;
        int *l_543 = &g_131.f1;
        l_523 = (safe_add_func_int16_t_s_s((g_211.f0.f2 ^ ((0xF1L >= (*g_72)) <= (l_520 = (((void*)0 != l_519) & (**g_478))))), ((l_521 > (((*l_522) = 0L) == p_45.f0.f0)) < l_521)));
        (*l_543) &= ((*g_479) < ((safe_add_func_int32_t_s_s(l_521, ((safe_unary_minus_func_uint16_t_u(((safe_div_func_uint32_t_u_u(p_45.f3, (l_531 ^= ((void*)0 == &g_83)))) > (safe_sub_func_int8_t_s_s(p_45.f2, l_534))))) <= p_45.f7))) > (((*l_538) = l_535) != g_539)));
        (*l_543) = ((p_44 != (0x67L && (l_521 >= p_48.f2))) <= l_474);
    }
    return (*p_47);
}







static struct S1 func_49(unsigned short p_50)
{
    unsigned char *l_56 = &g_57;
    int *l_62 = &g_6;
    struct S1 l_67 = {{65532UL,0xD5126306L,0x3EEFD7F9L,0L},0x474477D7L,0x7F6C0774L,0x6462EF7CL,4UL,0x55F8L,0UL,-1L};
    int **l_470 = (void*)0;
    int **l_471 = &g_138;
    (*l_471) = func_16(func_16(func_51(g_28, ((*l_56) = g_6), func_58(l_56, l_62, func_63(l_67, (0x7D1DL > (safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((p_50 | ((void*)0 != &g_28)), (*l_62))) > (*l_62)), g_28))), g_72)), l_62)));

    ;
    return l_67;
}







static int * func_51(unsigned p_52, unsigned char p_53, struct S0 p_54, int * p_55)
{
    return p_55;


}







static struct S0 func_58(unsigned char * p_59, int * p_60, const int * p_61)
{
    unsigned char l_310 = 0xD3L;
    char *l_313 = &g_211.f7;
    int *l_320 = &g_83;
    struct S1 l_321 = {{0x0741L,0xC626FC98L,3UL,-6L},-1L,18446744073709551614UL,0xDDBBDD34L,0x41926491L,0L,18446744073709551607UL,0x44L};
    int *l_322 = &g_323;
    const int *l_325 = &g_83;
    const int **l_324 = &l_325;
    int ***l_350 = (void*)0;
    struct S0 **l_378 = (void*)0;
    unsigned short l_463 = 5UL;
    struct S0 l_469 = {0xC0F1L,1UL,4294967295UL,-1L};
    (*l_320) = (safe_rshift_func_uint16_t_u_s((l_310 && (0xE183L > (safe_div_func_int8_t_s_s(l_310, ((*l_313) &= g_131.f1))))), (safe_sub_func_int32_t_s_s((l_310 || ((safe_sub_func_uint32_t_u_u(g_211.f6, l_310)) | l_310)), (safe_rshift_func_int16_t_s_u(l_310, g_211.f5))))));
    (*l_324) = func_63(l_321, ((*l_322) = (-1L)), &g_97);

    ;
    if (((void*)0 == p_60))
    {
lbl_327:
        (*l_320) &= 0L;
    }
    else
    {
        const short l_326 = 0xADD0L;
        short l_354 = 7L;
        int l_358 = 0x1324C2A5L;
        int l_428 = (-8L);
        unsigned char **l_430 = (void*)0;
        unsigned char ***l_429 = &l_430;
        if (((l_326 <= (-1L)) && 0x30L))
        {
            int *l_328 = &g_211.f1;
            int l_331 = (-6L);
            int *l_338 = &l_321.f1;
            if (g_2)
                goto lbl_327;
            (*l_328) &= (*l_320);
            (*l_338) |= (safe_mod_func_uint8_t_u_u(l_326, (((l_331 || ((*p_60) >= (safe_lshift_func_uint16_t_u_s((*l_320), 3)))) >= (safe_div_func_int8_t_s_s(l_326, (*l_328)))) | (0x09L >= (safe_mod_func_uint8_t_u_u(((0UL != (*l_328)) != 0x8EL), 0x4CL))))));
            (*l_320) = (*p_60);
        }
        else
        {
            int l_345 = 0x1607F975L;
            int ****l_351 = (void*)0;
            int ****l_352 = &l_350;
            int ***l_353 = &g_136;
            unsigned l_404 = 1UL;
            unsigned char ***l_431 = &l_430;
            const struct S1 *l_440 = &g_131;
            if (((safe_add_func_uint8_t_u_u((*g_72), 0L)) || (safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((l_345 == 0UL) < ((*l_320) = l_326)), (safe_div_func_int32_t_s_s(((((l_326 || (~((safe_sub_func_uint32_t_u_u((((*l_352) = l_350) == l_353), (~0L))) & l_326))) >= l_354) <= 0xA33EL) & l_326), l_354)))), 0xF24FL))))
            {
                int *l_361 = &g_6;
                short *l_370 = &l_354;
                if ((*p_60))
                {
                    char l_357 = 3L;
                    for (g_211.f2 = 0; (g_211.f2 >= 16); g_211.f2++)
                    {
                        l_358 = (l_357 | (1L && g_323));
                    }
                    (*l_320) ^= (*p_60);
                }
                else
                {
                    int *l_362 = &g_131.f1;
                    unsigned short *l_367 = &g_306;
                    (*l_362) |= ((*l_320) |= ((*g_72) <= (+(g_131.f0.f3 && ((*g_72) > (l_361 != (*l_324)))))));
                    (*l_362) = (safe_lshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((*l_367) = g_28) ^ 9L), (safe_rshift_func_uint16_t_u_u(((void*)0 == l_370), 7)))), 1));
                }
            }
            else
            {
                unsigned char l_373 = 0x0AL;
                struct S0 **l_376 = &g_105;
                int l_381 = 1L;
                unsigned char **l_401 = &g_72;
                unsigned char ***l_400 = &l_401;
                if ((safe_lshift_func_uint8_t_u_s(l_373, 4)))
                {
                    unsigned l_385 = 4294967295UL;
                    short *l_388 = &l_354;
                    (*l_324) = p_60;

                    ;
                    for (g_97 = 10; (g_97 != 38); g_97++)
                    {
                        struct S0 ***l_377 = &l_376;
                        int l_384 = (-1L);
                        g_211.f1 = ((*l_320) = (((*l_377) = l_376) == l_378));
                        (*l_320) |= (l_354 > ((safe_mod_func_uint32_t_u_u((4294967295UL & g_2), ((l_381 ^= 0x96L) ^ 0x87L))) | (8UL || ((safe_rshift_func_int8_t_s_s(l_384, 7)) == l_373))));
                        (*g_104) = (*l_376);
                        (*l_320) ^= (l_381 > l_373);
                    }
                    g_211.f1 = ((*l_320) = ((l_385 <= ((void*)0 != (*g_104))) < ((*l_388) = (safe_add_func_int32_t_s_s(g_131.f5, (*p_60))))));
                }
                else
                {
                    struct S0 **l_391 = &g_105;
                    int l_397 = 5L;
                    short *l_398 = &l_354;
                    unsigned char ****l_402 = &l_400;
                    int *l_403 = &g_131.f1;
                    unsigned short *l_407 = &g_306;
                    unsigned short **l_406 = &l_407;
                    for (l_321.f4 = (-22); (l_321.f4 <= 41); ++l_321.f4)
                    {
                        struct S0 ***l_392 = &g_104;
                        struct S0 ***l_393 = &l_378;
                        int l_394 = 0xF6D3F18FL;
                        (*l_393) = ((*l_392) = l_391);

                        ;
                    }

                    ;
                    l_381 = ((1UL & (0xA894L && (((*l_398) &= 7L) <= (((*l_403) = ((*l_320) = (g_399 == ((*l_402) = l_400)))) > (l_404 & (g_131.f7 != (((l_326 < (g_101.f2 != l_326)) != l_358) < 0x0BB5DCD1L))))))) <= 0x63L);
                    if (l_358)
                        goto lbl_405;
lbl_405:
                    (*l_403) |= (*p_60);
                    (*l_320) ^= (!(((*l_406) = &g_306) == (void*)0));
                }

                ;
            }

            ;
            for (g_211.f1 = 0; (g_211.f1 <= 11); g_211.f1 = safe_add_func_int8_t_s_s(g_211.f1, 8))
            {
                unsigned l_425 = 0x959D540DL;
                for (l_321.f4 = 23; (l_321.f4 > 37); l_321.f4++)
                {
                    (*l_324) = &l_358;

                    ;
                }
                (*l_320) = 0x7F940FC8L;
                for (l_321.f7 = 0; (l_321.f7 >= 28); ++l_321.f7)
                {
                    unsigned char *l_418 = &g_95;
                    int l_419 = 0x544A4EC7L;
                    if (g_211.f0.f0)
                        goto lbl_327;

                    (*l_320) = (*p_60);
                    (*l_320) = (safe_mod_func_int8_t_s_s((g_211.f6 ^ ((*g_72) == (safe_lshift_func_uint8_t_u_s(((*l_418) |= (*g_72)), l_419)))), (safe_unary_minus_func_uint32_t_u(((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_425 && (l_358 = (*g_72))), ((safe_div_func_uint16_t_u_u(l_425, 8L)) != 1UL))), 0xFFCFL)) & (*p_60))))));
                }
            }

            ;
            l_358 &= (l_428 = (*p_60));
            if ((l_429 == l_431))
            {
                (*l_320) = l_358;
                for (l_321.f7 = 3; (l_321.f7 <= (-12)); l_321.f7 = safe_sub_func_int16_t_s_s(l_321.f7, 7))
                {
                    char l_434 = 9L;
                    unsigned short *l_435 = (void*)0;
                    unsigned short *l_436 = (void*)0;
                    unsigned char **l_438 = &g_72;
                    unsigned char ***l_437 = &l_438;
                    short *l_439 = &l_354;
                    const struct S1 **l_441 = (void*)0;
                    const struct S1 **l_442 = &l_440;
                    (*l_320) |= (((g_306 |= l_434) & g_211.f1) == ((*l_439) &= (((*l_437) = ((*l_429) = &g_72)) == &p_59)));

                    ;
                    if ((*p_60))
                        break;
                    (*l_324) = p_61;

                    ;
                    (*l_442) = l_440;
                }

                ;
                (*l_320) = (safe_sub_func_int16_t_s_s(g_306, 7L));
            }
            else
            {
                short *l_455 = &g_456;
                int l_458 = 0xF4AB8AB8L;
                (*l_324) = func_16((p_60 = p_60));

                ;
                if (((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(l_354, g_101.f2)), (safe_rshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((*l_320), g_131.f6)) || (((g_211.f7 < g_323) == l_428) > (-1L))), (g_457 = ((*l_455) = l_428)))))) & l_458))
                {
                    char l_466 = 0x3DL;
                    (*l_324) = p_61;

                    ;
                    for (l_358 = 0; (l_358 > (-29)); l_358 = safe_sub_func_int16_t_s_s(l_358, 5))
                    {
                        (*l_324) = func_16(&g_28);

                        ;
                        (*l_320) |= (g_399 != (void*)0);
                    }

                    ;
                    if ((((l_428 & (&g_306 == (void*)0)) | 0x56EBL) | g_114))
                    {
                        int * const *l_461 = &l_320;
                        int *l_462 = &l_321.f1;
                        (*l_462) |= (((*l_320) < ((void*)0 == l_461)) && (-4L));
                    }
                    else
                    {
                        l_463 &= ((*p_60) && l_458);
                    }
                    for (l_404 = 0; (l_404 != 19); ++l_404)
                    {
                        (*l_320) = l_466;
                        (*l_320) = 0x9C73AB32L;
                    }
                }
                else
                {
                    for (g_211.f1 = 0; (g_211.f1 < 3); g_211.f1++)
                    {
                        (*l_320) = (*p_60);
                        (*l_320) = (*p_60);
                        if (l_358)
                            break;
                    }
                }

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
    (*l_324) = &g_83;

    ;
    return l_469;
}







static const int * func_63(struct S1 p_64, int p_65, unsigned char * p_66)
{
    int *l_75 = &g_28;
    int **l_74 = &l_75;
    int *l_76 = &g_28;
    struct S0 **l_108 = &g_105;
    struct S0 **l_111 = &g_105;
    int l_125 = 0xFC9C227FL;
    int l_174 = 0xD6FD9E37L;
    unsigned l_175 = 8UL;
    int l_204 = 1L;
    short l_209 = 0x84E3L;
    struct S1 *l_210 = &g_211;
    unsigned short l_276 = 0UL;
    int *l_281 = &l_174;
    unsigned char **l_283 = &g_72;
    unsigned char ***l_282 = &l_283;
    if (((((*l_74) = &g_6) != l_76) > g_2))
    {
        int l_84 = (-7L);
        const int *l_86 = &g_28;
        const int **l_85 = &l_86;
        struct S0 **l_112 = &g_105;
        unsigned char l_132 = 0xA2L;
        for (g_73 = (-23); (g_73 == 10); g_73++)
        {
            const int ***l_87 = &l_85;
            const int **l_89 = &l_86;
            const int ***l_88 = &l_89;
            unsigned char *l_94 = &g_95;
            int *l_96 = (void*)0;
            for (p_64.f6 = 0; (p_64.f6 < 52); p_64.f6 = safe_add_func_uint32_t_u_u(p_64.f6, 8))
            {
                unsigned l_81 = 0xDF81C58CL;
                int *l_82 = &g_83;
                p_64.f1 &= (**l_74);
                (*l_82) = l_81;
                p_64.f1 = p_65;
            }
            if (l_84)
                break;
        }
        if ((p_64.f3 && ((safe_add_func_int32_t_s_s((p_64.f0.f2 | (*l_76)), g_83)) ^ g_95)))
        {
            (*l_85) = ((*l_74) = func_16(&g_83));

            ;
            ;
        }
        else
        {
            struct S0 ***l_163 = (void*)0;
            struct S0 ****l_162 = &l_163;
            int l_165 = 0x9404BF6FL;
            if ((((*l_162) = &g_104) == &g_104))
            {
                const int *l_164 = &g_6;
                return l_164;


            }
            else
            {
                int *l_166 = &l_84;
                l_165 ^= (p_64.f1 = (1UL != 0UL));
                (*l_74) = (void*)0;

                ;
                (*l_85) = ((*l_74) = l_166);

                ;
                ;
            }

            ;
            ;
            ;
            (*l_75) ^= (-1L);
            (*l_112) = (*g_104);
            for (p_64.f0.f3 = (-2); (p_64.f0.f3 <= 13); ++p_64.f0.f3)
            {
                unsigned l_169 = 1UL;
                (*l_75) = l_169;
                (**l_74) |= p_64.f0.f2;
                (*l_74) = &l_165;

                ;
            }

            ;
        }


        ;
    }
    else
    {
        unsigned l_172 = 0x49FC326AL;
        int *l_173 = &g_83;
        struct S0 *l_218 = (void*)0;
        unsigned short l_231 = 65535UL;
        l_174 |= ((*l_75) & ((*l_173) = (safe_lshift_func_uint8_t_u_u((p_64.f0.f0 > (l_172 || p_64.f0.f1)), (*p_66)))));
        if (((~(p_64.f0.f1 > g_101.f0)) > l_175))
        {
            int **l_178 = (void*)0;
            short l_194 = 0x972AL;
            struct S0 **l_208 = &g_105;
            int l_267 = 0x52ED1EEAL;
            if ((~((safe_add_func_int16_t_s_s(((void*)0 != l_178), ((safe_rshift_func_int16_t_s_s(0xA3CFL, (p_64.f1 == (safe_rshift_func_uint8_t_u_u((p_64.f6 >= (*l_75)), (safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((0xC1L & ((*l_111) == (*g_104))) > (*p_66)), g_131.f6)), (*l_75)))))))) ^ p_64.f0.f2))) || (*g_72))))
            {
                unsigned short l_207 = 0xF79CL;
                for (p_64.f7 = 0; (p_64.f7 >= 22); ++p_64.f7)
                {
                    short l_189 = 0x71E6L;
                    l_189 |= p_64.f0.f0;
                    (*l_173) ^= 0x2E99C716L;
                }
                (*l_173) |= p_64.f5;
                if ((*l_75))
                {
                    const unsigned char *l_215 = (void*)0;
                    const unsigned char **l_214 = &l_215;
                    const unsigned char ***l_216 = &l_214;
                    for (g_131.f6 = (-18); (g_131.f6 != 13); g_131.f6 = safe_add_func_uint8_t_u_u(g_131.f6, 8))
                    {
                        (*l_74) = func_16(l_173);

                        ;
                    }

                    ;
lbl_217:
                    if (((safe_mod_func_int16_t_s_s(g_131.f1, p_64.f0.f2)) <= (*l_173)))
                    {
                        unsigned *l_195 = &g_114;
                        short *l_198 = (void*)0;
                        short *l_199 = &l_194;
                        p_64.f1 |= (4294967295UL != ((*l_195) &= l_194));
                        (*l_173) = p_64.f1;
                        l_209 |= (0x3942L <= (((safe_rshift_func_int16_t_s_s(((*l_199) = 0x45D7L), p_65)) >= p_64.f0.f0) & (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((l_204 && g_131.f5), 14)), ((safe_rshift_func_uint8_t_u_u((~l_207), (l_208 != (void*)0))) <= p_64.f4)))));
                    }
                    else
                    {
                        unsigned char l_212 = 0x08L;
                        int *l_213 = &g_131.f1;
                        (*g_104) = (*g_104);
                        l_210 = &g_131;

                        ;
                        l_212 ^= p_64.f7;
                        (*l_74) = func_16(((*l_74) = l_213));

                        ;
                    }
                    (*l_216) = l_214;
                    if (g_28)
                        goto lbl_217;
                }
                else
                {
                    (*l_108) = l_218;
                }

                ;
                ;
            }
            else
            {
                short l_228 = 0xA517L;
                unsigned *l_236 = &g_211.f4;
                char *l_249 = &g_101.f3;
                int l_250 = 3L;
                for (g_131.f1 = 0; (g_131.f1 < (-2)); g_131.f1 = safe_sub_func_uint8_t_u_u(g_131.f1, 9))
                {
                    unsigned char l_230 = 253UL;
                    for (l_194 = 0; (l_194 > (-10)); l_194 = safe_sub_func_uint8_t_u_u(l_194, 1))
                    {
                        unsigned short l_223 = 0UL;
                        char *l_229 = &g_211.f0.f3;
                        (*l_173) = (((g_114 > ((l_223 == (0x30L < ((p_64.f0.f2 == (safe_rshift_func_uint8_t_u_s((4294967286UL && (*l_173)), ((*l_229) = (~((!((0UL <= ((*g_72) = (safe_mod_func_int8_t_s_s(((*p_66) | ((l_223 == 1L) >= g_211.f1)), g_131.f0.f2)))) ^ p_64.f7)) ^ l_228)))))) & l_230))) != (*l_75))) | (-10L)) < l_231);
                        g_83 = l_228;
                        (*l_173) = (-1L);
                        (*l_74) = (*l_74);
                    }
                }
                if ((safe_add_func_uint32_t_u_u(g_211.f0.f0, ((*l_173) | ((safe_rshift_func_uint16_t_u_u((((*l_236) = g_131.f0.f2) <= (*l_173)), 13)) ^ ((*p_66) | (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((l_250 = (safe_add_func_int8_t_s_s(9L, ((*l_249) = (safe_rshift_func_int16_t_s_u((g_131.f2 > p_64.f0.f2), g_131.f5)))))), (*l_173))) | (*p_66)), p_64.f7)), p_64.f0.f0)), (*l_173)))))))))
                {
                    struct S0 ***l_251 = &l_108;
                    (*l_111) = (*l_108);
                    (*l_251) = &g_105;
                    (*l_74) = func_16(l_173);

                    ;
                }
                else
                {
                    const int *l_254 = &l_250;
                    struct S1 ***l_266 = &g_264;
                    if ((safe_mod_func_uint16_t_u_u(((&g_104 != (void*)0) <= p_64.f6), (p_64.f5 ^ (~p_64.f3)))))
                    {
                        (*l_173) = (*l_76);
                    }
                    else
                    {
                        const int *l_255 = (void*)0;
                        return l_255;


                    }
                    for (g_101.f3 = (-4); (g_101.f3 > 15); ++g_101.f3)
                    {
                        unsigned l_260 = 1UL;
                        int l_261 = (-5L);
                        (*l_173) = (l_261 = (((0xAB51L <= ((((*g_72) < ((*l_254) || (l_260 != (((void*)0 == g_72) | g_97)))) ^ (((void*)0 != &g_104) > 0x1F6864BBL)) > 0x6CB0L)) > 0x8064L) == 0x8568L));
                    }
                    (*l_173) |= p_64.f4;
                    l_267 = (l_174 = (p_64.f1 = ((*p_66) & (safe_add_func_uint32_t_u_u(g_95, ((((*l_75) == (&l_210 == ((*l_266) = g_264))) <= ((void*)0 != &g_28)) | (&l_254 == l_178)))))));
                }

                ;
                p_64.f1 &= p_64.f4;
            }

            ;
            ;
            (*l_74) = (*l_74);
            (*l_173) ^= (-9L);
        }
        else
        {
            int ***l_270 = &l_74;
            short *l_280 = &l_209;
            for (l_231 = 0; (l_231 > 6); l_231++)
            {
                int ****l_271 = &l_270;
                (*l_173) &= (((*l_271) = l_270) != (void*)0);
            }
            (*l_173) = (((safe_sub_func_uint32_t_u_u(p_64.f7, (g_6 & ((*g_264) != &p_64)))) == (*l_75)) ^ (safe_add_func_int32_t_s_s(((&p_64 == (void*)0) >= l_276), (safe_div_func_int16_t_s_s(((*l_280) = (safe_unary_minus_func_uint32_t_u(((*l_76) | 0x2AL)))), 65535UL)))));
        }

        ;
        ;
        (*l_173) = 2L;
    }


    ;
    (*l_281) = (*l_76);
    if ((&g_72 == ((*l_282) = &p_66)))
    {
        char *l_286 = &g_211.f0.f3;
        unsigned short *l_293 = &l_276;
        int l_300 = 0x958FA761L;
        short l_301 = 0x9B7EL;
        (*l_281) = (safe_rshift_func_int8_t_s_u(((*l_286) = p_64.f0.f0), 3));
        (*l_281) = p_64.f5;
        (*l_281) = ((g_101.f3 || (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(0x1015A7E6L, p_64.f7)), ((*l_293) = 0x7926L))), g_131.f3))) | (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(p_64.f6, (safe_rshift_func_int16_t_s_u(g_2, (~p_64.f2))))), (((g_211.f4 ^ 0xD7A0BE0EL) || l_300) > l_301))));
    }
    else
    {
        unsigned short *l_304 = &l_276;
        unsigned short *l_305 = &g_306;
        int *l_307 = &g_211.f1;
        (*l_307) &= ((*l_281) = (safe_rshift_func_uint16_t_u_s(p_64.f2, (0x8250L && ((*l_305) = ((*l_304) = p_64.f1))))));
        p_64.f1 = (*l_307);
        (*l_282) = &g_72;

        ;
        p_64.f1 |= g_211.f1;
    }

    ;
    return &g_6;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_101.f0, "g_101.f0", print_hash_value);
    transparent_crc(g_101.f1, "g_101.f1", print_hash_value);
    transparent_crc(g_101.f2, "g_101.f2", print_hash_value);
    transparent_crc(g_101.f3, "g_101.f3", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_131.f0.f0, "g_131.f0.f0", print_hash_value);
    transparent_crc(g_131.f0.f1, "g_131.f0.f1", print_hash_value);
    transparent_crc(g_131.f0.f2, "g_131.f0.f2", print_hash_value);
    transparent_crc(g_131.f0.f3, "g_131.f0.f3", print_hash_value);
    transparent_crc(g_131.f1, "g_131.f1", print_hash_value);
    transparent_crc(g_131.f2, "g_131.f2", print_hash_value);
    transparent_crc(g_131.f3, "g_131.f3", print_hash_value);
    transparent_crc(g_131.f4, "g_131.f4", print_hash_value);
    transparent_crc(g_131.f5, "g_131.f5", print_hash_value);
    transparent_crc(g_131.f6, "g_131.f6", print_hash_value);
    transparent_crc(g_131.f7, "g_131.f7", print_hash_value);
    transparent_crc(g_211.f0.f0, "g_211.f0.f0", print_hash_value);
    transparent_crc(g_211.f0.f1, "g_211.f0.f1", print_hash_value);
    transparent_crc(g_211.f0.f2, "g_211.f0.f2", print_hash_value);
    transparent_crc(g_211.f0.f3, "g_211.f0.f3", print_hash_value);
    transparent_crc(g_211.f1, "g_211.f1", print_hash_value);
    transparent_crc(g_211.f2, "g_211.f2", print_hash_value);
    transparent_crc(g_211.f3, "g_211.f3", print_hash_value);
    transparent_crc(g_211.f4, "g_211.f4", print_hash_value);
    transparent_crc(g_211.f5, "g_211.f5", print_hash_value);
    transparent_crc(g_211.f6, "g_211.f6", print_hash_value);
    transparent_crc(g_211.f7, "g_211.f7", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    transparent_crc(g_457, "g_457", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
