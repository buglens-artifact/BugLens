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
   unsigned f0 : 4;
   unsigned f1 : 9;
   signed f2 : 7;
};


static struct S0 g_3 = {1,4,1};
static int g_66 = 0x0E1B4ADCL;
static long long g_79 = (-4L);
static int g_111 = (-1L);
static unsigned g_117 = 0xD285881BL;
static unsigned char g_127 = 255UL;
static struct S0 g_140 = {1,9,-10};
static int g_192 = 0x8DAB5425L;
static int g_207 = (-1L);
static unsigned g_294 = 4UL;
static short g_357 = 0xD604L;
static int g_377 = 0x68E064FDL;
static unsigned long long g_488 = 0UL;
static long long g_521 = 0xE7F9EF6B593FC4E6LL;



static unsigned func_1(void);
static struct S0 func_4(short p_5, unsigned char p_6, unsigned long long p_7, long long p_8);
static short func_9(long long p_10, char p_11);
static short func_12(struct S0 p_13, int p_14, unsigned short p_15, long long p_16, unsigned p_17);
static long long func_24(unsigned char p_25, unsigned long long p_26, unsigned short p_27, unsigned char p_28);
static int func_31(unsigned p_32);
static unsigned long long func_40(unsigned char p_41);
static char func_42(struct S0 p_43, unsigned p_44, char p_45);
static int func_53(unsigned p_54);
static unsigned long long func_57(int p_58);
static unsigned func_1(void)
{
    struct S0 l_2 = {2,12,-8};
    char l_577 = 0x21L;
    char l_603 = 0x1DL;
    char l_604 = 0x02L;
    int l_605 = 0x7FE0F81FL;
    g_3 = l_2;
    l_2 = func_4((g_3.f0 , func_9(l_2.f1, (0xBAEF6E229EDCA8FELL == (func_12(g_3, (safe_div_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(g_3.f2, l_2.f2)) & 18446744073709551615UL), (((safe_sub_func_int64_t_s_s(func_24((((safe_add_func_int32_t_s_s(((g_3.f2 && (l_2.f1 > g_3.f1)) >= l_2.f0), l_2.f2)) >= l_2.f1) < 0x48L), g_3.f1, l_2.f1, l_2.f2), 0UL)) , 0x41B08AA4L) | 0x872CF653L))), g_357, g_377, l_577) || g_3.f0)))), l_577, l_2.f1, l_2.f2);
    l_605 = (((func_31(g_192) != (safe_lshift_func_int16_t_s_s(func_9(g_3.f1, (safe_lshift_func_uint16_t_u_s(g_377, 14))), (l_2.f1 , 0x7DBBL)))) & ((g_488 || (safe_div_func_uint16_t_u_u((((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((((safe_add_func_int64_t_s_s(l_2.f0, l_603)) || l_604) , 0xD61C1FCB659E2A29LL) || l_2.f1) >= l_603), 6)), g_111)) , g_3.f0) == (-1L)) && g_127) <= g_117), g_3.f1))) & g_3.f0)) , (-1L));
    g_3.f2 = (l_2.f0 , l_605);
    return g_192;
}







static struct S0 func_4(short p_5, unsigned char p_6, unsigned long long p_7, long long p_8)
{
    g_3 = g_3;
    return g_3;
}







static short func_9(long long p_10, char p_11)
{
    int l_590 = 0x90CAF590L;
    l_590 = l_590;
    return p_11;
}







static short func_12(struct S0 p_13, int p_14, unsigned short p_15, long long p_16, unsigned p_17)
{
    int l_578 = 1L;
    unsigned char l_588 = 0xEAL;
    int l_589 = 7L;
    l_578 = g_127;
    l_589 = (((safe_add_func_int16_t_s_s(p_13.f2, (safe_rshift_func_uint16_t_u_u(g_294, (safe_lshift_func_int16_t_s_s(((safe_add_func_uint64_t_u_u(l_578, (p_13.f1 , (g_3.f1 != (safe_unary_minus_func_int16_t_s(p_15)))))) != func_53((func_40(g_140.f2) , ((l_578 && p_15) | l_588)))), 6)))))) | (-1L)) >= p_17);
    g_3 = g_140;
    return g_192;
}







