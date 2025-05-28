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



static int g_5 = (-5L);
static short g_11 = 0L;
static unsigned g_13 = 0UL;
static char g_68 = 0x90L;
static short g_69 = 0L;
static unsigned g_70 = 0xE20B395BL;
static short g_71 = 0x17F4L;
static short g_99 = 0x7FB9L;
static unsigned short g_136 = 65532UL;
static int g_150 = 0xC2C3437DL;
static int g_167 = (-1L);
static int g_170 = 1L;
static unsigned g_211 = 0xA80779CCL;
static char g_261 = 0xFAL;
static unsigned short g_269 = 0UL;
static unsigned char g_388 = 247UL;
static volatile unsigned char g_390 = 0xB8L;
static unsigned g_410 = 0x9336C36EL;
static unsigned g_420 = 0x54A5D215L;
static char g_487 = 0xE8L;
static int g_517 = 0L;
static volatile int g_699 = 0x7000C278L;
static unsigned g_773 = 1UL;
static int g_792 = 0x3222B94CL;
static volatile short g_895 = 1L;
static unsigned char g_899 = 0x3EL;
static int g_930 = 0x368EF4A9L;
static unsigned g_945 = 1UL;



static unsigned short func_1(void);
static int func_2(unsigned short p_3, int p_4);
static const unsigned short func_20(int p_21, int p_22, unsigned p_23);
static short func_26(unsigned p_27, unsigned p_28, short p_29, const short p_30);
static short func_33(int p_34, char p_35);
static int func_36(const int p_37);
static short func_39(unsigned short p_40, const short p_41, unsigned p_42);
static short func_51(int p_52, unsigned p_53, short p_54);
static unsigned char func_76(unsigned short p_77, unsigned char p_78, int p_79, int p_80, int p_81);
static unsigned char func_91(int p_92, unsigned char p_93, int p_94, char p_95);
static unsigned short func_1(void)
{
    int l_6 = 0L;
    int l_12 = 0x7B568BE1L;
    const unsigned char l_38 = 0x99L;
    int l_72 = 0L;
    int l_73 = 0x12A55B90L;
    unsigned l_918 = 0xCA408B0CL;
    int l_921 = 0xD241AD7EL;
    unsigned l_947 = 18446744073709551614UL;
    l_947 = func_2(g_5, (l_921 = (((l_6 , (safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((g_11 = 0x72L), ((l_12 = (g_5 && g_5)) ^ (g_13 = g_5)))), (safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(func_20(((((safe_mod_func_int8_t_s_s((func_26((((l_6 && (g_899 = ((safe_lshift_func_int16_t_s_u(func_33((l_73 = (l_72 = func_36(l_38))), l_38), 5)) == 0x08L))) & g_5) || g_269), l_38, g_773, l_6) <= 0x8E45L), l_918)) ^ l_918) ^ 0xDBL) && g_167), g_773, l_6), g_773)) , 0x0DCF5398L), g_773)), 10))))) >= 0x4EBA93F0L) > g_5)));
    l_921 = (safe_rshift_func_uint8_t_u_u(0x3FL, 2));
    return g_11;
}







static int func_2(unsigned short p_3, int p_4)
{
    short l_924 = (-3L);
    char l_925 = 0xEFL;
    int l_928 = 0x266ADE1DL;
    const unsigned short l_929 = 0xEC6CL;
    unsigned l_944 = 0UL;
    int l_946 = 4L;
    g_167 = ((safe_lshift_func_uint8_t_u_u(g_792, p_4)) < g_13);
    if (func_91(g_699, (l_925 = l_924), (g_170 = ((func_51(p_3, ((g_899 = ((safe_rshift_func_int16_t_s_s((((g_261 , 0x97C3F12FL) || (((((g_71 < ((func_51((((((l_928 = (((func_39(g_517, l_924, g_773) || l_924) ^ p_3) || g_167)) ^ l_924) || p_4) , 0x37FA9469L) ^ p_3), l_924, p_3) ^ l_924) <= g_420)) , 0L) ^ g_150) & l_924) | g_13)) , l_929), l_929)) != l_929)) | l_929), l_924) < p_4) , 0x5149A9C2L)), g_930))
    {
        const unsigned l_931 = 4294967295UL;
        int l_934 = 1L;
        g_792 = ((((l_931 | p_4) ^ (func_76((safe_add_func_int16_t_s_s(1L, (l_931 | ((((func_36(func_26((0x0ADD748EL ^ ((((p_4 > (p_4 > (l_934 = (g_70 = (g_13 & 4294967295UL))))) > p_3) < l_929) ^ g_11)), p_3, l_925, l_924)) < g_269) & p_3) <= 0xBFCBA550L) <= l_928)))), g_150, g_5, g_410, p_3) <= l_924)) < p_4) != 1UL);
        for (p_4 = 27; (p_4 > 1); --p_4)
        {
            return p_4;
        }
    }
    else
    {
        unsigned char l_941 = 249UL;
        int l_942 = 0x94325F3AL;
        unsigned l_943 = 0xA21B37B8L;
        g_5 = ((safe_rshift_func_uint8_t_u_u((((l_946 = func_39(func_33(((g_895 <= (g_945 = (l_925 <= func_39(p_4, (safe_mod_func_uint16_t_u_u(((((l_941 < (func_26(((p_4 < ((l_928 = g_69) , (((p_3 = (l_942 = g_11)) != (((l_928 > l_925) != 0UL) , (-9L))) , g_930))) != p_4), g_136, l_943, g_71) <= 0x33F6AB06L)) <= 0xD09A0FA2L) > p_4) != l_929), 0x3FC8L)), l_944)))) , 7L), l_941), p_4, g_11)) || 0x4EL) , 1UL), p_4)) && (-1L));
        return g_13;
    }
    return g_699;
}







static const unsigned short func_20(int p_21, int p_22, unsigned p_23)
{
    const char l_919 = 0x73L;
    int l_920 = (-1L);
    l_920 = l_919;
    return p_22;
}







static short func_26(unsigned p_27, unsigned p_28, short p_29, const short p_30)
{
    int l_902 = 0xAA0B3B55L;
    const int l_915 = 8L;
    int l_916 = (-6L);
    int l_917 = 0x8E756229L;
    l_917 = (safe_rshift_func_uint16_t_u_u((((l_902 , (safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((((p_29 = ((p_27 && (l_916 = (safe_sub_func_uint16_t_u_u((g_136 = ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((((p_27 = l_902) , ((safe_rshift_func_int16_t_s_s(g_150, 0)) < (l_902 = l_902))) == g_99), (func_36(l_915) , l_915))), 3)) != l_915)), p_28)))) , 0xE2BFL)) & l_915) < g_517) > g_773) >= p_30), l_915)), g_167))) & 0x52663FB0L) == g_410), g_487));
    l_917 = ((-1L) || (4294967289UL && p_27));
    return p_29;
}







static short func_33(int p_34, char p_35)
{
    int l_96 = 0x58558097L;
    int l_97 = 0x53869515L;
    int l_898 = 0x1476BBC3L;
    l_898 = (safe_mod_func_uint8_t_u_u(func_76(g_71, ((safe_rshift_func_uint16_t_u_u(p_34, 4)) < p_34), g_68, ((0xE0L | ((+((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint8_t_u(g_5)), g_69)) || (p_34 | func_51((l_97 = ((safe_add_func_int32_t_s_s(func_51((func_51((safe_sub_func_uint8_t_u_u((((((((((func_91(l_96, l_97, l_97, p_34) , p_35) , l_97) >= p_34) || 0UL) > 4294967286UL) == g_71) >= 0x922BDD88L) || p_35) < g_5), 255UL)), p_34, p_34) , 0x24D72964L), g_68, p_35), 0x64FCBE55L)) ^ 5UL)), l_96, g_71)))) , 0L)) && g_70), g_71), 0x3FL));
    return g_269;
}







