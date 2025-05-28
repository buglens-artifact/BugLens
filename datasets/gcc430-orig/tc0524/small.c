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



static unsigned g_6 = 18446744073709551615UL;
static unsigned g_23 = 0x96378555L;
static unsigned g_28 = 0x5F5B1B6FL;
static unsigned short g_61 = 6UL;
static int g_69 = 0x6AAF09D8L;
static int g_73 = 0x4C116104L;
static unsigned g_95 = 0x688AFC00L;
static unsigned short g_98 = 5UL;
static char g_142 = (-1L);
static unsigned char g_148 = 0xF3L;
static int *g_152 = &g_69;
static int **g_151 = &g_152;
static short g_186 = (-8L);
static short g_188 = 0x3560L;
static unsigned long long g_192 = 7UL;
static int g_229 = 0x1999CB80L;
static unsigned short g_232 = 0x5660L;
static unsigned char g_284 = 0x04L;
static int g_290 = 0x647FD4F9L;
static long long g_291 = 0x6A7F400C7566D79CLL;
static unsigned long long g_292 = 1UL;
static unsigned *g_297 = &g_28;
static unsigned g_348 = 0x8352AC2DL;
static short g_457 = 0x0496L;
static unsigned g_462 = 0x79546917L;
static short g_501 = 0L;
static unsigned short g_508 = 65533UL;
static long long g_511 = (-7L);
static unsigned short *g_525 = (void*)0;
static unsigned short **g_524 = &g_525;
static int g_528 = 7L;
static char g_589 = 0x78L;
static long long g_593 = 0x91FB98A573A4F682LL;
static char g_595 = 0L;
static unsigned g_608 = 0xA00BC215L;
static int g_662 = (-1L);
static short g_667 = 0x93ABL;
static unsigned g_679 = 1UL;
static unsigned long long g_708 = 0x7FB2388B40468612LL;
static char *g_718 = &g_595;
static char **g_717 = &g_718;



static long long func_1(void);
static int func_2(char p_3, unsigned char p_4, char p_5);
static char func_14(unsigned long long p_15, unsigned long long p_16, unsigned short p_17, char p_18);
static char func_20(unsigned p_21);
static int func_29(unsigned * p_30, unsigned * p_31, short p_32);
static unsigned * func_33(unsigned char p_34);
static unsigned short func_35(unsigned char p_36, unsigned short p_37, unsigned char p_38, unsigned * p_39, unsigned * p_40);
static char func_44(unsigned * p_45, unsigned short p_46);
static unsigned short func_47(unsigned char p_48, unsigned short p_49, int p_50, unsigned p_51);
static unsigned * func_52(int p_53, unsigned * p_54, long long p_55);
static long long func_1(void)
{
    int l_11 = 7L;
    int l_19 = (-1L);
    unsigned *l_22 = &g_23;
    unsigned *l_26 = (void*)0;
    unsigned *l_27 = &g_28;
    int *l_721 = &g_662;
    (*l_721) |= func_2(g_6, (((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(l_11, (safe_lshift_func_int8_t_s_u(((g_511 ^= func_14(l_11, ((l_19 = (g_6 <= l_11)) && l_19), l_11, func_20(((*l_27) = ((*l_22)--))))) || 5L), 1)))), 3)) < g_291) >= g_457), g_6);
    (*g_151) = &l_11;
    return (*l_721);
}







