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
   signed f1 : 7;
   const unsigned f2 : 1;
   unsigned f3 : 1;
   signed f4 : 4;
};


static unsigned g_3 = 6UL;
static int g_59 = 0xDF9020C5L;
static int *g_58 = &g_59;
static int g_111 = (-1L);
static int g_167 = 0L;
static struct S0 g_170 = {0x031CAA5DL,3,0,0,-2};
static struct S0 g_175 = {1UL,10,0,0,-0};
static struct S0 *g_174 = &g_175;
static int **g_266 = (void*)0;
static const int *g_347 = (void*)0;
static int *g_373 = &g_167;
static struct S0 ***g_432 = (void*)0;
static struct S0 g_464 = {18446744073709551615UL,6,0,0,-2};
static unsigned char g_502 = 0x2EL;
static unsigned g_565 = 1UL;
static int g_596 = 0xB911EFF0L;
static short g_703 = 0x63F1L;
static int g_781 = 0L;
static unsigned char g_810 = 1UL;
static unsigned g_822 = 0UL;
static const long long g_857 = 0x82980CACDEABCDF4LL;
static unsigned long long g_875 = 18446744073709551613UL;
static short g_911 = 0xCE65L;
static unsigned short g_923 = 1UL;
static const int *g_1173 = &g_167;
static unsigned g_1199 = 0xCF98D4EEL;
static int g_1217 = 0xFD121A81L;
static short g_1218 = (-1L);
static const struct S0 *g_1344 = &g_464;
static const struct S0 **g_1343 = &g_1344;
static int g_1353 = 0x3E861D67L;
static int *g_1386 = &g_1353;
static unsigned short g_1508 = 0x89D1L;
static long long g_1561 = (-9L);



static unsigned func_1(void);
static short func_9(unsigned short p_10, int p_11);
static unsigned long long func_14(unsigned short p_15);
static int func_17(int p_18, unsigned p_19, long long p_20, unsigned p_21, short p_22);
static unsigned short func_23(unsigned short p_24, unsigned char p_25, short p_26, char p_27);
static unsigned short func_28(const unsigned p_29, unsigned p_30, char p_31, unsigned long long p_32, unsigned p_33);
static unsigned func_39(unsigned p_40, const unsigned p_41, struct S0 p_42);
static const int * func_49(long long p_50, const struct S0 p_51, int ** p_52, char p_53);
static struct S0 func_55(int * p_56, const unsigned p_57);
static unsigned short func_62(int * p_63, long long p_64, int ** p_65, short p_66, const int * p_67);
static unsigned func_1(void)
{
    const int l_2 = 0L;
    const unsigned long long l_4 = 18446744073709551606UL;
    unsigned short l_16 = 0x5411L;
    (*g_1386) = ((!(((l_2 >= (g_3 , (l_4 == (255UL <= ((safe_add_func_int32_t_s_s((-3L), (((safe_mod_func_int16_t_s_s(func_9(((g_3 , (((((+(((safe_unary_minus_func_int64_t_s((safe_unary_minus_func_uint64_t_u(func_14(l_16))))) && (l_16 , l_2)) | g_1353)) , 1UL) , (-1L)) & g_1218) > g_596)) & g_175.f0), g_703), (-1L))) , l_16) | g_502))) & l_16))))) , g_875) < g_175.f2)) >= g_1218);

    ;
    ;


    ;
    return g_167;
}







static short func_9(unsigned short p_10, int p_11)
{
    const unsigned char l_1360 = 0UL;
    int ***l_1368 = &g_266;
    struct S0 l_1371 = {0x869B066BL,-6,0,0,-2};
    char l_1384 = 0L;
    struct S0 **l_1442 = &g_174;
    const int *l_1483 = &g_59;
    int *l_1501 = &g_111;
    int *l_1518 = (void*)0;
    unsigned char l_1597 = 0x0AL;
    const unsigned l_1608 = 4294967295UL;
    long long l_1617 = 0x09092451D097ED17LL;
    for (g_464.f0 = 0; (g_464.f0 < 14); ++g_464.f0)
    {
        unsigned l_1367 = 4294967289UL;
        struct S0 l_1372 = {0x34446C52L,-6,0,0,-1};
        int *l_1377 = (void*)0;
        struct S0 ** const l_1382 = &g_174;
        char l_1401 = 0xA1L;
        unsigned long long l_1409 = 0xE22048350FB28E2CLL;
        int *l_1421 = &g_111;
        int *l_1435 = &g_167;
        unsigned l_1438 = 0xA8F28A8AL;
        unsigned l_1439 = 0x8BA3B70EL;
        int l_1469 = 0x939CD3A7L;
        unsigned l_1618 = 18446744073709551612UL;
    }
    return p_11;
}







