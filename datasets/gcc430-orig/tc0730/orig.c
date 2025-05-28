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



static int g_2 = 0x4EC2E0CFL;
static unsigned g_61 = 18446744073709551615UL;
static short g_67 = 5L;
static int g_78 = 0x1EBDC590L;
static int g_83 = 0xC95C8F38L;
static int g_85 = (-1L);
static int * volatile g_84 = &g_85;
static short g_109 = (-1L);
static int ** volatile g_113 = (void*)0;
static unsigned g_132 = 9UL;
static int **g_142 = (void*)0;
static int * volatile g_143 = &g_83;
static int g_148 = (-1L);
static int * volatile g_147 = &g_148;
static short g_156 = 0xB75EL;
static unsigned char g_158 = 0xA9L;
static int *g_168 = &g_83;
static int ** volatile g_167 = &g_168;
static short ***g_234 = (void*)0;
static int ** volatile g_236 = (void*)0;
static int ** volatile g_237 = &g_168;
static char g_247 = 0x6AL;
static volatile unsigned g_261 = 0x1F162AC3L;
static volatile unsigned *g_260 = &g_261;
static volatile unsigned * const *g_259 = &g_260;
static int ** volatile g_269 = &g_168;
static int ** volatile g_273 = &g_168;
static int ** volatile g_293 = &g_168;
static int ** volatile g_302 = &g_168;
static unsigned *g_327 = (void*)0;
static unsigned g_329 = 0UL;
static unsigned *g_328 = &g_329;
static unsigned short g_336 = 65530UL;
static int * volatile g_382 = &g_78;
static int *g_421 = &g_85;
static int ** volatile g_420 = &g_421;
static char g_467 = 0L;
static int * volatile g_506 = &g_85;
static int * volatile g_509 = &g_148;
static unsigned char **g_518 = (void*)0;
static int * volatile g_522 = &g_148;
static unsigned g_541 = 0x25DFF6FBL;
static int * volatile g_551 = &g_78;
static int * volatile g_553 = &g_83;
static unsigned char *** volatile g_567 = &g_518;
static const volatile char * const * volatile **g_616 = (void*)0;
static int ** volatile g_651 = &g_421;
static unsigned g_674 = 0x7CC634ACL;
static const int *g_686 = (void*)0;
static const int ** volatile g_685 = &g_686;
static int ** volatile g_717 = &g_421;
static int ** volatile g_729 = &g_421;
static int ** volatile g_730 = &g_421;
static const int ** volatile g_731 = &g_686;
static int ** volatile g_804 = (void*)0;
static int ** const volatile g_805 = (void*)0;
static int ** volatile g_806 = &g_421;
static const int ** volatile g_828 = &g_686;
static int ** volatile g_831 = (void*)0;
static int ** volatile g_832 = (void*)0;
static volatile char g_881 = 0x74L;
static unsigned g_913 = 0xC81B7214L;
static int ** volatile g_945 = &g_168;



static const int func_1(void);
static int func_6(unsigned p_7, short p_8, short p_9, short p_10, unsigned p_11);
static unsigned func_15(unsigned p_16, int p_17);
static short func_32(unsigned char p_33, unsigned p_34, char p_35, unsigned p_36);
static short func_43(unsigned char p_44, unsigned p_45, const unsigned short p_46);
static unsigned short func_52(unsigned p_53, unsigned char p_54, unsigned p_55, short p_56);
static int * func_72(int p_73);
static int * func_88(short * p_89, int * p_90);
static short * func_91(int * p_92, const int p_93, unsigned p_94, int p_95, unsigned p_96);
static int * func_97(int p_98, short * p_99, unsigned char p_100, unsigned char p_101, int p_102);
static const int func_1(void)
{
    unsigned short l_12 = 6UL;
    unsigned l_914 = 18446744073709551615UL;
    int l_959 = 0x3F69EDDBL;
    for (g_2 = 9; (g_2 == (-16)); g_2 = safe_sub_func_int16_t_s_s(g_2, 4))
    {
        unsigned short l_5 = 65530UL;
        if (l_5)
            break;
    }
    l_959 = (func_6((l_12 <= ((safe_lshift_func_uint16_t_u_u((func_15(((safe_sub_func_uint32_t_u_u((65526UL & (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((7L || g_2), l_12)), ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(l_12, 4)), 6)) > ((safe_rshift_func_int8_t_s_s((-3L), 0)) == ((((0x413FL <= func_32(((safe_rshift_func_uint8_t_u_u(l_12, 7)) == 0UL), g_2, l_12, l_12)) <= l_12) <= l_12) != g_2)))))), 0L)) ^ 4294967290UL), g_2) && (**g_259)), g_913)) >= g_913)), l_12, l_914, l_914, l_12) && l_914);
    return l_12;
}







