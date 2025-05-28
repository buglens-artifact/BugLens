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
   long long f0;
};

struct S1 {
   long long f0;
   short f1;
};


static struct S1 g_2 = {0L,0xDA8EL};
static struct S1 g_3 = {2L,-1L};
static unsigned long long g_16 = 0x598AAF0A9B27FA3DLL;
static short g_19 = 0x491BL;
static unsigned char g_60 = 7UL;
static unsigned long long g_65 = 18446744073709551606UL;
static short g_73 = 0x22C1L;
static short g_76 = (-1L);
static long long g_77 = (-2L);
static unsigned long long g_78 = 0xB5DAE8CE1F6DC3DBLL;
static unsigned short g_79 = 5UL;
static short g_83 = 0x4C35L;
static struct S1 g_88[3] = {{0x5B4C718FE3B64D7ELL,6L}, {0x5B4C718FE3B64D7ELL,6L}, {0x5B4C718FE3B64D7ELL,6L}};
static unsigned g_105 = 18446744073709551615UL;
static const struct S0 g_128[9] = {{5L}, {0L}, {5L}, {0L}, {5L}, {0L}, {5L}, {0L}, {5L}};
static struct S0 g_129[9] = {{-10L}, {-10L}, {-10L}, {-10L}, {-10L}, {-10L}, {-10L}, {-10L}, {-10L}};
static unsigned char g_172 = 1UL;
static long long g_173[7][4][8] = {{{0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}}, {{0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}}, {{0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}}, {{0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}}, {{0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}}, {{0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}}, {{0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}, {0xDDAE1D841891164BLL, 4L, 4L, 0x9C317561C6BE33A2LL, 4L, 4L, 0xDDAE1D841891164BLL, 0x58E0F9DADCB9365FLL}}};
static char g_179 = 0xC1L;
static unsigned g_180 = 0x10BD41EAL;
static short g_185 = 0xFD5AL;
static unsigned char g_188 = 3UL;
static unsigned long long g_201 = 8UL;
static unsigned char g_210 = 0xE9L;
static int g_269[2] = {1L, 1L};
static int g_291[9][6][4] = {{{8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}}, {{8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}}, {{8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}}, {{8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}}, {{8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}}, {{8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}}, {{8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}}, {{8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}}, {{8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}, {8L, 0x2E0A35E8L, 0x19A467A1L, 1L}}};
static unsigned short g_292 = 65535UL;
static unsigned g_310 = 0x24CCB701L;
static long long g_320 = 0L;
static unsigned short g_323 = 1UL;
static short g_326[3] = {0x07D0L, 0x07D0L, 0x07D0L};
static short g_330 = 1L;
static unsigned g_335 = 0x39425CAEL;
static int g_337 = 3L;
static unsigned short g_359[1][8][10] = {{{0x206EL, 0xC3D9L, 65529UL, 9UL, 0x1AFBL, 0x02EAL, 0x0A03L, 3UL, 0xA006L, 0xA006L}, {0x206EL, 0xC3D9L, 65529UL, 9UL, 0x1AFBL, 0x02EAL, 0x0A03L, 3UL, 0xA006L, 0xA006L}, {0x206EL, 0xC3D9L, 65529UL, 9UL, 0x1AFBL, 0x02EAL, 0x0A03L, 3UL, 0xA006L, 0xA006L}, {0x206EL, 0xC3D9L, 65529UL, 9UL, 0x1AFBL, 0x02EAL, 0x0A03L, 3UL, 0xA006L, 0xA006L}, {0x206EL, 0xC3D9L, 65529UL, 9UL, 0x1AFBL, 0x02EAL, 0x0A03L, 3UL, 0xA006L, 0xA006L}, {0x206EL, 0xC3D9L, 65529UL, 9UL, 0x1AFBL, 0x02EAL, 0x0A03L, 3UL, 0xA006L, 0xA006L}, {0x206EL, 0xC3D9L, 65529UL, 9UL, 0x1AFBL, 0x02EAL, 0x0A03L, 3UL, 0xA006L, 0xA006L}, {0x206EL, 0xC3D9L, 65529UL, 9UL, 0x1AFBL, 0x02EAL, 0x0A03L, 3UL, 0xA006L, 0xA006L}}};
static long long g_361 = 0xF50A1A2D6AC200E6LL;
static int g_401 = 8L;
static char g_562 = 0x03L;
static unsigned char g_628[1][7] = {{1UL, 1UL, 0x2AL, 1UL, 1UL, 0x2AL, 1UL}};
static unsigned g_651[5][10] = {{0x18858E5CL, 0xA91647AEL, 0xEA47086EL, 0x3667B15CL, 0x3667B15CL, 0xEA47086EL, 0xA91647AEL, 0x18858E5CL, 0xEA47086EL, 0x18858E5CL}, {0x18858E5CL, 0xA91647AEL, 0xEA47086EL, 0x3667B15CL, 0x3667B15CL, 0xEA47086EL, 0xA91647AEL, 0x18858E5CL, 0xEA47086EL, 0x18858E5CL}, {0x18858E5CL, 0xA91647AEL, 0xEA47086EL, 0x3667B15CL, 0x3667B15CL, 0xEA47086EL, 0xA91647AEL, 0x18858E5CL, 0xEA47086EL, 0x18858E5CL}, {0x18858E5CL, 0xA91647AEL, 0xEA47086EL, 0x3667B15CL, 0x3667B15CL, 0xEA47086EL, 0xA91647AEL, 0x18858E5CL, 0xEA47086EL, 0x18858E5CL}, {0x18858E5CL, 0xA91647AEL, 0xEA47086EL, 0x3667B15CL, 0x3667B15CL, 0xEA47086EL, 0xA91647AEL, 0x18858E5CL, 0xEA47086EL, 0x18858E5CL}};
static short g_849 = 0L;
static unsigned g_1039 = 4294967295UL;



