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
   unsigned char f0;
   unsigned char f1;
};

union U1 {
   unsigned f0;
};


static unsigned char g_13 = 250UL;
static int g_28 = 0xF3938425L;
static unsigned g_114 = 0x49D34E1BL;
static int g_118 = (-1L);
static long long g_122 = (-7L);
static struct S0 g_125 = {0x5CL,0xFDL};
static int g_145 = 0x66946F2EL;
static unsigned char g_157 = 250UL;
static unsigned long long g_159 = 0x03A083379901E9BBLL;
static unsigned char g_185 = 1UL;
static unsigned g_208 = 0xEF59AD7FL;
static unsigned long long g_210 = 0x15BF3DC2D1DE3E92LL;
static long long g_238 = 0L;
static unsigned short g_239 = 65526UL;
static unsigned long long g_240 = 5UL;
static unsigned g_242 = 0x45ECA003L;
static short g_283 = 7L;
static unsigned g_289 = 0UL;
static unsigned char g_302 = 0x9BL;
static long long g_376 = (-1L);
static long long g_378 = 1L;
static union U1 g_412 = {0x1F276044L};
static char g_423 = 0x33L;
static int g_426 = 0L;
static long long g_443 = 0L;
static unsigned g_498 = 4294967295UL;
static unsigned char g_576 = 0UL;
static short g_589 = 0x8EBEL;
static int g_620 = (-1L);
static unsigned long long g_623 = 0UL;
static long long g_698 = 0xE36D9520EF9F41C4LL;
static long long g_752 = 0xD2591D86EBCB6B0ALL;
static unsigned short g_779 = 65528UL;
static struct S0 g_784 = {255UL,0x0EL};
static unsigned char g_794 = 0xBFL;
static int g_874 = 3L;
static int g_910 = 0L;
static unsigned short g_929 = 0x4540L;
static unsigned long long g_946 = 1UL;
static unsigned long long g_1012 = 1UL;
static long long g_1070 = (-2L);
static unsigned short g_1079 = 0x4FFCL;
static unsigned short g_1125 = 0xBC8EL;
static long long g_1179 = 1L;
static unsigned g_1213 = 0xCCE37B46L;
static int g_1235 = (-5L);
static char g_1322 = 6L;
static unsigned g_1456 = 0xE37595F9L;



