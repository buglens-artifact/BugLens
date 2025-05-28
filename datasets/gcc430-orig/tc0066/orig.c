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
   const unsigned f0 : 4;
   signed f1 : 11;
   signed f2 : 2;
   signed f3 : 5;
   signed f4 : 2;
   const signed f5 : 19;
   const unsigned f6 : 6;
};


static char g_9 = 0L;
static short g_15 = 0xDAD9L;
static unsigned g_17 = 4294967291UL;
static unsigned g_25 = 7UL;
static unsigned g_36 = 0x6CAE8EF3L;
static unsigned *g_35 = &g_36;
static unsigned char g_45 = 250UL;
static unsigned short g_48 = 0x195CL;
static unsigned char g_62 = 0x83L;
static int g_63 = 0x4AEFC518L;
static int g_110 = 1L;
static unsigned g_114 = 1UL;
static char g_123 = 0xD6L;
static char g_126 = 0xD9L;
static const unsigned g_136 = 4294967295UL;
static const unsigned g_138 = 0x48F203DAL;
static unsigned long long g_160 = 1UL;
static int g_180 = 0x64C2CD36L;
static unsigned g_244 = 4294967295UL;
static struct S0 g_252 = {1,44,0,2,1,540,1};
static unsigned short g_284 = 0x6D55L;
static int g_305 = 9L;
static long long g_307 = 4L;
static char g_332 = 0x61L;
static int g_348 = (-1L);
static int g_358 = (-1L);
static unsigned char g_364 = 248UL;
static char g_371 = 0x15L;
static short g_373 = 9L;
static short g_375 = 2L;
static struct S0 *g_478 = &g_252;
static struct S0 **g_477 = &g_478;
static struct S0 ***g_476 = &g_477;
static unsigned char *g_498 = &g_62;
static unsigned char * const *g_497 = &g_498;
static long long g_555 = 0x20FD1AB54657B57FLL;
static unsigned char g_567 = 8UL;
static int g_711 = 1L;
static int g_731 = 0x11C3EFD9L;
static unsigned long long g_734 = 0x5FB35C9D75332D84LL;
static const int *g_743 = &g_358;
static struct S0 g_820 = {1,23,1,-3,0,-387,5};
static char g_1074 = 0L;
static unsigned long long g_1089 = 0UL;



static int func_1(void);
static unsigned char func_4(unsigned short p_5, char p_6, struct S0 p_7, short p_8);
static short func_20(unsigned p_21, unsigned * p_22, unsigned char p_23);
static unsigned * func_28(int p_29, unsigned long long p_30, unsigned * const p_31, unsigned * p_32, unsigned * const p_33);
static char func_49(unsigned char * p_50);
static unsigned char * func_51(unsigned char p_52, unsigned p_53, char p_54, int p_55, int p_56);
static int func_67(const unsigned char * p_68, int p_69, unsigned char * p_70);
static char func_75(unsigned char * p_76);
static unsigned char * func_77(unsigned p_78, unsigned * p_79, unsigned short p_80, unsigned long long p_81);
static unsigned * func_82(const int p_83, unsigned char * p_84, int p_85);
static int func_1(void)
{
    unsigned *l_16 = &g_17;
    unsigned *l_24 = &g_25;
    int l_34 = 0x0CC321A0L;
    unsigned * const l_37 = &g_36;
    short *l_929 = &g_373;
    short *l_930 = &g_375;
    struct S0 l_931 = {0,15,1,3,-0,-4,7};
    int *l_969 = &l_34;
    int l_1082 = 0xC7CAC531L;
    const unsigned char *l_1096 = &g_62;
    unsigned short l_1101 = 0x541CL;
    (*l_969) = (safe_mul_func_uint8_t_u_u(func_4(g_9, (safe_mod_func_int16_t_s_s((4L <= (1L | (safe_add_func_uint32_t_u_u(((*l_16) = (g_15 = (safe_unary_minus_func_uint32_t_u(0x34DE6F88L)))), ((safe_mod_func_int64_t_s_s(((g_9 >= ((((void*)0 != l_16) && ((*l_930) = ((*l_929) = func_20(((*l_24)++), func_28(((((65528UL || 65535UL) <= (-6L)) == l_34) ^ g_9), l_34, l_16, g_35, l_37), l_34)))) | 0xF5B2466DCC6C786DLL)) < l_34), g_284)) < 0L))))), 1L)), l_931, g_252.f4), g_252.f3));
    if ((*g_743))
    {
        unsigned l_970 = 0x365931CCL;
        int l_1016 = 0xCFF6984CL;
        int l_1017 = 1L;
        int l_1020 = (-10L);
        int l_1032 = 0x43755C66L;
        int l_1034 = 0x2B64C38BL;
        int l_1045 = (-1L);
        if (l_970)
        {
            int *l_971 = (void*)0;
            int *l_972 = &g_358;
            int *l_973 = &g_711;
            int *l_974 = &g_348;
            int *l_975 = &g_348;
            int *l_976 = &g_711;
            int *l_977 = &l_34;
            int *l_978 = &l_34;
            int *l_979 = &g_180;
            int *l_980 = (void*)0;
            int *l_981 = (void*)0;
            int *l_982 = (void*)0;
            int *l_983 = &l_34;
            int *l_984 = &g_180;
            int *l_985 = &g_348;
            int *l_986 = &l_34;
            int *l_987 = &g_180;
            int *l_988 = &l_34;
            int *l_989 = &g_348;
            int *l_990 = (void*)0;
            int *l_991 = (void*)0;
            int *l_992 = (void*)0;
            int *l_993 = &g_358;
            int *l_994 = (void*)0;
            int *l_995 = (void*)0;
            int *l_996 = (void*)0;
            int *l_997 = (void*)0;
            int *l_998 = &l_34;
            int *l_999 = &g_711;
            int *l_1000 = &g_180;
            int *l_1001 = (void*)0;
            int *l_1002 = &g_110;
            int *l_1003 = &g_348;
            int *l_1004 = &g_180;
            int *l_1005 = &g_110;
            int *l_1006 = &g_180;
            int *l_1007 = (void*)0;
            int *l_1008 = &g_358;
            int *l_1009 = &g_180;
            int l_1010 = 1L;
            int l_1011 = 0x0D50689AL;
            int *l_1012 = &g_180;
            int *l_1013 = (void*)0;
            int *l_1014 = &g_711;
            int *l_1015 = &g_110;
            int *l_1018 = &g_711;
            int *l_1019 = &l_1011;
            int *l_1021 = (void*)0;
            int *l_1022 = (void*)0;
            int *l_1023 = &l_1016;
            int *l_1024 = &l_1011;
            int l_1025 = 0x2AE3769CL;
            int *l_1026 = (void*)0;
            int *l_1027 = &g_358;
            int *l_1028 = &g_348;
            int l_1029 = 0x226501C9L;
            int *l_1030 = &g_348;
            int *l_1031 = &l_34;
            int *l_1033 = &l_1016;
            int *l_1035 = &l_1032;
            int *l_1036 = (void*)0;
            int *l_1037 = (void*)0;
            int *l_1038 = &l_1029;
            int *l_1039 = &g_110;
            int *l_1040 = (void*)0;
            int *l_1041 = (void*)0;
            int *l_1042 = &l_1025;
            int *l_1043 = (void*)0;
            int *l_1044 = &l_34;
            int *l_1046 = &l_1029;
            int *l_1047 = &l_1045;
            int *l_1048 = &l_1020;
            int *l_1049 = &g_358;
            int *l_1050 = &g_358;
            int *l_1051 = &g_110;
            int *l_1052 = &g_711;
            int l_1053 = 0L;
            int *l_1054 = &l_34;
            int *l_1055 = &l_1034;
            int *l_1056 = &l_1010;
            int *l_1057 = &l_1016;
            int *l_1058 = &l_1053;
            int *l_1059 = &l_1053;
            int *l_1060 = &l_1053;
            int *l_1061 = &l_1010;
            int *l_1062 = &g_358;
            int *l_1063 = (void*)0;
            int *l_1064 = &l_1017;
            int *l_1065 = &g_348;
            int *l_1066 = (void*)0;
            int *l_1067 = (void*)0;
            int *l_1068 = &l_1020;
            int *l_1069 = &l_1016;
            int *l_1070 = &l_1016;
            int *l_1071 = &l_1020;
            int *l_1072 = &l_1010;
            int *l_1073 = &l_34;
            int *l_1075 = &l_34;
            int *l_1076 = &g_180;
            int *l_1077 = &g_348;
            int *l_1078 = &l_1011;
            long long l_1079 = 0x82B3E60F30A380BELL;
            int *l_1080 = (void*)0;
            int *l_1081 = &g_110;
            int *l_1083 = &l_1016;
            int *l_1084 = (void*)0;
            int *l_1085 = &l_1020;
            int *l_1086 = (void*)0;
            int *l_1087 = &g_180;
            int *l_1088 = &l_1020;
            ++g_1089;
        }
        else
        {
            return (*g_743);
        }
    }
    else
    {
        long long l_1092 = 0L;
        unsigned short *l_1095 = &g_48;
        unsigned char *l_1097 = (void*)0;
        (*l_969) &= ((l_1092 & g_110) & ((safe_lshift_func_uint16_t_u_s(((*l_1095) = 0xE945L), 5)) || func_67(l_1096, l_1092, l_1097)));
        for (g_1089 = (-9); (g_1089 >= 24); g_1089 = safe_add_func_int8_t_s_s(g_1089, 5))
        {
            int *l_1100 = &g_180;
            l_1101 = ((*l_1100) ^= (0xA63649629A6743CELL && (*l_969)));
        }
    }
    return (*g_743);
}







