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
   unsigned f0 : 30;
   signed f1 : 29;
   signed f2 : 12;
   signed f3 : 7;
   signed f4 : 28;
   unsigned f5 : 5;
   signed f6 : 16;
};

struct S1 {
   unsigned f0;
   signed f1 : 2;
};


static struct S1 g_25 = {0x7B09F595L,-0};
static struct S1 *g_24 = &g_25;
static struct S0 g_39 = {18154,-7245,-31,4,-15489,0,66};
static int g_68 = 8L;
static unsigned short g_87 = 65532UL;
static short g_96 = (-1L);
static unsigned char g_99 = 0xEEL;
static int g_114 = 0xED8A7467L;
static struct S0 g_140 = {14758,13148,44,7,7406,3,189};
static int *g_164 = &g_68;
static struct S0 g_190 = {23539,6394,3,5,14375,1,-41};
static struct S1 **g_203 = &g_24;
static struct S1 ***g_202 = &g_203;
static struct S1 ***g_205 = &g_203;
static unsigned short g_242 = 6UL;
static char g_277 = 0L;
static char *g_276 = &g_277;
static char **g_275 = &g_276;
static int g_297 = (-2L);
static struct S0 *g_348 = &g_190;
static unsigned char *g_408 = &g_99;
static unsigned char **g_407 = &g_408;
static int g_470 = 0x0380D195L;
static int *g_523 = &g_114;
static int **g_522 = &g_523;
static char **g_545 = &g_276;
static char ***g_544 = &g_545;
static char g_548 = 4L;
static struct S1 g_550 = {1UL,-0};
static unsigned g_609 = 1UL;
static unsigned g_655 = 0xA9458EEDL;
static unsigned short g_666 = 1UL;
static unsigned short *g_692 = &g_87;
static unsigned short **g_691 = &g_692;
static unsigned char **g_706 = &g_408;



