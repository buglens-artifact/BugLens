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
   unsigned long long f1;
   const unsigned char f2;
   unsigned f3;
   long long f4;
   unsigned short f5;
   long long f6;
   unsigned f7;
};

struct S1 {
   unsigned char f0;
   int f1;
   int f2;
   unsigned long long f3;
   unsigned short f4;
   int f5;
   const int f6;
   unsigned char f7;
   long long f8;
   const unsigned long long f9;
};

struct S2 {
   char f0;
   unsigned long long f1;
   char f2;
   long long f3;
   unsigned short f4;
   const long long f5;
};


static unsigned char g_4 = 0xF3L;
static unsigned g_29 = 0UL;
static struct S1 g_39 = {1UL,0L,0xF2CFEAA3L,18446744073709551611UL,0x1BBAL,1L,0xE7339AA8L,0xD1L,2L,18446744073709551606UL};
static int *g_50 = &g_39.f5;
static int g_76 = 1L;
static struct S0 g_82 = {0x62AF0730L,0xA2875F205D52AEB3LL,1UL,4294967292UL,0xF853116D361F4973LL,0x2D2AL,0xC76C9F35CD65FABBLL,0UL};
static int g_83 = 1L;
static int g_113 = 0x8C0895B4L;
static struct S0 *g_157 = &g_82;
static struct S0 **g_156 = &g_157;
static struct S1 *g_199 = &g_39;
static struct S1 **g_198 = &g_199;
static int *g_213 = &g_113;
static struct S2 g_286 = {0L,0x3D10254E0B6B5915LL,0L,-1L,0x2E45L,1L};
static const int *g_357 = &g_76;
static int *g_371 = &g_39.f5;
static long long g_441 = 8L;
static int **g_533 = &g_371;
static int *** const g_532 = &g_533;
static struct S2 *g_601 = &g_286;
static const struct S2 g_748 = {0xEBL,0UL,8L,-4L,1UL,0x50ECB6E72E0E86EBLL};
static int g_814 = 0x7C7C3BB8L;
static int g_943 = 1L;
static int *g_987 = (void*)0;
static const int *g_998 = &g_76;
static unsigned g_1011 = 1UL;
static unsigned long long g_1033 = 18446744073709551614UL;
static short g_1113 = 0x0FE7L;
static long long g_1156 = 0xCD1743DDA3CD7143LL;



static unsigned func_1(void);
static unsigned short func_8(struct S1 p_9);
static const unsigned short func_20(struct S0 p_21, struct S2 p_22, unsigned long long p_23);
static struct S2 func_25(unsigned p_26, unsigned char p_27, unsigned p_28);
static int func_33(unsigned p_34, int p_35, struct S1 p_36, unsigned p_37);
static int * func_42(int * p_43);
static int * func_44(int * p_45, short p_46, int p_47, long long p_48, short p_49);
static unsigned char func_59(long long p_60, long long p_61);
static long long func_62(int p_63, long long p_64, const int * p_65, const unsigned long long p_66);
static int func_67(int * p_68, int * p_69, int * p_70, unsigned short p_71);
static unsigned func_1(void)
{
    unsigned char l_7 = 1UL;
    struct S1 l_10 = {4UL,0xB39E2240L,0xDBDAE4F9L,0xBC9B780F885BD52ALL,65530UL,-10L,8L,0xF8L,0x095610A1434A938FLL,0x38F585950CFDFE92LL};
    char l_1155 = 5L;
    g_1156 |= (((safe_sub_func_uint16_t_u_u(0x03D9L, 0x5031L)) && (((!g_4) ^ ((255UL & ((l_7 ^ l_7) >= ((g_4 ^ func_8(l_10)) | l_10.f1))) & g_82.f2)) == g_748.f5)) >= l_1155);

    ;
    ;
    ;
    ;
    ;
    ;
    (*g_213) = (~l_10.f2);
    (*g_50) = l_10.f2;
    return l_10.f0;
}







