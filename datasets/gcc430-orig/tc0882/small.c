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



static char g_11 = (-1L);
static unsigned short g_31 = 0x6358L;
static int g_53 = 7L;
static int * volatile g_56 = (void*)0;
static int g_58 = 0L;
static int g_74 = (-1L);
static int ** volatile g_76 = (void*)0;
static int *g_78 = &g_58;
static int ** volatile g_77 = &g_78;
static unsigned g_80 = 0x0A2C9EA2L;
static int * const volatile g_81 = &g_74;
static int ** volatile g_87 = &g_78;
static int ** volatile g_88 = &g_78;
static int ** volatile g_91 = &g_78;
static int ** volatile g_93 = (void*)0;
static char g_112 = 9L;
static int * volatile g_122 = &g_74;
static unsigned char g_129 = 246UL;
static unsigned short *g_140 = (void*)0;
static unsigned short **g_139 = &g_140;
static short g_145 = 0xF9DFL;
static int *g_155 = (void*)0;
static int ** volatile g_154 = &g_155;
static volatile int g_158 = (-8L);
static volatile int *g_157 = &g_158;
static int g_160 = 0x008FFC65L;
static short *g_164 = &g_145;
static short ** volatile g_163 = &g_164;
static short ** volatile * volatile g_165 = &g_163;
static int g_177 = 0xF9266F03L;
static int ** volatile g_187 = &g_78;
static const int g_191 = 0x2051206BL;
static unsigned char g_228 = 0x08L;
static unsigned char g_233 = 252UL;
static const int g_239 = 3L;
static const int *g_238 = &g_239;
static int ** volatile g_253 = &g_155;
static volatile int *g_260 = &g_158;
static int ** volatile g_301 = &g_78;
static char *g_333 = (void*)0;
static char * volatile *g_332 = &g_333;
static char * volatile ** volatile g_334 = &g_332;
static const int *g_359 = &g_58;
static int ** volatile g_374 = &g_155;



static unsigned func_1(void);
static int func_8(int p_9, unsigned p_10);
static unsigned short func_12(int p_13, unsigned p_14, const unsigned char p_15, int p_16, char p_17);
static unsigned char func_23(unsigned p_24, unsigned short p_25);
static unsigned func_26(char p_27, int p_28, const unsigned char p_29);
static short func_37(unsigned char p_38, unsigned short * p_39);
static char func_40(unsigned short * p_41);
static unsigned short ** func_42(unsigned short ** p_43, int p_44, int p_45, unsigned short p_46, short p_47);
static unsigned short ** func_48(unsigned p_49);
static int func_59(const int * p_60, int p_61);
static unsigned func_1(void)
{
    int l_18 = (-8L);
    unsigned short *l_30 = &g_31;
    unsigned l_36 = 18446744073709551610UL;
    int l_362 = 0x0FCA2120L;
    int l_369 = 0x6FC5D293L;
    unsigned char *l_375 = &g_129;
    (*g_260) = (safe_add_func_int32_t_s_s((0xF8L > (((((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_s((func_8(g_11, (func_12(l_18, (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((l_362 = func_23(func_26(g_11, ((((((*l_30) = g_11) || (safe_mul_func_uint16_t_u_u((((-6L) <= (((safe_lshift_func_int16_t_s_s(((((l_18 <= l_18) >= (0xD940L >= l_36)) != g_11) ^ 0x8D51L), 15)) >= l_36) && 4294967295UL)) == g_31), l_18))) == l_36) || l_36) , g_31), l_36), g_11)), l_18)), 0x54L)), g_191, g_11, l_36) & g_239)) , l_369), l_18)) || l_362) , 0xEC3EL), l_369)) , l_362) , l_18) & 0x5DA0L) | g_239)), 0x27F7AED1L));



    ;
    for (g_53 = 0; (g_53 > 13); ++g_53)
    {
        int *l_372 = (void*)0;
        int **l_373 = (void*)0;
        l_372 = &l_369;

        ;
        l_372 = (void*)0;

        ;
    }
    (*g_374) = &l_362;

    ;
    (*g_155) = (&g_129 != (l_375 = l_375));
    return g_233;


}







static int func_8(int p_9, unsigned p_10)
{
    int l_367 = 0x91744EEFL;
    unsigned char *l_368 = &g_233;
    (*g_260) = (safe_sub_func_uint32_t_u_u(p_9, (safe_add_func_int8_t_s_s((l_367 != (***g_165)), ((*l_368) = 0x35L)))));
    return g_112;
}







