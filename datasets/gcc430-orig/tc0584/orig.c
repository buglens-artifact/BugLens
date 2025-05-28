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



static int * volatile g_3 = (void*)0;
static int g_5 = (-1L);
static int * volatile g_4 = &g_5;
static int g_87 = 0x68BE3E2CL;
static int g_92 = (-10L);
static int g_96 = 0xB74084DAL;
static int * volatile g_95 = &g_96;
static volatile int * const volatile * volatile *g_106 = (void*)0;
static int * volatile g_178 = &g_87;
static int *g_183 = (void*)0;
static int ** volatile g_182 = &g_183;
static int ** volatile g_185 = &g_183;
static int * volatile g_190 = &g_96;
static int ***g_218 = (void*)0;
static int *g_277 = &g_5;
static int * const **g_284 = (void*)0;
static const unsigned char g_323 = 255UL;
static unsigned long long g_408 = 18446744073709551615UL;
static int g_440 = 0L;
static int ** volatile g_461 = (void*)0;
static int ** volatile g_462 = &g_277;
static int ** volatile g_464 = &g_183;
static unsigned g_471 = 18446744073709551615UL;
static int ** volatile g_472 = &g_183;
static int ** volatile g_477 = &g_183;
static int ** volatile g_490 = &g_277;
static int **g_501 = &g_277;
static int *g_519 = &g_96;
static int *g_541 = (void*)0;



static const long long func_1(void);
static int func_11(int * p_12, int * p_13, int p_14, long long p_15, unsigned short p_16);
static int * func_18(char p_19);
static char func_20(unsigned p_21, int * p_22, const unsigned p_23, char p_24, int * p_25);
static int * func_35(char p_36, int * p_37);
static unsigned long long func_46(unsigned short p_47, int ** p_48, int *** p_49);
static int ** func_51(short p_52, int * p_53, unsigned char p_54);
static unsigned func_55(const unsigned short p_56, int * p_57, int * p_58, short p_59, int * const ** p_60);
static int * func_62(int p_63, int p_64, long long p_65, unsigned short p_66, const char p_67);
static char func_69(short p_70, int *** p_71);
static const long long func_1(void)
{
    unsigned l_2 = 0x198A8F93L;
    int *l_26 = &g_5;
    long long l_499 = 0xCA45EEAA3B2545CELL;
    char l_502 = 0xBDL;
    const unsigned short l_527 = 0xEADAL;
    int * const *l_529 = &g_277;
    int * const **l_528 = &l_529;
    unsigned l_539 = 18446744073709551611UL;
    int ***l_540 = &g_501;
    int l_542 = (-7L);
    (*g_4) = l_2;
    if ((*g_4))
    {
        unsigned l_6 = 0UL;
        int *l_17 = &g_5;
        int *l_27 = &g_5;
        unsigned l_28 = 4294967286UL;
        (*g_4) = (g_5 || l_6);
        (*l_17) = ((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(0x07A98815L, func_11(l_17, func_18(func_20(g_5, l_26, (&g_5 != l_27), l_28, l_27)), (*l_17), g_440, (*l_17)))), (*l_17))) || (*l_26));



    }
    else
    {
        unsigned l_481 = 0xDBB26A68L;
        const long long l_482 = 0xFABB2636098FC4DELL;
        int ** const l_500 = &l_26;
        int l_512 = 0xCB7FDE7EL;
        if ((*g_178))
        {
            for (g_5 = 2; (g_5 != (-25)); --g_5)
            {
                (*g_190) = 0x36F0153EL;
                if ((*g_277))
                    break;
                l_481 = (*l_26);
            }
            return l_482;
        }
        else
        {
            int *l_485 = &g_87;
            unsigned char l_510 = 247UL;
            for (l_2 = 0; (l_2 == 48); l_2 = safe_add_func_uint16_t_u_u(l_2, 2))
            {
                int *l_486 = &g_5;
                int ***l_520 = &g_501;
            }
        }
    }



    if ((g_5 & (safe_rshift_func_int8_t_s_s(((18446744073709551615UL >= (*l_26)) > ((l_26 != (void*)0) != ((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((g_87 <= g_87) && 0xE9D4L), 3)), 0x04L)) < g_323))), g_408))))
    {
        int *l_536 = &g_96;
        for (g_408 = 0; (g_408 > 41); g_408 = safe_add_func_int64_t_s_s(g_408, 5))
        {
            (*g_501) = (void*)0;

            ;
        }


        (*l_536) = (safe_div_func_uint64_t_u_u(g_440, (safe_sub_func_uint32_t_u_u((*l_536), l_542))));
        l_536 = l_536;
    }
    else
    {
        unsigned long long l_545 = 1UL;
        for (g_87 = 21; (g_87 >= 7); g_87 = safe_sub_func_int32_t_s_s(g_87, 9))
        {
            int *l_546 = &g_92;
            if (l_545)
                break;
            (*g_501) = l_546;

            ;
        }


    }


    return g_5;
}







