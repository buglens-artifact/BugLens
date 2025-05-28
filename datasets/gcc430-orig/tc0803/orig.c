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



static int g_47 = 0xCE6FC2E6L;
static int g_54 = 0x8F9C3281L;
static int *g_53 = &g_54;
static int g_67 = 7L;
static int g_83 = (-5L);
static int *g_82 = &g_83;
static int g_103 = 0xCC90FA27L;
static int *g_115 = &g_103;
static const unsigned long long g_146 = 8UL;
static long long g_158 = 0x008363A23D7F4DA6LL;
static char g_202 = 1L;
static int **g_264 = &g_82;
static int ***g_263 = &g_264;
static volatile long long g_266 = 0xEBA228102D8EADADLL;
static int *g_281 = &g_54;
static int *g_397 = &g_83;
static int *g_399 = &g_54;
static int g_569 = 0x3F1F1812L;
static volatile long long g_692 = (-7L);



static int func_1(void);
static int * func_2(const unsigned long long p_3, char p_4, unsigned short p_5);
static char func_7(const char p_8, int p_9, long long p_10, int p_11, int * p_12);
static unsigned func_13(int * p_14, int * p_15, char p_16);
static int * func_17(int * p_18, int * p_19, const int p_20, int p_21, int * p_22);
static int * func_24(int p_25, int * p_26, int * p_27, int * p_28);
static int func_29(int * p_30, const unsigned long long p_31, int * p_32, unsigned char p_33);
static int * func_34(int * p_35, int * p_36, char p_37, int * p_38, int * p_39);
static unsigned long long func_40(int * p_41, long long p_42, int * p_43);
static short func_44(int * p_45, long long p_46);
static int func_1(void)
{
    const unsigned l_6 = 18446744073709551614UL;
    int *l_23 = (void*)0;
    int *l_102 = &g_103;
    unsigned l_496 = 0x3A8A9098L;
    int **l_560 = &g_53;
    int *l_565 = &g_47;
    int *l_568 = &g_569;
    int *l_627 = &g_54;
    char l_691 = 0x26L;
    (*l_560) = func_2(l_6, func_7((func_13(func_17(l_23, func_24(func_29(func_34(l_23, l_23, (func_40(l_23, ((func_44(l_23, g_47) < 0x31C0L) ^ 3UL), g_53) <= l_6), g_82, l_23), g_83, &g_83, l_6), l_102, l_102, l_23), g_146, l_6, g_115), l_102, l_6) == l_6), l_6, g_146, l_496, g_397), l_6);

    ;
    ;
    ;

    ;
    (*g_399) = 8L;
    if (((safe_lshift_func_uint16_t_u_s(1UL, (*l_565))) >= 0L))
    {
        long long l_591 = 0xB417008276A4E2D6LL;
        for (g_47 = 0; (g_47 < 3); g_47++)
        {
            short l_580 = 0x80B0L;
            int *l_592 = &g_83;
            for (l_496 = 0; (l_496 > 51); l_496++)
            {
                int *l_574 = &g_54;
                (*l_560) = l_574;

                ;
                (*l_560) = (*l_560);
                (*l_560) = (void*)0;

                ;
                for (g_54 = (-30); (g_54 < (-3)); ++g_54)
                {
                    int l_579 = 0x816C5560L;
                    (*g_397) = (safe_rshift_func_uint8_t_u_s((l_579 != l_580), func_7((safe_div_func_uint8_t_u_u(g_83, (safe_rshift_func_uint16_t_u_u(((-1L) == (safe_lshift_func_uint8_t_u_s(func_7(l_579, (safe_add_func_uint32_t_u_u(g_266, 4294967291UL)), ((l_591 || 0L) & g_103), (*g_115), l_592), 0))), 11)))), (*g_281), g_146, (*g_281), l_574)));
                }
            }
        }
        (*l_568) = ((safe_sub_func_int16_t_s_s(l_591, (safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint8_t_u_u((&g_264 == (void*)0), 6)))))) | g_266);
    }
    else
    {
        int *l_616 = &g_47;
        int *l_666 = &g_54;
        for (l_496 = (-1); (l_496 <= 39); l_496 = safe_add_func_int64_t_s_s(l_496, 5))
        {
            long long l_600 = 0xACCD9506A2E52639LL;
            int *l_614 = &g_569;
            long long l_615 = 0xE78A0453582A48E4LL;
            int *l_626 = &g_83;
            if (l_600)
            {
                unsigned l_605 = 0UL;
                (*l_560) = l_614;

                ;
                if (l_615)
                    break;
            }
            else
            {
                (*l_560) = (*l_560);
            }

            ;
            l_616 = &g_569;

            ;
            if ((246UL ^ ((+(-1L)) & ((((safe_lshift_func_int16_t_s_u((&g_397 != &l_614), 0)) <= (safe_div_func_int64_t_s_s(g_266, ((*l_616) | (((-8L) <= 0xDBL) && 1UL))))) | (*l_616)) || 0x146AL))))
            {
                (*l_614) = (&g_399 != (void*)0);
            }
            else
            {
                int *l_621 = (void*)0;
                (*l_560) = func_34(l_616, l_621, ((safe_add_func_int8_t_s_s((0x2788L <= (g_67 < (l_621 == (void*)0))), (safe_rshift_func_int8_t_s_u((((void*)0 == &g_264) ^ 0xD1L), 2)))) != g_47), l_626, l_616);

                ;
                (*l_560) = l_621;

                ;
            }
            (*l_560) = l_627;

            ;
        }

        ;
        ;
        (*l_102) = (&g_397 == &l_23);
        for (g_569 = 5; (g_569 > 24); g_569++)
        {
            unsigned l_642 = 8UL;
            int * const l_643 = &g_103;
            int *l_653 = &g_103;
            if ((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(4294967295UL, (*g_399))), ((safe_sub_func_uint16_t_u_u(((*g_399) != (((l_642 == g_67) || (l_616 == l_643)) && 0x1F090923E5B78656LL)), 65535UL)) | (*l_643)))), g_202)), (-9L))), g_67)))
            {
                int *l_650 = &g_67;
                (*g_281) = (safe_rshift_func_int8_t_s_s((0x56C48DF3936FDE1ALL > (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((*l_653), 0)), 7))), 3));
            }
            else
            {
                int *l_654 = &g_67;
                (*l_560) = l_654;

                ;
                for (g_54 = 0; (g_54 > (-13)); --g_54)
                {
                    int *l_657 = &g_103;
                    l_654 = l_666;

                    ;
                    (*l_560) = &g_103;

                    ;
                    (*l_653) = (*l_568);
                }

                ;
                ;
            }

            ;
            if ((safe_add_func_uint8_t_u_u((g_83 <= (safe_add_func_uint32_t_u_u((func_40(l_616, g_54, l_616) & (*l_653)), (g_202 != g_569)))), ((safe_add_func_uint16_t_u_u(((*l_653) & (*g_397)), (-7L))) >= 0xB001L))))
            {
                const int *l_673 = (void*)0;
                int l_674 = 0xD9213690L;
                (*l_102) = (l_653 != l_673);
                (*l_643) = l_674;
            }
            else
            {
                int *l_680 = &g_569;
                int *l_684 = &g_569;
                for (g_103 = 0; (g_103 <= 13); ++g_103)
                {
                    int *l_679 = (void*)0;
                    int *l_683 = &g_103;
                    (*l_560) = l_666;

                    ;
                    (*g_399) = ((safe_div_func_uint8_t_u_u(((func_44(func_34(l_679, l_680, ((safe_mod_func_uint8_t_u_u(0x1BL, (*l_102))) > g_83), func_34(func_34(l_679, l_653, (*l_643), l_616, l_653), l_683, (*l_643), l_653, l_680), l_684), g_146) | 1L) < g_202), g_146)) > g_266);

                    ;
                    return (*g_82);
                }
                (*l_102) = (((((0x1C301DB7788D99BELL < (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((*g_397) != ((0x7DL == ((safe_mod_func_int64_t_s_s((~(+func_7(g_146, (*g_53), l_691, ((void*)0 != &l_102), l_680))), g_158)) & g_54)) < g_146)) <= 0x367CL), 0UL)), g_67))) || (*l_666)) > g_67) == 1L) < g_202);
            }

            ;
            (*l_643) = ((void*)0 == &g_264);
        }

        ;
        if (g_692)
        {
            for (g_83 = (-2); (g_83 == (-27)); g_83 = safe_sub_func_int16_t_s_s(g_83, 3))
            {
                return (*l_666);
            }
        }
        else
        {
            long long l_695 = 0xB770FFAF3F38C42DLL;
            return l_695;
        }
    }

    ;
    (*l_560) = &g_569;

    ;
    return (*g_399);
}







