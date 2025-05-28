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
   int f0;
   unsigned short f1;
   int f2;
   long long f3;
};


static char g_2 = 0x95L;
static int g_45 = (-1L);
static int *g_57 = &g_45;
static int **g_56 = &g_57;
static struct S0 g_67[5] = {{0L,0UL,1L,0x91F101FBECDB5955LL}, {0x06574F20L,1UL,1L,0xB104B5BC6833E1ABLL}, {0L,0UL,1L,0x91F101FBECDB5955LL}, {0x06574F20L,1UL,1L,0xB104B5BC6833E1ABLL}, {0L,0UL,1L,0x91F101FBECDB5955LL}};
static struct S0 *g_66 = &g_67[0];
static struct S0 g_102[3] = {{0L,3UL,0x2693CE43L,0xCF78B72995F56426LL}, {0L,3UL,0x2693CE43L,0xCF78B72995F56426LL}, {0L,3UL,0x2693CE43L,0xCF78B72995F56426LL}};
static unsigned g_342 = 0x2720136BL;
static int g_423 = (-5L);
static int g_444 = 0xD99D21AEL;
static unsigned char g_473 = 0x36L;
static struct S0 g_841 = {-4L,1UL,0x3A9638E3L,0xD76492CBC7C7D1B2LL};
static int g_845[9][4][2] = {{{(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}}, {{(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}}, {{(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}}, {{(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}}, {{(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}}, {{(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}}, {{(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}}, {{(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}}, {{(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}, {(-1L), 1L}}};
static unsigned g_884 = 0x0ECB98D5L;
static unsigned short g_885 = 0x6B8BL;
static struct S0 **g_924 = &g_66;
static struct S0 ***g_923 = &g_924;
static unsigned long long g_987 = 0x2F7D4261E9967C13LL;



static int func_1(void);
static unsigned long long func_3(short p_4, short p_5);
static struct S0 func_6(char p_7);
static int func_9(int p_10, int p_11);
static int func_12(short p_13, const unsigned short p_14, unsigned p_15, long long p_16);
static char func_17(unsigned p_18);
static unsigned short func_21(unsigned long long p_22, long long p_23, int p_24);
static char func_27(int p_28, unsigned p_29);
static const unsigned char func_30(short p_31);
static long long func_34(short p_35, short p_36);
static int func_1(void)
{
    char l_838[2];
    int i;
    for (i = 0; i < 2; i++)
        l_838[i] = 0x6DL;
    (*g_57) = ((g_2 && ((func_3(((func_6((g_2 == g_2)) , 0xF8L) >= (func_30(g_102[1].f1) , l_838[1])), ((safe_mod_func_int32_t_s_s((g_67[0].f2 && l_838[1]), l_838[0])) > g_67[0].f2)) != g_473) , l_838[1])) > l_838[1]);
    return g_987;
}







static unsigned long long func_3(short p_4, short p_5)
{
    int *l_844 = &g_841.f2;
    int ***l_848[6][8][5] = {{{&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}}, {{&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}}, {{&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}}, {{&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}}, {{&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}}, {{&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}, {&g_56, &g_56, &g_56, &g_56, &g_56}}};
    short l_852 = 7L;
    unsigned char l_883 = 0x8EL;
    struct S0 l_894 = {0x9DAC08F8L,0x81F9L,0L,0x2A1F70E7C51873DALL};
    struct S0 ***l_954[10];
    long long l_969[4];
    unsigned l_973 = 0x35BF4DD2L;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_954[i] = &g_924;
    for (i = 0; i < 4; i++)
        l_969[i] = 1L;
    (*g_66) = g_841;
    (*g_66) = (*g_66);
    return g_885;
}







static struct S0 func_6(char p_7)
{
    unsigned l_8[1];
    int l_804 = (-1L);
    int *l_823 = &g_67[0].f0;
    short l_830 = 0xCA77L;
    struct S0 *l_837 = &g_67[2];
    int i;
    for (i = 0; i < 1; i++)
        l_8[i] = 4294967295UL;
    for (p_7 = 0; (p_7 <= 0); p_7 += 1)
    {
        struct S0 l_812 = {0x51CE2AD7L,65535UL,0x237AB7BAL,-1L};
        struct S0 **l_835[5] = {&g_66, &g_66, &g_66, &g_66, &g_66};
        int *l_836 = &g_67[0].f0;
        int i;
    }
    l_837 = l_837;
    return (*l_837);
}







static int func_9(int p_10, int p_11)
{
    unsigned l_802 = 0xD4D28B24L;
    int *l_803 = &g_45;
    (*g_66) = (*g_66);
    (*l_803) |= l_802;
    for (g_342 = 0; (g_342 <= 2); g_342 += 1)
    {
        for (g_2 = 2; (g_2 >= 0); g_2 -= 1)
        {
            g_67[0].f2 = (-4L);
            (*g_56) = (void*)0;

            ;
        }
    }
    return p_10;
}







static int func_12(short p_13, const unsigned short p_14, unsigned p_15, long long p_16)
{
    unsigned char l_529 = 255UL;
    int l_540[5][6][8] = {{{0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}}, {{0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}}, {{0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}}, {{0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}}, {{0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}, {0L, 0x402F61F2L, (-1L), (-4L), 0L, 1L, (-7L), 1L}}};
    struct S0 ***l_591 = (void*)0;
    int l_618 = 1L;
    short l_635 = (-4L);
    unsigned long long l_671[10][1] = {{0xBA28C3FE9AC5E12DLL}, {0xBA28C3FE9AC5E12DLL}, {0xBA28C3FE9AC5E12DLL}, {0xBA28C3FE9AC5E12DLL}, {0xBA28C3FE9AC5E12DLL}, {0xBA28C3FE9AC5E12DLL}, {0xBA28C3FE9AC5E12DLL}, {0xBA28C3FE9AC5E12DLL}, {0xBA28C3FE9AC5E12DLL}, {0xBA28C3FE9AC5E12DLL}};
    long long l_789 = (-1L);
    int l_792 = 1L;
    int l_797[5][9] = {{(-4L), (-4L), 0xE13E2BC3L, (-4L), (-4L), 0xE13E2BC3L, (-4L), (-4L), 0xE13E2BC3L}, {(-4L), (-4L), 0xE13E2BC3L, (-4L), (-4L), 0xE13E2BC3L, (-4L), (-4L), 0xE13E2BC3L}, {(-4L), (-4L), 0xE13E2BC3L, (-4L), (-4L), 0xE13E2BC3L, (-4L), (-4L), 0xE13E2BC3L}, {(-4L), (-4L), 0xE13E2BC3L, (-4L), (-4L), 0xE13E2BC3L, (-4L), (-4L), 0xE13E2BC3L}, {(-4L), (-4L), 0xE13E2BC3L, (-4L), (-4L), 0xE13E2BC3L, (-4L), (-4L), 0xE13E2BC3L}};
    int *l_798 = (void*)0;
    int *l_799 = (void*)0;
    int *l_800 = (void*)0;
    int *l_801 = &g_67[0].f2;
    int i, j, k;
    if (p_16)
    {
        unsigned char l_543 = 251UL;
        struct S0 **l_581 = (void*)0;
        struct S0 ***l_580 = &l_581;
        unsigned short l_584 = 0xE4AAL;
        int l_617 = 0x31B66EA6L;
        unsigned l_657 = 0xE54420F2L;
        int **l_687 = &g_57;
        for (g_45 = 0; (g_45 < 13); g_45++)
        {
            const unsigned long long l_532 = 0xA926589205E0FE0ELL;
            int l_555 = 0xB02EFEC6L;
            const struct S0 l_564 = {0xF037CF13L,0UL,0x5A9F2167L,-8L};
            char l_609[9] = {0x36L, (-6L), 0x36L, (-6L), 0x36L, (-6L), 0x36L, (-6L), 0x36L};
            int i;
        }
        if (((p_13 , (9UL || p_13)) , l_635))
        {
            char l_656 = (-1L);
            int **l_688 = &g_57;
            if ((**g_56))
            {
                short l_646 = 1L;
                int *l_655 = &g_102[1].f2;
                const struct S0 *l_674[6][7][3] = {{{(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}}, {{(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}}, {{(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}}, {{(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}}, {{(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}}, {{(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}, {(void*)0, &g_67[1], &g_67[2]}}};
                const struct S0 **l_673 = &l_674[1][6][2];
                const struct S0 *** const l_672 = &l_673;
                int i, j, k;
lbl_660:
                l_617 ^= (safe_div_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((((safe_add_func_int8_t_s_s(((((*g_56) == (*g_56)) , ((func_21(p_13, (safe_div_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(func_17(((l_646 ^ (safe_add_func_uint8_t_u_u(g_102[1].f2, g_423))) , g_67[0].f1)), ((-1L) && g_102[1].f0))), p_15)), g_473) != p_16) | l_543)) , g_45), (-1L))) == 0L) , (**g_56)) , p_15), p_13)) > 6UL), g_473));
                if ((0x16C4837A16BE1920LL >= (safe_lshift_func_int8_t_s_s(((l_540[4][3][2] | (((g_342 > 1L) | g_102[1].f1) , p_14)) , p_15), (((safe_add_func_int16_t_s_s(g_102[1].f0, g_67[0].f3)) | g_2) >= p_14)))))
                {
                    for (l_646 = 0; (l_646 >= 8); l_646++)
                    {
                        (*g_56) = l_655;

                        ;
                        if (l_656)
                            break;
                        if ((**g_56))
                            break;
                        (*g_56) = (void*)0;

                        ;
                    }

                    ;
                    (*l_655) &= (l_657 , p_16);
                }
                else
                {
                    struct S0 ***l_664 = (void*)0;
                    int l_670 = 0x59A0AD32L;
                    for (p_13 = 0; (p_13 < 2); p_13 = safe_add_func_uint32_t_u_u(p_13, 8))
                    {
                        if (g_342)
                            goto lbl_660;
                        (*g_56) = (*g_56);
                    }
                    for (g_423 = (-10); (g_423 >= (-23)); g_423--)
                    {
                        long long l_663 = 0x8D315FFCEE44FD8FLL;
                        unsigned l_665 = 1UL;
                        (**g_56) = func_17(func_21(l_663, (9UL != (func_21(((p_15 , l_664) == (void*)0), g_473, l_665) == (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((l_670 != p_14), 0xE964031AL)) >= 0x138EL), l_665)))), l_671[3][0]));
                        (*l_655) = (p_15 < g_102[1].f0);
                        (*g_56) = l_655;

                        ;
                        return p_15;
                    }
                    (*l_655) = func_27((l_672 == l_664), ((safe_mul_func_uint8_t_u_u(p_13, ((+((~p_15) <= p_14)) , func_17(l_656)))) <= (safe_mod_func_uint16_t_u_u((((&g_66 == (void*)0) < p_15) | g_102[1].f0), p_16))));
                }

                ;
                (*l_655) = l_617;
            }
            else
            {
                unsigned l_689[10] = {0x2A93CC69L, 0x02876D64L, 0x2A93CC69L, 0x02876D64L, 0x2A93CC69L, 0x02876D64L, 0x2A93CC69L, 0x02876D64L, 0x2A93CC69L, 0x02876D64L};
                int i;
                l_540[4][3][2] ^= (((safe_sub_func_int8_t_s_s(((g_45 == p_15) || (((((g_102[1].f0 && p_15) | ((g_102[1].f1 | (((safe_add_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(((((safe_mul_func_int8_t_s_s((l_687 != l_688), (p_15 <= (!p_16)))) | 7UL) == l_689[2]) > g_45), (**l_688))) & g_67[0].f0), (**l_687))) != 0x36L) , 0x7C6C958F80BF8E54LL)) | l_618)) , &g_57) == (void*)0) > p_14)), p_16)) <= 9UL) , 0x90AB741CL);
            }

            ;
        }
        else
        {
            struct S0 *l_707[3][8] = {{&g_67[0], &g_67[4], &g_102[0], &g_102[1], &g_102[1], &g_102[0], &g_67[4], &g_67[0]}, {&g_67[0], &g_67[4], &g_102[0], &g_102[1], &g_102[1], &g_102[0], &g_67[4], &g_67[0]}, {&g_67[0], &g_67[4], &g_102[0], &g_102[1], &g_102[1], &g_102[0], &g_67[4], &g_67[0]}};
            int l_718 = 0x2A351190L;
            struct S0 * const *l_757 = (void*)0;
            struct S0 * const **l_756 = &l_757;
            int i, j;
            (*l_687) = &l_540[4][3][2];

            ;
            (**l_687) = (safe_div_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s(((p_15 ^ ((p_15 > g_423) >= (safe_mul_func_int8_t_s_s((p_13 == (0x4D32C556L && (safe_unary_minus_func_uint32_t_u(p_13)))), (safe_mod_func_int16_t_s_s(func_21(p_13, (l_707[2][5] == l_707[2][5]), p_13), g_102[1].f2)))))) < g_67[0].f3), 0xA3ACL)), g_67[0].f2)), p_14)), (-4L))), p_16)) | p_15), 0x69L));
            if (p_15)
            {
                return p_13;


            }
            else
            {
                char l_724[1];
                struct S0 **l_728 = &g_66;
                struct S0 ***l_745 = &l_581;
                int l_771[3][10] = {{0xAFC5F376L, (-1L), 8L, (-1L), 0xAFC5F376L, (-1L), 8L, (-1L), 0xAFC5F376L, (-1L)}, {0xAFC5F376L, (-1L), 8L, (-1L), 0xAFC5F376L, (-1L), 8L, (-1L), 0xAFC5F376L, (-1L)}, {0xAFC5F376L, (-1L), 8L, (-1L), 0xAFC5F376L, (-1L), 8L, (-1L), 0xAFC5F376L, (-1L)}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_724[i] = 1L;
                if (func_34(p_15, p_13))
                {
                    unsigned char l_712 = 0UL;
                    long long l_723 = 1L;
                    struct S0 l_731 = {9L,65526UL,0x960622A7L,-4L};
                    if ((safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(l_712, (safe_unary_minus_func_uint64_t_u((safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((p_15 , p_13), g_102[1].f2)), l_635)))))) != l_718), (safe_mul_func_uint8_t_u_u(((g_473 >= (((g_2 == (safe_rshift_func_uint16_t_u_s((((p_13 != 0xBEL) || l_723) <= p_13), g_67[0].f2))) > 0x839A9FB3758D534ALL) > l_724[0])) == 1UL), g_67[0].f0)))))
                    {
                        return p_14;


                    }
                    else
                    {
                        unsigned l_725 = 3UL;
                        int l_729 = 0x13004127L;
                        l_540[4][3][2] |= l_725;
                        if (g_45)
                            goto lbl_730;
lbl_730:
                        l_729 = (l_725 , (((0x56FF73E6L ^ (**l_687)) | p_16) < (l_728 != &g_66)));
                        l_731 = (*g_66);
                        return p_16;


                    }
                }
                else
                {
                    short l_734 = 0xF9A7L;
                    for (p_13 = 13; (p_13 != (-14)); --p_13)
                    {
                        struct S0 **l_741 = &l_707[2][5];
                        int *l_742 = &l_718;
                        (*l_742) |= (((func_30(l_734) >= g_67[0].f3) < (((safe_div_func_uint64_t_u_u(l_671[8][0], (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_13, 1)), p_16)))) , &g_66) == &g_66)) != (((void*)0 != l_741) ^ 18446744073709551615UL));
                    }
                    (**l_687) = ((**l_687) & (safe_mod_func_int16_t_s_s((0UL | (l_718 >= func_34((&l_581 == l_745), g_102[1].f3))), 0xF297L)));
                    if (l_724[0])
                    {
                        return p_16;


                    }
                    else
                    {
                        const unsigned l_770 = 4294967288UL;
                        (*g_57) = (((g_444 <= (~p_15)) >= (l_529 & (((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_add_func_int64_t_s_s(l_724[0], (safe_mod_func_int16_t_s_s((l_756 != ((((safe_sub_func_int8_t_s_s(((**g_56) && ((((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_342, ((((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u(g_102[1].f2, 6)) != (safe_div_func_int32_t_s_s(p_16, (**l_687)))), 14)) , p_15) && p_16) , p_15))), l_718)) > l_770) , l_770) < l_770)), 0x0FL)) , (*g_66)) , 0xFD8C413AL) , (void*)0)), (**l_687))))) <= 0x4523L), p_14)), g_67[0].f3)) | 0x1C5267EB99B6F5DBLL) | 8UL))) >= 0L);
                    }
                }
                l_771[0][8] = 0x9CEECADFL;
                (**g_56) = (**l_687);
                if (l_543)
                    goto lbl_774;
                (**l_728) = (*g_66);
            }
        }

        ;
