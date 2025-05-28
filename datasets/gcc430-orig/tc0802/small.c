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
   unsigned short f0;
};


static int g_15 = 3L;
static unsigned g_35 = 18446744073709551606UL;
static unsigned char g_36 = 0x78L;
static int g_48 = 0xF34EA885L;
static char g_57 = 0xF8L;
static long long g_60 = 1L;
static long long g_81 = 0xFC7A8F60F1B6398CLL;
static long long *g_80 = &g_81;
static unsigned g_99 = 0UL;
static union U0 g_102 = {65527UL};
static int g_117 = 0x6D38C14FL;
static unsigned g_124 = 4294967293UL;
static unsigned long long g_148 = 0x10DF2DAC479B9B32LL;
static int *g_174 = &g_48;
static union U0 g_175 = {65527UL};
static int g_177 = (-1L);
static int *g_176 = &g_177;
static unsigned short *g_182 = &g_175.f0;
static int g_192 = 0xAEF97A49L;
static unsigned g_206 = 0x6D75AD06L;
static short g_214 = 0L;
static unsigned char g_220 = 0UL;
static unsigned long long g_256 = 0x7D7E8CB102025CEFLL;
static unsigned long long g_258 = 1UL;
static unsigned *g_273 = &g_124;
static unsigned g_330 = 4294967286UL;
static int g_337 = (-8L);
static unsigned short g_411 = 65535UL;
static long long g_495 = 1L;
static char **g_517 = (void*)0;
static short g_526 = 0xB8B6L;
static short *g_558 = &g_526;
static short **g_557 = &g_558;
static unsigned short **g_609 = (void*)0;
static int **g_626 = &g_176;
static int ***g_625 = &g_626;
static unsigned long long *g_664 = &g_258;
static unsigned long long **g_663 = &g_664;
static unsigned *g_812 = &g_35;
static unsigned **g_811 = &g_812;
static int g_846 = 0x5F9A6021L;
static char ***g_850 = &g_517;
static char ****g_849 = &g_850;
static union U0 *g_886 = &g_175;
static union U0 **g_885 = &g_886;



static int func_1(void);
static int func_2(unsigned p_3);
static unsigned func_4(unsigned p_5, short p_6);
static unsigned func_7(unsigned short p_8, int p_9, int p_10, short p_11);
static int func_24(char p_25, union U0 p_26, short p_27, int p_28);
static union U0 func_31(unsigned p_32, int p_33);
static unsigned char func_41(unsigned * p_42, short p_43, int p_44);
static unsigned char func_51(int p_52, unsigned p_53);
static long long func_61(unsigned p_62, union U0 p_63, int * p_64, long long p_65);
static unsigned char func_66(short p_67, int p_68, unsigned p_69);
static int func_1(void)
{
    int l_12 = 0xDA5043C4L;
    unsigned *l_34 = &g_35;
    union U0 *l_223 = &g_102;
    unsigned char l_274 = 0x3CL;
    int *l_845 = &g_846;
    int *l_859 = (void*)0;
    int *l_860 = &g_48;
    long long *l_874 = &g_81;
    unsigned short l_876 = 0x311CL;
    short l_912 = 0x4C72L;
    (*l_845) &= func_2(func_4(func_7(l_12, (~((safe_rshift_func_int16_t_s_u(0x5C9EL, (+((g_15 &= l_12) == (safe_add_func_int64_t_s_s(((*g_80) = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((((l_12 >= (~(((safe_mul_func_uint16_t_u_u(((func_24((safe_mul_func_int8_t_s_s(0x13L, l_12)), ((*l_223) = func_31(((*l_34) ^= l_12), g_36)), g_175.f0, l_12) != l_12) == 0xBBF6E08B93ECFD49LL), l_12)) ^ g_175.f0) > l_12))) == 6UL) != 0UL) && 0x25L), (*g_182))), l_12))), 0xC6C6D99D8F9857E4LL)))))) != 0x4CL)), l_274, l_274), g_495));

    ;

    ;
    (*l_845) = ((*l_860) &= (0xF3L == (((safe_mod_func_int64_t_s_s(((*g_80) ^= (g_849 != (void*)0)), g_36)) >= ((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((*g_558) |= (safe_mod_func_uint8_t_u_u(func_4(((*l_34) = ((*l_845) ^ (*l_845))), (l_12 = (*l_845))), (*l_845)))), 0xB57BL)), g_60)), (*l_845))) >= g_177)) < g_148)));
    for (g_117 = 0; (g_117 > (-17)); g_117--)
    {
        int l_863 = 9L;
        char l_880 = (-8L);
        int *l_889 = &l_12;
        if (l_863)
            break;
        (*g_626) = (void*)0;

        ;
        for (g_36 = 0; (g_36 > 11); g_36 = safe_add_func_uint32_t_u_u(g_36, 2))
        {
            short l_875 = (-1L);
            int l_877 = 0xD20D8833L;
            int l_888 = 0x7C4A53C1L;
            for (g_214 = (-25); (g_214 <= (-9)); g_214 = safe_add_func_int32_t_s_s(g_214, 4))
            {
                unsigned char *l_872 = &g_220;
                int l_873 = 0xEFC64567L;
                unsigned l_908 = 1UL;
                if (((*l_860) = (l_877 = ((safe_rshift_func_int8_t_s_s((0xAFBB91FDL || func_4(((*g_812) = (safe_sub_func_uint64_t_u_u((((*l_872) = func_4((**g_811), (*g_558))) >= l_863), (l_873 < (((*l_874) &= ((void*)0 != l_874)) >= (l_863 >= l_875)))))), l_875)), l_876)) & l_873))))
                {
                    union U0 ***l_887 = &g_885;
                    (*l_860) = (*g_174);
                    l_880 = func_4((**g_811), (safe_add_func_int16_t_s_s(0xEEF0L, (-10L))));
                    (*l_860) = l_877;
                    l_888 ^= (l_877 | (((-4L) < ((safe_sub_func_int16_t_s_s(((((((((*g_182) = (safe_mul_func_uint8_t_u_u(((&g_15 != &g_15) == (*g_80)), l_875))) || ((((void*)0 == (*g_663)) > (((*l_887) = g_885) != &g_886)) != l_873)) & (*l_845)) > g_148) & 0xA210F273L) <= g_177) && (*g_558)), l_875)) < 1UL)) < 9L));
                }
                else
                {
                    unsigned l_896 = 0xF46D259BL;
                    (*g_626) = l_889;

                    ;
                    for (g_60 = (-22); (g_60 != 9); g_60 = safe_add_func_int64_t_s_s(g_60, 2))
                    {
                        short **l_905 = (void*)0;
                        short *l_907 = &g_526;
                        short **l_906 = &l_907;
                        int l_909 = 0x5B9A1608L;
                        (**g_626) |= ((*g_273) != func_4((safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((func_4((**g_811), l_896) ^ ((safe_rshift_func_int16_t_s_u(((*g_558) & (**g_557)), func_4(((safe_mod_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u(((*g_557) == ((*l_906) = &l_875)), 0x0243F0681AA313D8LL)) <= (*g_80)), l_908)), l_896)) <= (*g_664)), l_896))) | g_57)), (**g_663))), 0x1A73L)), (*g_558)));

                        ;
                        return l_909;


                    }
                    (**g_625) = (*g_626);
                    for (g_256 = 0; (g_256 == 53); g_256++)
                    {
                        return (*l_860);


                    }
                }

                ;
                return l_912;


            }
            if (l_888)
                break;
            for (l_912 = 0; (l_912 <= (-20)); l_912 = safe_sub_func_int64_t_s_s(l_912, 1))
            {
                (*g_626) = (**g_625);
            }
        }
        l_889 = ((*g_626) = (**g_625));

        ;
    }
    return (*l_860);
}