static int * func_2(const unsigned long long p_3, char p_4, unsigned short p_5)
{
    int *l_501 = &g_83;
    int ***l_502 = (void*)0;
    char l_520 = 0L;
    int ** const *l_553 = &g_264;
    int *l_559 = (void*)0;
    if ((safe_add_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s(p_3, ((void*)0 == l_501))) || ((void*)0 == l_502)), (g_202 == p_5))))
    {
        unsigned char l_508 = 0xECL;
        int *l_511 = &g_54;
        int *l_512 = &g_67;
        unsigned long long l_513 = 0xAD4E4BC3734FB01ALL;
        unsigned long long l_531 = 0xFA018A2983677CD3LL;
        int *l_536 = &g_54;
        char l_551 = (-3L);
        int *l_552 = &g_67;
        (*l_511) = (safe_unary_minus_func_int8_t_s(((safe_mod_func_uint64_t_u_u((safe_div_func_int32_t_s_s((((void*)0 != l_502) == (l_508 != (safe_mod_func_int64_t_s_s(func_44(l_512, l_513), p_3)))), p_4)), 0x7EE68A2DCF4EA918LL)) & g_67)));
        if ((*g_281))
        {
            unsigned l_529 = 18446744073709551607UL;
            int ***l_530 = &g_264;
            int *l_532 = &g_47;
            (*l_512) = (((safe_lshift_func_uint16_t_u_s(0xE9F8L, func_40(l_512, (((safe_mod_func_uint16_t_u_u(p_3, (p_3 || (*l_511)))) & ((p_3 | (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((l_529 & (&g_264 == l_530)), g_83)), l_531))) > p_4)) == g_158), l_532))) && 0L) == p_3);

            ;
        }
        else
        {
            int *l_535 = &g_54;
            int **l_558 = &l_535;
            (*l_512) = ((safe_add_func_uint64_t_u_u((l_535 != l_536), 8UL)) ^ (g_202 == 252UL));
            for (g_54 = 0; (g_54 <= 8); g_54 = safe_add_func_uint32_t_u_u(g_54, 2))
            {
                int *l_539 = &g_103;
                l_539 = (void*)0;

                ;
                (*l_501) = ((*l_501) | (safe_mod_func_int32_t_s_s(0x0E075E3BL, g_54)));
                l_539 = (void*)0;
                for (g_103 = (-10); (g_103 <= 10); g_103 = safe_add_func_uint32_t_u_u(g_103, 3))
                {
                    int **l_544 = &g_82;
                    (*l_544) = l_535;

                    ;
                    if ((l_539 == (*l_544)))
                    {
                        (*l_544) = (*l_544);
                        (*l_544) = l_512;

                        ;
                        if (p_4)
                            break;
                    }
                    else
                    {
                        return l_535;


                    }

                    ;
                    (*l_512) = ((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(func_7((func_44(l_536, (&l_536 != &l_539)) <= ((l_539 != (void*)0) == (safe_sub_func_uint32_t_u_u((&g_264 == &g_264), (func_7(p_4, l_551, g_54, (*l_535), l_539) > (**l_544)))))), p_5, g_54, (*l_535), l_539), (*l_512))), 1UL)) > (*l_535));
                    if ((*g_399))
                        break;
                }
            }
            (*l_558) = l_535;
            return l_511;


        }

        ;
        (*g_82) = (p_4 > (*l_511));
    }
    else
    {
        l_559 = l_501;

        ;
    }

    ;
    return l_559;


}