static int func_1(void);
static struct S1 * func_2(struct S1 p_3, struct S1 * p_4, char p_5, char p_6);
static struct S1 func_7(unsigned p_8, int p_9, unsigned short p_10, unsigned p_11);
static unsigned short func_13(int p_14, char p_15, short p_16, unsigned short p_17, struct S1 * p_18);
static int func_19(struct S1 * p_20, int p_21, int p_22, unsigned short p_23);
static unsigned func_34(struct S0 * p_35, struct S1 * p_36, int p_37);
static struct S1 * func_40(struct S0 * p_41, short p_42, unsigned char p_43, char p_44, struct S1 p_45);
static unsigned char func_46(struct S0 * p_47, unsigned char p_48, unsigned p_49, struct S1 * p_50, short p_51);
static struct S0 * func_52(char p_53);
static int func_54(int p_55, struct S0 * p_56, int p_57, int p_58, short p_59);
static int func_1(void)
{
    short l_12 = 1L;
    char ***l_546 = &g_275;
    char *l_547 = &g_548;
    struct S1 *l_549 = &g_550;
    struct S1 *l_554 = &g_550;
    struct S1 **l_557 = &l_554;
    int l_560 = 0x61AFAFCAL;
    struct S0 *l_601 = &g_190;
    struct S1 *l_631 = &g_550;
    int *l_679 = &l_560;
    unsigned char **l_705 = &g_408;
    struct S1 *l_734 = &g_550;
    unsigned l_757 = 0x65E2384AL;
    int **l_763 = &g_164;
    short l_764 = 0x5423L;
    (*l_557) = ((**g_205) = func_2(func_7(l_12, ((func_13(func_19(g_24, (safe_add_func_uint32_t_u_u(0xA10DD664L, 8L)), l_12, g_25.f1), ((*l_547) = (safe_add_func_int32_t_s_s(((g_544 = &g_275) == l_546), 0x343C9068L))), g_96, g_140.f3, l_549) || 0xDC1AL) & g_140.f0), g_140.f6, g_140.f6), l_554, l_12, l_12));
    (*g_164) = (((((void*)0 == &g_39) >= (0x54991BE6L != g_39.f4)) != (g_550.f1 | (safe_rshift_func_int8_t_s_s((**g_275), ((-1L) <= (l_12 != (*g_164))))))) & g_470);
    if (l_12)
    {
        struct S0 *l_561 = &g_140;
        int l_562 = (-4L);
        struct S1 *l_565 = &g_25;
        char l_587 = 0x2FL;
        unsigned char **l_596 = &g_408;
        int l_616 = 0x007F7611L;
        if ((((((*g_164) && func_54((l_560 = (*g_523)), l_561, (((l_562 > func_46(&g_39, ((**g_407) = 0x8FL), (func_13(l_12, l_12, (safe_lshift_func_int8_t_s_s((**g_275), l_562)), l_562, (*l_557)) && 0L), l_565, g_140.f0)) | 0x0CL) & l_562), l_562, g_190.f6)) != g_190.f3) <= (*g_276)) || 5UL))
        {
            int l_578 = 0x4674FF21L;
            int *l_592 = &l_560;
            int *l_605 = (void*)0;
            unsigned *l_608 = &g_609;
            if (((*g_164) = (65535UL && (l_562 & (***g_544)))))
            {
                struct S0 **l_572 = &g_348;
                int *l_573 = &g_297;
                unsigned *l_576 = &g_25.f0;
                unsigned *l_577 = &g_550.f0;
                int l_588 = (-1L);
                (*l_573) = (safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(g_190.f3, l_562)), (safe_rshift_func_uint8_t_u_u(func_54((g_114 >= l_560), ((*l_572) = (void*)0), ((*g_164) = (-5L)), ((*l_573) = l_560), (0UL < ((*l_577) = ((*l_576) = (safe_sub_func_int16_t_s_s(l_560, g_39.f3)))))), (*g_408)))));
                if (l_578)
                {
                    short l_579 = (-1L);
                    if (l_579)
                    {
                        int **l_580 = &g_164;
                        (*l_580) = &g_297;
                        l_588 = ((*g_164) = ((safe_rshift_func_int16_t_s_u(g_25.f0, g_140.f6)) == (safe_sub_func_uint16_t_u_u(func_13(((*g_523) = (*l_573)), (safe_sub_func_int8_t_s_s(l_587, 0xAEL)), (*l_573), l_560, (*g_203)), l_587))));
                    }
                    else
                    {
                        return l_12;
                    }
                }
                else
                {
                    (*g_164) = (*l_573);
                    for (g_114 = 0; (g_114 < 28); g_114 = safe_add_func_uint32_t_u_u(g_114, 4))
                    {
                        unsigned l_591 = 4294967294UL;
                        (*g_164) = 0xD9BAD20FL;
                        (*l_549) = (***g_205);
                        (*l_573) = (-1L);
                        if (l_591)
                            continue;
                    }
                    l_592 = &g_68;
                }
                if (((-9L) && 0x6D921CB7L))
                {
                    for (l_587 = (-20); (l_587 <= (-24)); l_587 = safe_sub_func_int8_t_s_s(l_587, 9))
                    {
                        int **l_595 = &l_592;
                        (*l_595) = &g_297;
                        (*l_595) = (*l_595);
                    }
                }
                else
                {
                    unsigned char **l_597 = &g_408;
                    l_597 = l_596;
                    (*l_561) = g_39;
                }
            }
            else
            {
                int *l_598 = (void*)0;
                int **l_599 = &l_592;
                int *l_600 = &g_68;
                (*l_599) = l_598;
                (*l_599) = (*l_599);
                if (((*l_600) = func_19((*g_203), ((*g_523) = 0xAB8A1CC6L), l_578, l_562)))
                {
                    struct S0 **l_602 = &l_601;
                    (*l_602) = l_601;
                }
                else
                {
                    for (g_87 = 0; (g_87 <= 13); g_87 = safe_add_func_uint8_t_u_u(g_87, 2))
                    {
                        (*l_599) = &l_560;
                    }
                    (*l_599) = &g_297;
                }
            }
            (*g_203) = func_2(func_7(g_190.f4, (g_470 = (((*g_522) = (*g_522)) == &g_470)), (l_578 ^ (safe_add_func_int8_t_s_s((-5L), 254UL))), ((*l_608) = g_297)), (**g_202), (*g_276), (***g_544));
        }
        else
        {
            int **l_614 = &g_523;
            int l_615 = 9L;
            (*l_549) = func_7((g_609 = func_46(func_52((**g_275)), (((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_u(g_39.f2, (l_614 == &g_523))) & (-2L)) != g_548), (func_54(l_615, l_561, l_560, l_12, l_615) ^ g_39.f0))) <= l_616) <= l_616), g_39.f5, (*l_557), l_615)), l_616, l_12, l_12);
        }
    }
    else
    {
        int **l_617 = &g_164;
        int ***l_618 = (void*)0;
        char **l_621 = &l_547;
        char ***l_622 = &g_545;
        struct S0 *l_629 = (void*)0;
        unsigned *l_671 = &g_609;
        unsigned **l_670 = &l_671;
        struct S0 l_673 = {15516,18743,42,1,37,3,-22};
        struct S1 *l_758 = (void*)0;
        l_617 = l_617;
        if ((((l_12 && l_12) < (safe_rshift_func_int16_t_s_s((**l_617), ((*g_544) == ((*l_622) = l_621))))) > g_25.f0))
        {
            struct S1 l_630 = {0x59AFEAE7L,0};
            int *l_633 = &l_560;
            for (g_609 = 0; (g_609 == 16); g_609 = safe_add_func_int16_t_s_s(g_609, 1))
            {
                for (g_297 = 0; (g_297 > 16); g_297 = safe_add_func_int8_t_s_s(g_297, 8))
                {
                    unsigned l_632 = 0x0B857A85L;
                    for (g_114 = 0; (g_114 != (-3)); g_114--)
                    {
                        l_629 = &g_39;
                        l_630 = (*g_24);
                        (*l_617) = &g_297;
                        (**g_202) = l_631;
                    }
                    (*g_203) = (void*)0;
                    return l_632;
                }
            }
lbl_640:
            g_164 = l_633;
            (*l_633) = ((safe_mod_func_uint32_t_u_u(g_190.f0, ((g_87 = (*l_633)) ^ 5L))) & (safe_add_func_int16_t_s_s(g_190.f1, g_114)));
            for (g_609 = (-23); (g_609 != 9); ++g_609)
            {
                struct S1 *l_645 = &g_25;
                int l_646 = 7L;
                short l_665 = 7L;
                int l_667 = (-1L);
                if (g_190.f1)
                    goto lbl_640;
                if ((((safe_lshift_func_uint16_t_u_u((7UL & 0xE1L), g_190.f5)) && ((safe_rshift_func_int8_t_s_s((func_34(&g_190, func_2(((*l_554) = func_7(g_39.f6, (**g_522), g_68, (*l_633))), l_645, (**g_545), l_646), g_140.f0) < g_25.f1), 6)) > l_646)) || 0xEF6A7FF8L))
                {
                    short l_656 = 0xA719L;
                    struct S0 *l_657 = &g_190;
                    for (g_68 = 0; (g_68 >= (-12)); --g_68)
                    {
                        unsigned short *l_658 = (void*)0;
                        unsigned short *l_659 = &g_242;
                        (*l_617) = &l_646;
                        (**l_617) = ((safe_sub_func_int8_t_s_s((*g_276), (*g_408))) < (((*l_659) = ((0xA3L != (safe_mod_func_int16_t_s_s(((*g_164) & ((g_655 && func_54(func_54((**g_522), &g_190, (*l_633), l_656, g_297), l_657, (*g_164), l_560, g_470)) == 0x02L)), g_25.f0))) != 0UL)) || g_25.f0));
                    }
                }
                else
                {
                    unsigned l_662 = 0x21DACD85L;
                    unsigned ***l_672 = &l_670;
                    (**l_557) = func_7((g_666 = (((**g_407) = ((safe_sub_func_uint8_t_u_u((l_662 != ((void*)0 == &g_87)), (***g_544))) < (((**g_545) <= (safe_sub_func_uint8_t_u_u(0xE7L, 0xACL))) != g_140.f6))) == ((&l_549 != (void*)0) | l_665))), (**g_522), l_667, g_190.f3);
                    for (g_68 = 0; (g_68 >= (-6)); g_68 = safe_sub_func_int16_t_s_s(g_68, 8))
                    {
                        (*g_348) = (*l_601);
                    }
                    (*l_672) = l_670;
                }
            }
        }
        else
        {
            struct S1 l_677 = {0xBE73C466L,1};
            unsigned short l_707 = 5UL;
            unsigned short *l_729 = &g_666;
            (*g_348) = l_673;
            for (g_25.f0 = 0; (g_25.f0 > 21); g_25.f0++)
            {
                struct S1 l_676 = {0x09385AABL,1};
                unsigned char **l_678 = &g_408;
                l_677 = ((*l_631) = l_676);
                if ((*g_164))
                    continue;
                if (((&g_408 != l_678) && g_68))
                {
                    (*l_617) = l_679;
                    (*l_679) = l_677.f1;
                    (*g_164) = (4294967291UL < ((safe_unary_minus_func_uint32_t_u((safe_add_func_int16_t_s_s(l_677.f0, (&g_39 == (void*)0))))) >= ((**g_407) = (**l_617))));
                    for (g_470 = 12; (g_470 <= 12); g_470 = safe_add_func_uint8_t_u_u(g_470, 4))
                    {
                        (*g_164) = (*g_164);
                        g_164 = &g_297;
                        (*l_679) = (l_677.f0 && g_190.f4);
                    }
                }
                else
                {
                    (**l_557) = (***g_205);
                }
                if ((0UL ^ 0x4DL))
                {
                    (*g_164) = ((void*)0 != &g_164);
                    return l_676.f0;
                }
                else
                {
                    unsigned short **l_694 = &g_692;
                    unsigned short ***l_693 = &l_694;
                    (*l_679) = (*g_164);
                    (*l_679) = (safe_mul_func_int8_t_s_s((func_54(l_677.f1, &g_140, (safe_rshift_func_uint8_t_u_s(l_676.f0, (g_39.f5 | (0x749F89C0L != (*l_679))))), l_676.f1, (!(g_691 == ((*l_693) = &g_692)))) >= 0xB8F5A80EL), (*l_679)));
                }
            }
            for (g_548 = 25; (g_548 == (-19)); g_548 = safe_sub_func_int16_t_s_s(g_548, 2))
            {
                unsigned short l_697 = 4UL;
            }
        }
        if ((((-3L) < (safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s(1L, (safe_add_func_uint8_t_u_u((**g_706), 8L)))) > g_550.f1), (***g_544)))) || 255UL))
        {
            struct S0 l_759 = {15799,22758,-25,-3,9218,1,188};
            l_759 = l_759;
            (*l_679) = (*l_679);
        }
        else
        {
            unsigned l_762 = 0xBCB71514L;
            (*l_617) = &g_68;
            (*l_679) = (safe_add_func_int8_t_s_s((***g_544), 0x24L));
            g_348 = func_52(l_762);
        }
    }
    (*l_763) = &l_560;
    return l_764;
}







