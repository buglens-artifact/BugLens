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
   const unsigned short f0;
};


static union U0 g_10 = {65527UL};
static char g_45 = (-1L);
static int g_52 = (-10L);
static union U0 *g_146 = &g_10;
static union U0 ** const g_145[3][6] = {{&g_146, &g_146, &g_146, &g_146, &g_146, &g_146}, {&g_146, &g_146, &g_146, &g_146, &g_146, &g_146}, {&g_146, &g_146, &g_146, &g_146, &g_146, &g_146}};
static union U0 ** const *g_144 = &g_145[0][1];
static char g_190 = 0L;
static int g_206 = 0xBA7749F3L;
static int *g_205 = &g_206;
static unsigned g_288 = 0xED27F248L;
static union U0 g_309 = {0xBEDAL};
static unsigned g_438 = 1UL;
static int **g_524 = &g_205;
static unsigned char g_529 = 0xE1L;
static int *g_535 = &g_52;
static const int *g_564 = &g_206;



static int func_1(void);
static short func_7(union U0 p_8, union U0 p_9);
static union U0 func_11(int p_12, int p_13, int p_14, int p_15, union U0 p_16);
static unsigned char func_21(union U0 p_22, short p_23);
static union U0 func_24(unsigned char p_25, int p_26, unsigned p_27, unsigned p_28, int p_29);
static char func_32(int p_33, union U0 p_34, const unsigned char p_35);
static unsigned short func_38(const char p_39, unsigned p_40, short p_41);
static int * func_49(int * p_50);
static const union U0 * const func_53(union U0 * p_54);
static int func_55(union U0 * p_56, int * p_57);
static int func_1(void)
{
    int l_4 = (-1L);
    union U0 l_46 = {0xB2F6L};
    int l_391[10] = {1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L};
    int *l_601 = (void*)0;
    int *l_608 = &g_206;
    int i;
    l_4 = ((+((safe_rshift_func_int16_t_s_s(l_4, 14)) >= (l_4 ^ (safe_div_func_int16_t_s_s(func_7(g_10, func_11(g_10.f0, ((safe_mod_func_uint32_t_u_u((4294967295UL == (safe_lshift_func_int8_t_s_s((func_21(func_24(((safe_sub_func_uint8_t_u_u(g_10.f0, func_32(((safe_lshift_func_uint16_t_u_s(func_38(g_10.f0, g_10.f0, g_10.f0), l_4)) != 0UL), l_46, l_4))) < g_10.f0), g_10.f0, l_4, l_4, g_10.f0), g_309.f0) && l_391[0]), 3))), g_309.f0)) || l_46.f0), l_46.f0, l_391[4], l_46)), l_391[2]))))) >= l_391[5]);
    for (g_438 = 16; (g_438 == 35); g_438 = safe_add_func_uint16_t_u_u(g_438, 1))
    {
        char l_606 = 0x72L;
        int *l_607[2][6] = {{&g_52, &g_52, &l_4, &l_4, &g_52, &g_52}, {&g_52, &g_52, &l_4, &l_4, &g_52, &g_52}};
        int i, j;
        g_206 = (safe_div_func_int16_t_s_s(0x95EDL, l_606));
    }
    (*l_608) = (*g_564);
    return g_529;
}