static int func_2(unsigned p_3)
{
    unsigned *l_507 = &g_206;
    int l_508 = 6L;
    short *l_509 = &g_214;
    int l_510 = 0L;
    long long *l_513 = &g_495;
    char *l_515 = &g_57;
    char **l_514 = &l_515;
    int *l_580 = &g_192;
    int *l_681 = &g_192;
    union U0 l_686 = {0x5B62L};
    unsigned **l_689 = &g_273;
    unsigned l_789 = 0x6C75E6F0L;
    if (((l_508 <= (*g_273)) | l_510))
    {
        char ***l_516 = &l_514;
        int *l_518 = &g_192;
        int **l_519 = &g_176;
        unsigned short **l_608 = &g_182;
        int l_610 = (-1L);
        int l_612 = 0x2BBC0EFAL;
        unsigned l_631 = 0x08B5089BL;
        unsigned short l_672 = 0xE9B6L;
        (*g_176) = (p_3 < ((*l_509) = ((((*l_516) = l_514) == g_517) != p_3)));
        (*g_176) = (*g_176);
        if ((&l_510 != ((*l_519) = l_518)))
        {
            unsigned short l_520 = 0xEA50L;
            short *l_525 = &g_526;
            unsigned char *l_527 = &g_220;
            int *l_528 = &g_337;
            short *l_542 = &g_526;
            int l_563 = 0x36624961L;
            if (func_61(((l_520 >= (2UL && (*g_80))) != (safe_mul_func_int16_t_s_s(((*l_525) = (((*l_527) = (p_3 | func_4(((safe_mod_func_int32_t_s_s(func_4(g_192, ((*l_525) &= (g_214 = ((void*)0 == &p_3)))), func_4((g_495 ^ 0xBBFAL), p_3))) || 0xAB2FL), p_3))) >= p_3)), (**l_519)))), g_102, l_528, (*g_80)))
            {
                long long l_547 = 0x7251C7DA0AB8EF6BLL;
                int l_548 = (-4L);
                if ((&p_3 == l_528))
                {
                    int *l_531 = (void*)0;
                    g_176 = (g_174 = &g_117);

                    ;
                    ;
                    (*g_174) = (*g_176);
                    for (g_526 = 21; (g_526 <= (-25)); --g_526)
                    {
                        l_531 = &g_48;

                        ;
                    }

                    ;
                }
                else
                {
                    short **l_543 = &l_509;
                    short **l_544 = &l_525;
                    for (g_192 = 0; (g_192 > 0); g_192 = safe_add_func_int16_t_s_s(g_192, 7))
                    {
                        (*l_519) = &g_177;

                        ;
                        return (*g_176);
                    }
                    (**l_519) = ((*l_528) | (g_117 > ((-6L) < (((*l_518) || (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((safe_add_func_int64_t_s_s(((((*l_543) = (l_542 = &g_214)) != ((*l_544) = (void*)0)) >= ((safe_rshift_func_uint8_t_u_s((!func_4(g_177, (g_124 || (p_3 > 0UL)))), 5)) == 0x0F40L)), p_3)) & p_3), (*g_176))), (-9L)))) == l_547))));

                    ;
                    ;
                }

                ;
                ;
                ;
                ;
                l_548 = ((*l_528) ^ p_3);
            }
            else
            {
                short **l_556 = (void*)0;
                short ***l_555 = &l_556;
                unsigned long long *l_564 = &g_148;
                int l_570 = 0x4C04676BL;
                (**l_519) = (safe_rshift_func_int16_t_s_s(((*l_528) & p_3), p_3));
                (*l_518) = (safe_sub_func_uint16_t_u_u(((*g_182) = (safe_sub_func_uint64_t_u_u((l_510 & func_4((**l_519), ((((*l_555) = &l_542) == g_557) == (safe_rshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((*l_564) = l_563), p_3)), 2))))), (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s(((((p_3 & (*g_273)) < 0xB2L) & (**l_519)) && l_570))), 11)), 0L))))), g_81));

                ;
            }

            ;
            ;
            ;
            ;
        }
        else
        {
            unsigned l_582 = 4294967290UL;
            unsigned *l_588 = &g_206;
            unsigned *l_611 = &g_35;
            int *l_613 = &g_15;
            unsigned **l_614 = &l_588;
            int ***l_628 = &l_519;
            int l_638 = 0x56886CA4L;
            short l_639 = 1L;
            for (l_510 = 0; (l_510 > (-13)); l_510--)
            {
                unsigned short l_577 = 0x0E1CL;
                int *l_581 = &g_15;
                unsigned short l_583 = 0x09B3L;
                int **l_589 = &l_581;
                int *l_591 = &g_15;
                int **l_590 = &l_591;
                (*l_518) = 0x4072B97FL;
                l_583 ^= ((0xA5826E2AL <= ((((*g_182) && 0UL) | (safe_rshift_func_int16_t_s_s(((*g_558) = ((safe_lshift_func_int16_t_s_s(((*l_509) ^= (**l_519)), 8)) & p_3)), 0))) != (0UL <= (((func_66(l_577, ((*l_581) = (safe_mul_func_uint8_t_u_u((l_580 != (void*)0), (-1L)))), l_582) <= l_577) | l_582) == p_3)))) & p_3);
                (*l_580) = (func_7((safe_mod_func_uint8_t_u_u(p_3, (safe_mul_func_int8_t_s_s(l_583, 1L)))), p_3, (*g_174), (*g_558)) == p_3);

                ;
                return (*g_174);
            }
            (*g_174) &= (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((safe_add_func_int64_t_s_s(p_3, ((*l_580) = 0xB39624D6171F8547LL))), (**g_557))) < (l_612 |= ((func_4(((*l_611) |= ((*l_588) |= (safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(p_3, (4294967295UL <= (*g_273)))) > (((*g_80) == ((safe_lshift_func_int16_t_s_s(func_4((l_608 != (g_609 = &g_182)), (*g_558)), 10)) ^ l_582)) >= l_610)), 4)))), (**g_557)) | (*g_80)) > 1L))), 0xBEC5L)), 0x1BL));

            ;
            if (p_3)
            {
                int ****l_627 = &g_625;
                short l_640 = (-1L);
                if ((l_639 = (l_638 |= ((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_48, (((*l_627) = g_625) != (l_628 = (void*)0)))), (safe_add_func_uint16_t_u_u((l_631 || (*l_518)), ((*g_558) = func_4(g_192, (safe_sub_func_int64_t_s_s((((((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((((*g_273) != func_4(g_117, (*l_580))) || l_582), (**l_519))), p_3)) | p_3) && 65535UL) || (*l_580)) | (-3L)), 0xEA858DBCC2ADB746LL)))))))), (*g_182))) != 0xF09C4CCFL), p_3)), 1UL)) < (*l_518)))))
                {
                    (*l_519) = (*g_626);
                    return l_640;
                }
                else
                {
                    short l_643 = 0x3A23L;
                    char l_646 = 0x64L;
                    (*g_174) ^= (((((**l_519) < (safe_add_func_uint16_t_u_u(l_643, p_3))) | ((void*)0 == &l_640)) & ((**l_608) = (safe_add_func_uint8_t_u_u((g_220 = p_3), g_124)))) & 1L);
                    return l_646;
                }
            }
            else
            {
                unsigned long long l_680 = 0x347421A43EE4E511LL;
                if ((safe_mod_func_int32_t_s_s(((**g_626) &= (safe_mod_func_int32_t_s_s(p_3, ((*g_273) |= 4294967295UL)))), p_3)))
                {
                    unsigned char l_679 = 0UL;
                    for (l_510 = 19; (l_510 < 16); --l_510)
                    {
                        unsigned l_665 = 4294967295UL;
                        (*g_174) ^= (**g_626);
                        (*g_174) = ((**l_519) = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((g_148 <= ((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(func_4(((g_663 != &g_664) < func_4(l_665, ((251UL & ((**l_514) = (((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u(l_672, (safe_mul_func_int16_t_s_s((*g_558), ((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((*g_182), 0xCF44L)), 2)) & 0x8EA0CD88C6BB1CFBLL))))) ^ l_679), 11)) == (*g_182)) & l_680))) < 0L))), p_3), p_3)), g_526)), 1)) & (*g_273))), p_3)), 2)));
                    }
                    (*g_176) = p_3;
                    l_580 = (*g_626);
                }
                else
                {
                    (*g_176) = (***l_628);
                }
            }
        }

        ;
        ;
        ;
        (**g_625) = l_681;

        ;
    }
    else
    {
        int l_703 = 0x5DB8D120L;
        int l_704 = 0x74EF5C55L;
        unsigned char *l_721 = &g_220;
        for (g_35 = (-5); (g_35 > 38); ++g_35)
        {
            unsigned l_690 = 18446744073709551615UL;
        }
        if ((l_704 || ((*g_273) = (((l_704 | ((*l_721) = (!(safe_mod_func_int64_t_s_s(p_3, (safe_rshift_func_uint16_t_u_u(((*g_182) |= ((*g_80) > ((*g_664) = 2UL))), 15))))))) & (&g_557 != &g_557)) < p_3))))
        {
            unsigned long long l_727 = 0xADD422439332AC86LL;
            (**g_625) = &l_510;

            ;
            for (g_35 = 0; (g_35 >= 37); g_35 = safe_add_func_int16_t_s_s(g_35, 7))
            {
                int *l_724 = &l_508;
                char ***l_726 = (void*)0;
                char ****l_725 = &l_726;
                (*g_626) = l_724;

                ;
                (*l_724) &= (~((&g_517 == ((*l_725) = &g_517)) ^ l_727));

                ;
            }

            ;
            (***g_625) = (*l_681);
            for (g_256 = 26; (g_256 >= 38); g_256 = safe_add_func_int32_t_s_s(g_256, 6))
            {
                unsigned short l_737 = 0x62DBL;
                if (((*g_176) = (safe_add_func_int64_t_s_s(7L, (*l_681)))))
                {
                    int l_736 = 0x4D192372L;
                    (*g_176) |= (safe_sub_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((l_736 <= l_737), p_3)) == l_736), ((~((-1L) || ((safe_lshift_func_uint8_t_u_u((((**l_514) = 0xDEL) > func_66(l_727, g_177, (*g_273))), (*l_580))) < p_3))) | 8UL)));
                }
                else
                {
                    return p_3;


                }
            }
        }
        else
        {
            int *l_740 = (void*)0;
            (*g_174) ^= (*l_580);
            (*l_681) &= 0L;
            (*g_626) = l_740;

            ;
            return p_3;
        }

        ;
        (**g_626) = (l_703 > ((&g_15 != &g_15) != (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((*l_681), 2)), (((65530UL > ((*g_182) &= (1L == (p_3 | 9UL)))) | func_66(((safe_add_func_int64_t_s_s(0L, (*g_80))) < p_3), p_3, p_3)) || (***g_625)))), 7))));
    }

    ;
    ;
    ;
    (*g_174) = (safe_rshift_func_uint16_t_u_u(0UL, 14));
    for (l_508 = 0; (l_508 != 19); ++l_508)
    {
        unsigned long long l_755 = 0x1E9C4BE40408EBD3LL;
        int l_762 = 0x11F2EE10L;
        unsigned short **l_763 = &g_182;
        unsigned **l_810 = &l_507;
        if ((safe_sub_func_int8_t_s_s((l_755 >= (*g_80)), p_3)))
        {
            unsigned long long l_768 = 0xFC090A7F49254B59LL;
            long long *l_779 = &g_60;
            int **l_816 = &l_681;
            unsigned char *l_822 = &g_36;
            short **l_843 = &l_509;
            long long l_844 = 0x8E7A7D9FDAAFCD3DLL;
            (*l_580) |= p_3;
            (*l_580) ^= ((*g_174) ^= (0L || (((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((l_762 = 4294967295UL), (((*l_513) = ((*g_80) = 0x78B807FE780E7605LL)) || (*g_80)))), (~p_3))) | (l_763 == (void*)0)) & ((((safe_sub_func_int16_t_s_s((l_755 && (((safe_rshift_func_int8_t_s_u((p_3 || p_3), l_768)) | g_214) <= l_755)), l_755)) | 65526UL) && 0xCF681C85FBB34B01LL) < p_3))));
            if ((safe_mul_func_int8_t_s_s((-9L), g_35)))
            {
                unsigned long long l_773 = 0xEEDF27189A8D835ALL;
                long long *l_778 = &g_495;
                int l_781 = 3L;
                int l_782 = 0x873FE5B6L;
                unsigned short *l_787 = &g_175.f0;
                unsigned char *l_788 = &g_220;
                int *l_790 = &g_337;
                (*l_790) ^= ((safe_lshift_func_int8_t_s_s((((func_66(((**g_557) = (l_773 | ((*l_788) ^= ((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((l_778 == l_779), (safe_unary_minus_func_uint16_t_u(((***g_625) < ((*g_558) | (l_782 |= (l_781 &= 1L)))))))), (safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(((void*)0 == l_787), ((((*g_557) != (void*)0) & l_762) != p_3))) != l_768), l_768)))) >= p_3)))), g_175.f0, (*g_273)) > l_789) | (*g_176)) >= l_773), 0)) && 0xEACEL);
            }
            else
            {
                unsigned l_806 = 1UL;
                if (p_3)
                {
                    short l_807 = 9L;
                    int *l_817 = &l_510;
                    union U0 *l_830 = &g_175;
                    for (g_102.f0 = 11; (g_102.f0 == 47); ++g_102.f0)
                    {
                        int *l_793 = &l_508;
                        (*g_626) = l_793;

                        ;
                    }
                    if ((safe_lshift_func_uint16_t_u_u(p_3, ((*g_182) >= (+(((safe_lshift_func_uint16_t_u_u(((l_807 = (safe_add_func_int64_t_s_s(l_806, (**g_663)))) <= p_3), (*g_182))) & 1L) > 0x5BL))))))
                    {
                        unsigned ***l_813 = &g_811;
                        unsigned char *l_821 = &g_36;
                        unsigned char **l_823 = &l_822;
                        (*l_580) = ((safe_rshift_func_int8_t_s_u(l_755, (l_810 == ((*l_813) = g_811)))) > ((l_755 ^ (((p_3 != p_3) < g_330) || (safe_mod_func_int32_t_s_s(((void*)0 == l_816), (**g_626))))) == 0xDCE9E878L));
                        (*g_626) = l_817;

                        ;
                        (*g_176) = ((safe_mul_func_uint16_t_u_u((((*l_515) = ((**l_816) = (safe_unary_minus_func_int32_t_s((l_821 == ((*l_823) = l_822)))))) | (safe_rshift_func_int16_t_s_u(p_3, 5))), (safe_mul_func_int16_t_s_s(((*l_509) |= (**g_557)), ((void*)0 == &g_124))))) || (p_3 <= (safe_add_func_uint64_t_u_u(((**g_663) = (**g_663)), p_3))));
                    }
                    else
                    {
                        union U0 **l_831 = (void*)0;
                        union U0 **l_832 = &l_830;
                        (*l_832) = l_830;
                        (*g_174) = (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_s((*l_817), 0)))), 9));
                        (**g_625) = &l_508;

                        ;
                    }

                    ;
                }
                else
                {
                    int *l_840 = &g_192;
                    (**l_816) = p_3;
                    for (g_495 = 0; (g_495 >= 28); g_495 = safe_add_func_uint64_t_u_u(g_495, 9))
                    {
                        (*g_626) = (*g_626);
                        (*g_626) = l_840;

                        ;
                        (**g_625) = (*l_816);
                        (***g_625) = (func_4((*l_580), p_3) != p_3);
                    }
                    (*g_174) = ((safe_sub_func_int64_t_s_s((*g_80), (((p_3 && ((void*)0 == l_843)) | (**g_663)) < func_4((*g_812), (((*l_515) = (1UL < p_3)) && (0x74L <= l_844)))))) == p_3);
                }
            }
        }
        else
        {
            (*l_580) &= p_3;
            (**g_625) = &l_510;

            ;
        }
    }
    return p_3;


}







