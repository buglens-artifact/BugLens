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



static int g_23 = 0x14AD38DCL;
static int **g_52 = (void*)0;
static int g_61 = 0xB6652F09L;
static int *g_64 = &g_61;
static int * volatile g_75 = &g_61;
static int *** volatile g_89 = (void*)0;
static int **g_90 = &g_64;
static const int g_93 = 0x119E2D4DL;
static const int *g_95 = &g_61;
static const int ** volatile g_94 = &g_95;
static int * volatile g_96 = (void*)0;
static int * volatile g_97 = &g_61;
static unsigned char g_103 = 4UL;
static unsigned char g_105 = 248UL;
static short g_120 = 0x9BBDL;
static unsigned short g_123 = 4UL;
static int * volatile g_128 = &g_61;
static int g_159 = 3L;
static int g_171 = (-3L);
static const int g_201 = (-8L);
static char g_203 = (-1L);
static volatile unsigned char g_210 = 255UL;
static volatile unsigned char *g_209 = &g_210;
static volatile unsigned char **g_208 = &g_209;
static int **g_211 = &g_64;
static int * volatile g_220 = &g_61;
static unsigned char *g_231 = (void*)0;
static unsigned char **g_230 = &g_231;
static volatile short g_261 = 0xE1C8L;
static volatile short * volatile g_260 = &g_261;
static volatile short * volatile *g_259 = &g_260;
static unsigned g_285 = 0x82488232L;
static char g_302 = 0xD9L;
static unsigned short g_313 = 65532UL;
static char g_376 = 0x3AL;
static unsigned char g_415 = 0xD3L;
static char g_417 = 1L;
static int ** volatile g_423 = (void*)0;
static const int ** volatile g_425 = &g_95;
static unsigned g_427 = 0x5C7FB693L;
static volatile unsigned g_458 = 1UL;
static volatile unsigned *g_457 = &g_458;
static volatile unsigned ** volatile g_456 = &g_457;
static volatile unsigned ** volatile * volatile g_459 = &g_456;
static short *g_475 = &g_120;
static short **g_474 = &g_475;
static unsigned short g_527 = 0x309EL;
static short ***g_553 = (void*)0;
static volatile unsigned g_556 = 0xAA2DC8A2L;
static int * volatile g_579 = &g_23;



static char func_1(void);
static char func_5(int p_6, unsigned p_7, int p_8);
static unsigned func_11(unsigned short p_12, unsigned short p_13, unsigned p_14, short p_15, int p_16);
static unsigned short func_17(int p_18, int p_19);
static unsigned func_24(unsigned p_25, short p_26, short p_27, int * p_28);
static int * func_31(int ** p_32, int p_33, int p_34);
static int ** func_35(int * p_36, int ** p_37);
static int ** func_38(short p_39, int * p_40);
static int * func_42(int p_43, const char p_44, int * p_45, short p_46);
static int func_47(unsigned p_48, int ** p_49, int * const p_50, int * p_51);
static char func_1(void)
{
    int l_4 = 0x0F57A7C2L;
    unsigned l_20 = 0xAE649F6DL;
    unsigned *l_426 = &g_427;
    (*g_579) = (+(safe_mul_func_int8_t_s_s(l_4, func_5(l_4, ((*l_426) = (safe_add_func_uint32_t_u_u(func_11(l_4, func_17(l_20, l_20), ((*l_426) = (g_285 = func_24(l_20, g_23, g_23, &g_23))), l_4, l_4), 4294967289UL))), l_20))));
    return g_417;
}







