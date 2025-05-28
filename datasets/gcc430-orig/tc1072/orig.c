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


union U0 {
   char * f0;
   unsigned char f1;
   int f2;
   short f3;
};


static char g_7 = 0x5EL;
static char *g_6 = &g_7;
static int g_9 = 0xA94B2AB7L;
static int *g_15 = &g_9;
static int * const *g_14 = &g_15;
static int g_60 = (-2L);
static unsigned char g_101 = 0x68L;
static char g_108 = 0x7DL;
static unsigned short g_111 = 0UL;
static const int *g_128 = &g_9;
static const int **g_127 = &g_128;
static int g_131 = 0x511E0418L;
static unsigned g_142 = 4294967291UL;
static int g_153 = (-1L);
static short g_201 = (-9L);
static unsigned g_212 = 0x8B5597C9L;
static short g_231 = 0xFF75L;
static short g_233 = 0xE63FL;
static short g_243 = 8L;
static short g_256 = 0xC6A6L;
static unsigned char g_282 = 6UL;
static int *g_301 = &g_9;
static int **g_300 = &g_301;
static unsigned g_314 = 18446744073709551615UL;
static char g_346 = 1L;
static char g_412 = 0xA3L;
static char g_416 = (-4L);
static unsigned short g_417 = 0xA9AFL;
static unsigned *g_443 = &g_212;
static unsigned * const *g_442 = &g_443;
static short g_465 = (-4L);
static char g_492 = 8L;
static unsigned g_501 = 0xEC44A5C8L;
static int *g_539 = &g_60;
static unsigned g_609 = 0x35460F0BL;
static char g_675 = 1L;
static short g_699 = 0xA68EL;
static short g_721 = 0x7E76L;
static unsigned char g_746 = 0xF1L;
static union U0 g_810 = {0};
static union U0 *g_809 = &g_810;



static unsigned func_1(void);
static int * func_4(char * p_5);
static const int func_10(int * const * p_11, char * p_12, int * p_13);
static int * func_16(unsigned short p_17, unsigned p_18, unsigned short p_19);
static char * func_21(char p_22, int ** p_23, int p_24, unsigned short p_25);
static int ** func_26(unsigned p_27);
static unsigned func_28(int * const * p_29, int ** p_30);
static unsigned short func_32(unsigned char p_33, const unsigned p_34, int p_35, char * p_36, char * p_37);
static short func_41(char p_42, int ** p_43, short p_44, int * const p_45);
static unsigned char func_54(int ** p_55, unsigned p_56);
static unsigned func_1(void)
{
    const int *l_2 = (void*)0;
    const int **l_3 = &l_2;
    (*l_3) = l_2;
    (*g_300) = func_4(g_6);
    return (**g_442);
}







