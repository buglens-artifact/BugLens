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
   unsigned f0;
   unsigned f1;
   unsigned short f2;
};


static unsigned short g_2 = 0xC1ECL;
static char g_3 = 0x24L;
static struct S0 g_99 = {0xF73E8932L,0UL,0xD52AL};
static unsigned char g_108 = 250UL;
static unsigned g_118 = 9UL;
static int g_137 = 0L;
static struct S0 g_140 = {1UL,0x51924C02L,0UL};
static short g_151 = 4L;
static char g_161 = (-6L);
static unsigned g_162 = 4294967295UL;
static int g_163 = 1L;
static char g_300 = (-7L);
static unsigned char g_319 = 0x4EL;
static unsigned char g_342 = 0UL;
static unsigned g_435 = 0UL;
static unsigned g_471 = 0xC99ABEB9L;
static int g_510 = 0xC46F7C81L;
static struct S0 g_546 = {0xAECE32A6L,0x17F6B34EL,1UL};
static unsigned char g_556 = 255UL;



static unsigned short func_1(void);
static struct S0 func_4(int p_5, unsigned p_6, unsigned p_7, unsigned char p_8);
static char func_13(unsigned p_14, unsigned char p_15);
static short func_18(int p_19, short p_20, unsigned p_21, struct S0 p_22, char p_23);
static unsigned func_24(unsigned char p_25, unsigned p_26, short p_27);
static unsigned char func_28(int p_29, int p_30);
static short func_33(char p_34);
static short func_38(struct S0 p_39, short p_40, int p_41, char p_42, unsigned char p_43);
static struct S0 func_44(unsigned p_45);
static short func_58(unsigned p_59, unsigned char p_60, struct S0 p_61, unsigned p_62);
static unsigned short func_1(void)
{
    int l_37 = 0L;
    unsigned l_451 = 0UL;
    int l_452 = 1L;
    struct S0 l_453 = {7UL,4294967289UL,65529UL};
    int l_513 = 0L;
    struct S0 l_547 = {0x58CD0151L,0x6AB8AE6DL,0x4C99L};
    unsigned l_557 = 0x7B0052FDL;
    g_3 = g_2;
    l_547 = func_4((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_3, 0x5CL)), (func_13(((l_513 = (safe_lshift_func_int16_t_s_u(func_18((l_452 = (l_37 = ((func_24(func_28((1UL <= (safe_mul_func_int16_t_s_s(func_33((safe_sub_func_uint32_t_u_u(l_37, (-1L)))), (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(l_37, 3)), (safe_sub_func_uint32_t_u_u((g_3 && g_2), 1UL))))))), l_37), g_2, l_37) && l_37) && l_451))), l_451, g_3, l_453, g_3), 12))) || g_151), l_453.f0) > 0UL))), g_471, g_3, l_453.f2);
    l_557 = (l_453.f1 != (l_513 && (((safe_mod_func_int16_t_s_s(((l_451 >= (l_513 = 0x5AL)) | (safe_mul_func_uint8_t_u_u((0x27L & ((l_37 = (l_452 & (g_342 = (l_453.f1 || (safe_add_func_uint8_t_u_u((func_33(((safe_sub_func_int32_t_s_s(l_453.f2, (-1L))) < (-1L))) ^ l_547.f1), g_546.f1)))))) > 0x4C6D1DB1L)), g_556))), (-1L))) | 1UL) != l_453.f0)));
    g_546 = g_546;
    return g_137;
}







static struct S0 func_4(int p_5, unsigned p_6, unsigned p_7, unsigned char p_8)
{
    g_546 = g_99;
    return g_99;
}







