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



static int g_22 = 0x729694D2L;
static unsigned long long g_60 = 0UL;
static long long g_73 = 0x75314680EDED6215LL;
static int g_74 = (-1L);
static unsigned g_76 = 0x021B0A09L;
static int g_79 = 0x0CB0470BL;
static int *g_78 = &g_79;
static short g_89 = 1L;
static unsigned g_96 = 0x1B5CEFCBL;
static char g_120 = 0x3AL;
static int **g_123 = &g_78;
static int g_228 = 0xD920C650L;
static unsigned char g_253 = 0xCBL;
static char *g_278 = (void*)0;
static char **g_277 = &g_278;
static unsigned *g_335 = &g_76;
static unsigned g_353 = 0x9151E2CEL;
static unsigned long long g_357 = 1UL;
static unsigned long long *g_356 = &g_357;
static unsigned char g_418 = 0x8BL;
static unsigned g_429 = 0xD440E97EL;
static long long g_443 = (-1L);
static unsigned short g_466 = 65529UL;
static char g_469 = 0x5EL;
static unsigned long long **g_527 = &g_356;
static unsigned long long ***g_526 = &g_527;
static unsigned long long ****g_525 = &g_526;
static short g_553 = 0xFBA8L;
static int *g_558 = (void*)0;
static unsigned g_613 = 18446744073709551609UL;
static short *g_626 = &g_89;
static short **g_625 = &g_626;



static unsigned func_1(void);
static int * func_2(long long p_3);
static unsigned char func_5(int p_6, char p_7, char p_8, unsigned char p_9, int * p_10);
static long long func_14(short p_15, unsigned p_16, int * p_17);
static int * func_18(int * p_19, unsigned char p_20);
static int * func_23(unsigned short p_24);
static unsigned func_29(char p_30, int p_31, unsigned short p_32, char p_33);
static unsigned func_34(unsigned p_35);
static int func_36(long long p_37, long long p_38);
static char func_47(unsigned long long p_48, unsigned p_49, int p_50);
static unsigned func_1(void)
{
    unsigned l_4 = 0x6DB50520L;
    int *l_624 = (void*)0;
    short ***l_627 = &g_625;
    (*g_123) = func_2(l_4);

    ;
    ;
    ;
    (*g_123) = l_624;

    ;
    (*l_627) = g_625;
    for (g_74 = 25; (g_74 <= 8); g_74--)
    {
        return (*g_335);
    }
    return l_4;
}







static int * func_2(long long p_3)
{
    unsigned char l_13 = 0UL;
    int *l_21 = &g_22;
    long long *l_441 = &g_73;
    long long *l_442 = &g_443;
    unsigned **l_584 = &g_335;
    unsigned ***l_585 = &l_584;
    int ***l_615 = (void*)0;
    (*l_21) = ((((func_5(((safe_add_func_int64_t_s_s(((*l_442) = ((*l_21) = ((18446744073709551608UL && (!l_13)) & ((((((*l_441) = func_14(l_13, l_13, ((*g_123) = func_18(l_21, g_22)))) , (~(func_14(g_429, p_3, (*g_123)) , g_429))) <= p_3) , l_21) == l_21)))), p_3)) && 0x02L), l_13, l_13, p_3, l_21) && 255UL) > 0x5772L) <= p_3) < p_3);


    ;
    ;
    (*l_585) = l_584;
    if ((*l_21))
    {
        unsigned short l_586 = 0x9074L;
        unsigned long long *l_591 = &g_357;
        unsigned *l_593 = &g_353;
        unsigned **l_592 = &l_593;
        int *l_594 = (void*)0;
        int *l_595 = &g_79;
        (*l_595) = ((*l_21) ^ func_47(l_586, (4294967295UL || (safe_add_func_int32_t_s_s(((*l_595) = ((*g_335) | (safe_sub_func_int64_t_s_s((0x2C3F630CD0A85428LL >= ((*l_591) = (*l_21))), (((l_21 == ((*l_592) = &g_353)) & (((g_228 , 0x685EA307L) , g_89) , l_586)) && l_586))))), p_3))), (*l_21)));
    }
    else
    {
        unsigned **l_598 = (void*)0;
        unsigned char l_612 = 0x2BL;
        if (((*l_21) = p_3))
        {
            unsigned l_596 = 0x6A10DDFFL;
            int *l_597 = &g_79;
            (*l_21) = (l_596 == g_253);
            (*g_123) = l_597;

            ;
        }
        else
        {
            unsigned **l_600 = &g_335;
            unsigned ***l_599 = &l_600;
            int l_605 = 0x3FF8F4E6L;
            char *l_618 = &g_469;
            unsigned char *l_623 = &g_253;
            if (((*l_21) = ((!g_443) >= (((*l_585) = l_598) != ((*l_599) = &g_335)))))
            {
                g_22 = ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((func_47(l_605, l_605, (*l_21)) , ((safe_add_func_int64_t_s_s((g_443 = (safe_rshift_func_int8_t_s_u((-3L), 0))), (safe_mod_func_uint8_t_u_u((g_357 && (l_612 & (0xD562L <= p_3))), g_73)))) == (*l_21))), l_612)), 7)) == p_3);
                (*l_21) = g_613;
            }
            else
            {
                int *l_614 = &g_79;
                (*g_123) = func_18(func_18(l_614, g_353), ((p_3 , p_3) != g_553));

                ;
                (*g_78) = (*g_78);
                (*g_123) = func_23(g_22);

                ;
            }

            ;
            (*g_123) = (((&g_123 == l_615) && (((safe_lshift_func_uint16_t_u_s((l_612 & (((*l_618) = l_605) > 0x6CL)), ((safe_mod_func_int16_t_s_s(g_74, (+((p_3 > g_466) ^ (((*l_623) = (safe_add_func_uint8_t_u_u(l_605, (*l_21)))) >= 0x58L))))) , 0x1D9DL))) != (-4L)) < p_3)) , (void*)0);

            ;
            (*l_21) = p_3;
            (*g_123) = (*g_123);
        }

        ;
        ;
    }

    ;
    return &g_228;


}