static int func_2(char p_3, unsigned char p_4, char p_5)
{
    int *l_519 = &g_69;
    int l_661 = 0L;
    int l_670 = 7L;
    for (g_73 = (-29); (g_73 == (-16)); ++g_73)
    {
        unsigned *l_522 = &g_462;
        int l_523 = 0x5A8E44C2L;
        int l_597 = (-3L);
        unsigned long long *l_628 = &g_292;
        int l_694 = 0L;
        short l_698 = 0x23D4L;
        int *l_720 = &l_670;
        if ((p_3 , p_5))
        {
            int *l_514 = &g_69;
            unsigned char *l_520 = &g_148;
            unsigned **l_521 = &g_297;
            unsigned short **l_526 = &g_525;
            int *l_527 = &g_528;
            int l_558 = 0x92A06D2CL;
            int l_588 = (-4L);
            long long *l_693 = &g_593;
            int ***l_695 = &g_151;
            (*l_514) = (-5L);
            (*l_527) |= (((((((p_4 , (safe_add_func_uint64_t_u_u(g_348, (+(safe_lshift_func_int16_t_s_s(((g_28 , 0L) >= l_523), (*l_519))))))) || p_5) >= 65528UL) , g_524) == l_526) ^ p_4) > 0x74L);
            for (g_292 = 23; (g_292 >= 21); --g_292)
            {
                long long l_543 = 0x215F5D2826EAED4DLL;
                unsigned long long *l_544 = &g_192;
                int l_545 = (-1L);
                int l_553 = 0xCC234C24L;
                int l_559 = (-1L);
                unsigned char *l_625 = (void*)0;
                if ((((p_5 == g_508) && ((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(func_29(&g_462, l_522, p_5), (safe_add_func_uint16_t_u_u(func_29(func_33((((*l_544) = ((l_543 , &g_188) != &g_501)) , p_4)), l_522, p_5), l_523)))) <= 0xB4E28337C76E8CC1LL) | p_5), (*l_527))), (*l_527))), 2)), g_528)) > 0x20BE43B6L)) != 2L))
                {
                    int *l_546 = &l_545;
                    int *l_547 = &l_545;
                    int *l_548 = &l_545;
                    int *l_549 = &g_528;
                    int *l_550 = (void*)0;
                    int *l_551 = &l_545;
                    int *l_552 = &l_523;
                    int *l_554 = &l_545;
                    int l_555 = 0L;
                    int *l_556 = &g_528;
                    int *l_557 = &g_528;
                    int *l_560 = &g_528;
                    int *l_561 = &l_559;
                    int l_562 = 0xE6477B13L;
                    int *l_563 = (void*)0;
                    int *l_564 = &l_523;
                    int *l_565 = (void*)0;
                    int *l_566 = &l_555;
                    int *l_567 = &l_545;
                    int *l_568 = &l_558;
                    int *l_569 = (void*)0;
                    int *l_570 = &l_558;
                    int *l_571 = &l_545;
                    int *l_572 = &l_523;
                    int *l_573 = &l_523;
                    int *l_574 = (void*)0;
                    int *l_575 = &g_69;
                    int *l_576 = &g_528;
                    int *l_577 = &l_558;
                    int *l_578 = &g_69;
                    int *l_579 = (void*)0;
                    int *l_580 = &l_562;
                    int *l_581 = &l_562;
                    int *l_582 = &g_69;
                    int *l_583 = &l_545;
                    int *l_584 = &l_562;
                    int *l_585 = (void*)0;
                    int *l_586 = &l_558;
                    int *l_587 = (void*)0;
                    int *l_590 = &l_555;
                    int *l_591 = (void*)0;
                    int *l_592 = &l_559;
                    int *l_594 = &l_562;
                    int *l_596 = &l_588;
                    int *l_598 = &l_558;
                    int *l_599 = &l_588;
                    int *l_600 = &l_523;
                    int *l_601 = (void*)0;
                    int *l_602 = &g_69;
                    int l_603 = (-10L);
                    int *l_604 = &l_545;
                    int *l_605 = &l_558;
                    int *l_606 = &l_597;
                    int *l_607 = &l_545;
                    (*l_527) |= l_523;
                    ++g_608;
                    if (l_543)
                        break;
                }
                else
                {
                    char *l_611 = (void*)0;
                    char *l_612 = &g_595;
                    unsigned long long *l_627 = &g_292;
                    unsigned long long **l_626 = &l_627;
                    long long *l_629 = &l_543;
                    (*l_527) = (((*l_612) = 0x42L) , (safe_lshift_func_uint8_t_u_u((((((*l_629) = (safe_mul_func_uint8_t_u_u(p_4, (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((--(*l_544)) != (safe_rshift_func_uint8_t_u_s((((*l_522) = 8UL) & (g_61 , 7L)), 2))) ^ g_291), 5)), p_3))))) < p_5) && p_4) < (*l_519)), 2)));
                    return p_3;
                }
                for (p_3 = (-2); (p_3 == (-5)); p_3 = safe_sub_func_uint8_t_u_u(p_3, 3))
                {
                    short l_688 = (-9L);
                    long long *l_692 = &l_543;
                    long long **l_691 = &l_692;
                    char *l_696 = &g_595;
                    for (l_543 = 0; (l_543 > 24); l_543 = safe_add_func_int8_t_s_s(l_543, 1))
                    {
                        int *l_634 = &l_553;
                        int *l_635 = &l_545;
                        int *l_636 = &l_545;
                        int *l_637 = &g_528;
                        int *l_638 = &l_545;
                        int *l_639 = &g_69;
                        int *l_640 = &l_597;
                        int *l_641 = &g_528;
                        int *l_642 = &l_523;
                        int *l_643 = (void*)0;
                        int *l_644 = &l_597;
                        int *l_645 = &l_558;
                        int *l_646 = (void*)0;
                        int *l_647 = (void*)0;
                        int *l_648 = &l_558;
                        int *l_649 = &g_528;
                        int *l_650 = &l_558;
                        int *l_651 = (void*)0;
                        int *l_652 = &l_545;
                        int *l_653 = &l_558;
                        int *l_654 = (void*)0;
                        int *l_655 = (void*)0;
                        int *l_656 = &l_558;
                        int *l_657 = &l_553;
                        int *l_658 = &g_69;
                        int *l_659 = &l_559;
                        int *l_660 = (void*)0;
                        int *l_663 = &l_661;
                        int *l_664 = &l_558;
                        int *l_665 = &l_559;
                        int *l_666 = (void*)0;
                        int *l_668 = &l_597;
                        int *l_669 = (void*)0;
                        int *l_671 = &l_523;
                        int *l_672 = &l_597;
                        int *l_673 = &g_528;
                        int l_674 = 0x24D7A882L;
                        int *l_675 = &l_661;
                        int *l_676 = &l_670;
                        int *l_677 = &l_553;
                        int *l_678 = &l_523;
                        g_679--;
                    }
                    if (g_292)
                        continue;
                    (*l_527) |= ((*l_519) , (((p_3 & (safe_add_func_int32_t_s_s((((*l_696) = (((9UL != (safe_mod_func_uint32_t_u_u((p_3 & (safe_mul_func_uint16_t_u_u((((*l_514) = (0xF3L >= (((**l_521) = l_688) & (safe_lshift_func_uint8_t_u_u((g_292 >= 0x6B7AL), 5))))) < 4294967295UL), p_5))), p_4))) , (void*)0) != l_695)) != p_5), p_4))) & l_688) , 1L));
                }
            }
        }
        else
        {
            int *l_697 = &g_528;
            unsigned long long *l_699 = &g_192;
            int l_703 = 0x1E99F574L;
            unsigned long long *l_707 = &g_708;
            int ****l_709 = (void*)0;
            int ***l_711 = &g_151;
            int ****l_710 = &l_711;
            unsigned char *l_712 = &g_148;
            (*g_151) = func_33((p_4 , g_457));
            (*l_519) = ((l_697 = func_33(g_292)) != ((((*l_699) |= l_698) < func_29(l_519, &g_608, (((*l_710) = (((safe_unary_minus_func_uint16_t_u((safe_mod_func_int32_t_s_s(p_5, l_703)))) && (safe_lshift_func_uint8_t_u_s((((((l_694 >= (((*l_707) = (safe_unary_minus_func_int8_t_s(((l_703 | 0x3BL) != 0xD12F06FB0A4E482CLL)))) , 4294967295UL)) , (void*)0) != l_707) <= (*l_519)) | 0xFAAA504CCB4D2650LL), 6))) , &g_151)) == &g_151))) , (void*)0));
            (*l_519) = (g_23 <= (--(*l_712)));
            for (g_192 = 3; (g_192 == 20); g_192++)
            {
                char ***l_719 = &g_717;
                l_694 &= p_3;
                if (p_4)
                    break;
                (*l_719) = g_717;
                (*g_151) = l_720;
            }
        }
    }
    (*l_519) ^= p_3;
    return (*l_519);
}







