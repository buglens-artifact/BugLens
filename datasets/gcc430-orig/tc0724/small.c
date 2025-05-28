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



static int g_2 = 0x60477862L;
static int g_77 = 0xDEEA39BAL;
static int *g_100 = &g_2;
static int ** const g_99 = &g_100;
static int **g_194 = &g_100;
static int g_330 = 0x9899420CL;
static long long g_338 = (-9L);
static unsigned g_380 = 4294967295UL;
static unsigned short g_386 = 1UL;
static short g_387 = (-4L);
static int g_453 = 4L;
static unsigned char g_457 = 0x1CL;
static unsigned long long g_473 = 4UL;
static int g_575 = 0xE136AC74L;
static unsigned char g_609 = 0x2CL;
static short g_635 = 0x7769L;
static long long g_688 = 0x50365A202571AA01LL;
static unsigned g_760 = 0xCE874061L;



static unsigned func_1(void);
static unsigned short func_5(short p_6, unsigned short p_7);
static short func_9(unsigned short p_10, int p_11, int p_12, long long p_13);
static int func_18(unsigned long long p_19);
static short func_20(int p_21, int p_22);
static unsigned short func_45(unsigned char p_46, char p_47);
static int func_49(int p_50);
static int * func_52(int * p_53, int * p_54, int p_55);
static int * func_57(long long p_58, int * p_59, const unsigned char p_60, unsigned long long p_61, int * p_62);
static int * func_63(const unsigned char p_64);
static unsigned func_1(void)
{
    unsigned l_8 = 4294967295UL;
    int **l_607 = &g_100;
    int l_650 = 0x2BBA5C05L;
    long long l_666 = 1L;
    int *l_674 = (void*)0;
    unsigned long long l_683 = 0UL;
    int l_837 = (-3L);
    short l_876 = 0L;
    long long l_880 = 0xBBBE2B5304BACFA1LL;
    int l_929 = (-10L);
    short l_934 = 0x4D98L;
    for (g_2 = 0; (g_2 < 7); g_2++)
    {
        long long l_48 = 0x9E96BB645487972ELL;
        const int l_132 = 0x982BF9DFL;
        unsigned char l_630 = 255UL;
        int l_646 = (-1L);
        int * const *l_649 = &g_100;
        int * const ** const l_648 = &l_649;
        int *l_660 = &l_646;
        const int l_680 = 0x67D08A53L;
        int *l_700 = &l_646;
        int l_740 = 0x97485CFDL;
        int *l_775 = &g_77;
        int l_846 = 1L;
        int l_870 = 1L;
        unsigned char l_873 = 0xFAL;
        char l_877 = 0x2FL;
        int *** const l_922 = &l_607;
    }
    for (l_8 = 0; (l_8 != 49); l_8++)
    {
        int * const *l_943 = &g_100;
        unsigned long long l_960 = 1UL;
        int *l_963 = (void*)0;
        (*g_100) = (((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((g_386 < g_453), 7)), g_387)) , (&g_194 == &g_99)) , (safe_add_func_int32_t_s_s(0xBD491D2FL, (l_943 == &g_100))));
        if ((**l_943))
            break;
        (**g_194) = (func_49((**l_943)) | (safe_rshift_func_uint16_t_u_s(func_5(g_473, g_473), func_18((g_387 ^ (safe_add_func_int8_t_s_s(((void*)0 == l_943), ((safe_div_func_int8_t_s_s((&l_674 != &l_674), (**l_943))) || (**l_943)))))))));
        if ((g_387 , (0x5B37A684ED80651ALL || ((((g_453 , ((((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((((void*)0 == &g_100) && (g_2 <= ((((void*)0 != &l_674) , &l_607) == &l_607))) ^ (**l_943)) <= (**l_607)), (**l_943))), (**l_943))) == g_330) >= 0x1E92L) > 0xEFDEC4A7L)) < 1UL) <= (-3L)) , g_386))))
        {
            int *l_964 = (void*)0;
            (**l_607) = (((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(g_635, (((void*)0 != (*l_607)) | l_960))), 5)) >= (**l_607)) >= ((((safe_div_func_uint64_t_u_u((g_77 < g_2), 1L)) , func_52(l_963, l_964, g_760)) != (void*)0) , 0UL));
        }
        else
        {
            int l_969 = 0L;
            unsigned char l_972 = 248UL;
            int l_983 = 3L;
            int *l_984 = &l_837;
            (*l_984) = ((safe_add_func_int8_t_s_s((-8L), (safe_rshift_func_int16_t_s_s(l_969, 13)))) || ((safe_mod_func_uint16_t_u_u(func_20(l_972, (safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((((**g_99) , (g_473 , func_20(((safe_lshift_func_uint8_t_u_s((((func_5(((l_969 ^ (func_18(((l_969 < (**g_194)) , (safe_div_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((1UL >= 1L), 0)) && (**g_99)), l_983)))) && g_380)) , g_77), g_338) , 0x7302EC60L) <= (**g_194)) , l_969), 4)) && g_386), l_972))) == g_330), 0xC430L)), 12))), 65535UL)) , 0UL));
            return (**l_607);
        }
    }
    return g_387;
}







