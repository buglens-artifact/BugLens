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
   unsigned f0 : 29;
   unsigned f1;
};


static unsigned char g_9 = 0xA2L;
static int g_22 = 0L;
static int *g_21 = &g_22;
static unsigned g_27 = 0UL;
static unsigned g_28 = 0xC1DE6FC6L;
static unsigned g_30 = 0x280643B8L;
static unsigned long long g_65 = 0x69FF98E47BEBA6E3LL;
static int **g_93 = &g_21;
static int ***g_92 = &g_93;
static char g_102 = 0x02L;
static struct S0 g_106 = {19993,0x1E6A7F8EL};
static struct S0 *g_105 = &g_106;
static int g_110 = 0xCEA6EDC4L;
static int g_130 = 1L;
static struct S0 g_180 = {14891,0xC4A8B706L};
static unsigned long long g_242 = 0xC5D48B04B7C48007LL;
static unsigned short g_260 = 0UL;
static unsigned char g_282 = 0xBEL;
static int g_299 = (-1L);
static int g_322 = 0xF825FF6BL;
static unsigned long long g_386 = 0x55E92D356A58835FLL;
static struct S0 g_417 = {20010,0xA952FBC7L};
static short g_447[7] = {0x2525L, 0x2525L, 0x2525L, 0x2525L, 0x2525L, 0x2525L, 0x2525L};
static char g_478 = 5L;
static char *g_522 = (void*)0;
static char **g_521 = &g_522;
static unsigned long long *g_526 = &g_242;
static unsigned long long **g_525[7] = {&g_526, &g_526, &g_526, &g_526, &g_526, &g_526, &g_526};
static unsigned short **g_533[5] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static unsigned *g_554 = &g_27;
static unsigned **g_553 = &g_554;
static int *g_602[9][9] = {{(void*)0, (void*)0, (void*)0, (void*)0, &g_130, &g_130, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_130, &g_130, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_130, &g_130, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_130, &g_130, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_130, &g_130, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_130, &g_130, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_130, &g_130, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_130, &g_130, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_130, &g_130, (void*)0, (void*)0, (void*)0}};
static unsigned long long g_627 = 18446744073709551615UL;