static short func_7(union U0 p_8, union U0 p_9)
{
    unsigned l_530[9][2] = {{0x15CB74BAL, 3UL}, {0x15CB74BAL, 3UL}, {0x15CB74BAL, 3UL}, {0x15CB74BAL, 3UL}, {0x15CB74BAL, 3UL}, {0x15CB74BAL, 3UL}, {0x15CB74BAL, 3UL}, {0x15CB74BAL, 3UL}, {0x15CB74BAL, 3UL}};
    int *l_534 = (void*)0;
    int ***l_559 = &g_524;
    int ** const l_568 = &g_535;
    unsigned l_572 = 4294967295UL;
    int i, j;
    g_529 = func_38(p_9.f0, g_309.f0, g_45);
    for (g_288 = 0; (g_288 <= 1); g_288 += 1)
    {
        int *l_531 = &g_206;
        int *l_532[10] = {(void*)0, &g_206, (void*)0, &g_206, (void*)0, &g_206, (void*)0, &g_206, (void*)0, &g_206};
        union U0 l_560 = {65535UL};
        int *l_565 = &g_52;
        int i;
        for (g_190 = 0; (g_190 <= 1); g_190 += 1)
        {
            short l_533 = 1L;
            l_531 = l_531;
            for (g_529 = 0; (g_529 <= 1); g_529 += 1)
            {
                int i, j;
                (*l_531) = 0x6DF3611BL;
                return l_530[(g_288 + 1)][g_190];
            }
            for (g_45 = 1; (g_45 >= 0); g_45 -= 1)
            {
                int i, j;
                (*g_524) = func_49(l_532[5]);
                l_533 = l_530[(g_288 + 2)][g_288];
                (*l_531) = p_8.f0;
                g_535 = func_49(l_534);
            }
            return g_529;
        }
        if ((safe_unary_minus_func_uint32_t_u((safe_sub_func_int32_t_s_s(p_9.f0, (safe_lshift_func_uint16_t_u_s(((g_52 != (-8L)) && func_32(g_309.f0, p_8, g_438)), 3)))))))
        {
            short l_555 = 0x87A4L;
            const int *l_562 = &g_206;
            (*l_531) = (*g_535);
            for (g_190 = 0; (g_190 <= 1); g_190 += 1)
            {
                int i, j;
                return l_530[(g_190 + 1)][g_288];
            }
            (*g_524) = l_531;
            if (func_21(p_8, (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s((~p_9.f0), p_8.f0)), (safe_div_func_int8_t_s_s(7L, (l_555 | ((void*)0 == &g_145[2][3])))))) & (safe_add_func_int32_t_s_s((**g_524), g_52))), l_555)), 0xEFL)) <= p_8.f0), p_9.f0)) < g_529), g_206))))
            {
                int *l_558 = &g_52;
                (*g_524) = func_49(func_49(func_49(func_49(l_558))));
            }
            else
            {
                int l_561[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_561[i] = 0L;
                (**g_524) = p_9.f0;
                if ((&g_524 == l_559))
                {
                    (*g_205) = func_21(l_560, g_288);
                }
                else
                {
                    const int **l_563[2][5][6] = {{{(void*)0, &l_562, &l_562, &l_562, &l_562, &l_562}, {(void*)0, &l_562, &l_562, &l_562, &l_562, &l_562}, {(void*)0, &l_562, &l_562, &l_562, &l_562, &l_562}, {(void*)0, &l_562, &l_562, &l_562, &l_562, &l_562}, {(void*)0, &l_562, &l_562, &l_562, &l_562, &l_562}}, {{(void*)0, &l_562, &l_562, &l_562, &l_562, &l_562}, {(void*)0, &l_562, &l_562, &l_562, &l_562, &l_562}, {(void*)0, &l_562, &l_562, &l_562, &l_562, &l_562}, {(void*)0, &l_562, &l_562, &l_562, &l_562, &l_562}, {(void*)0, &l_562, &l_562, &l_562, &l_562, &l_562}}};
                    int i, j, k;
                    (*g_205) = (((void*)0 != l_531) != l_561[1]);
                    (*g_535) = 2L;
                    g_564 = l_562;
                    (*g_535) = p_8.f0;
                }
                if (p_9.f0)
                {
                    (**l_559) = l_531;
                }
                else
                {
                    (**l_559) = l_565;
                }
            }
        }
        else
        {
            int l_566[8] = {(-1L), (-3L), (-1L), (-3L), (-1L), (-3L), (-1L), (-3L)};
            int *l_567 = &g_206;
            int i;
            l_566[2] = (*l_531);
            (**l_559) = func_49(l_567);
            (*g_535) = (((void*)0 == l_568) <= (***l_559));
        }
        for (g_206 = 1; (g_206 >= 0); g_206 -= 1)
        {
            char l_569[10][9][2] = {{{7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}}, {{7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}}, {{7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}}, {{7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}}, {{7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}}, {{7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}}, {{7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}}, {{7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}}, {{7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}}, {{7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}, {7L, 0xE3L}}};
            int *l_574 = &g_52;
            int i, j, k;
            for (g_438 = 0; (g_438 <= 1); g_438 += 1)
            {
                const unsigned char l_570 = 3UL;
                int *l_573 = &g_52;
                for (g_52 = 0; (g_52 <= 1); g_52 += 1)
                {
                    unsigned l_571[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_571[i] = 4294967293UL;
                    for (g_190 = 9; (g_190 >= 1); g_190 -= 1)
                    {
                        int i;
                        if (l_569[5][2][1])
                            break;
                        l_571[0] = func_38(l_570, g_45, (&g_535 != &l_532[g_52]));
                    }
                    return l_572;
                }
                for (g_45 = 0; (g_45 <= 1); g_45 += 1)
                {
                    int i;
                    (**l_568) = 1L;
                    (**l_559) = func_49(l_573);
                    (*g_535) = ((*l_573) >= p_8.f0);
                }
                (**l_559) = func_49(l_574);
            }
            (*g_535) = (~(safe_div_func_int16_t_s_s((func_55(&p_9, (*g_524)) != (**l_568)), g_52)));
            (*g_524) = l_574;
        }
    }
    for (g_438 = (-4); (g_438 > 25); g_438++)
    {
        const int l_579 = 0x8FE9048FL;
        int *l_582 = &g_206;
        union U0 l_599[8] = {{0x3CC2L}, {7UL}, {0x3CC2L}, {7UL}, {0x3CC2L}, {7UL}, {0x3CC2L}, {7UL}};
        int i;
        if (l_579)
        {
            const unsigned l_583 = 4294967287UL;
            for (g_206 = 18; (g_206 < (-6)); g_206 = safe_sub_func_uint8_t_u_u(g_206, 6))
            {
                union U0 l_592 = {65531UL};
                (*g_524) = l_582;
                if (l_583)
                    continue;
                (*g_524) = (*g_524);
                for (l_572 = (-7); (l_572 >= 47); l_572 = safe_add_func_uint32_t_u_u(l_572, 8))
                {
                    unsigned l_594 = 0xBC4FE1A9L;
                    for (g_529 = 0; g_529 < 9; g_529 += 1)
                    {
                        for (g_288 = 0; g_288 < 2; g_288 += 1)
                        {
                            l_530[g_529][g_288] = 0UL;
                        }
                    }
                    for (g_288 = (-18); (g_288 < 49); g_288++)
                    {
                        int **l_595 = &g_535;
                        union U0 **l_596 = &g_146;
                        l_594 = (safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((p_9.f0 < func_32(g_438, l_592, g_438)), p_8.f0)), (safe_unary_minus_func_int32_t_s((*l_582)))));
                        (*g_535) = (l_592.f0 && ((void*)0 == l_595));
                        (*l_596) = &p_8;
                    }
                }
            }
            return p_8.f0;
        }
        else
        {
            short l_600 = (-1L);
            (**l_568) = (((*l_582) <= p_9.f0) || func_21(func_11(g_45, ((safe_lshift_func_uint8_t_u_u((func_21(l_599[1], g_438) == (~(func_32(p_9.f0, p_9, g_309.f0) != l_600))), 3)) < l_600), (*g_535), p_8.f0, p_8), g_438));
            (*g_524) = l_582;
        }
        return (*l_582);
    }
    return p_9.f0;
}







