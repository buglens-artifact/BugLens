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



static const unsigned g_13 = 4294967295UL;
static int g_61 = (-8L);
static volatile int g_111 = (-5L);
static volatile int *g_110 = &g_111;
static volatile int **g_109 = &g_110;
static int g_122 = 0x9E4BB11EL;
static int *g_121 = &g_122;
static const int *g_181 = &g_122;
static int g_258 = 0xE78BE3BCL;
static int *g_257 = &g_258;
static volatile int *g_554 = &g_111;



static int func_1(void);
static const short func_4(char p_5, int p_6, unsigned short p_7, long long p_8);
static unsigned long long func_9(const unsigned short p_10, const unsigned p_11, int p_12);
static char func_16(int p_17);
static short func_20(const short p_21, short p_22, long long p_23);
static short func_25(long long p_26, long long p_27, unsigned p_28, short p_29);
static int * func_32(unsigned short p_33);
static int * func_41(int * p_42, int * p_43, int p_44, int * p_45, int * p_46);
static int * func_47(unsigned char p_48, short p_49, int p_50);
static short func_53(int * p_54, int * p_55, unsigned long long p_56, unsigned p_57);
static int func_1(void)
{
    const char l_597 = 0xCBL;
    int l_604 = 0xB1301B47L;
    (*g_554) = ((((((safe_lshift_func_int16_t_s_u(func_4((0xF48C443EB6069300LL <= func_9(g_13, g_13, ((safe_rshift_func_uint8_t_u_s(g_13, func_16((safe_rshift_func_int16_t_s_u(0x83DCL, 14))))) || (((-1L) && l_597) | (safe_mul_func_int8_t_s_s((!(((safe_sub_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((*g_181), g_122)) == g_122), l_604)) != 0x91BCL) <= g_111)), l_597)))))), l_604, l_604, l_604), l_597)) > 6L) | g_13) == (-5L)) == 0x04L) | l_604);

    ;

    ;

    return l_604;
}







static const short func_4(char p_5, int p_6, unsigned short p_7, long long p_8)
{
    const unsigned long long l_605 = 0x58BA745A544FD802LL;
    int *l_610 = &g_122;
    (*g_554) = l_605;
    for (p_8 = 8; (p_8 < 23); p_8 = safe_add_func_uint16_t_u_u(p_8, 1))
    {
        for (p_5 = 0; (p_5 >= (-8)); --p_5)
        {
            (*g_554) = (-1L);
        }
    }
    l_610 = &p_6;

    ;
    (*g_109) = (*g_109);
    return p_8;
}







static unsigned long long func_9(const unsigned short p_10, const unsigned p_11, int p_12)
{
    return g_61;
}