static char func_13(unsigned p_14, unsigned char p_15)
{
    int l_514 = (-4L);
    int l_523 = 0xD6E6C1D8L;
    struct S0 l_528 = {0UL,1UL,65535UL};
    int l_529 = (-2L);
    int l_530 = 9L;
    unsigned char l_537 = 3UL;
    l_530 = ((l_514 & (safe_rshift_func_uint16_t_u_s(p_14, 2))) > (((l_529 = (safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(g_342, g_118)), (safe_mul_func_int16_t_s_s(((((l_523 = l_514) || (l_523 = ((safe_sub_func_uint32_t_u_u(l_514, (l_514 > ((((safe_sub_func_int8_t_s_s(((func_38((g_99 = (l_528 = g_99)), (~l_514), l_523, l_523, l_523) & 0x364CL) || p_15), g_162)) & l_523) < 1UL) <= p_15)))) != g_3))) == p_15) > 0xECE1L), 0x670AL))))) > p_14) <= l_514));
    g_137 = (safe_rshift_func_int8_t_s_u(((p_14 != ((!p_14) >= (safe_mod_func_uint32_t_u_u(p_15, (safe_add_func_uint32_t_u_u(((l_537 | (((g_118 ^ p_15) == (!(safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_300, ((safe_mul_func_int8_t_s_s((((((l_528.f1 < p_14) | 0xA43773C3L) != g_99.f1) || l_529) >= g_99.f0), 1UL)) ^ g_140.f2))), l_529)), g_99.f0)))) >= 255UL)) & g_118), p_15)))))) != p_14), l_528.f0));
    return g_2;
}







static short func_18(int p_19, short p_20, unsigned p_21, struct S0 p_22, char p_23)
{
    unsigned short l_456 = 0x3AF0L;
    int l_463 = 0x705CBADFL;
    struct S0 l_470 = {0UL,0x87B82D64L,65535UL};
    int l_472 = (-1L);
    char l_505 = 0xECL;
    if ((((safe_mul_func_uint16_t_u_u(l_456, ((safe_sub_func_int16_t_s_s((l_456 | (p_22.f1 = p_20)), (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((l_472 = (func_58(func_28((l_463 = l_456), l_456), (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((p_23 = 1L), g_319)), 4294967291UL)), 3)), l_470, g_471) & 0xC5E8B7BAL)), p_21)), 3)))) > p_21))) || 0x8D794C71L) >= l_470.f0))
    {
        return p_19;
    }
    else
    {
        unsigned char l_473 = 0xB8L;
        int l_478 = 0x7A5CB412L;
        int l_491 = 0x8A2D69E9L;
        l_478 = (((4294967295UL & (l_473 >= (((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_470.f0, p_23)), p_22.f2)) <= (-8L)) || g_3))) < (0xA294E479L ^ l_470.f2)) > g_163);
        l_491 = func_38(p_22, ((l_478 = (l_472 = (g_137 > (safe_sub_func_int16_t_s_s((l_470.f0 == ((safe_add_func_uint32_t_u_u(g_435, g_163)) & (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(l_478, 1)), l_470.f1)))), (safe_mod_func_uint32_t_u_u(l_472, (safe_lshift_func_uint16_t_u_s((l_463 = l_473), p_20))))))))) <= g_108), l_473, g_118, g_162);
    }
    if (g_99.f2)
    {
        int l_506 = 3L;
        struct S0 l_511 = {0UL,0UL,65534UL};
        if ((7UL >= 3UL))
        {
            short l_498 = (-6L);
            int l_507 = 8L;
            l_507 = (safe_mod_func_uint32_t_u_u((p_21 = (safe_sub_func_uint16_t_u_u((g_300 && (!g_3)), (g_2 == 0x78L)))), (safe_mod_func_int32_t_s_s(l_498, ((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_22.f1, ((safe_mod_func_int32_t_s_s((g_137 = p_23), 4294967295UL)) ^ (l_505 || p_22.f2)))), l_506)) & l_470.f0)))));
            l_507 = ((g_151 = l_463) ^ p_22.f1);
            l_507 = (g_510 = (((l_463 = ((l_470.f2 >= (7L > p_23)) ^ (g_151 = (0xCCB60AA2L < (p_21 == (-1L)))))) && g_2) < (l_472 = (safe_mod_func_int32_t_s_s((((p_23 <= (g_137 = (-9L))) < l_470.f0) ^ 0xAD50L), p_21)))));
        }
        else
        {
            l_511 = func_44(g_99.f0);
        }
        g_140 = g_99;
        l_511 = l_470;
    }
    else
    {
        short l_512 = 0x8D38L;
        return l_512;
    }
    l_470 = p_22;
    return g_300;
}