static unsigned char func_4(unsigned short p_5, char p_6, struct S0 p_7, short p_8)
{
    unsigned short l_947 = 0x61D6L;
    char *l_960 = &g_9;
    int l_961 = 0x387DD15DL;
    unsigned short *l_962 = &g_284;
    int l_964 = 0xF993387BL;
    int l_965 = (-4L);
    unsigned short l_968 = 0xE6BEL;
    for (g_307 = 17; (g_307 <= 6); g_307 = safe_sub_func_uint32_t_u_u(g_307, 7))
    {
        unsigned l_936 = 0x322BBD3EL;
        short *l_937 = &g_373;
        int l_942 = 0x85D3D190L;
        long long *l_948 = &g_555;
        unsigned short *l_949 = &g_48;
        int *l_950 = &g_110;
        int *l_953 = &g_711;
        (*l_950) ^= (safe_rshift_func_int16_t_s_u(l_936, ((*l_949) = (((*l_948) = (((g_820.f6 ^ (((((void*)0 == l_937) && (safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u(l_942, (g_284 = g_305))) > (-10L)), 1))) && (safe_sub_func_uint16_t_u_u((g_252.f3 ^ (((*g_35)--) >= g_711)), l_936))) != (*g_743))) >= l_947) == (-4L))) || 0xCA6F99F1B5DCF8F3LL))));
        (*l_953) = ((*l_950) |= (safe_add_func_uint64_t_u_u(0xC95569543AE6555CLL, g_820.f2)));
    }
    g_820.f3 = (safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(((p_7.f1 & (++(*g_498))) >= ((*l_962) = (l_961 ^= (&p_6 != (l_960 = &p_6))))), (safe_unary_minus_func_uint64_t_u((g_734--))))), 11));
    return l_968;
}







static short func_20(unsigned p_21, unsigned * p_22, unsigned char p_23)
{
    const unsigned l_925 = 0x6B8E5B3DL;
    int *l_926 = (void*)0;
    int *l_927 = (void*)0;
    int *l_928 = &g_110;
    (*l_928) = ((*g_743) ^ ((safe_mul_func_uint8_t_u_u(l_925, (*g_498))) > p_23));
    (*l_928) = p_23;
    return p_23;
}







