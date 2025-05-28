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
   int f1;
   const short f2;
   short f3;
   unsigned char f4;
};

union U1 {
   unsigned char f0;
   const unsigned long long f1;
};

union U2 {
   unsigned short f0;
   short f1;
   long long f2;
};


static int g_9 = 0L;
static int * const g_8 = &g_9;
static unsigned g_26 = 4294967290UL;
static union U0 g_46 = {0xA1DD7933L};
static union U0 *g_45 = &g_46;
static int g_57 = 0x9757A836L;
static union U2 g_72 = {6UL};
static int *g_89 = &g_57;
static union U2 *g_98 = (void*)0;
static unsigned short g_207 = 0xCAFAL;
static const long long g_227 = 0xE60DA4F588204ECCLL;
static union U1 g_251 = {0x9AL};
static union U2 * const *g_255 = &g_98;
static union U2 * const **g_254 = &g_255;
static int g_289 = 0x8326687BL;
static int *g_288 = &g_289;
static const int *g_384 = &g_9;
static union U1 g_427 = {0x1DL};
static union U1 *g_426 = &g_427;
static unsigned short g_435 = 0x2C3FL;
static const unsigned g_494 = 0xDB026191L;
static int *g_498 = &g_9;



static union U0 func_1(void);
static int * func_2(int * const p_3, int * p_4, int * p_5, unsigned char p_6, int p_7);
static int * func_11(int * p_12);
static int * func_13(int * p_14);
static union U0 * func_15(unsigned p_16, int * p_17, union U0 * p_18, union U0 * p_19, const short p_20);
static unsigned func_21(char p_22, union U0 * const p_23, long long p_24, char p_25);
static const unsigned func_30(union U0 * p_31);
static char func_36(union U2 p_37, union U2 p_38, int * p_39);
static union U2 func_40(const union U0 * p_41);
static union U0 * func_42(union U0 * p_43, long long p_44);
static union U0 func_1(void)
{
    int *l_10 = (void*)0;
    int **l_499 = (void*)0;
    int **l_500 = &l_10;
    union U0 l_504 = {-6L};
    long long l_513 = 0xD659BDD903581B5ELL;
    int *l_516 = &g_289;
    int l_519 = 0x7F3CA4CCL;
    (*l_500) = func_2(g_8, l_10, func_11(func_13(l_10)), g_227, (((void*)0 == g_8) != g_227));

    ;


    ;
    ;
    if ((*g_288))
    {
        unsigned long long l_503 = 0UL;
        if ((safe_rshift_func_uint16_t_u_s((0UL && g_72.f0), l_503)))
        {
            g_384 = &g_289;

            ;
            return l_504;

                    }
        else
        {
            union U0 l_505 = {1L};
            return l_505;

                    }
    }
    else
    {
        union U0 **l_506 = &g_45;
        int *l_511 = &g_289;
        union U2 l_512 = {0x1059L};
        (*l_506) = &g_46;
        if (((safe_lshift_func_int8_t_s_u((((func_36(func_40(func_42(&g_46, (safe_add_func_uint8_t_u_u(func_21((0xDBL || g_494), func_15(g_494, l_511, &g_46, &l_504, (*l_511)), g_72.f1, (*l_511)), (*l_511))))), l_512, &g_289) <= g_72.f0) != g_289) != 1L), l_513)) >= g_72.f1))
        {
            for (g_26 = 0; (g_26 < 30); g_26++)
            {
                return (*g_45);

                            }
        }
        else
        {
            (*l_500) = &g_9;

            ;
        }
        (*l_500) = &g_289;

        ;
    }

    ;
    for (g_72.f1 = (-19); (g_72.f1 == 15); ++g_72.f1)
    {
        union U0 **l_520 = &g_45;
        (*l_10) = l_519;
        (*l_520) = &g_46;
    }
    (*g_498) = (*g_384);
    return l_504;

    }







