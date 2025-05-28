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
   unsigned char f0;
   volatile int f1;
   unsigned char f2;
   unsigned f3;
};


static unsigned g_2 = 3UL;
static int g_4 = 1L;
static struct S0 g_51 = {255UL,0L,6UL,0x6D20A2E7L};
static struct S0 g_54 = {3UL,0x260E2EFEL,0xE6L,4294967295UL};
static int g_66 = (-1L);
static struct S0 g_138 = {2UL,0x60A15E1FL,0x3DL,0UL};
static struct S0 *g_147 = &g_138;
static struct S0 g_180 = {0xE2L,0xEBAD2A39L,255UL,8UL};
static struct S0 g_181 = {255UL,1L,0x11L,5UL};
static int *g_227 = &g_66;
static struct S0 g_265 = {5UL,0x2BCF94D5L,0x37L,0x5B357F9CL};
static volatile unsigned g_308 = 4294967293UL;
static struct S0 g_319 = {0UL,-1L,0x56L,0x1D0C6E34L};
static volatile struct S0 g_345 = {0xB7L,0xB3398E59L,255UL,0x6BD9598FL};
static struct S0 g_374 = {9UL,0x0777FDD7L,250UL,4294967287UL};
static struct S0 g_409 = {6UL,0x0531CE29L,0x4CL,0xFD4654BAL};
static struct S0 g_416 = {253UL,0x89A40DE4L,0x44L,4294967287UL};
static struct S0 g_419 = {0x4EL,0L,1UL,0x556806F2L};
static struct S0 g_424 = {0UL,1L,0x7BL,4294967287UL};
static unsigned short g_439 = 7UL;
static volatile int g_468 = 0x6176D4EBL;
static volatile int *g_467 = &g_468;
static volatile int **g_466 = &g_467;
static volatile int ***g_465 = &g_466;
static struct S0 g_496 = {0x06L,0xAD40BC08L,251UL,4294967287UL};
static volatile unsigned g_516 = 4294967289UL;
static int *g_525 = (void*)0;
static volatile struct S0 g_528 = {252UL,-1L,0xB9L,8UL};
static int *g_551 = (void*)0;
static volatile struct S0 g_622 = {2UL,2L,0UL,6UL};
static int *g_624 = &g_66;
static struct S0 g_637 = {0UL,0x688197EBL,1UL,0xE6D3A431L};
static unsigned short g_656 = 0xE77AL;
static int g_667 = 1L;
static volatile struct S0 g_670 = {0x85L,-2L,9UL,0x783A7620L};



static int func_1(void);
static int * func_5(unsigned p_6, unsigned char p_7, unsigned short p_8, unsigned p_9, short p_10);
static unsigned char func_11(unsigned short p_12);
static int * func_13(int p_14, int p_15, int * p_16);
static int * func_18(int * p_19, int * p_20, unsigned short p_21, int p_22, int * p_23);
static int * func_24(int p_25, short p_26, int * p_27, int * p_28);
static int * func_29(int * p_30, unsigned short p_31, int * p_32, int * p_33);
static unsigned char func_34(short p_35, unsigned char p_36, int * p_37, int * p_38);
static int * func_40(int * p_41, unsigned char p_42);
static unsigned short func_45(unsigned short p_46, int p_47, unsigned p_48, int p_49, int * p_50);
static int func_1(void)
{
    int *l_3 = &g_4;
    struct S0 **l_643 = (void*)0;
    char l_644 = 0xE3L;
    int **l_672 = &g_551;
    (*l_3) = g_2;
    (*l_672) = func_5((*l_3), func_11(g_2), ((((~(safe_add_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((l_643 == (((g_319.f3 & 1UL) ^ l_644) , (g_496.f2 , l_643))))), (*l_3)))) | (*l_3)) , g_409.f2) && g_265.f0), (*l_3), (*l_3));
    return g_319.f3;
}







static int * func_5(unsigned p_6, unsigned char p_7, unsigned short p_8, unsigned p_9, short p_10)
{
    int *l_645 = &g_4;
    int *l_646 = &g_66;
    struct S0 *l_649 = (void*)0;
    int **l_664 = &g_525;
    int ***l_663 = &l_664;
    int *l_669 = &g_4;
    (*g_147) = (*g_147);
    if (p_10)
    {
        (*l_664) = (**l_663);
        for (g_181.f2 = 0; (g_181.f2 < 34); g_181.f2++)
        {
            int *l_668 = &g_4;
            (*g_466) = (g_667 , (*g_466));
            return l_668;
        }
        (**g_465) = (**g_465);
    }
    else
    {
        unsigned short l_671 = 6UL;
        (*l_664) = l_669;
        (**l_663) = func_40((g_670 , &g_667), l_671);
    }
    return &g_66;
}







static unsigned char func_11(unsigned short p_12)
{
    int l_17 = 0xA1C17C77L;
    int *l_475 = &g_4;
    int **l_636 = &g_227;
    struct S0 *l_638 = &g_138;
    struct S0 **l_639 = &g_147;
    (*l_636) = func_13((&g_4 == ((g_2 >= l_17) , func_18(&l_17, func_24(g_2, l_17, func_29(&g_4, l_17, &l_17, &g_4), &l_17), p_12, g_319.f2, l_475))), g_180.f0, l_475);
    (*l_636) = (p_12 , (*l_636));
    (*l_638) = ((g_419.f1 || (g_54.f0 >= (*l_475))) , g_637);
    (*l_639) = l_638;
    return p_12;
}