static int * func_4(char * p_5)
{
    int *l_8 = &g_9;
    int l_598 = (-6L);
    int l_599 = 0L;
    unsigned char l_624 = 0x34L;
    int l_717 = 0xF8EEA09FL;
    union U0 **l_814 = (void*)0;
    union U0 ***l_815 = &l_814;
    int *l_816 = &l_598;
    int *l_817 = &l_717;
    int *l_818 = &g_131;
    (*l_8) = 0x35C5735EL;
    if ((*l_8))
    {
        unsigned short l_20 = 8UL;
        int **l_31 = &l_8;
        char **l_289 = &g_6;
        char *l_291 = &g_108;
        char **l_290 = &l_291;
        int l_572 = 0x88146568L;
        l_8 = l_8;
        l_572 &= func_10(g_14, p_5, func_16((*l_8), l_20, (((*l_290) = ((*l_289) = func_21(l_20, func_26(func_28(&l_8, l_31)), (**l_31), g_9))) == p_5)));
    }
    else
    {
        char l_573 = 0xD8L;
        int *l_574 = &g_131;
        int *l_575 = &g_131;
        int *l_576 = &g_131;
        int *l_577 = &g_60;
        int l_578 = 0x30D84B68L;
        int *l_579 = &g_60;
        int *l_580 = &g_131;
        int *l_581 = &l_578;
        int *l_582 = &g_60;
        int *l_583 = (void*)0;
        int *l_584 = (void*)0;
        int *l_585 = &g_60;
        int l_586 = 1L;
        int *l_587 = &g_131;
        int *l_588 = &l_586;
        int *l_589 = &l_586;
        int *l_590 = &g_131;
        int *l_591 = &g_60;
        int l_592 = 0x12901F4CL;
        int *l_593 = &g_131;
        int *l_594 = (void*)0;
        int *l_595 = &l_592;
        int *l_596 = &l_578;
        int *l_597 = &l_578;
        int *l_600 = (void*)0;
        int *l_601 = &g_9;
        int *l_602 = (void*)0;
        int *l_603 = &l_578;
        int *l_604 = (void*)0;
        int *l_605 = (void*)0;
        int *l_606 = (void*)0;
        int *l_607 = &l_592;
        int *l_608 = &g_9;
        int l_697 = 7L;
        int l_749 = 9L;
        --g_609;
        if ((**g_127))
        {
            short l_623 = (-10L);
            int l_627 = 0x91C3C8AFL;
            int l_629 = 0xC47DA34EL;
            int l_630 = 7L;
            int l_702 = 0L;
            unsigned l_777 = 6UL;
            int *l_783 = &l_592;
            int *l_784 = &g_131;
            int *l_785 = &g_131;
            int *l_786 = (void*)0;
            int *l_787 = &g_60;
            int *l_788 = (void*)0;
            int *l_789 = &l_629;
            int *l_790 = &l_586;
            int *l_791 = &l_586;
            int *l_792 = (void*)0;
            int *l_793 = &l_586;
            int *l_794 = &l_592;
            int *l_795 = &g_131;
            int *l_796 = &l_702;
            int *l_797 = (void*)0;
            int *l_798 = &l_627;
            int *l_799 = &l_578;
            int *l_800 = &l_697;
            int *l_801 = &g_9;
            int *l_802 = &g_131;
            unsigned l_803 = 0x720089DCL;
            (*l_608) = (*l_8);
            for (g_233 = (-2); (g_233 == (-16)); g_233--)
            {
                int *l_614 = &g_60;
                int l_631 = 1L;
                int l_670 = 0x987C14ECL;
                int l_683 = 0xDC8D8AB2L;
                int l_685 = 0x0FF5B612L;
                int l_698 = 5L;
                char *l_750 = (void*)0;
                unsigned l_779 = 0x3FEAD032L;
                (*g_127) = l_614;
                if (((*l_614) > (safe_sub_func_uint8_t_u_u((g_101 &= ((+(*l_587)) || (((safe_mod_func_int32_t_s_s(((*l_587) = (g_7 || 0x03E7L)), (*l_614))) < ((**g_14) == (safe_lshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((((g_346 & (g_465 == (&g_111 != &g_417))) > 65535UL) || (*l_8)), 7)) || 0L), (*l_614))))) == l_623))), (*p_5)))))
                {
                    short l_628 = 0x3C2FL;
                    int *l_632 = &l_630;
                    int *l_633 = &l_629;
                    int *l_634 = &l_630;
                    int *l_635 = &l_630;
                    int *l_636 = &g_131;
                    int *l_637 = (void*)0;
                    int *l_638 = &g_131;
                    int *l_639 = (void*)0;
                    int *l_640 = &l_629;
                    int *l_641 = &l_629;
                    int *l_642 = &g_9;
                    int *l_643 = (void*)0;
                    int *l_644 = (void*)0;
                    int *l_645 = &l_592;
                    int *l_646 = &l_586;
                    int *l_647 = &l_586;
                    int *l_648 = &l_592;
                    int *l_649 = &l_627;
                    int *l_650 = &l_630;
                    int *l_651 = &l_592;
                    int *l_652 = &g_131;
                    int *l_653 = &l_598;
                    int *l_654 = &l_586;
                    int *l_655 = (void*)0;
                    int *l_656 = &g_9;
                    int *l_657 = &l_586;
                    int *l_658 = &g_60;
                    int *l_659 = &l_586;
                    int *l_660 = &l_578;
                    int *l_661 = &l_586;
                    int *l_662 = (void*)0;
                    int *l_663 = &l_629;
                    int *l_664 = &l_586;
                    int *l_665 = &l_627;
                    int *l_666 = &g_9;
                    int *l_667 = &l_592;
                    int *l_668 = (void*)0;
                    int *l_669 = &l_592;
                    int *l_671 = &g_60;
                    int *l_672 = &l_592;
                    int *l_673 = &l_599;
                    int *l_674 = &l_630;
                    int *l_676 = &l_592;
                    int *l_677 = &g_60;
                    int *l_678 = &l_630;
                    int *l_679 = &g_60;
                    int *l_680 = &l_630;
                    int *l_681 = &l_631;
                    int *l_682 = &l_670;
                    int *l_684 = &g_131;
                    int *l_686 = &l_629;
                    int *l_687 = &l_670;
                    int *l_688 = &l_592;
                    int *l_689 = (void*)0;
                    int *l_690 = &l_683;
                    int *l_691 = &l_586;
                    int *l_692 = &l_586;
                    int *l_693 = &l_670;
                    int *l_694 = &l_630;
                    int *l_695 = &l_578;
                    int *l_696 = &l_631;
                    int *l_700 = (void*)0;
                    int *l_701 = &g_9;
                    int *l_703 = &l_630;
                    int *l_704 = &l_599;
                    int *l_705 = &g_9;
                    int l_706 = 0x5C4A208DL;
                    int *l_707 = &l_578;
                    int *l_708 = &l_598;
                    int *l_709 = &l_683;
                    int *l_710 = (void*)0;
                    int *l_711 = &l_598;
                    int *l_712 = &l_592;
                    int *l_713 = &l_631;
                    int *l_714 = &l_578;
                    int *l_715 = (void*)0;
                    int *l_716 = &g_9;
                    int *l_718 = &l_627;
                    int *l_719 = (void*)0;
                    int *l_720 = &l_631;
                    int *l_722 = (void*)0;
                    int *l_723 = &g_9;
                    int *l_724 = &l_702;
                    int *l_725 = &l_629;
                    int *l_726 = &l_586;
                    int *l_727 = &l_592;
                    int *l_728 = &l_592;
                    int *l_729 = (void*)0;
                    int *l_730 = (void*)0;
                    int *l_731 = &g_131;
                    int *l_732 = &l_702;
                    int *l_733 = &l_631;
                    int *l_734 = (void*)0;
                    int *l_735 = (void*)0;
                    int *l_736 = &l_599;
                    int *l_737 = &l_627;
                    int *l_738 = &g_131;
                    int *l_739 = &l_670;
                    int *l_740 = (void*)0;
                    int *l_741 = &l_698;
                    int *l_742 = &l_706;
                    int *l_743 = &l_698;
                    int *l_744 = (void*)0;
                    int *l_745 = &l_631;
                    ++l_624;
                    ++g_746;
                    (*l_686) = (func_32(l_749, func_28(&g_15, &l_614), (*l_8), l_750, p_5) <= (safe_sub_func_uint32_t_u_u((*l_8), l_623)));
                    for (g_111 = 20; (g_111 < 22); ++g_111)
                    {
                        unsigned l_759 = 8UL;
                        (*l_646) = ((safe_lshift_func_int16_t_s_s(0x714BL, 13)) > ((**g_442)++));
                        (*g_127) = &l_706;
                        l_759--;
                    }
                }
                else
                {
                    short *l_774 = (void*)0;
                    short *l_775 = (void*)0;
                    short *l_776 = &g_699;
                    char *l_778 = (void*)0;
                    l_627 ^= ((*l_588) = ((l_630 >= ((safe_sub_func_uint32_t_u_u(((((*g_6) == (safe_lshift_func_int16_t_s_s((*l_8), 9))) | (((*l_614) = l_702) <= 1UL)) == 0xBD2AL), (**g_442))) == (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((*l_776) = g_746), 0)), (g_675 = (((-4L) | (-1L)) > l_777)))) <= (*g_443)), g_256)), l_779)))) && (*l_582)));
                }
            }
            l_803--;
        }
        else
        {
            unsigned short l_808 = 0UL;
            union U0 **l_811 = &g_809;
            union U0 *l_813 = &g_810;
            union U0 **l_812 = &l_813;
            for (l_624 = 0; (l_624 >= 43); l_624 = safe_add_func_int32_t_s_s(l_624, 1))
            {
                (*l_581) = ((*l_591) = ((*l_593) = l_808));
                return (*g_300);
            }
            (*l_601) |= (*l_577);
            (*l_812) = ((*l_811) = g_809);
        }
    }
    (*l_815) = l_814;
    (*g_300) = &l_598;
    return l_818;
}