static unsigned char func_5(int p_6, char p_7, char p_8, unsigned char p_9, int * p_10)
{
    unsigned char l_458 = 250UL;
    unsigned long long **l_493 = &g_356;
    int l_506 = 0xF20ED74EL;
    int l_507 = 0x51E5AF4CL;
    int *l_566 = &g_22;
    int ***l_574 = &g_123;
    unsigned char *l_582 = &g_418;
    int *l_583 = &l_507;
    (*g_123) = p_10;
    for (p_7 = 0; (p_7 >= 2); p_7++)
    {
        long long l_450 = 0xC1807CF6D821422BLL;
        unsigned char l_451 = 252UL;
        unsigned short *l_465 = &g_466;
        char *l_467 = &g_120;
        char *l_468 = &g_469;
        unsigned short **l_470 = &l_465;
        (*g_78) = (((*g_78) || (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(l_450, l_451)), (&g_353 != ((safe_rshift_func_int16_t_s_s(g_22, 2)) , &g_96))))) == ((*l_468) = ((*l_467) = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(l_458, ((*l_465) = (((-3L) ^ (safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((*g_335), 0x26A2760BL)), l_450)), l_451))) || (*g_335))))), 7)))));
        (*p_10) = (*p_10);
        (*p_10) = (&g_466 != ((*l_470) = l_465));
    }
    for (p_7 = 7; (p_7 < 12); p_7 = safe_add_func_uint8_t_u_u(p_7, 6))
    {
        unsigned l_475 = 0x039450F0L;
        short l_539 = 0x3251L;
        int l_540 = 0L;
        unsigned long long ***l_544 = &g_527;
        unsigned char l_570 = 0x5FL;
        int ***l_573 = &g_123;
        (*g_123) = func_18(((safe_mod_func_int32_t_s_s(0x0BD32612L, l_475)) , ((*g_123) = ((safe_lshift_func_int8_t_s_s(p_6, 4)) , func_23(p_7)))), p_8);
        (*g_123) = (*g_123);
        if ((*p_10))
        {
            unsigned long long l_482 = 0x5CA80E326D504542LL;
            unsigned l_489 = 0UL;
            long long l_492 = 0L;
            int ***l_496 = &g_123;
            unsigned long long l_501 = 0xE4600EC429C54269LL;
            for (g_74 = 26; (g_74 < 25); g_74 = safe_sub_func_uint8_t_u_u(g_74, 7))
            {
                (**g_123) = l_458;
                return g_357;
            }
            for (g_74 = (-5); (g_74 >= (-9)); g_74--)
            {
                unsigned char l_487 = 0UL;
                long long l_488 = (-1L);
                unsigned *l_490 = &g_429;
                unsigned short *l_491 = &g_466;
                long long *l_504 = (void*)0;
                long long *l_505 = &l_492;
                unsigned long long ****l_518 = (void*)0;
                (*p_10) = (!((((*g_335) & (*p_10)) <= l_482) > (safe_rshift_func_uint16_t_u_s(((*l_491) = ((((*l_490) = (!(((safe_sub_func_int16_t_s_s(((l_487 <= func_47((func_47(g_429, l_475, (((0x66600FA4L || func_47(g_228, p_9, l_487)) , 1L) > l_488)) && p_7), g_469, (**g_123))) < l_489), (-5L))) != p_6) | l_458))) || 0x63475BD0L) & (-1L))), l_492))));
                if ((l_507 = ((&g_356 != l_493) != ((((p_9 ^ 0x3BC9E0E849691861LL) , (safe_add_func_uint32_t_u_u((l_496 != ((((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_501, ((*l_491) = func_34((*g_335))))), (+(((*l_505) = (safe_sub_func_uint16_t_u_u(l_487, (-2L)))) & p_6)))) >= 0x7D8DL) == 0x51C5BF276200000DLL) , &g_123)), 0xCB1D9F15L))) ^ p_6) & l_506))))
                {
                    long long l_512 = 0xF69F560C18B8C5D5LL;
                    unsigned long long *****l_519 = (void*)0;
                    unsigned long long *****l_520 = (void*)0;
                    unsigned long long *****l_521 = &l_518;
                    unsigned long long ***l_524 = (void*)0;
                    unsigned long long ****l_523 = &l_524;
                    unsigned long long *****l_522 = &l_523;
                    if (((*g_78) = (***l_496)))
                    {
                        unsigned *l_513 = &g_353;
                        (*p_10) = (5UL < func_34(((0L <= ((safe_lshift_func_uint8_t_u_u(((l_506 < g_96) | ((safe_sub_func_uint8_t_u_u((!(((*l_513) = l_512) , g_429)), (-1L))) , 0x8EE7C522L)), 4)) | p_9)) < g_228)));
                    }
                    else
                    {
                        (***l_496) = (safe_rshift_func_uint8_t_u_s(1UL, 0));
                        (*g_123) = ((((((*p_10) , g_469) , (func_34((*g_335)) < ((safe_lshift_func_int8_t_s_u(p_6, (((+g_466) == ((l_475 , l_512) , 65527UL)) && p_8))) & g_469))) & 0xD5F13ABF147A8B92LL) <= (-1L)) , (void*)0);

                        ;
                        (*g_123) = p_10;

                        ;
                    }
                    l_507 = (**g_123);
                    if ((((*l_522) = ((*l_521) = l_518)) != g_525))
                    {
                        (***l_496) = (*g_78);
                        (**g_525) = (*g_526);
                    }
                    else
                    {
                        unsigned long long *l_528 = (void*)0;
                        unsigned long long *l_529 = &l_501;
                        int *l_541 = &g_79;
                        (*p_10) = func_47(func_47(func_47((1UL <= (((*l_529) = p_6) >= ((safe_rshift_func_int16_t_s_s(p_7, 3)) && 1L))), (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(((*l_490) = (safe_lshift_func_uint8_t_u_s((1L <= (((safe_lshift_func_uint16_t_u_s((p_9 , p_8), 3)) <= func_34((*g_335))) || 0x368AE5DE1490F189LL)), 6))))), l_488)), (*p_10)), g_73, (*p_10)), p_8, (*p_10));
                        (*l_541) = ((*p_10) = (((l_512 < ((func_47(p_8, ((((l_540 = (((g_418 = (g_443 <= (func_34(p_7) < p_8))) != func_47(l_458, func_47(p_8, (p_6 , l_539), l_458), (*p_10))) , p_8)) < l_507) , 0UL) , p_9), l_507) & p_8) != 2UL)) , g_429) , (*g_78)));
                        (*g_123) = (*g_123);
                    }

                    ;
                    (*g_526) = (*g_526);
                }
                else
                {
                    if ((**g_123))
                    {
                        (*p_10) = (safe_lshift_func_int16_t_s_s(((func_34((((void*)0 != l_544) > 0L)) , (*p_10)) , g_466), 4));
                    }
                    else
                    {
                        if ((*g_78))
                            break;
                        if ((***l_496))
                            continue;
                    }
                    return p_6;
                }
                (*g_123) = (**l_496);
            }
        }
        else
        {
            long long l_548 = 0x0F44265AA2A347D0LL;
            int l_563 = 0x3863A165L;
            if ((*p_10))
                break;
            if ((((*g_78) = 0x6BBC505EL) ^ (safe_add_func_int16_t_s_s(0x8316L, 0L))))
            {
                int l_549 = 0L;
                if ((*p_10))
                {
                    int **l_547 = (void*)0;
                    p_10 = ((*g_123) = (void*)0);

                    ;
                    ;
                    (*g_123) = &l_540;

                    ;
                    (*g_123) = &l_507;

                    ;
                }
                else
                {
                    if ((*p_10))
                        break;
                    (*g_78) = ((void*)0 != &g_123);
                    if ((*p_10))
                    {
                        (*g_78) = (**g_123);
                    }
                    else
                    {
                        unsigned long long *l_550 = &g_60;
                        unsigned long long ***l_554 = &l_493;
                        short *l_555 = (void*)0;
                        short *l_556 = (void*)0;
                        short *l_557 = &g_89;
                        if ((*g_78))
                            break;
                        (*p_10) = ((l_548 & ((*l_550) = l_549)) >= ((*l_557) = (l_507 = (((safe_mod_func_uint16_t_u_u((g_553 & g_22), g_469)) , ((p_8 = ((g_96 >= ((l_554 != (void*)0) & func_47(p_6, g_469, (**g_123)))) , p_9)) || p_8)) <= 0UL))));
                        g_558 = (*g_123);

                        ;
                    }

                    ;
                }

                ;
                ;
                ;
            }
            else
            {
                char *l_559 = (void*)0;
                char *l_560 = &g_469;
                int *l_561 = &l_506;
                int l_562 = 6L;
                l_563 = func_29(((*l_560) = func_34(l_548)), ((*l_561) = g_353), ((((void*)0 == &g_553) >= ((0xFAA622FA75F79AE8LL >= l_562) , (-1L))) == (-1L)), p_6);
                for (g_89 = 0; (g_89 >= (-27)); g_89 = safe_sub_func_uint64_t_u_u(g_89, 4))
                {
                    unsigned long long l_569 = 0x2F9A203C23D68039LL;
                    l_566 = p_10;
                    for (p_9 = 0; (p_9 != 40); p_9++)
                    {
                        (*g_123) = p_10;
                        (*g_123) = (*g_123);
                        if ((*l_566))
                            break;
                        (*g_123) = (*g_123);
                    }
                    (*l_566) = func_36(((l_569 || (l_570 , (l_563 = p_6))) < (safe_rshift_func_uint16_t_u_s(g_466, (((l_573 != l_574) < 0xFEE7C95F5A43B8E2LL) & (safe_unary_minus_func_uint32_t_u(((safe_mod_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s(func_14((safe_rshift_func_uint8_t_u_s(p_6, 4)), p_6, p_10), g_228)) || 0xA527L), p_7)) ^ p_8))))))), g_228);
                }
                (*g_78) = (*p_10);
            }

            ;
            ;
            ;
            return p_9;


        }
        if ((***l_574))
            break;
    }
    l_583 = ((*g_123) = func_23((g_357 , ((((*l_582) = ((p_7 < (p_7 >= (p_6 || ((p_6 , (func_14(g_228, (*g_335), p_10) | 0x43B5L)) & g_228)))) < g_418)) || (***l_574)) <= 0xBA0879DE3ABEA54BLL))));

    ;
    ;
    return p_6;
}