static unsigned long long func_14(unsigned short p_15)
{
    struct S0 l_43 = {18446744073709551613UL,-10,0,0,-3};
    const struct S0 *l_460 = &l_43;
    const struct S0 **l_459 = &l_460;
    const struct S0 ***l_458 = &l_459;
    long long l_461 = 0x3FC8E0ECB7D06C7DLL;
    int l_1156 = 0x05B5C08BL;
    const int *l_1163 = (void*)0;
    short l_1164 = 0x6177L;
    int **l_1182 = &g_373;
    long long l_1201 = (-1L);
    unsigned l_1219 = 4294967294UL;
    if (func_17((((-1L) == func_23(func_28((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int64_t_s_s((g_3 <= ((safe_unary_minus_func_uint32_t_u(func_39(p_15, p_15, l_43))) ^ ((l_458 == ((((func_39((((*l_458) != (*l_458)) && l_43.f4), l_43.f0, (***l_458)) <= 0xA0CFL) && l_43.f2) | p_15) , g_432)) , l_461))), 0x34155D1B4A8BBC1ELL)) , 0UL), p_15)), g_167, p_15, l_43.f2, l_43.f1), l_43.f2, p_15, p_15)) != p_15), g_175.f0, g_822, p_15, p_15))
    {
        const short l_1149 = (-2L);
        struct S0 **l_1150 = &g_174;
        int *l_1155 = &g_167;
        int l_1157 = 1L;
        short l_1158 = 0xC2BAL;
        int *l_1162 = &l_1157;
        unsigned long long l_1184 = 0UL;
        if ((((safe_rshift_func_uint8_t_u_u(255UL, 4)) || (((0x7034L < (((*l_1155) ^ l_1157) & 65527UL)) == 0xE1L) <= 3L)) ^ l_1158))
        {
            int *l_1161 = &g_59;
            struct S0 **l_1192 = &g_174;
            for (g_810 = (-9); (g_810 < 35); g_810 = safe_add_func_int32_t_s_s(g_810, 4))
            {
                short l_1167 = 2L;
                int **l_1170 = &l_1162;
                const struct S0 l_1178 = {18446744073709551615UL,-0,0,0,-3};
                (*l_1155) = (*l_1162);
                (*l_1170) = l_1161;

                ;
                for (l_1164 = 0; (l_1164 != 25); l_1164 = safe_add_func_uint8_t_u_u(l_1164, 9))
                {
                    const int **l_1174 = &l_1163;
                    int **l_1179 = &l_1162;
                    long long l_1183 = 0L;
                    (*l_1174) = g_1173;

                    ;
                    for (p_15 = 0; (p_15 < 17); p_15 = safe_add_func_uint16_t_u_u(p_15, 4))
                    {
                        int *l_1177 = &g_111;
                        (**l_1170) = 6L;
                        (*l_1170) = (*l_1170);
                    }
                    (*l_1161) = (l_1184 >= 0x107D608F673653E6LL);
                }
                (*l_1170) = ((((((safe_unary_minus_func_int32_t_s((safe_mod_func_uint32_t_u_u((g_911 | (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((l_1192 == l_1150) >= (*l_1162)), g_170.f3)), 0))), (*g_1173))))) || (-1L)) == (safe_rshift_func_uint16_t_u_u(g_781, 5))) < (safe_sub_func_int16_t_s_s((!(safe_lshift_func_uint8_t_u_s(((g_175.f2 , 65526UL) >= (**l_1170)), p_15))), (-3L)))) | g_464.f1) , (*l_1170));
            }

            ;
            ;
        }
        else
        {
            short l_1200 = (-9L);
            const int *l_1202 = &g_167;
            const int **l_1203 = &g_1173;
            (*l_1203) = l_1202;
            (*l_1155) = (*l_1162);
        }

        ;
        ;
        (*l_1182) = (*l_1182);
        (*l_1155) = (p_15 , ((*g_1173) & (((**l_458) != (**l_458)) || (safe_add_func_int64_t_s_s(((p_15 , p_15) > g_111), g_175.f4)))));
    }
    else
    {
        int *l_1206 = (void*)0;
        struct S0 l_1216 = {0x0F9BB55BL,3,0,0,-1};
        unsigned l_1228 = 0xD6AEBA0BL;
        char l_1231 = (-5L);
        struct S0 **l_1253 = &g_174;
        struct S0 ***l_1252 = &l_1253;
        (*l_1182) = l_1206;

        ;
        for (l_43.f0 = 0; (l_43.f0 == 15); ++l_43.f0)
        {
            struct S0 **l_1210 = &g_174;
            struct S0 ***l_1209 = &l_1210;
            int l_1211 = 0L;
            int **l_1220 = &l_1206;
            unsigned char l_1233 = 0UL;
            char l_1240 = 1L;
            int l_1242 = (-9L);
            unsigned l_1251 = 1UL;
        }
    }

    ;
    ;


    ;
    ;
    if ((safe_sub_func_uint8_t_u_u(((g_1217 == (&l_459 == (p_15 , (p_15 , g_432)))) <= (g_703 != (0x7508CC7DL <= (((g_857 , 0xE4B0L) < g_703) >= 0x412EL)))), 7UL)))
    {
        for (l_1156 = (-16); (l_1156 <= 11); l_1156 = safe_add_func_uint8_t_u_u(l_1156, 4))
        {
            int l_1273 = 0xE2E40492L;
            (*l_1182) = (*l_1182);
            (*l_1182) = &g_167;

            ;
        }
    }
    else
    {
        const char l_1274 = 0L;
        int *l_1275 = &g_59;
        short l_1278 = 0x1EA2L;
        struct S0 * const l_1283 = (void*)0;
        int **l_1309 = &l_1275;
        struct S0 ** const l_1329 = (void*)0;
        struct S0 ** const *l_1328 = &l_1329;
        char l_1336 = (-10L);
        unsigned short l_1339 = 7UL;
        int *l_1352 = (void*)0;
        (*l_1275) = (!(l_1274 < (0L > ((void*)0 != (*l_458)))));
        (*l_1182) = &g_59;

        ;
        if ((g_464.f3 | (safe_rshift_func_int16_t_s_u((g_857 , l_1278), (safe_add_func_int16_t_s_s(p_15, (g_464.f4 , ((g_810 || (**l_1182)) <= (safe_add_func_int8_t_s_s((g_781 >= g_175.f3), p_15))))))))))
        {
            unsigned long long l_1284 = 5UL;
            int **l_1308 = &l_1275;
            struct S0 l_1327 = {1UL,10,0,0,2};
            (*l_1182) = l_1275;
            (*l_1275) = p_15;
            (**l_1182) = (*l_1275);
            for (g_464.f0 = 21; (g_464.f0 != 35); g_464.f0 = safe_add_func_uint32_t_u_u(g_464.f0, 3))
            {
                short l_1301 = (-1L);
                int l_1340 = (-1L);
            }
        }
        else
        {
            const struct S0 l_1345 = {18446744073709551615UL,2,0,0,-2};
            l_1352 = (*l_1182);

            ;
            (*l_1182) = (*l_1309);
        }

        ;
    }
    (*l_1182) = (void*)0;

    ;
    return g_464.f2;
}