static const int func_10(int * const * p_11, char * p_12, int * p_13)
{
    short *l_542 = &g_233;
    int l_545 = 0xE3E8016AL;
    unsigned char l_555 = 0UL;
    char *l_560 = &g_346;
    const int *** const * const l_562 = (void*)0;
    (**g_300) |= ((&g_243 == l_542) == (((func_54(func_26((safe_rshift_func_int16_t_s_s((l_545 != ((*g_15) = l_545)), 9))), ((safe_add_func_int8_t_s_s(((*g_443) >= (*g_443)), 0L)) < (safe_mod_func_int8_t_s_s((*g_6), g_501)))) || (**g_442)) & l_545) >= 0x33L));
    for (g_201 = 23; (g_201 > (-18)); --g_201)
    {
        for (g_501 = 5; (g_501 <= 55); g_501++)
        {
            int l_554 = 0L;
            (**g_14) = l_554;
        }
    }
    (*p_13) = l_555;
    if ((**g_127))
    {
        int ***l_556 = (void*)0;
        int l_559 = 0xD271B4D7L;
        char *l_561 = &g_492;
        p_11 = &p_13;
        (*g_300) = func_16(((safe_rshift_func_uint8_t_u_u(l_555, func_32(g_142, l_555, l_559, l_560, l_561))) | ((void*)0 != l_562)), l_559, g_9);
    }
    else
    {
        unsigned l_563 = 0x088103E8L;
        (*g_127) = func_16(l_563, ((safe_rshift_func_int8_t_s_u((*p_12), l_555)) >= (1L != l_555)), g_60);
        for (g_131 = (-19); (g_131 < (-6)); g_131++)
        {
            int l_570 = 0xAAC60DA3L;
            unsigned *l_571 = &g_142;
            (*g_539) |= (((*g_443) = (safe_rshift_func_int8_t_s_s(((void*)0 == (*g_14)), (l_563 | g_7)))) == ((*l_571) = l_570));
            (*g_127) = (p_13 = p_13);
        }
        (**p_11) = 0x4B426675L;
        p_13 = func_16(l_545, (l_545 ^ ((*g_443) && (*g_15))), l_563);
    }
    return l_555;
}