static char func_7(const char p_8, int p_9, long long p_10, int p_11, int * p_12)
{
    return g_158;
}







static unsigned func_13(int * p_14, int * p_15, char p_16)
{
    int *l_159 = &g_54;
    unsigned l_182 = 0x315883FBL;
    int *l_201 = &g_83;
    int **l_205 = &g_82;
    int ***l_204 = &l_205;
    int l_212 = 0xB88990D2L;
    int *l_236 = &g_54;
    unsigned char l_308 = 0xBBL;
    char l_457 = 0x8EL;
    long long l_466 = 0x6F563174466AC194LL;
    if ((safe_sub_func_uint16_t_u_u(((-4L) && 65527UL), ((+g_146) ^ g_47))))
    {
        unsigned short l_164 = 0x02FBL;
        int *l_191 = (void*)0;
        short l_192 = (-8L);
        long long l_209 = 0x3D22E32B8073F352LL;
        int *l_210 = &g_54;
        unsigned l_234 = 0UL;
        int ***l_327 = &g_264;
        int *l_350 = &g_83;
        int *l_355 = &g_83;
        int *l_458 = &g_83;
        if ((*g_53))
        {
            int *l_160 = &g_54;
            int *l_229 = &g_83;
            int * const l_239 = &g_103;
            char l_244 = 1L;
            int ***l_262 = (void*)0;
            if (((safe_add_func_uint64_t_u_u(((18446744073709551615UL <= (~(5L == (g_158 != (p_16 >= func_44(l_159, (*l_159))))))) <= p_16), 1UL)) | g_103))
            {
                long long l_181 = 0x1F1468EAF90657D6LL;
                int **l_188 = &g_115;
                int ***l_187 = &l_188;
                int *l_200 = &g_103;
                unsigned short l_203 = 0x4A6CL;
                int ***l_226 = &l_205;
                if (func_44(l_160, (((&g_83 == l_159) ^ p_16) <= g_54)))
                {
                    for (g_158 = 1; (g_158 >= 6); ++g_158)
                    {
                        int **l_163 = &l_160;
                        (*l_163) = (void*)0;

                        ;
                        (*g_82) = func_40(p_15, ((*p_15) & (l_164 != 0x0D5BDE6CL)), l_160);

                        ;
                        (*l_163) = p_14;

                        ;
                    }

                    ;
                    for (g_47 = 10; (g_47 < (-8)); g_47--)
                    {
                        int **l_167 = (void*)0;
                        int **l_168 = (void*)0;
                        g_115 = p_15;
                        if ((*g_115))
                            continue;
                        p_14 = &g_103;
                    }
                }
                else
                {
                    int * const *l_176 = &g_115;
                    int * const **l_175 = &l_176;
                    int *l_177 = &g_83;
                    int *l_178 = &g_103;
                    for (g_103 = (-7); (g_103 > 17); g_103 = safe_add_func_int64_t_s_s(g_103, 3))
                    {
                        int **l_171 = &l_160;
                        int l_193 = 0xE7ADD9F7L;
                        (*l_171) = l_160;
                        l_182 = (l_164 > (g_158 == (safe_div_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((func_29(&g_54, (l_175 == (void*)0), func_34(l_177, l_178, ((((safe_lshift_func_int8_t_s_s((0xC9EAE24FL || (l_164 < 0x04L)), p_16)) & 0xA6L) ^ l_181) || l_181), &g_103, (*l_171)), p_16) || 0x2E0279960C7754CELL))), g_103))));
                        (**l_171) = (safe_div_func_uint8_t_u_u(((g_158 > p_16) ^ (safe_mod_func_uint16_t_u_u((((l_187 != (void*)0) > (safe_lshift_func_int16_t_s_s((!((8UL || 0xE7L) <= func_29(l_191, ((l_192 > g_83) != 0x2C32L), &g_47, (**l_176)))), 2))) > l_193), (-1L)))), (-9L)));
                        (*g_53) = ((***l_187) || g_103);
                    }
                }

                ;
                for (p_16 = (-15); (p_16 <= 29); p_16 = safe_add_func_uint16_t_u_u(p_16, 7))
                {
                    int *l_198 = (void*)0;
                    int **l_199 = &g_115;
                    for (l_182 = 9; (l_182 != 30); ++l_182)
                    {
                        (*l_187) = &g_82;

                        ;
                        (*l_187) = (void*)0;

                        ;
                        if ((*l_160))
                            break;
                        if ((*p_14))
                            continue;
                    }
                    (*l_199) = func_17(&g_54, l_198, func_44(p_14, p_16), (*p_15), p_15);

                    ;
                    (*l_199) = l_201;

                    ;
                }

                ;
                ;
                if ((l_204 == (void*)0))
                {
                    int *l_211 = (void*)0;
                    (*l_210) = (((((7L <= ((((0x4A03L >= (p_16 && g_202)) <= ((safe_sub_func_int16_t_s_s(g_202, 0xE662L)) ^ (((safe_unary_minus_func_int32_t_s(l_209)) < func_40(p_15, g_47, l_211)) < 0x3F29L))) || 4294967295UL) != 0xBBA2L)) == 0xAB5801B7L) && g_146) > (*p_15)) != l_212);

                    ;
                    g_82 = p_14;

                    ;
                }
                else
                {
                    int *l_219 = &g_54;
                    for (l_181 = 15; (l_181 == 12); l_181 = safe_sub_func_int64_t_s_s(l_181, 1))
                    {
                        (**l_205) = (-10L);
                    }
                    for (g_83 = (-23); (g_83 != (-14)); g_83++)
                    {
                        unsigned short l_227 = 65533UL;
                        int *l_228 = &g_54;
                        (*l_205) = func_34(p_15, p_14, (safe_rshift_func_int8_t_s_s(((p_16 < ((void*)0 == &g_103)) >= func_44(l_219, g_83)), 3)), p_15, p_15);

                        ;
                        ;
                        (*g_82) = (safe_add_func_uint16_t_u_u(2UL, ((+p_16) > (*p_15))));
                        (*l_210) = ((((safe_sub_func_uint32_t_u_u(func_40(&g_83, (**l_205), p_14), ((safe_sub_func_int32_t_s_s((*p_15), 1UL)) == (~0xA2L)))) >= (((l_226 != &l_188) != 1UL) ^ l_227)) || 0x0AL) && g_202);
                        g_115 = func_34(func_34(p_14, func_34(func_34(p_15, &g_83, ((p_14 != (void*)0) || 0x2283L), &g_47, func_34(&g_47, l_228, (*l_219), (**l_226), p_15)), &g_83, p_16, p_14, l_228), g_146, p_15, p_15), p_14, g_146, p_14, p_14);

                        ;
                    }

                    ;
                    l_229 = p_15;

                    ;
                }

                ;
                ;
                ;
            }
            else
            {
                unsigned l_235 = 4294967295UL;
                unsigned short l_274 = 0xFC25L;
                int *l_282 = &g_47;
                int **l_285 = &l_229;
                if ((*p_15))
                {
                    for (l_212 = (-15); (l_212 == (-2)); l_212 = safe_add_func_int32_t_s_s(l_212, 2))
                    {
                        (*g_82) = (safe_add_func_int16_t_s_s(l_234, (0x05A60EC3L && l_235)));
                        (*l_204) = (void*)0;

                        ;
                    }

                    ;
                    l_236 = l_160;
                    if (((safe_sub_func_uint8_t_u_u((p_14 != l_239), g_67)) | (safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u((-5L), (*l_160))) <= p_16) != l_244), p_16))))
                    {
                        int *l_245 = &g_47;
                        int **l_246 = &l_245;
                        unsigned char l_252 = 0x92L;
                        (*l_246) = l_245;
                        g_115 = func_17(p_14, l_160, (safe_rshift_func_int8_t_s_s(((((*l_245) != (safe_unary_minus_func_int8_t_s(((safe_rshift_func_uint8_t_u_s((((*l_159) || (**l_246)) < l_252), g_47)) <= (safe_rshift_func_int8_t_s_s(p_16, 3)))))) <= ((g_103 != g_202) > 0xC77487F0L)) == p_16), 7)), (*g_82), p_15);
                    }
                    else
                    {
                        int *l_255 = &g_67;
                        l_255 = func_34(func_34(&g_54, l_191, g_54, l_255, p_15), &g_103, p_16, &g_83, &g_83);

                        ;
                        return g_202;
                    }
                }
                else
                {
                    int *l_265 = &g_103;
                    if (((l_235 != ((&g_83 != (void*)0) & ((safe_rshift_func_int16_t_s_s(((~(l_235 > (safe_lshift_func_int8_t_s_s((l_262 != g_263), ((void*)0 != &p_14))))) > func_40(l_265, p_16, (**g_263))), 12)) != g_266))) != (*l_201)))
                    {
                        return p_16;
                    }
                    else
                    {
                        int *l_271 = &g_47;
                        (**g_263) = (void*)0;

                        ;
                        (*l_265) = (safe_lshift_func_uint16_t_u_s((((g_67 & ((func_44((*g_264), g_202) >= g_83) <= g_146)) != 0L) <= g_103), p_16));
                        (*g_264) = l_271;

                        ;
                        (**g_263) = (**g_263);
                    }

                    ;
                    ;
                    for (l_234 = (-13); (l_234 <= 36); l_234++)
                    {
                        (**g_264) = ((void*)0 == p_14);
                        if ((*g_53))
                            continue;
                    }
                    (*g_263) = &l_265;

                    ;
                    (*l_239) = (p_16 >= p_16);
                }

                ;
                ;

                (*l_285) = p_14;

                ;
                (*l_236) = (*p_14);
                (*g_53) = (&l_205 != (void*)0);
            }

            ;
            ;
            ;
            ;
            ;

            p_14 = p_15;
        }
        else
        {
            unsigned l_299 = 0x92C47163L;
            int *l_314 = &g_47;
            int *** const l_371 = &l_205;
            (*g_82) = ((*p_14) ^ ((void*)0 == &l_205));
            if ((safe_unary_minus_func_uint8_t_u((((*l_210) || ((*p_15) & (safe_add_func_uint8_t_u_u(g_266, ((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(0x35L, l_299)), 0xF23DL)), 4)), 0)) != (safe_rshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(p_16, func_44((**g_263), (p_16 ^ (*l_236))))), g_146)), 0xCCB47C0F13302F4FLL)), p_16))), (*p_14))) != g_67))))) | l_308))))
            {
                unsigned short l_313 = 0xAF95L;
                int *l_326 = &g_54;
                int ***l_328 = &g_264;
                int *l_346 = &g_67;
                int *l_347 = (void*)0;
                int *l_356 = &g_83;
                if (((safe_lshift_func_int8_t_s_s((0xBC024C7DL == ((func_40(l_191, g_67, (*g_264)) && l_299) | 0xF8A2L)), 1)) | ((g_158 == 0xC27B2AF5F6116239LL) <= g_83)))
                {
                    int *l_317 = &g_54;
                    (***l_204) = (p_16 <= ((***l_204) && l_313));
                    (*g_53) = l_299;
                    (**g_263) = func_17((*g_264), l_314, (safe_lshift_func_int8_t_s_s(func_40(func_34(l_317, p_15, g_158, p_15, func_17(func_34((**g_263), l_210, (safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(p_16, (*l_317))), (*g_53))), p_16)), p_14, (*g_264)), p_15, g_103, (*p_15), l_317)), g_158, (**g_263)), g_146)), p_16, l_210);

                    ;
                }
                else
                {
                    int *l_331 = &g_47;
                    if ((safe_div_func_uint16_t_u_u(0UL, func_29(l_326, ((l_327 != l_328) | (safe_div_func_int16_t_s_s(func_29((*g_264), g_266, func_17((*g_264), func_17(p_14, l_331, g_47, (*l_331), p_15), g_67, (**g_264), (**l_327)), g_67), p_16))), p_14, p_16))))
                    {
                        int *l_338 = &g_83;
                        int ***l_341 = &g_264;
                        (*g_281) = func_40((**l_204), p_16, (**g_263));

                        ;
                        (*l_338) = (p_15 != (void*)0);
                        (**g_263) = (*g_264);
                        (**g_263) = p_15;

                        ;
                    }
                    else
                    {
                        (*p_14) = (*p_14);
                        (*l_327) = (*g_263);
                        (*p_14) = (***l_204);
                    }

                    ;
                    ;
                    (*l_159) = (safe_unary_minus_func_int32_t_s(func_29((*g_264), (255UL <= p_16), l_331, ((0x242D67FBCB9C9697LL || (safe_unary_minus_func_int32_t_s((((((**g_263) == (*g_264)) > ((safe_lshift_func_int8_t_s_u((*l_331), (*l_210))) < p_16)) || (-3L)) && g_202)))) == g_158))));
                    (*g_281) = ((*g_263) != &p_15);
                    (**g_263) = func_34((*g_264), func_17(p_14, func_34((**l_327), l_346, p_16, l_314, func_34(p_14, p_15, p_16, (**l_327), p_15)), p_16, (*l_201), l_347), p_16, p_15, p_15);

                    ;
                    ;
                }

                ;
                ;
                for (l_212 = 0; (l_212 > 4); l_212++)
                {
                    int ***l_351 = &g_264;
                    int l_352 = 0x74A82D6BL;
                    int *l_353 = &g_67;
                    (*g_264) = func_17((**g_263), func_34(func_34((**l_328), (*g_264), (0x40064E38AA7DBA10LL < g_103), (*g_264), (*g_264)), l_350, g_103, (**l_328), (**g_263)), p_16, l_299, p_15);

                    ;
                    if ((l_351 == &g_264))
                    {
                        (*g_82) = func_29(p_14, (***l_328), func_34((**g_263), p_14, (*l_159), (**g_263), p_14), (g_103 || (*p_15)));

                        ;
                        return p_16;
                    }
                    else
                    {
                        int *l_354 = &g_83;
                        (**g_263) = (**g_263);
                    }
                }
                (*l_159) = ((safe_mod_func_int64_t_s_s((*l_236), p_16)) && (safe_mod_func_int64_t_s_s((p_14 == (**g_263)), func_29((*g_264), (p_16 ^ (((safe_rshift_func_uint16_t_u_u(g_47, ((0xDB14L == p_16) || g_67))) != g_67) <= 0xE57CEDAFA9926A0ALL)), p_14, (***l_327)))));

                ;
                if (((*l_314) > p_16))
                {
                    (**l_328) = (**g_263);
                }
                else
                {
                    for (l_299 = (-2); (l_299 < 35); ++l_299)
                    {
                    }
                    (*l_205) = func_17(p_14, p_15, (p_16 != ((p_16 > (safe_div_func_uint32_t_u_u((***l_328), g_54))) ^ (g_103 || (safe_lshift_func_int8_t_s_s(((*l_355) != func_44(l_314, g_47)), g_202))))), (*g_115), (*g_264));

                    ;
                    (**g_264) = (safe_lshift_func_uint16_t_u_u((l_328 == l_371), 11));
                }
            }
            else
            {
                unsigned l_372 = 4294967295UL;
                char l_407 = 0x08L;
                if (l_372)
                {
                    int *l_373 = &g_83;
                    (*g_264) = func_34(l_373, p_15, (safe_add_func_int16_t_s_s(p_16, (g_83 & g_146))), p_15, (*g_264));

                    ;
                    ;
                    (*l_159) = (((((p_16 || (safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((p_16 & ((*l_327) == (void*)0)), (*l_236))), (safe_add_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(func_44((*g_264), g_83), (*l_201))), p_16)), 0xED0C1BA1A614EF86LL)))), (*p_14)))) || (***l_327)) != g_146) == g_103) || (*l_314));
                    for (g_83 = 0; (g_83 < 2); g_83 = safe_add_func_uint16_t_u_u(g_83, 2))
                    {
                        (*l_236) = (18446744073709551615UL | (4294967293UL < ((void*)0 == (**l_327))));
                    }
                    (*l_350) = 9L;
                }
                else
                {
                    int *l_390 = &g_103;
                    if ((((func_29((*g_264), g_158, l_390, p_16) ^ (safe_sub_func_int16_t_s_s(((void*)0 == &g_264), l_372))) <= g_266) > 0x87L))
                    {
                        (***g_263) = (p_16 && (safe_mod_func_uint32_t_u_u((0xD102L && (safe_lshift_func_int16_t_s_s(((func_29(g_397, g_158, p_15, (safe_unary_minus_func_int64_t_s((*l_390)))) > 1L) == (((p_16 > g_202) < (*g_115)) != p_16)), g_103))), (*p_14))));
                        (**l_327) = func_34((*g_264), g_399, p_16, func_34((*g_264), l_390, g_83, l_390, func_34((**l_327), func_34((**l_371), p_14, (*l_355), (**g_263), (*g_264)), p_16, l_390, (**l_204))), (**g_263));

                        ;
                        ;
                        (*g_115) = (-1L);
                        (**g_263) = func_34(func_24((*p_14), p_15, p_15, (**g_263)), p_14, (safe_unary_minus_func_int16_t_s((safe_sub_func_int16_t_s_s(p_16, g_146)))), g_281, p_14);
                    }
                    else
                    {
                        (*g_115) = ((**l_327) != (**g_263));
                        return l_372;
                    }

                    ;
                    ;
                }

                ;
                ;
                (**g_264) = (safe_sub_func_uint16_t_u_u(((0xCDL && 0xBEL) ^ 4294967295UL), 0x792CL));
                if ((**l_205))
                {
                    for (g_158 = 0; (g_158 >= (-17)); g_158 = safe_sub_func_uint16_t_u_u(g_158, 4))
                    {
                        if ((**g_264))
                            break;
                    }
                }
                else
                {
                    const long long l_408 = 0xC569D01036D3ED73LL;
                    p_15 = func_34(func_17((*l_205), func_34((*g_264), (**l_371), l_407, (*l_205), (*g_264)), l_408, ((p_16 | g_202) > (*p_14)), (*g_264)), (*g_264), g_146, (*g_264), p_15);

                    ;
                    (*l_355) = (-5L);
                    (*g_264) = (*g_264);
                }

                ;
                (**l_327) = p_15;

                ;
            }

            ;
            ;
            (**g_264) = 0x8631ADB9L;
        }

        ;
        ;
        ;
        ;

        (*g_399) = ((*l_210) > (~(g_146 <= 0x0FL)));
        if ((((safe_add_func_int32_t_s_s((*p_14), (safe_rshift_func_uint8_t_u_u(g_202, 3)))) == ((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(g_54, 14)), p_16)) == func_44(p_14, g_67))) != (safe_sub_func_uint64_t_u_u(0xE2D7CA3CE02B7456LL, (((*l_355) ^ (*l_159)) != p_16)))))
        {
            int **l_419 = &g_82;
            (*l_210) = 0xEEABDCE5L;
            (*l_419) = p_14;

            ;
            for (g_202 = 19; (g_202 < 16); --g_202)
            {
                int ***l_424 = &l_205;
                (*g_53) = (g_47 ^ (g_266 >= (safe_rshift_func_int16_t_s_s((l_424 != &g_264), 2))));
                p_14 = &g_47;

                ;
                (**l_419) = (*g_53);
                p_14 = &g_67;

                ;
            }

            ;
            (*g_115) = ((&l_205 == l_327) == 254UL);
        }
        else
        {
            unsigned long long l_432 = 0x695C796FD9B35670LL;
            int *l_438 = &g_103;
            for (l_234 = (-3); (l_234 < 47); l_234++)
            {
                int *l_431 = &g_83;
                int *l_437 = (void*)0;
                for (g_202 = (-2); (g_202 <= (-6)); g_202--)
                {
                    int **l_429 = &l_210;
                    unsigned l_439 = 0xA24062B6L;
                    (*l_429) = p_14;

                    ;
                    if (((safe_unary_minus_func_uint64_t_u(((((**l_429) & ((0x6FAF4B78L > (func_40(func_34(p_14, p_15, p_16, p_14, func_34(p_14, l_431, p_16, l_431, p_14)), (**l_429), p_14) & g_158)) < 0x319AL)) && l_432) | p_16))) & 0xEEL))
                    {
                        (*g_53) = 0L;
                        (*l_159) = (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(2UL, 10)), g_158));
                        return p_16;
                    }
                    else
                    {
                        (*g_399) = (*g_281);
                        (*l_201) = 0x0BC0622FL;
                        (*l_429) = l_438;
                        if ((*p_14))
                            break;
                    }

                    ;
                }

                ;
                p_15 = &g_54;

                ;
                (*g_281) = (*p_14);
                return g_47;
            }
        }

        ;
        if (((((safe_div_func_int8_t_s_s(((void*)0 == &g_281), ((safe_sub_func_int8_t_s_s((&g_399 != &p_14), ((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(p_16, 14)), (*l_236))) >= func_44(p_15, p_16)))) ^ p_16))) ^ (*l_159)) != (*l_350)) < p_16))
        {
            return p_16;
        }
        else
        {
            int *l_467 = &g_83;
            const unsigned l_470 = 0x31285F1CL;
            int *l_478 = &g_103;
            if ((safe_rshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(((void*)0 != p_14), 0)), ((void*)0 != &g_264))), g_266)))
            {
                int *l_468 = &g_83;
                int *l_469 = &g_103;
                unsigned char l_487 = 254UL;
                if ((*g_53))
                {
                    int *l_456 = &g_103;
                    for (g_67 = 0; (g_67 != 27); ++g_67)
                    {
                        int **l_459 = &l_350;
                        if ((*g_53))
                            break;
                        l_456 = (void*)0;

                        ;
                        l_457 = 0L;
                        (*l_459) = l_458;
                    }

                    ;
                    for (g_67 = 29; (g_67 < (-20)); g_67 = safe_sub_func_uint8_t_u_u(g_67, 8))
                    {
                        (*l_350) = (g_103 ^ 0xC5L);
                        if ((*g_397))
                            break;
                        p_14 = (void*)0;

                        ;
                    }

                    ;
                }
                else
                {
                    (*l_236) = (safe_sub_func_uint8_t_u_u((p_16 <= ((safe_sub_func_uint64_t_u_u(((&p_14 == (void*)0) & (p_16 == 0L)), func_29(p_14, g_83, p_14, p_16))) == l_466)), 0x4DL));
                    g_281 = l_467;

                    ;
                }

                ;
                ;
                p_14 = func_34(l_468, p_14, (*l_210), l_468, p_14);

                ;
                ;
                for (g_83 = (-15); (g_83 < (-24)); g_83 = safe_sub_func_int32_t_s_s(g_83, 7))
                {
                    int *l_484 = &g_67;
                    (*p_15) = (+(~(*l_468)));
                    for (l_212 = (-13); (l_212 == 24); l_212 = safe_add_func_int16_t_s_s(l_212, 1))
                    {
                        int **l_475 = &l_350;
                        (*l_475) = func_34(l_469, p_14, (g_202 <= g_202), p_14, l_469);

                        ;
                        (*p_14) = (safe_div_func_uint64_t_u_u(func_44(func_34(&g_47, func_34(l_468, l_478, ((p_16 && (((*p_15) > ((*g_397) == (safe_lshift_func_int16_t_s_s(((((*l_236) && (safe_unary_minus_func_int32_t_s(((safe_mod_func_int32_t_s_s(5L, g_54)) && p_16)))) <= g_158) & (*p_15)), g_83)))) && g_54)) < g_266), (*l_475), l_484), g_83, (*l_475), l_484), (*l_468)), p_16));
                    }
                    for (l_234 = (-14); (l_234 <= 21); l_234++)
                    {
                        (*l_478) = (0xCA7FB5B372ED1534LL > (-1L));
                        (*l_469) = l_487;
                        (*l_159) = func_44(p_14, (*l_484));
                        if ((*g_281))
                            continue;
                    }
                }

                ;
                for (p_16 = 0; (p_16 <= (-25)); --p_16)
                {
                    (*l_469) = 0xA6DABB3BL;
                }
            }
            else
            {
                p_15 = p_15;
                (*l_467) = (*p_14);
            }

            ;
            ;
            (*l_201) = 0xCBE5736EL;
        }

        ;
        ;
    }
    else
    {
        (*l_159) = (0x3D7C5119L != ((((~p_16) | (p_16 >= g_54)) | (((safe_lshift_func_uint16_t_u_u(65530UL, (safe_lshift_func_int8_t_s_s(((((*p_15) | (**g_264)) == ((+0x2CEDFBABL) | 0xEA68ACD8L)) == (*g_281)), 2)))) || (***l_204)) > (*l_159))) ^ (*l_236)));
    }

    ;
    ;
    ;
    ;
    ;

    ;
    p_15 = p_15;
    return p_16;
}







