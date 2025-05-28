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



static const unsigned long long g_20 = 0xC345FE46C2E7CCC8LL;
static int g_27 = 0xFD43DDCAL;
static int * const *g_68 = (void*)0;
static int *g_76 = &g_27;
static int **g_75 = &g_76;
static unsigned short g_77 = 0x6AAFL;
static short g_108 = 0x11C0L;
static int g_146 = (-1L);
static int g_191 = 0xC5011C82L;
static const int * const g_190 = &g_191;
static const int *g_341 = &g_27;
static int **g_399 = &g_76;
static int *g_508 = &g_27;
static short g_557 = 1L;
static unsigned char g_565 = 0x49L;



static unsigned short func_1(void);
static const unsigned short func_7(int p_8, unsigned p_9, char p_10);
static unsigned short func_11(unsigned char p_12, unsigned p_13);
static const short func_16(unsigned long long p_17);
static unsigned char func_33(int * p_34, int ** const p_35, const unsigned short p_36);
static long long func_39(short p_40, unsigned short p_41, short p_42, const int * const p_43);
static unsigned char func_44(unsigned p_45);
static char func_51(int ** p_52, unsigned char p_53, int ** p_54, int ** p_55, short p_56);
static int ** func_57(int * const p_58, unsigned long long p_59);
static unsigned short func_63(int * const * p_64, unsigned long long p_65, int * p_66, short p_67);
static unsigned short func_1(void)
{
    unsigned l_4 = 4294967292UL;
    int l_541 = 0xE35F0049L;
    int *l_542 = &g_191;
    unsigned char l_545 = 1UL;
    l_541 = (safe_mul_func_uint16_t_u_u((l_4 & (safe_add_func_uint16_t_u_u(func_7(l_4, l_4, (func_11((safe_div_func_int16_t_s_s(func_16(((safe_sub_func_int8_t_s_s(g_20, (safe_div_func_int16_t_s_s(l_4, 65531UL)))) | 65535UL)), g_20)), l_4) != l_4)), l_4))), 0xED59L));



    ;
    l_542 = &l_541;

    ;
    if (((safe_mod_func_uint32_t_u_u(g_146, l_545)) > ((safe_lshift_func_int8_t_s_s((&g_341 == &g_508), (((+(((*l_542) | 0x8CAEL) | (g_146 != (*l_542)))) < (&l_542 == &l_542)) | (*l_542)))) && 0xF73B0AD6L)))
    {
        const int l_556 = 0x801480BCL;
        (*g_508) = (*l_542);
        g_557 = func_63(&g_76, (((0x5BD0553D8E2AC410LL == g_191) && ((*l_542) == (((0x8C46L | ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((0x1FL >= (safe_mul_func_int8_t_s_s(g_191, ((*l_542) <= g_20)))), g_191)) > 0x647758CCL), 3)), 3)) != g_27)) && l_556) < g_77))) & g_77), &l_541, l_556);
    }
    else
    {
        int l_560 = 0xBC080D46L;
        (*g_508) = (safe_add_func_uint16_t_u_u((l_560 & 0xD1L), (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(g_146, (+(*l_542)))), 10))));
    }
    (*l_542) = g_565;
    return g_108;
}







static const unsigned short func_7(int p_8, unsigned p_9, char p_10)
{
    int * const *l_538 = &g_76;
    for (p_8 = 0; (p_8 > (-6)); p_8 = safe_sub_func_int64_t_s_s(p_8, 9))
    {
        int *l_537 = &g_27;
        (*g_75) = (void*)0;

        ;
        l_537 = (*g_75);

        ;
    }

    ;
    (*g_399) = &p_8;

    ;
    (*g_508) = (g_146 < (g_108 & ((func_63(l_538, g_108, (*g_75), p_8) <= ((safe_mul_func_int16_t_s_s((((func_39(p_10, g_77, g_108, (*l_538)) >= (**l_538)) | p_10) > 0x5CE6L), (-1L))) && 2UL)) && 0x7EB6L)));
    return p_10;


}







