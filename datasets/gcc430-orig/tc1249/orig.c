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


union U0 {
   int f0;
};

union U1 {
   unsigned long long f0;
   const signed f1 : 7;
   unsigned f2;
};

union U2 {
   int f0;
   char * f1;
   unsigned char f2;
   char * f3;
   long long f4;
};

union U3 {
   unsigned short f0;
};


static char g_12 = 0x5FL;
static int g_51 = (-5L);
static int **g_55 = (void*)0;
static unsigned long long g_63 = 1UL;
static unsigned g_68 = 0x2C25470EL;
static short g_71 = (-4L);
static union U0 g_74 = {0x8CFB9963L};
static union U0 *g_73 = &g_74;
static union U3 g_89 = {1UL};
static unsigned char g_97 = 0x87L;
static union U1 g_115 = {0x288C1B93FB8B7E04LL};
static char *g_129 = &g_12;
static char **g_128 = &g_129;
static char ***g_216 = (void*)0;
static char ****g_215 = &g_216;
static union U2 g_224 = {0xEABE429CL};
static union U2 *g_223 = &g_224;
static long long g_257 = 6L;
static unsigned long long g_267 = 18446744073709551615UL;
static unsigned short g_325 = 0x3A3FL;
static int *g_336 = (void*)0;
static union U2 ***g_353 = (void*)0;
static long long g_377 = 0x5671B14C737DDA91LL;
static int g_379 = 0xF1FC371AL;
static int g_381 = 0x27BBFC23L;
static unsigned char **g_397 = (void*)0;
static short g_481 = (-1L);
static union U1 *g_486 = (void*)0;
static int g_494 = 0xA7BE7A53L;
static int *g_493 = &g_494;
static int g_553 = 4L;
static union U0 g_558 = {0xE7BD97CFL};
static unsigned g_561 = 3UL;
static unsigned g_563 = 0x9612BCAFL;
static unsigned g_568 = 0xAFB7D94BL;
static char g_575 = 0xF7L;
static const long long g_588 = 0xF180521CBCAB36D7LL;
static int *g_614 = &g_379;
static const long long *g_632 = &g_224.f4;
static const long long **g_631 = &g_632;
static long long g_660 = 1L;
static const int *g_676 = &g_494;



static unsigned func_1(void);
static int * func_2(char * p_3, const int * p_4, long long p_5, int * p_6, unsigned p_7);
static char * func_8(char * p_9, short p_10);
static const int func_13(unsigned p_14, long long p_15, int * p_16, int * p_17, unsigned char p_18);
static int * func_20(unsigned p_21, unsigned char p_22, long long p_23);
static unsigned func_24(char * p_25, int * p_26, long long p_27, union U2 p_28, const char * const p_29);
static unsigned short func_37(union U3 p_38, union U1 p_39);
static union U3 func_40(int * p_41);
static int * func_42(unsigned short p_43, long long p_44);
static int ** func_45(const int * p_46, short p_47, char * p_48, char * const p_49);
static unsigned func_1(void)
{
    char *l_11 = &g_12;
    const int *l_552 = &g_553;
    unsigned *l_560 = &g_561;
    unsigned *l_562 = &g_563;
    int **l_679 = &g_493;
    (*l_679) = func_2(func_8(l_11, g_12), l_552, (safe_lshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s((((*l_562) = (((((*l_560) = (0xF7BD51439523C6D4LL & ((g_558 , g_558.f0) | (safe_unary_minus_func_uint16_t_u((*l_552)))))) , g_558.f0) || g_558.f0) & 0x0B2F294EL)) , g_553), 0xF60BL)) | (*l_552)), g_553)), &g_553, g_553);


            ;
    ;
    ;
    ;
    ;
    (**l_679) = (*g_493);
    return g_588;
}







