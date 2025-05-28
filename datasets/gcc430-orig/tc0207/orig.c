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



static int g_17 = 7L;
static int *g_16 = &g_17;
static int g_70 = 0x1B4BC71FL;
static int g_150 = 0L;
static int *g_187 = (void*)0;
static volatile int ***g_237 = (void*)0;
static unsigned short g_270 = 65530UL;
static int *g_312 = (void*)0;
static int **g_436 = &g_187;
static int *g_490 = &g_150;
static volatile int g_507 = 0xDA6FFCF7L;
static int *g_537 = &g_150;
static unsigned char g_596 = 0UL;
static volatile unsigned short g_602 = 65535UL;
static unsigned long long g_611 = 0x98A7F5782915D213LL;
static int *g_695 = &g_17;
static int *g_776 = &g_70;
static int *g_816 = &g_17;



static unsigned short func_1(void);
static int * func_2(unsigned char p_3);
static char func_6(long long p_7, int * p_8, int * p_9);
static char func_12(unsigned p_13, short p_14, unsigned p_15);
static unsigned char func_35(unsigned long long p_36, int * p_37, long long p_38, unsigned p_39, int * p_40);
static int * func_42(int * p_43, short p_44);
static int * func_45(int * p_46);
static int * func_47(unsigned p_48, unsigned char p_49, unsigned short p_50, int p_51);
static short func_55(unsigned char p_56);
static int func_58(int * p_59, int * p_60, int * p_61, int * p_62, int * p_63);
static unsigned short func_1(void)
{
    int *l_18 = (void*)0;
    int l_19 = 0x4C865B49L;
    int *l_579 = (void*)0;
    int ***l_590 = &g_436;
    short l_630 = 0xBFDBL;
    int **l_637 = &g_537;
    char l_642 = 0x06L;
    long long l_747 = 0xF5D8E9B2D8B8AB7ALL;
    int *l_767 = (void*)0;
    (*g_436) = func_2((safe_rshift_func_int8_t_s_u(func_6((safe_sub_func_int8_t_s_s(func_12((g_16 != l_18), g_17, l_19), (((((void*)0 == &g_436) == (g_70 && (((&l_19 == &l_19) < 9UL) & l_19))) == g_507) <= 1L))), &l_19, l_579), 1)));

    ;
    if ((**g_436))
    {
        short l_589 = (-8L);
        int ***l_591 = &g_436;
        (*g_490) = (safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(18446744073709551612UL, l_589)), l_589)), (l_590 != l_591)));
        (***l_591) = (*g_490);
        for (l_19 = 0; (l_19 == 23); ++l_19)
        {
            (**l_591) = (*g_436);
        }
        (**g_436) = (*g_187);
    }
    else
    {
        unsigned char l_600 = 0UL;
        int *l_609 = &g_70;
        char l_629 = (-9L);
        short l_641 = 0xAEC5L;
        unsigned l_649 = 0UL;
        char l_655 = 0x0CL;
        char l_661 = 0x75L;
        char l_666 = 0L;
        int ***l_744 = &l_637;
        for (l_19 = 0; (l_19 <= 29); ++l_19)
        {
            int *l_615 = &g_150;
            long long l_620 = 0x9E41F998BFFE80F8LL;
            short l_662 = (-5L);
            int *l_685 = &g_17;
            int *l_761 = &l_19;
        }
        if (((**l_637) && (safe_sub_func_int8_t_s_s((**l_637), (((((***l_744) > (func_58((*g_436), (*g_436), (**l_744), (**l_744), g_776) | g_602)) != (***l_744)) == (-5L)) || g_602)))))
        {
            unsigned l_786 = 0x51788930L;
            int *l_799 = &l_19;
            unsigned short l_800 = 0xCF97L;
            unsigned l_818 = 0UL;
            for (l_641 = 2; (l_641 >= (-17)); l_641 = safe_sub_func_int64_t_s_s(l_641, 6))
            {
                unsigned l_815 = 0xDD1D7ED7L;
                if ((safe_mul_func_int8_t_s_s(1L, g_150)))
                {
                    return g_596;
                }
                else
                {
                    int l_783 = 0x841F90FCL;
                    int **l_795 = &l_609;
                    if ((safe_rshift_func_int8_t_s_u((*l_609), l_783)))
                    {
                        char l_784 = 0xB2L;
                        (**l_744) = func_2(l_784);

                        ;
                        (*g_776) = (g_611 > 1UL);
                        (*g_436) = (**l_744);
                    }
                    else
                    {
                        char l_785 = (-1L);
                        if (l_785)
                            break;
                        (**l_590) = (*g_436);
                        (*g_776) = (g_150 == g_507);
                        return l_786;
                    }

                    ;
                    for (l_642 = (-8); (l_642 >= (-21)); l_642--)
                    {
                        unsigned l_798 = 0xE43290A8L;
                        (*g_776) = (*g_537);
                        (*g_695) = ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((((((void*)0 != (*g_436)) | (l_783 | ((!5L) <= (((l_795 == (void*)0) && (func_12(g_507, (g_150 == (safe_add_func_uint16_t_u_u(0UL, g_270))), g_270) | l_798)) < 0xA3B3L)))) >= (*g_537)) | g_270), g_611)), 5)), g_596)) < 0xE3D56D01904127FDLL);
                        (**l_744) = l_799;

                        ;
                        return g_17;


                    }
                    (*g_695) = ((8UL <= 0x6D1CL) < (l_800 ^ (-1L)));
                }

                ;
                for (l_655 = 0; (l_655 < (-13)); l_655 = safe_sub_func_uint64_t_u_u(l_655, 3))
                {
                    int ***l_803 = &g_436;
                }
                (**l_590) = (*g_436);
                (**l_744) = (*g_436);
            }

            ;
        }
        else
        {
            unsigned l_822 = 0UL;
            int *l_823 = (void*)0;
            (**g_436) = (g_602 && l_822);
            (**l_637) = (func_35(g_150, (**l_744), l_822, func_58((*g_436), (*g_436), l_823, (**l_744), (*g_436)), (*g_436)) > g_17);
            (***l_590) = ((~func_35((func_58(l_823, (**l_590), (*l_637), (*g_436), (*g_436)) == g_611), (*g_436), g_596, (***l_744), (**l_744))) <= g_596);
        }

        ;
        ;
        (***l_744) = (**g_436);
    }

    ;
    ;
    return (***l_590);
}