static char func_1(void);
static int * func_2(unsigned p_3, int p_4, unsigned short p_5, unsigned p_6);
static int func_12(unsigned char p_13, int * p_14);
static int * func_15(int * p_16, unsigned short p_17, int p_18, unsigned p_19, int * p_20);
static struct S0 func_31(unsigned short p_32, unsigned p_33);
static long long func_36(unsigned * p_37, unsigned p_38, int * p_39, int * p_40);
static unsigned * func_41(unsigned * p_42, int p_43, int p_44);
static unsigned short func_50(unsigned * p_51, unsigned char p_52, int *** p_53, unsigned * p_54, struct S0 p_55);
static unsigned char func_67(unsigned * p_68, long long p_69, int * p_70, int *** p_71);
static unsigned * func_72(int ** p_73, int *** p_74, char p_75, int p_76, struct S0 p_77);
static char func_1(void)
{
    long long l_23 = (-2L);
    unsigned *l_26 = &g_27;
    unsigned *l_29 = &g_30;
    int l_358 = 0x57089537L;
    int **l_363 = (void*)0;
    int **l_364 = &g_21;
    char *l_393 = &g_102;
    struct S0 *l_395[6][9] = {{(void*)0, (void*)0, &g_106, &g_106, &g_180, &g_106, &g_106, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_106, &g_106, &g_180, &g_106, &g_106, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_106, &g_106, &g_180, &g_106, &g_106, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_106, &g_106, &g_180, &g_106, &g_106, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_106, &g_106, &g_180, &g_106, &g_106, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_106, &g_106, &g_180, &g_106, &g_106, (void*)0, (void*)0}};
    unsigned char *l_431 = &g_9;
    unsigned *l_432 = &g_27;
    unsigned **l_433 = &l_29;
    struct S0 l_434 = {12870,0xC94B6C47L};
    unsigned long long l_435 = 18446744073709551608UL;
    int *l_436 = &g_299;
    unsigned long long *l_437[2];
    struct S0 l_461 = {10730,0UL};
    int l_532 = 0x5C225319L;
    int ****l_540 = &g_92;
    int l_560[2];
    unsigned l_610 = 5UL;
    int l_622 = 1L;
    struct S0 l_624 = {18007,3UL};
    unsigned char l_625[3][3] = {{0x06L, 0x06L, 255UL}, {0x06L, 0x06L, 255UL}, {0x06L, 0x06L, 255UL}};
    char l_626 = 0x34L;
    int *l_629 = &g_130;
    unsigned short l_630[6][5][8] = {{{0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}}, {{0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}}, {{0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}}, {{0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}}, {{0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}}, {{0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}, {0x421BL, 0x32DEL, 0x32DEL, 0x421BL, 0x68F7L, 65530UL, 65535UL, 0x768FL}}};
    short l_631[1];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_437[i] = &g_242;
    for (i = 0; i < 2; i++)
        l_560[i] = 4L;
    for (i = 0; i < 1; i++)
        l_631[i] = 0x3C90L;
    (*l_364) = func_2((safe_sub_func_uint16_t_u_u(g_9, ((l_358 = ((safe_add_func_int32_t_s_s(func_12(g_9, func_15(g_21, g_9, (l_23 == g_9), ((*l_29) = (g_28 = ((safe_lshift_func_int16_t_s_u(l_23, 15)) , ((*l_26) = 0xBD0176DFL)))), &g_22)), 1L)) > 0xAC12A0CDL)) != g_322))), g_322, l_23, g_9);
    for (g_106.f1 = (-9); (g_106.f1 >= 60); g_106.f1 = safe_add_func_uint16_t_u_u(g_106.f1, 2))
    {
        int ***l_374 = &g_93;
        int l_385 = 0L;
        struct S0 l_394 = {14488,0xD9C287AFL};
        long long *l_398[1][5] = {{&l_23, (void*)0, &l_23, (void*)0, &l_23}};
        struct S0 l_414 = {16940,0xE51BBF9BL};
        int i, j;
        for (g_322 = 0; (g_322 > 28); ++g_322)
        {
            unsigned char l_371 = 1UL;
            int ***l_376 = (void*)0;
            int ****l_375 = &l_376;
            char l_379 = 0x13L;
            struct S0 **l_382[6][7][5] = {{{&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}}, {{&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}}, {{&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}}, {{&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}}, {{&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}}, {{&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}, {&g_105, (void*)0, &g_105, &g_105, (void*)0}}};
            unsigned l_383[8] = {4294967295UL, 4294967295UL, 0x825FA091L, 4294967295UL, 4294967295UL, 0x825FA091L, 4294967295UL, 4294967295UL};
            long long *l_384[3];
            unsigned *l_387[5] = {&g_27, &l_383[0], &g_27, &l_383[0], &g_27};
            unsigned l_412 = 1UL;
            long long l_416[1][7][7] = {{{0L, 1L, 0xEFE2CFEDF3A770B7LL, 1L, 1L, (-1L), 1L}, {0L, 1L, 0xEFE2CFEDF3A770B7LL, 1L, 1L, (-1L), 1L}, {0L, 1L, 0xEFE2CFEDF3A770B7LL, 1L, 1L, (-1L), 1L}, {0L, 1L, 0xEFE2CFEDF3A770B7LL, 1L, 1L, (-1L), 1L}, {0L, 1L, 0xEFE2CFEDF3A770B7LL, 1L, 1L, (-1L), 1L}, {0L, 1L, 0xEFE2CFEDF3A770B7LL, 1L, 1L, (-1L), 1L}, {0L, 1L, 0xEFE2CFEDF3A770B7LL, 1L, 1L, (-1L), 1L}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_384[i] = &l_23;
            (*g_93) = func_41(((g_386 = (l_385 = ((safe_mod_func_int16_t_s_s(l_371, (safe_sub_func_uint32_t_u_u((l_371 != ((+((g_92 = l_374) != ((*l_375) = (void*)0))) , g_106.f0)), (safe_lshift_func_int8_t_s_u(g_106.f0, (((l_379 != (((safe_lshift_func_int16_t_s_s((g_30 == 65531UL), 14)) , &g_105) != l_382[1][5][2])) & l_383[6]) , 248UL))))))) >= 1UL))) , l_387[3]), g_106.f0, l_23);
            for (g_180.f1 = 0; (g_180.f1 < 3); g_180.f1++)
            {
                unsigned *l_390[5][2][2] = {{{&l_383[0], &l_383[0]}, {&l_383[0], &l_383[0]}}, {{&l_383[0], &l_383[0]}, {&l_383[0], &l_383[0]}}, {{&l_383[0], &l_383[0]}, {&l_383[0], &l_383[0]}}, {{&l_383[0], &l_383[0]}, {&l_383[0], &l_383[0]}}, {{&l_383[0], &l_383[0]}, {&l_383[0], &l_383[0]}}};
                unsigned long long *l_396 = &g_242;
                unsigned char *l_397[3][2] = {{&l_371, &l_371}, {&l_371, &l_371}, {&l_371, &l_371}};
                unsigned *l_399 = (void*)0;
                unsigned *l_400[9];
                int l_401 = (-3L);
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_400[i] = (void*)0;
                (**g_92) = func_41(func_41(func_41(l_390[1][1][0], (***l_374), (l_358 = (((g_282 = ((l_393 == (void*)0) >= ((*l_396) = (((g_260 , l_394) , &g_180) != (g_105 = l_395[4][7]))))) <= ((l_401 = (l_398[0][1] == (void*)0)) , l_401)) < g_106.f0))), g_180.f1, (**g_93)), (**l_364), (**l_364));
            }
            if ((**g_93))
            {
                short l_408 = 0x6426L;
                int l_409 = 0L;
                unsigned long long *l_413 = &g_386;
                (***l_374) = (safe_mul_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((g_9 = (safe_mod_func_int32_t_s_s((((((l_408 = (3UL == (***l_374))) != (0x7027A783D3C205DALL & ((1UL || l_409) && g_322))) < (***l_374)) != (+((*l_413) = (safe_add_func_uint32_t_u_u((((*l_393) = 0x14L) , ((l_412 = (l_409 , (-1L))) , g_106.f1)), 4UL))))) == l_409), (*g_21)))), 1)), 0UL));
                for (l_394.f1 = 0; (l_394.f1 <= 2); l_394.f1 += 1)
                {
                    int i, j, k;
                    l_414 = (g_106 , g_180);
                    if ((g_180.f1 == ((0x3FL > (**l_364)) ^ g_9)))
                    {
                        if ((**l_364))
                            break;
                        (**l_374) = (*g_93);
                    }
                    else
                    {
                        unsigned long long l_415 = 0xB337B3422183DC92LL;
                        (*l_364) = func_2(l_408, l_415, (***l_374), g_22);
                        return l_416[0][6][3];
                    }
                }
                (**l_374) = (*g_93);
            }
            else
            {
                g_417 = (g_180 = g_180);
            }
        }
    }
    l_358 = ((g_242 = (safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_int8_t_s((g_27 , (safe_mod_func_int16_t_s_s((((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((g_386 = (((((safe_mod_func_uint16_t_u_u((!(g_417.f0 != (((*l_436) = (safe_mul_func_uint8_t_u_u(((*l_431) = ((g_260 || l_23) > g_417.f1)), g_260))) , g_180.f0))), 3UL)) , (void*)0) == &g_242) < g_417.f0) , g_110)) | 18446744073709551613UL), 5)) != 0x06DD1C22L), 0x8714L)) && g_28) >= 0UL), g_28))))) && g_130) < (-1L)), 0x80L))) < 0x5C4D590C7D2AA3C1LL);
    if (l_434.f1)
    {
        int *l_438 = &g_22;
        int l_439 = 6L;
        long long l_460[8] = {(-1L), (-1L), 7L, (-1L), (-1L), 7L, (-1L), (-1L)};
        int l_465 = 0x8D55A148L;
        short l_473 = 0xE149L;
        int *l_499 = &l_439;
        int l_508 = 0x89C0AFBDL;
        struct S0 **l_515 = (void*)0;
        int i;
        (*g_93) = l_438;
        for (l_358 = 0; (l_358 <= 1); l_358 += 1)
        {
            int *l_440 = &g_130;
            int ***l_444 = &l_364;
            struct S0 l_462 = {14929,18446744073709551615UL};
            unsigned char *l_467 = &g_282;
            unsigned char l_539 = 0x12L;
        }
    }
    else
    {
        unsigned *l_543[4][10][6] = {{{&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}}, {{&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}}, {{&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}}, {{&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}, {&g_27, &g_30, &g_27, &g_30, &g_30, &g_30}}};
        char l_548 = 0x12L;
        int l_549 = 0x9EC944FFL;
        short l_550 = 0x82EDL;
        struct S0 *l_564 = &g_417;
        unsigned short l_570 = 1UL;
        int ***l_593 = (void*)0;
        unsigned long long l_603 = 0x2DF3BCC7D9631F7BLL;
        unsigned char l_615[2];
        long long l_623 = 0x1B51E203095075DBLL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_615[i] = 2UL;
        if ((safe_mod_func_int32_t_s_s((((void*)0 == l_543[1][5][4]) == (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((void*)0 == &g_130), (((((((l_549 = l_548) == 6UL) & 0x9B58L) , l_550) , 4L) < g_65) != l_548))), l_548))), l_548)))
        {
            struct S0 *l_551 = &l_461;
            struct S0 **l_552[5] = {(void*)0, &g_105, (void*)0, &g_105, (void*)0};
            int i;
            g_105 = l_551;
        }
        else
        {
            short *l_556 = &g_447[1];
            int l_559 = 0L;
            unsigned *l_566 = &g_30;
            int *****l_579 = &l_540;
            for (g_110 = 1; (g_110 >= 0); g_110 -= 1)
            {
                unsigned ***l_555 = (void*)0;
                g_553 = g_553;
            }
            (***l_540) = func_41((*g_553), (((*l_556) = g_417.f1) , (safe_sub_func_uint64_t_u_u(0UL, (((*l_556) = g_9) == 1L)))), (l_548 , (g_9 ^ l_559)));
            for (g_180.f1 = 0; (g_180.f1 <= 5); g_180.f1 += 1)
            {
                int l_561 = 0x335F5141L;
                struct S0 **l_565[9] = {&l_395[4][8], &l_395[4][7], &l_395[4][8], &l_395[4][7], &l_395[4][8], &l_395[4][7], &l_395[4][8], &l_395[4][7], &l_395[4][8]};
                int **l_567 = (void*)0;
                int *****l_580 = &l_540;
                int i;
                (*g_92) = ((((((l_559 == func_67((*g_553), l_560[0], (*g_93), &g_93)) | (l_549 = ((((l_561 && (safe_sub_func_int32_t_s_s((((l_561 > l_550) , &l_435) != &l_435), l_549))) || l_550) , l_561) , (-6L)))) >= l_561) , 0xDFL) || l_561) , (*g_92));
                l_395[4][3] = l_564;
                for (g_282 = 0; (g_282 <= 5); g_282 += 1)
                {
                    int ***l_568 = &g_93;
                    struct S0 l_569 = {7840,18446744073709551615UL};
                    unsigned short *l_581 = &l_570;
                    (*g_21) = ((func_67(l_566, g_322, (*g_93), &g_93) || func_67(l_566, g_417.f1, &l_549, l_568)) || l_559);
                    if ((((*l_566) = l_570) , (safe_mod_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s(l_559, (safe_mul_func_uint8_t_u_u(((*l_431) = g_65), l_559)))), (***g_92))) , l_579) != ((*g_554) , l_580)), ((*l_581) = 0xE39FL)))))
                    {
                        if ((**g_93))
                            break;
                    }
                    else
                    {
                        unsigned long long l_582 = 0xCA6ED4FAAEEE3C2ELL;
                        if ((*****l_579))
                            break;
                        (****l_540) = (((*g_553) == l_566) < ((((l_582 , (g_282 >= 18446744073709551607UL)) , (!(*****l_579))) <= l_582) && ((*****l_580) != ((((((***l_568) > g_478) & g_130) <= 1L) || (*g_554)) > (**g_553)))));
                    }
                }
            }
        }
        if ((~(l_548 >= g_27)))
        {
            (*l_564) = (*l_564);
        }
        else
        {
            unsigned char l_585 = 0x1FL;
            int ***l_594 = (void*)0;
            struct S0 l_600[3] = {{2433,0UL}, {2433,0UL}, {2433,0UL}};
            int *l_611 = &l_358;
            long long l_612[7][3] = {{0xA3ED505FB42DCD3ALL, 0xEDD3E8E74008EEE8LL, 0xB9A3B6E7106AAFFCLL}, {0xA3ED505FB42DCD3ALL, 0xEDD3E8E74008EEE8LL, 0xB9A3B6E7106AAFFCLL}, {0xA3ED505FB42DCD3ALL, 0xEDD3E8E74008EEE8LL, 0xB9A3B6E7106AAFFCLL}, {0xA3ED505FB42DCD3ALL, 0xEDD3E8E74008EEE8LL, 0xB9A3B6E7106AAFFCLL}, {0xA3ED505FB42DCD3ALL, 0xEDD3E8E74008EEE8LL, 0xB9A3B6E7106AAFFCLL}, {0xA3ED505FB42DCD3ALL, 0xEDD3E8E74008EEE8LL, 0xB9A3B6E7106AAFFCLL}, {0xA3ED505FB42DCD3ALL, 0xEDD3E8E74008EEE8LL, 0xB9A3B6E7106AAFFCLL}};
            unsigned long long l_628 = 4UL;
            int i, j;
            if (((((((void*)0 != &l_393) > l_549) & ((*g_526) = (*g_526))) || (~(l_550 | ((l_549 = (g_22 , ((safe_sub_func_int64_t_s_s(g_447[1], (l_585 == l_550))) >= l_585))) != g_180.f0)))) ^ l_585))
            {
                unsigned short *l_591[9] = {&g_260, &g_260, &g_260, &g_260, &g_260, &g_260, &g_260, &g_260, &g_260};
                int l_592[9] = {1L, 1L, 0x4D136D35L, 1L, 1L, 0x4D136D35L, 1L, 1L, 0x4D136D35L};
                short l_597 = (-7L);
                short *l_601 = &l_550;
                struct S0 l_605 = {22159,0x630D5805L};
                int i;
                if (l_603)
                {
                    unsigned short l_604 = 0x16FFL;
                    (*g_93) = &l_592[6];
                }
                else
                {
                    short l_606 = 0xF049L;
                    int *l_607 = &g_130;
                    (*l_607) = l_606;
                    (*l_607) = (g_27 , l_592[6]);
                    (*l_607) = (!(l_592[6] = (safe_lshift_func_int8_t_s_s(l_605.f1, l_610))));
                }
                (*l_364) = l_611;
            }
            else
            {
                for (g_106.f1 = 0; g_106.f1 < 9; g_106.f1 += 1)
                {
                    for (l_461.f1 = 0; l_461.f1 < 9; l_461.f1 += 1)
                    {
                        g_602[g_106.f1][l_461.f1] = &l_358;
                    }
                }
            }
            (*g_93) = l_629;
            return l_630[4][0][0];
        }
    }
    return l_631[0];
}







