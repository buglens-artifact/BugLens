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


struct S0 {
   const unsigned long long f0;
   signed f1 : 26;
   unsigned f2 : 6;
   signed f3 : 16;
   unsigned f4 : 21;
   signed f5 : 13;
   unsigned short f6;
   signed f7 : 14;
   unsigned f8 : 29;
   const signed f9 : 9;
};


static const short g_56 = 0x3261L;
static int g_58 = (-1L);
static const int *g_80 = &g_58;
static const int **g_79 = &g_80;
static int g_105 = 3L;
static const int *g_109 = &g_58;
static struct S0 g_132 = {0xD520E29191A0FB34LL,3877,4,-42,918,73,0xEB79L,-20,7215,10};
static struct S0 g_203 = {0xE87DA6A6FC2D246ELL,-886,4,87,2,-2,65535UL,-62,18739,-14};
static int g_219 = (-7L);
static struct S0 g_293 = {18446744073709551615UL,-8163,4,-155,1074,63,1UL,114,22192,1};
static struct S0 *g_292 = &g_293;
static const unsigned short g_316 = 0xE502L;
static unsigned short g_459 = 0x3A85L;
static int g_520 = 0x87867F29L;
static struct S0 **g_547 = &g_292;
static struct S0 ***g_546 = &g_547;
static unsigned g_623 = 0x097875A4L;
static unsigned short g_680 = 0UL;
static int g_795 = 0x9DFA1A4FL;
static short g_828 = 0x5B3FL;
static const char g_991 = 0xCAL;
static int g_994 = 0x16D98F99L;



static unsigned char func_1(void);
static unsigned short func_7(long long p_8, int p_9, char p_10);
static int func_12(short p_13, int p_14);
static unsigned long long func_15(unsigned p_16);
static unsigned func_17(short p_18, char p_19, const unsigned char p_20, unsigned short p_21);
static short func_22(short p_23);
static unsigned char func_26(char p_27, struct S0 p_28);
static struct S0 func_30(int p_31, int p_32, int p_33, char p_34, short p_35);
static unsigned short func_40(unsigned p_41, const char p_42, unsigned long long p_43);
static char func_49(short p_50, unsigned long long p_51, const char p_52);
static unsigned char func_1(void)
{
    unsigned long long l_11 = 8UL;
    short l_992 = 0x2625L;
    int *l_993 = &g_994;
    int *l_995 = &g_994;
    int *l_996 = &g_58;
    const int ** const l_1005 = &g_109;
    struct S0 **l_1006 = &g_292;
    struct S0 l_1007 = {18446744073709551607UL,-2097,3,-176,650,-66,0x01C9L,-48,3991,-16};
    (*l_993) &= (safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(func_7(l_11, func_12(((l_11 & func_15(func_17(func_22(l_11), (safe_mod_func_int16_t_s_s((func_49(l_11, (safe_sub_func_uint64_t_u_u(((((251UL ^ (safe_lshift_func_int16_t_s_u((0x25L <= func_49((safe_sub_func_int32_t_s_s(((g_293.f5 | 0xDA1CL) >= 2L), l_11)), l_11, g_293.f0)), 0))) | l_11) == 18446744073709551615UL) > g_203.f9), 0x7CE60284BEE72BB2LL)), l_11) <= g_293.f9), g_203.f7)), l_11, g_132.f1))) == g_132.f1), g_203.f1), l_11))), l_992)), 0x37L));
    l_996 = l_995;
    (*g_547) = (*g_547);
    (*l_995) = (!((safe_div_func_int16_t_s_s((((((safe_sub_func_int16_t_s_s(g_203.f2, (safe_rshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((l_1005 != &g_109), (*l_995))) & (l_1006 == (*g_546))), 6)))) || ((func_26(g_520, l_1007) > g_203.f1) | g_132.f9)) <= (*l_993)) >= (*l_993)) < g_994), (*l_996))) ^ g_293.f9));
    return g_293.f4;
}