static char func_14(unsigned long long p_15, unsigned long long p_16, unsigned short p_17, char p_18)
{
    long long l_354 = 0x3B49003B356D7480LL;
    int l_394 = 5L;
    int l_399 = 1L;
    int l_425 = (-1L);
    int l_446 = 0xFBDDCB5EL;
    int l_448 = 4L;
    long long l_497 = 1L;
    for (g_23 = 6; (g_23 >= 53); g_23++)
    {
        (**g_151) ^= (safe_unary_minus_func_uint8_t_u(l_354));
        return g_290;
    }
    for (g_284 = 14; (g_284 >= 11); g_284 = safe_sub_func_int16_t_s_s(g_284, 6))
    {
        int *l_357 = &g_73;
        int *l_358 = &g_69;
        int *l_359 = (void*)0;
        int *l_360 = (void*)0;
        int *l_361 = &g_69;
        int *l_362 = &g_69;
        int *l_363 = &g_69;
        int *l_364 = (void*)0;
        int *l_365 = &g_73;
        int *l_366 = &g_69;
        int *l_367 = &g_69;
        int *l_368 = &g_73;
        int l_369 = 0xFA5ED00FL;
        int *l_370 = &l_369;
        int *l_371 = (void*)0;
        int *l_372 = &g_73;
        int *l_373 = &g_73;
        int *l_374 = &g_73;
        int *l_375 = &g_69;
        int *l_376 = &l_369;
        int *l_377 = &g_73;
        int *l_378 = &l_369;
        int *l_379 = &l_369;
        int *l_380 = &g_69;
        int *l_381 = (void*)0;
        int *l_382 = &l_369;
        int *l_383 = &g_69;
        int *l_384 = &g_73;
        int l_385 = 0xE3E6D3A6L;
        int *l_386 = &l_369;
        int *l_387 = &g_69;
        int l_388 = 1L;
        int *l_389 = &l_369;
        int *l_390 = &g_69;
        int *l_391 = (void*)0;
        int *l_392 = &l_369;
        int *l_393 = &l_388;
        int *l_395 = &g_69;
        int *l_396 = &g_69;
        int *l_397 = &l_388;
        int *l_398 = &g_69;
        int *l_400 = &l_394;
        int *l_401 = &l_369;
        int *l_402 = (void*)0;
        int *l_403 = &g_69;
        int *l_404 = &l_394;
        int *l_405 = (void*)0;
        int *l_406 = &g_73;
        int *l_407 = &l_399;
        int *l_408 = &g_69;
        int l_409 = 0xD2AB853EL;
        int *l_410 = (void*)0;
        int *l_411 = (void*)0;
        int *l_412 = &l_388;
        int *l_413 = &l_409;
        int *l_414 = &l_394;
        int *l_415 = &l_388;
        int *l_416 = &l_388;
        int *l_417 = &l_385;
        int *l_418 = &l_388;
        int *l_419 = &g_69;
        int *l_420 = &l_369;
        int *l_421 = &l_409;
        int *l_422 = &g_69;
        int l_423 = 0xC422D24AL;
        int *l_424 = &l_394;
        int *l_426 = &l_425;
        int *l_427 = &l_388;
        int *l_428 = &l_394;
        int *l_429 = &l_394;
        int *l_430 = &g_69;
        int *l_431 = &l_425;
        int *l_432 = (void*)0;
        int *l_433 = &l_385;
        int *l_434 = &l_409;
        int *l_435 = &l_388;
        int *l_436 = &l_385;
        int *l_437 = &l_409;
        int *l_438 = (void*)0;
        int *l_439 = (void*)0;
        int l_440 = 0x8022D0BAL;
        int *l_441 = &l_369;
        int *l_442 = &l_409;
        int *l_443 = &l_369;
        int *l_444 = &l_385;
        int *l_445 = &l_440;
        int *l_447 = &l_385;
        int *l_449 = &l_425;
        int *l_450 = &l_448;
        int *l_451 = &l_409;
        int *l_452 = &l_423;
        int *l_453 = &l_388;
        int *l_454 = (void*)0;
        int *l_455 = &l_423;
        int *l_456 = &l_385;
        int *l_458 = &l_446;
        int *l_459 = (void*)0;
        int *l_460 = &g_69;
        int *l_461 = &l_369;
        g_462++;
    }
    for (l_394 = 0; (l_394 == (-3)); l_394--)
    {
        char l_467 = 0x9FL;
        int *l_468 = &g_69;
        int *l_469 = &g_73;
        int *l_470 = &l_448;
        int *l_471 = &l_399;
        int *l_472 = &l_448;
        int *l_473 = &g_69;
        int *l_474 = &g_73;
        int *l_475 = &l_425;
        int l_476 = (-1L);
        int *l_477 = &g_73;
        int *l_478 = &g_69;
        int l_479 = 0x3450267AL;
        int *l_480 = &l_446;
        int *l_481 = (void*)0;
        int *l_482 = &l_399;
        int *l_483 = &g_69;
        int *l_484 = &g_73;
        int *l_485 = &g_69;
        int *l_486 = &l_425;
        int *l_487 = &l_446;
        int *l_488 = &g_73;
        int *l_489 = &l_425;
        int *l_490 = &l_399;
        int *l_491 = &l_448;
        int *l_492 = &l_399;
        int *l_493 = &l_399;
        int *l_494 = (void*)0;
        int *l_495 = &l_479;
        int l_496 = 2L;
        int l_498 = (-2L);
        int l_499 = 0x80539E8BL;
        int *l_500 = &l_479;
        int *l_502 = &l_446;
        int *l_503 = &l_399;
        int l_504 = 0xA785BCADL;
        int *l_505 = &g_69;
        int *l_506 = &l_448;
        int *l_507 = &g_69;
        g_508--;
    }
    (*g_151) = (void*)0;
    return l_425;
}







