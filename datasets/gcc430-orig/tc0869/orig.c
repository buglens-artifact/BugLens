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
   unsigned short f2;
   char f3;
};


static char g_2 = 0x7EL;
static int g_4 = 7L;
static int *g_11 = &g_4;
static struct S0 g_32 = {0xCD1B7E28L,0xBFE7374489B467BBLL,0xA88AL,0x16L};
static struct S0 *g_31 = &g_32;
static int g_65 = 0x2A44BF8EL;
static unsigned g_85 = 0xF3FD26F3L;
static int g_88 = (-1L);
static unsigned char g_101 = 0x8FL;
static unsigned short g_123 = 65535UL;
static unsigned long long g_126 = 18446744073709551614UL;
static unsigned g_127 = 0x821FDCAAL;
static struct S0 g_170 = {0x001084B8L,0xB552A0AEB11F9A04LL,0x778EL,0x67L};
static struct S0 g_210 = {0xF960FFDDL,0xDDBCA4C7201BE58ELL,0xB3F8L,-1L};
static unsigned short *g_226 = &g_210.f2;
static unsigned g_231 = 8UL;
static long long g_235 = 0L;
static int g_241 = 0x4E480967L;
static struct S0 g_266 = {0xACC8E27AL,0x988CC22B0298E0AALL,0x0B84L,5L};
static struct S0 *g_265 = &g_266;
static char *g_329 = &g_266.f3;
static char **g_328 = &g_329;
static long long *g_358 = &g_235;
static long long **g_357 = &g_358;
static unsigned g_360 = 9UL;
static unsigned char g_362 = 0x25L;
static long long g_365 = 1L;
static unsigned char *g_369 = &g_362;
static unsigned char **g_368 = &g_369;
static short g_381 = 0x2697L;
static unsigned *g_392 = &g_85;
static unsigned **g_391 = &g_392;
static unsigned char g_400 = 0x27L;
static short g_452 = 0xCFF1L;
static int *g_481 = &g_241;
static short *g_483 = &g_381;
static short **g_482 = &g_483;
static short g_555 = 1L;



static int func_1(void);
static int * func_5(unsigned p_6);
static struct S0 func_7(unsigned p_8, int * p_9, struct S0 p_10);
static int * func_18(int * p_19, char p_20, struct S0 * p_21, unsigned short p_22, unsigned char p_23);
static struct S0 * func_25(short p_26, unsigned p_27, char p_28, struct S0 * p_29);
static struct S0 func_35(struct S0 p_36, int * p_37, struct S0 * p_38, unsigned p_39, short p_40);
static int * func_42(long long p_43, char p_44, struct S0 p_45, int * p_46);
static unsigned char func_47(unsigned long long p_48);
static struct S0 func_50(char p_51, struct S0 p_52, int p_53, struct S0 * p_54, char p_55);
static char func_56(unsigned long long p_57, struct S0 * p_58, long long p_59);
static int func_1(void)
{
    int *l_3 = &g_4;
    int **l_565 = &l_3;
    (*l_3) = g_2;
    if (g_2)
        goto lbl_566;
    (*l_565) = func_5(g_4);
lbl_566:
    (*g_265) = (*g_31);
    (*g_265) = (*g_265);
    return (*l_3);
}







static int * func_5(unsigned p_6)
{
    struct S0 l_12 = {0xE505B0BBL,0xBFFBEFA5F9C71042LL,0x2BA7L,0xA5L};
    struct S0 *l_13 = &l_12;
    int *l_24 = &g_4;
    (*l_13) = func_7(((void*)0 == g_11), &g_4, l_12);
    for (l_12.f2 = 0; (l_12.f2 == 35); l_12.f2++)
    {
        for (l_12.f1 = (-4); (l_12.f1 > 23); l_12.f1 = safe_add_func_uint64_t_u_u(l_12.f1, 4))
        {
            int l_30 = 9L;
        }
    }
    return l_24;
}







static struct S0 func_7(unsigned p_8, int * p_9, struct S0 p_10)
{
    return p_10;
}