static union U0 func_11(int p_12, int p_13, int p_14, int p_15, union U0 p_16)
{
    int l_412 = 0L;
    int * const l_418 = &g_52;
    int *l_434 = &g_206;
    int **l_495 = (void*)0;
    int ***l_494[6][1];
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_494[i][j] = &l_495;
    }
    for (g_190 = 21; (g_190 > (-28)); g_190 = safe_sub_func_uint32_t_u_u(g_190, 7))
    {
        const int l_399 = 0x99C70E43L;
        int *l_413 = &g_206;
        int l_417[10][1][3] = {{{0x09327271L, (-1L), (-1L)}}, {{0x09327271L, (-1L), (-1L)}}, {{0x09327271L, (-1L), (-1L)}}, {{0x09327271L, (-1L), (-1L)}}, {{0x09327271L, (-1L), (-1L)}}, {{0x09327271L, (-1L), (-1L)}}, {{0x09327271L, (-1L), (-1L)}}, {{0x09327271L, (-1L), (-1L)}}, {{0x09327271L, (-1L), (-1L)}}, {{0x09327271L, (-1L), (-1L)}}};
        union U0 l_425 = {7UL};
        const union U0 *l_439[6];
        int **l_442[7][10][3] = {{{&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}}, {{&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}}, {{&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}}, {{&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}}, {{&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}}, {{&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}}, {{&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}, {&g_205, &l_434, &g_205}}};
        int ***l_441 = &l_442[4][4][2];
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_439[i] = &g_309;
    }
    for (g_288 = 0; (g_288 != 18); g_288++)
    {
        const int l_445 = 0L;
        int l_454[5][6] = {{0x1932A829L, 0x67758D9DL, 0xBAE4C6D0L, 1L, (-1L), 0x010410E7L}, {0x1932A829L, 0x67758D9DL, 0xBAE4C6D0L, 1L, (-1L), 0x010410E7L}, {0x1932A829L, 0x67758D9DL, 0xBAE4C6D0L, 1L, (-1L), 0x010410E7L}, {0x1932A829L, 0x67758D9DL, 0xBAE4C6D0L, 1L, (-1L), 0x010410E7L}, {0x1932A829L, 0x67758D9DL, 0xBAE4C6D0L, 1L, (-1L), 0x010410E7L}};
        int *l_487 = &g_52;
        union U0 *l_500[4] = {&g_10, &g_10, &g_10, &g_10};
        unsigned l_527 = 0x878C1EB0L;
        int i, j;
        if (func_38(l_445, g_438, (safe_rshift_func_int16_t_s_s(g_206, 14))))
        {
            int **l_451 = &g_205;
            int ***l_450 = &l_451;
            const unsigned l_499 = 0x35040A48L;
            if ((safe_sub_func_int32_t_s_s((0x233D357AL > ((void*)0 != l_450)), ((safe_mod_func_int8_t_s_s(((void*)0 != &p_13), l_454[0][0])) < (func_38(p_14, p_14, (9L & 1L)) | p_12)))))
            {
                unsigned char l_455 = 1UL;
                union U0 *l_471 = &g_10;
                int *l_472 = &g_52;
                if ((l_455 != p_15))
                {
                    int *l_456[5][1];
                    union U0 l_475 = {0x9B29L};
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_456[i][j] = &g_52;
                    }
                    (*l_434) = 0xA56B3075L;
                    (**l_450) = l_456[4][0];
                    for (g_206 = 0; (g_206 < (-25)); g_206 = safe_sub_func_uint8_t_u_u(g_206, 7))
                    {
                        union U0 **l_460 = &g_146;
                        union U0 ***l_459 = &l_460;
                        (*l_459) = (*g_144);
                    }
                    (***l_450) = (safe_add_func_uint16_t_u_u(((*l_434) || (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(p_15, (safe_sub_func_uint32_t_u_u((**l_451), (p_16.f0 == (((func_55(l_471, l_472) || (safe_lshift_func_uint16_t_u_s((((func_32(p_12, l_475, p_14) == (*l_472)) >= g_10.f0) ^ 0x9FL), 14))) == 5UL) >= (*l_418))))))) == 0L), g_206)), 0xA04F8607L))), g_52));
                }
                else
                {
                    union U0 *l_484 = &g_309;
                    for (p_13 = 0; (p_13 <= 4); p_13 += 1)
                    {
                        int i, j;
                        (*l_472) = (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(255UL, (+(func_21((*g_146), (safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s(l_454[p_13][p_13], func_55(l_484, &g_206))), l_454[p_13][p_13]))) != p_14)))), 1UL));
                        (*l_451) = &g_52;
                        if (p_16.f0)
                            continue;
                    }
                    for (g_206 = 0; (g_206 <= 24); g_206 = safe_add_func_uint16_t_u_u(g_206, 6))
                    {
                        l_487 = func_49(&p_13);
                    }
                }
                return p_16;
            }
            else
            {
                int ***l_496 = (void*)0;
                union U0 *l_506 = &g_10;
                (*l_434) = p_15;
                (*l_434) = (func_21(p_16, (safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((0x98L | ((safe_rshift_func_int8_t_s_u(g_438, 5)) >= (l_494[3][0] != l_496))), p_16.f0)), (((safe_sub_func_uint32_t_u_u(l_499, func_55(l_500[3], &g_52))) && p_16.f0) || 0x11F4L)))) == 0UL);
                for (g_52 = (-2); (g_52 > (-23)); --g_52)
                {
                    union U0 **l_507 = &g_146;
                    for (p_13 = 0; (p_13 == (-2)); p_13 = safe_sub_func_int8_t_s_s(p_13, 9))
                    {
                        unsigned l_505 = 0UL;
                        (*l_434) = l_505;
                        g_205 = &g_52;
                    }
                    (*l_507) = l_506;
                    (*l_507) = l_500[3];
                }
            }
            (*l_487) = (g_52 | (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((&l_500[3] == (*g_144)), func_21(p_16, (((void*)0 != (*g_144)) || (func_32(g_206, p_16, p_15) == 1UL))))), g_190)));
        }
        else
        {
            union U0 **l_521 = &l_500[3];
            int ***l_528 = &g_524;
            g_205 = func_49(&g_52);
            for (p_15 = 0; (p_15 < (-30)); p_15 = safe_sub_func_uint32_t_u_u(p_15, 8))
            {
                char l_522 = 0xF8L;
            }
            for (p_12 = 0; p_12 < 5; p_12 += 1)
            {
                for (g_45 = 0; g_45 < 6; g_45 += 1)
                {
                    l_454[p_12][g_45] = 0x02519E11L;
                }
            }
        }
    }
    return p_16;
}