static int * func_13(int p_14, int p_15, int * p_16)
{
    int **l_628 = &g_525;
    int ***l_627 = &l_628;
    int l_635 = (-1L);
    (**g_466) = ((p_15 , &g_466) != l_627);
    (*l_628) = (*l_628);
    return (*l_628);
}







static int * func_18(int * p_19, int * p_20, unsigned short p_21, int p_22, int * p_23)
{
    unsigned l_476 = 0x22CD02E7L;
    int *l_491 = &g_4;
    int *l_527 = &g_4;
    volatile int *l_538 = &g_468;
    struct S0 **l_549 = &g_147;
    if (func_34(l_476, p_21, &p_22, &g_66))
    {
        int l_479 = (-5L);
        int *l_492 = (void*)0;
        char l_493 = 4L;
        unsigned l_515 = 0x7C43D732L;
        volatile struct S0 *l_529 = &g_528;
        unsigned char l_605 = 255UL;
        if ((safe_sub_func_int8_t_s_s(g_319.f2, (p_21 , l_479))))
        {
            int **l_484 = &g_227;
            (*l_484) = func_40((p_22 , (g_419.f0 , func_24(l_479, (((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((p_21 , g_424.f0), p_21)), (((g_66 & g_54.f1) , (((g_416.f3 & p_22) | 0xD3CEL) && l_476)) , p_22))) & g_419.f2) == l_476), &g_66, &g_66))), p_21);
            if (((safe_sub_func_uint32_t_u_u((g_308 > func_34(p_22, (2L && (safe_rshift_func_uint16_t_u_u(((p_22 == (7L || ((&g_147 != &g_147) || (l_479 ^ (safe_sub_func_int32_t_s_s((func_34(l_479, p_22, l_491, &g_66) | g_319.f3), l_479)))))) != p_21), 4))), &g_4, l_492)), l_493)) , (*p_20)))
            {
                return &g_66;
            }
            else
            {
                char l_526 = 1L;
                for (g_416.f0 = 19; (g_416.f0 > 59); g_416.f0++)
                {
                    struct S0 *l_497 = &g_424;
                    int l_506 = 0x81A0153FL;
                    (*l_497) = g_496;
                    for (g_374.f0 = 0; (g_374.f0 <= 5); ++g_374.f0)
                    {
                        (*l_484) = &p_22;
                        (**g_465) = (**g_465);
                        if (l_506)
                            continue;
                        (***g_465) = (safe_sub_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(func_34(g_424.f0, p_21, ((((p_22 > p_21) & (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_515, g_419.f3)), (((**l_484) ^ p_21) || (func_34(g_345.f2, g_424.f3, &g_4, &g_66) , 0xECDBL))))) , g_516) , &g_4), (*l_484)), l_506)) , 0L), (*g_227)));
                    }
                    (*p_19) = func_34(func_45((g_424.f1 , (p_21 < (((g_419.f0 , (g_51.f2 > ((((safe_lshift_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(func_34(g_319.f2, ((p_22 > g_54.f3) != (g_4 >= ((safe_rshift_func_uint8_t_u_s((4294967286UL < g_54.f2), p_22)) , g_319.f2))), (*l_484), g_525), 1)), (*p_20))) || 0x45E6L) == (*l_491)), 13)) & (***g_465)) , (void*)0) != g_147))) && p_22) & g_265.f3))), (*g_227), g_180.f3, (*g_227), &l_506), l_526, &g_4, &g_4);
                }
            }
            (*l_484) = l_492;
            (*g_467) = (*p_19);
        }
        else
        {
            return l_527;
        }
        (*l_529) = g_528;
        for (g_51.f0 = 0; (g_51.f0 < 27); ++g_51.f0)
        {
            int *l_534 = &g_66;
            int **l_535 = &l_491;
            for (g_54.f0 = 13; (g_54.f0 == 47); g_54.f0 = safe_add_func_int32_t_s_s(g_54.f0, 1))
            {
                return l_527;
            }
            (*l_535) = l_534;
            if (((safe_lshift_func_uint16_t_u_s((((*p_23) , &g_147) != &g_147), 14)) , 0xFD10F9ADL))
            {
                l_538 = (**g_465);
            }
            else
            {
                struct S0 **l_550 = (void*)0;
                (*p_19) = func_34((func_45((4L < (safe_div_func_int32_t_s_s((*p_23), ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_493, 4294967291UL)), 14)) ^ ((*l_538) < 252UL))))), ((safe_sub_func_int32_t_s_s(((**l_535) > 0xEAB69C54L), ((l_549 != l_550) == 0xA794L))) , (-3L)), p_22, (**l_535), g_551) && g_496.f1), g_180.f3, &g_4, &g_4);
            }
            (*l_529) = (*l_529);
        }
        if ((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((+(safe_rshift_func_uint16_t_u_s(1UL, (((+((safe_sub_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s((*p_23), ((safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((((p_22 , 0x190229A3L) | ((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((0L & ((safe_add_func_uint16_t_u_u(g_138.f0, (safe_div_func_int16_t_s_s(g_409.f3, p_22)))) ^ (safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((p_21 > 0UL), (*l_491))), 4)))) & g_265.f0) > 0x5CL), 0x554A24F0L)), p_22)) , l_515)) >= p_21) || p_21) != 0x90L), 1L)), p_21)), 4294967289UL)) >= (-1L)), (*l_491))) | 0x1BL), 8UL)) && p_22))) , &g_345) != (*l_549)) < (**g_466)), 0x061AL)) ^ g_180.f3)) > (-1L)) < 0x9439L)))) >= (*l_491)), 1L)), p_21)), 1)))
        {
            int l_586 = 0L;
            struct S0 **l_593 = &g_147;
            int **l_596 = &g_551;
            (*l_529) = (*l_529);
            if (l_586)
            {
                int **l_587 = &l_492;
                struct S0 **l_592 = &g_147;
                (*l_587) = &p_22;
                for (g_66 = 0; (g_66 > (-23)); g_66 = safe_sub_func_int32_t_s_s(g_66, 7))
                {
                    int *l_599 = &g_4;
                    for (l_476 = (-21); (l_476 < 32); l_476 = safe_add_func_int32_t_s_s(l_476, 5))
                    {
                        (*l_587) = &p_22;
                        if ((*p_23))
                            continue;
                    }
                    (**g_466) = (l_592 != l_593);
                    for (l_515 = 18; (l_515 >= 21); l_515 = safe_add_func_uint32_t_u_u(l_515, 1))
                    {
                        int ***l_597 = (void*)0;
                        int ***l_598 = &l_587;
                        (*l_598) = l_596;
                        (**l_598) = (*l_587);
                        p_23 = l_599;
                    }
                }
                (*l_538) = (*p_20);
            }
            else
            {
                int *l_600 = &g_4;
                unsigned l_614 = 0x449189E6L;
                l_491 = l_600;
                (**g_466) = ((safe_sub_func_uint32_t_u_u(g_54.f2, 0xC2D70EF0L)) & (safe_add_func_int8_t_s_s(l_605, (((*g_465) != (void*)0) < ((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(0L, func_34((*l_538), ((safe_add_func_uint8_t_u_u(func_34((*l_527), (~p_22), &g_66, &g_66), p_22)) , 4UL), &g_4, l_491))), (*p_20))), l_614)) > 4294967295UL)))));
                for (g_54.f0 = 10; (g_54.f0 >= 14); g_54.f0++)
                {
                    (*l_596) = &p_22;
                    return &g_66;
                }
                for (g_409.f3 = 0; (g_409.f3 >= 31); g_409.f3 = safe_add_func_uint8_t_u_u(g_409.f3, 1))
                {
                    unsigned short l_623 = 65528UL;
                    for (g_319.f2 = (-5); (g_319.f2 < 28); g_319.f2 = safe_add_func_uint16_t_u_u(g_319.f2, 4))
                    {
                        struct S0 **l_621 = (void*)0;
                        (**g_466) = (*p_19);
                        (*p_19) = ((l_621 != (void*)0) && g_180.f2);
                        (*l_529) = g_622;
                    }
                    (*l_596) = (*l_596);
                }
            }
            (*p_19) = (*p_20);
        }
        else
        {
            (*g_467) = (*p_20);
            for (p_21 = 0; (p_21 == 40); p_21 = safe_add_func_uint16_t_u_u(p_21, 2))
            {
                return &g_66;
            }
        }
    }
    else
    {
        (*l_538) = (*g_624);
    }
    return l_527;
}