static int * func_18(int * p_19, char p_20, struct S0 * p_21, unsigned short p_22, unsigned char p_23)
{
    char ***l_370 = &g_328;
    int l_384 = 0x8C172E0DL;
    int l_388 = 0xA665CAF6L;
    struct S0 *l_407 = &g_266;
    short *l_436 = &g_381;
    int l_472 = 0x94DDC960L;
    unsigned **l_476 = &g_392;
    long long l_524 = 0x60F2094E8B0BB53FLL;
    int l_558 = (-1L);
    int **l_560 = (void*)0;
    int **l_561 = (void*)0;
    int **l_562 = (void*)0;
    int **l_563 = (void*)0;
    int **l_564 = &g_11;
    if ((safe_lshift_func_int8_t_s_s(((void*)0 == g_368), 6)))
    {
        int **l_371 = &g_11;
        short *l_380 = &g_381;
        int l_387 = (-6L);
        struct S0 *l_389 = &g_266;
        unsigned long long l_390 = 0x80029A20042B92E4LL;
        unsigned ***l_393 = &g_391;
        (*l_371) = func_42((l_370 == &g_328), p_20, (*g_265), &g_88);
        l_388 &= ((safe_add_func_uint64_t_u_u((func_47((safe_sub_func_uint32_t_u_u(((-6L) <= (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(0L, g_32.f0)), ((*l_380) = ((*g_11) || (-1L)))))), p_20))) > ((*p_19) = (safe_mod_func_int32_t_s_s(l_384, (safe_mod_func_uint32_t_u_u(g_32.f3, l_387)))))), 0x24AD25D5551144C9LL)) <= l_387);
        (*p_19) &= (l_384 ^ func_56(func_56((**l_371), p_21, (**g_357)), l_389, (((*l_380) = (l_390 || (p_22 == (g_365 = (l_388 | (-1L)))))) <= p_20)));
        (*l_393) = g_391;
    }
    else
    {
        unsigned char *l_396 = &g_101;
        unsigned char *l_399 = &g_400;
        unsigned l_401 = 1UL;
        short *l_402 = &g_381;
        struct S0 *l_403 = &g_266;
        struct S0 **l_404 = (void*)0;
        struct S0 **l_405 = (void*)0;
        struct S0 **l_406 = &l_403;
        int **l_408 = (void*)0;
        int **l_409 = &g_11;
        unsigned short *l_437 = (void*)0;
        unsigned short *l_438 = (void*)0;
        unsigned long long l_439 = 0x1370501B564FD808LL;
        int l_495 = 8L;
        unsigned short l_516 = 0x4E34L;
        unsigned l_533 = 0x39523C6DL;
        int *l_552 = &g_65;
lbl_503:
        (*l_406) = func_25(((safe_add_func_uint8_t_u_u((p_23 = ((*l_396) = (!((*g_369) ^= l_388)))), ((*l_399) = (l_388 > ((*g_226) == ((safe_rshift_func_int16_t_s_u(p_20, 0)) && 0x91BB542E95D1BED8LL)))))) > g_32.f3), (((*l_402) ^= l_401) != l_388), (1L != 4294967295UL), l_403);
        (*l_409) = func_42(func_56(g_127, l_407, (*g_358)), ((p_22 <= p_23) != ((**g_357) ^ ((g_241 | (*p_19)) <= 65535UL))), (*p_21), &l_384);
        (*p_19) = 0x6255CB79L;
        if (((safe_mod_func_int64_t_s_s((func_56(((safe_add_func_int64_t_s_s(((safe_add_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(p_20, p_23)), 3)) || ((**l_409) = ((3UL && (safe_sub_func_uint16_t_u_u(0UL, ((safe_lshift_func_uint8_t_u_u(((**g_368) = (safe_add_func_uint32_t_u_u((p_23 != ((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((func_56((~p_23), ((*l_406) = l_407), ((+((*g_226) > (p_22 = (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((&g_381 == l_436) <= (**l_409)), p_20)), g_123))))) || 0L)) ^ p_23), l_388)), (*g_226))) == 1UL)), l_388))), p_20)) <= g_210.f1)))) >= 0xA7AD1B602BB132C4LL))) & 5L), p_20)) < 9UL) >= p_20), 254UL)) >= 0xAC73L), p_20)) != 0x62F114BEL), &g_210, (**g_357)) > p_23), 0xEA55186942E31185LL)) | l_439))
        {
            unsigned l_448 = 3UL;
            short *l_454 = &g_452;
            int *l_455 = &g_65;
            struct S0 *l_474 = &g_32;
            (*l_409) = &g_4;
            for (g_210.f0 = (-30); (g_210.f0 < (-18)); g_210.f0 = safe_add_func_uint16_t_u_u(g_210.f0, 1))
            {
                unsigned long long *l_442 = (void*)0;
                unsigned long long *l_443 = &l_439;
                short *l_451 = &g_452;
                short **l_453 = &l_436;
                (*l_409) = func_42(((-1L) == (((*l_443) = g_101) < ((((void*)0 != &g_126) >= 0xB3L) != ((((*l_399) = (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((func_47(l_448) ^ ((*l_402) = l_384)) == (((safe_rshift_func_uint8_t_u_s((((*l_453) = (l_451 = g_226)) != l_454), p_20)) <= 0x9660L) == (*g_226))), 3)), 8))) ^ 1L) != 0xD1853BCCL)))), p_22, (*p_21), l_455);
                for (g_210.f2 = 0; (g_210.f2 <= 49); g_210.f2 = safe_add_func_uint32_t_u_u(g_210.f2, 1))
                {
                    long long l_464 = 0x6D1B89531034354BLL;
                    for (l_439 = 10; (l_439 != 54); l_439++)
                    {
                        char *l_471 = &g_210.f3;
                        long long l_473 = 0x9C670EDC74811CE0LL;
                        int *l_475 = &g_241;
                        (*g_11) ^= 0x4C4648E6L;
                        (*l_475) &= ((safe_add_func_int8_t_s_s((((*p_19) = 1L) == ((*g_369) != (*g_369))), (safe_rshift_func_int16_t_s_s(func_56(l_464, func_25(((safe_sub_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((((*l_471) |= (((void*)0 == &g_88) < ((***l_370) = (-1L)))) || (+(**g_328))), ((!(((*g_369) & l_388) || g_2)) != l_384))) ^ (*g_392)), p_20)) ^ l_472), p_23)) > l_473), p_23, p_20, l_474), (*g_358)), 5)))) >= p_20);
                        (**l_409) = ((void*)0 != l_476);
                    }
                    for (g_452 = 0; (g_452 != 10); g_452 = safe_add_func_int8_t_s_s(g_452, 3))
                    {
                        (*l_455) = (safe_add_func_uint32_t_u_u(func_47(p_23), 0xCE5FE1BBL));
                    }
                }
                (*l_407) = (*l_407);
                (*p_19) ^= (*g_11);
            }
        }
        else
        {
            unsigned l_489 = 6UL;
            int *l_544 = (void*)0;
            short **l_550 = &l_436;
            (*l_409) = &g_241;
            if (((**g_328) != ((*g_369) = (**g_368))))
            {
                short ***l_484 = &g_482;
                g_481 = p_19;
                (*l_484) = g_482;
                (*g_481) = (safe_sub_func_uint8_t_u_u(func_47(p_22), ((safe_lshift_func_uint16_t_u_s((func_56(p_22, &g_210, l_489) && 0xB3L), 9)) == (l_489 <= g_231))));
            }
            else
            {
                char *l_491 = &g_32.f3;
                int l_514 = (-2L);
                int l_515 = 0x3799410EL;
                long long l_517 = (-8L);
                if (((safe_unary_minus_func_int8_t_s(((*l_491) ^= (**g_328)))) || func_47(g_170.f2)))
                {
                    long long ***l_498 = (void*)0;
                    int *l_502 = &l_384;
                    for (l_388 = (-24); (l_388 >= (-22)); l_388++)
                    {
                        int *l_494 = (void*)0;
                        l_495 |= func_47((l_388 && (*p_19)));
                    }
                    (*l_409) = func_42((**l_409), (**g_328), (*p_21), p_19);
                    for (g_101 = 0; (g_101 == 34); g_101++)
                    {
                        long long ****l_499 = &l_498;
                        (**l_406) = func_7((**g_391), &g_88, func_35((*p_21), &g_65, func_25((((&g_357 != ((*l_499) = l_498)) && p_23) | (p_20 = (p_23 | (safe_lshift_func_uint8_t_u_s(((*l_399) &= (**g_368)), 6))))), g_170.f1, l_388, p_21), p_22, l_472));
                        return &g_88;
                    }
                    (*p_19) = (*p_19);
                }
                else
                {
                    unsigned short l_506 = 0UL;
                    int *l_511 = &l_495;
                    if (l_495)
                        goto lbl_503;
                    if ((safe_add_func_uint8_t_u_u((func_56(l_506, p_21, p_22) < (safe_add_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u(((void*)0 != l_511), (safe_lshift_func_uint16_t_u_u((l_514 = 0x9F6CL), l_515)))) & l_516) | p_20), 1UL))), l_517)))
                    {
                        (*g_11) = (((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(func_56(l_489, p_21, ((~(((safe_sub_func_uint16_t_u_u(l_524, p_20)) > ((&p_19 != (void*)0) & (*g_481))) == (**g_482))) | ((safe_lshift_func_int16_t_s_u((**g_482), 6)) ^ p_23))), 0xDA1CL)), 3)) && 0xC4L) < (*g_358));
                        return p_19;
                    }
                    else
                    {
                        return p_19;
                    }
                }
                (*g_481) = ((*p_19) = (*p_19));
                if ((((**l_409) = ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(1UL, 0)), 12)) ^ (safe_lshift_func_int16_t_s_u(((**g_482) = l_533), (((*g_368) != (void*)0) >= 0UL))))) != 0xF0BBL))
                {
                    struct S0 l_540 = {0x4B1737E8L,18446744073709551608UL,0UL,0x30L};
                    struct S0 *l_541 = &g_170;
                    char **l_549 = &g_329;
                    (*l_541) = (l_540 = ((**l_406) = func_35(func_35(func_35((*g_265), &g_65, &g_32, ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(p_23, 1)) | p_20), (safe_add_func_int32_t_s_s(l_388, (*g_11))))) ^ 4UL), l_472), g_392, &g_210, l_489, (*g_483)), &l_388, &g_210, l_489, (**g_482))));
                    for (g_32.f0 = (-24); (g_32.f0 <= (-2)); g_32.f0++)
                    {
                        (*l_409) = l_544;
                    }
                    (*g_481) &= ((0UL & (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((**g_482) = func_56(p_22, &g_210, l_384)), 7)), (**g_328)))) | ((void*)0 == l_549));
                }
                else
                {
                    if (l_515)
                    {
                        (*p_19) = 0L;
                        (*p_19) ^= (*g_11);
                    }
                    else
                    {
                        short ***l_551 = &l_550;
                        (**l_409) &= (*p_19);
                        (*l_551) = l_550;
                    }
                    l_552 = (void*)0;
                }
            }
            for (g_32.f1 = (-17); (g_32.f1 == 12); g_32.f1++)
            {
                unsigned ***l_556 = &g_391;
                struct S0 *l_557 = &g_170;
                unsigned l_559 = 4294967287UL;
                if (g_555)
                    break;
                (*g_481) = l_559;
            }
        }
    }
    (*l_564) = p_19;
    return &g_65;
}







