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
   unsigned f0 : 31;
   unsigned long long f1;
   unsigned char f2;
};


static int g_6 = 0x6B950BA1L;
static long long g_31[9] = {0x5EE6D54EC7E318B4LL, 2L, 0x5EE6D54EC7E318B4LL, 2L, 0x5EE6D54EC7E318B4LL, 2L, 0x5EE6D54EC7E318B4LL, 2L, 0x5EE6D54EC7E318B4LL};
static int g_32 = (-5L);
static int g_67 = (-10L);
static int g_92 = (-1L);
static union U0 g_108[5][1] = {{{0x0D67C409L}}, {{0x0D67C409L}}, {{0x0D67C409L}}, {{0x0D67C409L}}, {{0x0D67C409L}}};
static short g_132 = (-5L);
static int g_144[8] = {0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L};
static int * const g_150 = &g_144[6];
static int * const *g_149 = &g_150;
static union U0 *g_168 = &g_108[2][0];
static int *g_253 = &g_92;
static union U0 ***g_427 = (void*)0;
static char g_517 = 0x5BL;
static const long long g_529 = 0x2A2B44F4BF1850E3LL;
static const int *g_611 = &g_92;
static unsigned short g_629 = 65529UL;
static char g_778 = 4L;
static union U0 **g_791 = &g_168;



static int func_1(void);
static int * func_2(int * p_3, int * p_4);
static int func_9(unsigned char p_10, int * p_11, const int * p_12, unsigned char p_13, unsigned p_14);
static int * func_27(unsigned p_28);
static int * func_33(unsigned p_34, int * p_35, unsigned short p_36);
static long long func_39(long long p_40, unsigned short p_41, unsigned p_42);
static int * const func_43(int * p_44, const unsigned char p_45, int p_46);
static int * func_47(unsigned p_48, unsigned p_49, int * p_50);
static unsigned func_72(int * p_73, union U0 p_74);
static int * func_75(unsigned char p_76, unsigned char p_77, int * p_78, unsigned p_79);
static int func_1(void)
{
    int *l_5 = &g_6;
    int **l_814 = &g_253;
    (*l_814) = func_2(l_5, l_5);
    (*g_253) = ((safe_rshift_func_uint8_t_u_s(g_629, 1)) & 0x44L);
    return (**l_814);
}







static int * func_2(int * p_3, int * p_4)
{
    unsigned long long l_20 = 8UL;
    union U0 ***l_716 = (void*)0;
    int *l_729 = &g_32;
    union U0 **l_742 = (void*)0;
    for (g_6 = 27; (g_6 >= (-9)); g_6--)
    {
        int *l_17 = (void*)0;
        const unsigned char l_733[7] = {255UL, 255UL, 0xD0L, 255UL, 255UL, 0xD0L, 255UL};
        union U0 *l_780 = &g_108[0][0];
        int **l_812 = (void*)0;
        int **l_813 = &l_17;
        int i;
        (**g_149) = func_9((safe_mul_func_int8_t_s_s(((p_3 == l_17) >= (safe_rshift_func_uint16_t_u_u(l_20, 0))), ((safe_sub_func_int32_t_s_s(((0x95L >= (l_20 <= (-1L))) <= g_6), (safe_lshift_func_int16_t_s_u(0x1F34L, g_6)))) && 255UL))), l_17, l_17, g_6, l_20);
    }
    (*p_3) = ((*l_729) == ((p_4 == p_4) || 0x7108E743L));
    return &g_32;
}







