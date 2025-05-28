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



static const unsigned g_21 = 0UL;
static unsigned char g_32 = 1UL;
static int g_89 = (-1L);
static short g_92 = 0x65C9L;
static long long g_94 = 0xEB9534DD9CEC61C9LL;
static unsigned g_113 = 0UL;
static char g_139 = 0x8BL;
static unsigned short g_144 = 0xD1A8L;
static unsigned char *g_158 = &g_32;
static unsigned char **g_157 = &g_158;
static short g_179 = 8L;
static char g_205 = 9L;
static unsigned long long g_209 = 0x4490071A0B9A4A3ELL;
static int *g_220 = &g_89;
static int * const *g_219 = &g_220;
static unsigned char g_264 = 251UL;
static unsigned g_272 = 0x05E25760L;
static unsigned g_294 = 18446744073709551607UL;
static unsigned long long g_301 = 0xC8F806F3831CB3A6LL;
static unsigned char g_382 = 0x5AL;
static int g_401 = 1L;
static int g_428 = (-2L);
static unsigned short g_436 = 0xD4E5L;
static short g_500 = 0x67FCL;
static int g_505 = 0x35149B1DL;
static unsigned long long g_633 = 0x5CFD7D5077F82278LL;
static unsigned short g_663 = 0xA222L;
static unsigned long long g_702 = 0x39FA56026ED60B81LL;
static char g_784 = (-7L);
static int g_794 = 0xA49117A3L;
static unsigned long long g_817 = 18446744073709551612UL;
static unsigned long long *g_834 = &g_633;
static unsigned long long **g_833 = &g_834;
static long long **g_841 = (void*)0;
static long long g_871 = 0x55A05A79E336DD8FLL;
static long long g_872 = 0L;
static long long g_876 = 0L;
static unsigned short g_880 = 0x3342L;
static unsigned g_926 = 0UL;
static unsigned long long g_1018 = 0UL;
static int g_1119 = 0xFA9F35B0L;
static unsigned long long g_1120 = 9UL;
static unsigned g_1167 = 0UL;
static int g_1233 = 0xA8AD1E79L;
static unsigned long long g_1234 = 0x1D036D66DE8CB71DLL;
static unsigned **g_1350 = (void*)0;
static unsigned g_1451 = 0UL;
static int g_1591 = 0x4C19BA61L;
static int g_1606 = 0x8C6EAD5CL;
static char g_1640 = 0x35L;
static unsigned g_1646 = 4294967288UL;
static long long g_1755 = 7L;
static long long g_1764 = 0x3EA0786E204861F1LL;
static unsigned short g_1789 = 0x81A3L;
static short g_1873 = 0x0CE7L;
static int g_1897 = 0x913E1B20L;
static const int *g_1986 = &g_505;
static const int **g_1985 = &g_1986;
static const int ***g_1984 = &g_1985;
static char g_1988 = (-5L);
static int g_2073 = 0x12ABC891L;
static int g_2074 = 1L;
static int g_2076 = (-1L);
static unsigned char g_2081 = 2UL;
static unsigned g_2115 = 0x9D6A4CD3L;
static unsigned *g_2156 = (void*)0;
static unsigned **g_2155 = &g_2156;
static long long *g_2162 = (void*)0;
static long long **g_2161 = &g_2162;
static long long g_2332 = 0xBDC66154C454F5D8LL;
static unsigned g_2333 = 0xBAB5272FL;
static unsigned char g_2336 = 0x58L;
static long long g_2339 = 0L;
static unsigned long long g_2340 = 18446744073709551613UL;
static int g_2774 = 0x789846C7L;
static unsigned g_2775 = 0UL;
static unsigned long long g_2860 = 0x0CBCD48875AEA3E1LL;
static int *g_2873 = &g_2074;
static unsigned short g_2885 = 0x335DL;
static unsigned long long g_2903 = 1UL;
static unsigned g_2983 = 2UL;
static unsigned g_3158 = 0x4FEDDC82L;
static const int g_3164 = 0x8E28DB35L;
static unsigned short g_3254 = 0xB4B9L;
static int g_3397 = 0x95878E29L;
static unsigned long long g_3400 = 18446744073709551608UL;
static int g_3524 = 0L;
static int g_3532 = 0x93BCE84FL;
static int g_3538 = 0x6C889182L;
static unsigned char g_3545 = 4UL;
static int g_3653 = (-1L);
static int g_3667 = 6L;
static unsigned g_3786 = 0xE82FEA25L;



static unsigned short func_1(void);
static int func_2(int p_3);
static unsigned char func_39(const unsigned char * p_40, unsigned short p_41, unsigned char * p_42);
static char func_43(unsigned char * p_44, int p_45, int p_46, int p_47);
static unsigned char * func_48(long long p_49, unsigned char * p_50, unsigned char p_51, unsigned char * p_52, unsigned long long p_53);
static long long func_55(short p_56, short p_57, int p_58, unsigned char * p_59, const unsigned char p_60);
static unsigned char * func_63(char p_64);
static char func_65(unsigned char * const p_66, char p_67);
static unsigned char * const func_68(unsigned long long p_69, long long p_70, unsigned char * p_71, unsigned char * p_72, unsigned p_73);
static unsigned long long func_76(unsigned char * p_77, unsigned char * p_78, unsigned char * p_79);
static unsigned short func_1(void)
{
    unsigned long long l_16 = 0xCED8F6EFBA1A4D63LL;
    unsigned char l_30 = 251UL;
    unsigned char *l_31 = &g_32;
    unsigned l_33 = 0UL;
    int l_3701 = (-10L);
    int l_3705 = 4L;
    int l_3721 = (-4L);
    int l_3768 = (-5L);
    int l_3782 = (-1L);
    unsigned l_3789 = 0UL;
    const unsigned long long l_3796 = 0UL;
    unsigned l_3797 = 4294967293UL;
    long long l_3798 = (-1L);
    unsigned long long l_3801 = 4UL;
    int *l_3804 = (void*)0;
    int **l_3805 = &g_220;
    g_3653 |= func_2((safe_div_func_uint64_t_u_u((!(safe_div_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((*l_31) ^= (((safe_mul_func_int16_t_s_s((l_16 > (-4L)), (safe_mod_func_int16_t_s_s(l_16, l_16)))) != ((safe_sub_func_int16_t_s_s(g_21, 0xB2C5L)) != g_21)) | (safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((l_16 && (5UL <= g_21)) || l_30), l_30)), 0xF7A9D2E8L)), 1)))), 0UL)), 0L)), l_33))), g_21)));


    ;

    for (g_205 = 0; (g_205 > (-29)); g_205--)
    {
        unsigned l_3677 = 18446744073709551610UL;
        int l_3678 = 0x26CB758EL;
        unsigned char *l_3679 = &g_264;
        unsigned char **l_3680 = (void*)0;
        unsigned char **l_3681 = &l_3679;
        int l_3743 = 0xE8AB35C9L;
        int l_3750 = (-10L);
        int l_3751 = 9L;
        int l_3761 = 0xA283AADDL;
        (**g_219) = (safe_mod_func_uint32_t_u_u(g_3667, 0xF0ECE76CL));
        for (g_505 = 0; (g_505 >= 6); ++g_505)
        {
            int *l_3684 = &g_89;
            int *l_3685 = &g_2074;
            int *l_3686 = &g_794;
            int *l_3687 = &g_3532;
            int *l_3688 = &g_3653;
            int *l_3689 = &g_3667;
            int *l_3690 = &g_1606;
            int *l_3691 = &g_428;
            int *l_3692 = &g_3532;
            int *l_3693 = (void*)0;
            int *l_3694 = &g_1606;
            int *l_3695 = &g_1233;
            int *l_3696 = (void*)0;
            int *l_3697 = &g_3397;
            int *l_3698 = &g_1897;
            int *l_3699 = &g_2074;
            int *l_3700 = &g_401;
            int *l_3702 = (void*)0;
            int *l_3703 = &g_1233;
            int *l_3704 = &g_3397;
            int *l_3706 = &g_3653;
            int *l_3707 = &g_2074;
            int *l_3708 = &l_3705;
            int *l_3709 = &g_1233;
            int *l_3710 = &l_3701;
            int *l_3711 = (void*)0;
            int *l_3712 = &g_401;
            int l_3713 = 0x7606BADDL;
            int *l_3714 = &g_3667;
            int *l_3715 = &l_3713;
            int *l_3716 = &g_3532;
            int *l_3717 = &g_3397;
            int *l_3718 = &g_3667;
            int *l_3719 = &g_794;
            int *l_3720 = &g_3667;
            int *l_3722 = &g_3532;
            int *l_3723 = (void*)0;
            int *l_3724 = &g_401;
            int *l_3725 = &l_3701;
            int *l_3726 = &g_3532;
            int *l_3727 = (void*)0;
            int *l_3728 = &g_3397;
            int *l_3729 = (void*)0;
            int *l_3730 = &g_794;
            int *l_3731 = &g_1897;
            int *l_3732 = &g_401;
            int *l_3733 = &g_2074;
            int *l_3734 = &g_3532;
            int *l_3735 = &g_401;
            int *l_3736 = &l_3721;
            int *l_3737 = &l_3701;
            int *l_3738 = &l_3701;
            int *l_3739 = (void*)0;
            int *l_3740 = (void*)0;
            int *l_3741 = &l_3705;
            int *l_3742 = &g_1606;
            int *l_3744 = &g_428;
            int l_3745 = 0x7F1D2D02L;
            int *l_3746 = &g_3653;
            int *l_3747 = &l_3701;
            int *l_3748 = &g_3653;
            int *l_3749 = &g_2074;
            int *l_3752 = &g_89;
            int l_3753 = (-1L);
            int *l_3754 = &g_3532;
            int *l_3755 = &l_3750;
            int *l_3756 = &l_3743;
            int *l_3757 = &l_3713;
            int *l_3758 = &g_1897;
            int *l_3759 = &g_428;
            int *l_3760 = &g_3653;
            int *l_3762 = (void*)0;
            int *l_3763 = &g_2074;
            int *l_3764 = &g_3532;
            int *l_3765 = &l_3753;
            int *l_3766 = &g_89;
            int l_3767 = (-2L);
            int *l_3769 = &g_794;
            int *l_3770 = (void*)0;
            int *l_3771 = &g_1233;
            int *l_3772 = &g_3653;
            int *l_3773 = (void*)0;
            int *l_3774 = &l_3713;
            int *l_3775 = &g_3653;
            int *l_3776 = &l_3701;
            int *l_3777 = &g_1233;
            int *l_3778 = &g_3397;
            int *l_3779 = &l_3767;
            int *l_3780 = &g_3653;
            int *l_3781 = &g_2074;
            int *l_3783 = (void*)0;
            int l_3784 = 6L;
            int *l_3785 = &g_401;
            unsigned char l_3792 = 254UL;
            int *l_3795 = &g_2076;
            g_3786--;
            if (((((*g_834) > l_3789) , ((safe_add_func_int8_t_s_s((((*l_3679) = l_16) & l_3751), ((l_3743 > l_3792) | func_55((func_43(&g_3545, l_30, ((*l_3795) = ((safe_div_func_uint8_t_u_u(func_43(func_48(((void*)0 == &g_219), &l_3792, (*l_3759), &g_2081, (*g_834)), g_1451, l_3751, (*l_3720)), 0x4FL)) || g_2074)), l_3677) || 0x071CL), g_92, (**g_1985), &l_3792, l_3796)))) && l_3705)) == 4294967289UL))
            {
                int l_3799 = 0xAD46E6D7L;
                unsigned char *l_3800 = &g_2336;
                int **l_3802 = &l_3763;
                (*l_3716) |= ((0L < l_3797) , func_39(func_48(l_3677, func_48(l_3798, func_48((((l_3799 , 0UL) , l_3677) < l_3797), &l_30, (*g_158), l_3800, (**g_833)), l_3801, &l_3792, (*l_3748)), l_3678, &l_3792, (*g_834)), g_1167, &g_2336));
                (*l_3802) = &l_3745;

                ;
                if (l_3751)
                    break;
            }
            else
            {
                int **l_3803 = &l_3710;
                (*l_3777) = ((*l_3779) &= (*g_220));
                l_3760 = (void*)0;

                ;
                (*l_3803) = (*g_219);

                ;
            }

            ;
            ;
            ;
        }
    }
    (*l_3805) = l_3804;

    ;
    return g_139;
}