static unsigned short func_12(int p_13, unsigned p_14, const unsigned char p_15, int p_16, char p_17)
{
    return p_13;
}







static unsigned char func_23(unsigned p_24, unsigned short p_25)
{
    unsigned l_248 = 0UL;
    int *l_252 = &g_160;
    short *l_274 = &g_145;
    int l_345 = 0x0FFE1010L;
    short l_346 = 0L;
    unsigned char l_360 = 0xAFL;
    for (g_129 = 0; (g_129 == 39); g_129 = safe_add_func_uint32_t_u_u(g_129, 4))
    {
        unsigned char l_249 = 255UL;
        (*g_157) = (((+(((l_248 , (g_31 = p_25)) != (l_248 , l_249)) > ((safe_mul_func_int16_t_s_s(0x1E1DL, l_249)) != p_24))) , 0xB2L) || l_248);
    }
    (*g_253) = ((!((p_25 >= 0xEB048B09L) && g_239)) , l_252);

    ;
    if ((safe_mul_func_uint32_t_u_u(4294967295UL, ((((void*)0 == l_252) | (safe_rshift_func_uint16_t_u_s((*l_252), 2))) < (safe_mod_func_int32_t_s_s(0L, p_24))))))
    {
        volatile int **l_261 = &g_157;
        const short *l_277 = &g_145;
        const int *l_284 = &g_191;
        unsigned short *l_295 = &g_31;
        int *l_299 = &g_58;
        unsigned *l_324 = (void*)0;
        (*l_261) = g_260;
        if ((*g_155))
        {
            int *l_264 = (void*)0;
            char *l_269 = &g_112;
            if (((safe_mul_func_uint8_t_u_u((g_228 = ((((void*)0 == &g_177) , l_264) == (void*)0)), (safe_rshift_func_int8_t_s_s((**l_261), p_24)))) && (safe_lshift_func_int8_t_s_s((**l_261), (g_58 , ((*l_269) = 2L))))))
            {
                return (**l_261);
            }
            else
            {
                short **l_275 = (void*)0;
                short **l_276 = &g_164;
                const short **l_278 = &l_277;
                int l_279 = (-8L);
                (*g_260) = ((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((65527UL < (((*l_276) = l_274) != ((*l_278) = l_277))), (**l_261))), g_53)) != l_279);
                if (l_279)
                {
                    for (g_177 = 0; (g_177 > (-30)); g_177 = safe_sub_func_uint16_t_u_u(g_177, 1))
                    {
                        l_279 = ((safe_mul_func_uint16_t_u_u((g_53 || (((*l_269) = p_24) == (((safe_mul_func_int8_t_s_s(p_24, (safe_mod_func_uint16_t_u_u(p_25, ((*l_274) = (safe_sub_func_int32_t_s_s(func_40(&p_25), (p_24 , 4294967295UL)))))))) & (*l_284)) , 1L))), 0xDAB2L)) && g_80);
                    }


                }
                else
                {
                    int **l_291 = &l_264;
                    (*l_291) = l_264;
                    (**l_261) = (((*l_274) = p_24) != p_25);
                    (*l_291) = l_264;
                }


                for (g_233 = 0; (g_233 <= 18); g_233++)
                {
                    int **l_294 = &l_264;
                    (*l_294) = l_264;
                    if (func_40(l_295))
                    {
                        (*g_157) = l_279;
                    }
                    else
                    {
                        return p_25;
                    }
                    if (p_24)
                        continue;
                }
            }


            for (g_233 = 0; (g_233 == 25); g_233++)
            {
                int **l_298 = &g_155;
                (*l_261) = (void*)0;

                ;
                (*l_298) = l_264;

                ;
            }


            ;
        }
        else
        {
            int **l_300 = &l_299;
            unsigned *l_304 = &g_80;
            unsigned *l_309 = &l_248;
            (*g_301) = ((*l_300) = l_299);

            ;
            if (((*g_155) = (safe_add_func_int8_t_s_s((0xB69B9EC7L && ((*l_304) = p_25)), ((65535UL > (((*l_309) = (safe_mul_func_int8_t_s_s((p_24 & (**g_77)), p_25))) > 3L)) ^ 7UL)))))
            {
                const int *l_314 = &g_160;
                if ((0x63L & ((*l_284) < (*l_252))))
                {
                    (**l_300) = 0xED02343AL;
                }
                else
                {
                    char *l_310 = &g_112;
                    int l_313 = 1L;
                    (**l_300) = func_26(((*l_310) = g_160), ((**l_300) , ((*g_164) , (safe_mod_func_int8_t_s_s(1L, ((p_24 < (g_129 , (**g_163))) ^ (**l_300)))))), p_24);



                }



                (**l_261) = (func_26(g_233, ((void*)0 != l_274), g_74) < 0x8FL);


                (*g_260) = ((p_24 && (p_25 <= (safe_rshift_func_uint16_t_u_u(p_24, ((*l_295) = (((*l_284) < (safe_lshift_func_uint8_t_u_u(((*l_252) | (***g_165)), g_145))) , 0xEBC1L)))))) != p_24);
            }
            else
            {
                (*l_252) = 1L;
                (*l_261) = (*l_261);
                (**g_77) = (*l_252);
                for (g_233 = 29; (g_233 == 49); g_233++)
                {
                    int l_321 = 0xDA1883B8L;
                    (*l_300) = (*g_87);

                    ;
                    if (l_321)
                        continue;
                    (*l_300) = l_252;

                    ;
                    (*l_300) = &l_321;

                    ;
                }


            }




        }



        ;

        (*g_260) = (g_112 > ((g_80 = (p_25 == ((safe_add_func_uint32_t_u_u((g_11 || (((*l_252) = 0xC928L) & 0x06AEL)), g_233)) , (*l_284)))) & 4294967295UL));
    }
    else
    {
        int **l_325 = &g_78;
        int *l_328 = &g_177;
        int **l_329 = &l_328;
        (*l_325) = (void*)0;

        ;
        (*l_252) = (safe_sub_func_uint32_t_u_u(((p_24 , &g_177) != ((*l_329) = l_328)), p_25));
        for (p_24 = (-6); (p_24 >= 53); p_24 = safe_add_func_int8_t_s_s(p_24, 1))
        {
            (*g_334) = g_332;
        }
    }



    ;
    if (p_24)
    {
        int **l_335 = (void*)0;
        int **l_336 = (void*)0;
        int *l_337 = &g_53;
        int **l_338 = &g_155;
        int **l_339 = &l_252;
        unsigned char l_347 = 255UL;
        char l_355 = (-5L);
        int *l_356 = (void*)0;
        int *l_357 = (void*)0;
        int *l_358 = &g_53;
        (*l_339) = ((*l_338) = (l_337 = (void*)0));

        ;
        ;
        ;
        (*g_260) = ((p_24 | p_24) > 0x01L);
        for (l_347 = 0; (l_347 <= 33); l_347 = safe_add_func_uint16_t_u_u(l_347, 9))
        {
            int l_350 = 0x25EC3FAAL;
            int **l_353 = &l_252;
            if (p_24)
                break;
            if (l_350)
            {
                (*g_260) = p_24;
                for (l_248 = 0; (l_248 >= 18); l_248 = safe_add_func_int32_t_s_s(l_248, 3))
                {
                    if ((*g_81))
                        break;
                    (*l_339) = &l_350;

                    ;
                    (*l_252) = 1L;
                }


            }
            else
            {
                int ***l_354 = &l_338;
                (*l_354) = l_353;

                ;
            }


        }


        ;
        (*g_260) = ((*l_358) = l_355);
    }
    else
    {
        unsigned l_361 = 0x92927784L;
        l_361 = ((*l_252) , (g_228 == l_360));
    }


    return g_129;
}







