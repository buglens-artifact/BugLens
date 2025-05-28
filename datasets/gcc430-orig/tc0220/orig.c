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



static unsigned g_8 = 0xBA1BF2B2L;
static unsigned long long g_11 = 18446744073709551614UL;
static unsigned short g_13 = 0xCFAFL;
static short g_44 = 0x95E1L;
static unsigned long long g_68 = 0xC2B42D225D8BAC8ELL;
static unsigned short g_71 = 0xC6B0L;
static short g_114 = 4L;
static unsigned char g_117 = 253UL;
static unsigned g_122 = 0xA94A57C3L;
static int g_127 = (-1L);
static unsigned char g_133 = 1UL;
static unsigned g_144 = 0x252728FCL;
static unsigned long long g_155 = 5UL;
static int g_156 = 0L;
static char g_215 = 0xC7L;
static int g_216 = 0x4EFEDF99L;
static unsigned long long g_217 = 3UL;
static unsigned short g_249 = 0xB17AL;
static long long g_250 = 0xCF8CBA6C989A696ELL;
static char g_252 = 0xE7L;
static int g_291 = 0L;
static unsigned char g_293 = 0x96L;
static unsigned short g_357 = 5UL;
static char g_438 = 0x2BL;
static unsigned short g_439 = 65535UL;
static unsigned g_470 = 0xF2BCD1FAL;
static int g_530 = 0x81542B8DL;
static unsigned long long g_635 = 0xEDE9A192EC5B8AD2LL;
static unsigned g_643 = 0x92AD359DL;
static unsigned long long g_699 = 0xF8746CAB15A8E5C7LL;
static unsigned g_702 = 0xA96E44A0L;
static int g_708 = 0xC08A8EB1L;
static unsigned short g_709 = 0x6D7CL;
static int g_714 = 0L;
static int g_731 = 0L;
static unsigned g_733 = 8UL;
static const char g_782 = (-1L);



static unsigned func_1(void);
static const int func_3(unsigned char p_4, unsigned char p_5, unsigned char p_6);
static int func_24(unsigned p_25, long long p_26, int p_27);
static short func_30(unsigned p_31, const short p_32, unsigned long long p_33, unsigned short p_34, unsigned p_35);
static unsigned long long func_37(short p_38, unsigned short p_39, const char p_40, short p_41);
static const int func_45(long long p_46);
static unsigned short func_54(char p_55, unsigned long long p_56, unsigned p_57);
static unsigned char func_77(unsigned p_78, unsigned long long p_79);
static long long func_82(const int p_83, short p_84, long long p_85);
static char func_101(const char p_102, char p_103, long long p_104, long long p_105);
static unsigned func_1(void)
{
    unsigned char l_2 = 247UL;
    int l_7 = (-6L);
    unsigned char l_803 = 1UL;
    l_2 = 1L;
    l_7 = func_3((--g_8), g_11, l_7);
    for (g_250 = 0; (g_250 == 25); ++g_250)
    {
        unsigned short l_796 = 65530UL;
        int l_801 = 0xCDF1BC1AL;
        if (l_2)
            break;
        for (g_8 = 0; (g_8 == 45); g_8++)
        {
            const unsigned long long l_787 = 1UL;
            int l_795 = 0L;
            if (g_114)
            {
                if (l_787)
                    break;
                g_291 = 4L;
            }
            else
            {
                unsigned l_792 = 0x67B2B031L;
                g_156 = ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(func_54(g_293, l_792, (safe_lshift_func_int16_t_s_s((l_795 | (l_7 = g_133)), 3))), 3)), g_127)) && (g_439 < l_792));
            }
            l_796--;
            g_530 = (g_291 |= ((safe_sub_func_int8_t_s_s((0L & ((0UL < g_439) == (l_801 = l_7))), (safe_unary_minus_func_uint64_t_u(l_803)))) != g_144));
            l_801 = (+(((1UL | (safe_sub_func_int64_t_s_s(func_82(l_803, ((g_699 = g_708) && l_7), g_702), l_2))) || (g_439 ^ g_68)) || g_250));
        }
        if (g_144)
            continue;
    }
    return g_11;
}







static const int func_3(unsigned char p_4, unsigned char p_5, unsigned char p_6)
{
    short l_12 = 0L;
    int l_20 = 0xAE49A2F3L;
    int l_21 = (-2L);
    int l_36 = 0x76B5A7DDL;
    char l_418 = (-1L);
    int l_759 = 0L;
    int l_760 = (-5L);
    unsigned char l_778 = 0x8BL;
    unsigned l_779 = 4294967293UL;
    unsigned l_780 = 0UL;
    int l_781 = 0x7A2F8F2EL;
    g_13 ^= (0x5EF2L ^ (g_8 || (l_12 = 0xEC6EL)));
    l_760 = (l_759 ^= ((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((((l_21 = (l_20 = g_11)) & ((safe_add_func_uint32_t_u_u(0x5A63A74AL, func_24(g_8, (0x1E60E7790660D64CLL & (l_12 && (p_5 ^ (safe_mod_func_int16_t_s_s(func_30((l_36 = 1UL), p_6, func_37((g_44 = ((safe_lshift_func_int16_t_s_s(l_12, p_5)) & p_4)), p_5, g_11, l_12), l_418, p_6), 0x370FL))))), l_418))) > l_12)) == (-4L)), 5)) && l_418) & 0xCEL), g_8)) ^ p_6));
    l_36 = (func_82(((safe_add_func_uint32_t_u_u(func_24(l_12, g_114, (safe_sub_func_uint32_t_u_u((l_36 || (l_759 = g_250)), ((safe_sub_func_uint8_t_u_u(p_5, ((p_6 = (((g_291 = ((l_21 ^= (p_5 >= (l_20 = (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(func_82((safe_lshift_func_int8_t_s_s(((l_760 = (func_54(g_530, ((safe_add_func_int16_t_s_s((g_44 > (++g_709)), ((l_778 = (safe_unary_minus_func_int64_t_s(((g_127 >= l_760) | 18446744073709551607UL)))) >= 18446744073709551611UL))) == l_779), l_36) && l_780)) | l_36), 3)), l_781, g_11), 0)), 65533UL))))) || g_438)) < 0xC565604DL) > 0x9FAFL)) > (-1L)))) | g_782)))), 1UL)) || (-7L)), g_8, l_779) < l_36);
    return l_781;
}