static int * func_2(int * const p_3, int * p_4, int * p_5, unsigned char p_6, int p_7)
{
    unsigned char l_296 = 0x53L;
    int *l_299 = &g_289;
    int **l_302 = &l_299;
    int ***l_301 = &l_302;
    union U2 *l_312 = &g_72;
    unsigned l_347 = 0x7B236801L;
    union U0 **l_376 = &g_45;
    union U0 ***l_375 = &l_376;
    int l_425 = 0L;
    long long l_436 = 9L;
    union U2 l_453 = {0xA309L};
    union U2 **l_478 = (void*)0;
    union U2 ***l_477 = &l_478;
    unsigned l_497 = 0x2797F1FAL;
    if (((l_296 != g_227) < ((*g_8) == (&g_57 == l_299))))
    {
        int **l_300 = &l_299;
        int *l_330 = &g_57;
        (*l_300) = &p_7;

        ;
        (*l_300) = &g_289;

        ;
        (*g_89) = (((void*)0 != l_301) != 65528UL);
        for (g_9 = 2; (g_9 < 9); g_9++)
        {
            char l_319 = 0x15L;
            for (g_46.f1 = 1; (g_46.f1 > (-19)); g_46.f1 = safe_sub_func_int8_t_s_s(g_46.f1, 1))
            {
                unsigned l_316 = 1UL;
                union U1 *l_322 = (void*)0;
                int * const l_323 = (void*)0;
                (*l_301) = (void*)0;

                ;
                (*p_5) = (safe_mod_func_uint16_t_u_u((**l_300), p_6));
                for (p_7 = 5; (p_7 <= (-22)); p_7 = safe_sub_func_int8_t_s_s(p_7, 1))
                {
                    int *l_311 = &g_57;
                    if ((*p_5))
                    {
                        (*l_300) = func_11(func_11(l_311));

                        ;
                    }
                    else
                    {
                        union U2 **l_313 = &g_98;
                        union U2 **l_317 = (void*)0;
                        union U2 **l_318 = &l_312;
                        (*l_313) = l_312;

                        ;
                        (*g_288) = ((safe_rshift_func_int8_t_s_s(l_316, 0)) && ((4294967295UL & ((*g_254) == &l_312)) || p_6));
                        (*l_318) = (**g_254);
                    }
                    if (l_319)
                        continue;
                    (*p_5) = 0xE4C4D5C0L;
                    for (g_26 = 0; (g_26 > 13); ++g_26)
                    {
                        (*l_300) = &g_9;

                        ;
                        (*p_5) = (-2L);
                    }
                }
                if (((void*)0 == l_322))
                {
                    int **l_324 = &g_89;
                    int l_325 = 0x61939E14L;
                    (*l_324) = l_323;

                    ;
                    if (l_325)
                    {
                        const unsigned l_326 = 4294967286UL;
                        if (l_326)
                            break;
                    }
                    else
                    {
                        return (*l_324);


                    }
                    if ((safe_mod_func_int8_t_s_s((-5L), g_57)))
                    {
                        int *l_329 = &g_9;
                        (*l_324) = func_11(&g_57);

                        ;
                    }
                    else
                    {
                        return l_330;


                    }

                    ;
                    if ((*p_5))
                        break;
                }
                else
                {
                    (*l_300) = func_11(&p_7);

                    ;
                }
            }

            ;
            ;
            ;
            return &g_9;


        }
    }
    else
    {
        union U0 **l_332 = &g_45;
        union U0 ***l_331 = &l_332;
        if ((l_331 == &l_332))
        {
            return &g_57;


        }
        else
        {
            (**l_301) = func_11((*l_302));
            g_89 = &p_7;

            ;
        }

        ;
        (*l_299) = (*g_8);
        (**l_301) = (void*)0;

        ;
    }

    ;
    ;
    for (g_289 = 0; (g_289 != 2); g_289++)
    {
        long long l_337 = 0x90107555DCA3CA68LL;
        int *l_344 = &g_57;
        union U2 l_450 = {0xA924L};
        if (((safe_add_func_uint8_t_u_u(l_337, ((safe_sub_func_uint16_t_u_u(p_6, 0UL)) != (safe_add_func_uint8_t_u_u(l_337, (safe_lshift_func_int16_t_s_u(((&p_4 == (void*)0) != p_7), 6))))))) || (*g_89)))
        {
            (**l_301) = l_344;

            ;
        }
        else
        {
            unsigned short l_371 = 5UL;
            int *l_385 = (void*)0;
            union U2 * const l_386 = &g_72;
            union U2 **l_387 = &g_98;
            if ((*g_8))
            {
                union U0 *l_352 = &g_46;
                (*p_3) = (safe_sub_func_int16_t_s_s(((0x054497D9L >= g_46.f2) != l_347), (p_7 || (*l_344))));
                for (p_7 = 0; (p_7 > 21); p_7 = safe_add_func_int16_t_s_s(p_7, 6))
                {
                    if ((safe_lshift_func_uint8_t_u_u((g_72.f1 > g_46.f0), 4)))
                    {
                        (**l_301) = &g_289;

                        ;
                        (*g_8) = (*l_299);
                        p_4 = (void*)0;
                    }
                    else
                    {
                        if ((*g_89))
                            break;
                        (*g_8) = (*p_5);
                    }
                    return &g_9;



                }
                return &g_9;



            }
            else
            {
                unsigned short l_366 = 0x1F52L;
                for (g_46.f0 = 0; (g_46.f0 >= (-3)); g_46.f0 = safe_sub_func_uint16_t_u_u(g_46.f0, 9))
                {
                    union U1 *l_361 = &g_251;
                    int l_377 = 0x9773BB53L;
                }

            }

            l_385 = &g_57;

            ;
            (*p_3) = 8L;
            (*l_387) = l_386;

            ;
        }
        for (g_9 = 5; (g_9 > (-18)); --g_9)
        {
            unsigned long long l_424 = 0x89256965F758B053LL;
            unsigned long long l_446 = 0xB4C828D8C5E5D075LL;
            int l_455 = 9L;
            unsigned long long l_472 = 0xBC1C0669FC19CA5ALL;
            int *l_486 = (void*)0;
            (**l_301) = (void*)0;

            ;
            for (g_46.f0 = 28; (g_46.f0 != (-1)); g_46.f0 = safe_sub_func_int32_t_s_s(g_46.f0, 5))
            {
                unsigned char l_392 = 246UL;
                unsigned l_411 = 4294967290UL;
                (*l_344) = l_392;
                if (((*g_384) && (0x818798A2L < (g_26 <= l_392))))
                {
                    unsigned short l_393 = 0UL;
                    union U2 * const l_399 = &g_72;
                    int *l_402 = &g_9;
                    if (((p_6 | ((g_46.f4 & l_393) & g_72.f0)) < 0xBF0AL))
                    {
                        unsigned l_398 = 0x51B4D85EL;
                        union U2 **l_400 = (void*)0;
                        union U2 **l_401 = &g_98;
                        (*l_344) = (safe_rshift_func_int8_t_s_u((*l_344), p_7));
                        (*l_344) = (safe_mod_func_uint16_t_u_u(g_72.f0, ((l_398 | (*g_384)) && 2L)));
                        (*l_401) = l_399;

                        ;
                        return l_402;



                    }
                    else
                    {
                        union U0 **l_403 = &g_45;
                        int l_404 = (-1L);
                        (*l_375) = l_403;
                        if (l_404)
                            break;
                        (*l_302) = &p_7;

                        ;
                    }

                    ;
                }
                else
                {
                    const union U0 *l_422 = &g_46;
                    const union U0 **l_421 = &l_422;
                    const union U0 ** const *l_420 = &l_421;
                    int l_423 = 0xDB644A8CL;
                    l_425 = ((safe_add_func_uint8_t_u_u((g_46.f3 == g_72.f0), (((((g_207 != ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((l_411 >= (safe_div_func_uint16_t_u_u((4294967295UL <= g_251.f0), ((safe_add_func_int64_t_s_s(((safe_mod_func_int16_t_s_s(((p_7 <= (safe_rshift_func_int8_t_s_s((l_420 == (void*)0), 4))) < l_423), p_6)) == 4L), 0xDDC4B2344DFEE030LL)) & g_289)))), g_9)), g_46.f0)) >= l_424)) && p_6) >= 0xF5CDD96BL) >= l_411) && g_46.f4))) & (*g_384));
                    if (l_424)
                    {
                        (*l_344) = (+((*l_301) != &g_288));
                        g_426 = (void*)0;

                        ;
                        g_98 = (void*)0;

                        ;
                    }
                    else
                    {
                        (**l_301) = &g_289;

                        ;
                        if ((*g_288))
                            break;
                    }
                }
                (*l_344) = (*g_8);
            }

            ;
            if (((g_251.f0 || g_289) >= (safe_lshift_func_int8_t_s_u(0x58L, 4))))
            {
                if ((*g_288))
                {
                    int *l_432 = &g_57;
                    const union U0 *l_433 = (void*)0;
                    union U2 l_434 = {7UL};
                    for (l_347 = (-7); (l_347 < 53); l_347++)
                    {
                        (*l_302) = &g_289;

                        ;
                        (*l_302) = l_432;

                        ;
                    }

                    ;
                    if ((*p_5))
                        break;
                    g_435 = func_36(func_40(l_433), l_434, &g_289);

                }
                else
                {
                    (*l_344) = l_436;
                    (**l_301) = &g_9;

                    ;
                }

                ;
            }
            else
            {
                char l_441 = (-1L);
                int *l_454 = &g_289;
                for (l_296 = (-18); (l_296 >= 40); ++l_296)
                {
                    int *l_442 = &g_57;
                    for (l_347 = (-13); (l_347 > 6); l_347 = safe_add_func_int64_t_s_s(l_347, 1))
                    {
                        l_441 = (*p_3);
                        if ((*p_5))
                            continue;
                        return l_442;



                    }
                    g_57 = (safe_unary_minus_func_uint16_t_u(0UL));
                    g_288 = &g_57;

                    ;
                    (*l_302) = &g_57;

                    ;
                }

                ;
                (*l_344) = (safe_lshift_func_int16_t_s_u(l_446, 14));
                g_426 = (void*)0;

                ;
                if ((*p_3))
                {
                    int l_449 = 0xC2E586AEL;
                    union U2 l_451 = {7UL};
                    if (((((safe_div_func_int8_t_s_s(l_449, func_36(l_450, l_451, (*l_302)))) ^ p_7) <= (((((l_441 == 0xC01F560EL) || (18446744073709551615UL > p_7)) & p_7) && g_9) ^ g_9)) > 0x210DL))
                    {
                        l_344 = &g_57;
                        (**l_301) = &p_7;

                        ;
                        (*l_302) = &g_9;

                        ;
                    }
                    else
                    {
                        unsigned l_452 = 0x50ADC6CEL;
                        (*l_344) = l_452;
                        if ((*p_3))
                            break;
                        l_455 = (p_7 < func_36(l_451, l_453, l_454));
                        (*l_302) = &g_57;

                        ;
                    }

                    ;
                    if ((*g_8))
                        break;
                    (*l_344) = (safe_lshift_func_int16_t_s_u(((+g_46.f1) == ((l_446 ^ g_46.f2) < (p_6 | (-5L)))), p_7));
                }
                else
                {
                    if ((p_7 ^ 1UL))
                    {
                        (*l_344) = (*g_8);
                        (*l_302) = &p_7;

                        ;
                        (*l_344) = (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(p_6, 7)), 10));
                    }
                    else
                    {
                        (**l_301) = &p_7;

                        ;
                    }

                    ;
                    (**l_302) = (*g_288);
                    (**l_301) = &g_57;

                    ;
                }

                ;
            }

            ;
            if (((*g_8) > ((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_div_func_int64_t_s_s(g_57, (safe_div_func_int16_t_s_s(l_424, g_26)))), p_6)), ((((g_427.f0 ^ l_446) && l_472) >= (0xADL ^ p_6)) > (*l_344)))), g_26)) <= (*p_3))))
            {
                union U2 l_481 = {0x26C0L};
                (*l_344) = func_36(func_40(func_42(&g_46, (p_6 >= ((safe_add_func_int16_t_s_s(p_7, ((safe_mod_func_uint32_t_u_u((l_477 != &l_478), (~(safe_rshift_func_uint8_t_u_s(func_36(l_481, func_40(&g_46), &g_289), g_9))))) != l_450.f0))) > p_6)))), l_481, &g_289);
                if ((*g_384))
                    break;
                for (g_251.f0 = 21; (g_251.f0 != 4); g_251.f0 = safe_sub_func_int16_t_s_s(g_251.f0, 1))
                {
                    if ((*g_384))
                        break;
                }
            }
            else
            {
                for (g_207 = 0; (g_207 <= 45); g_207 = safe_add_func_uint64_t_u_u(g_207, 3))
                {
                    (*l_301) = &p_4;

                    ;
                    return l_486;



                }
                (**l_301) = &p_7;

                ;
            }
        }
        if ((*g_384))
        {
            int *l_487 = &g_9;
            l_344 = l_487;

            ;
            (*g_8) = ((safe_sub_func_uint8_t_u_u(((*l_344) > p_7), (safe_div_func_int32_t_s_s((safe_mod_func_int64_t_s_s(g_494, (safe_add_func_int64_t_s_s((4294967295UL || l_497), 0xCE07EB1FF3E3909ELL)))), (p_7 | ((-6L) ^ (g_289 <= 0x81L))))))) < g_72.f1);
            (**l_301) = &g_289;

            ;
        }
        else
        {
            (*p_3) = (*p_3);
        }

        ;
    }

    ;
    ;
    ;
    return g_498;



}