static int func_9(unsigned char p_10, int * p_11, const int * p_12, unsigned char p_13, unsigned p_14)
{
    const union U0 * const l_430 = &g_108[2][0];
    const union U0 * const *l_429 = &l_430;
    const union U0 * const **l_428 = &l_429;
    int l_431[5][4] = {{8L, 1L, 1L, 0L}, {8L, 1L, 1L, 0L}, {8L, 1L, 1L, 0L}, {8L, 1L, 1L, 0L}, {8L, 1L, 1L, 0L}};
    int **l_446 = &g_253;
    int ***l_445 = &l_446;
    int l_447[3][4][7] = {{{2L, 1L, (-6L), (-9L), 0xAD3AD992L, 1L, 0L}, {2L, 1L, (-6L), (-9L), 0xAD3AD992L, 1L, 0L}, {2L, 1L, (-6L), (-9L), 0xAD3AD992L, 1L, 0L}, {2L, 1L, (-6L), (-9L), 0xAD3AD992L, 1L, 0L}}, {{2L, 1L, (-6L), (-9L), 0xAD3AD992L, 1L, 0L}, {2L, 1L, (-6L), (-9L), 0xAD3AD992L, 1L, 0L}, {2L, 1L, (-6L), (-9L), 0xAD3AD992L, 1L, 0L}, {2L, 1L, (-6L), (-9L), 0xAD3AD992L, 1L, 0L}}, {{2L, 1L, (-6L), (-9L), 0xAD3AD992L, 1L, 0L}, {2L, 1L, (-6L), (-9L), 0xAD3AD992L, 1L, 0L}, {2L, 1L, (-6L), (-9L), 0xAD3AD992L, 1L, 0L}, {2L, 1L, (-6L), (-9L), 0xAD3AD992L, 1L, 0L}}};
    long long l_484 = 5L;
    int *l_505 = (void*)0;
    int l_656 = 5L;
    unsigned short l_681[1][9][4] = {{{0xA96BL, 0xC565L, 0xD7F7L, 0xC565L}, {0xA96BL, 0xC565L, 0xD7F7L, 0xC565L}, {0xA96BL, 0xC565L, 0xD7F7L, 0xC565L}, {0xA96BL, 0xC565L, 0xD7F7L, 0xC565L}, {0xA96BL, 0xC565L, 0xD7F7L, 0xC565L}, {0xA96BL, 0xC565L, 0xD7F7L, 0xC565L}, {0xA96BL, 0xC565L, 0xD7F7L, 0xC565L}, {0xA96BL, 0xC565L, 0xD7F7L, 0xC565L}, {0xA96BL, 0xC565L, 0xD7F7L, 0xC565L}}};
    int i, j, k;
    p_12 = func_27(g_6);
    for (g_132 = 0; (g_132 <= 7); g_132 += 1)
    {
        if (((g_427 == l_428) >= 18446744073709551608UL))
        {
            int i;
            g_144[g_132] = g_144[g_132];
        }
        else
        {
            if (l_431[3][3])
                break;
        }
    }
    for (g_32 = 4; (g_32 < (-21)); g_32 = safe_sub_func_uint8_t_u_u(g_32, 6))
    {
        int *l_438 = &g_6;
        union U0 **l_459 = &g_168;
        union U0 ***l_458 = &l_459;
        int l_510[4] = {(-7L), (-8L), (-7L), (-8L)};
        union U0 l_559 = {4294967292UL};
        unsigned l_603 = 0x44F28882L;
        union U0 *** const l_655 = &l_459;
        unsigned char l_684[10] = {0x58L, 0x20L, 0x58L, 0x20L, 0x58L, 0x20L, 0x58L, 0x20L, 0x58L, 0x20L};
        const unsigned char l_686 = 1UL;
        int i;
    }
    (**g_149) = 0xC65A2B81L;
    return (*g_150);
}