static int func_24(unsigned p_25, long long p_26, int p_27)
{
    unsigned l_738 = 0x9D9CB637L;
    int l_741 = 0x7B80BCDDL;
    short l_749 = (-1L);
    int l_757 = 0L;
    int l_758 = 0xB48A9443L;
    g_714 |= (g_68 < ((safe_mod_func_uint64_t_u_u((((l_738 = 0L) >= (safe_mod_func_int64_t_s_s(p_26, (+((++g_71) ^ 0xD77DL))))) && (g_117 != func_82(g_530, (0x7D163C83520C0B0CLL > ((func_82(((((((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(l_738)), p_26)) == 4294967293UL), 4)) == l_738) && 0x66L) > l_749) == g_216) == p_25), g_215, p_26) & l_741) & p_27)), p_26))), g_291)) > 0L));
    l_741 = ((func_37(g_156, g_156, (safe_mod_func_uint16_t_u_u((l_758 |= func_82((((func_82(l_738, func_101((safe_mod_func_int32_t_s_s(((safe_unary_minus_func_uint64_t_u((((!(0x64L <= ((g_44 |= g_714) > (l_741 < (((g_643--) == g_127) > 0x0E781344D759F0AFLL))))) >= (func_45((l_757 = g_714)) ^ p_26)) < p_27))) || g_470), 0x7555864DL)), g_11, l_738, p_27), l_741) || l_741) && p_25) & g_68), l_749, g_68)), p_26)), l_749) <= 0L) < 0x33L);
    return p_26;
}