static long long func_1(void);
static unsigned short func_8(unsigned short p_9, struct S0 p_10, short p_11);
static short func_21(unsigned p_22, unsigned p_23);
static unsigned func_24(char p_25);
static struct S1 func_26(short p_27, int p_28, unsigned char p_29);
static int func_34(char p_35);
static const unsigned long long func_40(unsigned p_41);
static int func_48(int p_49);
static int func_52(long long p_53, unsigned p_54);
static unsigned char func_62(unsigned short p_63, long long p_64);
static long long func_1(void)
{
    unsigned short l_4 = 0x07D7L;
    int l_5 = 0L;
    unsigned short l_20 = 0xE7C1L;
    int l_629 = (-5L);
    int l_850 = 0L;
    struct S0 l_1031[6] = {{0xD4B35E5881CEC233LL}, {0xD4B35E5881CEC233LL}, {0x3CAF890D25714C17LL}, {0xD4B35E5881CEC233LL}, {0xD4B35E5881CEC233LL}, {0x3CAF890D25714C17LL}};
    struct S1 l_1036 = {0x81B90217FD37F0F8LL,2L};
    short l_1043 = 1L;
    int i;
    g_3 = g_2;
    l_5 = (l_4 = (-4L));
    if ((safe_add_func_uint8_t_u_u(g_2.f0, ((l_5 = l_4) > func_8((safe_rshift_func_uint16_t_u_s(((l_850 = (safe_rshift_func_int8_t_s_s((g_16 = l_4), (g_849 = ((((safe_sub_func_uint64_t_u_u(((g_19 = g_3.f1) < l_20), (g_2.f1 && func_21((l_629 = (0L ^ (((g_628[0][2] = func_24((0xC5051DD2E91C8413LL <= l_4))) | 0x82EE9422L) ^ l_4))), g_269[0])))) > l_4) && g_76) || 0x8F15L))))) & 0x412CE1D69197FF21LL), 5)), g_128[5], l_4)))))
    {
        long long l_952 = 0x2C061371CC9A3749LL;
        int l_992 = 0x8C1A1AE7L;
        int l_1004[2][3] = {{(-1L), 1L, (-1L)}, {(-1L), 1L, (-1L)}};
        int l_1011 = 0x50A69BFFL;
        struct S1 l_1028 = {0x0AAAB258492861F0LL,-8L};
        int i, j;
        if (g_326[0])
        {
            struct S0 l_932 = {0L};
            for (g_180 = (-21); (g_180 <= 8); ++g_180)
            {
                struct S0 l_933[6][4][3] = {{{{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}}, {{{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}}, {{{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}}, {{{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}}, {{{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}}, {{{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}, {{0xA5238C4D49524A02LL}, {0x034D433F170B6C41LL}, {0xDCE8A5A378340C3DLL}}}};
                int i, j, k;
                l_933[1][3][2] = l_932;
                return l_933[1][3][2].f0;
            }
            g_337 = (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(1UL, ((safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(func_62(g_310, (g_330 >= (((safe_mul_func_uint8_t_u_u(g_326[0], func_52(l_629, l_932.f0))) < ((safe_lshift_func_int16_t_s_s(0x7837L, ((l_952 || 0x45A03EF3L) && l_932.f0))) | (-1L))) >= l_932.f0))), l_932.f0)), 9UL)) < l_932.f0))) || l_932.f0), 0x18L)), g_3.f1)), g_180)), 6L));
        }
        else
        {
            unsigned char l_957 = 255UL;
            int l_971 = 0xC24FA133L;
            unsigned l_1020[9][4][1] = {{{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}};
            int l_1027 = 0L;
            int i, j, k;
            if (g_326[1])
            {
                unsigned l_966[1][10];
                unsigned char l_973 = 0UL;
                int l_995 = (-1L);
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_966[i][j] = 4UL;
                }
                for (g_78 = 0; (g_78 > 32); ++g_78)
                {
                    int l_991 = 1L;
                    for (g_401 = 0; (g_401 >= 29); ++g_401)
                    {
                        return g_19;
                    }
                    for (g_172 = 0; (g_172 <= 0); g_172 += 1)
                    {
                        int i, j;
                        l_957 = g_628[g_172][g_172];
                        l_629 = g_628[g_172][g_172];
                    }
                    for (g_65 = 0; (g_65 < 3); g_65 = safe_add_func_int8_t_s_s(g_65, 4))
                    {
                        unsigned l_972 = 0x601E2313L;
                        int l_974 = 0x5F13D91DL;
                        l_974 = (safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((g_180 >= 0xFDFCDFAE2C1F66BDLL), (safe_div_func_int32_t_s_s(((l_971 = ((g_77 = (l_966[0][5] ^ (((g_76 = (g_185 = (safe_lshift_func_int8_t_s_s(((g_361 == ((g_310 = (safe_div_func_int32_t_s_s(0xCE096BECL, l_957))) != l_971)) | 0x6077L), 0)))) | (l_972 != 0x5D1C7F17L)) | g_337))) & 2UL)) | l_973), 0xAC7140C8L)))), 0xB8B81A3CC50B2E5ELL));
                        g_401 = (safe_mul_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(g_335, ((g_310 = (((+((((safe_mul_func_uint16_t_u_u(0xA2E2L, l_972)) | (l_971 = ((g_78 > (safe_mod_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((0x7DB8L > l_952), (safe_lshift_func_int8_t_s_u(l_973, (g_172 = ((g_562 <= (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(g_19, 13)), 0xA9DFAF3EL))) == 0xFE44776000428BC0LL)))))) && l_971), g_562))) >= 0x44BA94EA24FAAE9CLL))) | (-1L)) >= l_991)) <= l_991) != l_957)) || g_359[0][2][3]))) <= 6UL), 0UL));
                        l_992 = 1L;
                    }
                    l_971 = (safe_rshift_func_uint16_t_u_s((l_995 = g_2.f1), 5));
                }
                g_88[2] = g_88[1];
                l_995 = (safe_rshift_func_int8_t_s_u(0x7FL, (safe_div_func_int64_t_s_s((g_3.f0 = (safe_rshift_func_int16_t_s_s((l_1004[0][2] = (safe_mod_func_int32_t_s_s((l_992 = (l_966[0][0] & (g_60 && g_651[2][5]))), (g_269[0] || g_73)))), (l_971 = ((g_292 = (safe_mul_func_int8_t_s_s(l_966[0][7], (safe_mod_func_uint8_t_u_u(6UL, (safe_div_func_uint8_t_u_u(((l_1011 = ((l_629 && 0x70B06D56F7418779LL) <= l_957)) & l_952), 0xDAL))))))) ^ 0x2C96L))))), 0x30EC682DB04BD83FLL))));
            }
            else
            {
                unsigned char l_1013 = 0UL;
                int l_1026 = 0x7916C849L;
                unsigned l_1029 = 0x46E7AA4CL;
                if ((g_76 <= ((safe_unary_minus_func_int8_t_s((255UL >= (0x14L ^ g_320)))) ^ l_1013)))
                {
                    char l_1025[7] = {0x44L, 0xABL, 0x44L, 0xABL, 0x44L, 0xABL, 0x44L};
                    int i;
                    for (g_83 = 0; (g_83 < 23); ++g_83)
                    {
                        g_401 = (safe_lshift_func_int8_t_s_u(0xCCL, 2));
                    }
                    l_1028 = func_26(((l_1027 = (l_971 = (safe_lshift_func_uint8_t_u_u((func_48(g_361) & (l_1026 = (((l_1020[0][1][0] = l_1004[0][2]) == (safe_add_func_int32_t_s_s((0L > (~(0x0BBE31B4C588F05ALL == ((l_5 & g_326[0]) & g_310)))), (safe_mul_func_int16_t_s_s(l_1025[3], l_971))))) & 0x1926D05C51AAB17CLL))), 1)))) == l_5), g_172, g_361);
                    l_1027 = 0x1A43C79CL;
                }
                else
                {
                    for (g_3.f0 = 2; (g_3.f0 >= 0); g_3.f0 -= 1)
                    {
                        struct S0 l_1030[3] = {{0x7B11C6F633CC4723LL}, {0x7B11C6F633CC4723LL}, {0x7B11C6F633CC4723LL}};
                        int i;
                        g_88[g_3.f0] = g_88[g_3.f0];
                        l_1029 = (-7L);
                        l_1031[0] = l_1030[0];
                    }
                }
            }
        }
        l_629 = (safe_div_func_uint8_t_u_u(l_850, (safe_sub_func_uint16_t_u_u((!g_210), g_78))));
        l_1036 = g_2;
    }
    else
    {
        unsigned short l_1040 = 1UL;
        for (g_188 = 0; (g_188 != 14); ++g_188)
        {
            l_850 = g_1039;
            g_337 = (-1L);
            g_3 = l_1036;
            if (l_1040)
                break;
        }
        g_337 = (safe_add_func_uint64_t_u_u(l_1043, l_1040));
        return l_1040;
    }
    return g_188;
}







static unsigned short func_8(unsigned short p_9, struct S0 p_10, short p_11)
{
    char l_855 = 9L;
    struct S0 l_858 = {0xD685B50152A5702ELL};
    unsigned l_865 = 18446744073709551615UL;
    for (g_65 = 16; (g_65 == 34); g_65 = safe_add_func_uint32_t_u_u(g_65, 6))
    {
        unsigned l_856 = 5UL;
        int l_857[8][3] = {{0x729AD731L, 0xBF3EE811L, (-7L)}, {0x729AD731L, 0xBF3EE811L, (-7L)}, {0x729AD731L, 0xBF3EE811L, (-7L)}, {0x729AD731L, 0xBF3EE811L, (-7L)}, {0x729AD731L, 0xBF3EE811L, (-7L)}, {0x729AD731L, 0xBF3EE811L, (-7L)}, {0x729AD731L, 0xBF3EE811L, (-7L)}, {0x729AD731L, 0xBF3EE811L, (-7L)}};
        unsigned char l_903 = 253UL;
        int i, j;
        l_857[1][1] = ((0x5A23L && func_52((g_173[3][2][1] = func_52((safe_mod_func_int64_t_s_s((p_10.f0 = func_52(g_3.f0, (+(0L & g_326[2])))), g_628[0][2])), l_855)), l_856)) != l_856);
        g_337 = l_855;
        if (l_856)
            continue;
        for (p_11 = 0; (p_11 <= 2); p_11 += 1)
        {
            long long l_872 = (-4L);
            int l_873 = 7L;
            int l_875 = 0x953E4268L;
            struct S1 l_909 = {1L,0x5E01L};
            struct S0 l_929[3][8] = {{{0x630BC2851657C63BLL}, {2L}, {0x630BC2851657C63BLL}, {2L}, {0x630BC2851657C63BLL}, {2L}, {0x630BC2851657C63BLL}, {2L}}, {{0x630BC2851657C63BLL}, {2L}, {0x630BC2851657C63BLL}, {2L}, {0x630BC2851657C63BLL}, {2L}, {0x630BC2851657C63BLL}, {2L}}, {{0x630BC2851657C63BLL}, {2L}, {0x630BC2851657C63BLL}, {2L}, {0x630BC2851657C63BLL}, {2L}, {0x630BC2851657C63BLL}, {2L}}};
            int i, j;
            l_858 = p_10;
            for (g_19 = 0; (g_19 <= 0); g_19 += 1)
            {
                int l_881 = (-1L);
                int l_884[4][7] = {{0x48D56414L, 0x48D56414L, 0x0B710BA6L, 0xA8E0F82DL, (-2L), 0xA8E0F82DL, 0x0B710BA6L}, {0x48D56414L, 0x48D56414L, 0x0B710BA6L, 0xA8E0F82DL, (-2L), 0xA8E0F82DL, 0x0B710BA6L}, {0x48D56414L, 0x48D56414L, 0x0B710BA6L, 0xA8E0F82DL, (-2L), 0xA8E0F82DL, 0x0B710BA6L}, {0x48D56414L, 0x48D56414L, 0x0B710BA6L, 0xA8E0F82DL, (-2L), 0xA8E0F82DL, 0x0B710BA6L}};
                const int l_908 = 1L;
                struct S0 l_928[8][8][4] = {{{{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}}, {{{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}}, {{{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}}, {{{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}}, {{{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}}, {{{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}}, {{{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}}, {{{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}, {{0xBB86BD509F46330BLL}, {9L}, {1L}, {0xAE99764063C4421DLL}}}};
                int i, j, k;
                if ((safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((g_359[g_19][g_19][(p_11 + 5)] && p_9), 13)) | (l_865 > (~g_359[g_19][g_19][(p_11 + 5)]))), ((p_9 <= ((safe_mod_func_uint8_t_u_u(g_16, ((+(safe_mod_func_int8_t_s_s(g_359[g_19][g_19][(p_11 + 5)], (safe_mul_func_uint8_t_u_u((l_872 = g_2.f1), p_11))))) && l_872))) | l_873)) & 0x7C155F2CL))), 13)))
                {
                    unsigned l_876 = 3UL;
                    struct S1 l_885 = {0L,0xC08CL};
                    for (g_16 = 0; (g_16 <= 2); g_16 += 1)
                    {
                        long long l_874 = 0xE58A67B8023E57EELL;
                        l_876 = (l_875 = ((l_874 = p_11) && l_873));
                        return g_361;
                    }
                    if ((safe_rshift_func_uint16_t_u_s(((g_73 ^ 0xEDL) | g_185), ((l_881 = (g_172 = (g_628[0][4] = (safe_lshift_func_int16_t_s_u((!0xB273L), (g_359[0][7][4] = g_3.f0)))))) == (safe_rshift_func_uint16_t_u_u((g_291[4][5][1] & 0x0DC2L), l_884[2][0]))))))
                    {
                        l_873 = p_10.f0;
                        l_885 = g_88[1];
                        g_337 = (safe_div_func_int64_t_s_s(((p_11 || 0xE3521481L) || (!(safe_mul_func_uint8_t_u_u((g_172 = 0xA2L), 0xF9L)))), g_326[1]));
                    }
                    else
                    {
                        unsigned short l_894 = 0x66F2L;
                        l_858 = (p_10 = p_10);
                        if (l_857[1][1])
                            break;
                        l_873 = (((0xB208L ^ (p_9 = ((safe_add_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(func_52(func_52((p_11 == (g_337 = ((~l_894) > (safe_sub_func_uint16_t_u_u((l_903 = (l_894 || (g_310 = func_52((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(p_11, (g_179 ^ 8UL))), func_52((func_52(p_10.f0, (g_335 = (g_105 = (safe_sub_func_int32_t_s_s(p_9, l_885.f0))))) && l_885.f1), p_9))), p_10.f0)))), g_849))))), p_11), l_894), g_849)) != l_857[0][0]), l_894)) & g_3.f0))) < l_857[1][1]) != 65528UL);
                    }
                    for (g_320 = 0; (g_320 <= 2); g_320 += 1)
                    {
                        g_337 = (g_79 <= (safe_lshift_func_int8_t_s_u((l_881 & (safe_lshift_func_int16_t_s_u(g_129[3].f0, l_908))), 6)));
                    }
                }
                else
                {
                    unsigned short l_912 = 0x3E6BL;
                    l_909 = g_2;
                    g_337 = (g_88[1].f0 | (l_912 >= (((4L || g_359[0][1][7]) && p_10.f0) >= g_337)));
                    for (g_3.f1 = 2; (g_3.f1 >= 0); g_3.f1 -= 1)
                    {
                        short l_913[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_913[i] = 5L;
                        g_337 = (((~(l_913[4] = g_78)) & (safe_rshift_func_int16_t_s_s(l_909.f0, 13))) && l_913[3]);
                        g_337 = (func_52(p_9, (safe_lshift_func_int16_t_s_u(p_9, (((safe_rshift_func_uint16_t_u_s(((((safe_div_func_uint64_t_u_u(0x74D4F4D76B54AE6CLL, (safe_lshift_func_uint8_t_u_u(1UL, l_873)))) >= (p_11 < ((l_856 ^ g_330) ^ func_52((safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u((((l_858.f0 ^ g_3.f1) > p_11) && 0xB710363CBB69E8A5LL), p_9)), l_912)), l_855)))) < l_909.f0) && 0x884B1D52L), l_909.f1)) & p_9) <= l_855)))) >= 0x6B67L);
                    }
                }
                if (g_179)
                    continue;
                l_929[1][5] = l_928[6][7][3];
            }
        }
    }
    return p_10.f0;
}