static unsigned short func_8(struct S1 p_9)
{
    const unsigned char l_15 = 0xA6L;
    struct S0 l_24 = {0xEA1DC7E9L,0UL,248UL,0xCE4A839BL,0x816E149F7FAE0CD5LL,9UL,0xFD1A684085EFBE72LL,0UL};
    unsigned short l_30 = 0x5B29L;
    char l_31 = (-2L);
    int *l_1015 = &g_76;
    unsigned char l_1041 = 255UL;
    int l_1124 = 8L;
    struct S0 ***l_1134 = &g_156;
    int l_1140 = 1L;
    g_1011 ^= (((g_4 != g_4) | (((safe_div_func_int64_t_s_s((safe_add_func_uint64_t_u_u(l_15, (safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(func_20(l_24, func_25(((((4L == g_4) ^ ((g_29 == (l_30 < l_31)) == l_24.f3)) < 0x401FF3C8D209D081LL) <= p_9.f5), g_4, p_9.f0), g_29), l_24.f6)), 0)))), 0xFEB452B146D74187LL)) <= l_24.f5) & 0x414FL)) & p_9.f7);

    ;
    ;
    ;
    ;
    ;
    if ((*g_998))
    {
        int *l_1012 = &g_814;
        int l_1066 = 0x846F3CE6L;
        unsigned char l_1114 = 7UL;
        unsigned long long l_1121 = 18446744073709551615UL;
        if (p_9.f5)
        {
            (*g_533) = l_1012;

            ;
            ;
            l_1012 = func_44(l_1012, p_9.f4, (p_9.f3 | (func_67(func_42(l_1015), l_1015, l_1012, (safe_sub_func_int32_t_s_s((g_82.f2 < (*l_1012)), 0x66F9EAC7L))) < 2L)), g_748.f4, p_9.f9);

            ;
            (*g_533) = (void*)0;
            (*l_1015) &= 8L;
        }
        else
        {
            int l_1024 = 0xAC787FC2L;
            for (l_24.f0 = 15; (l_24.f0 >= (-2)); --l_24.f0)
            {
                unsigned short l_1026 = 0xF631L;
                if ((*g_213))
                {
                    return (*l_1015);
                }
                else
                {
                    unsigned char l_1025 = 8UL;
                    for (g_82.f7 = 0; (g_82.f7 < 7); g_82.f7 = safe_add_func_uint16_t_u_u(g_82.f7, 8))
                    {
                        (*g_50) = (safe_rshift_func_uint16_t_u_u((p_9.f0 || l_1024), 7));
                        (*l_1012) &= (l_1025 > g_82.f3);
                        return p_9.f0;
                    }
                    return l_1026;
                }
            }
            (*g_50) = (0xA947L || 65533UL);
            for (l_24.f4 = 16; (l_24.f4 != (-25)); l_24.f4--)
            {
                int *l_1038 = (void*)0;
                for (g_39.f2 = 0; (g_39.f2 != (-18)); g_39.f2 = safe_sub_func_int64_t_s_s(g_39.f2, 9))
                {
                    unsigned l_1049 = 0xF93774A1L;
                    (*l_1012) = ((((*g_156) != (*g_156)) && g_82.f6) >= (safe_lshift_func_int16_t_s_u(g_1033, (((0L >= (safe_mod_func_int8_t_s_s(g_82.f0, ((safe_add_func_uint16_t_u_u(func_67((**g_532), (*g_533), &l_1024, g_39.f7), 0xF07AL)) & g_39.f2)))) || 0x3374B894L) == p_9.f1))));
                    (*g_533) = (void*)0;
                    for (p_9.f2 = (-12); (p_9.f2 <= 3); p_9.f2 = safe_add_func_int32_t_s_s(p_9.f2, 1))
                    {
                        unsigned long long l_1046 = 0x9D6158D1C4D1A73CLL;
                        (*l_1012) ^= (g_82.f0 ^ ((g_748.f2 <= (3L <= (g_39.f4 <= l_1041))) || (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(l_1046, p_9.f8)), g_39.f4))));
                        if (p_9.f9)
                            break;
                        p_9.f5 &= (l_1046 >= (safe_lshift_func_uint8_t_u_u((g_39.f2 == 3UL), func_62((*l_1012), l_1049, (**g_532), p_9.f1))));
                        (*g_50) ^= 0L;
                    }
                    for (g_83 = (-3); (g_83 <= (-18)); g_83 = safe_sub_func_uint32_t_u_u(g_83, 4))
                    {
                        return g_748.f0;
                    }
                }
            }
        }

        ;
        ;
        ;
        (*g_198) = (void*)0;

        ;
        for (g_82.f6 = 0; (g_82.f6 > (-30)); g_82.f6--)
        {
            int l_1057 = 0x20537053L;
            int l_1125 = 0L;
            for (g_39.f1 = 0; (g_39.f1 < (-28)); --g_39.f1)
            {
                unsigned short l_1056 = 0xFC5CL;
                l_1066 &= ((((((((((g_286.f3 ^ ((*g_213) & ((g_39.f1 | l_1056) ^ (l_1057 == (safe_mod_func_int16_t_s_s(l_1056, (safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((*l_1012), p_9.f8)), 2)), 0xE1L)))))))) && p_9.f9) | (*l_1012)) & g_76) > l_1057) <= 0xDAA0L) & g_76) && p_9.f4) == 9UL) < g_39.f5);
                for (g_39.f7 = 0; (g_39.f7 >= 49); g_39.f7++)
                {
                    short l_1077 = (-3L);
                    struct S2 *l_1094 = &g_286;
                    int *l_1115 = &g_943;
                    (*g_533) = (void*)0;
                    (*l_1015) ^= 0x8774D693L;
                    if ((!(0x2A7FL >= (safe_add_func_int64_t_s_s((l_1057 >= (safe_sub_func_uint16_t_u_u(l_1056, 0L))), p_9.f3)))))
                    {
                        const int l_1087 = 0L;
                        (*l_1015) |= l_1057;
                        (*l_1015) = (safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((l_1077 < l_1077), (p_9.f5 <= p_9.f9))), (safe_add_func_int8_t_s_s((p_9.f6 > (g_113 <= ((p_9.f4 < (p_9.f9 != (safe_div_func_uint8_t_u_u(l_1077, 0x65L)))) && g_39.f9))), 0x53L))));
                        (*g_213) |= ((safe_lshift_func_uint8_t_u_u(p_9.f9, 0)) < func_62(((safe_unary_minus_func_uint16_t_u((p_9.f5 <= (safe_div_func_int8_t_s_s(g_286.f1, l_1087))))) || (safe_add_func_int32_t_s_s((-5L), (safe_sub_func_uint8_t_u_u(p_9.f4, (safe_rshift_func_uint8_t_u_s(g_39.f0, 1))))))), (1L >= p_9.f8), (**g_532), p_9.f8));
                        (*g_213) = ((l_1094 != (void*)0) >= p_9.f3);
                    }
                    else
                    {
                        (*l_1015) = (safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s(((-1L) != (safe_mod_func_uint8_t_u_u(((((g_39.f1 ^ func_62((safe_rshift_func_int8_t_s_s(((1UL || (safe_mod_func_uint8_t_u_u(func_62(g_943, (safe_rshift_func_int8_t_s_s(g_748.f0, ((0xA7L ^ 7UL) <= ((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(l_1056, g_441)) > 0xE1L), 0xA7L)) == (*l_1015))))), &l_1066, g_82.f4), g_748.f4))) > l_1056), 1)), l_1077, (**g_532), p_9.f4)) >= p_9.f6) != 3L) > g_39.f9), 1L))), g_1113)), l_1114)), g_82.f3));
                    }
                    (*g_533) = l_1115;
                }
                for (l_24.f3 = 0; (l_24.f3 >= 48); l_24.f3++)
                {
                    (*g_213) = ((((safe_unary_minus_func_int16_t_s(((((*l_1015) > (l_1056 <= 65535UL)) & 0x65EEL) >= l_1057))) < (safe_div_func_int16_t_s_s(((*g_357) != l_1057), 0x88F7L))) | g_286.f1) ^ 9UL);
                    return l_1121;
                }
                for (l_1121 = 12; (l_1121 <= 26); ++l_1121)
                {
                    int *l_1128 = &l_1066;
                    (*g_533) = (void*)0;
                    l_1125 ^= l_1124;
                    if ((*l_1015))
                        continue;
                    for (p_9.f8 = 0; (p_9.f8 > 15); p_9.f8 = safe_add_func_int64_t_s_s(p_9.f8, 9))
                    {
                        unsigned l_1131 = 0x144E6A43L;
                        p_9.f5 = (*l_1012);
                        (*g_213) ^= (*g_357);
                        (*g_533) = func_42(l_1128);
                        (*l_1012) = (safe_rshift_func_int8_t_s_s(l_1131, 3));
                    }
                }
            }
        }

        ;
        ;
        for (l_24.f4 = 0; (l_24.f4 > (-4)); l_24.f4 = safe_sub_func_int8_t_s_s(l_24.f4, 1))
        {
            (*l_1015) = (*g_998);
            (*g_533) = l_1015;
        }
    }
    else
    {
        int *l_1135 = &g_76;
        int ***l_1138 = &g_533;
        unsigned short l_1139 = 0xB46FL;
        unsigned l_1142 = 1UL;
        (**g_532) = func_44(func_42(l_1015), g_82.f1, p_9.f8, g_39.f3, ((void*)0 == l_1134));
        (*g_533) = func_44(func_44(l_1135, func_62((*l_1015), (g_748.f5 <= g_286.f5), (*g_533), (*l_1135)), ((safe_sub_func_uint64_t_u_u(((l_1138 == &g_533) >= g_1113), p_9.f3)) | g_286.f4), g_286.f5, g_39.f8), p_9.f0, l_24.f3, l_1139, p_9.f7);
        (*g_50) = (*g_50);
        if (l_1140)
        {
            return p_9.f5;
        }
        else
        {
            short l_1141 = 0xF274L;
            p_9.f5 &= func_62(g_286.f1, l_1141, func_44((**l_1138), l_1142, (safe_div_func_uint16_t_u_u((1L < ((*g_198) != (void*)0)), (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(g_39.f6, ((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(g_1011, l_1141)), 0xC8739DFBL)) < (*l_1015)))), g_1011)) <= l_1141), p_9.f0)))), g_943, p_9.f4), p_9.f2);
        }
    }

    ;
    ;
    ;
    return p_9.f5;
}







