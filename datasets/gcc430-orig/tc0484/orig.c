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



static volatile long long g_8 = 0x323D1BCA9D692360LL;
static int g_12 = 9L;
static unsigned g_58 = 0xAFE0A4D2L;
static unsigned g_59 = 0x32CAC245L;
static short g_76 = 1L;
static long long g_77 = 0xC43DA4AA2EEDF219LL;
static unsigned char g_80 = 0x20L;
static int g_102 = 0x5234D5E3L;
static int g_121 = 4L;
static volatile char g_127 = 0xD5L;
static unsigned g_146 = 4294967288UL;
static long long g_149 = 0xDCB7840180ABA067LL;
static short g_156 = 9L;
static long long g_170 = (-1L);
static volatile unsigned g_171 = 0xA06BD8D7L;
static unsigned g_173 = 18446744073709551615UL;
static unsigned long long g_177 = 18446744073709551615UL;
static unsigned long long g_181 = 0x6539BA07FF6E85A4LL;
static short g_187 = 0xC832L;
static unsigned g_197 = 0UL;
static char g_206 = (-10L);
static short g_210 = 0x3B53L;
static volatile int g_221 = 2L;
static unsigned short g_222 = 4UL;
static short g_226 = 0L;
static unsigned short g_313 = 1UL;
static long long g_328 = 0L;
static short g_343 = (-1L);
static unsigned long long g_364 = 18446744073709551615UL;
static unsigned g_365 = 1UL;
static unsigned g_366 = 0x5AD87088L;
static short g_378 = 0x3D3BL;
static int g_387 = 0x57E2544EL;
static int g_404 = 0x3BBA409FL;
static char g_436 = 0xE8L;
static volatile unsigned char g_488 = 0x73L;
static unsigned short g_522 = 1UL;
static long long g_638 = (-1L);
static const char g_815 = 0x45L;
static unsigned char g_1176 = 8UL;
static char g_1183 = 1L;
static volatile long long g_1299 = 0x6FD1F032615EDB84LL;
static long long g_1357 = 1L;
static int g_1541 = 0x73241353L;
static int g_1555 = 0x5C23C05FL;



static long long func_1(void);
static unsigned char func_5(long long p_6, unsigned p_7);
static unsigned long long func_25(const unsigned short p_26, unsigned p_27, unsigned char p_28, char p_29, unsigned char p_30);
static char func_34(long long p_35, const int p_36, unsigned long long p_37, unsigned p_38);
static int func_42(int p_43, unsigned p_44, unsigned char p_45, unsigned long long p_46);
static unsigned short func_49(unsigned char p_50, char p_51, short p_52);
static unsigned short func_63(char p_64, unsigned p_65, int p_66, long long p_67);
static const unsigned long long func_93(unsigned p_94, unsigned long long p_95);
static long long func_98(unsigned long long p_99);
static char func_105(const unsigned char p_106, unsigned short p_107, unsigned char p_108, int p_109, int p_110);
static long long func_1(void)
{
    short l_2 = 0x1BF5L;
    int l_11 = 1L;
    int l_1537 = 0xA433B0D4L;
    unsigned l_1540 = 0xF7C36841L;
    unsigned l_1557 = 0UL;
    int l_1570 = 0L;
    unsigned l_1698 = 0x0D2B6B77L;
    unsigned char l_1703 = 254UL;
    if (((l_2 = 0xA8F93905C8094A18LL) == (safe_add_func_uint8_t_u_u(func_5((g_8 ^ (safe_rshift_func_int8_t_s_u((l_11 = 0L), 0))), g_12), (l_1537 = (safe_div_func_uint32_t_u_u((l_1537 | g_815), (safe_sub_func_int16_t_s_s(l_1540, g_815)))))))))
    {
        unsigned short l_1544 = 0x8114L;
        l_1537 = func_63((g_206 = g_1541), (safe_lshift_func_uint16_t_u_u(0UL, 2)), l_1540, l_1544);
        for (g_170 = 0; (g_170 > (-13)); --g_170)
        {
            l_11 = l_11;
        }
    }
    else
    {
        unsigned long long l_1561 = 7UL;
        long long l_1589 = (-5L);
        int l_1597 = 0xC4C03197L;
        if (g_156)
        {
            int l_1556 = 0x1EB2C8E9L;
            int l_1583 = 0x98319AB4L;
            int l_1584 = 1L;
            if ((((safe_add_func_uint32_t_u_u((((l_1537 = (func_98(l_2) ^ (func_63(g_404, g_76, g_221, g_181) != g_210))) | (safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((safe_mod_func_int64_t_s_s((l_1540 <= 0x42A32F1AL), g_1555)), l_2)) > l_1556), l_1556))) | l_1557), (-1L))) != l_1556) < g_222))
            {
                unsigned short l_1562 = 6UL;
                int l_1572 = (-1L);
                for (g_1176 = (-15); (g_1176 < 41); ++g_1176)
                {
                    int l_1560 = 0x3D04BA68L;
                    l_1561 = (l_1556 ^ (l_1560 > (g_1183 = 1L)));
                    if (l_1561)
                    {
                        int l_1571 = 0x1AE3D9F8L;
                        l_1562 = ((l_1556 && g_59) < g_170);
                        l_1572 = (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(g_77, 4)), (safe_mod_func_int8_t_s_s((func_63(g_187, func_34((safe_unary_minus_func_int16_t_s(2L)), g_181, l_1570, l_2), g_59, l_1562) ^ l_1571), 1L))));
                        g_404 = (g_387 = g_226);
                    }
                    else
                    {
                        unsigned short l_1590 = 0xAFEFL;
                        g_404 = (4294967295UL & (l_1556 == func_98((safe_sub_func_int32_t_s_s(((((g_343 = 0xBD4CL) ^ (g_156 = func_34((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((g_187 < ((g_387 = l_1562) > l_1556)), (safe_lshift_func_int16_t_s_u((func_49((((l_1556 != func_49((l_1584 = (l_1583 = g_59)), func_63((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(0x37L, 0)), g_404)), g_206, g_121, l_1556), g_197)) != 0UL) | g_187), l_1589, g_1541) < g_146), 7)))), 0xD4730732L)), g_146, l_1590, g_197))) > l_1560) <= g_206), g_121)))));
                        if (g_102)
                            goto lbl_1647;
                        g_387 = (safe_lshift_func_uint8_t_u_s(((g_222 = ((safe_add_func_int8_t_s_s(l_1560, (g_12 == l_11))) < (safe_lshift_func_uint8_t_u_s(l_1560, 4)))) == 1L), 2));
                        l_1597 = (g_387 = g_171);
                        if (g_222)
                            break;
                    }
                    l_1570 = func_98(l_1584);
                }
            }
            else
            {
                g_387 = (safe_sub_func_int8_t_s_s(l_1597, ((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((l_1540 || ((safe_sub_func_uint32_t_u_u((func_98(l_1561) & l_11), (safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((g_127 == g_226), g_156)), (l_1584 && l_1597))))) != 0xB6959579L)), 3)), g_1183)) > g_328)));
            }
            g_387 = g_1299;
            for (g_226 = (-4); (g_226 < 19); g_226 = safe_add_func_uint32_t_u_u(g_226, 2))
            {
                int l_1612 = 0xF55F4835L;
                char l_1627 = 0L;
                int l_1632 = 0x84D0C63CL;
                if (g_102)
                    break;
                if (l_1612)
                {
                    g_387 = (safe_unary_minus_func_int16_t_s(((safe_sub_func_uint64_t_u_u(g_77, func_63((safe_lshift_func_int8_t_s_u(l_1556, ((safe_mod_func_uint8_t_u_u(l_1556, (safe_lshift_func_int16_t_s_u(g_76, (safe_mod_func_int8_t_s_s(func_98(g_343), (g_1176 = g_815))))))) | g_173))), ((g_222 = (safe_div_func_int8_t_s_s((0x3FA7981C4F9BDCD6LL && l_1537), l_1537))) > l_1583), g_1555, g_1357))) ^ l_2)));
                }
                else
                {
                    unsigned char l_1626 = 249UL;
                    l_1626 = (-5L);
                    if (g_58)
                        goto lbl_1647;
                    if (g_226)
                        continue;
                }
                l_1627 = l_1584;
                g_404 = ((safe_mod_func_int16_t_s_s(((l_1561 >= (1L ^ (func_105((safe_sub_func_uint8_t_u_u((l_1632 = g_58), (safe_sub_func_int16_t_s_s((g_146 > g_146), (safe_mod_func_uint8_t_u_u(func_98(((safe_sub_func_int32_t_s_s(g_313, (safe_add_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(l_1627, g_210)), g_77)))) | 4294967292UL)), l_1561)))))), g_1299, l_1583, l_1561, g_226) < l_1561))) <= g_58), 65527UL)) < l_1597);
            }
        }
        else
        {
            int l_1643 = 6L;
            g_387 = l_1643;
        }
    }
lbl_1647:
    for (g_210 = (-26); (g_210 < 27); g_210 = safe_add_func_uint8_t_u_u(g_210, 2))
    {
        unsigned long long l_1646 = 18446744073709551609UL;
        l_1537 = 0x467543AEL;
        if ((l_1646 & 5L))
        {
            g_387 = (-3L);
        }
        else
        {
            return g_210;
        }
    }
    if (((safe_div_func_int64_t_s_s((((safe_rshift_func_int16_t_s_s(l_1570, 7)) > (safe_div_func_int8_t_s_s(0x47L, (l_11 = (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(func_105((safe_lshift_func_int8_t_s_u(func_42(l_1570, (l_1537 = (g_197 = g_815)), l_1557, g_77), ((safe_rshift_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s((-7L), (safe_div_func_uint32_t_u_u(((g_1541 != g_638) > g_77), 0x45CA49A5L)))) > 0xC7043CA8L) || l_2), 3)) < 0x5DL))), l_11, g_1176, g_1176, l_1557), 2)), 4)), g_1555)), g_1357)))))) <= 0xA5L), g_1555)) & l_1557))
    {
        long long l_1672 = 0x415B370313CE8971LL;
        unsigned char l_1685 = 255UL;
        l_1570 = l_2;
        g_404 = l_1540;
        l_11 = (safe_lshift_func_uint16_t_u_s(l_1672, 1));
        for (g_366 = 10; (g_366 == 3); g_366 = safe_sub_func_int32_t_s_s(g_366, 5))
        {
            long long l_1679 = 0xB89AA5E2C534BD3BLL;
            int l_1684 = 8L;
            int l_1688 = 0L;
            l_1688 = (safe_mod_func_uint8_t_u_u(((!((safe_lshift_func_int16_t_s_u((g_156 = (1UL || func_63(g_149, l_1679, g_328, (l_1537 = 1L)))), (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((g_1176 = (((l_1684 = (-1L)) < l_1685) && (safe_rshift_func_uint16_t_u_s((246UL >= (-6L)), l_1672)))), g_226)), l_2)))) && l_1688)) < 0x679F9648L), g_364));
            if (g_343)
                continue;
            if (g_343)
                break;
        }
    }
    else
    {
        int l_1689 = (-1L);
        int l_1704 = 0x35C3A8E6L;
        g_404 = (l_1689 <= l_1570);
        g_387 = (safe_lshift_func_int8_t_s_u(((0x7353L == g_177) >= (safe_lshift_func_int8_t_s_u((l_11 ^ (5UL & (((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(1L, l_1698)), l_1689)) || (safe_lshift_func_int8_t_s_s(((l_1689 = (g_76 = (safe_add_func_uint64_t_u_u(l_11, (l_1689 <= l_1540))))) & l_1703), g_1176))) | l_1704))), l_1704))), g_1299));
    }
    return g_1183;
}