static int * func_2(char * p_3, const int * p_4, long long p_5, int * p_6, unsigned p_7)
{
    unsigned l_571 = 0xE0515C32L;
    long long l_572 = 0x616C992451BAE55CLL;
    unsigned l_573 = 0x538CD5A5L;
    char *l_574 = &g_575;
    unsigned char *l_577 = (void*)0;
    unsigned char **l_576 = &l_577;
    unsigned char *l_578 = (void*)0;
    unsigned char *l_579 = &g_97;
    const int *l_581 = &g_494;
    const int **l_580 = &l_581;
    char *****l_582 = &g_215;
    union U2 l_598 = {0x118681D0L};
    union U2 **l_648 = &g_223;
    unsigned short l_655 = 1UL;
    int *l_656 = &g_74.f0;
    int *l_669 = &l_598.f0;
    (*l_580) = p_4;

    ;
    if ((**l_580))
    {
        char *****l_584 = (void*)0;
        char ******l_583 = &l_584;
        int l_585 = 0x97D93D1BL;
        const long long *l_587 = &g_588;
        const long long **l_586 = &l_587;
        char l_593 = 7L;
        unsigned long long *l_599 = &g_115.f0;
        union U1 l_609 = {18446744073709551611UL};
        int *l_615 = &g_379;
        unsigned *l_621 = (void*)0;
        unsigned **l_620 = &l_621;
        int *l_652 = &l_585;
        unsigned char l_653 = 255UL;
        if ((((l_582 != ((*l_583) = &g_215)) ^ l_585) != (((p_7 = ((((*l_586) = (void*)0) != (void*)0) <= ((l_582 != l_582) && (safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u((l_593 , (safe_add_func_uint64_t_u_u((((safe_add_func_uint64_t_u_u(((*l_599) = p_5), g_558.f0)) < (*p_4)) < (-1L)), (*l_581)))), 0UL)) & 0x543D1306L), 12))))) | (*l_581)) && 0xD3L)))
        {
            const union U2 * const l_602 = &l_598;
            char **l_606 = &l_574;
            int l_607 = 0x3A5BA182L;
            unsigned *l_608 = &g_563;
            int *l_613 = &g_379;
            int **l_612 = &l_613;
            int **l_616 = &l_615;
            unsigned long long l_619 = 2UL;
            for (g_12 = 18; (g_12 < 24); ++g_12)
            {
                const union U2 *l_604 = &l_598;
                const union U2 **l_603 = &l_604;
                int l_605 = 0x8A87D936L;
                (*l_603) = l_602;
                if ((*p_6))
                    continue;
                l_605 = 0x9E73C5FEL;
            }
            (*l_580) = p_4;
            (*p_6) = (l_593 != (((**g_128) == l_593) == ((+(l_609 , (~(*p_3)))) || (((p_7 ^ (~(-5L))) , ((safe_rshift_func_uint16_t_u_s(((g_614 = ((*l_612) = &g_381)) == ((*l_616) = l_615)), 5)) , &g_129)) == (void*)0))));

            ;
            ;
            (*g_336) = (safe_rshift_func_int8_t_s_u((-10L), l_619));
        }
        else
        {
            unsigned **l_622 = &l_621;
            int l_646 = 9L;
            union U2 ** const l_647 = (void*)0;
            l_622 = l_620;
            for (g_68 = 0; (g_68 != 19); ++g_68)
            {
                int *l_649 = &g_74.f0;
                for (g_325 = (-14); (g_325 < 38); ++g_325)
                {
                    unsigned long long l_645 = 0x278AB7946DCAC918LL;
                    int *l_650 = &l_598.f0;
                    (*l_580) = (void*)0;

                    ;
                    for (g_71 = 1; (g_71 < (-24)); g_71--)
                    {
                        unsigned short l_651 = 0x6371L;
                        (*g_493) = l_609.f0;
                        (*l_580) = &g_494;

                        ;
                        (*l_580) = p_4;

                        ;
                        (*g_493) = (g_558.f0 < (safe_rshift_func_int8_t_s_s(((void*)0 == g_631), ((**g_128) | ((p_5 > ((safe_rshift_func_int8_t_s_u((*p_3), 2)) ^ (safe_rshift_func_int8_t_s_s((((safe_mod_func_int32_t_s_s((func_13((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_int64_t_s_s(func_13((l_645 , ((((l_646 , l_647) == l_648) > (*p_3)) ^ g_553)), l_593, &l_646, l_649, p_7), (**g_631))), l_645)), (-1L))), (*g_632), l_650, &l_585, p_7) , (*g_493)), (*l_650))) >= 0UL) <= 0x127DL), 3)))) == l_651)))));
                    }

                    ;
                    (*g_336) = (((*p_6) > ((*l_650) && (((*g_614) , p_5) > (p_7 , g_575)))) | (p_7 , p_7));
                }
            }

            ;
            l_652 = &l_585;
            (*l_652) = l_653;
        }

        ;
        ;
        ;
        ;
    }
    else
    {
        char *l_654 = &g_12;
        int *l_658 = &g_558.f0;
        union U2 l_659 = {-1L};
        long long *l_666 = &l_659.f4;
        unsigned short *l_670 = (void*)0;
        unsigned short *l_671 = &l_655;
        unsigned short *l_672 = &g_89.f0;
        unsigned *l_673 = &g_68;
        if ((*g_493))
        {
            unsigned l_657 = 0xFADF87CCL;
            l_657 = (*g_493);
        }
        else
        {
            int *l_661 = (void*)0;
            (*g_336) = (((**g_128) != (-3L)) | (g_115.f2 != func_13((*l_581), g_660, p_6, p_6, p_5)));
            (*l_580) = l_661;

            ;
            for (g_97 = 0; (g_97 < 52); g_97 = safe_add_func_int16_t_s_s(g_97, 1))
            {
                (*l_656) = (*l_658);
            }
        }

        ;
        (*g_493) = ((((*l_673) = (g_74.f0 , ((*g_223) , (((*l_672) = (((*l_656) = ((*l_671) = (+((safe_sub_func_int64_t_s_s(((*l_666) = 0x2F30971A9CFEB89ELL), g_71)) >= func_13(g_563, p_5, p_6, l_669, p_5))))) && p_5)) & g_224.f0)))) , (void*)0) == &g_481);

                g_676 = ((p_5 <= ((*l_574) = ((*g_129) = (safe_sub_func_uint16_t_u_u(p_5, (*l_656)))))) , ((*l_580) = p_6));

        ;
        ;
        (*l_580) = (*l_580);
    }

    ;
    ;
    ;
    (*g_336) = (*l_669);
    for (g_568 = 17; (g_568 >= 13); g_568--)
    {
        (*g_336) = (*p_6);
    }
    return p_6;


}