static unsigned short func_11(unsigned char p_12, unsigned p_13)
{
    int * const *l_484 = (void*)0;
    int *l_485 = &g_191;
    unsigned l_499 = 0xC9EFF2C2L;
    unsigned short l_511 = 0x45D6L;
    int *l_512 = &g_146;
    int * const l_513 = &g_191;
    if ((((func_63(l_484, g_27, l_485, p_12) > (((g_77 || func_39((*l_485), (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((*l_485), (safe_div_func_uint8_t_u_u(((*l_485) == p_13), (*l_485))))), p_13)), p_13, l_485)) & 0xA205L) == 9L)) | 0x7DF4L) > p_12))
    {
        int *l_496 = &g_27;
        for (p_12 = (-17); (p_12 == 59); p_12++)
        {
            unsigned l_507 = 7UL;
            for (g_146 = 0; (g_146 >= 10); ++g_146)
            {
                unsigned short l_502 = 1UL;
                (*g_399) = l_496;

                ;
                (*g_75) = l_496;
                if (((safe_lshift_func_int8_t_s_s(((p_12 < p_12) || l_499), p_13)) >= (((65531UL >= ((safe_mod_func_uint64_t_u_u(0UL, l_502)) | (((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(l_502, (((*l_496) | p_13) != 0x5BE49F88L))), 0xC7413135L)) & 65535UL) >= l_507))) > p_13) & p_13)))
                {
                    (*l_485) = p_12;
                }
                else
                {
                    return l_507;
                }
            }
            (*g_75) = g_508;

            ;
            (**g_399) = p_12;
        }
        (*g_508) = (safe_div_func_uint32_t_u_u(((l_511 ^ g_108) ^ func_63(func_57(l_496, (((*l_496) < (g_146 >= (*l_496))) & ((*l_496) != (func_39((func_33(l_485, &l_485, (*l_485)) != 0xC0CFL), g_108, g_146, l_496) & 0xE3C0BBB504E83A8ELL)))), g_108, l_512, g_108)), p_13));


        ;
        (*g_399) = l_496;

        ;
        (*l_496) = p_12;
    }
    else
    {
        int **l_514 = &l_512;
        (*g_75) = l_485;

        ;
        (*l_514) = l_513;

        ;
        (*l_514) = (*g_75);
    }

    ;
    ;
    ;
    (**g_399) = 3L;
    for (g_27 = (-23); (g_27 >= 20); g_27++)
    {
        unsigned l_517 = 0x0BB89AA4L;
        int l_534 = 0x0BD9BE98L;
        l_517 = p_12;
        (*l_512) = 9L;
        l_534 = ((safe_mul_func_uint8_t_u_u(g_20, (safe_mod_func_uint32_t_u_u((safe_add_func_int64_t_s_s(p_12, (safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((0x644F59E82D39D8BFLL != ((void*)0 == (*g_399))), (((g_20 > (safe_sub_func_int32_t_s_s(0L, g_20))) < (safe_add_func_int8_t_s_s(g_146, g_108))) != (*l_512)))), p_12)), g_191)))), (*l_513))))) != g_20);
    }
    (*g_399) = (*g_399);
    return (*l_512);
}







