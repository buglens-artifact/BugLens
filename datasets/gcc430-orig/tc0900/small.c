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
   unsigned long long f0;
   unsigned short f1;
};

struct S1 {
   int f0;
   unsigned long long f1;
   unsigned short f2;
   int f3;
   int f4;
   int f5;
   short f6;
   int f7;
};


static long long g_20 = (-10L);
static unsigned g_21 = 0UL;
static unsigned g_24 = 4294967289UL;
static unsigned *g_23 = &g_24;
static struct S1 g_25 = {0xE97312B9L,0x8214D2FC5C3C3AE5LL,0x714BL,0x09A164E6L,7L,3L,-8L,0x57CF7A02L};
static int *g_65 = &g_25.f4;
static struct S0 g_72 = {18446744073709551615UL,0x6AB7L};
static char g_107 = 5L;
static unsigned g_193 = 0x24D1F9F7L;
static unsigned g_208 = 4294967295UL;
static struct S0 **g_254 = (void*)0;
static int g_260 = 4L;
static struct S1 g_266 = {-8L,0xDFF76065F3228100LL,0xDC1CL,0x4934B161L,0x8C39424FL,0x457C80C0L,-1L,-1L};
static struct S0 *g_271 = &g_72;
static unsigned char g_277 = 248UL;
static unsigned char *g_276 = &g_277;
static unsigned *g_286 = &g_21;
static unsigned g_294 = 6UL;
static unsigned char g_365 = 5UL;
static unsigned long long *g_394 = &g_72.f0;
static unsigned long long **g_393 = &g_394;
static int ***g_429 = (void*)0;
static struct S1 g_431 = {0x307E3283L,9UL,4UL,8L,5L,-1L,-2L,0xB84FF0BCL};
static int *g_455 = &g_266.f5;
static struct S1 *g_485 = (void*)0;
static int g_536 = 0x352B6711L;
static unsigned short *g_545 = &g_266.f2;
static unsigned **g_558 = (void*)0;
static unsigned ***g_557 = &g_558;
static unsigned g_578 = 18446744073709551615UL;
static int *g_706 = (void*)0;
static long long g_730 = 0L;
static long long *g_775 = &g_20;
static long long **g_774 = &g_775;



static char func_1(void);
static int * func_2(unsigned short p_3, unsigned short p_4);
static char func_8(long long p_9, int p_10);
static int func_13(char p_14, struct S1 p_15);
static int * func_31(int * p_32, int * p_33, int * p_34, char p_35, int p_36);
static int * func_37(unsigned * p_38, int p_39);
static int func_41(int p_42, struct S1 p_43);
static char func_46(unsigned * p_47, int * p_48, unsigned * p_49);
static unsigned * func_50(struct S0 p_51, unsigned * p_52);
static struct S0 func_53(unsigned * p_54);
static char func_1(void)
{
    int l_5 = (-8L);
    unsigned *l_11 = (void*)0;
    int l_12 = 0xC6F8B8AEL;
    int l_691 = 1L;
    unsigned short l_692 = 0xF904L;
    long long *l_693 = &g_20;
    int **l_803 = (void*)0;
    int **l_804 = &g_706;
    struct S0 l_807 = {0x7F4FB09842511A17LL,0x3FA9L};
    struct S0 *l_808 = (void*)0;
    struct S0 *l_809 = &l_807;
    (*l_804) = func_2(l_5, ((*g_545) = (safe_rshift_func_int8_t_s_u(func_8(((*l_693) = ((3UL <= ((l_691 = ((l_12 = 9UL) | func_13((safe_sub_func_uint8_t_u_u((8L | (safe_mul_func_uint8_t_u_u(((g_21 = g_20) >= (l_5 != ((safe_unary_minus_func_int16_t_s((0xA6E8F591L <= (0xA6E483BBL > (((void*)0 == g_23) ^ l_5))))) & 0UL))), (-1L)))), g_20)), g_25))) != l_692)) & g_431.f6)), g_431.f1), 2))));

    ;
    ;
    ;
    ;
    ;
    ;
    ;
    for (g_25.f2 = (-19); (g_25.f2 >= 20); g_25.f2++)
    {
        l_807 = func_53(l_11);
        (*l_804) = &g_536;
    }
    (*l_809) = func_53(l_11);
    return (**l_804);
}