static int * func_2(unsigned char p_3)
{
    int *l_582 = &g_70;
    (*g_436) = l_582;

    ;
    return (*g_436);


}







static char func_6(long long p_7, int * p_8, int * p_9)
{
    int *l_580 = (void*)0;
    int *l_581 = &g_150;
    (*g_436) = l_580;

    ;
    (*g_436) = (*g_436);
    (*g_436) = (*g_436);
    (*g_436) = l_581;

    ;
    return p_7;
}







static char func_12(unsigned p_13, short p_14, unsigned p_15)
{
    int *l_32 = &g_17;
    char l_559 = 1L;
    for (g_17 = 28; (g_17 < 3); g_17--)
    {
        unsigned l_41 = 18446744073709551614UL;
        int l_564 = 3L;
    }
    (*g_490) = (251UL || (p_15 || ((*l_32) && 0x932A1B8BC1979522LL)));
    return (*l_32);
}







static unsigned char func_35(unsigned long long p_36, int * p_37, long long p_38, unsigned p_39, int * p_40)
{
    char l_556 = 0x60L;
    if ((*p_40))
    {
        int *l_551 = (void*)0;
        int **l_552 = &l_551;
        (*l_552) = l_551;
        p_40 = func_45((*l_552));

        ;
    }
    else
    {
        int l_555 = 0x1886731CL;
        (*g_537) = (*g_537);
        l_556 = ((safe_add_func_uint16_t_u_u((p_38 < (g_70 ^ p_39)), p_38)) | l_555);
    }

    ;
    for (p_39 = 0; (p_39 != 19); p_39++)
    {
        return g_270;
    }
    return p_38;
}







static int * func_42(int * p_43, short p_44)
{
    short l_544 = (-8L);
    int *l_547 = &g_70;
    int ***l_550 = &g_436;
    (*g_490) = (safe_lshift_func_int16_t_s_s((l_544 != l_544), g_270));
    (*l_547) = ((4294967295UL || (((-1L) || (!(l_544 >= g_150))) > (safe_lshift_func_uint8_t_u_u(g_507, 4)))) & g_70);
    (*g_490) = (safe_sub_func_int8_t_s_s((-3L), (((l_550 == &g_436) & p_44) & p_44)));
    return &g_17;


}







