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



static int g_19 = (-2L);
static int g_25 = 0xC65B0B56L;
static unsigned g_128 = 4294967295UL;
static unsigned short g_130 = 65531UL;
static unsigned char g_144 = 0x68L;
static unsigned short g_164 = 0x393DL;
static int g_174 = 0x24D0A392L;
static unsigned char g_181 = 255UL;
static int g_189 = 0x709881D4L;
static int g_191 = 0x9A75344AL;
static short g_210 = 1L;
static unsigned g_211 = 1UL;
static short g_216 = 1L;
static unsigned g_223 = 0xD72065D4L;
static unsigned g_228 = 0x56B61A9CL;
static char g_322 = 0x7BL;
static unsigned char g_482 = 0UL;
static unsigned short g_487 = 0x6509L;
static short g_523 = 0x508DL;
static unsigned short g_533 = 2UL;
static char g_621 = 0L;
static unsigned g_658 = 0UL;
static unsigned g_707 = 0x86859177L;



static int func_1(void);
static short func_7(int p_8, int p_9, char p_10, int p_11);
static unsigned short func_20(short p_21, int p_22);
static unsigned short func_28(unsigned p_29);
static unsigned func_33(int p_34, const unsigned p_35, unsigned p_36, const unsigned short p_37);
static unsigned char func_39(int p_40, unsigned p_41, unsigned p_42, unsigned p_43);
static const unsigned func_46(int p_47, int p_48, short p_49);
static unsigned short func_50(unsigned char p_51);
static const unsigned short func_54(short p_55);
static int func_68(const int p_69, int p_70, unsigned p_71, unsigned char p_72);
static int func_1(void)
{
    unsigned short l_4 = 0x029BL;
    int l_16 = 0x111D0188L;
    int l_23 = 8L;
    unsigned char l_24 = 0x66L;
    unsigned char l_758 = 1UL;
    unsigned short l_770 = 0UL;
    int l_776 = 0xD8AA1EB5L;
    short l_792 = 0xBC6DL;
    l_758 = (((safe_add_func_int32_t_s_s(l_4, ((((((((safe_mod_func_int16_t_s_s(func_7(l_4, l_4, (safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((l_16 = (-5L)) == (0x7D72L | (safe_lshift_func_int8_t_s_u((((((g_19 , (-7L)) && (g_19 >= func_20((l_23 = g_19), l_24))) < 0xB8L) ^ 0x95L) , 1L), 6)))), g_658)) , g_658), 5)), l_4), l_24)) , 1UL) < g_658) && 5L) & l_24) || g_658) ^ l_24) | g_658))) <= g_19) < 2UL);
    for (g_210 = (-26); (g_210 > 16); g_210++)
    {
        int l_765 = 1L;
        int l_777 = 0x628287A5L;
        short l_778 = 0x6D72L;
        g_189 = l_16;
        g_191 = (safe_sub_func_uint16_t_u_u((g_533 = (safe_sub_func_int8_t_s_s(func_46((l_765 || (safe_rshift_func_int8_t_s_u((g_621 = (g_322 = ((safe_lshift_func_int16_t_s_s(0x27B3L, 2)) <= (0x979B7497L <= 0x636CB222L)))), func_46((l_765 && (((0xC9D0B257L >= (g_25 , ((l_765 || (g_191 < 0xA19EL)) & (-1L)))) , 1L) <= g_25)), g_658, l_765)))), l_16, l_770), g_191))), (-2L)));
        l_23 = (l_758 >= (+((l_16 = ((l_765 == g_211) == func_46(g_25, g_211, (l_777 = (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_770, (~((safe_unary_minus_func_int8_t_s(0x3DL)) >= (4294967295UL || l_776))))), 5)))))) <= 0xD4L)));
        l_23 = (2UL || l_778);
    }
    if (g_322)
    {
        short l_779 = (-5L);
        g_189 = g_189;
        l_779 = g_533;
    }
    else
    {
        return l_16;
    }
    l_23 = ((l_24 || ((safe_mod_func_uint16_t_u_u((((!g_189) , 65535UL) > l_23), func_46((safe_lshift_func_uint8_t_u_s((g_144 = func_46((g_174 = l_758), func_46((l_16 = (((safe_lshift_func_int8_t_s_s((g_211 <= (g_621 = (+(l_776 = func_46((g_19 = ((((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(1L, func_46((g_25 = l_23), (((((0xDAA4L | g_228) , g_211) & 0xA5L) == 65532UL) , g_533), g_19))) <= l_4), g_228)) & (-1L)), l_24)) , g_658) , l_23) ^ g_164)), l_758, l_758))))), 6)) && l_792) <= l_24)), l_4, g_181), l_23)), g_523)), g_181, l_4))) ^ 0xF145L)) >= 0x2AL);
    return l_776;
}