static long long func_24(unsigned char p_25, unsigned long long p_26, unsigned short p_27, unsigned char p_28)
{
    short l_37 = 0L;
    int l_574 = 0L;
    l_574 = func_31((((safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u((l_37 || (((safe_sub_func_uint16_t_u_u((~(func_40(((-1L) < (((((g_3.f0 != 0x07D8EB7BFBC35CF4LL) & func_42(g_3, p_27, (safe_add_func_uint8_t_u_u(g_3.f0, (safe_sub_func_uint64_t_u_u((l_37 < p_27), l_37)))))) < p_25) & 18446744073709551610UL) > 0UL))) < (-1L))), g_3.f1)) || 0xB8L) ^ p_28)), p_28)), 4294967289UL)) , p_27) , g_521));
    l_574 = (safe_lshift_func_uint16_t_u_s(g_140.f2, p_27));
    return p_25;
}







static int func_31(unsigned p_32)
{
    struct S0 l_524 = {2,9,-1};
    unsigned long long l_571 = 1UL;
    char l_573 = 2L;
    for (g_66 = (-17); (g_66 >= 2); g_66 = safe_add_func_uint8_t_u_u(g_66, 6))
    {
        short l_535 = (-1L);
        int l_540 = (-7L);
        l_524 = g_3;
        if (((g_3.f2 , (safe_sub_func_uint8_t_u_u(p_32, p_32))) > (p_32 && ((~(~(g_488 ^ ((safe_lshift_func_uint8_t_u_s(((+(safe_rshift_func_uint8_t_u_s(((safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(l_524.f0, l_535)) , (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(((g_79 > p_32) || l_535), 6)) ^ 0xBAL), l_535))), l_524.f1)) >= g_377), l_535))) , g_3.f2), l_524.f1)) < p_32)))) | 0x9D9BE23026E50C41LL))))
        {
            g_140 = g_3;
            l_540 = g_117;
        }
        else
        {
            unsigned l_543 = 0x7EAB7ACEL;
            int l_550 = 0L;
            l_550 = ((safe_mod_func_uint64_t_u_u(l_543, (l_543 | (g_127 > (((safe_lshift_func_int8_t_s_s((l_524 , ((safe_add_func_int32_t_s_s(g_66, (l_535 == ((g_3 , (safe_sub_func_uint16_t_u_u(p_32, (p_32 >= g_3.f1)))) , g_3.f2)))) == p_32)), 6)) , l_540) <= 0xB8E3L))))) , p_32);
        }
        if ((safe_add_func_uint8_t_u_u(p_32, ((((g_3.f2 ^ p_32) == (!g_488)) , ((safe_rshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(p_32, g_140.f0)) , (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((-1L), 3)), 2))) ^ l_524.f0), 3)) | ((safe_add_func_int16_t_s_s((((((p_32 != 1L) && l_524.f2) , l_524.f2) < l_524.f2) , p_32), g_117)) | 0x7DD5B746L))) > 0UL))))
        {
            int l_565 = (-3L);
            int l_570 = (-3L);
            l_524.f2 = (safe_rshift_func_int8_t_s_u(l_565, g_3.f0));
            for (g_294 = (-30); (g_294 < 43); g_294++)
            {
                for (g_521 = 20; (g_521 < (-24)); --g_521)
                {
                    l_570 = g_192;
                }
                l_540 = g_207;
            }
            if (l_571)
                continue;
            l_524 = g_140;
        }
        else
        {
            unsigned long long l_572 = 18446744073709551609UL;
            g_207 = l_572;
        }
    }
    g_140 = l_524;
    g_140 = l_524;
    return l_573;
}