static char func_16(int p_17)
{
    const unsigned char l_24 = 0x8CL;
    int **l_203 = (void*)0;
    char l_204 = 0L;
    int *l_297 = &g_61;
    unsigned short l_443 = 0x1A90L;
    int **l_459 = &g_121;
    unsigned l_473 = 0x1B2CF21AL;
    long long l_496 = (-8L);
    unsigned l_529 = 3UL;
    volatile int *l_571 = &g_111;
    if ((((func_20(l_24, func_25(g_13, l_24, p_17, (safe_sub_func_uint64_t_u_u(p_17, l_24))), ((safe_rshift_func_uint8_t_u_s((l_203 != (void*)0), 1)) >= l_204)) | l_204) ^ 0x0D16L) < g_13))
    {
        unsigned l_292 = 5UL;
        int *l_298 = &g_61;
        volatile int *l_335 = &g_111;
        int * const *l_350 = &g_121;
        int * const **l_349 = &l_350;
        int *l_363 = &g_61;
        for (g_122 = 0; (g_122 > 11); g_122 = safe_add_func_uint16_t_u_u(g_122, 2))
        {
            if (p_17)
                break;
        }
        if (l_292)
        {
            unsigned short l_293 = 2UL;
            unsigned short l_296 = 65535UL;
            int ** const l_304 = &l_297;
            int * const l_338 = &g_258;
            unsigned long long l_352 = 0x2315EEC50ED1BE1ELL;
            g_121 = func_47(p_17, l_293, (**g_109));

            ;
            (*g_109) = (*g_109);
            if ((**g_109))
            {
                unsigned long long l_299 = 1UL;
                int **l_303 = &g_257;
                int *l_309 = &g_122;
                if ((0x5ED2L && (p_17 | ((~((safe_mod_func_uint32_t_u_u(g_258, g_258)) == p_17)) != func_53(l_297, l_298, g_61, l_299)))))
                {
                    unsigned l_302 = 0UL;
                    int **l_316 = &g_121;
                    (**l_304) = (((p_17 & (0x08ACL <= (l_302 >= (l_303 != (void*)0)))) ^ (l_304 == (void*)0)) < g_111);
                    for (g_61 = 0; (g_61 > (-18)); g_61--)
                    {
                        return (**l_304);
                    }
                    if (func_25(((safe_lshift_func_int16_t_s_u((&p_17 != l_309), 10)) > (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(g_258, 8)), g_111))), (**l_304), g_122, g_122))
                    {
                        (*g_121) = (safe_sub_func_int64_t_s_s((((void*)0 == l_316) < (p_17 | (-1L))), g_111));
                    }
                    else
                    {
                        (**g_109) = (((g_258 && p_17) & (((((p_17 | (safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(((l_316 != &l_309) > ((p_17 > ((safe_lshift_func_uint8_t_u_u((*l_297), 4)) < (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((*l_309), (safe_mul_func_uint8_t_u_u(p_17, 5L)))) >= p_17), g_122)), (**l_316))), 4)))) & p_17)), g_258)) > 0x9C15L), 0L))) != (*l_297)) <= g_122) > g_61) >= p_17)) ^ (**l_316));
                    }
                    for (g_61 = 0; (g_61 != 12); ++g_61)
                    {
                        l_335 = (*g_109);
                        (*l_335) = ((*g_109) == (*g_109));
                    }
                }
                else
                {
                    unsigned long long l_351 = 1UL;
                    for (l_299 = 2; (l_299 < 26); l_299 = safe_add_func_int8_t_s_s(l_299, 2))
                    {
                        int **l_339 = (void*)0;
                        int **l_340 = &g_257;
                        (*l_340) = l_338;
                    }
                    (*g_257) = ((*g_109) != &p_17);
                    (**l_303) = ((safe_rshift_func_uint16_t_u_s((*l_297), (+g_122))) | ((((safe_add_func_uint64_t_u_u((**l_303), ((g_111 | g_13) > p_17))) < (g_13 >= (safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(g_258, ((&l_303 == l_349) < l_351))) ^ g_13), l_352)))) || p_17) > l_351));
                }
                for (l_299 = 0; (l_299 == 40); ++l_299)
                {
                    int l_355 = (-1L);
                }
                if ((*g_110))
                {
                    (*l_303) = (void*)0;

                    ;
                    (*g_109) = (*g_109);
                    return (*l_338);
                }
                else
                {
                    return (*l_309);
                }
            }
            else
            {
                unsigned l_362 = 0x61EE534AL;
                (*g_109) = (*g_109);
                (*g_109) = (void*)0;

                ;
                if ((1UL != (((*g_109) != &p_17) <= (*l_335))))
                {
                    int l_366 = (-1L);
                    int *l_369 = &g_258;
                    (*l_304) = l_363;
                    (*g_109) = (*g_109);
                    l_366 = (safe_mod_func_uint64_t_u_u(18446744073709551610UL, g_111));
                    (*l_297) = (+((safe_lshift_func_int16_t_s_u(g_61, p_17)) <= l_362));
                }
                else
                {
                    int *l_380 = &g_122;
                    int * const * const *l_381 = &l_350;
                    if ((+(*g_257)))
                    {
                        (*l_298) = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(((((***l_381) | l_362) ^ 0L) == (*l_380)), 5)), 10));
                    }
                    else
                    {
                        return (*l_380);
                    }
                }
                (*l_297) = (**l_304);
            }

            ;
            (*g_109) = (*g_109);
        }
        else
        {
            int **l_384 = &l_298;
            volatile int ***l_385 = &g_109;
            for (g_122 = (-16); (g_122 != (-16)); ++g_122)
            {
                (*g_109) = (void*)0;

                ;
                (*l_349) = l_384;

                ;
                return p_17;
            }
            (*l_385) = &g_110;
            for (g_258 = 12; (g_258 >= 22); g_258 = safe_add_func_int16_t_s_s(g_258, 1))
            {
                int *l_394 = &g_258;
                int ***l_407 = &l_384;
                (**l_350) = (+((safe_mul_func_uint8_t_u_u((**l_350), 0x46L)) | ((safe_add_func_int32_t_s_s(0xC3BA4103L, (safe_add_func_uint8_t_u_u(func_53(l_394, l_394, (safe_sub_func_int32_t_s_s(((&l_297 != (void*)0) < g_61), ((void*)0 == &p_17))), p_17), g_13)))) <= (*l_394))));
                for (l_204 = 0; (l_204 >= 3); l_204 = safe_add_func_uint16_t_u_u(l_204, 4))
                {
                    (*l_298) = (*l_297);
                    for (g_122 = 0; (g_122 != 24); ++g_122)
                    {
                        (*l_297) = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((l_407 != &g_109), g_61)), 6)), 3));
                        if ((*g_257))
                            continue;
                        p_17 = func_53((*l_384), &g_258, func_53(l_298, &p_17, g_258, (&p_17 == (void*)0)), g_122);
                    }
                }
                for (l_292 = 0; (l_292 < 56); l_292 = safe_add_func_uint32_t_u_u(l_292, 7))
                {
                    int *l_410 = &g_122;
                    l_410 = (void*)0;

                    ;
                }
            }
        }

        ;
        ;
    }
    else
    {
        unsigned l_420 = 0x7A9120E1L;
        int *l_431 = &g_61;
        char l_434 = 0x64L;
        for (g_258 = (-18); (g_258 > (-24)); g_258 = safe_sub_func_int8_t_s_s(g_258, 5))
        {
            int *l_417 = &g_61;
            int ** const *l_452 = (void*)0;
            if ((*g_257))
                break;
            if ((safe_mul_func_uint16_t_u_u(g_122, 0x51C4L)))
            {
                if ((*g_257))
                    break;
                for (l_204 = (-22); (l_204 >= (-16)); ++l_204)
                {
                    l_417 = &p_17;

                    ;
                }

                ;
            }
            else
            {
                return p_17;
            }

            ;
        }
        l_297 = &p_17;

        ;
    }

    ;
    ;
    ;
    ;
    (*l_459) = &p_17;

    ;
    (*l_459) = &p_17;
    for (g_122 = 0; (g_122 <= 12); g_122 = safe_add_func_uint8_t_u_u(g_122, 7))
    {
        unsigned l_462 = 18446744073709551615UL;
        int **l_479 = &l_297;
        const long long l_521 = 0xD95EC202C7D74502LL;
        unsigned short l_574 = 65535UL;
        if (l_462)
        {
            unsigned l_480 = 0x30BE3127L;
            int ***l_499 = (void*)0;
            unsigned l_556 = 0x963382AAL;
            int **l_568 = &l_297;
            if (p_17)
            {
                unsigned l_478 = 0x44C59513L;
                unsigned short l_494 = 2UL;
                long long l_503 = 0x417FFF112030E469LL;
                if ((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((void*)0 == (*g_109)) == ((safe_mul_func_int16_t_s_s(l_473, ((safe_sub_func_uint64_t_u_u(((l_462 || ((void*)0 == (*g_109))) ^ 255UL), ((safe_rshift_func_uint16_t_u_s(l_478, ((&g_110 != l_479) | l_480))) ^ p_17))) > (**l_479)))) == 3UL)), 14)), l_478)), l_478)))
                {
                    unsigned short l_493 = 0xAC4CL;
                    int *l_495 = &g_61;
                    for (l_443 = 5; (l_443 <= 33); ++l_443)
                    {
                        (**l_479) = l_478;
                        (*g_109) = (*g_109);
                        (*l_479) = &p_17;

                        ;
                    }
                }
                else
                {
                    int ** const l_500 = &l_297;
                    (*g_121) = l_478;
                    (*g_121) = ((void*)0 == &g_257);
                    if (p_17)
                    {
                        (*g_257) = p_17;
                    }
                    else
                    {
                        (**l_500) = ((l_480 >= 0xEAA06FA5281E01C6LL) < ((g_122 || ((safe_mod_func_int64_t_s_s((**l_479), l_480)) == (6UL ^ (l_499 == (void*)0)))) | ((&g_181 != l_500) && 0UL)));
                        (**l_500) = (safe_add_func_uint16_t_u_u(((*g_181) == 0xE44BFC9AL), g_13));
                        if (l_503)
                            break;
                        (*g_121) = 0L;
                    }
                }
                (*g_109) = (*g_109);
            }
            else
            {
                short l_504 = 1L;
                unsigned short l_505 = 0UL;
                int *l_508 = (void*)0;
                (*l_479) = (*l_459);
                if (l_504)
                {
                    unsigned long long l_506 = 0UL;
                    int *l_507 = &g_61;
                    if (l_505)
                    {
                        (*g_257) = (*g_121);
                        (**l_479) = l_506;
                        p_17 = (*g_121);
                    }
                    else
                    {
                        return g_61;



                    }
                    l_508 = l_507;

                    ;
                    if ((safe_sub_func_int64_t_s_s(0x9507D3F3A4E2ADE4LL, (g_258 == g_122))))
                    {
                        const unsigned l_520 = 0x9B4C8C2CL;
                        (*l_459) = &p_17;

                        ;
                        (*g_109) = (*g_109);
                        return p_17;



                    }
                    else
                    {
                        unsigned l_522 = 0xF6CB5FA0L;
                        (*l_508) = (0x8BBFL & (&p_17 != (void*)0));
                        (**l_479) = (0UL && ((p_17 != l_521) < g_122));
                        l_522 = (*g_181);
                    }
                }
                else
                {
                    for (l_473 = 0; (l_473 <= 24); l_473++)
                    {
                        int *l_525 = (void*)0;
                        l_508 = l_525;
                    }
                    for (l_462 = (-12); (l_462 != 34); l_462++)
                    {
                        short l_528 = 0x68A7L;
                        g_257 = &p_17;

                        ;
                    }
                }

                ;
                if ((&g_257 == l_479))
                {
                    for (l_443 = 0; (l_443 >= 37); ++l_443)
                    {
                        return p_17;



                    }
                    if ((safe_lshift_func_uint8_t_u_u(g_13, 3)))
                    {
                        if (p_17)
                            break;
                    }
                    else
                    {
                        (*l_297) = ((void*)0 != &g_257);
                        p_17 = p_17;
                    }
                    (*l_479) = (*l_479);
                }
                else
                {
                    int *l_548 = (void*)0;
                    (*l_297) = (safe_mod_func_uint8_t_u_u((g_61 || ((p_17 & (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(g_13, 5)), (*l_297)))) == p_17)), p_17));
                    (*g_257) = (safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(p_17, 0xE05D80D1481EF6CBLL)), (!g_258)));
                }
                (*l_459) = (*l_459);
            }
            if (p_17)
            {
                unsigned char l_553 = 0x5EL;
                (*g_109) = g_554;

                ;
                (*l_459) = func_47(g_13, g_111, p_17);

                ;
            }
            else
            {
                long long l_557 = 0xCE2323101D57BBE8LL;
                int *l_562 = &g_258;
                if ((safe_unary_minus_func_int8_t_s(((**l_479) & g_258))))
                {
                    long long l_563 = 0x269DEB2513F74BD7LL;
                    (*l_562) = (g_258 | ((safe_lshift_func_uint8_t_u_s(((-2L) && 6L), (safe_lshift_func_int8_t_s_s((g_111 < g_13), 7)))) ^ p_17));
                }
                else
                {
                    (**l_459) = p_17;
                    (*g_109) = (void*)0;

                    ;
                }
            }
            l_571 = (*g_109);
            (*l_479) = &p_17;

            ;
        }
        else
        {
            (*g_109) = (*g_109);
            if (p_17)
                break;
        }
        (*g_257) = ((((l_574 | (safe_lshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(g_111, (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_479 != (void*)0), g_61)), g_258)), (0x37B0DCED31894DBFLL | 0x9D4CF0DB2EAB432DLL))))) >= ((void*)0 != (*g_109))), (**l_459))), 1))) <= g_61) > 0xE5F415CFL) ^ (**l_459));
        (*g_121) = (safe_sub_func_uint16_t_u_u((g_122 == (*g_554)), p_17));
    }

    ;
    ;
    ;
    return p_17;



}