static int func_36(const int p_37)
{
    short l_55 = 6L;
    int l_62 = 0xE6EE3E4FL;
    short l_66 = 5L;
    g_71 = (func_39(p_37, (safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s(func_51(l_55, g_5, ((0UL != ((safe_mod_func_uint8_t_u_u(l_55, g_5)) | ((safe_rshift_func_int16_t_s_s(((((p_37 , (l_62 = (safe_add_func_uint32_t_u_u((g_5 || (1UL <= p_37)), p_37)))) >= 4294967290UL) , g_5) || l_62), g_5)) || l_62))) != p_37)), 12)) , 9L) , 0x3954656EL), 5L)) >= p_37), 1L)) , g_5), l_55)), l_66) < g_5);
    l_62 = g_68;
    return l_62;
}







static short func_39(unsigned short p_40, const short p_41, unsigned p_42)
{
    unsigned char l_67 = 249UL;
    g_70 = (g_69 = (g_68 = l_67));
    return g_68;
}







static short func_51(int p_52, unsigned p_53, short p_54)
{
    unsigned short l_63 = 0UL;
    int l_64 = 0x5D57D38CL;
    int l_65 = (-1L);
    l_64 = l_63;
    l_65 = 0x8E9D28BCL;
    return p_52;
}







static unsigned char func_76(unsigned short p_77, unsigned char p_78, int p_79, int p_80, int p_81)
{
    int l_892 = 1L;
    int l_896 = (-1L);
    for (g_211 = 5; (g_211 > 55); g_211 = safe_add_func_uint32_t_u_u(g_211, 1))
    {
        char l_891 = (-5L);
        l_892 = l_891;
        l_896 = (func_39(g_71, (safe_sub_func_int32_t_s_s(0xDB42666FL, g_895)), g_269) >= l_891);
    }
    l_896 = (safe_unary_minus_func_uint16_t_u((g_269 = p_78)));
    return g_99;
}