static int * func_27(unsigned p_28)
{
    int *l_38 = &g_6;
    int *l_350 = &g_32;
    union U0 **l_383 = &g_168;
    short l_407[1];
    int **l_426[7][3][9] = {{{&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}, {&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}, {&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}}, {{&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}, {&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}, {&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}}, {{&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}, {&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}, {&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}}, {{&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}, {&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}, {&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}}, {{&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}, {&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}, {&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}}, {{&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}, {&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}, {&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}}, {{&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}, {&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}, {&l_350, &l_350, &g_253, &l_350, &l_38, (void*)0, &l_38, &l_350, &g_253}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_407[i] = (-5L);
    for (p_28 = 0; (p_28 == 25); p_28 = safe_add_func_int32_t_s_s(p_28, 1))
    {
        int *l_37 = &g_6;
        union U0 l_382 = {0x25F28341L};
        for (g_32 = 1; (g_32 <= 8); g_32 += 1)
        {
            int **l_374[5];
            unsigned short l_377 = 0x983EL;
            union U0 l_392 = {8UL};
            int i;
            for (i = 0; i < 5; i++)
                l_374[i] = &l_350;
            l_38 = func_33((((l_37 == l_37) >= ((void*)0 == l_38)) ^ (func_39(((g_31[g_32] != 246UL) == p_28), ((g_32 && ((*l_38) == (*l_37))) >= (-1L)), g_6) | (-1L))), l_350, g_108[2][0].f0);
            for (g_67 = (-1); (g_67 <= (-25)); g_67--)
            {
                return l_37;
            }
            if ((!l_377))
            {
                unsigned long long l_385[10] = {18446744073709551609UL, 18446744073709551609UL, 0x40AB5F6029253BF1LL, 18446744073709551609UL, 18446744073709551609UL, 0x40AB5F6029253BF1LL, 18446744073709551609UL, 18446744073709551609UL, 0x40AB5F6029253BF1LL, 18446744073709551609UL};
                int *l_387[2][2][1];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_387[i][j][k] = &g_144[6];
                    }
                }
                for (g_132 = 22; (g_132 <= 27); g_132 = safe_add_func_int32_t_s_s(g_132, 7))
                {
                    union U0 * const *l_384 = &g_168;
                    int l_386 = 0xD55680D6L;
                    if ((safe_rshift_func_int16_t_s_u((((0x60C5BB3ADCCEB260LL >= ((+(((void*)0 != l_374[1]) != (((func_72(&g_144[6], l_382) == ((l_383 != l_384) < ((p_28 ^ 0L) && 2UL))) == l_385[8]) > l_386))) == p_28)) && l_385[8]) == 65527UL), g_132)))
                    {
                        return l_387[1][0][0];
                    }
                    else
                    {
                        int l_393 = 7L;
                        (**g_149) = (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(g_32, ((!p_28) == func_72(&l_386, l_392)))), l_393));
                        l_38 = (*g_149);
                        if ((*l_37))
                            continue;
                        return l_387[1][0][0];
                    }
                }
                for (l_392.f2 = 0; (l_392.f2 == 50); l_392.f2 = safe_add_func_uint16_t_u_u(l_392.f2, 6))
                {
                    int **l_400 = &g_253;
                    (*l_400) = func_43(&g_32, g_132, (safe_add_func_uint8_t_u_u((g_144[5] <= (-4L)), (((&g_149 == &g_149) <= ((void*)0 == l_38)) <= (safe_add_func_int8_t_s_s((p_28 ^ p_28), g_132))))));
                    for (g_92 = 7; (g_92 == (-3)); g_92 = safe_sub_func_int32_t_s_s(g_92, 6))
                    {
                        (*l_400) = l_37;
                        if ((*g_150))
                            continue;
                    }
                }
            }
            else
            {
                int **l_410 = &l_350;
                union U0 l_418 = {0x0B666774L};
                (*l_410) = func_43(&g_144[6], p_28, (p_28 <= ((safe_add_func_uint16_t_u_u(((g_6 ^ (safe_rshift_func_int8_t_s_u((-6L), 2))) && l_407[0]), (safe_lshift_func_int16_t_s_u(p_28, p_28)))) ^ (*l_350))));
                (*g_150) = (*g_253);
                for (g_67 = 0; (g_67 <= 0); g_67 += 1)
                {
                    int i, j;
                    g_144[(g_67 + 3)] = (*g_253);
                    for (g_132 = 0; (g_132 >= 0); g_132 -= 1)
                    {
                        return &g_144[7];
                    }
                    (*l_350) = (((void*)0 == &g_108[g_67][g_67]) <= (&g_144[(g_67 + 3)] == &g_144[(g_67 + 3)]));
                    (**l_410) = (**g_149);
                }
                if ((safe_add_func_uint64_t_u_u(p_28, p_28)))
                {
                    unsigned l_424[4][9] = {{8UL, 8UL, 0x89EE8977L, 8UL, 8UL, 0x89EE8977L, 8UL, 8UL, 0x89EE8977L}, {8UL, 8UL, 0x89EE8977L, 8UL, 8UL, 0x89EE8977L, 8UL, 8UL, 0x89EE8977L}, {8UL, 8UL, 0x89EE8977L, 8UL, 8UL, 0x89EE8977L, 8UL, 8UL, 0x89EE8977L}, {8UL, 8UL, 0x89EE8977L, 8UL, 8UL, 0x89EE8977L, 8UL, 8UL, 0x89EE8977L}};
                    int i, j;
                    for (g_132 = 0; (g_132 <= 29); g_132 = safe_add_func_int32_t_s_s(g_132, 7))
                    {
                        union U0 ***l_417 = &l_383;
                        union U0 l_419[2][5] = {{{0xE63ADF2EL}, {4294967295UL}, {0xE63ADF2EL}, {4294967295UL}, {0xE63ADF2EL}}, {{0xE63ADF2EL}, {4294967295UL}, {0xE63ADF2EL}, {4294967295UL}, {0xE63ADF2EL}}};
                        int i, j;
                        (*l_417) = (void*)0;
                        (*g_150) = ((func_72(&g_32, l_418) || ((g_108[2][0].f0 ^ 0x8AL) == (func_72(l_37, l_419[1][3]) && (safe_add_func_uint64_t_u_u((p_28 <= g_6), (*l_38)))))) > p_28);
                        (*g_253) = l_419[1][3].f0;
                        (**l_410) = (*g_253);
                    }
                    for (l_392.f2 = 28; (l_392.f2 == 8); l_392.f2--)
                    {
                        if (l_424[2][0])
                            break;
                    }
                }
                else
                {
                    int *l_425[3][4] = {{&g_92, &g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92, &g_92}};
                    int i, j;
                    return l_425[2][3];
                }
            }
        }
    }
    g_253 = l_38;
    return &g_6;
}