static unsigned short func_5(short p_6, unsigned short p_7)
{
    unsigned long long l_601 = 0UL;
    int l_602 = (-1L);
    int *l_603 = (void*)0;
    int *l_604 = &g_575;
    l_602 = l_601;
    (*l_604) = l_601;
    return p_7;
}







static short func_9(unsigned short p_10, int p_11, int p_12, long long p_13)
{
    const int *l_133 = &g_2;
    int * const l_200 = &g_77;
    int *l_253 = (void*)0;
    unsigned short l_272 = 65535UL;
    unsigned short l_309 = 5UL;
    unsigned long long l_370 = 0x86E1F5E148245F02LL;
    unsigned l_503 = 0UL;
    int *** const l_531 = (void*)0;
    short l_543 = 0x501DL;
    if (((g_77 , ((((!func_49(p_12)) , (*g_99)) == l_133) >= (+1L))) < 0x08L))
    {
        int l_144 = (-7L);
        int **l_158 = &g_100;
        int ***l_157 = &l_158;
        p_11 = p_11;
        if (func_49(p_11))
        {
            int **l_135 = &g_100;
            int ***l_134 = &l_135;
            (*l_134) = &g_100;
            (*l_135) = (*g_99);
            (*l_135) = (void*)0;

            ;
        }
        else
        {
            const int l_149 = 0x7404BFF7L;
            int l_156 = 0x0D2121A4L;
            int **l_213 = &g_100;
            if (((safe_sub_func_int16_t_s_s((((safe_mod_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s((safe_unary_minus_func_int64_t_s((((l_144 == g_77) < (safe_div_func_uint32_t_u_u(g_2, g_2))) , (safe_lshift_func_uint8_t_u_u(((void*)0 == &g_99), l_149))))))) , p_10), func_18(l_149))) , p_13), g_2)) | g_77) & g_77), (-6L))) , p_12))
            {
                unsigned char l_193 = 0UL;
                (*g_99) = &p_11;

                ;
                if ((func_49(((*l_133) , 0xF2B768FFL)) == 0xE93423A3813E0D8CLL))
                {
                    (***l_157) = (safe_mod_func_int32_t_s_s((-2L), ((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(p_12, l_144)), (l_156 > (((((p_10 & ((g_2 , func_63(((l_157 != (void*)0) && (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u(g_77, g_77)), p_11)), p_12))))) == (*g_99))) > (***l_157)) == g_77) , 0x6370918AE1307C17LL) < (-4L))))) , (*g_100))));
                    p_11 = p_12;
                }
                else
                {
                    char l_187 = 0x81L;
                    for (l_156 = 0; (l_156 == (-4)); l_156 = safe_sub_func_int8_t_s_s(l_156, 8))
                    {
                        const long long l_175 = 1L;
                        l_133 = func_52(func_57((p_12 || (safe_lshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((((*l_133) & p_13) , 0xDE04AB730D59BCE1LL), (safe_lshift_func_uint8_t_u_s(((void*)0 != l_133), ((**g_99) > (safe_lshift_func_uint8_t_u_s((func_18(g_77) == 0x7C643468L), p_11))))))), 1))), (*g_99), l_175, p_10, (*g_99)), (*g_99), p_10);

                        ;
                        (*l_158) = (void*)0;

                        ;
                        return p_12;
                    }
                    if ((~(safe_lshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u((5UL && ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(0xCDL, p_13)), 65533UL)) > g_2)), ((void*)0 != (*g_99)))) != g_2), 5))))
                    {
                        unsigned long long l_186 = 0xBD15FE66233F1638LL;
                        int *l_190 = (void*)0;
                        int *l_191 = (void*)0;
                        int *l_192 = &g_77;
                        (*g_99) = (*g_99);
                        (*l_192) = (safe_add_func_int32_t_s_s(p_13, (g_77 , func_45(func_20(l_186, l_187), (safe_div_func_int32_t_s_s(p_13, g_2))))));

                        ;
                        (*l_192) = l_193;
                    }
                    else
                    {
                        unsigned l_195 = 0x6D180367L;
                        g_194 = &g_100;
                        (*g_100) = l_195;
                        (**g_99) = (1L != p_12);
                    }

                    ;
                }

                ;
                l_156 = (l_144 > (((((l_193 ^ ((p_12 | 0x330F8949L) , l_156)) >= ((safe_div_func_uint16_t_u_u(0x6692L, (safe_lshift_func_uint8_t_u_s((l_200 != &p_11), (g_77 < g_77))))) ^ 0UL)) >= 65534UL) , p_11) != p_12));
            }
            else
            {
                char l_207 = (-4L);
                unsigned char l_208 = 4UL;
                unsigned l_235 = 0xD09D3C4DL;
                (*l_200) = (safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(g_77, 1)), (safe_lshift_func_uint16_t_u_u(l_207, ((~(((l_208 ^ ((*g_99) == (void*)0)) ^ func_18(l_156)) & p_10)) < 0xC445L)))));
                for (l_207 = 0; (l_207 <= 4); l_207 = safe_add_func_int16_t_s_s(l_207, 5))
                {
                    int l_214 = 0L;
                    if (((((void*)0 != l_213) < (func_49(l_214) != func_18(((g_2 <= g_2) < (((p_10 , ((((safe_add_func_int64_t_s_s(g_2, (g_2 && p_13))) && l_208) == p_11) ^ l_214)) & 0x07L) , p_12))))) == 1UL))
                    {
                        (*l_200) = ((0x8CCC043B8F3440FCLL != g_77) | (safe_rshift_func_int8_t_s_s(g_2, (func_18(((((l_214 , 1UL) , (safe_rshift_func_uint16_t_u_u(0UL, 8))) , &g_100) == ((g_2 != ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(func_18(g_2), p_13)), g_2)) == 0UL)) , (void*)0))) | 1UL))));
                    }
                    else
                    {
                        l_235 = (safe_rshift_func_int8_t_s_u((g_2 ^ (p_11 < (((((void*)0 != (*l_157)) && ((safe_add_func_int32_t_s_s(0xE3D3FF89L, func_18(((*l_213) == (void*)0)))) || ((~(&p_11 != (void*)0)) > p_13))) || (-2L)) | p_12))), 1));
                        (*l_158) = (**l_157);
                        (*l_200) = (((safe_lshift_func_uint8_t_u_u(func_18(g_77), (p_13 == g_77))) ^ (((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(p_13, p_10)), p_13)) , p_12) | ((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((l_208 , 4UL), g_2)), g_77)) | g_2))) <= g_77);
                        (*l_200) = 7L;
                    }
                    (*l_200) = l_235;
                }
            }

            ;
            for (p_11 = 0; (p_11 >= (-30)); --p_11)
            {
                int *l_250 = &l_144;
                int *l_251 = &l_144;
                short l_252 = 0L;
                int ***l_271 = &l_158;
                int *l_284 = &g_77;
                (*g_99) = (*g_194);
                (*l_158) = func_57(((safe_lshift_func_int16_t_s_s(((((g_2 || 0x5A42L) , func_52(l_250, &p_11, p_11)) == (*g_194)) , (0x149C1215L < (*l_133))), 1)) | g_2), l_251, p_11, l_252, l_253);

                ;
                if (((safe_sub_func_int32_t_s_s(((**l_158) > ((**g_99) >= (0L == (**l_213)))), ((p_11 , (safe_mod_func_uint64_t_u_u(0xA6DA849F534F0367LL, (((safe_add_func_uint8_t_u_u((((safe_div_func_int16_t_s_s(func_18((safe_lshift_func_int16_t_s_u(g_77, 15))), (-5L))) != 0x917E9C42605A821BLL) & (*l_250)), (**l_213))) && 0x9B7CL) , g_77)))) ^ (*l_200)))) != p_11))
                {
                    for (g_77 = 0; (g_77 == (-1)); g_77 = safe_sub_func_int64_t_s_s(g_77, 2))
                    {
                        unsigned l_268 = 4294967295UL;
                        (*g_99) = &p_11;

                        ;
                        (*l_251) = ((((safe_add_func_uint64_t_u_u(func_18(((p_11 , l_268) , p_10)), (safe_sub_func_uint32_t_u_u(p_11, (func_18((**l_213)) , (l_271 == (void*)0)))))) > l_272) != 7L) && l_268);
                    }

                    ;
                    (*g_194) = &p_11;

                    ;
                }
                else
                {
                    unsigned short l_277 = 0xC39BL;
                    (*l_200) = (**g_99);
                    (*g_194) = (*g_99);
                    (*l_200) = (safe_sub_func_int64_t_s_s(((p_10 & (**l_158)) < (**l_213)), (*l_250)));
                }

                ;
                (**l_157) = func_52((*g_194), l_284, (safe_div_func_int16_t_s_s(g_2, g_77)));

                ;
            }
            (*g_194) = func_57((safe_lshift_func_uint8_t_u_s((&p_11 == ((p_10 & p_12) , (*g_99))), 4)), (*g_99), g_2, g_77, (*l_213));

            ;
        }
        (*l_200) = 0xCEF061EBL;
    }
    else
    {
        int l_303 = (-1L);
        int **l_327 = (void*)0;
        int l_371 = (-1L);
        int *l_392 = (void*)0;
        const int l_424 = (-6L);
        short l_445 = 3L;
        (*g_194) = &p_11;

        ;
        for (g_77 = (-20); (g_77 > (-9)); g_77 = safe_add_func_int16_t_s_s(g_77, 8))
        {
            short l_308 = 1L;
            int *l_359 = (void*)0;
            const unsigned l_374 = 1UL;
            unsigned char l_427 = 0xC6L;
            unsigned l_429 = 4UL;
            int ***l_438 = &g_194;
        }
        if (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(1UL, 10)), 5)) & g_330))
        {
            unsigned long long l_450 = 18446744073709551608UL;
            int l_495 = (-1L);
            p_11 = (g_338 , p_12);
            if ((p_10 , func_49(p_10)))
            {
                return g_330;


            }
            else
            {
                int l_456 = 1L;
                (*g_99) = func_63(((safe_lshift_func_uint16_t_u_s(((l_445 == (g_77 <= (safe_lshift_func_int8_t_s_s((&g_99 == &g_194), 7)))) , g_380), 9)) ^ (safe_div_func_int32_t_s_s(p_12, l_450))));

                ;
                (*g_99) = func_63((((safe_sub_func_int32_t_s_s((**g_194), ((g_338 || (((void*)0 == &g_99) & g_453)) | (p_12 & ((safe_lshift_func_int8_t_s_u(9L, l_456)) < (g_457 & p_10)))))) && 0x73L) >= 0xA31E5B94L));
            }

            ;
            l_327 = (p_11 , &g_100);

            ;
            for (p_11 = 2; (p_11 > 4); ++p_11)
            {
                char l_465 = 0L;
                (*l_327) = (void*)0;

                ;
                for (l_371 = 10; (l_371 == 12); l_371 = safe_add_func_int8_t_s_s(l_371, 3))
                {
                    unsigned char l_462 = 3UL;
                    int *l_478 = &l_303;
                    l_462 = p_10;
                    if ((l_465 <= (((safe_lshift_func_int16_t_s_s((((!((safe_mod_func_uint16_t_u_u(l_465, (-6L))) | (safe_sub_func_int64_t_s_s(l_465, (func_20(func_20(p_13, p_13), (safe_unary_minus_func_int32_t_s(((g_473 < ((safe_add_func_int16_t_s_s((((safe_add_func_int32_t_s_s((g_380 >= 4294967295UL), p_12)) , l_465) <= l_462), g_457)) , 0L)) != l_450)))) <= (-1L)))))) && 5L) , g_453), p_12)) == g_2) == 0xC0L)))
                    {
                        return p_11;


                    }
                    else
                    {
                        (*g_99) = l_478;

                        ;
                        (*g_99) = &p_11;

                        ;
                        if ((**g_194))
                            continue;
                        (*l_327) = (*g_194);
                    }

                    ;
                }

                ;
                for (g_386 = (-29); (g_386 < 14); ++g_386)
                {
                    int *l_483 = &g_2;
                    (*l_327) = &p_11;

                    ;
                    (*g_194) = &p_11;
                    (*l_327) = func_57(g_457, (((~p_11) == (0xADE78D6175FAA455LL != (g_330 <= ((p_10 , func_52(l_253, (*g_194), g_387)) == (*g_99))))) , &p_11), p_12, g_453, l_483);

                    ;
                    for (p_13 = 1; (p_13 < 28); p_13 = safe_add_func_int32_t_s_s(p_13, 1))
                    {
                        unsigned l_494 = 0x1E537B93L;
                        (*l_200) = p_10;
                        (*g_99) = func_52(l_253, (*g_99), g_473);

                        ;
                        (*g_99) = ((((safe_sub_func_uint16_t_u_u(func_20((g_77 || ((safe_div_func_uint8_t_u_u(p_12, (*l_133))) >= ((safe_rshift_func_int16_t_s_s((*l_200), 7)) != (safe_lshift_func_uint16_t_u_u(g_457, (*l_483)))))), (0UL > p_11)), g_2)) , 0x31L) , p_10) , &p_11);

                        ;
                        (*l_327) = func_57(g_386, (*g_194), (l_494 & 0x86E067EDE7A54794LL), p_13, (*l_327));

                        ;
                    }
                }

                ;
                l_495 = (g_338 <= l_450);
            }

            ;
        }
        else
        {
            (**g_194) = (+p_13);
        }

        ;
        ;
        (*g_194) = (void*)0;

        ;
    }
    (*l_200) = (0L == (0xE26CL <= 0UL));
    if (p_12)
    {
        return g_380;
    }
    else
    {
        int **l_498 = &g_100;
        unsigned long long l_557 = 18446744073709551615UL;
        long long l_558 = 0L;
        unsigned short l_574 = 0x9AECL;
        g_194 = &g_100;
        if ((((safe_div_func_uint8_t_u_u(((l_498 == ((((((safe_add_func_int8_t_s_s((l_498 != ((((2L == g_457) , &g_99) == (void*)0) , l_498)), (safe_add_func_int16_t_s_s((&p_11 != ((((p_12 > g_2) >= 0xF90AC3D2FF1B54D9LL) > p_12) , l_200)), g_338)))) , (*l_200)) > p_10) >= p_10) == 0x1EL) , (void*)0)) && 18446744073709551615UL), l_503)) , &l_498) == &g_194))
        {
            const int *l_504 = &g_2;
            const int **l_505 = (void*)0;
            const int **l_506 = &l_133;
            (*l_200) = ((l_504 == (void*)0) , ((*l_133) , ((void*)0 == (*g_99))));
            (*l_506) = l_133;
        }
        else
        {
            int *l_509 = &g_77;
            int l_594 = (-8L);
            int ** const *l_595 = &l_498;
            for (g_330 = 0; (g_330 < 26); ++g_330)
            {
                int *l_510 = &g_77;
                if (p_12)
                {
                    long long l_528 = 4L;
                    l_510 = func_52(l_509, (*g_99), g_453);
                    if ((*l_509))
                    {
                        (*l_200) = (*l_509);
                        if ((*l_509))
                            break;
                        (*g_194) = (*g_194);
                    }
                    else
                    {
                        unsigned l_517 = 1UL;
                        (*l_509) = (((safe_lshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s(((func_49(p_11) , &g_100) == (func_18(p_11) , &g_100)), (g_338 | (safe_lshift_func_uint16_t_u_u(((p_12 & ((g_473 > 4UL) , g_453)) | g_473), 6))))), 2)) , g_330) < g_338);
                        (*l_510) = (&p_11 == (*g_99));
                        (*l_509) = ((((l_510 != (void*)0) < func_49(func_18(func_18((p_13 == 1UL))))) || p_10) & p_10);
                    }
                    for (g_386 = 0; (g_386 < 29); g_386 = safe_add_func_uint8_t_u_u(g_386, 7))
                    {
                        (*l_498) = (*l_498);
                        (*g_194) = (*g_99);
                        (*l_498) = &p_11;

                        ;
                        (*g_99) = (void*)0;

                        ;
                    }
                }
                else
                {
                    long long l_538 = 0L;
                    int l_546 = 1L;
                    (*l_509) = (((((*l_510) , l_498) != &g_100) , l_531) == (void*)0);
                    (*l_509) = (((p_13 < (safe_lshift_func_int16_t_s_s((*l_200), (+(safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(p_11, l_538)), (((void*)0 == &g_99) == (((((g_330 , g_2) | ((((*l_510) || p_10) == (*l_510)) | p_12)) , 0x8A54L) && l_538) , g_457)))))))) , l_538) , l_538);
                    for (p_13 = 0; (p_13 > 17); p_13 = safe_add_func_int8_t_s_s(p_13, 9))
                    {
                        (*l_200) = (l_538 ^ (safe_mod_func_uint16_t_u_u(l_543, (safe_lshift_func_uint16_t_u_u((*l_509), g_77)))));
                        (*g_194) = l_509;

                        ;
                        l_546 = (**g_99);
                        return (**l_498);
                    }
                }
                (*l_200) = p_13;
            }
            for (g_453 = (-18); (g_453 < (-17)); g_453++)
            {
                char l_552 = (-6L);
                int * const *l_569 = &g_100;
                int *l_585 = &g_575;
                (*g_194) = (*l_498);
                for (l_272 = 0; (l_272 != 37); l_272 = safe_add_func_int16_t_s_s(l_272, 3))
                {
                    int *l_551 = &g_77;
                    (*g_99) = l_551;

                    ;
                    if ((+((&g_99 != (l_552 , l_531)) == (g_77 && func_45((l_552 != (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(g_338, (p_10 == l_557))), (p_11 || (**l_498))))), l_558)))))
                    {
                        (*l_498) = (void*)0;

                        ;
                        (*l_509) = (-10L);
                        p_11 = (l_552 || (safe_lshift_func_int16_t_s_s(g_330, 1)));
                    }
                    else
                    {
                        p_11 = (l_498 != &g_100);
                        if (l_552)
                            continue;
                        (*g_194) = ((safe_div_func_uint8_t_u_u((0UL & (((((safe_mod_func_int32_t_s_s(p_13, (0x45B3E25D42C20603LL && g_77))) & (g_453 , (+p_10))) , ((safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(p_11, ((void*)0 != l_569))), g_387)) == (*l_551))) | p_11) && p_11)), g_457)) , (*l_498));
                        (*l_200) = func_49(((*l_133) >= g_380));
                    }

                    ;
                }
                (*l_509) = (safe_sub_func_int8_t_s_s((((0x6E7423A7L ^ p_10) ^ (((safe_div_func_int64_t_s_s(((*l_509) > 1UL), g_380)) | 0xCF314EE9L) > ((p_10 , ((g_473 == func_18((l_574 ^ 255UL))) > p_13)) && g_575))) >= 0x22L), g_330));
                if ((p_11 <= func_20(p_10, p_11)))
                {
                    int ***l_576 = &l_498;
                    (*l_576) = &g_100;
                    p_11 = (safe_rshift_func_int8_t_s_s(func_18((*l_509)), (~(p_11 && (g_338 > g_457)))));
                    (*g_99) = func_63(func_18(g_457));

                    ;
                }
                else
                {
                    int l_581 = 0L;
                    int *l_582 = &g_2;
                    for (l_370 = 0; (l_370 < 52); l_370 = safe_add_func_uint32_t_u_u(l_370, 8))
                    {
                        (*l_498) = func_57(l_581, func_52((*g_194), func_57(p_11, l_582, ((*l_200) != (p_11 || (safe_sub_func_int16_t_s_s((*l_582), g_575)))), p_10, (*g_194)), g_380), p_10, (*l_582), (*g_99));

                        ;
                        (*g_99) = func_52((*g_99), l_585, ((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint64_t_u_u((g_338 != (!(safe_add_func_uint8_t_u_u(p_10, p_10)))), (255UL <= (*l_200)))))) , p_10));

                        ;
                    }
                }
            }
            if ((&g_99 == (((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s((0x01F7BDC5F02047E6LL == (g_386 != (+0xD1L))))) , g_473), (func_20(func_49(((p_13 == (g_77 == p_10)) , 0L)), l_594) , l_574))) , 9L) , l_595)))
            {
                (*g_99) = func_63(p_12);

                ;
            }
            else
            {
                int l_600 = 1L;
                (*l_200) = func_18(p_10);
                (**l_595) = &p_11;

                ;
                (**g_194) = (safe_sub_func_uint8_t_u_u(6UL, (safe_lshift_func_int16_t_s_u(l_600, (g_387 , g_2)))));
                return g_386;


            }

            ;
        }
    }
    return g_386;
}