static unsigned short func_7(long long p_8, int p_9, char p_10)
{
    int *l_799 = &g_795;
    struct S0 l_829 = {1UL,-7636,2,-99,1120,74,65531UL,-72,17910,21};
    int **l_840 = &l_799;
    int ***l_839 = &l_840;
    (*l_799) &= 0L;
    (*l_799) &= (0L >= p_8);
    if (((*l_799) != (safe_rshift_func_int8_t_s_s((*l_799), 4))))
    {
        for (g_203.f6 = 0; (g_203.f6 >= 42); g_203.f6 = safe_add_func_uint64_t_u_u(g_203.f6, 4))
        {
            (*l_799) ^= ((safe_add_func_uint64_t_u_u((!p_10), (~(safe_lshift_func_uint16_t_u_u(g_293.f8, 5))))) && p_10);
            if (p_10)
                break;
        }
    }
    else
    {
        int *l_811 = &g_795;
        struct S0 * const **l_853 = (void*)0;
        struct S0 l_862 = {0UL,-7478,4,-81,836,1,0x6D39L,-63,19166,-9};
        for (p_10 = 0; (p_10 <= (-2)); --p_10)
        {
            unsigned l_827 = 18446744073709551615UL;
            struct S0 **l_867 = (void*)0;
        }
        for (g_623 = (-7); (g_623 < 27); g_623 = safe_add_func_uint32_t_u_u(g_623, 9))
        {
            int * const *l_877 = &l_799;
            int * const **l_876 = &l_877;
            for (g_219 = 0; (g_219 != (-15)); g_219 = safe_sub_func_int16_t_s_s(g_219, 8))
            {
                (*l_799) = (-1L);
            }
            for (g_132.f6 = 0; (g_132.f6 != 60); g_132.f6 = safe_add_func_uint32_t_u_u(g_132.f6, 6))
            {
                unsigned short l_878 = 0xA8C8L;
                struct S0 l_900 = {0x408915E22E2ECDC1LL,-1854,3,-121,193,-5,0x128BL,65,19026,19};
                int *l_901 = (void*)0;
                (*l_811) = func_49(((g_203.f6 <= (p_9 || (p_9 == ((safe_rshift_func_uint8_t_u_s(0xF8L, p_8)) || (g_293.f7 ^ (l_876 == (void*)0)))))) <= (l_878 && (***l_876))), g_132.f9, p_8);
                for (l_878 = 0; (l_878 < 12); l_878++)
                {
                    char l_891 = 0x75L;
                    if ((((safe_mod_func_uint32_t_u_u(l_878, (safe_mod_func_int8_t_s_s((g_132.f4 < (safe_add_func_uint8_t_u_u((*l_799), (safe_lshift_func_int16_t_s_u(p_8, (l_878 | (6UL != ((g_795 | 0x87184BEAL) && (l_891 || 0xDCL))))))))), 0x1FL)))) <= g_203.f8) | 0x27L))
                    {
                        return p_8;
                    }
                    else
                    {
                        char l_893 = 0L;
                        g_132.f5 = (safe_unary_minus_func_uint64_t_u(func_26(func_26(((l_893 <= (0x38971F73798F15B5LL > (*l_799))) ^ (safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((p_8 > l_891) | 0UL), p_10)), (safe_add_func_uint64_t_u_u(l_878, (**l_877)))))), (**g_547)), l_900)));
                        (*g_79) = l_901;
                    }
                    (*g_547) = (**g_546);
                }
                (*l_811) = (safe_mod_func_int16_t_s_s((&l_840 == &g_79), (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((*l_839) == &l_811), (safe_rshift_func_int16_t_s_s(5L, 8)))), func_49(p_8, (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(g_132.f3, (safe_sub_func_int8_t_s_s((safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((*l_799), 9)), (~(safe_div_func_int8_t_s_s(g_105, p_10))))), p_9)))), p_8)), (*l_811))))));
                if ((**l_877))
                    break;
            }
            (**l_877) |= p_9;
        }
        for (l_862.f6 = 0; (l_862.f6 >= 53); l_862.f6 = safe_add_func_uint64_t_u_u(l_862.f6, 3))
        {
            const long long l_926 = 0x4C32948DEBFD648ELL;
            int *l_933 = &g_105;
            int * const l_934 = &g_219;
            struct S0 l_939 = {0x4E1526A09F172CA6LL,2366,4,241,502,4,0x49A6L,-36,868,-3};
            int ***l_940 = &l_840;
            (*l_799) = (safe_lshift_func_uint8_t_u_u(p_10, 5));
        }
    }
    for (g_219 = 8; (g_219 >= (-3)); g_219 = safe_sub_func_int16_t_s_s(g_219, 9))
    {
        unsigned l_976 = 0xF264539FL;
        int l_979 = 0x3D84D7E4L;
        int *l_980 = &g_58;
        (*l_980) |= (safe_div_func_uint8_t_u_u((~((((safe_mod_func_int64_t_s_s(p_9, p_8)) | (***l_839)) == (safe_rshift_func_uint8_t_u_s((l_976 > ((0x87L || (safe_rshift_func_uint16_t_u_s(1UL, 13))) | (g_203.f6 ^ (g_293.f8 >= ((g_459 >= l_979) < 0x2A1BE9BBL))))), p_9))) || (**l_840))), g_105));
        g_132.f7 ^= (func_49(p_10, (safe_lshift_func_int8_t_s_u((*l_980), (safe_mod_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((**l_840), g_293.f4)) & ((~(safe_sub_func_int16_t_s_s((*l_980), (-4L)))) & p_9)), (~(*l_980)))))), p_9) | 0x8A13L);
        (*l_840) = (*l_840);
        for (g_680 = 0; (g_680 >= 10); g_680++)
        {
            (**l_840) = p_8;
            (**l_840) = g_991;
        }
    }
    return g_132.f0;
}







static int func_12(short p_13, int p_14)
{
    unsigned char l_769 = 0UL;
    int *l_798 = &g_219;
    for (g_132.f6 = (-25); (g_132.f6 < 15); g_132.f6 = safe_add_func_int16_t_s_s(g_132.f6, 7))
    {
        const int l_772 = 0xCB811CCBL;
        unsigned short l_775 = 0UL;
        int *l_776 = &g_219;
        int *l_794 = &g_795;
        (*l_776) = (l_769 | ((safe_div_func_int32_t_s_s((((((((0x4FL == ((void*)0 != (*g_546))) | l_772) >= (p_14 > l_772)) ^ (safe_mod_func_int16_t_s_s(0x1AEEL, func_17(p_14, l_775, l_769, g_203.f3)))) | 0xCEL) != p_14) >= l_772), l_769)) | g_132.f8));
        for (l_775 = (-27); (l_775 >= 37); l_775++)
        {
            unsigned l_781 = 18446744073709551609UL;
            (*l_776) &= 0L;
            (*l_776) &= (safe_sub_func_uint32_t_u_u(3UL, l_781));
            for (g_520 = (-15); (g_520 < 20); g_520++)
            {
                (*g_547) = (**g_546);
            }
        }
        (*l_794) ^= (safe_lshift_func_int16_t_s_u(((!(safe_div_func_uint16_t_u_u(((0xA790L == (safe_div_func_uint64_t_u_u((*l_776), func_26(g_459, (**g_547))))) >= 0xB1C424F4C507451FLL), l_769))) > l_769), g_56));
    }
    (*l_798) ^= (safe_rshift_func_uint8_t_u_u(l_769, 4));
    return (*l_798);
}