static int * func_16(unsigned short p_17, unsigned p_18, unsigned short p_19)
{
    char **l_292 = &g_6;
    char *l_293 = &g_108;
    int **l_296 = &g_15;
    int l_297 = 0x0B5EBE33L;
    int l_298 = 0x3952120AL;
    const int *l_299 = &g_9;
    unsigned l_322 = 0x57D315D3L;
    int ***l_325 = &g_300;
    int ****l_324 = &l_325;
    unsigned short l_453 = 0UL;
    int l_471 = 6L;
    if ((func_41(((((*l_292) = &g_7) == l_293) < ((l_298 = (!(safe_lshift_func_uint16_t_u_s(g_201, (func_54(l_296, (**l_296)) | l_297))))) >= (((void*)0 == l_299) & (-1L)))), g_300, (*l_299), (*g_300)) ^ 0xB3D8L))
    {
        int ****l_302 = (void*)0;
        int ***l_304 = &g_300;
        int ****l_303 = &l_304;
        unsigned l_307 = 1UL;
        int *l_315 = (void*)0;
        int *l_316 = &l_298;
        short *l_317 = &g_201;
        unsigned *l_323 = &g_212;
        (*l_316) &= ((((*l_303) = &g_300) != (void*)0) != (((safe_add_func_int16_t_s_s(0xA491L, g_243)) | p_17) == (((*g_6) = l_307) != ((g_314 = ((*l_293) ^= (safe_sub_func_uint16_t_u_u((**l_296), (safe_sub_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(((*g_301) == p_17), p_19)) == g_243) | g_60), g_9)))))) && p_18))));
        (*l_316) |= ((((((*l_317) = g_153) & (((**l_292) = (safe_mod_func_int32_t_s_s((*g_15), (safe_add_func_uint32_t_u_u(l_322, ((*l_323) = g_314)))))) || 0xECL)) > (l_324 == (void*)0)) & (g_111 | p_17)) & g_9);
    }
    else
    {
        int *l_328 = &g_153;
        int l_335 = 0xB9E98DDEL;
        int l_411 = 0xEB0FD5B6L;
        int l_415 = 0x0C518982L;
        int l_508 = (-1L);
        for (g_7 = (-21); (g_7 > (-11)); g_7++)
        {
            int l_345 = 0xC270E04CL;
            unsigned char *l_347 = (void*)0;
            int l_355 = (-1L);
            int l_400 = 6L;
            int l_409 = 0L;
            int **l_440 = &g_301;
            unsigned char *l_536 = &g_282;
        }
    }
    return g_539;
}