static unsigned func_26(char p_27, int p_28, const unsigned char p_29)
{
    int *l_159 = &g_160;
    unsigned short *l_161 = &g_31;
    int l_245 = 0x53F83550L;
    (*l_159) = (((func_37((253UL >= (((g_31 | g_11) == (func_40(&g_31) | (g_157 != (g_112 , l_159)))) ^ p_29)), l_161) && p_29) != 0xC5C6L) & (*l_159));


    return l_245;
}







static short func_37(unsigned char p_38, unsigned short * p_39)
{
    unsigned short l_162 = 0x39C8L;
    unsigned char *l_174 = &g_129;
    int *l_175 = (void*)0;
    int *l_176 = &g_177;
    int l_184 = 0x11B9A2A7L;
    unsigned l_185 = 1UL;
    int l_188 = (-9L);
    const int *l_237 = &g_53;
    int ** const l_244 = &g_155;
    (*g_157) = l_162;
    (*g_165) = g_163;
    if (((g_80 , (safe_rshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s((((g_158 || 1L) > ((((p_38 , (safe_mul_func_uint8_t_u_u(((((*l_174) = p_38) >= (((*l_176) = p_38) , ((safe_lshift_func_int8_t_s_u(p_38, (safe_lshift_func_int16_t_s_u(((l_162 > (&p_39 == (void*)0)) & 0x05CF4844L), (*p_39))))) != l_162))) , 0x13L), p_38))) | 0x180EL) ^ l_162) == l_184)) == g_160), l_185)) || 0L) | (-8L)), l_162))) , (*g_81)))
    {
        int *l_186 = (void*)0;
        (*g_187) = l_186;

        ;
        l_188 = p_38;
    }
    else
    {
        const int *l_190 = &g_191;
        const int **l_189 = &l_190;
        unsigned short *l_197 = &l_162;
        int l_204 = 0x673C1710L;
        short ** const l_241 = &g_164;
        short ** const * const l_240 = &l_241;
        (*g_157) = (p_38 <= ((safe_unary_minus_func_uint32_t_u((safe_add_func_uint8_t_u_u(((((0x69L | 0xAEL) , &g_80) == (void*)0) || (!(safe_lshift_func_uint16_t_u_s((func_40(l_197) >= (*l_190)), (*l_190))))), (*l_190))))) , p_38));
        if (p_38)
        {
            const int *l_198 = &g_191;
            char l_199 = 8L;
            unsigned *l_202 = &g_80;
            int *l_203 = &g_74;
            (*g_122) = l_185;
            (*l_189) = (void*)0;

            ;
        }
        else
        {
            const unsigned l_213 = 0x1E2AE170L;
            unsigned *l_226 = &g_80;
            unsigned char *l_227 = &g_228;
            int l_229 = 1L;
            int l_230 = 0L;
            unsigned char *l_231 = (void*)0;
            unsigned char *l_232 = &g_233;
            int **l_234 = &g_155;
            (*g_157) = (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s(p_38, ((*l_232) = (l_230 = (safe_sub_func_uint16_t_u_u(l_213, ((safe_rshift_func_int16_t_s_s(l_188, (safe_mod_func_int32_t_s_s(((((*l_174) = g_58) > (l_229 = ((safe_mod_func_int8_t_s_s(0x11L, ((*l_227) = (safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_184, (((safe_rshift_func_uint16_t_u_s((0xB843L || ((**l_189) || (((*l_226) = g_158) || 0xC1F7ECBFL))), (*g_164))) <= l_213) <= l_213))), 0xBF85L))))) <= (-1L)))) == 0xE14A8CDCL), g_160)))) || g_145))))))) <= p_38), g_191)) == 65535UL), 0x1906B434L));
            (*l_189) = ((*l_234) = &l_204);

            ;
            ;
            (*g_157) = (g_228 == ((*g_155) < ((safe_rshift_func_uint16_t_u_u((*p_39), (*p_39))) >= ((&l_190 != l_244) >= 0L))));
        }


        ;
    }
    return (*l_237);
}