static int * func_11(int * p_12)
{
    int l_295 = (-2L);
    (*p_12) = (l_295 >= l_295);
    return p_12;


}







static int * func_13(int * p_14)
{
    unsigned l_27 = 0x588C5561L;
    union U0 *l_32 = (void*)0;
    union U0 **l_293 = &g_45;
    int *l_294 = &g_289;
    (*g_8) = (!0x790E8648L);
    (*l_293) = func_15(func_21(((g_26 > (~l_27)) || (((*g_8) ^ l_27) & (safe_sub_func_uint32_t_u_u(func_30(l_32), 0xA1A33596L)))), l_32, l_27, l_27), g_288, g_45, g_45, g_227);

    ;

    return l_294;


}







static union U0 * func_15(unsigned p_16, int * p_17, union U0 * p_18, union U0 * p_19, const short p_20)
{
    union U2 l_290 = {1UL};
    union U2 * const ** const l_291 = &g_255;
    union U0 *l_292 = &g_46;
    if ((func_36(l_290, l_290, p_17) <= ((void*)0 == l_291)))
    {
        return &g_46;


    }
    else
    {
        return l_292;


    }
}







static unsigned func_21(char p_22, union U0 * const p_23, long long p_24, char p_25)
{
    const union U0 *l_232 = &g_46;
    union U0 **l_236 = &g_45;
    union U0 ***l_235 = &l_236;
    int l_239 = 4L;
    union U2 l_270 = {0x578DL};
    if ((safe_div_func_uint16_t_u_u((~((void*)0 != l_232)), (safe_rshift_func_int16_t_s_s(((void*)0 == l_235), (g_9 || (p_25 >= (safe_rshift_func_int16_t_s_s(0xD202L, (l_239 && (safe_div_func_uint64_t_u_u(g_72.f1, 0xE5C33B20C6C6CD64LL))))))))))))
    {
        union U2 **l_269 = &g_98;
        union U2 ***l_268 = &l_269;
        int *l_276 = &g_9;
        for (g_207 = 0; (g_207 >= 41); ++g_207)
        {
            int l_245 = 0xB36AF559L;
            union U1 *l_250 = &g_251;
            union U2 **l_267 = &g_98;
            union U2 ***l_266 = &l_267;
        }
    }
    else
    {
        union U2 **l_283 = &g_98;
        (*l_283) = &l_270;

        ;
    }


    l_239 = (g_72.f0 >= func_36(l_270, func_40(func_42(func_42(func_42(func_42((**l_235), l_270.f1), (p_25 < (((*g_8) & p_22) != ((safe_rshift_func_uint8_t_u_s(((*g_8) <= l_270.f1), 4)) > l_239)))), l_270.f0), p_25)), &l_239));

    (*g_8) = p_25;
    return g_46.f4;


}