static char * func_8(char * p_9, short p_10)
{
    unsigned short l_19 = 0UL;
    int l_30 = 0xB641B44AL;
    union U1 l_289 = {18446744073709551606UL};
    int *l_378 = &g_379;
    int *l_380 = &g_381;
    char *l_382 = &g_12;
    union U2 l_383 = {0x41481E0DL};
    const char * const l_384 = (void*)0;
    char l_503 = 0xEDL;
    char *** const **l_524 = (void*)0;
    unsigned char *l_543 = &l_383.f2;
    unsigned char *l_550 = &g_224.f2;
    union U2 l_551 = {-1L};
    if ((func_13(l_19, l_19, func_20(func_24((l_382 = ((l_30 = (+p_10)) , ((safe_sub_func_uint8_t_u_u((((*l_380) = ((*l_378) = (((safe_sub_func_uint64_t_u_u((((safe_mod_func_uint16_t_u_u(func_37(func_40(func_42(p_10, g_12)), l_289), (-3L))) < g_377) < g_377), l_19)) && 1UL) , g_115.f2))) , g_224.f0), p_10)) , p_9))), l_380, g_377, l_383, l_384), l_383.f0, g_377), g_493, g_494) < l_289.f2))
    {
        char *l_499 = &g_12;
        return l_499;


    }
    else
    {
        unsigned long long l_502 = 0UL;
        int **l_504 = &g_336;
        union U2 * const l_515 = (void*)0;
        (*g_493) = (safe_mod_func_uint64_t_u_u((l_502 && 0L), l_503));
        (*l_504) = &l_30;

        ;
        (*l_504) = &g_51;

        ;
        for (p_10 = 0; (p_10 != (-26)); p_10 = safe_sub_func_uint64_t_u_u(p_10, 7))
        {
            unsigned short l_519 = 0x5F02L;
            short *l_525 = &g_481;
            short *l_526 = &g_71;
            int *l_533 = &g_224.f0;
            long long *l_534 = &g_224.f4;
            (*g_493) = (g_481 , (safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s((((l_515 == (void*)0) == (safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_u((((l_519 || (g_68 != (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((void*)0 != l_524), (((*l_534) = (((*l_526) = ((*l_525) = g_267)) & (safe_rshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(func_13(((safe_lshift_func_int16_t_s_u(g_267, 11)) && g_379), p_10, &g_51, l_533, p_10), l_289.f2)) != g_325), p_10)))) >= g_115.f1))), 0)))) == g_68) <= (-1L)), 4))))) >= 0x72AEA804FDC04758LL), g_325)), g_89.f0)), p_10)) == g_97), g_12)));
        }
    }


            ;
    ;
    l_551.f0 = (((*p_9) , (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((((*l_543) = 255UL) >= p_10), 0xB5L)), g_89.f0)), 7)), (**g_128)))) && 0x76623546DA1C93ACLL);

        return p_9;


}







static const int func_13(unsigned p_14, long long p_15, int * p_16, int * p_17, unsigned char p_18)
{
    union U1 **l_495 = &g_486;
    union U3 *l_496 = &g_89;
    union U3 **l_497 = (void*)0;
    int l_498 = 0x1F9C30CAL;
    if ((((p_18 , g_74) , l_495) != &g_486))
    {
        l_496 = l_496;
        (*l_495) = (*l_495);
        (*g_493) = (*g_493);
    }
    else
    {
        return (*g_493);
    }
    l_496 = l_496;
    (*p_17) = l_498;

    return l_498;
}