static int func_2(int p_3)
{
    unsigned l_38 = 18446744073709551610UL;
    int l_54 = 0xE07AD46DL;
    unsigned char *l_80 = &g_32;
    unsigned char *l_263 = &g_264;
    char l_265 = 0x36L;
    const unsigned char *l_1033 = (void*)0;
    int *l_1034 = &g_505;
    const unsigned l_1035 = 0x3774F531L;
    unsigned char *l_1052 = &g_264;
    long long * const l_1670 = &g_872;
    long long * const *l_1669 = &l_1670;
    long long * const **l_1668 = &l_1669;
    int l_1690 = 0xC699C2D7L;
    int l_1708 = 9L;
    int l_1714 = (-1L);
    int l_1716 = 0x6E1AA610L;
    int l_1737 = (-3L);
    int l_1741 = (-1L);
    int l_1742 = 0x80402C59L;
    int l_1752 = 1L;
    int l_1766 = 0x710053E7L;
    int l_1768 = 0xAEF94E57L;
    int l_1776 = 9L;
    char l_1792 = 0xAFL;
    unsigned long long l_1793 = 18446744073709551615UL;
    const short l_1815 = 0x1E3CL;
    unsigned short l_1816 = 65530UL;
    int *****l_1853 = (void*)0;
    long long l_1856 = 0xF048A6A9EDC5EB9DLL;
    unsigned char *l_1904 = &g_382;
    int l_2024 = 0x605F929EL;
    unsigned char *l_2152 = &g_32;
    long long l_2351 = 0x3ADA6ECA8D1CE08CLL;
    int l_2399 = 1L;
    unsigned short l_3021 = 65529UL;
    int l_3035 = (-6L);
    unsigned * const l_3038 = &g_272;
    unsigned * const *l_3037 = &l_3038;
    unsigned * const ** const l_3036 = &l_3037;
    long long l_3588 = 1L;
    if (((((g_32 || (safe_mul_func_int8_t_s_s((!(safe_rshift_func_uint16_t_u_u(1UL, 11))), l_38))) , func_39((func_43(func_48(((l_54 = g_21) >= func_55(l_38, p_3, ((*l_1034) = ((((safe_mod_func_int8_t_s_s((((((l_80 = (l_263 = func_63(func_65(func_68((safe_add_func_int32_t_s_s(0x5D3384F7L, g_21)), ((!func_76(l_80, &g_32, l_80)) | l_38), l_263, l_263, p_3), l_265)))) != l_1033) , l_80) == l_1033) > p_3), l_38)) | g_876) != 0xCDL) == 250UL)), &g_264, l_1035)), &g_264, p_3, l_1052, l_1035), p_3, p_3, g_21) , &g_264), g_1591, l_1052)) ^ g_1451) , (-1L)))
    {
        const unsigned char l_1654 = 1UL;
        int **l_1655 = &g_220;
        int **l_1656 = (void*)0;
        int *l_1658 = &g_428;
        int **l_1657 = &l_1658;
        unsigned char * const l_1667 = (void*)0;
        short *l_1675 = &g_500;
        unsigned *l_1677 = &l_38;
        unsigned **l_1676 = &l_1677;
        unsigned char *l_1678 = &g_32;
        int *l_1679 = &g_89;
        int *l_1680 = &g_1606;
        int *l_1681 = &g_1606;
        int *l_1682 = &g_1233;
        int *l_1683 = &l_54;
        int *l_1684 = &l_54;
        int *l_1685 = &l_54;
        int l_1686 = 0x7A9ED1ECL;
        int *l_1687 = &g_1606;
        int *l_1688 = &g_401;
        int *l_1689 = (void*)0;
        int *l_1691 = &l_1686;
        int *l_1692 = &g_1233;
        int l_1693 = 0x7A1DD1EAL;
        int *l_1694 = &g_1233;
        int *l_1695 = &g_428;
        int *l_1696 = &l_1686;
        int l_1697 = 5L;
        int *l_1698 = &g_401;
        int *l_1699 = &g_1606;
        int *l_1700 = (void*)0;
        int *l_1701 = &l_1693;
        int *l_1702 = (void*)0;
        int *l_1703 = (void*)0;
        int *l_1704 = &l_1690;
        int *l_1705 = &g_1606;
        int *l_1706 = &l_1686;
        int *l_1707 = &g_401;
        int *l_1709 = &g_428;
        int *l_1710 = &g_1233;
        int *l_1711 = &g_401;
        int *l_1712 = &l_1708;
        int *l_1713 = (void*)0;
        int *l_1715 = &g_1606;
        int *l_1717 = &l_1697;
        int *l_1718 = &g_401;
        int *l_1719 = &g_1606;
        int *l_1720 = &l_54;
        int *l_1721 = &g_794;
        int *l_1722 = &l_1714;
        int *l_1723 = &l_1693;
        int *l_1724 = &l_1693;
        int *l_1725 = &l_1690;
        int *l_1726 = &g_1606;
        int *l_1727 = (void*)0;
        int *l_1728 = &l_1697;
        int *l_1729 = &l_1714;
        int *l_1730 = (void*)0;
        int *l_1731 = (void*)0;
        int *l_1732 = (void*)0;
        int *l_1733 = &l_1697;
        int *l_1734 = (void*)0;
        int *l_1735 = &l_1693;
        int *l_1736 = &l_1697;
        int *l_1738 = &l_1693;
        int *l_1739 = (void*)0;
        int *l_1740 = &g_89;
        int *l_1743 = &g_1233;
        int *l_1744 = &l_1697;
        int *l_1745 = &g_401;
        int *l_1746 = &l_1708;
        int *l_1747 = &l_54;
        int *l_1748 = &l_1714;
        int *l_1749 = &g_1233;
        int *l_1750 = &l_1716;
        int *l_1751 = (void*)0;
        int *l_1753 = &l_1741;
        int *l_1754 = &g_794;
        int *l_1756 = &l_1742;
        int *l_1757 = (void*)0;
        int *l_1758 = &g_1233;
        int *l_1759 = (void*)0;
        int *l_1760 = (void*)0;
        int *l_1761 = &l_1737;
        int *l_1762 = &l_1697;
        int *l_1763 = (void*)0;
        int *l_1765 = &l_1708;
        int *l_1767 = &l_1714;
        int l_1769 = 0xBCD05241L;
        int *l_1770 = &g_794;
        int *l_1771 = &l_1716;
        int *l_1772 = (void*)0;
        int *l_1773 = &l_1708;
        int *l_1774 = &l_1690;
        int *l_1775 = &l_1741;
        int *l_1777 = &g_794;
        int *l_1778 = &g_1233;
        int *l_1779 = (void*)0;
        int *l_1780 = &l_1742;
        int *l_1781 = &g_1606;
        int *l_1782 = &g_1233;
        int *l_1783 = &g_401;
        int *l_1784 = (void*)0;
        int l_1785 = 0xD76F4CCDL;
        int *l_1786 = &g_428;
        int *l_1787 = &l_1690;
        int *l_1788 = &l_1741;
        (*l_1657) = (l_1654 , ((*l_1655) = &g_428));
        (**g_219) = (safe_sub_func_uint8_t_u_u(p_3, (safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(((p_3 || (safe_div_func_int64_t_s_s(l_1035, p_3))) == p_3), (*g_834))), p_3))));
        (**g_219) &= 0x4491D211L;
        g_1789++;
    }
    else
    {
        unsigned long long *l_1794 = &g_817;
        int l_1796 = 1L;
        unsigned char *l_1797 = &g_382;
        int *l_1798 = (void*)0;
        int *l_1799 = (void*)0;
        int *l_1800 = &g_794;
        long long ***l_1807 = (void*)0;
        long long ***l_1808 = &g_841;
        unsigned short *l_1817 = &g_880;
        unsigned ***l_1854 = &g_1350;
        unsigned short l_1857 = 3UL;
        int l_1924 = 0L;
        int l_1955 = 0xF81D1648L;
        unsigned l_1968 = 7UL;
        const short l_1987 = 0x4628L;
        unsigned long long *** const l_2004 = &g_833;
        int l_2123 = 5L;
        unsigned l_2124 = 1UL;
        int l_2127 = 0x11352F8FL;
        unsigned *l_2154 = &g_294;
        unsigned * const *l_2153 = &l_2154;
        unsigned l_2548 = 0UL;
        int l_2720 = 1L;
        int l_2734 = 1L;
        int l_2744 = (-8L);
        int l_2771 = 0xEC601EF1L;
        long long l_3041 = 9L;
        short l_3267 = 0x3D0DL;
        char l_3308 = 0L;
        int l_3348 = 0xC0EE8926L;
lbl_1820:
        l_1737 = ((*l_1800) |= ((l_1792 & (l_1793 || ((***l_1668) = ((((((1L >= (l_1794 == (void*)0)) , (safe_unary_minus_func_uint32_t_u(p_3))) | (func_55((func_43(l_80, ((-2L) == l_1742), l_1796, p_3) , g_926), g_21, g_871, l_1797, l_1796) | p_3)) ^ p_3) ^ p_3) != 255UL)))) ^ (-10L)));
        if ((((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((*l_1817) = ((safe_mul_func_int16_t_s_s(p_3, l_1816)) && 0x4AAE1EB78148E038LL)), 1)), 0x3BE74C97L)) && 1L) >= p_3))
        {
            unsigned short l_1826 = 0UL;
            int l_1855 = 0x404012A5L;
            unsigned char *l_1882 = &g_32;
            int l_1933 = (-5L);
            int l_1941 = 0x362D53F6L;
            unsigned *l_2006 = &l_1968;
            int l_2084 = 0x1D90F0E5L;
            short l_2085 = (-7L);
            int l_2097 = (-1L);
            int l_2266 = 6L;
            int l_2318 = (-7L);
            unsigned char *l_2380 = &g_32;
            int l_2509 = 0xED8C93EFL;
lbl_1907:
            for (l_265 = 0; (l_265 == 2); l_265++)
            {
                int *l_1821 = &l_1714;
                int *l_1822 = &g_401;
                int *l_1823 = (void*)0;
                int *l_1824 = &l_1708;
                int *l_1825 = (void*)0;
                int **l_1829 = &l_1825;
                if (g_880)
                    goto lbl_1820;
                ++l_1826;
                (*l_1829) = &l_1796;

                ;
                (*l_1829) = (g_505 , (*l_1829));
            }
            if ((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int64_t_s(((((*l_1794)--) , (safe_mul_func_int16_t_s_s(l_1742, (safe_rshift_func_uint16_t_u_u((l_1856 |= (safe_sub_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_s(((p_3 & p_3) < ((safe_rshift_func_int16_t_s_u(0x85E1L, 2)) >= (((*l_1794) = (safe_mod_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((((*l_1800) > ((void*)0 != l_1853)) | (*l_1800)), (((l_1855 = (l_1854 == &g_1350)) & (**g_219)) <= p_3))), 0x0384L))) , 0x592BL))), 0)) != 0x15L), 4)) , (**g_833)) >= 1L), 0x0689F75E98CAA157LL)) , 1UL), p_3))), l_1857))))) & g_1640))), 12)))
            {
                short * const l_1872 = &g_1873;
                short * const *l_1871 = &l_1872;
                short * const **l_1870 = &l_1871;
                short **l_1874 = (void*)0;
                short ***l_1875 = &l_1874;
                int l_1878 = 0L;
                unsigned char *l_1881 = &g_382;
                long long *l_1883 = &l_1856;
                unsigned long long l_1972 = 0x3459C3A440B8028ELL;
                long long l_2045 = (-1L);
                int l_2086 = 0x93F4E0E9L;
                int l_2087 = 0xBDD24091L;
                int l_2088 = 0L;
                int l_2089 = 0x77B59B9AL;
                long long l_2254 = 0x8E039068D0050063LL;
                if ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((((4294967295UL > (((*l_1882) = (l_1855 || ((18446744073709551607UL | (safe_rshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(func_55((((*l_1870) = (void*)0) == ((*l_1875) = l_1874)), (((safe_mod_func_uint32_t_u_u(((!(l_1878 >= ((**g_219) = (safe_add_func_uint64_t_u_u(p_3, ((*l_1883) ^= (g_872 && p_3))))))) > l_1855), (-1L))) | 0x7272L) , 4L), l_1855, l_1797, (*l_1800)), 6)), p_3)), l_1855))) || p_3))) > p_3)) ^ l_1878) , 65535UL), p_3)) && 1L), 0x2A8D9D64L)), 5)))
                {
                    unsigned short l_1888 = 0xE773L;
                    const unsigned char *l_1895 = &g_32;
                    unsigned long long l_1902 = 7UL;
                    unsigned char *l_1905 = &g_264;
                    if ((safe_rshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s(l_1888, (*g_220))) && p_3), 0)))
                    {
                        unsigned char *l_1896 = &g_32;
                        int l_1898 = 0x985ACAB8L;
                        l_1898 = ((((safe_rshift_func_uint8_t_u_s(((((**g_833) = l_1855) < (((safe_mod_func_uint16_t_u_u(((*l_1800) = ((*l_1817) = (func_39(l_1895, (0x4D6417BDL && (p_3 ^ l_1888)), l_1896) != l_1826))), p_3)) , l_1888) && p_3)) , 0x5DL), 2)) <= 0x88EFB98FL) , g_1897) == 2L);
                    }
                    else
                    {
                        int **l_1899 = &l_1034;
                        int ***l_1900 = (void*)0;
                        int ***l_1901 = &l_1899;
                        (*l_1901) = l_1899;
                    }
                    if (p_3)
                    {
                        unsigned char l_1906 = 0UL;
                        (**g_219) = l_1902;
                        if (g_94)
                            goto lbl_1903;
lbl_1903:
                        (*l_1800) = ((**g_219) = p_3);
                        (*g_220) = (((((**g_833) != (~l_1902)) ^ (*g_220)) == g_1234) >= p_3);
                    }
                    else
                    {
                        l_1690 |= ((**g_219) & (*g_220));
                        return p_3;
                    }
                }
                else
                {
                    const unsigned char *l_1993 = &g_32;
                    const int l_2007 = 0x44A9011BL;
                    int *l_2008 = (void*)0;
                    int *l_2009 = &g_1233;
                    int *l_2010 = &l_1708;
                    int *l_2011 = &l_1766;
                    int *l_2012 = &g_1606;
                    int *l_2013 = &l_1766;
                    int *l_2014 = (void*)0;
                    int *l_2015 = &l_1768;
                    int *l_2016 = (void*)0;
                    int *l_2017 = (void*)0;
                    int *l_2018 = &l_1878;
                    int *l_2019 = &l_1924;
                    int *l_2020 = &l_1742;
                    int *l_2021 = &g_794;
                    int *l_2022 = &l_1741;
                    int *l_2023 = (void*)0;
                    int *l_2025 = &l_1737;
                    int *l_2026 = &l_1855;
                    int *l_2027 = &g_1233;
                    int *l_2028 = &l_1924;
                    int *l_2029 = (void*)0;
                    int *l_2030 = (void*)0;
                    int *l_2031 = &l_1924;
                    int *l_2032 = (void*)0;
                    int *l_2033 = &g_794;
                    int *l_2034 = &l_1955;
                    int *l_2035 = &l_1924;
                    int *l_2036 = &g_794;
                    int *l_2037 = &l_54;
                    int *l_2038 = &l_1768;
                    int *l_2039 = &g_794;
                    int *l_2040 = &g_89;
                    int *l_2041 = &g_89;
                    int *l_2042 = &l_1955;
                    int *l_2043 = &l_54;
                    int l_2044 = 3L;
                    int *l_2046 = (void*)0;
                    int *l_2047 = &l_1690;
                    int *l_2048 = &l_1742;
                    int *l_2049 = &l_1941;
                    int *l_2050 = &l_1741;
                    int *l_2051 = &g_89;
                    int *l_2052 = &l_1955;
                    int *l_2053 = &g_89;
                    int *l_2054 = &l_1714;
                    int *l_2055 = &l_2044;
                    int *l_2056 = &l_1941;
                    int *l_2057 = &l_1708;
                    int *l_2058 = &l_1776;
                    int *l_2059 = (void*)0;
                    int *l_2060 = &l_1878;
                    int *l_2061 = &l_1776;
                    int *l_2062 = (void*)0;
                    int *l_2063 = (void*)0;
                    int *l_2064 = &l_1766;
                    int l_2065 = 0x5357D883L;
                    int *l_2066 = &g_401;
                    int *l_2067 = (void*)0;
                    int *l_2068 = &l_1955;
                    int *l_2069 = &l_1855;
                    int *l_2070 = &l_1796;
                    int *l_2071 = &l_1924;
                    int *l_2072 = &l_1737;
                    int *l_2075 = (void*)0;
                    int *l_2077 = &g_401;
                    int *l_2078 = &l_1796;
                    int *l_2079 = &l_1716;
                    int *l_2080 = &l_1742;
                    int *l_2090 = &l_1752;
                    int *l_2091 = &l_1690;
                    int *l_2092 = &l_1941;
                    int *l_2093 = &l_1690;
                    int *l_2094 = &l_1776;
                    int *l_2095 = (void*)0;
                    int *l_2096 = &l_1752;
                    int *l_2098 = &l_1737;
                    int *l_2099 = &l_1737;
                    int *l_2100 = &g_794;
                    int *l_2101 = &l_2065;
                    int *l_2102 = &l_1690;
                    int *l_2103 = &l_1766;
                    int *l_2104 = &l_1941;
                    int *l_2105 = &l_1716;
                    int *l_2106 = &l_2097;
                    int *l_2107 = &l_1768;
                    int *l_2108 = &l_2044;
                    int *l_2109 = &g_428;
                    int *l_2110 = &g_1897;
                    int *l_2111 = &l_1708;
                    int *l_2112 = (void*)0;
                    int *l_2113 = (void*)0;
                    int *l_2114 = &l_2087;
                    if ((0xC2L > l_1878))
                    {
                        int *l_1908 = (void*)0;
                        int *l_1909 = &l_1766;
                        int *l_1910 = &l_1752;
                        int *l_1911 = &g_1897;
                        int *l_1912 = &g_1897;
                        int *l_1913 = &l_1768;
                        int *l_1914 = &g_1606;
                        int *l_1915 = &l_1716;
                        int *l_1916 = (void*)0;
                        int *l_1917 = &g_794;
                        int *l_1918 = (void*)0;
                        int *l_1919 = &l_1878;
                        int *l_1920 = &g_1606;
                        int *l_1921 = &l_1796;
                        int *l_1922 = (void*)0;
                        int *l_1923 = &l_1766;
                        int *l_1925 = &l_1878;
                        int *l_1926 = &g_89;
                        int *l_1927 = &l_1855;
                        int *l_1928 = &l_1855;
                        int *l_1929 = (void*)0;
                        int *l_1930 = &g_794;
                        int *l_1931 = (void*)0;
                        int *l_1932 = &g_89;
                        int *l_1934 = &l_1737;
                        int *l_1935 = &g_428;
                        int *l_1936 = &l_1796;
                        int *l_1937 = &l_1741;
                        int *l_1938 = &l_1742;
                        int *l_1939 = &l_1878;
                        int *l_1940 = (void*)0;
                        int *l_1942 = &g_1606;
                        int *l_1943 = &l_1737;
                        int *l_1944 = &g_401;
                        int *l_1945 = (void*)0;
                        int *l_1946 = (void*)0;
                        int *l_1947 = &g_89;
                        int *l_1948 = &l_1714;
                        int *l_1949 = &l_1716;
                        int *l_1950 = &l_1690;
                        int *l_1951 = &l_1714;
                        int *l_1952 = &g_1233;
                        int *l_1953 = &l_1766;
                        int *l_1954 = &l_1924;
                        int *l_1956 = (void*)0;
                        int *l_1957 = &l_1741;
                        int *l_1958 = &l_54;
                        int *l_1959 = &l_1737;
                        int *l_1960 = &l_1796;
                        int *l_1961 = &l_1955;
                        int *l_1962 = (void*)0;
                        int *l_1963 = &g_1897;
                        int *l_1964 = (void*)0;
                        int *l_1965 = &l_1855;
                        int *l_1966 = (void*)0;
                        int *l_1967 = (void*)0;
                        if (g_436)
                            goto lbl_1907;
                        if (g_876)
                            goto lbl_1971;
                        l_1968--;
lbl_1971:
                        (*l_1923) = (l_1826 ^ l_1768);
                        (*l_1943) = (-10L);
                    }
                    else
                    {
                        int **l_1983 = &g_220;
                        unsigned long long ***l_2005 = &g_833;
                        l_1972--;
                        (*l_1800) &= ((safe_div_func_int8_t_s_s(g_876, (safe_add_func_int64_t_s_s((!(((safe_rshift_func_uint8_t_u_u((!((safe_rshift_func_int16_t_s_s(0x017FL, l_1941)) != (g_663 , ((p_3 <= (+((((((*l_1983) = &g_89) == &l_1933) ^ ((void*)0 != g_1984)) <= (-1L)) & 18446744073709551608UL))) || l_1987)))), 2)) , g_1988) != g_1764)), p_3)))) , (**g_219));

                        ;
                        (*l_1800) |= (safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(func_39(l_1993, (g_92 == ((safe_mod_func_int32_t_s_s((func_39(l_1797, ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(((**g_219) = ((safe_div_func_uint16_t_u_u((0x28FE094B33D44A0ELL > ((l_2004 != (l_2005 = (void*)0)) ^ (g_92 , (l_2006 != &g_1167)))), g_871)) , l_1972)), p_3)) && 1UL), 1L)), (*g_158))) , p_3), l_1797) <= 4294967295UL), l_2007)) >= g_1120)), l_1881), 7)) , p_3), p_3));

                        ;
                        ;
                    }
                    --g_2081;
                    ++g_2115;
                    (**g_219) = p_3;
                }

                ;
                for (l_1941 = 0; (l_1941 < 23); l_1941++)
                {
                    unsigned char *l_2120 = (void*)0;
                    if (((*l_1800) = func_55(p_3, p_3, p_3, func_48(p_3, l_1882, (!(*g_158)), l_2120, ((+(safe_mod_func_uint16_t_u_u(g_21, p_3))) == 0x8374L)), p_3)))
                    {
                        if ((*g_220))
                            break;
                    }
                    else
                    {
                        l_2123 = (**g_219);
                        if (g_264)
                            goto lbl_1820;
                        (**g_219) &= ((void*)0 == l_1797);
                    }
                }
                (*l_1800) = func_39(l_1797, p_3, (func_55(((p_3 == l_2124) > (~g_505)), l_2086, ((g_1764 = 0L) , (safe_rshift_func_uint16_t_u_s(l_2127, 1))), l_1052, (*l_1800)) , l_1882));
                if ((**g_219))
                {
                    unsigned char l_2130 = 6UL;
                    unsigned short l_2147 = 0xA93BL;
                    for (g_2074 = (-16); (g_2074 == (-1)); g_2074 = safe_add_func_uint64_t_u_u(g_2074, 2))
                    {
                        int l_2133 = 0x22AD3F0FL;
                        l_2130++;
                        if (l_2133)
                            continue;
                    }
                    (*l_1800) = (((*l_1872) = (safe_mod_func_uint8_t_u_u((func_39(l_1797, ((((safe_lshift_func_uint16_t_u_s((g_436 = ((*l_1817) = ((safe_unary_minus_func_uint8_t_u((p_3 < ((safe_rshift_func_uint8_t_u_u(((*l_1800) , 0x3AL), 6)) == ((safe_div_func_uint32_t_u_u((l_1855 <= (safe_mod_func_int16_t_s_s((+(*l_1800)), (safe_mul_func_uint8_t_u_u((l_2147 , (((l_1941 |= (p_3 <= (safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s(func_43(l_2152, p_3, p_3, (**g_219)), g_500)), 1L)))) , l_2153) == g_2155)), 0x63L))))), l_2147)) , p_3))))) != p_3))), 13)) , l_2130) ^ 0x6BDEL) != (-6L)), l_1881) ^ p_3), p_3))) , (**g_219));
                }
                else
                {
                    short l_2157 = 0x40F4L;
                    unsigned *l_2160 = &g_1646;
                    unsigned char *l_2163 = (void*)0;
                    int l_2212 = 0x561D9CF2L;
                    int l_2215 = 0x63A5C189L;
                    int l_2242 = 0x58DEA204L;
                    int l_2275 = (-6L);
                    int l_2322 = 0xFC42F073L;
                    int l_2326 = 1L;
                    if (l_2045)
                    {
                        int **l_2164 = &l_1800;
                        (*l_2164) = &l_2087;

                        ;
                        (**l_2164) = l_2084;
                    }
                    else
                    {
                        int *l_2165 = (void*)0;
                        int l_2166 = 1L;
                        int *l_2167 = (void*)0;
                        int *l_2168 = &l_1955;
                        int *l_2169 = &g_794;
                        int *l_2170 = &l_2086;
                        int *l_2171 = &g_401;
                        int *l_2172 = &l_1776;
                        int *l_2173 = &l_54;
                        int *l_2174 = (void*)0;
                        int *l_2175 = (void*)0;
                        int *l_2176 = &g_1897;
                        int *l_2177 = (void*)0;
                        int *l_2178 = (void*)0;
                        int *l_2179 = &l_1955;
                        int *l_2180 = &g_401;
                        int *l_2181 = &g_1233;
                        int *l_2182 = &l_2086;
                        int *l_2183 = (void*)0;
                        int *l_2184 = &l_2088;
                        int *l_2185 = &g_794;
                        int *l_2186 = (void*)0;
                        int *l_2187 = &l_1924;
                        int *l_2188 = &l_1714;
                        int *l_2189 = &l_2097;
                        int *l_2190 = &g_1897;
                        int *l_2191 = &l_2087;
                        int *l_2192 = &l_1768;
                        int *l_2193 = &l_1924;
                        int *l_2194 = (void*)0;
                        int *l_2195 = &l_1855;
                        int *l_2196 = &g_1606;
                        int *l_2197 = &l_1690;
                        int *l_2198 = &l_1716;
                        int *l_2199 = &l_2086;
                        int *l_2200 = (void*)0;
                        int *l_2201 = (void*)0;
                        int *l_2202 = &g_1233;
                        int *l_2203 = (void*)0;
                        int *l_2204 = (void*)0;
                        int *l_2205 = &l_1796;
                        int *l_2206 = &l_1768;
                        int *l_2207 = (void*)0;
                        int *l_2208 = &l_1933;
                        int *l_2209 = &l_1752;
                        int *l_2210 = &g_428;
                        int *l_2211 = &l_1714;
                        int *l_2213 = &l_1741;
                        int *l_2214 = &l_1796;
                        int *l_2216 = &g_89;
                        int *l_2217 = &l_1878;
                        int *l_2218 = &l_2212;
                        int *l_2219 = (void*)0;
                        int *l_2220 = &l_1924;
                        int *l_2221 = &l_54;
                        int *l_2222 = &l_2166;
                        int *l_2223 = &l_1941;
                        int *l_2224 = &l_1776;
                        int *l_2225 = &g_1233;
                        int *l_2226 = &g_794;
                        int l_2227 = 0xF86B19C7L;
                        int *l_2228 = &l_1737;
                        int *l_2229 = &l_1741;
                        int *l_2230 = &g_1606;
                        int *l_2231 = &l_1741;
                        int *l_2232 = &l_2166;
                        int *l_2233 = &l_1776;
                        int *l_2234 = &l_2089;
                        int *l_2235 = &g_428;
                        int *l_2236 = &l_1878;
                        int *l_2237 = (void*)0;
                        int *l_2238 = (void*)0;
                        int *l_2239 = &l_2097;
                        int *l_2240 = &l_2166;
                        int *l_2241 = &g_2074;
                        int l_2243 = 0xC3B70F9EL;
                        int *l_2244 = &l_2242;
                        int *l_2245 = &g_401;
                        int *l_2246 = &g_2074;
                        int *l_2247 = &l_1742;
                        int *l_2248 = (void*)0;
                        int *l_2249 = &l_2088;
                        int *l_2250 = &l_2097;
                        int *l_2251 = &l_54;
                        int *l_2252 = &g_2074;
                        int *l_2253 = (void*)0;
                        int *l_2255 = &l_2212;
                        int *l_2256 = &l_1690;
                        int *l_2257 = (void*)0;
                        int *l_2258 = &l_2212;
                        int *l_2259 = &l_1690;
                        int *l_2260 = &l_1878;
                        int *l_2261 = &l_1855;
                        int *l_2262 = &l_2089;
                        int *l_2263 = &l_2242;
                        int *l_2264 = &l_1714;
                        int *l_2265 = &g_401;
                        int *l_2267 = &l_2166;
                        int *l_2268 = &l_1708;
                        int *l_2269 = &l_1933;
                        int *l_2270 = &l_2227;
                        int *l_2271 = &l_1737;
                        int *l_2272 = &l_1924;
                        int *l_2273 = &l_2212;
                        int *l_2274 = &l_1955;
                        int *l_2276 = &l_2215;
                        int *l_2277 = &l_2087;
                        int *l_2278 = &l_2088;
                        int *l_2279 = (void*)0;
                        int *l_2280 = &l_2227;
                        int *l_2281 = &l_1742;
                        int *l_2282 = &g_428;
                        int *l_2283 = &l_2087;
                        int *l_2284 = &l_2097;
                        int *l_2285 = &l_2215;
                        int *l_2286 = &l_1955;
                        int *l_2287 = &g_1606;
                        int *l_2288 = (void*)0;
                        int *l_2289 = (void*)0;
                        int *l_2290 = &l_1924;
                        int *l_2291 = &g_401;
                        int *l_2292 = (void*)0;
                        int *l_2293 = &l_1796;
                        int *l_2294 = &g_1897;
                        int *l_2295 = (void*)0;
                        int *l_2296 = &l_2087;
                        int *l_2297 = &l_2086;
                        int *l_2298 = (void*)0;
                        int *l_2299 = &l_1768;
                        int *l_2300 = &l_1924;
                        int *l_2301 = &l_1708;
                        int *l_2302 = &l_1716;
                        int *l_2303 = &l_1796;
                        int *l_2304 = &g_1606;
                        int *l_2305 = &g_401;
                        int *l_2306 = &l_2242;
                        int *l_2307 = &l_1737;
                        int *l_2308 = &g_428;
                        int *l_2309 = &g_428;
                        int *l_2310 = &l_1737;
                        int *l_2311 = &l_2243;
                        int *l_2312 = (void*)0;
                        int l_2313 = 0x93901E23L;
                        int *l_2314 = &g_1606;
                        int *l_2315 = &l_1933;
                        int *l_2316 = &l_2089;
                        int *l_2317 = &g_1606;
                        int *l_2319 = &l_1941;
                        int *l_2320 = &l_2275;
                        int *l_2321 = &g_794;
                        int *l_2323 = &l_2166;
                        int *l_2324 = &l_1714;
                        int *l_2325 = &l_1933;
                        int *l_2327 = (void*)0;
                        int l_2328 = (-1L);
                        int *l_2329 = &l_2212;
                        int *l_2330 = (void*)0;
                        int *l_2331 = &l_1941;
                        g_2333--;
                        --g_2336;
                        g_2340++;
                    }

                    ;
                    return (**g_219);
                }
            }
            else
            {
                int **l_2343 = (void*)0;
                int *l_2344 = &l_1716;
                unsigned char *l_2352 = &g_264;
                char *l_2359 = &g_784;
                int l_2419 = 0x366D43F6L;
                int l_2450 = 0x74AD2419L;
                int l_2477 = (-7L);
                int l_2503 = 0x5B57D1DFL;
                unsigned long long l_2566 = 3UL;
                char l_2569 = 1L;
                int *l_2579 = (void*)0;
                int *l_2580 = &l_1737;
                int *l_2581 = &l_1716;
                int *l_2582 = (void*)0;
                int *l_2583 = &l_2450;
                int *l_2584 = &l_2477;
                int *l_2585 = &l_1752;
                int *l_2586 = &l_2318;
                int *l_2587 = (void*)0;
                int *l_2588 = &l_54;
                int *l_2589 = &l_1796;
                int *l_2590 = &l_1855;
                int *l_2591 = (void*)0;
                int *l_2592 = &g_428;
                int *l_2593 = (void*)0;
                int *l_2594 = &l_1776;
                int *l_2595 = &l_2477;
                int *l_2596 = &l_2419;
                int *l_2597 = &l_1855;
                int *l_2598 = &l_1708;
                int *l_2599 = &g_1233;
                int *l_2600 = &l_2318;
                int *l_2601 = &l_1752;
                int *l_2602 = &l_2419;
                int *l_2603 = &g_1606;
                int *l_2604 = &g_89;
                int *l_2605 = &l_1708;
                int *l_2606 = &l_1742;
                int *l_2607 = &l_1690;
                int *l_2608 = (void*)0;
                int *l_2609 = &l_1796;
                int *l_2610 = (void*)0;
                int *l_2611 = &l_1714;
                int *l_2612 = &g_1606;
                int *l_2613 = (void*)0;
                int *l_2614 = &l_54;
                int *l_2615 = &l_54;
                int *l_2616 = &g_794;
                int *l_2617 = &l_2399;
                int *l_2618 = &l_1941;
                int *l_2619 = &g_428;
                int *l_2620 = &l_1716;
                int *l_2621 = &l_1708;
                int *l_2622 = &l_1741;
                int *l_2623 = &l_1708;
                int *l_2624 = (void*)0;
                int *l_2625 = &l_1741;
                int *l_2626 = &g_401;
                int *l_2627 = (void*)0;
                int *l_2628 = &g_428;
                int l_2629 = 0x467A09DBL;
                int l_2630 = 8L;
                int *l_2631 = &l_1742;
                int *l_2632 = &l_1776;
                int *l_2633 = &g_1606;
                int *l_2634 = &g_428;
                int *l_2635 = (void*)0;
                int *l_2636 = &l_2266;
                int *l_2637 = &l_2630;
                int *l_2638 = (void*)0;
                int *l_2639 = &g_1606;
                int *l_2640 = (void*)0;
                int *l_2641 = &l_1955;
                int *l_2642 = (void*)0;
                int *l_2643 = &l_2450;
                int *l_2644 = &l_2630;
                int *l_2645 = &g_794;
                int *l_2646 = &g_401;
                int *l_2647 = &l_1737;
                int *l_2648 = &l_1708;
                int *l_2649 = &l_2097;
                int *l_2650 = &l_1714;
                int *l_2651 = &l_1714;
                int *l_2652 = &l_1768;
                int *l_2653 = &l_2629;
                int *l_2654 = &l_2266;
                int *l_2655 = &g_89;
                int *l_2656 = (void*)0;
                int *l_2657 = &l_2630;
                int *l_2658 = &l_2450;
                int *l_2659 = (void*)0;
                int *l_2660 = &l_2629;
                int *l_2661 = &l_1955;
                int *l_2662 = &l_1690;
                int *l_2663 = &l_1796;
                int *l_2664 = (void*)0;
                int *l_2665 = &l_2318;
                int *l_2666 = &l_1941;
                int *l_2667 = (void*)0;
                int *l_2668 = &l_1941;
                int *l_2669 = &g_89;
                int *l_2670 = &l_1933;
                int *l_2671 = &l_1855;
                int *l_2672 = &l_2419;
                int *l_2673 = &l_2630;
                int *l_2674 = (void*)0;
                int *l_2675 = &g_1233;
                int *l_2676 = (void*)0;
                int *l_2677 = &l_2318;
                int *l_2678 = &l_1737;
                int *l_2679 = &g_428;
                int *l_2680 = &l_1855;
                int *l_2681 = &l_2509;
                int *l_2682 = &l_2419;
                int *l_2683 = &l_1941;
                int *l_2684 = &g_401;
                int *l_2685 = &l_2127;
                int *l_2686 = &l_54;
                int *l_2687 = &l_2477;
                int *l_2688 = &l_2399;
                int *l_2689 = &l_1796;
                int *l_2690 = &l_1796;
                int *l_2691 = &l_2266;
                int *l_2692 = &l_2450;
                int *l_2693 = &l_1708;
                int *l_2694 = &l_2503;
                int *l_2695 = (void*)0;
                int *l_2696 = &l_2419;
                int *l_2697 = &l_1752;
                int *l_2698 = &l_1955;
                int *l_2699 = (void*)0;
                int *l_2700 = &l_1714;
                int *l_2701 = (void*)0;
                int *l_2702 = (void*)0;
                int *l_2703 = &l_1955;
                int *l_2704 = &l_2318;
                int *l_2705 = (void*)0;
                int *l_2706 = &l_1924;
                int *l_2707 = (void*)0;
                int *l_2708 = &l_2630;
                int *l_2709 = (void*)0;
                int *l_2710 = &l_1741;
                int *l_2711 = &l_1752;
                int *l_2712 = (void*)0;
                int *l_2713 = &l_1796;
                int *l_2714 = (void*)0;
                int *l_2715 = (void*)0;
                int *l_2716 = &l_2509;
                int *l_2717 = &l_1742;
                int *l_2718 = &l_2419;
                int *l_2719 = &l_1752;
                int l_2721 = 0x850BFAEBL;
                int *l_2722 = &l_1766;
                int *l_2723 = &l_1714;
                int *l_2724 = &l_2419;
                int *l_2725 = &l_2629;
                int *l_2726 = &l_1796;
                int *l_2727 = &l_2450;
                int *l_2728 = &l_1714;
                int l_2729 = 0L;
                int *l_2730 = (void*)0;
                int *l_2731 = (void*)0;
                int *l_2732 = &l_1742;
                int *l_2733 = &l_1933;
                int *l_2735 = &l_2097;
                int *l_2736 = &l_54;
                int *l_2737 = &l_2399;
                int *l_2738 = (void*)0;
                int *l_2739 = &l_2127;
                int *l_2740 = &l_2399;
                int *l_2741 = &l_1716;
                int *l_2742 = &l_2503;
                int *l_2743 = &g_2074;
                int *l_2745 = &g_89;
                int *l_2746 = &l_2127;
                int *l_2747 = &l_2734;
                int *l_2748 = &l_1714;
                int *l_2749 = &l_1737;
                int *l_2750 = &g_2074;
                int *l_2751 = &l_1924;
                int *l_2752 = &g_1606;
                int *l_2753 = &l_1955;
                int *l_2754 = &l_2266;
                int *l_2755 = &l_2399;
                int *l_2756 = &l_1933;
                int *l_2757 = &l_1742;
                int *l_2758 = &l_2266;
                int *l_2759 = &l_1741;
                int *l_2760 = &l_1741;
                int *l_2761 = &l_2721;
                int *l_2762 = (void*)0;
                int *l_2763 = &l_1768;
                int *l_2764 = &g_428;
                int *l_2765 = &l_2419;
                int *l_2766 = &l_1690;
                int *l_2767 = &g_428;
                int *l_2768 = &l_1855;
                int *l_2769 = (void*)0;
                int *l_2770 = &l_1752;
                int *l_2772 = &l_2771;
                int *l_2773 = &l_2097;
                l_2344 = &l_1796;

                ;
                (*l_2344) ^= (((!(safe_lshift_func_int8_t_s_u(((*g_220) , (safe_mod_func_uint16_t_u_u(func_55(g_1018, (safe_rshift_func_uint16_t_u_u(((*l_1817) = g_1018), 4)), ((*l_1034) = l_2351), l_2352, (safe_mod_func_int8_t_s_s(((*l_2359) ^= (func_39(func_48((safe_add_func_int8_t_s_s(g_2332, func_55(g_179, (p_3 , (!(safe_sub_func_int8_t_s_s(((**g_833) >= p_3), 1L)))), l_1690, l_1882, p_3))), l_1797, (*g_158), l_1797, p_3), p_3, l_1797) > (-1L))), g_1234))), g_32))), (*g_158)))) < 0UL) && 0x1599L);
                if ((**g_219))
                {
                    int l_2364 = 0x291B65DCL;
                    char l_2379 = 0xBEL;
                    unsigned char *l_2382 = &g_2336;
                    int l_2440 = 0x7FDCFDE9L;
                    int l_2459 = 1L;
                    int **l_2563 = (void*)0;
                    int **l_2564 = &g_220;
                    if ((*g_220))
                    {
                        int l_2367 = (-9L);
                        short *l_2381 = &g_92;
                        (*l_2344) ^= ((((safe_add_func_int8_t_s_s(((*l_2359) = p_3), ((*l_2152) = (safe_lshift_func_int8_t_s_u((g_21 | ((((p_3 < p_3) || (((**l_2153) ^= (((*l_80)++) | ((+l_2367) || (safe_add_func_int8_t_s_s((((*l_1817) = ((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_int32_t_s(func_55(((*l_2381) = (func_55((((**g_219) >= (safe_div_func_uint64_t_u_u((((**g_219) & (safe_lshift_func_int16_t_s_u(((((((safe_rshift_func_uint8_t_u_u((*g_158), p_3)) , (void*)0) == &l_1797) != l_2364) & 18446744073709551615UL) || l_2367), g_1233))) && 0x58F25C7E32695483LL), 1UL))) , 0xC9A0L), l_2379, l_2379, l_2380, (*l_1800)) > l_2367)), p_3, l_2367, l_2382, p_3))) | p_3) && g_500), 8L)) , 0xAE52L)) , 0x62L), g_1606))))) , 5UL)) != l_1941) == g_872)), l_2367))))) <= p_3) & 0xA9F9FA8D67A3EB30LL) < 0xDD5088FB24CEEE96LL);
                    }
                    else
                    {
                        int *l_2383 = &l_1714;
                        int *l_2384 = &l_1776;
                        int *l_2385 = &g_794;
                        int *l_2386 = &l_1933;
                        int *l_2387 = &l_1924;
                        int *l_2388 = &l_1708;
                        int *l_2389 = &l_1714;
                        int *l_2390 = &l_2266;
                        int *l_2391 = &g_1606;
                        int *l_2392 = &g_2074;
                        int *l_2393 = &l_1933;
                        int *l_2394 = &l_1955;
                        int *l_2395 = &l_1741;
                        int *l_2396 = (void*)0;
                        int *l_2397 = &l_1933;
                        int *l_2398 = &l_1737;
                        int *l_2400 = &l_2399;
                        int *l_2401 = &g_1233;
                        int *l_2402 = (void*)0;
                        int *l_2403 = &l_1752;
                        int *l_2404 = &g_89;
                        int *l_2405 = &l_2364;
                        int *l_2406 = &g_401;
                        int *l_2407 = &l_2364;
                        int *l_2408 = &l_1708;
                        int *l_2409 = &l_1708;
                        int *l_2410 = &l_1708;
                        int *l_2411 = &l_1741;
                        int *l_2412 = &g_89;
                        int *l_2413 = &g_428;
                        int *l_2414 = &g_1606;
                        int *l_2415 = &l_1708;
                        int *l_2416 = &l_1741;
                        int *l_2417 = &l_1737;
                        int *l_2418 = &g_401;
                        int *l_2420 = &l_1716;
                        int *l_2421 = &l_1742;
                        int *l_2422 = &g_1606;
                        int *l_2423 = &l_1690;
                        int *l_2424 = &l_1714;
                        int *l_2425 = (void*)0;
                        int *l_2426 = &l_2399;
                        int *l_2427 = &l_1742;
                        int *l_2428 = &l_2419;
                        int *l_2429 = &l_2266;
                        int *l_2430 = &l_1768;
                        int *l_2431 = (void*)0;
                        int *l_2432 = &l_1737;
                        int *l_2433 = &l_1737;
                        int *l_2434 = &l_1955;
                        int *l_2435 = &l_1716;
                        int *l_2436 = &g_89;
                        int *l_2437 = (void*)0;
                        int *l_2438 = (void*)0;
                        int *l_2439 = &l_2097;
                        int *l_2441 = &l_2364;
                        int *l_2442 = (void*)0;
                        int *l_2443 = &l_2266;
                        int *l_2444 = &g_89;
                        int *l_2445 = &l_2440;
                        int *l_2446 = &l_1708;
                        int *l_2447 = &l_2097;
                        int *l_2448 = &l_1855;
                        int *l_2449 = &l_1955;
                        int *l_2451 = &l_2450;
                        int *l_2452 = &l_1776;
                        int *l_2453 = &l_1716;
                        int *l_2454 = &l_54;
                        int *l_2455 = &l_1737;
                        int *l_2456 = &l_1708;
                        int *l_2457 = &l_2450;
                        int *l_2458 = &l_1742;
                        int *l_2460 = &g_1897;
                        int *l_2461 = &g_89;
                        int *l_2462 = &l_2364;
                        int *l_2463 = (void*)0;
                        int *l_2464 = &l_1941;
                        int *l_2465 = &l_54;
                        int *l_2466 = &g_1897;
                        int *l_2467 = &g_89;
                        int *l_2468 = &l_1776;
                        int *l_2469 = &l_2450;
                        int *l_2470 = (void*)0;
                        int *l_2471 = (void*)0;
                        int *l_2472 = &l_2364;
                        int *l_2473 = &l_1766;
                        int *l_2474 = &l_1716;
                        int *l_2475 = &g_401;
                        int *l_2476 = &l_1708;
                        int *l_2478 = (void*)0;
                        int *l_2479 = &l_1796;
                        int *l_2480 = &g_401;
                        int *l_2481 = &l_2419;
                        int *l_2482 = &l_54;
                        int *l_2483 = &g_1897;
                        int *l_2484 = &l_54;
                        int *l_2485 = (void*)0;
                        int *l_2486 = &l_2459;
                        int *l_2487 = &l_2097;
                        int *l_2488 = &g_2074;
                        int *l_2489 = &l_1714;
                        int *l_2490 = &l_54;
                        int *l_2491 = &l_1690;
                        int l_2492 = 0x2CE0D175L;
                        int *l_2493 = &l_2399;
                        int *l_2494 = &g_428;
                        int *l_2495 = (void*)0;
                        int *l_2496 = &g_1897;
                        int *l_2497 = &l_2399;
                        int *l_2498 = &g_2074;
                        int *l_2499 = &l_1855;
                        int *l_2500 = &l_1924;
                        int *l_2501 = (void*)0;
                        int *l_2502 = &g_1897;
                        int *l_2504 = (void*)0;
                        int l_2505 = 0xA871FC78L;
                        int *l_2506 = &l_2505;
                        int *l_2507 = &l_2318;
                        int *l_2508 = &l_1766;
                        int *l_2510 = &l_1924;
                        int *l_2511 = &g_1606;
                        int *l_2512 = &g_1233;
                        int *l_2513 = &l_2097;
                        int *l_2514 = &g_1606;
                        int *l_2515 = &l_1768;
                        int *l_2516 = (void*)0;
                        int *l_2517 = &l_1766;
                        int *l_2518 = &l_1766;
                        int *l_2519 = &l_2419;
                        int *l_2520 = &l_1855;
                        int *l_2521 = &l_1708;
                        int *l_2522 = &l_1766;
                        int *l_2523 = &l_2364;
                        int *l_2524 = &l_1924;
                        int *l_2525 = &l_1766;
                        int *l_2526 = &l_1714;
                        int *l_2527 = &g_401;
                        int *l_2528 = &l_1737;
                        int *l_2529 = &l_1766;
                        int *l_2530 = &l_2459;
                        int *l_2531 = &l_1752;
                        int *l_2532 = (void*)0;
                        int *l_2533 = &l_1796;
                        int *l_2534 = &l_1855;
                        int *l_2535 = &l_1737;
                        int *l_2536 = &l_2503;
                        int *l_2537 = (void*)0;
                        int l_2538 = 0xBC0E4B37L;
                        int *l_2539 = (void*)0;
                        int *l_2540 = &l_2266;
                        int *l_2541 = &l_2266;
                        int *l_2542 = &l_2492;
                        int *l_2543 = &l_1708;
                        int *l_2544 = (void*)0;
                        int *l_2545 = &l_1924;
                        int *l_2546 = &g_1897;
                        int *l_2547 = &g_1606;
                        long long *l_2559 = (void*)0;
                        long long *l_2560 = &g_2332;
                        long long *l_2561 = &g_871;
                        unsigned char *l_2562 = &g_264;
                        ++l_2548;
                        (*l_2547) = (safe_sub_func_uint64_t_u_u(func_55(((**g_833) | (((((*g_2155) = (*g_2155)) != (void*)0) != l_2509) >= l_2364)), (p_3 != p_3), (safe_div_func_uint64_t_u_u(((*l_1800) ^= ((safe_div_func_int64_t_s_s(((*l_2561) ^= ((*l_2560) ^= ((((*l_1670) = p_3) < (safe_rshift_func_int16_t_s_s((-1L), 1))) == 0xC9BFC611L))), (*g_834))) == g_89)), (**g_833))), l_2562, (*l_2344)), p_3));
                    }
                    (*l_1800) |= 3L;
                    if (g_272)
                        goto lbl_2565;
                    (*l_2564) = (*g_219);
                }
                else
                {
                    if ((p_3 , p_3))
                    {
lbl_2565:
                        (*l_2344) |= (**g_219);
                        return (**g_219);
                    }
                    else
                    {
                        char l_2578 = 0x92L;
                        l_2566++;
                        (**g_219) &= (g_264 , ((+l_2578) ^ p_3));
                        return (**g_219);
                    }
                }
                g_2775++;
            }
            (*l_1800) &= p_3;
        }
        else
        {
            int l_2779 = 5L;
            int l_2834 = 0x907B5689L;
            unsigned char *l_2878 = &g_2336;
            int l_2883 = 0x61A4BD3AL;
            int l_2930 = 1L;
            int l_2947 = (-5L);
            int l_2973 = (-1L);
            int *l_3004 = &l_1737;
            unsigned * const **l_3039 = &l_3037;
            int *l_3563 = (void*)0;
            int *l_3564 = &l_1924;
            int *l_3565 = &g_428;
            int *l_3566 = &l_1742;
            int *l_3567 = (void*)0;
            int *l_3568 = &l_2127;
            int *l_3569 = &l_2947;
            int *l_3570 = &g_401;
            int *l_3571 = &l_2771;
            int *l_3572 = &l_1768;
            int *l_3573 = (void*)0;
            int *l_3574 = &l_2127;
            int *l_3575 = &g_1606;
            int *l_3576 = &l_1714;
            int *l_3577 = &l_1768;
            int *l_3578 = (void*)0;
            int *l_3579 = &l_2720;
            int *l_3580 = &g_89;
            int *l_3581 = &l_2734;
            int *l_3582 = &l_1708;
            int *l_3583 = &l_2947;
            int *l_3584 = &l_1752;
            int *l_3585 = &g_89;
            int *l_3586 = &l_2744;
            int *l_3587 = &l_2930;
            int *l_3589 = (void*)0;
            int *l_3590 = &g_2074;
            int *l_3591 = (void*)0;
            int *l_3592 = &l_1752;
            int *l_3593 = &g_1606;
            int *l_3594 = &l_2947;
            int *l_3595 = &l_2720;
            int *l_3596 = &l_1752;
            int *l_3597 = (void*)0;
            int *l_3598 = &l_1742;
            int *l_3599 = &g_2074;
            int *l_3600 = &l_1714;
            int *l_3601 = (void*)0;
            int *l_3602 = &l_54;
            int *l_3603 = (void*)0;
            int *l_3604 = &l_1716;
            int *l_3605 = &l_2973;
            int *l_3606 = &l_2930;
            int *l_3607 = &g_1233;
            int *l_3608 = (void*)0;
            int *l_3609 = &g_89;
            int *l_3610 = &g_401;
            int *l_3611 = (void*)0;
            int *l_3612 = &l_2930;
            int *l_3613 = &l_54;
            int *l_3614 = (void*)0;
            int *l_3615 = (void*)0;
            int *l_3616 = &g_3532;
            int *l_3617 = (void*)0;
            int *l_3618 = &l_1796;
            int *l_3619 = &g_1606;
            int *l_3620 = (void*)0;
            int *l_3621 = &l_1690;
            int *l_3622 = &g_89;
            int *l_3623 = &g_2074;
            int *l_3624 = &g_2074;
            int *l_3625 = (void*)0;
            int *l_3626 = &g_1606;
            int *l_3627 = &l_1741;
            int *l_3628 = &g_3397;
            int *l_3629 = &l_2399;
            int *l_3630 = &l_1766;
            int *l_3631 = &g_1233;
            int *l_3632 = (void*)0;
            int *l_3633 = &l_2127;
            int *l_3634 = &g_794;
            int *l_3635 = (void*)0;
            int *l_3636 = &l_1690;
            int *l_3637 = &g_794;
            int *l_3638 = &l_1924;
            int *l_3639 = &l_2947;
            int *l_3640 = &l_1716;
            int *l_3641 = &g_401;
            int *l_3642 = &l_1741;
            int *l_3643 = &g_2074;
            int *l_3644 = (void*)0;
            int *l_3645 = &g_1233;
            int *l_3646 = &l_1708;
            int *l_3647 = &l_1737;
            int *l_3648 = &l_1708;
            int *l_3649 = &l_2834;
            int *l_3650 = &g_1897;
            int *l_3651 = &l_2973;
            int *l_3652 = &g_2074;
            int *l_3654 = &l_1741;
            int *l_3655 = (void*)0;
            unsigned short l_3656 = 65534UL;
            if (p_3)
            {
                short l_2778 = 0x7A3AL;
                int *l_2780 = &l_2734;
                int *l_2781 = &g_89;
                int *l_2782 = &l_1741;
                int *l_2783 = &l_1737;
                int *l_2784 = &l_1752;
                int *l_2785 = &l_2127;
                int *l_2786 = &g_428;
                int *l_2787 = &l_2771;
                int *l_2788 = (void*)0;
                long long l_2789 = 0L;
                int *l_2790 = &g_2074;
                int *l_2791 = &l_1768;
                int *l_2792 = &g_794;
                int *l_2793 = &l_1955;
                int *l_2794 = &l_1742;
                int *l_2795 = &g_2074;
                int *l_2796 = &l_1768;
                int *l_2797 = &l_2127;
                int *l_2798 = &l_1690;
                int *l_2799 = &l_1752;
                int *l_2800 = &l_1796;
                int *l_2801 = (void*)0;
                int *l_2802 = &g_794;
                int l_2803 = 0xF9806D6FL;
                int *l_2804 = &l_54;
                int *l_2805 = (void*)0;
                int *l_2806 = &g_1606;
                int *l_2807 = &l_2734;
                int *l_2808 = &g_1897;
                int *l_2809 = (void*)0;
                int *l_2810 = &l_54;
                int *l_2811 = &l_54;
                int *l_2812 = &l_2779;
                int *l_2813 = &l_1714;
                int *l_2814 = &g_401;
                int *l_2815 = &l_1955;
                int l_2816 = (-1L);
                int *l_2817 = &g_2074;
                int *l_2818 = &l_2744;
                int *l_2819 = &l_2803;
                int *l_2820 = &l_2734;
                int *l_2821 = &l_2816;
                int *l_2822 = &l_1776;
                int *l_2823 = &l_1776;
                int *l_2824 = &l_1766;
                int *l_2825 = &l_1776;
                int *l_2826 = (void*)0;
                int *l_2827 = &l_1716;
                int *l_2828 = &l_2816;
                int *l_2829 = &l_1796;
                int *l_2830 = &l_2399;
                int *l_2831 = &g_2074;
                int *l_2832 = &l_1924;
                int l_2833 = 0xE249A899L;
                int *l_2835 = &l_2834;
                int *l_2836 = &l_2734;
                int *l_2837 = &l_2720;
                int *l_2838 = &g_2074;
                int *l_2839 = &l_1955;
                int *l_2840 = &l_2734;
                int *l_2841 = (void*)0;
                int l_2842 = 0x9BFB424AL;
                int *l_2843 = &g_1606;
                int *l_2844 = &l_2744;
                int *l_2845 = (void*)0;
                int *l_2846 = (void*)0;
                int *l_2847 = &l_1768;
                int *l_2848 = &g_401;
                int *l_2849 = &l_1742;
                int l_2850 = 0xC3F8C86FL;
                int *l_2851 = &l_1708;
                int *l_2852 = &g_1233;
                int *l_2853 = &l_1796;
                int *l_2854 = (void*)0;
                int *l_2855 = &g_2074;
                int *l_2856 = &l_2816;
                int *l_2857 = &l_1768;
                int *l_2858 = &l_2734;
                int *l_2859 = &l_2833;
                int **l_2865 = (void*)0;
                int **l_2866 = &l_2802;
                unsigned *l_2868 = &g_2333;
                ++g_2860;
                for (g_876 = 0; (g_876 != 15); ++g_876)
                {
                    (*l_2785) |= (*g_220);
                    if (g_794)
                        goto lbl_2867;
                }
lbl_2867:
                (*l_2866) = (*g_219);

                ;
                (*l_2812) = ((((*l_2868) = ((247UL == func_39(&g_2081, g_1789, l_263)) < p_3)) != (safe_mod_func_uint8_t_u_u(((((**g_833) &= l_2779) >= ((((g_2873 = (l_1799 = &l_2734)) == (*l_2866)) , p_3) != p_3)) <= (*l_2781)), (*g_158)))) <= p_3);

                ;
                ;
            }
            else
            {
                short l_2874 = (-1L);
                unsigned char *l_2875 = (void*)0;
                unsigned char *l_2884 = &g_2336;
                int *l_3003 = (void*)0;
                int l_3059 = (-4L);
                int l_3087 = 0L;
                int l_3100 = 3L;
                int *l_3173 = &l_2720;
                int *l_3174 = (void*)0;
                int *l_3175 = (void*)0;
                int *l_3176 = &l_2973;
                int *l_3177 = &l_1955;
                int *l_3178 = &g_1897;
                int *l_3179 = &l_1690;
                int *l_3180 = &l_2720;
                int *l_3181 = &l_1955;
                int *l_3182 = &g_1897;
                int *l_3183 = (void*)0;
                int *l_3184 = &l_1714;
                int *l_3185 = &l_2779;
                int *l_3186 = &g_1233;
                int *l_3187 = &l_2779;
                int *l_3188 = &l_1776;
                int *l_3189 = &l_1690;
                int *l_3190 = &l_2720;
                int *l_3191 = (void*)0;
                int *l_3192 = &l_1768;
                int *l_3193 = &l_1796;
                int *l_3194 = &l_2947;
                int *l_3195 = &g_1233;
                int *l_3196 = (void*)0;
                int *l_3197 = &l_1776;
                int *l_3198 = (void*)0;
                int *l_3199 = &l_1741;
                int *l_3200 = (void*)0;
                int *l_3201 = &l_2973;
                int *l_3202 = &l_2930;
                int *l_3203 = &l_1768;
                int *l_3204 = &l_1741;
                int *l_3205 = &l_1752;
                int *l_3206 = &g_89;
                int *l_3207 = (void*)0;
                int *l_3208 = &g_1897;
                int *l_3209 = &l_1742;
                int *l_3210 = &l_3087;
                int *l_3211 = (void*)0;
                int *l_3212 = &g_401;
                int *l_3213 = &l_2779;
                int *l_3214 = &l_1741;
                int *l_3215 = &l_1796;
                int *l_3216 = (void*)0;
                int *l_3217 = &l_1766;
                int *l_3218 = &l_1766;
                int *l_3219 = &l_2399;
                int *l_3220 = &l_1768;
                int *l_3221 = &l_1924;
                int *l_3222 = &l_1796;
                int *l_3223 = (void*)0;
                int *l_3224 = &g_428;
                int *l_3225 = &g_2074;
                int *l_3226 = &l_2720;
                int *l_3227 = &l_3087;
                int *l_3228 = &l_1714;
                int *l_3229 = &l_2734;
                int *l_3230 = &l_2779;
                int *l_3231 = &l_1955;
                int *l_3232 = (void*)0;
                int *l_3233 = &l_3100;
                int *l_3234 = &l_3100;
                int *l_3235 = &l_2973;
                int *l_3236 = &l_3100;
                int *l_3237 = &l_1690;
                int *l_3238 = &l_1742;
                int *l_3239 = &l_3100;
                int *l_3240 = &l_2127;
                int *l_3241 = (void*)0;
                int *l_3242 = &l_1742;
                int *l_3243 = &l_2127;
                int *l_3244 = &l_2399;
                int *l_3245 = &l_3100;
                int *l_3246 = &g_89;
                int *l_3247 = &l_1776;
                int *l_3248 = &g_794;
                int *l_3249 = &l_1737;
                int *l_3250 = &l_2399;
                int *l_3251 = &g_2074;
                int *l_3252 = &l_1924;
                int *l_3253 = &l_54;
                (*g_220) ^= p_3;
                (*g_2873) &= ((**g_219) = 1L);
                if ((l_2874 == p_3))
                {
                    int *l_2887 = &g_794;
                }
                else
                {
                    int l_3002 = 0x00034AFAL;
                    int l_3006 = 0x263A2AE0L;
                    int l_3014 = 0L;
                    const unsigned char *l_3024 = (void*)0;
                    char l_3040 = 0xBBL;
                    int l_3156 = 0x64F86A08L;
                    unsigned char *l_3169 = &g_32;
                    if ((*g_2873))
                    {
                        unsigned l_2991 = 7UL;
                        const unsigned char *l_2992 = &g_2336;
                        const unsigned char **l_2993 = &l_1033;
                        (*g_2873) = p_3;
                        (*l_1800) ^= ((*g_2873) = 0x74E27DE0L);
                        l_3004 = l_3003;

                        ;
                    }
                    else
                    {
                        int *l_3005 = (void*)0;
                        int *l_3007 = &l_54;
                        int *l_3008 = &l_2744;
                        int *l_3009 = &l_2947;
                        int *l_3010 = &l_2127;
                        int *l_3011 = &g_89;
                        int *l_3012 = &l_1716;
                        int *l_3013 = &l_2734;
                        int *l_3015 = &l_2734;
                        int *l_3016 = &g_2074;
                        int *l_3017 = &l_1955;
                        int *l_3018 = (void*)0;
                        int *l_3019 = &l_1741;
                        int *l_3020 = &l_2771;
                        --l_3021;
                    }

                    ;
                    if (p_3)
                    {
                        int *l_3042 = &l_1752;
                        int *l_3043 = &l_1924;
                        int *l_3044 = &l_1776;
                        int *l_3045 = &g_2074;
                        int *l_3046 = &l_1796;
                        int *l_3047 = &l_1690;
                        int *l_3048 = &l_1716;
                        int *l_3049 = &g_1606;
                        int *l_3050 = &l_2947;
                        int *l_3051 = &g_794;
                        int *l_3052 = &l_2720;
                        int *l_3053 = &l_2734;
                        int *l_3054 = &l_1776;
                        int *l_3055 = &l_1766;
                        int *l_3056 = &g_1897;
                        int *l_3057 = &g_401;
                        int *l_3058 = &l_1742;
                        int *l_3060 = (void*)0;
                        int *l_3061 = &l_2930;
                        int *l_3062 = &l_1714;
                        int *l_3063 = &l_2771;
                        int *l_3064 = (void*)0;
                        int *l_3065 = &l_1924;
                        int *l_3066 = (void*)0;
                        int *l_3067 = &l_1776;
                        int *l_3068 = &l_1796;
                        int *l_3069 = (void*)0;
                        int *l_3070 = &l_1776;
                        int *l_3071 = &g_89;
                        int *l_3072 = &g_2074;
                        int *l_3073 = &l_2930;
                        int *l_3074 = (void*)0;
                        int *l_3075 = &l_2771;
                        int *l_3076 = &l_2834;
                        int *l_3077 = &l_3059;
                        int *l_3078 = &l_2744;
                        int *l_3079 = (void*)0;
                        int *l_3080 = &l_1708;
                        int *l_3081 = &l_2947;
                        int *l_3082 = &l_2127;
                        int *l_3083 = &l_2744;
                        int *l_3084 = &l_2973;
                        int *l_3085 = &l_3006;
                        int *l_3086 = &l_1796;
                        int *l_3088 = &l_2930;
                        int *l_3089 = (void*)0;
                        int *l_3090 = &l_3087;
                        int *l_3091 = &l_54;
                        int *l_3092 = &l_2779;
                        int *l_3093 = &l_1708;
                        int *l_3094 = &l_1776;
                        int *l_3095 = &l_54;
                        int *l_3096 = (void*)0;
                        int *l_3097 = (void*)0;
                        int *l_3098 = &g_1233;
                        int l_3099 = 0x19C92666L;
                        int *l_3101 = &l_3087;
                        int *l_3102 = &l_1768;
                        int *l_3103 = &l_2779;
                        int *l_3104 = &l_1796;
                        int *l_3105 = &l_54;
                        int *l_3106 = &l_3014;
                        int *l_3107 = &l_2399;
                        int *l_3108 = &l_2779;
                        int *l_3109 = &l_1741;
                        int *l_3110 = &l_3099;
                        int *l_3111 = &l_1690;
                        int *l_3112 = &l_2947;
                        int *l_3113 = &l_3014;
                        int *l_3114 = &l_1716;
                        int *l_3115 = &l_2734;
                        int *l_3116 = &l_1752;
                        int *l_3117 = &l_2834;
                        int *l_3118 = &l_2973;
                        int *l_3119 = &l_1737;
                        int *l_3120 = (void*)0;
                        int *l_3121 = &l_3100;
                        int *l_3122 = &l_1708;
                        int *l_3123 = (void*)0;
                        int *l_3124 = &l_1714;
                        int l_3125 = (-6L);
                        int *l_3126 = &l_2947;
                        int *l_3127 = &g_2074;
                        int l_3128 = 5L;
                        int *l_3129 = &l_3100;
                        int *l_3130 = (void*)0;
                        int *l_3131 = &l_2973;
                        int *l_3132 = &l_3099;
                        int *l_3133 = &l_3087;
                        int *l_3134 = &l_1766;
                        int *l_3135 = &g_401;
                        int *l_3136 = &l_54;
                        int *l_3137 = (void*)0;
                        int *l_3138 = (void*)0;
                        int *l_3139 = &l_2734;
                        int *l_3140 = &l_3014;
                        int *l_3141 = (void*)0;
                        int *l_3142 = &g_1897;
                        int *l_3143 = &l_1716;
                        int *l_3144 = &l_1766;
                        int *l_3145 = &l_2720;
                        int *l_3146 = &l_1716;
                        int *l_3147 = &l_2720;
                        int *l_3148 = &l_2771;
                        int *l_3149 = &l_1716;
                        int *l_3150 = &l_2734;
                        int *l_3151 = &l_3059;
                        int *l_3152 = &g_89;
                        int *l_3153 = &l_2973;
                        int *l_3154 = &l_1768;
                        int *l_3155 = (void*)0;
                        int *l_3157 = &l_3125;
                        int **l_3161 = &l_3076;
                        ++g_3158;
                        (*l_3161) = (*g_219);

                        ;
                    }
                    else
                    {
                        const int *l_3163 = &g_3164;
                        const int **l_3162 = &l_3163;
                        const int *l_3166 = (void*)0;
                        const int **l_3165 = &l_3166;
                        char *l_3168 = &g_139;
                        unsigned long long l_3172 = 0xD82998C1B574B6B3LL;
                        (*l_3165) = ((*l_3162) = (void*)0);

                        ;
                        if (l_2127)
                            goto lbl_3167;
lbl_3167:
                        (*l_1800) = ((**g_219) = 1L);
                        (*g_2873) = ((((*l_1800) == (safe_rshift_func_uint8_t_u_u((*g_158), (l_3014 | l_3172)))) > 0xD2L) ^ 0L);
                    }
                }

                ;
                g_3254--;
            }

            ;
            ;
            ;
            for (g_2860 = 0; (g_2860 > 17); g_2860 = safe_add_func_uint32_t_u_u(g_2860, 1))
            {
                long long l_3263 = (-5L);
                long long *l_3264 = &g_2332;
                int l_3268 = 0x5EEC826DL;
                int l_3519 = 0xC9C60089L;
                int l_3533 = 0xB5E04473L;
                int * const l_3561 = (void*)0;
                int **l_3562 = &l_1799;
            }
            ++l_3656;
        }

        ;
        ;
        for (l_3041 = 0; (l_3041 > (-10)); --l_3041)
        {
            unsigned char l_3661 = 0x60L;
            if ((0L < l_3661))
            {
                for (g_663 = 9; (g_663 >= 20); g_663 = safe_add_func_int8_t_s_s(g_663, 4))
                {
                    unsigned l_3664 = 0x4F4E15CDL;
                    ++l_3664;
                }
            }
            else
            {
                unsigned long long l_3668 = 18446744073709551614UL;
                int * const l_3669 = &l_2744;
                int **l_3670 = &l_1799;
                (*l_1800) &= 1L;
                l_3668 |= (p_3 == ((*g_158) == g_3667));
                (*l_3670) = l_3669;

                ;
            }
        }

        ;
    }

    ;

    ;
    ;

    return p_3;
}