static unsigned char func_5(long long p_6, unsigned p_7)
{
    const unsigned char l_31 = 255UL;
    int l_39 = 0xAF9EB11DL;
    int l_1068 = 0x5AF1F14BL;
    int l_1168 = 7L;
    int l_1189 = 0x7BE8C1B0L;
    unsigned l_1222 = 0x02F13430L;
    int l_1238 = 0xD44B80CFL;
    int l_1269 = 6L;
    unsigned short l_1413 = 0x9F8FL;
    short l_1504 = (-8L);
    unsigned long long l_1521 = 18446744073709551615UL;
    unsigned char l_1522 = 250UL;
lbl_1341:
    if (((safe_sub_func_int64_t_s_s((g_638 = (safe_div_func_int32_t_s_s(p_7, (safe_lshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((p_6 > 1UL), 4)) == g_12), (0UL == (+(((l_1068 = (safe_mod_func_uint64_t_u_u(func_25((((l_31 > (safe_sub_func_int8_t_s_s(func_34(p_6, (l_39 = g_8), p_6, p_7), g_12))) ^ l_31) > 0xF2L), g_12, l_31, p_7, l_31), l_31))) <= 1L) ^ 0xEABAE7D0L))))) > l_31), 4))))), 0xB3B036A107F7C477LL)) != 0x7C31L))
    {
lbl_1441:
        l_1068 = l_31;
    }
    else
    {
        unsigned short l_1072 = 1UL;
        int l_1081 = 1L;
        long long l_1086 = (-1L);
        int l_1087 = 0xE44B21E1L;
        int l_1088 = 0L;
        unsigned l_1097 = 0x9AB02403L;
        unsigned l_1104 = 0x0F58F51AL;
        for (g_328 = 0; (g_328 == (-7)); g_328--)
        {
            short l_1071 = 1L;
            l_1072 = l_1071;
            if (g_80)
                goto lbl_1089;
            if (p_6)
                break;
        }
        l_1088 = (l_1087 = func_25((safe_mod_func_uint16_t_u_u(0x0620L, 0xC66DL)), (safe_add_func_int16_t_s_s(((4294967289UL | g_77) < (g_343 > ((g_177 = 18446744073709551612UL) & (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(l_1081, (g_206 = ((g_364 || ((safe_rshift_func_int8_t_s_s(func_34((safe_mod_func_int32_t_s_s(l_39, g_436)), g_59, p_6, l_1086), l_1081)) | 0xC341E6F3L)) ^ l_1086)))), g_328))))), g_170)), p_7, l_1072, l_1086));