static int * func_20(unsigned p_21, unsigned char p_22, long long p_23)
{
    unsigned char l_399 = 4UL;
    union U2 l_410 = {0xC74CAC6FL};
    int *l_412 = (void*)0;
    union U3 l_415 = {0x3B9FL};
    const int *l_431 = &g_51;
    char *l_450 = &g_12;
    char l_461 = 0x44L;
    short l_465 = 0L;
    union U0 l_468 = {1L};
    union U1 * const l_485 = &g_115;
    union U0 **l_487 = &g_73;
    int *l_492 = &g_51;
    if ((l_399 = ((*g_336) = (*g_336))))
    {
        short l_400 = 0xFA0BL;
        int *l_408 = &g_51;
        unsigned char l_411 = 0x17L;
        const int l_419 = 0xA3051C18L;
        union U2 l_424 = {0x7FB43F38L};
        const char * const l_425 = &g_12;
        char *l_426 = &g_12;
        const char * const l_427 = &g_12;
        unsigned char *l_428 = &l_424.f2;
        unsigned char *l_429 = &l_410.f2;
        int l_430 = 0x6FDFDF90L;
        if (((*g_336) = (l_400 ^ (*g_336))))
        {
            char *l_407 = &g_12;
            int l_409 = 0xDDC7D824L;
            l_412 = func_42(p_22, (((safe_add_func_int8_t_s_s((l_409 = (safe_mod_func_uint16_t_u_u((p_21 || (safe_sub_func_uint32_t_u_u(l_399, l_411))), g_267))), 1L)) < 1L) < p_22));

            ;
        }
        else
        {
            const char * const l_418 = (void*)0;
            union U1 l_422 = {18446744073709551615UL};
            char l_423 = 0x5BL;
            for (g_377 = (-13); (g_377 > (-2)); g_377++)
            {
                char *l_416 = &g_12;
                int *l_417 = (void*)0;
            }
            (*g_336) = ((((g_115 , (p_22 != p_23)) , l_423) <= (l_422.f1 == p_22)) , 0x04AAF1D9L);
        }

        ;
        l_430 = ((*l_408) = ((0xF3L >= ((*l_429) = ((*l_428) = (*l_408)))) & g_115.f1));

                        l_431 = l_431;
        return &g_51;


    }
    else
    {
        union U2 *l_440 = &l_410;
        int *l_449 = (void*)0;
        int l_456 = 9L;
        union U1 l_457 = {0x00997027DA6F13B9LL};
        const char * const l_460 = &g_12;
        unsigned char *l_462 = &g_224.f2;
        long long *l_463 = (void*)0;
        int **l_464 = (void*)0;
        union U1 *l_474 = (void*)0;
        union U1 **l_473 = &l_474;
        for (g_325 = 0; (g_325 == 26); g_325 = safe_add_func_uint8_t_u_u(g_325, 2))
        {
            (*g_336) = p_23;
        }
        for (g_97 = 5; (g_97 <= 29); g_97++)
        {
            union U3 l_443 = {0UL};
            int **l_444 = (void*)0;
            int **l_445 = &l_412;
            (*g_336) = ((safe_rshift_func_uint8_t_u_u(g_63, p_22)) == p_21);
            for (g_63 = 15; (g_63 != 19); g_63++)
            {
                union U2 **l_441 = &l_440;
                int l_442 = 8L;
                (*l_441) = l_440;
                (*g_336) = ((l_442 | ((l_443 , (*g_223)) , p_21)) < 18446744073709551610UL);
                (*g_336) = (*g_336);
            }
            (*l_445) = l_412;
        }
        for (g_12 = (-15); (g_12 >= 5); g_12 = safe_add_func_uint32_t_u_u(g_12, 5))
        {
            int **l_448 = &l_412;
            (*l_448) = &g_51;

            ;
            l_431 = ((*l_448) = l_449);

            ;
            ;
        }

        ;
        if ((*g_336))
        {
            return l_412;


        }
        else
        {
            short *l_475 = &l_465;
            unsigned *l_480 = &g_68;
            int *l_482 = &g_379;
            char *l_483 = &l_461;
            union U2 l_484 = {0xC8FE323DL};
            (*g_336) = ((safe_sub_func_uint32_t_u_u(((*g_128) == (l_468 , &l_461)), (p_22 | ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((*l_475) = ((void*)0 == l_473)) < (safe_rshift_func_int16_t_s_s((((*l_482) = (safe_mod_func_int32_t_s_s(0x8BA01716L, (g_481 = ((*l_480) = p_23))))) , g_51), 9))), 4)), 0x86L)) >= l_484.f0)))) || p_22);
            g_486 = l_485;

            ;
        }

        ;
    }

    ;
    ;
    (*l_487) = &l_468;

    ;
    (*g_336) = ((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(65532UL, (g_89.f0 = ((*g_73) , g_325)))), (-1L))) > (p_22 , 0x403A069CL));
    return l_492;



}







static unsigned func_24(char * p_25, int * p_26, long long p_27, union U2 p_28, const char * const p_29)
{
    int *l_385 = &g_51;
    int **l_386 = &g_336;
    unsigned char *l_392 = (void*)0;
    unsigned char **l_391 = &l_392;
    long long *l_396 = &g_224.f4;
    unsigned char ***l_398 = &g_397;
    (*l_386) = func_42((&g_89 == ((&g_51 == l_385) , &g_89)), (*l_385));

    ;
    (*p_26) = ((**l_386) = ((*g_128) == (*g_128)));
    for (g_257 = 0; (g_257 < 4); ++g_257)
    {
        for (g_63 = 23; (g_63 == 32); g_63 = safe_add_func_uint8_t_u_u(g_63, 8))
        {
            unsigned char ***l_393 = &l_391;
            (*l_393) = l_391;
        }
    }
    (*l_398) = ((((*l_385) , (safe_mul_func_uint16_t_u_u(g_267, (0xB93460BAL < (*l_385))))) == (((*l_396) = (**l_386)) ^ g_71)) , g_397);

    return g_12;
}