static int * func_17(int * p_18, int * p_19, const int p_20, int p_21, int * p_22)
{
    int *l_149 = &g_67;
    (*g_115) = ((((((g_54 & (g_103 != ((safe_add_func_int8_t_s_s(((func_44(l_149, (*l_149)) < (*g_82)) <= p_21), (*l_149))) ^ (safe_div_func_int32_t_s_s((*l_149), (*l_149)))))) < (*l_149)) && g_83) != p_21) >= g_67) > 0xCCA57987L);
    return &g_103;


}







static int * func_24(int p_25, int * p_26, int * p_27, int * p_28)
{
    int *l_104 = &g_83;
    int **l_105 = &g_82;
    int *l_117 = &g_103;
    unsigned short l_145 = 0xD36AL;
    (*l_105) = func_34(l_104, l_104, g_54, l_104, &g_103);

    ;
    ;
    (*g_53) = (&p_26 == &p_26);
    for (g_83 = 0; (g_83 >= (-28)); g_83 = safe_sub_func_int64_t_s_s(g_83, 1))
    {
        int *l_116 = &g_47;
        (*l_105) = &g_67;
        for (p_25 = 0; (p_25 > (-12)); p_25 = safe_sub_func_int16_t_s_s(p_25, 2))
        {
            int *l_112 = &g_67;
            for (g_67 = 5; (g_67 != (-20)); g_67 = safe_sub_func_int8_t_s_s(g_67, 1))
            {
                p_28 = &g_103;

                ;
            }
            (*l_105) = func_34(&g_54, func_34(l_112, &g_47, g_67, &g_47, &p_25), (safe_rshift_func_uint8_t_u_s(((void*)0 != (*l_105)), 6)), g_115, l_112);
            (*l_105) = func_34(l_116, &p_25, (*l_116), l_112, &g_83);
            (*p_27) = (*p_27);
        }
    }

    ;
    if (func_40(func_34(l_117, (*l_105), (g_47 != (&g_83 != (void*)0)), &g_103, &g_83), g_83, &g_83))
    {
        const int *l_118 = &g_103;
        const int **l_119 = &l_118;
        int *l_120 = &g_54;
        int *l_124 = (void*)0;
        (*l_105) = (*l_105);
        (*l_119) = l_118;
        (*l_119) = func_34(&g_67, func_34((*l_105), l_120, p_25, l_120, func_34(&g_103, &g_83, g_103, func_34((*l_105), (*l_105), p_25, l_120, (*l_105)), l_120)), p_25, &g_103, &g_103);

        ;
        if (func_29(func_34((*l_105), &g_54, (p_25 <= (safe_lshift_func_uint8_t_u_s((((((*g_53) ^ ((*g_82) || p_25)) & g_83) > p_25) ^ 0x4D9FAD1AL), 3))), l_120, &g_67), g_103, (*l_105), g_83))
        {
            int *l_123 = &g_83;
            (*l_105) = func_34(l_120, l_123, (*l_123), &g_47, l_124);

            ;
        }
        else
        {
            for (g_83 = (-21); (g_83 > (-22)); g_83 = safe_sub_func_int16_t_s_s(g_83, 7))
            {
                (*l_117) = func_40(&g_54, g_83, (*l_105));

                ;
                if ((p_25 || (-1L)))
                {
                    (**l_105) = (*g_82);
                }
                else
                {
                    unsigned long long l_127 = 0x946A6819D97827EALL;
                    (*g_82) = l_127;
                }
            }
            for (g_103 = 13; (g_103 <= 12); g_103 = safe_sub_func_int16_t_s_s(g_103, 8))
            {
                for (g_47 = 0; (g_47 <= (-19)); g_47--)
                {
                    int **l_132 = &g_82;
                    (*l_104) = 0xC59EA234L;
                    if ((~(*g_53)))
                    {
                        int ***l_133 = &l_132;
                        unsigned long long l_134 = 0xDE48EC7F2D8A91DCLL;
                        (*l_133) = l_132;
                        if (l_134)
                            break;
                    }
                    else
                    {
                        (*g_82) = (*g_82);
                    }
                    (*l_132) = &g_83;

                    ;
                    return &g_47;


                }
                (**l_105) = (*p_26);
                if ((*p_26))
                    break;
            }
            (*g_82) = (safe_sub_func_int32_t_s_s(((((0x6465E51FL < (*l_104)) & p_25) <= (safe_mod_func_uint16_t_u_u(func_44(&g_83, ((p_25 == g_67) >= (0xD2L <= (safe_rshift_func_int8_t_s_s(((*p_26) == ((6UL > 0UL) <= 255UL)), g_54))))), 0x4E12L))) > 4294967295UL), (-1L)));
        }

        ;
    }
    else
    {
        p_28 = &p_25;

        ;
        (*g_82) = (safe_div_func_int64_t_s_s((func_40((*l_105), (safe_lshift_func_int8_t_s_u(0x07L, 6)), &g_103) != (*p_26)), (l_145 && (*l_104))));
    }

    ;
    ;
    return &g_103;


}