static unsigned char func_21(union U0 p_22, short p_23)
{
    int *l_383 = &g_206;
    int **l_384 = (void*)0;
    int **l_385 = (void*)0;
    int **l_386 = (void*)0;
    int **l_387 = (void*)0;
    int **l_388 = &l_383;
    (*l_383) = 0x56A58835L;
    (*l_388) = &g_206;
    (*l_383) = (safe_lshift_func_int8_t_s_s(func_32(g_206, (*g_146), p_22.f0), 1));
    return p_22.f0;
}







static union U0 func_24(unsigned char p_25, int p_26, unsigned p_27, unsigned p_28, int p_29)
{
    int *l_51 = &g_52;
    short l_179[1][8];
    union U0 *l_189 = &g_10;
    union U0 **l_211[7][6][6] = {{{&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}}, {{&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}}, {{&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}}, {{&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}}, {{&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}}, {{&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}}, {{&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {&l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}}};
    const int l_219 = 1L;
    unsigned short l_234 = 7UL;
    unsigned l_260 = 8UL;
    unsigned l_264 = 0x9803E451L;
    unsigned char l_302 = 0xBDL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
            l_179[i][j] = 1L;
    }
    for (g_45 = 0; (g_45 >= (-21)); g_45 = safe_sub_func_int16_t_s_s(g_45, 6))
    {
        int *l_178 = &g_52;
        unsigned short l_196 = 0x1D69L;
        union U0 l_197 = {1UL};
        union U0 ***l_255 = &l_211[5][3][1];
        int **l_259 = &l_51;
        if (g_45)
        {
            int l_200 = (-6L);
            union U0 l_201 = {7UL};
            l_178 = func_49(l_51);
            for (p_27 = 0; (p_27 <= 0); p_27 += 1)
            {
                int i, j;
                (*l_178) = l_179[p_27][p_27];
            }
            for (g_52 = 0; (g_52 != 14); ++g_52)
            {
                unsigned l_184 = 0x75AC6F22L;
                if (func_32((safe_lshift_func_int8_t_s_s(l_184, 5)), (*g_146), (g_45 & (safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(g_45, g_10.f0)), func_55(l_189, l_51))))))
                {
                    g_190 = p_28;
                }
                else
                {
                    int **l_191 = &l_51;
                    (*l_191) = &g_52;
                }
            }
            for (p_29 = 0; (p_29 < 20); p_29 = safe_add_func_uint16_t_u_u(p_29, 2))
            {
                short l_218 = (-10L);
                (*l_51) = (0xD8L >= func_32(((l_218 & (0x8A1BA6F0L >= ((*l_51) && p_29))) > func_55(&l_197, &g_52)), l_201, l_219));
            }
        }
        else
        {
            unsigned char l_229 = 0xACL;
            int **l_250[9][9][1] = {{{&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}}, {{&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}}, {{&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}}, {{&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}}, {{&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}}, {{&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}}, {{&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}}, {{&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}}, {{&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}, {&l_51}}};
            int i, j, k;
            if ((*g_205))
            {
                union U0 *l_235 = &g_10;
                int l_236 = 0L;
                int **l_239 = (void*)0;
                int **l_240[5][3] = {{&g_205, &l_51, &g_205}, {&g_205, &l_51, &g_205}, {&g_205, &l_51, &g_205}, {&g_205, &l_51, &g_205}, {&g_205, &l_51, &g_205}};
                int i, j;
                (*l_51) = ((safe_sub_func_uint16_t_u_u(((((safe_lshift_func_int16_t_s_s((((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint8_t_u_u((((*l_51) != (*g_205)) != 0xD8L), (safe_lshift_func_int16_t_s_u(((*g_205) ^ l_229), 5)))) & (*l_178)))) == ((safe_lshift_func_int16_t_s_u((!(safe_sub_func_uint16_t_u_u(((void*)0 == (*g_144)), l_234))), p_29)) == g_206)) == 65535UL), 15)) ^ 4294967288UL) & (*l_51)) != l_229), p_29)) <= p_29);
                (*g_205) = (func_55(l_235, l_178) > ((*l_178) <= (l_236 < (safe_div_func_uint8_t_u_u((func_32(g_190, (*l_235), g_10.f0) >= (*g_205)), g_10.f0)))));
                g_205 = (void*)0;
                g_205 = &p_26;
            }
            else
            {
                int **l_241 = &g_205;
                (*l_241) = (void*)0;
                (*l_51) = func_55(&l_197, l_51);
                (*l_178) = (safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u((p_27 | (safe_div_func_int16_t_s_s(l_229, (safe_sub_func_uint32_t_u_u(4294967291UL, (p_29 > p_27)))))), g_190)), g_52));
            }
            g_205 = &g_52;
            (*l_51) = (*l_178);
        }
        for (p_29 = 0; (p_29 != (-27)); p_29 = safe_sub_func_int16_t_s_s(p_29, 3))
        {
            int **l_256 = (void*)0;
            int **l_257 = (void*)0;
            int *l_258[1][5];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_258[i][j] = &g_206;
            }
            (*l_51) = ((*g_205) >= ((*g_205) & ((((safe_add_func_uint8_t_u_u(0xFCL, (0x1AL > p_25))) ^ (!g_10.f0)) == (0UL && ((((((l_255 == &g_145[0][1]) | p_25) && g_10.f0) <= g_45) ^ (*l_51)) == (*l_51)))) <= 0x1FL)));
            l_258[0][4] = &p_26;
            return (*g_146);
        }
        (*l_259) = &p_26;
        (*l_51) = (&l_211[4][0][0] == (void*)0);
    }
    if (l_260)
    {
        union U0 l_261 = {65532UL};
        union U0 **l_277 = (void*)0;
        int *l_284 = &g_206;
        union U0 l_325 = {0UL};
        int l_340 = 0xDF545FCCL;
        (*g_205) = (~(((func_32(p_25, l_261, p_26) <= (((&g_205 == (void*)0) || (*l_51)) || ((((l_261.f0 && (safe_lshift_func_uint8_t_u_s((0xCFDBL | l_261.f0), 5))) == l_261.f0) < 1UL) <= l_264))) > g_10.f0) <= p_25));
        (*g_205) = p_27;
        for (g_52 = 0; (g_52 < (-15)); g_52 = safe_sub_func_int32_t_s_s(g_52, 3))
        {
            int *l_275 = &g_52;
            int *l_276 = &g_206;
            union U0 *l_310 = &l_261;
            (*l_276) = (safe_div_func_uint32_t_u_u((&l_51 == &g_205), (safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((p_27 >= func_55(&l_261, l_275)) <= (*l_51)), p_27)), l_261.f0)), g_52))));
            if (((g_190 & ((*g_144) == l_277)) == (safe_div_func_uint8_t_u_u(func_55(&l_261, &g_206), g_190))))
            {
                int **l_280 = &l_275;
                union U0 **l_281 = &g_146;
                (*l_280) = &p_26;
                l_281 = &l_189;
                for (p_26 = (-10); (p_26 != 28); p_26 = safe_add_func_int8_t_s_s(p_26, 2))
                {
                    (*l_280) = &g_52;
                }
                l_284 = &p_26;
            }
            else
            {
                union U0 *l_285 = &l_261;
                int l_303 = 0xABED83B6L;
                l_285 = l_285;
                if (p_28)
                    break;
                if (p_25)
                {
                    p_26 = (safe_rshift_func_int16_t_s_u(g_288, 5));
                }
                else
                {
                    union U0 *l_299 = &l_261;
                    if ((safe_lshift_func_int16_t_s_u(((p_29 || func_38((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((*l_284), (safe_unary_minus_func_uint32_t_u(((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint8_t_u_u((l_285 != l_299), 3)))) < (safe_lshift_func_uint16_t_u_u((l_302 & (&l_299 == &l_285)), 6))))))), 0)), (0UL == g_206), p_26)) != l_303), g_10.f0)))
                    {
                        int **l_304 = &l_284;
                        (*l_304) = &p_26;
                        (*l_304) = &p_26;
                        (**l_304) = (safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_28, 1UL)), (*l_275)));
                        return g_309;
                    }
                    else
                    {
                        (*l_276) = (p_28 || l_303);
                        (*l_276) = (l_299 != l_310);
                        (*l_276) = p_27;
                    }
                }
            }
        }
        for (g_288 = 1; (g_288 <= 5); g_288 += 1)
        {
            const short l_313 = 0x7C25L;
            union U0 l_335[5][1][5] = {{{{0x01ADL}, {0x01ADL}, {0x3298L}, {0xA795L}, {0xB0E0L}}}, {{{0x01ADL}, {0x01ADL}, {0x3298L}, {0xA795L}, {0xB0E0L}}}, {{{0x01ADL}, {0x01ADL}, {0x3298L}, {0xA795L}, {0xB0E0L}}}, {{{0x01ADL}, {0x01ADL}, {0x3298L}, {0xA795L}, {0xB0E0L}}}, {{{0x01ADL}, {0x01ADL}, {0x3298L}, {0xA795L}, {0xB0E0L}}}};
            union U0 ** const l_336[7] = {&l_189, &l_189, &l_189, &l_189, &l_189, &l_189, &l_189};
            const int *l_337 = &g_206;
            int **l_342 = &g_205;
            int i, j, k;
            for (l_302 = 0; l_302 < 1; l_302 += 1)
            {
                for (g_52 = 0; g_52 < 8; g_52 += 1)
                {
                    l_179[l_302][g_52] = 0xB9C5L;
                }
            }
            if (((p_28 || (func_32(p_28, l_261, p_26) < (*l_284))) != func_32(((safe_sub_func_uint8_t_u_u((9UL == (-6L)), p_29)) | l_313), (*g_146), (*l_284))))
            {
                (*g_205) = (~(safe_div_func_uint32_t_u_u(g_206, g_190)));
                (*l_51) = p_29;
            }
            else
            {
                const unsigned l_324 = 0xDE143D4CL;
                for (p_25 = 0; (p_25 <= 0); p_25 += 1)
                {
                    union U0 *l_322 = &g_309;
                    int *l_323 = &g_206;
                    int i, j;
                    if ((1L && (safe_lshift_func_int8_t_s_s((((!((safe_sub_func_uint8_t_u_u((func_38((safe_rshift_func_uint8_t_u_u(l_179[p_25][p_25], ((g_10.f0 >= ((l_313 && (g_52 || (((func_55(l_322, l_323) > p_28) < l_324) < p_27))) | 0x2B0D8B70L)) <= g_206))), (*l_284), p_28) != (*l_51)), p_28)) != p_27)) | 2UL) && p_28), 4))))
                    {
                        return l_325;
                    }
                    else
                    {
                        int **l_326 = &l_323;
                        (*l_326) = l_51;
                    }
                    if (((p_28 != (l_313 > (0x8783L || 0L))) & (*l_284)))
                    {
                        union U0 *l_331 = (void*)0;
                        int l_334 = 0L;
                        (*l_284) = ((safe_add_func_int8_t_s_s(((void*)0 != l_331), (safe_rshift_func_uint8_t_u_s(g_10.f0, g_309.f0)))) == ((1L == (p_28 | l_334)) ^ (-7L)));
                        return l_335[0][0][0];
                    }
                    else
                    {
                        (*g_205) = 1L;
                    }
                    if (func_38(func_38((p_26 >= func_32(p_28, l_335[2][0][4], g_52)), (l_336[5] != &l_322), g_52), p_28, l_324))
                    {
                        const int **l_338 = &l_337;
                        (*l_323) = 0xE2A23C34L;
                        (*l_338) = l_337;
                    }
                    else
                    {
                        int **l_339[10][2][8] = {{{&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}, {&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}}, {{&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}, {&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}}, {{&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}, {&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}}, {{&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}, {&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}}, {{&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}, {&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}}, {{&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}, {&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}}, {{&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}, {&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}}, {{&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}, {&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}}, {{&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}, {&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}}, {{&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}, {&g_205, &g_205, &l_284, (void*)0, &l_51, (void*)0, (void*)0, &l_284}}};
                        int i, j, k;
                        g_205 = l_323;
                        if ((*g_205))
                            continue;
                        if (l_340)
                            continue;
                        l_51 = &g_206;
                    }
                    for (l_260 = 0; (l_260 <= 0); l_260 += 1)
                    {
                        int **l_341 = &g_205;
                        if ((*g_205))
                            break;
                        (*l_341) = l_323;
                        (*l_341) = &p_26;
                        (*l_341) = l_323;
                    }
                }
            }
            (*g_205) = (0x50741451L ^ (*l_337));
            (*l_342) = func_49(&g_52);
            for (p_25 = 1; (p_25 <= 5); p_25 += 1)
            {
                union U0 *l_344 = &l_325;
                for (g_190 = 0; g_190 < 1; g_190 += 1)
                {
                    for (p_28 = 0; p_28 < 8; p_28 += 1)
                    {
                        l_179[g_190][p_28] = 0x4864L;
                    }
                }
                for (g_52 = 0; (g_52 >= 0); g_52 -= 1)
                {
                    if (((void*)0 == &g_205))
                    {
                        int l_343[5][4][5] = {{{0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}, {0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}, {0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}, {0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}}, {{0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}, {0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}, {0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}, {0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}}, {{0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}, {0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}, {0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}, {0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}}, {{0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}, {0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}, {0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}, {0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}}, {{0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}, {0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}, {0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}, {0x10BCB708L, 1L, 0L, 2L, 0x12EB3200L}}};
                        int i, j, k;
                        l_343[4][3][4] = l_179[g_52][(p_25 + 2)];
                        (*l_342) = &g_52;
                    }
                    else
                    {
                        int i, j, k;
                        (*l_342) = &p_26;
                        l_344 = l_344;
                    }
                    (*l_342) = l_51;
                }
            }
        }
    }
    else
    {
        union U0 *l_347 = (void*)0;
        const int l_348 = 1L;
        int l_363 = 0x9B4C805FL;
        if ((((safe_div_func_int16_t_s_s(func_38(p_25, func_55(l_347, &g_206), (((l_347 != (void*)0) >= (*g_205)) <= (l_348 != (((!((safe_lshift_func_uint16_t_u_u(65530UL, 13)) | 0L)) > g_45) && g_206)))), l_348)) && p_26) & l_348))
        {
            union U0 l_354 = {0x70A3L};
            for (g_52 = 2; (g_52 >= 10); g_52 = safe_add_func_uint32_t_u_u(g_52, 6))
            {
                unsigned char l_353 = 0xDAL;
                if (l_353)
                    break;
            }
            (*g_205) = func_32(g_10.f0, l_354, p_26);
        }
        else
        {
            union U0 *l_357 = &g_309;
            int *l_361 = &g_206;
            int * const l_371 = &g_52;
            int **l_382 = &g_205;
            if ((((void*)0 != l_347) && (p_27 ^ (safe_div_func_uint32_t_u_u((g_10.f0 < ((void*)0 == &l_211[0][0][0])), (*g_205))))))
            {
                (*g_205) = (func_55(l_357, &g_206) ^ g_288);
                for (l_302 = 10; (l_302 != 10); l_302++)
                {
                    int **l_360 = (void*)0;
                    l_361 = func_49(&g_206);
                    if ((*g_205))
                        break;
                }
            }
            else
            {
                int **l_362 = &l_361;
                union U0 *l_375 = &g_309;
                (*l_362) = &g_206;
                l_363 = (*l_361);
                if (p_27)
                {
                    unsigned short l_372 = 1UL;
                    int *l_381[10][7] = {{&g_206, &g_52, &l_363, (void*)0, &g_206, &g_206, &g_52}, {&g_206, &g_52, &l_363, (void*)0, &g_206, &g_206, &g_52}, {&g_206, &g_52, &l_363, (void*)0, &g_206, &g_206, &g_52}, {&g_206, &g_52, &l_363, (void*)0, &g_206, &g_206, &g_52}, {&g_206, &g_52, &l_363, (void*)0, &g_206, &g_206, &g_52}, {&g_206, &g_52, &l_363, (void*)0, &g_206, &g_206, &g_52}, {&g_206, &g_52, &l_363, (void*)0, &g_206, &g_206, &g_52}, {&g_206, &g_52, &l_363, (void*)0, &g_206, &g_206, &g_52}, {&g_206, &g_52, &l_363, (void*)0, &g_206, &g_206, &g_52}, {&g_206, &g_52, &l_363, (void*)0, &g_206, &g_206, &g_52}};
                    int i, j;
                    if (((safe_rshift_func_int16_t_s_u(((((safe_rshift_func_int16_t_s_s((((*g_205) < g_309.f0) < (l_348 ^ ((safe_unary_minus_func_uint32_t_u(0x8ED2F359L)) & (safe_mod_func_uint8_t_u_u(p_25, p_26))))), (l_371 == l_361))) > (((*g_205) | (**l_362)) <= g_45)) <= p_25) & g_10.f0), l_372)) || p_28))
                    {
                        return (*g_146);
                    }
                    else
                    {
                        union U0 *l_378 = &g_309;
                        p_26 = (*l_371);
                        (*l_362) = &p_26;
                        (*g_205) = (((+(safe_rshift_func_uint16_t_u_u(p_28, 11))) != ((((*l_51) > func_55(l_375, (*l_362))) <= 251UL) >= 0x44A33EA5L)) != (safe_sub_func_uint8_t_u_u((l_357 == l_378), g_10.f0)));
                        (*l_362) = func_49(func_49(&g_52));
                    }
                    for (g_206 = 0; (g_206 != (-7)); --g_206)
                    {
                    }
                }
                else
                {
                    (*l_362) = &p_26;
                    return (*l_357);
                }
            }
            (*l_382) = (void*)0;
        }
    }
    return (*l_189);
}