static short func_20(const short p_21, short p_22, long long p_23)
{
    int *l_211 = &g_122;
    unsigned short l_226 = 0x7D6EL;
    unsigned short l_250 = 65528UL;
    (*g_110) = (g_13 >= (safe_mul_func_uint16_t_u_u((&g_109 != (void*)0), (safe_sub_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(g_61, (l_211 != (void*)0))) >= (*l_211)), (*g_110))))));
    (*g_109) = (*g_109);
    (*l_211) = 0xF48E8C6BL;
    if ((*g_181))
    {
        return p_23;
    }
    else
    {
        unsigned long long l_227 = 0x6FF32468045C7303LL;
        const int **l_231 = &g_181;
        const int *** const l_230 = &l_231;
        int *l_259 = &g_258;
        unsigned long long l_280 = 0xDD9AE8C75D323453LL;
        int l_285 = 1L;
        int l_286 = 0x0C0586A2L;
        for (p_23 = 18; (p_23 > (-7)); p_23 = safe_sub_func_uint64_t_u_u(p_23, 9))
        {
            int *l_214 = &g_122;
            const int l_264 = 0x98FBD53CL;
            (*l_214) = func_25(p_22, func_53(&g_61, l_214, (((*g_110) && (safe_rshift_func_int8_t_s_s(func_25(p_21, p_21, p_21, (safe_unary_minus_func_int8_t_s((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((func_25(((safe_lshift_func_int8_t_s_u(6L, p_21)) != g_61), g_61, p_22, (*l_214)) & 0xFAA0L), p_23)), 0x7A67L)), 1L))))), 2))) < l_226), g_13), p_23, l_227);
            (*l_211) = (((safe_add_func_int64_t_s_s(p_23, (((*l_211) && (l_230 == (void*)0)) != p_21))) ^ (0xCA764965L != ((((-10L) >= p_23) & (((-9L) != p_23) && 0x8B0DL)) < 5L))) & 0x8EA0L);
            for (g_61 = (-22); (g_61 != 2); ++g_61)
            {
                if ((((p_23 ^ (&l_211 == (void*)0)) < (((((*l_211) >= g_13) > (safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((p_23 || (safe_add_func_uint8_t_u_u(g_122, ((p_22 > (p_22 <= 1UL)) != 0UL)))), (-3L))) < p_21), 6))) && g_13) <= p_22)) | 0x045812C5L))
                {
                    (*g_121) = (((safe_sub_func_int16_t_s_s((-2L), (g_61 < (((p_21 != g_61) & p_22) == p_21)))) == ((5L == 0x40L) <= (safe_mod_func_uint64_t_u_u(g_13, g_13)))) | 0x16DD7041B74B7467LL);
                    (*l_211) = 0xEDC91CA6L;
                }
                else
                {
                    int **l_249 = &l_211;
                    int ***l_248 = &l_249;
                    (*l_248) = &l_211;
                    (***l_248) = (*g_121);
                }
                (*l_214) = (-1L);
            }
            if (l_250)
            {
                (*g_110) = (&l_214 != (void*)0);
                (**l_230) = func_41(&g_122, &g_61, ((safe_mul_func_uint8_t_u_u(func_25(p_21, g_122, (!(g_61 < (safe_lshift_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(4294967287UL, p_22)) > g_122) != ((l_214 == (*g_109)) >= (**l_231))), 8)))), g_111), 0x3FL)) || 0xB5CE67DD89BB4E8ALL), g_257, l_259);

                ;
                return p_23;
            }
            else
            {
                unsigned short l_271 = 0x21E8L;
                (**l_230) = func_41(func_47(p_21, ((safe_add_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((l_264 ^ (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((-5L), p_21)), ((l_271 != ((((((-1L) <= (safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(1L, (*l_259))) < func_53(l_259, l_211, (*l_214), p_23)), l_271)), p_22)), p_22))) && 0xC4C8L) || p_23) == 0xE662L) ^ 254UL)) == p_22))) >= (*l_211)), (*l_211)))), l_280)), (-2L))) & g_258), p_23), l_211, p_22, &g_258, &g_122);

                ;
                (*g_109) = (*g_109);
                if (p_23)
                    break;
            }

            ;
        }

        ;
        (*l_211) = ((safe_rshift_func_uint8_t_u_u(p_23, (safe_rshift_func_int8_t_s_u((l_285 || ((l_286 != g_258) <= (((safe_rshift_func_int8_t_s_s(g_13, 5)) | (func_25(func_25(((safe_unary_minus_func_int64_t_s(((&g_121 == (*l_230)) != ((252UL < ((***l_230) <= 6UL)) ^ (**l_231))))) || (*l_211)), (*l_211), g_13, g_111), g_13, (*l_259), p_21) <= 5UL)) ^ g_13))), p_23)))) < g_258);
    }

    ;
    return (*l_211);
}