static int func_17(int p_18, unsigned p_19, long long p_20, unsigned p_21, short p_22)
{
    int *l_1114 = &g_167;
    struct S0 l_1125 = {9UL,-1,0,0,1};
    struct S0 **l_1138 = &g_174;
    g_266 = (l_1125 , &l_1114);

    ;
    (**g_266) = (safe_add_func_int8_t_s_s(((0x23749487L > (p_22 ^ ((safe_rshift_func_uint16_t_u_u(((void*)0 != &l_1125), (safe_lshift_func_int8_t_s_s((-1L), (*l_1114))))) & 65531UL))) || g_3), (*l_1114)));
    (*l_1114) = ((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((0x404DEFD5C48CC7EBLL & (((((safe_sub_func_int64_t_s_s((p_18 >= (((l_1138 == ((safe_add_func_int64_t_s_s(((*g_266) == (g_170.f4 , (*g_266))), (safe_add_func_uint16_t_u_u(p_19, g_175.f1)))) , (void*)0)) & 0xDCB83143C74C7AEELL) != (*l_1114))), (*l_1114))) | g_911) , (*l_1114)) , &l_1114) != (void*)0)), g_59)) | (*l_1114)), (*l_1114))) , (*l_1114));
    (*g_266) = l_1114;
    return p_18;


}