static struct S1 * func_2(struct S1 p_3, struct S1 * p_4, char p_5, char p_6)
{
    int **l_555 = &g_164;
    struct S1 *l_556 = &g_550;
    (*l_555) = &g_297;
    (*l_555) = &g_68;
    (*l_555) = (*l_555);
    return l_556;
}







static struct S1 func_7(unsigned p_8, int p_9, unsigned short p_10, unsigned p_11)
{
    int *l_551 = &g_68;
    int **l_552 = &g_164;
    struct S1 l_553 = {0x83300397L,-0};
    (*l_552) = l_551;
    return l_553;
}







static unsigned short func_13(int p_14, char p_15, short p_16, unsigned short p_17, struct S1 * p_18)
{
    (*g_164) = p_15;
    (**g_202) = (**g_202);
    return g_140.f6;
}







static int func_19(struct S1 * p_20, int p_21, int p_22, unsigned short p_23)
{
    struct S0 l_28 = {5897,-22714,24,5,-13057,2,14};
    struct S0 *l_29 = &l_28;
    struct S0 *l_38 = &g_39;
    struct S1 l_514 = {0xE916E1C2L,-0};
    unsigned char l_541 = 246UL;
    (*l_29) = l_28;
    l_541 = ((safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u((l_28.f6 = l_28.f2), 0x12L)) > (((!((l_28.f3 = p_22) < func_34(l_38, func_40(l_38, g_39.f5, func_46(func_52(g_39.f3), (((g_39.f4 && l_28.f1) > g_140.f6) >= 0x87D7L), g_140.f2, (**g_202), l_28.f2), l_28.f1, l_514), l_514.f1))) || p_23) ^ g_140.f3)), l_28.f1)) | 0x92L);
    return p_22;
}