static unsigned short func_37(union U3 p_38, union U1 p_39)
{
    int *l_290 = &g_224.f0;
    int ***l_293 = &g_55;
    int ***l_294 = &g_55;
    unsigned char *l_297 = &g_97;
    int l_302 = 0x0F78E1B7L;
    const union U0 l_303 = {0x4E368787L};
    long long l_327 = 0x6B5120042DFD0D3DLL;
    union U2 **l_352 = &g_223;
    union U2 ***l_351 = &l_352;
    unsigned l_373 = 0x271D079FL;
    int l_375 = (-1L);
    l_290 = l_290;
    if (((safe_sub_func_uint8_t_u_u((l_293 != (l_294 = ((*l_290) , l_293))), ((*g_129) = (((*l_297) = (safe_add_func_uint8_t_u_u(g_115.f2, g_51))) | ((safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(g_89.f0, l_302)) , ((p_39.f1 == (l_303 , p_39.f0)) != 0xFE35L)), (*l_290))) >= g_257))))) != 0x29L))
    {
        unsigned l_312 = 18446744073709551615UL;
        char ****l_313 = &g_216;
        char *****l_314 = (void*)0;
        char *****l_315 = &g_215;
        unsigned short *l_322 = &g_89.f0;
        unsigned short *l_323 = (void*)0;
        unsigned short *l_324 = &g_325;
        int l_326 = 0L;
        int l_328 = 2L;
        long long *l_329 = &g_257;
        int *l_330 = &g_51;
        int **l_331 = &l_290;
        union U2 *l_374 = &g_224;
        (*l_330) = ((*l_290) = (g_71 & (((*l_329) = (safe_add_func_int64_t_s_s(((g_115 , (g_12 & (((l_327 = (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_312 = p_38.f0), (l_326 = ((l_313 != ((*l_315) = &g_216)) >= (((safe_mod_func_uint32_t_u_u((1L & (safe_rshift_func_uint16_t_u_s(((*l_324) = ((*l_322) = ((safe_lshift_func_uint16_t_u_u(((p_39.f0 , (*l_290)) , 2UL), 5)) > 0xA828A994L))), p_39.f0))), 9L)) != 0xB3L) <= p_39.f1))))), p_38.f0))) | 252UL) == g_267))) | p_39.f1), l_328))) ^ p_39.f1)));
        (*l_331) = ((*l_290) , &l_328);

        ;
        if (p_38.f0)
        {
            int * const l_332 = &l_328;
            int **l_333 = &l_290;
            (*l_333) = l_332;
        }
        else
        {
            union U2 *l_364 = &g_224;
            for (g_267 = 0; (g_267 < 46); g_267 = safe_add_func_int8_t_s_s(g_267, 5))
            {
                unsigned l_343 = 4UL;
                union U2 **l_345 = &g_223;
                union U2 ***l_344 = &l_345;
                g_336 = (*l_331);

                ;
                (*l_290) = (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(0x52FD6F03L, (l_343 && ((void*)0 == &g_267)))), 5));
                (*l_344) = &g_223;
            }

            ;
            for (p_39.f2 = 2; (p_39.f2 > 7); p_39.f2 = safe_add_func_uint32_t_u_u(p_39.f2, 1))
            {
                (*l_331) = (*l_331);
                return (*l_330);


            }

                    }

                ;
        l_374 = (((*l_329) = ((*l_290) <= (safe_rshift_func_int8_t_s_u(((safe_mod_func_int64_t_s_s(g_325, p_39.f1)) , ((-1L) != (safe_mod_func_int32_t_s_s((-1L), (l_373 = 0x64A04281L))))), 7)))) , (*l_352));
    }
    else
    {
        short *l_376 = &g_71;
        (*l_290) = (((*l_376) = l_375) || g_51);
    }



    return g_74.f0;
}







