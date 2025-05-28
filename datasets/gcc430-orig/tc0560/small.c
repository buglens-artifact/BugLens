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



static int g_2 = 0x0A8EAC8BL;
static int g_37 = 0x3B7C39C9L;
static int g_42 = 0x86E1459FL;
static int g_52 = (-9L);
static int **g_53 = (void*)0;
static short g_55 = 0x1B43L;
static int g_153 = 0xFC011B9AL;
static const int *g_268 = &g_42;
static int *g_338 = (void*)0;
static int **g_337 = &g_338;
static int ***g_336 = &g_337;
static int g_389 = 0x6C251B4DL;
static char g_478 = 0xA5L;
static short g_480 = 2L;
static int **g_510 = (void*)0;
static char g_513 = 0xAFL;
static unsigned char g_595 = 0x48L;



static int func_1(void);
static int * func_5(unsigned char p_6, int p_7, int * p_8, const short p_9);
static unsigned char func_10(int * p_11, char p_12, char p_13, unsigned p_14);
static int * func_15(const int * const p_16, unsigned short p_17);
static char func_25(const int p_26, const int * p_27);
static unsigned short func_31(const int p_32);
static int * func_45(char p_46, int p_47);
static int * func_57(char p_58, char p_59, unsigned p_60);
static unsigned short func_63(int p_64, char p_65, int * p_66, const short p_67, unsigned short p_68);
static char func_69(int * p_70, int p_71, int *** p_72, int *** p_73, int *** const p_74);
static int func_1(void)
{
    int *l_693 = &g_37;
    int ***l_710 = &g_53;
    short l_711 = 0L;
    for (g_2 = 0; (g_2 < 25); ++g_2)
    {
        unsigned l_18 = 0x97A61EEFL;
        (*g_337) = func_5((~func_10(func_15(&g_2, l_18), l_18, g_478, (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((void*)0 == &g_2), 8)), 6L)))), l_18, &g_2, g_595);

        ;
        ;
    }

    ;
    ;
    (*g_337) = func_57(((safe_rshift_func_uint16_t_u_s((((func_10(l_693, (*l_693), ((*l_693) & (((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(func_69(func_45((((safe_mul_func_uint8_t_u_u(0x5CL, g_480)) > (safe_rshift_func_uint8_t_u_s((1L > g_389), (*l_693)))) | (*l_693)), (*l_693)), g_389, l_710, &g_53, l_710), 5UL)), g_595)), 0xC7L)) ^ g_153) ^ (*g_268))), l_711) & g_153) != g_389) ^ g_153), 12)) | (*g_268)), (*l_693), g_513);

    ;
    return (*l_693);
}







static int * func_5(unsigned char p_6, int p_7, int * p_8, const short p_9)
{
    unsigned l_614 = 0UL;
    const int *l_617 = &g_2;
    const int **l_618 = &g_268;
    int *l_661 = &g_389;
    int ***l_671 = &g_53;
    unsigned l_690 = 18446744073709551615UL;
    p_7 |= ((l_614 & l_614) <= ((safe_lshift_func_int16_t_s_s((0x2405DD29L <= (p_6 <= ((*p_8) >= (func_25(l_614, l_617) ^ g_480)))), 9)) || 0x40L));
    (*l_618) = l_617;

    ;
    for (p_7 = 0; (p_7 == 17); p_7 = safe_add_func_int32_t_s_s(p_7, 3))
    {
        int *l_621 = &g_153;
        unsigned short l_624 = 0x91FCL;
        int ***l_665 = &g_53;
        int *l_689 = &g_42;
        (*l_621) |= (&l_617 != &l_617);
    }
    return l_661;


}







static unsigned char func_10(int * p_11, char p_12, char p_13, unsigned p_14)
{
    const int * const l_606 = &g_153;
    int l_613 = 0x24339022L;
    (**g_336) = p_11;

    ;
    l_613 = ((safe_div_func_uint16_t_u_u((*l_606), (p_12 & (safe_sub_func_uint8_t_u_u(248UL, 0xFAL))))) == p_12);
    return g_389;
}