lbl_1089:
        l_1068 = (-7L);
        if (p_7)
        {
            unsigned char l_1096 = 0xD7L;
            int l_1105 = (-5L);
            int l_1106 = 0x0B58C408L;
            unsigned l_1116 = 3UL;
            unsigned l_1129 = 0xB919C713L;
            l_39 = ((safe_add_func_int32_t_s_s(((l_1106 = (((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((l_1068 = ((l_1096 | (l_1105 = func_25((l_1097 || (func_63(l_1096, (safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((((g_206 = ((p_6 | (4L ^ (safe_add_func_int32_t_s_s(((((l_39 || ((((8UL < (func_105(g_206, p_7, p_7, l_1104, g_313) < g_59)) ^ l_39) != g_436) || 0x8FL)) > l_1096) > p_7) != g_102), 0xBA2A6A25L)))) > 0x8F2C275EL)) != 0UL) & l_1096), 8)) & l_31), 0x92L)), p_7, p_7) && 0UL)), p_7, g_197, p_6, g_815))) < 0x90618B58L)), l_39)), p_6)) && 0xD8385A128711E96CLL) != g_12)) ^ 0x08L), g_12)) != p_6);
            if (func_63(p_6, g_197, p_7, g_12))
            {
                short l_1109 = 0x2734L;
                int l_1142 = (-1L);
                for (g_12 = (-16); (g_12 > 28); ++g_12)
                {
                    l_1105 = p_6;
                    l_1109 = g_365;
                }
                if ((g_222 && func_25(((safe_sub_func_uint64_t_u_u((func_42((l_1088 = (safe_rshift_func_uint8_t_u_s(((l_1087 = ((safe_mod_func_int64_t_s_s(((l_1116 < p_6) >= p_6), (g_638 = (g_170 = g_121)))) && (safe_mod_func_int64_t_s_s((safe_add_func_uint16_t_u_u(g_177, ((safe_div_func_uint64_t_u_u(l_1109, ((safe_div_func_uint16_t_u_u(func_49(p_6, (g_206 = g_170), l_1104), 4UL)) && g_488))) > 2UL))), l_1097)))) || g_127), 4))), l_1109, p_6, g_328) < p_6), 0xBBA9A5C93553EE73LL)) & 1L), g_436, l_1097, p_6, g_436)))
                {
                    long long l_1141 = 0x6F468CCFCBC8B274LL;
                    l_1106 = ((func_105(p_6, (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(l_1129, (safe_sub_func_int64_t_s_s((l_31 || ((+p_7) != g_222)), (safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_80 ^ p_7), 0xE43B7137L)), (safe_unary_minus_func_uint8_t_u(((g_146 | p_6) ^ 0x8EL))))))))) == 0x3AL), l_1106)), g_815, p_6, g_522) >= l_1109) | l_1129);
                    l_1105 = ((g_522 || (l_1068 = (l_1088 = (safe_div_func_int8_t_s_s((!(l_1142 = ((4294967286UL ^ (safe_div_func_uint32_t_u_u(func_42(g_146, (g_171 & g_638), ((((0x60CC018EL <= (l_1116 < l_1068)) >= (((((((p_7 > l_1097) > 0x6EC7L) > 0x5BL) >= 0x4F6BB583L) | g_436) | l_1141) < g_206)) > g_366) || l_1104), g_328), p_7))) ^ 246UL))), 0xDEL))))) == l_1109);
                }
                else
                {
                    unsigned l_1154 = 0UL;
                    g_404 = (g_488 == 0x7342L);
                    l_1154 = (g_387 = (0x7CDF598B78A64D9ALL >= (((safe_lshift_func_uint8_t_u_s((l_39 ^ g_226), ((g_170 ^ (((l_1142 = (safe_div_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s((safe_mod_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(0x86334D69L, g_181)) || 0x8A2DL), (-7L))) != (g_210 = g_156)) || 0x5BA7L) != 7L), p_7)))) || p_7), 0x4BL))) & g_522) == 0x1980124B762F7717LL)) | g_378))) && l_39) & 0xCFL)));
                    l_1068 = g_222;
                }
                g_404 = l_1109;
                return g_58;
            }
            else
            {
                unsigned l_1171 = 7UL;
                g_387 = (safe_mod_func_int64_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((((safe_div_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(g_197, ((p_6 && ((safe_unary_minus_func_int64_t_s(l_1168)) >= (p_7 ^ (l_1096 ^ 0x55DDF315E358C15FLL)))) ^ 1UL))) < l_1104), (safe_mod_func_uint8_t_u_u((g_12 ^ p_6), p_7)))) ^ 18446744073709551612UL) != p_7), g_170)) && l_1088), 1L)), g_313)), l_1171));
            }
            l_1106 = (l_39 = g_58);
            if (g_80)
            {
                char l_1177 = 0x6CL;
                l_1105 = ((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(p_7, (g_1176 && l_1177))), ((g_488 == (safe_div_func_int16_t_s_s((0x1CF4FDDFL != (g_146 = (safe_unary_minus_func_uint64_t_u(l_1097)))), func_63(g_170, g_638, l_1068, g_12)))) && 255UL))) ^ g_206);
                l_1087 = func_105((safe_add_func_uint64_t_u_u(p_7, l_1088)), (l_1106 = func_49((l_1105 = p_6), g_1176, (g_436 ^ (((func_105(g_638, l_1086, l_1177, g_815, l_1177) < g_1183) == 0x25AA4204L) & 0xC9L)))), l_1081, g_436, l_1129);
            }
            else
            {
                g_404 = 2L;
            }
        }
        else
        {
            unsigned char l_1186 = 0x4CL;
            int l_1190 = 0L;
            unsigned char l_1203 = 0x7FL;
            const short l_1251 = 0x9D34L;
            for (g_1183 = 18; (g_1183 <= (-24)); g_1183 = safe_sub_func_int32_t_s_s(g_1183, 5))
            {
                if (l_1186)
                    break;
            }
            l_1168 = (l_1189 < (func_42((~(l_1190 = g_149)), g_149, ((g_366 = (safe_lshift_func_uint8_t_u_s((p_6 || g_77), 5))) < (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(func_105((g_80 = (safe_add_func_uint16_t_u_u(((g_404 & (safe_lshift_func_uint16_t_u_s(func_98(g_210), 4))) < l_1097), 65535UL))), p_6, l_1186, l_1068, g_146), p_6)), 0)), l_1097))), p_6) < l_1203));
            for (g_313 = 22; (g_313 <= 8); g_313--)
            {
                short l_1221 = 0x550FL;
                int l_1246 = (-1L);
                for (g_177 = 0; (g_177 != 27); ++g_177)
                {
                    unsigned long long l_1236 = 0UL;
                    int l_1239 = (-1L);
                    const int l_1256 = 0xFBD79056L;
                    if ((safe_sub_func_uint16_t_u_u(p_6, func_105(func_98((func_98((l_1222 = (l_1190 = ((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((safe_mod_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(func_105(p_7, p_7, (l_1203 == (((g_149 > l_39) && (l_1221 = ((((((safe_div_func_int8_t_s_s((-1L), g_210)) && ((((func_49((safe_rshift_func_uint8_t_u_u(1UL, l_1186)), g_1176, p_6) == g_1183) <= 1UL) == g_313) <= p_7)) || g_173) ^ g_1176) < g_121) == 4294967295UL))) < 1L)), l_1081, l_1190), p_6)) == 0x873A2699L), 0x1D8B2CCDL)))), 0xBEL)) != l_1081)))) == 0xD35E9B8CA6B8A682LL)), p_7, l_1186, l_1087, p_7))))
                    {
                        l_1088 = (!(-7L));
                    }
                    else
                    {
                        unsigned short l_1235 = 0x43E8L;
                        int l_1237 = (-4L);
                        g_387 = (safe_sub_func_uint8_t_u_u(p_6, ((safe_lshift_func_uint8_t_u_u(((((l_1068 = (g_815 && (((safe_rshift_func_uint8_t_u_s(((+((safe_div_func_uint32_t_u_u((safe_div_func_int64_t_s_s(p_6, p_6)), ((safe_div_func_uint64_t_u_u((((l_1237 = func_49(l_1235, ((l_1186 ^ (g_328 = (l_1087 = p_7))) > (g_522 = l_1190)), func_63(l_1168, l_1221, p_6, l_1236))) & p_7) >= (-5L)), l_1221)) || p_7))) < p_7)) > l_1238), g_206)) ^ 1L) & 0x363CC5E2L))) > 0xB1L) != 255UL) || l_1236), 2)) < l_1235)));
                        l_1239 = g_404;
                    }
                    if (p_6)
                        break;
                    if ((safe_add_func_int8_t_s_s(func_49(p_7, l_1221, func_105((((g_404 = (g_77 < (7UL <= ((g_387 > 0xF12FL) < (safe_mod_func_int8_t_s_s(((g_127 != 65530UL) < (g_76 | 0x8641E240L)), p_6)))))) && g_226) ^ l_1221), g_197, p_7, l_1068, l_1239)), p_7)))
                    {
                        l_1190 = (g_364 != (l_1239 = (0xBEL ^ (p_7 != (func_63(g_364, (l_1168 = g_436), (l_1246 = 0x40B4B1F2L), g_127) < (safe_rshift_func_int8_t_s_s((65526UL ^ 0xF0DBL), 3)))))));
                        g_404 = func_105(g_488, g_170, l_1081, func_63(((-2L) && (!(safe_div_func_uint32_t_u_u(p_6, (g_366 = 4294967295UL))))), l_1236, ((p_7 == l_1251) == l_1251), g_226), p_7);
                        if (p_7)
                            continue;
                        g_404 = (0x462823F7L | 1L);
                    }
                    else
                    {
                        g_404 = (((l_1068 = ((safe_rshift_func_int16_t_s_s(g_221, (safe_add_func_int8_t_s_s(p_6, (p_7 ^ l_1088))))) && (p_6 = func_49((g_1176 = (((((l_1238 <= g_171) < (l_1190 = (((1L ^ 0xE3B54C746AD9EB53LL) == ((((g_343 & 3L) || p_7) >= l_1246) & (-2L))) >= p_7))) <= p_6) <= l_1186) > p_6)), p_6, p_7)))) < l_1256) && 0x99L);
                        g_404 = g_378;
                        g_387 = p_6;
                    }
                }
                l_1068 = (safe_add_func_int32_t_s_s(l_1168, l_1081));
                g_387 = (safe_mod_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_1246, (g_80 = 1UL))), 0x50L)), p_7));
                l_1190 = ((l_1087 = ((safe_rshift_func_uint8_t_u_u(((l_1238 = (0xC44FL | p_6)) || g_366), p_6)) != func_105(g_488, (1UL | 0x201D8847L), (((l_1246 = func_63((safe_rshift_func_int16_t_s_s((g_187 = 3L), p_6)), g_181, p_7, l_1186)) || 0xB2EC0B138CDCE0D7LL) ^ l_1221), g_378, l_1269))) ^ p_7);
            }
        }
    }
    for (g_404 = (-15); (g_404 <= 14); g_404 = safe_add_func_uint32_t_u_u(g_404, 4))
    {
        unsigned l_1279 = 4294967295UL;
        int l_1287 = 1L;
        int l_1288 = 0xF54003A4L;
        unsigned long long l_1338 = 0x43A23A9973855729LL;
        int l_1482 = 3L;
        for (g_378 = 28; (g_378 != (-19)); g_378--)
        {
            unsigned char l_1278 = 7UL;
            int l_1280 = 1L;
            int l_1335 = 0xC469FA70L;
            int l_1340 = (-1L);
            unsigned l_1432 = 0x1D7D629FL;
            unsigned char l_1440 = 0UL;
            l_1288 = (safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_58, (((l_1278 < l_1168) < (g_197 = (l_1279 < g_59))) <= (~p_7)))), (l_1280 || (safe_div_func_int32_t_s_s(1L, (safe_div_func_int32_t_s_s((l_1287 = (safe_rshift_func_uint16_t_u_u(p_7, 15))), 4294967295UL)))))));
            if (g_187)
                break;
            for (g_59 = (-22); (g_59 >= 50); ++g_59)
            {
                unsigned l_1295 = 0x43E44A2AL;
                int l_1304 = 4L;
                unsigned char l_1327 = 0xCDL;
                unsigned short l_1342 = 65535UL;
                int l_1389 = (-8L);
                unsigned char l_1407 = 0x6BL;
                long long l_1439 = 0x1177B66DDA2701DDLL;
                unsigned short l_1484 = 65535UL;
                if ((safe_lshift_func_int8_t_s_u((!g_328), 0)))
                {
                    for (l_1068 = 0; (l_1068 >= (-1)); l_1068 = safe_sub_func_uint64_t_u_u(l_1068, 7))
                    {
                        if (l_1295)
                            break;
                    }
                    if (l_1287)
                        continue;
                }
                else
                {
                    int l_1298 = (-1L);
                    unsigned char l_1319 = 0xD1L;
                    if (((safe_lshift_func_uint16_t_u_s((g_313 = l_1288), 3)) ^ g_156))
                    {
                        unsigned long long l_1305 = 18446744073709551610UL;
                        l_1298 = g_638;
                        l_1168 = (l_1305 = func_34((g_1299 & ((safe_rshift_func_uint8_t_u_u((((func_98(((0x63925F6765590644LL == (p_6 >= p_6)) >= l_31)) || ((!(l_1304 = (l_1298 ^ (safe_sub_func_uint8_t_u_u(1UL, ((g_638 >= 18446744073709551608UL) & g_328)))))) != 5L)) > l_1238) > 0UL), 0)) <= l_1295)), l_1298, l_1288, g_206));
                    }
                    else
                    {
                        char l_1320 = 3L;
                        int l_1328 = 0xB67C9A0DL;
                        const int l_1339 = 5L;
                        g_387 = ((((safe_div_func_uint64_t_u_u((g_181 = (g_177 = (safe_mod_func_uint8_t_u_u((func_105((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_s(g_1299, 1)))), p_6, (safe_div_func_uint32_t_u_u(0x3A8532D4L, ((safe_div_func_int32_t_s_s(((g_364 = (safe_add_func_uint32_t_u_u((+(l_1319 | ((l_1320 | p_6) != p_6))), (safe_mod_func_uint64_t_u_u(((l_1298 = g_177) == (safe_div_func_int16_t_s_s((safe_add_func_int64_t_s_s(p_6, l_1327)), 0x55FBL))), g_12))))) != g_1176), g_436)) | p_6))), g_80, g_76) > (-2L)), 0xE6L)))), l_31)) > g_12) < l_1280) && 0x5C260DFAL);
                        l_1328 = func_98(l_1287);
                        l_1340 = ((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(9UL, (safe_sub_func_uint64_t_u_u(func_98(g_221), ((g_80 = g_197) < ((l_1335 = (p_7 ^ (l_39 = 0x2FA28C90239F5B71LL))) < (g_1176 = (p_7 || func_63((~(p_6 >= (p_6 < g_58))), l_1320, l_1338, p_7))))))))), p_7)) | l_1339);
                        l_1335 = (l_1168 != (l_1280 ^ 0x01L));
                    }
                    if (g_187)
                        goto lbl_1341;
                    g_387 = (l_1238 = (0x61L & ((l_1342 = ((g_522 = p_7) || l_1319)) & 0xADD9F5C3L)));
                    l_1298 = (g_121 != g_378);
                }
                for (l_1068 = 0; (l_1068 != (-10)); l_1068 = safe_sub_func_int8_t_s_s(l_1068, 8))
                {
                    unsigned l_1345 = 0x506220D8L;
                    int l_1370 = 9L;
                    if ((g_387 = 0xDD9F11ACL))
                    {
                        l_1335 = (l_1345 & p_7);
                    }
                    else
                    {
                        unsigned l_1358 = 0xC0E92088L;
                        long long l_1369 = 3L;
                        g_1357 = (g_387 = (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int64_t_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(p_7, 2)), 11)))), (g_206 < ((safe_lshift_func_uint16_t_u_s(g_177, 13)) == p_7)))));
                        l_1287 = ((g_77 = (l_1358 || g_76)) ^ g_1176);
                        g_387 = (safe_mod_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_s(p_7, 6)) < ((func_63(l_1358, (l_1287 = g_387), ((l_1335 = (g_436 >= (p_7 != func_98(g_815)))) && ((l_1345 ^ (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((func_98(g_365) && l_1189), (-10L))), l_1304))) < l_1369)), p_6) ^ g_127) > l_1280)), 0x4338FEC3D0D6A426LL));
                        l_1370 = 0x35F6803FL;
                    }
                    if (((safe_add_func_uint64_t_u_u(l_1279, (safe_lshift_func_int16_t_s_u((func_105((safe_mod_func_uint32_t_u_u((((l_39 || (safe_sub_func_uint16_t_u_u((0L && ((l_1304 = p_6) <= (safe_sub_func_uint8_t_u_u(0xEDL, l_1327)))), ((((safe_mod_func_int16_t_s_s(((safe_sub_func_int64_t_s_s(0L, (l_1370 = func_105((safe_add_func_uint8_t_u_u(g_76, (safe_lshift_func_int8_t_s_u(((((((g_365 = p_6) >= g_121) & (-1L)) >= 0x57L) != 0x313948F2127F7EA8LL) > g_343), 3)))), g_1183, l_1278, l_1389, l_1288)))) || l_1389), 1UL)) < g_1183) < p_6) == l_1345)))) > g_181) < p_6), (-1L))), g_206, p_7, l_1288, g_313) & l_1342), 10)))) | 0xC0L))
                    {
                        l_1288 = l_1279;
                        l_1370 = 0x8CB1C181L;
                    }
                    else
                    {
                        g_387 = (((g_378 < ((safe_sub_func_int16_t_s_s(((+(safe_rshift_func_uint16_t_u_s(p_6, 6))) & (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(g_149)), 0))), (safe_sub_func_uint32_t_u_u(0x456E19BEL, p_6)))) < (l_1295 <= func_63(g_343, (g_173 = (safe_lshift_func_uint16_t_u_u(((func_105((safe_div_func_uint64_t_u_u((g_177 = 0UL), func_34((1UL | p_6), g_206, g_171, p_7))), g_59, l_1222, p_7, l_1389) < l_1304) == g_187), p_6))), g_206, p_6)))) || g_12) < 0x2CL);
                    }
                    g_387 = (safe_rshift_func_int16_t_s_s((l_1168 | 0x27C538EAD5D43A06LL), 7));
                }
                if ((safe_rshift_func_int16_t_s_s((p_6 || ((((((l_1342 >= g_59) ^ ((l_31 || l_1407) || (l_1068 = 0L))) <= ((safe_unary_minus_func_uint32_t_u((func_98((((~((p_6 | (((safe_mod_func_uint64_t_u_u(0xF2667572CF4CD6FFLL, func_34(l_1222, p_7, g_77, l_1295))) && p_6) == p_7)) > g_210)) != (-8L)) >= (-2L))) < 18446744073709551615UL))) != p_6)) < (-7L)) <= g_197) & p_6)), g_58)))
                {
                    g_387 = (safe_add_func_int64_t_s_s(l_1413, (safe_mod_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((((safe_div_func_int16_t_s_s(g_638, (safe_sub_func_uint32_t_u_u(4UL, (safe_lshift_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((((safe_mod_func_int8_t_s_s(func_105((((l_1340 = func_105(l_1304, l_1279, p_7, g_638, p_7)) != l_1238) ^ g_170), g_12, g_58, l_1432, g_77), 1UL)) & 0xAE44A328L) < g_58), 0x649154CAL)), 2)) != g_58) <= 0xE3BC922108672AE6LL), 4)))))) >= g_58) >= 0x8257E19EL) & g_177), 1L)) != 0xFA94FE10L), g_222)) ^ g_328), g_404))));
                }
                else
                {
                    long long l_1436 = 0x9458DD289557CC87LL;
                    g_387 = p_7;
                    g_387 = ((-1L) != func_105((((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_u((((func_63(g_102, l_1413, (p_7 | 0x7B9A4539047D72F9LL), (func_63(l_1436, l_1436, (safe_rshift_func_uint8_t_u_s(func_63(g_221, func_63((l_1439 | l_1389), g_638, g_80, p_6), g_197, p_6), 6)), g_387) == 0UL)) || l_1168) & g_12) > g_387), 4)))) >= 0x180D6579111EEA8ALL) || 1L), l_1338, p_7, l_1440, g_12));
                    if (l_1295)
                        goto lbl_1441;
                }
                if ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((l_1288 = l_1340), p_7)), (0UL <= p_7))))
                {
                    long long l_1452 = 0x73D80FE598F5E807LL;
                    l_1288 = p_7;
                    l_1238 = (safe_lshift_func_uint8_t_u_s((((safe_mod_func_uint16_t_u_u(l_1342, (safe_lshift_func_uint16_t_u_s(p_6, func_63((l_1452 = l_1287), (0xE4403FF8L > (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(1UL, (safe_lshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_mod_func_int32_t_s_s(((((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((+(l_1432 | l_1287)), (0UL || (p_6 <= 4294967295UL)))), 0xBAL)) <= (-1L)) || 0xCDL) || g_102), p_7)), g_170)), g_146)))), 3))), g_177, g_378))))) == g_436) && p_6), g_1357));
                    l_1340 = g_210;
                    if (func_63((safe_lshift_func_int8_t_s_s(p_7, 1)), g_638, l_1439, p_6))
                    {
                        unsigned l_1477 = 2UL;
                        l_1238 = 0x75819D1EL;
                        g_387 = (safe_div_func_uint32_t_u_u((~(safe_div_func_uint32_t_u_u((((l_1335 = ((safe_div_func_int8_t_s_s((0xA0AB3413L != (p_6 & (g_58 = ((func_105(l_1452, ((l_1288 < (safe_rshift_func_int8_t_s_u(g_378, 3))) & g_313), p_7, l_1452, p_7) < p_7) & g_187)))), p_6)) < 0x542BL)) ^ l_1477) && l_1439), l_1342))), g_80));
                        l_1340 = g_76;
                        if (g_197)
                            continue;
                    }
                    else
                    {
                        l_1304 = (g_387 <= (~p_6));
                    }
                }
                else
                {
                    long long l_1483 = 0L;
                    l_1484 = (l_1288 = ((func_98((l_39 = (func_63(l_1440, p_6, func_98(p_7), g_80) > ((g_366 = (l_1238 = ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(func_34((0xB188L == l_1280), (func_34((p_6 & l_1295), g_222, p_7, g_77) == 0x4A28L), l_1482, g_222), 6)) && (-10L)), l_1304)) ^ g_226))) <= l_1483)))) != 0xDC3DL) <= p_6));
                    if ((~((l_1304 = (l_1483 || (l_1340 = g_210))) | ((safe_div_func_int32_t_s_s(g_226, p_7)) & l_1483))))
                    {
                        l_1288 = l_1280;
                        g_387 = (-6L);
                        l_1068 = (safe_mod_func_int32_t_s_s(func_98(g_226), (safe_sub_func_uint16_t_u_u(g_404, p_6))));
                    }
                    else
                    {
                        unsigned short l_1503 = 0x5438L;
                        g_387 = 0L;
                        g_387 = ((safe_div_func_uint8_t_u_u(l_1483, (safe_sub_func_int32_t_s_s((!(safe_rshift_func_uint8_t_u_s(g_378, l_1483))), (safe_add_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_u(func_98(p_7), 5)) == p_6) & ((safe_sub_func_int32_t_s_s((p_7 >= ((l_1503 = (l_1340 = (l_1482 & func_105(p_6, p_7, p_6, p_7, g_12)))) && g_638)), (-1L))) | l_1335)), 0UL)))))) || p_6);
                    }
                }
            }
        }
        if (l_1482)
            continue;
        l_1238 = l_1413;
        l_1482 = func_105(p_6, l_1222, l_1504, l_1279, g_1176);
    }
    if ((func_105((safe_sub_func_int16_t_s_s((((((safe_sub_func_uint16_t_u_u((((safe_div_func_int32_t_s_s(func_34(g_343, (safe_rshift_func_int16_t_s_s((!func_49((safe_div_func_int32_t_s_s(g_364, (((g_1176 = (((~0L) | (g_58 = g_404)) == ((safe_sub_func_uint8_t_u_u(p_7, (l_39 = l_1504))) >= g_387))) == (l_1189 >= ((l_1168 = ((func_34((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(p_7, g_102)), l_31)), g_80, p_7, p_6) || g_170) | g_173)) <= l_1504))) ^ l_31))), g_328, p_6)), g_313)), p_7, p_6), g_187)) || 18446744073709551615UL) && l_1269), 65527UL)) > (-10L)) | 1L) | g_12) == g_313), 0L)), l_1521, g_12, l_1522, l_1521) == 0x2EL))
    {
        unsigned l_1526 = 0xD15EA82AL;
        l_1168 = g_8;
        for (g_364 = 0; (g_364 != 1); g_364 = safe_add_func_int32_t_s_s(g_364, 8))
        {
            int l_1525 = 0xA5948213L;
            if (l_1525)
                break;
            l_1526 = (0x5535L ^ (p_6 < p_7));
            l_1168 = (g_404 = (safe_unary_minus_func_int64_t_s(((safe_lshift_func_int8_t_s_s(p_6, 2)) && (((g_181 = (p_6 ^ p_6)) | p_7) <= g_58)))));
        }
    }
    else
    {
        for (g_404 = (-22); (g_404 != (-2)); g_404++)
        {
            return p_6;
        }
    }
    for (l_1504 = 19; (l_1504 != (-28)); l_1504--)
    {
        int l_1534 = 0x949B5AD5L;
        l_1534 = g_77;
    }
    return p_7;
}







