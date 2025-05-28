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



static int g_2 = 0L;
static int *g_77 = &g_2;
static int **g_76 = &g_77;
static int g_80 = 0x7E5F8F0BL;
static int g_210 = (-2L);
static int **g_251 = &g_77;



static unsigned long long func_1(void);
static unsigned short func_11(short p_12, unsigned char p_13);
static int func_14(unsigned short p_15, unsigned long long p_16, char p_17, unsigned p_18, char p_19);
static unsigned char func_22(char p_23, unsigned p_24, unsigned long long p_25, unsigned long long p_26);
static char func_30(long long p_31);
static unsigned short func_38(int p_39, int p_40, char p_41, short p_42);
static int func_51(unsigned char p_52, int * p_53, int * p_54);
static char func_58(long long p_59, unsigned p_60, int p_61, int ** p_62);
static unsigned short func_63(int ** p_64, int * p_65, int * p_66, unsigned long long p_67, char p_68);
static int ** func_69(unsigned p_70);
static unsigned long long func_1(void)
{
    int l_27 = 1L;
    int l_249 = 1L;
    unsigned l_404 = 0xE468E58CL;
    int *l_422 = &g_2;
    unsigned long long l_469 = 0xF0C5FE4B67363E01LL;
    unsigned short l_489 = 1UL;
    long long l_490 = (-1L);
    int *l_508 = &l_27;
    unsigned short l_522 = 0xB642L;
    unsigned short l_546 = 0x6466L;
    unsigned long long l_560 = 0xE81CB12F658D928CLL;
    long long l_571 = 0L;
    for (g_2 = 0; (g_2 == 22); ++g_2)
    {
        unsigned l_5 = 18446744073709551615UL;
        int l_6 = 0xD32FFAB8L;
        int *l_405 = (void*)0;
        int *l_406 = &g_80;
        l_6 = l_5;
    }
    for (l_249 = 10; (l_249 >= (-10)); --l_249)
    {
        int **l_421 = (void*)0;
        int l_426 = (-1L);
        unsigned l_435 = 18446744073709551609UL;
        char l_541 = 0x3BL;
        unsigned short l_542 = 0xFF02L;
        int l_554 = 0x13223A13L;
        for (l_27 = (-27); (l_27 <= 29); l_27++)
        {
            unsigned l_425 = 1UL;
            int l_445 = (-9L);
            (*l_422) = (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((!(0xB5L < ((safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s((g_80 < func_63(l_421, l_422, &l_27, (*l_422), (g_80 ^ (safe_rshift_func_int8_t_s_u(g_2, 7))))), l_425)), l_426)) & 0xC8DBL))), g_80)), g_210)), g_210));
            if (func_30((g_2 == (safe_rshift_func_uint8_t_u_s((((+((0x8259E7A3L ^ (safe_sub_func_int32_t_s_s(func_30(g_80), (!((safe_mul_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(l_425, 0x13C2L)) < l_425), ((l_425 < g_2) || g_2))) && g_2))))) ^ l_435)) || 0x37L) == (*l_422)), 5)))))
            {
                unsigned l_436 = 5UL;
                (*g_251) = (*g_76);
                l_436 = l_425;
            }
            else
            {
                long long l_441 = 0xDCF968874FEF343DLL;
                unsigned long long l_451 = 0x219117F19FA5CB6FLL;
                int *l_452 = &l_27;
                int l_470 = 0L;
                for (l_435 = 0; (l_435 <= 44); l_435 = safe_add_func_uint64_t_u_u(l_435, 4))
                {
                    long long l_442 = 0x868F2EFBFA47CDD7LL;
                    (*l_422) = (((safe_rshift_func_uint8_t_u_u(l_441, l_442)) != l_441) != g_80);
                    l_445 = ((safe_sub_func_uint32_t_u_u(((void*)0 == &g_77), 0x0309D218L)) == (*l_422));
                }
                (*l_422) = l_441;
                if ((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(l_425, (func_14(l_445, (*l_422), (*l_422), (*l_422), ((+(((*l_422) & func_30(g_210)) <= (((safe_unary_minus_func_int64_t_s(g_2)) <= 3UL) || l_441))) & 5L)) && l_451))), g_2)))
                {
                    (*g_76) = l_452;
                }
                else
                {
                    unsigned char l_456 = 1UL;
                    (*l_422) = ((safe_unary_minus_func_int64_t_s((safe_rshift_func_int8_t_s_u((((((*l_452) ^ l_456) >= (((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u(g_2, 1L)) <= 0UL) ^ g_2), 0)), l_470)) > l_456) | (*l_452))) ^ 0xB7E83EE8L) > 0L), 4)))) < (*l_452));
                }
            }
        }
        if ((safe_div_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((((*l_422) || (safe_mod_func_uint32_t_u_u(g_2, (safe_rshift_func_uint16_t_u_s((*l_422), ((void*)0 != l_421)))))) ^ ((safe_sub_func_int32_t_s_s(0x5575CA05L, (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(l_426, 7)), ((l_489 > (*l_422)) && 0x6CC10232F8369067LL))), l_490)), (*l_422))))) && 0x9ADC272FL)), g_80)), 1UL)))
        {
            unsigned char l_491 = 0x7EL;
            (*g_76) = (*g_251);
            (*l_422) = (~l_491);
            if (l_491)
                continue;
            for (l_491 = 27; (l_491 != 56); ++l_491)
            {
                int l_498 = 1L;
                (*l_422) = ((+(safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_2, g_2)), g_210))) && (((safe_mod_func_int64_t_s_s((l_498 <= (*l_422)), g_210)) && l_498) < 5UL));
            }
        }
        else
        {
            int *l_503 = &l_27;
            for (l_27 = 0; (l_27 >= 7); ++l_27)
            {
                int *l_511 = &g_2;
                int l_523 = 0xBBFA1F38L;
                (*g_76) = l_503;
                if ((*l_503))
                {
                    int *l_504 = (void*)0;
                    (*g_76) = l_504;
                }
                else
                {
                    short l_507 = 0xA368L;
                    int l_534 = 0L;
                    if (func_51(((safe_rshift_func_int16_t_s_u((*l_503), ((&g_77 != &g_77) ^ func_14(l_507, func_63(&g_77, l_508, l_503, (safe_lshift_func_uint16_t_u_s((g_80 || (*g_77)), 1)), (*l_508)), g_210, l_507, g_210)))) != g_2), l_503, l_511))
                    {
                        int l_543 = (-5L);
                        (*l_511) = (safe_sub_func_int16_t_s_s(g_2, (safe_add_func_uint32_t_u_u((*l_503), (~(safe_sub_func_uint16_t_u_u(g_2, (18446744073709551615UL < (safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_507, (-2L))), g_2))))))))));
                        (*l_422) = ((safe_lshift_func_uint8_t_u_s((((safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((*l_503) > ((0UL < (l_534 >= g_2)) != ((+9UL) > (safe_div_func_uint8_t_u_u(l_542, l_543))))) & g_210), g_80)), g_80)), (*l_511))) == 0x2D33L) >= l_534), g_2)) & 0xD4E1L);
                    }
                    else
                    {
                        (*l_422) = (safe_rshift_func_int8_t_s_s((l_546 & ((void*)0 == (*g_251))), ((safe_lshift_func_int8_t_s_u((-10L), 2)) > (safe_mul_func_uint8_t_u_u(g_80, g_80)))));
                    }
                    (*g_251) = (void*)0;
                }
                (*l_511) = (-7L);
            }
            (*g_76) = (*g_76);
            for (l_542 = (-10); (l_542 != 46); l_542++)
            {
                int ***l_553 = &g_76;
                (*l_553) = &g_77;
                if ((((~((g_80 != ((*l_553) == &g_77)) != g_210)) | ((g_80 <= func_63(&l_422, l_503, (*g_251), g_210, l_554)) & 1L)) == g_2))
                {
                    (*g_251) = (void*)0;
                }
                else
                {
                    unsigned long long l_557 = 18446744073709551610UL;
                    for (g_210 = 0; (g_210 >= 16); g_210 = safe_add_func_int16_t_s_s(g_210, 8))
                    {
                        (*g_77) = (&g_77 == (void*)0);
                        (*l_422) = (~(((**g_251) & l_557) >= (safe_div_func_uint16_t_u_u((g_2 > g_210), (***l_553)))));
                        (**l_553) = (*g_76);
                        (**l_553) = l_503;
                    }
                    return l_560;
                }
                if ((*l_508))
                    continue;
            }
        }
    }
    (*l_422) = (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s((((safe_mod_func_int32_t_s_s((g_210 | (safe_mul_func_int16_t_s_s((*l_508), ((safe_mul_func_int16_t_s_s((0x9397L < g_2), 0xE1F2L)) & (*l_508))))), (*l_508))) != g_210) || l_571), 3)) ^ 0L), 7));
    return (*l_422);
}