static unsigned func_4(unsigned p_5, short p_6)
{
    union U0 *l_505 = &g_175;
    union U0 **l_504 = &l_505;
    int l_506 = 0xF3B5059EL;
    (*l_504) = &g_102;

    ;
    return l_506;
}







static unsigned func_7(unsigned short p_8, int p_9, int p_10, short p_11)
{
    unsigned short **l_277 = &g_182;
    int l_282 = 1L;
    unsigned long long *l_289 = &g_256;
    char *l_307 = (void*)0;
    int l_309 = (-9L);
    unsigned long long l_317 = 18446744073709551607UL;
    short l_327 = 0L;
    int l_360 = 0x61797122L;
    char l_400 = 6L;
    int **l_460 = (void*)0;
    int *l_497 = &l_282;
    if ((safe_add_func_int8_t_s_s((l_277 != &g_182), ((safe_add_func_int8_t_s_s(l_282, l_282)) == 2L))))
    {
        unsigned l_331 = 0x22C59ECBL;
        unsigned **l_363 = (void*)0;
        unsigned **l_364 = (void*)0;
        unsigned *l_366 = &g_206;
        unsigned **l_365 = &l_366;
        unsigned char *l_379 = &g_220;
        char **l_380 = &l_307;
        char *l_381 = &g_57;
        char **l_382 = (void*)0;
        char **l_383 = (void*)0;
        char **l_384 = &l_381;
        for (g_177 = 0; (g_177 <= (-16)); g_177 = safe_sub_func_uint8_t_u_u(g_177, 2))
        {
            char l_305 = 0xB2L;
            unsigned l_341 = 0x6C639F2AL;
            int *l_342 = &l_282;
            for (p_9 = 0; (p_9 > 5); p_9++)
            {
                int *l_298 = &l_282;
                if (((*l_298) = p_9))
                {
                    for (g_175.f0 = 20; (g_175.f0 == 53); g_175.f0 = safe_add_func_uint32_t_u_u(g_175.f0, 1))
                    {
                        (*l_298) &= (*g_176);
                    }
                    return p_11;
                }
                else
                {
                    unsigned l_306 = 0UL;
                    unsigned char *l_308 = (void*)0;
                    unsigned char *l_310 = &g_36;
                    unsigned char *l_311 = (void*)0;
                    unsigned char *l_312 = &g_220;
                    int *l_313 = (void*)0;
                    int *l_314 = (void*)0;
                    int *l_315 = &g_117;
                    unsigned short l_316 = 0xEA1FL;
                    short *l_318 = &g_214;
                    int *l_328 = (void*)0;
                    int *l_329 = (void*)0;
                    int *l_332 = (void*)0;
                    l_306 = ((*l_298) = (safe_sub_func_uint64_t_u_u((((*g_273) = (*g_273)) && (safe_mul_func_int8_t_s_s(l_305, g_117))), (p_8 == (*g_182)))));
                    (*l_315) = ((*l_298) = func_66((func_66((*l_298), (+(&g_57 == l_307)), ((g_117 != (l_306 || ((*l_310) = (l_309 = p_8)))) < ((*g_80) = p_11))) <= ((*l_312) = g_177)), g_57, g_177));
                    g_192 ^= (((*l_289) = (l_331 = ((p_8 = ((*g_182) |= l_316)) | (func_66(((*l_318) = l_317), (((*l_298) ^= (safe_mul_func_int16_t_s_s((g_330 = ((((safe_rshift_func_int8_t_s_s(g_99, (safe_add_func_uint64_t_u_u(0x3B4E5F672533188ELL, (*g_80))))) != l_317) || (func_66(g_60, (g_15 = (safe_add_func_uint64_t_u_u(0x3622FC61834C5308LL, func_66(l_327, l_317, (*g_273))))), p_10) == g_57)) == p_10)), g_57))) & g_258), p_11) > 0xA114L)))) > g_36);
                    for (g_99 = (-10); (g_99 == 29); g_99 = safe_add_func_uint8_t_u_u(g_99, 6))
                    {
                        (*l_315) ^= (0x3B88300E0F48A359LL || ((l_317 < ((safe_rshift_func_uint16_t_u_u(g_337, 0)) >= l_305)) <= ((*l_298) |= p_9)));
                    }
                }
            }
            for (p_10 = (-2); (p_10 != 21); p_10++)
            {
                int *l_340 = &g_48;
                (*l_340) ^= p_11;
            }
            (*l_342) ^= l_341;
        }
        for (g_102.f0 = (-15); (g_102.f0 != 11); ++g_102.f0)
        {
            unsigned char *l_353 = &g_36;
            int l_361 = 4L;
            char *l_362 = &g_57;
            (*g_174) = ((((safe_rshift_func_uint8_t_u_s(((*l_353) = func_24(l_282, g_102, (safe_add_func_uint64_t_u_u(p_8, (safe_lshift_func_uint16_t_u_s(((*g_182) | p_11), 13)))), g_214)), 6)) | (safe_lshift_func_int8_t_s_s(((*l_362) &= ((l_361 = (0xCFC8D8B8L < ((safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((&g_60 != (void*)0) != l_360), p_11)), l_309)) > l_331))) ^ p_9)), 7))) > l_282) && 0UL);
        }
        (*g_176) = ((l_282 == 0UL) ^ 0L);
    }
    else
    {
        unsigned l_405 = 0x92E8EBB7L;
        union U0 *l_434 = &g_175;
        union U0 **l_433 = &l_434;
        unsigned short *l_435 = &g_411;
        int *l_496 = &g_192;
        for (l_317 = 0; (l_317 <= 36); l_317 = safe_add_func_uint32_t_u_u(l_317, 1))
        {
            int l_395 = 0xB43CCFAFL;
            unsigned l_404 = 18446744073709551615UL;
            union U0 *l_481 = &g_102;
            int **l_499 = &g_174;
        }
        p_10 |= ((void*)0 == &g_256);
    }
    (*g_176) = ((*l_497) = func_66(g_48, g_36, ((*g_273) = ((((*l_289) = g_99) < (safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(p_9, g_60)), (&g_124 == (void*)0)))) || 0x9EL))));
    (*l_497) |= (0x99L <= g_36);
    return g_60;
}