static unsigned long long func_25(const unsigned short p_26, unsigned p_27, unsigned char p_28, char p_29, unsigned char p_30)
{
    short l_53 = 1L;
    int l_454 = 0x42DC938AL;
    unsigned short l_570 = 0xB4F3L;
    unsigned char l_746 = 1UL;
    int l_751 = 0x4E734DACL;
    unsigned l_957 = 4294967295UL;
    unsigned short l_1037 = 0xE8B9L;
lbl_614:
    if ((func_42(g_12, func_34(p_30, (safe_lshift_func_uint16_t_u_u((g_80 = func_49(l_53, l_53, (safe_rshift_func_uint16_t_u_s(0xBF08L, 15)))), l_53)), g_12, l_53), p_27, g_12) == p_28))
    {
        long long l_448 = (-2L);
        int l_479 = 0x852FF65BL;
        int l_487 = 0x7FDE7EC9L;
        if (p_29)
        {
            unsigned short l_449 = 0x15D7L;
            int l_478 = (-8L);
            for (g_387 = 0; (g_387 != 21); ++g_387)
            {
                const int l_451 = 0xB9A4AED9L;
                int l_466 = 0x374393EFL;
                char l_477 = (-1L);
                int l_513 = 0L;
                if ((safe_sub_func_int16_t_s_s(g_76, (p_30 && (safe_unary_minus_func_int8_t_s(p_28))))))
                {
                    unsigned l_457 = 0x7F6DA724L;
                    int l_459 = 0x6098FC4DL;
                    const unsigned short l_514 = 65535UL;
                    int l_515 = 0x02DCA901L;
                    for (g_328 = 0; (g_328 > 8); g_328++)
                    {
                        unsigned l_450 = 0xBF902DEFL;
                        int l_458 = 0x4897BA3FL;
                        l_459 = func_34(g_58, (((safe_lshift_func_uint16_t_u_s((l_449 = (safe_sub_func_int32_t_s_s(l_448, (g_102 > (1UL ^ 0L))))), ((l_458 = (p_28 = ((l_450 != func_105(l_451, ((safe_sub_func_uint32_t_u_u(((l_454 = 8UL) ^ (safe_rshift_func_int8_t_s_u((func_34(l_53, g_177, g_210, g_206) & l_450), l_457))), l_448)) != 0xF108851F163692AFLL), p_28, g_76, g_121)) != 6UL))) > p_30))) ^ (-1L)) & g_364), p_26, g_365);
                        g_404 = (safe_rshift_func_uint8_t_u_s((func_49(p_30, p_30, p_28) == (l_466 = ((g_102 == (safe_lshift_func_int16_t_s_s((-3L), 8))) == g_226))), p_28));
                        l_479 = (safe_sub_func_int32_t_s_s(((g_313 || (safe_lshift_func_int16_t_s_s((((!(l_478 = ((((l_477 = (((l_454 = (safe_sub_func_int32_t_s_s((0x8D2ED18AL >= g_173), func_63(((l_451 >= 65533UL) && ((func_49(g_226, p_30, (safe_sub_func_int16_t_s_s((!(l_459 = 0x9007L)), (g_76 = ((safe_add_func_uint32_t_u_u(0UL, l_454)) & p_29))))) | 0x2587L) & 0xBDBEL)), g_404, g_80, p_26)))) || g_173) || g_146)) != 0x06L) < 0x1CBCEAF0L) >= 6L))) || 0L) | (-10L)), 5))) & g_187), 0x56615242L));
                        l_459 = p_26;
                    }
                    for (g_76 = 0; (g_76 != 7); g_76 = safe_add_func_int32_t_s_s(g_76, 1))
                    {
                        l_454 = (-8L);
                        l_454 = ((+((safe_rshift_func_int16_t_s_u(func_98(g_365), ((safe_unary_minus_func_uint64_t_u(((func_34(l_479, g_343, (p_30 <= func_34(func_34(g_8, (safe_rshift_func_int16_t_s_u((l_487 = 0L), g_76)), g_313, p_26), l_53, p_30, p_30)), l_466) >= g_177) || g_173))) && g_221))) || g_488)) < l_53);
                    }
                    for (l_487 = 0; (l_487 == (-24)); l_487 = safe_sub_func_int32_t_s_s(l_487, 6))
                    {
                        char l_499 = 1L;
                        int l_500 = 0x5C3FA607L;
                        g_404 = p_29;
                        g_404 = ((g_222 = 0x880CL) ^ (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((g_181 <= (safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(((l_459 = (l_499 & (g_366 = (((l_500 = (g_77 = (((l_454 = l_478) >= (p_26 && (g_210 ^ 0x3C83L))) <= l_449))) < (safe_add_func_int8_t_s_s(1L, g_343))) > p_26)))) >= l_451), 3)) | p_30), l_499))) <= p_29), p_27)), g_404)));
                        l_515 = (safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((func_49(g_365, p_28, p_29) == (safe_div_func_uint16_t_u_u(1UL, g_378))), l_466)), ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((l_513 = l_487) <= (func_98(p_26) || p_26)), l_514)), 1UL)) || g_121)));
                    }
                    if (l_451)
                        break;
                }
                else
                {
                    return g_387;
                }
                l_478 = (g_197 ^ (g_170 = (l_454 = (p_27 < (safe_lshift_func_int8_t_s_u(l_478, ((func_105(g_210, g_58, g_364, (safe_add_func_uint64_t_u_u((g_181 = ((p_27 & (0x79L >= func_63((((g_149 = (0L | 0xF8L)) == g_387) > 0x1A8293C6370D1AFELL), l_449, g_387, g_387))) || l_513)), l_513)), l_478) > 0x7D5AL) > p_30)))))));
            }
            l_487 = (safe_mod_func_int16_t_s_s((g_328 | (g_76 == p_26)), (func_34(g_522, g_177, g_221, (safe_sub_func_uint64_t_u_u(1UL, l_448))) | g_102)));
        }
        else
        {
            unsigned l_532 = 18446744073709551608UL;
            g_387 = (0UL >= (safe_sub_func_int64_t_s_s((+l_53), (g_149 = ((safe_unary_minus_func_int16_t_s((((safe_sub_func_uint16_t_u_u((((l_454 = 0x75EB326A87FDBA57LL) < (safe_rshift_func_int16_t_s_s((g_206 == l_532), (safe_sub_func_int32_t_s_s(1L, (g_366 = ((~p_28) || ((safe_sub_func_uint8_t_u_u(func_63(p_30, l_532, l_53, l_53), p_28)) == p_28)))))))) && l_454), l_53)) | g_404) || p_28))) ^ g_177)))));
        }
        l_479 = (0x09DEF26BBBE7A0DDLL == 0xF3A13FBFF3141643LL);
        l_479 = (safe_div_func_int8_t_s_s((248UL && l_53), l_479));
        l_454 = (g_404 = g_187);
    }
    else
    {
        short l_541 = 0xD116L;
        for (g_378 = 0; (g_378 != 20); g_378 = safe_add_func_int64_t_s_s(g_378, 4))
        {
            int l_542 = (-1L);
            l_542 = l_541;
        }
    }
    for (g_222 = 18; (g_222 >= 49); g_222 = safe_add_func_uint8_t_u_u(g_222, 9))
    {
        long long l_555 = 1L;
        int l_615 = 0x2DE5D620L;
        unsigned long long l_723 = 0UL;
        int l_724 = 0L;
        int l_780 = 0x164F3FC9L;
        unsigned l_781 = 0x4AAD127CL;
        unsigned l_793 = 0x15C14A9FL;
        unsigned l_859 = 9UL;
        unsigned long long l_901 = 0UL;
        short l_1036 = 0xD04CL;
        if (g_171)
            break;
        if (((((l_555 = func_49(g_77, p_28, ((0x88L && ((safe_mod_func_uint64_t_u_u(l_454, (l_454 || ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(g_149, p_30)), 6)) ^ p_26)))) > (safe_lshift_func_uint8_t_u_s(((1L < p_28) | g_366), 6)))) && g_206))) & g_170) && 0L) ^ g_522))
        {
            int l_573 = 0x666AF9ABL;
            unsigned short l_583 = 0x3B7BL;
            int l_586 = 0xD686F265L;
            unsigned l_691 = 0x8C5342BBL;
            for (g_226 = 0; (g_226 != 27); g_226++)
            {
                unsigned char l_574 = 0x63L;
                int l_588 = 0xB48A8719L;
                short l_609 = 0L;
                const int l_610 = (-1L);
                int l_611 = 0x29A5A3B3L;
                int l_634 = 0x0C3BF35BL;
                int l_659 = 0xF7846FB2L;
                unsigned short l_681 = 65535UL;
                short l_697 = 0x9886L;
                if (g_328)
                {
                    char l_558 = (-9L);
                    l_558 = 0x7A9C3543L;
                }
                else
                {
                    short l_602 = 0x073EL;
                    if (((safe_sub_func_uint64_t_u_u((((safe_lshift_func_uint16_t_u_u(func_98(p_28), (g_313 = (safe_sub_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(g_226)), g_149))))) || (safe_lshift_func_int8_t_s_u(l_570, 1))) <= 18446744073709551615UL), 0UL)) < (p_26 >= (safe_add_func_int16_t_s_s(g_366, l_573)))))
                    {
                        l_454 = g_197;
                        return l_574;
                    }
                    else
                    {
                        unsigned char l_587 = 0x6DL;
                        g_404 = (l_588 = (func_49((safe_add_func_uint64_t_u_u(0xEFD16A6CDCC86991LL, func_49(p_30, ((safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(l_583, (l_454 = 0xDC28L))), g_328)), g_8)) > p_27), (l_586 = ((safe_rshift_func_int16_t_s_u(g_170, 12)) <= g_206))))), l_573, l_587) < p_26));
                    }
                    l_454 = (safe_add_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s(0x9DL, (safe_add_func_uint64_t_u_u(g_378, g_522)))) < l_570) == ((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((0x23L > 1L), (safe_unary_minus_func_uint64_t_u(((((-7L) ^ (safe_lshift_func_uint16_t_u_u(func_34(g_173, l_574, p_26, g_404), l_574))) | 0xE3A1L) | 18446744073709551608UL))))) != l_602), l_555)) < l_602)), 0xF0F631C8L));
                    g_404 = ((l_611 = (safe_lshift_func_int8_t_s_s((l_454 = ((!(safe_rshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u((!g_77), l_602)), (((((-10L) && (l_555 > (l_609 = (!func_98(p_26))))) | func_34(((-1L) < (g_313 = ((!0xDBC583C7L) ^ func_34((g_170 = l_602), p_29, l_586, l_555)))), l_610, l_555, l_602)) >= l_602) <= p_27)))) <= l_602)), p_30))) >= p_29);
                    if (p_28)
                        break;
                }
                if ((g_387 = (safe_rshift_func_uint16_t_u_u(l_609, 11))))
                {
                    if (g_436)
                        goto lbl_614;
                }
                else
                {
                    int l_622 = 0xDC526AD3L;
                    int l_686 = 0x4A97ECB6L;
                    l_615 = p_26;
                    l_611 = (safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((255UL ^ (safe_mod_func_int32_t_s_s(((g_187 = g_59) < p_29), (((p_26 & (l_586 = p_30)) && 1L) || g_222)))), ((l_555 > (l_454 = (0xB4L >= l_622))) | (-2L)))), 2));
                    if ((l_454 || (g_187 != 0x570532AEL)))
                    {
                        long long l_627 = 0x4D0B37DF391A8736LL;
                        int l_635 = (-1L);
                        l_635 = ((l_634 = (safe_rshift_func_int16_t_s_s((g_149 < ((l_611 = p_30) > ((safe_add_func_uint8_t_u_u(func_98(l_627), (-1L))) < g_80))), ((+(safe_sub_func_int64_t_s_s(l_610, func_34((l_627 & (safe_lshift_func_uint16_t_u_u((l_622 = (!0x05B8L)), 6))), p_27, g_488, l_555)))) > g_156)))) != p_26);
                        g_404 = (safe_add_func_int64_t_s_s(p_29, ((g_181 = (g_364 = p_29)) > g_638)));
                        g_387 = (l_622 = (g_638 ^ (p_28 = func_34(g_170, l_573, p_30, ((safe_add_func_int32_t_s_s(6L, (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u(((p_27 & (l_573 && (safe_div_func_int8_t_s_s(l_610, (l_570 || 1L))))) != 65531UL), p_29)) <= g_436), g_121)), l_583)))) >= 0x9D3C5BBEL)))));
                        l_586 = (safe_add_func_int8_t_s_s(l_622, ((-1L) & p_27)));
                    }
                    else
                    {
                        int l_668 = 0xE4067920L;
                        l_668 = (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((l_611 > 0x8AC78EAE60F48C13LL), 13)), (l_615 = l_659))) >= (p_27 ^ func_98((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(18446744073709551614UL, ((((l_454 = (p_29 = (func_63((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((p_29 <= g_127), 14)), l_583)), (g_173 = (g_170 || 1UL)), p_26, g_149) > 0L))) && l_611) >= 0x74L) < l_555))) != g_387), g_197))))), 11)), l_573));
                        g_404 = (safe_rshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_27, ((g_177 = (((((safe_add_func_uint64_t_u_u(l_681, func_105(g_149, g_222, l_570, (safe_rshift_func_int8_t_s_s((p_29 = (255UL != (((safe_lshift_func_uint16_t_u_u((l_634 = 3UL), 4)) || 0x92C8E864L) | p_27))), 0)), g_638))) | 255UL) ^ p_28) | 0x697A3C156BB3DCFDLL) > l_574)) | 0x2B1A47F8B57779E2LL))), g_170)) < p_26) ^ 0xFC9683E8L), p_26)), 0)) <= 0xA7L) && l_686), 15));
                        if (g_76)
                            break;
                    }
                }
                if ((l_610 != (safe_add_func_int64_t_s_s(p_30, (safe_lshift_func_int16_t_s_u(g_80, 8))))))
                {
                    l_586 = (g_387 = (l_691 > (l_53 || ((g_197 = (func_63(g_76, p_26, p_30, ((safe_div_func_uint8_t_u_u((((g_436 = g_171) || 0x6CL) || 0UL), (g_80 = ((safe_unary_minus_func_int32_t_s((safe_mod_func_int8_t_s_s(func_98(func_98(g_102)), 0x97L)))) ^ l_691)))) < p_28)) ^ p_30)) > g_59))));
                }
                else
                {
                    g_404 = 0xE876338FL;
                    if (p_29)
                        break;
                    if (p_30)
                        continue;
                    return l_615;
                }
                g_404 = l_697;
            }
            l_615 = p_28;
            for (l_573 = (-10); (l_573 > (-6)); l_573++)
            {
                l_615 = l_691;
                for (g_364 = (-1); (g_364 != 27); g_364 = safe_add_func_uint64_t_u_u(g_364, 3))
                {
                    g_387 = (g_58 & p_30);
                    if (l_570)
                        break;
                    if (l_615)
                        break;
                    for (l_53 = 0; (l_53 != 21); ++l_53)
                    {
                        long long l_708 = (-1L);
                        l_454 = (safe_add_func_int8_t_s_s(p_30, p_28));
                        g_404 = (safe_lshift_func_uint8_t_u_s(0xE1L, (p_27 | (p_28 <= (l_454 & (-8L))))));
                        l_708 = p_28;
                    }
                }
                g_387 = func_34((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((0x20L != (g_404 >= p_28)) ^ p_26), 1)), (((0UL || 0xD3F151E64668CB8ELL) >= g_221) == ((((func_98((safe_add_func_int16_t_s_s(((safe_div_func_int16_t_s_s((safe_div_func_int64_t_s_s((safe_add_func_int64_t_s_s((0xF0110EF242D1BB1ALL > func_98((safe_lshift_func_uint16_t_u_s(l_586, l_573)))), l_723)), p_29)), l_53)) & l_586), p_26))) != g_173) == g_366) || p_26) != p_29)))), l_691, g_343, g_149);
                g_404 = g_488;
            }
        }
        else
        {
            g_387 = (l_615 = l_454);
        }
        if (((l_615 = g_171) ^ ((l_724 = l_53) == 18446744073709551610UL)))
        {
            char l_727 = 1L;
            int l_743 = (-2L);
            int l_770 = 0xB35EE080L;
            unsigned l_792 = 3UL;
            int l_794 = 1L;
            int l_945 = 0x9735B0B7L;
            if (((l_615 <= (safe_lshift_func_int16_t_s_s((0xA5F4B909L != func_105(((g_156 >= p_30) >= (func_98((l_727 = l_570)) >= 0xEB77A04748D0E703LL)), p_28, (g_177 == p_28), g_221, p_30)), g_58))) > p_27))
            {
                unsigned short l_734 = 0xDF29L;
                l_751 = (safe_add_func_int8_t_s_s((((g_156 | (l_454 = (safe_lshift_func_uint16_t_u_s((g_313 = ((safe_sub_func_int32_t_s_s(p_29, l_734)) | (p_26 | (safe_sub_func_int64_t_s_s((safe_div_func_uint16_t_u_u((g_59 == ((safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((g_522 = 4UL), 0)), (l_743 = g_102))) ^ ((safe_rshift_func_uint8_t_u_u(l_746, (safe_rshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u((p_30 && l_727), p_27)), g_77)))) && 0x40L))), g_181)), g_638))))), 11)))) | p_29) || g_488), l_724));
            }
            else
            {
                unsigned short l_752 = 0xABEFL;
                int l_757 = (-1L);
                unsigned l_773 = 0x0471155FL;
                long long l_791 = 0x4391649F3542B9ABLL;
                l_743 = (l_757 = (p_27 | (g_121 != ((func_63(l_752, g_387, (safe_sub_func_int16_t_s_s((~((safe_add_func_int16_t_s_s(p_30, 9UL)) | (l_454 = (g_146 = p_28)))), l_724)), l_727) < l_727) >= p_30))));
                for (g_436 = 0; (g_436 >= 27); ++g_436)
                {
                    long long l_769 = 0xF8B9D2352BE63C36LL;
                    const unsigned l_786 = 0x85FCE6C5L;
                    for (g_59 = 0; (g_59 <= 60); g_59 = safe_add_func_uint8_t_u_u(g_59, 1))
                    {
                        g_404 = p_27;
                        if (l_615)
                            continue;
                        if (l_757)
                            continue;
                    }
                    if (g_170)
                        goto lbl_614;
                    if (g_221)
                    {
                        int l_764 = 0x5293D8F3L;
                        l_770 = (safe_lshift_func_int8_t_s_u(func_34(l_764, l_615, (safe_rshift_func_uint16_t_u_u(p_29, 8)), func_34(g_173, ((func_49((p_30 = 0x1CL), (safe_sub_func_int8_t_s_s(func_105(p_29, p_27, (~(p_28 = p_27)), p_27, p_27), l_769)), p_27) & 7L) > l_764), g_206, g_522)), 4));
                        g_404 = p_26;
                        return g_365;
                    }
                    else
                    {
                        l_781 = (p_27 >= (l_770 = (((safe_div_func_int32_t_s_s(((l_773 = g_146) && ((safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(l_769, (safe_rshift_func_int8_t_s_u(((-1L) && 0xEA1CL), func_105((l_757 && l_555), l_555, l_53, l_454, g_638))))), 2)) && l_780)), g_187)) == g_387) & g_181)));
                        g_387 = (((func_105((safe_rshift_func_int16_t_s_s(g_221, 15)), func_63((l_791 = ((safe_rshift_func_int8_t_s_s(l_786, (((l_454 = 0x1B19703AL) != (g_177 && 2UL)) <= g_146))) & (safe_lshift_func_int8_t_s_s((g_77 & ((g_522 <= (((safe_add_func_int32_t_s_s((func_98(l_743) & 0UL), g_77)) | l_727) && g_181)) | 0x9550B86BL)), 0)))), g_146, l_792, g_149), p_30, l_793, l_773) == p_29) <= 18446744073709551615UL) <= p_28);
                        if (l_794)
                            continue;
                        g_387 = (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(0x1F23L, 2)), p_29));
                    }
                }
                l_751 = (safe_add_func_int16_t_s_s(g_76, 0x0A9EL));
            }
            l_780 = l_751;
            if ((4294967294UL == p_28))
            {
                short l_803 = (-1L);
                if ((safe_lshift_func_uint8_t_u_s(l_803, 0)))
                {
                    const unsigned l_814 = 0x47A275CBL;
                    int l_825 = 0x3CEF667DL;
                    int l_839 = (-1L);
                    l_454 = (safe_sub_func_int16_t_s_s((func_34((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_187, func_63((p_30 || (l_803 | (safe_add_func_int64_t_s_s((safe_add_func_uint16_t_u_u((((g_181 > 0L) && g_343) || l_814), l_723)), l_770)))), l_570, g_222, p_29))), l_814)), g_815, l_615, g_156) != g_149), l_814));
                    if (p_30)
                    {
                        int l_824 = 0L;
                        l_751 = (g_378 & func_98((safe_sub_func_uint32_t_u_u((g_365 = (g_638 == (g_121 <= ((safe_rshift_func_int16_t_s_u(0xDEDDL, 6)) || p_28)))), (((safe_add_func_uint64_t_u_u(p_26, l_824)) ^ 9UL) > (l_825 = 0UL))))));
                    }
                    else
                    {
                        g_387 = ((p_27 & (l_825 > (!((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(g_222, (safe_add_func_uint64_t_u_u((p_30 || func_34((l_825 || (safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_u(p_29, (g_80 = (l_570 & func_63(l_781, g_222, g_313, g_197)))))))), g_222, g_365, p_27)), p_27)))) & g_197), 2)) <= 0x1D62L)))) != 0L);
                        g_387 = (safe_mod_func_int8_t_s_s(1L, func_34(l_839, g_197, l_803, l_53)));
                    }
                }
                else
                {
                    unsigned long long l_840 = 0xC0B14902819F1446LL;
                    l_751 = (l_840 ^ g_815);
                }
            }
            else
            {
                long long l_853 = 0x6935028EEF8A0E56LL;
                const short l_885 = 0xCD1FL;
                int l_893 = (-1L);
                int l_902 = 0L;
                for (g_181 = 0; (g_181 == 15); g_181 = safe_add_func_int64_t_s_s(g_181, 9))
                {
                    short l_854 = (-1L);
                    int l_884 = 0xEA0A7C63L;
                    unsigned short l_892 = 0xEB4DL;
                    if ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(func_63((safe_add_func_uint8_t_u_u(g_488, (safe_div_func_int64_t_s_s(p_30, (safe_sub_func_uint8_t_u_u(p_28, p_26)))))), p_28, l_746, p_29), 7)), (p_28 > l_853))))
                    {
                        l_794 = g_387;
                        l_794 = l_854;
                    }
                    else
                    {
                        l_751 = l_727;
                        g_387 = func_34(((p_30 <= 0x999EC830L) || 0x3FE367B1L), p_27, l_792, g_76);
                    }
                    if (g_638)
                    {
                        char l_875 = (-6L);
                        int l_888 = 0xEF7E978CL;
                        long long l_889 = 0x4851721E9462B176LL;
                        g_387 = g_404;
                        l_794 = func_63(l_853, (l_746 > l_454), (safe_sub_func_uint8_t_u_u(l_570, (l_615 = p_28))), (func_63(l_724, ((safe_div_func_uint64_t_u_u(((l_743 == l_555) < func_98((l_853 < 2L))), 1UL)) | l_859), l_780, l_781) >= (-6L)));
                        l_884 = (l_751 = (((g_149 = (safe_unary_minus_func_uint8_t_u((safe_add_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((func_105((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_794, (func_98((safe_lshift_func_int16_t_s_u(l_875, 9))) == g_8))), 7)), ((p_29 = (g_436 = ((safe_sub_func_int16_t_s_s(p_28, (safe_add_func_uint16_t_u_u((l_859 != p_28), (safe_add_func_int8_t_s_s((safe_mod_func_int64_t_s_s((p_26 ^ (l_770 = p_26)), p_28)), 1UL)))))) == (-10L)))) >= (-10L)), p_30, l_853, p_28) ^ l_746) > 0x5DL), 0L)), l_724)) <= 0L) > p_30), l_853)), g_80))))) > g_328) == p_30));
                        l_889 = (l_885 < (+(safe_mod_func_int16_t_s_s(0x9C59L, (((l_854 | p_30) & (l_888 = l_794)) & p_29)))));
                    }
                    else
                    {
                        unsigned l_894 = 0xDA74CBBDL;
                        g_387 = (safe_sub_func_int32_t_s_s((l_743 = l_746), ((p_27 == ((l_893 = (g_177 = func_105((l_892 = 251UL), l_893, (l_894 >= (func_63((safe_rshift_func_uint8_t_u_s((g_226 ^ l_893), (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(18446744073709551606UL, l_894)), p_27)))), g_102, p_30, l_894) | l_53)), l_901, p_29))) == l_854)) ^ l_727)));
                        l_902 = l_894;
                        if (l_893)
                            continue;
                    }
                    for (l_892 = 0; (l_892 <= 55); l_892++)
                    {
                        l_794 = p_28;
                        if (p_30)
                            continue;
                    }
                }
                g_387 = func_105((g_343 | (safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(65526UL, 1)) != (safe_lshift_func_int16_t_s_u((-1L), (((g_638 & p_28) < p_29) ^ (safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((g_80 = (g_187 & ((l_724 = (g_365 = l_901)) == (l_794 = (((g_206 >= 65526UL) && l_853) | (-6L)))))), p_28)), 12)))))), 0x59E6L)), p_28))), l_885, l_793, g_197, l_792);
                g_387 = (safe_sub_func_int32_t_s_s(p_26, ((((((p_30 = func_34(p_27, (l_454 = (safe_rshift_func_uint16_t_u_s((((safe_sub_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u(func_98(l_615), (((g_181 = p_30) < (safe_lshift_func_int16_t_s_s(0xA404L, (func_34(p_30, g_313, g_76, g_76) | l_53)))) <= p_29))) | g_173), 0xBD5FA540AEE2954ELL)), p_27)) & 0x2E5622A451C025F8LL) || g_149), g_80))), l_53, g_146)) ^ 4L) | g_313) & l_746) == 255UL) >= 0xD619L)));
                if ((safe_rshift_func_uint16_t_u_u(((!g_222) | g_638), 8)))
                {
                    unsigned short l_931 = 0xD85DL;
                    if (func_63((0x53F1D4E5L != p_27), p_27, p_30, (l_723 < l_53)))
                    {
                        l_931 = 0xF22EEF7BL;
                        if (g_815)
                            break;
                        g_404 = g_404;
                    }
                    else
                    {
                        const unsigned l_932 = 18446744073709551615UL;
                        l_751 = (l_792 == ((l_853 >= 0x613FL) < l_931));
                        if (l_932)
                            break;
                        g_404 = p_30;
                    }
                }
                else
                {
                    char l_943 = 0x5EL;
                    unsigned long long l_944 = 6UL;
                    int l_948 = 0x56A9CA3BL;
                    l_893 = (!(((7UL ^ (g_815 != ((safe_rshift_func_uint16_t_u_u(0xA7E4L, (safe_sub_func_uint16_t_u_u(65535UL, (((safe_rshift_func_int16_t_s_u((p_27 & (l_751 = l_902)), 3)) != (safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_121, p_26)), 2))) < (func_98((l_743 = ((func_34(l_743, l_53, l_943, l_944) <= g_210) & l_945))) | g_222)))))) != p_27))) < 0xE976L) > p_26));
                    l_948 = (g_378 <= (safe_lshift_func_uint8_t_u_u(1UL, p_26)));
                }
            }
        }
        else
        {
            int l_951 = 0L;
            int l_968 = 0xABF46CE3L;
            unsigned long long l_1028 = 1UL;
            for (l_570 = 0; (l_570 < 35); l_570 = safe_add_func_uint16_t_u_u(l_570, 5))
            {
                short l_954 = 0xB022L;
                int l_973 = (-6L);
                unsigned short l_1007 = 0xD21CL;
                char l_1024 = 0xD0L;
                long long l_1029 = 1L;
                l_951 = 0xE4602D04L;
                for (g_156 = 13; (g_156 > (-7)); g_156 = safe_sub_func_uint16_t_u_u(g_156, 9))
                {
                    g_387 = (l_954 ^ l_954);
                }
                if ((g_404 = ((safe_add_func_int8_t_s_s((l_957 != g_181), (l_973 = ((0L && ((((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((g_522 = (+(0x8FL != ((safe_add_func_uint64_t_u_u(((((g_197 = func_63((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((l_968 = p_29), ((p_26 & ((g_206 = 0L) & (g_80 = (safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s((g_522 || g_12), p_28)), p_29))))) <= 255UL))), 0xA3F4L)), p_30, g_173, l_954)) && g_197) < l_954) || l_751), p_29)) || g_170)))), 6)), g_365)) | l_615) || l_957) < g_328)) & 5L)))) & p_26)))
                {
                    unsigned l_991 = 0x9D958C69L;
                    int l_994 = 0L;
                    for (g_328 = (-4); (g_328 != (-9)); g_328 = safe_sub_func_uint64_t_u_u(g_328, 1))
                    {
                        unsigned long long l_982 = 0x1AEB39F1E4E67466LL;
                        g_404 = p_26;
                        if (g_173)
                            continue;
                        g_404 = ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(g_364, 0UL)), (func_34((l_951 < (~(g_181 = ((safe_sub_func_uint8_t_u_u(((g_378 = l_982) && (func_63(p_27, l_968, (l_973 = ((((safe_lshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(0xEFEAL, (safe_mod_func_uint16_t_u_u(((l_991 = g_313) | (((l_994 = ((safe_add_func_uint32_t_u_u((65526UL || p_26), p_26)) || 0x440FB0D6693738B9LL)) < g_387) <= 0xA112660412EEBB5CLL)), p_27)))), 0x5E036674332CE63FLL)), l_954)) <= g_378) >= 0x7FC1L) >= 18446744073709551615UL)), g_488) >= g_343)), 255UL)) & l_570)))), g_387, l_570, l_954) ^ l_781))) > g_187);
                    }
                }
                else
                {
                    unsigned l_1006 = 4294967287UL;
                    int l_1027 = 0x05791AEEL;
                    if ((func_49(((g_58 = (g_366 = g_156)) > 0x5A24C052L), (g_206 = ((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(4294967288UL)), 4)), (g_436 = g_226))) || ((safe_rshift_func_int16_t_s_s((p_28 && (((safe_lshift_func_uint16_t_u_s((((((l_570 == (l_454 | g_488)) != (((safe_mod_func_int32_t_s_s((((p_27 & p_29) || l_1006) <= 1L), l_1006)) > g_313) >= g_149)) != 0x22C2BC04L) ^ p_26) < 1UL), 10)) || l_1006) > 0x634B9D3EE54566DBLL)), g_222)) == p_30))), l_1007) || p_29))
                    {
                        g_404 = g_366;
                        l_724 = p_30;
                    }
                    else
                    {
                        char l_1008 = 0x96L;
                        unsigned long long l_1023 = 0x65FBB06526FC3512LL;
                        if (g_366)
                            goto lbl_614;
                        l_1008 = 0x69E4643AL;
                        l_615 = g_387;
                        l_968 = ((safe_mod_func_uint64_t_u_u(g_80, (g_177 = (safe_rshift_func_uint16_t_u_s(g_436, 14))))) | (safe_sub_func_uint8_t_u_u(((((g_173 | g_59) == (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(p_28, ((g_77 >= (safe_rshift_func_uint16_t_u_u((0L <= (safe_add_func_int16_t_s_s((p_29 & func_34(((((1UL | p_30) < l_1023) || g_210) > g_197), p_26, l_1024, g_366)), p_29))), p_28))) ^ l_951))), l_780))) || 0xA800L) && 0xEF92L), p_26)));
                    }
                    g_404 = ((l_968 = l_570) && (l_954 & 0x8516EBBFC3BF0380LL));
                    for (l_1024 = (-27); (l_1024 < (-19)); l_1024 = safe_add_func_int64_t_s_s(l_1024, 6))
                    {
                        l_1027 = 5L;
                        l_1029 = l_1028;
                        return p_26;
                    }
                }
            }
            l_1036 = func_49((safe_sub_func_int64_t_s_s((g_197 && (l_751 = 0xC17336ACE9D0C266LL)), (safe_rshift_func_uint8_t_u_s(g_181, 0)))), p_30, (l_957 <= (l_968 = (safe_rshift_func_int8_t_s_s(l_746, l_615)))));
            if (p_30)
                continue;
        }
    }
    if ((l_1037 >= (3UL == (safe_mod_func_uint64_t_u_u(l_53, g_364)))))
    {
        const unsigned short l_1044 = 0UL;
        int l_1047 = 6L;
        l_1047 = (p_27 >= ((safe_rshift_func_uint16_t_u_s(func_34(func_42(g_387, p_29, ((g_146 = (0x1C56444DE7EC44BCLL > (safe_rshift_func_uint8_t_u_u(func_105(l_1044, g_210, l_957, (g_404 = (safe_rshift_func_int16_t_s_s(func_105(g_222, l_746, g_156, l_1044, g_522), 11))), l_454), 1)))) >= g_59), g_156), g_12, l_1037, l_1044), g_12)) <= g_522));
    }
    else
    {
        unsigned long long l_1050 = 0x08E67622E2CEFB49LL;
        int l_1051 = (-7L);
        l_751 = func_93(((p_28 <= func_49(p_27, p_30, (safe_sub_func_uint16_t_u_u((l_1051 = (p_30 == func_105(p_29, p_27, l_1050, g_187, l_751))), p_28)))) != 0x2CEEE905L), p_29);
        g_387 = (g_404 = ((safe_sub_func_uint64_t_u_u((l_751 = (safe_sub_func_int32_t_s_s((l_751 > (((l_454 = (func_63(g_364, l_751, (l_1051 = (safe_lshift_func_uint16_t_u_u(func_105((safe_sub_func_int64_t_s_s(((safe_add_func_uint16_t_u_u((g_156 ^ l_454), (safe_lshift_func_int16_t_s_u(func_98((g_177 = (g_181 != g_121))), 1)))) < (((safe_add_func_int8_t_s_s((0xF47FL > l_746), l_1051)) <= 0UL) ^ p_27)), 0x12D4E4318BD5420FLL)), l_1051, l_1050, g_181, l_53), p_28))), g_80) != p_28)) > 0xB6DAF189L) != (-1L))), 1L))), p_26)) < l_957));
    }
    return p_27;
}