static int func_18(unsigned long long p_19)
{
    return p_19;
}







static short func_20(int p_21, int p_22)
{
    int *l_131 = &g_77;
    (*g_99) = (*g_99);
    (*l_131) = p_22;
    (*l_131) = p_22;
    return p_22;
}







static unsigned short func_45(unsigned char p_46, char p_47)
{
    short l_95 = 0xE08AL;
    int * const l_109 = &g_77;
    int *l_130 = &g_2;
    if (g_2)
    {
        long long l_51 = 0x4F57B17B4D2C298CLL;
        int *l_89 = (void*)0;
        int l_90 = 0x486D4D44L;
        int *l_101 = (void*)0;
        int *l_102 = &l_90;
        l_90 = func_49(l_51);
        (*l_102) = (safe_div_func_int8_t_s_s((((1UL != 0xB67338D581CA9286LL) != func_49(l_95)) > ((0L & (safe_unary_minus_func_uint32_t_u(g_2))) < ((safe_mod_func_int8_t_s_s(((void*)0 != g_99), 2L)) && p_46))), g_2));
    }
    else
    {
        if ((*g_100))
        {
            (*g_99) = (*g_99);
        }
        else
        {
            long long l_103 = 0xF8F04B7466640DD1LL;
            int *l_106 = &g_77;
            (*g_99) = (void*)0;

            ;
            l_103 = g_2;
            (*l_106) = (func_49(l_103) <= ((safe_div_func_int64_t_s_s(g_2, p_47)) > g_2));
        }


        return p_47;
    }
    if (p_47)
    {
        (*g_99) = (*g_99);
        (*g_99) = func_63(g_2);

        ;
        (*g_99) = (*g_99);
    }
    else
    {
        int l_123 = 9L;
        for (p_47 = 0; (p_47 <= 6); ++p_47)
        {
            int **l_110 = &g_100;
            (*l_110) = l_109;

            ;
            if ((safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((*l_109), ((safe_rshift_func_uint16_t_u_s(g_2, p_46)) ^ ((((((safe_lshift_func_int8_t_s_s((g_77 != 65534UL), g_77)) != (safe_mod_func_uint64_t_u_u((g_77 == (safe_div_func_int64_t_s_s(g_2, (((void*)0 == &g_100) , p_46)))), p_47))) && 254UL) || 18446744073709551615UL) , p_46) & g_2)))) , p_46), p_46)))
            {
                (**l_110) = 0x6E5819C3L;
                (*g_99) = (*g_99);
                (*g_99) = (*g_99);
            }
            else
            {
                (*g_99) = (*g_99);
                if (l_123)
                    break;
            }
        }
    }
    (*g_99) = func_57((p_47 || func_49((safe_rshift_func_uint8_t_u_s(g_77, p_46)))), func_63((p_46 != ((safe_rshift_func_int16_t_s_u(p_46, 11)) , ((((&l_109 != &l_109) ^ g_2) , p_46) > p_47)))), p_46, g_2, l_130);

    ;
    (*l_109) = p_46;
    return (*l_109);
}