static int * func_2(unsigned short p_3, unsigned short p_4)
{
    int *l_795 = &g_431.f4;
    int **l_796 = &l_795;
    unsigned long long *l_799 = &g_72.f0;
    struct S0 l_800 = {6UL,0xEEA1L};
    unsigned **l_801 = &g_286;
    int *l_802 = &g_536;
    (*l_796) = l_795;
    (*g_455) = ((safe_rshift_func_uint16_t_u_u((l_799 == (*g_393)), 0)) <= func_46(l_795, (*l_796), (*l_801)));

    ;
    return l_802;


}







static char func_8(long long p_9, int p_10)
{
    int l_698 = 8L;
    int *l_745 = &g_431.f4;
    struct S0 l_746 = {18446744073709551614UL,0xB1BCL};
    int *l_765 = (void*)0;
    struct S1 l_789 = {0xF48F2BBFL,0xC9A7B175744F19FALL,4UL,0xD4E5D193L,-1L,0x089FF922L,-1L,-3L};
    unsigned *l_792 = &g_21;
    for (g_20 = 0; (g_20 < (-16)); g_20 = safe_sub_func_uint16_t_u_u(g_20, 1))
    {
        unsigned char *l_701 = &g_277;
        int l_702 = 0L;
        char *l_727 = &g_107;
        char **l_726 = &l_727;
        char ***l_725 = &l_726;
        unsigned long long *l_741 = (void*)0;
        int l_742 = 0L;
        struct S0 l_747 = {0x9F7A75274DF136A0LL,1UL};
        unsigned *l_749 = &g_24;
    }
    return p_10;
}







static int func_13(char p_14, struct S1 p_15)
{
    char l_28 = 0xCAL;
    unsigned *l_40 = &g_21;
    struct S1 l_555 = {5L,0x72B20218102800F1LL,0xCE09L,0xE3838A26L,8L,0x54C023ECL,3L,1L};
    unsigned *l_562 = &g_21;
    int *l_571 = &g_536;
    unsigned *l_607 = (void*)0;
    long long *l_608 = (void*)0;
    unsigned short l_641 = 5UL;
    int ****l_660 = &g_429;
    unsigned char *l_686 = &g_365;
    unsigned char **l_687 = &g_276;
    unsigned char **l_688 = (void*)0;
    unsigned char *l_690 = &g_365;
    unsigned char **l_689 = &l_690;
    for (p_15.f1 = 0; (p_15.f1 < 17); ++p_15.f1)
    {
        int *l_561 = &l_555.f4;
        struct S1 l_572 = {-1L,0x47E783E292FA8359LL,1UL,0xF095E8D6L,0L,0x40F3624FL,-8L,-10L};
        struct S1 **l_581 = &g_485;
        unsigned **l_619 = &g_23;
        unsigned l_642 = 4294967295UL;
        int **l_643 = &l_571;
    }
    for (g_25.f4 = 0; (g_25.f4 >= 24); g_25.f4++)
    {
        unsigned short *l_646 = &l_555.f2;
        unsigned short *l_647 = &g_72.f1;
        unsigned long long l_650 = 0xDAEB1DF8406F166ALL;
        (*g_455) = ((*g_545) <= ((*l_647) = (((*l_646) = p_15.f7) | g_72.f1)));
        for (l_555.f3 = 0; (l_555.f3 <= (-9)); l_555.f3--)
        {
            return p_15.f0;
        }
        if (l_650)
            break;
        (*g_271) = func_53(l_607);
    }
    if ((*l_571))
    {
        unsigned *l_653 = &g_21;
        int l_661 = 0x5C5F31F3L;
        short *l_670 = (void*)0;
        short *l_671 = &l_555.f6;
        int *l_672 = &g_25.f4;
        struct S0 l_675 = {0x2D43D6DC3B8AC384LL,0xF6FBL};
        int **l_676 = &g_65;
        int **l_677 = &l_672;
        if (p_15.f0)
        {
            unsigned *l_651 = &g_24;
            int **l_652 = &g_65;
            long long l_654 = (-4L);
            (*l_652) = func_37(l_651, p_15.f0);

            ;
            ;
            ;
            (*l_571) = func_46(func_37(l_653, l_654), l_571, l_651);

            ;
        }
        else
        {
            int l_655 = 0L;
            return l_655;
        }

        ;
        ;
        ;
        (*g_455) = ((*g_545) != (safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((*g_455) != ((l_660 = l_660) == (void*)0)), ((*l_571) >= (p_15.f6 = (l_661 <= (safe_mod_func_int32_t_s_s(p_15.f3, (safe_sub_func_int64_t_s_s(p_15.f2, (safe_rshift_func_int16_t_s_u((((*l_671) = (safe_add_func_uint32_t_u_u(p_14, 1UL))) < p_15.f6), 7))))))))))), 0xDBD0L)));
        (*l_676) = &l_661;

        ;
        (*l_676) = func_31((*l_676), (*l_676), ((*l_677) = (*l_676)), p_15.f1, (*g_65));

        ;
        ;
    }
    else
    {
        int l_678 = (-1L);
        int *l_679 = &g_536;
        struct S0 ***l_683 = (void*)0;
        struct S0 ***l_684 = (void*)0;
        struct S0 ***l_685 = &g_254;
        l_678 = (*g_455);
        g_455 = func_31(&l_678, func_31(&g_536, l_571, (l_679 = func_31(&g_536, func_37(l_571, (l_678 ^ (*g_545))), l_562, p_15.f4, p_15.f6)), l_678, p_14), &l_678, p_15.f2, (*g_455));


        ;
        ;
        ;
        for (g_266.f3 = (-16); (g_266.f3 < 21); g_266.f3++)
        {
            int l_682 = 0xE92BDA41L;
            return l_682;
        }
        (*l_685) = &g_271;

        ;
    }


    ;
    ;
    ;
    ;
    (*l_571) = ((((*l_687) = l_686) == ((*l_689) = l_686)) < p_15.f7);

    ;
    return (*g_455);
}