static char func_5(int p_6, unsigned p_7, int p_8)
{
    unsigned char **** const l_462 = (void*)0;
    int *l_473 = &g_171;
    unsigned char l_489 = 0x0DL;
    unsigned l_502 = 0UL;
    int * const l_522 = &g_23;
    unsigned l_524 = 0x0AFCA1F2L;
    int *l_578 = &g_23;
    for (g_159 = 0; (g_159 == (-15)); --g_159)
    {
        int *l_465 = &g_171;
        unsigned short *l_492 = &g_313;
        unsigned char *l_496 = (void*)0;
        unsigned char *l_499 = (void*)0;
        unsigned char *l_500 = (void*)0;
        unsigned char *l_501 = &g_105;
        if ((((void*)0 != l_462) != (&g_259 == &g_259)))
        {
            int *l_466 = &g_23;
            for (g_171 = 0; (g_171 >= (-21)); g_171 = safe_sub_func_uint16_t_u_u(g_171, 3))
            {
                l_466 = l_465;
            }
            if ((*g_220))
                continue;
            (*g_211) = (void*)0;
            for (g_123 = 14; (g_123 < 19); g_123 = safe_add_func_uint8_t_u_u(g_123, 3))
            {
                (*g_211) = &p_6;
                (**g_211) = (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(g_93, 1)) != p_6), (((void*)0 == l_473) | (&g_259 == (void*)0))));
                (*l_466) = (&g_260 == (g_474 = g_474));
                if ((*l_465))
                    break;
            }
        }
        else
        {
            unsigned l_476 = 4UL;
            l_476 = p_6;
            for (p_8 = (-4); (p_8 != (-29)); p_8 = safe_sub_func_uint32_t_u_u(p_8, 9))
            {
                unsigned *l_481 = (void*)0;
                unsigned *l_482 = &g_427;
                int l_483 = 0xA6F94548L;
                int **l_484 = (void*)0;
                int ***l_485 = &l_484;
                int * const l_486 = &g_61;
                (*g_220) = (safe_lshift_func_int8_t_s_u((((*l_482) = (+(*l_465))) & (*l_465)), 1));
            }
        }
        (*l_473) = (safe_mod_func_uint8_t_u_u(func_17(l_489, (0xAAE5L || (safe_sub_func_int8_t_s_s(p_6, l_502)))), (-1L)));
    }
    (*l_473) = ((p_8 > (*g_75)) <= g_120);
    for (l_502 = 0; (l_502 < 41); l_502 = safe_add_func_uint16_t_u_u(l_502, 1))
    {
        short l_514 = (-1L);
        int *l_523 = &g_23;
        int * const l_550 = &g_159;
        unsigned char ***l_570 = &g_230;
        for (g_313 = 1; (g_313 >= 56); g_313++)
        {
            unsigned char *l_509 = &g_105;
            unsigned l_517 = 18446744073709551606UL;
            char *l_518 = (void*)0;
            char *l_519 = &g_203;
            unsigned *l_520 = &g_427;
            int **l_521 = &l_473;
            unsigned short *l_525 = &g_123;
            unsigned short *l_526 = &g_527;
            short ** const *l_538 = (void*)0;
            unsigned short l_572 = 0x2C04L;
            unsigned short l_573 = 0x824CL;
            l_473 = (*l_521);
        }
    }
    l_473 = &p_6;
    return g_417;
}







static unsigned func_11(unsigned short p_12, unsigned short p_13, unsigned p_14, short p_15, int p_16)
{
    unsigned *l_432 = &g_427;
    int *l_455 = &g_61;
    for (g_103 = 13; (g_103 > 8); g_103 = safe_sub_func_uint32_t_u_u(g_103, 8))
    {
        unsigned **l_433 = &l_432;
        int l_452 = 0xB34DE86EL;
        int l_453 = 0L;
        unsigned short *l_454 = &g_313;
        (*g_211) = func_42((safe_sub_func_int32_t_s_s((((*l_433) = l_432) != (void*)0), 1L)), (safe_mul_func_uint16_t_u_u(p_15, (((safe_mul_func_uint8_t_u_u((g_427 < ((safe_mod_func_int8_t_s_s(((safe_add_func_int16_t_s_s((**g_259), (-7L))) ^ 9L), g_302)) | l_452)), p_15)) || (-4L)) || (*l_455)))), l_455, (*l_455));
        (*g_459) = g_456;
        return p_16;
    }
    return (*l_455);
}







static unsigned short func_17(int p_18, int p_19)
{
    const int *l_22 = &g_23;
    const int **l_21 = &l_22;
    (*l_21) = (void*)0;
    return p_19;
}







static unsigned func_24(unsigned p_25, short p_26, short p_27, int * p_28)
{
    int *l_53 = (void*)0;
    for (g_23 = (-4); (g_23 != (-30)); --g_23)
    {
        unsigned l_41 = 0x4D07DDBFL;
        unsigned char *l_102 = &g_103;
        unsigned char *l_104 = &g_105;
        int *l_424 = &g_171;
    }
    (*g_211) = (void*)0;
    (*g_425) = (*g_94);
    (*p_28) = 8L;
    return g_210;
}