static int func_11(int * p_12, int * p_13, int p_14, long long p_15, unsigned short p_16)
{
    int **l_478 = &g_277;
    (*l_478) = &p_14;

    ;
    return (*p_12);


}







static int * func_18(char p_19)
{
    int l_463 = 0x2C07549FL;
    int ***l_469 = (void*)0;
    if (l_463)
    {
        (*g_464) = (*g_182);
    }
    else
    {
        int * const l_465 = &g_87;
        char l_466 = 0xC4L;
        int *l_470 = &g_5;
        l_470 = func_62((((*g_185) == l_465) >= (((((((*l_465) == g_440) < l_463) & l_466) | l_463) & ((+func_20((func_20(((l_469 != (void*)0) ^ 0UL), &l_463, g_92, p_19, l_470) && p_19), &g_87, g_92, g_440, &g_96)) != (*g_277))) <= p_19)), g_96, g_471, l_463, (*l_470));

        ;
        ;
        (*g_472) = l_465;

        ;
        for (g_92 = 0; (g_92 <= (-1)); --g_92)
        {
            const int *l_475 = &l_463;
            const int **l_476 = &l_475;
            (*l_476) = l_475;
        }
        (*g_477) = &l_463;

        ;
    }

    ;
    return (*g_462);



}







static char func_20(unsigned p_21, int * p_22, const unsigned p_23, char p_24, int * p_25)
{
    const int * const **l_29 = (void*)0;
    int ***l_30 = (void*)0;
    int **l_32 = (void*)0;
    int ***l_31 = &l_32;
    (*l_31) = (void*)0;
    for (p_21 = 0; (p_21 != 10); ++p_21)
    {
        long long l_42 = 2L;
        int ***l_50 = &l_32;
    }
    return g_87;
}







static int * func_35(char p_36, int * p_37)
{
    const unsigned l_449 = 18446744073709551614UL;
    long long l_451 = (-4L);
    int **l_453 = (void*)0;
    int ***l_454 = &l_453;
    const char l_459 = 0xAFL;
    int **l_460 = &g_277;
    for (g_5 = 18; (g_5 <= (-22)); g_5 = safe_sub_func_uint32_t_u_u(g_5, 1))
    {
        int **l_448 = (void*)0;
        int ***l_447 = &l_448;
        int * const **l_450 = (void*)0;
        int **l_452 = (void*)0;
        (*g_185) = func_62((safe_mul_func_int16_t_s_s(g_408, g_87)), g_96, l_451, p_36, p_36);
    }
    (*l_460) = func_62(l_449, (l_453 != (void*)0), func_69(l_449, l_454), ((safe_mul_func_int8_t_s_s(p_36, ((safe_lshift_func_int16_t_s_s(p_36, l_459)) != 7UL))) && g_408), g_440);

    ;
    return (*g_185);


}