static int * func_45(int * p_46)
{
    int *l_462 = &g_70;
    int *l_465 = &g_150;
    int l_475 = 0L;
    int *l_486 = &g_70;
    int ***l_496 = &g_436;
    int *l_516 = (void*)0;
    int l_540 = 0L;
    for (g_270 = 0; (g_270 != 42); g_270 = safe_add_func_int16_t_s_s(g_270, 5))
    {
        int l_460 = 1L;
        int *l_461 = &g_70;
        int *l_479 = &g_70;
        int *l_488 = &g_150;
        (*l_461) = ((l_460 && 0x83L) ^ 0xA2CE61AFL);
        l_461 = l_462;
    }
    (*l_486) = (safe_sub_func_int64_t_s_s((1L >= (safe_sub_func_int16_t_s_s(((void*)0 == &l_475), (g_70 & 6L)))), 0UL));
    for (g_150 = 29; (g_150 < (-12)); g_150 = safe_sub_func_int8_t_s_s(g_150, 4))
    {
        int **l_517 = &l_516;
        int l_525 = 1L;
        (*l_517) = l_516;
        if (((safe_unary_minus_func_int64_t_s(((*l_462) | (g_150 <= g_507)))) | (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_17, g_70)), ((((safe_mul_func_uint16_t_u_u(l_525, ((safe_mod_func_int16_t_s_s((*l_465), (*l_486))) | (safe_mul_func_int8_t_s_s((g_17 >= 0xF2L), 0x6BL))))) || g_70) > g_150) || g_17)))))
        {
            char l_533 = 1L;
            int *l_535 = &g_150;
            p_46 = p_46;
            for (l_475 = 23; (l_475 != 24); ++l_475)
            {
                short l_534 = 0x7FC8L;
                if ((3L == 1L))
                {
                    int *l_532 = &g_17;
                    (*l_517) = l_532;

                    ;
                    (*l_462) = l_533;
                }
                else
                {
                    int *l_536 = &l_525;
                    if (l_534)
                    {
                        (*l_517) = p_46;
                    }
                    else
                    {
                        return p_46;


                    }
                    l_536 = l_535;

                    ;
                    return g_537;


                }

                ;
                for (g_70 = 22; (g_70 > (-22)); g_70 = safe_sub_func_int8_t_s_s(g_70, 5))
                {
                    int l_541 = 0x4861EA81L;
                    l_540 = (**l_517);
                    l_540 = (g_150 < l_541);
                }
                (*l_486) = (((void*)0 != l_496) ^ ((void*)0 == &p_46));
                (*l_517) = (void*)0;

                ;
            }
            (*l_462) = (&g_436 == &g_436);
            (*l_517) = p_46;
        }
        else
        {
            (*l_517) = p_46;
        }
    }

    ;
    return p_46;


}







static int * func_47(unsigned p_48, unsigned char p_49, unsigned short p_50, int p_51)
{
    unsigned char l_57 = 0x56L;
    int **l_435 = (void*)0;
    char l_439 = (-6L);
    int *l_440 = &g_17;
    int *l_441 = &g_17;
    int **l_455 = (void*)0;
    int **l_456 = &l_441;
    int *l_457 = (void*)0;
    if ((g_17 >= ((func_55(l_57) >= ((-1L) != p_51)) || g_270)))
    {
        unsigned long long l_419 = 18446744073709551615UL;
        int *l_433 = &g_150;
        int **l_434 = &l_433;
        (*l_433) = ((l_419 != (~(safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(0xCB8C442FL, ((g_70 | p_48) <= (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint64_t_u((safe_add_func_uint32_t_u_u(0x7B603899L, (p_50 == 0xB326D28A6E83F28CLL))))), (l_419 || l_57))), p_51))))), l_419)), 13)))) & 0x23DEL);
        (*l_434) = &p_51;

        ;
        g_436 = l_435;

        ;
        (*l_433) = ((l_439 || g_150) == g_270);
    }
    else
    {
        int **l_444 = (void*)0;
        int *l_454 = (void*)0;
        (*g_436) = &p_51;

        ;
        p_51 = ((p_50 < ((safe_rshift_func_uint16_t_u_s((p_49 <= (((&l_440 == l_444) && (((safe_lshift_func_uint16_t_u_s((l_444 != &g_187), (safe_unary_minus_func_int32_t_s((safe_sub_func_int8_t_s_s((((((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(((g_17 >= (**g_436)) & p_49), p_51)), g_70)) < 0x5ECEL) | 0x65BC3FD210D42559LL) <= 0L) || g_70), (*l_441))))))) != (*g_187)) >= 1L)) || g_270)), p_50)) >= p_49)) ^ g_70);
    }


    ;
    ;
    ;
    l_441 = l_441;
    (*l_456) = l_440;
    return l_457;



}