static int * func_33(unsigned p_34, int * p_35, unsigned short p_36)
{
    union U0 *l_359 = &g_108[3][0];
    int *l_373 = &g_92;
    for (g_67 = 0; (g_67 >= 0); g_67 -= 1)
    {
        for (p_34 = 0; (p_34 <= 0); p_34 += 1)
        {
            int *l_351 = &g_6;
            return l_351;
        }
        for (g_132 = 0; (g_132 >= 0); g_132 -= 1)
        {
            union U0 *l_358[8] = {(void*)0, &g_108[1][0], (void*)0, &g_108[1][0], (void*)0, &g_108[1][0], (void*)0, &g_108[1][0]};
            int i;
            for (p_36 = 1; (p_36 <= 7); p_36 += 1)
            {
                int i, j;
                if ((safe_mul_func_uint8_t_u_u(254UL, (safe_sub_func_uint32_t_u_u(func_72(p_35, g_108[g_132][g_132]), ((safe_mod_func_int8_t_s_s(((l_358[0] == l_359) <= g_31[(g_67 + 1)]), (safe_sub_func_uint64_t_u_u((g_31[g_67] ^ (0L != g_31[(g_67 + 1)])), 1UL)))) & 9L))))))
                {
                    int *l_362 = &g_144[6];
                    int **l_363 = &g_253;
                    int i;
                    (*l_363) = l_362;
                    for (g_92 = 0; (g_92 <= 8); g_92 += 1)
                    {
                        union U0 *l_364 = &g_108[2][0];
                        int i;
                        g_144[(g_67 + 5)] = (l_364 == &g_108[2][0]);
                    }
                    g_144[p_36] = (safe_div_func_int32_t_s_s(((void*)0 != (*g_149)), p_36));
                }
                else
                {
                    (**g_149) = (0x622B3C93L && (safe_mul_func_uint16_t_u_u(g_32, 0x362CL)));
                    for (g_92 = 0; (g_92 <= 8); g_92 += 1)
                    {
                        unsigned long long l_372 = 18446744073709551606UL;
                        (*g_150) = (safe_div_func_int32_t_s_s((*g_150), (safe_unary_minus_func_uint16_t_u((!g_132)))));
                        (**g_149) = (*g_150);
                        l_372 = ((void*)0 == &l_358[0]);
                    }
                    if ((*p_35))
                        continue;
                    for (p_34 = 0; (p_34 <= 8); p_34 += 1)
                    {
                        (*g_150) = (*g_150);
                    }
                }
            }
            return &g_6;
        }
    }
    return l_373;
}