static unsigned long long func_46(unsigned short p_47, int ** p_48, int *** p_49)
{
    int *l_261 = &g_92;
    int * const *l_263 = &l_261;
    int * const **l_262 = &l_263;
    unsigned long long l_285 = 18446744073709551609UL;
    const int *l_365 = (void*)0;
    const int **l_364 = &l_365;
    const int ***l_363 = &l_364;
    unsigned long long l_393 = 18446744073709551606UL;
    if ((***l_262))
    {
        unsigned l_269 = 5UL;
        int **l_274 = &g_183;
        int * const **l_275 = &l_263;
        int *l_276 = &g_5;
        (**l_263) = ((*p_49) == (*l_262));
        (*l_261) = (((*l_262) == (*p_49)) == ((((+(safe_div_func_uint32_t_u_u(7UL, 0x18DE91D9L))) & (***l_262)) || 0x514DB471E7E6F174LL) == ((safe_unary_minus_func_int32_t_s((safe_mul_func_int8_t_s_s((**l_263), l_269)))) < (safe_lshift_func_uint8_t_u_u(l_269, 5)))));
        (***l_262) = (safe_mul_func_uint16_t_u_u((func_55(func_55(p_47, l_261, func_62((+(0UL || g_92)), (((*p_49) != l_274) | ((&p_48 == &l_274) | (-8L))), (**l_263), p_47, g_96), l_269, l_275), l_276, g_277, p_47, &l_263) <= p_47), g_5));
        (*l_274) = func_62((((void*)0 == (*p_49)) <= p_47), p_47, (**l_263), (p_47 != (0x21F6B67610C2F07FLL || (&l_263 != (void*)0))), p_47);
    }
    else
    {
        int *l_283 = &g_5;
        int * const **l_326 = (void*)0;
        unsigned l_403 = 0UL;
        (***l_262) = (*g_4);
        (*l_261) = (p_47 ^ (safe_mod_func_uint64_t_u_u(g_5, (***l_262))));
        if ((safe_unary_minus_func_uint16_t_u(((safe_add_func_int64_t_s_s(0xAF386B69A5DB9962LL, (((0x973494EFL >= l_285) >= p_47) == (*l_283)))) > p_47))))
        {
            int *l_286 = &g_92;
            int **l_379 = &g_277;
            int ***l_378 = &l_379;
            unsigned l_416 = 18446744073709551615UL;
            (*p_48) = l_286;

            ;
            if ((*g_4))
            {
                int l_320 = 0x67139CEEL;
                for (g_96 = 0; (g_96 != (-7)); --g_96)
                {
                    unsigned l_293 = 0xE7905C1DL;
                    const unsigned long long l_304 = 0xC9478151E720B53ALL;
                    int l_305 = 0L;
                    l_305 = (safe_mod_func_uint16_t_u_u(((*l_286) > p_47), (safe_mod_func_uint16_t_u_u((((l_293 >= (safe_unary_minus_func_int8_t_s((safe_div_func_int16_t_s_s(0x7E7BL, (l_293 | (safe_unary_minus_func_int32_t_s((((safe_rshift_func_uint8_t_u_u(g_92, (((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s((l_304 && 5UL), (*g_190))), p_47)) <= g_5) >= (*l_286)))) <= (-1L)) || (-9L)))))))))) && p_47) && (***l_262)), g_92))));
                }
                (*p_48) = func_62((*l_286), (safe_rshift_func_uint8_t_u_u(p_47, 6)), (safe_rshift_func_int8_t_s_u((((*l_261) & p_47) && (safe_div_func_int32_t_s_s((9UL < (*l_286)), (*l_283)))), 0)), p_47, g_87);

                ;
                (*l_261) = (((l_320 & (safe_mul_func_uint8_t_u_u(0x8CL, ((g_323 ^ (safe_sub_func_uint16_t_u_u(p_47, (*l_286)))) == (**p_48))))) < g_92) | p_47);
                if (((safe_mul_func_uint16_t_u_u((p_47 < (safe_rshift_func_int8_t_s_u((((&l_286 == (*p_49)) && (((l_326 != &g_185) && ((**p_48) == g_87)) == g_323)) & ((g_87 > 0x078178A3L) > 0x6A5F493B957851B5LL)), (*l_283)))), 0xA6DDL)) || (*l_261)))
                {
                    short l_335 = (-5L);
                    int **l_340 = &l_283;
                    int ***l_339 = &l_340;
                    if (l_335)
                    {
                        const unsigned l_338 = 0UL;
                        (*p_48) = func_62((0x2432F48885BD3CE0LL >= p_47), g_96, ((void*)0 != (*g_185)), (safe_add_func_int16_t_s_s(p_47, (~l_335))), l_338);
                        (**l_339) = func_62((*l_283), l_338, (func_69((***l_262), l_339) == (safe_lshift_func_int8_t_s_u(g_5, (***l_339)))), (p_47 < p_47), g_323);

                        ;
                    }
                    else
                    {
                        (**l_339) = (void*)0;

                        ;
                        (*p_48) = l_286;

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned char l_396 = 0x3DL;
                    for (g_96 = (-19); (g_96 >= (-5)); ++g_96)
                    {
                        const int * const l_345 = (void*)0;
                        const int **l_346 = (void*)0;
                        const int *l_348 = &g_87;
                        const int **l_347 = &l_348;
                        (*l_347) = l_345;

                        ;
                    }
                    for (p_47 = 0; (p_47 == 17); p_47 = safe_add_func_int64_t_s_s(p_47, 8))
                    {
                        int *l_355 = &l_320;
                        if (l_320)
                            break;
                        (*l_286) = (safe_div_func_int32_t_s_s((*l_286), (safe_mul_func_uint16_t_u_u((p_47 <= ((6UL >= ((*p_48) != l_355)) ^ g_5)), (safe_unary_minus_func_int64_t_s((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((g_323 && (*l_286)), (l_320 & g_92))), p_47))))))));
                        if ((*g_178))
                            continue;
                    }
                    if (((safe_mul_func_int8_t_s_s(((l_363 == (void*)0) | (func_69((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((0x13EF0431L <= (func_69(l_320, g_218) || (safe_add_func_int64_t_s_s(p_47, (p_47 > 0L))))), 11)) | 0L), g_5)), 3)), g_5)), 1L)), l_378) <= 0x1101BBE2534F437CLL)), p_47)) != g_5))
                    {
                        int l_392 = 0xD555CBDFL;
                        int *l_394 = (void*)0;
                        l_394 = func_62((g_5 || ((safe_mul_func_uint16_t_u_u(0x7103L, (safe_div_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(func_69(p_47, g_218), p_47)), (~(((safe_sub_func_uint64_t_u_u(18446744073709551609UL, (safe_mul_func_uint8_t_u_u((g_5 != ((p_47 <= l_392) == g_5)), 0xA9L)))) < g_323) & p_47)))) | g_323), 18446744073709551615UL)))) != 0x96L)), g_323, l_393, g_5, p_47);

                        ;
                    }
                    else
                    {
                        (***l_262) = (**p_48);
                    }
                    if ((**p_48))
                    {
                        (*l_363) = (void*)0;

                        ;
                    }
                    else
                    {
                        int *l_395 = &l_320;
                        (**l_363) = l_395;

                        ;
                        l_396 = (g_96 >= g_92);
                        (**l_363) = (*l_364);
                    }

                    ;
                    ;
                }

                ;
                ;
                ;
            }
            else
            {
                (**p_48) = 0xACA74AEDL;
            }

            ;
            ;

            ;
            for (g_96 = (-21); (g_96 > (-15)); g_96 = safe_add_func_int32_t_s_s(g_96, 1))
            {
                const unsigned short l_415 = 65535UL;
                int **l_426 = &l_286;
                for (p_47 = (-1); (p_47 > 32); p_47 = safe_add_func_int8_t_s_s(p_47, 2))
                {
                    int *l_407 = &g_5;
                    if ((*g_4))
                    {
                        int *l_404 = &g_92;
                        (***l_262) = (((***l_378) != (p_47 <= (&l_364 != &g_182))) || ((*l_262) != (*l_363)));
                        if ((*g_178))
                            continue;
                        (**l_263) = l_403;
                        (*l_379) = l_404;

                        ;
                    }
                    else
                    {
                        (**l_263) = 0L;
                        if ((*g_277))
                            continue;
                        (**l_263) = ((-7L) | p_47);
                        (*l_286) = 0x097C5418L;
                    }
                    (*l_286) = ((void*)0 != (*p_49));
                    if ((g_323 && 2L))
                    {
                        (*l_286) = (safe_mul_func_uint8_t_u_u((((*p_49) == (*p_49)) & p_47), g_323));
                        (*l_286) = (***l_262);
                    }
                    else
                    {
                        (**l_378) = l_407;

                        ;
                        (*p_48) = (**l_378);

                        ;
                        if (g_408)
                            break;
                    }
                    (*l_261) = (g_408 > ((safe_lshift_func_uint16_t_u_u(p_47, 9)) >= ((*p_49) != (*p_49))));
                }
                if (((safe_div_func_int8_t_s_s(((**p_48) == (~(***l_378))), g_96)) > (safe_mod_func_int32_t_s_s((*g_277), (l_415 & g_96)))))
                {
                    long long l_421 = 2L;
                    unsigned char l_427 = 1UL;
                    (*l_261) = l_416;
                    if ((**p_48))
                        break;
                    l_427 = (safe_mod_func_uint64_t_u_u((+(((p_47 ^ (safe_sub_func_int32_t_s_s(0xDF2E6AC6L, (l_421 == p_47)))) <= ((safe_lshift_func_int16_t_s_s(g_323, 1)) & (safe_mod_func_int8_t_s_s((l_426 != (*l_378)), g_92)))) ^ l_421)), g_5));
                    (**l_426) = (safe_sub_func_int32_t_s_s((**p_48), ((l_427 | 0L) | ((((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(((void*)0 != &l_379), p_47)), ((p_47 <= g_323) > ((g_5 == g_92) && (*g_183))))) == p_47) != 0xC29C5EDA2E6EB306LL) < p_47))));
                }
                else
                {
                    int *l_436 = &g_92;
                    l_436 = (*p_48);

                    ;
                    (*p_48) = (*g_185);
                }
            }

            ;
        }
        else
        {
            const unsigned long long l_439 = 0x3BBA409FF7E1002FLL;
            (***l_262) = (0x4E3F6DE9L ^ (safe_div_func_uint16_t_u_u(0x8059L, l_439)));
            (*l_364) = (*p_48);

            ;
        }

        ;
        ;
        ;

        ;
    }

    ;
    ;

    ;
    (***l_262) = (&l_364 != (void*)0);
    (*p_48) = (void*)0;

    ;
    return p_47;
}