static unsigned * func_28(int p_29, unsigned long long p_30, unsigned * const p_31, unsigned * p_32, unsigned * const p_33)
{
    unsigned l_42 = 4294967295UL;
    int l_43 = (-1L);
    unsigned char *l_44 = &g_45;
    unsigned char *l_61 = &g_62;
    int l_64 = (-8L);
    unsigned char **l_834 = &l_61;
    int *l_921 = (void*)0;
    int *l_922 = &g_180;
    (*l_922) = (g_36 | ((g_48 = (~((safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s(p_30, (l_43 = (+l_42)))), l_42)) <= (p_30 >= ((*l_44)++))))) ^ func_49(((*l_834) = func_51(p_30, (l_64 = (l_42 >= ((g_63 = (safe_sub_func_uint8_t_u_u(((*l_61) &= (0x0CFADBACD6BCE8D5LL | g_9)), g_36))) > 0x2EA9177C83BE7680LL))), l_42, g_9, g_36)))));
    return &g_244;
}







static char func_49(unsigned char * p_50)
{
    unsigned long long l_839 = 9UL;
    struct S0 ****l_840 = &g_476;
    int *l_843 = (void*)0;
    int *l_844 = &g_110;
    int *l_845 = &g_358;
    int *l_846 = &g_711;
    int *l_847 = &g_711;
    int *l_848 = &g_358;
    int *l_849 = (void*)0;
    int l_850 = 0L;
    int *l_851 = &l_850;
    int *l_852 = &g_711;
    int *l_853 = &g_110;
    int *l_854 = &g_358;
    int *l_855 = &g_358;
    int *l_856 = (void*)0;
    int l_857 = 0x347E4C8DL;
    int *l_858 = &g_358;
    int l_859 = (-1L);
    int *l_860 = &l_859;
    int *l_861 = &g_110;
    int *l_862 = &l_859;
    int *l_863 = (void*)0;
    int *l_864 = &g_110;
    int *l_865 = &g_348;
    int *l_866 = (void*)0;
    int *l_867 = &l_859;
    int *l_868 = &g_358;
    int *l_869 = (void*)0;
    int *l_870 = (void*)0;
    int *l_871 = &g_348;
    int *l_872 = &g_180;
    int *l_873 = &g_180;
    int *l_874 = (void*)0;
    int *l_875 = (void*)0;
    int *l_876 = &g_358;
    int *l_877 = &g_110;
    int *l_878 = &g_110;
    int *l_879 = (void*)0;
    int *l_880 = &g_358;
    int *l_881 = (void*)0;
    int *l_882 = &l_850;
    int *l_883 = &g_711;
    int l_884 = 0x154802E1L;
    int *l_885 = &l_850;
    int *l_886 = &l_859;
    int *l_887 = &g_711;
    int *l_888 = &g_180;
    int *l_889 = &g_711;
    int *l_890 = &l_850;
    int *l_891 = (void*)0;
    int l_892 = 0x16A828E5L;
    int *l_893 = &g_358;
    int *l_894 = (void*)0;
    int *l_895 = &g_358;
    int l_896 = 9L;
    int *l_897 = &g_110;
    int *l_898 = &l_896;
    int *l_899 = &l_859;
    int *l_900 = &l_884;
    int l_901 = 0x55C84A11L;
    int *l_902 = &l_859;
    int *l_903 = (void*)0;
    int *l_904 = (void*)0;
    int *l_905 = &l_859;
    int *l_906 = &g_358;
    int *l_907 = &g_711;
    int *l_908 = &g_110;
    int *l_909 = &g_180;
    int *l_910 = &g_358;
    int *l_911 = &g_180;
    int *l_912 = &l_901;
    int *l_913 = &g_348;
    int *l_914 = &g_358;
    int *l_915 = &l_850;
    int *l_916 = &l_896;
    int *l_917 = &l_896;
    unsigned l_918 = 9UL;
    for (g_734 = 0; (g_734 <= 58); g_734++)
    {
        int *l_841 = &g_180;
        int *l_842 = &g_110;
        (**g_476) = (void*)0;
        (*l_842) = ((*l_841) |= ((safe_mul_func_int8_t_s_s(func_75(p_50), (l_839 && ((void*)0 == l_840)))) & (((l_839 ^ g_252.f2) & (l_839 && g_820.f0)) <= 1UL)));
        if (l_839)
            continue;
    }
    ++l_918;
    return g_136;
}







static unsigned char * func_51(unsigned char p_52, unsigned p_53, char p_54, int p_55, int p_56)
{
    unsigned char *l_71 = &g_62;
    int *l_832 = &g_180;
    int **l_833 = &l_832;
    (*l_832) |= (safe_mul_func_int8_t_s_s(((*g_35) <= func_67(&g_62, p_54, l_71)), ((safe_sub_func_uint8_t_u_u((0x659C021C2B8E166FLL | g_138), p_53)) <= (*g_35))));
    (*l_833) = &g_711;
    return &g_62;
}







static int func_67(const unsigned char * p_68, int p_69, unsigned char * p_70)
{
    long long l_74 = 1L;
    unsigned *l_101 = (void*)0;
    struct S0 *l_826 = &g_252;
    int *l_829 = &g_358;
    for (g_63 = (-22); (g_63 < 2); g_63 = safe_add_func_uint8_t_u_u(g_63, 8))
    {
        unsigned l_100 = 0UL;
        unsigned **l_102 = &l_101;
        unsigned **l_103 = (void*)0;
        unsigned **l_104 = (void*)0;
        unsigned *l_106 = &g_36;
        unsigned **l_105 = &l_106;
        const int l_823 = 1L;
        int *l_824 = (void*)0;
        int *l_825 = &g_348;
        struct S0 *l_827 = (void*)0;
        int *l_828 = &g_110;
    }
    (*l_829) = p_69;
    return p_69;
}







static char func_75(unsigned char * p_76)
{
    int l_821 = 0x845B019AL;
    int *l_822 = &g_711;
    for (g_110 = 0; (g_110 != 24); g_110++)
    {
        int *l_818 = &g_358;
        struct S0 *l_819 = &g_820;
        (*l_818) ^= (-6L);
        l_819 = (void*)0;
    }
    (*l_822) = l_821;
    return (*l_822);
}