static long long func_39(long long p_40, unsigned short p_41, unsigned p_42)
{
    unsigned long long l_51 = 18446744073709551608UL;
    int * const l_58 = &g_6;
    int *l_59 = &g_6;
    int **l_323[3][6] = {{&g_253, &g_253, &g_253, &g_253, &g_253, &g_253}, {&g_253, &g_253, &g_253, &g_253, &g_253, &g_253}, {&g_253, &g_253, &g_253, &g_253, &g_253, &g_253}};
    int **l_324 = &l_59;
    int i, j;
    (*l_324) = func_43(func_47((l_51 > ((safe_rshift_func_uint16_t_u_u(((p_41 || (safe_rshift_func_int16_t_s_u((255UL > (&g_32 != &g_6)), 2))) < (((l_58 != &g_6) < ((*l_58) == (*l_58))) <= (-9L))), 9)) < 0x039B7C392AD5889ELL)), p_41, l_59), g_6, (*l_59));
    (*g_150) = (0xE7372DDEA36B09E2LL == g_6);
    for (g_132 = 0; (g_132 >= 0); g_132 -= 1)
    {
        int *l_325 = &g_92;
        int **l_326[8][9] = {{&g_253, &g_253, &g_253, &l_325, &l_59, &l_325, &g_253, &g_253, &g_253}, {&g_253, &g_253, &g_253, &l_325, &l_59, &l_325, &g_253, &g_253, &g_253}, {&g_253, &g_253, &g_253, &l_325, &l_59, &l_325, &g_253, &g_253, &g_253}, {&g_253, &g_253, &g_253, &l_325, &l_59, &l_325, &g_253, &g_253, &g_253}, {&g_253, &g_253, &g_253, &l_325, &l_59, &l_325, &g_253, &g_253, &g_253}, {&g_253, &g_253, &g_253, &l_325, &l_59, &l_325, &g_253, &g_253, &g_253}, {&g_253, &g_253, &g_253, &l_325, &l_59, &l_325, &g_253, &g_253, &g_253}, {&g_253, &g_253, &g_253, &l_325, &l_59, &l_325, &g_253, &g_253, &g_253}};
        int **l_327 = &l_59;
        union U0 l_330 = {0x82F01F71L};
        union U0 l_342 = {4294967290UL};
        int i, j;
        g_253 = l_325;
        (*l_327) = (*g_149);
        (**l_324) = (safe_sub_func_uint64_t_u_u(g_67, ((func_72(&g_144[6], l_330) && (safe_div_func_uint64_t_u_u(0x657B257F6C420B68LL, ((-1L) | (p_41 && (*l_59)))))) ^ g_144[6])));
        for (l_51 = 0; (l_51 <= 2); l_51 += 1)
        {
            unsigned long long l_335 = 0x80A017429BFD1996LL;
            int *l_341[4][7] = {{(void*)0, &g_144[1], &g_144[6], &g_144[6], &g_144[1], (void*)0, &g_144[1]}, {(void*)0, &g_144[1], &g_144[6], &g_144[6], &g_144[1], (void*)0, &g_144[1]}, {(void*)0, &g_144[1], &g_144[6], &g_144[6], &g_144[1], (void*)0, &g_144[1]}, {(void*)0, &g_144[1], &g_144[6], &g_144[6], &g_144[1], (void*)0, &g_144[1]}};
            int i, j;
            for (p_41 = 0; (p_41 <= 0); p_41 += 1)
            {
                int i, j;
                g_253 = (void*)0;
                for (l_330.f1 = 0; (l_330.f1 <= 7); l_330.f1 += 1)
                {
                    int i;
                    g_144[(g_132 + 4)] = (safe_add_func_int16_t_s_s(l_335, (p_40 ^ 0xE60F4A2C53EA8AC7LL)));
                    for (g_67 = 0; (g_67 >= 0); g_67 -= 1)
                    {
                        unsigned long long l_338 = 0x499C1F7F4DD99563LL;
                        int **l_345 = &l_325;
                        if (p_42)
                            break;
                        (*l_325) = (((((safe_mul_func_int8_t_s_s(p_42, (0xE3E7L & ((p_42 & p_42) ^ l_338)))) || (0x2A7C4BBB492963F9LL || ((safe_div_func_uint8_t_u_u(4UL, l_335)) < func_72(l_341[1][1], l_342)))) && 0x85L) | (**l_324)) <= (*l_59));
                        (*l_59) = (p_40 && ((+4294967295UL) || (1L >= ((safe_rshift_func_int8_t_s_s(p_42, ((**g_149) != (p_41 ^ 4294967295UL)))) == func_72(&g_144[6], l_330)))));
                        (*l_345) = (*g_149);
                    }
                    (**l_324) = (safe_sub_func_int8_t_s_s(g_144[(g_132 + 4)], (safe_rshift_func_uint16_t_u_s(p_41, 0))));
                }
            }
        }
    }
    return (**l_324);
}