static unsigned func_24(unsigned char p_25, unsigned p_26, short p_27)
{
    int l_301 = 0xBEF081A4L;
    struct S0 l_308 = {0UL,0xF209A28CL,1UL};
    if ((l_301 > (g_137 > (0x1CL | 0xA0L))))
    {
        struct S0 l_320 = {4294967292UL,0x5F2331D1L,65534UL};
        struct S0 l_321 = {4294967295UL,0x7F995BE4L,0xCAC9L};
        for (g_99.f2 = 0; (g_99.f2 >= 47); ++g_99.f2)
        {
            char l_306 = 1L;
            l_301 = (safe_lshift_func_uint8_t_u_s((l_306 = ((2UL > l_301) <= p_25)), (+((g_161 = (safe_unary_minus_func_int8_t_s((g_140.f0 | 4294967288UL)))) | (p_25 || g_99.f1)))));
            l_308 = g_140;
            g_319 = ((safe_mul_func_uint8_t_u_u(((l_301 = p_26) | ((g_2 = p_25) >= (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(l_306, g_118)) || p_26), (safe_lshift_func_uint8_t_u_u(0x58L, 2)))))), (l_308.f0 != (g_140.f2 = (((g_137 = (g_3 != (g_161 = (g_137 <= g_161)))) <= p_27) > g_3))))) <= g_108);
        }
        l_321 = (l_320 = g_99);
    }
    else
    {
        int l_343 = 0x9F92A51AL;
        unsigned short l_355 = 8UL;
        unsigned l_378 = 1UL;
        struct S0 l_423 = {1UL,0xF3EA85F2L,0x94DDL};
        int l_449 = (-2L);
        g_137 = l_308.f0;
        for (p_27 = 0; (p_27 < (-14)); p_27 = safe_sub_func_int16_t_s_s(p_27, 4))
        {
            unsigned short l_331 = 0xDE88L;
            int l_348 = 0xB3BFD188L;
            unsigned short l_356 = 65527UL;
            int l_389 = 1L;
            unsigned l_405 = 1UL;
            struct S0 l_420 = {0UL,0x5BAAB0F4L,65531UL};
            for (g_162 = 9; (g_162 > 7); g_162 = safe_sub_func_uint16_t_u_u(g_162, 6))
            {
                struct S0 l_326 = {2UL,0UL,0x89ACL};
                if (p_27)
                {
                    return g_99.f2;
                }
                else
                {
                    l_326 = l_308;
                    if ((((((((safe_mul_func_int8_t_s_s(((g_99.f1 < p_26) & (safe_rshift_func_int16_t_s_s(((l_331 <= (((g_151 && ((((l_301 = p_25) == 0x1F29E83EL) | p_27) || 0xADL)) && (g_137 = p_26)) == p_26)) && 0L), 5))), g_162)) <= l_326.f0) || l_326.f2) & g_99.f1) < p_27) | g_99.f2) == p_25))
                    {
                        struct S0 l_332 = {0UL,4294967293UL,65535UL};
                        int l_337 = 5L;
                        g_99 = l_332;
                        g_137 = (safe_add_func_int16_t_s_s(p_26, (g_162 && (g_2 > l_331))));
                        g_99 = g_99;
                        l_337 = (safe_rshift_func_int16_t_s_s((l_301 = (-1L)), 11));
                    }
                    else
                    {
                        return p_26;
                    }
                }
            }
            if (g_161)
            {
                g_137 = g_163;
            }
            else
            {
                struct S0 l_340 = {0xA3BE4AEFL,4294967289UL,65535UL};
                for (g_140.f0 = 0; (g_140.f0 > 4); g_140.f0++)
                {
                    int l_341 = 1L;
                    l_340 = g_99;
                    if (g_140.f1)
                        continue;
                    l_341 = g_118;
                }
                if (p_26)
                    continue;
            }
            l_343 = ((func_33((l_301 = p_25)) >= ((0L != 0x9B12FEB1L) >= l_331)) < (g_342 = l_331));
            if (((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_308.f2 == ((0xEA697F74L <= (l_348 = g_300)) || (safe_lshift_func_int8_t_s_s((l_348 = (+(0x6BC6L | (func_38(l_308, p_25, (safe_mul_func_int8_t_s_s((p_26 == (((safe_rshift_func_uint16_t_u_u((l_348 < 0xC065L), 2)) < l_355) != g_99.f1)), g_140.f1)), l_355, g_99.f2) ^ 0x86L)))), g_300)))), 65535UL)), l_356)) == 253UL))
            {
                unsigned l_359 = 0UL;
                int l_394 = 0x13C8C231L;
                struct S0 l_414 = {0xB11E068EL,3UL,0xD293L};
                for (l_348 = 0; (l_348 != 8); ++l_348)
                {
                    unsigned char l_381 = 0x0CL;
                    int l_388 = 0L;
                    if (p_25)
                    {
                        return g_151;
                    }
                    else
                    {
                        g_140 = func_44(l_359);
                        if (p_27)
                            continue;
                        if (g_163)
                            continue;
                        g_137 = ((safe_lshift_func_uint8_t_u_s(l_348, (safe_add_func_uint16_t_u_u(l_359, (safe_mul_func_int16_t_s_s(p_27, 65533UL)))))) == ((p_26 ^ (65530UL <= (((safe_mul_func_uint16_t_u_u(l_355, (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(0L, (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((((((safe_add_func_int16_t_s_s(p_25, g_300)) && g_2) < 0x0E3BL) <= g_108) >= l_343) ^ g_300), l_359)), 0x16L)))), 0x8ABE574FL)))) || l_378) < g_2))) && g_300));
                    }
                    l_389 = ((l_388 = (safe_mod_func_uint8_t_u_u((p_27 & func_28(l_381, (safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(func_33(p_27), p_27)), (safe_mul_func_int8_t_s_s(((0L && p_26) || l_348), g_319)))))), p_27))) <= g_342);
                    if ((l_343 = (0x62L || ((g_137 = p_25) ^ (safe_mul_func_uint8_t_u_u(g_118, (safe_mul_func_uint16_t_u_u((l_394 = 1UL), (safe_mul_func_int8_t_s_s(g_342, p_25))))))))))
                    {
                        l_388 = (g_140.f2 > (((g_99.f2 || (g_300 > ((0xAEF19382L < ((safe_mod_func_uint16_t_u_u((g_99.f2 = (safe_rshift_func_uint16_t_u_s(g_162, (safe_lshift_func_int8_t_s_u((p_27 ^ (g_151 = (p_26 >= (l_405 = 0x47910791L)))), 6))))), g_3)) && g_108)) >= g_3))) >= l_389) > l_356));
                        if (l_378)
                            continue;
                    }
                    else
                    {
                        int l_417 = 0L;
                        l_394 = ((g_108 < (g_162 && (safe_rshift_func_uint8_t_u_s(((p_25 = p_25) | p_26), 0)))) || ((safe_mul_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(func_38(l_414, p_26, (((g_108 >= p_25) && ((safe_rshift_func_int8_t_s_s(p_27, 6)) > l_343)) < g_162), g_300, l_405), g_161)), p_25)) == l_417) ^ g_342), p_26)) && 253UL));
                        l_394 = (safe_rshift_func_int16_t_s_u(l_343, 0));
                        l_420 = l_414;
                    }
                    for (g_140.f0 = 26; (g_140.f0 <= 29); g_140.f0 = safe_add_func_int32_t_s_s(g_140.f0, 2))
                    {
                        int l_434 = 4L;
                        l_420 = func_44((g_99.f1 = (l_343 = (l_301 = p_26))));
                        l_434 = ((+0xB6L) > (((((((g_435 = ((g_161 = (g_300 = (l_420.f2 != func_38(func_44(func_38((l_423 = g_99), (safe_rshift_func_int8_t_s_s(((g_151 = (((((safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((g_99.f1 <= ((g_319 < (((safe_add_func_uint16_t_u_u(g_137, ((g_108 == (l_343 = (safe_sub_func_int16_t_s_s(l_434, 0xE133L)))) != g_300))) | 0x78L) >= g_342)) == 0x85D1L)), 5UL)), 0xD356443EL)) || 0x4BD2L) != g_118) <= 1UL) ^ g_99.f0)) || l_343), p_25)), l_388, l_420.f0, p_25)), p_25, p_25, p_25, g_342)))) > p_25)) != g_162) > p_26) > 0x25L) == p_27) > l_308.f0) == 6UL));
                        l_423 = l_420;
                    }
                }
                l_414 = func_44((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(l_378, (((0x29D9L == 0x9341L) >= (((0x475DL | 0x5E5EL) ^ func_58((0UL > (!((safe_sub_func_int16_t_s_s((g_140.f1 < (0UL || (safe_mul_func_uint16_t_u_u((l_414.f1 || 0x0EL), g_162)))), p_27)) && l_359))), p_25, l_308, g_118)) && 65535UL)) | 0xA295A454L))), g_2)));
                g_137 = (g_300 == (safe_sub_func_uint32_t_u_u(p_25, l_331)));
            }
            else
            {
                unsigned l_446 = 0x327D8690L;
                l_343 = func_58(l_446, (g_342 = 0xADL), l_420, l_405);
                l_348 = 0x74CB4B96L;
                g_137 = 0L;
            }
        }
        for (g_342 = 0; (g_342 > 19); ++g_342)
        {
            unsigned short l_450 = 0x6000L;
            l_301 = l_449;
            l_450 = (l_308.f0 > p_26);
        }
    }
    return g_140.f0;
}