static int * func_15(const int * const p_16, unsigned short p_17)
{
    int *l_19 = &g_2;
    int **l_20 = &l_19;
    unsigned l_398 = 0x756C69EDL;
    const int *l_453 = &g_42;
    unsigned char l_531 = 1UL;
    (*l_20) = l_19;
    if ((safe_rshift_func_uint16_t_u_s((g_2 || (safe_rshift_func_uint8_t_u_s(((void*)0 != &p_16), func_25((safe_mul_func_uint16_t_u_u(((void*)0 != &p_16), (safe_unary_minus_func_uint32_t_u((4294967292UL && ((g_2 || (func_31((safe_mod_func_int8_t_s_s(((g_2 == (**l_20)) || (*l_19)), p_17))) ^ p_17)) != 0xE6F0126CL)))))), (*l_20))))), 13)))
    {
        unsigned l_269 = 0UL;
        int *l_286 = (void*)0;
        int ***l_287 = &g_53;
        short l_351 = 0x6958L;
        int ***l_371 = &g_53;
        short l_373 = 0x01FDL;
        int *l_493 = &g_42;
        int l_497 = (-3L);
        (*l_20) = func_45((l_269 >= 4294967290UL), ((safe_mod_func_int8_t_s_s((p_17 > (p_17 == p_17)), (safe_mul_func_int8_t_s_s((((*p_16) && func_31((+(safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((&g_53 == (void*)0) || ((safe_add_func_int8_t_s_s(8L, (**l_20))) | (**l_20))), g_52)), p_17)), g_2))))) == (**l_20)), p_17)))) < (**l_20)));

        ;
        if ((p_17 != 0xCA6DL))
        {
            int *l_296 = &g_42;
            int *** const l_372 = (void*)0;
            int ***l_386 = &g_337;
            if (((safe_add_func_uint8_t_u_u(p_17, ((safe_mod_func_int32_t_s_s(((void*)0 == (*l_20)), ((*l_19) ^ 0UL))) > func_63((safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u(p_17, p_17)), g_2)), g_37, l_296, p_17, p_17)))) && 1UL))
            {
                int *l_299 = &g_52;
                for (g_55 = 0; (g_55 == (-26)); g_55--)
                {
                    g_268 = l_296;

                    ;
                }
                return l_299;


            }
            else
            {
                const int *l_300 = &g_52;
                int l_316 = 6L;
                int * const *l_333 = &l_19;
                int * const * const *l_332 = &l_333;
                unsigned short l_350 = 65528UL;
                short l_374 = (-10L);
                int ***l_387 = &l_20;
                if ((*l_19))
                {
                    (*l_296) = (l_300 != l_296);
                    (*l_20) = (void*)0;

                    ;
                    (*l_20) = l_296;

                    ;
                }
                else
                {
                    char l_329 = 1L;
                    int ***l_334 = &g_53;
                    unsigned short l_341 = 0x01A3L;
                    if ((safe_div_func_int8_t_s_s(g_52, 1L)))
                    {
                        unsigned l_303 = 0x53F40911L;
                        g_268 = func_45(l_303, (*p_16));

                        ;
                        (*l_19) = (safe_mul_func_uint16_t_u_u(p_17, ((safe_div_func_int8_t_s_s(func_31(p_17), (safe_add_func_int16_t_s_s((0xA9L & (0x2C39L > (&g_53 == &g_53))), p_17)))) && 0x77L)));
                        l_316 |= (safe_add_func_int32_t_s_s((p_17 != ((safe_lshift_func_int8_t_s_s((&g_268 != (void*)0), 6)) && (*l_296))), 1UL));
                    }
                    else
                    {
                        int *** const l_335 = &l_20;
                        (*l_296) = (safe_mul_func_uint16_t_u_u((g_52 < ((safe_lshift_func_int8_t_s_s(g_153, (*l_296))) ^ p_17)), (p_17 && (g_42 || g_52))));
                        (**l_333) |= (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((-7L), (safe_rshift_func_int8_t_s_s(p_17, (g_42 < (*l_296)))))), l_329)), (func_69(&g_2, func_69(&g_52, ((safe_lshift_func_uint16_t_u_u((l_287 != l_332), 1)) != l_329), l_334, l_287, l_335), &l_20, g_336, &l_20) || 0xFC9DC177L)));

                        ;
                        (**g_336) = func_57((safe_div_func_uint32_t_u_u(func_31(func_31(g_2)), (((0x520FL == l_341) >= ((&g_337 == (void*)0) > (g_2 == ((safe_rshift_func_uint16_t_u_u(p_17, 5)) | g_153)))) | p_17))), p_17, g_2);

                        ;
                    }

                    ;

                }

                ;
                ;

                (***l_332) = (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((***l_332), g_37)), (*l_296)));
                l_316 |= (safe_add_func_uint32_t_u_u(((-1L) <= (g_2 && (*l_19))), (safe_rshift_func_uint16_t_u_s((g_42 > 0x773BB535L), 15))));
                for (l_350 = (-25); (l_350 < 5); l_350 = safe_add_func_uint8_t_u_u(l_350, 8))
                {
                    int *l_370 = &g_2;
                    int *l_388 = &g_389;
                    (**l_333) |= (safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((*g_337) == (void*)0), ((((safe_add_func_int16_t_s_s((func_69(l_370, g_2, l_371, &g_53, l_372) < 0xE1ADL), p_17)) < l_373) <= g_55) || l_374))), g_55));
                    (*l_388) ^= (((safe_mul_func_int8_t_s_s(p_17, func_63((***l_332), ((safe_div_func_int16_t_s_s(g_153, 0x62E3L)) < 5L), &l_316, (safe_mul_func_int8_t_s_s((p_17 >= (safe_lshift_func_uint8_t_u_u(func_69(func_45((safe_unary_minus_func_uint32_t_u((safe_add_func_uint16_t_u_u(p_17, (*l_370))))), (*l_300)), p_17, l_387, l_371, &g_53), (***l_332)))), (-10L))), p_17))) & (*p_16)) && (*p_16));

                    ;
                    (*l_296) = (safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(p_17, p_17)), p_17));
                }
            }

            ;
            ;

            for (l_351 = 0; (l_351 != (-16)); --l_351)
            {
                (**g_336) = (*g_337);
                (*l_19) = func_31(p_17);
            }
        }
        else
        {
            const int *l_401 = &g_2;
            int * const l_429 = &g_153;
            unsigned l_431 = 0x66F2D236L;
            int **l_432 = &g_338;
            const int **l_461 = (void*)0;
            const int **l_462 = &g_268;
            if ((*p_16))
            {
                const int **l_402 = &g_268;
                const int **l_403 = &g_268;
                (*l_402) = l_401;

                ;
                (*l_403) = p_16;


            }
            else
            {
                unsigned short l_410 = 1UL;
                int * const l_436 = &g_42;
                int *l_460 = (void*)0;
                (*l_19) = 0xEBA5CBCEL;
                for (g_52 = 0; (g_52 == 14); g_52 = safe_add_func_int16_t_s_s(g_52, 7))
                {
                    unsigned l_430 = 1UL;
                }
                l_453 = p_16;


                for (l_431 = 9; (l_431 > 46); l_431++)
                {
                    const int **l_456 = &l_401;
                    char l_459 = (-1L);
                    (*l_456) = p_16;


                    (**l_20) = (*l_453);
                    for (g_153 = 0; (g_153 >= (-1)); g_153 = safe_sub_func_int32_t_s_s(g_153, 2))
                    {
                        (*l_436) &= ((*l_401) | (l_456 == (void*)0));
                        if (l_459)
                            break;
                        if ((*l_436))
                            break;
                    }
                    return l_460;


                }
            }



            (*l_462) = p_16;


            (**l_20) |= (g_42 >= 0x0EF3L);
            if ((*p_16))
            {
                unsigned l_467 = 0x313F5307L;
                int *** const l_469 = &g_53;
                if ((*p_16))
                {
                    int ***l_468 = &l_20;
                    (*l_19) &= (safe_sub_func_uint32_t_u_u(0x5E286919L, 0x73322871L));
                    (*l_19) ^= ((safe_rshift_func_uint16_t_u_u(65535UL, 0)) < 0x8F45L);
                    (*l_19) |= func_69((*l_432), l_467, l_468, &g_337, l_469);

                    ;
                }
                else
                {
                    int l_474 = 1L;
                    int l_481 = (-10L);
                    (*l_19) ^= (*p_16);
                    for (l_467 = (-17); (l_467 != 10); ++l_467)
                    {
                        char l_477 = 3L;
                        unsigned char l_479 = 0x24L;
                        (**l_20) = (safe_mul_func_uint8_t_u_u(((*p_16) & p_17), 0x84L));
                        if (l_474)
                            continue;
                        l_481 ^= ((((g_55 >= (p_16 != p_16)) ^ (((~(g_37 || p_17)) | 0x7AE0L) & p_17)) && l_477) ^ l_474);
                    }
                    (*l_19) ^= (safe_rshift_func_int16_t_s_u((-1L), 8));
                    return (*l_432);


                }

                ;
            }
            else
            {
                char l_492 = 1L;
                if ((((*g_268) <= g_55) > (safe_div_func_int16_t_s_s(func_63((0x24BCL & (safe_add_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((*p_16), (*l_401))) >= (**l_462)), l_492))), p_17, l_493, p_17, g_153), g_480))))
                {
                    (*l_19) &= l_492;
                    (*l_19) |= 0L;
                    (*l_432) = (void*)0;

                    ;
                    (*l_429) = (*p_16);
                }
                else
                {
                    (*l_429) = (safe_sub_func_int16_t_s_s(0L, (safe_unary_minus_func_uint32_t_u(p_17))));
                    l_497 |= ((*g_336) == (void*)0);
                    (*l_19) = (p_16 == (*l_20));
                }
                (**g_336) = func_45(p_17, (*p_16));

                ;
                (*l_429) |= (!(*p_16));
                if ((p_17 & g_153))
                {
                    const int **l_498 = (void*)0;
                    const int **l_499 = &l_401;
                    (*l_19) = (l_498 != (void*)0);
                    (*l_499) = p_16;


                }
                else
                {
                    int ***l_507 = (void*)0;
                    for (g_42 = (-23); (g_42 < (-24)); g_42--)
                    {
                        unsigned l_502 = 18446744073709551607UL;
                        if (l_502)
                            break;
                        if ((*p_16))
                            break;
                    }
                    (***g_336) = (safe_sub_func_int8_t_s_s(((g_42 > func_69((*l_432), (safe_rshift_func_uint8_t_u_s(g_2, p_17)), &l_432, l_507, &g_337)) >= g_37), g_55));

                    ;
                    (***g_336) = 0L;
                }


                ;
            }

            ;

            ;
        }

        ;
        ;


        (*l_19) = ((safe_lshift_func_int8_t_s_u(p_17, 0)) == 4UL);
    }
    else
    {
        int ***l_516 = &l_20;
        int *l_521 = (void*)0;
        int *l_522 = &g_389;
        g_513 &= ((void*)0 != (*l_20));
        (*l_522) &= (func_31((safe_rshift_func_uint8_t_u_u(((((void*)0 != l_516) && 0x90L) < p_17), 5))) < (safe_add_func_uint32_t_u_u((***l_516), ((*l_19) | (safe_mul_func_uint16_t_u_u(65535UL, g_478))))));
    }

    ;
    ;


    for (g_55 = 0; (g_55 < (-12)); --g_55)
    {
        char l_527 = 0xEDL;
        unsigned short l_543 = 65535UL;
        int *l_545 = &g_52;
        int ***l_546 = &l_20;
        for (g_513 = 0; (g_513 < 14); ++g_513)
        {
            int *l_532 = (void*)0;
            const int **l_551 = &g_268;
            const int ***l_550 = &l_551;
            int l_583 = (-1L);
            int ***l_594 = &g_337;
            l_453 = p_16;


            if (l_527)
            {
                int l_530 = 0xB4A8D524L;
                char l_544 = (-3L);
                l_530 = (+((func_69(func_45(p_17, (*p_16)), (safe_mul_func_uint16_t_u_u(l_527, l_527)), &g_53, &g_53, &g_510) != 0x87L) && (*p_16)));
                l_545 = func_57(g_37, l_543, g_52);

                ;
            }
            else
            {
                int l_547 = 0x8971EB0DL;
                int *** const l_569 = &l_20;
                unsigned short l_578 = 0xB7A5L;
                int ***l_580 = &g_53;
                (*l_545) |= ((void*)0 != &p_16);
                (*l_545) |= (g_389 != (p_17 <= ((l_546 != &g_53) >= (&p_16 == &l_453))));
                if ((l_547 && ((p_17 < 0xA476L) < 0x2FL)))
                {
                    unsigned l_559 = 0UL;
                    int ***l_568 = &g_53;
                    if ((p_17 < 0x3C98L))
                    {
                        int *l_556 = &g_389;
                        int ***l_566 = (void*)0;
                        short l_567 = 1L;
                        (*l_556) = (func_69(l_556, (((((((safe_mod_func_int8_t_s_s(l_559, g_513)) & 0xF22C3D76L) > p_17) && l_547) & (-1L)) > 0UL) == 0x13L), l_546, l_568, l_569) >= 8UL);

                        ;
                        (*l_545) = (g_513 & ((void*)0 == (*g_337)));
                        (*l_545) |= (*p_16);
                        (*l_556) ^= (*p_16);
                    }
                    else
                    {
                        int *l_579 = (void*)0;
                        int ***l_581 = &g_337;
                        int *l_582 = &g_153;
                        (*l_582) ^= (g_42 > ((safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((((*p_16) >= p_17) && (!l_578)), 0x90D7A817L)), (func_69(l_579, p_17, l_580, l_581, l_546) > g_478))) != 0UL));
                        g_389 ^= 0x1B386BFEL;
                    }
                    l_583 = (*l_19);
                    (*g_337) = func_57(g_55, g_37, ((l_546 != l_568) || (safe_rshift_func_int16_t_s_s(p_17, 12))));

                    ;
                    if ((*p_16))
                        continue;
                }
                else
                {
                    int l_586 = 4L;
                    short l_591 = 0x98D0L;
                    (*l_545) |= (-6L);
                    if ((p_17 ^ ((+((-5L) & (*l_545))) && l_586)))
                    {
                        if ((*p_16))
                            break;
                        (*l_545) = ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(1UL, 4)), 6)) != (func_63(l_591, (safe_lshift_func_int8_t_s_u(g_595, func_69((**l_594), p_17, &g_510, l_594, l_546))), l_545, p_17, p_17) != 0x4EL));
                    }
                    else
                    {
                        (*l_545) |= (safe_mod_func_int16_t_s_s(g_480, (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_478, ((void*)0 == l_546))), (*l_453)))));
                        if ((*l_545))
                            continue;
                    }
                    (*l_545) = ((**g_336) == (*g_337));
                }
            }

            ;
            return (**g_336);


        }
    }
    (**g_336) = (void*)0;

    ;
    return (*g_337);


}