static unsigned short func_23(unsigned short p_24, unsigned char p_25, short p_26, char p_27)
{
    int *l_726 = (void*)0;
    struct S0 l_727 = {0xB73911C3L,5,0,0,1};
    int **l_738 = &g_373;
    char l_761 = 2L;
    struct S0 **l_794 = &g_174;
    struct S0 ***l_793 = &l_794;
    int *l_833 = &g_111;
    unsigned short l_902 = 0x15EEL;
    struct S0 l_912 = {0x2DD3AAC0L,5,0,0,-0};
    int l_953 = 5L;
    unsigned long long l_972 = 0xCD4C60E4F6423E43LL;
    const struct S0 l_999 = {8UL,10,0,0,-1};
    int *l_1007 = &g_167;
    unsigned l_1044 = 0x963B769BL;
    if (((((0xA9EFL < ((g_170.f0 >= ((safe_sub_func_int8_t_s_s(((void*)0 == l_726), g_175.f3)) != (func_39(g_175.f3, p_27, (*g_174)) , 0x41C638C37C2DFFBCLL))) <= 0xABL)) , l_727) , 0L) || g_175.f3))
    {
        struct S0 **l_736 = &g_174;
        int l_737 = 0L;
        unsigned l_750 = 1UL;
        int **l_751 = (void*)0;
        int *l_752 = &g_59;
        (**l_738) = (p_25 || (g_464.f4 > 0UL));
        (*l_738) = l_752;

        ;
        (*g_373) = l_761;
    }
    else
    {
        int l_769 = 0x5BA64FC6L;
        const int l_772 = 0x3040C70FL;
        struct S0 l_780 = {0xD2EBF926L,-1,0,0,1};
        int ** const *l_811 = &l_738;
        int **l_812 = &l_726;
        unsigned l_876 = 1UL;
        unsigned long long l_901 = 0x6F3A842F7BAFA885LL;
        struct S0 ***l_907 = &l_794;
        char l_926 = 0xFBL;
        char l_945 = (-2L);
        const int *l_952 = &g_59;
        short l_954 = (-7L);
        for (l_727.f0 = 0; (l_727.f0 < 8); l_727.f0 = safe_add_func_int8_t_s_s(l_727.f0, 1))
        {
            unsigned l_764 = 0x00A3F9FAL;
            unsigned short l_779 = 1UL;
            int *l_790 = &g_111;
            struct S0 l_795 = {0x7D599FCEL,4,0,0,-3};
            unsigned l_831 = 4294967295UL;
            int l_835 = 0xEFEAA6A4L;
            long long l_843 = 7L;
            int l_858 = 0xE298F7F4L;
            int **l_861 = &l_726;
            unsigned long long l_885 = 18446744073709551613UL;
            const unsigned short l_941 = 65531UL;
        }
    }
    if (p_24)
    {
        int *l_978 = &g_167;
        const struct S0 l_1003 = {0UL,8,0,0,-3};
        struct S0 **l_1004 = &g_174;
        int **l_1012 = &l_978;
        int **l_1014 = &g_373;
        for (l_761 = 0; (l_761 >= (-6)); --l_761)
        {
            int **l_987 = &l_726;
            struct S0 *l_1006 = &g_170;
            struct S0 l_1013 = {0x3B83DE21L,6,0,0,-2};
            for (p_27 = 0; (p_27 < 20); p_27 = safe_add_func_uint64_t_u_u(p_27, 6))
            {
                struct S0 *l_977 = &g_464;
                const int l_989 = 0xE4394523L;
                int ***l_992 = &l_987;
                int l_998 = 0xF37B641CL;
                if (p_24)
                {
                    int **l_979 = &g_58;
                    struct S0 l_988 = {0UL,3,0,0,-0};
                    struct S0 ***l_997 = &l_794;
                    if (p_24)
                    {
                        struct S0 l_990 = {18446744073709551615UL,-6,0,0,0};
                        (*l_794) = l_977;

                        ;
                        (*l_738) = l_978;

                        ;
                        (*l_738) = (*l_987);

                        ;
                    }
                    else
                    {
                        if (p_26)
                            break;
                    }
                    (*l_979) = (*l_987);

                    ;
                    if (l_989)
                    {
                        (*l_987) = (*l_987);
                        if (p_27)
                            continue;
                        if (p_26)
                            break;
                    }
                    else
                    {
                        const unsigned short l_1000 = 0UL;
                        (**l_992) = &g_111;

                        ;
                        (*l_726) = l_1000;
                    }

                    ;
                    return g_464.f4;
                }
                else
                {
                    struct S0 **l_1005 = &l_977;
                    (*l_738) = l_978;

                    ;
                    if ((*l_833))
                        continue;
                    for (l_998 = 27; (l_998 < (-5)); --l_998)
                    {
                        if (p_24)
                            break;
                        (*l_987) = l_1007;

                        ;
                        (*l_978) = (safe_rshift_func_uint16_t_u_s(g_923, 5));
                        (*l_793) = l_1004;
                    }

                    ;
                }

                ;
                ;
                return p_25;
            }
            (*l_833) = p_27;
            l_1013.f4 = func_39((safe_mod_func_uint8_t_u_u(p_24, (*l_978))), (l_1012 != &g_58), l_1013);
        }

        ;
        (*l_833) = (p_24 | 0x77L);
        return g_857;
    }
    else
    {
        int l_1045 = 1L;
        struct S0 l_1053 = {0UL,-7,0,0,-0};
        int **l_1098 = &l_726;
        struct S0 **l_1113 = (void*)0;
        (*l_794) = (*l_794);
        (*l_833) = p_25;
        for (l_902 = 0; (l_902 == 21); ++l_902)
        {
            unsigned long long l_1026 = 0xA550A776A8A80EF7LL;
            struct S0 l_1041 = {18446744073709551615UL,8,0,0,-0};
            int *l_1048 = &l_1045;
            const int *l_1073 = &l_1045;
            unsigned l_1085 = 1UL;
            unsigned char l_1088 = 0xCCL;
            unsigned long long l_1112 = 0x83CFF4485386B800LL;
        }
        (*l_1007) = (func_39(g_464.f0, (l_1113 == (void*)0), (***l_793)) , (*g_373));
    }
    return g_170.f0;
}