static unsigned char func_39(const unsigned char * p_40, unsigned short p_41, unsigned char * p_42)
{
    unsigned char l_1649 = 0x46L;
    int *l_1650 = &g_428;
    int **l_1651 = &g_220;
    (*l_1651) = (((l_1649 & 7L) != (p_41 , l_1649)) , l_1650);

    ;
    for (g_294 = 0; (g_294 > 26); g_294 = safe_add_func_int32_t_s_s(g_294, 2))
    {
        (**l_1651) = (**g_219);
    }
    return (*p_40);
}







static char func_43(unsigned char * p_44, int p_45, int p_46, int p_47)
{
    int **l_1125 = &g_220;
    int l_1138 = 0L;
    unsigned l_1225 = 0x613AB095L;
    unsigned char *l_1246 = &g_382;
    int ****l_1256 = (void*)0;
    unsigned *l_1261 = &g_272;
    int l_1265 = 0xD715A57CL;
    unsigned l_1266 = 0x024CB222L;
    unsigned l_1269 = 0xCFE09C8FL;
    const short l_1309 = (-4L);
    int l_1471 = (-3L);
    int l_1482 = 1L;
    int l_1497 = 0x276340B3L;
    int l_1516 = 0x33C903C6L;
    int l_1540 = 0L;
    int l_1575 = (-2L);
    int l_1578 = 0xFBF3EAC7L;
    int l_1595 = 0x49DAD485L;
    int l_1613 = 0x67A771CAL;
    int l_1625 = 1L;
    (*l_1125) = &p_47;

    ;
    if ((**l_1125))
    {
        int *l_1126 = &g_89;
        (*l_1125) = l_1126;

        ;
        (*l_1126) = (5UL <= (*l_1126));
    }
    else
    {
        int *l_1127 = &g_401;
        int *l_1128 = &g_401;
        int *l_1129 = &g_794;
        int *l_1130 = &g_428;
        int *l_1131 = &g_794;
        int *l_1132 = &g_401;
        int *l_1133 = (void*)0;
        int *l_1134 = &g_89;
        int *l_1135 = &g_794;
        int *l_1136 = &g_89;
        int *l_1137 = (void*)0;
        int *l_1139 = &g_89;
        int *l_1140 = &g_401;
        int *l_1141 = &l_1138;
        int *l_1142 = &g_401;
        int l_1143 = 0x55EF046FL;
        int *l_1144 = &g_794;
        int *l_1145 = &g_794;
        int *l_1146 = &g_428;
        int *l_1147 = &l_1138;
        int *l_1148 = &g_89;
        int *l_1149 = (void*)0;
        int *l_1150 = &g_401;
        int *l_1151 = (void*)0;
        int *l_1152 = (void*)0;
        int *l_1153 = &g_428;
        int *l_1154 = &g_428;
        int *l_1155 = &l_1143;
        int *l_1156 = &g_89;
        int *l_1157 = &l_1138;
        int *l_1158 = &l_1138;
        int *l_1159 = &g_794;
        int *l_1160 = (void*)0;
        int *l_1161 = &g_794;
        int *l_1162 = &l_1143;
        int *l_1163 = &g_401;
        int *l_1164 = (void*)0;
        int *l_1165 = &g_89;
        int *l_1166 = &g_428;
        ++g_1167;
    }

    ;
    return g_32;


}