static short func_30(unsigned p_31, const short p_32, unsigned long long p_33, unsigned short p_34, unsigned p_35)
{
    char l_423 = 0x5FL;
    int l_433 = 0xB98A5896L;
    int l_434 = 0x51CB4CD0L;
    int l_435 = (-4L);
    int l_436 = (-1L);
    int l_437 = 6L;
    short l_444 = 1L;
    unsigned l_454 = 1UL;
    char l_536 = (-8L);
    short l_537 = 0xC96CL;
    short l_557 = (-1L);
    unsigned l_570 = 0x9DA8BD7CL;
    g_216 = (safe_add_func_int16_t_s_s(((0UL && p_33) != (safe_lshift_func_int16_t_s_s((l_423 != (g_44 |= (g_114 = 0xBF1AL))), 5))), (safe_add_func_uint32_t_u_u(l_423, (l_423 & ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_uint64_t_u(func_82((g_127 <= (+p_35)), p_32, l_423))) >= l_423), p_34)), p_35)) >= 251UL))))));
    g_439++;
    l_436 ^= g_155;
    if ((func_37((1L >= (safe_rshift_func_uint8_t_u_u(func_82(l_423, l_436, p_35), 5))), ((((l_444 = l_437) || g_11) <= (safe_add_func_int64_t_s_s((0xC4CBAD7814597CF5LL | (safe_mod_func_int32_t_s_s(p_33, p_35))), 0x3955CDD6533656A4LL))) ^ 5L), g_133, p_35) | p_35))
    {
        char l_453 = 0x43L;
        int l_469 = 0xE63ADF2EL;
        unsigned long long l_487 = 0xF802E3AF68633A95LL;
        if (func_82(l_423, (((0xDA2CCC98L <= ((safe_lshift_func_int8_t_s_s(l_444, 4)) >= g_144)) | func_77((safe_add_func_int32_t_s_s(p_32, l_433)), g_215)) && (g_250 = 6L)), g_122))
        {
            unsigned short l_463 = 0xDA58L;
            l_454--;
            for (l_453 = 6; (l_453 >= 26); l_453++)
            {
                char l_464 = 0xA3L;
                g_216 |= (safe_lshift_func_uint16_t_u_u(((g_215 != p_35) <= (g_439 ^ p_35)), (((safe_lshift_func_uint8_t_u_u((l_463 = 255UL), 7)) != func_54(l_464, (0xA95220B6L ^ ((((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((l_469 ^= 9L), 0x8612L)), g_71)) <= g_144) < l_453) < g_71)), g_68)) > 0xC0E7L)));
                if (p_31)
                    break;
            }
        }
        else
        {
            return g_357;
        }
        g_470 = p_34;
        g_216 = (!(safe_rshift_func_uint16_t_u_u(func_54((safe_mod_func_uint32_t_u_u((0x2BAF4FB6L <= (p_35 | g_216)), (safe_mod_func_uint32_t_u_u(p_31, (safe_add_func_uint8_t_u_u((func_101(g_252, p_34, g_71, (0x2097L & p_32)) && g_293), p_35)))))), l_469, p_33), p_34)));
        for (g_68 = (-27); (g_68 > 51); ++g_68)
        {
            int l_481 = (-6L);
            int l_502 = (-3L);
            if (l_481)
                break;
            for (p_34 = 27; (p_34 <= 41); ++p_34)
            {
                int l_484 = 0xCB7A4CBBL;
                int l_501 = (-8L);
                if (l_484)
                    break;
                l_502 ^= func_82(g_144, (safe_lshift_func_int8_t_s_u((l_481 = func_82((l_487 = g_357), g_250, (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s(func_45(g_144), (safe_unary_minus_func_uint16_t_u((0xB735758709158601LL | (!(safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(1L, (((l_501 = (g_122 = (safe_sub_func_int32_t_s_s((g_117 || ((l_436 = (l_435 && p_32)) <= p_34)), p_34)))) <= 0xA18A35B8L) || 0x6122L))), p_35)))))))) == 65535UL), 11)), 252UL)))), 5)), p_32);
            }
        }
    }
    else
    {
        short l_507 = 0xE9D3L;
        unsigned long long l_514 = 0x801814633F18DFF7LL;
        unsigned short l_527 = 0xFF3FL;
        unsigned char l_535 = 0x0BL;
        int l_558 = 0x54C870B7L;
        int l_580 = 0x344F5B64L;
        unsigned char l_636 = 0x1FL;
        int l_641 = 0x981E269FL;
        unsigned short l_650 = 0x4BAEL;
        int l_707 = (-4L);
        int l_726 = 0xFB1E72B0L;
        int l_732 = 0x2149EEC2L;
        if (func_82(g_71, g_117, ((safe_rshift_func_int8_t_s_s(g_249, func_45(l_507))) | (l_507 == (0UL ^ (func_45((safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s(l_507, (safe_rshift_func_int16_t_s_u((-10L), 2)))) > g_44) <= p_31), p_31))) <= l_514))))))
        {
            unsigned long long l_548 = 18446744073709551612UL;
            unsigned short l_556 = 65530UL;
            int l_559 = 0x9CB84BD6L;
            unsigned long long l_637 = 3UL;
            int l_638 = 0x35E81A2DL;
            int l_639 = 5L;
            short l_642 = 2L;
            long long l_651 = 8L;
            g_156 = (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(p_33, 4)), 4)), (((g_250 || (l_435 = (3L <= (safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(g_156, l_527)), 3))))) | func_101((safe_sub_func_int64_t_s_s((g_530 |= g_68), 0x6790BB88B1FAFBDBLL)), (0x8AL >= ((safe_sub_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((g_114 |= (func_101(p_32, g_127, p_34, p_32) ^ l_527)) & l_535), l_536)), l_527)) && 0xC1L)), g_249, l_537)) > p_34))), g_71));
            if (((safe_lshift_func_uint8_t_u_u((l_559 = (l_558 = (p_32 > (2UL >= (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s((((safe_mod_func_uint8_t_u_u(l_548, (safe_unary_minus_func_int64_t_s(((g_215 = (g_144 && (g_155 && l_435))) != func_77((((safe_lshift_func_uint8_t_u_u((--g_293), l_435)) == (safe_mod_func_int8_t_s_s((l_535 || g_114), 0xDAL))) > l_556), g_114)))))) ^ g_133) | g_44), l_557)), 9)), p_33)))))), g_357)) > g_291))
            {
                unsigned short l_576 = 65535UL;
                g_156 = (-1L);
                l_558 = (1UL || (safe_add_func_int64_t_s_s((-6L), 0x2B4C903916DEC09CLL)));
                if (p_34)
                {
                    g_156 = (l_558 = (0x4C5DL >= (p_33 <= 1L)));
                }
                else
                {
                    int l_564 = 0x5F1730C2L;
                    int l_565 = (-1L);
                    if (l_507)
                    {
                        int l_575 = 0x2BF6DFB7L;
                        l_435 = (safe_lshift_func_int8_t_s_u((-2L), (l_433 == 0xD324CEFCL)));
                        l_565 = l_564;
                        l_559 = ((0xCFF0529FBBD50D57LL > (((((((~p_34) != (((safe_mod_func_int32_t_s_s(((safe_add_func_int32_t_s_s(0x325A87A4L, p_34)) & g_470), l_570)) ^ (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u(g_250, (g_249 >= 0x43513267L))) | l_527), 5))) ^ l_564)) != l_575) != 0xFDL) || (-8L)) && g_155) <= p_31)) || g_13);
                    }
                    else
                    {
                        long long l_577 = (-6L);
                        l_576 = p_31;
                        l_577 ^= p_32;
                        l_565 = (g_156 |= (((0x4E524CA4L <= 0L) && (((safe_lshift_func_uint16_t_u_s(((0L < (p_31 >= l_580)) && l_558), 6)) && 0xCD5FL) ^ p_35)) == ((safe_mod_func_int16_t_s_s((safe_sub_func_int64_t_s_s((g_133 != 0x00L), l_514)), 0x5F58L)) || 1L)));
                    }
                    for (l_437 = 0; (l_437 == 27); l_437 = safe_add_func_uint8_t_u_u(l_437, 7))
                    {
                        unsigned char l_591 = 0x52L;
                        int l_604 = 0x5660AEF3L;
                        l_604 = (safe_lshift_func_int8_t_s_u(l_565, (safe_rshift_func_int16_t_s_u(func_37((l_591 |= (-7L)), (safe_add_func_int16_t_s_s((0xB863L != (safe_lshift_func_int16_t_s_s(((func_77((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((1L && ((~g_122) == ((4294967293UL == (g_133 && g_215)) & (safe_rshift_func_uint8_t_u_u(func_82((safe_sub_func_int8_t_s_s(p_34, l_507)), l_604, p_34), p_32))))), 3)), (-4L))), p_31) == 1L) && l_557), 11))), l_507)), l_604, p_33), g_438))));
                        g_156 = g_117;
                        l_604 = p_33;
                        if (g_249)
                            continue;
                    }
                    return g_68;
                }
                return g_44;
            }
            else
            {
                unsigned short l_617 = 1UL;
                int l_618 = 1L;
                l_433 = (safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0x8EL, (safe_mod_func_uint8_t_u_u((+(safe_lshift_func_uint8_t_u_u(((l_618 &= ((0x19B264FBFB7129C4LL < p_32) | (l_558 = ((l_437 = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_617, 7)), l_548))) & (g_11 >= 0x7D8F961830DF20DALL))))) ^ (((l_557 <= (p_35 >= l_617)) | l_559) & 0x8FA9L)), p_34))), p_34)))), l_617));
                l_435 |= (-4L);
            }
            if ((safe_mod_func_int8_t_s_s(func_45((l_558 |= p_33)), g_44)))
            {
                for (l_434 = (-15); (l_434 == (-29)); l_434 = safe_sub_func_uint32_t_u_u(l_434, 3))
                {
                    short l_627 = 0xE65FL;
                    l_627 |= func_82((safe_lshift_func_uint16_t_u_s(0x6973L, ((g_215 >= ((-1L) && 0x0FL)) && 0xC69901819E1ECFAFLL))), (safe_lshift_func_int16_t_s_u(g_117, g_8)), (5L == ((g_217 &= g_250) || p_31)));
                }
            }
            else
            {
                unsigned l_634 = 0x268B26EDL;
                int l_640 = 0x7024C204L;
                if ((g_439 || ((safe_add_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(p_33, ((safe_add_func_int8_t_s_s(((l_636 |= (((l_559 = (l_536 != ((g_215 |= 0x3EL) && func_37((g_114 = (p_33 && g_117)), (((g_122 = (l_423 > g_216)) == (g_635 = (l_435 = l_634))) ^ l_634), l_436, g_133)))) && g_122) & g_8)) > (-3L)), p_33)) || 18446744073709551611UL))), l_637)) == 0xFA952450L)))
                {
                    short l_652 = (-8L);
                    ++g_643;
                    g_156 &= ((l_433 ^= ((safe_rshift_func_uint16_t_u_u((func_82((safe_add_func_uint32_t_u_u(1UL, (l_650 == (l_437 | l_651)))), l_640, l_652) > ((((safe_unary_minus_func_uint64_t_u(0UL)) < (l_444 & (-4L))) || 0x0000E9CC1745E0F2LL) >= g_155)), g_291)) < 1L)) < g_8);
                }
                else
                {
                    for (g_13 = 6; (g_13 >= 37); g_13 = safe_add_func_int64_t_s_s(g_13, 7))
                    {
                        unsigned char l_666 = 255UL;
                        g_530 = g_127;
                        l_640 &= (((g_8 >= p_35) && p_35) >= 0xF3L);
                        l_641 = (l_436 = (safe_add_func_int16_t_s_s((g_156 || (((g_114 > (safe_mod_func_int32_t_s_s(((((safe_sub_func_uint8_t_u_u(((+g_293) ^ (safe_sub_func_int64_t_s_s(p_35, p_35))), (0x0FL == g_122))) >= (g_215 = (+(((((((safe_lshift_func_uint8_t_u_u(l_666, g_117)) || g_122) == l_454) == 0x522C8031L) >= p_31) <= p_33) == 0x834A6A2CB048DF69LL)))) == 9L) < (-7L)), l_637))) ^ g_252) >= p_35)), p_32)));
                        if (l_634)
                            continue;
                    }
                }
            }
            for (g_144 = (-30); (g_144 <= 37); g_144 = safe_add_func_int64_t_s_s(g_144, 8))
            {
                if (p_35)
                    break;
            }
        }
        else
        {
            unsigned long long l_669 = 1UL;
            l_669++;
            g_291 = (p_32 & p_33);
            l_641 |= (safe_add_func_uint64_t_u_u(g_114, (p_33 = g_357)));
            g_156 = p_34;
        }
        for (g_156 = (-18); (g_156 < (-3)); g_156 = safe_add_func_uint16_t_u_u(g_156, 3))
        {
            int l_688 = (-1L);
            char l_691 = 0x98L;
            int l_727 = 0xAB019592L;
            int l_729 = 0x60C82A03L;
            l_558 = (((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(5UL, 0x228BDBAAL)) ^ (((((l_527 <= (safe_sub_func_uint8_t_u_u((p_34 == (safe_rshift_func_uint8_t_u_s(p_34, 3))), (func_77(p_32, (safe_lshift_func_uint16_t_u_u(func_77(g_438, l_444), l_688))) == g_439)))) >= p_32) != 0x35B443248C920353LL) & 0UL) && p_32)), 5)) <= g_438), g_8)) | p_35) == g_156);
            if (p_33)
            {
                if (p_31)
                    break;
                l_641 = l_433;
                return g_11;
            }
            else
            {
                unsigned long long l_692 = 18446744073709551606UL;
                for (l_444 = 0; (l_444 == (-30)); l_444 = safe_sub_func_int8_t_s_s(l_444, 8))
                {
                    l_692 = l_691;
                }
                for (l_641 = 18; (l_641 == 23); ++l_641)
                {
                    l_558 = g_114;
                }
                for (l_507 = 0; (l_507 < 10); l_507++)
                {
                    short l_697 = 0L;
                    int l_698 = 0L;
                    int l_705 = 0L;
                    int l_706 = 0x00450D95L;
                    ++g_699;
                    g_702++;
                    g_709--;
                }
            }
            for (l_436 = 12; (l_436 == 22); l_436 = safe_add_func_uint64_t_u_u(l_436, 7))
            {
                unsigned l_720 = 4294967291UL;
                int l_725 = 1L;
                int l_728 = 0xF36FD3EFL;
                int l_730 = 1L;
                if (l_536)
                    break;
                g_714 = (g_714 ^ ((safe_unary_minus_func_uint8_t_u((l_725 = func_77((safe_add_func_int16_t_s_s(((l_688 = (safe_mod_func_uint32_t_u_u(((18446744073709551609UL || 0UL) != 5L), (p_35 & (l_720 <= (l_437 = (safe_mod_func_int16_t_s_s(func_54(g_144, (g_155 = ((-8L) && (!(safe_mod_func_int16_t_s_s(3L, l_720))))), l_650), p_32)))))))) >= l_720), g_216)), p_31)))) <= l_527));
                g_733--;
            }
        }
        g_530 = (g_708 >= 0x421FL);
    }
    return l_434;
}