static int func_6(unsigned p_7, short p_8, short p_9, short p_10, unsigned p_11)
{
    char l_923 = 0x57L;
    unsigned char *l_924 = (void*)0;
    unsigned char *l_925 = &g_158;
    unsigned *l_926 = (void*)0;
    short l_937 = 0x2F56L;
    int l_938 = 0x675AF6A4L;
    int l_939 = 0x85F7A62DL;
    int l_940 = 1L;
    unsigned short *l_941 = &g_336;
    short *l_942 = &g_67;
    char *l_943 = &g_247;
    if ((safe_lshift_func_int8_t_s_s((((*l_943) = ((safe_add_func_int16_t_s_s((-1L), ((*l_942) = (safe_rshift_func_uint8_t_u_u(func_43((safe_rshift_func_int8_t_s_u(((((*l_925) = l_923) <= func_52((&p_7 == l_926), ((safe_sub_func_int32_t_s_s(l_923, ((safe_lshift_func_uint16_t_u_u(g_247, 2)) != (((*l_941) = (safe_add_func_int32_t_s_s((((((((l_940 = (l_939 = (g_109 == (safe_add_func_uint16_t_u_u(p_8, (l_938 = func_52((safe_rshift_func_int16_t_s_s((!0x76DEL), p_7)), l_923, p_8, l_937))))))) | 0UL) ^ l_923) < l_923) == 0x358C66BEL) & p_11) == 0x2C9AL), l_923))) & p_10)))) | g_913), (*g_328), g_67)) < p_7), 3)), l_937, l_923), 5))))) ^ p_11)) < g_2), 0)))
    {
        int *l_944 = &g_83;
        (*g_945) = l_944;
    }
    else
    {
        int **l_946 = &g_168;
        char **l_954 = &l_943;
        char ***l_953 = &l_954;
        char ****l_952 = &l_953;
        char **** const *l_951 = &l_952;
        (*l_946) = func_72(p_7);
        (*l_946) = func_72((**l_946));
        (*g_168) = (**g_237);
    }
    return l_938;
}