static int * func_31(int * p_32, int * p_33, int * p_34, char p_35, int p_36)
{
    for (g_266.f3 = (-28); (g_266.f3 > (-27)); ++g_266.f3)
    {
        g_485 = (void*)0;
    }
    return &g_536;


}







static int * func_37(unsigned * p_38, int p_39)
{
    unsigned *l_55 = &g_21;
    unsigned **l_258 = &l_55;
    int *l_259 = &g_260;
    char *l_265 = &g_107;
    struct S0 l_385 = {0xA0B68F68C922A0F0LL,0x28FCL};
    struct S0 *l_421 = &g_72;
    int **l_426 = &g_65;
    int ***l_425 = &l_426;
    struct S1 l_430 = {0x56365849L,3UL,0xE9C6L,4L,0L,3L,0L,0x1D770C40L};
    struct S0 *l_442 = &l_385;
    unsigned *l_479 = &g_24;
    struct S1 l_490 = {0x28C306B8L,0xF0C31D8D4A9802F6LL,65528UL,1L,0x0AD0424AL,5L,0L,-5L};
    int l_519 = 0x6C4D17B3L;
    if (func_41(((*l_259) = (safe_add_func_int8_t_s_s(((*l_265) = func_46(((*l_258) = func_50(func_53(l_55), p_38)), l_259, p_38)), 2L))), g_266))
    {
        return &g_260;


    }
    else
    {
        short l_377 = 0x2994L;
        struct S0 l_386 = {18446744073709551606UL,0xCCA9L};
        unsigned long long *l_392 = &l_386.f0;
        unsigned long long **l_391 = &l_392;
        int l_419 = (-3L);
        struct S0 *l_420 = &g_72;
        struct S1 *l_454 = &l_430;
        int *l_456 = &g_266.f4;
        for (g_294 = 0; (g_294 < 33); g_294++)
        {
            short l_371 = 0xB3F4L;
            unsigned *l_399 = (void*)0;
            struct S1 l_403 = {0x2705520FL,18446744073709551609UL,0xEE10L,-4L,0x7B29225AL,0x385136B3L,0x890FL,0x50EA4E94L};
            struct S0 l_406 = {18446744073709551606UL,1UL};
            int *l_464 = &g_431.f5;
            if (l_371)
                break;
        }
    }

    ;

    ;
    for (g_20 = 0; (g_20 >= (-15)); g_20--)
    {
        struct S1 **l_467 = (void*)0;
        struct S1 **l_468 = (void*)0;
        struct S1 **l_469 = (void*)0;
        struct S1 *l_471 = (void*)0;
        struct S1 **l_470 = &l_471;
        unsigned *l_480 = &g_21;
        int l_489 = 0xB2AFB7D9L;
        unsigned **l_528 = &g_286;
        long long l_537 = (-4L);
        (*l_470) = &g_266;

        ;
    }
    return &g_536;


}