static unsigned long long func_15(unsigned p_16)
{
    int *l_551 = (void*)0;
    int l_561 = 0L;
    struct S0 **l_586 = &g_292;
    const char l_600 = 0xDBL;
    int l_644 = 0xE0C45A79L;
    long long l_684 = 2L;
    int **l_731 = &l_551;
    unsigned l_766 = 0xD228FE51L;
    if ((((void*)0 == l_551) || (safe_div_func_int32_t_s_s(0xB756C935L, (g_105 && p_16)))))
    {
        int l_554 = (-1L);
        int *l_559 = (void*)0;
        int l_560 = 0L;
        l_560 ^= (l_554 || ((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((g_132.f4 && p_16), g_293.f2)), 0L)) == g_132.f5));
        l_561 |= 1L;
        (*g_79) = &l_561;
        for (g_459 = 0; (g_459 <= 42); g_459 = safe_add_func_int64_t_s_s(g_459, 7))
        {
            if ((**g_79))
                break;
            return g_203.f4;
        }
    }
    else
    {
        int l_564 = 0L;
        int **l_571 = &l_551;
        int *l_574 = &g_58;
        (*l_574) ^= (l_564 >= (p_16 >= (l_564 <= (safe_mod_func_int16_t_s_s(((func_49(g_293.f5, (safe_rshift_func_uint8_t_u_s(((void*)0 == l_571), 5)), p_16) <= (safe_add_func_int64_t_s_s((-1L), 1UL))) >= 0xE7L), l_561)))));
    }
    if (p_16)
    {
        int *l_577 = (void*)0;
        int *l_578 = &g_219;
        (*l_578) = (safe_div_func_int16_t_s_s(p_16, g_293.f9));
        (*l_578) ^= (safe_sub_func_uint32_t_u_u(func_49(p_16, p_16, p_16), (l_577 == &l_561)));
        l_578 = &l_561;
    }
    else
    {
        struct S0 **l_585 = &g_292;
        const int l_593 = 0x51861853L;
        unsigned l_603 = 1UL;
        int *l_606 = &l_561;
        int *l_609 = &g_219;
        unsigned l_667 = 0xDF1E7491L;
        short l_681 = 0x80B5L;
        int ***l_706 = (void*)0;
        int **l_737 = &l_609;
        unsigned short l_744 = 0UL;
        (*g_79) = (*g_79);
        if ((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((func_17(g_203.f3, (((l_585 != l_586) > ((g_132.f2 < p_16) > (safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((g_203.f0 != 0x0955D3BFL) < (p_16 ^ g_58)), p_16)), (*g_109))), 0x0DB2EAB432D33EEFLL)))) && g_58), l_593, l_593) & g_132.f8), g_293.f4)), p_16)))
        {
            g_58 |= 0x581A0153L;
        }
        else
        {
            char l_599 = 0xE4L;
            (*g_547) = (*l_586);
            if (l_593)
            {
                unsigned short l_597 = 0x9B43L;
                int **l_598 = &l_551;
                for (g_203.f6 = 0; (g_203.f6 == 56); g_203.f6++)
                {
                    int *l_596 = &g_219;
                    l_551 = l_596;
                    if (l_593)
                    {
                        (*l_596) = p_16;
                        if (l_597)
                            break;
                    }
                    else
                    {
                        (**l_598) |= ((l_598 != l_598) || (1L != l_599));
                    }
                    (*l_596) = 0x58AF4F46L;
                }
                g_293.f3 |= l_600;
            }
            else
            {
                int l_604 = 6L;
                if ((safe_rshift_func_int8_t_s_u(l_603, p_16)))
                {
                    int *l_605 = &l_561;
                    (*l_605) = l_604;
                }
                else
                {
                    (*g_79) = (void*)0;
                    (*g_79) = (*g_79);
                }
                (*g_79) = l_606;
            }
        }
        (*l_609) |= (safe_div_func_int16_t_s_s((-1L), l_561));
        if ((*l_606))
        {
            unsigned long long l_612 = 0xC20D6694DFB4A7B5LL;
            int l_613 = 1L;
            g_132.f3 &= (safe_lshift_func_uint8_t_u_s(l_561, l_612));
            l_613 = (*g_109);
            (*g_79) = &l_561;
            (*g_79) = &l_593;
        }
        else
        {
            int *l_620 = &g_219;
            unsigned l_640 = 0x24010F6DL;
            int l_641 = 0x27B22597L;
            struct S0 *l_645 = &g_132;
            int l_668 = 0x6822D59BL;
            int *l_749 = &g_58;
            l_561 ^= p_16;
            for (p_16 = 20; (p_16 == 37); p_16 = safe_add_func_int32_t_s_s(p_16, 5))
            {
                char l_637 = 0xA3L;
                for (g_58 = 19; (g_58 == 17); g_58--)
                {
                    const struct S0 *l_619 = &g_203;
                    const struct S0 **l_618 = &l_619;
                    (*l_609) ^= (l_618 != l_586);
                    (*g_79) = &l_561;
                    (*g_79) = l_620;
                    for (g_203.f6 = 20; (g_203.f6 != 29); g_203.f6++)
                    {
                        short l_628 = 3L;
                        (*l_620) = (g_623 ^ (((safe_add_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_s(l_628, 4)) || (((0x5DB6L || 0x9C93L) | (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(g_459, 1)), (safe_sub_func_int64_t_s_s((p_16 ^ l_637), func_49((safe_add_func_uint8_t_u_u(g_132.f3, ((&l_620 != &g_80) || p_16))), l_640, g_293.f7))))), 0x2102L))) == l_641)) != g_203.f4), 0xC7ABB0178EB3669CLL)) & p_16) == 7UL));
                    }
                }
                if (l_637)
                    continue;
                g_203.f7 ^= (g_203.f9 ^ ((safe_div_func_int64_t_s_s((*l_609), 0xF7D08B4D52171A5FLL)) | ((void*)0 == l_645)));
            }
            (*l_606) ^= ((*l_620) && p_16);
            if (p_16)
            {
                char l_648 = 0L;
                (*l_609) = (((safe_sub_func_uint8_t_u_u(g_203.f1, func_26(g_132.f4, (**g_547)))) | (safe_mod_func_uint8_t_u_u(g_132.f8, p_16))) == g_132.f7);
                (*l_609) &= (safe_mod_func_int32_t_s_s(l_648, (safe_unary_minus_func_int64_t_s((safe_lshift_func_int8_t_s_s((p_16 ^ (&g_547 == &l_586)), 5))))));
            }
            else
            {
                int *l_673 = &g_105;
                int * const * const l_708 = &l_609;
                int * const * const *l_707 = &l_708;
                short l_743 = 0x8798L;
                if ((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_u((g_58 == func_49((safe_lshift_func_int8_t_s_s(((*l_606) > 0x9A3F6CAEL), 6)), l_644, ((func_49(p_16, ((~((0xDC2D0A38L <= (((g_132.f0 & ((*l_620) < (safe_div_func_int32_t_s_s((!((&l_620 != (void*)0) ^ l_667)), p_16)))) ^ p_16) != 0x90B337D9F5B39C49LL)) >= g_132.f7)) != g_623), p_16) <= 0xFCEE9452A1EE5475LL) & p_16))), 1)))))
                {
                    return l_668;
                }
                else
                {
                    (*g_79) = &l_668;
                }
                if ((safe_rshift_func_uint16_t_u_u(0x9F3BL, 1)))
                {
                    int *l_671 = &g_219;
                    if ((*l_620))
                    {
                        (*l_606) = (**g_79);
                        (*g_79) = l_671;
                    }
                    else
                    {
                        struct S0 *l_672 = &g_293;
                        l_645 = l_672;
                        (*g_79) = l_673;
                        (*l_671) = (*l_671);
                        (*l_671) = l_681;
                    }
                    if (((safe_add_func_uint16_t_u_u(0x3E8DL, l_684)) && 0x2CB0L))
                    {
                        long long l_695 = 0x456D00A7F3B90646LL;
                        (*l_606) &= func_49(((+((safe_mod_func_uint8_t_u_u((((*l_671) && (safe_add_func_uint8_t_u_u(p_16, (((p_16 && (safe_lshift_func_uint8_t_u_u((*l_673), 3))) & ((safe_lshift_func_uint16_t_u_s(((*g_546) != (void*)0), (safe_add_func_uint32_t_u_u((*l_609), (l_695 <= (safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((!(func_49((*l_673), p_16, g_203.f9) < g_293.f0)), 1UL)), g_293.f8))))))) >= g_219)) >= (-5L))))) | l_695), (*l_673))) == g_293.f3)) != g_293.f6), g_132.f6, p_16);
                    }
                    else
                    {
                        (*g_79) = &l_668;
                    }
                    if (p_16)
                    {
                        (*l_606) ^= 1L;
                        (*g_79) = l_673;
                    }
                    else
                    {
                        return p_16;
                    }
                    (*g_79) = (void*)0;
                }
                else
                {
                    int l_709 = 0xA48F5058L;
                    (*l_606) = ((func_40(p_16, p_16, ((safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(g_293.f5, ((-1L) || ((((*l_673) != 0x97L) && ((void*)0 == &l_673)) | (+(safe_add_func_uint64_t_u_u((*l_620), (-1L)))))))), 14)) & 0xE6ECL)) ^ g_132.f7) >= 0xE5DD7DB7L);
                    (*l_606) ^= (l_706 != l_707);
                    l_709 |= (*l_620);
                }
                (***l_707) = 0xE99F49ABL;
                for (g_132.f6 = (-2); (g_132.f6 < 56); ++g_132.f6)
                {
                    int **l_720 = &l_606;
                    struct S0 *l_726 = &g_293;
                    unsigned char l_734 = 253UL;
                    for (l_640 = 0; (l_640 <= 60); ++l_640)
                    {
                        int l_723 = 3L;
                        (*g_79) = (*g_79);
                        (*l_620) &= (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(g_293.f3, (g_293.f3 > (l_720 == &g_80)))), 0x55F6L)) >= p_16), (safe_div_func_uint64_t_u_u(l_723, (safe_sub_func_int32_t_s_s((l_726 != (void*)0), p_16))))));
                        (**l_720) ^= (-1L);
                        (**l_720) ^= (safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((l_731 != (void*)0) < (((-2L) > (safe_sub_func_uint16_t_u_u(0x4225L, 65535UL))) >= func_49(l_734, (*l_620), p_16))), 1)), g_105));
                    }
                }
            }
        }
    }
    g_203.f7 = ((safe_mod_func_uint8_t_u_u(((((safe_add_func_uint16_t_u_u((g_132.f5 != g_293.f2), g_680)) ^ ((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((-1L), 6)), ((!0x835A041FL) | (1UL < g_203.f8)))) == 5L)) >= g_520) || 18446744073709551610UL), p_16)) < 0xAF32BE49L);
    g_105 &= ((l_766 < p_16) & func_49(l_644, (p_16 || (((void*)0 == (**g_546)) >= (((!(&l_551 != &g_80)) >= g_132.f2) & p_16))), g_219));
    return g_203.f4;
}