static unsigned func_15(unsigned p_16, int p_17)
{
    unsigned char *l_571 = (void*)0;
    unsigned char *l_572 = (void*)0;
    unsigned char *l_573 = (void*)0;
    unsigned char *l_574 = &g_158;
    int l_583 = 0x1218CC18L;
    unsigned char l_585 = 1UL;
    int *l_587 = (void*)0;
    unsigned l_654 = 7UL;
    unsigned char l_658 = 3UL;
    char ***l_706 = (void*)0;
    char ****l_705 = &l_706;
    unsigned short l_732 = 65535UL;
    int l_773 = 0xB9614C36L;
    const int l_797 = 1L;
    unsigned char l_822 = 1UL;
    unsigned l_837 = 8UL;
    short *l_872 = &g_67;
    unsigned *l_904 = &g_61;
    unsigned char ****l_910 = (void*)0;
    unsigned short l_912 = 0x0DEEL;
    if ((0UL >= ((*l_574) = (safe_mul_func_uint8_t_u_u(((-10L) != p_17), 0x61L)))))
    {
        short *l_577 = &g_109;
        int l_584 = 0L;
        unsigned l_646 = 0x64D628F1L;
        for (g_148 = 1; (g_148 < (-12)); g_148--)
        {
            unsigned short l_578 = 5UL;
            int *l_580 = (void*)0;
            l_580 = func_97(p_17, l_577, p_17, l_578, (safe_unary_minus_func_int8_t_s(g_85)));
            if (p_17)
                continue;
        }
        if (((safe_lshift_func_int8_t_s_u(g_2, l_583)) & (0x4095CB5BL == l_584)))
        {
            int **l_586 = &g_421;
            l_587 = ((*l_586) = func_72((0xE53FL >= (0x57FDL <= ((p_16 & l_585) > 5UL)))));
        }
        else
        {
            unsigned l_588 = 2UL;
            int l_595 = 0x54BE041EL;
            unsigned char l_618 = 254UL;
            short *l_619 = (void*)0;
            int **l_648 = &l_587;
            if (l_584)
            {
                int **l_589 = &g_421;
                char ***l_604 = (void*)0;
                (*l_589) = func_72(l_588);
                for (p_17 = (-17); (p_17 <= 17); ++p_17)
                {
                    short *l_592 = (void*)0;
                    int l_596 = (-1L);
                    int l_597 = 0xF958E436L;
                    short **l_598 = &l_592;
                    unsigned *l_601 = &l_588;
                    char **** const l_617 = &l_604;
                }
            }
            else
            {
                (**g_273) = (-6L);
            }
            for (g_83 = 0; (g_83 != (-6)); g_83--)
            {
                char l_629 = (-1L);
                unsigned short l_642 = 65530UL;
                unsigned short *l_645 = &g_336;
                int *l_647 = &l_595;
                for (g_2 = (-27); (g_2 == 18); ++g_2)
                {
                    int l_636 = 0L;
                    int *l_637 = &g_148;
                    l_595 = ((*l_637) = (g_132 | (safe_rshift_func_uint16_t_u_s((l_629 >= (safe_mul_func_uint16_t_u_u(((&l_577 == (void*)0) | ((((safe_sub_func_uint16_t_u_u(p_17, ((*l_577) = ((p_17 >= (safe_rshift_func_uint16_t_u_s(func_52((**g_259), l_629, (*g_328), l_583), p_16))) == p_17)))) & l_629) == l_629) ^ p_16)), l_636))), 2))));
                }
                (*l_647) = (safe_add_func_int32_t_s_s((((*g_328) | (safe_mod_func_uint16_t_u_u(((*l_645) = func_52(l_618, (((l_642 < func_52((*g_328), (safe_rshift_func_uint16_t_u_u(p_16, ((*l_645) = p_17))), (*g_260), g_329)) ^ l_642) >= (*g_328)), l_646, l_642)), g_61))) >= 1UL), 0x4793B47BL));
            }
            (*l_648) = &l_584;
        }
        for (g_61 = (-14); (g_61 > 25); g_61++)
        {
            return (*g_260);
        }
        (*g_651) = &l_584;
    }
    else
    {
        int **l_655 = (void*)0;
        const int l_663 = (-1L);
        int l_664 = (-1L);
        int *l_665 = (void*)0;
        int *l_666 = &g_85;
        const int *l_688 = (void*)0;
        l_654 = ((*g_84) = ((((safe_add_func_uint32_t_u_u((0xAD8DD980L <= p_16), p_17)) || 0x9599L) <= (**g_269)) != 0x4E5E3198L));
        l_587 = &l_583;
        (*l_587) = (*l_587);
        if (((*l_666) = (safe_add_func_int32_t_s_s(((*l_587) = p_16), (l_664 = func_43((p_17 || (func_32(((*l_574) = l_658), (safe_mul_func_uint8_t_u_u(p_17, p_16)), (safe_lshift_func_uint16_t_u_u(g_247, 12)), g_132) <= (p_17 >= g_2))), p_16, l_663))))))
        {
            unsigned char ***l_668 = &g_518;
            unsigned char ****l_667 = &l_668;
            char *l_669 = &g_467;
            int l_681 = 0x22D1FF88L;
            const int *l_687 = &g_148;
            if (((((*l_667) = &g_518) != &g_518) | ((*l_669) = p_16)))
            {
                int **l_670 = &l_666;
                (*l_670) = (void*)0;
                for (g_78 = 26; (g_78 != 24); g_78 = safe_sub_func_uint8_t_u_u(g_78, 2))
                {
                    int l_673 = 0x61C57D24L;
                    g_674 = l_673;
                }
            }
            else
            {
                l_587 = func_72(p_16);
                if ((safe_sub_func_int8_t_s_s((((*l_669) = ((safe_mul_func_uint16_t_u_u(g_158, (*l_666))) ^ p_16)) | p_17), (safe_lshift_func_int8_t_s_u(l_681, 1)))))
                {
                    const int *l_683 = &l_663;
                    const int **l_682 = &l_683;
                    const int **l_684 = (void*)0;
                    (*g_685) = ((*l_682) = &l_583);
                    (*l_682) = (*g_269);
                }
                else
                {
                    l_688 = l_687;
                }
            }
        }
        else
        {
            unsigned char ***l_689 = &g_518;
            int l_696 = 0x4A12D04DL;
            unsigned l_708 = 0UL;
            unsigned char **l_720 = &l_573;
            short *l_725 = &g_67;
            int l_758 = 6L;
            (*l_587) = (l_689 != &g_518);
            (*l_587) = p_16;
            for (g_674 = 0; (g_674 <= 45); ++g_674)
            {
                unsigned short *l_701 = &g_336;
                int l_702 = 0x6835BDD1L;
                l_702 = (safe_mul_func_uint16_t_u_u((g_674 < (p_16 < 254UL)), (safe_lshift_func_int16_t_s_u(l_696, (safe_add_func_int16_t_s_s(p_17, (((p_17 < (p_17 > ((safe_lshift_func_uint16_t_u_s(((*l_701) = (p_16 | ((*l_587) = (*l_587)))), g_156)) || 1L))) || (-8L)) | g_83)))))));
                for (g_83 = 0; (g_83 < 21); g_83 = safe_add_func_uint8_t_u_u(g_83, 4))
                {
                    char *****l_707 = &l_705;
                    l_708 = (((*l_707) = l_705) != &l_706);
                    return p_17;
                }
                if (p_16)
                {
                    if (l_702)
                    {
                        int l_711 = 0L;
                        char l_712 = 0x98L;
                        l_696 = func_52((func_52((*l_587), (l_712 = (safe_mul_func_uint8_t_u_u(l_711, p_17))), p_16, (safe_lshift_func_int16_t_s_u(6L, 2))) != (safe_rshift_func_int16_t_s_s((((*g_328) = 0x920063EDL) < (0x4A5DL <= (g_61 != 0x67FDL))), p_16))), p_17, (*l_587), g_2);
                        (*l_587) = (*l_587);
                        (*g_717) = &l_583;
                        return (*g_328);
                    }
                    else
                    {
                        return (*g_328);
                    }
                }
                else
                {
                    (*l_587) = (*g_509);
                    for (l_708 = (-16); (l_708 >= 58); l_708++)
                    {
                        unsigned char **l_721 = &l_572;
                        int ***l_722 = &l_655;
                        (*l_666) = ((l_720 = l_720) == l_721);
                        (*l_722) = &l_665;
                    }
                    if ((*l_587))
                        continue;
                }
                l_696 = (*g_143);
            }
            for (g_329 = 0; (g_329 > 41); g_329 = safe_add_func_uint8_t_u_u(g_329, 3))
            {
                int l_748 = (-1L);
                if (((*l_587) = 0x5E27F77AL))
                {
                    unsigned char * const ***l_726 = (void*)0;
                    unsigned short l_727 = 0x7964L;
                    int **l_728 = &g_421;
                    (*l_728) = func_97(p_16, l_725, (&g_336 == l_725), func_52((((((*l_574) = (*l_587)) | (&g_567 == l_726)) < ((*l_587) != ((*l_587) | (*l_587)))) ^ 0xDDL), l_727, (*g_328), p_17), p_16);
                    if ((*g_551))
                        break;
                }
                else
                {
                    int *l_751 = (void*)0;
                    unsigned *l_759 = &g_132;
                    unsigned char l_760 = 0xCDL;
                    (*g_729) = ((*g_273) = (void*)0);
                    if (p_16)
                    {
                        if (p_17)
                            break;
                        (*g_730) = &l_583;
                    }
                    else
                    {
                        int **l_733 = &g_421;
                        (*g_731) = (*g_685);
                        l_732 = p_16;
                        (*l_733) = (void*)0;
                        (*l_587) = 0x841D4E4CL;
                    }
                    (*l_666) = (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_16, (safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(func_52(((*l_759) = (func_52((l_748 && (safe_sub_func_int16_t_s_s(((l_696 = ((*g_651) != l_751)) & ((*l_574) = (l_708 ^ (safe_add_func_uint32_t_u_u((l_758 = (safe_lshift_func_int16_t_s_u((p_16 & (safe_sub_func_int32_t_s_s((0x3F59L < (((g_329 == ((((*l_587) = p_17) == (*g_328)) <= 0xD1L)) != p_16) == p_17)), p_16))), 13))), l_748))))), p_17))), l_708, l_748, l_708) && l_708)), l_760, (*g_328), p_16), p_16)) <= 4294967295UL), p_17)), l_748)))), 6)) & p_17) > p_17), 0UL)), g_541));
                    (*l_666) = (safe_sub_func_int8_t_s_s(((p_16 ^ (**g_259)) ^ 1L), ((*l_574) = (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(p_17, 3)), (safe_mod_func_int32_t_s_s((((p_16 || (safe_lshift_func_int8_t_s_s(p_17, 0))) >= (p_16 & ((p_17 & (((*l_587) = g_541) || p_16)) <= p_16))) < 0x7807L), 0x29DD7976L)))))));
                }
                if ((*g_147))
                    continue;
                if (p_17)
                    continue;
                return (*g_328);
            }
        }
    }
    for (g_2 = 29; (g_2 <= 20); g_2 = safe_sub_func_int8_t_s_s(g_2, 1))
    {
        int **l_774 = &l_587;
        short *l_777 = &g_109;
        unsigned l_792 = 0x51E853A6L;
        int l_814 = 0x883E8B3BL;
        int l_851 = 0x726A2693L;
        int l_867 = 0x423D1EEDL;
        unsigned char * const *l_898 = (void*)0;
        int *l_911 = &g_85;
        (*l_774) = func_72(l_773);
        if ((**l_774))
            continue;
        if ((p_16 > (safe_add_func_int16_t_s_s(((*l_777) = (1L != g_78)), (l_777 != l_777)))))
        {
            int *l_784 = &g_78;
            int l_821 = 0x79703E24L;
            unsigned short l_824 = 65535UL;
            const int *l_827 = &g_78;
            for (g_109 = 0; (g_109 != 8); g_109 = safe_add_func_uint16_t_u_u(g_109, 2))
            {
                (**l_774) = 1L;
            }
            if (((safe_add_func_int32_t_s_s((*g_509), 0x061187E1L)) < (**l_774)))
            {
                int *l_787 = (void*)0;
                for (g_132 = (-23); (g_132 > 49); g_132 = safe_add_func_uint16_t_u_u(g_132, 6))
                {
                    (*l_774) = l_784;
                }
                for (g_83 = 0; (g_83 == 1); g_83 = safe_add_func_uint8_t_u_u(g_83, 1))
                {
                    l_784 = l_787;
                    for (g_467 = 29; (g_467 != 2); g_467--)
                    {
                        unsigned short *l_793 = &l_732;
                        int l_796 = 6L;
                        if (p_16)
                            break;
                        (*l_774) = (*l_774);
                        (*l_587) = (*l_587);
                        (*l_587) = (safe_sub_func_int16_t_s_s((((g_329 && l_792) ^ g_541) == ((*l_793) = (**l_774))), (l_796 = (safe_mul_func_int8_t_s_s(((p_17 > (p_16 != p_16)) ^ func_52((**l_774), p_16, (**g_259), (**l_774))), 0UL)))));
                    }
                }
                (**l_774) = l_797;
            }
            else
            {
                unsigned l_807 = 4294967295UL;
                for (g_61 = 0; (g_61 >= 20); g_61 = safe_add_func_uint16_t_u_u(g_61, 1))
                {
                    for (l_773 = 0; (l_773 >= (-13)); l_773 = safe_sub_func_uint8_t_u_u(l_773, 8))
                    {
                        (*l_784) = 0x8D2185EAL;
                    }
                    for (g_467 = (-3); (g_467 > 9); ++g_467)
                    {
                        (*g_806) = ((*l_774) = &l_583);
                    }
                    (*l_587) = ((l_807 = 6L) && p_17);
                }
            }
            for (g_78 = 18; (g_78 > (-11)); --g_78)
            {
                char l_823 = 0x7BL;
                int *l_825 = &l_821;
                int *l_826 = &l_583;
                int ***l_829 = &g_142;
                int ****l_830 = &l_829;
                int **l_833 = &g_421;
            }
        }
        else
        {
            unsigned short l_836 = 65533UL;
            int l_854 = 0x51184ACFL;
            unsigned char **l_865 = (void*)0;
            unsigned char **l_866 = (void*)0;
            short *l_900 = &g_156;
            l_587 = (*l_774);
            l_837 = func_52(p_16, (safe_lshift_func_uint16_t_u_u((!(*l_587)), 0)), (**g_259), l_836);
            if ((func_43(p_16, p_17, p_17) < g_2))
            {
                unsigned **l_842 = &g_327;
                unsigned short *l_847 = &l_732;
                unsigned *l_848 = &l_792;
                unsigned l_849 = 18446744073709551615UL;
                (*l_587) = (safe_lshift_func_int16_t_s_s(((*l_777) = (p_17 > func_32(g_329, ((*l_848) = func_52((*l_587), (p_17 > (func_52((safe_sub_func_uint8_t_u_u(p_17, (((*l_842) = &g_674) == &p_16))), p_17, ((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((*l_847) = (0x016AFC15L && p_17)), l_836)), (-6L))) && g_132), p_17) != 0x24L)), (*g_328), l_836)), l_836, g_132))), p_17));
                if ((255UL && (**l_774)))
                {
                    unsigned char l_850 = 0x25L;
                    (*l_774) = func_97(l_836, l_847, l_849, (l_850 && l_851), (g_329 != (1L | p_16)));
                    (*l_774) = func_88(func_91((*l_774), p_17, l_850, (((*l_587) && l_836) & p_16), p_16), &l_583);
                }
                else
                {
                    l_854 = (safe_lshift_func_uint16_t_u_u(((*l_847) = ((l_849 && (*l_587)) == (-1L))), 8));
                }
            }
            else
            {
                short *l_857 = (void*)0;
                int l_868 = (-7L);
                for (l_854 = 14; (l_854 > (-12)); l_854--)
                {
                    unsigned char ***l_860 = &g_518;
                    unsigned char ***l_861 = &g_518;
                    unsigned char ***l_862 = &g_518;
                    unsigned char ***l_863 = &g_518;
                    unsigned char ***l_864 = &g_518;
                    short *l_870 = &g_67;
                    int l_897 = 0xAC151919L;
                    int ***l_901 = &g_142;
                    unsigned **l_905 = &l_904;
                    (*l_774) = func_97(p_17, l_857, (func_52(p_17, l_854, (((safe_mod_func_uint16_t_u_u(p_17, (((*l_587) > ((l_865 = (void*)0) != l_866)) & (p_17 != p_17)))) < (-8L)) ^ l_867), p_16) <= 1UL), l_868, p_16);
                    l_868 = ((0L | ((*g_382) <= (safe_unary_minus_func_uint32_t_u(4294967288UL)))) > (*l_587));
                    if (p_16)
                    {
                        short **l_871 = &l_857;
                        if (p_16)
                            break;
                        (*l_774) = func_88(((*l_871) = l_870), &l_854);
                        (*l_774) = func_97((*l_587), l_872, p_16, p_16, (safe_rshift_func_uint8_t_u_u(((*l_574) = (safe_mul_func_uint16_t_u_u((!(0UL ^ (**l_774))), (p_16 > (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((p_17 == g_467), 5)), g_158)))))), 0)));
                    }
                    else
                    {
                        int l_896 = 0xCA16BB59L;
                        unsigned char * const **l_899 = &l_898;
                        if (g_881)
                            break;
                        l_583 = ((*l_587) = (safe_sub_func_uint32_t_u_u(((*g_328) = (safe_sub_func_uint8_t_u_u(func_43(p_16, p_17, (safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((-4L), (~p_16))), (safe_lshift_func_int16_t_s_u(((0L == func_32(p_16, (safe_sub_func_int32_t_s_s((0x5E585245L | ((**l_774) = 0x4FD674DFL)), (safe_rshift_func_int8_t_s_u(l_896, l_868)))), p_17, g_148)) > p_16), l_897))))), g_2))), l_897)));
                        (*l_899) = l_898;
                        (*l_774) = &l_854;
                    }
                    l_583 = func_32((+p_17), (((l_900 == l_870) && (((*l_901) = &g_421) != (void*)0)) != (safe_lshift_func_uint16_t_u_s(0x7AB7L, 15))), p_17, (((*l_905) = l_904) == (void*)0));
                }
                if (p_17)
                    break;
                if (p_17)
                    continue;
                (*l_587) = (safe_sub_func_int8_t_s_s(p_16, (0x7A1DL ^ (safe_add_func_int16_t_s_s(((65535UL || (+((void*)0 != l_910))) || p_17), 1L)))));
            }
        }
        (*l_911) = (-4L);
    }
    return l_912;
}