static unsigned char * func_48(long long p_49, unsigned char * p_50, unsigned char p_51, unsigned char * p_52, unsigned long long p_53)
{
    int **l_1053 = &g_220;
    int *l_1054 = (void*)0;
    int l_1055 = (-1L);
    int *l_1056 = &g_89;
    int *l_1057 = (void*)0;
    int *l_1058 = &g_794;
    int *l_1059 = &g_794;
    int *l_1060 = &l_1055;
    int l_1061 = 0x164215A3L;
    int *l_1062 = &g_794;
    int *l_1063 = &g_89;
    int *l_1064 = &l_1055;
    int *l_1065 = &g_401;
    int *l_1066 = &l_1061;
    int l_1067 = 0x9B0FFE1EL;
    int *l_1068 = &g_794;
    int *l_1069 = &g_428;
    int *l_1070 = &g_89;
    int *l_1071 = &g_89;
    int *l_1072 = (void*)0;
    int *l_1073 = &g_428;
    int *l_1074 = &l_1061;
    int *l_1075 = &g_794;
    int l_1076 = 0xD0DFF1FBL;
    int *l_1077 = (void*)0;
    int *l_1078 = &l_1061;
    int *l_1079 = &g_428;
    int *l_1080 = &g_794;
    int *l_1081 = &g_428;
    int *l_1082 = &g_89;
    int *l_1083 = &l_1061;
    int *l_1084 = &l_1055;
    int *l_1085 = &l_1067;
    int l_1086 = 0x0780DAAFL;
    int *l_1087 = &g_401;
    int *l_1088 = &l_1076;
    int l_1089 = 9L;
    int *l_1090 = &g_428;
    int *l_1091 = &g_428;
    int *l_1092 = &l_1076;
    int l_1093 = 0x371C31A4L;
    int *l_1094 = &l_1093;
    int *l_1095 = &g_89;
    int l_1096 = 0x7F6BA46EL;
    int *l_1097 = &l_1067;
    int *l_1098 = &l_1086;
    int *l_1099 = &g_428;
    int *l_1100 = &l_1089;
    int *l_1101 = &g_89;
    int *l_1102 = &l_1096;
    int *l_1103 = &g_89;
    int *l_1104 = &g_794;
    int l_1105 = 0x1949D50EL;
    int *l_1106 = &l_1093;
    int *l_1107 = &l_1055;
    int *l_1108 = &l_1096;
    int *l_1109 = &l_1096;
    int *l_1110 = &l_1105;
    int *l_1111 = &l_1089;
    int *l_1112 = &l_1061;
    int *l_1113 = &l_1061;
    int l_1114 = (-5L);
    int *l_1115 = &l_1089;
    int *l_1116 = &l_1096;
    int *l_1117 = &l_1067;
    int *l_1118 = &l_1086;
    unsigned char *l_1124 = &g_32;
lbl_1123:
    (*l_1053) = (void*)0;

    ;
    g_1120--;
    if (g_1120)
        goto lbl_1123;
    return l_1124;


}