static struct S0 * func_25(short p_26, unsigned p_27, char p_28, struct S0 * p_29)
{
    struct S0 l_41 = {-8L,0x748AEE511904E20ELL,6UL,0x83L};
    int *l_346 = &g_241;
    int *l_349 = &g_88;
    long long *l_354 = &g_235;
    long long **l_353 = &l_354;
    for (g_32.f1 = 28; (g_32.f1 > 46); ++g_32.f1)
    {
        int l_60 = (-1L);
        int **l_336 = (void*)0;
        int **l_337 = &g_11;
        int **l_347 = (void*)0;
        int **l_348 = &l_346;
        long long *l_351 = &g_235;
        long long **l_350 = &l_351;
        long long ***l_352 = &l_350;
        long long ***l_355 = (void*)0;
        long long ***l_356 = &l_353;
        unsigned char *l_359 = &g_101;
        unsigned char *l_361 = &g_362;
    }
    return &g_266;
}







static struct S0 func_35(struct S0 p_36, int * p_37, struct S0 * p_38, unsigned p_39, short p_40)
{
    struct S0 l_302 = {-6L,0x2525884CE0FD16B3LL,0x67B5L,5L};
    int **l_303 = &g_11;
    struct S0 **l_315 = (void*)0;
    char **l_330 = &g_329;
    (*l_303) = func_42(p_36.f1, p_36.f0, l_302, func_42(g_88, g_101, ((*g_265) = (*p_38)), p_37));
    for (g_32.f0 = 0; (g_32.f0 >= 22); g_32.f0++)
    {
        struct S0 **l_314 = &g_265;
        struct S0 ***l_313 = &l_314;
        struct S0 ***l_316 = &l_315;
        char *l_317 = (void*)0;
        int *l_318 = &g_241;
        int *l_319 = &g_88;
        for (p_36.f3 = (-11); (p_36.f3 <= 15); p_36.f3++)
        {
            struct S0 l_308 = {0xE27C906AL,0x5C1B21CF6594A5C4LL,6UL,-8L};
            return l_308;
        }
        (*l_319) |= ((*l_318) &= (g_85 < (g_170.f3 &= (safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(((0xEEL <= ((250UL != (((*l_313) = (void*)0) == ((*l_316) = l_315))) > (*g_226))) > g_32.f3), (**l_303))), 14)))));
        for (l_302.f0 = 4; (l_302.f0 <= (-8)); l_302.f0 = safe_sub_func_uint32_t_u_u(l_302.f0, 6))
        {
            if ((*g_11))
                break;
            for (g_32.f3 = 27; (g_32.f3 > 5); g_32.f3--)
            {
                (*l_318) = (((0x01F27245L == (safe_lshift_func_uint8_t_u_s(255UL, 5))) >= g_32.f3) >= (p_36.f0 > ((safe_rshift_func_int8_t_s_u(func_47((func_47((g_328 != (void*)0)) <= (l_330 != (void*)0))), g_32.f2)) <= g_32.f0)));
            }
            if ((*p_37))
                continue;
        }
        if ((*g_11))
            continue;
    }
    for (g_2 = 20; (g_2 < (-8)); --g_2)
    {
        int *l_333 = &g_4;
        (*l_333) &= (*p_37);
        (**l_303) &= 0L;
        (**l_303) = ((0x4C6CEB2BL && ((safe_sub_func_int64_t_s_s(func_47((*l_333)), 0x9BA98011CAAB8DD6LL)) <= g_32.f2)) && (*p_37));
    }
    return (*p_38);
}







