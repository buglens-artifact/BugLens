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
   int f0;
   unsigned char f1;
   int f2;
   unsigned f3;
   unsigned short f4;
   unsigned f5;
};


static int g_22 = 0x67356A0BL;
static struct S0 g_58 = {0x814C7C74L,0xCAL,0xDF115CD6L,0UL,0x75BAL,18446744073709551613UL};
static unsigned g_88 = 0x328501D8L;
static unsigned g_121 = 0x39548CC8L;
static short g_129 = (-1L);
static int g_141 = 0xF8FB61F0L;
static struct S0 g_346 = {9L,0x37L,-9L,0x4582E660L,0xE10CL,0x1E50D675L};



static unsigned char func_1(void);
static struct S0 func_2(unsigned p_3, unsigned char p_4, unsigned char p_5);
static int func_6(char p_7, struct S0 p_8, unsigned short p_9);
static int func_12(unsigned char p_13, int p_14, unsigned char p_15);
static unsigned char func_16(unsigned char p_17, char p_18, unsigned p_19, short p_20, struct S0 p_21);
static short func_23(struct S0 p_24);
static struct S0 func_25(unsigned char p_26, unsigned short p_27, short p_28, int p_29, unsigned char p_30);
static unsigned short func_33(unsigned p_34, short p_35);
static int func_42(int p_43, struct S0 p_44, short p_45, int p_46, unsigned p_47);
static int func_48(unsigned p_49, unsigned char p_50, unsigned p_51, int p_52);
static unsigned char func_1(void)
{
    int l_295 = 0x3DCA61D5L;
    struct S0 l_427 = {1L,0x23L,3L,0x50F79D9AL,0x5541L,0x7F8BD2DBL};
    char l_434 = (-1L);
    unsigned char l_458 = 252UL;
    struct S0 l_472 = {-10L,0x10L,0xDFCD7036L,0UL,6UL,1UL};
    l_472 = func_2(((func_6((safe_add_func_int16_t_s_s((func_12(func_16((((g_22 >= 1UL) & (g_22 != func_23(func_25(((safe_add_func_int8_t_s_s(g_22, (func_33(g_22, ((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(9L, 2)), 0UL)) >= (g_22 < g_22))) >= 8UL))) > g_22), l_295, l_295, g_22, g_22)))) != l_295), g_121, l_295, g_121, l_427), l_434, g_22) && l_458), 65535UL)), l_427, g_22) >= 0xD2A131F2L) && l_427.f4), g_22, l_427.f0);
    l_295 = (l_427.f3 && (safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(l_427.f3, 1)), g_22)), 0)));
    return g_129;
}







static struct S0 func_2(unsigned p_3, unsigned char p_4, unsigned char p_5)
{
    struct S0 l_464 = {0L,9UL,0x2C2133D7L,3UL,65535UL,18446744073709551606UL};
    int l_471 = 8L;
    if (p_3)
    {
        struct S0 l_463 = {0xDABB3B7EL,255UL,9L,0x51756299L,0UL,0x8F54F906L};
        l_464 = l_463;
    }
    else
    {
        return g_58;
    }
    g_346 = func_25(g_58.f1, l_464.f2, (((0x8BL | ((safe_add_func_uint16_t_u_u(l_464.f5, (!((p_5 >= p_3) >= 0xB61EL)))) > (l_464.f4 || ((safe_mod_func_int32_t_s_s((((l_464.f1 || g_58.f4) || g_346.f4) == p_5), 4L)) > l_464.f1)))) || p_5) >= l_464.f5), l_464.f2, p_3);
    g_22 = (safe_add_func_int8_t_s_s((g_346.f0 & (!9UL)), (func_6(g_346.f4, l_464, p_3) || g_346.f3)));
    l_471 = p_4;
    return l_464;
}