static const short func_16(unsigned long long p_17)
{
    int *l_37 = (void*)0;
    int l_80 = 0xF9F01020L;
    int *** const l_364 = (void*)0;
    for (p_17 = 0; (p_17 >= 37); p_17 = safe_add_func_int16_t_s_s(p_17, 8))
    {
        int *l_26 = &g_27;
        int **l_25 = &l_26;
        (*l_25) = (void*)0;

        ;
    }
    if (g_20)
    {
        int *l_29 = &g_27;
        int **l_28 = &l_29;
        int *l_30 = &g_27;
        (*l_28) = (void*)0;

        ;
        (*l_30) = p_17;
    }
    else
    {
        int * const l_60 = &g_27;
        int **l_78 = (void*)0;
        const int * const l_404 = &g_191;
        const int l_468 = 0xE4F117EDL;
        if ((safe_rshift_func_uint8_t_u_u(func_33(l_37, &l_37, ((safe_unary_minus_func_uint64_t_u(p_17)) > func_39(p_17, (func_44(((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u(((safe_mul_func_int16_t_s_s((func_51(func_57(l_60, (safe_mul_func_uint16_t_u_u(((((func_63(g_68, g_20, l_37, g_20) ^ p_17) > 0xFAE7A4860C01EF4FLL) <= 4294967286UL) || p_17), p_17))), g_77, l_78, &l_37, g_77) == 0xB0L), g_77)) <= 0xDF642D94L))), l_80)) <= p_17)) || 1L), p_17, g_190))), p_17)))
        {
            int l_357 = 0x8D851745L;
            int l_358 = 0x16C2306FL;
            l_357 = p_17;
            l_358 = 0x24ED17E8L;
            if ((*g_190))
            {
                const int *l_366 = &g_191;
                int * const l_375 = &g_146;
                for (g_108 = 16; (g_108 != 5); --g_108)
                {
                    int *l_361 = &l_80;
                    if ((*g_190))
                    {
                        int *l_365 = &g_146;
                        int ***l_367 = &g_75;
                        l_358 = p_17;
                        (*g_75) = l_361;

                        ;
                        (*l_367) = func_57((*g_75), (safe_add_func_int16_t_s_s((l_364 == (void*)0), (l_365 != l_366))));
                        (*g_75) = (*g_75);
                    }
                    else
                    {
                        int *l_370 = &g_191;
                        int l_380 = 3L;
                        const int **l_381 = &g_341;
                        (*l_375) = ((safe_mul_func_uint8_t_u_u((p_17 == (l_366 != l_370)), (&l_370 == &g_190))) <= (safe_mul_func_uint8_t_u_u(func_39((safe_rshift_func_int16_t_s_u(func_33(&g_146, func_57(l_375, ((safe_rshift_func_int16_t_s_s(p_17, 3)) <= (safe_add_func_int8_t_s_s(p_17, (*l_361))))), g_191), p_17)), (*l_370), l_380, l_370), g_20)));

                        ;
                        (*l_381) = l_366;

                        ;
                    }

                    ;
                }


                ;
                (*l_375) = p_17;
            }
            else
            {
                int *l_382 = &g_27;
                if (p_17)
                {
                    (*l_60) = ((*g_190) <= l_357);
                }
                else
                {
                    (*g_75) = l_382;

                    ;
                    l_382 = (*g_75);
                    return p_17;
                }
                if ((l_382 != &l_80))
                {
                    int **l_383 = (void*)0;
                    int **l_384 = &l_382;
                    (*l_384) = l_60;
                    (*g_75) = &g_146;

                    ;
                    (*g_75) = (*g_75);
                }
                else
                {
                    unsigned long long l_387 = 0x303A97FB2388B404LL;
                    int *l_388 = &g_191;
                    for (l_80 = (-19); (l_80 <= (-3)); l_80++)
                    {
                        (*l_60) = p_17;
                        (*l_60) = l_387;
                        (*g_75) = (void*)0;

                        ;
                    }
                    (*g_75) = l_388;

                    ;
                }

                ;
                (*g_75) = (*g_75);
            }


            ;
        }
        else
        {
            int l_389 = (-4L);
            int *l_418 = &g_27;
            unsigned long long l_477 = 2UL;
            (*l_60) = (~l_389);
            (*l_60) = l_389;
            for (g_191 = 4; (g_191 <= (-13)); g_191 = safe_sub_func_uint64_t_u_u(g_191, 2))
            {
                int * const l_392 = &g_146;
                int **l_393 = (void*)0;
                int **l_394 = &l_37;
                (*l_394) = l_392;

                ;
            }

            ;
            if (((safe_lshift_func_uint8_t_u_s(((safe_div_func_uint64_t_u_u(p_17, g_27)) && (0UL ^ ((&g_190 != g_399) & ((safe_div_func_int64_t_s_s((func_39(((safe_mul_func_int8_t_s_s(p_17, ((*l_60) || (0xE907A0B9L <= 1UL)))) == g_27), (*l_60), p_17, l_404) & (*l_60)), p_17)) != (-6L))))), 6)) ^ 1L))
            {
                int **l_416 = &l_37;
                for (g_27 = (-8); (g_27 != (-13)); g_27 = safe_sub_func_int8_t_s_s(g_27, 4))
                {
                    int l_411 = 0x1AB5BA0FL;
                    int *l_417 = (void*)0;
                    g_146 = func_39(func_51(&g_76, ((safe_lshift_func_uint8_t_u_s((func_39(g_108, (safe_mod_func_uint8_t_u_u(1UL, l_411)), (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(func_39((&g_76 == l_416), (g_77 <= l_389), g_191, (*l_416)), 5)), (-10L))), (*l_416)) & 0L), 5)) <= 1L), l_416, &g_76, g_20), p_17, (*l_60), l_417);

                    ;
                }
                if ((((*l_416) != l_418) >= g_108))
                {
                    int * const l_419 = &g_191;
                    int **l_420 = &l_37;
                    (*l_420) = l_419;

                    ;
                    (*g_399) = (*l_416);

                    ;
                    (*l_416) = l_418;

                    ;
                    if ((**g_399))
                    {
                        (**l_416) = (safe_lshift_func_int8_t_s_u(p_17, (g_77 || (safe_div_func_int64_t_s_s((safe_mod_func_int64_t_s_s(g_146, func_51(&g_76, g_77, l_416, l_420, (p_17 < (((&g_75 != (void*)0) ^ 0x27DD0A56L) < 0xC2BDL))))), p_17)))));

                        ;
                    }
                    else
                    {
                        int *l_427 = &g_27;
                        (*g_76) = p_17;
                        l_427 = (*l_416);
                        (**g_399) = ((((safe_mul_func_uint16_t_u_u((((&l_418 != (void*)0) > 0xB514L) ^ ((*l_404) > p_17)), (-8L))) & (safe_sub_func_uint16_t_u_u(((*l_427) & 0x92L), 0L))) == 0xFFA030214510060ALL) >= (*l_427));
                    }

                    ;
                }
                else
                {
                    int *l_432 = &g_191;
                    (*l_418) = p_17;
                    (*g_399) = l_432;

                    ;
                }

                ;
                ;
                (*l_60) = (safe_lshift_func_int16_t_s_s(((&l_37 == (void*)0) != (*l_418)), (func_51(&g_76, g_77, &g_76, l_78, (safe_add_func_int32_t_s_s((func_51(&g_76, (*l_404), l_416, &g_76, g_146) > 0x69L), (*l_418)))) || p_17)));

                ;
            }
            else
            {
                int * const *l_439 = (void*)0;
                int *l_450 = &g_191;
                long long l_451 = 1L;
                int *l_452 = &g_191;
                if ((safe_mul_func_uint16_t_u_u((func_63(l_439, (safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(g_77, (g_27 <= ((safe_lshift_func_uint16_t_u_s(((*l_418) & ((&g_76 != &l_404) < (safe_sub_func_int32_t_s_s((((func_33(l_450, &g_76, g_146) == p_17) < p_17) == l_451), 4294967295UL)))), 0)) || g_108)))) && (*l_404)), (*l_404))), l_452, g_146) <= 0x93536A53L), 65533UL)))
                {
                    for (l_80 = 0; (l_80 > (-4)); --l_80)
                    {
                        int ***l_455 = &l_78;
                        (*l_455) = &g_76;

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned char l_456 = 0x2AL;
                    int *l_467 = &l_80;
                    (*l_467) = ((((l_456 & (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((*l_452), 7)), 12))) | (safe_rshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((((((safe_lshift_func_int8_t_s_u((((p_17 != g_77) != 7L) != (p_17 != ((*g_399) == l_467))), (p_17 >= p_17))) & 7L) == p_17) == g_146) != g_191), l_468)) | 0xE38CL), g_27))) <= p_17) ^ g_191);
                    if ((*l_452))
                    {
                        (*l_452) = (*l_452);
                    }
                    else
                    {
                        (*g_399) = l_467;

                        ;
                    }

                    ;
                    (*g_399) = l_418;

                    ;
                }

                ;
                ;
                (*l_60) = (*g_190);
                for (g_146 = 0; (g_146 == (-11)); g_146 = safe_sub_func_uint64_t_u_u(g_146, 1))
                {
                    const int **l_471 = &g_341;
                    int * const *l_476 = &l_418;
                    (*l_471) = l_404;

                    ;
                    (*l_452) = (safe_mul_func_uint8_t_u_u(((-10L) != (+((&l_452 == (void*)0) <= (safe_mod_func_int8_t_s_s(((g_146 < g_146) ^ ((p_17 & (*g_190)) <= func_63(l_476, p_17, l_450, g_27))), g_20))))), g_146));
                    (**l_476) = l_477;
                }

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
    }

    ;


    ;
    if (p_17)
    {
        int *l_478 = &g_146;
        (*g_75) = l_478;

        ;
    }
    else
    {
        unsigned short l_483 = 65526UL;
        if ((*g_341))
        {
            for (g_146 = 0; (g_146 >= 7); ++g_146)
            {
                unsigned l_481 = 0x49F3B215L;
                if (l_481)
                    break;
                return g_191;


            }
            (*g_399) = &l_80;

            ;
        }
        else
        {
            int *l_482 = &g_27;
            (*g_75) = l_482;

            ;
            (*g_399) = l_482;
        }

        ;
        (*g_75) = &l_80;

        ;
        (*g_76) = (l_483 & p_17);
    }

    ;
    return p_17;


}