static int * func_24(int p_25, short p_26, int * p_27, int * p_28)
{
    int **l_369 = &g_227;
    int *l_452 = &g_66;
    struct S0 **l_455 = &g_147;
    unsigned char l_460 = 0x16L;
    int *l_469 = &g_66;
    (*l_369) = &g_66;
    for (g_138.f3 = 0; (g_138.f3 <= 1); ++g_138.f3)
    {
        unsigned short l_372 = 0xB463L;
        struct S0 *l_373 = &g_319;
        int ***l_429 = &l_369;
        short l_449 = (-2L);
        short l_453 = 0x2A36L;
        int **l_454 = &l_452;
    }
    (*p_28) = ((((void*)0 == l_455) & 0xB19CL) && (safe_div_func_int16_t_s_s(((**l_369) <= (safe_div_func_int32_t_s_s(func_34((**l_369), (g_424.f1 == p_25), &p_25, &g_4), l_460))), (*l_452))));
    if ((safe_sub_func_int8_t_s_s(func_45((**l_369), (*p_28), ((((*l_452) >= ((((void*)0 == (*l_455)) , func_34((g_265.f2 != 2L), func_34(((((void*)0 != g_465) , 0L) ^ p_25), p_26, &g_66, &g_4), &g_4, l_469)) > 0x0AFCL)) , &p_28) == (*g_465)), (*p_27), (*l_369)), 0x45L)))
    {
        short l_470 = 0x8A4CL;
        int *l_471 = (void*)0;
        (*l_469) = l_470;
        (*l_369) = l_471;
        (*l_469) = (+(*p_28));
        for (g_409.f0 = (-26); (g_409.f0 < 54); ++g_409.f0)
        {
            int *l_474 = &g_4;
            return l_474;
        }
    }
    else
    {
        (**g_465) = (*g_466);
    }
    return &g_66;
}