static int func_6(char p_7, struct S0 p_8, unsigned short p_9)
{
    int l_459 = 0x96C296BDL;
    int l_462 = 7L;
    g_58 = g_58;
    l_462 = (g_346.f1 || ((g_58.f3 & (!l_459)) && (safe_add_func_uint16_t_u_u(l_459, l_459))));
    return p_8.f3;
}







static int func_12(unsigned char p_13, int p_14, unsigned char p_15)
{
    struct S0 l_435 = {-1L,0xA8L,-1L,0xA8B88654L,2UL,0xB8508426L};
    g_58 = l_435;
    for (g_121 = 0; (g_121 >= 24); g_121 = safe_add_func_uint16_t_u_u(g_121, 3))
    {
        short l_454 = 0x8AEFL;
        short l_455 = 1L;
        struct S0 l_456 = {0xE259A7E1L,1UL,1L,18446744073709551610UL,0xA5AAL,0UL};
        struct S0 l_457 = {-1L,1UL,0x01DE70A9L,0xC67A398EL,65535UL,18446744073709551613UL};
        l_456 = func_25((0x7ECBDB17L & g_346.f3), (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(l_435.f2, (safe_rshift_func_uint16_t_u_s((255UL || (p_15 & (safe_rshift_func_uint16_t_u_s(func_48(g_346.f1, (((safe_add_func_uint16_t_u_u(g_88, ((((safe_unary_minus_func_uint8_t_u(((safe_mod_func_int32_t_s_s((l_435.f3 ^ (func_48(func_48((+(((safe_unary_minus_func_uint16_t_u((g_346.f4 > l_435.f3))) || 0x36L) || 0x6569L)), g_58.f0, p_15, g_58.f3), p_15, l_454, g_346.f0) ^ g_346.f4)), 0xD60B49C0L)) && 0x44L))) == p_15) <= p_14) && p_14))) || l_454) || l_454), l_455, g_346.f1), g_346.f4)))), p_15)))) >= p_14), g_346.f5)), p_13)), g_346.f4, p_13, l_454);
        l_457 = g_346;
    }
    return g_58.f4;
}







static unsigned char func_16(unsigned char p_17, char p_18, unsigned p_19, short p_20, struct S0 p_21)
{
    unsigned l_432 = 0x4DD26A85L;
    int l_433 = 0x78EE4C59L;
    g_346 = g_346;
    l_433 = ((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((l_432 || func_48(l_432, ((l_432 <= (1UL || (+((p_21.f3 || p_21.f5) < g_346.f4)))) || (func_23(g_58) && l_432)), p_21.f4, g_22)) || g_58.f0), l_432)), g_22)) ^ 0xF342L);
    return p_21.f5;
}







