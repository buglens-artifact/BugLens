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


static int g_35 = 0xFB2C41ACL;
static int *g_34 = &g_35;
static union U0 g_68 = {0x27067D5BL};
static volatile union U0 g_94 = {5L};
static volatile union U0 *g_93 = &g_94;
static volatile union U0 **g_92 = &g_93;
static volatile unsigned long long g_112 = 5UL;
static volatile int **g_176 = (void*)0;
static volatile int ***g_175 = &g_176;
static int g_373 = 1L;
static unsigned g_385 = 18446744073709551615UL;
static int **g_547 = (void*)0;
static union U0 *g_568 = (void*)0;
static int g_593 = 1L;
static union U0 g_651 = {0xCE64919BL};
static int g_657 = 0xE5A81251L;
static int *g_668[3] = {&g_593, &g_593, &g_593};
static int g_672[7] = {0x42985DBAL, 0x42985DBAL, 0x42985DBAL, 0x42985DBAL, 0x42985DBAL, 0x42985DBAL, 0x42985DBAL};
static int *g_671 = &g_672[4];
static volatile char g_693 = 0x0FL;
static volatile unsigned short g_712 = 0x794DL;
static short g_765[5] = {(-1L), (-1L), (-1L), (-1L), (-1L)};



static unsigned long long func_1(void);
static int * func_2(unsigned p_3, unsigned short p_4, long long p_5, int p_6);
static unsigned func_7(int * p_8, unsigned char p_9, unsigned p_10, int p_11, long long p_12);
static int * func_13(long long p_14, int * p_15, int p_16);
static long long func_17(int * p_18, int * p_19);
static int * func_20(int * p_21, unsigned p_22, short p_23, unsigned char p_24, unsigned char p_25);
static int * func_26(int * p_27, unsigned p_28);
static int * func_29(unsigned char p_30);
static char func_41(union U0 p_42, int p_43);
static unsigned long long func_51(unsigned p_52, unsigned short p_53, int p_54);
static unsigned long long func_1(void)
{
    char l_31 = (-1L);
    int *l_656 = &g_657;
    int **l_767 = &l_656;
    (*l_767) = func_2(func_7(func_13(func_17(func_20(func_26(func_29(l_31), g_373), (((1L != (0x79L > (safe_add_func_int64_t_s_s(((g_593 <= ((0x688FL && l_31) | l_31)) == 0xCDL), g_593)))) != l_31) || l_31), l_31, g_593, l_31), l_656), g_671, l_31), g_651.f0, g_651.f0, g_651.f0, g_651.f0), l_31, g_765[2], g_765[2]);


    ;

    ;

    ;
    return g_765[2];
}







static int * func_2(unsigned p_3, unsigned short p_4, long long p_5, int p_6)
{
    int *l_766 = &g_593;
    return l_766;


}







static unsigned func_7(int * p_8, unsigned char p_9, unsigned p_10, int p_11, long long p_12)
{
    short l_692[3][10] = {{0x6386L, 0x6386L, 0x719AL, 0xD517L, (-9L), 0xD517L, 0x719AL, 0x6386L, 0x6386L, 0x719AL}, {0x6386L, 0x6386L, 0x719AL, 0xD517L, (-9L), 0xD517L, 0x719AL, 0x6386L, 0x6386L, 0x719AL}, {0x6386L, 0x6386L, 0x719AL, 0xD517L, (-9L), 0xD517L, 0x719AL, 0x6386L, 0x6386L, 0x719AL}};
    int **l_694 = &g_671;
    union U0 *l_697 = &g_68;
    int **l_711 = &g_671;
    int i, j;
    (*g_671) = (l_692[2][2] != g_693);
    (*l_694) = (void*)0;

    ;
    for (p_11 = 0; (p_11 != (-27)); p_11 = safe_sub_func_uint32_t_u_u(p_11, 8))
    {
        union U0 *l_698 = &g_68;
        int l_717 = 0x69A027A2L;
        int **l_718 = &g_668[2];
        for (g_35 = 6; (g_35 >= 0); g_35 -= 1)
        {
            int l_726 = 0xD143F5FBL;
            int ***l_731[5][7][5] = {{{&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}}, {{&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}}, {{&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}}, {{&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}}, {{&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}, {&g_547, &g_547, &g_547, &l_718, (void*)0}}};
            int i, j, k;
            g_672[g_35] = (~((g_672[g_35] <= (l_697 == l_698)) != (safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_11, ((safe_mul_func_uint8_t_u_u(g_672[g_35], p_9)) >= (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((void*)0 != l_711), (1L & (*p_8)))), 3)), (-3L)))))), g_712))));
            for (g_593 = 2; (g_593 >= 0); g_593 -= 1)
            {
                int *l_719 = &g_672[4];
                int i, j;
                (*l_719) = ((safe_rshift_func_int8_t_s_u(((-9L) <= (safe_div_func_uint64_t_u_u(0x34B71043667947BALL, l_692[g_593][(g_35 + 2)]))), p_9)) && (l_717 <= (&p_8 == l_718)));
                if (g_672[g_35])
                    continue;
                if ((*l_719))
                {
                    unsigned l_733 = 4294967295UL;
                    for (p_9 = 0; (p_9 <= 2); p_9 += 1)
                    {
                        unsigned l_732 = 0xC748E5CCL;
                        (*l_694) = p_8;

                        ;
                        (*l_694) = (void*)0;

                        ;
                        (*l_719) = (safe_sub_func_uint8_t_u_u(p_10, ((((**l_718) | (!g_657)) & (((safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((((l_726 >= p_12) | (*p_8)) & (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((**l_718), (&g_547 != l_731[2][1][1]))), l_732))), g_112)), 7)) || g_651.f0) >= 0x93CC8E1087EE62CELL)) == l_733)));
                        (*l_719) = ((p_11 | g_712) < (-3L));
                    }
                }
                else
                {
                    (*l_719) = (safe_sub_func_uint32_t_u_u(0x93AB771CL, ((safe_lshift_func_int8_t_s_u((0x876CL != 1L), 2)) > g_593)));
                }
                (*l_694) = l_719;

                ;
            }
            l_717 = (*p_8);
            l_717 = 0x5D4795EFL;
        }
        for (g_651.f0 = 0; (g_651.f0 != (-23)); g_651.f0 = safe_sub_func_int16_t_s_s(g_651.f0, 1))
        {
            unsigned l_742[8] = {0UL, 0UL, 0x7D977C8FL, 0UL, 0UL, 0x7D977C8FL, 0UL, 0UL};
            int i;
            (**l_718) = l_692[0][1];
            l_742[6] = ((safe_lshift_func_uint8_t_u_u(g_672[6], 1)) == p_11);
            return g_657;
        }
        for (p_12 = 0; (p_12 > 27); p_12++)
        {
            (*p_8) = (*p_8);
            (*l_694) = p_8;

            ;
        }
    }

    ;
    for (g_657 = 0; (g_657 <= 6); g_657 += 1)
    {
        int *l_745 = &g_593;
        union U0 l_748 = {-6L};
        int l_749 = 0xD9EAEB8EL;
        int *l_750[2][2];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_750[i][j] = &g_35;
        }
        l_750[1][1] = func_20(l_745, (g_672[g_657] > (safe_mul_func_uint8_t_u_u((0x0F2229DAL && (*l_745)), 0x9CL))), p_10, (*l_745), g_693);


        for (p_9 = 0; (p_9 <= 2); p_9 += 1)
        {
            int **l_751 = &l_745;
            union U0 **l_761 = &l_697;
            for (g_35 = 0; (g_35 <= 2); g_35 += 1)
            {
                int i, j;
                for (g_651.f0 = 0; (g_651.f0 <= 2); g_651.f0 += 1)
                {
                    int i;
                    l_751 = &g_668[g_35];

                    ;
                }
                g_672[p_9] = l_692[g_35][(p_9 + 3)];
                (*l_745) = (*p_8);
            }

            ;
            for (l_748.f0 = 0; (l_748.f0 <= 2); l_748.f0 += 1)
            {
                int *l_760 = (void*)0;
                (*l_694) = l_760;

                ;
                if ((*p_8))
                    continue;
            }
            if ((*p_8))
                continue;
            for (p_10 = 0; (p_10 <= 2); p_10 += 1)
            {
                union U0 ***l_762 = (void*)0;
                union U0 ***l_763 = (void*)0;
                union U0 ***l_764 = &l_761;
                (*l_764) = l_761;
            }
        }
    }


    return g_94.f0;
}