static int func_24(char p_25, union U0 p_26, short p_27, int p_28)
{
    int *l_250 = (void*)0;
    char l_264 = 1L;
    (*g_174) = 0x41D22127L;
    for (p_28 = 28; (p_28 > (-7)); p_28 = safe_sub_func_int8_t_s_s(p_28, 1))
    {
        unsigned short l_235 = 65528UL;
        int *l_261 = &g_177;
        for (g_99 = (-20); (g_99 >= 23); g_99 = safe_add_func_int32_t_s_s(g_99, 9))
        {
            (*g_174) = 5L;
            if (p_28)
                continue;
        }
        for (g_148 = 4; (g_148 >= 17); g_148++)
        {
            char l_234 = 0x86L;
            unsigned *l_252 = &g_206;
            unsigned *l_272 = &g_124;
            unsigned **l_271 = &l_272;
            (*g_174) = ((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_234, 9UL)), l_235)) || (~(safe_rshift_func_int16_t_s_s(((p_25 ^ 0xBC3E6D6FF152E6D4LL) & (l_235 != p_27)), (safe_unary_minus_func_int64_t_s(((*g_80) = ((safe_rshift_func_int8_t_s_s(((*g_176) == (g_99 <= g_206)), l_235)) ^ 0x11B62D16L))))))));
            if ((0xCBL >= ((*g_182) != p_28)))
            {
                unsigned l_247 = 0xC39DA6AAL;
                unsigned *l_254 = &g_35;
                unsigned **l_253 = &l_254;
                unsigned long long *l_255 = &g_256;
                unsigned long long *l_257 = &g_258;
                int *l_259 = &g_117;
                (*l_259) ^= (safe_sub_func_uint64_t_u_u(18446744073709551612UL, (safe_sub_func_uint64_t_u_u(((*l_257) &= ((*l_255) = ((safe_rshift_func_uint8_t_u_u(l_247, (safe_mul_func_uint16_t_u_u((l_250 == &g_48), ((g_36 & p_27) & ((((*g_80) &= (1L == (safe_unary_minus_func_int16_t_s((((l_252 == ((*l_253) = &g_35)) ^ g_99) && p_28))))) && (*g_80)) > p_28)))))) == (*g_174)))), 1L))));
                if (((~p_26.f0) >= (*l_259)))
                {
                    unsigned short l_260 = 0xEBB8L;
                    if ((g_206 || (g_256 && l_260)))
                    {
                        return p_25;
                    }
                    else
                    {
                        int **l_262 = &l_261;
                        (*l_262) = l_261;
                    }
                    if ((*g_174))
                        break;
                }
                else
                {
                    int **l_263 = &l_259;
                    (*l_263) = l_250;

                    ;
                    if (l_264)
                        break;
                }

                ;
                (*l_261) = ((*l_261) & (safe_lshift_func_int8_t_s_u(g_256, 2)));
            }
            else
            {
                int **l_267 = &l_250;
                short *l_268 = &g_214;
                g_176 = ((*l_267) = &g_48);

                ;
                ;
                (*l_261) &= ((**l_267) ^= (p_26.f0 & ((*l_268) = l_234)));
            }
            (*g_176) = (p_26.f0 & (*g_80));
            (*l_261) = ((+((*g_80) = (safe_mod_func_int8_t_s_s(0xABL, (+(*l_261)))))) && (p_27 || (((*l_271) = &g_99) != (g_273 = &g_124))));

            ;
        }
    }

    ;
    return (*g_174);
}