static short func_23(struct S0 p_24)
{
    int l_347 = 0L;
    int l_381 = 0xF82ADB5AL;
    int l_421 = 0x496B410AL;
    int l_422 = 0x796FD9B3L;
    struct S0 l_426 = {0L,0UL,-2L,18446744073709551615UL,0UL,18446744073709551615UL};
    for (p_24.f4 = (-6); (p_24.f4 == 23); p_24.f4 = safe_add_func_uint16_t_u_u(p_24.f4, 9))
    {
        unsigned char l_349 = 0UL;
        unsigned short l_408 = 0x25F9L;
        for (g_58.f2 = 0; (g_58.f2 <= (-7)); --g_58.f2)
        {
            int l_348 = 0x1DE73CCAL;
            int l_350 = (-6L);
            unsigned l_364 = 1UL;
            g_346 = p_24;
            l_350 = (l_347 < (p_24.f4 & (p_24.f0 != (l_348 || (p_24.f1 ^ ((g_346.f4 <= l_349) || p_24.f2))))));
            g_141 = g_58.f3;
            if ((((safe_unary_minus_func_int32_t_s(g_346.f2)) <= (g_58.f1 && (safe_rshift_func_int16_t_s_u((((((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((-3L), 7)), (0x4CL <= g_22))) <= p_24.f5) <= (safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((1UL | (g_346.f3 > (safe_sub_func_int32_t_s_s(p_24.f3, g_346.f2)))), p_24.f5)), 0xC8E468B3L))) <= l_364) && 7UL), 8)))) > p_24.f1))
            {
                int l_377 = 0x967C15F9L;
                short l_394 = 0xFF34L;
                if ((safe_add_func_int32_t_s_s(0x5BB6E597L, (safe_add_func_int8_t_s_s(g_346.f1, (((safe_sub_func_uint16_t_u_u((g_346.f3 > (((safe_lshift_func_uint8_t_u_s(l_349, 7)) >= ((((p_24.f4 || g_346.f1) >= (p_24.f5 < ((safe_lshift_func_int8_t_s_u((g_58.f2 <= (safe_lshift_func_int8_t_s_u(0x9FL, g_346.f0))), 0)) != (-1L)))) <= 0x73FCL) & p_24.f5)) < l_377)), p_24.f2)) ^ g_346.f4) == l_377))))))
                {
                    struct S0 l_380 = {-1L,6UL,0xF06F709FL,0x6CDB4F64L,0x49D9L,0xBB1D1395L};
                    for (g_346.f3 = 0; (g_346.f3 != 17); g_346.f3 = safe_add_func_uint8_t_u_u(g_346.f3, 9))
                    {
                        l_380 = g_346;
                        l_380 = g_58;
                        if (p_24.f1)
                            continue;
                    }
                    l_381 = p_24.f4;
                    g_141 = (l_380.f4 > (g_346.f0 & 0L));
                    l_381 = ((1UL > (safe_lshift_func_uint16_t_u_u(p_24.f0, ((safe_add_func_int32_t_s_s(g_58.f0, p_24.f0)) ^ (safe_add_func_int16_t_s_s((((((-7L) ^ l_380.f3) == 0x3864756BL) ^ (((safe_rshift_func_uint8_t_u_u(((((-4L) ^ (safe_sub_func_uint8_t_u_u((g_346.f2 ^ l_349), l_377))) != l_348) >= l_394), g_346.f4)) | l_380.f1) != 0xFBC9BA66L)) >= p_24.f5), g_58.f3)))))) >= (-3L));
                }
                else
                {
                    int l_401 = 0xB8569F4BL;
                    for (p_24.f5 = 0; (p_24.f5 <= 46); p_24.f5++)
                    {
                        return l_381;
                    }
                    if (l_377)
                    {
                        l_350 = (((safe_sub_func_int32_t_s_s((-1L), p_24.f4)) <= p_24.f3) <= (((safe_mod_func_uint8_t_u_u(0x29L, 0xB2L)) < (p_24.f0 > 0x6D1124C2L)) && l_401));
                        l_381 = (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((((safe_add_func_int32_t_s_s((((l_408 != g_58.f5) == l_364) && l_381), ((safe_mod_func_int32_t_s_s((((0xD8L == (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(3L, (safe_mod_func_int16_t_s_s(((0xA5L >= 6UL) < (l_401 < 0xF60AL)), l_401)))), g_58.f5)), l_401)), p_24.f4))) || l_401) == g_346.f5), g_346.f3)) && (-1L)))) == p_24.f0) != p_24.f3) || g_121), 4)), l_349));
                        if (p_24.f2)
                            continue;
                        return l_421;
                    }
                    else
                    {
                        return l_401;
                    }
                }
            }
            else
            {
                if (l_364)
                    break;
            }
        }
        if (l_381)
        {
            if (l_349)
                break;
        }
        else
        {
            short l_423 = 0xE54EL;
            l_381 = g_58.f0;
            l_422 = l_408;
            if ((0x7DEE2A0FL > ((-1L) > l_349)))
            {
                l_426 = func_25(l_423, (safe_sub_func_int32_t_s_s((func_48(g_129, (l_421 | (0xA570L < ((func_48(g_346.f5, func_48(g_346.f0, l_423, l_408, p_24.f2), l_408, p_24.f4) < g_346.f4) <= 1L))), g_346.f1, l_423) == g_88), g_346.f0)), p_24.f2, p_24.f5, g_141);
            }
            else
            {
                if (g_58.f3)
                    break;
            }
        }
    }
    return l_426.f0;
}