static unsigned short func_28(const unsigned p_29, unsigned p_30, char p_31, unsigned long long p_32, unsigned p_33)
{
    struct S0 *l_462 = &g_175;
    struct S0 *l_463 = &g_464;
    int *l_478 = &g_167;
    struct S0 l_488 = {0x45170DFDL,-9,0,0,3};
    unsigned l_503 = 0xD3F03F91L;
    unsigned l_533 = 0UL;
    const char l_611 = 1L;
    int *l_613 = (void*)0;
    unsigned long long l_631 = 18446744073709551615UL;
    int **l_636 = (void*)0;
    unsigned short l_639 = 65535UL;
    unsigned l_646 = 18446744073709551611UL;
    struct S0 **l_679 = &g_174;
    struct S0 ***l_678 = &l_679;
    int l_704 = 6L;
    long long l_711 = 0L;
    int *l_712 = &l_704;
    int *l_715 = &l_704;
    const int *l_718 = &g_167;
    const int **l_719 = (void*)0;
    const int **l_720 = &l_718;
    const long long l_723 = 0xD16645A72C3D097FLL;
    if ((!0x0F7532DFL))
    {
        struct S0 **l_465 = &l_463;
        struct S0 ***l_466 = &l_465;
        l_463 = l_462;

        ;
        (*l_466) = l_465;
    }
    else
    {
        unsigned l_477 = 4294967295UL;
        int *l_487 = &g_167;
        struct S0 l_489 = {0xBE6D4DE3L,3,0,0,-1};
        unsigned long long l_501 = 0xDEA454E5B90E0EAALL;
        int *l_525 = &g_167;
        const char l_529 = 0xEBL;
        const int **l_530 = &g_347;
        if (((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((func_62((func_39((p_33 == (((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_59, (safe_add_func_uint64_t_u_u(func_39(l_477, func_62(l_478, ((safe_mod_func_int64_t_s_s((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((((func_62(&g_167, (safe_add_func_uint16_t_u_u(((p_31 > ((g_111 , (*l_478)) , func_62(l_487, g_464.f0, &l_487, p_33, &g_59))) ^ 1L), (*l_487))), &l_487, (*l_487), l_478) && 6UL) , g_175.f3) >= 0xA045F00B172036FALL), (*l_487))), (*l_487))), g_175.f4)) , g_170.f2), &g_373, g_175.f1, l_487), l_488), (*l_487))))), (-9L))) || g_175.f3) , g_464.f2)), p_31, l_489) , l_478), p_33, &g_373, (*l_487), &g_59) , p_29), (*l_478))), g_464.f3)) != g_464.f2))
        {
            int *l_490 = (void*)0;
            struct S0 l_504 = {0xD4FC9BECL,9,0,0,1};
            char l_526 = 0xCCL;
            (*l_478) = (((*l_487) , l_490) == &g_167);
            if ((safe_sub_func_int8_t_s_s((((g_111 , (func_39(p_32, ((((safe_lshift_func_uint16_t_u_u(g_111, func_62(l_490, (((p_33 ^ (*l_478)) & p_33) , ((((((safe_rshift_func_uint16_t_u_s((*l_478), 1)) ^ (safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((((0x9F0CE54CL >= (*g_373)) == l_501) && 0x1093E394B79F2A6CLL), 0x0E7AED57E20B7B73LL)), p_32))) , g_502) && l_503) , (*l_487)) ^ 4294967295UL)), &g_373, g_175.f1, l_487))) > p_30) || (*l_487)) && (*l_487)), l_504) && g_175.f1)) | 0xED2DL) >= 18446744073709551615UL), 0xC2L)))
            {
                const struct S0 l_505 = {0x85C962FDL,-2,0,0,3};
                const int **l_506 = &g_347;
                (*l_506) = func_49(g_175.f3, l_505, (g_464.f4 , &l_478), (*l_478));

                ;
                ;
                (*l_506) = func_49((*l_487), l_504, &l_490, ((l_505 , (void*)0) != g_432));

                ;
                ;
                (*g_373) = (*g_58);
            }
            else
            {
                struct S0 l_511 = {0xEB33C094L,-0,0,0,-1};
                const int *l_513 = &g_167;
                for (l_489.f0 = (-5); (l_489.f0 <= 29); l_489.f0++)
                {
                    unsigned l_512 = 18446744073709551612UL;
                    int *l_515 = &g_111;
                    const int **l_527 = &l_513;
                    (*l_487) = 1L;
                    if (((~((0x36556774L | (safe_mod_func_int16_t_s_s(g_502, p_29))) , (func_62((l_511 , &g_111), p_30, &g_58, l_512, l_513) , (*l_478)))) == g_175.f2))
                    {
                        int *l_514 = &g_59;
                        l_490 = l_514;

                        ;
                        l_515 = l_515;
                    }
                    else
                    {
                        struct S0 l_524 = {0x1A4D6E9CL,9,0,0,-2};
                        l_490 = ((safe_mod_func_int32_t_s_s((*g_58), (0L | func_39(g_464.f3, (safe_add_func_int32_t_s_s(((safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(((!(*l_515)) < (*l_515)), func_39((((p_33 , p_30) <= (l_515 == (void*)0)) || 0x50C3EE66L), p_29, (*g_174)))), (*l_478))) , (*g_58)), g_170.f1)), l_524)))) , l_478);

                        ;
                        return (*l_490);
                    }

                    ;
                    (*l_515) = ((*l_515) <= (*l_515));
                    (*l_527) = ((*l_478) , func_49(g_170.f0, l_511, &g_58, (((func_39(g_175.f0, (((void*)0 == l_525) , ((-10L) & (((*l_490) , l_526) | g_59))), l_489) , &l_488) != (void*)0) | g_464.f3)));

                    ;
                }

                ;
                ;
                return g_59;
            }

            ;
            ;
            ;
            return p_30;
        }
        else
        {
            const int **l_528 = &g_347;
            (*l_528) = (void*)0;
        }
        (*l_530) = func_49(p_31, func_55(l_478, (*l_525)), &g_58, ((+(((void*)0 != l_478) >= (func_39(g_175.f2, func_39(((g_464.f0 , p_31) || 254UL), l_529, l_489), l_489) , g_464.f4))) != g_464.f4));

        ;
        if (l_503)
            goto lbl_706;
    }

    ;
    ;
    for (l_488.f0 = (-29); (l_488.f0 >= 47); l_488.f0 = safe_add_func_uint16_t_u_u(l_488.f0, 1))
    {
        struct S0 *l_534 = &g_464;
        unsigned l_538 = 0x43BEA053L;
        const struct S0 *l_547 = &g_170;
        const struct S0 **l_546 = &l_547;
        const struct S0 ***l_545 = &l_546;
        int **l_553 = &g_373;
        int **l_583 = (void*)0;
        const unsigned long long l_612 = 0UL;
        if ((((l_533 < ((void*)0 != &l_488)) & g_170.f2) != 0x896AL))
        {
            int l_535 = (-5L);
            const struct S0 l_539 = {18446744073709551610UL,-5,0,0,1};
            int l_540 = (-1L);
            const int **l_541 = &g_347;
            int ***l_542 = (void*)0;
            int ***l_543 = &g_266;
            (*l_541) = func_49(((g_464.f1 < ((((((((void*)0 != l_534) , func_39(l_535, p_31, (*g_174))) < ((((safe_rshift_func_uint16_t_u_u(p_30, 13)) , l_535) != 65535UL) && (*l_478))) || 0L) < g_464.f3) || 0xDE17L) & l_538)) , 0xCFD87D1DA16024F0LL), l_539, &g_58, l_540);

            ;
            (*l_543) = &l_478;

            ;
        }
        else
        {
            long long l_544 = 0L;
            struct S0 **l_549 = &l_463;
            struct S0 ***l_548 = &l_549;
            int *l_552 = &g_59;
            const int **l_554 = &g_347;
            (*l_478) = (+6L);
            (*l_554) = func_49(p_33, func_55(((((g_175.f3 , (((p_31 , g_464.f3) <= l_544) && 18446744073709551615UL)) >= ((((l_545 != l_548) == (safe_rshift_func_int16_t_s_s(p_31, 3))) != g_175.f0) , 0xEF1A871BL)) != g_464.f3) , l_552), g_464.f1), l_553, p_29);

            ;
            ;
            return p_32;


        }

        ;
        ;
        (*g_58) = p_31;
    }

    ;
    if (((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(((((safe_mod_func_uint32_t_u_u(func_62(l_613, g_175.f3, &l_613, ((*l_478) > (!g_502)), l_478), (*l_478))) >= 3L) & 254UL) > g_170.f1), p_29)), 5)) && g_565))
    {
        int l_624 = (-7L);
        int **l_634 = &g_58;
        const struct S0 l_635 = {0x89C62949L,-7,0,0,-2};
        struct S0 l_644 = {0UL,9,0,0,-0};
        int l_645 = 5L;
        char l_647 = (-2L);
        const long long l_652 = 0x389DF60560103551LL;
        struct S0 **l_653 = &l_463;
        struct S0 ***l_675 = &l_653;
        int **l_705 = (void*)0;
        (*l_634) = l_613;

        ;
        if ((((safe_lshift_func_uint8_t_u_s((p_32 | func_39((((func_39(l_639, p_32, l_644) && l_645) >= l_646) == g_502), g_170.f0, (*g_174))), 0)) >= l_647) | p_33))
        {
            int *l_659 = &g_59;
            struct S0 **l_664 = &g_174;
            if ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(0x6D137DAD2D75D51DLL, p_30)), ((l_652 , l_653) == &g_174))))
            {
                (*l_634) = (*l_634);
            }
            else
            {
                int *l_654 = &g_167;
                struct S0 *l_666 = &g_170;
                (*l_634) = l_654;

                ;
                for (l_631 = 0; (l_631 == 35); l_631++)
                {
                    int l_665 = (-1L);
                    struct S0 ***l_668 = &l_664;
                }
            }

            ;
            (*g_373) = (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(0xFF50843EL, (p_31 ^ (l_675 == (void*)0)))) && (safe_sub_func_int32_t_s_s((*l_659), (~(((g_464.f3 >= (l_678 != (void*)0)) | p_32) , g_170.f0))))), 3)) , g_170.f2), g_596));
        }
        else
        {
            unsigned l_680 = 0UL;
            const int *l_685 = &l_645;
            const int **l_686 = &g_347;
            (*l_634) = (*l_634);
            (*l_686) = l_685;

            ;
            return g_111;



        }

        ;
        if ((safe_sub_func_int32_t_s_s(p_30, l_644.f0)))
        {
            int *l_691 = &g_111;
            const struct S0 l_702 = {1UL,-10,0,0,-0};
            for (l_639 = 4; (l_639 >= 5); l_639++)
            {
                char l_692 = 0xB3L;
                struct S0 l_701 = {18446744073709551615UL,10,0,0,1};
                l_691 = (g_170.f1 , (void*)0);

                ;
                (*l_478) = (func_39(g_502, (l_692 , (4294967293UL ^ func_39(g_175.f1, (safe_rshift_func_uint16_t_u_s((!((safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(g_170.f1, 1)) == p_29), ((p_32 ^ ((((safe_rshift_func_uint16_t_u_s(0x75B5L, 4)) <= p_32) , l_692) , p_29)) , g_502))) >= 0xE0FDL)), g_170.f1)), (**l_653)))), l_701) != 18446744073709551614UL);
            }

            ;
            (*l_634) = l_691;

            ;
            (*l_478) = 0xAFB3A784L;
        }
        else
        {
            (*l_679) = (*l_653);

            ;
        }

        ;
        ;
        (*l_634) = (*l_634);
    }
    else
    {
lbl_706:
        (*l_679) = (**l_678);
        (*l_715) = ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(l_711, (g_167 , (func_62(l_712, (safe_sub_func_int16_t_s_s(func_62(l_715, p_30, &l_613, (+g_464.f3), func_49((func_39(p_33, ((((safe_mod_func_uint8_t_u_u((g_175.f0 , 246UL), p_32)) == 6L) , g_170.f4) >= 246UL), (*l_463)) ^ g_175.f4), (*g_174), &l_478, g_170.f2)), p_31)), &l_712, g_167, l_718) , 0x0279L)))), 0x05L)) <= p_32);

        ;
        (*l_720) = func_49((*l_718), (**l_679), &l_715, g_175.f4);

        ;
        ;
    }

    ;
    ;
    ;
    ;
    ;
    (*l_715) = ((g_175.f2 && (safe_mod_func_int32_t_s_s(((*l_715) , p_32), (((*l_712) , (func_39((*l_715), l_723, (*l_463)) , p_32)) | 0x3CL)))) , (*l_715));
    return p_32;


}