static int * func_13(long long p_14, int * p_15, int p_16)
{
    int *l_675 = &g_35;
    unsigned l_682[4];
    union U0 l_690[9][4] = {{{0x24198793L}, {0x24198793L}, {0x24198793L}, {0x24198793L}}, {{0x24198793L}, {0x24198793L}, {0x24198793L}, {0x24198793L}}, {{0x24198793L}, {0x24198793L}, {0x24198793L}, {0x24198793L}}, {{0x24198793L}, {0x24198793L}, {0x24198793L}, {0x24198793L}}, {{0x24198793L}, {0x24198793L}, {0x24198793L}, {0x24198793L}}, {{0x24198793L}, {0x24198793L}, {0x24198793L}, {0x24198793L}}, {{0x24198793L}, {0x24198793L}, {0x24198793L}, {0x24198793L}}, {{0x24198793L}, {0x24198793L}, {0x24198793L}, {0x24198793L}}, {{0x24198793L}, {0x24198793L}, {0x24198793L}, {0x24198793L}}};
    int i, j;
    for (i = 0; i < 4; i++)
        l_682[i] = 0x25AF0BABL;
    (*p_15) = (safe_mul_func_int16_t_s_s(((void*)0 != l_675), ((safe_div_func_int64_t_s_s(g_657, (-2L))) < (*l_675))));
    for (g_657 = 6; (g_657 >= 2); g_657 -= 1)
    {
        union U0 l_681 = {0x8F8E1867L};
        int l_683 = 0x4C44917FL;
        int **l_691[6] = {&g_671, &l_675, &g_671, &l_675, &g_671, &l_675};
        int i;
        g_672[g_657] = (safe_lshift_func_uint16_t_u_s(g_672[g_657], g_672[4]));
        for (p_16 = 2; (p_16 >= 0); p_16 -= 1)
        {
            int *l_680[8];
            int i;
            for (i = 0; i < 8; i++)
                l_680[i] = &g_672[g_657];
            return l_680[1];


        }
        (*l_675) = (l_683 > l_681.f0);
        g_668[2] = l_675;
    }


    (*g_671) = (*l_675);
    return &g_35;


}







static long long func_17(int * p_18, int * p_19)
{
    int *l_658[7][6] = {{&g_657, &g_593, &g_657, &g_593, &g_657, &g_593}, {&g_657, &g_593, &g_657, &g_593, &g_657, &g_593}, {&g_657, &g_593, &g_657, &g_593, &g_657, &g_593}, {&g_657, &g_593, &g_657, &g_593, &g_657, &g_593}, {&g_657, &g_593, &g_657, &g_593, &g_657, &g_593}, {&g_657, &g_593, &g_657, &g_593, &g_657, &g_593}, {&g_657, &g_593, &g_657, &g_593, &g_657, &g_593}};
    unsigned long long l_659 = 6UL;
    short l_660 = 0x349AL;
    union U0 l_661[6][5] = {{{0x32866B4AL}, {0L}, {-1L}, {0L}, {0x32866B4AL}}, {{0x32866B4AL}, {0L}, {-1L}, {0L}, {0x32866B4AL}}, {{0x32866B4AL}, {0L}, {-1L}, {0L}, {0x32866B4AL}}, {{0x32866B4AL}, {0L}, {-1L}, {0L}, {0x32866B4AL}}, {{0x32866B4AL}, {0L}, {-1L}, {0L}, {0x32866B4AL}}, {{0x32866B4AL}, {0L}, {-1L}, {0L}, {0x32866B4AL}}};
    unsigned l_666 = 7UL;
    int **l_667[7][8] = {{&l_658[3][3], (void*)0, (void*)0, &l_658[6][0], &g_34, &l_658[6][0], (void*)0, (void*)0}, {&l_658[3][3], (void*)0, (void*)0, &l_658[6][0], &g_34, &l_658[6][0], (void*)0, (void*)0}, {&l_658[3][3], (void*)0, (void*)0, &l_658[6][0], &g_34, &l_658[6][0], (void*)0, (void*)0}, {&l_658[3][3], (void*)0, (void*)0, &l_658[6][0], &g_34, &l_658[6][0], (void*)0, (void*)0}, {&l_658[3][3], (void*)0, (void*)0, &l_658[6][0], &g_34, &l_658[6][0], (void*)0, (void*)0}, {&l_658[3][3], (void*)0, (void*)0, &l_658[6][0], &g_34, &l_658[6][0], (void*)0, (void*)0}, {&l_658[3][3], (void*)0, (void*)0, &l_658[6][0], &g_34, &l_658[6][0], (void*)0, (void*)0}};
    int l_669 = 0L;
    char l_670[5];
    int i, j;
    for (i = 0; i < 5; i++)
        l_670[i] = 0x80L;
    g_668[2] = func_20(l_658[3][3], l_659, g_593, g_385, l_666);


    g_34 = p_18;

    ;
    (*p_19) = (*p_19);
    return l_670[2];
}