static short func_32(unsigned char p_33, unsigned p_34, char p_35, unsigned p_36)
{
    int l_47 = 0x40A7FCC6L;
    short *l_66 = &g_67;
    int l_564 = 0xB1123547L;
    unsigned char *l_566 = (void*)0;
    unsigned char **l_565 = &l_566;
    int **l_568 = &g_168;
    l_564 = (((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s(func_43((l_47 > (safe_mod_func_uint8_t_u_u(0x5DL, (safe_add_func_uint16_t_u_u(func_52(l_47, l_47, g_2, ((*l_66) = (0x2536L == (safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((g_2 == (g_61 = 255UL)), (((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(1UL, 5)) < g_2), 0xF4DAL)) == g_2) != p_35))), p_33))))), p_33))))), l_47, g_247), p_35)), 0x5889L)) == g_2) || l_47);
    (*g_567) = l_565;
    (*l_568) = func_88(&g_67, &l_564);
    return (**l_568);
}







static short func_43(unsigned char p_44, unsigned p_45, const unsigned short p_46)
{
    const unsigned short * const l_424 = &g_336;
    int l_426 = 7L;
    unsigned char *l_432 = &g_158;
    unsigned char **l_431 = &l_432;
    unsigned char ***l_433 = &l_431;
    short *l_442 = &g_109;
    short **l_441 = &l_442;
    short ***l_440 = &l_441;
    unsigned short *l_443 = &g_336;
    int *l_446 = &l_426;
    unsigned short l_478 = 0x434FL;
    unsigned l_505 = 4UL;
    char *l_550 = &g_467;
    char **l_549 = &l_550;
    char ***l_548 = &l_549;
    int **l_563 = &g_421;
    if ((safe_mul_func_uint16_t_u_u(((*l_443) = ((l_424 != (void*)0) <= (p_45 ^ (((safe_unary_minus_func_int16_t_s(((**l_441) = (func_52((+l_426), (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((*l_433) = l_431) != &l_432), 6)), 5)), p_46, ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((l_440 != g_234), p_44)), 5)), 1UL)) < 0x54L)) > 0x1AL)))) & l_426) & g_2)))), l_426)))
    {
        return l_426;
    }
    else
    {
        int **l_444 = (void*)0;
        int **l_445 = &g_421;
        (*l_445) = ((*g_293) = (*g_269));
        (*l_445) = (*g_237);
        l_446 = &l_426;
    }
    for (g_247 = (-19); (g_247 > 25); g_247++)
    {
        short l_451 = 1L;
        int l_471 = 0x3C999DDEL;
        unsigned l_515 = 0xCF778131L;
        unsigned l_552 = 0xBA1AB72BL;
        for (g_158 = (-22); (g_158 < 49); g_158++)
        {
            const char l_454 = 0L;
            unsigned short l_459 = 1UL;
            if (func_52(((*g_328) = 4294967295UL), l_451, (l_451 && (0L != (((l_454 & (safe_lshift_func_int8_t_s_s(l_454, ((safe_add_func_int8_t_s_s(l_459, (safe_add_func_uint32_t_u_u(0x634C5CBDL, p_46)))) > 1UL)))) <= 0x79AB5D03L) || l_451))), l_454))
            {
                if ((*g_84))
                    break;
            }
            else
            {
                int *l_462 = &g_148;
                int **l_463 = &l_446;
                if (l_459)
                    break;
                (*l_463) = l_462;
                (*l_463) = func_72((*l_446));
                (*l_463) = (void*)0;
            }
            for (p_45 = 0; (p_45 <= 38); ++p_45)
            {
                char *l_466 = &g_467;
                int *l_468 = &g_148;
                (*l_468) = func_52((**g_259), p_46, ((*g_328) && (((*l_466) = p_46) || ((*l_466) = g_78))), p_45);
                (*l_468) = (l_451 & 4294967291UL);
                (*l_468) = l_451;
            }
        }
        if ((func_52(p_46, l_451, (safe_sub_func_uint16_t_u_u((0x6DL == (((l_471 = l_426) ^ (safe_lshift_func_uint8_t_u_s(g_261, 4))) || (l_471 = (safe_mod_func_int32_t_s_s(0x78F87C41L, 0x4BF91C61L))))), (((safe_mul_func_int16_t_s_s(g_148, l_478)) | 4294967295UL) & 1UL))), l_451) != 1UL))
        {
            int **l_481 = &l_446;
            int l_489 = 0x011DAF7CL;
            unsigned l_496 = 1UL;
            unsigned char **l_517 = &l_432;
            const char ***l_546 = (void*)0;
            if ((*g_143))
            {
                int ***l_479 = (void*)0;
                int ***l_480 = &g_142;
                int l_498 = 0xD6F40B4EL;
                unsigned short l_502 = 6UL;
                unsigned char **l_516 = &l_432;
                int *l_521 = (void*)0;
                if ((((*l_480) = &g_421) != l_481))
                {
                    unsigned l_488 = 7UL;
                    int l_501 = (-2L);
                    if ((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s(func_52((safe_mul_func_uint16_t_u_u(((*g_260) <= p_45), ((l_488 != (l_489 = p_44)) > l_488))), (0x60AE5183L & (safe_lshift_func_int16_t_s_s(1L, 8))), p_44, (safe_sub_func_int16_t_s_s((8UL & g_85), p_46))), l_451)), (*g_328))))
                    {
                        short l_494 = 0xF0A9L;
                        char *l_495 = &g_467;
                        (**l_480) = &l_426;
                        l_498 = ((*g_421) = ((l_496 = ((g_261 < (p_44 > ((p_44 & (l_494 > (*g_328))) || ((*l_495) = 0L)))) < (*g_328))) ^ (safe_unary_minus_func_int8_t_s((g_156 != (~p_44))))));
                    }
                    else
                    {
                        char *l_499 = (void*)0;
                        char *l_500 = &g_467;
                        l_501 = func_52((&g_158 != (void*)0), (p_44 = p_46), (*g_260), (((*l_500) = (-3L)) || l_471));
                        (*l_481) = (*l_481);
                    }
                    (*l_481) = (**l_480);
                    return l_502;
                }
                else
                {
                    short *l_510 = &l_451;
                    (*g_506) = (safe_sub_func_uint16_t_u_u(l_505, (0L <= g_78)));
                    (*g_509) = (safe_rshift_func_int8_t_s_u(p_44, 2));
                    (**l_480) = func_88(l_510, &l_471);
                }
                (*g_522) = (((((**g_142) = (*g_84)) <= (safe_lshift_func_uint16_t_u_s(g_467, (safe_lshift_func_int8_t_s_u(p_44, l_515))))) | ((l_516 == (g_518 = l_517)) || (safe_lshift_func_int8_t_s_u(p_44, (p_44 != p_44))))) | p_45);
                if (l_451)
                {
                    int *l_523 = &g_2;
                    (*l_481) = l_523;
                    (*l_481) = (*g_167);
                }
                else
                {
                    short *l_526 = &l_451;
                    unsigned short *l_540 = (void*)0;
                    unsigned short *l_542 = &l_502;
                    int *l_543 = &g_148;
                    (***l_480) = (safe_mul_func_uint16_t_u_u(((void*)0 != l_526), (safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_uint32_t_u((((*g_328) >= ((safe_mod_func_int16_t_s_s((***l_480), ((*l_443) = (safe_mod_func_uint8_t_u_u((**g_518), l_515))))) & (safe_mul_func_uint8_t_u_u(p_44, (safe_rshift_func_uint16_t_u_u((g_541 = g_132), (((*l_542) = 0xA74CL) || 65527UL))))))) & 0x0C8AL))) >= p_46), l_471)), p_46))));
                    (**l_480) = l_543;
                }
            }
            else
            {
                int ***l_544 = &l_481;
                int l_545 = 0x2716C087L;
                const char ****l_547 = &l_546;
                l_545 = (((*l_544) = &l_446) == &l_446);
                l_471 = (((*l_547) = l_546) == l_548);
            }
            (*g_551) = (p_46 >= p_46);
            if (p_46)
                break;
            (*g_553) = (l_471 = l_552);
        }
        else
        {
            l_446 = (void*)0;
        }
    }
    for (p_45 = 2; (p_45 != 11); ++p_45)
    {
        int *l_562 = &g_83;
        (*l_562) = (0x720136B5L | ((*g_328) != ((((safe_rshift_func_uint8_t_u_u(g_61, g_261)) != (safe_rshift_func_int8_t_s_s(p_46, 1))) != (l_505 <= p_44)) > p_45)));
    }
    (*l_563) = &l_426;
    return g_67;
}