static long long func_55(short p_56, short p_57, int p_58, unsigned char * p_59, const unsigned char p_60)
{
    int **l_1036 = &g_220;
    int l_1037 = 0xB3E5581BL;
    int *l_1038 = &g_401;
    int *l_1039 = &g_401;
    int *l_1040 = &l_1037;
    int l_1041 = 7L;
    int *l_1042 = &g_401;
    int *l_1043 = &l_1037;
    int *l_1044 = &g_794;
    int *l_1045 = &g_794;
    int *l_1046 = &l_1037;
    int *l_1047 = (void*)0;
    int l_1048 = 0xDF97E195L;
    unsigned long long l_1049 = 1UL;
    (*l_1036) = &g_428;

    ;
    --l_1049;
    return (*l_1039);
}







static unsigned char * func_63(char p_64)
{
    long long l_410 = 0x718573F5E432B75BLL;
    int l_424 = 0xDF356831L;
    int l_454 = 5L;
    int l_456 = 0x31730F26L;
    short l_467 = (-1L);
    int **l_469 = &g_220;
    int ***l_468 = &l_469;
    int ***l_471 = &l_469;
    int ****l_470 = &l_471;
    unsigned char ***l_479 = (void*)0;
    unsigned char ***l_480 = (void*)0;
    int *l_481 = &l_454;
    int *l_482 = &l_424;
    unsigned char *l_483 = &g_264;
    const unsigned short *l_649 = &g_144;
    long long l_693 = 0x5E739C0E2FA64CB8LL;
    unsigned short l_709 = 0x8C3FL;
    unsigned long long l_736 = 2UL;
    int l_778 = 0x48F9B615L;
    int l_780 = 1L;
    int l_790 = (-1L);
    int l_799 = 1L;
    int l_802 = 0xB33500E2L;
    int l_803 = 0x386B8EA4L;
    unsigned char *l_823 = &g_382;
    short l_824 = 0L;
    int *l_944 = &g_401;
    for (g_92 = 0; (g_92 < (-18)); g_92 = safe_sub_func_int8_t_s_s(g_92, 1))
    {
        short l_409 = 1L;
        int l_434 = 0x9DFB2C95L;
        int l_435 = 0x29F9731AL;
        if (l_409)
            break;
        if (l_410)
        {
            int *l_411 = &g_401;
            int *l_412 = &g_89;
            int *l_413 = &g_89;
            int *l_414 = &g_401;
            int *l_415 = &g_401;
            int *l_416 = &g_401;
            int *l_417 = &g_89;
            int *l_418 = &g_89;
            int *l_419 = &g_89;
            int *l_420 = &g_89;
            int *l_421 = &g_401;
            int *l_422 = (void*)0;
            int l_423 = (-4L);
            int *l_425 = &l_424;
            int *l_426 = &g_89;
            int *l_427 = &l_424;
            int *l_429 = &l_423;
            int *l_430 = (void*)0;
            int *l_431 = &g_89;
            int *l_432 = (void*)0;
            int *l_433 = (void*)0;
            ++g_436;
        }
        else
        {
            char l_443 = 0xC4L;
            int *l_450 = &g_89;
            unsigned short *l_451 = &g_144;
            unsigned short l_452 = 0xFE3FL;
            short *l_453 = (void*)0;
            int *l_455 = &g_428;
            l_443 &= (safe_mod_func_int64_t_s_s(g_272, (safe_lshift_func_uint16_t_u_s(g_113, 3))));
            l_456 ^= ((*l_455) &= (p_64 ^ (safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((*l_451) = (g_401 == (l_434 , ((*l_450) = (l_435 &= ((9L && l_443) , p_64)))))), p_64)), (l_454 ^= ((((l_434 < ((g_272 , &g_113) == (void*)0)) < 0x9FF3L) | l_452) || l_424)))), p_64))));
            (*l_455) = l_409;
        }
        l_456 &= (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(0xACE757D4496F3E45LL, ((p_64 && ((**g_157) | (-1L))) || (4294967292UL != l_434)))), p_64)), p_64));
    }
    (*l_481) = (safe_lshift_func_uint16_t_u_s((l_467 <= (l_468 != ((*l_470) = &l_469))), (safe_mod_func_int8_t_s_s((g_94 == (((safe_mul_func_int8_t_s_s(0xD2L, ((p_64 <= (safe_unary_minus_func_int32_t_s((-3L)))) == (p_64 && (safe_lshift_func_int8_t_s_s(((g_157 = (void*)0) == (void*)0), 2)))))) < g_113) < 18446744073709551614UL)), g_94))));

    ;
    (***l_470) = l_482;

    ;
    if (((func_76(l_483, &g_32, l_483) != ((void*)0 == &g_301)) < (&g_401 == (void*)0)))
    {
        long long l_501 = 1L;
        unsigned long long *l_508 = &g_209;
        unsigned char *l_577 = &g_264;
        unsigned short l_580 = 0xD8CCL;
        int *l_583 = &g_428;
        int l_593 = 0xD74FEB74L;
        int l_610 = 0x99ECC58AL;
        unsigned long long l_619 = 0UL;
        int ****l_628 = &l_471;
        int ****l_630 = &l_468;
        int **l_639 = &l_583;
        unsigned char *l_653 = &g_264;
        if ((safe_rshift_func_uint8_t_u_u((*g_158), (safe_div_func_int64_t_s_s(0x974A6ED00A525ABCLL, 0xBA5E16FDFC689779LL)))))
        {
            const short l_511 = 0L;
            long long l_512 = 0xEBF65EF6CE24350DLL;
            int l_518 = 0L;
            long long l_526 = 0L;
            unsigned char *l_569 = &g_382;
            for (g_272 = (-13); (g_272 <= 58); ++g_272)
            {
                int *l_504 = &g_505;
                unsigned long long *l_507 = (void*)0;
                unsigned long long **l_506 = &l_507;
                int l_513 = 0L;
                unsigned char *l_559 = &g_264;
            }
            for (l_454 = (-30); (l_454 <= (-19)); l_454 = safe_add_func_int8_t_s_s(l_454, 3))
            {
                unsigned char *l_568 = &g_382;
                int **l_570 = &l_482;
            }
            (***l_468) = (**g_219);
        }
        else
        {
            long long l_575 = 1L;
            unsigned char *l_576 = &g_264;
            unsigned char *l_578 = &g_382;
            int *l_579 = &g_505;
            int **l_581 = (void*)0;
            int **l_582 = (void*)0;
            int *l_584 = &g_401;
            int *l_585 = (void*)0;
            int *l_586 = &l_456;
            int *l_587 = &l_424;
            int *l_588 = &g_89;
            int *l_589 = &l_456;
            int *l_590 = &l_454;
            int *l_591 = &l_456;
            int *l_592 = &g_401;
            int *l_594 = &l_424;
            int l_595 = 0x763186A5L;
            int *l_596 = &l_424;
            int *l_597 = &l_593;
            int *l_598 = (void*)0;
            int *l_599 = &g_428;
            int *l_600 = &l_593;
            int *l_601 = (void*)0;
            int *l_602 = (void*)0;
            int *l_603 = (void*)0;
            int *l_604 = (void*)0;
            int *l_605 = &g_401;
            int *l_606 = &g_89;
            int *l_607 = &l_456;
            int *l_608 = &g_401;
            int *l_609 = &l_593;
            int *l_611 = &l_610;
            int *l_612 = &l_595;
            int *l_613 = (void*)0;
            int *l_614 = (void*)0;
            int *l_615 = (void*)0;
            int *l_616 = (void*)0;
            int *l_617 = &l_610;
            int *l_618 = &l_610;
            short *l_622 = (void*)0;
            short *l_623 = &g_500;
            int ****l_627 = (void*)0;
            int *****l_629 = &l_470;
            char *l_631 = (void*)0;
            char *l_632 = &g_205;
            unsigned char ***l_636 = &g_157;
            l_583 = (((safe_mod_func_int8_t_s_s((((((((*l_579) = (safe_lshift_func_int16_t_s_s((((void*)0 != &g_21) < ((l_575 , l_483) != (void*)0)), l_575))) , p_64) & 255UL) == l_580) > (**l_469)) , p_64), 0x5AL)) || p_64) , (*g_219));

            ;
            l_619++;
            (*l_597) |= ((((&g_205 != &p_64) , ((+(((((((*l_623) = (g_92 |= g_272)) , (void*)0) == ((*l_583) , &l_583)) || (+((*l_632) &= (p_64 , (((-8L) | ((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_u((((*l_629) = (l_628 = l_627)) != l_630), (*l_587))))) || 0UL)) , 0xBCL))))) >= g_401) ^ g_633)) , p_64)) , (void*)0) != (void*)0);

            ;
            ;
            if (l_593)
                goto lbl_640;
            (*l_482) = func_65(l_577, (p_64 = ((safe_rshift_func_int16_t_s_u(g_401, (((((*l_636) = &l_577) != &g_158) <= ((safe_lshift_func_uint16_t_u_u((*l_481), g_401)) <= g_301)) | (g_21 != g_294)))) ^ p_64)));

            ;
            ;
        }

        ;
        ;
        ;
        ;
        ;
        (*l_639) = (*g_219);

        ;