static char func_25(const int p_26, const int * p_27)
{
    int *l_157 = &g_37;
    int ***l_168 = &g_53;
    if (((func_69(l_157, ((safe_div_func_int32_t_s_s((*l_157), (safe_mul_func_int8_t_s_s(g_37, ((*l_157) != (safe_div_func_int32_t_s_s((*p_27), ((*l_157) | ((safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_uint32_t_u(0x44F39351L)))) && ((*l_157) == g_153)))))))))) | (*l_157)), l_168, l_168, &g_53) || g_55) & (*l_157)))
    {
        int l_175 = 0xB83C02C4L;
        int *l_190 = &g_37;
        int l_205 = 0x25AE72B2L;
        int ***l_266 = &g_53;
        g_52 &= (*p_27);
        for (g_153 = 0; (g_153 < 29); g_153 = safe_add_func_uint8_t_u_u(g_153, 7))
        {
            return g_52;
        }
        if (((safe_div_func_uint32_t_u_u(((((safe_add_func_uint16_t_u_u(p_26, ((+l_175) != 0x721CL))) | (((((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((((&p_26 != (void*)0) | (safe_rshift_func_int16_t_s_s((p_26 && (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((*l_157), 9)), 6))), 6))) > ((&p_27 != &p_27) & l_175)), p_26)), g_52)), g_153)) & 0x93E18778L) != 0x7587FDEBL) | (*l_157)) == 1L)) > 0UL) & 0xB44D923BL), p_26)) < p_26))
        {
            int *l_191 = &g_153;
            (*l_157) ^= (*l_191);
        }
        else
        {
            int * const *l_204 = &l_157;
            int l_226 = 0x0D1286CDL;
            int *l_232 = &g_52;
            int *** const l_267 = (void*)0;
            l_205 |= ((safe_lshift_func_uint8_t_u_u((4294967295UL != (((~func_31((*l_157))) ^ p_26) || 0x28B0A1B9L)), (safe_add_func_uint8_t_u_u((g_153 >= (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_2, (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(p_26, 4)), 6)))), ((void*)0 != l_204)))), g_153)))) && 0xFE98CDC9L);
            if ((safe_lshift_func_uint8_t_u_u((((&p_27 == &l_190) && ((safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((l_168 != (void*)0) <= ((safe_add_func_int16_t_s_s(p_26, 0xBA2DL)) > ((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(((void*)0 == &l_204), (~(safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((&p_26 == &p_26), l_226)), p_26))))), (*l_157))) >= (**l_204)))), g_55)), (*l_157))) && 2L), p_26)) == (**l_204))) || p_26), p_26)))
            {
                const int *l_228 = (void*)0;
                const int **l_227 = &l_228;
                int l_229 = (-1L);
                (*l_227) = &p_26;

                ;
                l_229 = (*p_27);
            }
            else
            {
                int **l_230 = (void*)0;
                int **l_231 = &l_190;
                (*l_231) = (*l_204);
                if (func_69(l_232, (safe_add_func_uint8_t_u_u(((g_53 == (void*)0) <= (-9L)), 8UL)), &g_53, l_168, l_168))
                {
                    const int *l_236 = &g_2;
                    const int **l_235 = &l_236;
                    (*l_235) = &p_26;

                    ;
                    (*l_231) = func_57(g_55, g_2, (safe_div_func_int8_t_s_s((&l_204 != (void*)0), (*l_232))));

                    ;
                    (*l_232) &= (&l_232 == g_53);
                }
                else
                {
                    int ***l_245 = &l_230;
                    (**l_204) ^= (*p_27);
                    for (l_226 = 0; (l_226 > (-5)); l_226 = safe_sub_func_uint32_t_u_u(l_226, 1))
                    {
                        char l_241 = 0L;
                        int l_242 = 0xEB369934L;
                        l_242 |= l_241;
                    }
                    (*l_157) = (**l_231);
                    (**l_204) = ((safe_rshift_func_int16_t_s_u(g_52, ((p_26 == ((l_245 == &g_53) || p_26)) == (safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((p_26 | 1L), (safe_mul_func_uint8_t_u_u(0UL, ((((safe_rshift_func_uint16_t_u_s((255UL != p_26), 15)) <= (**l_204)) == 1UL) > g_2))))), 0x016BL))))) & (**l_231));
                }

                ;
                for (g_52 = 0; (g_52 < 7); g_52 = safe_add_func_uint16_t_u_u(g_52, 6))
                {
                    return g_42;
                }
            }

            ;
            p_27 = func_57((safe_lshift_func_int8_t_s_s((((~(safe_add_func_uint16_t_u_u(g_52, p_26))) || (((0x4FL < func_69(l_232, ((0L ^ (p_26 ^ (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(g_52, ((&p_26 == &p_26) & p_26))), 8)), g_52)))) && (-1L)), l_266, l_266, l_267)) >= p_26) | g_55)) | 0x3F9BL), g_2)), p_26, g_153);

            ;
        }

        ;
        ;
    }
    else
    {
        (*l_157) = (*p_27);
        g_268 = &p_26;

        ;
    }

    ;

    return p_26;


}