static int * func_2(unsigned p_3, int p_4, unsigned short p_5, unsigned p_6)
{
    struct S0 **l_359 = &g_105;
    int l_362 = 0xCDBFB1D0L;
    (*g_93) = (void*)0;
    l_362 = ((&g_105 == l_359) > ((g_22 ^ (0L | ((((safe_mul_func_uint16_t_u_u(g_180.f0, g_299)) | l_362) ^ 0x8CAD66C6L) , (g_180.f0 ^ p_6)))) | 0L));
    return (*g_93);
}







static int func_12(unsigned char p_13, int * p_14)
{
    int l_229 = 0x8380ACD6L;
    struct S0 l_232 = {20849,0UL};
    int ***l_240 = &g_93;
    unsigned *l_312 = (void*)0;
    int ****l_336[4] = {&g_92, &g_92, &g_92, &g_92};
    int *****l_335 = &l_336[1];
    int i;
    for (g_28 = 10; (g_28 > 15); ++g_28)
    {
        char l_233[10][4] = {{(-10L), (-10L), 5L, 0x87L}, {(-10L), (-10L), 5L, 0x87L}, {(-10L), (-10L), 5L, 0x87L}, {(-10L), (-10L), 5L, 0x87L}, {(-10L), (-10L), 5L, 0x87L}, {(-10L), (-10L), 5L, 0x87L}, {(-10L), (-10L), 5L, 0x87L}, {(-10L), (-10L), 5L, 0x87L}, {(-10L), (-10L), 5L, 0x87L}, {(-10L), (-10L), 5L, 0x87L}};
        int *l_237 = (void*)0;
        int ***l_262 = &g_93;
        int l_283 = 8L;
        short l_302 = 0L;
        int i, j;
        (*g_105) = l_232;
        for (g_27 = 0; (g_27 <= 3); g_27 += 1)
        {
            int l_261 = 0x65297415L;
            struct S0 l_269[2] = {{17208,18446744073709551614UL}, {17208,18446744073709551614UL}};
            int *l_270 = (void*)0;
            int *l_271[7] = {&g_22, &l_229, &g_22, &l_229, &g_22, &l_229, &g_22};
            int i;
            for (g_106.f1 = 0; (g_106.f1 <= 3); g_106.f1 += 1)
            {
                long long l_243[2][10][3] = {{{0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}}, {{0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}, {0x081FC442DDCB8241LL, 0x552900B30882143ELL, 0x4B79774240040767LL}}};
                int *l_265 = (void*)0;
                struct S0 l_266[9] = {{12000,1UL}, {12000,1UL}, {16157,18446744073709551608UL}, {12000,1UL}, {12000,1UL}, {16157,18446744073709551608UL}, {12000,1UL}, {12000,1UL}, {16157,18446744073709551608UL}};
                struct S0 *l_267 = &g_180;
                struct S0 *l_268 = &l_266[6];
                int i, j, k;
                for (l_229 = 3; (l_229 >= 0); l_229 -= 1)
                {
                    int *l_234 = &g_130;
                    unsigned long long *l_241 = &g_242;
                    int i, j;
                    (*l_234) = l_233[(l_229 + 1)][g_106.f1];
                    g_22 = (safe_sub_func_int8_t_s_s(l_233[(l_229 + 6)][g_27], (l_233[(g_27 + 6)][g_106.f1] || ((((((*g_105) , l_237) == &g_110) > l_233[(g_27 + 3)][g_106.f1]) | (((void*)0 == l_237) , ((~(safe_add_func_int16_t_s_s((((*l_241) = (g_65 = (&g_93 == l_240))) == l_243[1][4][2]), 3UL))) , g_180.f0))) || l_233[0][3]))));
                    for (g_242 = 0; (g_242 <= 3); g_242 += 1)
                    {
                        unsigned *l_248[8][2][6] = {{{&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_27, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}};
                        unsigned short *l_259 = &g_260;
                        int l_263 = 0xB15B2CF9L;
                        long long *l_264 = &l_243[1][4][2];
                        int i, j, k;
                        (**g_92) = func_41((g_27 , p_14), g_110, l_263);
                        (*g_93) = func_41(p_14, p_13, ((!(*p_14)) && (***g_92)));
                    }
                }
                (*l_268) = ((*l_267) = l_266[6]);
                (*l_267) = l_269[1];
                (**l_240) = p_14;
            }
            g_130 = (*p_14);
            for (l_232.f1 = 0; (l_232.f1 <= 3); l_232.f1 += 1)
            {
                unsigned short *l_278 = &g_260;
                unsigned char *l_281 = &g_282;
                int l_298 = (-1L);
                int ***l_307 = &g_93;
                struct S0 l_325 = {510,0xD8A5B507L};
                if ((l_283 = ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_13, p_13)), 0x0276L)) && ((((safe_mul_func_uint16_t_u_u(((*l_278) = p_13), g_130)) , ((*l_281) = (~(safe_mul_func_uint8_t_u_u(p_13, (g_180.f1 < ((-1L) ^ 6L))))))) , (void*)0) != (void*)0))))
                {
                    for (g_282 = 0; (g_282 <= 3); g_282 += 1)
                    {
                        unsigned char l_284[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_284[i] = 247UL;
                        return l_284[2];
                    }
                }
                else
                {
                    int l_291[9][8] = {{0x3C945664L, 0L, 0x07505B71L, 0x0561AD35L, 0xD652F3DCL, 9L, 0x46557D32L, 0xCFF7C256L}, {0x3C945664L, 0L, 0x07505B71L, 0x0561AD35L, 0xD652F3DCL, 9L, 0x46557D32L, 0xCFF7C256L}, {0x3C945664L, 0L, 0x07505B71L, 0x0561AD35L, 0xD652F3DCL, 9L, 0x46557D32L, 0xCFF7C256L}, {0x3C945664L, 0L, 0x07505B71L, 0x0561AD35L, 0xD652F3DCL, 9L, 0x46557D32L, 0xCFF7C256L}, {0x3C945664L, 0L, 0x07505B71L, 0x0561AD35L, 0xD652F3DCL, 9L, 0x46557D32L, 0xCFF7C256L}, {0x3C945664L, 0L, 0x07505B71L, 0x0561AD35L, 0xD652F3DCL, 9L, 0x46557D32L, 0xCFF7C256L}, {0x3C945664L, 0L, 0x07505B71L, 0x0561AD35L, 0xD652F3DCL, 9L, 0x46557D32L, 0xCFF7C256L}, {0x3C945664L, 0L, 0x07505B71L, 0x0561AD35L, 0xD652F3DCL, 9L, 0x46557D32L, 0xCFF7C256L}, {0x3C945664L, 0L, 0x07505B71L, 0x0561AD35L, 0xD652F3DCL, 9L, 0x46557D32L, 0xCFF7C256L}};
                    unsigned *l_300 = &g_30;
                    int l_301 = 1L;
                    int i, j;
                    l_301 = (((l_233[(l_232.f1 + 4)][l_232.f1] = ((safe_mod_func_uint32_t_u_u(((*l_300) = (safe_add_func_int32_t_s_s((*p_14), ((((*l_281) = (p_13 >= 18446744073709551613UL)) | 0x3EL) <= (safe_sub_func_int64_t_s_s(g_260, (((l_291[2][6] = 0x37FF6474L) >= (((safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(l_298, (g_299 = ((void*)0 == &p_13)))), p_13)), p_13)) != l_298) | 0L)) , g_28))))))), (*p_14))) && g_242)) >= l_301) & (-1L));
                    if (l_302)
                        continue;
                }
                if ((*p_14))
                {
                    int ***l_305 = &g_93;
                    int l_306 = (-1L);
                    struct S0 l_313 = {9887,0xA63AFEBCL};
                    struct S0 l_314 = {609,0xEF06C16CL};
                    int l_317 = 1L;
                    char *l_320 = &g_102;
                    char **l_319 = &l_320;
                    if (((((safe_mod_func_uint8_t_u_u((+0x8CL), g_180.f0)) > 4294967295UL) && g_130) ^ g_110))
                    {
                        l_317 = (((safe_sub_func_uint8_t_u_u(p_13, 0xC5L)) , p_13) & (*p_14));
                        (*g_105) = l_269[1];
                        if ((*p_14))
                            break;
                        (**l_262) = p_14;
                    }
                    else
                    {
                        struct S0 **l_318 = (void*)0;
                        char ***l_321 = &l_319;
                        l_318 = &g_105;
                        (*l_321) = l_319;
                    }
                    for (g_130 = 0; (g_130 <= 6); g_130 += 1)
                    {
                        int i;
                        (**l_262) = l_271[(g_27 + 3)];
                    }
                }
                else
                {
                    if (g_322)
                        break;
                    for (p_13 = 0; (p_13 <= 1); p_13 += 1)
                    {
                        int l_323 = 9L;
                        struct S0 *l_324 = (void*)0;
                        int i;
                        if (l_323)
                            break;
                        l_325 = ((*g_105) = (l_269[p_13] = l_269[p_13]));
                        (*g_105) = l_325;
                        (*g_93) = (void*)0;
                    }
                    return (*p_14);
                }
                for (g_22 = 26; (g_22 != 21); g_22--)
                {
                    for (g_110 = 0; (g_110 > (-10)); g_110 = safe_sub_func_uint16_t_u_u(g_110, 4))
                    {
                        return (*p_14);
                    }
                    for (p_13 = 0; (p_13 == 45); p_13 = safe_add_func_uint16_t_u_u(p_13, 1))
                    {
                        struct S0 l_332 = {16156,0x0A5B30C1L};
                        l_269[0] = l_332;
                    }
                    (*g_105) = (*g_105);
                }
            }
        }
        l_283 = 0L;
        return (*p_14);
    }
    (*p_14) = ((((safe_sub_func_int64_t_s_s((((*l_335) = ((p_13 , (18446744073709551615UL >= p_13)) , &g_92)) != &g_92), ((g_130 & p_13) ^ (!g_260)))) , 0x7A2C516AL) , p_14) == (void*)0);
    for (g_28 = 0; g_28 < 4; g_28 += 1)
    {
        l_336[g_28] = &l_240;
    }
    for (g_28 = 0; (g_28 >= 44); g_28 = safe_add_func_int64_t_s_s(g_28, 9))
    {
        int ***l_357 = &g_93;
        for (g_110 = 0; (g_110 > 12); g_110 = safe_add_func_int64_t_s_s(g_110, 6))
        {
            if ((*p_14))
                break;
        }
        for (g_242 = 0; (g_242 > 17); g_242++)
        {
            struct S0 l_352 = {4734,0xD68B107CL};
            struct S0 l_356[4][5] = {{{17963,0x1F72470AL}, {5968,18446744073709551615UL}, {20492,0x9A7240CBL}, {17953,0xCD709BD7L}, {15947,0x0F866DDDL}}, {{17963,0x1F72470AL}, {5968,18446744073709551615UL}, {20492,0x9A7240CBL}, {17953,0xCD709BD7L}, {15947,0x0F866DDDL}}, {{17963,0x1F72470AL}, {5968,18446744073709551615UL}, {20492,0x9A7240CBL}, {17953,0xCD709BD7L}, {15947,0x0F866DDDL}}, {{17963,0x1F72470AL}, {5968,18446744073709551615UL}, {20492,0x9A7240CBL}, {17953,0xCD709BD7L}, {15947,0x0F866DDDL}}};
            int i, j;
            for (g_180.f1 = (-16); (g_180.f1 >= 35); g_180.f1++)
            {
                unsigned l_347 = 4294967295UL;
                int l_353 = (-8L);
                (*p_14) = (+((((l_347 >= (safe_sub_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((&l_232 != (l_352 , (void*)0)), g_106.f0)), 0L))) & p_13) ^ g_106.f0) , l_352.f1));
            }
        }
    }
    return (*p_14);
}