static int * const func_43(int * p_44, const unsigned char p_45, int p_46)
{
    int **l_289 = &g_253;
    union U0 **l_292 = &g_168;
    (*l_289) = (*g_149);
    if ((((safe_add_func_int8_t_s_s(((p_45 && (l_292 == (void*)0)) >= (safe_lshift_func_uint8_t_u_s(g_92, 6))), g_32)) || ((((&p_44 != l_289) ^ (**l_289)) == (((void*)0 == &g_168) > g_31[1])) == (**l_289))) == p_46))
    {
        unsigned l_297[9][3][6] = {{{0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}}, {{0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}}, {{0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}}, {{0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}}, {{0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}}, {{0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}}, {{0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}}, {{0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}}, {{0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}, {0xE05A2BDCL, 0x030FD1E8L, 4294967291UL, 0UL, 4294967291UL, 1UL}}};
        int *l_300 = &g_92;
        int i, j, k;
        for (g_132 = 0; (g_132 == 29); ++g_132)
        {
            if (l_297[2][0][4])
                break;
        }
        (**g_149) = (safe_div_func_uint8_t_u_u(((void*)0 == p_44), l_297[4][1][2]));
        (*l_289) = l_300;
    }
    else
    {
        int **l_301[8];
        int **l_302 = &g_253;
        int i;
        for (i = 0; i < 8; i++)
            l_301[i] = &g_253;
        (*l_302) = (*g_149);
        return (*g_149);
    }
    if ((*p_44))
    {
        int *l_303 = &g_144[0];
        (*l_289) = l_303;
    }
    else
    {
        (**l_289) = (*g_253);
    }
    if ((**l_289))
    {
        return p_44;
    }
    else
    {
        int *l_310 = &g_6;
        union U0 l_311 = {0x1ECB1D28L};
        int ***l_316[1][3];
        int ***l_317 = &l_289;
        short l_318 = 0xE647L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_316[i][j] = (void*)0;
        }
        if ((safe_add_func_uint8_t_u_u(0x1AL, (safe_lshift_func_uint8_t_u_s((((void*)0 != l_292) < p_46), 3)))))
        {
            return (*g_149);
        }
        else
        {
            (*l_289) = (*l_289);
            g_253 = func_75(g_144[6], g_32, (*l_289), (safe_add_func_uint32_t_u_u(((func_72(l_310, l_311) & g_108[2][0].f0) & (&g_168 == (void*)0)), p_45)));
        }
        (**l_317) = func_75(((((safe_rshift_func_int16_t_s_s((l_316[0][2] != &l_289), (&g_253 != l_289))) > 0x3448L) < ((&l_289 == l_317) < g_132)) > 0xAB17AEFAL), g_144[5], p_44, l_318);
        for (g_132 = 0; (g_132 <= (-25)); g_132--)
        {
            if ((*p_44))
                break;
            (**g_149) = (safe_lshift_func_uint16_t_u_u(p_46, 0));
            (**l_317) = p_44;
            if ((*g_150))
                break;
        }
    }
    return (*g_149);
}