static unsigned long long func_40(unsigned char p_41)
{
    unsigned l_315 = 4294967295UL;
    struct S0 l_318 = {1,9,4};
    int l_479 = 0x2844BE88L;
    unsigned l_487 = 0x2443C714L;
    for (g_127 = 0; (g_127 >= 6); ++g_127)
    {
        unsigned short l_316 = 0x9497L;
        int l_317 = (-1L);
        if (g_3.f2)
            break;
        l_317 = ((g_294 > ((((-10L) ^ (((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(g_140.f2, p_41)), (func_53(l_315) ^ p_41))) == l_316) && func_57(g_294))) , p_41) | (-1L))) < g_3.f0);
        g_140 = l_318;
    }
    l_318.f2 = p_41;
    l_318 = l_318;
    if ((safe_lshift_func_int8_t_s_s((p_41 | (0xBEA1L ^ p_41)), (g_140.f1 && func_57((safe_rshift_func_uint16_t_u_s(l_318.f2, (g_117 > (+(p_41 , l_318.f2))))))))))
    {
lbl_428:
        for (g_192 = 0; (g_192 >= (-15)); g_192 = safe_sub_func_int64_t_s_s(g_192, 5))
        {
            return g_127;
        }
    }
    else
    {
        char l_339 = (-1L);
        char l_375 = (-5L);
        int l_376 = 0xE9E952AFL;
        struct S0 l_407 = {1,3,7};
        struct S0 l_418 = {1,20,-3};
        unsigned char l_431 = 0UL;
        unsigned long long l_436 = 0xA057602EC69356C6LL;
        char l_513 = 0xE7L;
        g_140 = l_318;
        if ((((safe_mod_func_int32_t_s_s(((l_318.f1 || (safe_sub_func_int32_t_s_s(p_41, (safe_mod_func_uint64_t_u_u((~(7UL || (safe_rshift_func_int8_t_s_s(((+g_66) || ((((safe_mod_func_uint16_t_u_u((((((1L >= g_3.f2) , g_117) | ((safe_rshift_func_uint8_t_u_s((p_41 >= (func_57((safe_sub_func_uint64_t_u_u((p_41 ^ 0xA1A88FA0A62E1F7FLL), 0x87CFA903B3759003LL))) ^ 0xC7FD1788FD815218LL)), 6)) > p_41)) , g_3.f2) || l_339), l_339)) ^ p_41) <= g_127) ^ 0x1E5C6F841FF86E46LL)), 2)))), p_41))))) <= 0xE65E92AEL), g_3.f0)) > l_318.f0) || g_127))
        {
            unsigned l_358 = 0xE762944AL;
            struct S0 l_359 = {0,19,-7};
            for (g_111 = 0; (g_111 <= 5); g_111 = safe_add_func_uint16_t_u_u(g_111, 9))
            {
                unsigned l_346 = 0x3BECF33FL;
                struct S0 l_360 = {2,15,-3};
                if ((((((!func_53(func_53(((((safe_rshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u(l_346, (safe_sub_func_uint32_t_u_u(func_53((((func_53((safe_lshift_func_uint16_t_u_u(p_41, ((l_346 <= (((p_41 & (p_41 | (safe_mod_func_int64_t_s_s((((1UL != ((255UL > (func_53(((safe_lshift_func_uint8_t_u_u(g_192, 5)) || (((safe_sub_func_int64_t_s_s((((g_192 == g_192) && 0x1674L) | g_207), 0xF232C39E34AF9EAFLL)) == g_140.f0) < 2L))) < 0x0CF09760L)) == p_41)) <= g_207) && g_140.f2), l_315)))) ^ 0L) <= l_346)) || 0xF175L)))) < p_41) , g_357) == l_358)), g_192)))), l_346)) < 0xCC80L) && l_346) <= (-9L))))) && g_117) , 0xC6F1A482D9A37546LL) == g_3.f1) , 0x9D2F77C8L))
                {
                    g_140 = g_140;
                    l_360 = l_359;
                    for (l_339 = 0; (l_339 == (-27)); l_339 = safe_sub_func_uint8_t_u_u(l_339, 5))
                    {
                        if (p_41)
                            break;
                        g_140 = l_360;
                        l_360 = g_3;
                    }
                }
                else
                {
                    g_66 = p_41;
                }
            }
        }
        else
        {
            int l_363 = 0x9DA96A55L;
            struct S0 l_370 = {3,3,-0};
            int l_520 = 1L;
            l_376 = ((l_363 == (4294967287UL < (safe_mod_func_uint16_t_u_u((func_53(p_41) || ((safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s((l_370 , ((safe_rshift_func_uint16_t_u_u(p_41, 14)) , (0xEADBL ^ ((safe_mod_func_int32_t_s_s((l_370.f1 != ((65526UL >= 0xEDB0L) || p_41)), p_41)) , l_370.f0)))), p_41)), p_41)) | l_363)), l_375)))) > g_140.f0);
            g_207 = ((g_377 <= (safe_lshift_func_uint16_t_u_u(p_41, (safe_div_func_int32_t_s_s((-1L), 0x947678D6L))))) , (safe_lshift_func_uint16_t_u_s(l_375, (safe_add_func_int64_t_s_s((((safe_sub_func_uint64_t_u_u((l_318.f0 != (p_41 , 4UL)), l_376)) == l_318.f1) == l_375), l_370.f0)))));
            for (g_192 = 0; (g_192 > (-13)); g_192--)
            {
                short l_396 = 1L;
                l_376 = ((safe_rshift_func_int8_t_s_s((0x3523L != ((((l_363 , (safe_sub_func_uint64_t_u_u((((safe_div_func_int16_t_s_s((((0xCC79L & func_57((((p_41 || l_363) , ((func_53(l_396) , (safe_rshift_func_uint8_t_u_u(9UL, (safe_add_func_int64_t_s_s((safe_mod_func_int8_t_s_s(0L, g_111)), 0L))))) ^ 0x49L)) != l_363))) , 0L) != g_192), 0x7CF8L)) <= l_315) , p_41), l_370.f1))) || 7UL) ^ p_41) >= p_41)), 5)) != g_117);
                return l_396;
            }
            if ((l_375 && ((safe_add_func_uint32_t_u_u(func_42(l_407, (safe_add_func_int32_t_s_s(p_41, ((safe_lshift_func_uint8_t_u_u(func_42(l_318, (safe_lshift_func_uint8_t_u_s(0xA0L, 1)), g_140.f1), (p_41 == l_363))) < p_41))), l_370.f2), l_370.f1)) >= 4L)))
            {
                unsigned char l_423 = 0xB0L;
                l_370.f2 = (g_66 == ((((safe_lshift_func_uint16_t_u_s(((g_192 ^ l_363) > (g_117 & (((0x311DL != (safe_add_func_int32_t_s_s((l_318.f0 , ((0x6CFAE2E04268F694LL & p_41) & ((g_140.f2 ^ g_294) < l_318.f2))), 0xB7210143L))) && p_41) > g_3.f0))), 6)) && (-1L)) != g_140.f1) ^ g_111));
                l_418 = g_140;
                if ((((l_315 && g_377) || 0xB86CL) < (g_3.f1 ^ (((l_370.f2 | (safe_add_func_int64_t_s_s(l_370.f0, func_42(l_370, (((safe_rshift_func_uint16_t_u_s(l_423, ((safe_lshift_func_int16_t_s_u(p_41, 12)) != g_207))) || g_3.f2) && l_375), l_423)))) <= l_423) < g_117))))
                {
                    unsigned l_426 = 0x326BAF50L;
                    struct S0 l_427 = {3,21,-0};
                    if ((l_426 , func_57(func_53(((l_423 & p_41) <= p_41)))))
                    {
                        l_318 = l_427;
                        if (g_127)
                            goto lbl_428;
                        return l_363;
                    }
                    else
                    {
                        g_66 = g_140.f2;
                        g_140 = l_318;
                        return g_357;
                    }
                }
                else
                {
                    l_436 = ((safe_sub_func_int32_t_s_s((func_53(l_431) == 0xC5L), (safe_lshift_func_int16_t_s_u(p_41, 9)))) && (safe_div_func_int16_t_s_s(g_3.f2, (func_57(p_41) , l_423))));
                }
                l_318.f2 = (safe_div_func_int32_t_s_s(((p_41 | (safe_mod_func_int64_t_s_s(((g_357 >= p_41) > func_57(func_42(l_370, (safe_sub_func_int8_t_s_s((l_315 , (g_140 , (safe_div_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(p_41, 15)), g_140.f0)) <= func_53((safe_mod_func_int64_t_s_s(0xF30A5ECD7F034A10LL, p_41)))), g_3.f0)) | 1UL), 0x3631D464L)))), g_3.f0)), g_3.f0))), 1L))) >= 0x67F1L), 0xFEDEB689L));
            }
            else
            {
                char l_502 = 1L;
                for (g_192 = (-22); (g_192 > (-18)); g_192 = safe_add_func_uint32_t_u_u(g_192, 8))
                {
                    unsigned l_463 = 0xB0C0A89FL;
                    struct S0 l_464 = {2,1,-9};
                    if ((l_315 > (((+func_53(g_207)) , (safe_mod_func_int16_t_s_s((func_53(((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s(g_79, l_463)) < (((1L || 4294967290UL) , l_464) , (safe_lshift_func_int8_t_s_u(func_53(g_207), 3)))), l_418.f0)) <= 0x2278L)) , g_192), g_192))) | p_41)))
                    {
                        g_66 = (safe_add_func_int64_t_s_s((g_3.f2 != (safe_unary_minus_func_uint16_t_u(((p_41 & (((safe_div_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0x0FL, (((l_463 > (p_41 && ((safe_mod_func_int64_t_s_s((0x49L > ((p_41 >= p_41) , ((safe_unary_minus_func_int32_t_s(((l_463 > g_140.f2) ^ 0x8507L))) , g_79))), l_479)) < 0UL))) | g_140.f1) , l_363))), l_318.f1)), (-10L))) , 0UL) , p_41)) , g_377)))), 0xCB9BC567CDC1E35ELL));
                        g_207 = func_57(g_3.f0);
                        g_66 = ((((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(((l_370.f0 ^ (((safe_lshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_s((l_487 <= g_488), 10)) & g_111) <= ((safe_div_func_int64_t_s_s((3L < ((+(safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((safe_unary_minus_func_int32_t_s((0xA0C97CF4L < (1L >= 0xEA05A77881DCCE8DLL)))) | ((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(g_140.f0, g_357)), (-1L))) || 0UL)) ^ l_418.f2), l_370.f1)), l_464.f0))) || g_207)), l_502)) & (-3L))), l_407.f1)) < p_41) && 0L)) , p_41))), g_3.f1)) == g_140.f0) , l_436) <= g_66);
                    }
                    else
                    {
                        l_370 = g_140;
                        if (g_140.f2)
                            goto lbl_428;
                    }
                    g_140 = g_140;
                    l_464 = g_140;
                    l_370.f2 = (safe_lshift_func_uint16_t_u_s(((((((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(l_370.f1, (safe_lshift_func_uint8_t_u_u((g_140.f0 , l_513), p_41)))) , (~g_3.f2)), ((safe_add_func_int32_t_s_s(g_377, (safe_mod_func_int64_t_s_s(p_41, (((safe_mod_func_uint64_t_u_u(p_41, (l_502 && p_41))) ^ g_3.f1) ^ 0x39A405CFC0919BC3LL))))) && l_502))) ^ p_41), g_294)) < p_41) || g_117) <= p_41) , 1UL) || l_520), l_502));
                }
                l_479 = func_53(func_57(g_111));
            }
        }
    }
    return p_41;
}