static short func_7(int p_8, int p_9, char p_10, int p_11)
{
    int l_722 = 0x4C82FBFFL;
    unsigned l_723 = 0x281F35ABL;
    int l_724 = 0x5326FCD6L;
    int l_725 = 0xDCF505FDL;
    int l_726 = 0x8157D777L;
    unsigned l_756 = 0x998788ABL;
    if ((safe_mod_func_int16_t_s_s(g_487, (safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((l_722 >= ((((l_723 | (l_725 = (l_724 = g_19))) , (l_724 = (0x2DL > l_724))) != (p_11 || (func_54(p_11) , g_533))) ^ g_487)) <= g_487), l_726)), 12)))))
    {
        for (g_189 = (-19); (g_189 != 20); ++g_189)
        {
            return g_211;
        }
        g_191 = 0x0583A259L;
    }
    else
    {
        short l_740 = 0xE565L;
        int l_741 = 0L;
        int l_757 = (-2L);
        g_189 = (safe_unary_minus_func_int32_t_s(((safe_rshift_func_int8_t_s_s((l_726 = 0x50L), 2)) <= (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((g_189 <= (l_741 = (func_46((l_723 , p_8), g_487, ((g_210 = l_740) & (1UL <= (-6L)))) == p_9))), p_8)) , 4294967291UL), 1UL)) , 0xFCL), g_25)), p_11)))));
        p_8 = (((safe_add_func_int32_t_s_s((func_68((((safe_add_func_int16_t_s_s(0x6C99L, func_33(p_10, l_725, g_189, (l_724 = (!(safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((p_9 > (p_10 && (p_10 == (0UL > (safe_unary_minus_func_int8_t_s((func_46(g_211, l_740, p_8) != l_741))))))))), l_723))))))) , l_724) , l_725), g_707, l_722, g_210) | 0xB8L), g_25)) ^ 6UL) != p_9);
        l_757 = (l_741 = ((((g_19 == (l_726 = l_740)) > (((((p_8 = (safe_lshift_func_int16_t_s_u((((+((p_11 > func_20(g_174, l_724)) , ((safe_rshift_func_uint8_t_u_u(((~((((safe_rshift_func_int8_t_s_s(func_54(g_25), (((l_723 != 0x69C4L) < l_740) | (-1L)))) , 0x45L) >= p_10) ^ p_11)) > l_723), 5)) || g_523))) > l_740) || p_9), l_725))) , g_707) >= 0x1BL) | l_722) & g_658)) || l_756) , (-4L)));
    }
    return l_723;
}







static unsigned short func_20(short p_21, int p_22)
{
    int l_30 = 0xCF0ADC10L;
    int l_715 = 1L;
    g_25 = (-3L);
    p_22 = (safe_mod_func_int16_t_s_s((p_21 = (func_28(l_30) , (l_30 | (g_228 || (g_144 = (((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(g_19, ((safe_unary_minus_func_int8_t_s(g_210)) | p_21))), ((safe_add_func_int16_t_s_s((l_715 = g_130), g_482)) , g_189))) && 1L) > g_189)))))), 0x2CA1L));
    return g_191;
}







static unsigned short func_28(unsigned p_29)
{
    unsigned l_38 = 0xD1AC8C6DL;
    int l_625 = (-1L);
    for (p_29 = 0; (p_29 < 7); p_29 = safe_add_func_uint32_t_u_u(p_29, 6))
    {
        unsigned short l_488 = 0x9227L;
        int l_623 = 1L;
        int l_624 = (-1L);
        int l_706 = 1L;
        g_707 = ((!(((l_706 = ((func_33(((l_625 = (+((l_38 == (0UL >= ((l_624 = (((l_623 = (func_39((safe_lshift_func_int16_t_s_u((func_46((p_29 > func_50(p_29)), p_29, (p_29 != l_38)) != l_38), l_38)), g_487, g_487, l_488) & 4UL)) | 0L) | 0x13FFL)) , l_38))) < g_19))) , p_29), g_487, l_488, p_29) >= 4294967294UL) , g_322)) , g_216) , g_322)) || l_706);
        return l_625;
    }
    g_191 = l_625;
    return p_29;
}