static unsigned func_34(struct S0 * p_35, struct S1 * p_36, int p_37)
{
    int *l_517 = &g_297;
    unsigned short l_538 = 0x8689L;
    int **l_539 = &g_164;
    struct S1 l_540 = {0x0F104493L,1};
    (*l_517) = g_190.f5;
    for (g_99 = 25; (g_99 >= 33); g_99 = safe_add_func_uint16_t_u_u(g_99, 8))
    {
        int **l_525 = (void*)0;
        int ***l_524 = &l_525;
        unsigned short *l_530 = (void*)0;
        unsigned short *l_531 = &g_242;
        int l_532 = (-8L);
        struct S0 l_535 = {2974,9268,-37,0,-162,1,190};
        (*p_35) = (*g_348);
    }
    (*l_539) = &g_68;
    (**g_203) = l_540;
    return g_25.f1;
}







static struct S1 * func_40(struct S0 * p_41, short p_42, unsigned char p_43, char p_44, struct S1 p_45)
{
    int *l_515 = &g_68;
    char *l_516 = &g_277;
    l_515 = l_515;
    g_140.f1 = (l_516 != l_516);
    return (*g_203);
}







static unsigned char func_46(struct S0 * p_47, unsigned char p_48, unsigned p_49, struct S1 * p_50, short p_51)
{
    return (**g_407);
}