static long long func_14(short p_15, unsigned p_16, int * p_17)
{
    unsigned char l_425 = 0xF5L;
    unsigned *l_428 = &g_429;
    int l_438 = 0xD9DFAAABL;
    long long *l_439 = (void*)0;
    long long *l_440 = &g_73;
    (*g_78) = ((((safe_add_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u(l_425, p_15)) == (*g_335)), func_36(((*l_440) = (((!(g_76 & ((safe_rshift_func_int8_t_s_u((g_120 == l_425), 2)) & p_16))) & ((((*l_428) = (*g_335)) == (safe_sub_func_int32_t_s_s((((((((safe_add_func_uint16_t_u_u((l_438 = (safe_rshift_func_int8_t_s_u(func_47(((safe_sub_func_int32_t_s_s((*p_17), p_15)) && 0xE3L), g_418, (*p_17)), g_96))), 0xA41BL)) == (*p_17)) == 65529UL) != l_425) , g_253) == 0xF5L) | (*g_78)), (*p_17)))) == 18446744073709551611UL)) < 0UL)), g_96))) <= l_425) < 0x695F4632L) , (**g_123));
    (*g_78) = (*g_78);
    return l_425;
}







static int * func_18(int * p_19, unsigned char p_20)
{
    int *l_25 = &g_22;
    p_19 = ((*g_123) = func_23((l_25 == p_19)));

    ;
    (*g_123) = (*g_123);
    for (g_22 = 0; (g_22 != 26); ++g_22)
    {
        (*g_123) = p_19;
    }
    (*l_25) = (*l_25);
    return l_25;


}