static char func_40(unsigned short * p_41)
{
    unsigned short *l_50 = &g_31;
    int l_141 = 0x2C2D3C6BL;
    short *l_144 = &g_145;
    unsigned short ***l_156 = &g_139;
    (*l_156) = func_42(func_48(((void*)0 == l_50)), (l_141 >= l_141), (((safe_mul_func_uint8_t_u_u(l_141, l_141)) == ((*l_144) = l_141)) || 0x4304L), (*p_41), g_129);


    return g_31;
}







static unsigned short ** func_42(unsigned short ** p_43, int p_44, int p_45, unsigned short p_46, short p_47)
{
    int **l_146 = &g_78;
    (*l_146) = (void*)0;

    ;
    for (g_58 = 0; (g_58 == (-9)); g_58 = safe_sub_func_int32_t_s_s(g_58, 1))
    {
        unsigned short l_149 = 65526UL;
        int *l_150 = &g_74;
        (*l_150) = l_149;
        for (g_129 = 0; (g_129 <= 49); g_129 = safe_add_func_int16_t_s_s(g_129, 3))
        {
            int **l_153 = &l_150;
            (*g_154) = ((*l_153) = ((*l_146) = &p_45));

            ;
            ;
            ;
        }

        ;
        (*l_146) = &p_45;

        ;
    }

    ;

    return p_43;




}