static char func_34(long long p_35, const int p_36, unsigned long long p_37, unsigned p_38)
{
    for (p_35 = 0; (p_35 >= (-29)); p_35--)
    {
        return p_37;
    }
    return g_8;
}







static int func_42(int p_43, unsigned p_44, unsigned char p_45, unsigned long long p_46)
{
    char l_85 = 0x4CL;
    int l_92 = (-1L);
    unsigned char l_113 = 9UL;
    int l_128 = 0xFD421DEFL;
    int l_423 = 1L;
    int l_424 = (-1L);
    char l_433 = 0L;
    p_43 = ((p_46 = (safe_sub_func_int8_t_s_s(((l_424 = (safe_lshift_func_int8_t_s_u(((func_34(l_85, (l_423 = (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((l_92 = g_77) & (func_93((l_128 = (safe_div_func_int32_t_s_s(((func_98((p_45 < l_85)) & (safe_rshift_func_int16_t_s_u((!0x5BEAL), 2))) != func_105((g_80 = (safe_lshift_func_uint16_t_u_u((!l_113), 11))), l_85, (safe_sub_func_int32_t_s_s((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s(((0x7998L | l_85) != l_113), 14)) & l_85), 7L)), 0x70062155L)), g_12, l_85)), p_45))), g_59) >= p_46)), g_77)), 10))), l_85, p_43) || 1UL) != p_44), 0))) <= 0x9DL), 1UL))) >= 0x53C59B48195351EALL);
    l_128 = 1L;
    p_43 = (safe_sub_func_int32_t_s_s(g_171, (safe_mod_func_int64_t_s_s(g_181, ((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((l_423 = ((g_404 = 0xDE92C075L) || 0x528D20E4L)), 3)), (254UL ^ ((~(!func_63(g_77, l_433, (l_113 != ((safe_add_func_uint32_t_u_u(0UL, p_45)) >= p_46)), g_436))) > g_197)))) && g_387)))));
    return p_46;
}