static unsigned short func_52(unsigned p_53, unsigned char p_54, unsigned p_55, short p_56)
{
    short l_217 = (-7L);
    unsigned *l_221 = (void*)0;
    short *l_233 = (void*)0;
    short **l_232 = &l_233;
    short ***l_231 = &l_232;
    int *l_268 = &g_83;
    const unsigned char * const l_283 = &g_158;
    char l_326 = 0xB9L;
    int l_367 = (-6L);
    int l_406 = 0L;
    for (p_53 = 11; (p_53 < 42); p_53 = safe_add_func_uint32_t_u_u(p_53, 2))
    {
        int l_220 = 0L;
        short **l_224 = (void*)0;
        short *l_226 = (void*)0;
        short **l_225 = &l_226;
        short **l_227 = (void*)0;
        short *l_228 = &g_67;
        unsigned char *l_229 = (void*)0;
        unsigned char *l_230 = &g_158;
        int *l_301 = &g_83;
    }
    if (((*l_268) < p_55))
    {
        (*g_302) = l_221;
    }
    else
    {
        int *l_311 = &g_83;
        unsigned short l_337 = 0xFAD6L;
        unsigned short l_361 = 65535UL;
        for (g_85 = 20; (g_85 <= 21); g_85 = safe_add_func_int32_t_s_s(g_85, 7))
        {
            unsigned char l_324 = 1UL;
            unsigned char *l_325 = &l_324;
            short *l_330 = &l_217;
            int l_334 = 0L;
            int *l_372 = (void*)0;
        }
        l_268 = &l_406;
    }
    return p_54;
}







