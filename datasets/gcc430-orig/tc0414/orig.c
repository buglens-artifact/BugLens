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



static volatile int g_2 = 0xAC204E2DL;
static volatile int g_3 = 2L;
static int g_4 = 0xD59E57ADL;
static volatile int g_7 = (-3L);
static int g_8 = 0x90BE4438L;
static const long long g_14 = 1L;
static int g_79 = 0L;
static int g_81 = 0x39B7B3FAL;
static volatile int **g_86 = (void*)0;
static int *g_195 = (void*)0;
static int ** const g_194 = &g_195;
static int **g_260 = &g_195;
static short g_295 = 1L;
static const int *g_336 = &g_81;
static const char g_400 = (-1L);
static long long g_469 = 0x956CEE686AA94C0ALL;
static int g_576 = 0x9C3F3F37L;
static volatile int g_624 = 0x2110B905L;
static long long g_647 = 0xA15BBF1EC949949FLL;
static const int * const *g_655 = (void*)0;



static unsigned long long func_1(void);
static int func_11(const unsigned p_12, unsigned p_13);
static unsigned func_15(short p_16, int p_17, unsigned short p_18, const short p_19, unsigned char p_20);
static unsigned long long func_21(long long p_22, short p_23);
static short func_24(unsigned short p_25, const int p_26, short p_27, short p_28);
static int * func_38(const unsigned p_39, long long p_40, int * p_41, int p_42, unsigned long long p_43);
static const unsigned func_44(unsigned char p_45, char p_46, const int * p_47, unsigned long long p_48);
static const int * func_54(const int p_55, unsigned long long p_56, int ** p_57);
static const int func_58(unsigned char p_59, int * p_60);
static long long func_67(int * p_68, unsigned p_69, int ** const p_70);
static unsigned long long func_1(void)
{
    const unsigned l_37 = 0xB0B56CEFL;
    int l_461 = 0xFB22B934L;
    const short l_470 = 0x8784L;
    short l_500 = (-1L);
    char l_501 = (-1L);
    unsigned l_510 = 0x0155C866L;
    int l_549 = 0x58074648L;
    int ***l_570 = &g_260;
    unsigned l_583 = 0UL;
    short l_672 = 0x89D6L;
    const unsigned l_684 = 0xDD84540AL;
    short l_690 = 0x1D3EL;
    for (g_4 = 0; (g_4 > 19); ++g_4)
    {
        unsigned char l_36 = 0x88L;
        int *l_462 = &g_81;
        int l_483 = 1L;
        int *l_521 = &g_4;
        short l_533 = 0L;
        const unsigned l_538 = 0x623F7150L;
        int ***l_556 = &g_260;
        int ***l_571 = &g_260;
        for (g_8 = 0; (g_8 == 28); g_8 = safe_add_func_uint16_t_u_u(g_8, 2))
        {
            unsigned short l_35 = 0x0A6DL;
            int l_460 = 0x7F0D410DL;
        }
        l_461 = l_37;
        (*l_462) = l_461;
        for (g_295 = (-20); (g_295 > 25); g_295++)
        {
            unsigned short l_471 = 0xAED0L;
            int l_504 = 0L;
            long long l_532 = (-1L);
            unsigned char l_563 = 1UL;
            int ***l_569 = &g_260;
        }
    }
    for (g_81 = 0; (g_81 == 5); g_81 = safe_add_func_int16_t_s_s(g_81, 3))
    {
        l_461 = ((*l_570) == ((g_400 >= (safe_mul_func_uint16_t_u_u(g_576, (g_2 == ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((((g_8 ^ 0x9503L) >= (safe_lshift_func_uint16_t_u_s((&g_260 == l_570), 4))) & (((void*)0 == &g_86) < g_295)), l_510)), 2)) ^ g_14))))) , &g_336));
    }
    if ((*g_336))
    {
        g_81 = (*g_336);
    }
    else
    {
        unsigned char l_594 = 6UL;
        int *l_595 = &g_81;
        (*l_595) = l_594;
    }
    for (l_583 = 28; (l_583 > 57); l_583++)
    {
        unsigned short l_598 = 65528UL;
        int *l_643 = (void*)0;
        int l_665 = 0x0C0EBA14L;
        char l_681 = 0xB9L;
        int l_685 = 5L;
        if ((*g_336))
            break;
        if (((l_598 ^ (safe_mod_func_int16_t_s_s((safe_div_func_int64_t_s_s(((+(g_469 , ((safe_div_func_uint64_t_u_u(g_3, g_400)) , 1UL))) , l_598), l_549)), g_8))) , l_500))
        {
            unsigned l_613 = 0UL;
            int *l_640 = (void*)0;
            unsigned long long l_641 = 0UL;
            int *l_642 = (void*)0;
            if ((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_8, func_11((((+((((safe_mod_func_int32_t_s_s((l_598 , 0xB4E8D986L), ((g_2 , l_613) , ((g_4 ^ ((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((safe_add_func_int64_t_s_s(((((safe_lshift_func_uint8_t_u_u(g_7, (((safe_lshift_func_uint8_t_u_s(((l_598 | (g_14 , 0x94C7L)) != l_613), 2)) || g_295) >= g_400))) ^ g_295) <= 0xE7L) < l_613), l_583)) && g_81), l_613)), g_14)) >= 0x2550606AL)) | 0x616655CD66CD4637LL)))) && 0x6E647FE54F21CC76LL) | 0L) && g_2)) , g_624) , g_469), g_79))), 0x1C75L)))
            {
                short l_631 = (-7L);
                (*g_260) = func_38(g_79, g_2, func_38(((l_598 & (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint64_t_u_u((l_631 , (safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(5UL, l_549)), ((g_8 & g_14) && l_598))), g_14)), 0x79A3L))), l_598)) && g_14), 10)) , 0x94DBD746L), (*g_336)))) | 0x3D8576F8L), g_79, l_640, (*g_336), g_400), l_598, l_631);
                (**l_570) = l_643;
            }
            else
            {
                int **l_654 = &g_195;
                int *l_656 = &g_4;
                (*l_656) = (safe_unary_minus_func_int16_t_s((safe_div_func_uint16_t_u_u(0x8D94L, g_295))));
                if (l_461)
                    continue;
                for (l_500 = (-15); (l_500 != 24); l_500 = safe_add_func_uint8_t_u_u(l_500, 2))
                {
                    int l_659 = 0x2EA3299FL;
                    if (l_659)
                        break;
                }
                (*l_656) = (-1L);
            }
            (*g_194) = (*g_260);
        }
        else
        {
            int l_660 = (-2L);
            int *l_668 = (void*)0;
            if (l_660)
            {
                unsigned short l_661 = 0x3798L;
                int *l_664 = &l_461;
                if (l_661)
                {
                    if (l_661)
                        break;
                    l_549 = (safe_sub_func_int32_t_s_s(l_660, l_661));
                    (*g_260) = l_643;
                }
                else
                {
                    l_549 = (g_7 || g_79);
                }
                (*g_260) = l_664;
            }
            else
            {
                l_461 = l_598;
            }
            l_665 = l_660;
            (**l_570) = (void*)0;
            for (g_79 = 0; (g_79 <= (-20)); g_79--)
            {
                unsigned l_669 = 0xF9118914L;
                int *l_676 = &g_4;
                l_668 = &l_665;
                (*l_668) = ((((l_669 , (safe_rshift_func_uint8_t_u_u((&g_260 == l_570), 0))) > (g_79 , (*l_668))) , g_14) , l_672);
                for (g_8 = (-23); (g_8 < (-16)); ++g_8)
                {
                    const unsigned long long l_675 = 0x9819FAE3F1882A87LL;
                    unsigned short l_686 = 8UL;
                    const unsigned l_687 = 0x7F6436FCL;
                    int l_706 = 0xBB740180L;
                    (*g_260) = func_38(l_675, g_81, l_676, (((((safe_add_func_uint64_t_u_u(g_79, l_681)) == g_8) == ((safe_rshift_func_uint16_t_u_s((*l_676), (((((&g_336 != (void*)0) , l_684) , g_4) || l_685) >= 65535UL))) <= l_686)) & g_647) & g_79), l_681);
                    (**l_570) = func_38(l_687, (func_11((***l_570), g_400) > (safe_mul_func_uint16_t_u_u(l_690, ((*g_260) == (void*)0)))), ((&g_86 != (void*)0) , l_668), (*l_668), g_400);
                    for (l_510 = 0; (l_510 <= 12); l_510++)
                    {
                        unsigned l_705 = 0xE9C51BC5L;
                        l_706 = ((!(safe_rshift_func_uint16_t_u_s((g_624 < (g_81 < (((!(safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(255UL, func_21(g_79, ((safe_add_func_uint64_t_u_u(((***l_570) | (*g_195)), g_8)) && g_400)))), 0x15C7L)) ^ l_705), 2)) , 0xCAB29C44L), 0x638DE1FBL))) , &g_86) != &g_194))), 11))) > l_686);
                        return g_400;
                    }
                }
            }
        }
    }
    return g_4;
}