static unsigned func_33(int p_34, const unsigned p_35, unsigned p_36, const unsigned short p_37)
{
    unsigned char l_635 = 7UL;
    int l_643 = 0L;
    int l_644 = (-3L);
    int l_671 = 0xBBBDE99DL;
    unsigned char l_691 = 2UL;
    unsigned short l_695 = 0UL;
    for (g_174 = (-28); (g_174 < 18); g_174 = safe_add_func_int32_t_s_s(g_174, 8))
    {
        char l_634 = (-5L);
        unsigned short l_636 = 0x5BECL;
        int l_639 = (-10L);
        unsigned l_642 = 7UL;
        unsigned l_647 = 0xE1461110L;
        unsigned l_673 = 0UL;
        l_644 = (safe_add_func_uint8_t_u_u((g_144 = (safe_sub_func_int32_t_s_s((l_643 = ((~3UL) ^ ((safe_sub_func_uint8_t_u_u(l_634, l_635)) >= ((l_636 | ((safe_mod_func_int16_t_s_s(((g_487 = func_46(((l_639 = p_36) & ((safe_lshift_func_uint16_t_u_u(func_46(l_634, ((l_642 >= g_130) != l_636), l_635), 3)) || l_635)), p_35, g_322)) | 0xBBF1L), p_36)) , 4294967295UL)) <= g_144)))), g_19))), p_37));
        if (((safe_rshift_func_uint8_t_u_s(((l_644 = l_644) != p_36), 2)) || (l_647 , (p_36 >= p_36))))
        {
            unsigned short l_654 = 0x5B65L;
            int l_660 = 1L;
            unsigned char l_672 = 0xB9L;
            char l_698 = (-1L);
            for (g_144 = 24; (g_144 >= 47); g_144 = safe_add_func_uint32_t_u_u(g_144, 1))
            {
                unsigned char l_655 = 7UL;
                int l_659 = 0xDD81341BL;
                l_660 = (g_128 , (safe_rshift_func_int8_t_s_s((g_621 = l_639), (((g_191 | (((p_37 > ((((((((safe_sub_func_uint16_t_u_u(((((l_655 = l_654) ^ (((safe_sub_func_uint16_t_u_u(p_34, 0xD72CL)) , ((g_658 , l_659) || 7UL)) | 0xB988126BL)) < p_35) , g_164), g_164)) != 0L) || g_533) < l_659) == 0x56L) != g_181) , l_654) < p_35)) != 0UL) >= l_644)) != g_19) || 0x0DC056ECL))));
            }
            if (((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((g_322 = (safe_sub_func_int32_t_s_s(((p_34 == (((p_36 , (safe_sub_func_int32_t_s_s(func_46((0xAC9D77EBL || func_46(g_482, l_635, (safe_mod_func_uint16_t_u_u((l_634 , ((((p_34 ^ g_174) , (func_46((l_671 , g_25), l_672, g_144) <= p_36)) || 0x9306L) ^ 2L)), l_672)))), l_673, l_639), p_35))) != p_37) != p_36)) <= p_36), p_35))) ^ 247UL), p_34)), p_37)) != l_642))
            {
                char l_696 = 0xA3L;
                int l_697 = 0L;
                if ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(func_46(l_654, p_35, g_216), g_487)), 14)), 0)), 2)))
                {
                    char l_694 = 0xFDL;
                    l_697 = ((safe_lshift_func_uint16_t_u_u((g_130 = (4294967294UL == ((safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_s(p_36, ((g_482 = (((func_46(g_223, (l_639 = ((g_211 >= (safe_sub_func_uint16_t_u_u(2UL, (((((g_228 = func_46((safe_mod_func_int32_t_s_s((-9L), l_691)), g_223, (safe_mod_func_uint32_t_u_u(0xF76A82D5L, l_694)))) , l_635) || 0xB9DC7967L) || (-1L)) | g_128)))) & 0L)), l_695) <= (-1L)) & 0x30L) || l_696)) & 0x44L))))) , g_189))), 14)) & 0xB401L);
                    l_698 = ((l_635 | (l_697 = p_36)) | 1L);
                    return g_322;
                }
                else
                {
                    if (g_164)
                        break;
                }
            }
            else
            {
                for (g_523 = 0; (g_523 < (-12)); g_523--)
                {
                    l_660 = (g_189 = 8L);
                }
                l_660 = p_37;
            }
        }
        else
        {
            char l_701 = 0xEAL;
            int l_702 = 0xC6D35B93L;
            int l_703 = (-1L);
            l_644 = g_210;
            l_643 = func_46(l_701, (g_533 ^ (5UL != g_523)), g_228);
            l_703 = (l_702 = (g_523 | 251UL));
            for (p_36 = 23; (p_36 >= 17); --p_36)
            {
                l_702 = p_34;
            }
        }
    }
    return p_34;
}