static short func_25(long long p_26, long long p_27, unsigned p_28, short p_29)
{
    int l_34 = 0x3062A4B1L;
    int **l_194 = (void*)0;
    int **l_195 = &g_121;
    volatile int **l_200 = (void*)0;
    (*l_195) = func_32(l_34);
    (**l_195) = (safe_lshift_func_uint8_t_u_s(p_29, p_27));
    for (p_26 = (-3); (p_26 > (-11)); --p_26)
    {
        return g_111;
    }
    l_200 = &g_110;

    ;
    return p_26;
}







static int * func_32(unsigned short p_33)
{
    int l_37 = 0x3AE4C7BAL;
    int *l_38 = &l_37;
    int **l_191 = &g_121;
    int ***l_190 = &l_191;
    unsigned long long l_192 = 18446744073709551615UL;
    unsigned long long l_193 = 0x378F7CF680477419LL;
    (*l_38) = ((safe_add_func_uint64_t_u_u(p_33, g_13)) | l_37);
    for (p_33 = 0; (p_33 == 32); p_33 = safe_add_func_uint32_t_u_u(p_33, 5))
    {
        long long l_51 = 0xCDE30ECA6D786FF5LL;
        int *l_52 = &l_37;
        int *l_182 = &g_122;
        l_182 = func_41(func_47((((l_51 >= (p_33 < 0xE60A2FC5L)) && (*l_38)) < (l_51 & (l_52 == (void*)0))), (+func_53(&l_37, &l_37, (*l_38), g_13)), p_33), l_52, p_33, g_121, &g_122);

        ;
        (*l_182) = (*l_182);
        (*l_52) = ((func_53(func_47((safe_unary_minus_func_int32_t_s(func_53(l_52, func_41(func_47((safe_rshift_func_int8_t_s_s(((((((safe_mod_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u((p_33 | g_111), (p_33 | (&g_109 != l_190)))) || p_33) == (0L >= 18446744073709551615UL)), (***l_190))) == p_33) == p_33) == p_33) ^ p_33) > p_33), (**l_191))), p_33, l_192), &g_122, (*l_182), (*l_191), &g_122), p_33, l_193))), p_33, p_33), (**l_190), g_13, g_13) | p_33) != p_33);
        (*g_110) = ((void*)0 != l_182);
    }
    return (*l_191);


}