static int * func_72(int p_73)
{
    short *l_104 = (void*)0;
    int *l_169 = &g_83;
    int *l_211 = &g_148;
    for (p_73 = 0; (p_73 < (-16)); p_73 = safe_sub_func_int8_t_s_s(p_73, 6))
    {
        char l_81 = 0x14L;
        int l_112 = 9L;
        int *l_144 = &g_78;
        int **l_210 = &l_144;
        for (g_67 = 0; (g_67 < (-24)); g_67--)
        {
            unsigned short l_103 = 2UL;
            int * const *l_194 = &g_168;
            int * const **l_193 = &l_194;
            int *l_209 = (void*)0;
            for (g_78 = (-19); (g_78 <= 8); g_78++)
            {
                int *l_82 = &g_83;
                short *l_188 = &g_109;
                l_81 = g_61;
                (*g_84) = ((*l_82) = g_67);
                for (g_85 = 0; (g_85 <= (-20)); g_85--)
                {
                    unsigned *l_172 = &g_132;
                    int l_195 = (-7L);
                    int l_199 = (-2L);
                    int *l_200 = &l_112;
                    int l_201 = 7L;
                    unsigned short *l_202 = (void*)0;
                    unsigned short *l_203 = (void*)0;
                    unsigned short *l_204 = &l_103;
                    short **l_205 = (void*)0;
                    short **l_206 = (void*)0;
                    short **l_207 = (void*)0;
                    short **l_208 = &l_104;
                }
            }
            (*l_144) = ((*l_169) <= p_73);
        }
        (*l_210) = (*g_167);
    }
    return l_211;
}