static int * func_42(long long p_43, char p_44, struct S0 p_45, int * p_46)
{
    return &g_65;
}







static unsigned char func_47(unsigned long long p_48)
{
    short l_49 = 0L;
    (*g_11) |= l_49;
    return l_49;
}







static struct S0 func_50(char p_51, struct S0 p_52, int p_53, struct S0 * p_54, char p_55)
{
    unsigned *l_211 = &g_85;
    unsigned short *l_212 = &g_210.f2;
    unsigned short **l_213 = &l_212;
    int l_217 = 0x86D9A306L;
    unsigned long long l_236 = 0xE378A0C2E42F9106LL;
    char *l_253 = &g_210.f3;
    int *l_254 = &g_88;
    struct S0 **l_267 = &g_31;
    if (((((*l_211) = (&g_101 == (void*)0)) || g_210.f2) ^ (((*l_213) = l_212) != &g_123)))
    {
        int **l_214 = (void*)0;
        int *l_216 = &g_88;
        int **l_215 = &l_216;
        long long *l_234 = &g_235;
        unsigned *l_237 = (void*)0;
        int *l_238 = (void*)0;
        int *l_239 = (void*)0;
        int *l_240 = &g_241;
        int l_264 = 0xB272FC51L;
        short l_268 = 1L;
        unsigned l_277 = 1UL;
        struct S0 l_288 = {1L,0x56E99656D3FD831ALL,0UL,0xD4L};
        (*l_215) = &g_88;
        l_217 |= 0x16F25517L;
        if ((((((*l_240) ^= (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u((((func_56(g_210.f3, &p_52, g_32.f0) & (safe_lshift_func_uint16_t_u_s(((p_53 = (g_226 != ((*l_213) = g_226))) & (l_217 = (safe_mod_func_uint8_t_u_u(((l_217 < g_231) || (((*l_234) ^= (safe_add_func_uint16_t_u_u((*g_226), 8L))) != g_32.f1)), l_236)))), 2))) | l_236) > g_231), l_236)), g_210.f1)), g_210.f1))) && l_236) | 65530UL) <= l_236))
        {
            unsigned short l_242 = 0x8A76L;
            struct S0 **l_243 = &g_31;
            unsigned char *l_251 = &g_101;
            unsigned char **l_252 = &l_251;
            struct S0 *l_257 = &g_210;
            int l_286 = 2L;
            long long **l_289 = &l_234;
            l_217 &= ((-8L) & ((func_56(l_242, ((*l_243) = &g_210), g_210.f0) || (!((g_170.f2 == g_210.f0) >= l_242))) <= ((safe_lshift_func_int8_t_s_s((1UL != l_242), g_210.f2)) & p_53)));
            if ((((0x3BE4332A91C8B06DLL >= ((((safe_lshift_func_int16_t_s_s(0x3FD8L, 9)) > (safe_rshift_func_int8_t_s_s(g_170.f3, (safe_unary_minus_func_uint8_t_u(((*g_226) | (0x210DL != (((*l_252) = l_251) != (void*)0)))))))) >= (l_253 == &g_2)) > g_65)) == g_170.f0) >= l_217))
            {
                short l_255 = 2L;
                l_255 ^= (l_217 != ((l_254 != &p_53) >= p_52.f0));
            }
            else
            {
                int *l_256 = &g_88;
                (*l_215) = l_256;
                (*l_254) = (func_56(p_52.f0, l_257, (p_52.f3 || (0x12L == func_56(((((p_52.f0 != (*g_226)) == (safe_sub_func_int8_t_s_s(((*l_253) = ((safe_add_func_uint16_t_u_u(func_56(g_170.f0, &g_170, g_2), l_264)) || 254UL)), 0xBAL))) && 4294967290UL) >= (*l_240)), g_265, p_52.f0)))) || 18446744073709551606UL);
                l_256 = &p_53;
                l_268 = ((*l_256) |= (&l_257 == l_267));
            }
            (*l_215) = &g_88;
            for (g_210.f0 = (-28); (g_210.f0 < 4); g_210.f0 = safe_add_func_uint64_t_u_u(g_210.f0, 6))
            {
                short *l_285 = &l_268;
                for (g_123 = (-22); (g_123 >= 33); g_123 = safe_add_func_int16_t_s_s(g_123, 1))
                {
                    (*l_216) = ((void*)0 == g_226);
                }
                if (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(l_242, 7)), ((*l_251) = ((p_53 = (*l_254)) >= ((*l_254) != 0x9176L))))) || (l_277 != (g_235 == (l_286 ^= (safe_unary_minus_func_uint32_t_u(((safe_sub_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(((*l_285) &= (safe_lshift_func_uint16_t_u_u((*g_226), 10))), (+p_52.f2))) && (((((*l_251) &= 0xE6L) ^ 0x3DL) == (-1L)) || g_170.f2)), p_52.f1)) || 0x34L))))))))
                {
                    unsigned l_287 = 0x3E1DE6E2L;
                    if (p_53)
                    {
                        if (l_287)
                            break;
                        return l_288;
                    }
                    else
                    {
                        char l_290 = (-6L);
                        l_289 = &l_234;
                        if (l_290)
                            continue;
                        return (*g_265);
                    }
                }
                else
                {
                    (*l_215) = &g_65;
                }
            }
        }
        else
        {
lbl_301:
            for (l_277 = 7; (l_277 > 18); l_277 = safe_add_func_int16_t_s_s(l_277, 2))
            {
                int l_293 = 0L;
                short *l_296 = (void*)0;
                short *l_297 = &l_268;
                (*l_254) = ((l_293 != g_235) > (safe_rshift_func_int16_t_s_s(((*l_297) = l_293), 11)));
            }
            p_53 = (safe_unary_minus_func_uint64_t_u(((func_56(p_52.f3, &p_52, (safe_rshift_func_int8_t_s_u(((*l_253) = (-4L)), 2))) & p_51) == (p_53 == 4294967295UL))));
            if (g_170.f2)
                goto lbl_301;
            (*l_240) = (*l_254);
        }
        (*l_254) = (&p_52 == &l_288);
    }
    else
    {
        (*l_254) = p_52.f1;
    }
    return (*p_54);
}