static int * func_41(int * p_42, int * p_43, int p_44, int * p_45, int * p_46)
{
    int **l_124 = &g_121;
    int ***l_123 = &l_124;
    int l_146 = 0xF3D14E57L;
    (*g_109) = (*g_109);
    (*l_123) = &p_46;

    ;
    for (p_44 = 17; (p_44 < (-20)); p_44 = safe_sub_func_uint8_t_u_u(p_44, 7))
    {
        int ***l_137 = &l_124;
        for (g_61 = 0; (g_61 > (-15)); --g_61)
        {
            int **l_129 = &g_121;
            int l_180 = 0x9F1547C5L;
        }
    }
    (*p_43) = (*g_121);
    return &g_61;


}







static int * func_47(unsigned char p_48, short p_49, int p_50)
{
    int *l_119 = &g_61;
    for (p_49 = (-21); (p_49 <= 3); p_49 = safe_add_func_int8_t_s_s(p_49, 6))
    {
        int **l_120 = &l_119;
        (*l_120) = l_119;
        (*l_120) = &p_50;

        ;
        (**g_109) = p_50;
        (*l_120) = l_119;
    }

    ;
    return &g_61;


}







static short func_53(int * p_54, int * p_55, unsigned long long p_56, unsigned p_57)
{
    int *l_60 = &g_61;
    int l_74 = 0xF941663BL;
    int **l_76 = &l_60;
    (*l_60) = ((safe_lshift_func_int8_t_s_s(p_56, (((*p_54) <= g_13) | p_57))) & g_13);
    if ((safe_add_func_uint64_t_u_u((*l_60), g_13)))
    {
        short l_66 = (-6L);
        (*l_60) = (safe_add_func_int16_t_s_s(l_66, p_57));
    }
    else
    {
        unsigned long long l_69 = 0UL;
        int l_108 = 1L;
        (*l_60) = (0x03L >= g_61);
        if (((safe_mul_func_int8_t_s_s((*l_60), p_56)) > (l_69 < ((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(g_61, ((*p_55) ^ ((0x33BDL >= g_13) <= (*l_60))))) > (l_74 & 4294967289UL)), p_57)) <= g_61))))
        {
            int **l_75 = &l_60;
            (*l_75) = p_55;


            l_76 = l_75;
            g_61 = ((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(g_61, 3)) >= ((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(((safe_sub_func_int8_t_s_s(((g_61 == ((g_13 || (g_61 >= ((((*l_76) == p_55) ^ (safe_sub_func_uint64_t_u_u((0xB9E2BF2DCFCB68B6LL == p_57), (g_13 >= p_57)))) && (**l_76)))) < g_13)) & 0xAA3AE4374F1E5EB9LL), l_69)) >= l_69))), 0xD940L)), g_13)) >= 0x5DD176C5L)), g_13)) <= 0UL);
        }
        else
        {
            int l_103 = 0x5FB7473AL;
            volatile int ***l_112 = &g_109;
            for (p_57 = (-4); (p_57 <= 47); p_57 = safe_add_func_int8_t_s_s(p_57, 3))
            {
                long long l_98 = 0x68D18E14F04B5A03LL;
            }
            (*l_60) = (~l_108);
            (*l_112) = g_109;
            (*l_76) = p_55;


        }


        (**g_109) = (**l_76);
    }


    (*g_110) = (safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(0xFEE19A6AL, 0x7D4ADD7DL)) && ((&l_60 == (void*)0) <= (*l_60))), 3));
    return g_111;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
