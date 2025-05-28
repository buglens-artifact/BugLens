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
   const signed f0 : 17;
   signed f1 : 4;
   long long f2;
   unsigned f3 : 24;
   unsigned f4 : 31;
   const unsigned f5 : 17;
   unsigned f6 : 16;
   signed f7 : 10;
   unsigned f8 : 17;
   const unsigned f9 : 19;
};


static int g_10 = 1L;
static int * const g_9 = &g_10;
static const int *g_54 = &g_10;
static const int **g_53 = &g_54;
static char g_79 = 8L;
static int g_82 = (-1L);
static unsigned long long g_91 = 0xA44ADEF089E30C92LL;
static unsigned g_101 = 0xD05CE631L;
static const struct S0 g_103 = {-13,-0,0L,201,28069,311,77,17,88,427};
static short g_107 = 0x3FFCL;
static unsigned short g_112 = 65535UL;
static unsigned char g_154 = 0x63L;
static unsigned char g_155 = 1UL;
static struct S0 g_204 = {202,2,-5L,835,4939,301,124,-29,286,46};
static unsigned g_223 = 18446744073709551614UL;
static unsigned g_225 = 1UL;
static long long g_267 = (-3L);
static unsigned char *g_333 = &g_154;
static unsigned char **g_332 = &g_333;
static unsigned long long *g_342 = &g_91;
static unsigned long long ** const g_341 = &g_342;
static struct S0 **g_389 = (void*)0;
static unsigned short *g_422 = &g_112;
static unsigned short **g_421 = &g_422;
static int g_461 = 4L;
static char g_490 = (-1L);
static unsigned g_523 = 0x64933B06L;
static char *g_532 = &g_490;
static char **g_531 = &g_532;



static unsigned func_1(void);
static const int * func_2(int * p_3, const int * p_4);
static int * func_5(unsigned short p_6);
static struct S0 func_15(int * p_16);
static int * func_17(unsigned short p_18);
static int func_21(int p_22, char p_23);
static char func_25(unsigned short p_26, int * p_27, unsigned char p_28, char p_29);
static unsigned short func_30(char p_31, int p_32, int * const * const p_33, unsigned short p_34);
static int * const * func_37(unsigned char p_38, int * p_39, const int ** p_40, int * p_41);
static int * func_42(int * p_43, long long p_44, unsigned char p_45, int p_46);
static unsigned func_1(void)
{
    int *l_11 = &g_10;
    int **l_12 = &l_11;
    unsigned l_551 = 18446744073709551615UL;
    const int *l_566 = &g_82;
    l_566 = func_2(func_5(((safe_rshift_func_uint8_t_u_s((((void*)0 == g_9) ^ (&g_10 == ((*l_12) = l_11))), (safe_sub_func_uint8_t_u_u((func_15(func_17(g_10)) , (safe_add_func_uint16_t_u_u(((*g_422) = func_21(((safe_sub_func_int64_t_s_s(g_204.f3, func_25((safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s((((*g_422) <= g_79) | l_551), g_204.f0)), g_204.f1)), &g_82, l_551, (*g_532)))) == l_551), l_551)), g_490))), 0L)))) ^ g_103.f6)), &g_461);

    ;
    ;
    return g_154;
}







static const int * func_2(int * p_3, const int * p_4)
{
    short l_565 = 0xB746L;
    (*p_3) = func_21(l_565, (**g_531));
    if (l_565)
    {
        (*g_9) = (*p_4);
        (*g_9) = ((*p_3) = (-1L));
    }
    else
    {
        (*p_3) = (*g_9);
    }
    return (*g_53);


}







static int * func_5(unsigned short p_6)
{
    int *l_552 = &g_82;
    struct S0 *l_554 = &g_204;
    long long *l_563 = (void*)0;
    int * const * const l_564 = &l_552;
    (*g_53) = func_42(l_552, (func_30((*l_552), (safe_unary_minus_func_int32_t_s(((void*)0 == l_554))), &l_552, func_30((safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((*l_552), 0)), (!func_30(((safe_add_func_int8_t_s_s((-9L), ((l_563 != (void*)0) >= (*l_552)))) & p_6), (**g_53), &g_9, (*g_422))))), 0x1BC001E6L)), (*g_9), l_564, (**l_564))) , (*l_552)), p_6, g_103.f3);
    (**l_564) = (*g_54);
    return l_552;


}