static unsigned func_39(unsigned p_40, const unsigned p_41, struct S0 p_42)
{
    int *l_44 = (void*)0;
    int **l_45 = (void*)0;
    int **l_46 = &l_44;
    struct S0 **l_207 = (void*)0;
    short l_262 = (-5L);
    unsigned short l_303 = 0UL;
    int l_336 = (-10L);
    const struct S0 l_364 = {0x656E412DL,-2,0,0,1};
    int *l_451 = (void*)0;
    (*l_46) = l_44;
    return p_42.f0;
}







static const int * func_49(long long p_50, const struct S0 p_51, int ** p_52, char p_53)
{
    int l_105 = 0x5E682746L;
    const unsigned l_114 = 0x6EA65061L;
    const int *l_116 = &g_59;
    int **l_145 = &g_58;
    int ***l_149 = &l_145;
    for (p_50 = 0; (p_50 == (-12)); --p_50)
    {
        int *l_104 = (void*)0;
        for (g_59 = 0; (g_59 == (-7)); g_59 = safe_sub_func_int64_t_s_s(g_59, 2))
        {
            unsigned char l_101 = 0xA3L;
            int *l_110 = &g_111;
            (*l_110) = ((safe_rshift_func_uint16_t_u_s(((safe_add_func_int64_t_s_s(l_101, (safe_add_func_uint64_t_u_u((0xB3897E00L ^ (!(l_104 == (*p_52)))), l_105)))) & (safe_add_func_uint8_t_u_u(p_51.f0, g_3))), 3)) >= (safe_rshift_func_int16_t_s_s((-1L), (p_51.f0 < g_59))));
        }
        (*p_52) = (*p_52);
        for (p_53 = (-1); (p_53 == (-15)); --p_53)
        {
            long long l_115 = 0xCEB8AB48F0B38F1CLL;
            (*g_58) = l_114;
            (*g_58) = l_115;
            (*p_52) = &g_59;


        }
    }
    return (*p_52);


}