static const unsigned short func_20(struct S0 p_21, struct S2 p_22, unsigned long long p_23)
{
    char l_38 = 1L;
    unsigned l_956 = 1UL;
    int *l_957 = &g_943;
    unsigned long long l_966 = 0x725A488BCB18D45ALL;
    const struct S1 *l_967 = &g_39;
    struct S0 **l_982 = &g_157;
    struct S2 **l_1006 = &g_601;
    (*g_213) = func_33(p_21.f0, l_38, g_39, (safe_rshift_func_uint16_t_u_u(65529UL, 6)));

    ;
    ;
    ;
    (*g_50) = (safe_lshift_func_int8_t_s_u((g_286.f3 ^ l_956), 4));
    if (((func_67(l_957, l_957, l_957, p_22.f3) >= (safe_lshift_func_int8_t_s_u(func_62(p_22.f0, (safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u(0x6DFEL, (func_62(g_748.f1, p_21.f6, l_957, l_956) != g_39.f4))) & p_21.f4), p_22.f1)) && 0xC253BFF9F7244C10LL) >= p_22.f1), 0xCFL)), (*g_533), g_39.f3), l_966))) <= 6L))
    {
        struct S1 *l_968 = &g_39;
        (*g_50) = (l_967 != l_967);
        (*g_50) &= (g_82.f0 > (p_21.f1 && g_39.f9));
        (*g_198) = l_968;
    }
    else
    {
        for (p_21.f0 = 15; (p_21.f0 >= 28); p_21.f0 = safe_add_func_int64_t_s_s(p_21.f0, 8))
        {
            (*l_957) &= (0x22B2L ^ g_39.f5);
            (*l_957) |= (*g_50);
        }
        (*l_957) = (*l_957);
    }
    for (p_22.f3 = 0; (p_22.f3 > (-24)); p_22.f3--)
    {
        unsigned l_981 = 0xE4D5F38BL;
        int *l_985 = &g_39.f5;
        unsigned char l_997 = 0xD3L;
        if (((g_29 == (safe_add_func_int8_t_s_s(p_21.f7, p_21.f0))) ^ (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u(func_67(l_957, (*g_533), func_44(l_957, l_981, (*g_213), g_39.f9, p_22.f4), (*l_957)), p_21.f5)), (*l_957))), 0x1874E82BL))))
        {
            int *l_986 = &g_76;
            (**g_532) = func_44((*g_533), ((l_982 == (void*)0) == ((safe_add_func_uint32_t_u_u(p_21.f2, (*l_957))) > g_39.f8)), (*l_957), p_21.f4, (*l_957));
        }
        else
        {
            int **l_988 = &g_987;
            struct S2 **l_989 = &g_601;
            unsigned char l_999 = 251UL;
            (*g_532) = l_988;

            ;
            (*l_989) = (void*)0;

            ;
            (*l_957) ^= p_23;
            for (p_21.f6 = 0; (p_21.f6 == 21); p_21.f6 = safe_add_func_int16_t_s_s(p_21.f6, 8))
            {
                int l_994 = 0xBB1F5EDCL;
                g_601 = (void*)0;
                (*l_985) &= ((safe_rshift_func_int8_t_s_s(l_994, (p_22.f2 >= l_994))) > (safe_sub_func_uint64_t_u_u(l_997, (0xC1E691C79B88C9AFLL == (l_999 ^ p_22.f0)))));
                (*l_988) = (void*)0;

                ;
            }
        }
        (*g_213) ^= (safe_rshift_func_uint8_t_u_u(p_22.f0, (safe_add_func_uint32_t_u_u(((p_21.f5 | (((*l_957) ^ (*l_957)) > (g_286.f4 | g_82.f3))) > g_83), p_22.f3))));
        (*l_957) ^= (*g_50);
        (*l_985) = ((safe_div_func_int8_t_s_s(p_22.f5, (-1L))) >= ((p_21.f5 > p_21.f0) | (0UL > (safe_div_func_uint32_t_u_u((0x73L != (*l_957)), p_22.f3)))));
    }

    ;
    ;
    return p_22.f2;
}