static unsigned short ** func_48(unsigned p_49)
{
    const int *l_62 = &g_58;
    int l_135 = 0L;
    unsigned short *l_138 = &g_31;
    unsigned short **l_137 = &l_138;
    for (p_49 = 3; (p_49 >= 31); p_49 = safe_add_func_uint32_t_u_u(p_49, 4))
    {
        char l_65 = 0xDAL;
        int *l_136 = &g_74;
        for (g_53 = 0; (g_53 == 27); g_53++)
        {
            int *l_57 = &g_58;
            const int **l_63 = (void*)0;
            const int **l_64 = &l_62;
            char *l_66 = &l_65;
            (*l_57) = g_11;
        }
    }
    return g_139;


}







static int func_59(const int * p_60, int p_61)
{
    int *l_71 = &g_58;
    for (p_61 = 0; (p_61 > (-9)); p_61--)
    {
        short l_84 = 0x4D14L;
        for (g_58 = (-6); (g_58 < (-8)); g_58 = safe_sub_func_uint8_t_u_u(g_58, 2))
        {
            int **l_72 = (void*)0;
            int *l_73 = &g_74;
            int **l_75 = (void*)0;
            unsigned *l_79 = &g_80;
            (*g_77) = (l_73 = l_71);

            ;
            (*g_81) = ((*l_71) & ((*l_79) = g_74));
        }
        for (g_74 = 0; (g_74 >= (-13)); g_74--)
        {
            return (*p_60);
        }
        (*g_81) = l_84;
    }
    (*g_78) = (*g_78);
    (*l_71) = (0xA65DL | 0x4A48L);
    for (p_61 = 0; (p_61 > (-6)); p_61--)
    {
        int *l_105 = &g_53;
        int l_123 = 0x4047E605L;
        if ((*p_60))
        {
            (*g_87) = &p_61;

            ;
            (*g_88) = (*g_77);
            for (g_74 = 9; (g_74 <= (-28)); g_74--)
            {
                int l_92 = 0xBAF68603L;
                (*g_91) = &p_61;
                (*l_71) = l_92;
                (*l_71) = (*l_71);
                (*g_88) = (*g_87);
            }
            return (*g_81);


        }
        else
        {
            int **l_94 = &g_78;
            (*l_94) = (*g_77);
            for (g_58 = 0; (g_58 == 23); ++g_58)
            {
                short l_99 = (-1L);
                int *l_106 = &g_74;
                unsigned char *l_128 = &g_129;
                int *l_134 = &g_74;
                if ((safe_lshift_func_uint8_t_u_s(l_99, 5)))
                {
                    short l_121 = 0x4342L;
                    if ((p_61 , (safe_mul_func_int8_t_s_s((*l_71), (safe_mod_func_uint16_t_u_u(l_99, (**l_94)))))))
                    {
                        short l_104 = (-1L);
                        l_104 = l_99;
                        if ((**l_94))
                            break;
                    }
                    else
                    {
                        char *l_111 = &g_112;
                        (*l_94) = (l_106 = l_105);

                        ;
                        ;
                        (*l_94) = &p_61;

                        ;
                        (*g_122) = (&g_11 == (((+((safe_mod_func_uint8_t_u_u((+(safe_mod_func_uint32_t_u_u((((((((*l_111) = 0xB5L) , &g_80) == (void*)0) >= (safe_sub_func_int16_t_s_s(0L, ((void*)0 != p_60)))) , p_61) | ((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(g_53, p_61)) ^ 0x9239L), g_53)), (*l_106))) > p_61)), 1UL))), l_121)) >= 2UL)) && 65529UL) , (void*)0));
                    }

                    ;
                    ;
                }
                else
                {
                    return l_123;
                }

                ;
                ;
                (*l_134) = (((*l_71) , ((*l_128) = ((safe_lshift_func_uint8_t_u_s((~p_61), (safe_sub_func_int16_t_s_s(g_58, (*l_105))))) | (*p_60)))) & ((((safe_lshift_func_uint16_t_u_s(((~g_80) & (safe_sub_func_int16_t_s_s(((**l_94) , (*l_71)), (*l_105)))), 10)) , 0x8DL) == g_58) , 0xECL));
                (*l_94) = (*g_87);
                return (*g_122);


            }
            (**l_94) = 0xB6811180L;
        }
    }
    return (*l_71);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