static unsigned short func_11(short p_12, unsigned char p_13)
{
    unsigned short l_321 = 65535UL;
    int *l_378 = &g_2;
    short l_385 = 0xFC0DL;
    int l_391 = 0xB17583D3L;
    int l_394 = 0x030F7A79L;
    int *l_403 = &g_210;
    if ((&g_251 == &g_76))
    {
        int *l_319 = (void*)0;
        (*g_76) = l_319;
    }
    else
    {
        int *l_320 = (void*)0;
        char l_342 = 0x7EL;
        unsigned l_357 = 4294967295UL;
        int ***l_360 = &g_251;
        int l_361 = 3L;
        l_320 = (void*)0;
        if (p_12)
        {
            return l_321;
        }
        else
        {
            unsigned char l_332 = 0xA3L;
            if (l_321)
            {
                int *l_322 = &g_80;
                (*l_322) = 0x96902E5CL;
            }
            else
            {
                for (p_13 = 0; (p_13 >= 3); p_13 = safe_add_func_int16_t_s_s(p_13, 5))
                {
                    int l_333 = 0xA97485B8L;
                    for (g_80 = 0; (g_80 <= 12); g_80 = safe_add_func_uint16_t_u_u(g_80, 5))
                    {
                        int *l_327 = &g_2;
                        int *l_334 = &g_210;
                        (*g_76) = l_327;
                        (*l_334) = (safe_sub_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(5UL, func_22(g_80, p_12, g_2, (l_332 == l_332)))) != (l_333 | l_321)), g_80));
                        (*g_251) = l_327;
                        return p_12;
                    }
                }
            }
            for (g_210 = (-15); (g_210 == (-25)); g_210 = safe_sub_func_uint32_t_u_u(g_210, 9))
            {
                unsigned short l_337 = 65535UL;
                if (l_337)
                    break;
                return p_12;
            }
            if ((((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(l_342, l_332)) >= p_12), l_321)) <= (safe_div_func_uint8_t_u_u(255UL, (safe_mul_func_int16_t_s_s((g_210 >= (l_332 && (safe_div_func_uint8_t_u_u((1UL <= (p_13 & 0x8067A073L)), p_13)))), g_210))))) != l_321))
            {
                int *l_349 = &g_80;
                (*l_349) = l_332;
            }
            else
            {
                return g_2;
            }
            (*g_76) = (*g_76);
        }
        if ((g_2 >= (safe_rshift_func_int16_t_s_u((&l_320 == (void*)0), 0))))
        {
            (*g_76) = (*g_76);
            (*g_251) = l_320;
        }
        else
        {
            int *l_354 = &g_2;
            int *l_366 = &l_361;
            l_361 = (*l_354);
            (*l_366) = (safe_mul_func_int16_t_s_s(p_13, ((~(*l_354)) <= (safe_div_func_uint32_t_u_u((g_80 || g_2), p_12)))));
        }
    }
    for (l_321 = 1; (l_321 < 31); l_321 = safe_add_func_int8_t_s_s(l_321, 8))
    {
        int **l_377 = &g_77;
        if (((safe_sub_func_uint32_t_u_u((((0xFA2278719F1A4690LL | g_210) || (&g_251 == &g_251)) & (safe_sub_func_int64_t_s_s((safe_div_func_uint32_t_u_u((safe_add_func_int64_t_s_s(func_63(l_377, (*l_377), l_378, p_13, ((*l_378) & g_80)), p_13)), 0x5FF90D86L)), g_210))), p_12)) & p_13))
        {
            if ((**g_76))
            {
                return (*l_378);
            }
            else
            {
                short l_382 = 0x6DB2L;
                if ((safe_add_func_uint16_t_u_u(65531UL, p_13)))
                {
                    if (p_13)
                        break;
                    l_382 = (safe_unary_minus_func_int16_t_s(0x4ABAL));
                    (*g_77) = (~(**g_76));
                }
                else
                {
                    (*g_251) = (*g_251);
                }
                for (p_13 = 0; (p_13 < 20); p_13 = safe_add_func_int16_t_s_s(p_13, 6))
                {
                    (**l_377) = (**g_76);
                    (**l_377) = 0x30DB3FD7L;
                    (*g_77) = 1L;
                }
            }
            (*g_76) = (void*)0;
        }
        else
        {
            (*g_77) = 0xE16F5779L;
            (*g_251) = (*l_377);
        }
        if ((*l_378))
            break;
        return l_385;
    }
    for (g_210 = 25; (g_210 < 9); --g_210)
    {
        int *l_390 = (void*)0;
        for (p_12 = 7; (p_12 > 22); p_12 = safe_add_func_int32_t_s_s(p_12, 2))
        {
            (*g_76) = l_390;
            l_391 = (g_210 && p_13);
            return g_2;
        }
    }
    (*l_403) = (safe_sub_func_uint8_t_u_u((l_394 == g_80), (((*l_378) && ((g_2 != ((safe_add_func_int8_t_s_s((g_210 & (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((safe_div_func_int8_t_s_s(p_12, (0xC6L || (0xED297B41L <= ((&g_77 == &l_378) != 0x1CL))))) <= (*l_378)), g_80)), g_2))), (*l_378))) && p_12)) | (*l_378))) == (-1L))));
    return p_13;
}