static short func_21(unsigned p_22, unsigned p_23)
{
    struct S0 l_630 = {-5L};
    short l_669 = 0x6DB4L;
    int l_670 = 0x1EEF6435L;
    struct S1 l_690 = {-1L,0L};
    int l_698[5];
    unsigned long long l_706 = 0xE288136E3AC6AC43LL;
    unsigned short l_845 = 0xF917L;
    int i;
    for (i = 0; i < 5; i++)
        l_698[i] = 0x9C3361FEL;
    l_630 = l_630;
    for (g_76 = 0; (g_76 < 17); g_76 = safe_add_func_uint64_t_u_u(g_76, 3))
    {
        struct S0 l_646 = {0xBBF389CF50CD02DFLL};
        int l_673 = 0L;
        int l_737 = 0L;
        struct S1 l_826 = {0x8F47A5E59ED52FCELL,0xCD1DL};
        short l_848 = 0x910DL;
        for (g_78 = 24; (g_78 == 8); g_78--)
        {
            short l_637[6][2][5] = {{{(-1L), (-1L), (-1L), 0x5F78L, 0x1819L}, {(-1L), (-1L), (-1L), 0x5F78L, 0x1819L}}, {{(-1L), (-1L), (-1L), 0x5F78L, 0x1819L}, {(-1L), (-1L), (-1L), 0x5F78L, 0x1819L}}, {{(-1L), (-1L), (-1L), 0x5F78L, 0x1819L}, {(-1L), (-1L), (-1L), 0x5F78L, 0x1819L}}, {{(-1L), (-1L), (-1L), 0x5F78L, 0x1819L}, {(-1L), (-1L), (-1L), 0x5F78L, 0x1819L}}, {{(-1L), (-1L), (-1L), 0x5F78L, 0x1819L}, {(-1L), (-1L), (-1L), 0x5F78L, 0x1819L}}, {{(-1L), (-1L), (-1L), 0x5F78L, 0x1819L}, {(-1L), (-1L), (-1L), 0x5F78L, 0x1819L}}};
            int i, j, k;
            g_337 = (safe_lshift_func_int8_t_s_u(((g_310 = (l_637[0][1][3] && (g_359[0][2][7] < p_23))) > p_23), 0));
            for (g_60 = 0; (g_60 != 46); ++g_60)
            {
                short l_640 = 0xD587L;
                l_640 = g_320;
            }
        }
        for (g_323 = (-29); (g_323 <= 49); ++g_323)
        {
            g_337 = ((8UL && p_23) > g_269[0]);
        }
        for (g_60 = 14; (g_60 < 44); g_60 = safe_add_func_uint64_t_u_u(g_60, 1))
        {
            struct S0 l_645 = {0xA9E0575497174C5CLL};
            int l_676 = (-1L);
            int l_733 = 0L;
            struct S1 l_796[2] = {{0xC4698256512E6312LL,0x607CL}, {0xC4698256512E6312LL,0x607CL}};
            short l_834[1];
            int i;
            for (i = 0; i < 1; i++)
                l_834[i] = 1L;
            l_646 = l_645;
            if (((safe_div_func_int32_t_s_s((g_628[0][2] <= (((safe_mod_func_int64_t_s_s(l_646.f0, (g_201 = 0xB5DFF8403A8FED79LL))) != g_173[6][2][6]) != 0x7C303BEFC0F36B97LL)), l_646.f0)) == p_22))
            {
                unsigned l_660[1][10] = {{18446744073709551610UL, 18446744073709551615UL, 0x63DBFB25L, 0x63DBFB25L, 18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 0x63DBFB25L, 0x63DBFB25L, 18446744073709551615UL}};
                int l_663[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_663[i] = 0x2AC70E85L;
                if ((l_646.f0 || (g_651[0][8] | (8L >= (safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(g_326[0], (((l_646.f0 && (g_65 < (safe_rshift_func_uint8_t_u_s((+(safe_mul_func_int8_t_s_s(l_646.f0, l_660[0][1]))), ((safe_mod_func_uint32_t_u_u((l_663[0] = (((g_326[2] >= l_646.f0) & p_22) != g_651[0][9])), l_645.f0)) < p_23))))) || 0UL) | l_630.f0))), l_660[0][1]))))))
                {
                    unsigned short l_664 = 0x0525L;
                    l_670 = (((5UL ^ (g_337 = l_646.f0)) && l_646.f0) == func_52((l_664 <= (safe_mod_func_uint16_t_u_u(p_22, ((safe_sub_func_uint32_t_u_u(g_401, 0x573C95D2L)) || g_210)))), l_669));
                }
                else
                {
                    unsigned short l_677 = 65535UL;
                    for (g_323 = (-24); (g_323 > 3); g_323++)
                    {
                        char l_686 = 0x9AL;
                        int l_689 = 0L;
                        l_677 = ((l_673 = g_291[1][1][3]) & (3L != (l_676 = ((safe_rshift_func_uint16_t_u_s(g_88[1].f1, 5)) != 0L))));
                        l_689 = ((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(0UL, ((safe_add_func_uint16_t_u_u(func_62((p_22 != (l_677 & g_337)), l_645.f0), (p_22 & (((safe_rshift_func_int8_t_s_u(((l_663[0] = l_686) == (safe_sub_func_uint16_t_u_u((g_173[5][2][7] & 3L), p_23))), 7)) <= g_179) <= 0xF3L)))) > 0x2CL))), 65533UL)) != l_677);
                        l_630 = g_129[7];
                        g_88[0] = l_690;
                    }
                    for (l_670 = 0; (l_670 <= 15); l_670++)
                    {
                        unsigned l_697 = 0xFE4163B6L;
                        l_698[2] = ((-1L) <= ((func_62((g_326[0] != ((func_52((~(l_676 = (safe_add_func_uint16_t_u_u(65528UL, ((safe_lshift_func_int8_t_s_s(func_52(p_23, g_88[1].f1), (p_23 && l_660[0][1]))) <= (p_22 & p_22)))))), l_697) <= l_646.f0) <= p_22)), l_697) > l_677) < p_22));
                        l_663[0] = (l_676 = (l_677 > p_23));
                    }
                }
                if (p_22)
                    continue;
            }
            else
            {
                unsigned short l_699 = 1UL;
                struct S0 l_705[3][9][9] = {{{{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}}, {{{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}}, {{{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}, {{-6L}, {0xF88562BB41A0957ELL}, {0x4E56962F508D402ELL}, {0xFD658399F11625DBLL}, {-1L}, {0x5149CE095EB35984LL}, {1L}, {0xFC0C1648F8B1F912LL}, {0x7685CFD5761F8CD6LL}}}};
                int i, j, k;
                l_699 = l_645.f0;
                l_673 = (l_673 | g_76);
                for (g_201 = (-15); (g_201 >= 41); g_201++)
                {
                    const unsigned l_704 = 0UL;
                    g_129[3] = l_645;
                    g_337 = (safe_rshift_func_uint16_t_u_s((0xAED67857C02FC9F3LL < (l_676 = ((0x7F3CA261L | g_337) || l_704))), 8));
                    l_705[1][2][7] = l_646;
                }
                l_733 = (+((l_676 = l_706) ^ (safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(0xACF9B968L, (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(0x996CF607EA0D424DLL, ((safe_mul_func_uint16_t_u_u(((func_62((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(l_646.f0, 4)), (safe_add_func_uint32_t_u_u(g_105, p_22)))) & ((1UL >= (l_670 = (safe_mul_func_uint16_t_u_u((~g_269[1]), ((p_23 = func_52(((safe_mod_func_uint32_t_u_u((p_22 >= g_172), g_335)) >= p_22), l_705[1][2][7].f0)) || g_129[3].f0))))) && g_401)), l_690.f0)), g_188) >= l_706) < l_673), p_22)) < 0x01L))), 0xAEL)), 0xB03AL)), l_698[2])))), 1))));
            }
            for (l_673 = (-4); (l_673 <= 24); ++l_673)
            {
                unsigned long long l_736 = 5UL;
                int l_748 = 0x2A9891ADL;
                unsigned short l_794 = 0xC9B7L;
                l_737 = (l_736 = (-6L));
                if (p_23)
                {
                    int l_743 = 0x2B7250F7L;
                    struct S0 l_749 = {0xBD3363C11307874BLL};
                    for (l_670 = 0; (l_670 >= 19); l_670 = safe_add_func_int8_t_s_s(l_670, 5))
                    {
                        l_690 = func_26(p_22, (safe_mod_func_int64_t_s_s((!(safe_unary_minus_func_int16_t_s((((l_748 = func_62(l_743, ((l_698[2] = func_52((l_733 = (l_737 = (l_676 < p_22))), g_323)) < ((g_401 > (safe_mod_func_uint32_t_u_u(l_743, func_62((safe_rshift_func_uint16_t_u_s(0x2299L, l_743)), p_22)))) > g_210)))) & l_743) == g_129[3].f0)))), 0xCCB70FBED054A292LL)), g_188);
                    }
                    if (g_326[0])
                    {
                        g_88[0] = func_26(g_76, (l_737 = (func_62(g_651[0][8], p_23) ^ (~l_673))), p_23);
                        return g_310;
                    }
                    else
                    {
                        g_337 = (l_669 <= (l_748 = g_269[0]));
                        if (p_23)
                            break;
                    }
                    l_749 = g_128[6];
                }
                else
                {
                    long long l_750[4] = {9L, 1L, 9L, 1L};
                    int l_755 = (-7L);
                    int l_766 = (-1L);
                    short l_795 = 0xECBBL;
                    int i;
                    if ((((1L < (g_185 && (l_750[2] = g_335))) | (safe_sub_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u((l_755 = 0x24L), (l_737 = (((safe_add_func_int16_t_s_s(func_62((l_676 = ((safe_rshift_func_int16_t_s_u((((-9L) & (safe_rshift_func_uint16_t_u_s(g_88[1].f1, (p_23 <= (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(0x83L, 0UL)), 0x55FD45D9L)))))) || 0x3F783A70L), l_706)) && p_22)), p_22), l_766)) == l_748) >= 0xE04DD959B290ACB5LL)))) | g_76), 1UL))) > 0xA394597EL))
                    {
                        g_401 = 0x4D5C6F17L;
                    }
                    else
                    {
                        int l_773 = 0x91E9CAEEL;
                        unsigned l_786 = 18446744073709551615UL;
                        int l_793 = 0x16A6A083L;
                        g_337 = (safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(l_773, 5)), l_676)), func_62(((safe_rshift_func_uint8_t_u_s((l_733 = 0x63L), l_737)) && func_62(p_23, (g_179 <= ((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(g_180, (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((+0xA6B9DA72AAD99060LL) >= (l_733 = ((l_645.f0 > l_669) < p_22))), 1UL)), p_22)))), g_78)) && l_646.f0)))), p_23)));
                        g_88[1] = (l_796[1] = func_26((((safe_mod_func_uint64_t_u_u(l_786, func_62(l_676, (g_3.f0 = g_320)))) <= func_52((p_23 ^ (safe_sub_func_uint8_t_u_u(((l_793 = (+((safe_add_func_uint32_t_u_u(g_361, (+p_22))) | (((g_330 ^ (safe_lshift_func_int16_t_s_s((l_669 & 0x54L), g_291[4][5][1]))) ^ l_748) & l_676)))) || l_773), l_794))), p_22)) < l_737), l_795, p_22));
                    }
                    if (g_401)
                        continue;
                    for (l_795 = (-24); (l_795 <= 19); l_795 = safe_add_func_uint8_t_u_u(l_795, 9))
                    {
                        long long l_804 = 0xDCDCD0EE68023117LL;
                        int l_811 = 0xACE81BDBL;
                        l_748 = 1L;
                        g_401 = (func_52((safe_mod_func_uint64_t_u_u(func_62(l_796[1].f1, (l_733 = (~(((g_60 && (safe_unary_minus_func_int64_t_s((safe_div_func_int64_t_s_s(((func_62(g_291[4][5][1], l_804) == 0UL) > 0x6017L), 0xCEFB9CF0FEC92BFFLL))))) < (g_562 = (safe_mod_func_uint32_t_u_u(func_52((l_766 = (safe_add_func_uint16_t_u_u(p_23, g_651[3][2]))), p_23), l_804)))) || g_201)))), p_23)), l_804) < g_651[0][8]);
                        l_645 = g_129[3];
                        g_401 = func_62(p_23, (l_811 = ((func_52((0x3516083A32D902B0LL >= p_23), p_23) | (safe_mul_func_uint16_t_u_u(0x132DL, (g_188 >= (g_651[0][8] >= ((g_77 = l_646.f0) & p_22)))))) && g_292)));
                    }
                }
            }
            for (l_690.f0 = (-17); (l_690.f0 >= (-24)); l_690.f0--)
            {
                unsigned l_820 = 6UL;
                int l_825 = 1L;
                int l_833 = (-1L);
                l_826 = func_26((safe_rshift_func_uint16_t_u_s((((g_562 = (p_23 > ((safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((g_78 = g_88[1].f1), (l_825 = (l_698[2] = ((l_820 = p_23) & ((((+g_326[1]) < 1UL) >= (l_733 = func_62((l_673 = g_323), p_23))) <= (safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u((~p_23), 15)) != 1L), l_698[2])))))))), g_320)) != 5UL))) || g_88[1].f0) || 0x1809L), p_22)), g_320, p_23);
                l_670 = func_52(p_22, (func_52(l_698[1], (l_834[0] = (g_210 > ((((l_820 && (safe_add_func_uint16_t_u_u(0x9484L, ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(g_188, 1)), 65535UL)) | p_22)))) > (g_173[1][3][6] = ((l_825 <= l_670) | g_320))) > l_646.f0) & l_833)))) == l_645.f0));
            }
        }
        g_337 = (((l_737 = g_310) <= (safe_mod_func_uint64_t_u_u(l_690.f0, (safe_mod_func_int16_t_s_s(p_23, (safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s(((g_79 = 65534UL) || l_845), (l_845 || (((safe_mod_func_uint16_t_u_u(l_848, (~func_52((g_88[1].f0 | (l_826.f1 && g_77)), l_826.f1)))) == l_673) || 0xA00E29C1D297B200LL)))) <= l_690.f0), p_22)), l_845))))))) <= p_22);
    }
    return p_23;
}