static struct S0 func_25(unsigned char p_26, unsigned short p_27, short p_28, int p_29, unsigned char p_30)
{
    char l_296 = 0x7CL;
    unsigned l_318 = 0xA347272BL;
    struct S0 l_319 = {9L,0x4CL,0x2AB02E75L,1UL,0x8292L,18446744073709551606UL};
    int l_340 = 0L;
    if ((l_296 && ((safe_lshift_func_int16_t_s_s(p_27, 12)) >= (safe_lshift_func_uint8_t_u_s((func_33(l_296, g_58.f1) > l_296), 0)))))
    {
        unsigned l_317 = 0xA15C8C22L;
        unsigned short l_333 = 65533UL;
        struct S0 l_336 = {1L,0x88L,0x95F45498L,0x8811F8AFL,65535UL,0x9B31CC3BL};
        g_141 = (g_141 | (((func_48((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((((g_58.f3 || ((safe_lshift_func_uint8_t_u_s(func_48((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(g_58.f1, 4)), g_58.f4)), p_30)), (((safe_rshift_func_int16_t_s_u(((~(safe_add_func_uint8_t_u_u(((((0xCFBD6B6CL <= l_296) <= g_141) && p_27) != l_296), l_317))) && 0x5154B601L), 8)) & l_296) < p_29), g_58.f5, p_26), 0)) == l_296)) & 0x46E2101DL) <= 1L) < l_317), 5)), g_141)), l_317, g_129, l_318) && p_28) < l_318) & p_27));
        g_58 = l_319;
        for (g_58.f1 = (-3); (g_58.f1 <= 21); g_58.f1++)
        {
            int l_324 = 0x31C8A64BL;
            g_141 = (((g_58.f4 | (safe_mod_func_int16_t_s_s(((l_324 || g_58.f0) > 0x1D80L), (safe_lshift_func_uint8_t_u_u((l_319.f2 && (g_58.f2 != 1L)), 3))))) != ((l_317 < g_58.f0) | 0xEA799C36L)) <= 0x70BC3FBBL);
            p_29 = l_319.f0;
        }
        if ((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(p_29, 3)) >= ((safe_mod_func_int8_t_s_s(l_333, p_27)) == g_88)), 3)))
        {
            return g_58;
        }
        else
        {
            for (l_318 = 23; (l_318 >= 54); l_318++)
            {
                l_336 = g_58;
            }
        }
    }
    else
    {
        short l_339 = 6L;
        struct S0 l_341 = {0xA813C421L,255UL,3L,0xB802BD75L,0xC8E4L,1UL};
        p_29 = g_88;
        g_141 = (l_319.f0 || g_129);
        l_340 = (safe_sub_func_uint32_t_u_u((p_27 == (l_339 || p_26)), 0x8B84C3EBL));
        l_341 = l_341;
    }
    g_141 = (l_340 > 0x7D85741AL);
    g_141 = l_318;
    return g_58;
}