static unsigned func_17(short p_18, char p_19, const unsigned char p_20, unsigned short p_21)
{
    long long l_387 = 0L;
    struct S0 *l_433 = &g_203;
    long long l_455 = 0x2AC576E31C739BD0LL;
    int ** const l_460 = (void*)0;
    int *l_465 = &g_219;
    struct S0 **l_474 = &l_433;
    if (l_387)
    {
        int *l_388 = &g_105;
        short l_458 = 0xCD45L;
        int **l_462 = &l_388;
        (*g_79) = l_388;
        for (g_105 = 0; (g_105 != (-3)); g_105 = safe_sub_func_int32_t_s_s(g_105, 6))
        {
            int *l_397 = &g_58;
            struct S0 ** const l_398 = &g_292;
            (*l_397) |= (g_203.f7 & (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(1UL, 6)), 1L)));
            if (((void*)0 == l_398))
            {
                unsigned l_399 = 18446744073709551606UL;
                (*l_397) = func_49(g_293.f8, p_21, g_58);
                l_399 &= ((void*)0 == l_397);
                (*l_397) = (func_49(g_132.f5, (safe_lshift_func_uint16_t_u_s(p_19, 4)), ((*l_388) == p_19)) < ((safe_sub_func_int64_t_s_s((l_387 < (safe_div_func_uint64_t_u_u((((safe_sub_func_uint64_t_u_u(0UL, (*l_388))) >= (!g_203.f2)) & g_132.f0), (*l_388)))), g_132.f2)) ^ 0UL));
                if ((*l_397))
                    break;
            }
            else
            {
                unsigned char l_432 = 0x07L;
                if (p_20)
                    break;
                for (p_18 = 19; (p_18 == 20); p_18 = safe_add_func_uint8_t_u_u(p_18, 8))
                {
                    (*l_397) = (*l_388);
                    for (g_219 = (-20); (g_219 == 17); g_219 = safe_add_func_uint16_t_u_u(g_219, 1))
                    {
                        (*l_397) = (safe_mod_func_uint16_t_u_u(p_19, (safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(g_203.f0, (safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(p_20, ((safe_add_func_uint32_t_u_u((func_49(p_21, p_18, g_293.f7) > g_293.f3), (+(safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((func_49(g_293.f8, p_21, g_203.f0) <= 0x11D4250EL) | p_19), 0x0BL)), 1L))))) != 0x1CD7120B94C41720LL))) & 0L), l_387)))), 10))));
                    }
                    (*g_79) = (void*)0;
                }
                if ((((safe_mod_func_uint64_t_u_u(1UL, g_316)) | (65535UL ^ func_49(((func_49(l_432, (*l_397), (l_433 != (void*)0)) | ((&l_397 != &l_388) < p_18)) & 0x58A5L), g_293.f5, g_293.f5))) | l_387))
                {
                    char l_439 = (-1L);
                    g_219 = (4294967292UL < func_49(g_293.f7, p_21, (func_49((0xFEL & p_21), (safe_unary_minus_func_int32_t_s((safe_div_func_uint8_t_u_u(1UL, (safe_add_func_uint64_t_u_u(((void*)0 != &g_292), g_293.f4)))))), g_132.f8) < l_439)));
                    for (l_432 = 0; (l_432 >= 51); ++l_432)
                    {
                        return g_203.f3;
                    }
                    return g_293.f8;
                }
                else
                {
                    int *l_445 = &g_58;
                    l_397 = l_388;
                    (*l_445) = (((safe_lshift_func_int16_t_s_u(g_293.f1, (func_49(l_387, p_20, ((0L ^ (safe_unary_minus_func_int64_t_s(((l_387 ^ (g_132.f5 == (*l_388))) ^ p_21)))) && (((l_432 <= p_18) & 0xC7E73476CD3D20C5LL) || 1L))) < 0xE47C7F3C08C63A20LL))) != p_21) && 0x2BEE661AL);
                }
            }
        }
        if (((p_20 > ((-9L) || g_56)) && p_21))
        {
            unsigned char l_450 = 1UL;
            (*g_79) = (*g_79);
            (*l_388) = (((g_203.f5 | (func_49(((safe_div_func_uint64_t_u_u(l_450, (g_105 || ((((safe_rshift_func_uint16_t_u_s((func_49((safe_lshift_func_int8_t_s_s(1L, 1)), (p_21 <= g_293.f9), g_132.f9) ^ g_132.f0), 6)) || p_20) || g_293.f9) | (*l_388))))) || (*l_388)), l_455, p_21) != 0L)) != (*l_388)) <= 1UL);
            (*l_388) = ((safe_lshift_func_uint8_t_u_s((p_20 & 7UL), ((l_458 < (4294967290UL || (func_26((g_459 ^ func_26(g_219, (*g_292))), (*g_292)) | 0x5138805AL))) && l_450))) != l_387);
        }
        else
        {
            int ***l_461 = (void*)0;
            l_462 = l_460;
            (*l_388) = (0xF9E39800L != p_19);
            (*g_79) = (*g_79);
            for (l_455 = (-24); (l_455 < (-30)); --l_455)
            {
                struct S0 l_470 = {18446744073709551615UL,2738,3,85,1256,-53,0x75E1L,-47,3781,3};
                (*g_79) = l_465;
                (*l_465) = (+((g_293.f8 <= ((safe_div_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((~p_20), p_19)) >= (p_19 ^ ((func_26(g_293.f4, l_470) & (safe_rshift_func_int8_t_s_s(p_20, 2))) == (g_203.f3 > 0x9EL)))), 255UL)) ^ 0L)) <= 0L));
            }
        }
    }
    else
    {
        int l_473 = 0xEC50A47CL;
        struct S0 ***l_475 = &l_474;
        g_203.f5 |= l_473;
        (*g_79) = l_465;
        (*g_79) = (*g_79);
        (*l_475) = l_474;
    }
    if ((~(~p_20)))
    {
        int *l_481 = (void*)0;
        const int *l_482 = &g_219;
        for (l_455 = 19; (l_455 >= (-24)); l_455--)
        {
            struct S0 *l_478 = (void*)0;
            (*l_474) = l_478;
        }
        for (g_219 = (-4); (g_219 > 6); g_219 = safe_add_func_int64_t_s_s(g_219, 3))
        {
            (*g_79) = l_481;
        }
        (*l_465) = ((void*)0 != l_465);
        l_482 = (*g_79);
    }
    else
    {
        unsigned short l_485 = 0x10A6L;
        int **l_489 = (void*)0;
        int *** const l_488 = &l_489;
        int l_501 = 0xCEB2A3E3L;
        for (p_18 = 0; (p_18 < 7); p_18 = safe_add_func_int16_t_s_s(p_18, 6))
        {
            unsigned long long l_498 = 0xEE5D6FAA04FEC6CFLL;
            (*l_465) = (l_485 == ((l_485 != ((&g_79 == l_488) <= (safe_sub_func_uint32_t_u_u(g_132.f1, (safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_add_func_int32_t_s_s(l_498, g_58)), (p_19 & (safe_add_func_int64_t_s_s(p_21, g_105))))), 0x27L)))))) ^ l_501));
        }
        for (g_203.f6 = (-5); (g_203.f6 < 53); ++g_203.f6)
        {
            unsigned l_516 = 0UL;
            unsigned l_519 = 0x96D3643DL;
            int *l_527 = &g_219;
            if ((p_18 < (+4L)))
            {
                long long l_511 = (-8L);
                (*l_465) |= (((safe_unary_minus_func_int64_t_s((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((g_203.f6 >= g_203.f9) < 0xE84CL), 5)), 0x2A16L)))) ^ p_21) | 0x1D95L);
            }
            else
            {
                for (l_455 = 0; (l_455 != (-2)); l_455 = safe_sub_func_int64_t_s_s(l_455, 1))
                {
                    const int *l_525 = &g_219;
                    for (g_58 = 0; (g_58 <= 20); g_58++)
                    {
                        unsigned char l_526 = 6UL;
                        l_525 = (*g_79);
                        (*l_465) = l_526;
                    }
                    l_525 = l_527;
                }
            }
            (*g_79) = (*g_79);
        }
    }
    for (p_21 = 0; (p_21 > 50); p_21++)
    {
        unsigned l_536 = 1UL;
        int **l_541 = &l_465;
        for (g_105 = 0; (g_105 <= (-27)); g_105 = safe_sub_func_uint64_t_u_u(g_105, 2))
        {
            char l_535 = 0xD5L;
            for (g_520 = 0; (g_520 <= 6); g_520 = safe_add_func_int8_t_s_s(g_520, 5))
            {
                int l_548 = 6L;
                l_536 = (safe_unary_minus_func_uint8_t_u((func_49(p_18, l_535, (*l_465)) && p_20)));
                g_203.f7 |= (((func_49(g_293.f9, (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s(g_293.f9, 7)) >= (g_132.f8 >= (l_541 != &l_465))), (safe_div_func_uint32_t_u_u(func_49(p_21, g_293.f0, (safe_sub_func_int64_t_s_s(func_49(p_19, p_21, p_18), l_535))), (**l_541))))), (**l_541)) == 1UL) ^ l_535) || p_18);
                (**l_541) = ((!func_49(func_49(func_49(((void*)0 == g_546), (+p_18), p_19), g_56, g_203.f0), (((func_49(g_132.f9, l_548, g_293.f0) && 0L) != p_20) != p_20), l_548)) | p_18);
            }
        }
        if (p_20)
            continue;
    }
    (*l_465) = (p_20 != 4294967295UL);
    return (*l_465);
}