static unsigned char * func_77(unsigned p_78, unsigned * p_79, unsigned short p_80, unsigned long long p_81)
{
    unsigned *l_113 = &g_114;
    unsigned char *l_116 = &g_62;
    int l_117 = 1L;
    unsigned l_121 = 4294967292UL;
    const unsigned *l_137 = &g_138;
    int l_172 = 0xF6650442L;
    int l_183 = 8L;
    int l_203 = 0L;
    int l_256 = (-1L);
    int l_262 = 1L;
    struct S0 *l_292 = (void*)0;
    struct S0 **l_291 = &l_292;
    int **l_303 = (void*)0;
    int l_304 = (-1L);
    long long l_306 = 0x099D88FCDEF65FC7LL;
    short l_394 = 0L;
    int *l_419 = &g_180;
    unsigned **l_440 = &l_113;
    int l_441 = 0xB5400201L;
    unsigned short l_442 = 65535UL;
    unsigned long long *l_443 = &g_160;
    unsigned char l_499 = 1UL;
    int l_665 = 0xAAF16EB9L;
    int l_692 = 0xB70BB0A3L;
    int l_713 = 0x8AAB4A73L;
    int l_717 = 9L;
    const int l_749 = 0x5405023AL;
    int l_781 = (-1L);
    int l_793 = 0x2BD42E03L;
    unsigned short l_799 = 0xE893L;
    int *l_802 = (void*)0;
    int *l_803 = &l_203;
    const char *l_808 = &g_9;
    char *l_809 = &g_371;
    if ((safe_mod_func_uint32_t_u_u(((*l_113) = 1UL), (*g_35))))
    {
        int *l_115 = &g_110;
        int **l_118 = &l_115;
        unsigned char *l_127 = &g_62;
        const unsigned *l_132 = &g_114;
        const unsigned **l_133 = &l_132;
        const unsigned *l_135 = &g_136;
        const unsigned **l_134 = &l_135;
        unsigned char l_165 = 0x9DL;
        int l_184 = 0L;
        int l_192 = 0x4E20030BL;
        int l_234 = 1L;
        struct S0 *l_251 = &g_252;
        (*l_115) = (g_9 == p_78);
        (*l_118) = func_82(g_36, l_116, l_117);
        for (p_78 = 16; (p_78 != 34); p_78++)
        {
            char *l_122 = &g_123;
            int l_124 = 0L;
            char *l_125 = &g_126;
            g_110 ^= (((*l_122) = l_121) != ((*l_125) = l_124));
            (*l_118) = func_82((((p_80 == 0x1CA57882L) || (*g_35)) && p_81), l_127, g_126);
        }
        if ((+(((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(p_78, 6UL)), ((l_137 = ((*l_134) = ((*l_133) = l_132))) == &p_78))) > (safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(p_80, g_126)), (safe_sub_func_int32_t_s_s(0xA49BCD99L, (safe_mod_func_int32_t_s_s((p_80 > g_36), g_9))))))) != g_126)))
        {
            return &g_62;
        }
        else
        {
            int *l_147 = (void*)0;
            int *l_148 = &g_110;
            long long l_161 = 1L;
            unsigned short l_166 = 0x48C7L;
            int l_168 = 0L;
            int l_175 = 0x039C001BL;
            int l_177 = 0x9213F04FL;
            char l_255 = 0x2CL;
            (*l_148) |= (p_78 == g_136);
            if ((((safe_lshift_func_int8_t_s_u((((*l_113)++) ^ (safe_rshift_func_int8_t_s_s(l_121, (safe_unary_minus_func_int64_t_s((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(l_117, (g_160 &= ((*l_116) = 6UL)))), l_161))))))), 1)) <= (safe_sub_func_int64_t_s_s(((safe_unary_minus_func_uint32_t_u((0xBAD7L != g_110))) || l_165), g_126))) > l_166))
            {
                int *l_167 = (void*)0;
                int *l_169 = &l_168;
                int *l_170 = &g_110;
                int *l_171 = &l_168;
                int *l_173 = (void*)0;
                int *l_174 = &l_172;
                int *l_176 = &l_175;
                int *l_178 = (void*)0;
                int *l_179 = &g_110;
                int *l_181 = (void*)0;
                int *l_182 = &g_110;
                int *l_185 = &l_184;
                int *l_186 = &l_184;
                int *l_187 = &l_177;
                int *l_188 = &l_183;
                int *l_189 = &l_177;
                int *l_190 = &l_168;
                int l_191 = 0x8BEEE5F8L;
                int *l_193 = &l_172;
                int *l_194 = &l_175;
                int *l_195 = (void*)0;
                int *l_196 = &l_177;
                int *l_197 = &l_168;
                int *l_198 = &l_191;
                int *l_199 = &l_183;
                int *l_200 = &l_191;
                int l_201 = 1L;
                int *l_202 = &l_192;
                int *l_204 = &l_201;
                int *l_205 = &l_183;
                int *l_206 = &l_183;
                int l_207 = (-1L);
                int *l_208 = &l_172;
                int *l_209 = &g_110;
                int *l_210 = &l_183;
                int *l_211 = (void*)0;
                int *l_212 = &l_177;
                int *l_213 = &l_175;
                int *l_214 = (void*)0;
                int *l_215 = &l_184;
                int *l_216 = &l_175;
                int *l_217 = &l_184;
                int *l_218 = &l_177;
                int *l_219 = &l_177;
                int *l_220 = &l_184;
                int *l_221 = &l_177;
                int *l_222 = &l_183;
                int *l_223 = &l_203;
                int *l_224 = &l_184;
                int *l_225 = &l_203;
                int *l_226 = (void*)0;
                int *l_227 = &l_172;
                int *l_228 = &l_192;
                int *l_229 = &l_191;
                int *l_230 = &l_184;
                int *l_231 = (void*)0;
                int *l_232 = &l_207;
                int *l_233 = (void*)0;
                int *l_235 = &l_168;
                int *l_236 = &g_110;
                int *l_237 = (void*)0;
                int *l_238 = &l_184;
                int *l_239 = &l_175;
                int *l_240 = (void*)0;
                int *l_241 = &l_207;
                int *l_242 = &l_172;
                int *l_243 = &l_177;
                long long *l_298 = &l_161;
                int *l_308 = (void*)0;
                int *l_309 = &l_262;
                int *l_310 = (void*)0;
                int *l_311 = &l_168;
                int *l_312 = &l_203;
                int *l_313 = &l_201;
                int *l_314 = &g_110;
                int *l_315 = &l_207;
                int l_316 = 0xABF531EAL;
                int *l_317 = &l_207;
                int *l_318 = &g_180;
                int *l_319 = &l_201;
                int *l_320 = &l_192;
                int *l_321 = &l_177;
                int *l_322 = &l_184;
                int *l_323 = (void*)0;
                int *l_324 = &g_110;
                int *l_325 = &l_177;
                int *l_326 = &l_234;
                int *l_327 = (void*)0;
                int *l_328 = &l_183;
                int *l_329 = &l_256;
                int *l_330 = (void*)0;
                int *l_331 = &l_172;
                int *l_333 = &l_183;
                int *l_334 = &l_168;
                int *l_335 = (void*)0;
                int *l_336 = &l_192;
                int *l_337 = &l_172;
                int *l_338 = &l_172;
                int *l_339 = &l_168;
                int *l_340 = &l_172;
                int *l_341 = &l_262;
                int *l_342 = (void*)0;
                int *l_343 = &l_177;
                int *l_344 = &l_184;
                int *l_345 = &l_183;
                int *l_346 = &l_207;
                int *l_347 = (void*)0;
                int *l_349 = &l_175;
                int *l_350 = &l_177;
                int *l_351 = &g_110;
                int *l_352 = &l_256;
                int *l_353 = &l_168;
                int *l_354 = (void*)0;
                int *l_355 = &l_207;
                int *l_356 = &l_191;
                int *l_357 = &l_168;
                int *l_359 = &l_191;
                int *l_360 = (void*)0;
                int l_361 = 0x624DC15FL;
                int *l_362 = (void*)0;
                int *l_363 = &g_358;
                --g_244;
                for (l_117 = 0; (l_117 == 29); ++l_117)
                {
                    unsigned char *l_287 = &l_165;
                    unsigned char l_288 = 0x52L;
                    for (l_175 = 0; (l_175 == 0); l_175 = safe_add_func_int8_t_s_s(l_175, 3))
                    {
                        struct S0 **l_253 = &l_251;
                        if (g_9)
                            break;
                        (*l_253) = l_251;
                    }
                    (*l_118) = (*l_118);
                    if (p_81)
                    {
                        int l_254 = (-6L);
                        int *l_257 = &l_234;
                        int *l_258 = &l_183;
                        int *l_259 = &l_256;
                        int *l_260 = &l_203;
                        int *l_261 = &l_168;
                        int *l_263 = &l_201;
                        int *l_264 = &l_191;
                        int *l_265 = &l_177;
                        int *l_266 = &l_207;
                        int *l_267 = &l_201;
                        int *l_268 = (void*)0;
                        int *l_269 = &l_201;
                        int *l_270 = &l_168;
                        int *l_271 = &g_180;
                        int *l_272 = &l_191;
                        int *l_273 = &l_234;
                        int *l_274 = &l_192;
                        int *l_275 = &l_172;
                        int *l_276 = &l_201;
                        int *l_277 = &l_256;
                        int *l_278 = &l_256;
                        int *l_279 = (void*)0;
                        int *l_280 = &l_201;
                        int *l_281 = &l_207;
                        int *l_282 = (void*)0;
                        int *l_283 = &l_172;
                        --g_284;
                    }
                    else
                    {
                        int *l_289 = &l_207;
                        char *l_290 = &g_126;
                        struct S0 ***l_293 = &l_291;
                        if (p_80)
                            break;
                        (*l_238) = (((*l_290) = ((((*l_118) = &g_180) != (l_289 = func_82(g_138, l_287, l_288))) & ((0UL > (p_78 <= (*g_35))) > 0xB4932792L))) ^ g_180);
                        if (p_81)
                            continue;
                        (*l_221) = (g_110 = (g_123 ^ (((*l_293) = l_291) != (void*)0)));
                    }
                }
                (*l_222) = (((((*l_298) = (safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(g_63, g_63)), p_81))) != (!(safe_mod_func_uint64_t_u_u((((((safe_mod_func_int64_t_s_s(p_81, (+l_262))) | ((*l_113) |= (((l_303 = &l_240) != &l_115) & (65535UL || ((l_304 >= (*l_236)) <= (*l_148)))))) == 65527UL) | g_305) ^ g_63), 4L)))) >= p_81) != p_81);
                --g_364;
            }
            else
            {
                int l_376 = 1L;
                unsigned char *l_384 = &g_364;
                unsigned short *l_395 = &l_166;
                unsigned l_403 = 0x6F736BA9L;
                int l_405 = 0x57DB2F87L;
                if (g_126)
                {
                    short *l_372 = &g_373;
                    short *l_374 = &g_375;
                    for (g_114 = 0; (g_114 <= 5); g_114++)
                    {
                        (*l_148) ^= 0x39097EB8L;
                        (*l_118) = p_79;
                    }
                    (*l_148) &= (safe_add_func_uint16_t_u_u(((p_81 == p_78) < p_81), ((g_371 = g_244) | (((*l_374) = ((*l_372) = (-10L))) > g_252.f4))));
                }
                else
                {
                    unsigned short *l_383 = &g_284;
                    long long *l_387 = &l_161;
                    unsigned char **l_388 = &l_384;
                    unsigned char **l_389 = &l_116;
                    unsigned *l_390 = (void*)0;
                    unsigned *l_391 = &l_121;
                    short *l_392 = &g_373;
                    int *l_393 = &g_180;
                    (*l_148) = l_376;
                    if ((((*l_148) | (l_376 & ((safe_lshift_func_int8_t_s_u((!g_63), (safe_add_func_int8_t_s_s(((((*l_383) = (safe_rshift_func_int8_t_s_u((g_373 != g_114), ((0x95B7E0EDL < (l_251 == l_251)) == 0x77AA8E5AL)))) || l_376) != 0xC975L), g_62)))) || 4294967295UL))) >= (*l_148)))
                    {
                        (*l_148) = g_138;
                    }
                    else
                    {
                        return l_384;
                    }
                    (*l_393) = (((g_252.f1 = ((*l_148) |= ((safe_mod_func_int64_t_s_s(g_252.f3, p_78)) != g_252.f1))) < g_136) || ((((*l_387) &= (p_80 <= (+g_114))) & (0xDBADL > ((*l_392) |= (((*l_391) &= (&g_364 != ((*l_389) = ((*l_388) = l_384)))) & p_80)))) && (-1L)));
                }
                if ((!(p_78 || ((((((!((*l_395) = (p_80 != l_394))) < l_376) == (safe_mod_func_int32_t_s_s((p_81 < p_81), (safe_unary_minus_func_uint32_t_u(((-10L) || ((*l_148) = p_80))))))) && (safe_add_func_uint64_t_u_u((g_63 && p_80), 0L))) == p_78) > 0xA0F69888L))))
                {
                    short *l_401 = (void*)0;
                    short *l_402 = &l_394;
                    l_403 = (((*l_402) = 1L) ^ (p_80 |= 0x82A3L));
                }
                else
                {
                    short *l_404 = &l_394;
                    int l_410 = (-1L);
                    int *l_411 = &l_256;
                    (*l_118) = &g_358;
                    if (((l_404 == &l_394) > ((*g_35) && p_80)))
                    {
                        (*l_148) = (*l_115);
                    }
                    else
                    {
                        (*l_148) ^= g_138;
                        return &g_364;
                    }
                    l_405 &= (**l_118);
                    (*l_118) = func_82(((*l_411) &= ((g_160 && ((safe_rshift_func_int16_t_s_s(0x93C2L, (safe_add_func_int64_t_s_s(l_410, p_81)))) && (l_410 |= 0x3FB84F7EL))) | g_284)), &g_364, (safe_lshift_func_uint8_t_u_s(p_78, g_252.f0)));
                }
            }
        }
    }
    else
    {
        struct S0 ***l_414 = (void*)0;
        const struct S0 **l_416 = (void*)0;
        const struct S0 ***l_415 = &l_416;
        (*l_415) = (void*)0;
        return &g_62;
    }