static unsigned short func_31(const int p_32)
{
    int *l_35 = (void*)0;
    int **l_36 = &l_35;
    int **l_155 = &l_35;
    unsigned short l_156 = 0x1B9FL;
    (*l_36) = l_35;
    for (g_37 = 0; (g_37 > (-17)); g_37--)
    {
        int **l_40 = &l_35;
        int ***l_41 = &l_40;
        int *l_56 = &g_42;
        (*l_41) = l_40;
        for (g_42 = (-5); (g_42 <= (-9)); g_42--)
        {
            int l_54 = 0x096A9CBDL;
            (**l_41) = func_45(p_32, g_2);

            ;
            l_54 = (g_53 != (*l_41));
            g_55 &= (*l_35);
            if (g_2)
                break;
        }
        (*l_56) = p_32;
        if (p_32)
            break;
    }

    ;
    (*l_155) = func_57((safe_rshift_func_uint16_t_u_s(func_63(((g_37 > 0xD3L) != g_2), (func_69((*l_36), g_2, &l_36, &l_36, &l_36) | (-1L)), &g_42, g_55, p_32), g_2)), g_2, g_2);

    ;
    ;
    return l_156;
}







static int * func_45(char p_46, int p_47)
{
    int *l_49 = (void*)0;
    int * const *l_48 = &l_49;
    int *l_50 = (void*)0;
    int *l_51 = &g_52;
    (*l_51) = (l_48 == &l_49);
    return &g_37;


}