static short func_55(unsigned char p_56)
{
    int *l_64 = &g_17;
    int *l_168 = &g_17;
    unsigned l_244 = 0x1BB123D3L;
    unsigned l_338 = 6UL;
    int *l_388 = &g_150;
    int **l_389 = (void*)0;
    int **l_390 = &g_187;
    if (func_58(l_64, l_64, &g_17, &g_17, l_64))
    {
        int **l_162 = &g_16;
        if ((safe_sub_func_int32_t_s_s((p_56 | (safe_rshift_func_int16_t_s_u(((void*)0 == &g_16), (~(safe_sub_func_uint8_t_u_u((1L || ((&g_16 != l_162) > g_70)), (safe_add_func_uint32_t_u_u(g_150, ((!(0xE2A70171L && g_150)) < (*l_64)))))))))), (*l_64))))
        {
            short l_165 = 8L;
            int *l_166 = (void*)0;
            if (l_165)
            {
                return p_56;
            }
            else
            {
                int *l_167 = &g_70;
                if (((g_70 ^ (**l_162)) && g_150))
                {
                    (*l_167) = func_58(l_167, &g_70, (*l_162), (*l_162), &g_17);
                }
                else
                {
                    (*l_162) = l_167;

                    ;
                    for (p_56 = 19; (p_56 <= 48); ++p_56)
                    {
                        (*l_162) = &g_150;

                        ;
                        (*l_167) = (safe_lshift_func_int16_t_s_s(((*g_16) | (0x999B4F4DL < ((p_56 != ((safe_add_func_int16_t_s_s(p_56, g_70)) > (*l_168))) != (((safe_lshift_func_uint8_t_u_s(0xC3L, 7)) || (l_167 != l_167)) ^ p_56)))), g_17));
                        (*g_16) = (*g_16);
                        (*l_167) = (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(p_56, 6)), func_58(l_168, &g_150, &g_70, &g_150, l_167)));
                    }

                    ;
                    (*g_16) = (safe_mod_func_uint64_t_u_u((*l_167), p_56));
                    (*l_162) = &g_17;

                    ;
                }
                return p_56;
            }
        }
        else
        {
            char l_189 = 0x51L;
            int l_200 = 0xD06614CEL;
            if (p_56)
            {
                int *l_183 = &g_17;
                int l_194 = 0x9AFEEB84L;
                int ***l_195 = &l_162;
                (*l_162) = l_183;

                ;
                for (p_56 = 0; (p_56 == 53); p_56 = safe_add_func_int32_t_s_s(p_56, 1))
                {
                    int *l_186 = &g_70;
                    if ((*g_16))
                    {
                        char l_188 = 0xDAL;
                        (*l_162) = l_186;

                        ;
                        l_188 = (l_168 != g_187);
                        if (l_189)
                            continue;
                        (*l_162) = l_186;
                    }
                    else
                    {
                        return g_150;
                    }

                    ;
                    l_194 = (safe_mul_func_int8_t_s_s((*l_168), (((-8L) < ((((safe_mod_func_int32_t_s_s(((g_150 < (func_58(&g_17, l_168, &g_17, &g_17, &g_150) && (**l_162))) || (**l_162)), 0xA7D4B22FL)) < (*l_183)) >= 0xEAC9E5138A19F7B7LL) && 0x4669C2BD87208DD1LL)) == (*l_183))));

                    ;
                    (*l_186) = (*g_16);
                }

                ;
                (*l_195) = &g_16;
            }
            else
            {
                int *l_201 = &g_150;
                for (l_189 = 0; (l_189 > (-29)); --l_189)
                {
                    int l_198 = 0x597DC8F0L;
                    int *l_199 = &g_70;
                    (*l_199) = l_198;
                    l_200 = 0x4FE5DE1FL;
                    (*l_162) = l_201;

                    ;
                }

                ;
            }

            ;
        }

        ;
        (*l_162) = &g_17;

        ;
    }
    else
    {
        int *l_202 = &g_150;
        int *l_213 = &g_70;
        int l_339 = 0x21B99990L;
        int *l_340 = &g_150;
        int *l_353 = &g_70;
        if (p_56)
        {
            int **l_203 = (void*)0;
            int *l_251 = &g_70;
            long long l_279 = 0x23A47A8C7C72AEE8LL;
            l_64 = l_202;

            ;
            if ((safe_rshift_func_int16_t_s_s(7L, (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((+g_150), (safe_add_func_int32_t_s_s((&g_187 != (void*)0), (func_58(l_202, l_168, &g_70, l_202, l_202) < g_150))))), g_17)))))
            {
                int *l_212 = &g_150;
                if ((*g_16))
                {
                    int *l_225 = &g_70;
                    int **l_228 = &l_202;
                    (*l_64) = func_58(l_202, l_212, l_213, l_64, l_212);

                    ;
                    if ((safe_add_func_int64_t_s_s(g_17, ((p_56 >= (!(~((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((p_56 | g_70), (p_56 | (l_203 == (void*)0)))), ((safe_mod_func_uint16_t_u_u(g_150, 65534UL)) ^ 0x507DL))) ^ 0x9FL)))) | p_56))))
                    {
                        (*l_202) = (g_17 != (0x2101FBCBL | (safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u(func_58(l_64, &g_150, l_225, l_64, l_212))) < p_56), 4))));
                        (*l_212) = 0x236E2A3DL;
                        (*l_213) = 0x574C0D45L;
                    }
                    else
                    {
                        (*l_213) = ((+(g_17 & (safe_rshift_func_int16_t_s_u((*l_202), g_70)))) != p_56);
                        (*l_212) = (~(0xDD2DL < g_70));
                    }
                    (*l_64) = 0x6A520F3BL;
                    (*l_228) = &g_70;

                    ;
                }
                else
                {
                    char l_229 = (-1L);
                    int *l_230 = (void*)0;
                    if ((func_58(l_212, &g_150, l_212, l_202, &g_150) < l_229))
                    {
                        int **l_231 = (void*)0;
                        int **l_232 = (void*)0;
                        int **l_233 = (void*)0;
                        int **l_234 = &l_202;
                        (*l_213) = 0xA9D2C52DL;
                        (*l_234) = l_230;

                        ;
                        (*l_234) = &g_150;

                        ;
                    }
                    else
                    {
                        (*l_212) = ((-10L) != p_56);
                        return g_150;
                    }

                    ;
                    if (((g_17 | ((1UL | (g_237 != &l_203)) > g_70)) >= (~(-1L))))
                    {
                        l_212 = l_64;
                    }
                    else
                    {
                        (*l_212) = p_56;
                    }
                    if ((*l_64))
                    {
                        int *l_238 = (void*)0;
                        int l_239 = 6L;
                        (*l_212) = ((1L < (g_17 & (l_239 <= 6UL))) & 0x9BL);
                        (*l_202) = (safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(p_56, l_244)), p_56));
                    }
                    else
                    {
                        int **l_245 = (void*)0;
                        int **l_246 = &l_202;
                        (*l_246) = &g_17;

                        ;
                        return p_56;
                    }
                    g_187 = l_212;

                    ;
                }

                ;
                ;
                ;
                return g_150;
            }
            else
            {
                int *l_247 = &g_150;
                if (p_56)
                {
                    int **l_248 = &l_168;
                    unsigned long long l_260 = 1UL;
                    (*l_248) = l_247;

                    ;
                    (*l_202) = p_56;
                    (*l_64) = 0x2146C8C3L;
                    if ((safe_mod_func_uint8_t_u_u(((*l_247) != g_17), g_150)))
                    {
                        (*l_202) = p_56;
                        (*l_248) = l_202;
                        l_251 = &g_17;

                        ;
                        (*l_248) = &g_70;

                        ;
                    }
                    else
                    {
                        unsigned l_269 = 1UL;
                        (*l_202) = p_56;
                        (*l_251) = ((safe_lshift_func_uint8_t_u_u((**l_248), 6)) <= ((safe_mul_func_uint16_t_u_u((*l_247), (safe_sub_func_uint32_t_u_u(0x065795F7L, (func_58(&g_70, &g_150, &g_70, &g_150, l_251) >= 1UL))))) <= (**l_248)));

                        ;
                        (*l_247) = (safe_add_func_int16_t_s_s((p_56 ^ (g_70 || l_260)), (**l_248)));
                        (*l_213) = ((g_17 && (((g_17 >= (**l_248)) <= ((p_56 || ((p_56 <= (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(g_70, (*l_251))), (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((g_17 != p_56) != l_269), 6)), (*l_247)))))) || p_56)) < p_56)) < 18446744073709551614UL)) & g_270);
                    }

                    ;
                    ;
                    ;
                }
                else
                {
                    int **l_271 = &l_251;
                    (*l_271) = l_213;
                    (*l_251) = p_56;
                    (*l_271) = l_168;

                    ;
                }

                ;
                ;
                ;
                if ((p_56 <= ((safe_mod_func_int64_t_s_s(0x7413A3C81482DDD6LL, 0x8A34B86BEE1F3E71LL)) != (+0x12L))))
                {
                    int l_292 = 0x45B850C9L;
                    long long l_293 = 0x5AA0C160E5AE0086LL;
                    int *l_295 = &g_70;
                    if ((((((0xB2D01FADL ^ ((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(3L)), ((safe_add_func_uint32_t_u_u(l_279, (safe_add_func_uint16_t_u_u(((g_17 & (safe_add_func_int32_t_s_s(1L, ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((*l_247), 13)), 5)) && (+(p_56 || p_56)))))) & (safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((0xFBECFEE8L | (-1L)), (*l_64))), 0xB4A2L))), 0x7275L)))) < p_56))) & l_292)) < l_293) ^ p_56) >= (*g_16)) | l_292))
                    {
                        int **l_294 = &l_213;
                        (*l_294) = l_64;

                        ;
                        (*l_294) = l_295;

                        ;
                        (*l_295) = (safe_lshift_func_int8_t_s_s((-7L), (*l_251)));
                    }
                    else
                    {
                        int **l_298 = &l_295;
                        (*l_298) = l_247;

                        ;
                    }

                    ;
                }
                else
                {
                    int **l_299 = (void*)0;
                    int **l_300 = &l_64;
                    (*l_300) = (void*)0;

                    ;
                    if (g_17)
                        goto lbl_301;
lbl_301:
                    g_187 = l_213;

                    ;
                    if ((p_56 | (safe_mul_func_int16_t_s_s(0L, (!(safe_unary_minus_func_uint16_t_u((safe_sub_func_uint8_t_u_u(g_150, ((*l_168) != ((p_56 == ((*l_251) & (*l_247))) != p_56)))))))))))
                    {
                        int ***l_307 = &l_299;
                        (*g_187) = (l_307 != (void*)0);
                        (*l_202) = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((func_58(g_312, &g_70, l_168, &g_70, &g_70) || func_58(&g_150, l_247, &g_17, &g_17, &g_70)) | 0xAAL) < g_17), g_17)), 4));
                    }
                    else
                    {
                        l_64 = l_168;

                        ;
                    }

                    ;
                }

                ;
            }

            ;
            ;
            ;
            ;
        }
        else
        {
            int *l_315 = &g_70;
            int *l_354 = &g_70;
            if ((safe_sub_func_int32_t_s_s((func_58(l_213, l_315, l_202, &g_17, l_315) | (*l_168)), g_150)))
            {
lbl_344:
                for (l_244 = 0; (l_244 < 51); l_244 = safe_add_func_uint8_t_u_u(l_244, 1))
                {
                    short l_324 = 0x9259L;
                    int **l_331 = &g_16;
                    l_339 = ((*l_168) > (safe_lshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s(0x5F33A8D96A39DDDDLL, (safe_add_func_uint32_t_u_u(l_324, (safe_lshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((~(l_331 == l_331)), (g_150 && (safe_lshift_func_uint8_t_u_u(247UL, 1))))) <= g_17), (safe_mod_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(0x95L, 0x1FL)) < l_338), (*l_168))))) <= g_150), p_56)))))), (**l_331))));
                    (*l_331) = l_340;

                    ;
                }

                ;
            }
            else
            {
                int *l_341 = &l_339;
                int **l_342 = (void*)0;
                int **l_343 = &l_168;
                (*l_343) = l_341;

                ;
                if (p_56)
                    goto lbl_344;
                if ((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((0x88DF57AABA89AF6DLL & (func_58(&l_339, l_315, l_353, &g_150, l_354) | ((safe_mod_func_uint32_t_u_u((((-5L) >= g_150) > g_17), 0x2EF36695L)) && g_150))), (-1L))), p_56)), p_56)), p_56)))
                {
                    for (l_244 = 12; (l_244 == 33); l_244++)
                    {
                        int ***l_359 = &l_342;
                        (*l_359) = &l_64;

                        ;
                        (**l_359) = l_354;

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    g_16 = l_64;

                    ;
                    for (l_339 = 0; (l_339 != (-6)); l_339 = safe_sub_func_uint64_t_u_u(l_339, 1))
                    {
                        int *l_362 = &g_150;
                        l_362 = l_315;

                        ;
                        (*l_315) = (((void*)0 != g_237) & ((safe_sub_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(g_70, (safe_mod_func_uint8_t_u_u(p_56, (safe_sub_func_uint8_t_u_u(p_56, (g_270 == p_56))))))) >= (safe_add_func_int32_t_s_s((g_70 <= (*l_362)), (*g_16)))), p_56)) && p_56));
                    }
                    return g_17;
                }

                ;
                ;
            }

            ;
            ;
            ;
            for (l_244 = 15; (l_244 >= 51); l_244++)
            {
                (*l_354) = 2L;
            }
            if (p_56)
            {
                int *l_384 = &g_17;
                for (g_150 = 19; (g_150 >= (-12)); g_150 = safe_sub_func_uint64_t_u_u(g_150, 6))
                {
                    int *l_383 = &g_17;
                    for (l_244 = (-3); (l_244 > 35); ++l_244)
                    {
                        g_312 = l_64;

                        ;
                        l_315 = &g_150;

                        ;
                        (*l_354) = (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(65527UL, (((func_58(&g_17, &g_17, l_354, l_383, l_384) | g_270) && (g_70 ^ 1L)) >= g_17))), (*l_384)));
                    }

                    ;
                    l_383 = l_384;
                    g_312 = l_315;

                    ;
                }

                ;
                ;
            }
            else
            {
                int **l_385 = &l_213;
                (*l_385) = &g_70;
                (*l_385) = &g_17;

                ;
            }

            ;
            ;
            ;
        }

        ;
        ;
        ;
        ;
        ;
        (*l_353) = (safe_mod_func_int64_t_s_s((-6L), func_58(l_168, l_168, &l_339, &g_17, &l_339)));

        ;
    }


    ;

    ;
    (*l_390) = l_388;

    ;
    if ((0x6414L <= (safe_mod_func_uint32_t_u_u((p_56 == g_150), g_270))))
    {
        char l_403 = 0x14L;
        int *l_411 = &g_70;
        for (p_56 = 0; (p_56 == 45); p_56++)
        {
            int *l_395 = &g_17;
            (*l_390) = l_395;

            ;
        }

        ;
        (*l_390) = &g_70;

        ;
        for (l_338 = 0; (l_338 == 10); l_338 = safe_add_func_int16_t_s_s(l_338, 1))
        {
            int *l_400 = &g_17;
            int ***l_408 = &l_389;
            for (g_270 = 0; (g_270 > 35); ++g_270)
            {
                (*l_390) = l_400;

                ;
            }
            if (p_56)
                break;
            (*l_411) = (((((safe_lshift_func_uint8_t_u_s(((*l_388) >= l_403), 5)) >= (safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((0UL <= (l_408 == l_408)), (safe_mod_func_int8_t_s_s((((((p_56 || 0xC8L) < p_56) < (*l_411)) != g_17) & (*l_400)), 0x27L)))), 3UL))) >= (*l_411)) & 9L) | p_56);
            (*l_390) = (*l_390);
        }

        ;
    }
    else
    {
        (*g_187) = ((safe_lshift_func_int8_t_s_u(p_56, g_70)) && 0xEDC83CE1L);
        return g_150;
    }

    ;
    for (g_70 = (-22); (g_70 >= 17); g_70 = safe_add_func_uint64_t_u_u(g_70, 3))
    {
        int ***l_416 = (void*)0;
        (*l_388) = ((((void*)0 == l_416) < ((g_70 < p_56) && (*l_388))) >= g_70);
        if (p_56)
            continue;
        for (g_150 = 23; (g_150 > 16); g_150--)
        {
            if (p_56)
                break;
        }
    }
    return p_56;
}