static int func_11(const unsigned p_12, unsigned p_13)
{
    unsigned long long l_447 = 7UL;
    int ** const l_451 = &g_195;
    int *l_459 = &g_81;
    for (g_81 = 0; (g_81 >= 0); g_81++)
    {
        unsigned short l_448 = 65535UL;
        l_448 = l_447;
    }
    (*l_459) = (((safe_rshift_func_int8_t_s_s(p_13, 0)) , g_7) , (safe_rshift_func_uint16_t_u_u((1UL > (safe_unary_minus_func_int8_t_s((safe_div_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((4294967295UL & p_13), p_12)), g_400))))), g_79)));
    return p_12;
}







static unsigned func_15(short p_16, int p_17, unsigned short p_18, const short p_19, unsigned char p_20)
{
    int *l_411 = &g_8;
    char l_414 = (-9L);
    char l_423 = 0xFFL;
    int l_424 = 9L;
    int l_439 = 0x98DB1900L;
    int * const *l_441 = &l_411;
    int * const **l_440 = &l_441;
    int *l_442 = (void*)0;
    l_424 = ((safe_lshift_func_uint16_t_u_s(65532UL, ((((void*)0 == l_411) | ((safe_add_func_int8_t_s_s(l_414, (g_8 < (((safe_add_func_uint32_t_u_u(p_20, func_21((safe_add_func_uint64_t_u_u(((((safe_mod_func_int16_t_s_s(((-1L) == ((((safe_sub_func_int32_t_s_s(p_18, (((((*l_411) > g_400) < p_19) | p_20) || 0xE6L))) == (*l_411)) , g_3) <= p_20)), g_81)) | g_295) > 0L) , 0x133E6FB5C3FB84D6LL), (-1L))), g_4))) ^ l_423) <= p_17)))) > 0x525348D2L)) | 0x7643B7C93A7CE971LL))) & g_400);
    if ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((((safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s(func_21((!g_3), p_20), func_67((*g_260), (((safe_sub_func_int8_t_s_s((((*l_411) , (func_44((safe_add_func_uint16_t_u_u((*l_411), ((safe_sub_func_int8_t_s_s(l_439, g_79)) & ((((*l_411) , (*l_411)) , p_20) , 0L)))), g_295, &l_424, (*l_411)) , p_20)) && g_8), g_14)) , &g_86) != l_440), &l_411))), p_18)) , (*l_441)) == l_442), 13)), p_17)))
    {
        long long l_443 = 0x3DD30B71DFB4F0E1LL;
        return l_443;
    }
    else
    {
        int *l_444 = &l_439;
        (*l_444) = p_16;
        return p_18;
    }
}