static int * func_31(int ** p_32, int p_33, int p_34)
{
    int *l_338 = &g_159;
    short *l_340 = &g_120;
    short **l_339 = &l_340;
    unsigned char ***l_366 = &g_230;
    unsigned l_381 = 4294967287UL;
    int l_411 = 0xE59E138DL;
    unsigned char *l_412 = &g_105;
    unsigned char *l_413 = (void*)0;
    unsigned char *l_414 = (void*)0;
    char l_416 = 0x9DL;
    unsigned short *l_418 = (void*)0;
    unsigned short *l_419 = (void*)0;
    unsigned short *l_420 = &g_123;
    int *l_422 = (void*)0;
    for (g_203 = 0; (g_203 == (-2)); g_203--)
    {
        const unsigned char l_342 = 0x1DL;
        char l_378 = (-8L);
        int *l_380 = &g_171;
        for (g_302 = 0; (g_302 != 8); g_302 = safe_add_func_uint8_t_u_u(g_302, 1))
        {
            unsigned l_335 = 0x9793804DL;
            unsigned char ***l_365 = &g_230;
            short * const *l_392 = &l_340;
            if ((1UL == l_335))
            {
                for (p_34 = 0; (p_34 < 10); p_34++)
                {
                    (*g_90) = l_338;
                }
                (*g_94) = ((*g_90) = &p_34);
                if (l_335)
                    goto lbl_421;
            }
            else
            {
                short l_352 = 0xF3E8L;
                int l_374 = (-1L);
                int *l_377 = &g_23;
                if (((*l_338) = ((*g_97) = p_34)))
                {
                    short **l_341 = &l_340;
                    unsigned l_349 = 0x72E57F3DL;
                    int l_359 = (-1L);
                    (*g_75) = (l_339 == l_341);
                    (*g_211) = (*g_211);
                    for (g_105 = 0; (g_105 >= 13); ++g_105)
                    {
                        unsigned char ***l_364 = (void*)0;
                        unsigned char ****l_363 = &l_364;
                        unsigned char ****l_367 = &l_366;
                        (*l_338) = (safe_unary_minus_func_int16_t_s(0L));
                        (*l_338) = (((*l_338) < 4294967295UL) > ((l_365 = ((*l_363) = &g_230)) == ((*l_367) = l_366)));
                        if (l_335)
                            break;
                    }
                }
                else
                {
                    unsigned char **l_369 = &g_231;
                    unsigned char ***l_368 = &l_369;
                    char *l_375 = &g_376;
                    int *l_379 = &g_159;
                    (*l_368) = ((*l_366) = &g_231);
                    l_380 = l_379;
                    l_380 = l_379;
                }
                for (g_159 = 1; (g_159 < (-9)); g_159--)
                {
                    int *l_393 = &g_171;
                    unsigned short *l_394 = &g_123;
                    (*l_393) = func_17(((((*l_394) = ((((*l_393) = ((!(safe_rshift_func_uint16_t_u_u((p_34 || (safe_mod_func_uint16_t_u_u(g_261, (safe_mul_func_uint8_t_u_u((*l_377), ((void*)0 == &g_209)))))), (((safe_mul_func_uint16_t_u_u((l_392 != g_259), (p_32 == &l_338))) >= p_34) == 0x5841L)))) >= g_23)) < 4294967287UL) | p_34)) < g_23) && (*g_128)), p_33);
                }
            }
        }
        if ((*g_97))
            continue;
        return l_380;
    }
lbl_421:
    p_33 = (safe_lshift_func_uint8_t_u_u(func_17(((*l_338) = (*l_338)), (*g_220)), (safe_mod_func_uint8_t_u_u(p_33, (safe_div_func_int16_t_s_s(p_34, ((*l_420) = func_17(l_381, (safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_u((((p_34 && ((g_415 = (g_103 = ((*l_412) = (safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(l_411, 65535UL)), 0))))) < 0x64L)) || p_33) || 4294967289UL), 4)) <= g_285) && l_416), g_417)), g_313))))))))));
    return l_422;
}