static struct S0 func_15(int * p_16)
{
    struct S0 l_542 = {145,-2,0x41AD27171BC52FFDLL,3696,40046,339,179,-10,13,231};
    return l_542;
}







static int * func_17(unsigned short p_18)
{
    long long l_24 = 0xA284868FDADF8609LL;
    int *l_36 = &g_10;
    int **l_35 = &l_36;
    unsigned char l_49 = 0xB1L;
    char l_50 = 0x79L;
    int * const *l_337 = &g_9;
    int * const **l_336 = &l_337;
    unsigned short *l_338 = &g_112;
    if ((safe_div_func_int32_t_s_s((((*g_9) = func_21(l_24, func_25(((*l_338) = func_30(g_10, (((void*)0 == l_35) & 0x440E708BEE6DABACLL), ((*l_336) = func_37((*l_36), func_42((*l_35), (safe_mod_func_uint64_t_u_u(((l_49 , l_50) & 5L), p_18)), p_18, g_10), g_53, &g_10)), p_18)), (*l_35), (**l_35), p_18))) ^ p_18), 3UL)))
    {
        int *l_539 = &g_10;
        return l_539;


    }
    else
    {
        struct S0 *l_541 = (void*)0;
        struct S0 **l_540 = &l_541;
        (*l_540) = (void*)0;
        return &g_82;


    }
}







static int func_21(int p_22, char p_23)
{
    unsigned long long l_398 = 1UL;
    unsigned l_406 = 1UL;
    int *l_407 = &g_82;
    unsigned l_470 = 0xE12BB00DL;
    unsigned l_474 = 18446744073709551615UL;
    struct S0 l_488 = {132,0,1L,2706,4566,55,253,-25,243,35};
    struct S0 *l_491 = (void*)0;
    for (p_23 = (-11); (p_23 >= (-21)); p_23 = safe_sub_func_int32_t_s_s(p_23, 4))
    {
        int ***l_401 = (void*)0;
        unsigned long long *l_404 = &g_91;
        int * const * const l_405 = (void*)0;
        unsigned long long *l_414 = &l_398;
        short l_438 = 0L;
        unsigned short **l_445 = &g_422;
        int * const * const l_457 = &g_9;
        unsigned *l_534 = &g_225;
        if ((**g_53))
            break;
        (*g_9) = (safe_mul_func_uint8_t_u_u((((((safe_mul_func_uint8_t_u_u((((l_398 ^ ((safe_mod_func_int32_t_s_s(((void*)0 == l_401), l_398)) == func_25(p_23, func_42(&g_82, p_22, (*g_333), func_30((safe_add_func_int8_t_s_s((func_30((((*g_341) = l_404) == l_404), (*g_9), l_405, l_398) | g_103.f8), 0UL)), (*g_9), &g_9, g_204.f7)), p_23, p_22))) == 0L) || 65535UL), 255UL)) , l_406) != 0x29ABL) , 0UL) & (-2L)), 0xC3L));
        (*g_53) = func_42(l_407, g_204.f7, ((*g_333) = (**g_332)), (p_22 != ((((*l_404) = (**g_341)) & ((*l_414) = (safe_mul_func_uint8_t_u_u((p_23 | (safe_lshift_func_uint8_t_u_u(func_30((((0x54270C199CFDA859LL != p_23) > (((safe_lshift_func_uint16_t_u_s((p_23 > 255UL), g_103.f7)) | 18446744073709551615UL) && p_22)) , g_82), p_22, &l_407, p_22), 6))), p_22)))) , 0x9CL)));
        for (g_10 = (-26); (g_10 >= (-28)); g_10 = safe_sub_func_int64_t_s_s(g_10, 5))
        {
            unsigned short **l_417 = (void*)0;
            unsigned short ***l_418 = (void*)0;
            unsigned short ***l_419 = (void*)0;
            unsigned short ***l_420 = &l_417;
            struct S0 l_429 = {-269,-0,0x90E5FE341C27F2DALL,3328,13715,231,72,-3,160,422};
            char l_439 = (-9L);
            int **l_441 = &l_407;
            int ***l_440 = &l_441;
            int ****l_442 = &l_440;
            char l_456 = 0x99L;
            g_421 = ((*l_420) = l_417);

            ;
        }
    }
    return p_22;
}