static int * func_88(short * p_89, int * p_90)
{
    short **l_161 = (void*)0;
    short ***l_160 = &l_161;
    short *l_164 = &g_156;
    short **l_163 = &l_164;
    short ***l_162 = &l_163;
    int l_165 = (-1L);
    int l_166 = 0x02EA278FL;
    for (g_83 = 0; (g_83 < 25); g_83 = safe_add_func_uint32_t_u_u(g_83, 3))
    {
        unsigned short l_149 = 0UL;
        short *l_154 = &g_109;
        short *l_155 = &g_156;
        unsigned char *l_157 = &g_158;
        int *l_159 = &g_148;
        (*g_147) = (*g_143);
        if (l_149)
            break;
        (*l_159) = (safe_rshift_func_uint8_t_u_u(((*l_157) = ((-1L) >= ((safe_lshift_func_int16_t_s_u(((*l_155) = ((*l_154) = (-1L))), 11)) == (&g_147 != (void*)0)))), 0));
    }
    (*l_162) = ((*l_160) = &p_89);
    (*g_167) = func_97(l_165, &g_156, g_156, l_166, (*p_90));
    return (*g_167);
}







static short * func_91(int * p_92, const int p_93, unsigned p_94, int p_95, unsigned p_96)
{
    int *l_139 = &g_78;
    int **l_138 = &l_139;
    int ***l_140 = (void*)0;
    int ***l_141 = &l_138;
    (*g_143) = (((g_142 = ((*l_141) = l_138)) == &p_92) ^ g_2);
    return &g_67;
}







static int * func_97(int p_98, short * p_99, unsigned char p_100, unsigned char p_101, int p_102)
{
    int *l_115 = (void*)0;
    int **l_114 = &l_115;
    int l_118 = 0xFB9D331FL;
    unsigned *l_131 = &g_132;
    const int l_133 = 1L;
    int *l_134 = &g_83;
    (*l_114) = &p_102;
    (*l_134) = (safe_sub_func_int8_t_s_s((l_118 = ((((*l_114) = &g_2) == (void*)0) == g_85)), (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(g_85, (safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((g_67 > g_67), (((*l_131) = (safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(0UL, ((&p_102 != &p_98) >= g_67))) & (*g_84)), p_102))) || l_133))), l_133)))), l_133))));
    (*l_114) = &p_102;
    (**l_114) = (safe_rshift_func_uint16_t_u_u(g_132, 12));
    return &g_85;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_881, "g_881", print_hash_value);
    transparent_crc(g_913, "g_913", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