static int func_14(unsigned short p_15, unsigned long long p_16, char p_17, unsigned p_18, char p_19)
{
    int **l_250 = &g_77;
    int l_299 = 0x1FCE4B78L;
    if (((l_250 == g_251) & func_30(p_18)))
    {
        int **l_252 = &g_77;
        unsigned l_262 = 18446744073709551610UL;
        if ((func_63(l_252, (*l_250), (*l_252), (&g_77 == (void*)0), g_2) || 0x359EL))
        {
            int **l_255 = &g_77;
            (**l_250) = (safe_mod_func_int8_t_s_s(((((g_2 & (l_250 == l_255)) == (**l_252)) | 1L) >= (safe_rshift_func_int8_t_s_u(g_2, (safe_sub_func_uint32_t_u_u(0UL, (safe_lshift_func_int8_t_s_s((-8L), p_18))))))), l_262));
            for (p_18 = 0; (p_18 > 28); ++p_18)
            {
                int *l_265 = &g_2;
                (*g_251) = (*l_255);
                (*l_255) = l_265;
            }
        }
        else
        {
            unsigned short l_268 = 0x2288L;
            int *l_272 = &g_210;
            for (p_16 = 0; (p_16 < 57); p_16 = safe_add_func_uint32_t_u_u(p_16, 3))
            {
                if ((p_15 ^ l_268))
                {
                    int ***l_271 = &l_250;
                    if ((safe_add_func_uint64_t_u_u((l_271 != &l_252), func_63(&l_272, (*g_251), (*g_76), g_210, g_2))))
                    {
                        (**l_271) = (**l_271);
                    }
                    else
                    {
                        int *l_273 = (void*)0;
                        (*g_76) = l_273;
                        return p_15;
                    }
                    for (p_18 = 0; (p_18 < 12); p_18 = safe_add_func_int64_t_s_s(p_18, 4))
                    {
                        (*l_272) = (**g_251);
                        (*g_76) = (*g_76);
                    }
                }
                else
                {
                    (*g_76) = (*g_76);
                }
                (*l_272) = (*g_77);
                (*l_272) = (*g_77);
            }
        }
    }
    else
    {
        int *l_276 = &g_210;
        int ***l_286 = &g_251;
        (*l_276) = p_17;
        if (p_18)
        {
            int *l_279 = &g_80;
            for (g_210 = (-23); (g_210 >= 29); ++g_210)
            {
                if (p_15)
                    break;
            }
            (*l_250) = l_279;
            (**l_250) = (p_18 & ((**g_251) || g_80));
            return (**l_250);
        }
        else
        {
            unsigned char l_287 = 8UL;
            l_287 = g_210;
            return (*l_276);
        }
    }
    if (((safe_mul_func_uint8_t_u_u((&g_77 == l_250), 0xD3L)) <= (((p_17 & (p_18 | 65535UL)) <= ((void*)0 != (*l_250))) <= (((void*)0 == (*l_250)) >= 0x23A494EFL))))
    {
        unsigned char l_296 = 0x25L;
        int ***l_298 = &g_76;
        int l_300 = 0L;
        l_300 = (safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(((((g_2 >= (safe_lshift_func_int8_t_s_u(l_296, (safe_unary_minus_func_int16_t_s(func_30((**l_250))))))) != ((l_298 == &g_76) || p_15)) == l_299) && ((void*)0 == l_250)), g_2)), p_16));
        (*l_250) = (**l_298);
        return p_18;
    }
    else
    {
        int l_303 = (-1L);
        int *l_311 = &g_80;
        (*l_311) = (safe_sub_func_uint16_t_u_u((**l_250), func_22((l_303 ^ 0L), (safe_add_func_uint32_t_u_u(p_18, (l_303 & g_80))), (safe_unary_minus_func_int32_t_s((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((**g_76), (*g_77))), p_18)))), p_15)));
        (*l_311) = (**l_250);
        (*g_251) = &l_303;
    }
    if (((((((safe_lshift_func_uint16_t_u_s((l_299 != 8L), ((safe_unary_minus_func_uint8_t_u((0x2F69E9B9L && (((safe_mod_func_uint8_t_u_u((252UL || g_80), g_80)) & p_17) | (+p_18))))) != (!(p_17 || p_19))))) || 1L) == 0x14FACFC0601BAD9ELL) | 0x17787A40E005B643LL) < p_16) < 1UL))
    {
        int *l_317 = &g_210;
        (*l_250) = l_317;
    }
    else
    {
        int *l_318 = &g_2;
        (*l_250) = &l_299;
        (*l_250) = l_318;
    }
    return (*g_77);
}