static int * func_15(int * p_16, unsigned short p_17, int p_18, unsigned p_19, int * p_20)
{
    unsigned *l_34 = &g_27;
    unsigned *l_35 = &g_30;
    unsigned char l_45[4][5][6] = {{{255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}}, {{255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}}, {{255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}}, {{255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}, {255UL, 0xA3L, 0x47L, 0x69L, 1UL, 1UL}}};
    struct S0 l_224 = {6938,0x5E96EB4EL};
    int i, j, k;
    l_224 = func_31((((*l_35) = ((*l_34) = p_17)) , (g_30 != (func_36((g_27 , func_41(l_34, p_18, ((l_45[3][0][4] , g_9) ^ (*g_21)))), l_45[0][3][0], g_21, g_21) >= p_19))), p_19);
    for (g_27 = 0; (g_27 <= 3); g_27 += 1)
    {
        (*g_93) = &p_18;
        for (g_102 = 0; (g_102 <= 3); g_102 += 1)
        {
            struct S0 l_225 = {12689,1UL};
            (*g_105) = l_225;
            if ((*p_20))
                continue;
            for (g_22 = 3; (g_22 >= 0); g_22 -= 1)
            {
                int *l_226 = &g_22;
                return l_226;
            }
        }
    }
    return l_34;
}