static char func_20(unsigned p_21)
{
    unsigned l_41 = 0xF5E3D1AAL;
    unsigned short *l_60 = &g_61;
    unsigned short *l_66 = (void*)0;
    int l_67 = (-3L);
    unsigned *l_156 = &g_28;
    unsigned **l_155 = &l_156;
    long long l_193 = 0xD0BAEE16EA25DA63LL;
    unsigned long long l_295 = 18446744073709551606UL;
    int l_299 = 0L;
    int *l_300 = &g_69;
    int *l_301 = &l_67;
    int *l_302 = (void*)0;
    int *l_303 = &l_67;
    int *l_304 = &l_299;
    int *l_305 = &l_299;
    int *l_306 = &g_73;
    int *l_307 = (void*)0;
    int *l_308 = &l_299;
    int *l_309 = (void*)0;
    int *l_310 = &l_299;
    int *l_311 = (void*)0;
    int *l_312 = &g_69;
    int *l_313 = (void*)0;
    int *l_314 = &l_67;
    int *l_315 = (void*)0;
    int *l_316 = (void*)0;
    int *l_317 = (void*)0;
    int *l_318 = (void*)0;
    int *l_319 = (void*)0;
    int *l_320 = &l_299;
    int *l_321 = &g_73;
    int *l_322 = &g_69;
    int *l_323 = (void*)0;
    int *l_324 = &l_67;
    int *l_325 = &g_69;
    int *l_326 = &g_69;
    int *l_327 = &l_299;
    int *l_328 = &g_73;
    int *l_329 = &l_67;
    int *l_330 = &l_67;
    int *l_331 = &g_69;
    int l_332 = 0x994BCA52L;
    int *l_333 = &l_67;
    int *l_334 = &g_73;
    int *l_335 = &l_332;
    int *l_336 = &g_73;
    int l_337 = 0xCD010C7FL;
    int *l_338 = &l_332;
    int l_339 = 8L;
    int *l_340 = &l_299;
    int *l_341 = &g_69;
    int l_342 = 0xFBA643C3L;
    int *l_343 = &l_339;
    int *l_344 = &l_299;
    int *l_345 = &l_299;
    int *l_346 = &l_299;
    int *l_347 = &l_337;
    l_299 |= (!func_29(((*l_155) = func_33((l_295 = (func_35(((l_41 & ((safe_rshift_func_int8_t_s_s(func_44(&g_28, ((*l_60) = func_47((((*l_155) = func_52(l_41, &g_28, (safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((*l_60) = p_21), (l_67 ^= ((p_21 || (safe_add_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s((((((((0xFA1B4415E40C8830LL >= l_41) == (p_21 > l_41)) , l_41) , l_41) & g_6) < p_21) && 0x20C256FAE7A4860CLL), l_41)) && g_6), p_21))) && g_6)))), 0x437EL)))) == (void*)0), p_21, g_142, l_41))), 4)) == p_21)) | p_21), l_41, l_193, &g_28, &g_28) , l_67)))), g_297, p_21));
    g_348--;
    return g_291;
}