static int func_41(int p_42, struct S1 p_43)
{
    unsigned *l_267 = &g_24;
    struct S0 *l_268 = (void*)0;
    struct S0 *l_269 = (void*)0;
    int **l_270 = &g_65;
    int ***l_280 = &l_270;
    int *l_287 = &g_260;
    unsigned l_319 = 0UL;
    unsigned *l_351 = &g_208;
    g_72 = func_53(&g_24);
    (*l_270) = l_267;

    ;
    g_271 = l_268;

    ;
    if ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(g_266.f3, (((void*)0 != l_267) & 7L))), ((*g_276) = (((void*)0 == g_276) > g_266.f4)))))
    {
        int ***l_278 = &l_270;
        int ****l_279 = &l_278;
        int ****l_281 = &l_280;
        struct S0 l_282 = {18446744073709551615UL,0xB6F5L};
        unsigned **l_283 = (void*)0;
        unsigned **l_284 = (void*)0;
        unsigned **l_285 = &l_267;
        (*g_65) = (((*l_279) = l_278) == ((*l_281) = l_280));
        if (func_46((g_286 = ((*l_285) = func_50((l_282 = func_53(l_267)), l_267))), l_287, &g_208))
        {
            return g_25.f4;
        }
        else
        {
            char *l_289 = &g_107;
            char **l_288 = &l_289;
            char ***l_290 = &l_288;
            unsigned short *l_293 = &g_25.f2;
            (*l_290) = l_288;
            p_42 = (p_43.f4 = (func_46(&g_21, &g_260, &g_21) || (safe_mul_func_int8_t_s_s((g_25.f1 && 0x28A9L), ((*g_276) <= ((l_293 != (void*)0) && g_294))))));
        }

        ;
        ;
    }
    else
    {
        char l_299 = 2L;
        int *l_300 = &g_266.f4;
        int ****l_302 = &l_280;
        int *****l_301 = &l_302;
        int ****l_304 = &l_280;
        int *****l_303 = &l_304;
        char *l_305 = &g_107;
        unsigned short *l_308 = &g_25.f2;
        struct S0 l_313 = {18446744073709551610UL,65527UL};
        int *l_314 = &g_25.f4;
        struct S0 **l_316 = &l_268;
        struct S1 *l_338 = &g_266;
        int *l_344 = &g_266.f4;
        unsigned l_346 = 4294967295UL;
        unsigned char l_367 = 255UL;
        char l_368 = (-1L);
        if (((***l_280) > (safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((l_299 && ((0xE2FCE430C6EE4B11LL != (((&g_260 != l_300) && p_42) < ((*l_305) = (((*l_303) = ((*l_301) = &l_280)) != &l_280)))) > ((*l_308) = (safe_sub_func_int64_t_s_s(0x0D2ED5C3192946A0LL, g_266.f3))))), 4294967295UL)), 0xFD6FL))))
        {
lbl_315:
            (*l_287) = (safe_lshift_func_uint16_t_u_s(p_43.f2, g_266.f0));
        }
        else
        {
            (*l_287) = ((safe_sub_func_uint32_t_u_u(p_42, func_46(l_300, (l_314 = ((*l_270) = func_50(l_313, l_287))), &g_208))) == g_266.f3);

            ;
            ;
        }

        ;
        ;
        if (g_107)
            goto lbl_315;
        if (((((*l_316) = &l_313) == (void*)0) & 0xBEL))
        {
lbl_366:
            for (g_24 = (-14); (g_24 < 56); ++g_24)
            {
                (*l_287) = g_266.f0;
                if (p_43.f3)
                    continue;
                if (p_43.f2)
                    continue;
            }
            return l_319;
        }
        else
        {
            unsigned short l_322 = 65535UL;
            unsigned *l_341 = &g_24;
            struct S0 l_343 = {0x28ED99B6EB53D809LL,0x6F85L};
            int *l_345 = &g_266.f5;
            if (((*l_287) = p_42))
            {
                unsigned short l_337 = 0xF513L;
                (****l_301) = (*l_270);
                (*l_300) = (((+((*l_308) = (g_72.f1 = ((((*g_276) = ((g_266.f4 == 0UL) != l_322)) & (safe_rshift_func_int16_t_s_u(((*l_287) = g_72.f1), ((safe_add_func_int8_t_s_s(g_25.f1, (((safe_mul_func_int16_t_s_s((((safe_sub_func_int64_t_s_s(((((safe_lshift_func_int8_t_s_s((-2L), g_193)) | (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(g_20, g_294)), p_43.f3))) >= l_337) | g_72.f0), g_193)) == 1L) == 0x4FD064CEL), g_25.f7)) != p_42) <= 6UL))) >= p_43.f6)))) ^ 0xE02E3F62L)))) & g_25.f7) >= p_43.f1);
                l_338 = &p_43;

                ;
            }
            else
            {
                struct S0 l_349 = {1UL,65535UL};
                struct S0 l_350 = {0UL,0xCA66L};
                struct S0 l_361 = {9UL,0x6679L};
                unsigned *l_363 = &l_319;
                if (l_322)
                {
                    unsigned long long l_339 = 0x501072548CC66954LL;
                    return l_339;
                }
                else
                {
                    short l_342 = 1L;
                    (*l_300) = p_43.f6;
                    if (l_299)
                        goto lbl_340;
lbl_340:
                    (*l_287) = 5L;
                    (****l_301) = &g_260;

                    ;
                    (****l_304) = l_342;
                }

                ;
                l_345 = l_344;

                ;
                p_43.f4 = l_346;
                for (g_277 = 10; (g_277 >= 3); g_277 = safe_sub_func_int32_t_s_s(g_277, 9))
                {
                    long long *l_353 = &g_20;
                    long long **l_352 = &l_353;
                    int l_360 = 0x67E73101L;
                    struct S0 l_362 = {0UL,0x86D5L};
                    unsigned char *l_364 = &g_365;
                    (****l_304) = (****l_302);
                    (****l_303) = func_50(((**l_316) = l_349), func_50(l_350, l_351));

                    ;
                    if (((*l_287) = (((((*l_352) = &g_20) != &g_20) > ((safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s(p_43.f5, ((((*l_345) = l_360) ^ ((*l_364) = (g_260 && func_46(func_50(((**l_316) = (**l_316)), func_50((l_362 = l_361), func_50(func_53(&l_346), &l_346))), &g_260, l_363)))) && 4294967287UL))), g_266.f2)), 0x3BB0L)) ^ g_266.f6)) | g_277)))
                    {
                        (*l_345) = 5L;
                        if (g_25.f7)
                            goto lbl_366;
                        (**l_280) = &p_42;

                        ;
                    }
                    else
                    {
                        return (*l_287);
                    }

                    ;
                }

                ;
            }

            ;
            ;
            ;
            (*l_316) = &l_343;

            ;
            if ((*l_345))
            {
                (*l_344) = l_367;
                (*l_344) = (*l_287);
            }
            else
            {
                return l_368;


            }
        }

        ;

        ;
    }

    ;
    ;

    return (*l_287);


}