static struct S0 func_1(void);
static int func_2(int p_3, long long p_4, short p_5, union U1 p_6, unsigned char p_7);
static int func_14(short p_15, unsigned char p_16);
static struct S0 func_38(unsigned p_39, int p_40, unsigned short p_41, unsigned char p_42, char p_43);
static unsigned char func_46(unsigned short p_47, int p_48, unsigned char p_49, unsigned p_50);
static unsigned char func_63(unsigned long long p_64);
static int func_67(unsigned p_68, char p_69);
static unsigned func_73(long long p_74);
static long long func_75(unsigned p_76, char p_77);
static unsigned char func_82(unsigned short p_83, unsigned p_84, unsigned short p_85);
static struct S0 func_1(void)
{
    unsigned l_12 = 18446744073709551609UL;
    int l_27 = 0xE92E3F91L;
    union U1 l_1013 = {1UL};
    long long l_1195 = 1L;
    int l_1281 = 0x8272D57EL;
    int l_1282 = (-6L);
    unsigned long long l_1299 = 0x447F8E6F890B8F4ALL;
    int l_1462 = (-9L);
    struct S0 l_1477 = {0UL,0xD1L};
    unsigned char l_1508 = 0xF1L;
    unsigned char l_1509 = 1UL;
    unsigned char l_1521 = 1UL;
    if (func_2((0x03L != ((g_1012 = (((safe_rshift_func_uint8_t_u_u(((1L > (safe_sub_func_uint8_t_u_u(l_12, (!g_13)))) || g_13), 5)) <= func_14((l_12 & (safe_sub_func_uint16_t_u_u(g_13, (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((g_28 = (safe_rshift_func_int8_t_s_s((l_12 <= (((l_27 = l_12) | g_13) | l_12)), l_12))), g_13)), 14)), g_13))))), l_12)) <= 0x4E0B2B9C01697A4ALL)) , 247UL)), g_412.f0, g_698, l_1013, g_13))
    {
        int l_1045 = 0x96A4512CL;
        int l_1069 = 0xBEB01DBCL;
        unsigned long long l_1080 = 0x44BE36DE6E13ADC2LL;
        long long l_1100 = 0L;
        for (g_498 = 0; (g_498 >= 9); g_498 = safe_add_func_int16_t_s_s(g_498, 1))
        {
            char l_1037 = (-4L);
            int l_1044 = 1L;
            int l_1050 = (-1L);
            int l_1099 = 0x238A457DL;
            g_426 = (g_623 || g_289);
            if ((((safe_rshift_func_uint16_t_u_u((l_1037 = g_28), 0)) && (safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(l_1037, 6)) | l_1037), ((g_946 >= g_1012) || ((safe_mul_func_uint8_t_u_u((l_1044 = g_412.f0), l_1045)) >= (g_208 |= l_1045)))))) > ((safe_mod_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((+l_1050), g_185)), g_157)) > g_779)))
            {
                if (l_1013.f0)
                    break;
            }
            else
            {
                unsigned l_1068 = 0x55F02D1EL;
                int l_1077 = (-1L);
                for (g_946 = 0; (g_946 < 43); g_946 = safe_add_func_uint64_t_u_u(g_946, 1))
                {
                    int l_1055 = 0L;
                    struct S0 l_1073 = {8UL,0x15L};
                    g_1070 &= (~(l_1069 |= (safe_lshift_func_uint16_t_u_s(((l_1055 != g_910) ^ (safe_rshift_func_uint16_t_u_s(((g_28 &= (((safe_add_func_uint8_t_u_u(g_426, g_125.f1)) , g_623) < (((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((((((g_376 || g_498) || (((safe_rshift_func_int16_t_s_s(g_794, (safe_rshift_func_int8_t_s_s(((((l_1050 , l_1068) == l_1055) <= 248UL) | 4294967286UL), l_1045)))) , g_1012) == g_623)) <= 0x10L) || g_208) , 65535UL) , 65531UL) , g_910), g_125.f0)), 0UL)) < l_1037) || g_125.f1))) <= g_185), g_589))), 6))));
                    for (g_426 = 21; (g_426 != 24); g_426 = safe_add_func_uint32_t_u_u(g_426, 7))
                    {
                        char l_1074 = 0x3EL;
                        g_125 = l_1073;
                        l_1074 = g_378;
                    }
                    for (g_412.f0 = 20; (g_412.f0 == 19); g_412.f0 = safe_sub_func_int64_t_s_s(g_412.f0, 3))
                    {
                        short l_1078 = 2L;
                        l_1050 = 0L;
                        g_426 = g_122;
                        g_28 ^= (l_1077 = l_1073.f1);
                        g_426 |= ((l_1077 != g_423) ^ func_82((0x5C7BL | 0x7BA7L), l_1050, l_1078));
                    }
                }
            }
            g_426 = (l_1080 = ((l_1050 = l_1050) ^ (g_1079 = (-1L))));
            for (l_1069 = 0; (l_1069 > (-5)); l_1069 = safe_sub_func_int64_t_s_s(l_1069, 1))
            {
                unsigned l_1083 = 1UL;
                unsigned long long l_1103 = 0xF14992F0222CC74ELL;
                if (l_1044)
                    break;
                l_1083 = l_1045;
                for (g_426 = 0; (g_426 <= 26); g_426 = safe_add_func_int32_t_s_s(g_426, 1))
                {
                    int l_1088 = 0x7B12415AL;
                    union U1 l_1091 = {0UL};
                    short l_1092 = 0x6EFAL;
                    g_28 = func_82((((safe_lshift_func_int16_t_s_u(l_1088, 8)) & ((0x66F6L ^ (((((0xBB63EC34L & ((g_239 = l_1088) | (-1L))) | ((safe_add_func_uint16_t_u_u(func_82(g_208, l_1044, (l_1092 |= func_82((+(g_210 && (l_1050 = (l_1091 , 0L)))), l_1044, g_946))), g_498)) | l_27)) ^ g_302) , 0x9F00CAC114E230E3LL) , l_1050)) == l_1037)) < g_208), l_1069, l_1037);
                    l_1050 ^= 0xA2440297L;
                }
                l_27 &= (l_1083 , (safe_sub_func_uint32_t_u_u((0x21718F3F9D093518LL <= (l_12 , ((safe_div_func_int16_t_s_s(((((safe_add_func_uint32_t_u_u(((l_1099 &= g_122) != g_289), g_620)) && (g_589 = (l_1100 = 0xBF2DL))) != (safe_rshift_func_int16_t_s_u(l_1103, (g_426 , g_13)))) > g_378), (-1L))) != g_238))), g_874)));
            }
        }
        l_27 = l_1080;
    }
    else
    {
        unsigned short l_1110 = 65528UL;
        unsigned short l_1121 = 1UL;
        struct S0 l_1126 = {255UL,255UL};
        int l_1127 = 5L;
        for (g_283 = 0; (g_283 == (-8)); g_283 = safe_sub_func_int8_t_s_s(g_283, 1))
        {
            int l_1120 = (-1L);
            int l_1123 = 8L;
            unsigned short l_1124 = 0xA7B5L;
            for (g_1070 = (-18); (g_1070 > (-15)); g_1070 = safe_add_func_uint8_t_u_u(g_1070, 4))
            {
                int l_1119 = 0x87A6EFCEL;
                int l_1122 = 0x9C6D80A0L;
                l_1126 = func_38((safe_mul_func_int8_t_s_s(l_1110, (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((((((l_1123 |= func_82((1UL & (((6UL | g_125.f0) ^ func_46((safe_mod_func_uint16_t_u_u(g_210, (safe_div_func_uint16_t_u_u(65528UL, g_283)))), (g_240 != (l_1119 ^ g_929)), l_1120, l_1121)) | l_1119)), l_1122, l_1121)) || 0UL) , g_779) , 0x102F9971L) & l_1120) <= 0x2B7A7B9AL) , l_1124), 0x07L)), 0xACFAL)))), g_1125, l_1124, l_1013.f0, l_1124);
            }
            l_1127 &= 0x50375DD0L;
            g_28 = ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((g_412 , l_27), (safe_sub_func_int64_t_s_s(((safe_sub_func_int8_t_s_s((g_240 <= (((safe_div_func_uint32_t_u_u(l_1127, (-9L))) || g_1125) < (g_238 | l_1013.f0))), 1L)) > l_27), l_12)))), g_1079)) , g_157), g_589)) && g_210);
        }
        for (g_443 = 0; (g_443 != (-13)); g_443 = safe_sub_func_uint64_t_u_u(g_443, 9))
        {
            char l_1152 = 0x84L;
            int l_1153 = (-1L);
            unsigned short l_1180 = 65535UL;
            struct S0 l_1219 = {0xA2L,0x52L};
            unsigned l_1249 = 0x6F75849AL;
            if ((safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((l_1153 = (safe_rshift_func_uint8_t_u_s(l_1152, g_623))), g_929)), ((l_1127 &= ((g_752 &= l_12) < (g_794 <= (safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(g_28, 3)), ((safe_mod_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(g_145, (l_1013.f0 , ((l_27 = 0x704BA2ADL) | 0UL)))), (-1L))) , 255UL))), l_12))))) & g_620))), g_929)), 0x6A239872L)))
            {
                return g_784;
            }
            else
            {
                char l_1170 = 0x2EL;
                union U1 l_1202 = {0xF91A82D9L};
                int l_1210 = 0L;
                if (((l_1180 = ((safe_lshift_func_int8_t_s_s((func_46(((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((l_1126.f0 <= func_46(g_576, l_1170, g_159, g_426)), (safe_mod_func_uint32_t_u_u((g_289 == (((!((safe_lshift_func_uint16_t_u_u((g_242 , (((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s((g_1179 |= g_412.f0), l_1013.f0)), g_157)) ^ g_28) > 0UL)), l_1170)) , 7L)) != g_794) & 1L)), l_1170)))), g_1012)) , 0x5D4AL), l_1170, l_12, l_1170) , g_910), l_1170)) || g_242)) != g_1079))
                {
                    unsigned short l_1187 = 0x1663L;
                    int l_1188 = 0x1353BB39L;
                    if (l_1126.f1)
                        break;
                    if (l_1152)
                        break;
                    for (g_159 = 0; (g_159 < 23); g_159++)
                    {
                        g_784 = func_38(g_874, (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(l_1013.f0, 3)), l_12)), g_376, (l_1188 = l_1187), (4294967295UL ^ ((g_589 = ((g_185 & g_185) == g_412.f0)) >= 2UL)));
                        return g_784;
                    }
                }
                else
                {
                    unsigned char l_1203 = 1UL;
                    int l_1214 = 1L;
                    struct S0 l_1218 = {246UL,250UL};
                    g_426 = (safe_sub_func_uint32_t_u_u(l_1170, ((safe_div_func_uint16_t_u_u(((-7L) < 6UL), (safe_sub_func_int64_t_s_s(l_1110, (l_1195 = l_1121))))) <= ((g_283 &= (safe_lshift_func_int8_t_s_s((((l_1153 = g_28) | ((safe_mul_func_int8_t_s_s((l_1013.f0 == (safe_lshift_func_int16_t_s_u((g_589 = l_1170), 4))), (l_1202 , 253UL))) || l_1202.f0)) , 0xF5L), l_1203))) && g_240))));
                    g_784 = ((0x949B22DE8111D4C1LL || l_1126.f1) , func_38(l_1203, (g_620 = l_1170), l_1126.f1, l_1127, func_46(g_185, func_82((g_1125 = (l_1214 = ((safe_sub_func_int64_t_s_s(((((safe_div_func_uint64_t_u_u((((func_67((safe_add_func_int8_t_s_s((l_1210 = g_443), (safe_add_func_uint64_t_u_u((g_122 , l_1202.f0), g_185)))), l_1203) <= l_1195) , l_27) , g_1179), l_1203)) , g_874) > g_1213) || 0x17CBL), g_239)) > l_1202.f0))), g_1213, l_1170), g_1012, l_1203)));
                    l_1210 |= (safe_unary_minus_func_int8_t_s((g_1125 , (((safe_mod_func_int16_t_s_s(l_27, l_1203)) , (l_1127 = l_1121)) & g_784.f1))));
                    return l_1218;
                }
                if (l_1202.f0)
                {
                    unsigned l_1234 = 0x98661B84L;
                    int l_1236 = (-1L);
                    int l_1248 = 0xD8CAF452L;
                    l_1219 = (g_125 = (g_784 = g_125));
                    if ((l_1121 & func_82((safe_rshift_func_int16_t_s_u(g_376, 2)), ((safe_add_func_int8_t_s_s(((0xD9D67430D77FBFB2LL | ((safe_mul_func_uint8_t_u_u(0x0EL, func_67(g_159, l_1013.f0))) & (safe_mod_func_int16_t_s_s((((g_1179 &= (safe_rshift_func_int16_t_s_s((safe_div_func_int32_t_s_s((g_1235 ^= (l_1210 & func_82(((safe_lshift_func_uint16_t_u_s(func_82((l_1127 &= (g_929 |= func_82((func_82((g_1079 = (((((0x07ACL ^ g_238) , l_1170) | 0xD516D089L) < (-2L)) && l_1234)), l_1234, g_185) < l_1180), g_589, g_498))), g_576, g_794), 9)) > l_1195), g_698, l_1234))), g_498)), 10))) , l_1236) , l_1234), g_210)))) | 0xE4L), g_283)) , l_1234), g_1012)))
                    {
                        unsigned char l_1237 = 8UL;
                        l_1127 |= (func_67(l_1237, (0x910CL >= func_82((safe_sub_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((0xE5L > g_122), l_1126.f0)), (g_283 >= (safe_add_func_uint64_t_u_u((((safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u((l_1248 = l_27), g_874)), g_779)) <= 0x0273L) , 1UL), g_283))))), g_929, l_1249))) , l_1234);
                    }
                    else
                    {
                        g_28 = ((safe_lshift_func_uint8_t_u_u(((g_412 = g_412) , (0x1A2CC141L >= ((safe_sub_func_uint16_t_u_u(func_46(g_210, g_1213, g_210, g_784.f1), (+g_118))) > 6UL))), l_1126.f1)) != 0xAFF7029C866FD354LL);
                    }
                    if (g_874)
                        break;
                }
                else
                {
                    g_28 = (+(safe_rshift_func_uint16_t_u_u(g_239, 13)));
                }
            }
        }
    }
    if (((((0xA8068DCD28C92C9CLL | (safe_lshift_func_uint16_t_u_s(((l_12 <= (safe_mod_func_int32_t_s_s(((g_13 = 0xC5L) & g_929), g_302))) >= 4L), 3))) == (safe_sub_func_uint32_t_u_u((func_38(l_12, (g_874 ^= (func_46(g_157, (((safe_rshift_func_uint8_t_u_u(((safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s((((l_27 |= (g_1125 = g_1235)) , 5UL) > l_1013.f0), l_1013.f0)), g_779)) | g_784.f0), g_623)) && g_620) != (-6L)), g_752, l_1195) && l_27)), g_239, g_752, g_620) , l_1013.f0), 0xCED8709BL))) == l_12) <= l_12))
    {
        char l_1272 = 0x05L;
        int l_1283 = 0x44637EA1L;
        int l_1284 = 0xB55CECDDL;
        int l_1300 = 0x36C9D8F1L;
        struct S0 l_1301 = {9UL,0x98L};
        union U1 l_1307 = {0UL};
        unsigned long long l_1332 = 0x8DCCC3A1EF8A6C40LL;
        unsigned l_1402 = 0xED6B1C46L;
        g_426 &= (l_1284 = (g_874 == (safe_div_func_int32_t_s_s((safe_add_func_int8_t_s_s((9L ^ ((func_82(((l_1272 , 1L) >= (g_794 = ((g_125.f0 == (safe_mod_func_int64_t_s_s((8L && ((safe_rshift_func_int16_t_s_u((l_1272 == (safe_sub_func_int64_t_s_s(func_82(l_27, (g_208 = (((l_1282 ^= (l_1281 = ((safe_rshift_func_uint16_t_u_s((0xF567L & l_27), g_238)) < g_1125))) | l_27) ^ 0x0236L)), l_1283), 0xC771F9D7489F503ALL))), 1)) & l_1013.f0)), l_1283))) , 255UL))), g_1235, l_1283) == g_698) ^ l_1013.f0)), 0x88L)), 0xC87F7D8AL))));
        if ((g_28 = (safe_mul_func_int16_t_s_s(l_1283, (((safe_mul_func_uint8_t_u_u((g_498 && ((safe_sub_func_int32_t_s_s((l_1300 ^= (safe_sub_func_int64_t_s_s(l_1284, ((safe_add_func_int64_t_s_s(((((1UL & g_125.f1) > (g_283 = (+6L))) , (((safe_mul_func_int16_t_s_s(g_443, (safe_sub_func_int64_t_s_s(((l_1299 != (g_208 = (0x46L <= (-1L)))) == l_1283), 8UL)))) == g_239) , g_698)) < 0UL), g_1012)) <= 0L)))), 0x37FF2B48L)) == 0xA8L)), 0L)) & 0x22L) && 0x33L)))))
        {
            l_1301 = g_784;
        }
        else
        {
            short l_1323 = 0x0DC3L;
            int l_1324 = 0x3B7CDED6L;
            unsigned short l_1341 = 0x1A8FL;
            unsigned short l_1385 = 65532UL;
            struct S0 l_1388 = {4UL,6UL};
            int l_1420 = (-9L);
            for (g_114 = 0; (g_114 != 24); g_114 = safe_add_func_uint32_t_u_u(g_114, 6))
            {
                unsigned l_1306 = 18446744073709551615UL;
                int l_1342 = 0xCF40A098L;
                int l_1343 = 0x8A32D9B0L;
                int l_1344 = 0x79925302L;
                l_27 = ((((l_1300 |= (safe_sub_func_uint16_t_u_u((l_1306 , (l_1307 , (((l_1324 = (safe_add_func_uint64_t_u_u(g_784.f1, (((safe_add_func_int64_t_s_s(func_46((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((g_125.f0 & (safe_mul_func_uint8_t_u_u((l_1284 ^ (safe_sub_func_int16_t_s_s(l_1301.f0, g_1125))), (l_1284 > g_240)))) >= 0xB0D8L), l_1306)), l_1299)), l_1272)), l_1284, g_145, g_1322), g_208)) <= l_27) , l_1323)))) & 0UL) | 0x1AL))), (-1L)))) | l_1323) <= l_1323) , g_1179);
                l_1344 ^= ((safe_add_func_int64_t_s_s(func_46(l_1013.f0, (g_118 | (safe_mul_func_int8_t_s_s(l_1281, (l_1306 ^ ((safe_lshift_func_uint16_t_u_u(8UL, (safe_unary_minus_func_uint32_t_u(g_698)))) < 8UL))))), (l_1343 = (l_1332 || (safe_lshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u((l_1324 |= ((safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s((l_1342 ^= func_46((g_623 , 9UL), l_12, l_1341, g_1179)), 0UL)), 0xEDCEBD0E90F54EE2LL)) , l_1307.f0)), l_1284)), 7)))), g_412.f0), l_1195)) == g_159);
                return g_125;
            }
            for (g_1070 = 0; (g_1070 >= (-15)); g_1070 = safe_sub_func_int64_t_s_s(g_1070, 1))
            {
                int l_1380 = 1L;
                unsigned l_1389 = 0x1ADFD3DEL;
                char l_1405 = 0xFDL;
                g_426 = 0L;
                for (l_1013.f0 = 0; (l_1013.f0 == 35); ++l_1013.f0)
                {
                    unsigned l_1355 = 18446744073709551615UL;
                    int l_1406 = 0L;
                    if (((safe_lshift_func_uint8_t_u_u(254UL, 4)) , (safe_mul_func_int16_t_s_s((func_2(((safe_mod_func_int64_t_s_s(l_1355, (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s(((func_75(((((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((0xD357L >= (((l_1299 == (g_302 = (safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_13, ((l_1341 , g_210) >= (safe_lshift_func_int8_t_s_u(g_114, ((safe_mod_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(g_239, 0x74L)) > g_784.f0) , g_125.f0), g_239)) < l_1380)))))), g_910)))) ^ g_238) && 0x31EBE07566F00EE3LL)) > g_929), l_1323)), l_1300)), 0xEFL)) >= g_929) >= 3UL) | g_378), l_1380) , g_238) && g_443), g_576)), 12)) | g_1079) == 4294967295UL) & 0x13BBL), (-7L))), 0x9CL)))) | g_779), g_1235, l_1307.f0, g_412, g_426) != g_779), g_698))))
                    {
                        int l_1381 = (-6L);
                        if (l_1381)
                            break;
                        g_28 = (g_946 && func_2(l_1013.f0, (safe_div_func_int64_t_s_s((safe_unary_minus_func_uint64_t_u(0x91F862762F27C260LL)), l_1385)), (safe_sub_func_int64_t_s_s((l_1300 = g_302), (l_1380 >= 1UL))), (l_1307 = l_1307), (l_1284 = g_1322)));
                    }
                    else
                    {
                        g_125 = l_1388;
                    }
                    l_1380 = ((l_1300 , l_1389) , (((safe_sub_func_uint32_t_u_u((4294967295UL != l_1380), ((g_784.f1 , g_240) , (safe_lshift_func_uint16_t_u_s(((g_1235 == ((((safe_lshift_func_int8_t_s_s(l_27, (safe_div_func_uint16_t_u_u((g_779 ^= (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((func_67(l_1284, l_1341) || l_1380) >= g_929), l_1341)), 8))), l_1388.f0)))) || 0x55E8L) , 0xAE0ECC40A2A5B4ECLL) == g_929)) > g_1322), l_1402))))) | g_1235) || 0x08L));
                    l_1406 |= (((l_1324 ^= ((g_784.f0 < 0xC26DB184L) , ((1L < (safe_add_func_int16_t_s_s(l_1405, (((!(l_1300 |= (g_929 = (l_1284 ^= 0xAD20L)))) & g_125.f1) != 65535UL)))) && (l_1301 , 0UL)))) > l_1355) > (-1L));
                    g_28 = ((l_1406 || g_122) & (func_82((4294967295UL ^ (((safe_unary_minus_func_uint64_t_u(g_784.f0)) & (safe_add_func_uint64_t_u_u(0UL, (safe_lshift_func_uint8_t_u_u(5UL, 4))))) < ((safe_unary_minus_func_int32_t_s(func_46(((safe_mod_func_uint8_t_u_u(l_1332, func_67(l_1406, (l_1385 , g_874)))) & 0x41L), g_118, g_946, l_1355))) < l_1341))), l_12, g_784.f0) < 0xCC56DD87F4F2CA0CLL));
                }
                for (g_159 = 0; (g_159 < 46); g_159++)
                {
                    long long l_1419 = 1L;
                    l_1419 = (+(l_1324 = 0x9451AE3DL));
                    g_125 = g_784;
                    l_1281 ^= g_125.f1;
                    l_1324 = l_1284;
                }
            }
            l_27 = func_82((g_498 && l_1420), l_1301.f0, ((g_239 != ((l_1300 = func_82(((l_1324 = (((0x89DE7873BB2E6962LL < (((g_752 <= l_27) == (safe_sub_func_uint16_t_u_u((g_145 & (func_46((g_1125 = g_210), l_1282, l_1332, l_1420) , 0xDCL)), g_874))) >= 0x9229C9DEL)) != l_1324) > l_1195)) , l_1300), l_1341, g_376)) != 1L)) == g_1179));
        }
    }
    else
    {
        int l_1427 = 0xF301FCD2L;
        int l_1430 = 0L;
        unsigned l_1431 = 18446744073709551615UL;
        int l_1432 = 0x0C44741AL;
        struct S0 l_1433 = {252UL,0UL};
        l_1432 |= ((safe_sub_func_int8_t_s_s(((l_1427 &= 0xF9L) <= (l_1430 ^= (safe_div_func_uint16_t_u_u(65527UL, l_1013.f0)))), ((g_1012 , (((g_752 <= (2L >= 0x0E53A785768B6940LL)) >= (func_82(l_12, (((g_423 = g_874) == l_1013.f0) & g_239), l_1431) == 0L)) , g_378)) < l_1431))) >= g_114);
        return l_1433;
    }
    for (l_1281 = 0; (l_1281 > 28); l_1281 = safe_add_func_uint16_t_u_u(l_1281, 7))
    {
        unsigned long long l_1440 = 0xBF5D919DC979FECFLL;
        unsigned l_1441 = 0xE5C761ADL;
        int l_1455 = (-9L);
        unsigned l_1488 = 4294967295UL;
        unsigned short l_1507 = 1UL;
        struct S0 l_1510 = {255UL,0xB9L};
        if (((g_159 = 18446744073709551615UL) && (((safe_mod_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((g_1322 = l_1440), (l_1441 || l_1440))) ^ l_1440), g_946)) , 0xD9FCCE59L) | (safe_rshift_func_uint8_t_u_u(9UL, 4)))))
        {
            struct S0 l_1450 = {6UL,0x6BL};
            int l_1457 = (-1L);
            int l_1458 = 5L;
            l_1458 |= func_75((((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(g_157, (safe_sub_func_uint8_t_u_u((l_1450 , (safe_mul_func_int8_t_s_s((!l_1450.f0), func_46((g_794 ^ (func_82((l_1195 <= (safe_rshift_func_uint16_t_u_u((g_589 , (g_946 == g_910)), ((l_1455 = (g_784.f1 = 0x26L)) <= l_1440)))), g_779, g_1456) , g_118)), l_1457, g_159, l_1440)))), g_283)))), g_910)) && (-2L)) , l_1450.f0), l_1450.f0);
            for (g_1070 = (-10); (g_1070 != 12); g_1070 = safe_add_func_uint16_t_u_u(g_1070, 3))
            {
                int l_1471 = 0x7009A0ACL;
                struct S0 l_1476 = {2UL,0x07L};
                unsigned l_1483 = 9UL;
                int l_1484 = (-1L);
                g_784 = func_38((g_114 = 7UL), (g_620 = 1L), (safe_unary_minus_func_uint8_t_u(l_1462)), g_238, g_423);
                for (g_1179 = (-22); (g_1179 != 28); g_1179 = safe_add_func_int16_t_s_s(g_1179, 5))
                {
                    long long l_1482 = 0xE7D5BA883850EB75LL;
                    int l_1485 = 0xB4ED2666L;
                    l_1485 = ((safe_add_func_uint8_t_u_u((((+((g_946 |= (g_1012 = g_28)) == (g_698 = ((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(func_75(l_1471, (safe_mod_func_uint16_t_u_u(g_125.f0, (safe_mod_func_uint16_t_u_u(l_1455, ((l_1477 = l_1476) , (g_1079 &= ((0x6DL & (l_1484 = (func_46((((safe_mod_func_uint8_t_u_u(0x45L, (safe_rshift_func_int8_t_s_s(func_82(l_1482, g_620, l_1450.f1), 1)))) , l_1482) ^ 0xC70FDFD3L), l_1450.f1, l_1483, g_157) > g_698))) , g_1070)))))))), g_576)), g_1322)) & l_1482)))) | g_302) , l_1482), 0UL)) || 0x25130474L);
                    for (g_498 = 0; (g_498 > 6); ++g_498)
                    {
                        g_426 |= 0xC3A6D85AL;
                    }
                    if (l_1441)
                        continue;
                    g_28 = (func_63(l_1482) > 3L);
                }
                l_1510 = func_38(((g_302 = (l_1488 && (((g_159 > ((safe_mod_func_uint8_t_u_u((((-8L) >= (((func_82((safe_sub_func_int64_t_s_s((safe_add_func_int16_t_s_s((l_27 = 5L), (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((safe_add_func_int8_t_s_s((g_423 |= l_1281), (safe_add_func_int32_t_s_s((func_82(((g_794 | (g_208 = (!((safe_div_func_uint32_t_u_u(func_82((9UL >= 0L), g_125.f0, g_929), l_1507)) > 0xC2C44A9C30CFA7BCLL)))) | l_1450.f1), l_1455, l_1484) ^ 0xB877EEDD38B587F0LL), l_1508)))) & l_1299), g_378)), 3)))), g_239)), l_1507, l_1471) == l_1509) & l_1282) , g_1322)) <= g_238), g_589)) > l_1476.f1)) | l_1282) | 0x70L))) > g_28), g_698, g_157, g_426, l_1299);
            }
        }
        else
        {
            long long l_1526 = 0x70BD4CE4650CAB5ELL;
            l_1526 = (safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(g_794, 1)), (safe_add_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((252UL && ((l_1521 && (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint64_t_u_u(g_1179, (g_498 ^ 0x1DA95065L))) >= (-4L)), 5))) <= l_1441)), 0xFED2L)) | g_1213), 0xACA7328EL)))), l_1509));
        }
        g_28 = l_1510.f0;
        for (g_1179 = 0; (g_1179 <= (-18)); g_1179--)
        {
            return g_125;
        }
    }
    return g_784;
}