static int ** func_35(int * p_36, int ** p_37)
{
    unsigned short l_214 = 0UL;
    int **l_217 = &g_64;
    int l_235 = 1L;
    int *l_326 = (void*)0;
    for (g_171 = 0; (g_171 <= 28); g_171 = safe_add_func_int32_t_s_s(g_171, 2))
    {
        unsigned l_221 = 0x26198889L;
        int * const l_265 = &g_159;
        int *l_299 = &g_23;
        char ** const l_304 = (void*)0;
        unsigned l_311 = 2UL;
        if (l_214)
            break;
        if (l_214)
        {
            return &g_64;
        }
        else
        {
            unsigned char **l_228 = (void*)0;
            unsigned l_233 = 1UL;
            int *l_315 = &g_159;
            int **l_328 = (void*)0;
            for (l_214 = 21; (l_214 < 30); ++l_214)
            {
                int ***l_218 = (void*)0;
                int ***l_219 = &g_211;
                int l_237 = (-3L);
                short l_262 = 1L;
                (*g_220) = (((*l_219) = l_217) == (void*)0);
                if ((*p_36))
                    continue;
                if ((l_221 <= (safe_mod_func_int16_t_s_s(1L, g_105))))
                {
                    unsigned char ***l_229 = &l_228;
                    unsigned char ***l_232 = &g_230;
                    int l_234 = 0x117FE557L;
                    int *l_236 = (void*)0;
                    unsigned short l_254 = 0x7FAEL;
                    unsigned short *l_263 = &g_123;
                    char l_264 = 6L;
                    char *l_290 = &g_203;
                    char *l_293 = &l_264;
                    l_237 = (l_235 = func_17((safe_mod_func_uint8_t_u_u((func_17(((*p_36) != (safe_add_func_int32_t_s_s((*p_36), ((0x63L & 0x86L) == func_17((((*l_229) = l_228) == ((*l_232) = g_230)), l_214))))), l_233) >= g_93), l_234)), (*p_36)));
                    if ((*g_97))
                    {
                        unsigned l_270 = 0xAAFD22C2L;
                        l_234 = (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((~l_270), (*l_265))) || (*g_128)), (*l_265)));
                    }
                    else
                    {
                        short ***l_271 = (void*)0;
                        short ***l_272 = (void*)0;
                        short *l_275 = (void*)0;
                        short **l_274 = &l_275;
                        short ***l_273 = &l_274;
                        int l_282 = 7L;
                        (*l_273) = (void*)0;
                        (*l_265) = (safe_div_func_uint16_t_u_u(g_261, (safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_282, (safe_sub_func_uint16_t_u_u(((*l_263) = (l_282 < (g_285 != (&g_123 == (void*)0)))), (safe_sub_func_int32_t_s_s(((void*)0 != &p_37), (func_17(((*l_265) || g_120), (*p_36)) | l_282))))))), l_282))));
                        (*g_94) = (*p_37);
                    }
                    (*l_265) = ((**g_208) >= ((*l_293) = (safe_lshift_func_uint8_t_u_u((((*l_290) = g_120) || (*l_265)), (~(safe_mul_func_int16_t_s_s(g_171, l_233)))))));
                    for (g_123 = 0; (g_123 <= 3); g_123 = safe_add_func_int8_t_s_s(g_123, 2))
                    {
                        (*l_265) = l_233;
                    }
                }
                else
                {
                    int **l_298 = (void*)0;
                    char *l_300 = &g_203;
                    char *l_301 = &g_302;
                    int l_314 = (-4L);
                    (*g_211) = (*g_211);
                    if (((l_233 > (g_120 <= g_302)) > 0x7AL))
                    {
                        unsigned short l_303 = 65528UL;
                        char **l_305 = &l_301;
                        (*g_94) = (*l_217);
                        if (l_303)
                            break;
                        l_305 = l_304;
                        if ((*l_265))
                            break;
                    }
                    else
                    {
                        unsigned *l_308 = &l_233;
                        int l_312 = 0x661DD9B7L;
                        (**l_219) = l_315;
                        return l_298;
                    }
                    if ((*l_315))
                        continue;
                }
                for (g_313 = 0; (g_313 > 51); g_313 = safe_add_func_uint16_t_u_u(g_313, 1))
                {
                    unsigned l_318 = 4294967295UL;
                    int **l_319 = &l_315;
                    int *l_325 = &l_235;
                    const unsigned short l_329 = 65529UL;
                    if (func_17(l_318, (*p_36)))
                    {
                        return &g_64;
                    }
                    else
                    {
                        unsigned l_324 = 1UL;
                        (*g_75) = (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(65533UL, l_324)), (**g_259)));
                    }
                }
            }
            return &g_64;
        }
    }
    (*g_90) = (*p_37);
    return &g_64;
}