static unsigned char func_39(int p_40, unsigned p_41, unsigned p_42, unsigned p_43)
{
    unsigned char l_493 = 0x3DL;
    int l_508 = 0L;
    for (g_25 = 23; (g_25 >= (-11)); g_25 = safe_sub_func_int16_t_s_s(g_25, 7))
    {
        unsigned short l_497 = 0UL;
        char l_509 = 0L;
        int l_511 = 1L;
        char l_584 = (-1L);
        int l_585 = (-8L);
        for (p_43 = (-21); (p_43 < 31); p_43++)
        {
            int l_494 = 0L;
            int l_510 = 7L;
            g_191 = (g_25 ^ (l_493 & ((l_494 , g_164) && g_191)));
            for (g_223 = 16; (g_223 > 8); --g_223)
            {
                unsigned l_499 = 1UL;
                int l_535 = 1L;
                unsigned char l_541 = 255UL;
                int l_549 = 0x6EC14B60L;
                l_497 = (g_216 >= 0UL);
                if (((safe_unary_minus_func_uint16_t_u(l_499)) ^ (((g_322 = 0x90L) == (l_510 = (func_46((safe_mod_func_int32_t_s_s((0UL || ((p_43 <= func_46(l_499, g_181, ((l_511 = (0x2B2E3A01L < (((((g_144 = ((((((safe_sub_func_int16_t_s_s((g_174 , (safe_add_func_uint32_t_u_u((+((func_46((p_40 = (safe_lshift_func_uint16_t_u_u(((l_494 = (((((l_508 = (l_494 <= p_43)) || l_493) , (-5L)) > 0x3AL) & 0xE1CFL)) < 1L), g_164))), p_43, l_493) | p_43) ^ l_509)), p_43))), l_499)) ^ 0x95BE7593L) , 65535UL) >= l_510) < g_191) , l_510)) | 1L) && p_40) > g_228) < 4294967295UL))) >= l_510))) , p_41)), p_43)), l_509, l_510) != p_42))) , (-10L))))
                {
                    unsigned char l_512 = 1UL;
                    int l_534 = (-9L);
                    l_512 = p_41;
                    l_534 = (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(func_50(l_508), g_223)), (l_510 = (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((g_523 = l_511), ((safe_mod_func_int16_t_s_s((g_533 = (safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint8_t_u_u((p_40 < g_223), 4)))), ((l_512 < ((safe_add_func_int8_t_s_s(0x45L, p_42)) , l_493)) , 4294967292UL)))), g_19)) & l_499))) , 0xFEL), p_42)) && (-4L)), p_43)))));
                    l_535 = g_482;
                    for (l_509 = (-27); (l_509 >= 29); l_509 = safe_add_func_uint32_t_u_u(l_509, 1))
                    {
                        int l_540 = 0xEB39617AL;
                        l_541 = (((((0xB3L && (((safe_rshift_func_int16_t_s_s(l_535, (((g_523 < func_46(g_210, g_322, p_42)) || 1UL) | (l_540 = (g_523 < p_42))))) >= p_43) == g_144)) , 1L) == g_191) || l_493) > g_174);
                        g_189 = l_541;
                        g_189 = ((g_228 == (safe_unary_minus_func_int8_t_s((l_511 = g_130)))) & (safe_rshift_func_int16_t_s_u((p_41 , (l_540 , (l_535 = l_497))), (l_549 = (safe_rshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(p_43, func_46(l_497, p_40, g_211))) && l_512), 12))))));
                    }
                }
                else
                {
                    char l_554 = 0x61L;
                    const short l_555 = 0x45FCL;
                    int l_563 = (-1L);
                    g_189 = ((safe_rshift_func_int8_t_s_u((((l_554 = (safe_lshift_func_uint16_t_u_u((!g_174), 5))) != (g_322 = (l_555 | (g_210 = l_509)))) > (1L >= (safe_unary_minus_func_uint32_t_u(((l_563 = ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(p_43, (((+p_43) != (l_549 | p_43)) , (safe_rshift_func_uint16_t_u_u(l_508, g_181))))), 0xC8L)) > (-8L))) && l_511))))), g_223)) | g_191);
                }
            }
            for (l_511 = 0; (l_511 >= 27); l_511++)
            {
                unsigned l_570 = 4UL;
                int l_583 = 0x51685E31L;
                unsigned l_600 = 0xA30BF9F1L;
                if ((safe_mod_func_int8_t_s_s((!g_25), 0x7BL)))
                {
                    unsigned l_592 = 2UL;
                    int l_599 = 7L;
                    for (p_42 = 12; (p_42 > 4); p_42 = safe_sub_func_uint8_t_u_u(p_42, 1))
                    {
                        unsigned l_586 = 3UL;
                        int l_587 = 0xB76D165CL;
                        l_587 = ((((0x041B1729L | (l_570 = p_42)) ^ (safe_add_func_int16_t_s_s((((l_509 >= (g_210 == l_497)) && (((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((p_41 == ((1L | (l_585 = ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((0x470135B0L ^ p_41) ^ l_583), p_40)), l_584)) <= (-1L)))) & l_508)), l_509)), l_586)), 0x3EBFL)) != g_482) == p_43)) , l_583), g_487))) && p_41) >= 0xEB9621DBL);
                        g_191 = (safe_mod_func_uint8_t_u_u(1UL, (g_482 = (l_585 = 6UL))));
                        l_585 = ((((0xB7L > (g_164 , (g_487 ^ p_41))) , g_25) ^ (safe_sub_func_uint32_t_u_u((l_592 && (((safe_lshift_func_int8_t_s_u((func_46((g_174 = (p_40 = ((safe_rshift_func_uint8_t_u_u(((g_174 == (safe_sub_func_uint16_t_u_u(l_583, (!g_533)))) > 4294967295UL), 3)) && l_508))), g_482, p_42) != p_41), 4)) >= p_42) != 0xC666L)), p_43))) < g_487);
                    }
                    if (p_42)
                        break;
                    l_599 = (l_510 , l_585);
                    g_189 = l_600;
                }
                else
                {
                    int l_616 = (-1L);
                    int l_622 = 0xBB1A7081L;
                    for (g_181 = (-24); (g_181 > 35); ++g_181)
                    {
                        int l_615 = 0x721C4157L;
                        l_508 = (g_482 | (+(safe_sub_func_uint32_t_u_u(4294967293UL, (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(l_570, 7)), g_189)), 0))))));
                        g_191 = (p_42 , p_41);
                        l_508 = ((!(g_19 > (((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_600 != g_322), 0xC5L)), l_584)) , (l_616 = func_46((p_43 >= (func_46(p_42, (((g_223 != p_40) || g_482) , (-1L)), l_615) , 0xA9F6L)), g_482, g_228))) & g_533))) ^ 249UL);
                        return g_19;
                    }
                    l_622 = ((func_46((p_41 , (l_511 , 0x85800BB6L)), ((g_223 != ((+(g_621 = (l_510 = (((safe_mod_func_uint8_t_u_u(((l_600 && (1UL ^ l_509)) ^ (safe_rshift_func_int16_t_s_s(g_621, (func_68(l_583, p_40, p_42, l_616) >= p_43)))), 8L)) != l_600) ^ g_223)))) && l_493)) && 0x96B50E05L), g_25) , (-1L)) >= l_494);
                }
            }
            return l_493;
        }
        l_585 = 0L;
    }
    return g_228;
}







static const unsigned func_46(int p_47, int p_48, short p_49)
{
    char l_485 = 1L;
    int l_486 = (-1L);
    l_486 = (l_485 = p_48);
    return g_130;
}







static unsigned short func_50(unsigned char p_51)
{
    short l_56 = 0xEC76L;
    unsigned l_483 = 0xA5FBB41EL;
    int l_484 = 0x322BF575L;
    l_484 = (l_483 = (safe_add_func_int8_t_s_s((g_25 && func_54(l_56)), l_56)));
    return l_56;
}