static short func_22(short p_23)
{
    unsigned l_29 = 9UL;
    const int l_46 = 0L;
    unsigned char l_216 = 0x24L;
    int *l_222 = &g_219;
    struct S0 *l_224 = &g_203;
    struct S0 **l_225 = (void*)0;
    struct S0 **l_226 = &l_224;
    unsigned short l_258 = 0x9091L;
    int l_259 = 0xD0E6EDD9L;
    unsigned char l_265 = 255UL;
    const short l_351 = (-6L);
    if (((0x61FBL | (safe_rshift_func_int8_t_s_s((func_26(l_29, func_30(((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(func_40((safe_lshift_func_uint8_t_u_s(0xD7L, 6)), ((l_46 ^ 0x385E13CDL) | ((safe_sub_func_int8_t_s_s(func_49(((0x22L >= ((((safe_unary_minus_func_uint64_t_u(0xB407CB0BE945D447LL)) <= ((p_23 & (safe_div_func_int32_t_s_s(l_29, p_23))) ^ g_56)) != 3L) ^ g_56)) == g_56), g_56, g_56), l_29)) == 7UL)), p_23), p_23)), l_46)) <= l_29), l_29, l_46, p_23, p_23)) ^ l_216), l_29))) == l_29))
    {
        int l_217 = 0x83A5F4DCL;
        int *l_218 = &g_219;
        (*l_218) &= func_26(l_217, g_203);
    }
    else
    {
        unsigned short l_223 = 0x4051L;
        if (p_23)
        {
            for (g_203.f6 = (-2); (g_203.f6 != 45); ++g_203.f6)
            {
                (*g_79) = &g_58;
            }
        }
        else
        {
            (*g_79) = l_222;
        }
        l_223 ^= ((void*)0 != l_222);
    }
    (*l_226) = l_224;
    for (p_23 = (-30); (p_23 != 29); p_23++)
    {
        unsigned l_231 = 0x3EE5DDF3L;
        int *l_246 = &g_58;
        struct S0 **l_285 = &l_224;
        int l_317 = 2L;
        (*l_246) ^= (safe_mod_func_uint16_t_u_u((l_231 & ((safe_lshift_func_int8_t_s_s(((g_203.f5 | (safe_lshift_func_int8_t_s_s(1L, ((safe_add_func_int8_t_s_s((*l_222), (*l_222))) & 0UL)))) < p_23), g_132.f1)) || g_132.f9)), 65534UL));
        (*g_79) = l_246;
    }
    return (*l_222);
}