static int * func_20(int * p_21, unsigned p_22, short p_23, unsigned char p_24, unsigned char p_25)
{
    int **l_607[10] = {&g_34, &g_34, (void*)0, &g_34, &g_34, (void*)0, &g_34, &g_34, (void*)0, &g_34};
    union U0 ***l_610 = (void*)0;
    long long l_614 = 0xA6D8A54C4FB27D33LL;
    union U0 *l_647 = &g_68;
    int l_654[6][10][3] = {{{0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}}, {{0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}}, {{0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}}, {{0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}}, {{0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}}, {{0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}, {0xD660DD4AL, 0xAD831DE8L, 0xB4CBE2E4L}}};
    long long l_655[9];
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_655[i] = 0x61A0A4E6D2AD12ECLL;
    p_21 = p_21;
    for (g_385 = 0; (g_385 <= 9); g_385 += 1)
    {
        union U0 **l_611[2];
        int l_615 = 0L;
        int i;
        for (i = 0; i < 2; i++)
            l_611[i] = &g_568;
        if (((((p_22 || g_35) != 0UL) && (safe_sub_func_int8_t_s_s((l_610 != &g_92), l_614))) || l_615))
        {
            int l_616 = (-1L);
            int i;
            l_616 = ((void*)0 != &l_607[g_385]);
        }
        else
        {
            unsigned char l_633 = 0x24L;
            int l_634 = (-3L);
            union U0 *l_649 = &g_68;
            for (g_35 = 9; (g_35 >= 0); g_35 -= 1)
            {
                int l_619 = 0x452E01F9L;
                union U0 ***l_622[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_622[i] = &l_611[0];
                l_634 = (safe_add_func_int64_t_s_s(l_619, (safe_mod_func_int32_t_s_s((&l_611[0] != l_622[0]), (safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(g_112, (safe_div_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(18446744073709551606UL, g_68.f0)), g_593)))) < (safe_mul_func_uint16_t_u_u((p_24 != (g_373 | l_633)), g_385))), 0x945DA000L))))));
                l_619 = (((safe_mul_func_uint8_t_u_u(g_68.f0, g_385)) ^ g_112) ^ (safe_lshift_func_int8_t_s_u(g_373, g_385)));
            }
            for (p_24 = 1; (p_24 <= 9); p_24 += 1)
            {
                int l_648 = 0x2B475C6FL;
                union U0 *l_650[5][4][6] = {{{&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}, {&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}, {&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}, {&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}}, {{&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}, {&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}, {&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}, {&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}}, {{&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}, {&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}, {&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}, {&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}}, {{&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}, {&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}, {&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}, {&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}}, {{&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}, {&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}, {&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}, {&g_68, &g_651, &g_651, &g_651, &g_68, &g_651}}};
                int i, j, k;
                for (l_614 = 9; (l_614 >= 0); l_614 -= 1)
                {
                    int *l_639 = &l_634;
                    g_34 = l_639;

                    ;
                }
                for (p_23 = 1; (p_23 <= 9); p_23 += 1)
                {
                    long long l_646 = 0x69C58AD98EB32115LL;
                    l_646 = ((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(l_615, p_22)), p_23)) & (safe_lshift_func_uint16_t_u_u(l_634, 11)));
                }
                l_615 = l_648;
                for (g_68.f0 = 0; (g_68.f0 <= 1); g_68.f0 += 1)
                {
                    int i;
                    l_650[0][0][4] = l_649;
                }
            }


        }
    }
    l_654[3][9][0] = (safe_rshift_func_uint16_t_u_u(g_35, 14));
    g_593 = l_655[2];
    return p_21;


}