static unsigned short func_33(unsigned p_34, short p_35)
{
    unsigned l_54 = 0x3FCA5EB5L;
    int l_89 = 0x06124FAEL;
    int l_104 = 5L;
    unsigned l_128 = 1UL;
    struct S0 l_139 = {0L,1UL,0xD7CC8F44L,0xCBE4C425L,65535UL,0xEE4DE7F7L};
    char l_159 = (-1L);
    unsigned char l_165 = 0x7FL;
    int l_166 = 3L;
    unsigned l_178 = 18446744073709551612UL;
    char l_199 = 0L;
    unsigned l_248 = 0UL;
    unsigned l_294 = 0xAB812571L;
    for (p_34 = 25; (p_34 != 21); p_34 = safe_sub_func_uint16_t_u_u(p_34, 7))
    {
        int l_53 = (-7L);
        struct S0 l_60 = {0L,0x9CL,7L,1UL,0xA133L,18446744073709551615UL};
        struct S0 l_145 = {0x2DD9B8E7L,0xCFL,1L,18446744073709551615UL,65535UL,18446744073709551606UL};
        l_89 = func_42(func_48((p_35 != g_22), l_53, p_34, (((l_54 == 0x0A7BL) < g_22) != g_22)), l_60, g_22, g_22, l_53);
        if ((~(safe_add_func_int32_t_s_s((((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(p_34, ((safe_sub_func_int16_t_s_s(((((~0x6EL) & p_35) >= (((0xD1A4L > 0x2DE0L) > ((safe_rshift_func_int8_t_s_u((g_58.f3 < (safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((p_34 != l_104) || ((g_58.f0 ^ l_60.f4) <= p_34)), g_58.f1)) & l_89), l_60.f5))), l_60.f4)) != p_34)) < p_34)) | g_88), p_34)) != 0x9EA234E6L))), l_89)) ^ l_60.f4) < l_54), g_58.f2))))
        {
            unsigned short l_115 = 0xAB9AL;
            int l_148 = 0x73B10F1CL;
            for (g_58.f1 = (-27); (g_58.f1 > 25); ++g_58.f1)
            {
                short l_116 = 3L;
                unsigned l_122 = 0x82478149L;
                struct S0 l_140 = {0L,4UL,0x2F95BF61L,0x6C60711DL,65533UL,0x002FB210L};
                for (g_58.f5 = (-27); (g_58.f5 >= 11); g_58.f5 = safe_add_func_uint32_t_u_u(g_58.f5, 8))
                {
                    if ((safe_rshift_func_int8_t_s_s((((((safe_sub_func_int16_t_s_s(p_35, 0x2621L)) >= g_58.f3) & ((p_35 <= (((0x959BL | l_115) | (l_116 >= (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(g_58.f0, 11)), g_121)))) != p_34)) < g_58.f1)) >= g_58.f2) | p_34), l_122)))
                    {
                        int l_127 = 0xF5D4AB6FL;
                        g_129 = ((((0UL ^ (((safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((p_34 && g_121), (~g_58.f3))), (l_60.f4 | (l_60.f0 >= (g_58.f1 > (g_58.f4 != 0x89ECL)))))) != l_127) || g_58.f3)) >= l_128) >= g_88) <= g_58.f4);
                    }
                    else
                    {
                        return g_22;
                    }
                    if ((0x45L < (!(((g_58.f2 >= (((safe_sub_func_uint32_t_u_u(((((0x7964C2DCL >= g_129) != 255UL) == (safe_sub_func_uint32_t_u_u(((((g_58.f0 ^ (((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u((safe_add_func_int32_t_s_s((p_34 | l_53), (l_60.f3 & g_121))))), p_35)) ^ l_53) > p_34)) ^ p_34) != 0xB008363AL) > g_88), l_104))) || g_58.f5), l_60.f2)) < 4UL) & 0xE4F8FBF4L)) ^ l_60.f4) != g_58.f0))))
                    {
                        l_139 = g_58;
                        l_140 = l_60;
                    }
                    else
                    {
                        if (g_141)
                            break;
                        g_141 = (-4L);
                        if (g_22)
                            break;
                    }
                }
                for (l_60.f1 = 0; (l_60.f1 < 52); l_60.f1 = safe_add_func_int8_t_s_s(l_60.f1, 1))
                {
                    struct S0 l_144 = {0xB03C3254L,0x49L,9L,1UL,1UL,0x46911956L};
                    int l_150 = 0x6DA785FEL;
                    l_144 = g_58;
                    l_145 = l_140;
                    l_139 = l_140;
                    for (l_104 = 0; (l_104 <= (-11)); l_104--)
                    {
                        unsigned char l_149 = 0xD6L;
                        if (g_121)
                            break;
                        l_148 = ((-1L) > ((l_144.f2 || p_34) & g_58.f5));
                        l_149 = 6L;
                        l_150 = (-6L);
                    }
                }
                return g_58.f3;
            }
        }
        else
        {
            unsigned l_156 = 0UL;
            int l_160 = 0x3C7DD24AL;
            l_160 = (func_48((0x83FBL & ((safe_unary_minus_func_uint8_t_u((safe_add_func_uint8_t_u_u((l_139.f3 >= g_58.f5), (((g_58.f4 != (p_34 | (safe_mod_func_uint16_t_u_u(0xD4C1L, l_156)))) != g_58.f3) > ((safe_sub_func_uint16_t_u_u(l_104, g_88)) != l_145.f5)))))) <= l_60.f5)), l_159, p_34, l_156) == p_35);
            if (l_89)
                break;
            g_58 = g_58;
        }
        g_141 = (safe_mod_func_uint8_t_u_u((func_48((safe_add_func_uint8_t_u_u(g_58.f4, ((l_165 == ((l_60.f2 == (0L == p_35)) == (g_58.f3 != p_34))) >= g_58.f3))), l_139.f4, g_58.f0, g_121) ^ g_22), l_139.f5));
        if (g_141)
            break;
    }
    g_141 = func_48(func_48(g_121, (func_42(p_34, g_58, l_166, p_35, g_141) >= (safe_rshift_func_uint16_t_u_s(p_34, ((safe_add_func_int16_t_s_s(l_139.f3, l_139.f2)) >= 4294967289UL)))), g_141, p_35), l_165, l_139.f3, g_129);
    if (((safe_unary_minus_func_uint16_t_u((g_129 <= (((-1L) ^ ((g_88 <= l_139.f4) & (safe_rshift_func_uint16_t_u_u(func_48(p_35, func_48(l_139.f1, l_159, (safe_rshift_func_uint16_t_u_s(((l_89 && (0x87847B8FL || p_34)) != 0UL), p_34)), g_58.f4), g_88, p_34), p_35)))) || 0xE32B8073L)))) <= l_165))
    {
        unsigned short l_179 = 0xC1D0L;
        int l_180 = 2L;
        g_141 = (((safe_lshift_func_int8_t_s_u(func_48((!p_35), g_58.f1, p_35, (g_121 && g_22)), ((-6L) > l_178))) || (0xEF01F62BL & 0x91ADAEABL)) != l_179);
        g_141 = l_178;
        l_180 = g_58.f5;
    }
    else
    {
        int l_182 = 1L;
        struct S0 l_196 = {-9L,0xBDL,3L,18446744073709551615UL,0x8FA4L,18446744073709551612UL};
        unsigned char l_207 = 0x48L;
        int l_245 = 0x488A8A09L;
        if (l_139.f0)
        {
            return p_34;
        }
        else
        {
            unsigned char l_181 = 1UL;
            struct S0 l_198 = {0x7C7CCD35L,2UL,2L,0x6D48F99CL,0x2A99L,0x6A48319FL};
            short l_208 = 0x0EDEL;
lbl_249:
            if ((0x89DFEE80L ^ (l_181 && func_48(p_35, p_35, ((l_182 || p_35) & (safe_rshift_func_uint8_t_u_u((p_35 & (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(0x68L, ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(((((((+(((((p_35 & g_129) & l_181) & 0xD2A347AFL) & p_34) < 4294967289UL)) < l_181) & l_166) | 0xBA3EL) == 0UL) != l_139.f5), 4L)), l_181)), 4)) | p_34))), 0))), p_34))), p_34))))
            {
                return l_182;
            }
            else
            {
                struct S0 l_197 = {0xE6CD8E07L,247UL,0L,0xC8CDDD8CL,1UL,1UL};
                int l_200 = 0x534E026DL;
                unsigned short l_224 = 0x8629L;
                int l_230 = 0x71C5E754L;
                if (g_88)
                {
                    struct S0 l_195 = {6L,0x44L,0xA38A1068L,0x22830CF9L,0x334AL,18446744073709551606UL};
                    l_196 = l_195;
                    l_197 = l_195;
                    l_197 = l_198;
                    l_200 = l_199;
                }
                else
                {
                    char l_219 = 0L;
                    g_141 = ((p_34 >= (safe_rshift_func_uint8_t_u_s(g_58.f2, (safe_sub_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(255UL, 2)) || (((l_207 == g_22) <= p_35) == l_208)) <= 0L), (safe_lshift_func_uint16_t_u_u(l_198.f0, g_129))))))) == (-1L));
                    l_200 = 0x82698C18L;
                    for (l_197.f5 = 0; (l_197.f5 >= 24); l_197.f5 = safe_add_func_int8_t_s_s(l_197.f5, 3))
                    {
                        int l_227 = 0x95CD9103L;
                        g_141 = func_48(((safe_rshift_func_uint8_t_u_u((g_58.f4 >= (p_34 <= ((safe_mod_func_uint32_t_u_u(((((0x196F249CL < p_34) || (l_219 && (safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_224, 0x29L)), (safe_sub_func_int32_t_s_s(((l_227 <= ((safe_lshift_func_uint8_t_u_u(0xA7L, g_121)) == g_88)) <= p_34), g_58.f2)))))) < 1UL) > 8L), p_35)) == l_219))), 4)) & l_227), l_89, l_104, l_230);
                        g_141 = (l_197.f2 | (safe_lshift_func_int8_t_s_s(0x90L, 2)));
                        l_245 = ((g_58.f4 ^ (((0x2D4CL || p_34) || ((safe_add_func_int8_t_s_s((g_121 || (((((safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(g_58.f1, (~((((+0L) < g_22) != (safe_add_func_int8_t_s_s(0xFDL, ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(0xB8DBL, 1)), (-8L))) < p_35)))) || (-4L))))) && l_198.f5), g_58.f2)) ^ p_34) > g_22) ^ l_227) >= 0xB589L)), g_88)) < g_129)) || l_227)) || p_35);
                        l_248 = (safe_rshift_func_int8_t_s_u(p_34, (p_35 && 0x2BL)));
                    }
                    g_141 = l_207;
                    if (l_128)
                        goto lbl_249;
                }
                if (l_166)
                    goto lbl_260;
            }
            if ((safe_sub_func_uint16_t_u_u(g_58.f5, (-4L))))
            {
lbl_260:
                l_89 = func_48(((safe_add_func_int32_t_s_s(g_58.f4, (g_58.f4 || (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_u(p_35, (l_196.f1 != ((g_58.f1 == (p_34 | (+g_129))) >= (!((((0xC9L || 0x8BL) != 4294967295UL) < l_182) < g_58.f1)))))) == g_22), 0)) & 0L), 255UL))))) <= g_58.f0), g_141, l_166, p_35);
                g_141 = 0x3FCA0D5BL;
                for (l_198.f1 = 0; (l_198.f1 == 27); l_198.f1++)
                {
                    unsigned char l_265 = 4UL;
                    for (l_139.f2 = 0; (l_139.f2 >= 21); l_139.f2 = safe_add_func_uint8_t_u_u(l_139.f2, 4))
                    {
                        l_245 = l_196.f5;
                    }
                    g_141 = (l_265 || 0x7EL);
                }
            }
            else
            {
                unsigned short l_278 = 65532UL;
                l_245 = (((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((6UL <= g_58.f1) > 0xCEB4L), 8)), p_34)) == (safe_add_func_uint8_t_u_u((((g_22 >= 0x8A6B7EA1L) < ((safe_rshift_func_uint8_t_u_u(p_34, ((l_198.f2 > ((((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((g_141 > p_35), l_182)), l_159)) == g_121) <= p_34) != 0x4CE6ED6EL)) | 0x38D5E849L))) || g_58.f0)) | 0xF9L), p_35))) <= l_278);
                g_141 = (safe_unary_minus_func_int8_t_s((-7L)));
                g_58 = g_58;
                l_196 = l_196;
            }
        }
        if (g_58.f1)
        {
            struct S0 l_280 = {0xF06FFC55L,0x3CL,0xF657B897L,0xAAFF5B7AL,65535UL,0xB67674C3L};
            l_280 = l_196;
        }
        else
        {
            struct S0 l_281 = {0L,255UL,-1L,18446744073709551609UL,0UL,0xE2D881AEL};
            l_281 = l_196;
            l_89 = 0L;
            g_141 = ((safe_add_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_u(func_42(g_58.f3, g_58, ((safe_add_func_uint16_t_u_u(((l_159 ^ (((safe_rshift_func_uint8_t_u_u((p_34 <= (safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(l_294, g_141)), (((1L <= 1L) ^ l_281.f3) <= p_35)))), 5)) || 0x8948L) == g_58.f4)) > p_35), l_248)) && g_129), g_129, l_178), l_281.f3)) ^ g_121) != g_141), g_141)) | g_141);
        }
    }
    return p_34;
}