static unsigned char func_28(int p_29, int p_30)
{
    unsigned short l_285 = 1UL;
    struct S0 l_288 = {0x32080C0CL,0xE404C5C0L,0xFA97L};
    int l_289 = 0x3C553572L;
    int l_290 = (-3L);
    struct S0 l_299 = {6UL,1UL,0x45AAL};
    g_300 = (l_285 > (safe_mul_func_uint16_t_u_u(((func_38(l_288, ((~((func_33((func_38(l_288, (l_290 = ((l_289 = g_118) >= (p_29 = (-1L)))), (safe_rshift_func_int16_t_s_u(((+p_30) ^ l_288.f0), (safe_mul_func_int16_t_s_s((((((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((((func_38((l_299 = g_140), func_38(l_288, l_288.f2, g_99.f1, g_99.f0, p_30), g_3, g_2, l_288.f2) || (-1L)) >= g_2) != l_288.f2) && g_3), p_30)), (-1L))) != 0L) <= g_163) & g_140.f0) > l_288.f2), l_285)))), p_30, g_3) & p_30)) <= l_288.f0) ^ g_3)) || p_29), l_288.f2, p_30, g_2) && p_29) < 0x9AL), g_3)));
    l_290 = (l_289 = func_33(g_108));
    return g_99.f0;
}