static unsigned char func_26(char p_27, struct S0 p_28)
{
    int *l_204 = &g_105;
    unsigned long long l_213 = 18446744073709551606UL;
    unsigned l_214 = 7UL;
    int *l_215 = &g_58;
    (*l_204) |= ((void*)0 == &g_80);
    (*l_215) ^= (*l_204);
    return g_132.f8;
}







static struct S0 func_30(int p_31, int p_32, int p_33, char p_34, short p_35)
{
    unsigned long long l_128 = 0xBAD39915A3DCCCE5LL;
    int *l_146 = &g_105;
    for (p_31 = 0; (p_31 <= (-8)); p_31 = safe_sub_func_int16_t_s_s(p_31, 1))
    {
        for (p_35 = 0; (p_35 >= (-9)); p_35--)
        {
            int *l_114 = &g_58;
            (*l_114) = (*g_80);
        }
    }
    if ((*g_109))
    {
        unsigned long long l_121 = 18446744073709551613UL;
        unsigned char l_139 = 0xD7L;
        unsigned long long l_168 = 0x82CCC8094C73A16DLL;
        if ((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_35, (((safe_rshift_func_uint16_t_u_u(l_121, g_56)) & ((safe_sub_func_int32_t_s_s((g_58 < (safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(g_105, func_49(g_105, l_121, g_58))), 18446744073709551615UL))), 0L)) >= (*g_109))) || g_56))), l_128)))
        {
            for (l_121 = (-18); (l_121 != 24); ++l_121)
            {
                int *l_131 = (void*)0;
                (*g_79) = l_131;
                return g_132;
            }
            for (p_35 = (-25); (p_35 < 27); ++p_35)
            {
                int *l_137 = &g_58;
                struct S0 l_138 = {0xE6A653BE29DAAEC3LL,3152,2,70,1218,62,1UL,104,9820,7};
                (*l_137) = (safe_lshift_func_uint16_t_u_u(func_40(((g_56 != func_49(((+0UL) | (g_132.f7 < g_132.f4)), l_121, p_32)) > p_31), (p_32 || p_34), g_132.f2), 1));
                if (p_35)
                    break;
                return l_138;
            }
        }
        else
        {
            int *l_140 = (void*)0;
            int *l_141 = &g_105;
            (*l_141) = l_139;
            for (g_58 = 22; (g_58 == 14); g_58 = safe_sub_func_uint16_t_u_u(g_58, 5))
            {
                unsigned long long l_144 = 0x591EAE96DC68BC58LL;
                struct S0 l_145 = {0x50A9A04092CE2759LL,2601,7,-108,1146,85,0xF7F4L,-64,21119,2};
                if (l_144)
                {
                    (*l_141) = (*g_80);
                    return l_145;
                }
                else
                {
                    if (p_32)
                        break;
                    (*g_79) = &p_31;
                }
                if ((**g_79))
                {
                    const int **l_157 = &g_109;
                    unsigned l_162 = 18446744073709551606UL;
                    p_31 = (0L >= ((((((void*)0 != l_146) ^ g_132.f2) <= g_132.f8) >= (safe_rshift_func_uint16_t_u_u(g_56, ((&p_31 != (*g_79)) != func_49((safe_add_func_uint64_t_u_u(g_132.f2, 0xA22360892C684B15LL)), p_35, g_132.f9))))) < l_121));
                    p_31 = func_49((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(l_145.f2, 13)) ^ p_34), ((safe_div_func_int32_t_s_s(((&g_109 == l_157) < 4294967295UL), ((*l_146) || (g_105 | (func_49((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(g_132.f6, 5)) > l_145.f8), (*l_146))), l_162, p_32) <= 0x69L))))) && g_105))), l_145.f1, p_32);
                    (*g_79) = (*l_157);
                    for (l_139 = (-11); (l_139 == 19); l_139 = safe_add_func_uint32_t_u_u(l_139, 5))
                    {
                        if ((*g_109))
                            break;
                    }
                }
                else
                {
                    short l_170 = 0x30C3L;
                    int *l_171 = &g_105;
                    l_140 = l_146;
                    (*g_79) = (*g_79);
                    if ((**g_79))
                    {
                        (*g_79) = l_146;
                        return g_132;
                    }
                    else
                    {
                        short l_167 = 0x463FL;
                        const unsigned short l_169 = 0x1EA2L;
                        (*l_146) = p_34;
                        g_132.f3 = l_121;
                        l_170 |= (0x15L == (0x34FDL <= func_49(g_132.f3, (safe_sub_func_uint8_t_u_u((((*g_79) != (void*)0) > l_167), g_56)), ((l_168 | (0x3CL | l_169)) <= 0xAF19L))));
                        (*l_146) = (((void*)0 != &l_146) < (-1L));
                    }
                    l_171 = &p_31;
                }
                (*l_141) ^= 0xD9A899DEL;
                for (p_33 = 0; (p_33 != (-1)); p_33--)
                {
                    (*l_146) ^= (safe_rshift_func_uint16_t_u_u((&l_141 != (void*)0), ((safe_unary_minus_func_uint64_t_u((safe_lshift_func_int16_t_s_s(((p_31 <= g_132.f7) <= p_31), 0)))) ^ 0xF7950AAEL)));
                    (*l_146) &= ((void*)0 != &g_80);
                    return g_132;
                }
            }
        }
    }
    else
    {
        short l_185 = 0x14AAL;
        unsigned l_202 = 18446744073709551608UL;
        (*l_146) = (((safe_rshift_func_uint16_t_u_s((0x58L > ((*g_80) == 0x85592441L)), 15)) <= (safe_rshift_func_uint16_t_u_u((func_49((safe_rshift_func_uint8_t_u_s((0xCC73FA737C25DAE8LL && ((&p_31 != (*g_79)) == 247UL)), (l_185 > 65530UL))), p_32, g_132.f3) <= 0x5568L), 7))) & (*l_146));
        p_31 ^= (+((safe_mod_func_int16_t_s_s(func_40(p_34, p_32, (safe_rshift_func_int16_t_s_s(((((+(*l_146)) == g_132.f7) != (safe_add_func_uint32_t_u_u(4294967287UL, (((safe_rshift_func_uint16_t_u_s(l_185, 6)) | (((*l_146) ^ (safe_sub_func_uint8_t_u_u(1UL, ((safe_sub_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(func_49(l_202, l_202, (*l_146)), (-4L))), (*l_146))) ^ (-3L))))) > 0UL)) ^ (*l_146))))) ^ l_185), p_34))), g_132.f1)) || 0xC09E53F8L));
    }
    (*l_146) ^= (65529UL | p_34);
    return g_203;
}