static unsigned func_24(char p_25)
{
    g_88[0] = func_26((65529UL || (safe_lshift_func_int16_t_s_u(0L, 0))), func_34(p_25), g_2.f0);
    return p_25;
}







static struct S1 func_26(short p_27, int p_28, unsigned char p_29)
{
    unsigned char l_455 = 7UL;
    int l_456[10] = {0x287D8BD3L, 0xCA02927DL, (-1L), (-1L), 0xCA02927DL, 0x287D8BD3L, 0xCA02927DL, (-1L), (-1L), 0xCA02927DL};
    unsigned long long l_459 = 9UL;
    unsigned l_627 = 0xDFE3CAA0L;
    int i;
    for (g_179 = 0; (g_179 > (-4)); g_179 = safe_sub_func_int8_t_s_s(g_179, 9))
    {
        const unsigned char l_454 = 0x21L;
        int l_460 = 0x8530D714L;
        int l_461 = 0x0BBAF738L;
        int l_462 = 0x2821DB6BL;
        l_462 = (l_461 = (((l_455 = (l_454 | p_29)) == (p_28 = 9L)) < ((l_460 = ((g_79 = p_29) >= (1UL < (l_456[6] || (safe_add_func_uint16_t_u_u(((g_323 = g_291[0][1][2]) && func_52(func_62(l_456[3], (p_27 <= 252UL)), l_459)), 2L)))))) < 0xE0C9D0F2L)));
        g_337 = (safe_lshift_func_uint8_t_u_s(0xA9L, 4));
    }
    g_401 = l_459;
    for (g_3.f0 = 7; (g_3.f0 >= 2); g_3.f0 -= 1)
    {
        int l_509[4][6];
        const struct S1 l_599 = {1L,-8L};
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 6; j++)
                l_509[i][j] = 0x50DEDFE4L;
        }
        g_129[(g_3.f0 + 1)] = g_129[(g_3.f0 + 1)];
        if (func_62(p_27, (g_129[(g_3.f0 + 1)].f0 != (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(0xD5L, 7)), 6)))))
        {
            unsigned l_473 = 6UL;
            int l_488 = 0x0F39FC39L;
            unsigned long long l_539 = 18446744073709551609UL;
            struct S1 l_548 = {-7L,1L};
            p_28 = 0xE51C5F4BL;
            for (g_210 = 0; (g_210 <= 1); g_210 += 1)
            {
                int l_480 = 0x6124192DL;
                unsigned long long l_514 = 6UL;
                unsigned short l_516 = 0x8527L;
                int i;
                if ((safe_add_func_uint64_t_u_u(g_269[g_210], g_359[0][2][1])))
                {
                    char l_481 = 0x20L;
                    const int l_489 = 0xC318F737L;
                    int l_490 = (-7L);
                    int l_515 = (-8L);
                    int l_524 = 3L;
                    if (((((safe_mod_func_uint32_t_u_u((l_473 = 3UL), g_185)) == func_52((l_490 = (g_173[5][2][7] = (p_28 >= (safe_mod_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(g_129[(g_3.f0 + 1)].f0, p_29)) & func_52(((l_481 = (safe_sub_func_int32_t_s_s((l_480 = g_79), (g_361 || 0x82L)))) != (safe_mul_func_uint16_t_u_u(func_62((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(func_52((g_88[1].f0 = ((0x2754025B2839A542LL & (-1L)) ^ l_455)), l_488), l_456[6])), 7)), l_456[0]), l_489))), g_359[0][7][6])), g_291[4][5][1]))))), p_29)) < p_27) < p_28))
                    {
                        int l_500 = (-1L);
                        l_488 = (((p_29 <= (l_456[6] = ((((safe_rshift_func_uint8_t_u_u(g_129[(g_3.f0 + 1)].f0, 6)) | func_52((l_473 || ((g_77 = (safe_lshift_func_uint8_t_u_s((~p_29), l_473))) | g_2.f0)), p_28)) < (safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((func_62((safe_unary_minus_func_uint16_t_u(l_456[6])), l_500) == p_28), 2)), 0x83L))) | p_29))) == g_269[g_210]) != g_320);
                        p_28 = (g_185 == (safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(0x64L, (safe_lshift_func_int16_t_s_u(((l_509[2][2] = (~(safe_lshift_func_uint8_t_u_s(func_52((65535UL || l_490), l_473), 2)))) == ((l_515 = (safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((func_62((l_500 & g_269[g_210]), (g_291[4][5][1] || p_27)) | l_514), 7)), 0xD28105E0EC474B8DLL))) && l_516)), g_201)))) == l_456[7]), 2L)));
                        if (g_60)
                            break;
                        p_28 = (safe_mod_func_uint8_t_u_u((g_172 = ((p_28 >= (((g_179 = p_29) && (g_179 = ((safe_unary_minus_func_uint16_t_u(l_515)) == ((g_359[0][3][3] & p_27) > func_52(l_514, (g_180 = 0x073C2761L)))))) > 0xCC70L)) ^ g_173[5][2][7])), p_27));
                    }
                    else
                    {
                        p_28 = (safe_lshift_func_uint8_t_u_s(g_269[1], (((g_173[5][2][1] = ((g_88[1].f0 | func_62(p_28, l_524)) > (safe_sub_func_int32_t_s_s((l_509[2][2] & g_179), l_488)))) <= g_323) > 0x52EA2F4BL)));
                    }
                }
                else
                {
                    p_28 = ((safe_mul_func_uint8_t_u_u(func_62(g_269[g_210], g_88[1].f0), p_28)) <= g_320);
                    p_28 = p_28;
                }
                g_401 = func_52((l_488 = l_514), ((g_188 = (safe_div_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((g_188 > (g_359[0][7][4] < ((safe_div_func_int64_t_s_s((safe_add_func_uint64_t_u_u(l_473, (g_320 == l_539))), (safe_rshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u((g_60 != (((func_62(g_359[0][2][9], l_480) <= 0x3F8B84F6L) == g_2.f1) ^ p_29)), 0xFDL)) == 0L), 6)))) & 0xBC16BA3BL))), 0x55L)), g_76)) && p_29) | g_78), p_28))) <= (-10L)));
                if ((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(0xC4L, 0)), p_29)))
                {
                    return l_548;
                }
                else
                {
                    if (g_88[1].f0)
                        break;
                }
            }
            if ((safe_rshift_func_uint8_t_u_s(g_129[(g_3.f0 + 1)].f0, g_291[6][4][2])))
            {
                return g_88[1];
            }
            else
            {
                unsigned char l_561 = 0xEEL;
                g_337 = (g_173[5][0][2] ^ (g_359[0][5][7] = func_52((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((g_179 = 0x90L), (0xB916L & p_29))), (-1L))) >= (l_561 = (safe_rshift_func_uint8_t_u_u(func_52(p_27, (g_105 = p_27)), 0)))), l_473)), 9L)), g_562)));
            }
            g_337 = ((g_3.f1 || (safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((p_29 = (g_172 = (p_29 >= (4L & ((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((g_83 > ((g_210 = (~0xA8L)) || func_62(func_62(p_27, (+((safe_div_func_uint16_t_u_u(0x497AL, (~((~((l_488 = g_335) != (g_310 = 8UL))) || 0xA3L)))) != 0x9E34D9F11B3A7910LL))), l_509[2][3]))), 0xF995L)), 0)) && (-1L)))))), l_509[3][5])), 0xFAL))) > p_27);
        }
        else
        {
            short l_584 = 0L;
            struct S1 l_600[5] = {{0x47868ACCB883F8C2LL,0xA603L}, {0x47868ACCB883F8C2LL,0xA603L}, {0x47868ACCB883F8C2LL,0xA603L}, {0x47868ACCB883F8C2LL,0xA603L}, {0x47868ACCB883F8C2LL,0xA603L}};
            int l_601 = 0L;
            int l_607 = (-1L);
            int i;
            if ((p_28 = 0L))
            {
                struct S0 l_573 = {0L};
                g_337 = p_29;
                l_573 = g_129[4];
            }
            else
            {
                int l_580 = 0x381D5C72L;
                long long l_583 = (-7L);
                int l_597 = 0L;
                unsigned short l_626 = 65535UL;
                p_28 = (safe_add_func_int32_t_s_s((g_401 = ((safe_mul_func_uint8_t_u_u((p_29 >= (safe_mod_func_uint32_t_u_u((g_310 = (l_580 ^ 5UL)), (+(safe_add_func_int8_t_s_s((l_584 = ((((-1L) < p_27) | (l_583 = 0xE68AL)) || g_3.f0)), (~(0UL <= (+(((g_3.f0 ^ (-5L)) <= 4294967295UL) <= g_180)))))))))), g_105)) || 65533UL)), g_326[0]));
                if ((l_597 = (safe_rshift_func_int8_t_s_s(((l_456[1] ^ (l_580 = l_455)) ^ ((!func_52(g_88[1].f1, (l_583 >= g_359[0][5][7]))) == ((g_310 || (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint64_t_u_u(((((g_310 = 0x2C41942FL) < (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_509[2][2], 0L)), 1UL))) <= 0UL) > 1L), l_456[6])) || p_27), 2))) != p_29))), 3))))
                {
                    int l_598 = (-10L);
                    l_598 = l_455;
                }
                else
                {
                    for (g_337 = 0; (g_337 >= 0); g_337 -= 1)
                    {
                        struct S1 l_602[10] = {{0xF0F9DC9414E55154LL,8L}, {0xF0F9DC9414E55154LL,8L}, {0xF0F9DC9414E55154LL,8L}, {0xF0F9DC9414E55154LL,8L}, {0xF0F9DC9414E55154LL,8L}, {0xF0F9DC9414E55154LL,8L}, {0xF0F9DC9414E55154LL,8L}, {0xF0F9DC9414E55154LL,8L}, {0xF0F9DC9414E55154LL,8L}, {0xF0F9DC9414E55154LL,8L}};
                        int i;
                        l_600[3] = l_599;
                        l_601 = (-3L);
                        p_28 = g_326[0];
                        l_602[7] = g_88[1];
                    }
                }
                g_401 = (safe_lshift_func_uint8_t_u_u((p_27 > ((l_580 = func_52((safe_rshift_func_int8_t_s_s(l_459, 6)), l_580)) <= (((((l_607 = (-1L)) == (safe_add_func_uint8_t_u_u(((l_597 | (func_62((g_323 = 0x4520L), g_77) >= g_269[0])) > 0UL), g_201))) && l_597) < p_28) >= 0L))), p_28));
                g_401 = (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(p_29, (~(p_27 ^ (safe_lshift_func_int8_t_s_s((((l_580 = ((g_337 && (safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(g_173[5][0][2], (safe_div_func_int16_t_s_s(func_62((safe_add_func_int32_t_s_s(g_335, l_626)), ((g_128[6].f0 & (-1L)) > 0xFA91E299881F850BLL)), 65535UL)))) || 0x5AL), g_77))) != 4294967293UL)) == p_28) >= l_627), 0)))))), 0xDCFFL)), 7));
            }
        }
        if (g_3.f0)
            continue;
    }
    return g_3;
}