static char func_56(unsigned long long p_57, struct S0 * p_58, long long p_59)
{
    unsigned l_67 = 0xC132D45AL;
    int *l_107 = (void*)0;
    int l_128 = 0L;
    struct S0 *l_160 = (void*)0;
    short l_168 = 0x95F9L;
    struct S0 **l_173 = &l_160;
    char ***l_193 = (void*)0;
    struct S0 *l_209 = &g_170;
    if (p_57)
    {
        struct S0 **l_66 = &g_31;
        for (g_2 = 19; (g_2 == (-13)); g_2 = safe_sub_func_int64_t_s_s(g_2, 2))
        {
            int *l_63 = (void*)0;
            int *l_64 = &g_65;
            (*l_64) = ((p_57 != (-5L)) && (p_59 == p_59));
        }
        (*l_66) = &g_32;
        (*l_66) = (*l_66);
    }
    else
    {
        int l_68 = 0x2E206C16L;
        int *l_144 = &l_128;
        char ***l_145 = (void*)0;
        short l_167 = 0xA9C2L;
        int *l_171 = (void*)0;
        int *l_172 = &g_88;
lbl_143:
        if (p_59)
        {
            unsigned long long l_69 = 1UL;
            char *l_91 = &g_2;
            char **l_90 = &l_91;
            int l_99 = (-10L);
            l_68 = l_67;
            l_69 |= l_68;
            for (g_2 = 29; (g_2 == 14); --g_2)
            {
                short l_72 = 1L;
                if (l_72)
                    break;
                for (l_68 = 0; (l_68 >= (-13)); l_68 = safe_sub_func_int32_t_s_s(l_68, 1))
                {
                    int *l_75 = &g_65;
                    char ***l_92 = &l_90;
                    (*l_75) ^= (g_2 != g_32.f3);
                    for (l_69 = 0; (l_69 == 16); l_69++)
                    {
                        short *l_82 = &l_72;
                        struct S0 *l_83 = &g_32;
                        unsigned *l_84 = &g_85;
                        char *l_86 = &g_32.f3;
                        int *l_87 = &g_88;
                        int **l_89 = &l_75;
                    }
                    (*l_92) = l_90;
                }
                return g_88;
            }
            if (l_67)
            {
                unsigned long long l_98 = 0x49225D623911DF38LL;
                unsigned char *l_100 = &g_101;
                int *l_106 = &g_88;
                int **l_108 = &l_107;
                (*l_106) = (~(((safe_sub_func_int16_t_s_s((0x4D5381D8L > (safe_rshift_func_int16_t_s_u(((((*l_100) = (l_99 = (p_59 != ((safe_unary_minus_func_int32_t_s(l_98)) && p_59)))) && (g_32.f2 > (safe_mod_func_int64_t_s_s(p_59, (p_59 & ((safe_mod_func_uint16_t_u_u(((g_32.f0 && 0xD86F2FEC8B64E3C6LL) >= p_59), 0xB049L)) == p_59)))))) <= l_67), 7))), g_88)) ^ 0x5BC5B369L) || p_57));
                if (g_2)
                    goto lbl_143;
                (*l_108) = l_107;
            }
            else
            {
                int *l_109 = (void*)0;
                int *l_110 = &g_88;
                (*l_110) &= p_57;
            }
        }
        else
        {
            int *l_140 = (void*)0;
            int **l_141 = &l_107;
            int **l_142 = &l_140;
            for (g_88 = (-25); (g_88 < (-7)); ++g_88)
            {
                unsigned l_117 = 4294967293UL;
                int l_124 = 0x11B1975CL;
                unsigned long long *l_136 = &g_126;
                for (g_32.f0 = (-18); (g_32.f0 >= 0); g_32.f0 = safe_add_func_int64_t_s_s(g_32.f0, 1))
                {
                    unsigned l_120 = 8UL;
                    struct S0 l_131 = {0x7FEFA8C4L,0x3BBE6313C76A600ELL,0x6C3AL,0xFFL};
                    int *l_137 = (void*)0;
                    int *l_138 = (void*)0;
                    int *l_139 = &l_128;
                    if ((safe_mod_func_uint32_t_u_u(p_59, l_117)))
                    {
                        unsigned short *l_121 = (void*)0;
                        unsigned short *l_122 = &g_123;
                        unsigned long long *l_125 = &g_126;
                        int *l_129 = &g_65;
                        int **l_130 = &l_129;
                        g_65 |= (9L || g_101);
                        (*l_129) = (l_128 = ((safe_mod_func_uint16_t_u_u(g_32.f3, (l_124 = ((*l_122) = l_120)))) <= (l_120 == (g_127 = ((*l_125) = ((p_59 ^ (&g_85 == l_107)) & g_2))))));
                        if (p_57)
                            break;
                        (*l_130) = &l_68;
                    }
                    else
                    {
                        int **l_132 = &l_107;
                        l_131 = (*p_58);
                        (*l_132) = &g_88;
                    }
                    for (l_128 = 0; (l_128 > 18); ++l_128)
                    {
                        int *l_135 = &g_65;
                        if (p_59)
                            break;
                        (*l_135) = 0xD1050BF1L;
                    }
                    (*l_139) = (&p_57 == l_136);
                }
                return p_59;
            }
            (*l_142) = ((*l_141) = l_140);
        }
        (*l_144) &= 0x69CA922CL;
        if ((((-1L) >= g_85) & (l_145 == (void*)0)))
        {
            unsigned short l_156 = 0x2685L;
            int l_157 = 0L;
            unsigned *l_158 = &g_85;
            int *l_159 = &g_65;
            (*l_159) ^= (safe_mod_func_uint8_t_u_u(255UL, (safe_lshift_func_int16_t_s_u(((65534UL < (4294967286UL && (((p_57 && (!(~g_126))) >= g_88) < (safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((*l_158) |= (safe_add_func_int32_t_s_s(((~(!(p_59 | g_126))) < ((l_156 != (-9L)) & l_157)), g_123))), (*l_144))), l_67))))) < p_59), 10))));
        }
        else
        {
            struct S0 **l_161 = (void*)0;
            struct S0 **l_162 = &g_31;
            unsigned l_163 = 0x03B38435L;
            unsigned char *l_166 = &g_101;
            int *l_169 = &g_88;
            (*l_162) = l_160;
            (*l_144) &= (l_163 != (safe_add_func_uint8_t_u_u(p_57, ((*l_166) = p_57))));
            g_170 = func_7(((p_57 | (l_167 != (g_32.f0 == g_32.f0))) && ((((void*)0 == &l_128) && l_168) && 0L)), l_169, (*p_58));
        }
        (*l_172) ^= ((*l_144) = l_67);
    }
    (*l_173) = p_58;
    if ((g_88 = p_57))
    {
        unsigned l_174 = 0xCE4C498BL;
        int *l_175 = &g_88;
        unsigned short l_176 = 0UL;
        (*l_175) ^= (l_174 > p_59);
        return l_176;
    }
    else
    {
        long long l_189 = 0x954026852E783141LL;
        struct S0 *l_194 = &g_170;
        int l_201 = 0x2C04EAD8L;
        int *l_208 = &g_65;
        for (p_59 = (-23); (p_59 > (-17)); p_59++)
        {
            unsigned l_179 = 0xCBF7460FL;
            int *l_180 = &g_88;
            unsigned short *l_183 = &g_170.f2;
            (*l_180) = l_179;
            (*l_180) = (safe_sub_func_uint8_t_u_u((((((*l_183) &= (*l_180)) && g_101) <= (0x70L < p_59)) & g_127), g_65));
            for (l_67 = 0; (l_67 <= 16); l_67 = safe_add_func_int8_t_s_s(l_67, 7))
            {
                for (g_88 = 0; (g_88 != (-25)); g_88 = safe_sub_func_uint64_t_u_u(g_88, 2))
                {
                    int *l_188 = &l_128;
                    (*l_188) |= p_59;
                    (*l_188) &= l_189;
                    g_65 = (g_170.f1 ^ ((void*)0 == &g_88));
                }
                for (l_179 = 16; (l_179 >= 12); l_179 = safe_sub_func_int32_t_s_s(l_179, 5))
                {
                    int **l_192 = &l_107;
                    (*l_192) = &g_65;
                }
                (*l_180) &= (l_180 != &g_88);
            }
            (*l_180) &= (l_193 == (void*)0);
        }
        (*l_194) = (*l_160);
        (*l_208) = (g_32.f3 && (((safe_rshift_func_uint16_t_u_u((l_189 < (p_59 != (((~((((l_201 = (safe_mod_func_uint16_t_u_u(((0x94EE24373CAA1AADLL <= g_32.f2) & g_32.f1), 0x6AD4L))) & (safe_rshift_func_int16_t_s_s(0x5DFBL, (safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s(l_189, g_126)), l_189))))) < g_170.f3) ^ p_57)) & g_32.f0) & p_59))), g_32.f0)) | 2L) && g_170.f1));
    }
    (*l_209) = (**l_173);
    return p_57;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    transparent_crc(g_32.f1, "g_32.f1", print_hash_value);
    transparent_crc(g_32.f2, "g_32.f2", print_hash_value);
    transparent_crc(g_32.f3, "g_32.f3", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_170.f0, "g_170.f0", print_hash_value);
    transparent_crc(g_170.f1, "g_170.f1", print_hash_value);
    transparent_crc(g_170.f2, "g_170.f2", print_hash_value);
    transparent_crc(g_170.f3, "g_170.f3", print_hash_value);
    transparent_crc(g_210.f0, "g_210.f0", print_hash_value);
    transparent_crc(g_210.f1, "g_210.f1", print_hash_value);
    transparent_crc(g_210.f2, "g_210.f2", print_hash_value);
    transparent_crc(g_210.f3, "g_210.f3", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_266.f0, "g_266.f0", print_hash_value);
    transparent_crc(g_266.f1, "g_266.f1", print_hash_value);
    transparent_crc(g_266.f2, "g_266.f2", print_hash_value);
    transparent_crc(g_266.f3, "g_266.f3", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