static unsigned char func_33(int * p_34, int ** const p_35, const unsigned short p_36)
{
    (*p_35) = &g_146;



    (*p_35) = (void*)0;


    return p_36;
}







static long long func_39(short p_40, unsigned short p_41, short p_42, const int * const p_43)
{
    unsigned l_217 = 0x3F488766L;
    int *l_218 = &g_146;
    unsigned short l_257 = 0UL;
    unsigned long long l_291 = 0x02C8CAAABBA61EA9LL;
    for (g_191 = (-20); (g_191 > 2); g_191 = safe_add_func_uint16_t_u_u(g_191, 2))
    {
        long long l_205 = 0x25993BAFFBA643C3LL;
        int **l_214 = &g_76;
        short l_265 = 9L;
        int * const l_301 = &g_27;
    }
    return g_146;
}







static unsigned char func_44(unsigned p_45)
{
    const unsigned l_81 = 0x2FC3C737L;
    int **l_83 = &g_76;
    int l_89 = 1L;
    int **l_92 = &g_76;
    const int *l_128 = &g_27;
    int *l_168 = (void*)0;
    int *l_169 = &g_27;
    (*g_75) = (void*)0;

    ;
    if (l_81)
    {
        int *l_82 = (void*)0;
        int *l_88 = (void*)0;
        (*g_75) = l_82;
        l_89 = ((g_20 && p_45) || ((l_83 != &g_76) != (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((-8L), 2)), g_20))));
        (*g_75) = l_82;
    }
    else
    {
        const long long l_95 = 0x94995FB43C6211EELL;
        int l_96 = 1L;
        int * const *l_143 = &g_76;
        const int *l_156 = &l_89;
        int *l_167 = &g_146;
        l_96 = (safe_rshift_func_uint8_t_u_u((func_51(l_92, ((safe_rshift_func_uint8_t_u_s(g_27, 7)) >= l_95), &g_76, &g_76, p_45) && (g_77 != (((g_77 & l_95) <= (**l_83)) != 0xEEBEAAF7L))), g_20));

        ;
        for (l_96 = (-27); (l_96 == (-13)); ++l_96)
        {
            int *l_99 = &g_27;
            const int **l_110 = (void*)0;
            const int ***l_109 = &l_110;
            const long long l_137 = 0xA25DA633836DABD8LL;
            (*l_83) = (void*)0;

            ;
            (*l_99) = 0L;
            (*l_99) = (*l_99);
        }

        ;
        if (((void*)0 != (*l_83)))
        {
            long long l_147 = 0xE3DBA41957E0FD48LL;
            int *l_153 = &l_89;
            l_96 = ((p_45 || ((*l_83) != (*l_92))) <= (safe_unary_minus_func_int16_t_s(p_45)));
            if (((((!(((0x1BAC1F96505D7E5BLL == (func_63(l_143, (safe_add_func_int64_t_s_s(p_45, (p_45 & g_108))), (*l_83), g_27) != g_77)) <= p_45) & 0x8B21999CB80B1A2BLL)) | g_146) == l_147) != l_147))
            {
                int *l_152 = &l_96;
                for (g_146 = 0; (g_146 != 12); ++g_146)
                {
                    unsigned short l_150 = 7UL;
                    int *l_151 = &g_27;
                    (*l_151) = (p_45 && func_63(&g_76, p_45, (*l_83), l_150));
                    l_153 = l_152;

                    ;
                    for (l_89 = 0; (l_89 > 22); ++l_89)
                    {
                        (*l_83) = (*l_92);
                        (*l_152) = 0x610154D0L;
                        if ((*l_152))
                            break;
                        if (p_45)
                            break;
                    }
                    (*l_151) = ((g_108 || g_77) != p_45);
                }

                ;
                (*l_83) = (void*)0;

                ;
                l_128 = l_156;

                ;
                for (l_89 = 0; (l_89 == (-20)); --l_89)
                {
                    int **l_159 = (void*)0;
                    int ***l_160 = &l_83;
                    (*l_92) = (void*)0;
                    (*l_160) = l_159;

                    ;
                }

                ;
            }
            else
            {
                short l_161 = 0xC79CL;
                l_161 = p_45;
                for (g_108 = (-23); (g_108 == 23); g_108 = safe_add_func_int32_t_s_s(g_108, 3))
                {
                    return g_108;
                }
            }

            ;
            ;
            ;
            (*g_75) = (*l_92);
        }
        else
        {
            unsigned short l_164 = 65535UL;
            int *l_165 = &g_27;
            int **l_166 = &l_165;
            l_96 = (l_164 && p_45);
            (*l_165) = p_45;
            (*l_166) = (*l_143);

            ;
        }

        ;
        ;
        (*l_167) = p_45;
    }

    ;
    ;
    ;
    (*l_169) = (*l_128);
    if ((safe_mod_func_uint16_t_u_u(((g_108 > (safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((*g_75) != (*l_92)), (1UL == (safe_lshift_func_uint16_t_u_u((!g_27), 11))))), 0x9EL))) < g_77), (safe_rshift_func_uint16_t_u_u(0x4D21L, 13)))))
    {
        int *l_188 = &l_89;
        for (g_146 = 0; (g_146 > (-6)); --g_146)
        {
            (*l_169) = (((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((&l_92 != (void*)0), 9)), 6)) != (safe_rshift_func_int16_t_s_u(func_63(&g_76, g_77, (*g_75), (func_63(&l_169, g_27, (*g_75), p_45) <= 0L)), 11))) || g_77);
        }
        (*g_75) = (*l_92);
        (*l_92) = l_188;

        ;
    }
    else
    {
        unsigned l_189 = 0x892B95AFL;
        (*g_75) = (*l_92);
        l_189 = (0xFBL <= g_108);
    }

    ;
    return (*l_169);


}







static char func_51(int ** p_52, unsigned char p_53, int ** p_54, int ** p_55, short p_56)
{
    int *l_79 = &g_27;
    (*p_52) = l_79;


    (*g_75) = (*p_52);

    ;
    return g_20;
}







static int ** func_57(int * const p_58, unsigned long long p_59)
{
    unsigned char l_71 = 1UL;
    int * const **l_72 = &g_68;
    int *l_74 = &g_27;
    int **l_73 = &l_74;
    (*p_58) = l_71;
    (*l_72) = &p_58;

    ;
    (*l_73) = (*g_68);


    (*l_73) = (void*)0;

    ;
    return g_75;



}







static unsigned short func_63(int * const * p_64, unsigned long long p_65, int * p_66, short p_67)
{
    int *l_69 = &g_27;
    if (p_65)
    {
        int **l_70 = &l_69;
        (*l_70) = l_69;
        (**l_70) = (**l_70);
        return g_20;
    }
    else
    {
        return g_20;
    }
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