static struct S0 * func_52(char p_53)
{
    struct S0 *l_60 = &g_39;
    struct S0 **l_61 = (void*)0;
    struct S0 **l_62 = &l_60;
    int l_63 = (-1L);
    short l_115 = 0x8427L;
    int *l_143 = &g_114;
    unsigned l_145 = 18446744073709551611UL;
    unsigned l_147 = 18446744073709551615UL;
    struct S1 l_159 = {9UL,-1};
    char l_165 = 0x6CL;
    unsigned char *l_214 = &g_99;
    short l_245 = (-5L);
    struct S0 *l_274 = &g_190;
    int *l_291 = &l_63;
    char l_309 = 0x3CL;
    unsigned l_310 = 0x43C7E615L;
    struct S1 *l_346 = &g_25;
    struct S1 *l_347 = &g_25;
    struct S1 **l_391 = &l_347;
    unsigned short *l_403 = &g_242;
    unsigned short **l_402 = &l_403;
    unsigned short ***l_401 = &l_402;
    if (func_54(g_39.f2, ((*l_62) = l_60), (l_63 & g_39.f4), (((safe_mul_func_uint16_t_u_u((65531UL ^ g_25.f0), (g_39.f3 >= 0x8F87L))) | l_63) == 0xDBFAL), g_25.f1))
    {
        unsigned l_111 = 0xFA9ADBF8L;
        struct S0 *l_139 = &g_140;
        int **l_144 = &l_143;
        struct S0 *l_146 = &g_140;
        int *l_148 = &l_63;
        struct S1 *l_166 = &g_25;
        struct S1 **l_182 = &l_166;
        unsigned short l_284 = 0xF87CL;
        int *l_338 = &g_297;
        int l_349 = (-8L);
    }
    else
    {
        int *l_353 = &l_63;
        struct S1 *l_381 = &g_25;
        struct S0 *l_437 = &g_39;
        unsigned short *l_447 = &g_87;
        if ((*g_164))
        {
            struct S0 *l_351 = (void*)0;
            int l_352 = 0xA8DAF7D2L;
            int **l_354 = &g_164;
            (*l_291) = (~(safe_unary_minus_func_int16_t_s(((p_53 || func_54(p_53, l_351, p_53, l_352, p_53)) & p_53))));
            (*l_354) = l_353;
            (*l_354) = &l_63;
        }
        else
        {
            int *l_355 = &g_297;
            int **l_356 = &l_291;
            int **l_357 = &l_355;
            struct S0 *l_369 = &g_39;
            struct S1 *l_379 = &l_159;
            unsigned short l_392 = 0UL;
            unsigned char **l_450 = (void*)0;
            int **l_459 = &l_143;
            (*l_357) = ((*l_356) = l_355);
            (*l_357) = &g_297;
            for (g_242 = 0; (g_242 < 58); g_242 = safe_add_func_uint32_t_u_u(g_242, 1))
            {
                short *l_362 = (void*)0;
                short *l_363 = (void*)0;
                short *l_364 = &l_115;
                int l_370 = 0xAE2BCC02L;
                unsigned short *l_383 = (void*)0;
                unsigned short **l_382 = &l_383;
                unsigned short **l_384 = &l_383;
            }
            for (l_309 = 0; (l_309 < (-3)); --l_309)
            {
                unsigned short l_438 = 0x4E40L;
                unsigned *l_451 = (void*)0;
                unsigned *l_452 = &l_159.f0;
                struct S0 *l_453 = &g_39;
            }
        }
        for (g_99 = 0; (g_99 > 29); ++g_99)
        {
            int **l_462 = &l_353;
            (***g_202) = (***g_205);
            (*l_462) = &g_68;
        }
        if ((g_190.f1 > p_53))
        {
            int l_465 = 4L;
            (*l_291) = (safe_lshift_func_uint16_t_u_s(l_465, 0));
            for (g_87 = (-4); (g_87 > 10); g_87 = safe_add_func_uint16_t_u_u(g_87, 4))
            {
                for (l_115 = 11; (l_115 <= 10); --l_115)
                {
                    unsigned l_474 = 0UL;
                    (*l_353) = (g_470 <= (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(l_474)), 0x5D53L)));
                }
                for (l_145 = 0; (l_145 >= 42); l_145 = safe_add_func_int16_t_s_s(l_145, 4))
                {
                    int **l_477 = &l_291;
                    (*l_477) = &g_68;
                    return &g_39;
                }
            }
        }
        else
        {
            struct S0 **l_484 = &l_274;
            int l_502 = (-1L);
            struct S0 **l_503 = &g_348;
            int l_504 = 0xC92DF9E6L;
            short l_505 = 0xEB86L;
            unsigned *l_509 = &g_25.f0;
            unsigned *l_510 = (void*)0;
            unsigned *l_511 = (void*)0;
            unsigned *l_512 = (void*)0;
            unsigned *l_513 = &l_159.f0;
            if ((p_53 & 0x9194L))
            {
                unsigned short l_487 = 0xD864L;
                for (g_297 = 0; (g_297 > 22); g_297++)
                {
                    unsigned char l_480 = 1UL;
                    char *l_481 = &l_309;
                    struct S0 **l_485 = &g_348;
                    int *l_486 = &g_68;
                    if (func_54(((*l_486) = (((*l_481) = ((**g_275) = ((((*l_291) ^ (*g_276)) && (l_480 = p_53)) <= ((void*)0 != &g_276)))) < (safe_mul_func_uint8_t_u_u(func_54((l_484 == (l_485 = &g_348)), &g_39, ((*l_486) = ((*g_205) == (*g_205))), p_53, p_53), p_53)))), &g_39, p_53, l_487, g_39.f2))
                    {
                        (*l_353) = p_53;
                        (*g_164) = (*l_353);
                    }
                    else
                    {
                        int **l_488 = &g_164;
                        (*l_488) = l_486;
                        if ((*g_164))
                            continue;
                    }
                    (*l_353) = p_53;
                }
            }
            else
            {
                char *l_493 = (void*)0;
                if ((*g_164))
                {
                    unsigned *l_500 = &g_25.f0;
                    unsigned *l_501 = (void*)0;
                    (*g_164) = ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((void*)0 == l_493), (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_502 = ((*l_500) = (safe_rshift_func_uint16_t_u_u(p_53, 10)))), (*l_291))), ((*l_214) = ((void*)0 == l_503)))))), ((*l_403) = func_54((func_54(((*l_143) = l_504), &g_39, p_53, l_505, g_470) != p_53), (*l_484), (*g_164), l_504, p_53)))) || p_53);
                }
                else
                {
                    int **l_506 = &l_291;
                    (*l_506) = (void*)0;
                    (**l_503) = (*g_348);
                }
            }
            (**l_503) = (**l_484);
            (*l_353) = (g_39.f5 <= ((*g_407) == (*g_407)));
            (*g_164) = func_54(p_53, l_437, (safe_sub_func_int8_t_s_s(0x7EL, 251UL)), (((*l_509) = g_190.f1) ^ ((*l_513) = (0x30L < (*l_353)))), p_53);
        }
        l_291 = &l_63;
    }
    return &g_39;
}