static struct S2 func_25(unsigned p_26, unsigned char p_27, unsigned p_28)
{
    struct S2 l_32 = {1L,18446744073709551615UL,0x19L,0x20604811E3584F79LL,0xABF6L,1L};
    return l_32;
}







static int func_33(unsigned p_34, int p_35, struct S1 p_36, unsigned p_37)
{
    int *l_72 = &g_39.f5;
    unsigned l_79 = 4UL;
    char l_697 = 1L;
    struct S0 ** const l_773 = (void*)0;
    struct S2 *l_823 = (void*)0;
    unsigned short l_884 = 0x8F55L;
    unsigned l_895 = 0x0841B2ECL;
    char l_946 = 0x7EL;
    (**g_532) = func_42(func_44(g_50, (g_39.f1 > (((((safe_sub_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((func_59(func_62(func_67(g_50, g_50, l_72, (p_36.f2 || p_36.f0)), p_34, g_50, p_36.f4), l_79) & p_34) != g_39.f9), 2)), g_83)) >= g_82.f6), p_37)), g_4)) == (-1L)) > g_82.f4) <= p_36.f1) && 0xE4L)), g_82.f6, l_79, g_39.f9));

    ;
    (*g_50) |= func_67((**g_532), l_72, l_72, ((-1L) < func_67((**g_532), (*g_533), l_72, (*l_72))));