static int func_42(int p_43, struct S0 p_44, short p_45, int p_46, unsigned p_47)
{
    char l_61 = 0xBEL;
    unsigned char l_64 = 0x6AL;
    int l_67 = 0L;
    l_67 = ((((g_58.f3 <= ((((g_58.f3 <= (((l_61 < (safe_lshift_func_int8_t_s_s(((!(+l_61)) > ((l_64 > l_64) != g_58.f1)), 5))) != g_58.f0) ^ (safe_rshift_func_uint16_t_u_s((p_46 | p_44.f3), g_58.f1)))) | g_58.f4) < l_64) ^ 1UL)) >= l_61) <= 0x21E2L) > 1UL);
    p_43 = (safe_lshift_func_uint16_t_u_s(l_61, (safe_mod_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(func_48(func_48(p_44.f2, l_64, g_58.f0, p_44.f1), (9UL <= p_44.f2), (p_44.f3 & 1UL), g_22), 0xC6L)) ^ 65526UL) == g_22), g_22))));
    g_88 = (0x2DL < func_48(g_58.f4, ((0xA0L ^ ((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s((p_44.f0 || (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((((g_58.f1 | ((l_64 ^ (safe_add_func_uint32_t_u_u((+0x7088E2D1L), g_58.f1))) <= ((l_64 & 0x3893L) == g_58.f5))) <= l_64) == l_64), g_22)), p_43)), 5))), (-1L))), p_44.f3)), g_22)) > g_58.f0)) || p_43), l_67, p_44.f3));
    return g_58.f3;
}