static unsigned char func_22(char p_23, unsigned p_24, unsigned long long p_25, unsigned long long p_26)
{
    return g_210;
}







static char func_30(long long p_31)
{
    unsigned l_228 = 0xE19477FFL;
    int *l_233 = &g_2;
    int *l_234 = &g_80;
    (*l_234) = (safe_mod_func_int16_t_s_s((!(safe_sub_func_int16_t_s_s(func_38(l_228, ((void*)0 == &g_77), ((safe_mul_func_int8_t_s_s(p_31, ((void*)0 != &g_77))) || l_228), (safe_lshift_func_int16_t_s_u((0x6310CBDEL <= func_63(&g_77, l_233, l_233, p_31, (*l_233))), p_31))), (*l_233)))), g_2));
    if (p_31)
    {
        int *l_245 = &g_210;
        l_245 = (*g_76);
    }
    else
    {
        unsigned l_246 = 0x4344C071L;
        l_246 = p_31;
        return (*l_234);
    }
    for (l_228 = (-18); (l_228 <= 27); l_228 = safe_add_func_uint16_t_u_u(l_228, 2))
    {
        l_234 = (void*)0;
    }
    l_234 = l_233;
    return p_31;
}







static unsigned short func_38(int p_39, int p_40, char p_41, short p_42)
{
    unsigned char l_57 = 0xA0L;
    int *l_199 = &g_2;
    int *l_221 = &g_2;
    int *l_223 = &g_210;
    for (p_41 = 0; (p_41 > (-29)); --p_41)
    {
        int *l_48 = &g_2;
        int **l_47 = &l_48;
        (*l_47) = &p_39;
        p_39 = (safe_sub_func_int64_t_s_s(1L, p_39));
    }
    (*l_223) = (func_51((((safe_mul_func_int8_t_s_s(l_57, (func_58((func_63(func_69(p_41), l_199, l_199, (p_42 == ((*l_199) && ((p_39 <= (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((*l_199), p_40)), p_41))) > g_2))), p_40) == 0x8BFEL), p_39, (*l_199), &l_199) | l_57))) ^ 0xBFL) <= 0x04L), l_221, l_221) && p_40);
    (*l_223) = (7UL != (!p_39));
    return (*l_221);
}