static struct S0 func_31(unsigned short p_32, unsigned p_33)
{
    short l_202 = 0x8893L;
    int *l_212 = &g_130;
    int l_215 = 0x1F9636FAL;
    struct S0 l_223 = {8692,18446744073709551615UL};
    for (g_65 = 0; (g_65 < 52); g_65++)
    {
        unsigned char l_195 = 0x7EL;
        int *l_211 = (void*)0;
        int l_213 = 0xFAC58A1BL;
        unsigned long long *l_220 = &g_65;
        unsigned long long **l_221 = (void*)0;
        unsigned long long **l_222 = &l_220;
        for (p_32 = 14; (p_32 <= 21); p_32 = safe_add_func_uint8_t_u_u(p_32, 1))
        {
            (***g_92) = (safe_lshift_func_int16_t_s_s(l_195, 4));
        }
        for (g_102 = 0; (g_102 <= (-23)); --g_102)
        {
            long long l_198[3];
            int i;
            for (i = 0; i < 3; i++)
                l_198[i] = (-1L);
            for (g_106.f1 = 0; (g_106.f1 <= 2); g_106.f1 += 1)
            {
                unsigned *l_201 = &g_30;
                int *l_210 = &g_110;
                int **l_209 = &l_210;
                int *l_214 = (void*)0;
                int i;
                l_215 = ((***g_92) = (safe_sub_func_int32_t_s_s(l_198[g_106.f1], (l_213 = (((*g_93) == (l_212 = func_41(l_201, ((l_198[g_106.f1] | l_202) & ((***g_92) = ((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((((*l_201) = 8UL) ^ (**g_93)), ((!(((*l_209) = (void*)0) != l_211)) && l_195))), 0x8459D8AAL)), p_32)) | 8L))), p_32))) > 0xB43EL)))));
            }
            for (p_33 = (-23); (p_33 < 20); p_33++)
            {
                for (g_27 = 0; (g_27 <= 2); g_27 += 1)
                {
                    int i;
                    if (l_198[g_27])
                        break;
                }
            }
        }
        (*l_212) = (safe_sub_func_int32_t_s_s((((*l_222) = l_220) != &g_65), 0x4C1F6BFFL));
        if ((*l_212))
            continue;
    }
    l_212 = (*g_93);
    return l_223;
}