static const unsigned short func_54(short p_55)
{
    unsigned short l_87 = 0xEC2CL;
    unsigned l_348 = 0xD709BB61L;
    int l_380 = 0xF14162AAL;
    int l_390 = 0x709E21C6L;
    short l_421 = (-1L);
    for (p_55 = 26; (p_55 > (-4)); p_55--)
    {
        unsigned l_61 = 0x930E88FEL;
        int l_325 = 0x65150DD7L;
        int l_326 = 0xBCBC91AEL;
        const unsigned l_327 = 1UL;
        int l_328 = 1L;
        const short l_346 = 0xA483L;
        char l_355 = 1L;
        if ((l_328 = (((safe_add_func_int8_t_s_s(l_61, (safe_lshift_func_uint16_t_u_s(1UL, (l_326 = ((l_325 = ((((g_19 || 65535UL) , (safe_sub_func_int32_t_s_s(((0x1EF224B3L != g_25) != (safe_sub_func_int32_t_s_s(func_68((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(p_55, (g_25 <= l_87))), 0xF9F7L)), p_55)), p_55)) | p_55), l_61)) , 1UL), g_19)), p_55)), l_61, g_19, l_61), g_25))), p_55))) ^ p_55) , p_55)) & 0x95L)))))) | l_327) >= 5L)))
        {
            int l_343 = 0x8BD1B5C3L;
            int l_349 = (-2L);
            unsigned l_398 = 8UL;
            short l_424 = 0xF73BL;
            for (g_191 = 0; (g_191 > 25); g_191 = safe_add_func_int8_t_s_s(g_191, 6))
            {
                unsigned l_347 = 18446744073709551615UL;
                int l_350 = 0xD924941DL;
                g_189 = g_216;
                g_189 = (0xCBBAL && (g_164 = p_55));
                l_350 = ((l_349 = (((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s((((((l_61 , ((+(((0x0BL && (l_326 = ((safe_rshift_func_uint16_t_u_s((p_55 , p_55), 9)) != l_87))) & (safe_rshift_func_int16_t_s_s(p_55, 6))) & l_343)) < (safe_add_func_uint16_t_u_u((l_328 = (g_164 <= l_346)), g_19)))) ^ 3UL) | l_343) > g_130) || 0x96L), p_55)) <= p_55) == l_347) ^ g_130), l_87)) && l_348) | 0L), g_228)) ^ 3UL) && p_55)) >= 0UL);
            }
            if (g_25)
                break;
            if (((((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((((~((l_355 , ((safe_lshift_func_int8_t_s_u((((safe_sub_func_uint32_t_u_u((l_87 == l_349), (safe_add_func_uint32_t_u_u((l_349 || (safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((-1L), g_174)) == (p_55 != p_55)), (((g_19 < p_55) >= g_164) < l_346)))), g_191)))) >= 0x7ADAL) < p_55), p_55)) < p_55)) || p_55)) <= (-1L)) >= l_343), l_348)), p_55)) , g_228) , l_326) <= (-1L)))
            {
                unsigned l_389 = 0x2B7C60A0L;
                int l_399 = (-7L);
                int l_425 = 0x40A62B4EL;
                if (g_130)
                {
                    unsigned l_391 = 18446744073709551611UL;
                    int l_415 = (-4L);
                    l_391 = (+((safe_mod_func_uint16_t_u_u(p_55, func_68(l_87, (l_343 ^ 0x8661L), l_343, (safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((!(((func_68((((safe_rshift_func_int16_t_s_s((l_390 = (safe_rshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((l_380 = ((g_216 = p_55) , l_87)), 12)), (safe_sub_func_int16_t_s_s((((((safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((-4L), (g_144 == 0xD6L))), g_211)) , g_128) < l_389), g_211)) , 1L) , l_343) && (-1L)) == 0xE6L), g_164)))) != 0x67D0DDB0L), g_322))), g_181)) >= g_144) & p_55), g_25, p_55, p_55) , g_174) & p_55) <= 0L)), 0xB3L)) < l_348), p_55))))) , g_164));
                    if ((l_328 = ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((g_191 , g_144), (l_399 = l_398))), l_389)), 5)) , func_68(p_55, func_68(func_68(((p_55 | (func_68(((l_399 = (safe_mod_func_int8_t_s_s(0xBFL, (safe_lshift_func_int8_t_s_u(l_87, 2))))) , g_189), l_87, p_55, g_174) & 0x9A5CL)) > l_328), p_55, l_343, p_55), g_19, l_380, g_223), l_343, p_55))))
                    {
                        int l_410 = (-4L);
                        int l_416 = (-9L);
                        l_416 = ((l_415 = func_68((safe_add_func_int16_t_s_s(g_130, l_355)), ((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((p_55 , ((p_55 , (!l_410)) , l_389)), l_410)), ((safe_add_func_uint32_t_u_u(((l_328 = 65526UL) , (safe_lshift_func_uint16_t_u_s(((p_55 ^ 0xDCL) , g_25), g_322))), 0x01C3AF00L)) & 4294967288UL))) & g_181), g_191, l_87)) & 0x41F6L);
                    }
                    else
                    {
                        unsigned short l_428 = 0UL;
                        g_191 = ((g_130 , (g_174 | (safe_mod_func_int32_t_s_s(p_55, g_164)))) , (l_415 = l_391));
                        l_399 = l_380;
                        l_425 = func_68(g_19, p_55, func_68(p_55, l_346, ((((safe_sub_func_uint32_t_u_u((l_421 <= p_55), (l_349 = (l_399 = (l_325 = (safe_rshift_func_int16_t_s_u(g_164, 7))))))) || l_343) != 1UL) > l_327), l_87), l_424);
                        l_428 = (safe_add_func_uint32_t_u_u((l_325 | p_55), 0xE55DCB15L));
                    }
                    l_390 = ((safe_mod_func_uint16_t_u_u(func_68(((l_349 || (p_55 != g_210)) >= ((l_399 <= ((l_380 = (safe_rshift_func_uint16_t_u_s(g_211, 11))) != g_25)) != g_223)), (safe_add_func_uint8_t_u_u((+(l_425 = ((g_164 = p_55) < (l_415 = (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(4UL, 3)), 12)) >= g_211), 254UL)))))), p_55)), g_19, p_55), 0xD681L)) ^ p_55);
                    if (p_55)
                        break;
                }
                else
                {
                    unsigned l_441 = 0x248CB65AL;
                    if (p_55)
                        break;
                    l_326 = p_55;
                    l_326 = (!l_380);
                    l_441 = g_322;
                }
                for (l_348 = 0; (l_348 == 13); ++l_348)
                {
                    const int l_450 = 0x348D2017L;
                    int l_466 = 0x3A0C4546L;
                    if (g_210)
                    {
                        l_349 = (safe_mod_func_int32_t_s_s(((l_343 > l_326) && ((((((~(0x24EB133EL >= (safe_mod_func_int8_t_s_s(l_380, ((safe_sub_func_int16_t_s_s(((l_450 && (9UL | ((((0x90L > p_55) < (safe_add_func_int8_t_s_s((l_390 = (((g_174 = l_424) , g_130) | l_326)), g_210))) < g_181) && 0x2CL))) , p_55), g_191)) || 0x439EL))))) != 1UL) , 0x0A98DB19L) >= l_425) ^ 3UL) | 4294967295UL)), g_130));
                    }
                    else
                    {
                        int l_453 = (-3L);
                        if (p_55)
                            break;
                        g_189 = l_453;
                        g_189 = p_55;
                        l_328 = (safe_rshift_func_int8_t_s_s(((p_55 ^ (((g_191 || func_68((((((65529UL > (safe_unary_minus_func_uint8_t_u(g_19))) > (((l_349 = (safe_sub_func_uint32_t_u_u(l_61, 2L))) , (-7L)) < (((!(-10L)) , g_144) >= g_174))) , (-1L)) && l_425) && l_87), l_326, g_164, g_223)) < 0x54L) , 0xF5B7L)) < l_450), 4));
                    }
                    l_466 = ((+(l_349 = ((p_55 <= g_210) , (l_328 = (safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_380, (0x9714EEDFL || func_68((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(((0x5CFBL & ((g_189 | g_189) > (((g_322 = (g_181 | g_322)) > 0UL) ^ (-8L)))) | p_55))), g_174)), l_399, g_211, p_55)))), 9)))))) < l_425);
                }
                if (l_349)
                    continue;
            }
            else
            {
                g_191 = (+0x686AA94CL);
            }
            if (g_191)
                continue;
        }
        else
        {
            unsigned short l_467 = 0xC080L;
            l_326 = p_55;
            l_380 = (((((l_467 <= (g_130 && func_68(g_228, (safe_sub_func_uint32_t_u_u(((((safe_lshift_func_int16_t_s_s(l_467, (safe_rshift_func_uint8_t_u_s((p_55 > (l_348 || p_55)), 7)))) || ((((g_128 = p_55) || (((((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((g_144 = (l_355 , g_181)) <= l_325), 11)) , g_216), g_228)) || p_55) , 0xBFF7D43EL) && g_191) <= p_55)) , 0xEBL) >= l_87)) && p_55) , g_174), l_390)), g_223, g_130))) | l_325) == g_223) , 65531UL) , l_346);
            g_191 = 0xEBDE4443L;
        }
        g_482 = ((((func_68(p_55, p_55, func_68((safe_lshift_func_uint8_t_u_s((g_144 > l_380), 4)), ((0x5E4CL & 0x57E3L) && p_55), g_322, l_380), l_87) && 0xA5ACL) & p_55) , 4UL) , g_189);
        return p_55;
    }
    g_189 = (p_55 || (g_210 = g_19));
    l_390 = (-10L);
    return g_210;
}