lbl_698:
    (*g_50) ^= (safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(0xF0FCL, 12)) & ((((safe_unary_minus_func_uint32_t_u(0xD05E43C5L)) <= (p_36.f7 || ((**g_532) != l_72))) < p_36.f7) && (safe_rshift_func_uint8_t_u_s(p_36.f2, 1)))), (safe_mod_func_int64_t_s_s((-5L), (((p_36.f7 | (*l_72)) && (*l_72)) || g_39.f7)))));
    if ((func_67(l_72, func_42((*g_533)), (*g_533), (g_83 || (((l_697 ^ 0x58F81571L) >= p_36.f1) > ((-1L) >= g_286.f1)))) > p_35))
    {
        struct S0 ** const l_701 = (void*)0;
        int l_702 = 9L;
        struct S1 ***l_715 = &g_198;
        p_36.f5 ^= (*l_72);
        if (g_82.f6)
            goto lbl_698;
        if ((safe_add_func_int8_t_s_s(((void*)0 != l_701), l_702)))
        {
            int l_719 = 9L;
            (**g_533) = (safe_rshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(p_36.f5, 1)) <= g_39.f4) != 0UL), 7));
            (*g_213) = ((-1L) == (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((void*)0 != l_715), ((255UL < (g_39.f1 | ((safe_unary_minus_func_uint8_t_u(0xF1L)) || ((safe_mod_func_int16_t_s_s((func_67(&l_702, l_72, func_42(&l_702), p_35) == 0x3C8556B66792AD92LL), p_36.f3)) && 1L)))) & p_36.f6))), l_719)) <= 0x45B956C92B84B651LL), 5)), l_719)));
            (*g_213) = (safe_sub_func_int32_t_s_s(0L, 0x749DD47BL));
        }
        else
        {
            unsigned l_726 = 6UL;
            struct S0 * const * const l_727 = &g_157;
            int *l_728 = &l_702;
            (*l_72) = ((safe_add_func_int64_t_s_s((*l_72), g_82.f2)) != (safe_div_func_uint16_t_u_u(l_726, (~(l_727 == l_701)))));
            (**g_532) = func_44(l_72, func_67(l_728, l_72, (*g_533), g_82.f6), p_36.f8, p_35, (((void*)0 != &g_533) | p_36.f4));

            ;
        }

        ;
    }
    else
    {
        struct S2 * const *l_731 = &g_601;
        int l_734 = 0x03301A81L;
        struct S1 ***l_856 = &g_198;
        long long l_868 = 0x56736A035C70FAB4LL;
        const struct S0 *l_889 = &g_82;
        const struct S0 **l_888 = &l_889;
        struct S1 *l_925 = &g_39;
        unsigned l_951 = 4294967294UL;
        (*g_213) = ((safe_add_func_int64_t_s_s((*l_72), (g_83 <= ((l_731 != &g_601) && ((void*)0 != (**g_532)))))) >= 1L);
        if ((**g_533))
        {
            struct S1 ** const *l_743 = &g_198;
            const struct S2 *l_747 = &g_748;
            int **l_766 = &g_50;
            struct S0 *l_803 = &g_82;
            if ((safe_add_func_int8_t_s_s(((4UL != l_734) || g_286.f4), p_36.f2)))
            {
                unsigned long long l_744 = 0x5504893502F65257LL;
                int *l_749 = &l_734;
                short l_756 = 1L;
                if ((safe_add_func_int64_t_s_s(0L, (safe_sub_func_int8_t_s_s(((0xCD3D3F69L && (p_35 & g_29)) ^ p_36.f1), (-1L))))))
                {
                    if (l_734)
                    {
                        const struct S2 *l_745 = &g_286;
                        const struct S2 **l_746 = (void*)0;
                        l_747 = l_745;

                        ;
                        (*l_72) = func_67(func_42((*g_533)), (**g_532), l_749, p_36.f1);
                    }
                    else
                    {
                        unsigned long long l_750 = 1UL;
                        struct S2 **l_751 = &g_601;
                        l_750 |= 0x11B2A43DL;
                        (*l_751) = (void*)0;

                        ;
                        (*g_533) = (**g_532);
                        p_36.f5 = (g_39.f5 >= (l_750 < (0xDDL && (g_82.f5 < 65535UL))));
                    }

                    ;
                    ;
                }
                else
                {
                    unsigned char l_765 = 0x6CL;
                    struct S2 *l_780 = &g_286;
                    struct S2 **l_781 = &l_780;
                    unsigned l_784 = 9UL;
                    if ((safe_mod_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(p_36.f4, 0x75AF4E75L)) > l_756), (safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((safe_div_func_int64_t_s_s((safe_add_func_int8_t_s_s(p_36.f3, p_37)), l_765)) <= (0x1B6D20D883374FBBLL | ((*g_532) != l_766))), l_734)), 0)))))
                    {
                        unsigned long long l_772 = 0xF96AB6B8E097D401LL;
                        unsigned l_778 = 0xC4A53C1FL;
                        int l_779 = 0xD8CE1AEFL;
                        l_779 |= (safe_div_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((((((safe_unary_minus_func_uint8_t_u((l_734 & ((p_36.f8 ^ l_772) < ((((((void*)0 == l_773) <= 1UL) | 7L) & (((safe_div_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(0UL, (((*g_198) == (*g_198)) | (*l_72)))) == (**l_766)), g_748.f0)) == (*l_749)) != p_35)) < l_772))))) <= g_748.f4) ^ l_778) <= l_765) != g_286.f2), g_4)) | p_36.f0), g_286.f3));
                        (*l_72) = (*l_72);
                        (*l_72) = (g_39.f2 >= 0xDBL);
                    }
                    else
                    {
                        (*g_533) = (*g_533);
                    }
                    (*l_781) = l_780;
                    (*l_72) = (func_62(g_286.f2, (safe_add_func_uint32_t_u_u(l_784, (-1L))), (*l_766), (safe_lshift_func_int8_t_s_s((g_286.f2 == func_62((((void*)0 == &p_36) && (0x74B78692F0243F06LL <= 18446744073709551615UL)), g_39.f7, (*l_766), p_35)), 4))) > g_748.f0);
                }

                ;
                ;
            }
            else
            {
                int *l_789 = (void*)0;
                for (g_39.f7 = (-7); (g_39.f7 == 57); g_39.f7 = safe_add_func_uint8_t_u_u(g_39.f7, 5))
                {
                    (**g_533) = ((void*)0 == &l_734);
                    return (***g_532);
                }
                (*g_533) = l_789;

                ;
                for (g_29 = 0; (g_29 >= 17); g_29 = safe_add_func_int16_t_s_s(g_29, 9))
                {
                    int l_798 = 0x73B22BD3L;
                    int *l_813 = &g_814;
                    (*g_50) &= (safe_add_func_uint64_t_u_u(((0x4528L <= (safe_lshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s(l_798, 7UL)), (0x3B0AL || (g_82.f2 && 8UL))))) & 0x39FE700D5C24C148LL), l_798));
                    if (((**l_766) | g_39.f1))
                    {
                        (**l_766) |= ((safe_mod_func_int16_t_s_s(g_39.f6, g_76)) ^ (safe_lshift_func_uint16_t_u_u(g_39.f4, (l_803 != (void*)0))));
                        (*g_533) = func_44((**g_532), (l_734 > (**l_766)), (*g_213), l_734, g_748.f3);

                        ;
                    }
                    else
                    {
                        return p_37;
                    }

                    ;
                    (*l_813) |= (safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(func_62(((safe_lshift_func_uint8_t_u_u(6UL, 1)) != (safe_mod_func_int64_t_s_s((safe_unary_minus_func_uint16_t_u((((~l_798) && p_35) ^ func_62(g_748.f5, g_39.f4, &l_798, g_748.f4)))), (**l_766)))), l_734, &l_798, p_35), 1)), p_37));
                    if ((*g_371))
                        break;
                }

                ;
            }

            ;
            ;
            ;
        }
        else
        {
            unsigned l_819 = 0x634DA196L;
            struct S2 **l_855 = &g_601;
            for (g_286.f2 = (-29); (g_286.f2 < 8); g_286.f2 = safe_add_func_uint64_t_u_u(g_286.f2, 2))
            {
                int l_820 = 0xDD0CAA48L;
                struct S2 *l_822 = &g_286;
                if (((((0xE4BF5F36696C2292LL & 0x3685C8124A90048CLL) == (0L || (safe_sub_func_int64_t_s_s(((1UL && (*g_357)) == (g_286.f5 & l_819)), l_734)))) || g_82.f7) != l_820))
                {
                    int l_821 = 0L;
                    (*g_50) &= l_821;
                    (*l_72) = ((void*)0 != &p_36);
                    (***g_532) ^= (l_820 | (0x102A218B0C86B725LL < (l_822 != l_823)));
                }
                else
                {
                    const struct S2 *l_825 = &g_748;
                    const struct S2 **l_824 = &l_825;
                    (*l_824) = &g_748;
                }
                for (g_39.f4 = (-28); (g_39.f4 <= 38); g_39.f4 = safe_add_func_uint64_t_u_u(g_39.f4, 7))
                {
                    long long l_846 = 3L;
                    int **l_848 = &g_371;
                    struct S1 *l_850 = &g_39;
                    struct S0 ***l_861 = &g_156;
                    if (((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(((g_39.f9 != ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(253UL, 2)), 4)), (*l_72))) < (((((safe_lshift_func_int8_t_s_u((safe_div_func_int16_t_s_s(p_36.f8, ((*l_72) || 1UL))), 1)) || l_819) && (safe_sub_func_int32_t_s_s(p_36.f5, (((safe_lshift_func_int8_t_s_u(0L, (*l_72))) && p_36.f8) < (-9L))))) < l_734) != 0x4AL))) < g_748.f2), l_846)) ^ p_36.f2), (*g_357))) | 1L))
                    {
                        struct S1 ***l_847 = &g_198;
                        (*l_847) = &g_199;
                        if ((**g_533))
                            continue;
                        (*g_213) = ((*g_532) == l_848);
                    }
                    else
                    {
                        int l_849 = 0x8F351691L;
                        if (p_36.f4)
                            break;
                        if (l_849)
                            break;
                        if ((**g_533))
                            break;
                        (*g_50) = ((p_34 != ((void*)0 == (*g_198))) ^ ((*g_198) != l_850));
                    }
                    (*g_50) &= (((safe_div_func_int32_t_s_s((***g_532), ((4UL > (l_855 != l_855)) | ((void*)0 != l_856)))) ^ l_820) && 0x5FL);
                    (**l_848) = (((safe_add_func_int16_t_s_s((+((safe_add_func_uint64_t_u_u(((*g_532) != (*g_532)), (g_29 >= ((l_861 != &g_156) ^ 0x75L)))) >= (~p_37))), (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(((safe_div_func_int32_t_s_s(func_67((*l_848), (*g_533), (*g_533), l_819), l_868)) || l_820), 5)), 4)))) || p_37) <= g_748.f2);
                }
            }
            (*g_533) = (void*)0;

            ;
        }

        ;
        ;
        for (g_39.f3 = 0; (g_39.f3 >= 3); g_39.f3 = safe_add_func_uint64_t_u_u(g_39.f3, 6))
        {
            int l_871 = (-1L);
            if (l_871)
                break;
            for (p_36.f2 = 0; (p_36.f2 == (-24)); --p_36.f2)
            {
                return p_36.f6;
            }
            for (p_36.f8 = 0; (p_36.f8 < (-22)); --p_36.f8)
            {
                (*g_213) = ((safe_add_func_int8_t_s_s(g_39.f2, (((safe_rshift_func_uint16_t_u_s((&l_773 == &g_156), ((safe_div_func_uint64_t_u_u(g_39.f5, (+0x804B76BADB8C6FB1LL))) || (0L == g_748.f2)))) < (l_734 & (g_29 < 0x8886L))) >= g_286.f3))) == g_286.f3);
            }
        }
        if (l_884)
        {
            return (*g_50);
        }
        else
        {
            const unsigned l_885 = 0xC2B844C2L;
            struct S0 *l_899 = (void*)0;
            int **l_903 = &g_50;
            long long l_940 = 0x42318EB09E57FF3ALL;
            g_601 = &g_286;

            ;
            (*g_50) = 0xFDE7FA2BL;
            if (l_885)
            {
                long long l_890 = 6L;
                struct S2 **l_929 = (void*)0;
                int **l_941 = &g_213;
                struct S0 *l_942 = (void*)0;
                if (func_62((safe_rshift_func_uint8_t_u_s(((void*)0 == l_888), ((*l_72) != (g_748.f2 > l_890)))), (*l_72), func_44(l_72, p_36.f0, (safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(l_734, 0xFE016FEDL)), l_895)), p_36.f3, p_36.f7), g_39.f3))
                {
                    struct S1 ***l_898 = &g_198;
                    struct S2 **l_902 = &l_823;
                    (*g_213) &= (+(safe_sub_func_uint8_t_u_u((l_898 == l_856), (((void*)0 != (*g_533)) == (l_899 != (void*)0)))));
                    (**l_903) = ((safe_lshift_func_uint16_t_u_u((((l_902 == (void*)0) & (l_903 != (void*)0)) && g_83), 13)) | (((safe_unary_minus_func_int16_t_s(((void*)0 != &g_157))) != ((p_36.f6 & (*g_357)) != p_36.f2)) && (**l_903)));
                    for (g_286.f3 = 0; (g_286.f3 <= (-20)); g_286.f3 = safe_sub_func_uint64_t_u_u(g_286.f3, 2))
                    {
                        return p_36.f9;
                    }
                    (*g_50) ^= (safe_rshift_func_uint16_t_u_u(p_35, 6));
                }
                else
                {
                    short l_909 = 0x8889L;
                    int *l_924 = &g_814;
                    (*g_213) |= 0x5C0FD15FL;
                    if ((*g_357))
                    {
                        p_36.f5 = ((!(0x18CAA69394A03E59LL && l_909)) || 0x8488B983L);
                        return p_36.f0;
                    }
                    else
                    {
                        int **l_918 = (void*)0;
                        int *l_921 = &l_734;
                        (*l_921) ^= (safe_add_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((**l_903), ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(func_62(p_36.f0, g_748.f2, (*g_533), ((void*)0 != l_918)), 15)), p_36.f7)) & ((safe_mod_func_uint64_t_u_u(g_82.f5, 18446744073709551615UL)) & (*g_50))))) | p_36.f6), 0xA5FE75A26474988BLL));
                        (**l_903) = (safe_mod_func_int16_t_s_s(((l_890 ^ 0xB9L) || l_890), p_36.f2));
                    }
                }
                (**l_903) = (p_37 != (safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_uint8_t_u(((void*)0 == l_929))) | (safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((((safe_div_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((**l_903), g_4)), p_37)) == p_36.f5) | 0x03L), 0x5FL)), p_35))), l_734)));
                (**l_941) = g_943;
            }
            else
            {
                (*g_533) = (void*)0;

                ;
            }
            (*g_213) = ((~(safe_div_func_int8_t_s_s(((((*l_72) & (**l_903)) >= (**l_903)) <= ((void*)0 == (*g_533))), (l_946 | (p_36.f3 <= ((l_951 || (!(safe_lshift_func_uint8_t_u_u((g_748.f5 >= (*l_72)), g_82.f0)))) > 0UL)))))) ^ (*l_72));
        }

        ;
    }

    ;
    return p_36.f3;
}