static int func_48(unsigned p_49, unsigned char p_50, unsigned p_51, int p_52)
{
    struct S0 l_57 = {0x4ADCF861L,7UL,0x1ADF561FL,0x604C38DBL,0x75ABL,0UL};
    struct S0 l_59 = {-6L,0x70L,0x9E5F9C6AL,0x02B50D22L,5UL,0xC74F348FL};
    for (p_49 = 0; (p_49 >= 11); p_49++)
    {
        g_58 = l_57;
    }
    l_59 = g_58;
    return g_58.f2;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_58.f0, "g_58.f0", print_hash_value);
    transparent_crc(g_58.f1, "g_58.f1", print_hash_value);
    transparent_crc(g_58.f2, "g_58.f2", print_hash_value);
    transparent_crc(g_58.f3, "g_58.f3", print_hash_value);
    transparent_crc(g_58.f4, "g_58.f4", print_hash_value);
    transparent_crc(g_58.f5, "g_58.f5", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_346.f0, "g_346.f0", print_hash_value);
    transparent_crc(g_346.f1, "g_346.f1", print_hash_value);
    transparent_crc(g_346.f2, "g_346.f2", print_hash_value);
    transparent_crc(g_346.f3, "g_346.f3", print_hash_value);
    transparent_crc(g_346.f4, "g_346.f4", print_hash_value);
    transparent_crc(g_346.f5, "g_346.f5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