static unsigned long long func_37(short p_38, unsigned short p_39, const char p_40, short p_41)
{
    unsigned long long l_47 = 18446744073709551607UL;
    int l_50 = 0L;
    const short l_53 = 0xBBBFL;
    unsigned l_118 = 0x7543214EL;
    char l_128 = 0L;
    int l_161 = 0L;
    int l_210 = 0L;
    long long l_292 = 0xEC71F631836CB451LL;
    unsigned l_369 = 0x81889F29L;
    const short l_387 = 0xD15CL;
    unsigned l_401 = 0xE7988940L;
    l_50 = func_45(l_47);
    if (((l_53 < g_13) & (l_53 < (func_54((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_40, l_53)), p_41)), p_38, ((func_45((4294967295UL == ((l_50 = (safe_sub_func_int16_t_s_s(0L, p_40))) <= l_47))) > g_11) >= g_44)) < g_8))))
    {
        unsigned long long l_74 = 0x2FEE613944077424LL;
        l_74 = p_40;
        l_50 &= (l_118 = (safe_rshift_func_uint8_t_u_s(func_77(l_74, g_8), 3)));
    }
    else
    {
        unsigned short l_148 = 1UL;
        int l_159 = 0x2EE097E4L;
        unsigned short l_185 = 0UL;
        int l_214 = 3L;
        short l_251 = 0xDACDL;
        int l_319 = (-9L);
        int l_411 = 0x2AB6070AL;
        for (g_114 = (-27); (g_114 <= 17); g_114++)
        {
            int l_123 = 0x02FCEF8CL;
            int l_129 = 0x28C89D87L;
            int l_130 = 0x6432604EL;
            int l_131 = 0x11037DE7L;
            char l_132 = 0xD9L;
            int l_147 = (-1L);
            int l_237 = (-1L);
            if (g_71)
            {
                int l_121 = (-2L);
                int l_124 = 0x350235B3L;
                l_124 = func_82((g_122 = func_101(g_71, p_39, func_45(p_40), l_121)), g_44, l_123);
                g_127 = ((safe_lshift_func_int16_t_s_s(l_123, 7)) == p_40);
                ++g_133;
                l_148 = (safe_add_func_uint32_t_u_u(((!g_117) != ((((safe_add_func_int32_t_s_s(((1UL && (safe_sub_func_uint16_t_u_u((8L != (((g_144 &= (safe_sub_func_int8_t_s_s(0x67L, 1L))) | func_101((safe_rshift_func_uint8_t_u_s(func_45((g_13 != (p_39 = g_44))), 3)), g_71, l_50, l_147)) >= g_13)), p_40))) || l_132), l_131)) != 9UL) || 1L) != 0x791AL)), l_123));
            }
            else
            {
                unsigned l_160 = 1UL;
                unsigned l_162 = 9UL;
                int l_179 = 0x90600712L;
                l_162 |= (safe_add_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u(65535UL, ((safe_mod_func_uint8_t_u_u((0x82FEEDE604A327E9LL <= ((g_155 = p_40) && func_54(g_156, (((l_50 = (safe_sub_func_int64_t_s_s(func_82(p_40, (g_122 ^ ((l_159 = g_117) ^ func_54(p_39, (func_45((g_127 || g_133)) >= g_8), l_160))), l_118), g_117))) || g_122) & g_133), l_161))), l_148)) || g_68))) > g_13), g_114));
                if ((g_13 || (p_39 != p_38)))
                {
                    short l_180 = 1L;
                    l_161 = ((((g_44 == func_54(l_53, ((l_131 >= ((safe_sub_func_int8_t_s_s((g_11 || p_39), (l_53 & ((l_159 == (!(safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((p_40 | g_11), 7)), 0x21912DA4L)))) != l_132)))) & g_71)) && l_129), g_71)) >= p_39) > 0UL) > g_13);
                    l_185 = ((l_161 = (safe_sub_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u((!((l_179 = (safe_lshift_func_uint16_t_u_u(p_38, ((++g_155) == (g_68 = (safe_lshift_func_int8_t_s_s(g_144, 2))))))) || (l_159 < func_45(l_180)))), (g_8 && (safe_rshift_func_uint16_t_u_s(g_13, (safe_add_func_uint32_t_u_u((p_40 == (!g_144)), p_41))))))) == 0x0286ECF4L), l_148))) & 1UL);
                    l_130 = p_38;
                    for (l_179 = 0; (l_179 >= 21); ++l_179)
                    {
                        l_50 = ((+p_39) == 0xE1L);
                        if (g_71)
                            break;
                        if (p_38)
                            break;
                    }
                }
                else
                {
                    unsigned l_202 = 18446744073709551615UL;
                    int l_205 = 0x9DF71F77L;
                    l_179 = (~(g_156 = (!g_13)));
                    if (p_40)
                        break;
                    if (l_123)
                        break;
                    l_159 = (l_160 || (func_54((safe_mod_func_uint64_t_u_u(p_39, g_127)), (safe_lshift_func_uint16_t_u_s(((func_54((l_130 |= g_156), func_101(p_40, (p_38 || l_162), func_54((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((g_117--), (((((safe_lshift_func_int16_t_s_u((p_41 = ((safe_add_func_int16_t_s_s(((l_202--) != (l_128 < 0x41L)), g_114)) | 0UL)), g_114)) == l_205) != p_38) ^ g_156) ^ 2L))) | 65535UL), g_68)), g_133, g_127), l_128), g_122) >= l_205) > 0x7FL), l_128)), l_205) >= g_127));
                }
            }
            if (p_40)
                continue;
            if ((safe_sub_func_int64_t_s_s(g_144, (safe_sub_func_int8_t_s_s(l_210, l_131)))))
            {
                int l_213 = 8L;
                l_214 &= ((safe_mod_func_int8_t_s_s(0x87L, (l_159 &= l_213))) != l_213);
                if (g_71)
                    break;
                l_50 = g_68;
                g_217--;
            }
            else
            {
                short l_230 = 0x8370L;
                g_216 |= ((safe_rshift_func_uint16_t_u_u((g_13++), 5)) & (safe_add_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(func_82(g_114, g_114, p_38), (safe_rshift_func_uint16_t_u_s((((((l_230 | g_144) & g_156) > (~(l_161 = ((p_39 && ((l_214 <= g_11) == l_159)) & g_155)))) | l_210) != l_147), 6)))) && g_68), 0x83L)));
                l_214 |= func_82((safe_mod_func_uint32_t_u_u(((0x9E17L <= 9UL) <= g_44), (safe_lshift_func_uint8_t_u_u((((0UL || func_54(((safe_add_func_uint32_t_u_u(l_237, (safe_add_func_int64_t_s_s(0x51713180A2A8B54CLL, 0xA9858F36B0CAA3BFLL)))) && 0x98EEL), (~(0x2BA2822EL | 3L)), g_114)) & p_41) <= l_47), 5)))), g_114, g_155);
            }
        }
        if ((4294967295UL ^ (safe_unary_minus_func_int32_t_s((safe_rshift_func_int16_t_s_u((g_252 ^= (l_210 ^= ((safe_lshift_func_int16_t_s_u(((((g_44 == (l_159 <= (g_44 ^ 0x9CL))) < ((safe_sub_func_uint32_t_u_u((g_249 = (g_122--)), l_185)) | func_77((((g_250 = p_39) == g_11) >= g_217), p_40))) <= l_159) == g_216), g_155)) || l_251))), 11))))))
        {
            unsigned long long l_253 = 0x7EB79DC5B5BA2BE6LL;
            int l_254 = 0x2FE86CE7L;
            long long l_320 = 0L;
            int l_391 = 0L;
            unsigned short l_399 = 65535UL;
            l_254 |= ((g_156 = (l_118 & (l_253 |= (p_40 | l_251)))) || l_214);
            for (g_71 = 24; (g_71 != 2); --g_71)
            {
                int l_257 = 0xD56B477EL;
                int l_269 = (-8L);
                unsigned l_273 = 1UL;
                const int l_304 = 0xC50ED043L;
                int l_334 = 0x65698CE9L;
                unsigned short l_335 = 0UL;
                short l_358 = 0x0FA1L;
                unsigned l_409 = 3UL;
                if (((0x00L != l_185) < l_253))
                {
                    l_257 = l_210;
                    for (g_117 = 0; (g_117 <= 43); g_117 = safe_add_func_uint32_t_u_u(g_117, 5))
                    {
                        unsigned long long l_262 = 18446744073709551609UL;
                        g_216 = (safe_lshift_func_uint16_t_u_s((l_262 > g_252), (p_40 < 0xDCF5L)));
                    }
                    g_216 = l_257;
                }
                else
                {
                    int l_265 = 0L;
                    int l_266 = 0L;
                    if ((func_101(p_39, (safe_sub_func_int8_t_s_s(func_101(p_39, func_82(g_114, (g_44 = l_265), (l_266 |= g_249)), g_215, ((l_254 = p_39) >= (safe_mod_func_int32_t_s_s(0x32DC8EBCL, p_39)))), 0xEBL)), p_40, l_265) || g_11))
                    {
                        unsigned l_270 = 0xB2BC63C8L;
                        ++l_270;
                    }
                    else
                    {
                        char l_276 = 0x52L;
                        int l_289 = 0x8685255FL;
                        int l_290 = 0L;
                        g_156 = l_273;
                        g_216 = (safe_mod_func_uint8_t_u_u(((l_276 &= p_40) == ((safe_mod_func_int8_t_s_s(p_40, (l_210 = (safe_rshift_func_uint8_t_u_u(l_148, (safe_add_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u((((g_13 = (g_114 ^ (g_249 == (p_41 == (safe_lshift_func_int8_t_s_u(p_39, p_41)))))) >= func_82((((func_82((l_185 | 0x702CL), p_38, p_39) && l_50) > 0UL) < 65533UL), l_159, g_44)) & 4294967295UL), 0xF0AF18DEL)) | g_155), l_257))))))) > g_155)), l_265));
                        ++g_293;
                        l_50 &= (+(safe_lshift_func_uint16_t_u_s((((((func_101(p_38, ((safe_lshift_func_int8_t_s_u((g_252 ^= ((safe_mod_func_uint32_t_u_u(func_45(g_215), g_127)) < func_45(l_276))), (safe_rshift_func_uint16_t_u_u(0xCD3DL, 3)))) == ((-1L) | g_250)), l_266, p_40) < g_44) & l_254) ^ g_217) & l_304) & 0x13DEL), 1)));
                    }
                    if (func_45(func_82((l_159 = (safe_rshift_func_uint16_t_u_s((((((p_40 < g_68) <= (safe_mod_func_int64_t_s_s((safe_mod_func_int64_t_s_s(p_40, 18446744073709551612UL)), l_253))) | (func_45(p_40) < ((!((l_269 |= (safe_rshift_func_int16_t_s_u(((0x9CE8L <= l_266) | 65527UL), 8))) <= 4294967288UL)) <= 0xB6507D8DL))) != p_40) & g_127), l_159))), g_44, p_39)))
                    {
                        unsigned long long l_313 = 0x4FC0F73C5B25C9D2LL;
                        l_313--;
                        l_214 &= ((l_269 = (g_249 = (safe_unary_minus_func_int64_t_s((l_319 ^= (l_257 = (safe_add_func_uint16_t_u_u(g_252, l_313)))))))) & l_266);
                    }
                    else
                    {
                        l_320 = g_215;
                        g_216 = g_293;
                    }
                    l_257 ^= l_266;
                }
                for (g_215 = (-20); (g_215 >= (-15)); g_215++)
                {
                    unsigned l_323 = 18446744073709551613UL;
                    l_323 = 0x6EC37419L;
                    l_254 ^= l_320;
                    if (l_304)
                        break;
                }
                if (((safe_mod_func_int64_t_s_s(g_13, func_82(((safe_lshift_func_uint16_t_u_u((g_249 & (safe_lshift_func_int16_t_s_u(((g_127 | ((func_45(((((((func_101(p_38, (((0x5208B081L && (l_214 = 0L)) >= ((-1L) > ((g_117 < ((g_293--) || ((safe_mod_func_int32_t_s_s(1L, g_215)) & p_39))) && 3UL))) == 0x32E3CCA1BA179B74LL), l_334, g_156) ^ l_335) | 0x22F686063F796CF9LL) == 1UL) > l_254) ^ 0x99L) ^ l_319)) && g_11) < l_320)) && 0x45L), 5))), 12)) ^ p_38), l_185, g_250))) || p_38))
                {
                    unsigned l_342 = 0xF3601600L;
                    int l_359 = 0x714B23E7L;
                    int l_360 = 0x589F06A3L;
                    unsigned l_374 = 1UL;
                    l_257 &= (g_44 > (((safe_lshift_func_uint8_t_u_s(l_319, 6)) == (l_214 = (func_101(g_68, p_38, p_40, p_41) < 0x88L))) ^ (((safe_add_func_int8_t_s_s((-7L), l_342)) ^ g_144) != p_39)));
                    g_216 = (l_360 = (((1L == (safe_mod_func_uint32_t_u_u(p_38, (l_359 = ((-2L) | (((safe_sub_func_uint64_t_u_u((l_292 || (g_250 |= (safe_rshift_func_int16_t_s_s(p_41, (l_50 &= (safe_rshift_func_int16_t_s_s((!(safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(g_122, func_101((safe_rshift_func_int16_t_s_u(l_257, (g_215 == (g_357 ^= 0x14107A23L)))), l_320, g_291, l_269))), 0xCF11F39BL))), l_335))))))), 0L)) != l_254) | l_358)))))) >= (-9L)) ^ p_39));
                    for (l_253 = 0; (l_253 == 32); l_253 = safe_add_func_uint64_t_u_u(l_253, 7))
                    {
                        l_374 = (g_71 <= (g_117 >= (l_342 ^ (safe_mod_func_int64_t_s_s(((g_44 < 0x9657L) <= (((safe_add_func_int32_t_s_s(((--g_293) <= (g_249 & 0x34144847L)), (--l_369))) || (g_114 = func_45((safe_sub_func_uint16_t_u_u(((l_118 | p_39) <= p_41), p_40))))) && l_50)), 0x0C0132F4C1B1E60FLL)))));
                    }
                    if (((safe_add_func_int32_t_s_s(p_41, (p_38 > ((g_250 = l_342) && 0xE08E547FC5B3CAC8LL)))) | (g_44 || func_82(l_320, g_71, (safe_mod_func_int16_t_s_s((5L >= ((p_39 = (safe_unary_minus_func_uint16_t_u((~p_40)))) ^ (-5L))), 1UL))))))
                    {
                        unsigned long long l_380 = 18446744073709551608UL;
                        --l_380;
                    }
                    else
                    {
                        int l_388 = 0x8459B3ABL;
                        l_388 = ((safe_mod_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u((0L && g_68), l_387)) >= ((l_334 = func_101(func_82(g_249, l_185, (g_114 != (func_45(p_39) != p_39))), l_360, g_127, p_39)) > 0x0B14L)) ^ 0x69FB510DL), 1L)) > 0x1FB2L);
                    }
                }
                else
                {
                    long long l_398 = 0x811D19BCE1EA2BC0LL;
                    for (l_254 = 20; (l_254 < 26); l_254++)
                    {
                        short l_400 = 0x4741L;
                        l_159 ^= ((p_39 = (l_391 = 0x0270L)) >= func_101((0x4DF6L >= (l_161 = ((p_41 ^ (l_400 |= (safe_mod_func_uint16_t_u_u(func_101(g_122, g_71, g_216, (l_50 |= (safe_sub_func_uint32_t_u_u(func_82((safe_lshift_func_int8_t_s_s(p_41, l_398)), l_399, p_40), p_41)))), p_40)))) != p_41))), l_401, g_293, l_398));
                        g_291 = l_214;
                    }
                    for (l_358 = 28; (l_358 > (-8)); l_358 = safe_sub_func_uint32_t_u_u(l_358, 1))
                    {
                        int l_404 = 1L;
                        return l_404;
                    }
                    g_216 |= p_40;
                }
                g_156 ^= ((~0x95EADD2016078CE7LL) | ((safe_lshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s((0L >= l_409), (3UL < 0xC6F7L))) ^ (g_13 > l_399)), 2)) == ((l_334 |= (g_122 = (65529UL <= func_45(l_128)))) || p_40)));
            }
        }
        else
        {
            unsigned short l_410 = 65531UL;
            l_410 = 0x757E26C6L;
            l_411 |= (func_45(g_216) && (g_133 >= (0x43528B4A1F68E581LL | g_293)));
            g_291 = (-1L);
        }
    }
    l_50 &= ((g_133 && (((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(g_249, (65535UL <= ((0xCEB260C8L ^ (safe_lshift_func_int16_t_s_u(((func_54(g_249, l_118, p_41) | (p_38 != g_291)) > g_144), 1))) ^ l_161)))) ^ g_156), g_127)) | 0x8341A13487E794C5LL) | g_291)) | l_128);
    return g_8;
}