lbl_640:
        (*l_639) = ((**l_468) = &g_401);

        ;
        ;
        for (p_64 = (-6); (p_64 >= (-14)); p_64--)
        {
            long long l_643 = (-1L);
            unsigned char **l_648 = &l_577;
            int *l_654 = &l_610;
            int *l_668 = &l_424;
            int *l_669 = &l_610;
            int *l_670 = &g_428;
            int *l_671 = &g_401;
            int *l_672 = (void*)0;
            int *l_673 = &g_401;
            int *l_674 = &l_424;
            int *l_675 = &l_456;
            int *l_676 = &g_428;
            int *l_677 = &g_89;
            int l_678 = 1L;
            int *l_679 = (void*)0;
            int *l_680 = &l_454;
            int l_681 = 0xAF1E85B6L;
            int *l_682 = &l_424;
            int *l_683 = &l_424;
            int *l_684 = &g_89;
            int *l_685 = (void*)0;
            int *l_686 = &l_456;
            int *l_687 = &g_401;
            int *l_688 = &l_678;
            int *l_689 = &l_681;
            int *l_690 = &l_456;
            int *l_691 = &l_678;
            int *l_692 = &l_610;
            int *l_694 = &g_428;
            int l_695 = 0x21106AA3L;
            int *l_696 = (void*)0;
            int *l_697 = (void*)0;
            int *l_698 = &l_424;
            int *l_699 = &g_89;
            int *l_700 = (void*)0;
            int *l_701 = (void*)0;
            (**l_469) &= ((l_643 , (p_64 , l_649)) == l_649);
            for (g_401 = 25; (g_401 >= 7); g_401 = safe_sub_func_uint64_t_u_u(g_401, 1))
            {
                unsigned char *l_652 = &g_32;
                int *l_655 = &l_610;
                int *l_656 = &g_428;
                int *l_657 = &l_424;
                int *l_658 = &l_593;
                int *l_659 = (void*)0;
                int *l_660 = (void*)0;
                int *l_661 = &g_89;
                int *l_662 = &g_89;
                (*l_469) = (l_643 , l_654);

                ;
                --g_663;
            }
            for (g_92 = (-15); (g_92 == 9); ++g_92)
            {
                (****l_630) = p_64;
                (***l_468) = (*l_482);
            }
            --g_702;
        }

        ;
    }
    else
    {
        unsigned char l_707 = 0x01L;
        int l_708 = 0x0583BF83L;
        int l_761 = 0xF766F329L;
        int l_769 = 0L;
        int l_845 = 1L;
        int *** const *l_864 = &l_468;
        int *** const **l_863 = &l_864;
        unsigned char * const l_937 = &g_382;
        char l_939 = (-1L);
        l_708 = ((****l_470) |= (safe_sub_func_uint32_t_u_u(g_505, 0x5A1F14D5L)));
        if (((func_76(&l_707, &l_707, &g_32) >= (((p_64 || (((*l_481) >= 0xAB1F19AA485410A0LL) < l_709)) < (safe_lshift_func_int16_t_s_s(0x974DL, 7))) && p_64)) , 1L))
        {
            int *l_720 = (void*)0;
            int *l_721 = (void*)0;
            int *l_722 = &l_708;
            int *l_723 = &l_424;
            int *l_724 = &l_454;
            int *l_725 = &l_454;
            int *l_726 = &l_424;
            int *l_727 = &l_456;
            int *l_728 = &l_708;
            int *l_729 = (void*)0;
            int *l_730 = &g_89;
            int *l_731 = &l_454;
            int *l_732 = &g_401;
            int *l_733 = &l_456;
            int *l_734 = &l_708;
            int *l_735 = &l_424;
            for (g_144 = 0; (g_144 >= 44); g_144 = safe_add_func_int32_t_s_s(g_144, 2))
            {
                int l_718 = 0L;
            }
            --l_736;
        }
        else
        {
            int *l_739 = &g_428;
            int *l_740 = &l_708;
            int *l_741 = (void*)0;
            int *l_742 = &l_424;
            int *l_743 = &l_424;
            int *l_744 = &l_424;
            int *l_745 = &l_456;
            int *l_746 = &l_424;
            int *l_747 = &g_428;
            int *l_748 = &g_401;
            int *l_749 = (void*)0;
            int *l_750 = (void*)0;
            int *l_751 = &g_89;
            int *l_752 = &l_708;
            int *l_753 = &l_424;
            int *l_754 = (void*)0;
            int *l_755 = &g_401;
            int *l_756 = (void*)0;
            int *l_757 = &g_401;
            int *l_758 = &g_401;
            int *l_759 = &g_428;
            int *l_760 = &l_708;
            int *l_762 = &l_761;
            int *l_763 = &g_89;
            int *l_764 = &g_89;
            int *l_765 = &l_424;
            int *l_766 = &g_428;
            int *l_767 = &l_424;
            int *l_768 = (void*)0;
            int *l_770 = (void*)0;
            int *l_771 = &g_89;
            int *l_772 = &l_761;
            int *l_773 = &l_424;
            int *l_774 = &l_454;
            int *l_775 = &g_428;
            int *l_776 = &g_428;
            int *l_777 = &l_456;
            int *l_779 = (void*)0;
            int *l_781 = &g_89;
            int *l_782 = &l_769;
            int *l_783 = &g_89;
            int *l_785 = &l_780;
            int *l_786 = &g_89;
            int *l_787 = &l_456;
            int *l_788 = &l_454;
            int *l_789 = &l_780;
            int *l_791 = &l_769;
            int *l_792 = &g_428;
            int *l_793 = &l_708;
            int *l_795 = (void*)0;
            int *l_796 = &g_428;
            int *l_797 = &l_780;
            int *l_798 = &l_424;
            int *l_800 = &l_769;
            int *l_801 = &l_799;
            int *l_804 = (void*)0;
            int *l_805 = &g_794;
            int *l_806 = &l_790;
            int *l_807 = &g_794;
            int *l_808 = &l_780;
            int *l_809 = &l_708;
            int *l_810 = &l_456;
            int *l_811 = &l_778;
            int *l_812 = &l_803;
            int *l_813 = (void*)0;
            int *l_814 = (void*)0;
            int *l_815 = (void*)0;
            int *l_816 = (void*)0;
            int l_820 = 0xB23176B9L;
            unsigned char *l_826 = &g_264;
            int l_836 = 0x0F8EAB65L;
            unsigned char l_844 = 1UL;
            int l_874 = (-7L);
            unsigned l_896 = 0UL;
            int l_906 = 0x17AE839DL;
            unsigned l_940 = 0xC0BD17A4L;
            ++g_817;
            (**l_471) = l_768;

            ;
            if (l_769)
            {
                unsigned char *l_825 = &l_707;
                return l_826;


            }
            else
            {
                int l_837 = 0xBFFE73CEL;
                int l_867 = 0xC9319BA3L;
                int l_869 = 0x9458C0FEL;
                int l_870 = 0x61693BA7L;
                unsigned char *l_884 = (void*)0;
                unsigned long long **l_893 = (void*)0;
                char *l_938 = &g_139;
                for (g_144 = 13; (g_144 < 53); ++g_144)
                {
                    const int *l_829 = &g_794;
                    const int **l_830 = &l_829;
                    unsigned short *l_835 = &g_436;
                    short l_838 = 0xCB21L;
                    (*l_830) = l_829;
                    if ((safe_mod_func_uint16_t_u_u(((*l_835) = ((void*)0 != g_833)), l_836)))
                    {
                        l_838 = l_837;
                    }
                    else
                    {
                        (*l_786) = ((safe_rshift_func_int8_t_s_s(((void*)0 == g_841), (safe_lshift_func_uint8_t_u_u(l_844, (*g_158))))) , ((*l_739) ^= p_64));
                    }
                }
                if (l_845)
                {
                    char l_866 = (-1L);
                    int l_868 = 4L;
                    int l_873 = 0xD401BC52L;
                    unsigned char * const l_892 = (void*)0;
                    int *l_920 = (void*)0;
                    int *l_921 = (void*)0;
                    int *l_922 = &l_424;
                    int *l_923 = (void*)0;
                    int *l_924 = &l_874;
                    int *l_925 = &l_780;
                    if (((*l_791) = ((*l_751) |= ((p_64 | (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s(250UL, g_209)) , l_845), 5))) <= ((*g_833) == (p_64 , ((safe_sub_func_uint64_t_u_u(l_837, 0xE193FD8F18704473LL)) , &l_736)))))))
                    {
                        char *l_860 = &g_784;
                        int *** const **l_865 = &l_864;
                        int *l_875 = &l_867;
                        int *l_877 = &l_456;
                        int *l_878 = (void*)0;
                        int *l_879 = &l_454;
                        unsigned *l_887 = &g_294;
                        (*l_812) ^= (safe_div_func_int16_t_s_s((0xC294L & ((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u((g_144 >= (((*l_860) = g_205) < (*g_158))), 7)) != (safe_lshift_func_int8_t_s_s(((1UL ^ l_708) > l_708), (l_863 == (p_64 , l_865))))), 2)) | g_505), l_866)) > g_144)), g_301));
                        (*l_759) &= ((*l_788) = 2L);
                        if (l_844)
                            goto lbl_883;