static unsigned long long func_21(long long p_22, short p_23)
{
    return p_22;
}







static short func_24(unsigned short p_25, const int p_26, short p_27, short p_28)
{
    unsigned long long l_49 = 0UL;
    int *l_114 = (void*)0;
    int **l_141 = &l_114;
    int ** const l_146 = &l_114;
    unsigned l_147 = 0x0D90DC82L;
    char l_161 = (-1L);
    unsigned l_209 = 0x76BB7620L;
    unsigned l_334 = 0x82341EFEL;
    int l_370 = 6L;
    const unsigned l_388 = 0x7D5AC8CFL;
    l_114 = func_38(func_44(g_14, g_4, &g_8, l_49), (((p_26 , l_49) == g_14) == l_49), l_114, p_26, p_26);
    if ((((safe_mul_func_uint16_t_u_u(g_81, ((((*l_114) && ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_25, 0xF16CCE4FL)), (safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s(((l_141 != ((safe_sub_func_int32_t_s_s((&g_4 == (g_8 , &p_26)), (safe_add_func_uint8_t_u_u(((l_146 != g_86) , g_79), l_147)))) , &l_114)) < p_26), 0UL)), (-1L))) && g_4), 7)), p_27)))) > (*l_114))) <= g_79) <= p_27))) , (**l_146)) ^ (*l_114)))
    {
        unsigned short l_160 = 0x29C8L;
        int *l_162 = &g_81;
        long long l_225 = 1L;
        int *l_287 = &g_81;
        int *l_328 = &g_81;
        int l_346 = 0x9707FA9CL;
        (*l_162) = (safe_div_func_uint64_t_u_u((((safe_add_func_int32_t_s_s(p_25, (safe_mul_func_uint8_t_u_u(p_25, (safe_div_func_int8_t_s_s((g_4 > (+(safe_mul_func_int16_t_s_s((-6L), ((*l_146) != &p_26))))), (safe_mod_func_uint16_t_u_u(((((((((l_160 , (+(**l_141))) == g_4) , l_161) | (-6L)) < p_26) , g_4) || l_160) >= 8L), p_28)))))))) && 0xCDL) >= (-9L)), 0x5AB66AEAC40E40D8LL));
        for (l_160 = 21; (l_160 >= 28); l_160 = safe_add_func_uint8_t_u_u(l_160, 4))
        {
            int *l_171 = &g_8;
            char l_248 = (-1L);
            const int *l_262 = &g_4;
            const int **l_261 = &l_262;
            (*l_162) = 0x5B95D3AAL;
            if (((safe_div_func_uint16_t_u_u(g_14, (*l_162))) > g_8))
            {
                int l_172 = (-8L);
                (*l_162) = g_4;
                for (l_49 = 0; (l_49 < 45); l_49 = safe_add_func_uint16_t_u_u(l_49, 5))
                {
                    const short l_196 = 0L;
                    int *l_197 = &l_172;
                    for (l_147 = 0; (l_147 >= 8); l_147++)
                    {
                        const int *l_173 = &l_172;
                        (*l_162) = func_44((((&p_26 == l_171) || 0xB7L) < g_14), l_172, l_173, ((void*)0 == l_173));
                        (*l_162) = ((0x809ED89A75344A4BLL | (safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((((((*l_173) || (((((safe_div_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((((0L & l_172) , (safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u(0xEF34L, 13)) < (safe_lshift_func_int16_t_s_u(l_172, 6))), (safe_rshift_func_uint8_t_u_s(0xB6L, func_67(&g_4, (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((&g_81 == (void*)0), l_172)), g_81)), g_194)))))) , g_79), p_28)), g_14)) || g_14) && 2L) , (void*)0) == &p_26)) , l_172) , p_26) , l_196), p_25)), p_26))) != g_14);
                    }
                    if (((void*)0 == l_171))
                    {
                        l_197 = (*g_194);
                        (*g_194) = (*g_194);
                        if ((*l_162))
                            break;
                    }
                    else
                    {
                        return g_79;
                    }
                    (*l_162) = (safe_sub_func_int64_t_s_s((*l_171), (safe_mod_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((*l_162) > p_26), p_27)) || g_4), 2UL))));
                    if (g_4)
                        break;
                }
            }
            else
            {
                unsigned l_215 = 1UL;
                int *l_251 = (void*)0;
                for (l_147 = 28; (l_147 == 41); ++l_147)
                {
                    if (p_28)
                    {
                        unsigned l_208 = 6UL;
                        int *l_212 = &g_81;
                        g_81 = (safe_add_func_uint8_t_u_u(((void*)0 == (*g_194)), l_208));
                        if (l_209)
                            break;
                        (*l_212) = ((safe_add_func_uint16_t_u_u(func_44(func_67((p_27 , l_212), (safe_lshift_func_uint8_t_u_u(p_25, 1)), &g_195), (*l_171), &g_8, g_4), p_25)) > p_28);
                        l_215 = 0L;
                    }
                    else
                    {
                        if (p_26)
                            break;
                    }
                    (*l_141) = l_171;
                    if ((*l_162))
                        break;
                    if ((**l_146))
                        continue;
                }
                for (p_28 = 22; (p_28 < (-6)); p_28--)
                {
                    int l_226 = 0x9F626814L;
                    int ** const l_238 = &l_114;
                }
                (*l_141) = l_251;
            }
            (*l_162) = p_27;
            (*l_261) = func_54(((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((p_27 > p_27) < (-1L)), g_79)) , 0x34L), g_79)) | 0x6FBAC7AF0A2B921BLL), p_28, g_260);
        }
        (*l_141) = (*g_194);
        if ((safe_add_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(0xA8L, ((((((g_79 > 0xEE85L) ^ (safe_mod_func_uint64_t_u_u(g_81, (((&l_114 != &g_195) ^ ((safe_add_func_int64_t_s_s((!(-10L)), (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int16_t_s_s((((*l_162) , (safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((void*)0 == &g_195), p_27)), p_26)), 5))) < g_4), (*l_162))) | (*l_162)), g_81)), p_26)))) || 0UL)) | 0x8531L)))) < p_28) || p_28) & g_81) < 0UL))) | 0x300B0314DCBCBF52LL), p_25)))
        {
            int **l_289 = (void*)0;
            int *l_311 = &g_8;
            for (l_147 = 23; (l_147 <= 43); l_147++)
            {
                const int l_288 = 0xFBB7CE84L;
                int *l_290 = &g_81;
                (*g_260) = l_287;
                (*l_141) = l_290;
                l_289 = &g_195;
                (*l_141) = ((safe_sub_func_int64_t_s_s(((g_81 ^ (g_79 , (safe_add_func_int64_t_s_s((*l_290), p_28)))) != (**l_289)), (g_295 == (((!(p_28 ^ (safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((*l_114), (&p_26 != l_290))) != (**g_260)) , g_79), (*l_162))))) == p_25) , 0L)))) , (void*)0);
            }
            (*g_194) = (*g_194);
            if ((g_81 | 0L))
            {
                long long l_302 = 0x3FEBC8253888EF08LL;
                for (p_27 = (-28); (p_27 < (-28)); ++p_27)
                {
                    (*l_162) = (g_14 && p_27);
                    return l_302;
                }
            }
            else
            {
                long long l_310 = 0x2B29F12BCDFAA73ALL;
                int l_320 = 0xEC3500F0L;
                int **l_327 = (void*)0;
                int ** const l_341 = (void*)0;
                if ((*l_287))
                {
                    if (p_26)
                    {
                        unsigned long long l_303 = 0xED313F7A61055516LL;
                        (*l_146) = (void*)0;
                        l_303 = 0xDE482A85L;
                        return (*l_162);
                    }
                    else
                    {
                        const int *l_305 = &g_4;
                        const int **l_304 = &l_305;
                        (*l_304) = &p_26;
                        return p_25;
                    }
                }
                else
                {
                    const short l_309 = 0xB14FL;
                    (*l_146) = func_38((&p_26 != (*g_260)), ((((safe_unary_minus_func_int32_t_s(((safe_mul_func_uint8_t_u_u(((-1L) & (!(*l_162))), (p_28 , ((0L ^ l_309) && p_28)))) < p_28))) && p_27) , l_310) , 0x34C10F2D454A17C6LL), l_311, p_28, p_28);
                    (*l_162) = ((l_309 || g_81) < l_310);
                    (*g_260) = func_38(((p_27 <= (safe_add_func_int64_t_s_s((((p_27 | ((g_79 >= g_14) && l_320)) , (!func_67((*g_194), (safe_add_func_uint32_t_u_u(g_79, ((safe_rshift_func_int16_t_s_s(l_320, 7)) , p_27))), &l_114))) & (*l_311)), 0xD65A8F09C824AA73LL))) >= 1UL), p_28, (*g_260), l_310, g_8);
                }
                (*l_146) = l_328;
                for (l_147 = (-11); (l_147 > 53); l_147 = safe_add_func_uint8_t_u_u(l_147, 1))
                {
                    int ** const l_331 = &g_195;
                    (*l_146) = (*g_260);
                    if ((*g_195))
                    {
                        int *l_335 = &g_4;
                        (*g_260) = func_38(p_27, (*l_311), func_38((**l_331), (g_4 , (safe_lshift_func_int16_t_s_s(g_14, (l_334 ^ 0xA39F0464L)))), l_335, (*l_328), (*l_114)), p_28, g_8);
                        (*g_260) = (*g_260);
                        g_336 = &p_26;
                    }
                    else
                    {
                        const int ***l_337 = (void*)0;
                        int ***l_338 = &l_289;
                        (*l_338) = (void*)0;
                        (*l_141) = (p_27 , func_38(p_27, ((((safe_sub_func_int8_t_s_s((*l_328), p_26)) , (*l_331)) == ((safe_div_func_int32_t_s_s((((safe_div_func_int8_t_s_s(g_295, g_4)) < p_25) , l_346), 6UL)) , &p_26)) > (-9L)), (*g_260), p_25, (*l_328)));
                        (*l_287) = ((p_27 , ((void*)0 == &l_327)) || p_25);
                    }
                }
            }
        }
        else
        {
            int ***l_351 = &l_141;
            const int **l_352 = &g_336;
            (*l_328) = 0xBC75F3E8L;
            (*l_352) = func_54((g_4 != (safe_lshift_func_int16_t_s_s(g_81, 9))), (safe_mul_func_uint16_t_u_u((*l_162), ((void*)0 == l_351))), (g_14 , &l_287));
            (*g_260) = (p_28 , (*g_260));
        }
    }
    else
    {
        unsigned l_353 = 18446744073709551612UL;
        unsigned l_356 = 0xA2D653F4L;
        int l_374 = 0x7E2706E2L;
        long long l_377 = (-2L);
        short l_392 = (-5L);
        int **l_407 = &l_114;
        const int **l_408 = &g_336;
        if ((g_14 , ((l_353 & (*g_336)) & l_353)))
        {
            char l_357 = 1L;
            int l_359 = 0L;
            int ** const l_369 = (void*)0;
            int *l_371 = (void*)0;
            int *l_372 = (void*)0;
            int *l_373 = &g_81;
            for (g_79 = 8; (g_79 >= (-20)); g_79 = safe_sub_func_int8_t_s_s(g_79, 4))
            {
                char l_358 = (-1L);
                int *l_360 = &g_81;
                l_357 = l_356;
                l_359 = (l_358 > g_81);
                (*l_360) = l_358;
            }
            (*l_373) = (safe_mul_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((((g_4 ^ (-4L)) || g_14) != l_370), l_356)) < g_295) , g_79), p_27));
            (*l_373) = l_356;
            l_374 = l_356;
        }
        else
        {
            unsigned l_380 = 0xB1BDB285L;
            const int **l_390 = (void*)0;
            const int **l_391 = &g_336;
            int *l_393 = &l_374;
            (*l_141) = (void*)0;
            for (l_334 = 13; (l_334 <= 55); l_334 = safe_add_func_uint8_t_u_u(l_334, 9))
            {
                int ***l_381 = &l_141;
                const unsigned short l_389 = 65535UL;
                l_377 = (*g_336);
                l_374 = (((((safe_rshift_func_int8_t_s_u(l_356, 4)) != ((l_380 , l_381) != &g_86)) > (safe_rshift_func_int8_t_s_u((((*l_146) != (void*)0) , (safe_div_func_int64_t_s_s(((((safe_mul_func_int8_t_s_s((g_295 == ((g_14 >= (-4L)) >= p_27)), g_8)) & p_26) & 7L) | l_388), g_8))), g_8))) < 0x10L) == l_389);
            }
            (*l_391) = func_54(l_356, l_380, &l_114);
            (*l_393) = l_392;
        }
        (*g_194) = func_38(g_79, p_27, &l_374, ((((((p_28 != (((void*)0 != &l_146) && (((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s(g_81, (p_27 <= (&l_114 == (void*)0)))), l_377)) == 1L) != p_26))) | l_374) != 6UL) >= 0UL) | g_400) != 0x1F7A9B40L), g_400);
        (*l_408) = func_54((g_14 , (7L || (((safe_rshift_func_uint16_t_u_u((0UL != (safe_mul_func_int8_t_s_s((0x3BCE2607L != p_26), p_25))), (safe_mul_func_int8_t_s_s(((~(l_377 & (p_26 || p_26))) != l_353), p_27)))) == p_25) ^ (-2L)))), p_27, l_407);
    }
    return g_8;
}