static int func_54(int p_55, struct S0 * p_56, int p_57, int p_58, short p_59)
{
    int *l_67 = &g_68;
    int **l_66 = &l_67;
    (*l_66) = &p_57;
    return p_59;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_25.f1, "g_25.f1", print_hash_value);
    transparent_crc(g_39.f0, "g_39.f0", print_hash_value);
    transparent_crc(g_39.f1, "g_39.f1", print_hash_value);
    transparent_crc(g_39.f2, "g_39.f2", print_hash_value);
    transparent_crc(g_39.f3, "g_39.f3", print_hash_value);
    transparent_crc(g_39.f4, "g_39.f4", print_hash_value);
    transparent_crc(g_39.f5, "g_39.f5", print_hash_value);
    transparent_crc(g_39.f6, "g_39.f6", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f1, "g_140.f1", print_hash_value);
    transparent_crc(g_140.f2, "g_140.f2", print_hash_value);
    transparent_crc(g_140.f3, "g_140.f3", print_hash_value);
    transparent_crc(g_140.f4, "g_140.f4", print_hash_value);
    transparent_crc(g_140.f5, "g_140.f5", print_hash_value);
    transparent_crc(g_140.f6, "g_140.f6", print_hash_value);
    transparent_crc(g_190.f0, "g_190.f0", print_hash_value);
    transparent_crc(g_190.f1, "g_190.f1", print_hash_value);
    transparent_crc(g_190.f2, "g_190.f2", print_hash_value);
    transparent_crc(g_190.f3, "g_190.f3", print_hash_value);
    transparent_crc(g_190.f4, "g_190.f4", print_hash_value);
    transparent_crc(g_190.f5, "g_190.f5", print_hash_value);
    transparent_crc(g_190.f6, "g_190.f6", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_550.f0, "g_550.f0", print_hash_value);
    transparent_crc(g_550.f1, "g_550.f1", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_655, "g_655", print_hash_value);
    transparent_crc(g_666, "g_666", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