static int func_34(char p_35)
{
    const char l_360 = 0x00L;
    short l_362 = 0xB97EL;
    int l_376 = 0x5F1D5E67L;
    if ((g_361 = (safe_div_func_int16_t_s_s((func_40(p_35) & ((p_35 & p_35) > (p_35 >= ((safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(4294967287UL, g_3.f1)) & 0x456B708064E77AF3LL), (g_359[0][5][7] = (p_35 ^ 0xF47E50A9CAA30F8ALL)))) && 4UL)))), l_360))))
    {
        int l_377 = 0x2263DA28L;
        struct S0 l_380 = {-10L};
        struct S0 l_382 = {8L};
        char l_390 = 0x1AL;
        long long l_418 = (-1L);
        int l_432 = 0xB2379CF2L;
        if (func_40(l_362))
        {
            short l_367 = 0x8F56L;
            int l_402 = (-1L);
            l_377 = ((safe_lshift_func_uint8_t_u_s(p_35, 4)) ^ (0x92L | (safe_mod_func_uint32_t_u_u((l_367 = g_88[1].f1), (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_78, 4)), (((safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(0x0AL, ((l_376 = p_35) > l_360))) ^ 1UL), g_88[1].f0)) > g_291[4][5][1]) < 0L)))))));
            for (l_377 = 0; (l_377 < (-13)); l_377 = safe_sub_func_uint64_t_u_u(l_377, 9))
            {
                struct S0 l_381 = {0x5CABFE9561FEEB75LL};
                struct S0 l_383[7][3][5] = {{{{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}, {{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}, {{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}}, {{{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}, {{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}, {{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}}, {{{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}, {{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}, {{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}}, {{{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}, {{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}, {{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}}, {{{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}, {{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}, {{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}}, {{{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}, {{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}, {{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}}, {{{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}, {{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}, {{0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}, {0xC84C57A7CA7F859ELL}, {0x93A681FD754C5A71LL}}}};
                int i, j, k;
                l_383[5][0][1] = (l_382 = (l_381 = l_380));
                return g_60;
            }
            l_402 = (l_367 && (func_62(l_367, ((safe_div_func_uint16_t_u_u(func_62((safe_rshift_func_int16_t_s_u((l_376 = (safe_sub_func_uint64_t_u_u((((g_291[7][3][3] != (l_390 | g_337)) | (safe_add_func_int16_t_s_s((p_35 || ((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((g_73 = g_173[0][0][1]) >= ((safe_mul_func_int8_t_s_s(((8UL & (safe_div_func_int32_t_s_s(p_35, l_382.f0))) | l_367), 0xBFL)) || 2UL)), 15)), 0UL)) < 0x3F3C6F0DL)), g_201))) ^ g_180), p_35))), 8)), l_390), g_401)) < g_269[0])) & 0x94L));
            g_401 = 0L;
        }
        else
        {
            long long l_413 = (-3L);
            int l_419 = 0xBCE41FB1L;
            l_376 = g_269[0];
            l_419 = ((g_337 = p_35) != ((0xD94D37AFL | ((safe_div_func_uint32_t_u_u(((p_35 & (safe_mod_func_int32_t_s_s(((func_52((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_377 > l_413), p_35)), l_376)), (safe_div_func_uint8_t_u_u((l_377 != (safe_mod_func_int32_t_s_s(func_48(l_413), 4294967293UL))), 0x4CL)))), l_418) || g_291[2][0][1]) & 0x04D5L), (-7L)))) > (-5L)), l_376)) & g_128[6].f0)) & l_360));
        }
        for (g_337 = 0; (g_337 < (-14)); g_337 = safe_sub_func_int16_t_s_s(g_337, 3))
        {
            unsigned short l_431 = 0UL;
            for (g_335 = (-26); (g_335 > 37); g_335++)
            {
                const struct S0 l_428 = {4L};
                int l_430 = 0xF437F50EL;
                for (l_377 = 0; (l_377 == (-2)); l_377 = safe_sub_func_uint8_t_u_u(l_377, 1))
                {
                    if (g_210)
                        break;
                    for (g_401 = (-19); (g_401 >= 4); ++g_401)
                    {
                        struct S0 l_429 = {0L};
                        l_429 = l_428;
                        return p_35;
                    }
                    l_430 = p_35;
                }
            }
            l_432 = (l_377 = l_431);
        }
    }
    else
    {
        for (g_3.f0 = (-15); (g_3.f0 >= 6); g_3.f0++)
        {
            long long l_435 = 0xC623973744CB75A3LL;
            for (g_180 = 0; (g_180 <= 2); g_180 += 1)
            {
                return l_435;
            }
        }
    }
    g_337 = (safe_mul_func_uint8_t_u_u(4UL, (l_360 & ((((safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((!(g_291[5][4][2] <= ((safe_div_func_uint16_t_u_u((!(func_52((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(func_62(((safe_sub_func_int64_t_s_s(l_360, g_73)) & ((safe_mul_func_int8_t_s_s((p_35 && g_337), l_362)) ^ (l_376 = g_128[6].f0))), p_35), g_337)), 3)), l_360) != g_188)), g_326[0])) == l_362))), g_361)) < l_360), 0x56L)) && l_376) <= 0L) >= (-6L)))));
    l_376 = g_330;
    return p_35;
}







static const unsigned long long func_40(unsigned p_41)
{
    const struct S1 l_44 = {0x7967268F57F54AB1LL,-7L};
    int l_241 = 0xB6334DF2L;
    struct S0 l_261 = {8L};
    long long l_273 = (-8L);
    struct S1 l_325[6] = {{-1L,0x4F33L}, {-4L,3L}, {-1L,0x4F33L}, {-4L,3L}, {-1L,0x4F33L}, {-4L,3L}};
    int i;
    for (p_41 = 8; (p_41 < 46); p_41 = safe_add_func_int8_t_s_s(p_41, 7))
    {
        struct S1 l_45[7][2] = {{{0x7C242EA6AE202455LL,-1L}, {1L,-1L}}, {{0x7C242EA6AE202455LL,-1L}, {1L,-1L}}, {{0x7C242EA6AE202455LL,-1L}, {1L,-1L}}, {{0x7C242EA6AE202455LL,-1L}, {1L,-1L}}, {{0x7C242EA6AE202455LL,-1L}, {1L,-1L}}, {{0x7C242EA6AE202455LL,-1L}, {1L,-1L}}, {{0x7C242EA6AE202455LL,-1L}, {1L,-1L}}};
        int i, j;
        l_45[5][0] = l_44;
    }
    for (p_41 = 16; (p_41 <= 54); ++p_41)
    {
        int l_55 = 0xEF6F1AC2L;
        int l_61 = 0L;
        l_55 = func_48((safe_lshift_func_uint16_t_u_u((func_52((g_79 = (g_78 = ((g_77 = (g_3.f0 = (((l_55 <= (safe_mul_func_uint8_t_u_u((g_60 = (safe_rshift_func_uint16_t_u_u(p_41, 13))), 0x64L))) & (l_61 = l_44.f0)) != (func_62(g_3.f0, l_44.f1) != (0x7FL >= (g_76 = p_41)))))) && 0x8356F5961936EFE4LL))), g_3.f1) & p_41), l_44.f1)));
        for (g_83 = 0; g_83 < 9; g_83 += 1)
        {
            struct S0 tmp = {-10L};
            g_129[g_83] = tmp;
        }
    }
    if (g_88[1].f1)
    {
        short l_239 = 0x7F0CL;
        for (g_65 = 0; (g_65 <= 2); g_65 += 1)
        {
            int i;
            g_88[2] = g_88[g_65];
            l_239 = p_41;
        }
    }
    else
    {
        long long l_240 = 0L;
        struct S1 l_248[9] = {{1L,0x2B00L}, {1L,0xD69AL}, {1L,0x2B00L}, {1L,0xD69AL}, {1L,0x2B00L}, {1L,0xD69AL}, {1L,0x2B00L}, {1L,0xD69AL}, {1L,0x2B00L}};
        int l_257 = 0xCB13B148L;
        struct S0 l_331 = {-5L};
        int l_348[6] = {0xD3C510A3L, 0xD3C510A3L, 0x81537DBFL, 0xD3C510A3L, 0xD3C510A3L, 0x81537DBFL};
        int i;
        l_240 = p_41;
        if (l_241)
        {
            struct S0 l_246 = {0xB85FDC69A44A26B1LL};
            struct S1 l_260 = {-1L,6L};
            int l_262 = 0x93BD74A3L;
            for (l_240 = (-16); (l_240 >= 21); l_240 = safe_add_func_uint64_t_u_u(l_240, 3))
            {
                unsigned char l_247 = 0x8BL;
                for (g_188 = 3; (g_188 != 56); g_188++)
                {
                    long long l_254[6][9] = {{3L, 3L, (-7L), 3L, 3L, (-7L), 3L, 3L, (-7L)}, {3L, 3L, (-7L), 3L, 3L, (-7L), 3L, 3L, (-7L)}, {3L, 3L, (-7L), 3L, 3L, (-7L), 3L, 3L, (-7L)}, {3L, 3L, (-7L), 3L, 3L, (-7L), 3L, 3L, (-7L)}, {3L, 3L, (-7L), 3L, 3L, (-7L), 3L, 3L, (-7L)}, {3L, 3L, (-7L), 3L, 3L, (-7L), 3L, 3L, (-7L)}};
                    int i, j;
                    g_129[3] = l_246;
                    if (p_41)
                    {
                        l_247 = func_62(g_83, g_179);
                    }
                    else
                    {
                        int l_253 = 0xD32C07B4L;
                        if (g_180)
                            break;
                        l_248[4] = g_3;
                        l_241 = (((func_52(l_44.f1, (func_62(p_41, (func_62((safe_mul_func_int8_t_s_s((g_83 && (safe_div_func_int8_t_s_s((func_62(l_253, g_185) || (-1L)), (-1L)))), p_41)), l_246.f0) | l_254[4][7])) <= 0x3896L)) == l_254[4][7]) <= p_41) || 0x9D7E67C20CE6CC8BLL);
                    }
                    l_257 = (safe_add_func_uint64_t_u_u((((-7L) ^ g_2.f0) && l_246.f0), (g_173[6][2][6] != (+g_172))));
                    for (p_41 = 7; (p_41 < 20); p_41++)
                    {
                        l_248[4] = g_3;
                        l_241 = (func_62(p_41, p_41) | g_88[1].f1);
                        l_260 = g_2;
                    }
                }
                if (l_248[4].f0)
                    break;
                l_246 = l_261;
                return l_247;
            }
            l_262 = g_180;
        }
        else
        {
            unsigned long long l_270[8][7][1] = {{{2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}}, {{2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}}, {{2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}}, {{2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}}, {{2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}}, {{2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}}, {{2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}}, {{2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}}};
            int l_286 = 0x9F5A178EL;
            struct S1 l_324 = {0x3908799C12719CB5LL,0x6773L};
            struct S0 l_332[3][6][7] = {{{{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}, {{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}, {{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}, {{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}, {{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}, {{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}}, {{{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}, {{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}, {{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}, {{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}, {{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}, {{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}}, {{{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}, {{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}, {{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}, {{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}, {{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}, {{6L}, {0xBDC8BF43261D0B0DLL}, {-9L}, {6L}, {-9L}, {0xBDC8BF43261D0B0DLL}, {6L}}}};
            int i, j, k;
            if (((safe_add_func_int64_t_s_s((((safe_div_func_int64_t_s_s(0x29B00B315BCC31C5LL, p_41)) != (safe_div_func_int32_t_s_s(func_52(g_269[0], l_270[1][1][0]), (p_41 | (safe_mul_func_int8_t_s_s((g_179 = 1L), l_273)))))) >= (((safe_div_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(func_62((l_286 = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((0x03BB163505588FFDLL ^ p_41), 15)), 2)), 1))), p_41), 4)), g_180)), l_270[1][1][0])) && g_172) && g_76)), l_240)) <= l_273))
            {
                int l_289 = (-5L);
                int l_290 = 0x411BDBC6L;
                struct S0 l_319[10] = {{0x9D93CA63B39A4F89LL}, {0x28EACBFA641BE150LL}, {0x62370B228D42A04ALL}, {0x62370B228D42A04ALL}, {0x28EACBFA641BE150LL}, {0x9D93CA63B39A4F89LL}, {0x28EACBFA641BE150LL}, {0x62370B228D42A04ALL}, {0x62370B228D42A04ALL}, {0x28EACBFA641BE150LL}};
                int i;
                g_292 = (!((((l_290 = ((safe_sub_func_uint32_t_u_u((l_270[3][1][0] > 0x9DL), g_79)) && (l_289 = g_2.f0))) <= p_41) || (g_291[4][5][1] = (func_48(func_62(p_41, (l_257 = 0L))) && 1L))) > g_3.f1));
                if (g_129[3].f0)
                {
                    return g_3.f0;
                }
                else
                {
                    unsigned short l_308 = 0x2DF4L;
                    int l_309 = 0L;
                    l_241 = p_41;
                    if (p_41)
                    {
                        unsigned l_293[3];
                        int l_306 = 0xABC1A27FL;
                        unsigned l_307 = 18446744073709551606UL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_293[i] = 0UL;
                        l_293[0] = 0x1A025D2DL;
                        g_310 = (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(0x4CL, 7)) && ((g_269[0] <= ((g_83 = 0x73E6L) && (((safe_mul_func_int8_t_s_s((l_308 = ((~func_48(((safe_div_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(func_52(g_292, (((l_306 = (safe_add_func_int16_t_s_s(p_41, (l_241 = g_129[3].f0)))) <= p_41) || l_307)), l_307)) & 0x65D1L), (-1L))) || 0x9415L))) != g_2.f1)), 0x90L)) == g_2.f1) == 0xEC09B2EC9E85ABD3LL))) <= l_309)), l_273));
                    }
                    else
                    {
                        l_290 = func_62(g_3.f0, l_290);
                        l_286 = ((l_261.f0 == (safe_lshift_func_int8_t_s_u((p_41 <= (safe_rshift_func_uint8_t_u_u(func_48(l_240), (g_291[4][5][1] || p_41)))), (safe_rshift_func_int16_t_s_u(g_2.f0, ((l_290 <= (safe_lshift_func_int16_t_s_u((-1L), 3))) ^ 0L)))))) >= 0x3911L);
                        l_319[6] = g_128[8];
                    }
                    g_320 = (g_88[1].f1 <= func_62(p_41, p_41));
                    for (l_273 = 0; (l_273 <= (-13)); --l_273)
                    {
                        g_323 = p_41;
                        l_325[5] = l_324;
                        g_326[0] = l_273;
                        g_330 = (((safe_mod_func_uint32_t_u_u((!(0x1F07L ^ (((l_273 < (l_309 = (g_180 ^ 0xC9E0D287D80EF446LL))) < p_41) | ((g_105 < (g_83 && ((safe_unary_minus_func_int64_t_s(((l_257 = p_41) ^ g_78))) | g_326[0]))) < 250UL)))), l_319[6].f0)) > l_308) != 0xF73BL);
                    }
                }
                l_261 = l_331;
            }
            else
            {
                struct S0 l_336 = {0xE23117AE68CE1AC9LL};
                for (g_105 = 0; (g_105 <= 2); g_105 += 1)
                {
                    char l_333 = 7L;
                    int l_334[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_334[i] = (-1L);
                    g_129[3] = l_332[1][3][2];
                    for (g_65 = 0; (g_65 <= 2); g_65 += 1)
                    {
                        int i;
                        l_333 = 0L;
                        l_334[7] = g_326[g_105];
                        g_335 = g_326[g_105];
                        if (g_326[g_105])
                            break;
                    }
                    l_334[7] = 0xB9E0CDC9L;
                    for (l_257 = 0; (l_257 <= 2); l_257 += 1)
                    {
                        int i;
                        l_336 = g_129[3];
                        g_337 = g_326[l_257];
                        if (g_188)
                            break;
                    }
                }
                l_241 = func_62(g_326[0], (safe_add_func_int8_t_s_s(0x1FL, ((safe_lshift_func_int8_t_s_s(((func_48(g_201) | (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((g_337 = (+6L)), (safe_rshift_func_int8_t_s_s((!(l_348[5] <= (safe_rshift_func_int16_t_s_s(((p_41 && ((g_269[0] && (safe_mul_func_uint16_t_u_u(l_240, 1UL))) == g_291[4][5][1])) <= 65532UL), l_44.f0)))), 6)))) < p_41), g_323))) || p_41), 1)) <= 0x4E9201B3L))));
                l_332[1][3][2] = l_261;
                g_337 = l_44.f0;
            }
        }
    }
    return g_78;
}







static int func_48(int p_49)
{
    unsigned short l_89 = 0xCBDAL;
    unsigned char l_103 = 0x3DL;
    int l_104 = 0x4458F597L;
    unsigned l_109 = 1UL;
    struct S0 l_124[10] = {{1L}, {0x2407C9B672C646ECLL}, {-1L}, {-1L}, {0x2407C9B672C646ECLL}, {1L}, {0x2407C9B672C646ECLL}, {-1L}, {-1L}, {0x2407C9B672C646ECLL}};
    long long l_127 = 0xD339D48ECEC35015LL;
    unsigned char l_174 = 0xA4L;
    int l_181 = 0xFF05A5C6L;
    int i;
    l_89 = g_65;
    l_104 = ((safe_div_func_int32_t_s_s(p_49, (safe_add_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(g_88[1].f1, g_2.f1)), (safe_mod_func_uint32_t_u_u(g_79, (safe_add_func_uint32_t_u_u((~(0xA5B3E5B6L & (func_62((safe_add_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(((g_2.f0 <= l_103) >= 0L))), (func_62(g_76, g_78) <= 0xF09EL))), p_49) & l_103))), g_60)))))))) | 65526UL);
    g_105 = ((p_49 <= (g_77 = l_104)) > l_103);
    for (g_3.f0 = 0; (g_3.f0 <= 2); g_3.f0 += 1)
    {
        unsigned l_108[4][7][7] = {{{1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}}, {{1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}}, {{1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}}, {{1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}, {1UL, 0x26BCB33DL, 0x46A13618L, 0xADB549FEL, 0UL, 0xD5E08CE2L, 4294967295UL}}};
        int l_115 = (-1L);
        int l_122 = 0xDE4D78B1L;
        const struct S0 l_123 = {0xD785604A185305F7LL};
        long long l_154 = (-1L);
        const unsigned l_155 = 0UL;
        struct S0 l_184 = {0xA753925E94D96B29LL};
        int l_238 = 1L;
        int i, j, k;
        if ((safe_lshift_func_int8_t_s_s((func_52((~l_108[2][3][4]), (func_52(l_108[1][3][2], l_109) & 3L)) && l_108[2][3][4]), 5)))
        {
            char l_114 = 0x43L;
            int l_132[1][9][9] = {{{(-1L), 1L, (-1L), 0xDCAF14A3L, (-6L), 0xDCAF14A3L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 0xDCAF14A3L, (-6L), 0xDCAF14A3L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 0xDCAF14A3L, (-6L), 0xDCAF14A3L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 0xDCAF14A3L, (-6L), 0xDCAF14A3L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 0xDCAF14A3L, (-6L), 0xDCAF14A3L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 0xDCAF14A3L, (-6L), 0xDCAF14A3L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 0xDCAF14A3L, (-6L), 0xDCAF14A3L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 0xDCAF14A3L, (-6L), 0xDCAF14A3L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 0xDCAF14A3L, (-6L), 0xDCAF14A3L, (-1L), 1L, (-1L)}}};
            unsigned char l_138 = 0x77L;
            int l_182 = 7L;
            int i, j, k;
            l_115 = ((0x0CL ^ (safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_49, l_114)), g_83))) ^ g_77);
            if ((safe_lshift_func_int8_t_s_s((g_60 <= ((safe_add_func_int32_t_s_s(func_62(p_49, p_49), 4UL)) < func_52(func_52((l_108[3][0][6] <= (p_49 || (p_49 < (safe_add_func_int32_t_s_s((l_104 = 0x30811D27L), g_3.f0))))), l_122), p_49))), 3)))
            {
                int i;
                l_124[4] = l_123;
                g_88[g_3.f0] = g_88[g_3.f0];
                for (g_76 = 0; (g_76 != (-11)); g_76--)
                {
                    l_104 = l_127;
                }
                g_129[3] = g_128[6];
            }
            else
            {
                int l_133[4] = {0x226B515AL, 1L, 0x226B515AL, 1L};
                int l_137[5][4][10] = {{{0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}, {0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}, {0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}, {0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}}, {{0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}, {0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}, {0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}, {0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}}, {{0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}, {0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}, {0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}, {0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}}, {{0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}, {0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}, {0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}, {0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}}, {{0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}, {0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}, {0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}, {0xBE62397AL, 0x4B399E46L, 0x01134933L, 1L, 0xA4F7F709L, 0xBC828D93L, 2L, 1L, 2L, 0xBC828D93L}}};
                int l_139 = 8L;
                struct S1 l_156[3] = {{0xDBB096D4882EDD94LL,0xF1CCL}, {0xDBB096D4882EDD94LL,0xF1CCL}, {0xDBB096D4882EDD94LL,0xF1CCL}};
                int i, j, k;
                p_49 = (((p_49 | (248UL <= (l_132[0][6][7] = 0UL))) >= (l_133[1] = g_128[6].f0)) != (safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint16_t_u_u(l_137[1][0][0], ((l_139 = l_138) && ((g_60 = func_52(g_78, l_124[4].f0)) || 0x0EL)))))));
                if ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((((l_127 == (!l_114)) < func_52(((safe_mul_func_int16_t_s_s(l_127, 0x7FD1L)) & func_52(l_115, (p_49 >= (((p_49 && g_73) < g_65) || g_2.f1)))), g_60)) || p_49), l_124[4].f0)), l_89)) & 0x6036L), l_89)))
                {
                    l_104 = g_83;
                }
                else
                {
                    for (l_109 = 0; (l_109 <= 3); l_109 += 1)
                    {
                        int i;
                        p_49 = (l_133[g_3.f0] == ((safe_rshift_func_int8_t_s_u(0xBAL, (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((l_133[l_109] | ((l_124[4].f0 || l_154) >= func_52(l_133[g_3.f0], l_124[4].f0))), 4)) || (l_155 || g_60)), g_65)))) <= p_49));
                    }
                }
                if ((g_105 > 0x53L))
                {
                    p_49 = ((0x6909L < (l_132[0][4][2] = p_49)) & p_49);
                    g_88[1] = l_156[1];
                }
                else
                {
                    struct S0 l_157 = {-5L};
                    for (g_79 = 0; (g_79 <= 8); g_79 += 1)
                    {
                        int i;
                        g_129[g_79] = l_157;
                        p_49 = 0L;
                    }
                    if (g_88[1].f1)
                        break;
                }
                g_173[5][2][7] = (((safe_add_func_int16_t_s_s(func_62(l_108[2][3][4], ((safe_lshift_func_uint8_t_u_s((func_52((safe_sub_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((((safe_mod_func_int32_t_s_s(l_109, g_88[1].f1)) | (g_65 <= ((g_79 = 2UL) ^ (safe_add_func_int8_t_s_s(l_138, l_137[1][0][0]))))) == 0x78L), (p_49 > p_49))) > g_83), p_49)), p_49) >= 0UL), 3)) >= g_172)), l_104)) <= 0UL) <= g_128[6].f0);
            }
            g_129[5] = g_128[1];
            p_49 = (((l_132[0][1][6] = (l_174 = 0x33L)) ^ 0xD6L) | (safe_mod_func_uint16_t_u_u(func_52(func_62(((p_49 > (safe_mod_func_uint64_t_u_u(p_49, l_155))) >= l_155), ((g_173[5][2][7] && g_129[3].f0) || ((l_182 = (l_181 = (g_180 = (g_179 = ((l_104 = 0x68BD2B6BC98A1C93LL) >= l_114))))) <= l_154))), p_49), l_124[4].f0)));
        }
        else
        {
            struct S0 l_183 = {0L};
            l_184 = l_183;
            p_49 = (l_115 = g_185);
        }
        for (g_73 = (-19); (g_73 == (-19)); g_73++)
        {
            g_188 = l_115;
            for (g_83 = 13; (g_83 <= 9); --g_83)
            {
                return g_65;
            }
        }
        for (g_78 = 0; (g_78 <= 8); g_78 += 1)
        {
            unsigned short l_202 = 0x3C9BL;
            p_49 = (l_202 = (g_201 = ((func_62((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(((p_49 == 18446744073709551615UL) ^ (4294967295UL == (p_49 || 0L))), g_83)) > g_77) == (safe_mod_func_int8_t_s_s(func_62((l_127 || l_184.f0), l_122), (-1L)))), 1)), p_49)), p_49)), g_128[6].f0) <= 0x04BD958CL) && 4294967295UL)));
        }
        for (g_201 = 0; (g_201 == 25); g_201 = safe_add_func_uint32_t_u_u(g_201, 6))
        {
            int l_205[4][8] = {{0x08B0E266L, 0L, 0x47C77F8FL, 0L, 0x08B0E266L, 1L, 0x08B0E266L, 0L}, {0x08B0E266L, 0L, 0x47C77F8FL, 0L, 0x08B0E266L, 1L, 0x08B0E266L, 0L}, {0x08B0E266L, 0L, 0x47C77F8FL, 0L, 0x08B0E266L, 1L, 0x08B0E266L, 0L}, {0x08B0E266L, 0L, 0x47C77F8FL, 0L, 0x08B0E266L, 1L, 0x08B0E266L, 0L}};
            int l_235[9][7][4] = {{{0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}}, {{0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}}, {{0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}}, {{0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}}, {{0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}}, {{0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}}, {{0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}}, {{0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}}, {{0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}, {0x31470323L, 0x823F19ABL, 0x91A3040AL, 0xF3BDC24BL}}};
            int i, j, k;
            for (g_185 = 3; (g_185 <= 8); g_185 += 1)
            {
                g_210 = (l_174 & ((l_205[0][1] ^ g_60) == ((0x470F0F86B609877FLL | g_78) & (g_129[3].f0 == (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((g_76 > g_88[1].f0), l_174)), 9L))))));
                l_181 = 1L;
            }
            for (g_185 = 0; (g_185 <= (-10)); g_185 = safe_sub_func_uint8_t_u_u(g_185, 4))
            {
                return p_49;
            }
            for (g_179 = 0; (g_179 > (-30)); g_179--)
            {
                unsigned char l_228 = 252UL;
                int l_234 = (-1L);
                p_49 = 0L;
                for (l_122 = 8; (l_122 != (-19)); l_122 = safe_sub_func_int32_t_s_s(l_122, 8))
                {
                    long long l_233 = 4L;
                    g_88[1] = g_88[2];
                    for (g_77 = 0; (g_77 < (-13)); g_77 = safe_sub_func_int16_t_s_s(g_77, 3))
                    {
                        struct S1 l_219[4] = {{0x03924B468D6D82E6LL,0x5166L}, {0x03924B468D6D82E6LL,0x5166L}, {0x03924B468D6D82E6LL,0x5166L}, {0x03924B468D6D82E6LL,0x5166L}};
                        int i;
                        g_88[1] = l_219[1];
                        p_49 = (0UL >= func_62(g_129[3].f0, (safe_sub_func_uint8_t_u_u(255UL, (+(safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s((func_52(((func_52(func_52(((safe_mul_func_uint16_t_u_u(l_155, l_228)) < (l_235[7][4][0] = func_62((((p_49 <= (0x420FC968L > ((l_234 = (l_219[1].f1 <= (safe_lshift_func_uint8_t_u_s((g_78 <= l_233), 2)))) && 0L))) == 18446744073709551614UL) && 0xD0L), g_77))), p_49), l_228) < l_219[1].f1) >= 1UL), g_2.f1) != l_219[1].f0), g_210)), 1L)))))));
                        if (g_2.f1)
                            continue;
                    }
                    for (g_76 = 0; (g_76 <= 2); ++g_76)
                    {
                        return p_49;
                    }
                    l_238 = 0x051C77C0L;
                }
                if (p_49)
                    continue;
            }
        }
    }
    return l_124[4].f0;
}