static char func_46(unsigned * p_47, int * p_48, unsigned * p_49)
{
    int **l_261 = &g_65;
    struct S1 l_262 = {-8L,4UL,0x168FL,1L,0x8D9240F4L,0L,0x74C4L,-1L};
    struct S1 *l_263 = (void*)0;
    unsigned char l_264 = 0x30L;
    (*l_261) = (void*)0;

    ;
    g_25 = l_262;
    return l_264;
}







static unsigned * func_50(struct S0 p_51, unsigned * p_52)
{
    int *l_58 = &g_25.f4;
    struct S1 l_78 = {0xC15C2583L,0x8F9E473B9571DA88LL,65527UL,0x72AF4091L,0x08AFAEF9L,0L,2L,6L};
    struct S0 l_88 = {0x8F18CA9A6AE6C26CLL,0UL};
    unsigned char l_143 = 0x9BL;
    struct S1 l_148 = {1L,0UL,1UL,1L,-1L,0x02EF1F56L,0x1A71L,0x620DE400L};
    int **l_171 = &g_65;
    int ***l_170 = &l_171;
    unsigned long long *l_237 = &l_88.f0;
    if (g_25.f0)
    {
        long long l_70 = 1L;
        int l_71 = 0x7B835292L;
        unsigned l_96 = 1UL;
        int **l_108 = &l_58;
        int ****l_172 = &l_170;
        if (((void*)0 != l_58))
        {
            int *l_66 = &g_25.f4;
            int *l_67 = &g_25.f5;
            for (g_25.f0 = 0; (g_25.f0 > (-11)); --g_25.f0)
            {
                int *l_61 = &g_25.f4;
                int **l_62 = (void*)0;
                int **l_63 = (void*)0;
                int **l_64 = &l_58;
                g_65 = ((*l_64) = l_61);

                ;
                l_66 = p_52;
            }


            (*g_65) = (l_66 != p_52);
            (*l_67) = ((*l_66) = ((l_66 == &g_24) & g_25.f1));
            if ((((((&g_65 == (void*)0) || (g_25.f1 || 0L)) & (((1L <= 65535UL) && (*g_65)) <= (l_71 = ((*l_67) = ((*p_52) || (safe_rshift_func_int16_t_s_s(((l_70 = (*l_58)) | 0x092EL), 14))))))) && p_51.f1) & g_25.f1))
            {
                struct S0 *l_73 = &g_72;
                (*l_73) = g_72;
            }
            else
            {
                unsigned char l_76 = 0xF0L;
                int **l_77 = &l_66;
                struct S1 *l_79 = (void*)0;
                struct S1 *l_80 = (void*)0;
                struct S1 *l_81 = &l_78;
                (*l_67) = ((*l_58) | ((safe_lshift_func_uint16_t_u_s(g_24, l_76)) || 0UL));
                (*l_77) = &l_71;

                ;
                (*l_81) = (g_25 = l_78);
                (*l_58) = ((*l_66) = (safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_72.f0, 0x69L)), 6)));
            }


        }
        else
        {
            for (g_25.f3 = 0; (g_25.f3 != 14); g_25.f3 = safe_add_func_uint32_t_u_u(g_25.f3, 9))
            {
                struct S0 *l_89 = &g_72;
                (*l_89) = l_88;
            }
        }
        for (g_21 = 0; (g_21 >= 58); g_21 = safe_add_func_uint32_t_u_u(g_21, 5))
        {
            struct S1 l_97 = {0xC7269306L,18446744073709551614UL,0xF8C0L,8L,-9L,0xAA3977A8L,0xE153L,3L};
            struct S0 l_115 = {6UL,1UL};
            unsigned char l_126 = 0UL;
            int *l_153 = &l_71;
        }
        (*g_65) = (((*l_172) = l_170) != (void*)0);
        (***l_172) = (*l_171);
    }
    else
    {
        int *l_173 = (void*)0;
        int ****l_174 = &l_170;
        unsigned long long *l_239 = &g_72.f0;
        (**l_170) = g_23;

        ;
        if ((*g_65))
        {
            int l_191 = 0x3768AC48L;
            unsigned char l_192 = 0x73L;
            int *l_194 = &l_148.f5;
            unsigned short l_222 = 0x332AL;
            l_173 = g_65;

            ;
            (*l_171) = p_52;


            if (((g_21 = (!((*g_23) = (l_174 == (void*)0)))) == (((safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((((((*l_174) = &l_171) != &l_171) > (g_25.f2 = (safe_mod_func_uint32_t_u_u(((0x29C8711E2EA09826LL != p_51.f0) == (g_107 = (safe_mod_func_uint8_t_u_u((((((safe_add_func_uint8_t_u_u(g_107, (safe_rshift_func_uint8_t_u_s((0x5517FA6EL & ((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((1L & g_20) == p_51.f1), l_191)), g_25.f5)) && g_25.f5)), p_51.f1)))) > 4294967287UL) != (*l_58)) ^ (-10L)) >= l_192), g_193)))), p_51.f1)))) < p_51.f0), l_192)) | g_20), l_191)) | l_192) >= p_51.f0)))
            {
                l_194 = ((***l_174) = (**l_170));


            }
            else
            {
                for (l_191 = (-20); (l_191 >= 20); ++l_191)
                {
                    unsigned char *l_206 = &l_143;
                    unsigned *l_207 = &g_208;
                    unsigned short *l_217 = &g_72.f1;
                    int l_218 = 0x308FB7BDL;
                    long long *l_219 = &g_20;
                }
            }


            (****l_174) = l_222;
        }
        else
        {
            char l_229 = 0x0BL;
            for (g_25.f1 = 0; (g_25.f1 <= 7); g_25.f1++)
            {
                unsigned long long **l_238 = &l_237;
                unsigned long long *l_241 = &g_72.f0;
                unsigned long long **l_240 = &l_241;
                unsigned long long *l_243 = &g_25.f1;
                unsigned long long **l_242 = &l_243;
                if (((****l_174) = ((((**l_171) >= 0UL) || g_193) | (g_25.f4 || (safe_add_func_int64_t_s_s((p_51.f0 & (-1L)), p_51.f0))))))
                {
                    (**l_170) = p_52;


                    if ((**l_171))
                    {
                        (*l_171) = (***l_174);
                    }
                    else
                    {
                        (***l_174) = g_23;

                        ;
                        return p_52;


                    }
                    return &g_21;


                }
                else
                {
                    for (l_88.f0 = 0; (l_88.f0 >= 27); l_88.f0 = safe_add_func_uint8_t_u_u(l_88.f0, 5))
                    {
                        int *l_230 = (void*)0;
                    }
                    (*l_171) = (**l_170);
                }
                if ((*g_65))
                    continue;
                (****l_174) = (safe_add_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(0x7A1AL, (safe_sub_func_uint16_t_u_u((((*l_242) = ((*l_240) = (l_239 = ((*l_238) = l_237)))) == (void*)0), p_51.f0)))) | g_72.f0), p_51.f1));

                ;
                ;
                ;
            }

            ;
        }


        ;
        ;
        for (g_193 = 0; (g_193 <= 2); g_193 = safe_add_func_int16_t_s_s(g_193, 8))
        {
            struct S1 l_246 = {9L,18446744073709551608UL,65528UL,3L,0x5B6DF973L,4L,-1L,-2L};
            struct S1 *l_247 = &l_246;
            struct S0 **l_255 = (void*)0;
            (*l_171) = g_23;

            ;
            (*l_247) = l_246;
            if (p_51.f0)
                continue;
            (*l_58) = (p_51.f0 & ((((safe_mul_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((p_51.f1 || (g_254 == (l_255 = g_254))), (((*l_237) = ((g_208 || 7UL) != (safe_rshift_func_int16_t_s_s(1L, 0)))) <= (****l_174)))) <= ((-10L) > (*g_23))), 0x45L)) && 0x0CL) || 0xB01C82AA6F4F445BLL) ^ 0L));
        }
    }
    return l_58;


}