static char func_32(int p_33, union U0 p_34, const unsigned char p_35)
{
    return g_10.f0;
}







static unsigned short func_38(const char p_39, unsigned p_40, short p_41)
{
    int *l_44 = (void*)0;
    g_45 = (0x41L > (safe_rshift_func_uint8_t_u_u(p_39, 1)));
    return g_10.f0;
}







static int * func_49(int * p_50)
{
    const union U0 *l_177 = &g_10;
    const union U0 **l_176 = &l_177;
    (*l_176) = func_53(&g_10);
    return p_50;
}







static const union U0 * const func_53(union U0 * p_54)
{
    union U0 *l_58 = &g_10;
    int *l_59[4][7][6] = {{{&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}}, {{&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}}, {{&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}}, {{&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52}}};
    unsigned short l_76 = 0x667BL;
    unsigned l_130 = 18446744073709551615UL;
    int l_157 = 0x7FB00903L;
    int i, j, k;
    if (func_55(l_58, l_59[0][0][0]))
    {
        for (g_52 = 0; (g_52 == 5); g_52++)
        {
            return &g_10;
        }
        for (g_52 = 7; (g_52 > 7); g_52 = safe_add_func_int16_t_s_s(g_52, 3))
        {
            const union U0 * const l_69 = &g_10;
            return l_69;
        }
    }
    else
    {
        unsigned l_70 = 4294967286UL;
        int l_75 = (-6L);
        int *l_100[3];
        int *l_106 = &l_75;
        union U0 **l_114 = &l_58;
        int i;
        for (i = 0; i < 3; i++)
            l_100[i] = &l_75;
        l_70 = (9UL & g_45);
        if ((l_70 & (&g_10 != (void*)0)))
        {
            unsigned l_90 = 0x198D803BL;
            union U0 **l_91 = &l_58;
            for (l_70 = 0; (l_70 > 10); l_70 = safe_add_func_uint16_t_u_u(l_70, 3))
            {
                return p_54;
            }
            for (l_70 = 0; (l_70 > 37); l_70 = safe_add_func_uint16_t_u_u(l_70, 8))
            {
                unsigned l_79 = 0UL;
                union U0 ***l_92 = (void*)0;
                union U0 ***l_93 = &l_91;
                l_75 = g_45;
                l_76 = g_52;
                for (l_75 = (-17); (l_75 <= (-30)); l_75 = safe_sub_func_uint8_t_u_u(l_75, 8))
                {
                    unsigned short l_86[3];
                    union U0 l_87[2][9] = {{{0UL}, {0x3FF5L}, {0UL}, {0x3FF5L}, {0UL}, {0x3FF5L}, {0UL}, {0x3FF5L}, {0UL}}, {{0UL}, {0x3FF5L}, {0UL}, {0x3FF5L}, {0UL}, {0x3FF5L}, {0UL}, {0x3FF5L}, {0UL}}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_86[i] = 0UL;
                    l_79 = 0L;
                    if (g_10.f0)
                        break;
                    for (l_79 = 0; l_79 < 4; l_79 += 1)
                    {
                        for (l_76 = 0; l_76 < 7; l_76 += 1)
                        {
                            for (g_52 = 0; g_52 < 6; g_52 += 1)
                            {
                                l_59[l_79][l_76][g_52] = &g_52;
                            }
                        }
                    }
                    g_52 = (g_10.f0 <= (safe_div_func_int16_t_s_s(l_79, (safe_sub_func_int32_t_s_s(g_45, (func_32((l_86[0] < (0x9BB1L != l_79)), l_87[0][3], ((((g_45 ^ ((((safe_sub_func_int32_t_s_s(g_45, l_90)) <= 1UL) > g_10.f0) ^ 6UL)) != (-1L)) <= l_79) < 1L)) == g_52))))));
                }
                (*l_93) = l_91;
            }
            for (l_75 = 0; (l_75 < (-5)); l_75--)
            {
                int **l_96 = &l_59[0][0][0];
                union U0 *l_97[2][3] = {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}};
                int i, j;
                (*l_96) = (void*)0;
                (*l_96) = &g_52;
                g_52 = (l_70 != (func_55(&g_10, l_59[1][3][0]) >= (l_90 ^ (((func_55(l_97[1][1], &l_75) < func_32((safe_div_func_uint32_t_u_u(4294967290UL, l_75)), g_10, g_45)) > l_75) | (-3L)))));
            }
            if (g_52)
            {
                int **l_101 = &l_100[2];
                (*l_101) = l_100[2];
            }
            else
            {
                int *l_104 = (void*)0;
                int l_111 = 0L;
                union U0 **l_115 = &l_58;
                int l_142 = 0xE5EC2F7FL;
                for (l_70 = 0; (l_70 >= 2); l_70 = safe_add_func_uint8_t_u_u(l_70, 1))
                {
                    int **l_105 = &l_59[0][0][0];
                    int l_119 = 0xC2559FCEL;
                    union U0 ***l_147[5][4][7] = {{{&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}, {&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}, {&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}, {&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}}, {{&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}, {&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}, {&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}, {&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}}, {{&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}, {&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}, {&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}, {&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}}, {{&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}, {&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}, {&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}, {&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}}, {{&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}, {&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}, {&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}, {&l_91, &l_114, &l_115, &l_115, &l_114, (void*)0, (void*)0}}};
                    int i, j, k;
                    (*l_105) = l_104;
                    if (((l_90 && l_90) != (0x7E61D9E4L | ((3L ^ func_55(&g_10, l_106)) | (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((g_52 ^ l_111), 3)) > (-9L)), g_10.f0))))))
                    {
                        g_52 = ((g_10.f0 || 0x96AD7028L) != g_10.f0);
                        g_52 = (((safe_div_func_uint16_t_u_u(g_10.f0, l_90)) | (g_52 >= ((g_45 != (l_114 == l_115)) ^ (&l_100[0] != (void*)0)))) < 255UL);
                        if (g_45)
                            break;
                    }
                    else
                    {
                        int * const l_118 = &g_52;
                        if (g_52)
                            break;
                        l_119 = (safe_sub_func_uint8_t_u_u(func_55(p_54, &g_52), (g_45 | (&g_52 == l_118))));
                        g_52 = (0x8035757FL == (safe_add_func_uint16_t_u_u(func_32(func_32((*l_118), g_10, g_45), g_10, g_52), 0xF618L)));
                        return p_54;
                    }
                    if ((l_111 != ((safe_rshift_func_uint16_t_u_u(((g_10.f0 != (((safe_mod_func_int16_t_s_s(g_10.f0, (~func_32((safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_52, g_52)), l_119)), (*p_54), ((void*)0 == &l_111))))) >= 0L) != l_130)) || 1L), g_52)) || l_90)))
                    {
                        short l_135 = 2L;
                        unsigned l_143 = 4294967294UL;
                        int l_148 = (-3L);
                        g_52 = (safe_add_func_int8_t_s_s(func_32(g_52, (*p_54), (safe_rshift_func_uint16_t_u_u(func_32(l_135, (*p_54), (g_45 & ((safe_mod_func_int16_t_s_s((((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((g_52 & func_55(p_54, &g_52)), l_135)), l_135)) > 0x038080D8L) || g_52), l_142)) >= g_45))), 0))), l_143));
                        g_52 = (*l_106);
                        (*l_105) = l_59[0][0][3];
                        l_148 = (g_144 != l_147[2][3][4]);
                    }
                    else
                    {
                        char l_149 = 0x6CL;
                        if (g_10.f0)
                            break;
                        (*l_106) = l_119;
                        if (l_149)
                            break;
                        if (l_90)
                            break;
                    }
                }
            }
        }
        else
        {
            int l_156 = 3L;
            (*l_114) = (*l_114);
            l_157 = ((*l_106) & (((void*)0 != l_59[2][0][4]) && (safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s(g_10.f0, l_156)), 0x7443474DL)) || 65526UL), (2L != ((0x50L == l_156) != l_156))))));
            g_52 = l_156;
        }
        if ((((void*)0 == &g_52) != 0xE14BL))
        {
            unsigned short l_166 = 1UL;
            int **l_167 = &l_100[2];
            (*l_106) = ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((-4L), (safe_sub_func_uint8_t_u_u(((((g_45 ^ g_45) ^ g_10.f0) > 0xE9L) | l_166), ((*g_144) == (void*)0))))), ((g_52 && g_10.f0) != l_166))), 15)) | g_52);
            (*l_167) = &l_75;
            (*l_167) = (*l_167);
            (*l_167) = &l_157;
        }
        else
        {
            int *l_173 = &g_52;
            union U0 *l_175 = &g_10;
            if (func_55(l_58, &g_52))
            {
                char l_168[3][1];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_168[i][j] = 0xDDL;
                }
                (*l_173) = (l_168[2][0] == (safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u((*l_106), ((((void*)0 != &l_75) || (((func_55((*l_114), l_173) <= (*l_173)) || ((*g_144) == (void*)0)) <= g_52)) || 0UL))), l_168[2][0])));
            }
            else
            {
                unsigned l_174[10][9] = {{18446744073709551611UL, 18446744073709551615UL, 1UL, 6UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 6UL, 1UL}, {18446744073709551611UL, 18446744073709551615UL, 1UL, 6UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 6UL, 1UL}, {18446744073709551611UL, 18446744073709551615UL, 1UL, 6UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 6UL, 1UL}, {18446744073709551611UL, 18446744073709551615UL, 1UL, 6UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 6UL, 1UL}, {18446744073709551611UL, 18446744073709551615UL, 1UL, 6UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 6UL, 1UL}, {18446744073709551611UL, 18446744073709551615UL, 1UL, 6UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 6UL, 1UL}, {18446744073709551611UL, 18446744073709551615UL, 1UL, 6UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 6UL, 1UL}, {18446744073709551611UL, 18446744073709551615UL, 1UL, 6UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 6UL, 1UL}, {18446744073709551611UL, 18446744073709551615UL, 1UL, 6UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 6UL, 1UL}, {18446744073709551611UL, 18446744073709551615UL, 1UL, 6UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 6UL, 1UL}};
                int i, j;
                (*l_114) = p_54;
                (*l_106) = l_174[9][0];
                (*l_114) = l_175;
            }
        }
    }
    l_59[0][0][0] = &l_157;
    return l_58;
}







static int func_55(union U0 * p_56, int * p_57)
{
    unsigned l_62 = 4294967295UL;
    unsigned l_63 = 0xE46ED4D3L;
    int l_64 = 0L;
    l_64 = (safe_div_func_int8_t_s_s(g_52, ((l_62 >= 0x8FE831E3L) ^ func_32(g_10.f0, g_10, ((((&g_10 == p_56) || (func_32(l_63, g_10, g_52) | 0xF5EAD4A2L)) <= l_63) || 0x9FL)))));
    return l_63;
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_309.f0, "g_309.f0", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