static int func_29(unsigned * p_30, unsigned * p_31, short p_32)
{
    int l_298 = 5L;
    return l_298;
}







static unsigned * func_33(unsigned char p_34)
{
    int *l_296 = &g_73;
    (*g_151) = l_296;
    return &g_28;
}







static unsigned short func_35(unsigned char p_36, unsigned short p_37, unsigned char p_38, unsigned * p_39, unsigned * p_40)
{
    int *l_194 = (void*)0;
    int *l_195 = (void*)0;
    int *l_196 = &g_69;
    int *l_197 = &g_73;
    int *l_198 = &g_69;
    int *l_199 = &g_69;
    int l_200 = 0L;
    int *l_201 = &l_200;
    int *l_202 = &l_200;
    int *l_203 = &g_69;
    int *l_204 = (void*)0;
    int l_205 = 0xED5AC3C9L;
    int *l_206 = &l_200;
    int l_207 = 7L;
    int *l_208 = &l_200;
    int *l_209 = (void*)0;
    int *l_210 = &g_69;
    int l_211 = 0L;
    int *l_212 = &l_207;
    int *l_213 = &g_73;
    int l_214 = 0xA00283E5L;
    int *l_215 = &l_211;
    int *l_216 = &l_200;
    int *l_217 = (void*)0;
    int *l_218 = &l_200;
    int l_219 = 1L;
    int *l_220 = &g_69;
    int *l_221 = &l_211;
    int *l_222 = &l_214;
    int l_223 = 0x078B87F1L;
    int *l_224 = &l_207;
    int *l_225 = (void*)0;
    int *l_226 = &l_205;
    int *l_227 = &l_214;
    int *l_228 = (void*)0;
    int *l_230 = &l_205;
    int *l_231 = &l_200;
    int *l_235 = (void*)0;
    int *l_236 = &l_207;
    int *l_237 = (void*)0;
    int *l_238 = &g_69;
    int *l_239 = &l_214;
    int *l_240 = (void*)0;
    int *l_241 = &g_73;
    int *l_242 = &g_73;
    int *l_243 = (void*)0;
    int *l_244 = &l_207;
    int *l_245 = &g_73;
    int *l_246 = &l_207;
    int *l_247 = &l_219;
    int *l_248 = &l_219;
    int *l_249 = &l_207;
    int *l_250 = &g_69;
    int *l_251 = &g_73;
    int *l_252 = (void*)0;
    int *l_253 = &g_73;
    int *l_254 = &l_211;
    int *l_255 = &l_207;
    int *l_256 = &l_219;
    int *l_257 = &l_207;
    int *l_258 = (void*)0;
    int *l_259 = &l_211;
    int *l_260 = &g_69;
    int *l_261 = &l_223;
    int *l_262 = &l_205;
    int *l_263 = (void*)0;
    int *l_264 = &g_73;
    int *l_265 = &g_73;
    int *l_266 = &l_200;
    int *l_267 = &l_219;
    int *l_268 = (void*)0;
    int *l_269 = &l_223;
    int *l_270 = (void*)0;
    int l_271 = (-1L);
    int *l_272 = (void*)0;
    int *l_273 = &g_73;
    int *l_274 = &g_69;
    int *l_275 = &l_211;
    int *l_276 = &l_200;
    int *l_277 = (void*)0;
    int *l_278 = &l_223;
    int *l_279 = &l_271;
    int *l_280 = &g_69;
    int *l_281 = &l_205;
    int *l_282 = &l_200;
    int *l_283 = &l_211;
    g_232--;
    ++g_284;
    for (l_214 = 0; (l_214 < 17); ++l_214)
    {
        unsigned char l_289 = 1UL;
        if ((*g_152))
            break;
        if ((**g_151))
            continue;
        l_289 ^= ((*l_210) &= p_37);
    }
    ++g_292;
    return p_37;
}