static int func_2(int p_3, long long p_4, short p_5, union U1 p_6, unsigned char p_7)
{
    unsigned short l_1018 = 65535UL;
    int l_1032 = 6L;
    g_784 = (((safe_rshift_func_int16_t_s_s((p_5 = 0x62D6L), (safe_rshift_func_uint8_t_u_u(255UL, (p_6.f0 ^ l_1018))))) , (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((l_1032 = ((safe_unary_minus_func_int16_t_s(((((safe_mod_func_int16_t_s_s((p_5 = g_28), (((safe_mod_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u(((((func_73((0x53E8B532D647B465LL & 9UL)) | ((safe_rshift_func_uint16_t_u_s(p_7, 2)) | 65529UL)) >= g_929) > 0x9292L) && 18446744073709551610UL), l_1018)) | g_779) <= p_7), l_1018)) && l_1018) , g_794))) > l_1018) != 5UL) , 0xDEC4L))) != 2UL)) || p_6.f0), 0xBF40EAC4L)) , g_157), p_4))) , g_784);
    return l_1032;
}







static int func_14(short p_15, unsigned char p_16)
{
    int l_31 = (-9L);
    unsigned l_754 = 0x13FEEBCDL;
    int l_755 = 0xD5D4AC07L;
    unsigned l_756 = 6UL;
    unsigned l_757 = 0x961A097BL;
    struct S0 l_785 = {255UL,0x93L};
    int l_795 = 0xB8AF8430L;
    int l_796 = 0L;
    unsigned l_805 = 0xD8384204L;
    unsigned char l_807 = 0xC1L;
    unsigned l_876 = 18446744073709551610UL;
    int l_877 = 0xCB2A06D8L;
    unsigned l_941 = 0x54D0E48AL;
    unsigned char l_950 = 246UL;
    union U1 l_984 = {2UL};
    g_28 ^= (((safe_mul_func_uint16_t_u_u(((p_16 == l_31) != ((safe_mul_func_uint16_t_u_u(0xB6BAL, p_16)) & (safe_mod_func_int64_t_s_s(0x37F1BD53D2AE4566LL, g_13)))), l_31)) < g_13) , (safe_rshift_func_int8_t_s_s(g_13, 4)));
    l_785 = (g_784 = func_38(g_28, ((g_28 >= (+(((safe_lshift_func_uint16_t_u_u(p_15, 9)) > (func_46(p_16, ((safe_mod_func_int8_t_s_s(((+0x9A3EL) >= 0xE8CAL), ((safe_mul_func_int8_t_s_s(0x2CL, (safe_lshift_func_uint16_t_u_s((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((l_755 = ((safe_rshift_func_uint8_t_u_u(func_63(p_16), p_15)) == l_754)) | g_13), 4)), p_16)) <= g_698) > l_31), 14)))) , p_15))) | p_16), l_756, l_757) < p_15)) , p_16))) >= g_28), p_16, l_756, p_15));
    if ((safe_rshift_func_int16_t_s_u((l_796 &= ((((func_63(func_75((0xA5F9B075L <= (safe_add_func_uint16_t_u_u(p_15, 0xD456L))), l_756)) != (safe_add_func_uint64_t_u_u((65531UL | (safe_div_func_int8_t_s_s(((g_794 |= p_16) != (((g_784.f0 ^ l_795) == 0x2382183AA12F3E79LL) < g_13)), 253UL))), p_15))) || l_756) , l_785.f0) , 0x335DL)), 15)))
    {
        struct S0 l_801 = {0xF0L,0x23L};
        int l_804 = 0L;
        int l_818 = 0x8362EF91L;
        long long l_825 = (-1L);
        int l_851 = 0x16585498L;
        short l_895 = 6L;
        unsigned short l_925 = 65526UL;
        int l_942 = 0x74D84F53L;
        int l_943 = 0x3ACD204DL;
        unsigned short l_951 = 65532UL;
        union U1 l_983 = {18446744073709551609UL};
        union U1 l_993 = {0x78900475L};
        int l_994 = 0x689E5004L;
        if ((safe_add_func_int32_t_s_s(0xC8085648L, p_15)))
        {
            unsigned l_806 = 0xB39C07E4L;
            int l_827 = 7L;
            int l_831 = 0xB2F68161L;
            struct S0 l_844 = {0x69L,0x15L};
            int l_890 = 7L;
            unsigned l_917 = 0x80131E6AL;
            unsigned l_944 = 0UL;
            short l_958 = 0x1385L;
            l_807 = (p_15 < (safe_div_func_int32_t_s_s(((func_82((g_412 , 0xB516L), (l_804 = ((((((l_801 , 0x91L) , 0xADA99164L) , (~(g_620 != (safe_sub_func_int16_t_s_s((l_796 &= l_795), (g_122 , 0xDE1FL)))))) || g_623) , p_15) || 0xC6BAL)), l_805) ^ g_443) == l_806), 0x875629ABL)));
            l_795 |= (safe_mul_func_int8_t_s_s(g_426, (safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(0xA76CA1F1L, (p_15 && 0L))), (((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((l_818 , (((~((0L > l_755) || ((func_75(l_756, l_806) != g_784.f0) != g_423))) >= p_16) <= p_15)) | l_806), 7L)), 5)) & 0xA6L) ^ 0x9B02L)))));
            l_804 ^= ((l_795 = 0x35408AE713E3FA4CLL) >= g_376);
            if (l_756)
            {
                int l_826 = 0xA0F2D54EL;
                int l_830 = 7L;
                short l_832 = 0x2512L;
                l_831 |= func_63((safe_mul_func_uint8_t_u_u(((l_830 = (safe_mod_func_uint16_t_u_u((l_827 = (safe_mod_func_uint32_t_u_u(0x18CD8C7DL, (l_826 = l_825)))), (safe_add_func_int16_t_s_s((func_46(l_830, func_63(p_15), l_806, p_15) || (func_46((p_15 < g_185), p_15, g_623, g_13) & 9UL)), 0L))))) < p_15), l_807)));
                g_784 = func_38(func_82((g_239 &= l_830), l_832, ((l_805 && (~((g_752 &= (1L & (-1L))) && (-6L)))) <= g_159)), p_15, l_826, l_827, g_623);
                l_796 ^= l_818;
                for (l_801.f1 = 0; (l_801.f1 == 41); l_801.f1++)
                {
                    unsigned long long l_843 = 6UL;
                    l_844 = func_38(g_289, p_16, (p_16 ^ l_832), (((((0xC2EDL <= 0x12D6L) >= (safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(l_832, (l_804 = ((((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s(g_125.f1, func_82(g_159, p_15, l_827))) > g_784.f1), 5)) > 4294967287UL) , p_15) | p_15)))), l_843))) ^ g_145) , p_16) , l_843), g_242);
                    for (g_784.f1 = 0; (g_784.f1 != 43); ++g_784.f1)
                    {
                        l_755 |= (-1L);
                        if (l_843)
                            continue;
                    }
                    g_426 &= (func_75((~((+(safe_mul_func_uint8_t_u_u(p_16, 0xFCL))) ^ p_15)), g_412.f0) | (l_795 &= ((safe_lshift_func_int8_t_s_u(p_15, 1)) < (-1L))));
                    if (g_794)
                        break;
                }
            }
            else
            {
                unsigned char l_867 = 0xEAL;
                short l_875 = 0xE1D8L;
                int l_881 = (-7L);
                int l_891 = (-1L);
                struct S0 l_930 = {9UL,0x5AL};
                unsigned l_945 = 5UL;
                unsigned long long l_959 = 0x2F44FF25F9E6270DLL;
                g_28 = ((l_851 == 0xE9BBL) , (((-8L) && p_16) > p_15));
                if ((safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((l_818 && ((g_159 , ((((safe_sub_func_uint32_t_u_u(((((((safe_mul_func_uint16_t_u_u((((g_114 != g_794) || (l_804 ^= (g_289 & (safe_sub_func_uint64_t_u_u((((safe_mod_func_int32_t_s_s(((safe_div_func_uint8_t_u_u(p_15, ((func_82((safe_unary_minus_func_uint64_t_u(l_801.f0)), l_867, ((safe_mul_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((func_46(func_67(((l_755 &= (func_82((safe_unary_minus_func_int16_t_s(0xD996L)), g_240, p_15) == g_125.f1)) || 0xB496L), g_874), l_875, g_28, l_876) >= 2UL))), l_756)) , p_16), 0xD25FL)) && p_15)) && p_15) || g_302))) | g_242), p_16)) , l_807) != g_576), g_185))))) <= l_844.f1), 0x4D4EL)) , p_16) , g_589) || g_412.f0) , l_875) & g_794), 0L)) != 0xD5BB77A2L) ^ l_867) >= 0xFF7A7FBFL)) >= l_844.f0)) ^ l_806) >= l_877), p_16)), 0x43L)))
                {
                    int l_880 = 0x6595BA6DL;
                    int l_926 = 0x43D414EFL;
                    g_28 = (((((safe_lshift_func_uint8_t_u_u(((g_412 , l_880) ^ g_208), (((l_881 = g_412.f0) == (safe_sub_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_s(g_378, 5)) , (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_890, g_289)), ((l_891 = (l_756 & l_818)) == 0x964D7690037ECF4ALL)))) , 0xC71EC2A4L), l_875))) > 0UL))) , l_825) >= 1L) >= l_890) , g_238);
                    if ((safe_rshift_func_uint8_t_u_u(p_15, l_867)))
                    {
                        unsigned l_894 = 18446744073709551615UL;
                        l_795 |= p_15;
                        g_426 = l_894;
                        g_910 ^= func_67((g_185 != (((((l_895 == (safe_mod_func_int32_t_s_s((l_827 &= ((~p_15) & func_67((safe_mod_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((255UL != (((l_806 && (7UL > p_16)) , (l_831 &= (safe_mul_func_uint8_t_u_u((p_16 = (safe_add_func_uint64_t_u_u(p_15, (safe_mod_func_int8_t_s_s((l_894 <= g_784.f1), g_302))))), 0UL)))) | 0xF1D5326D52B07B2ELL)), 6UL)), p_15)) | 0x9733L) , p_15), g_185)), l_844.f1))), (-9L)))) == l_895) || p_15) == 7L) <= 0xDFD3BB18L)), g_589);
                    }
                    else
                    {
                        unsigned char l_927 = 0xFFL;
                        int l_928 = 2L;
                        l_785 = func_38((((g_412 , ((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((l_880 = g_620) || p_15) | func_75((g_114 |= 0x666856F2L), (((p_15 == (l_827 = p_16)) | func_82(g_589, (func_67(p_15, ((safe_lshift_func_uint8_t_u_s(2UL, 2)) && p_15)) && g_125.f0), p_16)) , 0L))), 0xF7E30634L)), 0L)) >= l_825)) && 0x56695643L) , g_426), g_13, l_917, g_376, g_874);
                        g_929 |= (((func_82((safe_sub_func_int8_t_s_s((l_927 = (l_801 , (safe_mod_func_int32_t_s_s((g_576 < (safe_unary_minus_func_int32_t_s((g_145 <= func_46(g_378, p_16, g_302, (((safe_mod_func_uint32_t_u_u(0x6E3AD3D6L, (func_82(p_16, l_925, g_426) ^ l_890))) <= l_926) >= p_16)))))), g_13)))), g_114)), l_928, g_784.f1) | g_240) == g_576) , 0L);
                        l_930 = (g_125 = l_930);
                        l_930 = l_785;
                    }
                    g_946 &= ((((l_944 = func_75(p_16, ((safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(g_239, (safe_sub_func_int64_t_s_s(l_851, (-1L))))), (safe_add_func_int64_t_s_s(g_118, func_67(p_16, (g_423 = g_412.f0)))))), (l_943 &= (+((g_376 ^= (((l_942 = ((l_804 = l_941) , l_795)) , g_784) , p_16)) > p_15))))) , 1L))) < g_620) , l_880) < l_945);
                }
                else
                {
                    unsigned l_947 = 0xB9487985L;
                    l_947 = 1L;
                    l_795 |= (l_804 = (safe_div_func_int32_t_s_s((((l_818 < (~l_943)) ^ 0xF659L) || l_950), (((l_951 , (p_16 & (safe_mul_func_uint16_t_u_u(func_46((((((((safe_div_func_int32_t_s_s(l_796, (g_28 &= l_917))) | (safe_add_func_int8_t_s_s((l_796 || g_145), p_15))) || l_917) | 0x3B654930L) == 0xA2D79625L) , l_825) || g_118), l_945, g_125.f0, l_827), l_958)))) || p_16) , l_959))));
                }
            }
        }
        else
        {
            long long l_972 = 0x716F330C0827579DLL;
            int l_973 = 0x6D09916CL;
            l_795 = func_75((g_498 = (safe_sub_func_int16_t_s_s(p_16, g_784.f0))), (l_973 |= (safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((((1UL != (safe_rshift_func_uint16_t_u_u(g_794, (g_125.f0 ^ (~p_16))))) && p_15) ^ (((safe_div_func_uint32_t_u_u((func_82((g_125 , 1UL), g_620, g_239) <= g_114), p_15)) < g_589) , g_698)) != l_972), 0x60L)), 5)), g_623))));
        }
        for (l_876 = 27; (l_876 != 47); l_876++)
        {
            short l_986 = 0xB05AL;
            for (g_623 = 9; (g_623 != 17); g_623++)
            {
                union U1 l_982 = {0UL};
                char l_1009 = 1L;
                int l_1010 = 0L;
                int l_1011 = 0L;
                if (l_785.f0)
                    break;
                if (p_16)
                    continue;
                l_804 ^= ((l_993 = ((safe_div_func_int8_t_s_s(0L, (safe_rshift_func_int16_t_s_u((((l_984 = (l_983 = l_982)) , (safe_unary_minus_func_uint8_t_u(l_986))) & (safe_add_func_int64_t_s_s((((p_16 < func_67(g_589, (l_795 ^= (((l_31 >= (safe_sub_func_uint64_t_u_u(((g_378 & (func_46(((0x4301L < (safe_mul_func_uint8_t_u_u(g_157, 0x12L))) , 9UL), g_779, p_15, p_15) < l_982.f0)) ^ g_208), p_15))) ^ p_16) || p_15)))) | g_283) , 0xD0B2702615680CBBLL), g_946))), 0)))) , l_984)) , l_994);
                l_1011 = (safe_rshift_func_uint16_t_u_s(func_82(g_576, p_15, g_125.f0), (l_795 &= (l_1010 = (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((l_796 |= (5UL & ((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((-9L), 7)), (p_16 , ((safe_add_func_uint32_t_u_u(func_82(p_15, ((safe_mul_func_uint16_t_u_u(0x51D2L, p_16)) == l_31), p_16), g_426)) ^ p_15)))) > p_16))) > p_15), l_1009)), (-10L)))))));
            }
        }
    }
    else
    {
        l_785 = g_125;
    }
    return p_16;
}