static union U3 func_40(int * p_41)
{
    unsigned short l_78 = 0x6B29L;
    union U0 *l_80 = &g_74;
    short *l_87 = &g_71;
    int *l_110 = &g_74.f0;
    int l_114 = 1L;
    char ***l_142 = &g_128;
    union U1 l_171 = {0x77B9E4BA4E592539LL};
    union U3 * const l_188 = &g_89;
    int *l_231 = &g_74.f0;
    (*p_41) = l_78;
    if ((*p_41))
    {
        unsigned long long l_79 = 0x714E288A3D85AA7FLL;
        union U0 **l_81 = (void*)0;
        union U0 *l_82 = (void*)0;
        short *l_88 = &g_71;
        union U1 l_94 = {0xD1334807DA0BF3FDLL};
        unsigned char *l_95 = (void*)0;
        unsigned char *l_96 = &g_97;
        union U3 * const l_98 = &g_89;
        union U3 *l_101 = &g_89;
        int l_105 = 0x360B9F0AL;
        char ***l_141 = &g_128;
        int *l_149 = &g_51;
        (*p_41) = (l_79 && l_78);
        l_82 = l_80;

        ;
        if (((safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u(g_68, (((((l_87 = l_87) != l_88) && ((((*l_96) = (g_89 , (safe_add_func_int32_t_s_s((l_87 != (void*)0), (safe_add_func_uint64_t_u_u((((0x4EL | l_79) | (l_94 , 0x1030FACFL)) ^ g_71), 1UL)))))) & l_78) != l_94.f0)) == l_78) <= l_78))), g_68)) == 0x7B835292L))
        {
            unsigned l_102 = 4294967295UL;
            int **l_106 = (void*)0;
            int *l_108 = (void*)0;
            int **l_107 = &l_108;
            const long long l_109 = 0x1B91F40AC15C2583LL;
            if (l_94.f2)
            {
                union U3 **l_99 = (void*)0;
                union U3 **l_100 = (void*)0;
                l_101 = l_98;
                return (*l_101);

                            }
            else
            {
                g_74.f0 = g_12;
            }
            (*l_107) = func_42(l_102, (safe_sub_func_int32_t_s_s(l_105, 4294967295UL)));

            ;
            if (l_109)
            {
                (*l_108) = 0x473B9571L;
            }
            else
            {
                (*l_107) = p_41;
            }
            (*l_107) = ((!(**l_107)) , p_41);
        }
        else
        {
            int **l_111 = &l_110;
            (*l_111) = l_110;
        }
        if ((9L & (safe_sub_func_uint32_t_u_u(g_89.f0, 0x49BDD3DEL))))
        {
            short l_116 = 0x6B58L;
            if (l_114)
            {
                int **l_117 = (void*)0;
                int **l_118 = &l_110;
                p_41 = ((*l_118) = (g_115 , func_42(l_116, (*l_110))));

                ;
                for (g_71 = (-14); (g_71 < 1); ++g_71)
                {
                    (**l_118) = (**l_118);
                }
            }
            else
            {
                int ***l_127 = &g_55;
                unsigned short *l_135 = &g_89.f0;
                int **l_138 = &l_110;
                for (g_115.f2 = (-20); (g_115.f2 > 27); g_115.f2 = safe_add_func_uint32_t_u_u(g_115.f2, 9))
                {
                    unsigned long long l_125 = 0x06A5961B9AEE7311LL;
                    int ** const *l_126 = &g_55;
                    l_110 = func_42((safe_mod_func_uint32_t_u_u(g_74.f0, g_97)), l_125);

                    ;
                    if ((*l_110))
                    {
                        (*l_110) = (l_126 == l_127);
                    }
                    else
                    {
                        char ***l_130 = &g_128;
                        char **l_132 = &g_129;
                        char ***l_131 = &l_132;
                        (*p_41) = (*p_41);
                        (*l_131) = ((*l_130) = g_128);
                    }
                }

                ;
                                (*l_138) = ((safe_sub_func_uint16_t_u_u((g_51 , ((*l_135) = g_51)), ((*g_129) <= (*l_110)))) , func_42(g_68, (safe_lshift_func_uint8_t_u_s(g_51, 4))));

                ;
            }

            ;
                        (*l_110) = (*p_41);
        }
        else
        {
            char ****l_143 = (void*)0;
            char ****l_144 = &l_142;
            int l_162 = 0L;
            int **l_164 = &l_149;
            l_149 = func_42((safe_add_func_int16_t_s_s((((((g_89 , &g_68) != (((l_141 = (void*)0) == (l_94.f1 , ((*l_144) = l_142))) , p_41)) == (safe_mod_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((0x4AB819B16196426DLL < (*l_110)) && (g_12 > 1L)), g_51)), 3UL))) == (*p_41)) , l_79), 0x1F0AL)), g_115.f1);

            ;
            for (l_79 = 0; (l_79 > 53); l_79 = safe_add_func_int8_t_s_s(l_79, 4))
            {
                union U0 *l_154 = &g_74;
                union U0 **l_163 = &g_73;
                for (g_12 = 0; (g_12 != (-6)); --g_12)
                {
                    if ((*p_41))
                    {
                        union U0 **l_155 = (void*)0;
                        union U0 *l_156 = &g_74;
                        (*l_110) = 1L;
                        l_156 = l_154;
                    }
                    else
                    {
                        union U2 l_159 = {8L};
                        (*l_110) = (safe_add_func_uint8_t_u_u((*l_110), (((*p_41) != (l_159.f0 = (l_162 = (((**g_128) & (l_159 , 0x63L)) , (safe_mod_func_int8_t_s_s((**g_128), g_12)))))) > 1L)));
                    }
                    (*l_110) = (*p_41);
                }
                (*l_163) = (void*)0;

                ;
            }

            ;
            (*l_164) = p_41;
        }

        ;
        ;
                ;
    }
    else
    {
        int **l_165 = &l_110;
        unsigned char *l_166 = (void*)0;
        unsigned char *l_167 = &g_97;
        union U1 l_170 = {1UL};
        int l_179 = 1L;
        union U2 *l_181 = (void*)0;
        union U3 l_183 = {65535UL};
        union U0 *l_232 = &g_74;
        const int l_255 = 0x3D0893F3L;
        int l_261 = 1L;
        unsigned short l_262 = 65535UL;
        long long l_283 = 1L;
        (*l_110) = (*p_41);
        (*l_165) = (void*)0;

        ;
        (*p_41) = ((void*)0 == (*l_165));
        if ((((*l_167) = g_68) <= ((g_89 , 0xCF5884595356471FLL) & 0x99D52E2DA10ACF09LL)))
        {
            int * const *l_172 = &l_110;
            unsigned short *l_175 = &l_78;
            unsigned long long *l_178 = &g_115.f0;
            int l_180 = (-1L);
            long long l_204 = 0x000C4D80B7E5A13ALL;
            union U2 *l_226 = &g_224;
            if ((safe_sub_func_uint16_t_u_u((((((246UL || (l_170 , ((l_171 , &p_41) != ((*p_41) , l_172)))) == (((*g_129) = (safe_mod_func_int8_t_s_s((+(-6L)), ((((*l_175) = g_115.f0) || ((*l_175) = (safe_add_func_uint64_t_u_u(((*l_178) = (g_115.f0 || 0UL)), 1UL)))) , l_114)))) > l_179)) & g_71) >= g_51) , 2UL), l_180)))
            {
                union U2 **l_182 = &l_181;
                (*l_182) = l_181;
                return l_183;

                            }
            else
            {
                const union U0 *l_193 = &g_74;
                const union U0 * const *l_192 = &l_193;
                int l_203 = (-4L);
                int *l_227 = &g_224.f0;
                if ((safe_lshift_func_int16_t_s_u(((*l_87) = 0x2F3FL), l_179)))
                {
                    const long long l_191 = 0xAC302985B248B132LL;
                    unsigned long long *l_207 = &l_171.f0;
                    union U1 *l_218 = &l_170;
                    unsigned l_220 = 0x5CC303B9L;
                    const unsigned short l_222 = 0x47C5L;
                    long long *l_230 = &l_204;
                    if (g_97)
                    {
                        union U0 *l_186 = &g_74;
                        union U0 **l_187 = &g_73;
                        (*p_41) = (-7L);
                        (*l_187) = l_186;
                        (*p_41) = (l_188 == &g_89);
                        (*l_165) = p_41;

                        ;
                    }
                    else
                    {
                        union U0 **l_195 = &l_80;
                        union U0 ***l_194 = &l_195;
                        const int l_200 = (-3L);
                        (*l_165) = p_41;

                        ;
                        l_204 = ((0x42L & ((((safe_add_func_uint32_t_u_u(l_191, 0x06C70737L)) , l_192) != ((*l_194) = &g_73)) ^ (safe_mod_func_int8_t_s_s(l_191, (((safe_lshift_func_int16_t_s_s(((*l_87) = g_71), 4)) , ((l_200 || (safe_sub_func_uint64_t_u_u(l_203, 0xAE4E8F995CB7F88ALL))) >= (-6L))) | (*p_41)))))) > 0UL);

                        ;
                        (*l_110) = g_115.f2;
                    }

                    ;
                    if ((*p_41))
                    {
                        int l_212 = (-8L);
                        long long *l_217 = &l_204;
                        unsigned *l_219 = &g_68;
                        union U1 **l_221 = &l_218;
                        union U2 **l_225 = (void*)0;
                        (*l_221) = ((safe_sub_func_uint8_t_u_u((l_207 != ((g_74.f0 = ((**l_172) = (0L || (+(((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s((((((l_212 ^ (safe_add_func_int64_t_s_s(((*l_217) = (g_215 != (void*)0)), ((*l_207) = (&l_171 == l_218))))) & ((**l_172) , (((*l_219) = (((*l_87) = g_97) | 65535UL)) && g_51))) ^ 0UL) == l_203) != g_115.f1), l_220)) >= g_115.f0), 3)) ^ 0x0691L) >= 0xC1805321L))))) , (void*)0)), (**g_128))) , &l_170);
                        (*p_41) = (l_222 && (*p_41));
                        l_226 = g_223;
                        l_227 = ((*l_165) = func_42(l_203, (+8L)));

                        ;
                    }
                    else
                    {
                        (**l_172) = 0xC2FE16E7L;
                        (*p_41) = 2L;
                        (*l_227) = l_191;
                    }

                    ;
                    for (l_180 = (-3); (l_180 == (-28)); l_180 = safe_sub_func_uint16_t_u_u(l_180, 8))
                    {
                        return g_89;

                                            }
                    (*l_165) = func_42(g_68, ((((*l_230) = ((*g_223) , 0xB37B3BEAB6E377ABLL)) <= (*l_110)) , ((((*l_167) = ((*g_73) , (g_224.f2 > (l_220 < ((*l_175) = (**l_165)))))) ^ 0x37L) , 0L)));
                }
                else
                {
                    union U0 **l_233 = &l_80;
                    l_231 = ((*l_165) = p_41);

                    ;
                    ;
                    (*l_233) = l_232;
                    return g_89;

                                    }

                ;
                ;
                for (g_71 = 12; (g_71 > (-24)); g_71 = safe_sub_func_uint32_t_u_u(g_71, 1))
                {
                    union U1 l_238 = {1UL};
                    int l_245 = 0x9B8F6F59L;
                }
            }

            ;
        }
        else
        {
            unsigned char l_254 = 249UL;
            for (g_12 = 0; (g_12 == (-28)); g_12 = safe_sub_func_uint64_t_u_u(g_12, 1))
            {
                long long l_256 = 1L;
                int l_268 = 0x8CC242C4L;
                long long l_279 = 0L;
                union U2 **l_288 = (void*)0;
                union U2 ***l_287 = &l_288;
                if (((((*p_41) = ((*l_231) = ((+(*p_41)) && (*p_41)))) | ((l_179 & ((safe_sub_func_int16_t_s_s(g_89.f0, g_12)) == ((l_254 & l_254) , l_255))) ^ l_256)) , g_63))
                {
                    long long *l_258 = (void*)0;
                    long long *l_259 = &g_224.f4;
                    long long *l_260 = &l_256;
                    int l_263 = 0L;
                    long long *l_264 = (void*)0;
                    long long *l_265 = (void*)0;
                    long long *l_266 = (void*)0;
                    (*p_41) = ((g_257 & (0x9FL <= ((g_89.f0 ^ ((*l_260) = ((*l_259) = (*l_231)))) == (((l_261 && (*p_41)) , (g_71 = ((&g_63 != &g_63) <= (g_267 = (l_262 && l_263))))) , l_263)))) > l_268);

                                        (*l_165) = (*l_165);
                    if (l_254)
                    {
                        g_51 = (*p_41);
                        return g_89;

                                            }
                    else
                    {
                        char l_282 = 1L;
                        l_282 = (safe_add_func_uint64_t_u_u(l_256, ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((**g_128) >= 255UL), (safe_rshift_func_int16_t_s_u(l_279, 1)))), 12)), (l_268 == ((&g_257 == &g_257) < (g_89.f0 <= (safe_lshift_func_uint16_t_u_s(((*g_215) == (void*)0), 2))))))) , l_268)));
                        (*p_41) = (*p_41);
                        (*l_231) = l_282;
                    }
                }
                else
                {
                    (*p_41) = (0x82E3601172B58F86LL != (+1UL));
                }
                if (g_115.f2)
                    continue;
                (*l_231) = ((*p_41) = ((((g_74.f0 & 0x53080C64L) | ((((void*)0 != &g_216) , (((l_283 ^ (safe_unary_minus_func_int8_t_s((**g_128)))) >= ((safe_lshift_func_int16_t_s_u(l_268, (((*l_287) = (void*)0) == &l_181))) ^ g_115.f0)) && 1L)) , 0x53E8E71EL)) || l_256) , l_256));
            }
        }

        ;
    }

    ;
    ;
        return (*l_188);

    }