static char * func_21(char p_22, int ** p_23, int p_24, unsigned short p_25)
{
    unsigned l_162 = 7UL;
    int l_179 = 5L;
    short l_197 = 0xAFA4L;
    int l_202 = 1L;
    int l_208 = 0x24E3CA85L;
    int *l_215 = (void*)0;
    int *l_216 = &l_208;
    int *l_217 = &l_202;
    int *l_218 = &g_60;
    int *l_219 = &l_179;
    int *l_220 = (void*)0;
    int *l_221 = &g_131;
    int *l_222 = (void*)0;
    int *l_223 = (void*)0;
    int *l_224 = &g_60;
    int *l_225 = &l_179;
    int *l_226 = (void*)0;
    int *l_227 = &g_60;
    int *l_228 = &g_60;
    int *l_229 = &g_131;
    int *l_230 = (void*)0;
    int l_232 = (-4L);
    int *l_234 = &l_202;
    int *l_235 = (void*)0;
    int *l_236 = (void*)0;
    int *l_237 = &l_179;
    int *l_238 = (void*)0;
    int l_239 = 0L;
    int *l_240 = &l_202;
    int *l_241 = &l_239;
    int *l_242 = &l_232;
    int *l_244 = (void*)0;
    int *l_245 = &g_131;
    int *l_246 = &l_179;
    int l_247 = (-1L);
    int *l_248 = &g_131;
    int *l_249 = &l_232;
    int *l_250 = (void*)0;
    int *l_251 = (void*)0;
    int *l_252 = &l_202;
    int *l_253 = &l_232;
    int *l_254 = &l_208;
    int *l_255 = &l_179;
    int *l_257 = &l_239;
    int *l_258 = &l_239;
    int *l_259 = (void*)0;
    int *l_260 = &l_179;
    int *l_261 = &g_131;
    int *l_262 = &l_247;
    int *l_263 = (void*)0;
    int *l_264 = &g_60;
    int *l_265 = &l_202;
    int *l_266 = (void*)0;
    int *l_267 = &l_208;
    int l_268 = 0x33DC0AD4L;
    int *l_269 = &l_268;
    int *l_270 = &g_131;
    int l_271 = 7L;
    int *l_272 = &g_131;
    int *l_273 = &g_131;
    int *l_274 = &l_179;
    int *l_275 = &l_232;
    int *l_276 = &g_131;
    int *l_277 = (void*)0;
    int *l_278 = &l_208;
    int *l_279 = &l_247;
    int l_280 = (-10L);
    int *l_281 = &l_202;
    for (g_101 = 0; (g_101 >= 34); g_101 = safe_add_func_uint32_t_u_u(g_101, 1))
    {
        char **l_160 = (void*)0;
        char **l_161 = &g_6;
        int l_163 = 0xAE2BAAC5L;
        int *l_164 = &l_163;
        int *l_165 = &l_163;
        int *l_166 = &g_60;
        int *l_167 = &g_60;
        int *l_168 = &g_131;
        int *l_169 = &l_163;
        int *l_170 = &g_60;
        int *l_171 = &l_163;
        int *l_172 = &g_131;
        int *l_173 = &l_163;
        int *l_174 = &g_131;
        int *l_175 = (void*)0;
        int *l_176 = &g_60;
        int *l_177 = &l_163;
        int *l_178 = (void*)0;
        int *l_180 = &g_131;
        int *l_181 = &g_60;
        int *l_182 = &l_163;
        int *l_183 = &g_131;
        int *l_184 = &g_60;
        int l_185 = 0x41A1999AL;
        int l_186 = 0xFC78E839L;
        int *l_187 = &l_186;
        int *l_188 = &l_186;
        int *l_189 = &l_186;
        int *l_190 = &l_185;
        int *l_191 = &g_131;
        int *l_192 = &l_179;
        int *l_193 = &l_185;
        int *l_194 = &g_131;
        int *l_195 = &l_179;
        int *l_196 = &g_60;
        int *l_198 = (void*)0;
        int *l_199 = &l_179;
        int *l_200 = &l_186;
        int *l_203 = &l_186;
        int *l_204 = (void*)0;
        int *l_205 = &l_163;
        int *l_206 = (void*)0;
        int *l_207 = &l_179;
        int *l_209 = &l_208;
        int *l_210 = &l_208;
        int *l_211 = &g_131;
        (*g_127) = (void*)0;
        (**g_14) = ((p_22 < p_24) < (l_163 | g_111));
        g_212--;
    }
    (*p_23) = (*g_14);
    g_282--;
    (*l_237) = ((6L || func_28(&l_257, &l_251)) ^ ((((safe_sub_func_uint16_t_u_u(0xC18EL, p_24)) >= p_22) | ((safe_add_func_uint8_t_u_u(0x47L, p_25)) < p_25)) == p_22));
    return &g_108;
}