static long long func_36(unsigned * p_37, unsigned p_38, int * p_39, int * p_40)
{
    unsigned long long *l_64[6];
    int l_66 = 0x2C22B60DL;
    int **l_78 = &g_21;
    int ***l_79 = &l_78;
    int **l_81[2][2][2] = {{{&g_21, &g_21}, {&g_21, &g_21}}, {{&g_21, &g_21}, {&g_21, &g_21}}};
    int ***l_80 = &l_81[1][1][1];
    struct S0 l_82 = {20277,1UL};
    unsigned char l_177 = 0UL;
    char l_178 = 6L;
    int ****l_187 = (void*)0;
    int ****l_188[8][1][1];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_64[i] = &g_65;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_188[i][j][k] = &g_92;
        }
    }
    (*p_40) = (g_28 >= (func_50(((safe_mod_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(((l_66 = (&g_30 == &p_38)) , func_67(func_41((l_66 , func_72(((*l_79) = l_78), l_80, p_38, p_38, l_82)), g_106.f0, l_177), l_178, p_37, l_80)), g_102)), g_102)), g_28)), g_130)) , (void*)0), g_102, g_92, &g_27, g_180) != p_38));
    (**g_92) = (*g_93);
    return g_180.f1;
}







static unsigned * func_41(unsigned * p_42, int p_43, int p_44)
{
    for (g_22 = (-13); (g_22 >= (-24)); g_22 = safe_sub_func_uint32_t_u_u(g_22, 1))
    {
        int **l_48 = &g_21;
        int ***l_49 = &l_48;
        (*l_49) = l_48;
    }
    return p_42;
}