static int * func_26(int * p_27, unsigned p_28)
{
    union U0 *l_419[4];
    union U0 **l_418[2];
    int l_420 = 0xAD3BD019L;
    int **l_483 = &g_34;
    int ***l_482[1];
    int *l_561 = (void*)0;
    unsigned char l_595 = 0x35L;
    int i;
    for (i = 0; i < 4; i++)
        l_419[i] = &g_68;
    for (i = 0; i < 2; i++)
        l_418[i] = &l_419[1];
    for (i = 0; i < 1; i++)
        l_482[i] = &l_483;
    if (((l_418[0] != (void*)0) != l_420))
    {
        long long l_427 = 8L;
        int *l_428 = &l_420;
        unsigned l_470 = 0x031D18E5L;
        union U0 ***l_484 = (void*)0;
        int l_509[10];
        int i;
        for (i = 0; i < 10; i++)
            l_509[i] = 0x1CF85484L;
        if ((&p_27 != (void*)0))
        {
            long long l_455 = 3L;
            int l_469[8][6][2] = {{{(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}}, {{(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}}, {{(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}}, {{(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}}, {{(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}}, {{(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}}, {{(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}}, {{(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}, {(-4L), 3L}}};
            unsigned l_494 = 0xF47A90DAL;
            int ***l_522 = &l_483;
            int i, j, k;
            if ((((3UL ^ (((safe_rshift_func_uint8_t_u_s(255UL, p_28)) || g_112) ^ 1UL)) > (*l_428)) < 65535UL))
            {
                unsigned long long l_437 = 0x5DBC6FC845DF1FDCLL;
                int *l_475[10][2] = {{&l_469[0][4][1], &g_35}, {&l_469[0][4][1], &g_35}, {&l_469[0][4][1], &g_35}, {&l_469[0][4][1], &g_35}, {&l_469[0][4][1], &g_35}, {&l_469[0][4][1], &g_35}, {&l_469[0][4][1], &g_35}, {&l_469[0][4][1], &g_35}, {&l_469[0][4][1], &g_35}, {&l_469[0][4][1], &g_35}};
                int i, j;
                for (p_28 = 0; (p_28 < 42); p_28 = safe_add_func_uint16_t_u_u(p_28, 7))
                {
                    int *l_433 = &g_35;
                    for (g_373 = 19; (g_373 < (-22)); g_373 = safe_sub_func_int32_t_s_s(g_373, 2))
                    {
                        int **l_434[1][6][2];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 6; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_434[i][j][k] = &g_34;
                            }
                        }
                        g_34 = l_433;

                        ;
                        return p_27;


                    }
                    for (l_420 = (-9); (l_420 >= (-25)); l_420--)
                    {
                        int **l_442 = &l_433;
                        int ***l_441 = &l_442;
                        (*l_433) = l_437;
                        g_34 = &l_420;

                        ;
                        (*l_433) = (safe_unary_minus_func_uint8_t_u((p_28 > (safe_div_func_uint16_t_u_u(((void*)0 == l_441), ((safe_lshift_func_uint8_t_u_u(1UL, (safe_add_func_int64_t_s_s(0x5303D7F307CFA46ELL, 0x13676E28B10FAFC3LL)))) & (((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_35, l_420)), l_455)) && 6L), (*l_433))), p_28)) >= (-10L)) & 1L)))))));
                    }
                }


                p_27 = p_27;
                if ((((safe_mod_func_uint32_t_u_u((0x9AA06428L > ((*g_92) == (*g_92))), (safe_add_func_int8_t_s_s(g_112, g_373)))) | (g_373 < (p_28 ^ g_68.f0))) != l_420))
                {
                    int *l_462 = (void*)0;
                    union U0 **l_468[10][1][2] = {{{&l_419[1], &l_419[1]}}, {{&l_419[1], &l_419[1]}}, {{&l_419[1], &l_419[1]}}, {{&l_419[1], &l_419[1]}}, {{&l_419[1], &l_419[1]}}, {{&l_419[1], &l_419[1]}}, {{&l_419[1], &l_419[1]}}, {{&l_419[1], &l_419[1]}}, {{&l_419[1], &l_419[1]}}, {{&l_419[1], &l_419[1]}}};
                    int i, j, k;
                    for (g_373 = 0; (g_373 < (-20)); g_373 = safe_sub_func_int16_t_s_s(g_373, 6))
                    {
                        int **l_463[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_463[i] = &l_462;
                        g_34 = l_462;

                        ;
                        l_469[0][4][1] = (safe_mul_func_int64_t_s_s((*l_428), (l_437 != ((safe_lshift_func_int16_t_s_s(((l_437 == g_94.f0) == (*l_428)), g_373)) != 0UL))));
                    }


                    g_35 = (g_94.f0 ^ (*l_428));
                    if (l_437)
                    {
                        int **l_473 = &l_462;
                        (*l_473) = p_27;

                        ;
                    }
                    else
                    {
                        unsigned long long l_474 = 0x81C60C0C00E2A946LL;
                        int **l_476 = &l_475[5][1];
                        union U0 l_477 = {0x76C518BFL};
                        (*l_428) = l_474;
                        (*l_476) = l_475[5][1];
                        (*l_428) = (g_35 == 0x11L);
                    }

                    ;
                }
                else
                {
                    int **l_485 = &l_475[5][1];
                    g_92 = (void*)0;

                    ;
                    (*l_483) = l_428;

                    ;
                    (*l_483) = (*l_485);

                    ;
                    if (((safe_mul_func_int8_t_s_s((func_51(g_112, (*l_428), (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((-1L), (((safe_div_func_uint8_t_u_u((!255UL), g_68.f0)) <= l_494) <= (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((&l_483 == &g_176), p_28)), p_28))))), (-4L)))) < 0xAF9A5ECCL), p_28)) ^ g_373))
                    {
                        (*l_428) = ((safe_unary_minus_func_int16_t_s(g_112)) && (*g_34));
                    }
                    else
                    {
                        int *l_500 = &g_35;
                        (*l_483) = l_500;

                        ;
                    }
                }


                ;
                (*l_428) = (safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(p_28, (-1L))), 2));
            }
            else
            {
                unsigned l_518 = 0x8DE9C3CCL;
                for (l_420 = (-11); (l_420 < 19); l_420 = safe_add_func_uint8_t_u_u(l_420, 6))
                {
                    unsigned long long l_512 = 0xBF1A73D9831F8AEBLL;
                    if (((void*)0 == (*g_175)))
                    {
                        l_509[1] = 6L;
                        p_27 = (void*)0;

                        ;
                    }
                    else
                    {
                        unsigned long long l_517 = 1UL;
                        (*l_483) = p_27;

                        ;
                        l_469[0][4][1] = (safe_add_func_int32_t_s_s(((*l_428) < l_512), ((safe_rshift_func_uint8_t_u_s(l_512, (p_28 ^ (safe_mod_func_int16_t_s_s(p_28, ((g_373 == g_68.f0) ^ (*l_428))))))) | 9L)));
                        l_517 = 0x1509AACCL;
                    }
                    if (l_518)
                        break;
                    if (p_28)
                        break;
                }


                g_35 = l_469[0][4][1];
                (*l_483) = &l_469[0][4][1];

                ;
                (*l_483) = func_29(((safe_unary_minus_func_uint8_t_u((*l_428))) == (safe_mul_func_uint8_t_u_u((l_522 == (void*)0), ((safe_rshift_func_int16_t_s_s(p_28, 4)) ^ (((safe_lshift_func_int16_t_s_u((-1L), 2)) <= (safe_rshift_func_uint8_t_u_u(l_518, 4))) != l_518))))));

                ;
            }


            ;
        }
        else
        {
            int *l_530 = &l_509[1];
            if (g_112)
            {
                (*l_483) = &l_509[1];

                ;
            }
            else
            {
                union U0 **l_529 = (void*)0;
                (*l_428) = (&g_93 == l_529);
                (*g_175) = (*g_175);
            }


            (*l_483) = &l_509[8];

            ;
            (*l_483) = l_530;
        }


        ;
        (*l_428) = p_28;
    }
    else
    {
        int *l_540 = &l_420;
        (*l_483) = l_540;

        ;
        for (g_35 = (-3); (g_35 > 27); ++g_35)
        {
            char l_543 = 0x27L;
            int l_554 = 0xFDA103C6L;
            for (g_68.f0 = 0; (g_68.f0 <= 3); g_68.f0 += 1)
            {
                int *l_551 = &g_35;
                for (p_28 = 0; (p_28 <= 0); p_28 += 1)
                {
                    int *l_544 = &g_35;
                    int i;
                    (*l_483) = l_540;

                    ;
                    if (l_543)
                        break;
                    p_27 = l_544;

                    ;
                    (**l_483) = (safe_rshift_func_int16_t_s_u(0L, 10));
                }
                for (g_385 = 0; (g_385 <= 3); g_385 += 1)
                {
                    for (p_28 = 0; (p_28 <= 1); p_28 += 1)
                    {
                        (*l_483) = p_27;

                        ;
                    }
                    for (g_373 = 0; (g_373 <= 1); g_373 += 1)
                    {
                        (*l_483) = (void*)0;

                        ;
                        return &g_35;



                    }
                    (*l_483) = p_27;

                    ;
                }
                g_547 = &p_27;

                ;
                if (p_28)
                {
                    short l_552 = 0L;
                    if ((safe_add_func_uint32_t_u_u(p_28, (*l_540))))
                    {
                        int l_550 = 0x03B3050BL;
                        (*g_547) = p_27;
                        l_550 = 0xE4074CCCL;
                    }
                    else
                    {
                        (*l_540) = p_28;
                        (*g_175) = (*g_175);
                        p_27 = l_551;

                        ;
                    }
                    if (l_552)
                        continue;
                }
                else
                {
                    unsigned char l_553 = 0xECL;
                    if (l_553)
                        break;
                }
            }
            if (l_554)
                break;
            (*l_540) = (safe_mul_func_int16_t_s_s(g_35, ((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_28, 0UL)), 5)) < (*l_540))));
        }

        ;
        ;
        (*l_540) = (9L < p_28);
        for (g_35 = 0; (g_35 >= 0); g_35 -= 1)
        {
            return l_561;




        }
    }


    ;
    ;
    for (l_420 = (-9); (l_420 != (-27)); --l_420)
    {
        long long l_566[8];
        union U0 *l_567 = (void*)0;
        int **l_573 = &l_561;
        int l_597[7][10] = {{0x2094387CL, 0xA9651528L, 0xE7A1B7E4L, (-4L), (-4L), 0xE7A1B7E4L, 0xA9651528L, 0x2094387CL, (-9L), (-1L)}, {0x2094387CL, 0xA9651528L, 0xE7A1B7E4L, (-4L), (-4L), 0xE7A1B7E4L, 0xA9651528L, 0x2094387CL, (-9L), (-1L)}, {0x2094387CL, 0xA9651528L, 0xE7A1B7E4L, (-4L), (-4L), 0xE7A1B7E4L, 0xA9651528L, 0x2094387CL, (-9L), (-1L)}, {0x2094387CL, 0xA9651528L, 0xE7A1B7E4L, (-4L), (-4L), 0xE7A1B7E4L, 0xA9651528L, 0x2094387CL, (-9L), (-1L)}, {0x2094387CL, 0xA9651528L, 0xE7A1B7E4L, (-4L), (-4L), 0xE7A1B7E4L, 0xA9651528L, 0x2094387CL, (-9L), (-1L)}, {0x2094387CL, 0xA9651528L, 0xE7A1B7E4L, (-4L), (-4L), 0xE7A1B7E4L, 0xA9651528L, 0x2094387CL, (-9L), (-1L)}, {0x2094387CL, 0xA9651528L, 0xE7A1B7E4L, (-4L), (-4L), 0xE7A1B7E4L, 0xA9651528L, 0x2094387CL, (-9L), (-1L)}};
        int i, j;
        for (i = 0; i < 8; i++)
            l_566[i] = 0L;
        for (g_68.f0 = 0; (g_68.f0 <= (-27)); g_68.f0 = safe_sub_func_int32_t_s_s(g_68.f0, 1))
        {
            l_566[6] = 0x04C149F1L;
            g_568 = l_567;
        }
        if (((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((0xFA983C52L < 0x51829DB3L), 0)) > 1L), 0L)) <= (l_573 == l_573)))
        {
            unsigned char l_589 = 255UL;
            if ((safe_mod_func_uint8_t_u_u(p_28, g_385)))
            {
                int *l_580 = &g_35;
                g_35 = 0xCEE95F5BL;
                for (g_373 = 5; (g_373 != (-8)); g_373 = safe_sub_func_int8_t_s_s(g_373, 9))
                {
                    char l_590 = 0x2AL;
                    for (g_68.f0 = 0; (g_68.f0 >= 13); g_68.f0 = safe_add_func_int64_t_s_s(g_68.f0, 4))
                    {
                        unsigned short l_591[9] = {0UL, 0UL, 0x6943L, 0UL, 0UL, 0x6943L, 0UL, 0UL, 0x6943L};
                        int i;
                        (*l_573) = l_580;

                        ;
                        (*l_561) = (safe_sub_func_uint32_t_u_u(((((g_385 & (safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((l_589 | 0x50L), p_28)), p_28)), 0))) < ((void*)0 == &g_92)) == g_373) & g_35), l_590));
                        if (l_591[8])
                            continue;
                    }
                }
            }
            else
            {
                int *l_592 = &g_593;
                int l_596 = 0xEC9036A0L;
                for (g_373 = 1; (g_373 >= 0); g_373 -= 1)
                {
                    for (g_35 = 0; (g_35 <= 1); g_35 += 1)
                    {
                        short l_594 = 0x764EL;
                        l_592 = (void*)0;

                        ;
                        (*l_483) = p_27;

                        ;
                        (*l_573) = p_27;
                        l_596 = (((((g_68.f0 | l_594) & p_28) >= l_589) & l_595) > 0x37L);
                    }
                }

                ;
            }
            if (l_597[2][3])
                break;
        }
        else
        {
            unsigned l_602 = 0UL;
            l_602 = (0x92F2L == (safe_div_func_int8_t_s_s(g_35, (safe_lshift_func_int8_t_s_s(p_28, p_28)))));
        }
        g_35 = p_28;
        (*g_175) = (*g_175);
    }

    ;
    return p_27;




}