static int func_68(const int p_69, int p_70, unsigned p_71, unsigned char p_72)
{
    int l_88 = 0xE1D77F59L;
    int l_103 = 0L;
    unsigned l_104 = 4294967288UL;
    int l_105 = 0x09A6D6C5L;
    int l_129 = 0x713F97C6L;
    int l_207 = 0x6E3EF0F4L;
    unsigned short l_286 = 0x1348L;
    l_105 = (g_25 >= ((l_88 = (g_19 , 1L)) && ((((((((safe_rshift_func_int8_t_s_u(g_25, 7)) == g_19) < (((safe_mod_func_int32_t_s_s((g_25 <= ((((((l_103 = ((safe_rshift_func_int16_t_s_s(l_88, (5L ^ (((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((l_88 , 0xCA43862DL) != l_88), g_25)), 0xA8L)), p_72)), l_88)) & g_19) < 255UL)))) , p_70)) && (-1L)) == p_69) >= (-1L)) >= g_19) ^ p_72)), g_25)) , l_103) , l_104)) > 0xA778B6DBL) >= 0xD0D489CAL) ^ 0xC0D7L) & 0x7CC017F0L) < p_72)));
    for (p_71 = 9; (p_71 != 32); p_71 = safe_add_func_uint16_t_u_u(p_71, 1))
    {
        int l_111 = 0L;
        int l_151 = 1L;
        unsigned l_251 = 0xD7C541B5L;
        if (p_70)
            break;
        for (p_70 = (-6); (p_70 == 7); ++p_70)
        {
            unsigned l_110 = 0xDA246393L;
            int l_112 = 0x787CBDB4L;
            int l_238 = 0xB02FEDD8L;
            int l_240 = 1L;
            int l_270 = 0xBA6CF05BL;
            short l_285 = 0L;
            l_112 = (p_70 ^ ((l_111 = l_110) >= g_19));
            if ((g_130 = (safe_sub_func_uint8_t_u_u((p_72 = (((safe_sub_func_uint8_t_u_u(p_69, 0xB8L)) >= (g_19 && (l_88 <= (((safe_lshift_func_uint16_t_u_s((l_112 , g_19), ((safe_rshift_func_uint8_t_u_s(p_69, g_19)) & (g_128 = (safe_sub_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u((((safe_add_func_uint8_t_u_u((g_19 & g_19), l_111)) & g_25) , l_111))) < g_19), g_25)))))) , g_25) , p_71)))) || 0x10A9L)), l_129))))
            {
                unsigned l_139 = 18446744073709551614UL;
                int l_163 = 0x6C69FB00L;
                unsigned short l_237 = 0xF0FEL;
                l_111 = 0xBD3C73EBL;
                g_144 = (0x80F8EF8BL >= (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_103 = (1UL >= (safe_sub_func_uint32_t_u_u(l_111, l_139)))), l_139)), 4)) , l_110), (g_128 = (l_112 = (safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(248UL, l_111)), g_25)))))));
                if (p_71)
                {
                    int l_152 = 1L;
                    l_112 = ((safe_lshift_func_uint16_t_u_u(g_19, 10)) && p_70);
                    l_105 = (g_164 = (((safe_mod_func_int8_t_s_s((l_111 = ((safe_rshift_func_uint16_t_u_u(g_130, 7)) , 0L)), (l_112 ^ (l_151 | l_152)))) & (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_152, 3)), (l_163 = ((safe_add_func_uint16_t_u_u((g_130 || ((safe_sub_func_int32_t_s_s(g_130, ((((safe_lshift_func_uint16_t_u_s(g_25, l_110)) , p_69) , p_70) > 1UL))) == p_72)), p_72)) & g_19))))) != p_72));
                }
                else
                {
                    char l_167 = 0xD9L;
                    int l_186 = 0x9BC54FA0L;
                    int l_190 = 0xA9E6D616L;
                    if (((safe_rshift_func_int8_t_s_s(l_167, p_72)) == (l_167 > ((g_144 != 0x09L) || l_167))))
                    {
                        l_112 = (0x9BCAL >= (safe_sub_func_uint8_t_u_u(p_69, g_144)));
                    }
                    else
                    {
                        if (g_144)
                            break;
                    }
                    if ((((safe_sub_func_uint32_t_u_u((p_69 != ((g_164 , 65527UL) <= ((safe_rshift_func_int16_t_s_s((g_174 = p_69), 12)) , p_69))), (safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(g_25, 7)), l_139)), p_71)))) || p_72) , l_151))
                    {
                        g_181 = l_167;
                        g_191 = ((1UL != l_167) | ((~(l_163 = ((l_190 = (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s((l_186 = 0xB801L), ((g_189 = (safe_lshift_func_int8_t_s_u(((((g_174 != (l_139 , 0x78AAL)) || l_139) , g_174) | ((l_110 , 0xC8L) & 0x08L)), 4))) && g_144))), 0x7659CEB6L))) < 0x709DL))) & l_151));
                    }
                    else
                    {
                        int l_198 = 0x57AA8C2CL;
                        l_105 = (safe_add_func_int32_t_s_s(1L, (l_139 < ((safe_lshift_func_int16_t_s_u(g_181, 13)) , ((((g_211 = ((safe_sub_func_int32_t_s_s((g_191 = (l_112 = (l_163 = l_198))), p_70)) && ((safe_lshift_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_s((((l_163 || (g_210 = (safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((l_207 || p_70), (safe_lshift_func_int8_t_s_u((l_104 <= g_174), l_186)))), l_104)))) > 0xF8AAA106L) ^ 4294967295UL), 2)) < p_70) | (-8L)) < p_71), g_189)) == l_198))) <= 0x56FDL) && 0x8137C768L) < g_164)))));
                    }
                    l_105 = 0x507861EFL;
                    if ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((((l_105 = 1L) || g_216) < p_71), ((l_151 == 0x5711A968L) & g_189))), l_190)))
                    {
                        short l_239 = 0x3110L;
                        g_189 = (safe_mod_func_uint32_t_u_u((l_190 = p_72), (safe_sub_func_int32_t_s_s(0L, (safe_mod_func_uint8_t_u_u(((g_19 != (l_163 = g_164)) == (+((g_223 ^ (safe_add_func_int16_t_s_s(l_104, p_72))) | p_70))), l_129))))));
                        l_240 = ((g_181 || g_181) & (safe_sub_func_int8_t_s_s(((l_112 = (p_72 > (((g_228 = g_25) , p_69) , ((safe_mod_func_int8_t_s_s(p_69, (((safe_mod_func_int32_t_s_s((((l_238 = (((safe_lshift_func_uint16_t_u_u(0x7F14L, 11)) && ((!(p_71 , ((((safe_lshift_func_uint16_t_u_u(l_237, l_190)) == 0x04089B8EL) || p_69) != g_174))) < 0xBC52L)) , 2L)) || p_72) & l_239), l_239)) & 0x376BL) & g_228))) || p_71)))) , l_239), 0x5CL)));
                        l_112 = l_239;
                        l_163 = ((p_70 ^ (safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(l_190, 5)) <= ((((7L && ((((safe_rshift_func_uint16_t_u_u(g_191, 5)) <= 1L) != (l_151 , 0x76L)) == ((l_240 = (((l_239 == p_72) >= p_70) && p_70)) , l_186))) ^ 0UL) <= 0L) >= g_228)), g_130)), l_139))) , p_72);
                    }
                    else
                    {
                        return p_72;
                    }
                }
                l_151 = (safe_add_func_int32_t_s_s(g_191, (p_72 , l_251)));
            }
            else
            {
                unsigned l_252 = 0x0B466F09L;
                int l_259 = 0L;
                const int l_265 = 0x8DE0F634L;
                l_252 = g_19;
                if (((safe_lshift_func_int8_t_s_s((+g_223), g_191)) < ((l_259 = ((g_164 = (((l_103 = p_69) , ((safe_sub_func_int32_t_s_s((g_189 || 0xD21A56CEL), g_181)) <= ((g_164 ^ p_72) != (safe_rshift_func_uint16_t_u_s(g_181, 3))))) | l_238)) , l_252)) == g_216)))
                {
                    unsigned l_262 = 18446744073709551615UL;
                    if ((((safe_add_func_int16_t_s_s(g_210, l_129)) < 0x9B050142L) > p_70))
                    {
                        return l_151;
                    }
                    else
                    {
                        unsigned l_263 = 0xE0E0025CL;
                        g_189 = g_181;
                        l_262 = (l_259 < g_19);
                        g_191 = (l_238 = l_263);
                    }
                    g_191 = 0x85196134L;
                }
                else
                {
                    unsigned char l_295 = 0xDDL;
                    if ((safe_unary_minus_func_int8_t_s(((l_259 > l_265) , p_69))))
                    {
                        l_238 = p_72;
                        g_189 = (safe_rshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(p_69, (l_270 , g_191))) && (safe_sub_func_int32_t_s_s(p_71, ((g_181 < 0xEEL) , p_69)))), 5));
                        if (p_70)
                            break;
                    }
                    else
                    {
                        unsigned char l_280 = 0x3EL;
                        l_286 = ((((l_111 = ((safe_mod_func_uint8_t_u_u((0x58L > (g_144 = (p_72 = ((0xB121L == ((p_69 == ((~(g_181 && (((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(l_280, (safe_rshift_func_uint8_t_u_s((((0x82L <= (l_280 != (!(safe_add_func_int8_t_s_s(0x75L, l_270))))) || g_216) , g_144), 0)))), l_280)))) == l_252) >= p_71))) | g_228)) || 0x4AL)) | g_174)))), 0xE7L)) < p_71)) , 0x58D6L) > 4UL) ^ l_285);
                    }
                    l_259 = (g_189 = ((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(g_25, l_295)) >= (-10L)), (l_240 = (p_71 < (safe_lshift_func_uint16_t_u_u(g_25, l_111)))))), (safe_mod_func_int32_t_s_s(p_71, g_211)))), 0xBBL)) < g_210));
                }
            }
            if (l_103)
                break;
        }
        if (g_19)
        {
            if (p_69)
            {
                if (l_104)
                    break;
            }
            else
            {
                int l_300 = 0L;
                l_300 = (g_191 = (l_111 = g_164));
                if (p_70)
                    break;
                l_300 = ((((((((g_191 = 0xC7A0F729L) & ((p_69 >= g_189) & ((l_111 || (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(g_164, (g_181 = p_69))), 8)) <= g_174) != (safe_mod_func_int16_t_s_s(l_251, p_72)))) ^ (-1L)))) != l_104) <= g_211) ^ (-2L)) , 253UL) != (-1L)) , p_71);
            }
        }
        else
        {
            int l_315 = 0xA73AA586L;
            g_191 = (l_104 , 1L);
            g_189 = p_69;
            g_191 = (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((g_210 = (((g_216 = g_128) ^ g_19) >= (g_128 == ((((l_151 ^ (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((1UL < ((l_111 = (l_315 || l_129)) , ((((safe_sub_func_uint8_t_u_u((((g_322 = (safe_mod_func_int32_t_s_s((g_189 = (g_19 | (((((((l_111 = (safe_rshift_func_uint16_t_u_u(0UL, g_211))) != 0x55L) < g_189) & l_315) >= l_251) , 0x26C5L) || g_210))), 5UL))) , 0xEBL) <= g_223), p_70)) , 3L) && 0x15D690B8L) != 0xD1L))), l_251)), 0xF946L))) & 0x5EC3500FL) && l_111) >= g_128)))), g_174)), 13));
        }
        l_103 = p_71;
    }
    l_103 = (~(safe_lshift_func_int8_t_s_u(p_71, (p_70 < g_322))));
    return p_69;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_487, "g_487", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_707, "g_707", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