lbl_883:
                        g_880--;
                        (*l_743) ^= ((((*l_481) = ((l_884 == (void*)0) ^ (*l_758))) , p_64) >= p_64);
                    }
                    else
                    {
                        unsigned long long ***l_894 = (void*)0;
                        unsigned long long ***l_895 = &l_893;
                        int l_905 = 0x52115C98L;
                        char *l_919 = &g_205;
                        (*l_895) = l_893;
                        (*l_801) &= (((l_896 ^= (~9L)) >= (safe_mul_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((p_64 > (safe_add_func_int32_t_s_s(((g_264 , (*g_158)) && (-5L)), l_866))), l_905)), p_64)) & l_905), 0L))) , l_906);
                        (*l_746) &= p_64;
                    }
                    ++g_926;
                }
                else
                {
                    (*l_772) ^= ((*l_757) = 1L);
                }
                l_940 = (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(p_64, 5)), (safe_add_func_int64_t_s_s((p_64 == (p_64 >= l_939)), 9UL))));
            }
        }

        ;
        for (l_939 = 0; (l_939 <= 25); l_939 = safe_add_func_int8_t_s_s(l_939, 7))
        {
            unsigned l_943 = 0x610D856CL;
            int *l_945 = &g_401;
            unsigned char *l_957 = &g_264;
            int l_1004 = 0L;
            int l_1015 = 1L;
        }
    }



    ;
    return l_823;



}