static int * func_29(unsigned char p_30)
{
    int *l_40 = &g_35;
    union U0 l_44 = {0x5DAA08BBL};
    union U0 *l_79 = &g_68;
    union U0 **l_78[3];
    union U0 l_82 = {0xAF792179L};
    int **l_138 = &l_40;
    union U0 l_139 = {-8L};
    long long l_195 = 0x63813A0B3C3F1057LL;
    int *l_249 = &g_35;
    int **l_260 = &l_249;
    char l_287[7][1] = {{0x2CL}, {0x2CL}, {0x2CL}, {0x2CL}, {0x2CL}, {0x2CL}, {0x2CL}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_78[i] = &l_79;
    if (((safe_mod_func_uint8_t_u_u((!((void*)0 != g_34)), (safe_mul_func_uint64_t_u_u(p_30, ((void*)0 != &g_35))))) != (((safe_lshift_func_int16_t_s_s(((void*)0 != l_40), (p_30 == (func_41(l_44, p_30) == g_68.f0)))) & 0x6B495482L) >= p_30)))
    {
        return &g_35;


    }
    else
    {
        union U0 l_73 = {-10L};
        union U0 *l_77 = &g_68;
        union U0 **l_76[9] = {&l_77, &l_77, &l_77, &l_77, &l_77, &l_77, &l_77, &l_77, &l_77};
        int i;
        (*l_40) = (((safe_mul_func_int16_t_s_s(p_30, p_30)) & func_41(l_73, g_68.f0)) ^ ((g_68.f0 || (safe_mod_func_int16_t_s_s(g_68.f0, g_68.f0))) <= (l_76[4] == l_78[0])));
    }
    if ((safe_mul_func_int16_t_s_s(func_41(l_82, g_35), g_68.f0)))
    {
        int l_85 = 0L;
        union U0 l_97[3][1][8] = {{{{0L}, {0L}, {0x0C8B8AFEL}, {-1L}, {0xFCBFA339L}, {-1L}, {0x0C8B8AFEL}, {0L}}}, {{{0L}, {0L}, {0x0C8B8AFEL}, {-1L}, {0xFCBFA339L}, {-1L}, {0x0C8B8AFEL}, {0L}}}, {{{0L}, {0L}, {0x0C8B8AFEL}, {-1L}, {0xFCBFA339L}, {-1L}, {0x0C8B8AFEL}, {0L}}}};
        unsigned l_119 = 0x07418113L;
        long long l_135 = 0x3A22099EBF928973LL;
        int *l_162 = (void*)0;
        int i, j, k;
        (*l_40) = ((safe_mod_func_uint16_t_u_u(func_51(g_68.f0, (((9L >= (*l_40)) > 0UL) | g_68.f0), (p_30 != (l_85 > 0x8F04B7466640DD14LL))), p_30)) == (-6L));
        (*g_34) = (safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(0xCABD119E2D4DC450LL, (safe_div_func_uint16_t_u_u((g_68.f0 != (g_92 != &g_93)), (func_41((*g_93), (safe_mul_func_uint16_t_u_u((&l_40 != (void*)0), func_41(l_97[2][0][5], g_68.f0)))) | (-4L)))))), 7));
        for (l_82.f0 = 0; (l_82.f0 >= 0); l_82.f0 -= 1)
        {
            short l_113 = 0xF5E9L;
            int *l_114 = &g_35;
            union U0 *l_118 = &l_44;
        }
        for (l_139.f0 = (-17); (l_139.f0 >= (-4)); l_139.f0 = safe_add_func_uint32_t_u_u(l_139.f0, 6))
        {
            int *l_155 = &g_35;
            if ((*l_40))
            {
                int ***l_167 = &l_138;
                (*g_34) = (*g_34);
                if (p_30)
                {
                    long long l_154 = 2L;
                    l_154 = l_85;
                }
                else
                {
                    unsigned char l_168[7] = {0x02L, 0x02L, 0xEEL, 0x02L, 0x02L, 0xEEL, 0x02L};
                    int i;
                    if ((*g_34))
                    {
                        return l_155;


                    }
                    else
                    {
                        (*l_138) = l_155;

                        ;
                        l_155 = &l_85;

                        ;
                        if ((*g_34))
                            break;
                    }

                    ;
                    ;
                    for (l_44.f0 = 0; (l_44.f0 != (-29)); l_44.f0 = safe_sub_func_uint16_t_u_u(l_44.f0, 4))
                    {
                        (*g_34) = (safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u(p_30, 4294967286UL)), p_30));
                        l_162 = (void*)0;
                    }
                    (*g_34) = (safe_add_func_uint16_t_u_u(((func_51(func_41((*g_93), (((func_51((safe_div_func_uint32_t_u_u(func_51((p_30 == (l_167 != (void*)0)), l_168[1], ((*g_92) != (void*)0)), (((!(((g_68.f0 & g_68.f0) != g_68.f0) == g_68.f0)) == 0x2EL) & g_68.f0))), p_30, g_68.f0) != (*l_155)) < 0xE786ADAD851819CCLL) || 1UL)), p_30, g_68.f0) & g_68.f0) != 0xD0BA58DE8A0DB83ALL), p_30));
                    (*l_138) = (**l_167);
                }

                ;
                (*l_138) = l_155;
            }
            else
            {
                return &g_35;


            }

            ;
            (*l_40) = func_41((*l_79), ((**l_138) != g_68.f0));
        }

        ;
    }
    else
    {
        int ***l_174[2][5] = {{&l_138, &l_138, (void*)0, &l_138, &l_138}, {&l_138, &l_138, (void*)0, &l_138, &l_138}};
        int i, j;
        for (l_44.f0 = 0; (l_44.f0 > (-10)); l_44.f0 = safe_sub_func_int32_t_s_s(l_44.f0, 2))
        {
            int l_173 = 0L;
            (*l_40) = (((safe_lshift_func_int16_t_s_s(l_173, 7)) != (**l_138)) ^ (l_174[1][0] == g_175));
        }
        (*l_138) = (void*)0;

        ;
        if ((safe_mod_func_int8_t_s_s((-5L), (safe_lshift_func_uint8_t_u_s((func_51((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((&l_138 == &g_176), ((safe_add_func_int16_t_s_s((g_112 & (safe_mod_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((((func_51(g_68.f0, ((p_30 > g_68.f0) && (safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(p_30, ((g_68.f0 >= g_35) < p_30))), p_30))), l_195) ^ p_30) < g_68.f0) <= g_68.f0), g_68.f0)) || p_30), g_68.f0))), p_30)) == g_68.f0))), 6L)), g_68.f0, p_30) && 65535UL), p_30)))))
        {
            (*l_138) = (*l_138);
            (*l_138) = (void*)0;
        }
        else
        {
            (*l_138) = (*l_138);
        }
    }


    for (l_195 = (-6); (l_195 != (-1)); l_195 = safe_add_func_uint8_t_u_u(l_195, 3))
    {
        unsigned l_202 = 2UL;
        int l_211[10] = {(-9L), 0x0886FBCFL, (-9L), 0x0886FBCFL, (-9L), 0x0886FBCFL, (-9L), 0x0886FBCFL, (-9L), 0x0886FBCFL};
        int **l_214[7][5] = {{(void*)0, &g_34, &l_40, &g_34, &l_40}, {(void*)0, &g_34, &l_40, &g_34, &l_40}, {(void*)0, &g_34, &l_40, &g_34, &l_40}, {(void*)0, &g_34, &l_40, &g_34, &l_40}, {(void*)0, &g_34, &l_40, &g_34, &l_40}, {(void*)0, &g_34, &l_40, &g_34, &l_40}, {(void*)0, &g_34, &l_40, &g_34, &l_40}};
        union U0 l_223 = {-1L};
        unsigned short l_278 = 1UL;
        union U0 **l_291 = &l_79;
        unsigned char l_295 = 5UL;
        int *l_374 = &l_211[6];
        unsigned short l_408 = 0xFA11L;
        int i, j;
        if ((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(l_202, 0xBA012D08A2D788D9LL)), ((*g_92) != (*g_92)))))
        {
            unsigned l_210 = 0xA8F8FD02L;
            for (l_82.f0 = 0; (l_82.f0 <= 2); l_82.f0 += 1)
            {
                (*g_34) = l_202;
                if ((*g_34))
                    break;
                l_211[0] = (4294967295UL || (safe_sub_func_int16_t_s_s((&g_176 == (void*)0), (((g_68.f0 & 0x9A44DA636D3559E7LL) < (safe_mod_func_int64_t_s_s(((g_94.f0 < (-1L)) > (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(g_68.f0)), 250UL))), 0xF27B7FA829B7C7E5LL))) <= l_210))));
            }
        }
        else
        {
            long long l_225 = (-5L);
            int *l_227 = (void*)0;
            union U0 *l_242 = &g_68;
            for (l_44.f0 = 20; (l_44.f0 > 23); l_44.f0 = safe_add_func_int16_t_s_s(l_44.f0, 9))
            {
                unsigned l_224 = 5UL;
                int *l_248 = (void*)0;
                (*g_34) = (l_214[1][0] == (void*)0);
                if (((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u(func_41(l_223, p_30), p_30)), l_224)) | ((p_30 <= (1L || p_30)) < p_30)), l_225)) < 0x9D8ABC68L), 252UL)) & 18446744073709551615UL))
                {
                    int *l_226 = &l_211[4];
                    l_227 = l_226;

                    ;
                }
                else
                {
                    int *l_230 = (void*)0;
                    for (g_35 = 15; (g_35 >= (-26)); g_35--)
                    {
                        return l_230;


                    }
                    if ((p_30 & 4L))
                    {
                        unsigned char l_239[9];
                        int l_243 = 0L;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_239[i] = 4UL;
                        l_230 = l_227;

                        ;
                        l_243 = (safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((func_51(((-1L) <= g_94.f0), g_35, (safe_lshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s(l_239[5], (safe_sub_func_int32_t_s_s((5UL & (g_68.f0 > ((void*)0 == l_242))), (-3L))))), 6))) && p_30), g_68.f0)), p_30));
                        (*g_34) = (safe_div_func_int16_t_s_s(l_224, func_41((**g_92), (safe_mod_func_int32_t_s_s((*g_34), p_30)))));
                        (*l_138) = l_248;

                        ;
                    }
                    else
                    {
                        (*l_138) = l_249;

                        ;
                    }

                    ;
                    ;
                    (*l_138) = l_230;

                    ;
                }
                for (g_35 = 0; (g_35 <= 18); ++g_35)
                {
                    return &g_35;


                }
            }


            ;
            (*l_138) = &g_35;

            ;
        }
        if (func_51(p_30, p_30, g_112))
        {
            (*l_138) = (void*)0;

            ;
        }
        else
        {
            int *l_252 = &l_211[7];
            (*l_249) = p_30;
            (*l_138) = l_252;

            ;
            for (l_44.f0 = 0; (l_44.f0 < 24); l_44.f0 = safe_add_func_int8_t_s_s(l_44.f0, 8))
            {
                int *l_257 = &l_211[8];
                (*l_40) = (safe_sub_func_int32_t_s_s(func_41((*g_93), (l_252 == l_257)), p_30));
            }
            if ((1L > ((safe_lshift_func_uint16_t_u_s(((&l_79 == &g_93) < (p_30 < ((void*)0 != l_260))), g_94.f0)) == p_30)))
            {
                return &g_35;


            }
            else
            {
                union U0 *l_261[7] = {&l_223, &l_82, &l_223, &l_82, &l_223, &l_82, &l_223};
                int i;
                if (p_30)
                    break;

                (*g_34) = (l_261[2] == (*g_92));
            }
        }

        ;
        for (l_202 = 23; (l_202 != 48); ++l_202)
        {
            int *l_270[6][9] = {{&l_211[0], &l_211[0], &g_35, &l_211[0], &l_211[0], &l_211[5], &l_211[0], &l_211[0], &g_35}, {&l_211[0], &l_211[0], &g_35, &l_211[0], &l_211[0], &l_211[5], &l_211[0], &l_211[0], &g_35}, {&l_211[0], &l_211[0], &g_35, &l_211[0], &l_211[0], &l_211[5], &l_211[0], &l_211[0], &g_35}, {&l_211[0], &l_211[0], &g_35, &l_211[0], &l_211[0], &l_211[5], &l_211[0], &l_211[0], &g_35}, {&l_211[0], &l_211[0], &g_35, &l_211[0], &l_211[0], &l_211[5], &l_211[0], &l_211[0], &g_35}, {&l_211[0], &l_211[0], &g_35, &l_211[0], &l_211[0], &l_211[5], &l_211[0], &l_211[0], &g_35}};
            unsigned char l_321 = 2UL;
            long long l_322 = 0x0980935E24448C1BLL;
            union U0 ***l_347 = (void*)0;
            int ***l_375 = &l_138;
            int i, j;
            if (p_30)
            {
                int *l_271 = &l_211[6];
                (**l_260) = (func_51((safe_sub_func_int32_t_s_s(0x4A459017L, ((safe_sub_func_uint64_t_u_u(g_35, (p_30 > (65532UL > g_68.f0)))) & (safe_mod_func_uint16_t_u_u(((*l_249) <= g_112), (p_30 | (**l_260))))))), g_35, g_35) & p_30);
                for (g_68.f0 = 0; (g_68.f0 <= 9); g_68.f0 += 1)
                {
                    union U0 **l_289[5];
                    int *l_292 = &l_211[6];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_289[i] = (void*)0;
                    if (l_211[g_68.f0])
                    {
                        int *l_272 = &g_35;
                        (*l_138) = l_270[4][8];
                        g_34 = l_271;

                        ;
                        (*l_138) = l_272;

                        ;
                        (*l_138) = (*l_138);
                    }
                    else
                    {
                        int *l_273 = &g_35;
                        (*l_138) = l_273;

                        ;
                        (*l_138) = (void*)0;

                        ;
                        if (p_30)
                            continue;
                    }

                    ;
                    (**l_260) = (g_68.f0 ^ (p_30 != g_68.f0));
                    if ((((((safe_add_func_uint8_t_u_u(g_94.f0, (((0x8B66DF69DBDDC878LL && 0UL) <= ((safe_rshift_func_uint8_t_u_s((l_278 == 247UL), 5)) < (safe_add_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(1UL, (0UL || (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(l_287[5][0], 5)), 6))))), (safe_unary_minus_func_int32_t_s(p_30)))))) ^ l_211[g_68.f0]))) == g_35) >= 1L) < g_68.f0) ^ 65535UL))
                    {
                        union U0 ***l_290[8] = {&l_78[0], &l_78[0], &l_78[0], &l_78[0], &l_78[0], &l_78[0], &l_78[0], &l_78[0]};
                        int i;
                        l_291 = l_289[2];

                        ;
                        l_292 = &g_35;

                        ;
                    }
                    else
                    {
                        l_270[4][8] = l_271;
                    }

                    ;
                }


                ;
                ;
                for (l_82.f0 = 0; (l_82.f0 < 17); l_82.f0 = safe_add_func_uint16_t_u_u(l_82.f0, 6))
                {
                    unsigned char l_296 = 255UL;
                    if ((*g_34))
                        break;
                    if (func_51(g_94.f0, g_68.f0, l_295))
                    {
                        return &g_35;



                    }
                    else
                    {
                        if (l_296)
                            break;
                    }
                }
            }
            else
            {
                int *l_338 = (void*)0;
                if ((safe_add_func_int64_t_s_s(g_112, g_68.f0)))
                {
                    short l_313 = 0L;
                    for (p_30 = 0; (p_30 < 50); p_30 = safe_add_func_int8_t_s_s(p_30, 4))
                    {
                        unsigned long long l_318 = 18446744073709551608UL;
                        int *l_337 = &l_211[0];
                        l_318 = (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((65535UL > p_30), p_30)) && 65535UL), (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((p_30 == l_313), (!8L))), 1)), 10)))) & (((safe_lshift_func_int16_t_s_s(g_112, 13)) >= (safe_add_func_int8_t_s_s((p_30 == 9UL), p_30))) | p_30)), p_30));
                        (*g_34) = (safe_div_func_int8_t_s_s((l_321 != (p_30 >= l_322)), ((*g_34) && (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(0xCDL, (+g_112))), (safe_mul_func_int16_t_s_s(((~(safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint32_t_u_u(0x2358411FL, ((safe_mul_func_int16_t_s_s(p_30, g_68.f0)) < p_30))) ^ p_30), 5))) <= 0xF8D497B3AE037B79LL), g_68.f0)))), (-6L))))));
                        (*l_260) = l_337;

                        ;
                        (**l_260) = (*g_34);
                    }

                    ;
                }
                else
                {
                    long long l_341 = (-8L);
                    union U0 l_344 = {-1L};
                    g_34 = &g_35;

                    ;
                    if (p_30)
                    {
                        (*l_260) = l_338;

                        ;
                        (*g_34) = (safe_div_func_int8_t_s_s(((0x55B7L != (l_341 ^ ((safe_sub_func_uint8_t_u_u(func_41(l_344, p_30), (l_341 > p_30))) != (safe_mod_func_uint8_t_u_u(g_94.f0, g_68.f0))))) > g_68.f0), 255UL));
                    }
                    else
                    {
                        if (l_344.f0)
                            break;
                        (*g_34) = (*g_34);
                        (*l_249) = (g_35 >= 6UL);
                        (*l_260) = l_270[4][8];

                        ;
                    }

                    ;
                }

                ;
            }


            ;
            ;
            ;
            if (func_51(g_94.f0, (!(0x0FD3B0A5F733A1D2LL ^ (l_347 != l_347))), (0x31L | 1L)))
            {
                char l_352[7] = {(-6L), 0xCCL, (-6L), 0xCCL, (-6L), 0xCCL, (-6L)};
                int ***l_357[6] = {(void*)0, (void*)0, &l_138, (void*)0, (void*)0, &l_138};
                union U0 *l_369 = &l_139;
                char l_384 = 0x97L;
                int i;
                if ((((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((0xF5C7FB69L & l_352[2]), (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(0xB0L, p_30)), (&g_176 == l_357[1]))))), (*g_34))) == g_68.f0) ^ (safe_div_func_int16_t_s_s(g_112, p_30))))
                {
                    union U0 **l_362 = &l_79;
                    int *l_364 = &g_35;
                    for (l_139.f0 = 5; (l_139.f0 == 0); l_139.f0 = safe_sub_func_int64_t_s_s(l_139.f0, 9))
                    {
                        int l_363[10][5] = {{(-3L), 0xE93B2AEEL, 0xA62D46D3L, 0L, (-1L)}, {(-3L), 0xE93B2AEEL, 0xA62D46D3L, 0L, (-1L)}, {(-3L), 0xE93B2AEEL, 0xA62D46D3L, 0L, (-1L)}, {(-3L), 0xE93B2AEEL, 0xA62D46D3L, 0L, (-1L)}, {(-3L), 0xE93B2AEEL, 0xA62D46D3L, 0L, (-1L)}, {(-3L), 0xE93B2AEEL, 0xA62D46D3L, 0L, (-1L)}, {(-3L), 0xE93B2AEEL, 0xA62D46D3L, 0L, (-1L)}, {(-3L), 0xE93B2AEEL, 0xA62D46D3L, 0L, (-1L)}, {(-3L), 0xE93B2AEEL, 0xA62D46D3L, 0L, (-1L)}, {(-3L), 0xE93B2AEEL, 0xA62D46D3L, 0L, (-1L)}};
                        int i, j;
                        l_363[4][3] = ((void*)0 == l_362);
                    }
                    return l_364;



                }
                else
                {
                    char l_372 = (-9L);
                    int *l_386 = &g_35;
                    if ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(g_94.f0, 9)), ((l_369 == (*g_92)) > (safe_mod_func_uint64_t_u_u(0x24BA8217980DC176LL, (l_372 | (~0xEA12880AL))))))))
                    {
                        (*g_34) = g_373;
                        (*l_260) = (void*)0;

                        ;
                        return &g_35;



                    }
                    else
                    {
                        (*l_260) = l_374;

                        ;
                        (*l_249) = ((void*)0 == l_375);
                        g_385 = ((p_30 >= ((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s(func_41((*l_369), g_94.f0), p_30)), ((((safe_mul_func_int16_t_s_s(0x1E1DL, ((65530UL < g_373) >= l_384))) > l_372) || g_373) <= g_373))) & p_30), 8)) < 0xB0DCL)) & p_30);
                        g_34 = l_386;

                        ;
                    }

                    ;
                    ;
                }

                ;
                ;
                (*l_374) = (&l_291 == (void*)0);
                return &g_35;


            }
            else
            {
                int *l_391[2][5][5] = {{{&g_35, &l_211[6], &g_35, &g_35, (void*)0}, {&g_35, &l_211[6], &g_35, &g_35, (void*)0}, {&g_35, &l_211[6], &g_35, &g_35, (void*)0}, {&g_35, &l_211[6], &g_35, &g_35, (void*)0}, {&g_35, &l_211[6], &g_35, &g_35, (void*)0}}, {{&g_35, &l_211[6], &g_35, &g_35, (void*)0}, {&g_35, &l_211[6], &g_35, &g_35, (void*)0}, {&g_35, &l_211[6], &g_35, &g_35, (void*)0}, {&g_35, &l_211[6], &g_35, &g_35, (void*)0}, {&g_35, &l_211[6], &g_35, &g_35, (void*)0}}};
                union U0 l_411 = {-1L};
                int i, j, k;
                for (p_30 = 0; (p_30 <= 40); ++p_30)
                {
                    int l_389 = 1L;
                    int *l_399 = (void*)0;
                }
                for (g_68.f0 = 0; (g_68.f0 > 20); g_68.f0 = safe_add_func_uint32_t_u_u(g_68.f0, 9))
                {
                    int *l_416 = (void*)0;
                    if ((((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(0x7BDE48DDL, (!(safe_mod_func_uint16_t_u_u(((~(*l_374)) && l_408), (safe_sub_func_int8_t_s_s((p_30 >= (*g_34)), g_94.f0))))))), 6)) || 0x3D20593E73978AA8LL) ^ p_30))
                    {
                        l_78[0] = &l_79;
                    }
                    else
                    {
                        int *l_417 = &l_211[7];
                        (*g_34) = (0L || (p_30 != (safe_add_func_uint32_t_u_u(g_35, g_35))));
                        l_391[0][3][4] = l_416;
                        l_417 = (**l_375);

                        ;
                    }
                }
            }
            return &g_35;



        }
        return &g_35;


    }
    (*l_138) = (*l_260);

    ;
    return &g_35;


}