static unsigned short func_50(unsigned * p_51, unsigned char p_52, int *** p_53, unsigned * p_54, struct S0 p_55)
{
    char l_181[2];
    int *l_182 = &g_130;
    int i;
    for (i = 0; i < 2; i++)
        l_181[i] = 0x07L;
    for (g_110 = 0; (g_110 <= 1); g_110 += 1)
    {
        for (g_180.f1 = 0; (g_180.f1 <= 1); g_180.f1 += 1)
        {
            int *l_183[9] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
            int i;
            (*g_93) = l_182;
            (*g_93) = (**p_53);
            g_22 = ((*g_21) = l_181[g_110]);
        }
    }
    for (p_55.f1 = 0; (p_55.f1 == 26); ++p_55.f1)
    {
        struct S0 l_186 = {4010,1UL};
        (*g_105) = l_186;
    }
    return g_180.f0;
}







static unsigned char func_67(unsigned * p_68, long long p_69, int * p_70, int *** p_71)
{
    unsigned l_179 = 4294967287UL;
    (*g_21) = (g_102 , (**g_93));
    (*g_92) = (*g_92);
    (**g_93) = l_179;
    return g_130;
}







static unsigned * func_72(int ** p_73, int *** p_74, char p_75, int p_76, struct S0 p_77)
{
    short l_83[7][3][8] = {{{0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}, {0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}, {0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}}, {{0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}, {0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}, {0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}}, {{0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}, {0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}, {0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}}, {{0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}, {0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}, {0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}}, {{0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}, {0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}, {0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}}, {{0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}, {0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}, {0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}}, {{0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}, {0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}, {0x667BL, 0x10DAL, 9L, 0x765AL, 0xE04BL, 0xF156L, (-1L), 3L}}};
    int **l_84 = &g_21;
    struct S0 *l_107 = &g_106;
    short l_116[9];
    int l_148[8][10][3] = {{{0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}}, {{0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}}, {{0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}}, {{0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}}, {{0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}}, {{0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}}, {{0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}}, {{0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}, {0x8B7766AAL, 4L, 0xB11E5EC6L}}};
    char l_170 = 0x30L;
    int *l_172 = &l_148[4][5][2];
    unsigned *l_176 = &g_30;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_116[i] = 0L;
    for (p_77.f1 = 0; (p_77.f1 <= 2); p_77.f1 += 1)
    {
        int l_87 = 0xF957EEBEL;
        (**p_73) = ((g_28 , l_84) == ((*p_74) = &g_21));
        (**p_73) = (safe_add_func_uint32_t_u_u(p_76, l_87));
        for (l_87 = 0; (l_87 <= 2); l_87 += 1)
        {
            struct S0 l_88 = {3092,0xF1AAC2B2L};
            int ***l_91 = &l_84;
            int ****l_94 = &g_92;
        }
    }
    for (g_22 = 26; (g_22 != (-8)); g_22--)
    {
        long long l_127[9][4] = {{0x21A5A11BA0C28541LL, 1L, 0xEE2B1DE1D06BD4EBLL, 1L}, {0x21A5A11BA0C28541LL, 1L, 0xEE2B1DE1D06BD4EBLL, 1L}, {0x21A5A11BA0C28541LL, 1L, 0xEE2B1DE1D06BD4EBLL, 1L}, {0x21A5A11BA0C28541LL, 1L, 0xEE2B1DE1D06BD4EBLL, 1L}, {0x21A5A11BA0C28541LL, 1L, 0xEE2B1DE1D06BD4EBLL, 1L}, {0x21A5A11BA0C28541LL, 1L, 0xEE2B1DE1D06BD4EBLL, 1L}, {0x21A5A11BA0C28541LL, 1L, 0xEE2B1DE1D06BD4EBLL, 1L}, {0x21A5A11BA0C28541LL, 1L, 0xEE2B1DE1D06BD4EBLL, 1L}, {0x21A5A11BA0C28541LL, 1L, 0xEE2B1DE1D06BD4EBLL, 1L}};
        int *l_153[10];
        struct S0 l_175 = {1233,18446744073709551606UL};
        int i, j;
        for (i = 0; i < 10; i++)
            l_153[i] = &l_148[5][0][0];
        (**g_92) = (*p_73);
        for (g_106.f1 = 24; (g_106.f1 < 24); ++g_106.f1)
        {
            unsigned char l_126 = 0x8EL;
            if (l_126)
                break;
            if (l_127[1][0])
                continue;
        }
        (*g_93) = (*l_84);
        for (g_110 = 8; (g_110 >= 0); g_110 -= 1)
        {
            unsigned char l_147 = 0x26L;
            struct S0 *l_149 = &g_106;
            int l_165 = 0x419C157CL;
        }
    }
    return l_176;
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_106.f0, "g_106.f0", print_hash_value);
    transparent_crc(g_106.f1, "g_106.f1", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_180.f0, "g_180.f0", print_hash_value);
    transparent_crc(g_180.f1, "g_180.f1", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_417.f0, "g_417.f0", print_hash_value);
    transparent_crc(g_417.f1, "g_417.f1", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_447[i], "g_447[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