static int func_29(int * p_30, const unsigned long long p_31, int * p_32, unsigned char p_33)
{
    int *l_88 = &g_83;
    int l_93 = 0x89F16C48L;
    p_30 = p_30;
    p_32 = (void*)0;

    ;
    if ((((safe_div_func_uint8_t_u_u(g_67, g_54)) > ((!(~func_44(l_88, (p_32 == (void*)0)))) ^ (*l_88))) && (safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u((l_93 <= (*g_53)), p_31)) | 0x66L), 0x8998D42F466F6A0FLL))))
    {
        return (*g_82);
    }
    else
    {
        int * const l_94 = (void*)0;
        int **l_95 = &g_53;
        (*l_95) = l_94;

        ;
        (*l_95) = func_34(&g_83, (*l_95), (safe_add_func_int64_t_s_s((((safe_sub_func_uint16_t_u_u(g_67, (p_33 != p_33))) & 0xFF67L) || (safe_div_func_int64_t_s_s(func_44(l_88, g_54), g_67))), 0xAAD5EAB19957B093LL)), p_30, l_88);

        ;
        (*g_82) = 7L;
    }

    ;
    return (*l_88);
}







static int * func_34(int * p_35, int * p_36, char p_37, int * p_38, int * p_39)
{
    int *l_84 = &g_54;
    unsigned l_85 = 18446744073709551613UL;
    (*l_84) = ((func_44(p_36, func_40(l_84, l_85, &g_54)) <= g_83) != p_37);

    ;
    return &g_67;


}