static int * func_42(int * p_43)
{
    unsigned long long l_511 = 9UL;
    struct S2 *l_530 = &g_286;
    int * const l_565 = &g_39.f5;
    int *l_597 = &g_76;
    long long l_629 = (-7L);
    struct S0 * const *l_685 = &g_157;
    (*g_50) = (l_511 == ((l_511 ^ (safe_mod_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(l_511, func_62(g_39.f9, l_511, func_44(func_44(p_43, g_39.f4, (*p_43), l_511, g_76), l_511, (*g_213), l_511, l_511), l_511))), g_39.f7))) == l_511));
    g_50 = &g_113;

    ;
    return (**g_532);


}







static int * func_44(int * p_45, short p_46, int p_47, long long p_48, short p_49)
{
    struct S0 *l_155 = &g_82;
    const int l_185 = 0xECCD7152L;
    struct S1 *l_189 = &g_39;
    int l_205 = 0x09221738L;
    const unsigned char l_245 = 255UL;
    int l_248 = 0xAC9F6F6BL;
    struct S2 * const l_291 = &g_286;
    int *l_375 = &l_248;
    unsigned short l_383 = 0UL;
    unsigned l_398 = 0x0A1748FBL;
    struct S0 ***l_424 = &g_156;
    return &g_76;


}