static const unsigned func_30(union U0 * p_31)
{
    char l_35 = 0x54L;
    union U2 l_67 = {3UL};
    union U0 **l_94 = &g_45;
    int *l_100 = &g_9;
    int l_182 = 1L;
    union U2 **l_208 = &g_98;
lbl_213:
    if ((g_9 || (l_35 > ((func_36(func_40(func_42(g_45, (safe_rshift_func_uint8_t_u_s((l_35 <= (safe_add_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_s(l_35, 2)) >= 18446744073709551615UL) == (*g_8)) || g_46.f3), (g_46.f1 >= g_46.f0)))), 5)))), l_67, &g_9) || g_46.f0) <= 0x79C83BDEEF3AA798LL))))
    {
        int *l_87 = &g_9;
        int **l_88 = (void*)0;
lbl_90:
        for (g_72.f0 = 1; (g_72.f0 > 20); g_72.f0 = safe_add_func_uint16_t_u_u(g_72.f0, 5))
        {
            int *l_86 = &g_57;
            int **l_85 = &l_86;
            (*l_85) = &g_57;
            (*l_85) = l_87;

            ;
        }
        g_89 = &g_9;

        ;
        if (g_46.f1)
            goto lbl_90;
    }
    else
    {
        int **l_91 = (void*)0;
        int **l_92 = (void*)0;
        int *l_93 = &g_57;
        union U0 ***l_95 = (void*)0;
        union U0 ***l_96 = (void*)0;
        union U0 ***l_97 = &l_94;
        int *l_99 = &g_57;
        l_93 = (void*)0;

        ;
        (*l_97) = l_94;
        g_98 = &g_72;

        ;
        l_99 = &g_9;

        ;
    }

    if ((l_35 <= func_36(l_67, func_40(func_42(&g_46, g_46.f3)), l_100)))
    {
        unsigned l_106 = 0x596E72D3L;
        int l_109 = 0L;
        l_109 = ((safe_unary_minus_func_uint32_t_u(g_72.f0)) > ((safe_rshift_func_int16_t_s_u(g_46.f0, (safe_lshift_func_uint8_t_u_u((l_106 && (-1L)), (safe_rshift_func_uint8_t_u_u(l_106, g_46.f1)))))) >= (0x28L <= ((void*)0 != &g_46))));
        for (g_72.f1 = (-8); (g_72.f1 < 13); g_72.f1++)
        {
            const short l_128 = 0L;
            int *l_142 = (void*)0;
            for (g_46.f3 = 29; (g_46.f3 != 17); g_46.f3 = safe_sub_func_uint16_t_u_u(g_46.f3, 4))
            {
                unsigned l_140 = 7UL;
                if ((0L & (safe_lshift_func_int16_t_s_s(((void*)0 != &l_67), 9))))
                {
                    int **l_137 = &g_89;
                    for (l_106 = (-11); (l_106 > 41); l_106 = safe_add_func_int16_t_s_s(l_106, 1))
                    {
                        int l_120 = 0xC941E8E6L;
                        int **l_121 = &l_100;
                        l_120 = ((g_9 && (safe_sub_func_int16_t_s_s((g_72.f1 == (&g_46 != p_31)), 1L))) | g_9);
                        (*l_121) = (void*)0;

                        ;
                        (*l_121) = &g_57;

                        ;
                    }
                    l_109 = ((&g_46 != &g_46) | (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(l_106, ((!(g_72.f0 | ((safe_lshift_func_int8_t_s_s(((l_128 == (~l_109)) <= (l_106 > 0L)), 3)) && ((safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((*l_100), g_72.f1)), 9)) < 0UL), g_57)), 7)) | g_9)))) == l_106))), 0L)));
                    (*l_137) = l_100;
                    l_140 = (((safe_rshift_func_int16_t_s_s(g_72.f1, 14)) != ((((*l_100) != ((**l_137) <= 0xBFD2L)) >= l_128) ^ (*l_100))) || l_106);
                }
                else
                {
                    unsigned l_141 = 4294967295UL;
                    int *l_143 = (void*)0;
                    int **l_144 = &l_143;
                    union U0 *l_156 = &g_46;
                    if (l_141)
                        break;
                    l_142 = (void*)0;
                    (*l_144) = l_143;
                    if ((((l_140 <= ((g_72.f1 >= (+(safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((l_109 & ((*g_8) <= ((l_140 | ((0xAD06L || ((((safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((!(-7L)), ((((*l_100) >= (l_100 == (void*)0)) != g_46.f2) != 0x6A8FL))), g_9)) || 18446744073709551607UL) & 1UL) & 0x92L)) || g_9)) ^ g_57))))) != 0x4C7A4504AE8C7AEFLL), 6UL)), g_46.f4)))) > g_72.f0)) <= l_140) != 0xA7L))
                    {
                        int *l_161 = &l_109;
                        (*l_161) = (((safe_rshift_func_int8_t_s_s(0xFDL, 0)) | (g_46.f4 ^ ((+(~(((*l_100) >= l_109) ^ (((((!(((l_156 == &g_46) != (safe_lshift_func_int16_t_s_u(g_72.f1, 5))) || ((safe_add_func_int8_t_s_s(l_109, (l_106 != l_140))) && g_72.f0))) || g_72.f1) & l_106) ^ l_109) >= g_46.f2)))) || l_140))) & g_72.f0);
                    }
                    else
                    {
                        (*l_144) = l_100;

                        ;
                        return g_46.f2;
                    }
                }
            }

            for (l_67.f1 = (-29); (l_67.f1 >= 23); l_67.f1++)
            {
                int **l_164 = (void*)0;
                int **l_165 = &l_100;
                (*l_165) = &g_57;

                ;
            }

                        for (g_46.f4 = 0; (g_46.f4 == 14); g_46.f4 = safe_add_func_uint16_t_u_u(g_46.f4, 5))
            {
                const int * const l_168 = &l_109;
                const int *l_170 = &l_109;
                const int **l_169 = &l_170;
                int l_171 = 0L;
                (*l_169) = l_168;
                l_109 = l_106;
                l_171 = 0L;
            }

        }

    }
    else
    {
        unsigned char l_172 = 247UL;
        int *l_173 = &g_57;
        union U2 *l_174 = (void*)0;
        (*l_173) = l_172;
        l_174 = l_174;
    }

    for (g_26 = 0; (g_26 <= 10); g_26 = safe_add_func_uint16_t_u_u(g_26, 4))
    {
        unsigned l_181 = 2UL;
        int *l_203 = &g_9;
        int **l_229 = &l_203;
        for (g_57 = (-24); (g_57 >= (-18)); g_57 = safe_add_func_uint8_t_u_u(g_57, 6))
        {
            unsigned l_183 = 0xB1567E67L;
            if ((safe_lshift_func_uint8_t_u_s(l_181, l_182)))
            {
                int *l_184 = &l_182;
                (*l_184) = l_183;
            }
            else
            {
                union U2 **l_195 = &g_98;
                int l_201 = 0L;
                int *l_204 = &l_201;
                for (g_72.f2 = 0; (g_72.f2 >= 13); ++g_72.f2)
                {
                    int *l_198 = (void*)0;
                    int *l_202 = &l_182;
                    (*l_202) = (safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((*l_100), ((safe_mod_func_uint64_t_u_u(((safe_div_func_uint32_t_u_u(((-1L) ^ (((&g_98 != l_195) || ((((safe_add_func_int64_t_s_s(l_183, g_26)) >= (l_198 == (void*)0)) != (safe_lshift_func_uint16_t_u_s(l_181, g_46.f4))) >= 5L)) <= 0x64C4L)), (*g_8))) & 0UL), 8L)) | g_72.f1))), l_201));
                }

                l_204 = l_203;

                ;
                if ((*g_89))
                {
                    int **l_205 = &l_100;
                    int ***l_206 = &l_205;
                    union U2 ***l_209 = &l_195;
                    int l_210 = 0x85B45BF0L;
                    (*l_206) = l_205;
                    g_207 = (*g_8);
                    (*l_209) = l_208;
                    l_210 = ((*l_100) & ((g_9 || 0x5045441F61FBC89FLL) >= 4294967295UL));
                }
                else
                {
                    int **l_215 = &g_89;
                    int ***l_214 = &l_215;
                    for (g_46.f1 = 0; (g_46.f1 == (-17)); g_46.f1 = safe_sub_func_int8_t_s_s(g_46.f1, 2))
                    {
                        return (*l_204);
                    }

                    if (g_46.f2)
                        goto lbl_213;
                    if ((*g_89))
                        break;
                    (*l_214) = &l_204;

                    ;
                }
                if (l_183)
                {
                    return g_57;
                }
                else
                {
                    int l_224 = 0x2FB85166L;
                    int *l_228 = &l_224;
                    (*l_228) = ((0x5C15DE77L && (safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((g_9 & (safe_lshift_func_uint8_t_u_u((g_46.f4 < l_224), 6))) ^ ((*l_203) | (safe_add_func_int32_t_s_s((*l_100), (*l_100))))) < (*l_100)), ((+(*l_203)) & 0xC332B00AC53F8355LL))), l_224)), g_227))) | 65529UL);
                    return (*l_203);
                }
            }
        }
        if ((*l_100))
            continue;
        (*l_229) = &l_182;

        ;
    }
    (*l_208) = (*l_208);
    return g_9;
}