static int func_52(long long p_53, unsigned p_54)
{
    int l_82 = 0x77E47599L;
    int l_86 = 0L;
    struct S1 l_87 = {-1L,0xCF38L};
    g_83 = (safe_div_func_uint32_t_u_u(1UL, l_82));
    for (g_78 = 11; (g_78 <= 31); g_78 = safe_add_func_int16_t_s_s(g_78, 4))
    {
        l_86 = p_53;
    }
    g_88[1] = l_87;
    return l_87.f0;
}







static unsigned char func_62(unsigned short p_63, long long p_64)
{
    unsigned char l_70 = 0x6EL;
    short l_74 = 0x21BFL;
    struct S0 l_75 = {0x9D2C4C26B3FA45FELL};
    g_73 = ((g_65 = p_63) <= ((((safe_mul_func_uint8_t_u_u(p_63, g_3.f1)) | (((safe_mul_func_int8_t_s_s(g_2.f0, (l_70 || g_3.f0))) || (safe_div_func_int64_t_s_s(g_3.f1, ((-1L) ^ (p_64 >= g_2.f0))))) && p_64)) >= g_2.f1) != l_70));
    l_74 = g_3.f0;
    l_75 = l_75;
    return l_74;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_2.f1, "g_2.f1", print_hash_value);
    transparent_crc(g_3.f0, "g_3.f0", print_hash_value);
    transparent_crc(g_3.f1, "g_3.f1", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_88[i].f0, "g_88[i].f0", print_hash_value);
        transparent_crc(g_88[i].f1, "g_88[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_105, "g_105", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_128[i].f0, "g_128[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_129[i].f0, "g_129[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_172, "g_172", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_173[i][j][k], "g_173[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_269[i], "g_269[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_291[i][j][k], "g_291[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_326[i], "g_326[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_359[i][j][k], "g_359[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_628[i][j], "g_628[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_651[i][j], "g_651[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_849, "g_849", print_hash_value);
    transparent_crc(g_1039, "g_1039", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