lbl_466:
    (*l_419) = (safe_rshift_func_int8_t_s_u((&g_373 != (void*)0), 0));
    if (((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((*l_443) = (safe_mul_func_uint16_t_u_u(((p_81 | (0UL & (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(0xD43D43504BE0949ELL, (safe_mod_func_uint32_t_u_u((*g_35), (*g_35))))) < (((safe_sub_func_int64_t_s_s(((l_441 &= (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((*l_419), ((safe_lshift_func_uint16_t_u_u(((void*)0 != l_440), 15)) || p_81))) <= 0x487F612EL), (*l_419)))) & g_63), 7L)) != l_442) == 0x963C8BA747116D0ELL)), 7)))) | 0x95FA8F66L), 5L))) == (*l_419)), p_81)), (-3L))) ^ p_81))
    {
        long long l_502 = 0xE6150EFE6FD8733CLL;
        int l_514 = 0x647F0CF1L;
        int l_523 = 0xB0E268D7L;
        unsigned char *l_570 = &g_62;
        int l_619 = 0x09CEDE09L;
        int l_632 = (-6L);
        int l_668 = (-3L);
        int l_673 = 2L;
        int l_675 = 0xE14417E8L;
        int l_719 = 0L;
        int l_725 = 0xAD657C29L;
        unsigned l_739 = 0xBCCAAA31L;
        const int *l_747 = &l_717;
        for (l_394 = 0; (l_394 != (-28)); --l_394)
        {
            int *l_448 = (void*)0;
            int *l_449 = &g_110;
            unsigned char **l_463 = &l_116;
            int l_525 = (-4L);
            int l_541 = 0x310BBCF1L;
            int l_546 = (-1L);
            short l_576 = 0x85DAL;
            char *l_740 = &g_9;
            const int *l_744 = &l_619;
            (*l_449) |= ((-1L) <= (g_180 && (0x13L > 0xD4L)));
            for (l_442 = 0; (l_442 >= 26); l_442++)
            {
                short l_460 = 1L;
                unsigned char **l_464 = &l_116;
                int *l_577 = &l_172;
                int *l_578 = &g_180;
                int *l_579 = &l_262;
                int *l_580 = &g_358;
                int *l_581 = &l_172;
                int *l_582 = &l_541;
                int *l_583 = &l_183;
                int *l_584 = &l_525;
                int *l_585 = &g_180;
                int *l_586 = &l_541;
                int *l_587 = (void*)0;
                int *l_588 = (void*)0;
                int *l_589 = &g_358;
                int *l_590 = (void*)0;
                int *l_591 = &l_172;
                int *l_592 = &l_256;
                int *l_593 = (void*)0;
                int *l_594 = &l_514;
                int *l_595 = &l_262;
                int *l_596 = &g_358;
                int *l_597 = &l_541;
                int *l_598 = &l_172;
                int *l_599 = (void*)0;
                int *l_600 = &g_110;
                int *l_601 = &g_180;
                int *l_602 = &g_348;
                int *l_603 = &g_110;
                int *l_604 = &l_546;
                int *l_605 = &l_523;
                int *l_606 = &g_348;
                int *l_607 = &g_348;
                int *l_608 = &l_546;
                int *l_609 = &l_172;
                int *l_610 = &l_525;
                int *l_611 = (void*)0;
                int *l_612 = &l_525;
                int *l_613 = &l_183;
                int *l_614 = (void*)0;
                int *l_615 = (void*)0;
                int *l_616 = &l_256;
                int *l_617 = &l_172;
                int *l_618 = (void*)0;
                int *l_620 = (void*)0;
                int l_621 = 0x4369DB75L;
                int *l_622 = &l_546;
                int *l_623 = &l_621;
                int *l_624 = &l_546;
                int *l_625 = &l_541;
                int *l_626 = &l_621;
                int *l_627 = (void*)0;
                int *l_628 = &l_262;
                int *l_629 = &l_262;
                int *l_630 = &l_183;
                int *l_631 = &l_172;
                int *l_633 = (void*)0;
                int *l_634 = &l_621;
                int *l_635 = &g_348;
                int l_636 = 0x0E14F994L;
                int *l_637 = &g_348;
                int *l_638 = (void*)0;
                int *l_639 = &l_632;
                int *l_640 = &l_632;
                int *l_641 = (void*)0;
                int *l_642 = &g_358;
                int *l_643 = &g_110;
                int *l_644 = &l_203;
                int *l_645 = &l_523;
                int *l_646 = &l_256;
                int *l_647 = &l_619;
                int *l_648 = (void*)0;
                int *l_649 = &l_262;
                int l_650 = 0L;
                int *l_651 = &g_180;
                int *l_652 = &l_523;
                int *l_653 = &l_621;
                int *l_654 = &g_358;
                int *l_655 = &l_621;
                int *l_656 = &l_541;
                int *l_657 = (void*)0;
                int *l_658 = (void*)0;
                int *l_659 = &g_110;
                int *l_660 = (void*)0;
                int *l_661 = (void*)0;
                int *l_662 = &l_619;
                int *l_663 = &l_546;
                int *l_664 = &l_256;
                int *l_666 = &l_541;
                int *l_667 = (void*)0;
                int *l_669 = &l_650;
                int *l_670 = &l_514;
                int *l_671 = &g_348;
                int *l_672 = &l_619;
                int *l_674 = &l_525;
                int *l_676 = &l_525;
                int *l_677 = &g_110;
                int *l_678 = &l_621;
                int *l_679 = &g_110;
                int *l_680 = &l_525;
                int *l_681 = &l_675;
                int *l_682 = &g_110;
                int *l_683 = (void*)0;
                int *l_684 = (void*)0;
                int *l_685 = &l_541;
                int *l_686 = &l_525;
                int *l_687 = (void*)0;
                int *l_688 = &g_180;
                int *l_689 = &l_256;
                int *l_690 = &g_110;
                int *l_691 = &l_675;
                int *l_693 = &l_621;
                int *l_694 = &l_525;
                int *l_695 = &l_673;
                int *l_696 = &l_546;
                int *l_697 = &l_256;
                int *l_698 = &l_619;
                int *l_699 = &g_358;
                int *l_700 = (void*)0;
                int *l_701 = &l_650;
                int *l_702 = &g_358;
                int *l_703 = &l_692;
                int *l_704 = &l_692;
                int *l_705 = &l_546;
                int l_706 = 0xB32B34B1L;
                int *l_707 = &l_692;
                int *l_708 = &l_668;
                int *l_709 = &l_262;
                int *l_710 = &l_621;
                int *l_712 = &l_692;
                int *l_714 = &g_110;
                int *l_715 = &g_180;
                int *l_716 = &g_711;
                int *l_718 = &l_262;
                int *l_720 = &g_348;
                int *l_721 = &l_675;
                int *l_722 = &l_632;
                int *l_723 = (void*)0;
                int *l_724 = &l_523;
                int *l_726 = (void*)0;
                int *l_727 = &l_650;
                int *l_728 = &l_673;
                int *l_729 = &l_203;
                int l_730 = (-6L);
                int *l_732 = &l_730;
                int *l_733 = (void*)0;
                if ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((((*l_449) && ((p_78 != g_136) >= l_460)) && (g_63 <= (0xB0L == ((((safe_lshift_func_uint8_t_u_u(p_80, ((*l_116) = g_364))) & p_81) && (*l_419)) > (*l_449))))), 0L)) | p_78), g_126)), 0xCC7DL)))
                {
                    if (((*l_419) = p_80))
                    {
                        (*l_419) |= (l_463 != l_464);
                    }
                    else
                    {
                        int **l_465 = &l_448;
                        (*l_419) ^= (g_305 > (p_81 ^ p_81));
                        (*l_465) = (void*)0;
                    }
                    (*l_449) &= g_252.f0;
                    if (g_252.f0)
                        goto lbl_466;
                }
                else
                {
                    struct S0 ****l_473 = (void*)0;
                    struct S0 ***l_475 = &l_291;
                    struct S0 ****l_474 = &l_475;
                    struct S0 ****l_479 = (void*)0;
                    struct S0 ****l_480 = &g_476;
                    int l_487 = 0xC81CA323L;
                    unsigned l_492 = 1UL;
                    (*l_449) = (((0x1AL && ((((safe_lshift_func_uint16_t_u_s((((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((((*l_474) = &l_291) == ((*l_480) = g_476)), 1)), ((safe_add_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(p_80, 65526UL)), (-2L))), l_487)) && 4294967295UL))) & (safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(g_332, (*l_449))), 13))) | 0x15881B6FL), g_9)) >= g_252.f3) | l_460) != 0x9CD9L)) >= l_492) | 0x7174L);
                    if ((safe_rshift_func_uint16_t_u_s((((*l_449) & (safe_add_func_uint16_t_u_u((((*l_113) = ((void*)0 == g_497)) < l_499), (safe_add_func_int32_t_s_s(l_502, (l_502 < (((safe_mul_func_int16_t_s_s(g_36, (safe_add_func_uint64_t_u_u(((*l_443) ^= (!p_80)), ((**g_497) && (**g_497)))))) == 1UL) >= p_78))))))) > g_180), 6)))
                    {
                        int *l_507 = &g_348;
                        int *l_508 = &g_358;
                        int *l_509 = (void*)0;
                        int *l_510 = &g_110;
                        int *l_511 = &l_203;
                        int *l_512 = &g_180;
                        int *l_513 = (void*)0;
                        int *l_515 = &g_110;
                        int l_516 = 1L;
                        int *l_517 = &l_183;
                        int *l_518 = &l_514;
                        int *l_519 = &g_358;
                        int *l_520 = &g_358;
                        int *l_521 = &g_110;
                        int *l_522 = &g_358;
                        int *l_524 = &l_514;
                        int *l_526 = &l_172;
                        int *l_527 = (void*)0;
                        int *l_528 = &l_523;
                        int *l_529 = &g_110;
                        int *l_530 = &g_180;
                        int *l_531 = &l_262;
                        int *l_532 = &l_203;
                        int *l_533 = &l_525;
                        int *l_534 = &l_487;
                        int *l_535 = &g_348;
                        int *l_536 = &g_180;
                        int *l_537 = &l_183;
                        int *l_538 = &l_487;
                        int *l_539 = &l_172;
                        int *l_540 = &l_256;
                        int *l_542 = &l_487;
                        int *l_543 = &l_541;
                        int *l_544 = (void*)0;
                        int *l_545 = &l_262;
                        int *l_547 = &l_514;
                        int *l_548 = &l_183;
                        int *l_549 = &l_514;
                        int *l_550 = &l_487;
                        int *l_551 = &l_256;
                        int *l_552 = &g_180;
                        int *l_553 = &g_110;
                        int *l_554 = &g_348;
                        int *l_556 = &g_348;
                        int *l_557 = &g_358;
                        int *l_558 = (void*)0;
                        int *l_559 = &g_358;
                        int *l_560 = &l_525;
                        int *l_561 = (void*)0;
                        int *l_562 = (void*)0;
                        int *l_563 = &l_541;
                        int *l_564 = &l_256;
                        int *l_565 = &g_348;
                        int *l_566 = &l_262;
                        ++g_567;
                    }
                    else
                    {
                        if (l_492)
                            break;
                        if (g_332)
                            break;
                        if (g_110)
                            goto lbl_748;
                        return l_570;
                    }
                    for (g_284 = 23; (g_284 > 14); --g_284)
                    {
                        unsigned char l_573 = 0x5AL;
                        ++l_573;
                    }
                    if ((*l_419))
                        break;
                }
                g_734--;
            }
            (*l_419) = (l_675 != (safe_lshift_func_int16_t_s_s(l_739, (l_740 != (void*)0))));
            for (l_719 = 20; (l_719 == 14); l_719 = safe_sub_func_uint8_t_u_u(l_719, 9))
            {
                l_744 = g_743;
                for (l_523 = 0; (l_523 > 19); l_523 = safe_add_func_int64_t_s_s(l_523, 5))
                {
                    g_743 = &g_711;
                    (*l_419) ^= 0x04CD6CF8L;
                    (*l_419) = (p_78 ^ g_9);
                }
            }
        }
        (*l_419) = p_78;
        g_743 = l_747;
    }
    else
    {
lbl_748:
        g_358 = (&p_80 != &l_442);
        (*l_419) = ((p_80 <= l_749) != (*l_419));
        for (p_78 = (-17); (p_78 >= 17); p_78++)
        {
            int *l_752 = (void*)0;
            int *l_753 = &l_256;
            int *l_754 = (void*)0;
            int *l_755 = &g_711;
            int *l_756 = &l_262;
            int *l_757 = &l_183;
            int *l_758 = &l_717;
            int *l_759 = &l_717;
            int *l_760 = &l_262;
            int *l_761 = &g_110;
            int *l_762 = (void*)0;
            int l_763 = 0xCC7A82E0L;
            int *l_764 = (void*)0;
            int *l_765 = &l_256;
            int *l_766 = &l_203;
            int *l_767 = (void*)0;
            int *l_768 = &g_348;
            int *l_769 = &g_711;
            int *l_770 = (void*)0;
            int *l_771 = &g_358;
            int *l_772 = &g_358;
            int *l_773 = &l_183;
            int *l_774 = &l_203;
            int *l_775 = &l_256;
            int *l_776 = &l_665;
            int *l_777 = &l_262;
            int *l_778 = &l_203;
            int *l_779 = &g_358;
            int *l_780 = (void*)0;
            int *l_782 = &g_711;
            int l_783 = (-1L);
            int *l_784 = &l_713;
            int l_785 = 0x46F08C45L;
            int *l_786 = &g_180;
            int *l_787 = &g_180;
            int *l_788 = &l_783;
            int l_789 = 0xE6B55626L;
            int *l_790 = &l_256;
            int *l_791 = &l_717;
            int *l_792 = &l_262;
            int *l_794 = &l_256;
            int l_795 = 0x836FF04EL;
            int *l_796 = &g_711;
            int *l_797 = &l_262;
            int *l_798 = &g_180;
            short *l_814 = &l_394;
            int **l_815 = &l_803;
            l_799++;
            l_803 = l_802;
            (*l_815) = func_82((*g_743), &g_62, (safe_rshift_func_uint16_t_u_s(p_80, ((*l_814) ^= (safe_add_func_uint8_t_u_u(1UL, (+(((l_808 == l_809) >= ((*l_809) ^= (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((0x8BD5961FL <= 4L), g_9)), (*g_743))))) != 0x1170L))))))));
        }
    }
    return &g_364;
}