static unsigned short func_49(unsigned char p_50, char p_51, short p_52)
{
    char l_56 = 0xADL;
    int l_57 = (-1L);
    short l_62 = (-5L);
    unsigned l_74 = 0UL;
    int l_78 = 1L;
    int l_79 = 0xCA64A9B5L;
    l_57 = l_56;
    g_58 = (-3L);
    g_59 = p_50;
    l_79 = (l_78 = (safe_add_func_uint64_t_u_u((l_57 = (g_77 = ((l_62 = 1L) && func_63((func_34((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((0x79L != (p_50 = p_51)) && ((safe_lshift_func_uint8_t_u_u(0x32L, (!0x61L))) ^ p_51)), (((l_74 | func_34(l_62, p_51, l_57, g_58)) ^ (-5L)) || l_62))) | g_12), p_52)), l_56, g_58, g_59) ^ (-2L)), l_56, l_56, p_52)))), p_51)));
    return g_8;
}







static unsigned short func_63(char p_64, unsigned p_65, int p_66, long long p_67)
{
    unsigned l_75 = 0x05BF5EF7L;
    g_76 = l_75;
    return p_66;
}







static const unsigned long long func_93(unsigned p_94, unsigned long long p_95)
{
    long long l_136 = 0xC30C227312B8DC09LL;
    unsigned l_140 = 0xC4BEA28AL;
    int l_155 = 7L;
    int l_164 = (-5L);
    int l_169 = 0x1A19A74BL;
    int l_311 = (-3L);
    unsigned l_381 = 0x05F7768BL;
    for (g_76 = (-25); (g_76 != 3); g_76++)
    {
        unsigned short l_131 = 8UL;
        int l_139 = 0x36FBD3DFL;
        int l_145 = 0x40900504L;
        int l_172 = (-1L);
        unsigned l_318 = 0xCF8C0091L;
        unsigned long long l_321 = 18446744073709551611UL;
        long long l_326 = 0xF56A3590E6B128E4LL;
        unsigned l_331 = 6UL;
        if (((1L ^ p_95) && ((func_34(l_131, func_98((g_146 = (((safe_lshift_func_int8_t_s_u((((p_95 & ((l_136 > (l_131 > (safe_rshift_func_uint16_t_u_u(((l_139 = p_94) == (l_145 = (l_140 >= (safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(l_131, p_95)), g_121))))), g_76)))) != g_76)) == 0xCA4895AF60329EC2LL) || g_59), g_8)) <= 0xEAL) != 0x3221L))), l_136, l_131) > l_131) && 0xADL)))
        {
            long long l_154 = 0x187DA1133990FFCBLL;
            unsigned char l_163 = 0x33L;
            short l_165 = 0xF27CL;
            int l_166 = (-1L);
            l_145 = ((func_98(l_139) >= g_146) || (((safe_lshift_func_int8_t_s_s((func_98((0x24DB28FCC98A5ECBLL > ((l_131 && l_139) < g_121))) < (g_149 = (0x1501L | p_95))), p_95)) >= 0x9B7F1410L) == p_95));
            if ((((l_166 = (safe_div_func_uint8_t_u_u((g_80 = (func_34((((0xD521L <= (l_164 = ((g_156 = (safe_div_func_uint32_t_u_u(l_154, l_155))) ^ (safe_add_func_uint64_t_u_u(g_76, (safe_div_func_uint64_t_u_u(p_95, ((l_139 = func_34(l_154, l_131, (safe_add_func_uint8_t_u_u(p_95, p_94)), p_94)) && l_163)))))))) & g_76) != p_95), g_149, l_165, g_77) > l_131)), p_95))) >= g_149) | g_102))
            {
                l_169 = (safe_div_func_uint32_t_u_u(g_76, p_95));
                g_170 = g_77;
            }
            else
            {
                long long l_180 = (-1L);
                g_171 = 6L;
                l_139 = l_139;
                g_173 = l_172;
                for (g_58 = (-29); (g_58 == 18); g_58++)
                {
                    int l_176 = 0x56EB578CL;
                    if (l_176)
                    {
                        return p_95;
                    }
                    else
                    {
                        g_177 = p_94;
                        g_181 = (safe_sub_func_int16_t_s_s(0x94BBL, (l_180 = g_77)));
                        if (p_95)
                            continue;
                    }
                }
            }
        }
        else
        {
            unsigned short l_184 = 0x28AAL;
            char l_209 = 6L;
            int l_223 = 0x3DDCFDBBL;
            for (g_177 = (-5); (g_177 > 53); g_177 = safe_add_func_int8_t_s_s(g_177, 8))
            {
                short l_196 = 8L;
                l_184 = p_95;
                g_187 = (+(~(safe_rshift_func_int16_t_s_u(g_77, 7))));
                g_197 = (((safe_sub_func_uint8_t_u_u(2UL, ((safe_sub_func_int64_t_s_s(g_76, (safe_sub_func_int16_t_s_s((g_80 || 0xF4L), g_59)))) <= g_127))) < (l_196 & p_94)) == (((0x41F7L && g_80) && g_58) == l_196));
                g_206 = (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((g_146 == l_184), g_181)), (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(p_95, g_149)) || (l_131 == l_196)), (0x6F27L | (func_98(g_80) && g_170))))));
            }
            l_209 = (safe_sub_func_int32_t_s_s(1L, p_94));
            if (p_94)
            {
                int l_219 = 0x306CC1A3L;
                unsigned char l_220 = 0xD9L;
                g_210 = (p_94 & 0xF86CL);
                g_222 = (((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(g_173, p_95)) < ((safe_mod_func_uint8_t_u_u(((g_127 > g_197) == ((!0UL) || ((0x092AL == (((p_95 >= ((safe_rshift_func_uint8_t_u_s((l_219 < l_209), p_95)) <= l_209)) && 255UL) && 0xE95EL)) < g_156))), p_95)) <= g_173)), l_220)) || g_221) == p_94);
            }
            else
            {
                if (l_209)
                    break;
                if (g_181)
                    continue;
            }
            l_223 = (p_94 > (0xDDL > l_184));
        }
        for (g_146 = (-11); (g_146 == 16); g_146++)
        {
            const unsigned l_235 = 18446744073709551608UL;
            unsigned long long l_246 = 0x95B575C4E6ECF980LL;
            int l_248 = 0x77FEEE3CL;
            int l_342 = (-2L);
            const unsigned l_421 = 4294967287UL;
            g_226 = 0x9C7B4ADEL;
            if (g_156)
                continue;
            for (g_149 = 0; (g_149 >= 24); g_149 = safe_add_func_int32_t_s_s(g_149, 4))
            {
                unsigned l_247 = 1UL;
                int l_249 = 0x2A6C3B22L;
                for (l_140 = (-6); (l_140 <= 17); ++l_140)
                {
                    volatile unsigned l_231 = 0x5548FEC5L;
                    int l_232 = 1L;
                    l_231 = g_171;
                    if ((!l_172))
                    {
                        unsigned l_243 = 0UL;
                        l_232 = 0xCA528370L;
                        l_249 = (l_248 = (safe_rshift_func_uint16_t_u_u((l_235 > ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((l_243 = (safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_u(g_226, 5))))), 1)), (safe_sub_func_int16_t_s_s(p_94, (l_139 = (g_187 = (p_94 != l_246))))))) > (~((0x3213L <= g_146) == ((p_94 < (l_247 > p_95)) != p_95))))), 9)));
                    }
                    else
                    {
                        int l_250 = 0x31A696AEL;
                        l_232 = p_94;
                        if (p_95)
                            break;
                        l_249 = g_197;
                        l_250 = g_59;
                    }
                    if (p_94)
                        break;
                }
                if (((p_94 ^ (safe_sub_func_uint64_t_u_u((0UL && (g_197 < func_98((g_181 = func_34(p_95, (p_94 & 1L), (((((safe_rshift_func_uint8_t_u_u((l_139 = g_76), (l_172 || (g_187 < 0xAD021763L)))) == l_247) || l_246) > (-8L)) < 0xFE2B2F50514DB471LL), p_94))))), (-4L)))) > l_235))
                {
                    unsigned char l_259 = 0x4DL;
                    int l_260 = (-1L);
                    unsigned short l_275 = 65533UL;
                    l_164 = (g_156 && ((safe_sub_func_int64_t_s_s(((func_34((l_248 = (safe_div_func_uint32_t_u_u(l_169, (l_260 = l_259)))), (g_121 = (l_247 > ((((((p_95 = p_94) < func_34(l_259, g_58, g_177, (+(safe_add_func_uint16_t_u_u(((((g_170 = ((safe_add_func_int8_t_s_s((!0xBEL), l_172)) > 0xEDF0D3ECL)) | g_59) && 0x18702803L) >= g_102), p_94))))) == 0UL) > g_222) ^ l_172) | g_58))), g_12, l_249) < g_206) >= 4294967295UL), 0xE336E5AD53542C1BLL)) || p_95));
                    l_172 = ((l_164 = 0x4EL) ^ (((safe_lshift_func_uint8_t_u_u(255UL, 4)) != (((safe_div_func_int32_t_s_s((p_94 || (0UL && (0x9EL >= func_98((safe_add_func_uint8_t_u_u(p_94, ((l_260 = func_98(l_249)) != (((safe_lshift_func_int8_t_s_s(l_131, 4)) & l_140) >= l_169)))))))), l_155)) >= l_275) | 0L)) ^ g_8));
                    l_260 = (safe_lshift_func_uint8_t_u_s(255UL, 2));
                    if (l_275)
                        break;
                }
                else
                {
                    if (l_169)
                        break;
                    if (p_94)
                        continue;
                    return g_210;
                }
                if (g_187)
                {
                    unsigned short l_295 = 0xE661L;
                    int l_312 = 1L;
                    for (g_181 = (-30); (g_181 > 30); g_181++)
                    {
                        char l_302 = 0xEAL;
                        l_302 = (((g_222 = (l_249 = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(func_34(func_98((l_164 = ((g_58 = (0xCAC96993AF822757LL & ((((safe_mod_func_int8_t_s_s(((+(p_95 = func_98((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_uint64_t_u(((g_206 = (g_210 == (func_34((safe_add_func_int16_t_s_s((l_248 = p_95), (safe_div_func_int8_t_s_s((l_295 != (((g_156 = (safe_sub_func_int64_t_s_s(((safe_add_func_uint64_t_u_u((l_136 | (p_94 & 18446744073709551615UL)), (safe_div_func_uint8_t_u_u(0x5BL, ((g_177 = l_139) | p_94))))) != p_95), g_121))) > g_210) <= p_94)), l_139)))), l_249, p_94, l_235) >= p_95))) & l_145))) > p_94), 3)), g_181))))) && 0xE2376F68FCF27A2CLL), p_94)) & p_94) > 1UL) != l_235))) | p_94))), g_76, g_197, l_295), g_187)), 0L)))) > 7L) ^ 0x55CEL);
                        l_312 = (l_164 = ((safe_div_func_uint32_t_u_u(g_77, (safe_add_func_int16_t_s_s((-3L), ((g_58 < g_156) & (safe_div_func_uint32_t_u_u((g_177 <= (l_136 > (((!(l_172 | ((safe_lshift_func_int16_t_s_u(l_311, l_295)) ^ 8UL))) == 0xD9C3L) == p_94))), l_246))))))) > 65528UL));
                        l_248 = (g_313 = (func_34(g_221, g_146, g_149, l_312) ^ 65535UL));
                        return g_8;
                    }
                    l_312 = (safe_sub_func_int16_t_s_s(p_94, (safe_rshift_func_int16_t_s_s((g_102 > (((l_164 = (func_34((g_170 = (l_246 >= (l_139 = l_318))), (g_121 = (((0xF4L > (g_206 = (p_95 == (l_321 = ((((safe_div_func_int64_t_s_s((func_34(func_34(l_249, p_94, ((l_155 != p_95) >= l_246), p_95), g_58, g_59, l_248) && p_94), l_140)) >= l_249) < 0x154BL) ^ l_246))))) >= 0x5F3A9819A1092476LL) >= g_177)), p_95, l_140) < g_173)) > p_95) && 0x61FE9FD4BC22663ALL)), p_94))));
                }
                else
                {
                    l_249 = g_221;
                }
            }
            for (l_248 = (-15); (l_248 <= (-25)); l_248--)
            {
                long long l_327 = 0x43D050AC26C5A004LL;
                unsigned l_332 = 0x1327729DL;
                int l_394 = (-9L);
                unsigned char l_403 = 0x3CL;
                g_328 = (l_327 = ((safe_add_func_uint16_t_u_u(((~(+l_139)) || p_95), (g_222 && l_326))) < p_94));
                if ((func_98(p_95) <= ((safe_div_func_int8_t_s_s((((((l_248 & (func_34(g_210, (func_34((l_327 ^ (func_34(l_246, g_226, g_187, l_331) && 0xAE788CE2L)), g_206, l_311, p_94) >= p_95), l_332, l_246) || l_332)) & p_95) & 0x3177D20EL) || 0L) >= g_181), p_95)) <= l_327)))
                {
                    short l_335 = 0x6585L;
                    l_335 = (safe_lshift_func_uint16_t_u_s(g_210, 4));
                    g_343 = func_34(l_139, g_221, p_95, (((g_206 = g_58) & p_95) > (~(((l_164 = g_80) == (((0x74L <= (l_342 = (safe_div_func_int64_t_s_s((((~(p_94 && (safe_rshift_func_int16_t_s_s(g_58, 5)))) || 0xFD2789E1L) != g_181), l_169)))) != g_181) & 0UL)) <= p_95))));
                    for (l_327 = 0; (l_327 == 16); ++l_327)
                    {
                        const unsigned long long l_358 = 6UL;
                        l_164 = func_34((l_311 = (func_34((safe_sub_func_uint32_t_u_u(p_95, ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((((p_95 | (safe_rshift_func_int8_t_s_s(func_34((safe_lshift_func_int8_t_s_u(p_94, g_343)), l_358, l_358, (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((p_94 <= (65535UL | ((0x522AL <= p_94) & 4294967292UL))), g_226)), g_59))), p_94))) || 0x272B44A55E2D799BLL) < g_58) < g_173), l_327)), p_95)), 0x8DL)) > 0xDDL))), p_95, g_59, l_246) | 0L)), l_326, g_343, p_95);
                    }
                    if (func_98(g_328))
                    {
                        unsigned l_363 = 4294967287UL;
                        unsigned l_377 = 0x14741D20L;
                        g_364 = (l_363 <= g_210);
                        g_378 = ((0x6EL > ((0x8929L || 0x5EA6L) < ((g_366 = (g_365 = 0L)) & (6UL | (safe_rshift_func_uint16_t_u_s((g_313 = (l_145 = func_34(g_149, func_34(l_335, ((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_95, func_34(g_170, p_94, l_335, l_327))), 255UL)) >= g_77), 3)), 0x91L)) > g_121), l_332, g_102), p_95, g_210))), l_377)))))) != 0xD1B4L);
                        l_311 = g_221;
                        if (l_335)
                            break;
                    }
                    else
                    {
                        unsigned l_384 = 9UL;
                        l_342 = func_98((safe_add_func_uint32_t_u_u(l_164, (0x6F04L > g_226))));
                        l_172 = (l_381 & ((safe_mod_func_int16_t_s_s(g_170, l_384)) <= g_197));
                        if (p_95)
                            break;
                        g_387 = (((safe_add_func_uint32_t_u_u(func_34(l_139, p_95, func_34(p_94, l_248, func_98(g_59), g_313), (((!(65535UL || l_169)) <= l_342) > p_94)), g_206)) != p_95) > 4294967295UL);
                    }
                }
                else
                {
                    short l_395 = 4L;
                    long long l_398 = (-1L);
                    int l_399 = 0x1B6692F4L;
                    l_399 = (l_164 = ((safe_add_func_int64_t_s_s((l_395 = (0x8D16L != (!(g_226 = (g_8 < (g_366 <= (((safe_rshift_func_uint8_t_u_s(g_170, (safe_rshift_func_uint8_t_u_s(255UL, (l_342 = (-1L)))))) && g_102) >= (l_394 = (g_197 = g_181))))))))), (safe_sub_func_uint8_t_u_u((4294967288UL > l_398), 0x57L)))) && g_222));
                    for (p_94 = (-14); (p_94 == 54); p_94++)
                    {
                        short l_402 = 0x8C5DL;
                        g_404 = (l_402 <= l_403);
                        l_399 = p_94;
                    }
                }
                for (g_206 = 3; (g_206 >= (-23)); g_206 = safe_sub_func_int64_t_s_s(g_206, 9))
                {
                    if (func_34(g_127, p_94, g_102, g_58))
                    {
                        const unsigned l_422 = 1UL;
                        l_164 = (safe_div_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u(((g_343 || (g_80 = l_326)) & g_58), (safe_add_func_uint16_t_u_u((g_313 = ((g_197 = (safe_div_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s((p_94 > l_331), (safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_342 = p_95), l_421)), (0x5E505DB8910BCE97LL > p_94))))) < g_181), g_366))) < 0x1A2DBA9FL)), l_403)))) != p_94), l_422));
                        if (l_327)
                            continue;
                        g_404 = p_94;
                    }
                    else
                    {
                        if (g_146)
                            break;
                        g_387 = g_365;
                    }
                    l_164 = l_246;
                }
            }
        }
        if (g_102)
            break;
    }
    return g_387;
}