static union U0 func_31(unsigned p_32, int p_33)
{
    unsigned *l_45 = &g_35;
    int l_209 = 0x90AA6365L;
    int l_212 = (-10L);
    short *l_213 = &g_214;
    unsigned char *l_219 = &g_220;
    int *l_221 = &l_209;
    union U0 l_222 = {65535UL};
    (*l_221) = (safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((*l_219) |= ((((*l_213) = (((*g_176) = (func_41(l_45, g_36, p_33) != l_209)) < ((l_212 = (safe_lshift_func_int8_t_s_s(p_32, 3))) != p_32))) || p_32) ^ (((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(g_175.f0, p_33)), p_32)) ^ p_33) <= 65535UL))), l_209)) >= (*g_182)), 248UL));

    ;
    return l_222;

    }







static unsigned char func_41(unsigned * p_42, short p_43, int p_44)
{
    int *l_46 = (void*)0;
    int *l_47 = &g_48;
    unsigned l_203 = 0x3A87BABEL;
    unsigned l_204 = 18446744073709551608UL;
    unsigned long long *l_205 = &g_148;
    p_44 &= (+((*l_47) &= g_35));
    g_206 |= (safe_mul_func_uint16_t_u_u((1L ^ (func_51(p_44, (*p_42)) && ((*l_47) ^ ((*l_205) = ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(0x97L, (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(p_43, (g_48 <= (((safe_mul_func_int8_t_s_s(p_43, l_203)) && (-6L)) | (*g_182))))), (*l_47))))), l_204)) >= 0xE4L))))), 65535UL));

    ;
    (*g_176) |= (*l_47);
    (*l_47) ^= ((*g_176) = (safe_sub_func_int8_t_s_s(0xB2L, ((void*)0 == l_205))));
    return (*l_47);
}