static int * func_47(unsigned p_48, unsigned p_49, int * p_50)
{
    int l_62 = (-1L);
    int *l_82[5] = {&g_6, (void*)0, &g_6, (void*)0, &g_6};
    int *l_176 = &l_62;
    union U0 *l_200 = &g_108[2][0];
    unsigned short l_286 = 65528UL;
    int i;
    g_67 = (g_32 ^ (safe_sub_func_int8_t_s_s(((0x8A558E0DL > (l_62 && p_49)) >= l_62), ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((void*)0 != &g_32), ((p_50 != (void*)0) <= p_49))), p_49)) <= 0L))));
    if ((safe_mul_func_int8_t_s_s(1L, (safe_add_func_uint8_t_u_u(l_62, (func_72(func_75((safe_rshift_func_uint8_t_u_u((p_50 != &l_62), 6)), g_32, l_82[0], (g_32 && (safe_mul_func_int8_t_s_s((g_32 == g_6), 1L)))), g_108[2][0]) || 6UL))))))
    {
        unsigned short l_175 = 2UL;
        union U0 *l_232 = &g_108[2][0];
        int *l_260 = (void*)0;
        int l_276 = 1L;
        union U0 **l_287 = &l_232;
        if (l_175)
        {
            char l_193 = 1L;
            if (l_175)
            {
                int **l_177[4][8][8] = {{{(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}}, {{(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}}, {{(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}}, {{(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}, {(void*)0, &l_82[3], &l_82[0], (void*)0, (void*)0, &l_82[1], (void*)0, &l_82[3]}}};
                int i, j, k;
                (*g_150) = (g_31[3] || g_31[1]);
                p_50 = l_176;
            }
            else
            {
                int **l_178[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_178[i] = &l_82[2];
                p_50 = p_50;
            }
            for (g_92 = 16; (g_92 >= (-1)); g_92--)
            {
                short l_181 = 0x8D6FL;
                int **l_185[6][6] = {{&l_82[0], &l_82[0], &l_176, &l_82[0], &l_82[0], &l_176}, {&l_82[0], &l_82[0], &l_176, &l_82[0], &l_82[0], &l_176}, {&l_82[0], &l_82[0], &l_176, &l_82[0], &l_82[0], &l_176}, {&l_82[0], &l_82[0], &l_176, &l_82[0], &l_82[0], &l_176}, {&l_82[0], &l_82[0], &l_176, &l_82[0], &l_82[0], &l_176}, {&l_82[0], &l_82[0], &l_176, &l_82[0], &l_82[0], &l_176}};
                int ***l_184 = &l_185[0][0];
                unsigned short l_191 = 6UL;
                int i, j;
                (*g_150) = l_181;
                for (l_62 = (-18); (l_62 >= 1); l_62 = safe_add_func_int64_t_s_s(l_62, 4))
                {
                    int ***l_186 = &l_185[0][0];
                    (*g_150) = (((l_184 != l_186) <= (p_48 ^ (safe_sub_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s((l_191 == g_108[2][0].f0), (safe_unary_minus_func_uint64_t_u((l_193 <= (safe_rshift_func_uint16_t_u_u((~p_49), g_144[7]))))))) >= (*p_50)) || 0UL), l_193)))) >= 0x1E17L);
                    (**g_149) = l_193;
                    (**g_149) = (safe_mod_func_uint64_t_u_u(((*g_150) || ((p_49 & p_49) >= ((safe_div_func_int8_t_s_s((l_200 != &g_108[4][0]), p_49)) > (safe_div_func_uint32_t_u_u(l_175, g_6))))), g_92));
                }
            }
            (*l_176) = (*g_150);
            return &g_6;
        }
        else
        {
            int *l_205 = &g_144[6];
            union U0 * const *l_211 = &g_168;
            for (g_132 = (-3); (g_132 > (-21)); --g_132)
            {
                int **l_206 = &l_82[0];
                (*g_150) = func_72(l_205, (*l_200));
                (*l_176) = 0xB0CAA3BFL;
                (*l_206) = (*g_149);
            }
            (*l_205) = (l_175 | (safe_rshift_func_int16_t_s_s(((p_49 < ((*g_149) != (void*)0)) || 0xF7EEL), g_92)));
            if (((safe_lshift_func_uint16_t_u_u((&g_168 == l_211), (safe_mul_func_int16_t_s_s((p_49 && (((0UL >= g_31[8]) > 5L) >= g_32)), (safe_div_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(g_31[1], (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((((~g_32) <= (*l_205)) <= (*l_205)), l_175)) ^ 1UL), p_49)))), g_6)), (*l_205))), (*l_176))) == g_67), g_32)))))) <= 0xDBL))
            {
                unsigned l_241 = 0xB71B2A38L;
                for (p_48 = 1; (p_48 <= 4); p_48 += 1)
                {
                    int i;
                    (*g_150) = (g_31[2] > (((safe_mod_func_int32_t_s_s((safe_sub_func_int64_t_s_s(((void*)0 != l_232), ((safe_sub_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((**g_149), (l_241 && (safe_mul_func_int16_t_s_s(g_67, g_144[6]))))), (safe_mul_func_int16_t_s_s(l_241, (safe_add_func_int32_t_s_s((g_32 == 0x9FA815E1L), p_48)))))), 4)) > (*g_150)) >= g_67), 0x3420L)) != (*l_205)))), g_31[8])) ^ 1L) || l_241));
                }
                (*g_150) = (*p_50);
            }
            else
            {
                for (l_175 = (-10); (l_175 <= 23); ++l_175)
                {
                    int **l_250 = &l_82[0];
                    (*l_250) = (*g_149);
                    (*l_250) = (*l_250);
                    for (g_132 = 8; (g_132 == 14); g_132++)
                    {
                        g_253 = (*g_149);
                        (**g_149) = ((*p_50) == func_72(p_50, g_108[3][0]));
                    }
                }
            }
        }
        for (l_62 = 10; (l_62 > (-22)); l_62--)
        {
            int **l_261 = (void*)0;
            int **l_262[3];
            int l_275 = 1L;
            int i;
            for (i = 0; i < 3; i++)
                l_262[i] = (void*)0;
            l_176 = func_75(((void*)0 != &g_253), (safe_sub_func_int16_t_s_s(g_132, (safe_sub_func_int32_t_s_s(0x53F050ABL, 1L)))), p_50, func_72(l_260, (*l_200)));
            for (g_132 = 6; (g_132 <= (-23)); g_132--)
            {
                g_253 = l_260;
                l_276 = (func_72(&g_144[3], (*l_232)) <= (((((safe_div_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(g_6, (((safe_sub_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(p_49, 0x9524L)), ((0x18L == ((((g_144[6] == g_32) && p_49) == (**g_149)) | 0xDB85034D1DA3EC71LL)) ^ 2L))), p_48)) | 0x51D1L) != 0x3BL))) ^ (-6L)), p_48)) != 0x3D153429L) == l_275) ^ g_67) <= g_32));
            }
            for (g_67 = 0; (g_67 <= 25); g_67 = safe_add_func_int32_t_s_s(g_67, 8))
            {
                for (g_132 = 0; (g_132 == 20); g_132 = safe_add_func_int64_t_s_s(g_132, 5))
                {
                    p_50 = &l_62;
                }
                if ((*p_50))
                    continue;
            }
            p_50 = func_75(((safe_div_func_int64_t_s_s((safe_unary_minus_func_uint64_t_u(func_72(&g_144[4], (*l_232)))), 0xED043E5B959E13DELL)) & 1L), (safe_lshift_func_int16_t_s_u((*l_176), 12)), &g_144[6], l_286);
        }
        (*l_287) = &g_108[2][0];
    }
    else
    {
        int **l_288 = &l_82[4];
        (*l_288) = (*g_149);
    }
    (*g_150) = (((((**g_149) != p_48) ^ (g_108[2][0].f0 || (p_49 < ((-10L) && (g_144[6] & (g_108[2][0].f0 & g_31[4])))))) ^ g_108[2][0].f0) != p_49);
    for (l_62 = 0; (l_62 <= 8); l_62 += 1)
    {
        return &g_92;
    }
    return p_50;
}