static struct S0 func_53(unsigned * p_54)
{
    int l_56 = 0x47FD326DL;
    struct S0 l_57 = {18446744073709551611UL,0xFA23L};
    l_56 = g_25.f1;
    return l_57;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_25.f1, "g_25.f1", print_hash_value);
    transparent_crc(g_25.f2, "g_25.f2", print_hash_value);
    transparent_crc(g_25.f3, "g_25.f3", print_hash_value);
    transparent_crc(g_25.f4, "g_25.f4", print_hash_value);
    transparent_crc(g_25.f5, "g_25.f5", print_hash_value);
    transparent_crc(g_25.f6, "g_25.f6", print_hash_value);
    transparent_crc(g_25.f7, "g_25.f7", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_266.f0, "g_266.f0", print_hash_value);
    transparent_crc(g_266.f1, "g_266.f1", print_hash_value);
    transparent_crc(g_266.f2, "g_266.f2", print_hash_value);
    transparent_crc(g_266.f3, "g_266.f3", print_hash_value);
    transparent_crc(g_266.f4, "g_266.f4", print_hash_value);
    transparent_crc(g_266.f5, "g_266.f5", print_hash_value);
    transparent_crc(g_266.f6, "g_266.f6", print_hash_value);
    transparent_crc(g_266.f7, "g_266.f7", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_431.f0, "g_431.f0", print_hash_value);
    transparent_crc(g_431.f1, "g_431.f1", print_hash_value);
    transparent_crc(g_431.f2, "g_431.f2", print_hash_value);
    transparent_crc(g_431.f3, "g_431.f3", print_hash_value);
    transparent_crc(g_431.f4, "g_431.f4", print_hash_value);
    transparent_crc(g_431.f5, "g_431.f5", print_hash_value);
    transparent_crc(g_431.f6, "g_431.f6", print_hash_value);
    transparent_crc(g_431.f7, "g_431.f7", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