static int ** func_26(unsigned p_27)
{
    int *l_147 = &g_60;
    int **l_148 = &l_147;
    int *l_149 = &g_60;
    int *l_152 = &g_153;
    char *l_154 = (void*)0;
    const int ***l_155 = &g_127;
    (*g_127) = l_147;
    (*g_15) &= p_27;
    (*l_155) = &g_128;
    return &g_15;
}







static unsigned func_28(int * const * p_29, int ** p_30)
{
    int l_38 = 0xD7D41305L;
    int **l_47 = (void*)0;
    int ***l_46 = &l_47;
    int **l_58 = &g_15;
    int ***l_57 = &l_58;
    char *l_88 = (void*)0;
    unsigned short *l_144 = &g_111;
    int l_145 = 0x1D89D757L;
    int l_146 = 0x0190EB1BL;
    l_145 = (((*l_144) = func_32((5L || (((4294967286UL <= l_38) | 0xF844BA92L) && g_7)), (safe_lshift_func_uint8_t_u_s(((l_38 ^ func_41((*g_6), ((*l_46) = &g_15), (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(func_54((p_30 = ((*l_57) = &g_15)), g_7), (*g_6))), l_38)) ^ 0x627823D1L), 0x160DD4F9L)), &g_9)) <= g_7), 5)), g_7, l_88, &g_7)) != l_38);
    return l_146;
}