static long long func_98(unsigned long long p_99)
{
    g_102 = (safe_rshift_func_uint16_t_u_u(p_99, 9));
    return p_99;
}







static char func_105(const unsigned char p_106, unsigned short p_107, unsigned char p_108, int p_109, int p_110)
{
    long long l_120 = 7L;
    const int l_124 = (-5L);
    int l_125 = 2L;
    p_109 = (func_34(((l_120 = 251UL) && (func_63((g_121 = l_120), g_58, func_63((safe_mod_func_uint16_t_u_u(l_120, p_110)), g_12, p_107, func_34(p_107, l_120, p_106, g_12)), g_80) & p_109)), l_124, l_124, g_80) == 0L);
    if (g_12)
        goto lbl_126;
lbl_126:
    l_125 = p_110;
    g_127 = 0x6A876A48L;
    return l_125;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_436, "g_436", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_815, "g_815", print_hash_value);
    transparent_crc(g_1176, "g_1176", print_hash_value);
    transparent_crc(g_1183, "g_1183", print_hash_value);
    transparent_crc(g_1299, "g_1299", print_hash_value);
    transparent_crc(g_1357, "g_1357", print_hash_value);
    transparent_crc(g_1541, "g_1541", print_hash_value);
    transparent_crc(g_1555, "g_1555", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