static int * func_38(const unsigned p_39, long long p_40, int * p_41, int p_42, unsigned long long p_43)
{
    int *l_119 = &g_81;
    int **l_120 = &l_119;
    for (p_40 = 0; (p_40 == (-1)); --p_40)
    {
        for (g_81 = (-14); (g_81 != 0); g_81 = safe_add_func_int32_t_s_s(g_81, 4))
        {
            return l_119;
        }
        (*l_119) = (*l_119);
    }
    (*l_120) = &g_4;
    for (p_43 = 0; (p_43 < 20); p_43++)
    {
        short l_125 = 0xF5C2L;
        int l_126 = 0x8BD095E9L;
        l_126 = ((p_42 | (((((((-1L) >= (&p_41 == &p_41)) , g_4) | (safe_add_func_int64_t_s_s(((p_43 , ((*l_119) != (((*l_119) , &p_41) == g_86))) > 0UL), p_39))) && g_81) == l_125) == 0xBDL)) || g_81);
        (*l_120) = &p_42;
    }
    return &g_4;
}







static const unsigned func_44(unsigned char p_45, char p_46, const int * p_47, unsigned long long p_48)
{
    int *l_71 = (void*)0;
    int l_72 = 0xCA8E1F91L;
    int *l_88 = &g_8;
    int **l_87 = &l_88;
    const int *l_92 = (void*)0;
    const int **l_91 = &l_92;
    for (p_48 = 0; (p_48 != 35); ++p_48)
    {
        const int *l_53 = (void*)0;
        const int **l_52 = &l_53;
        (*l_52) = (void*)0;
    }
    (*l_91) = func_54(((+1UL) , func_58(((safe_lshift_func_int16_t_s_u((p_45 == ((safe_sub_func_int8_t_s_s(0x4FL, g_8)) || (((((p_47 == p_47) , (void*)0) == (void*)0) >= ((((safe_add_func_int64_t_s_s(func_67(l_71, l_72, &l_71), 0L)) != g_14) > g_4) >= p_48)) & p_45))), g_8)) | 0L), &l_72)), p_45, l_87);
    for (p_45 = 0; (p_45 > 3); p_45 = safe_add_func_uint32_t_u_u(p_45, 1))
    {
        unsigned l_99 = 0x8C90CC82L;
        int *l_108 = &g_81;
        if ((((((p_46 ^ (safe_mul_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u((l_99 > l_99), 1UL)) | p_48) && (safe_lshift_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((func_67((((safe_rshift_func_int8_t_s_s(((((0xECDC4137E2FFC3EBLL <= (g_81 > l_99)) & (p_45 , g_14)) , p_48) | 0xA24A778B6DB4DB8DLL), 0)) || p_46) , (*l_87)), g_4, &l_88) , 0x91L), g_4)) & 4294967294UL) & 0xDF88EE36L), 0))), l_99))) | g_8) >= g_4) <= g_4) != 0x55DAA1C1L))
        {
            const int *l_109 = &l_72;
            (*l_87) = l_108;
            (*l_91) = l_109;
            if ((*l_108))
            {
                for (p_48 = 0; (p_48 < 52); p_48 = safe_add_func_uint16_t_u_u(p_48, 1))
                {
                    if ((*p_47))
                        break;
                }
                for (l_72 = (-9); (l_72 <= (-29)); l_72 = safe_sub_func_int64_t_s_s(l_72, 8))
                {
                    (**l_87) = (0UL & (*l_108));
                }
                (*l_91) = &g_8;
            }
            else
            {
                return g_8;
            }
        }
        else
        {
            (*l_108) = (-1L);
            (*l_91) = p_47;
        }
        (*l_108) = ((void*)0 != &p_47);
        return (**l_91);
    }
    return g_4;
}