static unsigned char func_59(long long p_60, long long p_61)
{
    struct S0 *l_80 = (void*)0;
    struct S0 *l_81 = &g_82;
    const int l_84 = (-1L);
    char l_111 = 0xE0L;
    int **l_123 = &g_50;
    int *l_125 = &g_39.f5;
    int l_143 = 8L;
    (*g_50) = p_60;
    l_81 = l_80;

    ;
    (*g_50) ^= 0xE9DAE1B4L;
    if (g_83)
    {
        unsigned l_92 = 0xB7543FBEL;
        int *l_103 = &g_39.f5;
        int **l_102 = &l_103;
        int *l_112 = &g_113;
        if (l_84)
        {
            (*g_50) |= 0xF827A0C9L;
            for (g_82.f1 = 0; (g_82.f1 == 54); g_82.f1++)
            {
                unsigned long long l_91 = 0xD97F9692DCF94CC8LL;
                (*g_50) = ((g_82.f1 ^ ((p_61 | (safe_sub_func_int32_t_s_s(l_91, (g_82.f7 < g_39.f3)))) == func_62(l_84, g_4, &g_76, g_82.f0))) & l_92);
                if (p_61)
                    goto lbl_101;
            }
        }
        else
        {
lbl_101:
            for (g_29 = 0; (g_29 <= 42); g_29 = safe_add_func_int8_t_s_s(g_29, 3))
            {
                (*g_50) ^= (0x4026L >= (safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(0x378BL, 0)), 7)));
                (*g_50) &= ((g_39.f6 <= (safe_rshift_func_int16_t_s_u(p_60, g_82.f5))) > p_60);
            }
            if (g_39.f3)
                goto lbl_104;
            (*l_102) = &g_76;

            ;
        }

        ;