static int ** func_38(short p_39, int * p_40)
{
    int *l_156 = &g_23;
    unsigned char l_157 = 246UL;
    int *l_158 = &g_159;
    int l_162 = 0xA75DB762L;
    short *l_178 = &g_120;
    short **l_177 = &l_178;
    const unsigned char *l_207 = &l_157;
    const unsigned char **l_206 = &l_207;
    (*g_90) = p_40;
    p_40 = l_156;
    (*l_158) = ((*g_97) = l_157);
    if ((safe_mul_func_uint16_t_u_u(l_162, (!g_93))))
    {
        int * const l_163 = &g_61;
        int **l_164 = &l_156;
        int *l_183 = &g_61;
        char *l_202 = &g_203;
        (*l_164) = l_163;
        for (l_162 = 0; (l_162 != (-12)); --l_162)
        {
            unsigned l_172 = 1UL;
            short **l_179 = &l_178;
            for (g_159 = 8; (g_159 > 14); ++g_159)
            {
                unsigned l_169 = 1UL;
                int *l_170 = &g_171;
                l_172 = ((*l_170) = ((*l_156) = (1L | l_169)));
                for (p_39 = 27; (p_39 == 6); --p_39)
                {
                    short l_180 = 0x840AL;
                    int **l_181 = &l_156;
                    if ((safe_add_func_int32_t_s_s((*p_40), (*p_40))))
                    {
                        l_179 = l_177;
                        if (l_180)
                            continue;
                        if ((*p_40))
                            continue;
                        if ((*p_40))
                            continue;
                    }
                    else
                    {
                        int **l_182 = &l_170;
                        return &g_64;
                    }
                    (*g_90) = l_183;
                }
                if ((*g_75))
                    break;
            }
        }
        (*g_90) = p_40;
        return &g_64;
    }
    else
    {
        int l_204 = 0xD2C60FB4L;
        short l_205 = 0x9590L;
        (*g_90) = p_40;
        (*g_90) = p_40;
    }
    return g_211;
}







static int * func_42(int p_43, const char p_44, int * p_45, short p_46)
{
    int *l_108 = &g_61;
    int **l_111 = &g_64;
    unsigned char *l_114 = &g_105;
    int ***l_148 = &l_111;
    int *l_155 = &g_61;
    l_108 = (p_45 = (*g_90));
    if ((safe_add_func_int8_t_s_s((l_111 != &l_108), 0xC2L)))
    {
        unsigned char **l_115 = (void*)0;
        unsigned char **l_116 = &l_114;
        short *l_119 = &g_120;
        int l_121 = 0xE5B73647L;
        unsigned short *l_122 = &g_123;
        (*g_75) = (((!func_17((*g_75), ((~(safe_add_func_int8_t_s_s(0xF6L, p_43))) | (((*l_116) = l_114) != (void*)0)))) | 4L) >= p_44);
        l_121 = (safe_mod_func_int8_t_s_s((((((*l_119) = (p_43 && p_46)) <= ((&l_114 != l_116) && 0xF2L)) | l_121) <= ((*l_122) = ((&g_105 != l_114) ^ p_44))), 8L));
        (*g_90) = &l_121;
    }
    else
    {
        unsigned short l_124 = 1UL;
        int * const l_129 = &g_61;
        int *l_154 = (void*)0;
        (*l_111) = (void*)0;
        if (l_124)
        {
            int *l_132 = (void*)0;
            for (l_124 = (-4); (l_124 < 48); l_124 = safe_add_func_uint8_t_u_u(l_124, 3))
            {
                int *l_127 = (void*)0;
                (*g_128) = (*g_95);
                (*l_111) = &p_43;
                if (func_47(l_124, &l_108, l_129, l_127))
                {
                    int *l_133 = &g_23;
                    int *l_134 = &g_23;
                    (*l_111) = &p_43;
                    for (p_43 = (-26); (p_43 > (-13)); p_43++)
                    {
                        l_132 = &p_43;
                        return l_133;
                    }
                    p_45 = l_134;
                }
                else
                {
                    int *l_135 = &g_61;
                    return l_135;
                }
            }
            (*l_129) = (*l_129);
            (*l_129) = (*l_129);
        }
        else
        {
            const unsigned l_142 = 18446744073709551615UL;
            int ***l_147 = &g_52;
            unsigned short *l_151 = &g_123;
            (*g_128) = (safe_rshift_func_uint16_t_u_s(((((void*)0 == &p_46) ^ ((*l_114) = (safe_lshift_func_uint8_t_u_u(g_23, 0)))) & func_17((safe_rshift_func_int16_t_s_u((-5L), l_142)), (safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((l_147 != l_148), (p_46 <= (safe_mul_func_uint16_t_u_u(((*l_151) = g_120), 65535UL))))), p_46)))), 10));
            for (p_43 = 0; (p_43 >= 21); p_43 = safe_add_func_uint16_t_u_u(p_43, 8))
            {
                return l_154;
            }
            (*g_90) = (void*)0;
        }
        (*g_90) = &p_43;
    }
    return l_155;
}