static const int * func_54(const int p_55, unsigned long long p_56, int ** p_57)
{
    unsigned l_89 = 0UL;
    int *l_90 = &g_81;
    (*l_90) = (func_67((*p_57), g_79, p_57) <= l_89);
    return l_90;
}







static const int func_58(unsigned char p_59, int * p_60)
{
    int *l_83 = &g_4;
    int **l_82 = &l_83;
    (*l_82) = (p_59 , &g_81);
    (**l_82) = 0x5D2BB399L;
    (*p_60) = (0x6FC4L != (g_8 == (func_67(p_60, p_59, &l_83) >= (p_59 < ((void*)0 == g_86)))));
    return (*p_60);
}







static long long func_67(int * p_68, unsigned p_69, int ** const p_70)
{
    unsigned short l_77 = 0xF83FL;
    int **l_78 = (void*)0;
    g_79 = (((65530UL & 65530UL) ^ g_8) & (p_69 , ((safe_div_func_uint64_t_u_u(0x08DD2DC0978C7644LL, g_4)) , ((safe_add_func_uint16_t_u_u((((0xDCECL & ((-1L) | (l_77 , g_4))) , l_78) == l_78), g_14)) || 18446744073709551615UL))));
    if (l_77)
    {
        (*p_70) = &g_4;
    }
    else
    {
        int *l_80 = &g_81;
        (*l_80) = g_8;
    }
    g_81 = g_8;
    return p_69;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