static unsigned long long func_40(int * p_41, long long p_42, int * p_43)
{
    int *l_55 = &g_54;
    int **l_56 = &g_53;
    int l_81 = 0x4F348F6FL;
    (*l_56) = l_55;

    ;
    for (g_47 = 7; (g_47 <= 4); g_47 = safe_sub_func_int32_t_s_s(g_47, 5))
    {
        p_43 = p_43;
    }
    for (g_54 = 0; (g_54 > 0); g_54 = safe_add_func_uint32_t_u_u(g_54, 5))
    {
        int *l_61 = &g_47;
        if (func_44(l_61, ((safe_rshift_func_int16_t_s_u(p_42, 12)) != (**l_56))))
        {
            for (g_47 = (-30); (g_47 <= (-28)); g_47++)
            {
                int *l_66 = &g_67;
                (*l_66) = (p_43 != &g_54);
                (*l_66) = (*g_53);
            }
        }
        else
        {
            if ((*g_53))
                break;
        }
        (*l_56) = &g_47;

        ;
        (*g_53) = 1L;
        (*g_53) = (safe_sub_func_int32_t_s_s((*l_55), (safe_div_func_uint16_t_u_u((*l_55), ((((0UL || (safe_lshift_func_uint8_t_u_u(((5UL >= (safe_lshift_func_uint8_t_u_u(0x36L, 0))) > (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((((p_42 >= (safe_div_func_uint8_t_u_u((0xE5BDL & (6L == 0xA113D7AFL)), p_42))) ^ g_67) <= g_47))), 7))), 6))) & 0UL) & p_42) ^ (**l_56))))));
    }

    ;
    return l_81;
}







static short func_44(int * p_45, long long p_46)
{
    int l_52 = 0L;
    for (p_46 = 7; (p_46 > 25); p_46 = safe_add_func_int32_t_s_s(p_46, 1))
    {
        unsigned short l_50 = 65532UL;
        int *l_51 = &g_47;
        (*l_51) = l_50;
        (*l_51) = (((*l_51) ^ p_46) < (l_52 <= (*l_51)));
        return (*l_51);
    }
    return p_46;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_569, "g_569", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