static int func_47(unsigned p_48, int ** p_49, int * const p_50, int * p_51)
{
    char l_57 = 0x69L;
    int *l_60 = &g_61;
    for (p_48 = 25; (p_48 < 44); p_48 = safe_add_func_int16_t_s_s(p_48, 1))
    {
        unsigned char l_56 = 0x38L;
        return l_56;
    }
    if (l_57)
    {
        char l_76 = 6L;
        int *l_84 = &g_61;
        for (p_48 = (-23); (p_48 <= 55); ++p_48)
        {
            int *l_62 = (void*)0;
            int **l_63 = &l_62;
            int l_83 = 0xC038D03DL;
            l_60 = p_51;
            (*l_63) = l_62;
            g_64 = p_51;
            for (l_57 = 29; (l_57 < 24); l_57 = safe_sub_func_uint8_t_u_u(l_57, 2))
            {
                int *l_67 = &g_61;
                l_67 = l_60;
                if (g_61)
                {
                    int l_72 = 7L;
                    l_60 = &g_23;
                    (*g_75) = (safe_mul_func_uint16_t_u_u((&p_50 != (void*)0), func_17((*p_50), ((safe_mod_func_uint8_t_u_u(0x2CL, (l_72 && ((safe_sub_func_uint8_t_u_u(p_48, ((65530UL || p_48) || p_48))) | g_61)))) ^ (*l_60)))));
                }
                else
                {
                    int *l_77 = (void*)0;
                    int *l_78 = (void*)0;
                    int *l_79 = (void*)0;
                    int *l_80 = &g_61;
                    if (((*l_80) = l_76))
                    {
                        (*g_75) = func_17((*g_75), (*p_50));
                        (*l_80) = (l_83 = (safe_sub_func_int16_t_s_s(g_23, 65533UL)));
                        (*l_63) = &g_23;
                    }
                    else
                    {
                        int *l_85 = &g_61;
                        (*l_80) = 0x00286F3AL;
                        l_84 = l_67;
                        p_51 = l_85;
                    }
                    (*l_63) = l_67;
                    for (l_83 = 0; (l_83 < 15); l_83 = safe_add_func_int32_t_s_s(l_83, 1))
                    {
                        int ***l_88 = &g_52;
                        if ((*g_75))
                            break;
                        g_90 = ((*l_88) = &g_64);
                        (**l_88) = (**l_88);
                        if ((*p_50))
                            break;
                    }
                    (*g_90) = p_51;
                }
            }
        }
    }
    else
    {
        const int *l_92 = &g_93;
        const int **l_91 = &l_92;
        (*g_94) = ((*l_91) = (*g_90));
    }
    (*g_97) = func_17((*g_75), (*g_95));
    return (*g_97);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_458, "g_458", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_556, "g_556", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