lbl_774:
        l_540[4][3][2] = (safe_rshift_func_uint16_t_u_u(((*g_66) , g_473), 0));
        (*g_56) = (*g_56);
    }
    else
    {
        (*g_57) &= (safe_mul_func_uint16_t_u_u(0x9D87L, ((safe_lshift_func_int16_t_s_s((((safe_div_func_int64_t_s_s((((safe_mod_func_int32_t_s_s(l_618, ((g_342 <= (((l_671[5][0] < (safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(p_16, ((*g_66) , (safe_add_func_uint64_t_u_u(l_789, ((safe_rshift_func_uint16_t_u_u((0x6EL ^ ((g_67[0].f3 == p_14) , g_102[1].f1)), 5)) ^ 0x92L)))))), l_792))) , g_102[1].f0) , p_13)) ^ g_2))) < p_16) ^ p_13), p_14)) | g_423) , p_13), 0)) , g_342)));
    }

    ;
    (*l_801) ^= (((((safe_mul_func_int8_t_s_s((l_671[3][0] , (((p_13 > ((~(+l_540[0][5][3])) <= (safe_mul_func_int64_t_s_s(p_16, (((((p_15 < ((void*)0 != &g_102[1])) , l_618) ^ p_14) > g_2) == g_102[1].f2))))) == 1UL) || g_444)), l_797[1][1])) ^ 0x30L) && g_102[1].f3) <= 0x8DBF8DB9L) < p_15);
    return p_13;


}