static unsigned * func_82(const int p_83, unsigned char * p_84, int p_85)
{
    const int **l_107 = (void*)0;
    int *l_109 = &g_110;
    int **l_108 = &l_109;
    (*l_108) = (void*)0;
    (*l_108) = (void*)0;
    return l_109;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_252.f0, "g_252.f0", print_hash_value);
    transparent_crc(g_252.f1, "g_252.f1", print_hash_value);
    transparent_crc(g_252.f2, "g_252.f2", print_hash_value);
    transparent_crc(g_252.f3, "g_252.f3", print_hash_value);
    transparent_crc(g_252.f4, "g_252.f4", print_hash_value);
    transparent_crc(g_252.f5, "g_252.f5", print_hash_value);
    transparent_crc(g_252.f6, "g_252.f6", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    transparent_crc(g_711, "g_711", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_734, "g_734", print_hash_value);
    transparent_crc(g_820.f0, "g_820.f0", print_hash_value);
    transparent_crc(g_820.f1, "g_820.f1", print_hash_value);
    transparent_crc(g_820.f2, "g_820.f2", print_hash_value);
    transparent_crc(g_820.f3, "g_820.f3", print_hash_value);
    transparent_crc(g_820.f4, "g_820.f4", print_hash_value);
    transparent_crc(g_820.f5, "g_820.f5", print_hash_value);
    transparent_crc(g_820.f6, "g_820.f6", print_hash_value);
    transparent_crc(g_1074, "g_1074", print_hash_value);
    transparent_crc(g_1089, "g_1089", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