static struct S0 func_38(unsigned p_39, int p_40, unsigned short p_41, unsigned char p_42, char p_43)
{
    int l_780 = 4L;
    int l_781 = 0x8D189A2CL;
    unsigned long long l_782 = 0x694B9DCDB1B9F874LL;
    struct S0 l_783 = {254UL,254UL};
    l_781 = l_780;
    g_28 = l_782;
    return l_783;
}







static unsigned char func_46(unsigned short p_47, int p_48, unsigned char p_49, unsigned p_50)
{
    struct S0 l_758 = {248UL,0UL};
    unsigned long long l_777 = 0UL;
    short l_778 = 0L;
    l_758 = g_125;
    g_779 = (g_426 ^= ((((0x38L || (g_283 != ((safe_mul_func_uint16_t_u_u(((g_240 > 1L) , (((((p_50 &= (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((safe_mod_func_int16_t_s_s(func_82(g_378, g_210, (safe_mod_func_int32_t_s_s((0xFCA60822L <= ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(p_47, (g_423 = g_122))), g_240)) || p_48)), g_412.f0))), l_777)) & (-3L)), 0L)), g_283)), g_28)) >= p_49), 7))) , l_758.f1) && p_48) <= p_48) == 0UL)), l_778)) , g_589))) <= 0xAADF67A0L) >= 0x4114L) ^ p_48));
    return p_48;
}