lbl_104:
        (*l_103) = (*g_50);
        (*l_112) ^= ((func_62(((g_39.f4 >= (&l_84 == (*l_102))) < (safe_lshift_func_uint8_t_u_u(0xFAL, (*l_103)))), ((((safe_rshift_func_int16_t_s_u(g_39.f3, 6)) <= ((!(p_60 <= (((safe_add_func_int64_t_s_s(((void*)0 == l_81), p_60)) < 0x4EL) || 1UL))) ^ (*l_103))) < l_111) > g_4), &l_84, p_61) < l_111) | 0xBDFE5E71FFC78F56LL);
        for (g_39.f2 = 10; (g_39.f2 <= (-5)); g_39.f2 = safe_sub_func_int64_t_s_s(g_39.f2, 7))
        {
            if ((*l_103))
                break;
        }
    }
    else
    {
        unsigned l_118 = 0xCA2BCDE2L;
        const int *l_124 = &g_113;
        int *l_141 = (void*)0;
        int *l_142 = &g_39.f5;
        const unsigned l_144 = 0x94F1BE2EL;
        int *l_145 = &g_113;
lbl_130:
        if ((l_111 & (safe_div_func_uint64_t_u_u(((l_118 == (safe_rshift_func_uint8_t_u_s((0xD61D1B06L == func_62(((safe_add_func_uint16_t_u_u((g_39.f5 >= ((l_123 == (void*)0) | (**l_123))), g_39.f7)) > (g_82.f6 | 0x02C25FA6L)), p_61, l_124, p_60)), 0))) && g_39.f2), g_39.f1))))
        {
            (*g_50) ^= func_67(l_125, (*l_123), &g_76, (safe_mod_func_int8_t_s_s(g_82.f4, (-1L))));
        }
        else
        {
            int *l_128 = &g_113;
            int **l_129 = &l_128;
            (*l_129) = l_128;
            if (g_39.f2)
                goto lbl_130;
            return g_82.f1;
        }
        (*l_145) &= (((&g_82 != &g_82) <= (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((&l_124 == &g_50), ((**l_123) || (**l_123)))) || (p_60 != (safe_rshift_func_int16_t_s_u(func_62(g_82.f4, (((safe_mod_func_uint8_t_u_u(func_67((*l_123), l_141, l_142, l_143), l_144)) | p_60) | p_60), &g_76, g_39.f8), g_82.f0)))), 1)), p_60))) ^ g_39.f3);
    }
    return p_60;
}







static long long func_62(int p_63, long long p_64, const int * p_65, const unsigned long long p_66)
{
    int *l_74 = &g_39.f5;
    int *l_75 = &g_39.f5;
    const int *l_78 = &g_76;
    const int **l_77 = &l_78;
    g_76 |= (func_67(l_74, g_50, l_75, g_39.f7) | (+g_39.f0));
    (*l_77) = p_65;


    return p_66;
}







static int func_67(int * p_68, int * p_69, int * p_70, unsigned short p_71)
{
    unsigned l_73 = 0xC0F0EF91L;
    l_73 = (*p_70);
    (*p_70) ^= ((-9L) >= 0xF4CBL);
    return g_29;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_39.f0, "g_39.f0", print_hash_value);
    transparent_crc(g_39.f1, "g_39.f1", print_hash_value);
    transparent_crc(g_39.f2, "g_39.f2", print_hash_value);
    transparent_crc(g_39.f3, "g_39.f3", print_hash_value);
    transparent_crc(g_39.f4, "g_39.f4", print_hash_value);
    transparent_crc(g_39.f5, "g_39.f5", print_hash_value);
    transparent_crc(g_39.f6, "g_39.f6", print_hash_value);
    transparent_crc(g_39.f7, "g_39.f7", print_hash_value);
    transparent_crc(g_39.f8, "g_39.f8", print_hash_value);
    transparent_crc(g_39.f9, "g_39.f9", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_82.f0, "g_82.f0", print_hash_value);
    transparent_crc(g_82.f1, "g_82.f1", print_hash_value);
    transparent_crc(g_82.f2, "g_82.f2", print_hash_value);
    transparent_crc(g_82.f3, "g_82.f3", print_hash_value);
    transparent_crc(g_82.f4, "g_82.f4", print_hash_value);
    transparent_crc(g_82.f5, "g_82.f5", print_hash_value);
    transparent_crc(g_82.f6, "g_82.f6", print_hash_value);
    transparent_crc(g_82.f7, "g_82.f7", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_286.f0, "g_286.f0", print_hash_value);
    transparent_crc(g_286.f1, "g_286.f1", print_hash_value);
    transparent_crc(g_286.f2, "g_286.f2", print_hash_value);
    transparent_crc(g_286.f3, "g_286.f3", print_hash_value);
    transparent_crc(g_286.f4, "g_286.f4", print_hash_value);
    transparent_crc(g_286.f5, "g_286.f5", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_748.f0, "g_748.f0", print_hash_value);
    transparent_crc(g_748.f1, "g_748.f1", print_hash_value);
    transparent_crc(g_748.f2, "g_748.f2", print_hash_value);
    transparent_crc(g_748.f3, "g_748.f3", print_hash_value);
    transparent_crc(g_748.f4, "g_748.f4", print_hash_value);
    transparent_crc(g_748.f5, "g_748.f5", print_hash_value);
    transparent_crc(g_814, "g_814", print_hash_value);
    transparent_crc(g_943, "g_943", print_hash_value);
    transparent_crc(g_1011, "g_1011", print_hash_value);
    transparent_crc(g_1033, "g_1033", print_hash_value);
    transparent_crc(g_1113, "g_1113", print_hash_value);
    transparent_crc(g_1156, "g_1156", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