static short func_33(char p_34)
{
    short l_48 = 0xB8D8L;
    int l_57 = (-3L);
    struct S0 l_63 = {0x6899DB22L,0x3AABDC9AL,65535UL};
    struct S0 l_64 = {0xA7BB34E4L,0x53E8AF80L,1UL};
    int l_263 = 0x11E251C8L;
    int l_278 = 0xD8ECEE31L;
    l_278 = (func_38(func_44((safe_mod_func_int16_t_s_s(((l_48 = g_2) < ((g_3 <= 0L) | 0x8FL)), (safe_lshift_func_uint16_t_u_u((((l_263 = (((safe_mod_func_int16_t_s_s(((((((l_57 = (safe_mul_func_int8_t_s_s(l_57, ((!func_58(g_2, l_57, (l_64 = l_63), (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(g_2, 7)), 3)))) ^ g_3)))) & g_2) < l_63.f1) ^ g_2) && 65535UL) > 0xEAL), l_63.f0)) <= p_34) ^ 0x84L)) == p_34) < 0L), 11))))), g_99.f0, p_34, l_63.f0, g_2) ^ p_34);
    return p_34;
}







static short func_38(struct S0 p_39, short p_40, int p_41, char p_42, unsigned char p_43)
{
    struct S0 l_272 = {0x58FFC12BL,4UL,0x4B7AL};
    char l_277 = 9L;
    l_272 = p_39;
    g_137 = ((safe_sub_func_int8_t_s_s(g_163, ((safe_rshift_func_uint8_t_u_s((+(g_108 = (((+g_151) >= g_2) <= g_163))), p_40)) | (l_272.f1 < 0xCB15L)))) ^ l_277);
    l_272 = p_39;
    g_99 = g_140;
    return l_277;
}