static unsigned short func_40(unsigned p_41, const char p_42, unsigned long long p_43)
{
    short l_65 = 0x2D9BL;
    const short l_70 = 0L;
    int *l_71 = &g_58;
    unsigned char l_93 = 0xB2L;
    (*l_71) = (safe_mod_func_uint16_t_u_u(((p_41 == (safe_add_func_uint8_t_u_u(((!(6L > g_58)) & func_49(l_65, l_65, ((safe_sub_func_int8_t_s_s(p_41, (safe_add_func_int64_t_s_s((l_70 >= func_49((p_41 > p_41), g_56, g_58)), g_56)))) < p_42))), p_43))) <= l_65), g_56));
    if (func_49(p_42, (*l_71), g_58))
    {
        int *l_74 = &g_58;
        short l_103 = 2L;
        if ((0x133DL | g_58))
        {
            int **l_81 = &l_71;
            (**l_81) = (safe_mod_func_uint16_t_u_u((((void*)0 == l_74) != (safe_add_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(p_42, g_56)) || (((g_79 != &g_80) < 0x3AC5L) || ((&l_71 != l_81) <= (*l_74)))), (-7L)))), (*l_74)));
            return (**l_81);
        }
        else
        {
            int * const *l_88 = &l_71;
            int *l_104 = &g_105;
            for (p_41 = 12; (p_41 >= 19); ++p_41)
            {
                for (p_43 = 0; (p_43 != 21); ++p_43)
                {
                    (*l_74) |= ((void*)0 == (*g_79));
                }
            }
            (*l_71) = (safe_sub_func_int16_t_s_s(((((&l_71 == (void*)0) == (l_88 != &g_80)) != g_58) & p_43), ((func_49((**l_88), ((*l_74) | ((p_42 < 0x2EF5L) <= p_43)), g_58) == p_42) || 0x68D18E14L)));
            for (l_65 = (-28); (l_65 != (-6)); l_65++)
            {
                for (p_43 = 0; (p_43 >= 37); ++p_43)
                {
                    l_93 ^= (**g_79);
                }
            }
            (*l_104) ^= (safe_rshift_func_int8_t_s_u((-8L), (safe_unary_minus_func_int8_t_s(((((func_49((safe_div_func_int32_t_s_s(func_49(((**g_79) & ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(p_42, ((l_74 != (*g_79)) >= (p_41 != (l_74 != (*g_79)))))), 4)) <= g_56)), g_56, g_58), (*g_80))), l_103, p_41) && g_58) != g_56) || g_56) == g_58)))));
        }
    }
    else
    {
        for (l_65 = 0; (l_65 <= 17); ++l_65)
        {
            short l_108 = 0x4EC2L;
            if (l_108)
                break;
            g_109 = (*g_79);
        }
        return g_58;
    }
    (*l_71) ^= 0x0FEE19A6L;
    return p_41;
}