static unsigned func_72(int * p_73, union U0 p_74)
{
    for (g_92 = 0; (g_92 <= 8); g_92 += 1)
    {
        int i;
        if (g_31[g_92])
            break;
    }
    return p_74.f0;
}







static int * func_75(unsigned char p_76, unsigned char p_77, int * p_78, unsigned p_79)
{
    int *l_85 = &g_32;
    int **l_86 = &l_85;
    const int *l_118 = (void*)0;
    int *l_124 = &g_92;
    long long l_128 = 1L;
    union U0 *l_131 = &g_108[3][0];
    (*l_86) = l_85;
    if (((6L | (safe_lshift_func_int16_t_s_s(0L, (p_78 != (*l_86))))) < p_79))
    {
        int *l_91[2][5] = {{&g_6, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, (void*)0}};
        int i, j;
        g_92 = (**l_86);
        g_92 = (-1L);
        (*l_86) = &g_32;
    }
    else
    {
        int *l_93 = &g_92;
        union U0 * const * const l_133 = &l_131;
        unsigned l_165 = 0x2D28ECC6L;
        (*l_93) = (g_32 != g_6);
        if ((safe_add_func_uint16_t_u_u((**l_86), 0xB03FL)))
        {
            (*l_93) = g_31[1];
        }
        else
        {
            short l_98 = 0x0AB0L;
            int *l_125 = &g_32;
            union U0 *l_154 = &g_108[2][0];
            for (p_77 = 0; (p_77 > 14); ++p_77)
            {
                long long l_115 = 0x9BBF2B79F9BF173ALL;
                const int *l_116 = &g_92;
            }
            g_132 = (p_79 && (((safe_sub_func_int8_t_s_s((*l_125), l_128)) && (*l_125)) > (safe_sub_func_uint16_t_u_u(g_6, ((&g_108[2][0] == l_131) == p_77)))));
            if ((l_133 == (void*)0))
            {
                union U0 **l_136 = (void*)0;
                int l_151 = 4L;
                int ** const l_159[1] = {&l_125};
                int i;
                for (p_79 = 0; (p_79 < 24); ++p_79)
                {
                    unsigned char l_143[5] = {255UL, 1UL, 255UL, 1UL, 255UL};
                    int i;
                    l_136 = (void*)0;
                }
                l_165 = (-1L);
            }
            else
            {
                union U0 *l_166 = (void*)0;
                union U0 **l_167 = (void*)0;
                (*l_86) = p_78;
                g_168 = l_166;
                (*l_93) = ((void*)0 == &l_93);
            }
        }
        (*l_86) = p_78;
        l_93 = l_93;
    }
    (*l_124) = (safe_sub_func_uint8_t_u_u((p_77 ^ ((*l_124) != g_31[7])), (+(safe_mul_func_uint16_t_u_u((0xE968L >= (safe_sub_func_uint8_t_u_u((p_77 | g_92), g_144[2]))), p_76)))));
    return p_78;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_31[i], "g_31[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_108[i][j].f0, "g_108[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_132, "g_132", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_144[i], "g_144[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    transparent_crc(g_778, "g_778", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