static int * func_23(unsigned short p_24)
{
    int *l_26 = &g_22;
    int *l_40 = &g_22;
    int **l_39 = &l_40;
    int *l_42 = (void*)0;
    int **l_41 = &l_42;
    int l_43 = 0x23988F15L;
    unsigned *l_75 = &g_76;
    short l_97 = 0x8D59L;
    short *l_148 = &l_97;
    unsigned long long *l_232 = (void*)0;
    unsigned long long **l_231 = &l_232;
    short l_364 = 0xFEF8L;
    unsigned char l_401 = 249UL;
    int *l_404 = &g_79;
    unsigned long long *l_413 = &g_357;
    unsigned char *l_414 = &g_253;
    unsigned char *l_415 = &l_401;
    unsigned long long l_416 = 0xFB312D9BF3D29A96LL;
    unsigned char *l_417 = &g_418;
    l_26 = &g_22;
    if ((p_24 , (((safe_mod_func_uint32_t_u_u(func_29(g_22, ((((func_34(((*l_75) = (func_36((((p_24 ^ p_24) | ((p_24 , (&g_22 == l_26)) && (((l_26 != ((*l_41) = ((*l_39) = l_26))) && (*l_40)) > p_24))) | p_24), l_43) ^ p_24))) > 1L) ^ 4L) ^ l_97) || p_24), p_24, p_24), p_24)) < p_24) > p_24)))
    {
        unsigned l_126 = 0x65DC0845L;
        int l_131 = 1L;
        unsigned long long l_191 = 1UL;
        char *l_212 = &g_120;
        char l_220 = 0x8EL;
        for (g_74 = 6; (g_74 != (-8)); --g_74)
        {
            unsigned l_132 = 0x10E1A7F2L;
            int *l_133 = &g_79;
            char *l_192 = &g_120;
        }
        (*l_39) = (*g_123);
        for (g_74 = 7; (g_74 != (-1)); g_74 = safe_sub_func_int16_t_s_s(g_74, 1))
        {
            int *l_201 = &g_79;
            char *l_213 = (void*)0;
            for (g_76 = 0; (g_76 != 10); g_76 = safe_add_func_uint64_t_u_u(g_76, 4))
            {
                unsigned l_211 = 0x0B1250D9L;
                (*l_40) = (safe_sub_func_uint64_t_u_u(1UL, (g_22 >= 1L)));
                for (p_24 = 0; (p_24 == 25); p_24 = safe_add_func_int8_t_s_s(p_24, 3))
                {
                    long long l_202 = 0x9D56F053ABDBD69BLL;
                    (*l_39) = l_201;

                    ;
                    if (p_24)
                    {
                        (*g_78) = (((l_202 ^ p_24) , g_22) | ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_89, ((g_120 , (void*)0) == (((safe_rshift_func_int16_t_s_u(g_76, 7)) && ((safe_sub_func_uint32_t_u_u(l_202, p_24)) && g_120)) , (void*)0)))), l_211)) || 0x71525431BED74377LL));
                        return (*g_123);


                    }
                    else
                    {
                        unsigned *l_221 = &g_96;
                        unsigned *l_222 = (void*)0;
                        unsigned *l_223 = &l_126;
                        (*l_39) = (*g_123);

                        ;
                        (*l_26) = ((**l_39) , func_47((l_212 != l_213), ((*l_223) = ((*l_221) = (safe_lshift_func_uint8_t_u_s(((g_74 < (g_73 <= (safe_rshift_func_int16_t_s_s(0xCF5AL, 1)))) & (safe_mod_func_uint16_t_u_u((((1UL ^ ((((((0x90D558BCL || l_211) <= (-10L)) ^ g_73) , 0xC66632C6L) , p_24) != g_22)) , g_89) <= l_211), l_220))), 6)))), p_24));
                    }

                    ;
                }
            }
            return (*g_123);


        }
        (*g_123) = ((*l_39) = ((safe_rshift_func_int8_t_s_s(0xE7L, 2)) , &l_131));

        ;
        ;
    }
    else
    {
        unsigned long long ***l_233 = &l_231;
        unsigned long long **l_235 = &l_232;
        unsigned long long ***l_234 = &l_235;
        int l_236 = 0x77754722L;
        short l_237 = 0x6466L;
        int ***l_246 = &l_41;
        char l_268 = 0L;
        unsigned char *l_323 = &g_253;
        unsigned *l_329 = &g_96;
        char **l_346 = (void*)0;
        if ((((l_236 = ((((func_34(p_24) || (g_89 = ((safe_sub_func_uint32_t_u_u(0x8D2D4E03L, g_228)) , 2L))) != ((((((safe_add_func_int64_t_s_s(func_47((*l_26), func_47((((*l_233) = l_231) != ((*l_234) = (void*)0)), (*l_26), p_24), l_236), g_73)) & 0x17BB5D6DL) , (void*)0) != l_232) != p_24) > l_237)) < g_60) , 0x3880B996L)) , g_120) < 0x04L))
        {
            int *l_238 = &g_79;
            l_238 = ((*g_123) = ((*l_41) = l_238));

            ;
            ;
        }
        else
        {
            short *l_239 = &g_89;
            int l_245 = (-1L);
            int *l_250 = &l_236;
            unsigned long long ****l_271 = &l_233;
            char **l_276 = (void*)0;
            unsigned short l_320 = 0x01EFL;
            unsigned char *l_321 = &g_253;
            unsigned char **l_322 = &l_321;
            unsigned *l_324 = &g_96;
            if ((l_239 == &l_97))
            {
                unsigned l_240 = 0x0F9FA3D0L;
                unsigned char *l_252 = &g_253;
                char *l_255 = &g_120;
                char **l_254 = &l_255;
                int l_290 = 0x77515FA4L;
                char *l_301 = &l_268;
                if (l_240)
                {
                    unsigned *l_247 = &g_76;
                    for (g_22 = 0; (g_22 != 9); g_22 = safe_add_func_int64_t_s_s(g_22, 2))
                    {
                        if ((*g_78))
                            break;
                    }
                    for (g_89 = 16; (g_89 < 2); g_89 = safe_sub_func_uint64_t_u_u(g_89, 4))
                    {
                        (**l_39) = (*g_78);
                    }
                    (*l_40) = ((l_245 | (((p_24 != (l_246 != (((**g_123) & 1L) , &l_41))) , l_247) == l_75)) && g_89);
                }
                else
                {
                    int *l_251 = &l_245;
                    for (g_76 = 18; (g_76 == 24); ++g_76)
                    {
                        (*l_41) = ((&g_60 == (*l_231)) , (*l_41));
                        return (*g_123);


                    }
                }
                if ((((((*l_252) = g_60) | 0L) | (0x7452188D95DDA207LL | (((*l_254) = (p_24 , &g_120)) != (void*)0))) >= (*l_250)))
                {
                    unsigned l_287 = 18446744073709551613UL;
                    unsigned l_289 = 0x17879200L;
                    (*g_123) = (*g_123);
                    for (g_76 = (-28); (g_76 <= 21); g_76++)
                    {
                        unsigned long long *****l_272 = (void*)0;
                        unsigned long long *****l_273 = &l_271;
                        int l_288 = 0xC43DC739L;
                        (**g_123) = (safe_rshift_func_uint8_t_u_s(((*l_252) = (((*l_148) = (*l_40)) || (safe_mod_func_uint64_t_u_u((((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(p_24, 3)), (*l_250))) , (252UL < g_120)) < (*l_250)), func_36((*l_250), (!((safe_mod_func_uint64_t_u_u(func_47(p_24, (((0x19L != 1L) || p_24) || p_24), (**g_123)), l_268)) != g_253))))))), 1));
                        if (p_24)
                            break;
                        l_290 = (((safe_lshift_func_uint8_t_u_u((((*l_273) = l_271) != (void*)0), 6)) & (safe_add_func_uint16_t_u_u((l_276 == g_277), (*l_40)))) , ((0UL ^ (g_73 && (safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((func_47(((g_79 && ((l_289 = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(l_287, 3)), l_288))) , 1L)) == (*g_78)), p_24, (**g_123)) , 0xB8C8L), 1UL)), g_73)))) && 0x91L));
                        (*l_250) = ((safe_lshift_func_uint16_t_u_u(0x772EL, 5)) , 0xDDABB3DDL);
                    }
                }
                else
                {
                    long long *l_295 = &g_73;
                    (*l_250) = (safe_add_func_int64_t_s_s(((*l_295) = p_24), p_24));
                }
                (*l_250) = (safe_sub_func_int8_t_s_s(((*l_255) = l_240), func_34(((*l_75) = (safe_unary_minus_func_int16_t_s((safe_add_func_int32_t_s_s((((*l_301) = func_34(p_24)) && (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((((((**g_123) = (p_24 < ((g_60 = (safe_rshift_func_uint8_t_u_s(g_22, 7))) | func_47(((((**l_39) || (0xE12CC2AE39112D37LL >= (p_24 >= ((safe_lshift_func_uint16_t_u_s(func_47(p_24, g_79, (*g_78)), 0)) == (*l_250))))) , p_24) < p_24), g_228, p_24)))) || (-1L)) , (*l_250)) & p_24) || p_24), 2)), g_76)), 4))), l_236))))))));
            }
            else
            {
                (*g_78) = 3L;
            }
            (*g_123) = (*l_41);

            ;
            (**l_39) = ((safe_lshift_func_int8_t_s_s((*l_250), 6)) > (((safe_add_func_uint64_t_u_u((l_237 || 4294967287UL), p_24)) , p_24) ^ p_24));
        }

        ;
        ;
        ;
        if ((((((*l_323) = (safe_sub_func_int16_t_s_s((func_36(g_73, ((g_253 > g_76) || (*l_26))) , (((&g_253 != l_323) , (safe_sub_func_uint32_t_u_u(g_89, p_24))) , l_268)), 0x2A13L))) , g_228) == p_24) < g_96))
        {
            unsigned l_342 = 3UL;
            (**l_246) = (*l_41);
            if (p_24)
            {
                unsigned **l_336 = &g_335;
                (*l_26) = ((void*)0 != l_329);
                for (l_268 = 0; (l_268 < 20); l_268 = safe_add_func_uint32_t_u_u(l_268, 7))
                {
                    for (g_253 = (-28); (g_253 > 7); g_253 = safe_add_func_int8_t_s_s(g_253, 5))
                    {
                        int *l_334 = (void*)0;
                        (*l_41) = l_334;

                        ;
                    }
                    return (*g_123);


                }
                (**l_39) = (((*l_336) = g_335) == l_329);
            }
            else
            {
                for (g_60 = 0; (g_60 <= 48); g_60++)
                {
                    (*l_39) = (void*)0;

                    ;
                    for (l_268 = 0; (l_268 == 0); l_268 = safe_add_func_uint32_t_u_u(l_268, 8))
                    {
                        int *l_341 = &g_22;
                        (*l_41) = l_341;

                        ;
                        (*l_26) = l_342;
                    }
                    (*g_123) = (*g_123);
                }

                ;
            }

            ;
            (*g_123) = (*l_41);
            for (l_236 = 0; (l_236 >= 19); ++l_236)
            {
                int *l_345 = &g_79;
                (*g_123) = l_345;

                ;
                l_346 = &g_278;

                ;
            }

            ;
        }
        else
        {
            int *l_349 = (void*)0;
            int l_369 = (-4L);
            (**l_39) = (safe_lshift_func_uint16_t_u_s(p_24, 11));
            (*g_123) = l_349;

            ;
            if (((**l_39) = ((+0L) | g_79)))
            {
                unsigned *l_352 = &g_353;
                long long *l_358 = &g_73;
                int l_359 = 1L;
                long long *l_360 = (void*)0;
                int *l_361 = &g_228;
                (*l_361) = ((*l_26) = (((safe_sub_func_uint32_t_u_u(p_24, (((*l_352) = ((*l_329) = 18446744073709551615UL)) , (safe_rshift_func_int16_t_s_s(((g_228 == func_36(((*l_26) = (((*l_358) = ((g_60 = p_24) < (func_47(p_24, g_22, (((func_47(p_24, (((*l_231) != (g_356 = (void*)0)) , g_79), (*l_40)) >= 0x83L) >= p_24) != 254UL)) , (**l_39)))) & l_359)), g_79)) | p_24), p_24))))) <= l_359) <= g_228));

                ;
                for (l_359 = (-7); (l_359 <= (-21)); l_359 = safe_sub_func_int8_t_s_s(l_359, 8))
                {
                    (*l_26) = (0UL >= (*g_335));
                    if (l_364)
                        break;
                }
                for (g_353 = 0; (g_353 >= 44); g_353 = safe_add_func_uint16_t_u_u(g_353, 1))
                {
                    unsigned l_374 = 9UL;
                    int l_389 = 0x5D4976ADL;
                    for (l_43 = 0; (l_43 < 9); l_43++)
                    {
                        unsigned long long l_375 = 1UL;
                        int *l_386 = &l_236;
                        (**l_246) = (void*)0;

                        ;
                        (*l_361) = ((((1L ^ ((0x9F78L && (l_369 , (p_24 , p_24))) == (safe_rshift_func_int16_t_s_u(((*l_148) = ((p_24 , (safe_lshift_func_int16_t_s_s(p_24, 10))) > (-6L))), func_34(((((*l_26) = 0x4FF715E4L) != l_374) < l_375)))))) | 0xACL) ^ 250UL) >= p_24);

                        ;
                        if ((**l_39))
                            continue;
                        (**l_246) = (((*l_148) = func_47((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(p_24, 6)), ((safe_lshift_func_uint8_t_u_u(1UL, 5)) | (safe_mod_func_int8_t_s_s(((g_89 , &l_359) != (void*)0), (safe_sub_func_uint32_t_u_u(0x92AF77F1L, (!p_24)))))))), g_120, l_375)) , l_386);

                        ;
                    }
                }

                ;
                ;
            }
            else
            {
                for (g_89 = 0; (g_89 < (-25)); g_89--)
                {
                    (**l_246) = (**l_246);
                    (*l_41) = (*g_123);

                    ;
                }
                (*l_39) = l_404;

                ;
                (*l_26) = p_24;
            }

            ;
            ;
            ;
        }

        ;
        ;
        ;
    }



    (*l_26) = ((((((*l_404) = (((*l_413) = (0xFDD9L <= (func_47(p_24, ((1UL & (((safe_lshift_func_uint8_t_u_u(((*l_415) = ((*l_414) = (safe_add_func_uint64_t_u_u((*l_26), ((*l_413) = (safe_sub_func_uint16_t_u_u((~(p_24 , 0xCD0FL)), g_22))))))), 0)) , (~l_416)) != (((*l_417) = (l_415 != (void*)0)) , (*l_26)))) <= 0x88L), p_24) != p_24))) | p_24)) | (*l_26)) < p_24) && 0xDBL) , 0x3949A14BL);
    return &g_79;


}