static char func_41(union U0 p_42, int p_43)
{
    unsigned l_57 = 2UL;
    (*g_34) = (g_35 && ((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((!(((func_51(p_43, (safe_mul_func_int8_t_s_s(l_57, l_57)), (g_35 == ((l_57 == (((1L > p_42.f0) && l_57) > 1L)) && 0x53A2L))) != l_57) < 0x8B7DD145L) | l_57)), g_68.f0)) <= 8UL), 8)), p_43)) == 0xEA3C9199ED189098LL));
    return p_43;
}







static unsigned long long func_51(unsigned p_52, unsigned short p_53, int p_54)
{
    char l_62 = 0L;
    int *l_70[9][10] = {{&g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35}};
    int **l_69 = &l_70[8][5];
    int i, j;
    if ((safe_mod_func_int64_t_s_s(l_62, 0x932DA3BB1D4416DALL)))
    {
        int **l_63 = &g_34;
        int ***l_64 = (void*)0;
        int ***l_65 = &l_63;
        (*l_65) = l_63;
    }
    else
    {
        union U0 *l_67 = &g_68;
        union U0 **l_66 = &l_67;
        (*g_34) = 0x1EC6C048L;
        (*l_66) = (void*)0;

        ;
    }
    (*l_69) = &g_35;
    return g_68.f0;
}





int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    transparent_crc(g_651.f0, "g_651.f0", print_hash_value);
    transparent_crc(g_657, "g_657", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_672[i], "g_672[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_693, "g_693", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_765[i], "g_765[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