static int * func_29(int * p_30, unsigned short p_31, int * p_32, int * p_33)
{
    unsigned char l_39 = 0x2AL;
    int l_69 = 0xE901672CL;
    unsigned char l_74 = 0x6CL;
    int *l_75 = &l_69;
    struct S0 *l_76 = (void*)0;
    short l_100 = 5L;
    unsigned l_179 = 0x8C0A6948L;
    int **l_209 = &l_75;
    int l_230 = 1L;
    unsigned short l_231 = 0x0DA1L;
    struct S0 **l_329 = &g_147;
    int l_366 = 0L;
    char l_367 = 0xFCL;
    int *l_368 = &l_69;
    l_69 = ((func_34(l_39, p_31, func_40(p_33, (safe_mod_func_uint8_t_u_u((func_45(g_4, (*p_32), l_39, (*p_32), p_33) , 0x07L), 0x29L))), p_32) , &g_4) != (void*)0);
    if ((((p_31 , func_40(&l_69, ((func_45(((safe_sub_func_uint16_t_u_u((!(l_39 , 65535UL)), ((((+((func_34((g_4 < p_31), (((safe_add_func_uint32_t_u_u(p_31, (l_74 , g_54.f0))) || 0xC60AL) , l_74), p_32, l_75) || p_31) , 5L)) < 0xCBL) , &l_69) != (void*)0))) >= 4294967288UL), g_51.f2, p_31, g_54.f0, &l_69) , g_51.f2) , g_51.f1))) != p_32) != g_2))
    {
        int l_79 = 0xDCCD505EL;
        struct S0 *l_86 = &g_54;
        int l_101 = 0x16972AE3L;
        unsigned char l_108 = 0xB3L;
        int *l_148 = &g_4;
        char l_151 = 0x46L;
        int *l_154 = (void*)0;
        unsigned short l_225 = 0xCC49L;
        short l_247 = 0x5DCEL;
        short l_248 = 0L;
        unsigned l_283 = 18446744073709551615UL;
        struct S0 **l_313 = &l_76;
        if ((((p_31 , ((l_76 != (void*)0) , (safe_add_func_int8_t_s_s(p_31, (&l_69 == p_30))))) , ((((l_79 | (*p_32)) , (void*)0) != (void*)0) == 65527UL)) <= 0UL))
        {
            int l_93 = 0x5A1AA069L;
            int *l_117 = &g_66;
            if ((((((p_31 != (func_45((safe_mod_func_uint32_t_u_u((((*l_75) , ((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((*p_33), ((((l_86 == ((g_54.f2 == func_34(((*l_86) , ((((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_93, (safe_add_func_uint32_t_u_u((func_34((g_54.f3 | (safe_mod_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(((g_51 , p_31) & 0xD87CL), 1UL)) && l_100), g_4))), p_31, &g_66, p_30) | l_93), 0x78304AF2L)))), g_54.f2)), 7)) , 0x19C8BA4AL) <= (*p_32)) , 0x2474L)), g_51.f0, p_33, p_30)) , &g_54)) & (-9L)) && 0xC8EF010EL) && (*l_75)))), l_79)) && 0xC135235EL)) & g_54.f0), l_101)), g_54.f3, p_31, l_93, &l_69) || 0UL)) || g_51.f2) , &g_4) == (void*)0) == 4294967292UL))
            {
                char l_109 = 0L;
                (*l_75) = (safe_sub_func_uint8_t_u_u(1UL, ((safe_mod_func_int8_t_s_s(func_34(((safe_add_func_int8_t_s_s(0L, (func_34((+(p_31 | g_54.f3)), p_31, func_40(p_33, (g_54 , (l_108 > ((g_51 , 9UL) < (*l_75))))), p_33) == l_109))) ^ (-5L)), p_31, p_33, &g_4), p_31)) , 0xF2L)));
                return p_33;
            }
            else
            {
                int *l_116 = &l_79;
                struct S0 *l_146 = &g_51;
                (*l_75) = g_54.f0;
                if (((((-10L) & l_108) && p_31) | (p_31 ^ (0x68L >= ((safe_mod_func_uint32_t_u_u(((((void*)0 != &g_66) , 0x453CL) > (safe_rshift_func_uint16_t_u_s(((l_93 ^ 0x6A653BE2L) & g_54.f1), 6))), g_4)) | (*l_75))))))
                {
                    int *l_139 = &l_79;
                    struct S0 *l_142 = (void*)0;
                    struct S0 **l_143 = &l_86;
                    for (g_54.f3 = 8; (g_54.f3 == 47); g_54.f3++)
                    {
                        int **l_141 = &l_75;
                        l_117 = func_40(l_116, g_51.f0);
                        (*l_117) = (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(g_51.f3, (((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(p_31, (safe_add_func_uint16_t_u_u((&g_4 == ((safe_rshift_func_uint16_t_u_s((((safe_sub_func_int32_t_s_s(g_2, ((*l_117) == (safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((g_138 , func_34((l_139 != (((*l_139) && (safe_unary_minus_func_int32_t_s(((*l_139) , g_51.f1)))) , &g_66)), g_51.f0, &g_66, l_116)), 0x3EC18018L)), g_51.f2))))) != g_2) < 0x711E6C6AL), 13)) , (void*)0)), g_66)))) > g_54.f3), g_2)), p_31)) == (*l_139)) >= g_138.f2))), 0x4C27L));
                        if ((*l_116))
                            break;
                        (*l_141) = p_32;
                    }
                    (*l_143) = l_142;
                    return p_30;
                }
                else
                {
                    int *l_150 = &g_66;
                    int **l_152 = &l_75;
                    struct S0 **l_153 = &l_76;
                    for (l_69 = 9; (l_69 <= (-5)); l_69 = safe_sub_func_uint16_t_u_u(l_69, 2))
                    {
                        int **l_149 = (void*)0;
                        g_147 = l_146;
                        l_117 = l_148;
                        if ((*p_30))
                            break;
                    }
                    (*l_152) = func_40(l_150, l_151);
                    (*l_153) = l_146;
                }
                (*l_75) = (g_51.f0 || g_51.f2);
            }
            if ((*p_30))
            {
                unsigned l_155 = 5UL;
                int l_170 = 2L;
                l_170 = func_34(p_31, (*l_117), func_40(func_40(l_154, (l_155 > (safe_div_func_int16_t_s_s((+(safe_mod_func_uint32_t_u_u(p_31, (safe_rshift_func_int8_t_s_s(p_31, 0))))), ((((safe_div_func_uint16_t_u_u((((*g_147) , (safe_mod_func_int32_t_s_s(func_34(((safe_lshift_func_int16_t_s_u(((p_31 ^ (safe_add_func_uint16_t_u_u(((*l_76) , p_31), 1UL))) , 1L), p_31)) > 0x34082CCCL), g_138.f0, &g_66, &g_4), g_54.f0))) <= 255UL), 0xC3FAL)) ^ 4294967292UL) , 0UL) || 0x78830C37L))))), g_51.f2), p_32);
                (*l_75) = ((func_45((*l_75), g_2, func_34(((p_31 != g_54.f3) <= (((((safe_mod_func_int8_t_s_s(p_31, ((safe_rshift_func_uint16_t_u_s((((func_34(g_51.f2, (safe_lshift_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((l_179 != (((g_138.f3 < func_34(((((l_86 == (void*)0) , (*l_148)) , &g_66) != (void*)0), p_31, &l_79, &g_66)) | 1UL) >= p_31)), 4294967295UL)) , 0UL) || p_31), g_54.f0)), &g_4, &g_66) < 65532UL) <= g_54.f0) , g_138.f1), l_155)) && 0x568EL))) != 3L) , (-6L)) , p_31) != g_51.f0)), (*l_117), &g_66, &l_93), (*l_148), &l_93) > 1L) && p_31);
            }
            else
            {
                g_181 = g_180;
                return p_32;
            }
        }
        else
        {
            (*l_75) = (*l_75);
            (*l_86) = (*g_147);
            (*l_75) = (*l_148);
            for (l_101 = (-15); (l_101 != (-23)); --l_101)
            {
                unsigned l_186 = 18446744073709551615UL;
                for (g_138.f3 = 0; (g_138.f3 != 60); g_138.f3 = safe_add_func_int32_t_s_s(g_138.f3, 2))
                {
                    int **l_191 = &l_148;
                    (*l_191) = func_40(func_40(func_40(&l_79, p_31), l_186), (safe_sub_func_uint8_t_u_u(g_138.f3, (safe_rshift_func_int16_t_s_u(((g_54.f2 < func_34(g_138.f2, p_31, p_30, &g_66)) < 65535UL), g_180.f2)))));
                }
                if (g_66)
                    break;
                (*l_86) = (*l_86);
            }
        }
        if ((safe_add_func_uint8_t_u_u((g_138.f0 , (*l_75)), (safe_add_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u(func_34(g_54.f3, ((*l_75) > (*p_30)), &l_79, &l_69), 0)) , (g_181.f2 ^ 4UL)), (*l_75))) & (*l_148)) , p_31), 1UL)))))
        {
            unsigned short l_208 = 3UL;
            int **l_210 = (void*)0;
            int **l_211 = &l_154;
            l_209 = (((((safe_add_func_int8_t_s_s(g_54.f0, (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(((-6L) && (safe_sub_func_uint8_t_u_u((g_54.f3 , ((p_31 <= (p_32 != p_30)) ^ (*l_148))), ((*l_86) , ((*l_86) , p_31))))), 4)) == (*p_33)), (*p_32))))) , g_54.f1) <= p_31) != l_208) , (void*)0);
            (*l_211) = func_40(func_40(&g_66, g_54.f0), p_31);
            for (g_54.f2 = 0; (g_54.f2 != 17); g_54.f2 = safe_add_func_uint16_t_u_u(g_54.f2, 2))
            {
                unsigned l_220 = 1UL;
                struct S0 **l_226 = &l_76;
                if (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(0xCDL, 4)), (func_34((func_34(p_31, (safe_lshift_func_uint8_t_u_u((*l_154), 3)), ((g_54.f0 | ((*g_147) , g_180.f2)) , func_40((*l_211), ((l_76 != &g_181) >= l_220))), p_33) < (*p_33)), l_220, p_30, &g_4) < p_31))) == l_220))
                {
                    if (g_138.f3)
                        break;
                }
                else
                {
                    return p_33;
                }
                if ((safe_rshift_func_uint16_t_u_u(65535UL, 5)))
                {
                    int **l_223 = (void*)0;
                    if (((**l_211) , ((*p_30) & ((*l_148) , (g_4 == p_31)))))
                    {
                        (*g_147) = (*g_147);
                    }
                    else
                    {
                        int ***l_224 = &l_211;
                        (*l_224) = l_223;
                        p_32 = func_40(func_40(&g_4, l_225), p_31);
                        g_227 = func_40(func_40(p_30, p_31), ((p_31 , l_226) == (void*)0));
                    }
                    return &g_66;
                }
                else
                {
                    (*l_226) = (void*)0;
                    (*l_211) = p_30;
                }
                (*l_75) = func_34(((func_34((0x51L && 252UL), ((0x99L | ((*g_227) && (((((safe_rshift_func_int16_t_s_u(((*l_148) , ((g_180.f0 , (g_180.f0 <= 5UL)) <= (p_31 > 6L))), 0)) , l_230) != g_180.f1) || g_180.f0) || (*l_75)))) , l_231), &g_66, p_30) , g_54.f2) , g_181.f0), p_31, p_30, &l_79);
            }
        }
        else
        {
            (**l_209) = (*p_33);
            for (g_54.f3 = 0; (g_54.f3 >= 16); g_54.f3++)
            {
                return p_32;
            }
            (*l_209) = p_33;
            (*l_209) = &l_79;
        }
        (*g_227) = (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s((*l_148), func_34(func_45((p_31 , p_31), (0x6AL >= (-1L)), (((safe_sub_func_uint8_t_u_u((((*g_227) == ((((((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((safe_sub_func_int32_t_s_s(((g_180.f2 >= (safe_mod_func_int8_t_s_s(p_31, (*l_75)))) , (*l_75)), (*l_75))))), (-6L))) >= (*p_33)) != 1L) , &l_76) == (void*)0) < l_247)) & 4294967289UL), p_31)) > g_181.f3) == (*p_32)), (*l_75), &g_66), l_248, p_30, &l_79))) < p_31), 4));
        if ((safe_sub_func_int16_t_s_s(((0x2489L >= (func_45(g_66, (g_51.f3 == func_34((*l_148), (*l_148), func_40(&g_66, g_181.f2), ((0x2B0FL != g_180.f2) , (void*)0))), (*l_75), (*l_75), &g_4) , g_51.f0)) , 0x1C2EL), g_181.f2)))
        {
            struct S0 **l_251 = &g_147;
            (*l_251) = (void*)0;
        }
        else
        {
            char l_256 = 0L;
            int l_298 = 0x510BBF20L;
            struct S0 *l_318 = &g_319;
            if ((((((((p_31 , 0xAE65L) | (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u(l_256, 5)) , (*l_148)), 2))) , &g_147) == &l_76) ^ (l_256 & ((safe_lshift_func_uint8_t_u_u(func_45(((0xFCL || (safe_rshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(l_256, 4294967286UL)) , 0xBDBDL), g_138.f1))) || g_54.f2), (*g_227), p_31, (*g_227), p_32), (*l_148))) < p_31))) <= 0x2ECE790BL) >= g_138.f3))
            {
                unsigned char l_274 = 0x44L;
                for (g_51.f0 = 0; (g_51.f0 < 58); ++g_51.f0)
                {
                    unsigned short l_280 = 1UL;
                    int *l_296 = &l_79;
                    int *l_297 = &g_66;
                    (*l_86) = g_265;
                    if (((safe_sub_func_int16_t_s_s(p_31, g_51.f3)) < ((safe_div_func_int8_t_s_s((g_51.f1 || 0x03C2C657L), ((7UL > (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((p_31 , p_31), 10)), 3))) , g_51.f2))) , l_274)))
                    {
                        int *l_279 = &l_69;
                        (*l_75) = (*l_148);
                        if ((*p_33))
                            break;
                        l_279 = (((&g_4 != p_32) || p_31) , func_40(p_33, (safe_rshift_func_uint8_t_u_u((func_34(g_265.f3, (g_138.f0 | (safe_lshift_func_int16_t_s_s(g_181.f0, 13))), p_33, &l_79) & (*g_227)), p_31))));
                        (*g_227) = ((((*l_75) & ((*l_279) , (l_280 , ((safe_mod_func_int32_t_s_s(0x4695D468L, (*p_32))) | l_283)))) != (&g_227 == &l_279)) , (safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((*p_32), (*g_227))) , l_274), g_265.f0)) != 0x57L), g_265.f2)), (*l_279))));
                    }
                    else
                    {
                        if ((*g_227))
                            break;
                        l_154 = func_40(p_33, l_256);
                        l_298 = (l_280 || ((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((func_34((*l_148), (*l_75), l_296, ((0x88L & p_31) , &g_66)) >= (func_34((func_34(p_31, p_31, l_297, &g_4) <= l_256), p_31, &g_4, p_33) <= 0x35B3B32CL)) && g_51.f0), 2)), p_31)) & g_180.f3));
                    }
                }
            }
            else
            {
                int l_322 = 0x514CCE56L;
                struct S0 **l_330 = &l_318;
                int *l_343 = &g_66;
                int **l_346 = (void*)0;
                int **l_347 = &l_343;
                if ((safe_rshift_func_int8_t_s_u(((((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s(g_308, 6)), 12)), ((((((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((l_313 == (p_31 , &l_86)), (((((safe_mod_func_int16_t_s_s(p_31, ((*l_75) , ((g_180.f0 , (safe_div_func_uint32_t_u_u(((+g_265.f0) && g_54.f2), (*l_75)))) | p_31)))) , l_318) != l_76) <= g_180.f0) == 0x25L))), (*g_227))) , 0UL) ^ (*l_75)) && (*p_30)) , g_265.f3) && g_51.f0))))) & 0x7FL) | (-3L)) == p_31), 4)))
                {
                    char l_331 = 0xD7L;
                    for (l_179 = (-18); (l_179 < 12); l_179++)
                    {
                        int l_332 = 0xC7AE79C7L;
                        int **l_333 = (void*)0;
                        int **l_334 = &l_148;
                        (*l_75) = (l_322 == (&l_209 != ((((g_265.f2 && (safe_div_func_uint8_t_u_u(0x7DL, (((safe_div_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u((((l_329 != l_330) && l_322) >= 65535UL), 15)) == ((func_45(g_54.f3, (*p_32), l_331, (*p_33), &g_4) || l_298) == 0x8A418F75L)) > 0x9F6EB00AL), p_31)) , l_332) , l_322)))) | p_31) ^ (*p_33)) , (void*)0)));
                        (*l_334) = &g_66;
                    }
                    if (((0x3F2EL && g_51.f0) ^ p_31))
                    {
                        g_227 = func_40(&l_298, ((safe_mod_func_int8_t_s_s(l_256, (safe_lshift_func_int8_t_s_u((*l_75), ((safe_lshift_func_int16_t_s_u(1L, 8)) , (((safe_rshift_func_int8_t_s_s(g_180.f1, ((((-6L) & 4UL) , l_343) != p_32))) && (*l_75)) < l_256)))))) , g_180.f3));
                    }
                    else
                    {
                        int **l_344 = &l_75;
                        (*l_344) = p_33;
                    }
                }
                else
                {
                    (*g_147) = g_345;
                }
                (*l_347) = func_40(&g_4, l_298);
            }
            (**l_329) = (((*g_227) , func_34((!(safe_add_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u(func_34(p_31, (safe_rshift_func_uint16_t_u_s(p_31, (((safe_add_func_uint8_t_u_u(0UL, (+((safe_mod_func_uint32_t_u_u((func_45(((0xE37E5EE1L < ((*l_86) , 0x645CBE1CL)) && p_31), (1UL | (*l_75)), g_319.f2, (*g_227), p_30) , 6UL), (-1L))) && 0x5DL)))) > g_4) & g_138.f2))), &g_4, &g_4), g_51.f2)) && p_31), g_180.f3))), p_31, &g_4, &g_4)) , (*l_318));
            (*g_227) = (safe_div_func_uint16_t_u_u((g_54.f2 || (+(g_265.f1 <= p_31))), 0x73FFL));
        }
    }
    else
    {
        int *l_365 = &l_69;
        for (g_66 = 10; (g_66 > 21); g_66++)
        {
            int *l_362 = &g_66;
            (**l_329) = (*g_147);
            return l_362;
        }
        (*l_209) = func_40(((&g_227 == &g_227) , func_40(p_32, p_31)), (safe_add_func_uint8_t_u_u(((void*)0 != l_365), ((g_138.f3 , ((&l_209 == &l_209) & 0xC1B3L)) & p_31))));
    }
    g_66 = (p_31 ^ p_31);
    g_66 = (l_366 ^ ((&p_32 != &p_32) != func_34(g_181.f3, g_51.f3, ((*p_32) , ((l_367 ^ (p_31 == g_51.f0)) , (void*)0)), l_368)));
    return p_30;
}