static int * func_57(char p_58, char p_59, unsigned p_60)
{
    int *l_93 = &g_42;
    int **l_94 = &l_93;
    unsigned l_107 = 0x1B0F8279L;
    const unsigned short l_112 = 0UL;
    int *l_113 = (void*)0;
    int *l_114 = &g_52;
    int *l_154 = &g_153;
    (*l_94) = l_93;
    (*l_114) &= ((p_58 < ((safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s((g_2 != (*l_93)), g_42)), g_42)), (safe_lshift_func_uint16_t_u_s((!(safe_add_func_int16_t_s_s((!(l_107 >= (1L == (safe_lshift_func_uint16_t_u_s(p_58, (safe_div_func_uint8_t_u_u((((0x4AL > (**l_94)) | l_112) != (*l_93)), (*l_93)))))))), g_37))), 15)))), 3L)) != (*l_93))) && (*l_93));
    if (((*l_114) <= (**l_94)))
    {
        const unsigned short l_118 = 0xAEB4L;
        int ***l_122 = &l_94;
        if ((safe_div_func_uint8_t_u_u((+((*l_94) != (void*)0)), (*l_93))))
        {
            char l_117 = 1L;
            int ***l_121 = &l_94;
            (*l_93) = l_117;
            (**l_121) = func_45(((g_55 && l_118) == (p_59 < ((safe_mod_func_int16_t_s_s(func_63((((l_121 != l_122) >= g_42) && (((0x6C9CL != (***l_122)) < p_59) | g_52)), p_59, (*l_94), p_60, p_59), 1L)) | (-1L)))), p_60);

            ;
        }
        else
        {
            short l_125 = (-1L);
            int *l_129 = (void*)0;
            (*l_114) = (safe_rshift_func_uint8_t_u_u(0x3CL, ((g_55 != p_59) && p_58)));
            for (l_107 = 0; (l_107 != 15); l_107 = safe_add_func_uint32_t_u_u(l_107, 7))
            {
                unsigned l_128 = 4294967286UL;
                (*l_94) = (**l_122);
                if (l_128)
                    break;
            }
            return l_129;


        }

        ;
        (*l_114) ^= 0xFB9873F2L;
    }
    else
    {
        short l_130 = 0x9532L;
        int *l_136 = &g_2;
        int ***l_151 = &l_94;
        (*l_93) = l_130;
        for (l_107 = 29; (l_107 != 22); --l_107)
        {
            int *l_135 = (void*)0;
            int *l_152 = &g_153;
        }
        return &g_37;


    }

    ;
    (**l_94) = 0x28B08085L;
    return l_154;


}







static unsigned short func_63(int p_64, char p_65, int * p_66, const short p_67, unsigned short p_68)
{
    unsigned short l_85 = 0xA48CL;
    unsigned l_88 = 0xEB379DE5L;
    (*p_66) = (safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((+(0x9EA21F9FL == (safe_sub_func_uint8_t_u_u(255UL, (p_65 | (safe_unary_minus_func_int8_t_s(((p_65 <= (!(l_85 | ((safe_rshift_func_uint16_t_u_s(8UL, 7)) && ((l_85 >= l_88) && ((l_88 ^ p_68) | p_68)))))) == 65535UL)))))))), g_2)) > l_88) == (*p_66)), l_85)), 0UL));
    for (p_68 = 0; (p_68 <= 7); p_68 = safe_add_func_int32_t_s_s(p_68, 5))
    {
        return l_85;
    }
    (*p_66) |= ((safe_lshift_func_uint16_t_u_s(l_85, 5)) >= ((g_37 != (-10L)) != (+l_85)));
    return p_65;
}







static char func_69(int * p_70, int p_71, int *** p_72, int *** p_73, int *** const p_74)
{
    int *l_75 = &g_52;
    (*p_72) = g_53;


    (*l_75) = (g_53 != g_53);
    return (*l_75);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