static char func_25(unsigned short p_26, int * p_27, unsigned char p_28, char p_29)
{
    const unsigned l_347 = 0xE24EC49DL;
    long long *l_352 = &g_267;
    unsigned char * const *l_373 = &g_333;
    const unsigned char l_375 = 0x9EL;
    const struct S0 *l_380 = (void*)0;
    const struct S0 **l_381 = &l_380;
    int *l_383 = &g_82;
    int **l_382 = &l_383;
    (*p_27) = ((safe_div_func_int8_t_s_s((g_341 == &g_342), (safe_add_func_uint8_t_u_u((((((*g_333) = (safe_add_func_int8_t_s_s((+l_347), func_30(((-2L) & (0xE3L == (((*p_27) , 0xF7D5F75E5E334063LL) >= p_29))), ((safe_div_func_uint32_t_u_u(((((*l_352) = (((1L & p_26) != 1UL) == g_267)) && (*g_342)) & l_347), l_347)) , 0x25D300AAL), &g_9, l_347)))) , &g_54) == &p_27) < 1UL), l_347)))) == p_26);

    ;
    for (g_10 = 0; (g_10 > 19); g_10++)
    {
        struct S0 l_365 = {-158,-0,0xB445863CD06E9062LL,317,25191,263,69,-7,61,487};
        int l_370 = (-1L);
        short l_374 = 3L;
        int * const * const l_376 = &g_9;
        int *l_377 = &g_82;
        (*l_377) = func_30((safe_sub_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((~p_29), (p_26 != (safe_lshift_func_int16_t_s_s((((((((l_365 , (safe_mul_func_uint16_t_u_u((l_365 , (func_30((((safe_mod_func_uint8_t_u_u((l_370 , (safe_sub_func_int32_t_s_s(((l_373 != ((g_204 , (p_27 == ((**g_332) , &g_101))) , (void*)0)) >= l_374), l_375))), p_26)) && p_29) == l_365.f5), l_365.f4, &g_9, p_26) , p_28)), (-8L)))) >= (*p_27)) , 0x04L) , (void*)0) != &g_79) <= g_103.f8) == 4294967292UL), 8))))) && 0L) & 0xC00449A5L), 1)), g_204.f2)) , 5L), g_225)), (*g_9), l_376, g_103.f6);
    }
    (*g_53) = func_42((((safe_mul_func_uint8_t_u_u((((*l_381) = l_380) != &g_204), ((void*)0 != l_382))) , (safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(5L, (safe_unary_minus_func_uint64_t_u((((*l_383) = ((void*)0 != g_389)) && (safe_div_func_int64_t_s_s(((255UL <= (**g_332)) & (**l_382)), (*l_383)))))))), (*g_333)))) , &g_82), g_225, p_26, l_347);
    return (*l_383);
}







static unsigned short func_30(char p_31, int p_32, int * const * const p_33, unsigned short p_34)
{
    (*g_53) = &g_82;

    ;
    return g_204.f1;
}