static char func_42(struct S0 p_43, unsigned p_44, char p_45)
{
    int l_50 = 3L;
    unsigned short l_191 = 65526UL;
    char l_230 = (-10L);
    struct S0 l_302 = {1,12,-3};
    unsigned l_308 = 0xE1823D53L;
    if (((l_50 , (safe_div_func_int32_t_s_s(((0x2B68169BL && func_53((((g_3.f1 >= (safe_sub_func_uint8_t_u_u((func_57((((l_50 != (safe_mod_func_int8_t_s_s((-1L), g_3.f1))) <= g_3.f0) , 9L)) <= 0UL), 7UL))) & 0UL) , l_50))) <= g_3.f0), l_50))) <= p_45))
    {
        int l_189 = 0x1E81E1FAL;
        for (l_50 = 0; (l_50 == 5); l_50 = safe_add_func_int32_t_s_s(l_50, 6))
        {
            long long l_190 = 1L;
            struct S0 l_195 = {2,2,-5};
            g_192 = (safe_add_func_uint8_t_u_u((p_43.f0 , (((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_45, 5)), (p_43 , (((safe_div_func_int64_t_s_s(g_3.f1, func_57((safe_unary_minus_func_uint16_t_u((0x2483L > (safe_sub_func_int8_t_s_s(func_53(p_43.f2), g_140.f2)))))))) , l_189) && l_190)))) , p_43.f1) & l_191)), g_3.f0));
            if (g_79)
                continue;
            g_207 = (safe_rshift_func_uint16_t_u_s(func_53((((((l_195 , p_45) <= ((((safe_rshift_func_uint8_t_u_u(0xEEL, (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(func_53(g_192), ((safe_unary_minus_func_uint16_t_u(((3UL != g_140.f2) ^ g_79))) == ((safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(l_50, g_127)), g_79)) > g_140.f2)))) , 0x2B2BL), 13)))) | 0L) != g_111) & l_191)) || l_189) , l_50) >= 9UL)), 15));
            for (g_111 = 14; (g_111 == 23); g_111 = safe_add_func_int16_t_s_s(g_111, 2))
            {
                unsigned short l_227 = 65535UL;
                l_195 = p_43;
                p_43.f2 = (func_53(g_127) | ((g_3 , (safe_lshift_func_uint16_t_u_u(((+(-1L)) != p_43.f2), (safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint16_t_u_u((((l_191 , (safe_add_func_int64_t_s_s((((safe_mod_func_int16_t_s_s(((safe_div_func_int64_t_s_s((((safe_rshift_func_int16_t_s_u((l_227 ^ g_3.f1), l_227)) > l_189) > p_45), g_127)) >= 0x039EE50CL), g_127)) > g_207) || 0UL), g_3.f1))) >= l_227) , 0xAEBBL), 2))))))) < l_195.f1));
                g_207 = l_189;
            }
        }
        g_207 = p_43.f2;
        l_230 = ((safe_mod_func_int16_t_s_s(g_127, p_43.f2)) > (((l_189 <= p_43.f0) , g_111) > l_189));
        g_66 = (g_3 , ((safe_mod_func_int8_t_s_s(((l_230 || (safe_sub_func_int8_t_s_s(p_43.f0, (!((g_79 <= (safe_mod_func_int16_t_s_s(g_140.f0, p_43.f2))) > (safe_div_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(g_140.f2, ((safe_sub_func_int8_t_s_s((((-8L) | ((l_230 && 255UL) , 1UL)) == 0x61L), l_191)) && p_43.f1))) , g_111), (-1L)))))))) == 0x65L), 0xABL)) | l_191));
    }
    else
    {
        int l_247 = 0x3233A8AAL;
        unsigned short l_264 = 0UL;
        struct S0 l_301 = {0,16,-1};
        for (g_79 = 2; (g_79 <= (-7)); g_79 = safe_sub_func_uint32_t_u_u(g_79, 9))
        {
            short l_252 = 0L;
            for (l_50 = (-3); (l_50 >= 23); l_50 = safe_add_func_int64_t_s_s(l_50, 9))
            {
                unsigned long long l_263 = 18446744073709551615UL;
                int l_277 = 0x522EF38CL;
                l_247 = 0L;
                p_43.f2 = (~(safe_rshift_func_int16_t_s_u(g_111, (g_140.f1 || (g_127 <= (p_45 | func_53((safe_sub_func_int16_t_s_s((p_43.f2 ^ ((l_252 | ((safe_mod_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s(g_3.f0, 1)) , 1L) ^ l_230), g_79)) == g_140.f0), 1)) | l_50) && p_43.f2), 0x267926D8L)) <= 1L), l_263)) & 0x5DL)) != g_207)), 0x89E9L)))))))));
                l_264 = g_127;
                l_277 = (safe_lshift_func_int16_t_s_s(g_3.f1, (((p_43.f0 == g_111) != ((func_53(g_79) != (g_127 || p_44)) > ((safe_rshift_func_int16_t_s_s((g_140.f2 && ((safe_sub_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_s((((g_117 | 0xE9L) > g_192) <= 0x39A174F5L), g_140.f1)) & p_44) , g_140.f2), p_43.f0)), g_79)) != l_252), 255UL)) , 0xA281D226L)), 0)) > g_3.f1))) != 0x09678452L)));
                if (g_127)
                    goto lbl_303;
            }
            return l_252;
        }
        g_140.f2 = ((+(safe_mod_func_int8_t_s_s(func_53(l_50), p_45))) > (p_43.f0 || (safe_div_func_uint8_t_u_u((g_207 > p_43.f2), ((safe_rshift_func_uint8_t_u_u(l_247, (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((g_3.f0 == (p_43.f1 , 0xD9D747DCB55CD4BFLL)), p_43.f1)), p_43.f0)), p_43.f2)))) , p_43.f1)))));
        l_302 = (((g_3.f0 & ((safe_mod_func_uint64_t_u_u(func_53(func_53(((safe_rshift_func_int16_t_s_s((+g_294), func_57(g_140.f0))) | p_43.f0))), g_192)) , ((safe_div_func_int64_t_s_s((safe_add_func_int64_t_s_s((((safe_sub_func_uint64_t_u_u(((p_43.f2 || 4294967294UL) , l_264), l_264)) != g_140.f0) != g_3.f2), p_43.f2)), (-3L))) , l_50))) == g_294) , l_301);
    }