static int func_49(int p_50)
{
    int *l_56 = &g_2;
    int **l_86 = &l_56;
    (*l_86) = func_52(l_56, func_57(p_50, func_63((safe_sub_func_uint32_t_u_u(p_50, (safe_add_func_int8_t_s_s(g_2, p_50))))), ((safe_add_func_int8_t_s_s(g_2, (safe_lshift_func_uint16_t_u_s(p_50, 1)))) | (g_2 & (*l_56))), g_2, &g_2), p_50);

    ;
    (*l_56) = (safe_mod_func_int16_t_s_s(g_2, g_77));
    (*l_56) = (*l_56);
    return (**l_86);
}







static int * func_52(int * p_53, int * p_54, int p_55)
{
    int *l_85 = &g_77;
    (*l_85) = (safe_lshift_func_uint8_t_u_u(255UL, 3));
    (*l_85) = g_2;
    return l_85;


}







static int * func_57(long long p_58, int * p_59, const unsigned char p_60, unsigned long long p_61, int * p_62)
{
    int *l_75 = (void*)0;
    int *l_76 = &g_77;
    char l_82 = 2L;
    (*l_76) = g_2;
    for (p_61 = (-15); (p_61 != 19); p_61 = safe_add_func_int64_t_s_s(p_61, 1))
    {
        int **l_81 = &l_76;
        (*l_81) = func_63((safe_unary_minus_func_uint32_t_u(g_2)));

        ;
        return l_76;


    }
    l_82 = 0x2E882408L;
    return &g_77;


}







static int * func_63(const unsigned char p_64)
{
    int *l_70 = (void*)0;
    int **l_69 = &l_70;
    (*l_69) = &g_2;

    ;
    return &g_2;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_457, "g_457", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_688, "g_688", print_hash_value);
    transparent_crc(g_760, "g_760", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