static char func_44(unsigned * p_45, unsigned short p_46)
{
    short l_169 = 4L;
    unsigned short *l_176 = (void*)0;
    unsigned short **l_175 = &l_176;
    unsigned char *l_179 = (void*)0;
    unsigned char *l_180 = &g_148;
    short *l_185 = &g_186;
    short *l_187 = &g_188;
    unsigned char *l_189 = &g_148;
    unsigned long long *l_190 = (void*)0;
    unsigned long long *l_191 = &g_192;
    (*g_152) = l_169;
    (**g_151) = ((((((safe_rshift_func_uint16_t_u_s(l_169, ((~l_169) , ((p_46 | ((*l_191) ^= (safe_unary_minus_func_uint16_t_u((safe_add_func_int64_t_s_s((((*l_175) = &p_46) != ((safe_lshift_func_int8_t_s_u((l_179 == (l_180 = &g_148)), ((*l_189) = (safe_mul_func_int8_t_s_s(func_47(l_169, p_46, func_47((safe_rshift_func_int16_t_s_u(((*l_187) = ((*l_185) = (-2L))), l_169)), p_46, p_46, l_169), (*p_45)), g_23))))) , &p_46)), 18446744073709551615UL)))))) >= 0xDDA2347DC7AB573DLL)))) == 1UL) & p_46) || g_61) | l_169) , p_46);
    return l_169;
}