static int func_58(int * p_59, int * p_60, int * p_61, int * p_62, int * p_63)
{
    int *l_67 = &g_17;
    unsigned l_72 = 0x4F7D9FD5L;
    unsigned l_126 = 4UL;
    unsigned long long l_142 = 0xE3DE941380A06078LL;
    int *l_154 = &g_150;
    int **l_155 = &l_67;
lbl_153:
    if ((safe_sub_func_uint16_t_u_u((l_67 != (void*)0), (((void*)0 != l_67) ^ ((g_17 <= g_17) | (*g_16))))))
    {
        unsigned long long l_68 = 1UL;
        int *l_69 = &g_70;
        int **l_71 = &l_69;
        (*l_69) = l_68;
        (*l_71) = p_60;


        l_72 = (*p_60);
        for (l_72 = (-10); (l_72 > 37); l_72++)
        {
            int *l_83 = (void*)0;
            int **l_105 = &l_69;
            (*l_71) = &g_70;

            ;
            for (l_68 = 0; (l_68 != 46); l_68 = safe_add_func_int16_t_s_s(l_68, 1))
            {
                int l_88 = 0x900A0D1FL;
                if ((*g_16))
                {
                    int *l_79 = &g_70;
                    for (g_70 = 0; (g_70 != 5); ++g_70)
                    {
                        int *l_80 = (void*)0;
                        (*l_71) = &g_70;
                        l_80 = l_79;

                        ;
                        (*l_71) = p_61;


                        return (*p_62);
                    }
                }
                else
                {
                    (*l_71) = &g_70;
                }
                if (((p_59 == p_62) ^ (((((safe_sub_func_int16_t_s_s(((void*)0 != l_83), ((safe_rshift_func_uint16_t_u_s(0x8344L, 5)) == ((((p_62 != p_60) != (safe_rshift_func_int8_t_s_s(l_88, 1))) < l_88) < (*l_67))))) > g_17) ^ l_88) & (**l_71)) != (**l_71))))
                {
                    (*l_69) = ((l_88 & (safe_lshift_func_uint8_t_u_u(0UL, 7))) && (*g_16));
                    for (g_70 = 0; (g_70 <= 5); g_70 = safe_add_func_uint32_t_u_u(g_70, 9))
                    {
                        unsigned l_95 = 18446744073709551614UL;
                        int *l_96 = (void*)0;
                        int *l_97 = &l_88;
                        (*l_97) = (g_70 ^ ((&g_17 == l_67) == l_95));
                    }
                }
                else
                {
                    for (l_88 = 0; (l_88 < 27); l_88 = safe_add_func_uint8_t_u_u(l_88, 3))
                    {
                        short l_104 = 0xD339L;
                        (**l_71) = 1L;
                        (*l_69) = (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(2L, l_104)), 0xC6L));
                        (*l_71) = &g_70;
                        l_105 = &l_67;

                        ;
                    }

                    ;
                    return (*p_60);
                }
            }
            (*l_71) = &g_70;
        }
    }
    else
    {
        int *l_111 = &g_70;
        if ((*l_67))
        {
            int **l_106 = &g_16;
            (*l_106) = l_67;

            ;
            if (((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((*l_67), 4)), (((((void*)0 == l_111) & ((*l_67) ^ (0x8E690DFAL <= ((*l_67) || 0x86L)))) ^ g_17) != (((safe_mod_func_uint64_t_u_u((*l_111), (*l_67))) >= (*l_111)) > g_70)))) > (**l_106)))
            {
                (*l_106) = &g_17;
            }
            else
            {
                l_67 = (*l_106);
            }
            (*l_106) = p_60;


        }
        else
        {
            short l_127 = 0x05B5L;
            for (l_72 = 0; (l_72 != 14); l_72 = safe_add_func_uint8_t_u_u(l_72, 7))
            {
                int l_130 = 0xEA47852DL;
                int **l_131 = &l_111;
            }
            (*l_111) = (*p_62);
        }
        l_111 = (void*)0;

        ;
    }
    for (l_72 = 28; (l_72 >= 43); ++l_72)
    {
        unsigned short l_136 = 0x68EFL;
        int *l_139 = &g_17;
        int l_151 = (-9L);
        int **l_152 = &g_16;
    }
    if (l_72)
        goto lbl_153;
    (*l_155) = l_154;

    ;
    return (*p_60);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_611, "g_611", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