static unsigned func_29(char p_30, int p_31, unsigned short p_32, char p_33)
{
    short l_98 = 5L;
    unsigned long long *l_99 = (void*)0;
    unsigned long long *l_100 = &g_60;
    unsigned *l_101 = &g_76;
    unsigned long long **l_111 = &l_100;
    (*g_78) = ((l_98 < (l_98 > (&g_73 == (func_47(((*l_100) = l_98), g_76, (*g_78)) , &g_73)))) != func_47(((((((l_98 , l_101) != (void*)0) , 5L) , 0xAFL) <= p_33) , g_22), g_22, l_98));
    for (p_30 = (-16); (p_30 < 26); p_30++)
    {
        int *l_104 = (void*)0;
        int *l_105 = &g_22;
        unsigned long long ***l_118 = &l_111;
        (*l_105) = func_34(g_96);
        if (p_30)
        {
            unsigned l_106 = 1UL;
            int *l_107 = &g_22;
            int **l_108 = &l_107;
            if (l_106)
                break;
            if (p_31)
                continue;
            (*l_108) = l_107;
        }
        else
        {
            int *l_109 = &g_79;
            int **l_110 = &l_105;
            unsigned long long ***l_112 = &l_111;
            unsigned long long ****l_117 = &l_112;
            char *l_119 = &g_120;
            (*l_110) = l_109;

            ;
            (*l_112) = l_111;
            (*g_78) = (((*l_109) = (safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((((**l_110) && (((*l_119) = (((*l_117) = &l_111) == l_118)) > (l_104 == ((*l_110) = l_101)))) | p_32) || func_36(((((**l_110) && p_33) , ((!((((safe_add_func_int8_t_s_s((p_32 <= p_30), (**l_110))) ^ 0x39ACL) < p_32) > 0x31C25D2621D558A6LL)) < g_79)) && 0UL), p_32)), g_79)), p_30))) != p_32);

            ;
            (*l_105) = ((**g_123) = (&l_104 == g_123));
        }

        ;
    }
    return l_98;
}