static int ** func_51(short p_52, int * p_53, unsigned char p_54)
{
    const char l_61 = 0x3BL;
    int *l_68 = &g_5;
    int ***l_82 = (void*)0;
    int * const *l_238 = (void*)0;
    int * const **l_237 = &l_238;
    int *l_260 = &g_96;
    (*l_260) = ((0x1CC49297L | func_55(l_61, p_53, func_62((l_68 == (void*)0), (0x4DL | func_69((safe_div_func_uint16_t_u_u((0UL > (safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((((safe_sub_func_int64_t_s_s(((*l_68) <= (*p_53)), g_5)) | p_52) ^ (*l_68)), 4)) <= 0xEAFCA19AB6322A57LL) == 0L), g_5)), (*p_53)))), (*l_68))), l_82)), g_5, p_54, p_54), p_54, l_237)) != 0x7331A696L);
    return &g_183;


}







static unsigned func_55(const unsigned short p_56, int * p_57, int * p_58, short p_59, int * const ** p_60)
{
    const short l_247 = (-1L);
    int l_257 = 0x4849B7B0L;
    int *l_259 = &g_96;
    if ((*g_4))
    {
        int *l_239 = (void*)0;
        int *l_240 = &g_87;
        (*l_240) = 0L;
    }
    else
    {
        unsigned short l_258 = 65533UL;
        for (g_92 = 0; (g_92 <= (-1)); g_92 = safe_sub_func_int16_t_s_s(g_92, 3))
        {
            short l_253 = 0x7BA4L;
            long long l_256 = 0xDC22399FB3213122LL;
            l_257 = (g_5 && (safe_div_func_uint32_t_u_u((~((-3L) < (!((~(safe_add_func_int32_t_s_s(l_247, 0L))) ^ (safe_lshift_func_uint16_t_u_u(p_56, 4)))))), (safe_sub_func_int16_t_s_s(((((void*)0 == (*p_60)) || ((((safe_unary_minus_func_int8_t_s((l_253 || (safe_rshift_func_int16_t_s_u(0xC4E6L, 12))))) ^ p_59) | 1L) && l_256)) | p_59), p_56)))));
            return l_258;
        }
    }
    (*l_259) = ((*g_185) != p_58);
    (*l_259) = (*p_57);
    return (*l_259);
}