static unsigned char func_34(short p_35, unsigned char p_36, int * p_37, int * p_38)
{
    int l_68 = 5L;
    return l_68;
}







static int * func_40(int * p_41, unsigned char p_42)
{
    return p_41;
}







static unsigned short func_45(unsigned short p_46, int p_47, unsigned p_48, int p_49, int * p_50)
{
    struct S0 *l_52 = (void*)0;
    struct S0 *l_53 = (void*)0;
    short l_61 = 1L;
    unsigned short l_64 = 0x997BL;
    int *l_65 = &g_66;
    unsigned char l_67 = 0x3BL;
    g_54 = g_51;
    (*l_65) = (p_48 & (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(g_54.f0, 3)) < ((safe_rshift_func_int8_t_s_u((l_61 & (l_61 != ((~(((void*)0 != l_53) , (((safe_div_func_int16_t_s_s((((g_51.f1 > 0x0417L) != (+(p_49 >= g_54.f0))) , (-4L)), 0x139AL)) ^ l_61) ^ g_51.f2))) || (-2L)))), 2)) , l_64)), l_61)));
    (*l_65) = ((p_48 ^ p_47) >= (4294967290UL == l_67));
    return (*l_65);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_51.f0, "g_51.f0", print_hash_value);
    transparent_crc(g_51.f1, "g_51.f1", print_hash_value);
    transparent_crc(g_51.f2, "g_51.f2", print_hash_value);
    transparent_crc(g_51.f3, "g_51.f3", print_hash_value);
    transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
    transparent_crc(g_54.f1, "g_54.f1", print_hash_value);
    transparent_crc(g_54.f2, "g_54.f2", print_hash_value);
    transparent_crc(g_54.f3, "g_54.f3", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    transparent_crc(g_138.f1, "g_138.f1", print_hash_value);
    transparent_crc(g_138.f2, "g_138.f2", print_hash_value);
    transparent_crc(g_138.f3, "g_138.f3", print_hash_value);
    transparent_crc(g_180.f0, "g_180.f0", print_hash_value);
    transparent_crc(g_180.f1, "g_180.f1", print_hash_value);
    transparent_crc(g_180.f2, "g_180.f2", print_hash_value);
    transparent_crc(g_180.f3, "g_180.f3", print_hash_value);
    transparent_crc(g_181.f0, "g_181.f0", print_hash_value);
    transparent_crc(g_181.f1, "g_181.f1", print_hash_value);
    transparent_crc(g_181.f2, "g_181.f2", print_hash_value);
    transparent_crc(g_181.f3, "g_181.f3", print_hash_value);
    transparent_crc(g_265.f0, "g_265.f0", print_hash_value);
    transparent_crc(g_265.f1, "g_265.f1", print_hash_value);
    transparent_crc(g_265.f2, "g_265.f2", print_hash_value);
    transparent_crc(g_265.f3, "g_265.f3", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_319.f0, "g_319.f0", print_hash_value);
    transparent_crc(g_319.f1, "g_319.f1", print_hash_value);
    transparent_crc(g_319.f2, "g_319.f2", print_hash_value);
    transparent_crc(g_319.f3, "g_319.f3", print_hash_value);
    transparent_crc(g_345.f0, "g_345.f0", print_hash_value);
    transparent_crc(g_345.f1, "g_345.f1", print_hash_value);
    transparent_crc(g_345.f2, "g_345.f2", print_hash_value);
    transparent_crc(g_345.f3, "g_345.f3", print_hash_value);
    transparent_crc(g_374.f0, "g_374.f0", print_hash_value);
    transparent_crc(g_374.f1, "g_374.f1", print_hash_value);
    transparent_crc(g_374.f2, "g_374.f2", print_hash_value);
    transparent_crc(g_374.f3, "g_374.f3", print_hash_value);
    transparent_crc(g_409.f0, "g_409.f0", print_hash_value);
    transparent_crc(g_409.f1, "g_409.f1", print_hash_value);
    transparent_crc(g_409.f2, "g_409.f2", print_hash_value);
    transparent_crc(g_409.f3, "g_409.f3", print_hash_value);
    transparent_crc(g_416.f0, "g_416.f0", print_hash_value);
    transparent_crc(g_416.f1, "g_416.f1", print_hash_value);
    transparent_crc(g_416.f2, "g_416.f2", print_hash_value);
    transparent_crc(g_416.f3, "g_416.f3", print_hash_value);
    transparent_crc(g_419.f0, "g_419.f0", print_hash_value);
    transparent_crc(g_419.f1, "g_419.f1", print_hash_value);
    transparent_crc(g_419.f2, "g_419.f2", print_hash_value);
    transparent_crc(g_419.f3, "g_419.f3", print_hash_value);
    transparent_crc(g_424.f0, "g_424.f0", print_hash_value);
    transparent_crc(g_424.f1, "g_424.f1", print_hash_value);
    transparent_crc(g_424.f2, "g_424.f2", print_hash_value);
    transparent_crc(g_424.f3, "g_424.f3", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_496.f0, "g_496.f0", print_hash_value);
    transparent_crc(g_496.f1, "g_496.f1", print_hash_value);
    transparent_crc(g_496.f2, "g_496.f2", print_hash_value);
    transparent_crc(g_496.f3, "g_496.f3", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_528.f0, "g_528.f0", print_hash_value);
    transparent_crc(g_528.f1, "g_528.f1", print_hash_value);
    transparent_crc(g_528.f2, "g_528.f2", print_hash_value);
    transparent_crc(g_528.f3, "g_528.f3", print_hash_value);
    transparent_crc(g_622.f0, "g_622.f0", print_hash_value);
    transparent_crc(g_622.f1, "g_622.f1", print_hash_value);
    transparent_crc(g_622.f2, "g_622.f2", print_hash_value);
    transparent_crc(g_622.f3, "g_622.f3", print_hash_value);
    transparent_crc(g_637.f0, "g_637.f0", print_hash_value);
    transparent_crc(g_637.f1, "g_637.f1", print_hash_value);
    transparent_crc(g_637.f2, "g_637.f2", print_hash_value);
    transparent_crc(g_637.f3, "g_637.f3", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_670.f0, "g_670.f0", print_hash_value);
    transparent_crc(g_670.f1, "g_670.f1", print_hash_value);
    transparent_crc(g_670.f2, "g_670.f2", print_hash_value);
    transparent_crc(g_670.f3, "g_670.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