static struct S0 func_55(int * p_56, const unsigned p_57)
{
    int **l_68 = (void*)0;
    const int *l_71 = &g_59;
    int **l_87 = &g_58;
    struct S0 l_88 = {0x4E8D7FF0L,-10,0,0,-2};
    (*p_56) = (safe_mod_func_int16_t_s_s(g_59, func_62(&g_59, p_57, l_68, (g_59 ^ (g_59 > (p_57 == 0UL))), l_71)));
    (*g_58) = (*p_56);
    (*g_58) = (safe_rshift_func_int8_t_s_s((func_62(&g_59, ((((safe_rshift_func_int8_t_s_u(((p_57 , &g_59) == ((safe_mod_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(0x13DB237EL, (((safe_lshift_func_int16_t_s_s(g_59, (g_3 , (safe_lshift_func_int8_t_s_u(p_57, (*l_71)))))) ^ g_59) & p_57))) , p_57), 0x0EEBEB99L)) , p_56)), g_59)) >= 0UL) , g_3) | (*g_58)), l_87, g_3, (*l_87)) & g_3), 7));
    return l_88;
}







static unsigned short func_62(int * p_63, long long p_64, int ** p_65, short p_66, const int * p_67)
{
    unsigned l_72 = 4294967295UL;
    l_72 = (*g_58);
    for (p_64 = (-8); (p_64 > (-15)); p_64--)
    {
        return p_64;
    }
    return p_66;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_170.f0, "g_170.f0", print_hash_value);
    transparent_crc(g_170.f1, "g_170.f1", print_hash_value);
    transparent_crc(g_170.f2, "g_170.f2", print_hash_value);
    transparent_crc(g_170.f3, "g_170.f3", print_hash_value);
    transparent_crc(g_170.f4, "g_170.f4", print_hash_value);
    transparent_crc(g_175.f0, "g_175.f0", print_hash_value);
    transparent_crc(g_175.f1, "g_175.f1", print_hash_value);
    transparent_crc(g_175.f2, "g_175.f2", print_hash_value);
    transparent_crc(g_175.f3, "g_175.f3", print_hash_value);
    transparent_crc(g_175.f4, "g_175.f4", print_hash_value);
    transparent_crc(g_464.f0, "g_464.f0", print_hash_value);
    transparent_crc(g_464.f1, "g_464.f1", print_hash_value);
    transparent_crc(g_464.f2, "g_464.f2", print_hash_value);
    transparent_crc(g_464.f3, "g_464.f3", print_hash_value);
    transparent_crc(g_464.f4, "g_464.f4", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    transparent_crc(g_781, "g_781", print_hash_value);
    transparent_crc(g_810, "g_810", print_hash_value);
    transparent_crc(g_822, "g_822", print_hash_value);
    transparent_crc(g_857, "g_857", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_911, "g_911", print_hash_value);
    transparent_crc(g_923, "g_923", print_hash_value);
    transparent_crc(g_1199, "g_1199", print_hash_value);
    transparent_crc(g_1217, "g_1217", print_hash_value);
    transparent_crc(g_1218, "g_1218", print_hash_value);
    transparent_crc(g_1353, "g_1353", print_hash_value);
    transparent_crc(g_1508, "g_1508", print_hash_value);
    transparent_crc(g_1561, "g_1561", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