static int * const * func_37(unsigned char p_38, int * p_39, const int ** p_40, int * p_41)
{
    const unsigned short l_63 = 65529UL;
    unsigned long long l_68 = 0xFA41D407B094C655LL;
    int l_85 = 1L;
    char l_148 = 4L;
    int *l_162 = &g_82;
    int **l_161 = &l_162;
    int ***l_160 = &l_161;
    unsigned char *l_221 = &g_154;
    const short l_248 = 1L;
    short *l_249 = &g_107;
    unsigned char **l_252 = &l_221;
    unsigned char *l_253 = (void*)0;
    unsigned char *l_254 = &g_154;
    unsigned long long l_293 = 18446744073709551615UL;
    int * const *l_335 = &g_9;
    l_68 = (+((safe_mod_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(g_10, 4)), 15)) > 251UL) , 0L) != l_63) | (((void*)0 != (*p_40)) , (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((l_63 , (l_63 != g_10)), p_38)), g_10)))), l_63)) && l_63), p_38)) & l_63));
    if (((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(((safe_div_func_int64_t_s_s(((safe_mul_func_int8_t_s_s((~l_63), l_63)) <= l_63), g_10)) , l_63), 11)), (&g_54 != &p_39))) && (g_79 = (l_68 | (g_10 == p_38)))))
    {
        unsigned long long l_80 = 18446744073709551615UL;
        int *l_81 = &g_82;
        (*l_81) = l_80;
    }
    else
    {
        int l_83 = 6L;
        int l_108 = (-9L);
        unsigned short *l_131 = &g_112;
        int ** const l_209 = &l_162;
        if ((0x66354922L && (l_83 & (1L >= (l_68 == 0x4FBBL)))))
        {
            const int ***l_84 = &g_53;
            int *l_86 = &l_85;
            (*l_84) = &g_54;
            (*g_53) = (**l_84);
            l_85 = (*p_41);
            (*l_86) = (+(*p_39));
        }
        else
        {
            (*g_53) = (void*)0;

            ;
        }

        ;
        if ((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(l_83, ((p_38 && g_91) >= 0x64L))) | (safe_mul_func_int16_t_s_s(l_83, (((0x02A6L | ((*p_40) != (*p_40))) < l_83) >= l_83)))), (-6L))))
        {
            short l_96 = 0x6DA0L;
            struct S0 l_102 = {-344,-2,0L,3891,45837,220,153,21,11,432};
            int *l_105 = &l_85;
            int **l_104 = &l_105;
            short *l_106 = &g_107;
            unsigned short *l_111 = &g_112;
            l_108 = (safe_mod_func_uint64_t_u_u(((l_83 <= (l_96 > ((*l_106) = (((safe_add_func_uint8_t_u_u((&p_41 != (void*)0), (safe_add_func_uint32_t_u_u(7UL, l_63)))) , ((g_101 || (((*l_104) = (l_102 , func_42((g_103 , (void*)0), p_38, p_38, g_103.f1))) == (void*)0)) ^ l_83)) > g_103.f4)))) <= g_103.f9), l_83));

            ;
            l_108 = (((((*l_111) = (l_83 != (g_103 , (g_103.f4 ^ ((safe_sub_func_int16_t_s_s((l_108 , p_38), l_85)) || p_38))))) >= 0L) >= 0xB5922496L) & p_38);
            g_82 = (safe_div_func_int32_t_s_s((-2L), (*p_41)));
            for (g_112 = (-18); (g_112 > 55); g_112 = safe_add_func_uint32_t_u_u(g_112, 1))
            {
                return &g_9;


            }
        }
        else
        {
            const struct S0 *l_132 = &g_103;
            unsigned short *l_134 = &g_112;
            int l_137 = 0xAFFF4FB9L;
            unsigned long long *l_210 = &g_91;
            unsigned char *l_218 = &g_155;
            if ((safe_add_func_uint64_t_u_u(g_103.f2, 1UL)))
            {
                const struct S0 *l_120 = (void*)0;
                const struct S0 **l_119 = &l_120;
                const unsigned short * const l_133 = &g_112;
                int l_144 = 8L;
                int *l_159 = &g_10;
                int **l_158 = &l_159;
                int ***l_157 = &l_158;
                (*l_119) = &g_103;

                ;
                g_82 = (safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((void*)0 == &g_54), (safe_mod_func_uint16_t_u_u(l_108, (-2L))))), p_38));
                if ((((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(l_63, (l_131 != (((void*)0 == l_132) , l_133)))) <= p_38), ((+0UL) ^ (((void*)0 == l_134) | 65530UL)))) , (void*)0) != &g_53))
                {
                    unsigned long long *l_147 = &l_68;
                    char *l_149 = &g_79;
                    char *l_150 = &l_148;
                    unsigned char *l_151 = (void*)0;
                    unsigned char *l_152 = (void*)0;
                    unsigned char *l_153 = &g_154;
                    int *l_156 = &l_108;
                    short *l_167 = &g_107;
                    short *l_170 = &g_107;
                    const unsigned l_173 = 0x22DC5F9BL;
                    if (((*l_156) = ((safe_rshift_func_uint8_t_u_s((g_155 = (((l_137 > (((*l_153) = (p_38 != (l_85 = (p_38 , ((*l_150) = ((*l_149) = (safe_add_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u((((((*l_147) = (safe_add_func_int64_t_s_s((g_103.f6 || l_144), ((&l_63 == &g_112) >= (0x36ABE4C4L > (((1L >= 0x3C46DEB7L) != 0x390277B5L) != 0x7BL)))))) ^ g_103.f0) | 4294967295UL) == g_91), g_112)) , 0xC2D0C8DCDBDFE5E7LL), l_148)))))))) || g_103.f7)) == p_38) & p_38)), l_137)) , 0L)))
                    {
                        (**l_161) = ((((*l_156) , (void*)0) != (l_160 = l_157)) < (p_38 < (safe_rshift_func_uint8_t_u_s(p_38, 5))));

                        ;
                    }
                    else
                    {
                        return &g_9;


                    }

                    ;
                    (**l_161) = (((*l_167) = (safe_rshift_func_int8_t_s_s((g_103.f2 , 0L), 3))) , ((safe_mod_func_uint64_t_u_u((g_103.f2 | ((*l_170) = (l_134 != ((*g_9) , (l_167 = l_134))))), g_103.f4)) , (((*l_156) < l_83) && 0xF8L)));

                    ;
                    (*l_156) = (((**l_161) = ((safe_mod_func_int32_t_s_s((l_173 > ((**l_161) , (*l_159))), (((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(g_103.f3, 6)), (safe_add_func_int8_t_s_s(g_101, (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((void*)0 != &l_132), (0xA237L > (((1L > 0xB811774B49123F8DLL) != g_107) <= 0x307A3C17D6ECED94LL)))), g_91)))))) < g_103.f8) , (*p_39)))) > p_38)) ^ 7UL);
                    (*l_162) = l_108;
                }
                else
                {
                    long long l_188 = 0L;
                    int *l_191 = &l_108;
                    for (l_144 = 0; (l_144 < (-18)); l_144 = safe_sub_func_uint64_t_u_u(l_144, 1))
                    {
                        (*g_53) = &l_108;

                        ;
                    }

                    ;
                    (***l_160) = (((safe_mul_func_int8_t_s_s(l_188, g_103.f1)) != ((((g_103.f1 < g_103.f7) , (*l_159)) ^ (*p_39)) , g_103.f7)) != p_38);
                    (*g_53) = &l_108;

                    ;
                    (*l_191) = ((*l_162) = (safe_rshift_func_int16_t_s_u((g_103.f0 , g_154), 5)));
                }

                ;
                ;
            }
            else
            {
                struct S0 l_201 = {-344,0,0L,3610,41273,334,1,-6,61,390};
                unsigned long long *l_212 = &g_91;
                long long l_217 = 0xE02A35B3A7F255F0LL;
                if ((*p_41))
                {
                    unsigned *l_192 = &g_101;
                    unsigned long long **l_211 = &l_210;
                    long long *l_213 = (void*)0;
                    long long *l_214 = &g_204.f2;
                    int *l_215 = &l_83;
                    if (((g_103.f5 < ((*g_9) > ((*l_192) = (g_103.f4 != (*p_41))))) & 0xA831FEE47C6D75ADLL))
                    {
                        (***l_160) = (-1L);
                    }
                    else
                    {
                        (*p_40) = (*p_40);
                        (*l_209) = func_42(func_42(p_41, ((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(g_103.f4, (((safe_mod_func_uint32_t_u_u(((l_201 , (safe_lshift_func_uint16_t_u_u((g_204 , ((**l_161) <= (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_103.f2, g_103.f2)), 0)))), g_107))) | ((*l_131) = (((void*)0 == l_209) > (-2L)))), g_204.f4)) || g_154) , 0x6DL))), (*p_41))), 0xD4CFL)) && (*l_162)), g_103.f9, g_101), g_204.f2, (**l_209), (**l_209));

                        ;
                    }

                    ;
                    (*g_53) = func_42(p_39, g_103.f6, g_103.f2, (l_201.f1 = ((*l_215) = (g_103.f9 || ((*l_214) = ((**l_209) , (((((*l_211) = l_210) == l_212) == g_204.f7) > (g_103.f2 < 0x3ECCL))))))));

                    ;
                    return &g_9;


                }
                else
                {
                    int l_216 = 0x77A4E5EFL;
                    unsigned *l_222 = &g_223;
                    unsigned *l_224 = &g_225;
                    (*l_161) = func_42(func_42(func_42(p_39, (g_204.f9 || (((*l_224) = (l_216 , (g_103.f2 , ((*l_222) = (+(l_217 <= ((l_218 = &g_154) != ((safe_div_func_int16_t_s_s(g_103.f4, p_38)) , l_221)))))))) , 0x6452D96CL)), l_216, p_38), l_137, (**l_209), p_38), p_38, g_204.f4, g_103.f1);

                    ;
                    ;
                }

                ;
                ;
            }

            ;
            ;

            ;
            g_204.f7 = ((safe_mod_func_int32_t_s_s((((safe_sub_func_int64_t_s_s((((**l_209) , l_162) != (void*)0), (safe_sub_func_uint64_t_u_u((g_103 , ((**l_209) == (safe_mul_func_uint16_t_u_u(g_103.f9, (65527UL < 0x678BL))))), (safe_div_func_int64_t_s_s((((*l_221) = g_10) || (*l_162)), g_103.f3)))))) , 0x641CA8B2C8D88053LL) >= p_38), p_38)) <= l_137);
        }

        ;
        ;

        l_108 = (*l_162);
    }


    ;

    if (((safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((void*)0 == &g_91), (safe_lshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(1UL, ((*l_254) = (((*l_249) = ((safe_lshift_func_int8_t_s_s(p_38, (**l_161))) && l_248)) , ((safe_add_func_int32_t_s_s(1L, (((*l_252) = &p_38) == &g_155))) ^ 0UL))))) == 0xF872575A83E09CE5LL), (**l_161))) == p_38) , g_204.f6), g_155)))), g_103.f0)) || g_103.f6))
    {
        unsigned long long **l_259 = (void*)0;
        unsigned long long *l_262 = &l_68;
        unsigned long long **l_261 = &l_262;
        unsigned long long ***l_260 = &l_261;
        long long *l_265 = &g_204.f2;
        long long *l_266 = &g_267;
        int * const l_268 = &g_82;
        int **l_269 = (void*)0;
        int **l_270 = &l_162;
        int *l_281 = &l_85;
        unsigned *l_282 = &g_101;
        l_85 = (g_204.f8 && ((*l_266) = ((*l_265) = ((safe_mul_func_uint16_t_u_u((65533UL < (safe_mul_func_int8_t_s_s(((g_204 , ((!p_38) <= g_103.f4)) , (l_259 != ((*l_260) = l_259))), ((safe_sub_func_uint8_t_u_u((g_155 = (g_154 = 0x38L)), (*l_162))) >= g_107)))), p_38)) == g_204.f8))));

        ;
        (*l_270) = l_268;

        ;
        (*l_268) = (((((safe_lshift_func_int8_t_s_u(p_38, 3)) != (**l_161)) & ((safe_lshift_func_int8_t_s_s(g_204.f0, ((((*l_282) = (safe_mul_func_int16_t_s_s((((g_103.f7 , g_101) >= (p_38 >= ((**l_161) < (safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s((*l_268), ((*l_281) = (*l_268)))), (*g_9)))))) ^ 255UL), g_112))) <= g_103.f9) || g_10))) && p_38)) >= p_38) == p_38);
    }
    else
    {
        int *l_285 = &l_85;
        unsigned char * const * const l_296 = (void*)0;
        unsigned long long l_299 = 7UL;
        unsigned long long l_314 = 1UL;
        char *l_315 = &g_79;
        g_204.f7 = (p_38 > (safe_mod_func_int32_t_s_s(((*l_285) = (g_82 = (*g_9))), p_38)));
        for (g_223 = (-27); (g_223 >= 26); g_223 = safe_add_func_int16_t_s_s(g_223, 4))
        {
            char *l_297 = &g_79;
            int l_298 = 0L;
            (*l_285) = (((((safe_lshift_func_int8_t_s_s(p_38, 4)) , (((safe_unary_minus_func_int16_t_s(((safe_rshift_func_int16_t_s_s(l_293, (g_103.f3 >= ((void*)0 == &g_155)))) , (safe_rshift_func_uint8_t_u_u(p_38, 3))))) >= ((g_204.f5 || ((((*l_297) = ((p_38 , &l_221) == l_296)) & g_204.f6) <= g_204.f6)) == g_103.f7)) | (*l_285))) != l_298) , 65531UL) && l_299);
            (*l_285) = (safe_mul_func_uint8_t_u_u(((*l_221) = g_204.f5), (safe_mul_func_int8_t_s_s(1L, (*l_162)))));
        }
        (*l_285) = (safe_rshift_func_uint8_t_u_s((0x35L != g_107), ((*l_315) = (safe_mul_func_int8_t_s_s((g_204.f2 == (safe_sub_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(g_267, (((0L ^ p_38) , g_204.f3) == (!(*l_285))))) || (safe_mod_func_int8_t_s_s(g_103.f9, g_267))) , (*l_285)), 0xB491L))), l_314)))));
        if ((*g_9))
        {
            long long l_316 = 0x53203D1BC8D61E73LL;
            (*g_53) = &g_82;

            ;
            (*l_285) = (l_316 | p_38);
        }
        else
        {
            long long l_321 = 0L;
            unsigned *l_322 = (void*)0;
            unsigned short *l_331 = &g_112;
            unsigned long long *l_334 = &l_293;
            (*l_285) = (((safe_div_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((l_321 < ((p_38 || ((l_322 == (void*)0) | (5L && ((safe_div_func_int32_t_s_s(0x97122E45L, (safe_sub_func_uint8_t_u_u(((-6L) & ((*l_334) = (((*l_331) = g_204.f6) <= (g_332 != (void*)0)))), 0L)))) ^ g_91)))) , g_204.f9)), g_155)) && l_321), 248UL)) | p_38) != 1UL);
            return &g_9;


        }

        ;
    }


    ;
    return l_335;


}