static int func_51(unsigned char p_52, int * p_53, int * p_54)
{
    int *l_222 = (void*)0;
    (*g_76) = l_222;
    return (*p_53);
}







static char func_58(long long p_59, unsigned p_60, int p_61, int ** p_62)
{
    int *l_213 = &g_210;
    for (p_61 = 24; (p_61 != (-15)); --p_61)
    {
        for (g_80 = 26; (g_80 < 12); g_80 = safe_sub_func_int16_t_s_s(g_80, 1))
        {
            int *l_209 = &g_210;
            int l_215 = 4L;
            unsigned short l_216 = 0xEA7FL;
            (*p_62) = (void*)0;
            (*l_209) = (*g_77);
            for (g_210 = 0; (g_210 <= 23); g_210 = safe_add_func_uint32_t_u_u(g_210, 6))
            {
                int *l_214 = &g_80;
                (*p_62) = l_213;
                (*p_62) = l_214;
                l_215 = (g_2 >= (!(*l_213)));
            }
            (*l_213) = l_216;
        }
    }
    (*l_213) = func_63(&g_77, l_213, l_213, p_61, g_80);
    (*l_213) = (p_61 ^ (safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((void*)0 != p_62), ((*g_76) != l_213))), p_60)));
    return p_61;
}







static unsigned short func_63(int ** p_64, int * p_65, int * p_66, unsigned long long p_67, char p_68)
{
    int *l_204 = &g_80;
    (*g_76) = l_204;
    (*g_76) = (*g_76);
    return g_80;
}