static int * func_62(int p_63, int p_64, long long p_65, unsigned short p_66, const char p_67)
{
    int *l_184 = &g_5;
    int **l_189 = &g_183;
    int ***l_188 = &l_189;
    int l_226 = (-2L);
    if (p_64)
    {
        unsigned l_166 = 0xA1133990L;
        int **l_176 = (void*)0;
        int l_177 = 0x13C04A0AL;
        l_177 = (safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s(g_92, (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_166, 7)), (safe_unary_minus_func_uint16_t_u((((safe_add_func_uint64_t_u_u(0xDC27877F70597A70LL, g_87)) != (p_63 ^ (safe_mod_func_uint8_t_u_u((p_66 ^ (safe_lshift_func_uint16_t_u_u((!g_87), (safe_div_func_uint16_t_u_u(((p_67 == ((void*)0 != l_176)) > g_5), p_63))))), 0xEFL)))) >= g_92))))))), 0xA74BL)), p_65)), p_66));
    }
    else
    {
        (*g_178) = ((65535UL > (p_67 | 0xE66CDF1DL)) < 0x8BD48E638A31BD4ALL);
    }
    for (p_66 = 0; (p_66 <= 36); ++p_66)
    {
        int **l_181 = (void*)0;
        (*g_182) = &p_63;

        ;
        (*g_185) = l_184;

        ;
        (*g_190) = (safe_add_func_int8_t_s_s(g_96, (&g_182 != l_188)));
    }
    if ((*l_184))
    {
        return (*g_182);


    }
    else
    {
        short l_214 = 0xBF97L;
        int *l_219 = &g_92;
        for (p_66 = 28; (p_66 > 43); p_66 = safe_add_func_uint64_t_u_u(p_66, 5))
        {
            const int **l_213 = (void*)0;
            int *l_215 = &g_92;
            (*l_215) = (safe_mul_func_int16_t_s_s(g_92, ((((*g_190) || p_63) > 18446744073709551609UL) < (safe_sub_func_uint8_t_u_u(p_67, (safe_lshift_func_int16_t_s_u(((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(g_87, (safe_lshift_func_int16_t_s_u(0xBCF3L, 2)))), (safe_add_func_uint8_t_u_u(((!(safe_sub_func_uint64_t_u_u(p_67, (l_213 == (void*)0)))) <= p_63), 1UL)))), l_214)), l_214)) != 0xF271L), 1)))))));
            (*l_215) = ((safe_add_func_uint8_t_u_u((((func_69(g_5, g_218) != 0xF86CL) >= ((void*)0 == &g_5)) < 0xD2AFC0BA812F185FLL), p_65)) ^ ((void*)0 == &l_213));
            l_219 = (**l_188);
        }

        ;
    }
    p_63 = (0x718A764D50860F98LL <= (safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((g_96 == l_226), 12)) != (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0xA3L, (safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s(g_96, ((p_67 && (((*g_182) == (void*)0) || ((safe_div_func_int64_t_s_s(g_87, p_66)) < 0x34L))) || g_5))), g_87)))), g_5))), 0xDDA5E662L)), 8)));
    return (*g_185);


}







static char func_69(short p_70, int *** p_71)
{
    int *l_90 = &g_87;
    unsigned l_135 = 1UL;
    for (p_70 = (-24); (p_70 >= (-14)); p_70 = safe_add_func_int8_t_s_s(p_70, 3))
    {
        return p_70;
    }
    for (p_70 = 0; (p_70 < (-12)); p_70--)
    {
        int *l_98 = &g_87;
        int **l_100 = &l_90;
        for (g_87 = 23; (g_87 == 0); --g_87)
        {
            int **l_91 = &l_90;
            char l_97 = 0L;
            (*l_91) = l_90;
            for (g_92 = 0; (g_92 >= (-9)); --g_92)
            {
                (*g_95) = (0x55A6L != p_70);
            }
            if (l_97)
                continue;
        }
    }
    return p_70;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