static int * func_42(int * p_43, long long p_44, unsigned char p_45, int p_46)
{
    int *l_52 = (void*)0;
    int **l_51 = &l_52;
    (*l_51) = (void*)0;
    return p_43;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_103.f2, "g_103.f2", print_hash_value);
    transparent_crc(g_103.f3, "g_103.f3", print_hash_value);
    transparent_crc(g_103.f4, "g_103.f4", print_hash_value);
    transparent_crc(g_103.f5, "g_103.f5", print_hash_value);
    transparent_crc(g_103.f6, "g_103.f6", print_hash_value);
    transparent_crc(g_103.f7, "g_103.f7", print_hash_value);
    transparent_crc(g_103.f8, "g_103.f8", print_hash_value);
    transparent_crc(g_103.f9, "g_103.f9", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_204.f0, "g_204.f0", print_hash_value);
    transparent_crc(g_204.f1, "g_204.f1", print_hash_value);
    transparent_crc(g_204.f2, "g_204.f2", print_hash_value);
    transparent_crc(g_204.f3, "g_204.f3", print_hash_value);
    transparent_crc(g_204.f4, "g_204.f4", print_hash_value);
    transparent_crc(g_204.f5, "g_204.f5", print_hash_value);
    transparent_crc(g_204.f6, "g_204.f6", print_hash_value);
    transparent_crc(g_204.f7, "g_204.f7", print_hash_value);
    transparent_crc(g_204.f8, "g_204.f8", print_hash_value);
    transparent_crc(g_204.f9, "g_204.f9", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    transparent_crc(g_490, "g_490", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