static unsigned short func_32(unsigned char p_33, const unsigned p_34, int p_35, char * p_36, char * p_37)
{
    int **l_97 = &g_15;
    int ***l_98 = (void*)0;
    int ***l_99 = &l_97;
    unsigned char *l_100 = &g_101;
    char *l_106 = (void*)0;
    char *l_107 = &g_108;
    unsigned short *l_109 = (void*)0;
    unsigned short *l_110 = &g_111;
    if ((0L && (((safe_rshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(g_9, ((*l_110) |= (((*l_100) &= func_54(((*l_99) = l_97), p_35)) != (+(((*g_6) > g_7) | (((safe_lshift_func_int8_t_s_s((0xB3L > (safe_lshift_func_int8_t_s_s(((*l_107) &= (0x70294BA7L && g_7)), 1))), (*p_37))) ^ (*g_6)) != p_35))))))), g_7)) != 1L), 1)) != 4294967287UL) < 0x82AEBACBL)))
    {
        unsigned char l_134 = 252UL;
        const int l_137 = 1L;
        int l_138 = 0xF61DB451L;
        int l_139 = 0x64DC9450L;
        for (p_35 = 0; (p_35 > (-17)); p_35 = safe_sub_func_uint16_t_u_u(p_35, 3))
        {
            int **l_123 = &g_15;
            int ***l_124 = &l_123;
            int **l_126 = &g_15;
            int ***l_125 = &l_126;
            const int ***l_129 = &g_127;
            int *l_130 = &g_131;
            for (g_7 = 12; (g_7 >= 11); g_7 = safe_sub_func_int32_t_s_s(g_7, 3))
            {
                int *l_116 = (void*)0;
                int *l_117 = &g_60;
                unsigned char l_118 = 0x18L;
                l_118++;
            }
            (*l_130) |= func_54((*l_99), ((safe_rshift_func_int16_t_s_s((((*l_125) = ((*l_124) = l_123)) != ((*l_129) = g_127)), 13)) < p_35));
            (**l_126) = (((l_138 = (safe_rshift_func_uint16_t_u_u((--l_134), l_137))) & (((*p_37) == (l_139 = 0L)) ^ (safe_mod_func_uint16_t_u_u((((g_101 & (*g_6)) <= g_142) ^ 0UL), 65530UL)))) == l_137);
            l_139 = (*g_15);
        }
    }
    else
    {
        unsigned char l_143 = 0xAEL;
        (**l_97) = p_34;
        return l_143;
    }
    return g_108;
}







static short func_41(char p_42, int ** p_43, short p_44, int * const p_45)
{
    int **l_84 = &g_15;
    int *l_87 = &g_60;
    (*l_87) = (safe_rshift_func_int16_t_s_s(7L, ((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((((func_54(l_84, g_7) & p_42) | (safe_mod_func_int32_t_s_s((0xA0EDE8B3L ^ ((*p_45) | ((*g_6) == p_44))), (*p_45)))) & 1UL), 6)), 0x87E3L)) && 1L)));
    return (*l_87);
}







static unsigned char func_54(int ** p_55, unsigned p_56)
{
    int *l_59 = &g_60;
    int *l_61 = &g_60;
    int *l_62 = &g_60;
    int *l_63 = &g_60;
    int *l_64 = &g_60;
    int *l_65 = &g_60;
    int *l_66 = &g_60;
    int *l_67 = (void*)0;
    int *l_68 = &g_60;
    int *l_69 = &g_60;
    int *l_70 = &g_60;
    int *l_71 = &g_60;
    int *l_72 = (void*)0;
    int *l_73 = &g_60;
    unsigned short l_74 = 0x88BAL;
    int *l_77 = &g_60;
    --l_74;
    (*l_66) = (**g_14);
    (*p_55) = l_77;
    (*p_55) = (*g_14);
    return p_56;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_699, "g_699", print_hash_value);
    transparent_crc(g_721, "g_721", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