static unsigned char func_63(unsigned long long p_64)
{
    unsigned char l_91 = 246UL;
    char l_753 = (-1L);
    for (p_64 = 0; (p_64 <= 57); p_64++)
    {
        unsigned l_72 = 18446744073709551615UL;
        int l_697 = 3L;
        g_752 |= func_67((safe_mul_func_int16_t_s_s(l_72, (l_697 = (0x2B7283D3L == func_73(func_75(g_28, (((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((-6L), (func_82(g_28, g_13, l_72) , 0UL))), g_28)) >= g_28) ^ l_91))))))), g_698);
        g_426 = l_697;
        g_426 |= l_91;
        if (l_753)
            break;
    }
    return p_64;
}







static int func_67(unsigned p_68, char p_69)
{
    struct S0 l_699 = {0xBEL,0x5CL};
    unsigned l_711 = 0x15FF63ABL;
    int l_717 = 0L;
    char l_730 = 0xEFL;
    int l_733 = 0x973C894CL;
    unsigned char l_737 = 6UL;
    unsigned short l_742 = 1UL;
    short l_750 = 0L;
    int l_751 = (-2L);
    g_125 = (l_699 = l_699);
    for (g_145 = 24; (g_145 < (-16)); g_145 = safe_sub_func_int16_t_s_s(g_145, 1))
    {
        short l_702 = 0L;
        unsigned l_727 = 4294967295UL;
        unsigned char l_734 = 0x93L;
        l_702 ^= (g_426 &= g_185);
        if ((safe_mul_func_int16_t_s_s((0x223C190EL < l_702), g_28)))
        {
            unsigned l_712 = 8UL;
            l_717 = (safe_mul_func_uint8_t_u_u((((0xCFL <= ((safe_sub_func_int8_t_s_s(2L, p_69)) && (safe_lshift_func_uint16_t_u_s((+l_711), 1)))) && (func_82(p_69, l_712, (safe_rshift_func_int8_t_s_s(l_702, 3))) >= (!((safe_add_func_int32_t_s_s((-7L), g_378)) & 0x5CF633356115D857LL)))) <= p_68), p_69));
            g_426 = l_702;
        }
        else
        {
            struct S0 l_718 = {0x84L,0xC4L};
            l_699 = (l_718 = l_718);
            g_426 = ((g_426 && func_82((4294967295UL | (safe_div_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((-6L), ((safe_add_func_int64_t_s_s(0x0914F5AEF98267E2LL, ((p_69 ^ (func_82((0x60L != (safe_sub_func_uint64_t_u_u((l_727 |= p_69), func_82(l_702, (l_717 = ((safe_sub_func_int8_t_s_s((l_702 < g_157), l_699.f1)) <= p_68)), g_13)))), l_702, p_68) , l_727)) <= l_702))) | p_69))) , p_69), p_68))), p_69, p_68)) , g_423);
        }
        g_426 = (0x6984F4ABL & func_82((0x1BL | l_730), (g_412 , ((((0L >= (0UL == ((((((l_733 = ((l_717 = (l_699.f1 >= (l_711 & l_699.f1))) < p_68)) <= g_443) != g_240) && p_69) , g_698) <= g_118))) <= 0x4A52L) && g_13) == l_734)), p_69));
        g_125 = l_699;
    }
    l_751 ^= ((g_302 = (l_733 = (g_412 , (((safe_lshift_func_uint8_t_u_s(((p_68 , l_737) | (safe_lshift_func_uint8_t_u_s((((g_125.f0 = ((safe_add_func_int8_t_s_s((p_69 = (p_68 , (l_742 && (safe_unary_minus_func_uint32_t_u((safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((+g_125.f1) != (g_240 = (g_423 , l_717))), (((safe_mul_func_int8_t_s_s((func_82(p_69, l_699.f0, g_208) == 0xDC0E3FD1L), 0x55L)) ^ l_737) , p_69))), l_750))))))), l_717)) , g_302)) || p_68) > l_750), l_730))), l_699.f1)) , 18446744073709551614UL) , p_68)))) > 0xDBL);
    return l_730;
}