static unsigned char func_51(int p_52, unsigned p_53)
{
    char *l_56 = &g_57;
    int l_58 = (-1L);
    long long *l_59 = &g_60;
    int *l_191 = &g_192;
    (*l_191) ^= ((g_36 == (safe_rshift_func_uint16_t_u_s((((((*l_56) = g_36) | (((*l_59) ^= l_58) ^ func_61(((func_66(g_48, l_58, l_58) & g_36) > l_58), g_175, g_176, p_53))) || 4294967295UL) ^ p_53), 7))) | (-1L));
    return p_52;
}







static long long func_61(unsigned p_62, union U0 p_63, int * p_64, long long p_65)
{
    unsigned short *l_184 = &g_102.f0;
    unsigned short **l_183 = &l_184;
    int l_187 = 0xF44D4783L;
    (*p_64) &= (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((-1L), 1)), g_99));
    (*g_176) = (g_182 == ((*l_183) = g_182));

    ;
    (*p_64) |= func_66(g_99, g_36, (safe_sub_func_uint16_t_u_u(1UL, l_187)));
    for (g_99 = (-5); (g_99 >= 44); g_99 = safe_add_func_int8_t_s_s(g_99, 6))
    {
        int **l_190 = &g_174;
        (*l_190) = &g_177;

        ;
        return p_65;
    }
    return (*g_80);
}