static unsigned func_34(unsigned p_35)
{
    int *l_77 = &g_22;
    short *l_88 = &g_89;
    int **l_93 = &l_77;
    int ***l_92 = &l_93;
    unsigned *l_94 = &g_76;
    unsigned *l_95 = &g_96;
    g_78 = l_77;

    ;
    g_79 = (((safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(g_60, (func_47((p_35 < ((void*)0 != l_77)), ((*l_77) & ((*l_88) = ((safe_rshift_func_uint16_t_u_u((p_35 && (safe_add_func_int32_t_s_s((func_47(p_35, (*l_77), (g_73 & g_76)) & p_35), (*g_78)))), p_35)) ^ (*l_77)))), (*g_78)) || (-3L)))), (*l_77))) , g_79) >= 1L);
    for (g_89 = (-18); (g_89 == 28); g_89 = safe_add_func_uint64_t_u_u(g_89, 3))
    {
        return g_79;
    }
    g_79 = func_47((*l_77), ((*l_95) = (((((*l_92) = ((*l_77) , &g_78)) == (void*)0) >= (((((l_88 == l_88) , g_89) , (((*l_94) = ((p_35 , (1L & g_22)) || p_35)) >= g_22)) , &g_22) != (void*)0)) , p_35)), p_35);

    ;
    return (*l_77);
}