lbl_303:
    p_43 = g_3;
    g_140.f2 = (safe_sub_func_int16_t_s_s(g_79, (safe_lshift_func_int8_t_s_u(p_44, 2))));
    p_43 = g_140;
    return l_308;
}







static int func_53(unsigned p_54)
{
    g_66 = 0L;
    return p_54;
}







static unsigned long long func_57(int p_58)
{
    long long l_78 = 0xA534C8A1B6174ED7LL;
    struct S0 l_139 = {1,9,-9};
    for (p_58 = (-9); (p_58 <= 14); p_58 = safe_add_func_int16_t_s_s(p_58, 1))
    {
        unsigned l_63 = 18446744073709551615UL;
        int l_90 = 0L;
        long long l_104 = 0L;
        struct S0 l_130 = {2,12,0};
        unsigned l_152 = 0x9F7E8E12L;
        if (l_63)
            break;
        for (l_63 = 0; (l_63 != 39); l_63 = safe_add_func_int32_t_s_s(l_63, 4))
        {
            unsigned l_71 = 0UL;
            unsigned l_87 = 4294967291UL;
            int l_110 = 0x7CD67D5FL;
            struct S0 l_163 = {2,11,3};
            long long l_166 = 0x6B62B2D3F7E23403LL;
            for (g_66 = (-6); (g_66 == (-17)); g_66 = safe_sub_func_uint16_t_u_u(g_66, 5))
            {
                short l_72 = 0x41F9L;
                unsigned short l_88 = 8UL;
                int l_118 = 0x96FBAD4EL;
                struct S0 l_119 = {0,12,0};
                if (p_58)
                {
                    short l_77 = 0x90A9L;
                    short l_93 = (-10L);
                    if (p_58)
                        break;
                    if ((safe_mod_func_int8_t_s_s((l_71 , ((l_72 < (((((safe_sub_func_int32_t_s_s(l_71, (safe_add_func_int8_t_s_s((l_63 , (p_58 > l_63)), l_77)))) & p_58) || l_78) == 65535UL) , l_77)) < g_3.f1)), l_72)))
                    {
                        long long l_89 = 0x99E8488E6FCAC8A3LL;
                        g_79 = 0x01BA2AACL;
                        l_89 = ((safe_lshift_func_uint8_t_u_u(g_79, 4)) > ((0x48L > (g_3.f2 , ((((safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((-1L))) <= l_77), (safe_sub_func_uint64_t_u_u((((-1L) | g_3.f2) | l_87), (g_3 , l_88))))) , 1UL) <= 0xFDD7L) || p_58))) <= p_58));
                        l_90 = l_87;
                    }
                    else
                    {
                        int l_109 = 0xDCAC19DAL;
                        if (p_58)
                            break;
                        g_111 = ((safe_mod_func_uint8_t_u_u(l_72, l_93)) && ((((p_58 >= 1L) || ((((l_87 | ((((safe_div_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(0UL, 2)) & (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((18446744073709551610UL != l_104), (safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u(p_58, 0xB986L)), g_3.f1)))), 1))), l_109)) ^ p_58) <= 0L) < p_58)) != 0x9D875717L) , (-1L)) <= l_110)) > 65531UL) > 0x71L));
                        return g_66;
                    }
                }
                else
                {
                    int l_114 = 0L;
                    l_118 = (safe_sub_func_int16_t_s_s(g_79, (((l_114 ^ p_58) > (safe_sub_func_int32_t_s_s(((p_58 || (l_110 & g_117)) & 0x48933AC5L), (((l_78 | (g_3.f0 ^ 0x5926L)) ^ (-1L)) ^ g_117)))) == 0xACL)));
                    l_119 = g_3;
                }
                if ((safe_mod_func_uint8_t_u_u(l_90, (((l_104 < (((g_79 != (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(65535UL, (!l_110))) < (g_3 , (p_58 > 0x31L))), 7))) ^ ((1L >= p_58) || g_3.f1)) , 0UL)) && p_58) ^ g_3.f1))))
                {
                    if (p_58)
                    {
                        long long l_126 = 0xA194CD19B671196DLL;
                        int l_128 = 1L;
                        l_119.f2 = 0x89C8F7CEL;
                        l_119.f2 = (+(g_111 < (l_126 <= (g_79 , g_111))));
                        l_128 = g_127;
                    }
                    else
                    {
                        struct S0 l_129 = {1,15,-0};
                        l_130 = l_129;
                        l_119.f2 = (+(l_87 > (safe_div_func_int32_t_s_s(((((((((safe_sub_func_int8_t_s_s(((p_58 , g_111) ^ l_119.f2), g_3.f1)) , g_3.f1) , ((safe_sub_func_uint32_t_u_u((g_3.f1 , ((safe_sub_func_uint8_t_u_u((+g_79), p_58)) < p_58)), 0xD51E7DF7L)) , p_58)) ^ p_58) ^ 2UL) ^ g_3.f2) | g_127) != p_58), 1UL))));
                        l_130.f2 = g_3.f0;
                    }
                }
                else
                {
                    unsigned char l_149 = 253UL;
                    if (p_58)
                    {
                        l_110 = g_79;
                        return l_78;
                    }
                    else
                    {
                        if (l_110)
                            break;
                        g_140 = l_139;
                        g_140.f2 = ((((((((safe_rshift_func_int16_t_s_u((!(-10L)), 2)) & (safe_div_func_int64_t_s_s(g_117, 8L))) <= (l_130.f1 ^ 0L)) >= 9UL) || (!(safe_sub_func_uint64_t_u_u((((l_149 ^ g_79) & g_3.f0) ^ 1L), l_88)))) , l_130.f2) > 3UL) & g_127);
                    }
                    g_140.f2 = (safe_add_func_uint32_t_u_u((l_152 > (p_58 ^ ((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(l_72, p_58)), 3)), (safe_sub_func_int8_t_s_s(((((p_58 >= (-1L)) && p_58) , p_58) >= p_58), g_140.f2)))) || 4294967290UL))), g_140.f0));
                    for (l_88 = 0; (l_88 != 21); l_88 = safe_add_func_int32_t_s_s(l_88, 5))
                    {
                        l_163 = g_3;
                        if (g_3.f2)
                            continue;
                        if (g_140.f1)
                            continue;
                    }
                }
                for (l_88 = 0; (l_88 == 60); l_88 = safe_add_func_int64_t_s_s(l_88, 3))
                {
                    struct S0 l_173 = {1,13,2};
                    g_140.f2 = (((-1L) && ((l_166 != 0x2AL) <= p_58)) >= (!(safe_mod_func_uint32_t_u_u((((0x4F644B9F4E2AC27ALL ^ (((+g_140.f2) , (p_58 || (safe_add_func_uint32_t_u_u(g_140.f0, 2L)))) > g_3.f1)) == 0xADL) == g_79), g_140.f0))));
                    l_163 = l_173;
                    if (l_88)
                        break;
                    g_140.f2 = 6L;
                }
                return p_58;
            }
            l_139.f2 = p_58;
        }
        l_139 = g_3;
    }
    l_139 = l_139;
    l_139.f2 = (safe_mod_func_int64_t_s_s(0x85BF0B686D89AF0ELL, l_139.f2));
    return p_58;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3.f0, "g_3.f0", print_hash_value);
    transparent_crc(g_3.f1, "g_3.f1", print_hash_value);
    transparent_crc(g_3.f2, "g_3.f2", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f1, "g_140.f1", print_hash_value);
    transparent_crc(g_140.f2, "g_140.f2", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