static unsigned func_73(long long p_74)
{
    long long l_307 = 2L;
    int l_314 = 1L;
    int l_344 = 1L;
    union U1 l_415 = {0x1A09568BL};
    char l_421 = 0x6EL;
    struct S0 l_424 = {0x52L,0x3CL};
    char l_530 = 0xD8L;
    int l_559 = (-4L);
    char l_685 = 9L;
    if ((l_314 = (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((0xD25934397CD4D983LL & (0xD64BD887L == 0UL)), ((l_307 < 0x523956FF6C3A2D2ELL) && func_75(l_307, ((safe_mod_func_uint32_t_u_u(1UL, ((((safe_rshift_func_int16_t_s_u((-5L), 13)) < (~(safe_div_func_int64_t_s_s((l_307 | p_74), g_240)))) || p_74) , l_307))) || 0xAAL))))), l_307))))
    {
        unsigned long long l_317 = 18446744073709551615UL;
        int l_318 = 0xD0D2D7D5L;
        int l_398 = 5L;
        struct S0 l_431 = {0x57L,0x4EL};
        unsigned l_444 = 0xCFECB3F4L;
        unsigned char l_558 = 255UL;
        unsigned l_573 = 4294967292UL;
        char l_602 = 0x5BL;
        union U1 l_611 = {1UL};
        int l_612 = 0x343B5F4AL;
        int l_613 = 5L;
        char l_641 = (-1L);
        if ((safe_lshift_func_int8_t_s_u((l_314 = ((g_302 > func_82(g_13, p_74, g_122)) >= (l_307 != (l_317 == (l_318 = g_13))))), (g_283 < g_157))))
        {
            unsigned l_319 = 1UL;
            int l_332 = 0x6E954CBDL;
            struct S0 l_425 = {0x2FL,255UL};
            int l_445 = 1L;
            union U1 l_476 = {18446744073709551615UL};
            unsigned l_549 = 0UL;
            struct S0 l_579 = {9UL,0UL};
            if ((g_125.f0 , (((7UL <= 0xA8L) != l_319) || p_74)))
            {
                char l_333 = 9L;
                l_333 = (safe_mod_func_int8_t_s_s(((l_314 &= 0x0CL) && (l_314 = (g_118 ^ (func_82(((l_318 = (p_74 = 0x0ABC9676B62B178CLL)) <= (safe_mod_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(l_317, (safe_add_func_int16_t_s_s(((g_122 , 0UL) == (safe_rshift_func_uint8_t_u_u(l_314, 1))), l_317)))), func_82((l_332 &= g_28), l_319, g_302))) , (-1L)), g_145))), l_319, l_314) && g_159)))), 255UL));
            }
            else
            {
                int l_349 = 0x3B421E8FL;
                int l_359 = 1L;
                short l_377 = 1L;
                int l_399 = 0xFDD263ADL;
                if (l_332)
                {
                    int l_343 = 0x77E42EC9L;
                    for (l_314 = 0; (l_314 > 16); l_314++)
                    {
                        int l_336 = (-2L);
                        int l_368 = (-8L);
                        long long l_371 = 0xA52F59C979C9EA22LL;
                        l_344 ^= (l_318 , func_82(l_336, (g_208 &= ((1UL && (!g_238)) != (safe_div_func_int64_t_s_s((safe_div_func_uint8_t_u_u((+((safe_add_func_uint64_t_u_u(l_343, l_307)) | ((-10L) <= func_82((g_210 , (((func_82(p_74, g_145, g_118) || p_74) || l_343) || p_74)), p_74, p_74)))), 1UL)), g_302)))), p_74));
                        l_343 = ((safe_div_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_u(l_349, (safe_add_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s(((p_74 | (safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((l_332 &= (l_359 = (0UL < (-6L)))))), 1)), 0L))) , l_343), 4)) >= (l_371 = (g_240 = (((safe_mod_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_242, (safe_add_func_uint32_t_u_u((l_368 |= l_319), (safe_lshift_func_uint8_t_u_u((g_242 | g_240), 6)))))), 8UL)) < p_74), l_343)) >= 0x3A7CL) <= g_242)))) , l_318), 2UL)))) , g_238) != 4294967295UL), p_74)) < l_343);
                    }
                    g_376 = ((-1L) || (func_82(((g_283 = (((safe_mul_func_uint16_t_u_u((l_332 = (g_239 = (((safe_mul_func_int8_t_s_s(l_343, l_317)) >= (g_159 = ((p_74 == p_74) | (g_240 & g_240)))) || g_145))), p_74)) , l_332) > l_319)) , p_74), p_74, g_13) >= l_317));
                    g_378 ^= l_377;
                }
                else
                {
                    char l_395 = (-2L);
                    int l_406 = 0x6FB191E2L;
                    union U1 l_416 = {0UL};
                    if ((((l_318 = (safe_div_func_int64_t_s_s((func_82((!(l_399 |= (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((l_359 ^= (l_314 = (safe_sub_func_uint16_t_u_u((p_74 , 0UL), (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(0x86F1L, (safe_div_func_uint32_t_u_u(l_307, 4294967286UL)))) ^ p_74) ^ l_395), (safe_mul_func_uint16_t_u_u(g_302, 1UL)))))))), l_307)) || l_319) || 0x4FD5L), l_398)), p_74)))), g_122, l_319) && p_74), 1UL))) > l_395) <= g_242))
                    {
                        struct S0 l_407 = {0x55L,255UL};
                        unsigned short l_422 = 0UL;
                        l_314 &= (safe_rshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((g_125.f1 , (safe_add_func_int8_t_s_s(((l_406 = (-8L)) <= 0x5EF9L), (l_407 , ((9UL > l_344) >= g_240))))), l_319)), 13));
                        l_314 = ((-5L) < (safe_div_func_uint64_t_u_u((l_399 = (0x78L || (safe_div_func_int64_t_s_s((g_412 , (g_114 || (safe_rshift_func_int8_t_s_s(((((l_377 , (l_416 = l_415)) , l_332) || l_398) == (safe_lshift_func_int16_t_s_u(p_74, 7))), g_159)))), g_210)))), l_349)));
                        g_423 = (g_185 != ((l_332 |= g_378) , (g_208 && (l_332 = func_82(l_406, ((l_422 = (safe_mul_func_uint8_t_u_u(0xB2L, l_421))) , 0xF079D208L), g_28)))));
                        return g_208;
                    }
                    else
                    {
                        l_424 = l_424;
                        l_425 = g_125;
                        g_426 ^= l_317;
                    }
                    for (l_399 = 0; (l_399 >= 14); l_399++)
                    {
                        l_359 &= (l_332 = (0x727FL < l_395));
                        l_359 ^= g_283;
                    }
                    g_426 = (safe_div_func_int32_t_s_s(p_74, l_359));
                    g_125 = l_431;
                }
                if (l_359)
                {
                    unsigned char l_432 = 248UL;
                    l_332 &= 0L;
                    if ((g_426 = ((l_432 && ((safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(((g_443 ^= (l_398 || (func_82(l_432, p_74, func_82((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((((func_75(g_302, (((safe_add_func_int8_t_s_s(g_423, (l_317 > (l_318 |= func_75(p_74, p_74))))) && l_432) == g_376)) <= l_431.f0) ^ 0x8E7ED444ADB2FC65LL) > g_423) , g_423), p_74)), 10)), g_412.f0, p_74)) >= g_28))) , g_208), l_444)), 3)) != l_445)) >= g_376)))
                    {
                        l_344 = g_145;
                    }
                    else
                    {
                        unsigned char l_446 = 2UL;
                        g_426 = func_82((g_289 < 1L), (+(l_318 = p_74)), ((g_240 |= (func_82((((l_446 ^ l_332) | g_125.f0) > (safe_lshift_func_uint8_t_u_s((1L > g_426), 5))), l_398, g_125.f0) , l_349)) ^ 2L));
                        l_332 ^= p_74;
                    }
                }
                else
                {
                    if (((safe_mul_func_int16_t_s_s(p_74, l_444)) , p_74))
                    {
                        g_426 = 2L;
                    }
                    else
                    {
                        l_332 = (safe_rshift_func_uint8_t_u_u(g_426, 4));
                        g_125 = g_125;
                    }
                    g_426 = (safe_mul_func_int16_t_s_s(p_74, p_74));
                }
                if ((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u(func_82(((g_238 != (safe_div_func_int16_t_s_s(((safe_unary_minus_func_uint64_t_u((safe_sub_func_int8_t_s_s((-1L), p_74)))) > (l_314 = g_159)), (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((l_332 = (p_74 , g_208)), 6)) | 0x5273B7C0L), 2)), (l_318 ^= (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_444, ((l_476 , g_122) == l_425.f0))), g_242))))), p_74))))) , p_74), p_74, p_74), (-1L))), 255UL)))
                {
                    unsigned short l_507 = 0x301FL;
                    int l_508 = 0x4C2F1996L;
                    int l_509 = (-2L);
                    for (g_423 = 0; (g_423 >= (-23)); g_423 = safe_sub_func_int64_t_s_s(g_423, 7))
                    {
                        struct S0 l_483 = {1UL,7UL};
                        l_399 = p_74;
                        l_314 |= g_412.f0;
                        g_426 = (l_332 = (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((l_483 , (((l_349 || (((((l_424 , (safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(p_74, ((0x69B4L | ((safe_rshift_func_int8_t_s_u(p_74, 6)) > ((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_314, (safe_sub_func_uint8_t_u_u(l_425.f0, (g_498 = p_74))))), g_13)) > p_74))) ^ 0x96L))), 0xB4L)), p_74))) || 18446744073709551615UL) | l_425.f1) , (-7L)) && l_377)) ^ 0x077F8ABC9B1A158ELL) , p_74)), l_483.f1)), g_208)));
                    }
                    l_431 = l_425;
                    l_509 = (safe_mul_func_int8_t_s_s((l_508 &= ((p_74 , (l_344 &= ((((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((p_74 , (safe_mul_func_int8_t_s_s(((l_398 < p_74) == (g_283 &= (4L & (l_399 = g_114)))), func_82(g_378, p_74, (func_82((l_359 = 0x4C3BL), g_157, l_507) ^ 0x0570L))))) , p_74) <= g_378), p_74)), p_74)) & 0L) | 2L) < g_239))) | p_74)), g_239));
                }
                else
                {
                    int l_529 = (-8L);
                    for (l_332 = 23; (l_332 >= 9); --l_332)
                    {
                        l_359 = ((safe_div_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((-1L), (p_74 ^ (safe_rshift_func_uint16_t_u_s((!(l_399 = (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((((((5UL & g_208) != p_74) == (func_82((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint16_t_u((safe_mod_func_uint16_t_u_u((p_74 > ((7L ^ (g_239 = l_399)) | (g_426 = (safe_sub_func_uint32_t_u_u(l_377, l_529))))), p_74)))), 0UL)), l_530, l_529) == g_118)) > 0x28D3CC1AAF0B8575LL) > (-1L)), 6)), p_74)))), g_159))))) < l_398), p_74)) >= 0x0B66L);
                        return g_283;
                    }
                }
            }
            l_318 &= func_82((l_344 = (l_425 , (safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s(p_74, p_74)) <= (safe_add_func_uint8_t_u_u(l_476.f0, (18446744073709551615UL ^ (safe_rshift_func_int8_t_s_u(l_424.f1, g_122)))))), (g_378 = ((+(safe_rshift_func_int16_t_s_u(l_424.f0, (l_332 = (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_549, g_378)), l_549)))))) <= 0UL)))) != g_412.f0), (-2L))), 10)))), l_549, l_415.f0);
            g_426 = ((l_424.f0 , (((safe_div_func_uint8_t_u_u((((safe_div_func_int16_t_s_s(l_318, func_75((0xECF8L == p_74), (((((safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((l_558 & p_74), l_559)) && (safe_unary_minus_func_uint64_t_u(((g_240 || ((safe_lshift_func_int8_t_s_s(0x7DL, g_125.f1)) , p_74)) , g_145)))), 8L)) || g_239) , p_74) , 0x2FL) > p_74)))) > p_74) < 8UL), l_398)) & g_28) > p_74)) < p_74);
            for (g_239 = (-18); (g_239 < 8); ++g_239)
            {
                unsigned long long l_577 = 0UL;
                unsigned l_578 = 0xE383A2FBL;
                unsigned long long l_603 = 2UL;
                if (l_421)
                {
                    l_579 = ((g_283 = (func_82(((safe_rshift_func_int16_t_s_u(func_82(p_74, (safe_sub_func_int32_t_s_s((g_185 >= ((!((l_344 ^ (safe_add_func_uint64_t_u_u(l_573, p_74))) & (6L & ((1UL < ((safe_div_func_uint64_t_u_u((g_240 = ((g_118 , func_82((l_318 = (g_576 = g_210)), p_74, p_74)) , l_445)), g_125.f1)) ^ l_558)) <= 0xA0EC8B2FA2C42176LL)))) < l_317)), p_74)), g_283), l_559)) >= p_74), l_577, g_118) < l_578)) , l_424);
                    l_344 |= (l_530 < p_74);
                }
                else
                {
                    unsigned l_588 = 9UL;
                    g_426 &= ((p_74 &= l_421) >= l_578);
                    l_344 = (g_426 = ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(0L, 0)), g_412.f0)) || ((safe_div_func_int16_t_s_s((+func_82((safe_sub_func_uint8_t_u_u(l_445, (l_588 = p_74))), l_425.f0, ((g_242 < (l_318 = func_82((g_589 = p_74), g_498, ((-1L) != 7L)))) & p_74))), p_74)) , g_289)));
                }
                l_332 = ((((safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((g_239 & (0x2CL < (p_74 >= (((g_376 == (0x78E649C3L || (+(((((g_576 >= (safe_add_func_uint64_t_u_u(0x55B4AB76CD814C39LL, func_82(((g_185 = (((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_425.f0, l_602)), l_577)) >= g_159) > l_558)) && g_423), g_13, l_603)))) | l_577) == (-1L)) != p_74) >= l_578)))) | p_74) || 0x8887014747704055LL)))), 255UL)), 12)) | g_443) & p_74) , l_558);
                if (l_444)
                    break;
            }
        }
        else
        {
            int l_608 = 9L;
            struct S0 l_624 = {253UL,0x3BL};
            char l_654 = 0x8AL;
            l_613 ^= (safe_div_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((l_608 = l_608), (func_82(g_125.f0, func_82(((((l_318 = (g_283 ^ l_317)) == l_431.f1) <= (g_283 != (safe_div_func_int64_t_s_s(func_82((l_611 , 0x2BFDL), g_122, l_344), p_74)))) > l_612), p_74, l_314), l_424.f1) & 0xA391L))) != l_444), g_157));
            l_314 &= l_559;
            for (l_398 = (-19); (l_398 >= (-14)); l_398++)
            {
                return p_74;
            }
            if (((safe_div_func_int8_t_s_s((((l_612 ^= (safe_lshift_func_uint16_t_u_u((g_242 , g_620), (p_74 & func_82(func_82(p_74, p_74, (func_82(((safe_mod_func_int64_t_s_s(p_74, 1L)) | func_82(l_431.f0, ((l_559 ^ l_530) > g_623), g_208)), g_426, g_122) <= g_28)), p_74, p_74))))) , 0x8AE3D80F0B4A76F1LL) | p_74), g_412.f0)) || l_612))
            {
                struct S0 l_627 = {0UL,1UL};
                int l_642 = 0x329D9A9AL;
                long long l_665 = 0L;
                unsigned char l_666 = 2UL;
                g_426 = l_559;
                l_624 = g_125;
                for (g_589 = 0; (g_589 >= (-13)); g_589 = safe_sub_func_int16_t_s_s(g_589, 8))
                {
                    int l_643 = 1L;
                    int l_644 = 0x69530237L;
                    int l_645 = (-4L);
                    if ((((l_627 , (((l_559 = 0UL) >= (0L < ((((l_318 ^= ((g_498 >= (safe_sub_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((0x03434939L < l_627.f0), (safe_unary_minus_func_uint32_t_u(((l_644 = (l_643 = (safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((l_642 ^= ((((l_641 | p_74) ^ func_82(g_289, g_239, p_74)) >= p_74) && p_74)), 0x62L)), 0x473B25ECL)))) != g_159))))), (-10L)))) , l_344)) > g_620) == g_576) != l_645))) == l_645)) && p_74) <= l_645))
                    {
                        g_426 = g_238;
                    }
                    else
                    {
                        l_665 = ((l_318 = (func_82(p_74, func_75(g_125.f0, (safe_sub_func_int64_t_s_s((((g_125 , (safe_mod_func_int8_t_s_s(l_624.f0, (g_185 | l_559)))) , ((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u(l_654, (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(g_159, (safe_mod_func_int16_t_s_s(func_82((safe_div_func_int32_t_s_s(((((l_613 |= g_378) && g_283) == l_608) ^ p_74), (-7L))), l_644, p_74), p_74)))), 0x4654C7872DB59CDBLL)) != l_608), 15)))) >= g_289), 4)) , 0x8E2605E9EEDD45EELL)) && 0UL), p_74))), g_28) & l_307)) | 65532UL);
                    }
                    return g_208;
                }
                l_666 = (-1L);
            }
            else
            {
                l_608 ^= p_74;
                g_426 = 0xDD6B542CL;
                l_624 = g_125;
            }
        }
    }
    else
    {
        long long l_668 = 0xB05663404A54EF26LL;
        int l_686 = (-2L);
        int l_687 = 0xC83BB634L;
        l_424 = g_125;
        l_668 |= (+((p_74 >= 0UL) | (g_443 = (safe_unary_minus_func_uint32_t_u(0x3A9B772FL)))));
        l_687 = ((safe_rshift_func_uint8_t_u_u((func_82((safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((~func_82(((l_424 = l_424) , (0xB0CC1C535FCEEF9BLL | 0x8AC4B50DFE706369LL)), ((((safe_mod_func_uint16_t_u_u((((((safe_add_func_uint64_t_u_u(p_74, p_74)) ^ (l_686 = (safe_sub_func_uint8_t_u_u(func_82(l_668, (4294967295UL == (safe_div_func_int32_t_s_s((l_559 = ((safe_div_func_int16_t_s_s(0xEC9BL, (l_685 = l_668))) == g_302)), g_114))), l_307), g_114)))) == 0L) , 0xF8L) | p_74), p_74)) < p_74) == p_74) > p_74), g_620)), 12)) <= p_74), g_283)), l_668, l_668) < p_74), l_668)) && 0L);
    }
    g_426 = (func_75(((safe_mul_func_int32_t_s_s((g_423 , func_82(((g_576 != g_376) || (func_75(func_82((((safe_sub_func_uint32_t_u_u(4294967295UL, ((safe_lshift_func_uint8_t_u_u((g_576 &= ((p_74 | 65535UL) >= func_75(l_344, g_443))), p_74)) , 0x054648DFL))) != p_74) & g_426), l_314, p_74), p_74) | p_74)), p_74, g_378)), 0UL)) || g_239), p_74) , l_421);
    for (g_623 = (-22); (g_623 >= 7); g_623++)
    {
        unsigned char l_696 = 0UL;
        l_696 = l_415.f0;
    }
    g_125 = g_125;
    return p_74;
}