static int func_36(long long p_37, long long p_38)
{
    unsigned long long l_46 = 18446744073709551609UL;
    int l_51 = (-1L);
    int l_58 = 0x9046E0AEL;
    unsigned long long *l_59 = &g_60;
    int *l_61 = &l_51;
    int *l_66 = &l_51;
    int **l_65 = &l_66;
    short l_71 = 0L;
    long long *l_72 = &g_73;
    l_51 = ((safe_lshift_func_int8_t_s_u(l_46, 2)) == (((func_47(p_37, l_51, g_22) > (((safe_sub_func_uint64_t_u_u(((*l_59) = (l_58 = ((safe_add_func_int16_t_s_s(0x2F10L, (((p_38 , &g_22) != &g_22) , 0x257EL))) | g_22))), 0x012777FC3FE767E7LL)) <= l_46) <= 0xE0AD50A0C2010065LL)) , 0xA1AEA07874D2D97BLL) < p_38));
    (*l_61) = l_51;
    g_74 = (((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(((func_47((*l_61), p_38, ((*l_61) , (((*l_65) = &g_22) == &g_22))) && ((*l_72) = (safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((func_47((**l_65), (func_47(g_22, (p_37 != g_22), g_22) >= p_37), l_71) && g_60) <= g_22), g_60)), g_60)))) > p_37))), p_37)) ^ p_37) , p_37);

    ;
    return p_37;
}







static char func_47(unsigned long long p_48, unsigned p_49, int p_50)
{
    int *l_53 = &g_22;
    int **l_52 = &l_53;
    (*l_52) = (void*)0;

    ;
    return g_22;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_553, "g_553", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