static unsigned short func_47(unsigned char p_48, unsigned short p_49, int p_50, unsigned p_51)
{
    int l_161 = 0xFEB13CC2L;
    unsigned short *l_166 = &g_98;
    (**g_151) &= (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((g_148 , 5L) & g_23), ((+(+g_61)) != (l_161 , (safe_add_func_int8_t_s_s(0xA1L, (safe_lshift_func_uint8_t_u_u(g_23, 4)))))))), (((--(*l_166)) , ((void*)0 != &g_61)) >= l_161)));
    return l_161;
}







static unsigned * func_52(int p_53, unsigned * p_54, long long p_55)
{
    char l_70 = 0x23L;
    int l_101 = (-1L);
    int l_126 = 1L;
    int l_127 = 0xC8B8ECDEL;
    int l_140 = 0L;
    unsigned long long l_144 = 0UL;
    unsigned char *l_147 = &g_148;
    long long l_154 = 0L;
    if ((p_53 , 0L))
    {
        int *l_68 = &g_69;
        (*l_68) = (1L < 0x26FFEA1EL);
    }
    else
    {
        int *l_71 = &g_69;
        int *l_72 = &g_73;
        int l_115 = 0xDEA8F443L;
        int l_117 = (-3L);
        int l_123 = (-1L);
        int l_132 = 0L;
        (*l_72) = ((*l_71) = l_70);
        for (g_69 = (-22); (g_69 > 1); g_69 = safe_add_func_uint64_t_u_u(g_69, 4))
        {
            int *l_76 = &g_73;
            int *l_77 = &g_73;
            int *l_78 = &g_73;
            int *l_79 = &g_73;
            int *l_80 = (void*)0;
            int *l_81 = &g_73;
            int *l_82 = &g_73;
            int *l_83 = &g_73;
            int *l_84 = (void*)0;
            int *l_85 = &g_73;
            int *l_86 = &g_73;
            int *l_87 = &g_73;
            int *l_88 = (void*)0;
            int *l_89 = &g_73;
            int *l_90 = &g_73;
            int *l_91 = &g_73;
            int *l_92 = &g_73;
            int *l_93 = &g_73;
            int *l_94 = &g_73;
            int *l_102 = &g_73;
            int *l_103 = &l_101;
            int *l_104 = &l_101;
            int l_105 = 0xBCDA4F1DL;
            int *l_106 = &g_73;
            int *l_107 = (void*)0;
            int *l_108 = &l_105;
            int *l_109 = &l_105;
            int *l_110 = &l_105;
            int *l_111 = &l_105;
            int *l_112 = &g_73;
            int *l_113 = &l_101;
            int *l_114 = (void*)0;
            int *l_116 = (void*)0;
            int l_118 = (-7L);
            int *l_119 = (void*)0;
            int *l_120 = &l_101;
            int *l_121 = (void*)0;
            int *l_122 = &l_115;
            int *l_124 = &l_105;
            int *l_125 = &g_73;
            int *l_128 = &l_101;
            int *l_129 = &g_73;
            int *l_130 = (void*)0;
            int *l_131 = &g_73;
            int *l_133 = &l_117;
            int *l_134 = (void*)0;
            int *l_135 = &l_127;
            int *l_136 = &l_123;
            int *l_137 = &l_105;
            int *l_138 = &l_105;
            int *l_139 = &l_123;
            int *l_141 = &l_132;
            int *l_143 = &l_127;
            ++g_95;
            (*l_92) |= p_55;
            --g_98;
            l_144++;
        }
    }
    if ((p_55 & (++(*l_147))))
    {
        int ***l_153 = &g_151;
        (*l_153) = g_151;
    }
    else
    {
        (*g_152) = l_154;
        (*g_152) = 0x633072FEL;
    }
    return &g_28;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_457, "g_457", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_589, "g_589", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_608, "g_608", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_679, "g_679", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