static long long func_75(unsigned p_76, char p_77)
{
    char l_92 = (-1L);
    int l_99 = 0x7416AF0CL;
    int l_100 = (-5L);
    unsigned long long l_101 = 0xF62D42CB0EA5CD88LL;
    struct S0 l_124 = {0UL,0xDAL};
    unsigned short l_133 = 0UL;
    union U1 l_255 = {18446744073709551615UL};
    short l_263 = 0xFF47L;
    int l_264 = 0xE7EADB0FL;
    unsigned l_282 = 0x3F7C1476L;
    if ((((l_92 , 18446744073709551615UL) , (l_100 |= ((((func_82(g_28, ((0x285618A3L & l_92) | (safe_add_func_int16_t_s_s((func_82(l_92, p_76, ((safe_lshift_func_uint16_t_u_s(0x98B5L, ((((l_99 = (l_92 & g_13)) != 0UL) & 4UL) <= 3L))) , l_92)) , g_13), 0x84FFL))), l_92) , l_99) & l_92) | g_13) ^ (-1L)))) && 4L))
    {
        return g_28;
    }
    else
    {
        unsigned char l_110 = 0xFFL;
        int l_146 = 1L;
        struct S0 l_187 = {1UL,8UL};
        long long l_232 = 0x2F05403430B8F8A4LL;
        if ((l_101 ^ g_28))
        {
            unsigned l_121 = 4294967295UL;
            struct S0 l_123 = {0xD3L,252UL};
            if ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(func_82((~p_77), p_77, (p_76 <= g_28)), 0x774B632CL)) , g_28), (g_13 <= ((((l_110 , 0x5305585C01429742LL) && l_110) & 0xDB4AF4489F7832F5LL) | g_13)))), l_92)), p_76)))
            {
                int l_113 = 0xAB2A6A61L;
                int l_115 = (-1L);
                l_115 &= (g_114 &= ((safe_sub_func_uint16_t_u_u(g_13, 0x96F1L)) & l_113));
                for (l_99 = 0; (l_99 == (-27)); l_99 = safe_sub_func_int16_t_s_s(l_99, 4))
                {
                    g_118 |= (-5L);
                }
                g_122 &= func_82((safe_mul_func_int8_t_s_s(func_82(g_13, g_114, p_77), 0xB9L)), l_121, g_13);
            }
            else
            {
                l_123 = l_123;
            }
            g_125 = l_124;
        }
        else
        {
            unsigned l_142 = 0UL;
            unsigned long long l_143 = 0x3079E446C7292A33LL;
            int l_158 = (-8L);
            int l_209 = 0x4697688CL;
            unsigned char l_248 = 0x97L;
            for (l_110 = 25; (l_110 > 44); l_110 = safe_add_func_int32_t_s_s(l_110, 4))
            {
                long long l_130 = 0x660488F66F91BAA8LL;
                int l_144 = (-1L);
                unsigned l_184 = 1UL;
                int l_186 = 1L;
                if ((safe_lshift_func_uint8_t_u_u(l_130, (+(safe_add_func_uint8_t_u_u(((g_145 = (l_110 && ((((p_76 , func_82((l_133 &= p_76), g_13, (safe_sub_func_int16_t_s_s(func_82((l_144 = (safe_lshift_func_uint16_t_u_s((((!func_82(func_82((safe_sub_func_int64_t_s_s(((g_114 == ((((safe_lshift_func_uint16_t_u_s(((0xC4289D3AL > (0xF875DF3AL <= ((0xE84CL == p_77) > p_76))) , 0UL), 7)) == 0x22L) || (-1L)) , l_142)) > 0xEE52103225053E2DLL), 0xAD174F1309CA0AE6LL)), g_122, l_143), l_110, l_124.f0)) == 0L) < l_124.f1), 11))), g_28, l_143), 0xA926L)))) == l_110) , g_13) , 1L))) ^ p_76), 0x22L))))))
                {
                    int l_183 = 7L;
                    struct S0 l_188 = {0xADL,251UL};
                    l_146 = l_142;
                    if (l_133)
                    {
                        int l_168 = 0L;
                        g_159 = ((g_114 != ((l_158 = func_82(g_122, p_77, (((safe_mul_func_uint8_t_u_u((g_125.f1 = ((0x73L || g_118) == g_125.f0)), (l_146 > (safe_lshift_func_uint8_t_u_s((g_157 = (safe_add_func_int64_t_s_s((((safe_sub_func_int16_t_s_s(func_82(l_130, (safe_rshift_func_uint8_t_u_u(func_82(p_77, g_125.f0, g_114), g_114)), l_142), p_76)) , g_118) && l_100), 0x98699BF897C6CADFLL))), g_125.f0))))) | g_122) , 65535UL))) | g_145)) | (-5L));
                        l_186 = (g_185 = (~(safe_mul_func_int8_t_s_s((p_77 ^= g_125.f1), (safe_div_func_int8_t_s_s((((l_168 = (safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_168, (safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((l_144 = (((safe_lshift_func_int16_t_s_s(l_124.f1, 4)) ^ g_125.f0) >= (safe_mod_func_uint64_t_u_u(func_82(p_76, p_76, ((l_184 ^= (((g_125 , (6UL >= ((safe_add_func_uint16_t_u_u(func_82(l_144, l_146, l_183), p_76)) == p_76))) || 0xE9EFL) || 5UL)) & l_133)), 0xC2C37AD79404BF6FLL)))) , (-2L)), g_125.f0)) || 0x183DL), 3)) < g_118), 0x2ABAL)))), p_76))) == p_76) & g_118), l_142))))));
                        if (p_77)
                            continue;
                        l_188 = l_187;
                    }
                    else
                    {
                        int l_191 = (-8L);
                        struct S0 l_215 = {0xC4L,0x77L};
                        l_146 = (l_99 = ((safe_mod_func_int32_t_s_s(((g_159 ^= l_191) >= g_122), (safe_rshift_func_uint8_t_u_s((l_142 == (((l_100 = (g_13 <= (func_82((l_110 | (safe_add_func_uint8_t_u_u((l_187.f0 > (0x2528L >= func_82(l_186, l_143, g_145))), g_114))), g_145, g_28) , p_76))) == p_76) , g_118)), g_122)))) <= 0xC9L));
                        l_209 |= (p_76 != ((l_158 ^= (l_100 <= g_122)) , (g_208 |= (((g_114 , p_77) < ((safe_add_func_int64_t_s_s(func_82(l_143, p_77, (safe_mod_func_int64_t_s_s(l_142, (g_159 &= (safe_sub_func_int64_t_s_s((((l_191 = ((safe_add_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((l_133 ^ 3UL), p_77)) >= g_118), p_76)) & 0xFA7F8D44L)) ^ 1L) & p_77), p_77)))))), p_77)) > 0L)) ^ g_125.f1))));
                        l_146 |= ((p_76 , ((p_76 = (((g_210 = p_76) ^ (p_76 , (safe_rshift_func_uint16_t_u_u((((((safe_rshift_func_uint16_t_u_s((l_215 , (safe_mod_func_uint64_t_u_u(g_125.f0, ((g_159 , p_76) && 0x5776L)))), 2)) >= g_125.f1) ^ p_76) && p_77) & 0x2AL), g_145)))) <= p_76)) <= p_77)) & p_77);
                    }
                    l_99 ^= (l_188.f0 , ((p_77 != ((l_209 = 0xEEL) <= 0L)) > (safe_mul_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(((func_82((safe_div_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(((l_143 || 0xFEDBL) & ((((safe_mul_func_int8_t_s_s(0x47L, ((safe_mul_func_uint8_t_u_u((func_82(p_76, func_82((g_125.f1 && p_77), p_76, g_118), g_157) == 2L), g_125.f0)) <= l_142))) ^ 4294967289UL) > g_208) , g_159)), g_125.f1)) , 0x75960B8AL), l_184)), l_100, p_76) < p_77) && l_186), l_232)) | l_143) , l_110), 0UL))));
                }
                else
                {
                    int l_241 = (-1L);
                    struct S0 l_250 = {0UL,0x8FL};
                    g_125 = g_125;
                    if (((18446744073709551610UL != p_77) , g_122))
                    {
                        int l_233 = (-1L);
                        union U1 l_243 = {0x0977ED16L};
                        unsigned l_249 = 0x039A9A80L;
                        g_242 = (g_208 || (((g_240 = (g_239 = ((0L > ((l_186 = p_77) == (l_144 = ((((func_82(p_76, ((l_209 = l_233) & (((g_125.f1 = 254UL) > (safe_add_func_int32_t_s_s((g_13 > (safe_lshift_func_int16_t_s_s(((g_238 = (g_122 >= func_82(l_110, p_76, p_77))) , g_13), p_77))), p_77))) | p_77)), l_184) || 0xEE06947AL) , 0L) & 0xB8L) ^ 0UL)))) & 0L))) == l_241) , (-4L)));
                        l_158 = (((l_241 = (l_243 , (p_76 < (((((0xCC3050E478B00568LL && (safe_lshift_func_uint16_t_u_s(((func_82(p_77, (g_208 &= func_82(l_144, (safe_div_func_uint32_t_u_u(4294967295UL, ((250UL < ((l_241 ^ (l_186 = (p_76 ^ l_158))) , 2L)) & 0x435052A225A8C6FELL))), g_114)), p_77) & (-4L)) ^ p_76), 7))) != l_248) > g_242) == l_248) | l_249)))) && 65526UL) , l_209);
                        if (g_118)
                            continue;
                        l_100 ^= l_187.f0;
                    }
                    else
                    {
                        unsigned l_262 = 4294967295UL;
                        union U1 l_271 = {1UL};
                        g_125 = g_125;
                        g_125 = l_250;
                        l_264 ^= ((g_239 = ((g_239 | (p_76 = ((func_82((((safe_add_func_int32_t_s_s(0L, (safe_mod_func_int32_t_s_s((l_255 , (safe_mul_func_int16_t_s_s(8L, (l_100 = (safe_mod_func_int8_t_s_s(g_125.f1, p_76)))))), (l_99 = (-2L)))))) & (safe_add_func_uint8_t_u_u(g_210, ((p_76 || g_239) | l_124.f1)))) != l_262), g_239, l_263) , l_262) < 0x0CL))) , g_210)) != 65535UL);
                        l_209 = (safe_add_func_int16_t_s_s(0x24B6L, func_82(g_240, (func_82((safe_sub_func_int32_t_s_s(((g_157 = g_114) <= (safe_add_func_int64_t_s_s(((l_271 , g_114) | (safe_div_func_int8_t_s_s(((l_142 , (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((0x2236L >= (p_76 < (func_82((safe_sub_func_int8_t_s_s(func_82(g_185, g_185, l_241), g_118)), p_76, l_282) || g_239))) ^ p_77), p_77)) >= g_114), g_283)), 1))) | p_77), p_76))), g_125.f1))), 2L)), l_158, g_118) < g_125.f0), g_210)));
                    }
                    for (g_114 = 13; (g_114 >= 35); g_114 = safe_add_func_int16_t_s_s(g_114, 3))
                    {
                        struct S0 l_286 = {255UL,0x9BL};
                        l_209 = g_114;
                        l_250 = l_286;
                        l_209 = (0x20L & 0xB9L);
                    }
                }
            }
            g_289 = (l_263 == (safe_div_func_uint8_t_u_u(l_143, 2UL)));
        }
    }
    for (g_283 = 0; (g_283 == (-16)); g_283 = safe_sub_func_uint64_t_u_u(g_283, 1))
    {
        int l_296 = 2L;
        int l_301 = (-1L);
        l_100 = ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(p_77, g_185)), g_122)) < func_82(p_77, l_296, (p_77 | (((g_114 & ((l_301 = (((safe_add_func_uint8_t_u_u((g_125.f0 != (func_82((((func_82(p_77, l_92, l_296) < p_76) > l_296) & 0x2502EBB47E7AD450LL), g_13, p_77) < 0x37L)), 255UL)) != g_125.f0) || g_242)) | l_264)) , 18446744073709551615UL) > (-1L)))));
        return g_302;
    }
    return p_76;
}