static char func_36(union U2 p_37, union U2 p_38, int * p_39)
{
    union U2 * const l_68 = (void*)0;
    union U2 **l_69 = (void*)0;
    union U2 *l_71 = &g_72;
    union U2 **l_70 = &l_71;
    int **l_73 = (void*)0;
    int *l_75 = (void*)0;
    int **l_74 = &l_75;
    int ** const l_78 = &l_75;
    unsigned l_79 = 0x97151158L;
    (*l_70) = l_68;

    ;
    (*l_74) = p_39;


    g_57 = (safe_sub_func_uint32_t_u_u((&l_75 != l_78), l_79));
    for (g_46.f1 = 0; (g_46.f1 > (-1)); g_46.f1 = safe_sub_func_int32_t_s_s(g_46.f1, 5))
    {
        int *l_82 = &g_9;
        (*l_74) = l_82;

        ;
    }

    return g_46.f3;
}







static union U2 func_40(const union U0 * p_41)
{
    unsigned l_58 = 0x01401CEAL;
    int *l_59 = &g_57;
    int **l_65 = &l_59;
    union U2 l_66 = {1UL};
    (*l_59) = l_58;
    (*l_59) = (+((&g_46 == &g_46) == ((*l_59) && ((((*l_59) & ((&g_57 != (void*)0) & ((*l_59) > (safe_div_func_uint64_t_u_u(0xEB303A67D625C2A3LL, (safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_s((*l_59), g_57))))))))) >= g_26) <= (*g_8)))));
    (*l_65) = (void*)0;

    ;
    return l_66;

    }







static union U0 * func_42(union U0 * p_43, long long p_44)
{
    short l_53 = 0x6A9CL;
    int *l_56 = &g_57;
    (*l_56) = (l_53 & (safe_div_func_uint32_t_u_u(((0x4373L != p_44) > l_53), g_26)));
    return &g_46;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_46.f0, "g_46.f0", print_hash_value);
    transparent_crc(g_46.f1, "g_46.f1", print_hash_value);
    transparent_crc(g_46.f2, "g_46.f2", print_hash_value);
    transparent_crc(g_46.f3, "g_46.f3", print_hash_value);
    transparent_crc(g_46.f4, "g_46.f4", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_251.f0, "g_251.f0", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_427.f0, "g_427.f0", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