static int ** func_69(unsigned p_70)
{
    int *l_72 = &g_2;
    int **l_71 = &l_72;
    unsigned long long l_115 = 0x51EF177DAE0A7320LL;
    int l_127 = 4L;
    int ***l_197 = (void*)0;
    int ***l_198 = &l_71;
    (*l_71) = (void*)0;
    if (g_2)
    {
        unsigned l_73 = 0x21E52503L;
        int **l_87 = &g_77;
        if (l_73)
        {
            int *l_78 = (void*)0;
            int *l_79 = &g_80;
            (*l_79) = ((safe_mod_func_int32_t_s_s(p_70, ((0L != g_2) ^ ((void*)0 != g_76)))) ^ l_73);
            (*l_79) = ((&l_78 == &g_77) < (safe_add_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(g_2, ((((safe_lshift_func_uint16_t_u_s(l_73, 4)) || ((l_87 != &l_72) > g_2)) != ((((safe_mul_func_int16_t_s_s(g_2, (safe_add_func_int16_t_s_s((**l_87), g_2)))) || (**l_87)) & 1L) > p_70)) | g_2))), 0x2FC308456A9E5FAFLL)));
            for (l_73 = 0; (l_73 <= 44); ++l_73)
            {
                int *l_94 = &g_2;
                (*l_87) = l_94;
                if ((*g_77))
                    break;
            }
        }
        else
        {
            int *l_95 = &g_80;
            (*g_76) = (*g_76);
            (*l_95) = (0x96AAE11EL || g_80);
            (*l_87) = l_95;
        }
    }
    else
    {
        int **l_102 = &l_72;
        int l_128 = 0xF3A5E7C9L;
        unsigned char l_147 = 1UL;
        if (p_70)
        {
            int *l_104 = &g_2;
            int ***l_118 = (void*)0;
            g_80 = (safe_lshift_func_uint8_t_u_u((g_2 && p_70), 4));
            if ((**g_76))
            {
                int **l_103 = (void*)0;
                for (g_80 = 0; (g_80 >= (-13)); g_80 = safe_sub_func_uint8_t_u_u(g_80, 6))
                {
                    for (p_70 = (-3); (p_70 != 39); p_70 = safe_add_func_int64_t_s_s(p_70, 9))
                    {
                        return l_103;
                    }
                    if (p_70)
                        break;
                }
                (*l_71) = l_104;
            }
            else
            {
                int *l_105 = (void*)0;
                int *l_106 = &g_80;
                int ***l_107 = &l_71;
                (*l_106) = (*g_77);
                (*l_107) = &l_105;
                for (g_80 = (-20); (g_80 > (-22)); g_80--)
                {
                    short l_112 = 0x7C8AL;
                    int l_114 = 0L;
                    l_114 = (safe_lshift_func_uint16_t_u_u(p_70, ((l_112 <= (**g_76)) & (safe_unary_minus_func_uint16_t_u(p_70)))));
                }
                (*l_106) = (l_115 && (g_80 | (l_118 != &g_76)));
            }
        }
        else
        {
            (*l_102) = (*l_102);
            return &g_77;
        }
        (*g_76) = (*g_76);
        if ((**g_76))
        {
            int *l_119 = (void*)0;
            (*l_102) = l_119;
        }
        else
        {
            long long l_144 = 0x771FCFF4A0CBBBBCLL;
            unsigned l_154 = 1UL;
            (*l_102) = (*g_76);
            if ((p_70 <= (g_80 || 0xDC621C653C2AD413LL)))
            {
                int **l_120 = (void*)0;
                if ((l_120 == (void*)0))
                {
                    unsigned short l_123 = 65527UL;
                    int *l_124 = &g_2;
                    l_123 = (safe_rshift_func_int8_t_s_u(8L, 3));
                    (*g_76) = l_124;
                }
                else
                {
                    unsigned l_129 = 18446744073709551612UL;
                    int l_134 = 1L;
                    l_127 = (safe_mod_func_uint8_t_u_u((**l_102), g_2));
                    l_128 = (*g_77);
                    (*g_76) = (*l_102);
                    l_134 = (p_70 && ((g_2 || (((**l_102) | ((l_129 <= (safe_lshift_func_uint8_t_u_s(((p_70 && p_70) ^ (p_70 | (*g_77))), (safe_add_func_uint8_t_u_u(255UL, 0x6AL))))) >= g_2)) ^ g_80)) ^ p_70));
                }
                for (g_80 = 0; (g_80 > 7); g_80++)
                {
                    int **l_139 = &g_77;
                    int *l_148 = (void*)0;
                    l_127 = (safe_div_func_uint32_t_u_u((&g_77 == l_139), (safe_add_func_int32_t_s_s(((((**l_102) != 2UL) || (l_144 <= ((**l_139) || (safe_sub_func_int64_t_s_s((p_70 > (**l_139)), (-4L)))))) && 0x67737D68548FAEAFLL), l_147))));
                }
                (*g_76) = &l_127;
            }
            else
            {
                int *l_149 = (void*)0;
                int *l_150 = &g_80;
                long long l_153 = 1L;
                int **l_157 = (void*)0;
                unsigned l_160 = 8UL;
                (*g_76) = (*l_102);
                (*l_150) = (&g_77 != (void*)0);
                l_154 = (safe_rshift_func_uint16_t_u_s(l_153, p_70));
                if ((**g_76))
                {
                    (*l_150) = p_70;
                    for (l_127 = 19; (l_127 < 10); l_127 = safe_sub_func_uint8_t_u_u(l_127, 7))
                    {
                        (*l_150) = p_70;
                    }
                    (*l_102) = (*l_102);
                    return l_157;
                }
                else
                {
                    for (l_154 = 0; (l_154 != 28); l_154 = safe_add_func_int64_t_s_s(l_154, 9))
                    {
                        l_160 = (**g_76);
                        (*l_150) = ((void*)0 != &l_157);
                    }
                }
            }
        }
        if ((**g_76))
        {
            int *l_161 = &l_128;
            (*l_102) = l_161;
        }
        else
        {
            unsigned long long l_164 = 0x2FAF5C710B0AC707LL;
            int ***l_184 = &l_102;
            int *l_196 = &g_80;
            for (l_115 = (-19); (l_115 >= 20); l_115 = safe_add_func_uint64_t_u_u(l_115, 4))
            {
                int *l_165 = &l_128;
                (*l_165) = l_164;
                (*l_102) = (*g_76);
                for (g_80 = 21; (g_80 < (-27)); g_80 = safe_sub_func_uint8_t_u_u(g_80, 6))
                {
                    (*l_165) = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(l_164, 7)), 3));
                    (*l_102) = (*l_102);
                    (*l_165) = (((2UL | 1L) <= (safe_lshift_func_int8_t_s_s(p_70, 2))) == (6L & (((l_164 <= (safe_add_func_int64_t_s_s(((safe_sub_func_int8_t_s_s((((safe_div_func_uint64_t_u_u(p_70, (safe_rshift_func_int8_t_s_s(p_70, 4)))) == ((void*)0 != (*g_76))) == 0xEEC9762EL), (-1L))) > (**l_102)), l_164))) & p_70) >= (*l_72))));
                    (*l_102) = l_165;
                }
                if ((*l_72))
                {
                    l_165 = (void*)0;
                    for (l_127 = 1; (l_127 >= (-16)); l_127 = safe_sub_func_int8_t_s_s(l_127, 1))
                    {
                        int *l_193 = &g_80;
                        (*g_76) = (*g_76);
                        (*l_193) = ((((((void*)0 == l_184) || (safe_rshift_func_int16_t_s_u(p_70, (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(65535UL, (((safe_mul_func_uint16_t_u_u((!65528UL), 8UL)) & p_70) && ((void*)0 == (*g_76))))), g_80))))) ^ g_80) >= g_2) == p_70);
                        (*l_193) = (*l_193);
                    }
                    if ((**g_76))
                        continue;
                }
                else
                {
                    (*l_165) = p_70;
                    if ((*l_165))
                        break;
                    (*l_165) = (((void*)0 == (*g_76)) ^ (p_70 || (((((**g_76) | (***l_184)) && g_2) || (g_80 & ((g_80 ^ p_70) > (***l_184)))) > 0x33L)));
                }
            }
            (*l_196) = (safe_sub_func_int8_t_s_s(g_2, 0L));
            return &g_77;
        }
    }
    (*l_198) = &g_77;
    return &g_77;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