static int * func_42(unsigned short p_43, long long p_44)
{
    const int *l_50 = &g_51;
    int ***l_56 = &g_55;
    union U1 l_57 = {0UL};
    int l_60 = 0x4E20EEB4L;
    int l_66 = (-1L);
    unsigned *l_67 = &g_68;
    short *l_69 = (void*)0;
    short *l_70 = &g_71;
    int *l_72 = (void*)0;
    union U0 **l_75 = (void*)0;
    union U0 **l_76 = &g_73;
    int **l_77 = &l_72;
    (*l_56) = func_45(l_50, ((void*)0 == &g_51), &g_12, &g_12);
    l_60 = ((l_57 , (((*l_70) = ((!p_44) > ((*l_67) = ((safe_add_func_int16_t_s_s(l_60, (safe_add_func_int64_t_s_s((((((*l_50) < p_43) || (g_63 = (*l_50))) , (safe_sub_func_uint32_t_u_u((p_44 && (0x19AC4E69L || (l_66 ^ g_12))), p_43))) & g_12), 0x9AD537E8F88485BDLL)))) && g_51)))) == g_12)) , p_44);
    (*l_76) = g_73;
    (*l_77) = &l_60;

    ;
    return &g_51;


}







static int ** func_45(const int * p_46, short p_47, char * p_48, char * const p_49)
{
    int *l_52 = (void*)0;
    int l_53 = (-6L);
    int *l_54 = &g_51;
    (*l_54) = (l_53 = g_51);
    return g_55;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_115.f1, "g_115.f1", print_hash_value);
    transparent_crc(g_115.f2, "g_115.f2", print_hash_value);
    transparent_crc(g_224.f0, "g_224.f0", print_hash_value);
    transparent_crc(g_224.f2, "g_224.f2", print_hash_value);
    transparent_crc(g_224.f4, "g_224.f4", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_481, "g_481", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_553, "g_553", print_hash_value);
    transparent_crc(g_558.f0, "g_558.f0", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    transparent_crc(g_563, "g_563", print_hash_value);
    transparent_crc(g_568, "g_568", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_588, "g_588", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