static char func_17(unsigned p_18)
{
    const int *l_512 = &g_102[1].f2;
    const int **l_513 = &l_512;
    int l_524 = 0x96EE0FD7L;
    (*l_513) = l_512;
    l_524 ^= (((safe_sub_func_uint32_t_u_u(((**l_513) || (*l_512)), (!(((func_34((safe_lshift_func_uint8_t_u_u((p_18 == ((**l_513) != (safe_add_func_uint32_t_u_u((g_67[0].f3 >= ((safe_add_func_uint64_t_u_u((((-4L) && p_18) || 2L), (safe_sub_func_int32_t_s_s((!((g_444 || g_102[1].f0) && (*l_512))), g_102[1].f2)))) < p_18)), p_18)))), p_18)), g_342) == p_18) , 0UL) < 6L)))) | 4294967295UL) & p_18);
    return (**l_513);
}







static unsigned short func_21(unsigned long long p_22, long long p_23, int p_24)
{
    unsigned short l_253 = 0xCCD0L;
    struct S0 **l_256[6][3][5] = {{{(void*)0, (void*)0, &g_66, &g_66, (void*)0}, {(void*)0, (void*)0, &g_66, &g_66, (void*)0}, {(void*)0, (void*)0, &g_66, &g_66, (void*)0}}, {{(void*)0, (void*)0, &g_66, &g_66, (void*)0}, {(void*)0, (void*)0, &g_66, &g_66, (void*)0}, {(void*)0, (void*)0, &g_66, &g_66, (void*)0}}, {{(void*)0, (void*)0, &g_66, &g_66, (void*)0}, {(void*)0, (void*)0, &g_66, &g_66, (void*)0}, {(void*)0, (void*)0, &g_66, &g_66, (void*)0}}, {{(void*)0, (void*)0, &g_66, &g_66, (void*)0}, {(void*)0, (void*)0, &g_66, &g_66, (void*)0}, {(void*)0, (void*)0, &g_66, &g_66, (void*)0}}, {{(void*)0, (void*)0, &g_66, &g_66, (void*)0}, {(void*)0, (void*)0, &g_66, &g_66, (void*)0}, {(void*)0, (void*)0, &g_66, &g_66, (void*)0}}, {{(void*)0, (void*)0, &g_66, &g_66, (void*)0}, {(void*)0, (void*)0, &g_66, &g_66, (void*)0}, {(void*)0, (void*)0, &g_66, &g_66, (void*)0}}};
    unsigned l_277 = 0x69F1D021L;
    int **l_297 = &g_57;
    int l_343 = 0x97B7D9C6L;
    unsigned l_407 = 0xF367FDDFL;
    unsigned l_417[10][9] = {{1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}};
    unsigned l_439 = 0UL;
    char l_491 = 0x5CL;
    unsigned char l_504 = 9UL;
    int i, j, k;
    (**g_56) = ((0x090DL < ((~l_253) >= p_23)) != g_67[0].f2);
    (**g_56) = (0xAEBAF2F5L != (safe_lshift_func_uint8_t_u_u(g_102[1].f1, (p_24 <= func_34(((void*)0 == l_256[4][2][4]), (((l_253 , (safe_mul_func_int16_t_s_s(l_253, (safe_div_func_uint8_t_u_u((l_253 ^ func_34(g_67[0].f1, g_45)), 0xE0L))))) > p_24) , g_102[1].f3))))));
    for (p_22 = 8; (p_22 <= 56); ++p_22)
    {
        short l_278 = (-7L);
        unsigned l_327 = 6UL;
        struct S0 l_369[4][7][4] = {{{{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}}, {{{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}}, {{{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}}, {{{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}, {{0L,0x9F4FL,0L,-5L}, {4L,0xDF2EL,7L,0x7ABAE8BA9BF633C7LL}, {0x7B2CED66L,1UL,0xD2ED4B8AL,-9L}, {1L,65530UL,0L,9L}}}};
        struct S0 **l_382 = &g_66;
        unsigned long long l_459 = 2UL;
        const int *l_493 = &g_102[1].f0;
        int i, j, k;
    }
    return g_102[1].f3;
}







static char func_27(int p_28, unsigned p_29)
{
    unsigned long long l_252[10] = {0x0916D7C74E412BC6LL, 0x0916D7C74E412BC6LL, 0UL, 0x0916D7C74E412BC6LL, 0x0916D7C74E412BC6LL, 0UL, 0x0916D7C74E412BC6LL, 0x0916D7C74E412BC6LL, 0UL, 0x0916D7C74E412BC6LL};
    int i;
    (*g_57) ^= (l_252[7] || l_252[7]);
    (*g_56) = (*g_56);
    for (p_28 = 0; p_28 < 5; p_28 += 1)
    {
        struct S0 tmp = {0x91E436CFL,0xED52L,6L,4L};
        g_67[p_28] = tmp;
    }
    return g_102[1].f1;
}







static const unsigned char func_30(short p_31)
{
    unsigned long long l_68 = 0x16A8E8C0996BD0C7LL;
    struct S0 ** const l_75 = &g_66;
    int l_77 = 0x72E3E38FL;
    short l_94 = (-1L);
    int l_125 = 0xBF0F89DEL;
    long long l_228 = 0xF7B843D4B945211CLL;
    const unsigned l_229[6] = {18446744073709551606UL, 0xE530D105L, 18446744073709551606UL, 0xE530D105L, 18446744073709551606UL, 0xE530D105L};
    int *l_244 = (void*)0;
    int i;
    for (g_45 = 0; (g_45 <= (-15)); g_45 = safe_sub_func_int8_t_s_s(g_45, 8))
    {
        int *l_76[3][4] = {{&g_67[0].f2, &g_67[0].f2, &g_45, &g_67[0].f2}, {&g_67[0].f2, &g_67[0].f2, &g_45, &g_67[0].f2}, {&g_67[0].f2, &g_67[0].f2, &g_45, &g_67[0].f2}};
        int l_80 = 0x2B513AA7L;
        const struct S0 l_117[6] = {{6L,1UL,0xAA3471AFL,0x62EB4CE563FEC5C9LL}, {6L,1UL,0xAA3471AFL,0x62EB4CE563FEC5C9LL}, {6L,1UL,0xAA3471AFL,0x62EB4CE563FEC5C9LL}, {6L,1UL,0xAA3471AFL,0x62EB4CE563FEC5C9LL}, {6L,1UL,0xAA3471AFL,0x62EB4CE563FEC5C9LL}, {6L,1UL,0xAA3471AFL,0x62EB4CE563FEC5C9LL}};
        long long l_147 = 0x3B20F3236F7AE06BLL;
        int i, j;
    }
    l_244 = (*g_56);


    for (g_45 = 0; (g_45 <= 2); g_45 += 1)
    {
        int *l_251 = &g_102[g_45].f2;
        int i;
        g_102[g_45] = g_102[g_45];
        (*l_251) = ((safe_sub_func_int8_t_s_s(g_102[1].f0, ((((safe_mul_func_uint8_t_u_u(((g_102[g_45].f3 || p_31) <= (safe_add_func_uint16_t_u_u(((&g_102[g_45] == (void*)0) > (~(*l_244))), p_31))), p_31)) > p_31) == g_67[0].f1) | (*g_57)))) > (*l_244));
    }
    return g_67[0].f1;
}







static long long func_34(short p_35, short p_36)
{
    unsigned short l_39 = 0x4B71L;
    int *l_44[6][4] = {{(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}};
    int **l_46 = (void*)0;
    int **l_47 = &l_44[2][1];
    struct S0 *l_49 = (void*)0;
    struct S0 **l_50 = (void*)0;
    struct S0 **l_51 = &l_49;
    int i, j;
    g_45 ^= (((l_39 , (safe_div_func_uint8_t_u_u((4L ^ p_35), (((safe_sub_func_int64_t_s_s(p_36, p_36)) >= (((0xE16511C2L > l_39) & p_36) <= p_36)) , l_39)))) > l_39) <= g_2);
    if (p_35)
        goto lbl_48;
lbl_48:
    (*l_47) = l_44[0][2];
    (*l_51) = l_49;
    return p_36;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_67[i].f0, "g_67[i].f0", print_hash_value);
        transparent_crc(g_67[i].f1, "g_67[i].f1", print_hash_value);
        transparent_crc(g_67[i].f2, "g_67[i].f2", print_hash_value);
        transparent_crc(g_67[i].f3, "g_67[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_102[i].f0, "g_102[i].f0", print_hash_value);
        transparent_crc(g_102[i].f1, "g_102[i].f1", print_hash_value);
        transparent_crc(g_102[i].f2, "g_102[i].f2", print_hash_value);
        transparent_crc(g_102[i].f3, "g_102[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_841.f0, "g_841.f0", print_hash_value);
    transparent_crc(g_841.f1, "g_841.f1", print_hash_value);
    transparent_crc(g_841.f2, "g_841.f2", print_hash_value);
    transparent_crc(g_841.f3, "g_841.f3", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_845[i][j][k], "g_845[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_885, "g_885", print_hash_value);
    transparent_crc(g_987, "g_987", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