static struct S0 func_44(unsigned p_45)
{
    unsigned short l_266 = 0UL;
    struct S0 l_271 = {4294967295UL,1UL,0x22D4L};
    g_137 = ((safe_add_func_uint8_t_u_u(l_266, (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(0x9DL, 7)) <= l_266), p_45)))) & (g_108 = p_45));
    return l_271;
}







static short func_58(unsigned p_59, unsigned char p_60, struct S0 p_61, unsigned p_62)
{
    unsigned short l_88 = 0x7170L;
    int l_110 = (-10L);
    struct S0 l_121 = {4294967292UL,4294967295UL,0xE344L};
    unsigned short l_134 = 0xCE90L;
    unsigned l_209 = 4294967290UL;
    int l_260 = 0L;
    for (p_62 = 0; (p_62 < 27); p_62++)
    {
        unsigned short l_81 = 0xE962L;
        int l_85 = 0x71EB1C26L;
        unsigned l_117 = 0xBDA14E7EL;
        unsigned short l_119 = 0xD104L;
        unsigned short l_123 = 0x64BAL;
        char l_157 = 0x3EL;
        int l_165 = 5L;
        struct S0 l_229 = {0xAD4D9609L,0x9725A790L,8UL};
        unsigned char l_254 = 247UL;
        for (p_59 = 0; (p_59 != 39); ++p_59)
        {
            struct S0 l_100 = {0x330CFEF6L,0xF2FC99F1L,0xFC87L};
            unsigned short l_107 = 0UL;
            int l_109 = 0x5A418E4AL;
            short l_116 = 0xE95BL;
            int l_164 = (-8L);
            if ((safe_rshift_func_int8_t_s_u((p_61.f1 != (g_2 > (p_60 = (p_61.f2 < g_2)))), (safe_sub_func_int16_t_s_s((-1L), (safe_lshift_func_int8_t_s_s((l_81 = g_2), 2)))))))
            {
                short l_84 = 6L;
                int l_98 = 1L;
                for (p_61.f2 = (-12); (p_61.f2 < 17); ++p_61.f2)
                {
                    if (p_61.f0)
                    {
                        if (l_84)
                            break;
                    }
                    else
                    {
                        l_85 = (-1L);
                        l_88 = (safe_rshift_func_int8_t_s_s(p_59, 3));
                    }
                    for (p_61.f1 = 0; (p_61.f1 >= 18); p_61.f1 = safe_add_func_uint16_t_u_u(p_61.f1, 3))
                    {
                        return g_2;
                    }
                }
                for (p_61.f0 = 23; (p_61.f0 <= 16); p_61.f0 = safe_sub_func_uint32_t_u_u(p_61.f0, 1))
                {
                    unsigned l_97 = 0UL;
                    l_98 = ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(g_2, p_61.f1)), 6)) || (l_85 = (l_97 || p_61.f0)));
                    l_100 = g_99;
                }
                l_109 = (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((g_108 = l_107), ((l_85 = (+l_81)) > (-1L)))), 13)), g_99.f2));
                if (g_99.f1)
                    continue;
            }
            else
            {
                unsigned l_111 = 0xC327FA81L;
                char l_135 = 1L;
                char l_136 = 0xD1L;
                int l_150 = 0xD2F47574L;
                if ((l_88 ^ (l_110 = g_3)))
                {
                    if (g_108)
                        break;
                }
                else
                {
                    unsigned short l_120 = 0UL;
                    l_111 = p_60;
                    if (p_61.f1)
                        continue;
                    for (g_108 = 0; (g_108 < 19); g_108 = safe_add_func_uint32_t_u_u(g_108, 5))
                    {
                        struct S0 l_122 = {0UL,1UL,0xEE9FL};
                        g_118 = (safe_rshift_func_int8_t_s_s(l_116, l_117));
                        l_120 = l_119;
                        l_122 = l_121;
                        l_85 = l_123;
                    }
                }
                if (((safe_sub_func_int8_t_s_s((p_60 && (safe_mul_func_uint8_t_u_u(g_118, (0x90L <= (-8L))))), (g_137 = (safe_sub_func_int16_t_s_s(p_59, (safe_rshift_func_int8_t_s_u(((((safe_lshift_func_uint8_t_u_u((+l_111), p_60)) > ((((l_81 | l_134) <= 0x69343887L) <= l_135) != l_85)) != l_136) != g_2), g_3))))))) | p_61.f0))
                {
                    struct S0 l_141 = {4294967295UL,4294967291UL,0x3F91L};
                    for (g_99.f1 = 2; (g_99.f1 != 59); g_99.f1++)
                    {
                        g_140 = g_99;
                        p_61 = p_61;
                    }
                    l_85 = (4UL > p_59);
                    l_100 = l_141;
                }
                else
                {
                    int l_152 = (-9L);
                    for (l_81 = (-29); (l_81 < 9); l_81 = safe_add_func_uint32_t_u_u(l_81, 1))
                    {
                        l_85 = ((g_108 >= g_118) <= (((l_88 & p_61.f0) ^ ((g_140.f1 >= 0xD6L) == (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(l_85, (l_150 = g_3))), g_99.f2)))) != 9L));
                        g_151 = (g_137 = p_61.f0);
                        l_109 = l_152;
                        g_137 = l_100.f1;
                    }
                    if (g_118)
                        break;
                    l_152 = (safe_rshift_func_uint16_t_u_s(0xCF3CL, 8));
                }
            }
            for (g_99.f2 = 0; (g_99.f2 < 58); g_99.f2 = safe_add_func_uint16_t_u_u(g_99.f2, 7))
            {
                int l_160 = 0xCC4AB305L;
                if (p_62)
                    break;
                l_100 = p_61;
                g_137 = (0xED91L || l_157);
                for (l_121.f1 = 0; (l_121.f1 <= 42); l_121.f1 = safe_add_func_uint8_t_u_u(l_121.f1, 3))
                {
                    unsigned l_206 = 0x540FA7CFL;
                    int l_210 = 0x8C7ECC31L;
                    l_160 = (l_165 = (l_160 & ((g_161 = (((p_62 & 0x3D0AF2EBL) | (+l_110)) & g_108)) ^ ((4294967292UL || p_59) == ((~(~(((0x91L < (g_163 = (g_162 = (l_85 = ((g_3 || p_59) >= g_140.f2))))) <= 0xB9L) ^ l_160))) == l_164)))));
                    if ((safe_add_func_uint32_t_u_u(((p_60 = 255UL) & (safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(l_164, 0)), ((p_61.f2 = g_163) != g_137)))), (l_160 = ((safe_mul_func_uint8_t_u_u(l_160, (safe_mod_func_uint16_t_u_u((l_85 < (+((((safe_add_func_int8_t_s_s(0L, (((p_61.f0 ^ (g_108 || l_100.f0)) < 0x47A8L) != g_2))) | p_62) > g_99.f2) >= g_162))), p_62)))) >= g_3)))))
                    {
                        g_137 = ((safe_mul_func_int8_t_s_s((!(safe_mod_func_uint16_t_u_u((p_61.f2 = (safe_lshift_func_int8_t_s_s((p_59 && ((safe_sub_func_int8_t_s_s((-5L), g_118)) || (safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(1L, (-1L))), g_161)))), 6))), (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((g_140.f1 = (safe_mul_func_uint16_t_u_u(l_119, (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_61.f1, 3)), (3L == l_157))) >= p_60), p_59)), l_100.f2)), l_119))))) | g_161), p_60)), l_206))))), 0xFFL)) == 0x7BL);
                        l_210 = (safe_mul_func_int16_t_s_s(l_121.f1, (g_151 = ((0x8928L < l_107) || (l_206 <= (((l_165 > g_163) || l_209) <= 1L))))));
                        l_110 = (g_137 = 0L);
                    }
                    else
                    {
                        unsigned char l_215 = 250UL;
                        l_160 = (l_110 & (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((p_61.f0 == l_215), g_118)), g_3)));
                    }
                }
            }
            l_109 = (safe_rshift_func_int16_t_s_s(l_107, (5L != 3UL)));
            for (l_121.f2 = 0; (l_121.f2 < 38); l_121.f2 = safe_add_func_int8_t_s_s(l_121.f2, 9))
            {
                unsigned short l_226 = 0xD9A9L;
                struct S0 l_230 = {4294967286UL,0UL,65527UL};
                for (l_165 = 26; (l_165 <= 15); --l_165)
                {
                    struct S0 l_222 = {0x01278691L,1UL,0xC01FL};
                    int l_225 = 1L;
                    if (l_209)
                    {
                        l_222 = l_121;
                    }
                    else
                    {
                        l_110 = (l_109 = ((p_61.f1 == (p_61.f1 | (safe_mod_func_int8_t_s_s(0x6BL, p_60)))) && (p_61.f0 < l_85)));
                        l_225 = p_60;
                        g_137 = 0x5A1BD8FFL;
                    }
                    if (l_226)
                        continue;
                    g_137 = (safe_add_func_int8_t_s_s(g_137, p_61.f0));
                }
                if (g_162)
                {
                    l_230 = l_229;
                }
                else
                {
                    for (l_117 = (-7); (l_117 > 18); l_117 = safe_add_func_uint32_t_u_u(l_117, 6))
                    {
                        g_137 = l_134;
                        return p_61.f2;
                    }
                    l_110 = p_61.f0;
                }
                if (p_61.f1)
                    continue;
                if (l_209)
                    continue;
            }
        }
        l_110 = g_3;
        for (l_88 = 27; (l_88 == 28); l_88 = safe_add_func_int16_t_s_s(l_88, 7))
        {
            short l_245 = (-10L);
            int l_252 = 0x5C6483FAL;
            int l_253 = 0x30205D3DL;
            int l_255 = 0L;
            int l_256 = (-1L);
            int l_257 = (-1L);
            g_137 = p_61.f1;
            l_257 = (g_99.f1 == (safe_sub_func_int16_t_s_s(((g_2 && (l_256 = ((safe_rshift_func_int16_t_s_s(g_108, ((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(l_245, p_61.f0)) >= ((0L || 7UL) == (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(p_61.f1, 4)), 1)))) ^ (safe_rshift_func_int8_t_s_u((l_255 = (((l_253 = (l_252 = p_61.f1)) || l_254) == 1L)), 7))), g_163)), l_245)) != g_99.f1))) != l_245))) <= (-5L)), 0x77E6L)));
            if (g_2)
                continue;
            l_255 = (7UL ^ ((safe_mod_func_int32_t_s_s(g_140.f2, l_260)) > g_140.f0));
        }
    }
    g_137 = (safe_lshift_func_uint16_t_u_u(0x2B38L, 12));
    return l_209;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    transparent_crc(g_99.f1, "g_99.f1", print_hash_value);
    transparent_crc(g_99.f2, "g_99.f2", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f1, "g_140.f1", print_hash_value);
    transparent_crc(g_140.f2, "g_140.f2", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_546.f0, "g_546.f0", print_hash_value);
    transparent_crc(g_546.f1, "g_546.f1", print_hash_value);
    transparent_crc(g_546.f2, "g_546.f2", print_hash_value);
    transparent_crc(g_556, "g_556", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