static unsigned char func_66(short p_67, int p_68, unsigned p_69)
{
    char l_70 = 7L;
    int *l_71 = &g_48;
    char *l_74 = &l_70;
    (*l_71) = l_70;
    if ((safe_mul_func_uint8_t_u_u(p_69, ((*l_74) &= (*l_71)))))
    {
        unsigned l_75 = 0UL;
        int l_86 = 1L;
        int *l_104 = (void*)0;
        int l_125 = 0xC7CC6053L;
        (*l_71) |= (p_68 || 0L);
        (*l_71) = l_75;
        (*l_71) = l_75;
        if (((safe_rshift_func_int16_t_s_s(1L, 4)) > ((safe_add_func_int8_t_s_s(p_69, ((1L <= ((*l_71) = (g_80 != (void*)0))) < (18446744073709551615UL && 18446744073709551615UL)))) == (g_35 <= (safe_unary_minus_func_int16_t_s(((safe_lshift_func_uint8_t_u_u(p_68, 4)) >= p_69)))))))
        {
            unsigned l_85 = 7UL;
            if (p_68)
            {
                int **l_89 = &l_71;
                int l_90 = (-1L);
                (*l_71) |= ((0xE6L | ((l_86 ^= l_85) >= ((*g_80) >= (1L | l_75)))) | (safe_mod_func_int64_t_s_s(l_85, (*g_80))));
                (*l_89) = &g_48;
                (*l_89) = (*l_89);
                l_90 |= ((*l_71) = (3L >= 0x37L));
            }
            else
            {
                int **l_91 = &l_71;
                (*l_71) = g_48;
                (*l_91) = &g_48;
                return g_48;
            }
        }
        else
        {
            unsigned char l_96 = 0UL;
            long long *l_166 = &g_81;
            int l_168 = 0L;
            for (g_35 = 0; (g_35 > 53); g_35++)
            {
                unsigned *l_97 = &l_75;
                unsigned *l_98 = &g_99;
                int *l_100 = &l_86;
                long long *l_167 = (void*)0;
                (*l_100) = (((*l_97) = l_96) < ((*l_71) = ((void*)0 != l_98)));
                if (g_36)
                    continue;
                if (p_69)
                {
                    union U0 *l_101 = &g_102;
                    int l_123 = 0L;
                    int *l_126 = &l_125;
                    (*l_71) = (*l_71);
                    if ((&g_81 != &g_81))
                    {
                        union U0 **l_103 = &l_101;
                        int **l_105 = &l_104;
                        (*l_103) = l_101;
                        (*l_105) = l_104;
                        (*l_100) = 0xA6BAE6ACL;
                    }
                    else
                    {
                        unsigned char *l_116 = (void*)0;
                        int l_122 = 0x79EA335EL;
                        int **l_127 = &l_100;
                        int **l_128 = &l_126;
                        l_125 |= (((safe_rshift_func_int16_t_s_s(((p_69 < 4L) || (safe_mod_func_uint32_t_u_u(g_102.f0, (safe_mul_func_uint16_t_u_u((*l_71), (safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((g_124 = ((g_117 = (+0x31L)) >= (safe_lshift_func_uint16_t_u_s(g_99, (((p_67 == (safe_mod_func_int32_t_s_s(l_122, (+(((*l_97) = 0xA20850DAL) | (*l_100)))))) < p_69) >= l_123))))), g_35)), (*l_100)))))))), g_81)) | p_67) && l_122);
                        (*l_128) = ((*l_127) = l_126);

                        ;
                        if (g_124)
                            break;
                        g_48 = (safe_add_func_uint8_t_u_u(0x38L, (**l_128)));
                    }

                    ;
                    for (g_81 = (-23); (g_81 >= (-29)); g_81 = safe_sub_func_uint16_t_u_u(g_81, 4))
                    {
                        (*l_100) = (g_48 != p_68);
                        (*l_100) = (((*l_98) = g_117) <= ((*l_97) |= ((!g_102.f0) || 0UL)));
                    }
                }
                else
                {
                    char *l_138 = &l_70;
                    int l_139 = 8L;
                    int **l_149 = &l_71;
                    if ((safe_sub_func_int32_t_s_s(p_68, p_69)))
                    {
                        int **l_137 = (void*)0;
                        g_117 ^= ((*l_71) = (*l_100));
                        (*l_71) = (((((*l_71) != 0xAE1B46CBL) & 5UL) ^ (safe_lshift_func_uint16_t_u_s(0xAE08L, 11))) < p_69);
                        l_100 = l_71;

                        ;
                        l_71 = &g_117;

                        ;
                    }
                    else
                    {
                        unsigned **l_142 = (void*)0;
                        unsigned **l_143 = &l_97;
                        unsigned long long *l_147 = &g_148;
                        (*l_71) &= (((l_139 = (l_138 != (void*)0)) & ((*l_100) ^= (safe_mod_func_int16_t_s_s((((*l_143) = &p_69) != (void*)0), (safe_unary_minus_func_int64_t_s((g_102.f0 != p_68))))))) ^ ((safe_mod_func_int64_t_s_s(p_68, p_67)) != ((*l_147) = (g_99 < 0x99D302D7L))));

                        ;
                    }

                    ;
                    ;
                    ;
                    (*l_149) = &g_48;

                    ;
                    if (p_69)
                    {
                        int *l_154 = &l_125;
                        unsigned short *l_164 = (void*)0;
                        unsigned short *l_165 = &g_102.f0;
                        (**l_149) ^= ((safe_sub_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((&g_117 != l_154), (safe_unary_minus_func_int8_t_s((*l_154))))) == (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(((((g_36 < p_68) <= ((0xDC08L == (((*l_98) = ((p_68 || 0x97889B5E22BCF927LL) || ((&g_36 == &g_36) > p_67))) != 0x1996AC18L)) == 0x00E0B9DAL)) == p_69) >= l_96), g_124)), 7))), 0xC78F562D4CACFD22LL)) <= p_67);
                        if (p_69)
                            break;
                        (*l_71) &= (safe_add_func_int16_t_s_s(p_67, ((safe_rshift_func_uint8_t_u_u(g_124, p_69)) >= p_69)));
                        (*l_100) = ((0x2BCDE28A808B72A2LL >= (((*l_165) = ((((*l_154) >= g_35) >= p_68) && g_48)) | ((((*l_74) = (l_166 != l_167)) != (l_100 == l_98)) || p_69))) ^ p_67);
                    }
                    else
                    {
                        unsigned l_169 = 0x142B96BFL;
                        int l_170 = 0xE9BBC179L;
                        (*l_149) = (*l_149);
                        l_169 &= ((l_168 &= ((((*l_149) = l_71) != (void*)0) ^ g_35)) <= g_102.f0);
                        l_170 ^= ((*l_71) = g_124);
                        (*l_71) |= p_69;
                    }
                }

                ;
                ;
                for (p_68 = (-15); (p_68 <= (-14)); p_68 = safe_add_func_uint32_t_u_u(p_68, 8))
                {
                    return g_102.f0;
                }
            }
            return p_67;
        }
    }
    else
    {
        int *l_173 = &g_48;
        g_174 = l_173;

        ;
    }
    return g_124;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_102.f0, "g_102.f0", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_175.f0, "g_175.f0", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