static char func_65(unsigned char * const p_66, char p_67)
{
    int *l_266 = &g_89;
    int **l_267 = &l_266;
    int **l_268 = &g_220;
    int l_286 = 1L;
    int l_379 = 0xA532686CL;
    char l_399 = 0x90L;
    unsigned char *l_400 = &g_32;
    (*l_267) = l_266;
    (*l_268) = ((*l_267) = (void*)0);

    ;
    ;
    if (p_67)
    {
        unsigned *l_271 = &g_272;
        int l_276 = 1L;
        int l_289 = 0x48F91BDDL;
        int l_290 = 0x2F4E6B69L;
        int ***l_309 = &l_268;
        unsigned char *l_398 = &g_382;
        if ((safe_add_func_uint64_t_u_u((((*l_271) |= 0xB056BFF1L) , p_67), p_67)))
        {
            unsigned l_304 = 1UL;
            int l_334 = 0xA696D1F9L;
            unsigned short l_385 = 5UL;
            unsigned short *l_390 = &l_385;
            unsigned char *l_397 = &g_382;
            for (g_92 = 12; (g_92 > 8); g_92--)
            {
                const char l_275 = 0L;
                int *l_277 = &g_89;
                int *l_278 = &g_89;
                int *l_279 = &l_276;
                int *l_280 = &g_89;
                int *l_281 = &l_276;
                int *l_282 = &g_89;
                int *l_283 = &l_276;
                int *l_284 = &g_89;
                int *l_285 = (void*)0;
                int *l_287 = &l_286;
                int *l_288 = &l_276;
                int *l_291 = (void*)0;
                int *l_292 = &l_289;
                int *l_293 = &l_286;
                short *l_311 = &g_92;
                short **l_310 = &l_311;
                int l_314 = 0xEA728027L;
                short l_333 = 0xD607L;
                int l_377 = 0xF6A8D655L;
                if (l_275)
                    break;
                g_294--;
                for (g_205 = 0; (g_205 <= (-14)); g_205 = safe_sub_func_int8_t_s_s(g_205, 3))
                {
                    unsigned char l_299 = 0x91L;
                    unsigned l_300 = 0x725120B4L;
                    (*l_287) = (+l_299);
                    (*l_284) ^= l_300;
                    --g_301;
                    if (l_304)
                        continue;
                }
                if (((safe_add_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((l_309 != &g_219), 0xB2L)) >= (((*l_310) = &g_179) != (void*)0)), (safe_lshift_func_int8_t_s_u(((**g_157) | (l_276 = l_314)), (*g_158))))) <= (0UL ^ (*l_292))))
                {
                    int *l_335 = &l_290;
                    int *l_336 = &l_289;
                    int *l_337 = &l_276;
                    int *l_338 = (void*)0;
                    int *l_339 = (void*)0;
                    int *l_340 = (void*)0;
                    int *l_341 = &l_276;
                    int *l_342 = &l_334;
                    int *l_343 = &l_286;
                    int *l_344 = &l_334;
                    int *l_345 = (void*)0;
                    int *l_346 = &l_276;
                    int *l_347 = &l_290;
                    int *l_348 = &l_289;
                    int *l_349 = &l_286;
                    int *l_350 = (void*)0;
                    int *l_351 = &l_286;
                    int *l_352 = &l_334;
                    int *l_353 = &l_334;
                    int *l_354 = &l_290;
                    int *l_355 = (void*)0;
                    int *l_356 = &g_89;
                    int *l_357 = &l_276;
                    int *l_358 = &l_286;
                    int *l_359 = (void*)0;
                    int *l_360 = &l_286;
                    int *l_361 = &g_89;
                    int *l_362 = &l_286;
                    int *l_363 = &l_286;
                    int *l_364 = &l_290;
                    int *l_365 = &g_89;
                    int *l_366 = &l_286;
                    int *l_367 = &l_334;
                    int *l_368 = &l_290;
                    int *l_369 = (void*)0;
                    int *l_370 = &l_286;
                    int *l_371 = &g_89;
                    int *l_372 = &l_276;
                    int *l_373 = (void*)0;
                    int *l_374 = &l_286;
                    int *l_375 = &l_286;
                    int *l_376 = &l_334;
                    int *l_378 = &l_289;
                    int *l_380 = &l_276;
                    int *l_381 = &l_379;
                    (*l_287) |= (safe_lshift_func_uint8_t_u_s((((*l_271) = (p_67 > ((safe_mod_func_int32_t_s_s(8L, 0x967B1FDAL)) , p_67))) & (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0xFCD5L, ((safe_add_func_uint16_t_u_u(((safe_mul_func_int64_t_s_s((*l_283), (((void*)0 != &g_220) >= (*p_66)))) <= 18446744073709551613UL), 1UL)) | p_67))), g_94))), g_301));
                    (*l_278) |= (g_94 , p_67);
                    l_334 = (l_304 < ((g_301 ^ (safe_sub_func_int32_t_s_s(0x9416F890L, (p_67 > (p_67 >= g_205))))) >= ((safe_add_func_int8_t_s_s(l_333, (*g_158))) != p_67)));
                    --g_382;
                }
                else
                {
                    if (p_67)
                    {
                        return l_385;
                    }
                    else
                    {
                        (*l_284) |= (0x1F733664A167C121LL <= (*l_279));
                    }
                }

                ;
            }
            l_399 &= (((g_92 && g_205) >= 1L) >= p_67);
            g_401 ^= l_334;
        }
        else
        {
            int l_402 = 0L;
            return l_402;
        }
    }
    else
    {
        for (g_382 = 0; (g_382 <= 21); g_382 = safe_add_func_int64_t_s_s(g_382, 3))
        {
            for (g_32 = (-3); (g_32 >= 40); g_32 = safe_add_func_int64_t_s_s(g_32, 1))
            {
                return p_67;
            }
        }
    }
    return p_67;
}







static unsigned char * const func_68(unsigned long long p_69, long long p_70, unsigned char * p_71, unsigned char * p_72, unsigned p_73)
{
    return (*g_157);


}







static unsigned long long func_76(unsigned char * p_77, unsigned char * p_78, unsigned char * p_79)
{
    long long l_81 = 0L;
    int l_97 = 1L;
    char l_208 = 1L;
    unsigned char l_212 = 1UL;
    int *l_255 = &l_97;
    if (((-4L) <= l_81))
    {
        unsigned l_120 = 4294967291UL;
        unsigned l_122 = 0UL;
        unsigned char *l_132 = &g_32;
        const short l_137 = 8L;
        unsigned char *l_167 = &g_32;
        int *l_177 = &l_97;
        int *l_178 = &l_97;
        int *l_180 = (void*)0;
        int *l_181 = &l_97;
        int *l_182 = &l_97;
        int *l_183 = &g_89;
        int *l_184 = &l_97;
        int *l_185 = &g_89;
        int *l_186 = &l_97;
        int *l_187 = &l_97;
        int *l_188 = &g_89;
        int *l_189 = &l_97;
        int *l_190 = (void*)0;
        int *l_191 = &g_89;
        int *l_192 = &g_89;
        int *l_193 = &l_97;
        int *l_194 = &g_89;
        int *l_195 = &l_97;
        int l_196 = 1L;
        int *l_197 = (void*)0;
        int *l_198 = &l_97;
        int *l_199 = (void*)0;
        int *l_200 = &l_97;
        int *l_201 = &l_196;
        int *l_202 = &l_97;
        int *l_203 = &l_196;
        int *l_204 = &g_89;
        int *l_206 = &g_89;
        int *l_207 = (void*)0;
        for (g_32 = 0; (g_32 > 32); g_32++)
        {
            unsigned char *l_85 = &g_32;
            unsigned char **l_84 = &l_85;
            int *l_117 = &l_97;
            int l_121 = 0L;
            const int *l_176 = &l_121;
            const int **l_175 = &l_176;
            if ((((*l_84) = p_77) != &g_32))
            {
                int *l_86 = (void*)0;
                int *l_87 = (void*)0;
                int *l_88 = &g_89;
                int *l_90 = &g_89;
                int *l_91 = (void*)0;
                int *l_93 = &g_89;
                int *l_95 = &g_89;
                int *l_96 = &g_89;
                int *l_98 = &l_97;
                int *l_99 = &l_97;
                int *l_100 = &l_97;
                int *l_101 = &l_97;
                int *l_102 = &g_89;
                int *l_103 = &l_97;
                int *l_104 = (void*)0;
                int *l_105 = &l_97;
                int *l_106 = &g_89;
                int *l_107 = &g_89;
                int *l_108 = &g_89;
                int *l_109 = &g_89;
                int l_110 = (-1L);
                int *l_111 = &l_97;
                int *l_112 = &l_97;
                g_113++;
            }
            else
            {
                int *l_116 = &l_97;
                unsigned char **l_129 = (void*)0;
                unsigned char *l_131 = (void*)0;
                unsigned char **l_130 = &l_131;
                char *l_138 = &g_139;
                unsigned short *l_142 = (void*)0;
                unsigned short *l_143 = &g_144;
                short *l_168 = &g_92;
                unsigned l_169 = 4UL;
                int *l_170 = (void*)0;
                int *l_171 = &g_89;
                l_122 |= ((g_89 ^ ((g_89 , ((l_117 = l_116) == (((safe_sub_func_int8_t_s_s((*l_116), g_94)) > l_97) , &g_89))) <= (((g_89 != ((0UL && 8UL) || 1L)) ^ l_120) , l_121))) <= g_21);
                (*l_117) = ((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((*l_130) = ((*l_84) = &g_32)) != l_132), (*l_117))), (safe_rshift_func_uint8_t_u_u((*l_116), 5)))), ((safe_div_func_int16_t_s_s(l_137, g_21)) , ((*l_143) ^= (((*l_138) = (*l_116)) && ((safe_mod_func_int64_t_s_s(l_122, (*l_117))) , 1L)))))) , (-5L));

                ;
                ;
                (*l_171) = ((l_97 = (g_21 ^ (l_122 , (((safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_113, (safe_mul_func_uint8_t_u_u(((((*l_168) = (((safe_sub_func_int8_t_s_s((g_157 != &l_131), ((*l_117) != ((*l_116) | (*l_117))))) && (((((!((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_s(0x4CL, 5)) || 0x0009L) , l_122) , (-1L)), 1)), g_92)), 0xDF94L)) , (*l_117))) , l_167) != p_78) >= 0xD3L) || 8L)) < (-3L))) , (*l_116)) , l_137), l_169)))), l_122)), 0x8DL)), g_21)) , 0UL) < (*l_116))))) && 0L);
                for (l_97 = 6; (l_97 < (-28)); l_97 = safe_sub_func_int64_t_s_s(l_97, 1))
                {
                    unsigned char ***l_174 = &g_157;
                    (*l_174) = &g_158;

                    ;
                }
            }


            (*l_175) = (void*)0;

            ;
        }
        g_209--;
    }
    else
    {
        int *l_213 = &l_97;
        unsigned char ***l_217 = &g_157;
        (*l_213) ^= l_212;
        if (l_212)
        {
            int **l_214 = &l_213;
            const unsigned l_242 = 0x3D0BF8AEL;
            unsigned long long *l_243 = &g_209;
            (*l_214) = l_213;
            for (g_94 = 0; (g_94 < 25); g_94 = safe_add_func_uint64_t_u_u(g_94, 4))
            {
                int **l_218 = &l_213;
                int * const **l_221 = &g_219;
                (*g_220) = ((**l_214) , (((void*)0 != l_217) >= (g_94 , (l_218 == ((*l_221) = g_219)))));
                if ((*g_220))
                {
                    (*l_214) = &l_97;
                }
                else
                {
                    unsigned long long *l_224 = &g_209;
                    unsigned char *l_225 = (void*)0;
                    unsigned char *l_226 = &l_212;
                    (*l_213) = ((**l_214) >= (safe_lshift_func_uint8_t_u_u((*g_158), ((*l_226) = ((**l_214) < ((*l_224) = 18446744073709551612UL))))));
                    (*l_213) = (*g_220);
                }
                return g_94;
            }
            (**l_214) = (p_77 == (((**l_214) || (safe_mul_func_uint8_t_u_u(((((safe_unary_minus_func_uint16_t_u((((*l_243) = (safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(((((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(0x0EL, ((g_94 < (((l_208 > (((*g_158) = (g_144 == (safe_lshift_func_int8_t_s_s(g_89, 7)))) <= (*l_213))) , (*p_78)) > l_97)) && (*l_213)))), (*l_213))), l_212)) , g_209) , g_113) & (**l_214)), l_242)), (*l_213)))) , l_208))) && g_179) && g_209) , 250UL), 0x01L))) , &g_139));
            for (g_113 = 0; (g_113 != 33); ++g_113)
            {
                unsigned long long l_246 = 18446744073709551615UL;
                (*l_213) &= (*g_220);
                (*l_213) |= l_246;
                (**l_214) |= (**g_219);
            }
        }
        else
        {
            const int *l_253 = (void*)0;
            unsigned *l_254 = &g_113;
            int **l_256 = &l_213;
            int **l_257 = (void*)0;
            int **l_258 = &l_255;
            for (g_139 = 23; (g_139 != (-28)); g_139 = safe_sub_func_int64_t_s_s(g_139, 1))
            {
                const int *l_252 = &g_89;
                for (g_94 = 0; (g_94 >= 13); ++g_94)
                {
                    int **l_251 = &g_220;
                    (*l_251) = (*g_219);
                    return g_139;
                }
                l_253 = l_252;

                ;
            }

            ;
            (**g_219) = (**g_219);
            (*l_258) = (((*l_254) = 0x09D23E52L) , ((*l_256) = l_255));
            (*l_256) = l_213;
        }
        if ((*l_255))
        {
            return g_89;
        }
        else
        {
            int * const l_259 = &g_89;
            int **l_260 = &g_220;
            (*l_260) = l_259;

            ;
        }

        ;
    }
    for (l_81 = 0; (l_81 >= (-17)); l_81 = safe_sub_func_int32_t_s_s(l_81, 9))
    {
        return g_32;
    }
    return g_92;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_436, "g_436", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_784, "g_784", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_817, "g_817", print_hash_value);
    transparent_crc(g_871, "g_871", print_hash_value);
    transparent_crc(g_872, "g_872", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_880, "g_880", print_hash_value);
    transparent_crc(g_926, "g_926", print_hash_value);
    transparent_crc(g_1018, "g_1018", print_hash_value);
    transparent_crc(g_1119, "g_1119", print_hash_value);
    transparent_crc(g_1120, "g_1120", print_hash_value);
    transparent_crc(g_1167, "g_1167", print_hash_value);
    transparent_crc(g_1233, "g_1233", print_hash_value);
    transparent_crc(g_1234, "g_1234", print_hash_value);
    transparent_crc(g_1451, "g_1451", print_hash_value);
    transparent_crc(g_1591, "g_1591", print_hash_value);
    transparent_crc(g_1606, "g_1606", print_hash_value);
    transparent_crc(g_1640, "g_1640", print_hash_value);
    transparent_crc(g_1646, "g_1646", print_hash_value);
    transparent_crc(g_1755, "g_1755", print_hash_value);
    transparent_crc(g_1764, "g_1764", print_hash_value);
    transparent_crc(g_1789, "g_1789", print_hash_value);
    transparent_crc(g_1873, "g_1873", print_hash_value);
    transparent_crc(g_1897, "g_1897", print_hash_value);
    transparent_crc(g_1988, "g_1988", print_hash_value);
    transparent_crc(g_2073, "g_2073", print_hash_value);
    transparent_crc(g_2074, "g_2074", print_hash_value);
    transparent_crc(g_2076, "g_2076", print_hash_value);
    transparent_crc(g_2081, "g_2081", print_hash_value);
    transparent_crc(g_2115, "g_2115", print_hash_value);
    transparent_crc(g_2332, "g_2332", print_hash_value);
    transparent_crc(g_2333, "g_2333", print_hash_value);
    transparent_crc(g_2336, "g_2336", print_hash_value);
    transparent_crc(g_2339, "g_2339", print_hash_value);
    transparent_crc(g_2340, "g_2340", print_hash_value);
    transparent_crc(g_2774, "g_2774", print_hash_value);
    transparent_crc(g_2775, "g_2775", print_hash_value);
    transparent_crc(g_2860, "g_2860", print_hash_value);
    transparent_crc(g_2885, "g_2885", print_hash_value);
    transparent_crc(g_2903, "g_2903", print_hash_value);
    transparent_crc(g_2983, "g_2983", print_hash_value);
    transparent_crc(g_3158, "g_3158", print_hash_value);
    transparent_crc(g_3164, "g_3164", print_hash_value);
    transparent_crc(g_3254, "g_3254", print_hash_value);
    transparent_crc(g_3397, "g_3397", print_hash_value);
    transparent_crc(g_3400, "g_3400", print_hash_value);
    transparent_crc(g_3524, "g_3524", print_hash_value);
    transparent_crc(g_3532, "g_3532", print_hash_value);
    transparent_crc(g_3538, "g_3538", print_hash_value);
    transparent_crc(g_3545, "g_3545", print_hash_value);
    transparent_crc(g_3653, "g_3653", print_hash_value);
    transparent_crc(g_3667, "g_3667", print_hash_value);
    transparent_crc(g_3786, "g_3786", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