static char func_49(short p_50, unsigned long long p_51, const char p_52)
{
    int *l_57 = &g_58;
    int **l_59 = (void*)0;
    int **l_60 = &l_57;
    (*l_60) = l_57;
    return p_52;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    transparent_crc(g_132.f1, "g_132.f1", print_hash_value);
    transparent_crc(g_132.f2, "g_132.f2", print_hash_value);
    transparent_crc(g_132.f3, "g_132.f3", print_hash_value);
    transparent_crc(g_132.f4, "g_132.f4", print_hash_value);
    transparent_crc(g_132.f5, "g_132.f5", print_hash_value);
    transparent_crc(g_132.f6, "g_132.f6", print_hash_value);
    transparent_crc(g_132.f7, "g_132.f7", print_hash_value);
    transparent_crc(g_132.f8, "g_132.f8", print_hash_value);
    transparent_crc(g_132.f9, "g_132.f9", print_hash_value);
    transparent_crc(g_203.f0, "g_203.f0", print_hash_value);
    transparent_crc(g_203.f1, "g_203.f1", print_hash_value);
    transparent_crc(g_203.f2, "g_203.f2", print_hash_value);
    transparent_crc(g_203.f3, "g_203.f3", print_hash_value);
    transparent_crc(g_203.f4, "g_203.f4", print_hash_value);
    transparent_crc(g_203.f5, "g_203.f5", print_hash_value);
    transparent_crc(g_203.f6, "g_203.f6", print_hash_value);
    transparent_crc(g_203.f7, "g_203.f7", print_hash_value);
    transparent_crc(g_203.f8, "g_203.f8", print_hash_value);
    transparent_crc(g_203.f9, "g_203.f9", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_293.f0, "g_293.f0", print_hash_value);
    transparent_crc(g_293.f1, "g_293.f1", print_hash_value);
    transparent_crc(g_293.f2, "g_293.f2", print_hash_value);
    transparent_crc(g_293.f3, "g_293.f3", print_hash_value);
    transparent_crc(g_293.f4, "g_293.f4", print_hash_value);
    transparent_crc(g_293.f5, "g_293.f5", print_hash_value);
    transparent_crc(g_293.f6, "g_293.f6", print_hash_value);
    transparent_crc(g_293.f7, "g_293.f7", print_hash_value);
    transparent_crc(g_293.f8, "g_293.f8", print_hash_value);
    transparent_crc(g_293.f9, "g_293.f9", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_459, "g_459", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_795, "g_795", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    transparent_crc(g_991, "g_991", print_hash_value);
    transparent_crc(g_994, "g_994", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