static unsigned char func_82(unsigned short p_83, unsigned p_84, unsigned short p_85)
{
    unsigned short l_86 = 0x10F0L;
    int l_89 = 0x2361AE7DL;
    struct S0 l_90 = {1UL,6UL};
    l_86 &= p_83;
    l_89 = (safe_rshift_func_uint16_t_u_u(l_86, 7));
    l_90 = l_90;
    return p_85;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_125.f0, "g_125.f0", print_hash_value);
    transparent_crc(g_125.f1, "g_125.f1", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_412.f0, "g_412.f0", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_589, "g_589", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_698, "g_698", print_hash_value);
    transparent_crc(g_752, "g_752", print_hash_value);
    transparent_crc(g_779, "g_779", print_hash_value);
    transparent_crc(g_784.f0, "g_784.f0", print_hash_value);
    transparent_crc(g_784.f1, "g_784.f1", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_910, "g_910", print_hash_value);
    transparent_crc(g_929, "g_929", print_hash_value);
    transparent_crc(g_946, "g_946", print_hash_value);
    transparent_crc(g_1012, "g_1012", print_hash_value);
    transparent_crc(g_1070, "g_1070", print_hash_value);
    transparent_crc(g_1079, "g_1079", print_hash_value);
    transparent_crc(g_1125, "g_1125", print_hash_value);
    transparent_crc(g_1179, "g_1179", print_hash_value);
    transparent_crc(g_1213, "g_1213", print_hash_value);
    transparent_crc(g_1235, "g_1235", print_hash_value);
    transparent_crc(g_1322, "g_1322", print_hash_value);
    transparent_crc(g_1456, "g_1456", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