static unsigned char func_91(int p_92, unsigned char p_93, int p_94, char p_95)
{
    short l_98 = 0x28DAL;
    int l_111 = 4L;
    int l_147 = (-1L);
    int l_246 = (-1L);
    int l_263 = 0x20B0982DL;
    unsigned short l_321 = 7UL;
    unsigned l_372 = 0xB79CE891L;
    unsigned char l_378 = 254UL;
    unsigned l_624 = 18446744073709551612UL;
    short l_733 = 1L;
    char l_750 = 0L;
    const unsigned short l_776 = 7UL;
    if ((func_51((0xABB25A59L == (func_51(l_98, l_98, (l_98 >= l_98)) < ((p_93 = g_69) , func_51(l_98, g_69, l_98)))), g_99, g_5) < g_99))
    {
        int l_102 = 0L;
        int l_103 = (-1L);
        unsigned l_104 = 0xF6E77A78L;
        int l_186 = 0xB260C6B0L;
        int l_200 = 2L;
        unsigned short l_306 = 0x3D81L;
        char l_345 = 0xABL;
        const int l_346 = 7L;
        char l_398 = 0x8FL;
        for (g_99 = 17; (g_99 < 0); g_99 = safe_sub_func_int32_t_s_s(g_99, 1))
        {
            l_103 = func_51(l_102, l_98, g_68);
        }
        if ((l_111 = (l_104 > (((p_95 >= (g_70 = ((((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(func_51(g_70, p_93, g_69), (safe_rshift_func_uint16_t_u_s(65535UL, 1)))), 0x1EL)) , g_5) | (-1L)) , p_92))) && 4294967293UL) < 0xB47BL))))
        {
            char l_129 = 0x5EL;
            int l_130 = (-2L);
            int l_131 = 0x33E2D464L;
            unsigned l_148 = 4UL;
            int l_166 = 7L;
            int l_199 = 0x0DFEC3DBL;
            short l_286 = 0L;
            int l_291 = (-1L);
            char l_347 = 0x00L;
            int l_359 = 3L;
            short l_389 = (-1L);
            if (((-9L) >= (g_99 = ((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s((4294967295UL && 0L))), (safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((g_69 = l_102), ((safe_sub_func_int32_t_s_s((((-1L) <= (g_70 = (g_99 > ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(p_95, 6)) == func_51((safe_rshift_func_int16_t_s_u(((l_130 = ((l_111 = ((safe_rshift_func_int8_t_s_s((l_129 = p_95), p_92)) & g_5)) , p_94)) , l_130), l_131)), l_98, p_95)), g_71)) < l_131)))) > g_99), 0x0897D506L)) <= l_131))), 8UL)))) && p_92))))
            {
                unsigned char l_149 = 0x7CL;
                int l_171 = 4L;
                if (((g_99 | l_130) ^ ((((safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(l_111, (l_102 > (g_136 = 250UL)))) & ((safe_unary_minus_func_int16_t_s(((func_51(func_51(func_51(g_5, p_94, ((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int8_t_s_s((l_147 = (((((safe_mod_func_uint32_t_u_u(g_71, (safe_add_func_uint32_t_u_u((g_70 = (((safe_mod_func_int32_t_s_s((((g_69 || p_92) == p_94) || 7L), p_92)) || p_95) , l_131)), 0xAE6B9926L)))) , p_92) , p_93) && g_70) < 0xCA64ADD8L)), 7)) , 0UL))) & 0x738FFA6FL)), p_92, g_68), l_148, g_69) == g_71) || l_102))) != g_69)), l_149)) != g_99) > 6L) != p_92)))
                {
                    unsigned short l_159 = 0x5F1CL;
                    short l_168 = (-7L);
                    int l_169 = 0x8599F0A1L;
                    g_150 = l_102;
                    l_171 = (l_111 = func_51(g_71, (g_170 = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(func_51((l_169 = (((safe_sub_func_int32_t_s_s(p_93, func_51((safe_sub_func_uint16_t_u_u(l_159, (safe_mod_func_uint32_t_u_u(((func_51(l_149, (g_70 = func_51((l_130 = 0xFBB04038L), ((safe_lshift_func_int8_t_s_s((~0xF2L), 3)) | (l_166 = (((g_167 = ((safe_add_func_uint16_t_u_u(p_93, ((l_166 != (l_149 , g_71)) , p_95))) || 0x5DL)) | p_94) || p_95))), l_168)), p_92) ^ l_168) , g_69), l_159)))), l_147, p_94))) > (-6L)) , (-1L))), p_95, g_150), p_94)), p_92))), g_5));
                    for (g_69 = 17; (g_69 != (-3)); --g_69)
                    {
                        l_171 = (4294967289UL <= (((l_168 < ((safe_lshift_func_uint16_t_u_s((((~func_51(g_136, g_99, l_98)) , (safe_lshift_func_int8_t_s_u(5L, ((!(l_169 = (l_147 = p_92))) ^ (safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(0x782DL, g_136)), g_170)))))) && g_99), l_98)) < 0x4C19L)) ^ g_167) , l_130));
                    }
                }
                else
                {
                    char l_184 = 1L;
                    int l_187 = 8L;
                    if ((l_186 = (l_103 = (((((safe_sub_func_int8_t_s_s(l_184, (p_94 && p_94))) && g_69) != (g_70 , l_184)) < l_171) >= (safe_unary_minus_func_int8_t_s(l_184))))))
                    {
                        g_167 = ((p_93 = g_68) < (l_131 && ((g_150 , l_184) & g_68)));
                    }
                    else
                    {
                        l_187 = (g_170 == (-1L));
                    }
                    for (l_166 = 0; (l_166 < 24); ++l_166)
                    {
                        unsigned l_194 = 4294967295UL;
                        l_200 = (safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_147, (0xBAL & ((p_93 , (l_194 >= (((l_149 , ((((l_199 = (func_51(g_99, (l_187 = (~l_194)), ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((p_93 || ((func_51((g_150 , 7L), p_92, g_69) >= g_71) | l_149)), 0x8A62L)), l_149)) | g_167)) , 0x11F6D7AAL)) && l_147) | (-2L)) , p_93)) >= g_68) > l_171))) ^ g_68)))), 0xA3L));
                        g_167 = (l_149 >= func_51((p_94 != (((((p_92 != (safe_add_func_uint8_t_u_u(((((safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s(g_99, ((safe_add_func_uint8_t_u_u((+(l_184 < g_150)), (g_69 , func_51(g_71, ((0xC09CL == p_93) & l_104), l_102)))) , l_147))) || l_130) < l_129), l_104)) <= g_70) ^ l_147) , 1UL), 1L))) || g_167) && g_71) != 0x59ADL) >= 0x3F0AL)), g_70, g_136));
                        l_186 = (safe_add_func_uint8_t_u_u((g_211 = (((g_70 = 5UL) > g_68) == 0x8FL)), 252UL));
                    }
                }
                for (p_94 = (-17); (p_94 > (-17)); p_94 = safe_add_func_uint32_t_u_u(p_94, 6))
                {
                    unsigned char l_222 = 1UL;
                    l_131 = (1UL && ((((safe_add_func_uint8_t_u_u(func_51((((~((g_68 & p_93) || ((safe_sub_func_int16_t_s_s((-1L), p_92)) == (l_222 = (g_167 = ((safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_u((g_68 != (p_93 != (g_211 == g_71))), 7)) >= 0x5CL) < 0xF9L), l_104)) != 0x86D0L)))))) > 0x9FED1308L) , g_68), l_199, g_69), 252UL)) , p_93) , 0x1EL) < g_5));
                    g_167 = l_102;
                }
            }
            else
            {
                unsigned l_237 = 0xB6E13F6EL;
                short l_240 = 0x2B5DL;
                int l_245 = 1L;
                unsigned short l_287 = 0x166CL;
                l_103 = ((((safe_mod_func_uint8_t_u_u(func_51((g_69 < p_95), (p_93 ^ (safe_lshift_func_int16_t_s_u((g_99 = (safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(((l_130 = p_94) & l_199), (0xE1FDL < (l_104 , ((safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(l_237, (l_147 = (safe_lshift_func_uint8_t_u_s((((p_93 < 0xBCL) , 4294967287UL) ^ g_69), p_95))))), 9)) , 0x4CL), p_94)) ^ 0UL))))), g_99))), 8))), p_95), g_71)) <= 1L) > (-9L)) == l_240);
                if (((safe_lshift_func_int16_t_s_u((l_240 != (func_51((l_245 = p_94), g_71, l_246) == (safe_lshift_func_int16_t_s_s(l_246, 10)))), (0xFA0A2640L == (safe_mod_func_int32_t_s_s(0x1E87EC68L, (l_103 = (p_92 && g_150))))))) , g_211))
                {
                    int l_257 = 1L;
                    int l_258 = 0xB3BEA07AL;
                    unsigned l_262 = 18446744073709551615UL;
                    if (((safe_add_func_int32_t_s_s((l_111 = 6L), (l_263 = ((~((((safe_add_func_int8_t_s_s((l_257 = 3L), ((l_258 = 1UL) , (safe_rshift_func_uint16_t_u_u(p_95, (g_136 = (l_147 = p_95))))))) , ((g_167 = ((p_95 , p_92) , ((g_261 = (-1L)) <= (((l_262 & 0x50L) ^ p_95) | p_94)))) & g_170)) ^ 0UL) , g_5)) > l_103)))) ^ 0UL))
                    {
                        unsigned char l_268 = 255UL;
                        g_269 = (g_167 = func_51(((((safe_sub_func_uint32_t_u_u(l_263, ((l_246 , (g_167 <= (g_136 && (safe_add_func_uint16_t_u_u((4294967290UL > p_92), (l_131 = 0x66A6L)))))) , ((((((g_167 != (l_268 , 0x7626L)) <= 1L) > l_147) || (-5L)) != 0x64F156DCL) , p_94)))) != p_92) , 0x2C1CL) != l_258), g_69, l_104));
                    }
                    else
                    {
                        l_111 = g_167;
                        l_103 = g_211;
                        return g_5;
                    }
                }
                else
                {
                    g_167 = (l_102 || (safe_add_func_uint8_t_u_u(func_51(l_240, (p_95 | (g_269 && func_51(p_94, (safe_mod_func_uint32_t_u_u(0xADBFA3D3L, (g_261 && (func_51(g_136, g_71, l_240) || 0UL)))), g_69))), p_94), 0x7AL)));
                }
                g_167 = (g_68 == (p_95 < ((g_69 < (3L == func_51(((safe_sub_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s((g_261 <= p_94), 6)) , (safe_mod_func_uint16_t_u_u((g_269 = func_51(p_93, (((safe_mod_func_int16_t_s_s(l_200, (safe_mod_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u(l_104, g_211)) , l_286) <= 0UL), l_148)))) == 250UL) , p_92), l_237)), l_287))) >= g_69), 0x6AL)) | l_102), g_69, p_94))) == 0xEDDAL)));
                for (l_166 = 0; (l_166 > 23); l_166 = safe_add_func_uint16_t_u_u(l_166, 2))
                {
                    int l_290 = (-1L);
                    int l_309 = 0L;
                    l_263 = (((g_170 | (((0xE304L ^ g_69) && 0xF2C8688DL) > ((func_51(p_93, func_51(l_290, (l_245 = l_291), (l_246 != g_211)), l_290) || 253UL) & l_98))) <= 0xFEL) && g_68);
                    l_130 = (g_167 = ((l_306 = ((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(((l_98 , ((safe_rshift_func_int16_t_s_s(l_166, 15)) != 0xF420L)) < (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u(func_51(g_170, p_94, g_71), (~(65526UL < func_51((~p_95), g_136, p_94))))) && g_71), 4)) == p_93) >= 0x1FC0D30AL) && p_93), g_170)), p_95))), g_261)) == g_69) , g_269), l_111)) != l_237)) != p_92));
                    for (l_286 = 16; (l_286 >= 4); l_286 = safe_sub_func_int8_t_s_s(l_286, 6))
                    {
                        unsigned l_320 = 4294967288UL;
                        l_309 = 0x86BB9511L;
                        g_167 = (func_51((0xA52E5F91L > (((l_130 = (l_131 = 0x2699EA8DL)) && (0xABE8EA4BL > (safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((((((safe_sub_func_int32_t_s_s(p_92, 0xDCF7481FL)) != ((l_309 = ((safe_add_func_uint32_t_u_u((func_51(p_92, (+g_99), l_306) , p_92), 0x70ACDFBEL)) <= g_211)) >= l_147)) || l_320) < p_95) != l_320) && g_261) != 0x041DL), g_261)), 0x8FF2L)), g_99)))) == l_321)), g_261, g_5) == g_71);
                    }
                    g_167 = ((func_51(g_150, l_291, l_199) > ((l_321 >= (l_245 = l_103)) == (g_68 > (~(((safe_rshift_func_int8_t_s_u((p_95 = (((g_211 = (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((func_51(p_92, l_240, l_98) & g_261) == 0xEAL), 5)), g_170))) != g_68) >= g_261)), 1)) | 0xC6L) | p_93))))) , g_261);
                }
            }
            for (l_199 = 0; (l_199 <= 13); l_199 = safe_add_func_uint16_t_u_u(l_199, 6))
            {
                unsigned char l_339 = 252UL;
                int l_344 = 1L;
                if (p_92)
                    break;
                g_167 = (safe_unary_minus_func_uint32_t_u((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((func_51((safe_rshift_func_uint8_t_u_u(((+((safe_add_func_uint8_t_u_u(((func_51(l_339, l_130, l_103) < (l_339 >= (p_94 >= (l_111 != (((safe_mod_func_uint32_t_u_u((((((safe_add_func_uint32_t_u_u(l_339, l_344)) < p_94) , l_345) != 0x53B75FD9L) == 2UL), p_92)) > l_346) , g_261))))) || p_92), p_92)) && p_92)) | g_150), l_347)), l_98, g_150) | l_147), 0xE2BBL)), l_306))));
                if (l_345)
                    continue;
            }
            l_130 = ((((safe_unary_minus_func_int8_t_s((g_261 = (((((((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((func_51(((g_167 = ((255UL > (l_359 = ((((p_93 = (func_51(p_95, g_136, (((safe_mod_func_int32_t_s_s((g_211 ^ (l_98 <= ((g_269 & 0x4EL) , g_70))), (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(0x4142L, 6)), l_347)))) <= 0xD9L) >= g_150)) , l_98)) >= (-4L)) | 1L) == l_200))) == g_5)) , g_71), g_69, l_291) & l_103) != p_92), 0x0107L)), 0x10L)) , 0x1279L) == p_92) | p_95) , l_246) , (-1L)) ^ p_95)))) == (-2L)) && g_99) >= g_269);
            if (((safe_add_func_int8_t_s_s((-3L), (p_95 = (safe_add_func_int32_t_s_s(((func_51(((((safe_rshift_func_int8_t_s_s(func_51((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((func_51(l_372, p_92, (safe_lshift_func_int16_t_s_u(2L, 13))) != 0UL), (g_269 = (g_269 | g_170)))), p_93)), g_70, g_70), p_95)) | g_68) & l_372) , g_261), p_93, l_321) > p_94) == 0xA0L), p_95))))) <= l_306))
            {
                unsigned l_377 = 18446744073709551614UL;
                int l_379 = 0xB2F686EFL;
                l_130 = (l_379 = func_51(g_70, func_51((safe_add_func_int16_t_s_s(l_102, ((p_94 < l_104) < l_377))), l_129, l_378), (g_167 >= g_269)));
                g_167 = ((l_186 = ((((l_389 = ((0x47L <= (safe_sub_func_int32_t_s_s((l_263 = l_246), l_129))) , (l_306 ^ (g_388 = (safe_lshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_s((g_136 & ((l_103 = (-1L)) & g_71)), p_92)) <= (safe_rshift_func_uint16_t_u_u(l_377, l_306))) ^ p_95), 1)))))) , l_389) && l_102) || l_186)) | l_377);
                l_379 = ((func_51(g_269, ((l_379 & ((g_390 , p_92) | l_166)) < l_199), ((g_136 = (((((((l_377 ^ ((((safe_rshift_func_int8_t_s_u((p_94 != (g_69 , 0x1C14L)), 0)) < 0x03427809L) , p_94) & g_150)) , p_94) || 0xE4L) <= p_92) && 0UL) && l_377) <= p_93)) & g_99)) < p_92) , p_93);
            }
            else
            {
                return l_372;
            }
        }
        else
        {
            unsigned l_406 = 0xD85B41F0L;
            int l_407 = (-1L);
            for (l_186 = 23; (l_186 > (-28)); l_186--)
            {
                const int l_397 = 0x4A25CA21L;
                int l_399 = 1L;
                l_399 = (l_103 = (1L || (0x6C165125L == (0x33A2BE19L != (func_51((safe_lshift_func_int16_t_s_s(p_95, l_397)), l_397, ((((p_94 != ((p_92 && g_388) & p_92)) , 0xFBEBL) < g_269) < l_398)) && 65527UL)))));
            }
            l_407 = ((~(l_98 | (0xF3L == (((g_167 = (((g_261 = ((((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(l_98, g_388)), 0x87F70153L)) || ((safe_lshift_func_int16_t_s_s(g_167, g_390)) != ((p_94 , p_94) <= l_98))) <= 0x72EEL) >= l_406)) == g_150) || p_92)) , l_406) , 0xBAL)))) ^ 1L);
        }
        l_103 = (safe_unary_minus_func_int16_t_s(l_246));
        g_167 = (~p_95);
    }
    else
    {
        unsigned char l_409 = 0UL;
        int l_412 = (-5L);
        int l_468 = (-5L);
        unsigned l_516 = 0xF9FECBB9L;
        const int l_579 = 0x31B81217L;
        unsigned l_580 = 0x79F5BF23L;
        unsigned short l_664 = 65528UL;
        int l_694 = 0xB4811E86L;
        int l_725 = 3L;
        short l_732 = 0x7ABBL;
        unsigned char l_757 = 255UL;
        const unsigned l_768 = 9UL;
        short l_771 = (-2L);
        unsigned l_810 = 0xB07A2733L;
        unsigned l_834 = 1UL;
lbl_700:
        g_410 = l_409;
        if (g_170)
        {
            unsigned char l_411 = 1UL;
            int l_421 = 0x87AF10A2L;
            l_412 = ((l_111 = p_94) , l_411);
            g_167 = (safe_add_func_int8_t_s_s((((l_372 != 1UL) <= ((safe_lshift_func_uint16_t_u_u(p_94, 7)) , 0x67F0L)) <= func_51((((l_409 < g_388) && ((4294967295UL > g_390) != ((((g_136 = 65535UL) || g_261) ^ g_167) , l_411))) | g_99), g_261, l_409)), g_167));
            l_421 = ((safe_unary_minus_func_uint16_t_u(((g_167 = (g_170 < g_211)) , g_5))) && ((safe_sub_func_int16_t_s_s((l_412 == func_51(g_170, (g_70 = ((g_420 = (g_261 = ((l_147 > 0x31L) > ((g_99 = 1L) ^ (((l_411 ^ g_68) | g_388) == p_94))))) >= g_167)), l_409)), p_94)) == p_92));
            l_412 = (safe_sub_func_uint8_t_u_u((0xC70EL & ((((p_93 = g_388) != (safe_lshift_func_int16_t_s_u(l_409, p_92))) , ((func_51(g_167, (253UL != 0UL), (safe_lshift_func_uint16_t_u_s((func_51(((((1UL > func_51(p_94, p_95, g_420)) , p_92) , l_411) || l_409), l_409, g_68) ^ 0xCC66L), 7))) ^ l_411) , p_92)) && l_421)), 4L));
        }
        else
        {
            int l_437 = 0x9FF899DDL;
            volatile int l_467 = 0x54BD8C23L;
            unsigned char l_491 = 255UL;
            int l_497 = 0L;
            char l_519 = 0L;
            char l_546 = 0x0FL;
            unsigned l_669 = 4UL;
            short l_683 = 0xD480L;
            unsigned l_695 = 0x7A73BD8FL;
            const unsigned l_706 = 0x16B766F5L;
lbl_597:
            if ((0x99FCE0E0L <= (safe_unary_minus_func_int8_t_s(((p_93 == p_92) ^ ((safe_add_func_uint32_t_u_u(((8UL == ((safe_sub_func_int8_t_s_s(func_51((safe_rshift_func_int8_t_s_s(p_95, 7)), (safe_mod_func_uint16_t_u_u(((p_94 = l_147) , ((func_51(g_99, l_321, l_437) != p_92) , l_412)), p_93)), p_93), p_93)) != (-2L))) < 0xD2CFL), g_150)) >= p_95))))))
            {
                char l_447 = 0xE4L;
                unsigned l_465 = 4294967295UL;
                int l_466 = 0x37C0EC75L;
                int l_522 = 0L;
                char l_542 = 0x75L;
                if (((func_51((g_150 = ((p_94 == 0x8D5C7EE6L) , p_94)), ((g_410 != 7UL) , func_51((func_51(g_420, (g_211 = p_95), g_99) && 65535UL), p_95, l_409)), g_5) & 0x5DL) ^ p_94))
                {
                    char l_444 = 0x4EL;
                    unsigned l_448 = 0xEE358677L;
                    l_448 = func_51((g_150 = g_388), (~(safe_sub_func_uint16_t_u_u(((p_92 != p_93) , (((((((safe_sub_func_uint8_t_u_u((l_412 = p_95), (-1L))) , (safe_mod_func_int8_t_s_s(((func_51((l_444 == (safe_lshift_func_uint16_t_u_u(((func_51(g_136, ((g_410 && ((g_99 = l_447) | 65529UL)) <= p_92), g_68) , p_94) , p_95), l_444))), g_167, g_69) | l_447) , l_111), l_409))) , g_71) != 0L) != l_444) && p_92) || (-1L))), g_388))), p_92);
                }
                else
                {
                    int l_461 = 0L;
                    for (g_170 = (-16); (g_170 != 21); g_170++)
                    {
                        char l_462 = (-2L);
                        int l_463 = 0x77274EF8L;
                        short l_464 = (-1L);
                        g_167 = (+l_409);
                        l_466 = ((safe_add_func_int16_t_s_s((((0x49L & (((g_388 = func_51((((safe_add_func_uint16_t_u_u((g_99 != (((func_51(((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((g_136 = g_420), func_51((((p_94 == (safe_rshift_func_uint8_t_u_s((p_93 = ((func_51((((l_378 , 1L) == l_437) , func_51(l_461, (((0UL == g_5) <= l_437) , 0xAF71240FL), l_372)), l_462, l_461) | g_68) | p_93)), g_269))) <= 250UL) != l_463), g_269, l_372))), 0xE79AL)) && l_464), l_98, g_390) < p_95) & p_92) , l_461)), l_464)) & p_94) & p_92), g_420, l_412)) <= 0xA7L) >= 0x95L)) >= l_465) || l_321), g_420)) && 0x16L);
                        return l_462;
                    }
                    l_467 = g_390;
                }
                l_412 = ((p_95 = func_51(l_468, func_51(((255UL < (safe_rshift_func_int8_t_s_s(0xA4L, g_70))) , 0xD7D85E81L), g_136, l_437), ((g_99 = (safe_rshift_func_uint8_t_u_u(l_378, l_465))) == l_437))) , g_99);
lbl_586:
                if (g_70)
                {
                    short l_473 = 0L;
                    if (((l_473 = (l_378 != (p_93 = 1UL))) | 1L))
                    {
                        short l_480 = (-1L);
                        l_467 = (g_70 ^ (g_388 = ((l_263 >= (g_71 || func_51(((safe_rshift_func_int16_t_s_u((!(0x8717L != p_95)), ((p_94 & func_51((l_447 & (((((safe_mod_func_int8_t_s_s((g_167 != 6UL), p_94)) , 0x719BL) ^ l_409) != g_410) == l_447)), p_95, l_480)) && l_321))) < (-1L)), g_68, g_69))) >= p_93)));
                    }
                    else
                    {
                        char l_490 = 0L;
lbl_492:
                        g_167 = (0x98225740L | (+p_93));
                        g_167 = func_51((g_150 = (p_92 = (g_261 >= (((p_94 >= 0x10L) || (safe_lshift_func_uint8_t_u_u((p_95 <= p_92), (l_466 = (((((g_99 = ((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((g_487 = (0x498BL ^ g_390)), 6)), (safe_add_func_int32_t_s_s(l_473, (p_95 & g_68))))) , 8L)) ^ l_263) > l_490) | l_491) ^ 0x561CL))))) != 4294967286UL)))), p_94, g_70);
                        if (g_70)
                            goto lbl_492;
                        l_466 = (!(((3L > (g_388 = ((safe_rshift_func_int8_t_s_u((0x780BEF9DL >= (safe_sub_func_int16_t_s_s(p_93, g_211))), l_497)) , (safe_sub_func_uint8_t_u_u((g_487 , (func_51((((func_51(l_409, (l_147 = (((safe_sub_func_uint32_t_u_u(g_99, (l_412 = (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(0xB104L, g_410)), g_69))))) & 0x8CL) >= l_490)), g_150) || p_92) & 0x456DL) | 0xA545E140L), p_92, l_468) , p_93)), 5UL))))) ^ g_150) > p_92));
                    }
                    if (g_136)
                        goto lbl_597;
                }
                else
                {
                    short l_518 = 0xB134L;
                    int l_531 = 0x1EEB2332L;
                    unsigned short l_554 = 65532UL;
                    if (((((safe_rshift_func_uint8_t_u_u(g_136, g_390)) ^ ((func_51((p_94 = ((g_269 = ((((safe_mod_func_uint8_t_u_u((g_517 = (g_388 = (((l_497 = g_420) < 2UL) != func_51((safe_add_func_int8_t_s_s((g_487 = (l_412 = func_51(((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((g_261 = func_51(p_92, g_388, (g_487 ^ 2UL))), l_516)), g_99)) != g_167), g_388, g_211))), p_93)), p_93, p_93)))), p_92)) , g_211) ^ (-1L)) ^ l_447)) & 1UL)), l_518, p_93) <= l_468) == g_71)) > l_466) <= l_519))
                    {
                        int l_529 = (-1L);
                        int l_530 = 1L;
                        l_530 = (safe_mod_func_uint16_t_u_u(((((g_388 = (g_170 > ((l_466 = l_491) | l_372))) != g_99) ^ (((l_522 = 0xE194E922L) & p_92) , (safe_mod_func_uint32_t_u_u((l_447 == (((safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((l_447 != (l_468 = (((p_94 >= l_529) < g_136) & l_468))) < 65528UL), 4)) <= l_519), g_5)) <= 4294967287UL) || g_517)), p_92)))) <= 250UL), 0x2263L));
                    }
                    else
                    {
                        l_468 = func_51((l_263 = (l_531 = g_68)), (safe_sub_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((((g_388 = ((l_522 = p_92) == p_93)) ^ (safe_lshift_func_uint16_t_u_u((g_269 = ((((l_497 = ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(func_51(l_542, (g_211 = (g_70 = 0xBBEFEC8FL)), ((safe_mod_func_uint8_t_u_u((g_487 >= (((safe_unary_minus_func_int8_t_s(p_92)) , p_92) , l_378)), l_518)) || p_94)), l_546)), l_412)) >= g_136)) && (-9L)) > p_93) , g_167)), 14))) || 65535UL), 7UL)) | l_412), l_542)), g_261);
                    }
                    g_167 = func_51((p_94 = (p_92 = (g_390 , (0x5FL || (((((safe_add_func_uint8_t_u_u(p_94, 0UL)) , (safe_sub_func_int16_t_s_s((0x43L == g_70), (safe_unary_minus_func_uint32_t_u(l_497))))) == ((func_51(((g_69 = func_51((g_150 = g_170), (g_211 = (safe_mod_func_uint32_t_u_u((g_99 < l_497), p_93))), l_466)) , p_95), g_71, p_92) == l_518) , l_447)) > 0x646DAE79L) > l_554))))), l_409, p_93);
                    if ((((p_92 = l_465) , ((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((((l_466 = (func_51((g_170 = (-6L)), ((l_412 = (g_69 = p_94)) && (safe_sub_func_int8_t_s_s((p_94 || (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(g_150, 0)), (safe_add_func_uint32_t_u_u((((func_51((l_412 = (safe_rshift_func_int8_t_s_s(p_93, p_94))), l_518, g_68) & 0xFE613C0BL) > l_518) , g_269), g_517))))), p_92))), l_516) == p_93)) == l_516) || g_269), g_71)) & g_420), p_92)) != g_167)) == g_261))
                    {
                        unsigned l_574 = 0xEAAB78E7L;
                        l_466 = (l_522 = ((func_51(((safe_add_func_int16_t_s_s(((+((l_519 ^ 0xC034L) ^ (g_150 , ((l_574 = (safe_rshift_func_uint16_t_u_u(0xAB96L, ((safe_unary_minus_func_int32_t_s(p_93)) , p_92)))) , ((safe_mod_func_int8_t_s_s(g_69, (safe_rshift_func_uint16_t_u_s(func_51(((((func_51(l_466, (g_70 = ((p_92 | 0x04L) ^ (-1L))), g_68) < p_93) , p_95) <= l_574) >= g_150), g_390, p_93), 7)))) | l_579))))) >= p_92), p_93)) < 255UL), l_147, p_94) , p_95) >= p_94));
                        return l_580;
                    }
                    else
                    {
                        unsigned l_581 = 0UL;
                        return l_581;
                    }
                }
                if (((safe_add_func_uint32_t_u_u(((l_519 >= g_136) & (((g_261 = (g_170 , (g_70 || g_420))) == (safe_mod_func_int16_t_s_s((~(0x1CC4L <= (l_522 = 9UL))), l_263))) && (((0x711B70DEL <= 6L) & (-1L)) > l_372))), l_579)) || l_412))
                {
                    if (l_497)
                        goto lbl_586;
                }
                else
                {
                    g_167 = (-9L);
                }
            }
            else
            {
                unsigned short l_587 = 0UL;
                if (((!((p_93 = (p_95 > (((p_93 != (l_468 = func_51(l_587, (g_99 , (l_111 | (((l_587 | p_93) & (g_99 = (p_93 < (safe_rshift_func_int16_t_s_u((g_420 >= g_150), l_546))))) >= l_497))), l_467))) >= 1L) , p_93))) , p_93)) > 0xC3L))
                {
                    unsigned l_594 = 0x933B7913L;
                    l_497 = (safe_sub_func_int16_t_s_s(((((((((safe_add_func_int8_t_s_s(((g_70 = l_587) == ((((g_71 , p_94) || ((func_51(g_71, l_594, (safe_add_func_uint32_t_u_u(g_170, (l_412 = (g_167 = g_68))))) , l_412) , p_93)) ^ g_410) && g_517)), p_92)) & 0xD019L) ^ g_71) != g_420) != g_136) , g_136) > 0L) & g_269), l_409));
                }
                else
                {
                    l_263 = g_410;
                }
            }
            if ((g_167 >= g_410))
            {
                char l_605 = (-7L);
                int l_610 = (-4L);
                if (l_516)
                {
                    return p_92;
                }
                else
                {
                    unsigned l_606 = 1UL;
                    for (l_321 = (-6); (l_321 != 27); ++l_321)
                    {
                        short l_600 = 0x7DC2L;
                        return l_600;
                    }
                    l_606 = (safe_rshift_func_uint16_t_u_s(p_92, ((g_70 = (1L <= (safe_lshift_func_uint8_t_u_s(((g_211 = (l_468 = ((g_487 = (func_51(func_51(l_580, l_605, g_261), l_605, l_519) != 0xD8E9847BL)) , 5UL))) <= 0x52127907L), 6)))) >= l_497)));
                }
                if (((l_263 = ((safe_unary_minus_func_int16_t_s((((g_211 ^ (safe_add_func_uint16_t_u_u(((l_610 = (g_487 && g_388)) <= (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(l_605, (p_95 , (safe_mod_func_uint16_t_u_u(l_437, g_70))))) && (g_487 , (-1L))), l_519))), 1L))) && p_94) > p_93))) , g_487)) | l_516))
                {
                    short l_619 = 5L;
                    g_517 = ((safe_sub_func_uint8_t_u_u(l_516, (((l_619 < (((+p_92) >= (l_412 = func_51(g_410, (safe_lshift_func_int8_t_s_s(((l_619 > p_95) && (p_94 <= (l_497 = func_51((g_150 = (((0L != ((func_51((safe_add_func_uint16_t_u_u(0UL, l_610)), g_99, p_92) || p_93) != g_211)) >= l_409) >= g_211)), g_269, g_517)))), g_211)), l_624))) != 2UL)) > l_263) , g_487))) != 0x5646L);
                    g_167 = g_136;
                }
                else
                {
                    const unsigned l_638 = 0xEE7189A9L;
                    l_610 = ((g_261 , (-4L)) && ((safe_add_func_int16_t_s_s((l_519 <= (safe_add_func_int16_t_s_s(((l_491 ^ l_147) >= (((safe_add_func_uint16_t_u_u(g_487, (safe_sub_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((p_94 ^ l_437), g_71)) & 0xA900607AL), g_261)))) == 0x570181C2L) || 0x79L)), g_99))), 0x1EECL)) || g_68));
                    if ((0xDCL || (~0xEEL)))
                    {
                        int l_637 = 0x494DADDDL;
                        unsigned l_639 = 0UL;
                        l_637 = (safe_rshift_func_int16_t_s_s(((l_497 = func_51(((l_637 , func_51(((0xB1L < p_92) , p_94), (!((l_638 == g_420) < l_468)), (func_51(l_639, (g_410 , 0x51EAA03AL), g_410) | 0x8EA7L))) , l_610), g_388, p_94)) || 0xFBB194A5L), 14));
                        l_610 = (l_638 , l_412);
                        l_637 = (safe_rshift_func_int16_t_s_u(0L, 13));
                    }
                    else
                    {
                        short l_650 = 8L;
                        int l_651 = 0xBAD850BDL;
                        l_650 = (safe_rshift_func_uint16_t_u_s(p_92, (l_111 = (safe_sub_func_uint16_t_u_u((l_579 && ((g_5 >= p_93) , ((safe_add_func_uint8_t_u_u((g_388 = (g_517 , 0xABL)), l_605)) , p_93))), (safe_sub_func_uint16_t_u_u((0x5F57CA6CL | (-1L)), g_70)))))));
                        l_651 = (~p_92);
                    }
                }
                if ((!p_95))
                {
                    short l_676 = 0x0B40L;
                    int l_677 = (-8L);
                    int l_678 = 6L;
                    for (l_409 = 0; (l_409 < 33); ++l_409)
                    {
                        l_467 = p_94;
                    }
                    g_167 = 0x0DAB2749L;
                    for (l_98 = 27; (l_98 != (-20)); --l_98)
                    {
                        unsigned l_681 = 7UL;
                        int l_682 = 0x7907B84EL;
                        l_467 = (g_167 = (safe_sub_func_int32_t_s_s((g_410 == 250UL), (l_497 = func_51(p_95, l_610, (safe_add_func_uint32_t_u_u(0x70C46104L, ((l_468 = 0x8E12L) <= (((safe_sub_func_uint32_t_u_u(0UL, ((((safe_mod_func_uint32_t_u_u((l_610 > (((((~((p_93 ^ p_92) != (-1L))) > (-8L)) | g_69) , (-1L)) && p_93)), g_269)) >= 0xF8D02A40L) || 0x3BL) <= 0x4EL))) , g_390) <= 0x29L)))))))));
                        l_467 = ((((0x338DL == l_664) < 0x99L) , g_136) | (((l_678 = (l_677 = (l_676 = (safe_add_func_int16_t_s_s((l_669 = (g_99 = (safe_sub_func_int16_t_s_s(p_95, l_605)))), (p_92 & (g_269 = (safe_lshift_func_int16_t_s_u(((l_111 || (safe_mod_func_int8_t_s_s((l_412 = (safe_add_func_int16_t_s_s(1L, 0x9E09L))), g_5))) == l_605), 13))))))))) | l_580) <= 1UL));
                        l_412 = (((g_420 < func_51(p_95, l_147, (safe_mod_func_int16_t_s_s((g_69 = (l_610 = (l_682 = ((0L != func_51((g_99 == (p_93 && 1UL)), func_51((p_92 || l_681), p_93, p_93), g_70)) , 9L)))), p_93)))) , l_683) ^ p_94);
                        g_517 = (+l_579);
                    }
                    g_167 = (func_51(p_92, g_390, (l_610 || (((func_51(l_677, g_420, func_51((safe_rshift_func_int16_t_s_u(((p_94 ^ func_51(p_94, l_579, g_261)) & g_99), 6)), l_409, g_5)) >= g_150) >= l_579) > g_487))) ^ g_99);
                }
                else
                {
                    g_517 = (safe_add_func_int16_t_s_s(p_93, l_580));
                }
            }
            else
            {
                short l_696 = (-1L);
                int l_701 = (-9L);
                for (g_70 = 0; (g_70 <= 36); ++g_70)
                {
                    unsigned char l_716 = 0xADL;
                    g_167 = func_51(p_94, g_420, (l_263 = (l_409 < (p_92 >= (safe_rshift_func_int16_t_s_u((p_95 >= (safe_rshift_func_uint16_t_u_s(l_579, (((l_694 < l_695) ^ (-1L)) , l_696)))), 4))))));
                    if (func_51(p_92, g_70, (+(safe_rshift_func_int8_t_s_u(g_699, 2)))))
                    {
                        if (l_147)
                            goto lbl_700;
                        l_701 = 4L;
                    }
                    else
                    {
                        unsigned char l_715 = 250UL;
                        g_517 = (safe_mod_func_uint16_t_u_u((g_269 = (g_487 | g_167)), ((1UL == ((safe_lshift_func_int16_t_s_u(((p_93 | func_51((g_420 == ((0x9934L >= l_706) && func_51(((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((g_390 , ((safe_sub_func_uint32_t_u_u(0xBB784C0CL, 0xF63875BDL)) <= 0x3CA5372DL)), l_695)), 1UL)), l_147)) , p_95), p_93, p_92))), p_92, l_715)) < g_70), p_93)) ^ l_716)) , g_167)));
                        l_412 = l_716;
                        l_725 = (!(safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_s((l_468 = ((((safe_lshift_func_uint8_t_u_s(l_372, l_683)) > ((g_167 = (g_517 = 0xF2E4F712L)) | ((safe_rshift_func_uint16_t_u_u(g_70, 9)) || 0xBBL))) != p_92) == g_420)), 6)) == (((((l_412 = ((((p_95 & (l_497 = (l_706 | p_92))) || g_68) || 65533UL) , 0xD1EBABE4L)) , l_715) >= g_70) & 0x736F9F9DL) == 0x0CL)) & 1L), 4)));
                    }
                    l_497 = g_68;
                    return p_93;
                }
                return p_93;
            }
            l_467 = (((p_92 , ((safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(0x0EL, l_669)), (g_261 = p_93))) && l_732) == g_170), func_51(p_93, (l_111 = 0xE3F97877L), (l_98 , l_733)))) && l_263)) == p_94) && p_92);
            if ((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((g_388 > (safe_add_func_int32_t_s_s((((l_497 = (func_51((safe_lshift_func_int8_t_s_s(func_51(((safe_unary_minus_func_int32_t_s(((func_51(l_695, (((safe_add_func_uint8_t_u_u((!l_546), (func_51(g_167, g_70, g_410) == 0x9215C68BL))) & (safe_add_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(func_51(p_94, p_93, p_93), g_99)) <= g_517), 1UL))) > 0x8CAC7C88L), l_669) > 0xA6BAL) | p_92))) && 1L), p_92, l_111), 3)), l_497, l_669) == 0L)) , 0xC7L) & p_94), p_92))), l_412)), 11)))
            {
                unsigned short l_749 = 0x5130L;
                int l_758 = 0L;
                g_517 = (func_51(g_167, ((((l_669 , l_749) & (g_410 != 0x40L)) , (((((l_111 = g_70) > (g_388 && 0x4EL)) || (l_468 = g_410)) , 1L) > l_750)) >= p_95), p_94) , g_517);
                l_468 = (2UL != (safe_mod_func_uint16_t_u_u((+(safe_sub_func_uint8_t_u_u(l_732, (((safe_add_func_uint32_t_u_u(g_420, l_757)) ^ ((l_467 , func_51(g_388, (l_758 = (l_725 = 0xC8FB370CL)), g_517)) , p_94)) , g_517)))), 0x56D3L)));
            }
            else
            {
                return p_92;
            }
        }
        for (l_725 = 0; (l_725 >= (-16)); --l_725)
        {
            const unsigned char l_763 = 0x46L;
            int l_772 = 0x4542CB52L;
            for (g_261 = 0; (g_261 == (-19)); g_261 = safe_sub_func_int32_t_s_s(g_261, 1))
            {
                l_111 = p_94;
                if (l_763)
                    continue;
                return p_95;
            }
            if (l_98)
                break;
            l_147 = (safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(l_768, 0x6FL)), ((l_763 != ((8UL || (l_772 = func_51(g_410, (l_412 = (safe_lshift_func_int8_t_s_u((p_95 = ((l_763 , 0x6091L) || func_51((!(func_51(p_95, (0x71L ^ 255UL), p_93) >= 0x057AE96DL)), p_93, l_771))), g_487))), l_763))) && p_93)) ^ g_517)));
            if (g_70)
                continue;
        }
        if (((~((l_98 < func_51(g_269, ((func_51(((func_51(g_773, l_372, p_94) , (g_70 = func_51(func_51(g_773, l_732, (l_111 = (safe_lshift_func_uint8_t_u_s(g_136, g_269)))), g_773, g_773))) || 4294967295UL), l_516, l_409) < 0xF63C73FAL) && g_170), l_147)) > 4294967294UL)) < p_94))
        {
            char l_801 = 1L;
            int l_814 = (-1L);
            g_167 = (g_517 = (l_776 && l_516));
            for (l_246 = 0; (l_246 <= 3); ++l_246)
            {
                unsigned short l_791 = 0x161CL;
                int l_793 = 0x430DD4F1L;
                int l_794 = 0xE2254913L;
                unsigned char l_799 = 8UL;
                unsigned char l_800 = 0xC8L;
                g_167 = (1UL < g_487);
                l_725 = (safe_rshift_func_uint16_t_u_s((((~(safe_lshift_func_int16_t_s_u(g_487, 10))) , (safe_lshift_func_uint16_t_u_s((l_111 = ((safe_mod_func_uint32_t_u_u((((((l_147 < (l_412 = (((safe_mod_func_uint8_t_u_u(func_51((safe_lshift_func_uint8_t_u_u(l_791, g_390)), g_99, (l_794 = (l_793 = g_792))), (safe_sub_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(p_95, func_51(l_799, g_71, l_799))) == 65529UL) & 0x22L), l_799)))) , g_487) >= 1L))) && l_800) || 1L) > 0xECL) || l_372), 0xBDD994D2L)) <= l_801)), p_92))) , p_95), 12));
            }
            l_468 = g_487;
            for (g_136 = 0; (g_136 > 21); g_136 = safe_add_func_int16_t_s_s(g_136, 5))
            {
                char l_813 = 0x44L;
                g_167 = ((safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((l_801 <= ((safe_add_func_uint16_t_u_u((l_810 , (~(safe_sub_func_uint16_t_u_u((g_167 , func_51(((l_813 <= l_813) ^ ((func_51(l_813, (l_814 = l_776), g_487) | g_150) | l_801)), g_390, l_580)), p_92)))), p_94)) >= 1L)), (-4L))) | l_263), l_725)) & l_412);
                return g_487;
            }
        }
        else
        {
            int l_817 = 1L;
            int l_820 = 0x0B2A640AL;
            if (((l_409 < (p_95 = 0x03L)) == (l_817 = (((safe_add_func_int16_t_s_s(((l_817 <= (safe_add_func_uint16_t_u_u(p_93, (l_820 = g_390)))) | l_580), (((p_94 <= (g_388 = l_817)) > g_68) <= g_211))) | 1UL) >= l_378))))
            {
                char l_835 = 0xBCL;
                unsigned short l_838 = 65535UL;
                int l_857 = 0x1D4DB0FDL;
                if (((safe_sub_func_int8_t_s_s(((func_51(g_261, ((l_817 = 0x154276A0L) & func_51((g_792 >= ((safe_unary_minus_func_int8_t_s(((l_147 = ((!(((1L | (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u((func_51(g_269, (+(safe_lshift_func_int16_t_s_s((g_269 & (g_167 = g_773)), (safe_sub_func_uint16_t_u_u(func_51(g_170, g_517, p_93), l_834))))), p_92) ^ 0x254040D2L), g_211)) ^ 0xFF4C7DF0L), p_95)), g_99))) || l_820) , 0xFE6ED1FCL)) || g_261)) ^ 1UL))) == g_70)), p_95, g_388)), g_5) | g_170) >= (-1L)), l_835)) , l_321))
                {
                    return l_111;
                }
                else
                {
                    int l_839 = 0x12651BC4L;
                    if ((safe_lshift_func_uint8_t_u_u(0xE7L, 4)))
                    {
                        l_820 = l_838;
                        return l_820;
                    }
                    else
                    {
                        l_839 = p_93;
                    }
                    if (g_69)
                    {
                        unsigned l_850 = 0x5C9C748CL;
                        int l_851 = 0x7C3A4015L;
                        l_851 = (safe_rshift_func_uint16_t_u_u(func_51(((func_51(g_390, p_94, ((safe_lshift_func_int16_t_s_s(p_94, 7)) <= g_170)) || p_95) && ((((safe_add_func_int32_t_s_s(l_817, ((g_71 ^ (p_95 = (((((((safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((g_99 = ((l_835 && g_269) , l_839)) <= g_150), 0x3BL)) != g_170), g_211)) & 0xE281L) != l_263) | 0UL) , l_850) & 0x2EE92249L) != g_269))) , l_839))) < 1UL) == 0x4CL) && 1L)), p_93, p_94), 5));
                    }
                    else
                    {
                        char l_852 = 0x13L;
                        int l_872 = 0x8623C721L;
                        g_517 = ((+((l_852 > g_170) >= ((((-3L) == (func_51((safe_rshift_func_int16_t_s_u(g_150, 13)), g_170, l_147) ^ (g_170 && (-1L)))) | p_95) < 0xB4447642L))) ^ l_835);
                        if (l_839)
                            goto lbl_858;
lbl_858:
                        l_857 = (safe_sub_func_int16_t_s_s((l_835 != ((0x44A57374L || p_92) || 0x2460A08DL)), l_835));
                        l_147 = (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(func_51((g_150 = ((l_872 = func_51((p_92 = (((g_388 = (safe_sub_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(1L, 4294967295UL)) , 7L), (~((safe_mod_func_uint8_t_u_u(p_94, p_92)) != 0xA655L))))) ^ (safe_add_func_int32_t_s_s(l_835, (g_211 = (0x9C8EED80L | ((((safe_lshift_func_int8_t_s_u(1L, 3)) >= (-1L)) , l_732) < p_95)))))) , 0xDFE5DE08L)), p_93, g_410)) < l_838)), g_773, l_857))), g_136));
                        g_792 = (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(g_269, 3)) == (((((((p_93 ^ g_410) && (((p_93 = 1UL) < ((func_51(g_390, func_51((safe_add_func_int8_t_s_s(0x53L, ((g_211 ^ (g_70 , p_95)) <= p_95))), l_810, p_92), g_487) | p_92) > l_817)) && 0xAEC6L)) | 0xA52EL) ^ l_872) <= 0L) == p_95) || l_852)), 65535UL)), 246UL));
                    }
                    g_167 = (l_111 = g_99);
                }
                g_517 = l_857;
            }
            else
            {
                int l_883 = (-1L);
                g_792 = (g_517 = (((l_725 = (l_147 = l_111)) && (func_51(g_792, p_95, (l_820 || func_51(g_5, (safe_mod_func_uint32_t_u_u(g_487, ((g_420 , (((((-1L) & func_51((g_170 = (p_92 = (p_94 != p_95))), p_95, l_732)) , 0L) | 0x6569L) == g_136)) ^ 255UL))), g_410))) , g_99)) > 0UL));
                if (g_136)
                    goto lbl_884;
lbl_884:
                l_883 = p_95;
                l_820 = p_95;
            }
        }
    }
    l_147 = (((safe_add_func_uint8_t_u_u((g_167 , g_68), ((g_269 > func_51((g_167 , ((!((g_773 , (g_136 <= (l_111 = 0x9C7EL))) < l_776)) == ((l_263 = (((safe_add_func_uint32_t_u_u(p_93, 1UL)) & l_733) || g_211)) ^ l_98))), g_70, l_378)) < 0x7041L))) && p_94) , (-5L));
    return g_150;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_420, "g_420", print_hash_value);
    transparent_crc(g_487, "g_487", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_699, "g_699", print_hash_value);
    transparent_crc(g_773, "g_773", print_hash_value);
    transparent_crc(g_792, "g_792", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    transparent_crc(g_899, "g_899", print_hash_value);
    transparent_crc(g_930, "g_930", print_hash_value);
    transparent_crc(g_945, "g_945", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