static const int func_45(long long p_46)
{
    unsigned char l_48 = 0xE2L;
    int l_49 = 0xD14B4322L;
    l_49 = l_48;
    return l_48;
}







static unsigned short func_54(char p_55, unsigned long long p_56, unsigned p_57)
{
    char l_66 = 0x04L;
    int l_69 = 1L;
    int l_70 = (-6L);
    for (p_55 = 28; (p_55 < 1); --p_55)
    {
        int l_67 = 0x098B3027L;
        g_68 = (l_67 = l_66);
    }
    g_71--;
    return g_44;
}







static unsigned char func_77(unsigned p_78, unsigned long long p_79)
{
    unsigned l_98 = 1UL;
    int l_106 = 0x2E800BCFL;
    int l_109 = 1L;
    int l_112 = 0xE6652566L;
    short l_113 = (-1L);
    g_117 = ((safe_mod_func_int64_t_s_s((~func_82((g_11 < (g_114 |= (safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(func_54(g_44, g_68, (l_112 &= (safe_lshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u(l_98, (safe_lshift_func_int8_t_s_u(func_101(p_79, (l_106 = l_98), l_98, (func_45((l_109 = (safe_mod_func_int32_t_s_s(p_78, l_98)))) != l_98)), 0)))) < p_79), 9)))), 65535UL)) <= l_98), l_113)), g_44)) | l_113), l_98)))), g_8, g_11)), 8L)) && g_13);
    return p_78;
}







static long long func_82(const int p_83, short p_84, long long p_85)
{
    unsigned short l_115 = 0x236CL;
    char l_116 = 0xB8L;
    l_115 = p_84;
    return l_116;
}







static char func_101(const char p_102, char p_103, long long p_104, long long p_105)
{
    unsigned char l_110 = 0x09L;
    int l_111 = (-1L);
    l_111 = ((0x6C839C72380CEB71LL ^ (l_110 | 0xFF67138D59A4365CLL)) >= 0xA62E52AB26C3A74FLL);
    return g_13;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    transparent_crc(g_699, "g_699", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    transparent_crc(g_709, "g_709", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_782, "g_782", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
