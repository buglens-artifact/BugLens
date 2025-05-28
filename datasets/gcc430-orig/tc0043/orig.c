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



static int g_2 = 5L;
static int g_25 = 6L;
static int *g_24 = &g_25;
static unsigned short g_80 = 1UL;
static unsigned short g_82 = 1UL;
static int ** volatile g_86 = &g_24;
static int g_102 = 2L;
static int * volatile g_101 = &g_102;
static int * volatile g_104 = &g_102;
static int *g_107 = &g_102;
static int ** volatile g_106 = &g_107;
static int ** volatile g_129 = &g_24;
static int g_165 = 0xAB44AF1EL;
static int * volatile g_164 = &g_165;
static int ** volatile g_170 = &g_107;
static int ** volatile g_171 = &g_24;
static unsigned *g_176 = (void*)0;
static unsigned **g_175 = &g_176;
static unsigned *** volatile g_174 = &g_175;
static int ** volatile g_197 = &g_107;
static char g_202 = 1L;
static int *g_232 = &g_165;
static int **g_231 = &g_232;
static unsigned g_253 = 3UL;
static char g_256 = 0x10L;
static unsigned g_277 = 4294967294UL;
static unsigned char g_292 = 0x91L;
static int g_310 = (-9L);
static unsigned char * volatile g_365 = &g_292;
static unsigned char * volatile * volatile g_364 = &g_365;
static short *g_431 = (void*)0;
static int * volatile g_445 = &g_165;
static unsigned short g_453 = 7UL;
static int *g_455 = &g_25;
static int **g_454 = &g_455;
static short g_474 = 0xE6C7L;
static char g_540 = 0x79L;
static unsigned char *g_627 = &g_292;
static unsigned char **g_626 = &g_627;
static unsigned char *** volatile g_625 = &g_626;
static int ***g_643 = &g_231;
static int **g_677 = &g_24;
static int **g_683 = (void*)0;
static short **g_715 = (void*)0;
static short ***g_714 = &g_715;
static int * volatile g_746 = &g_25;
static volatile short g_754 = 0xDBA8L;
static unsigned *g_826 = &g_277;



static int func_1(void);
static short func_12(int p_13, unsigned char p_14, int p_15);
static int * func_17(short p_18, int * p_19);
static int * func_21(int * p_22, unsigned p_23);
static int ** func_26(int * p_27, int * p_28, short p_29, int p_30);
static unsigned short func_32(int ** p_33, int * p_34, int * p_35, int p_36, char p_37);
static int ** func_39(unsigned short p_40, char p_41, int p_42, int * p_43, int ** p_44);
static char func_47(int * p_48, short p_49, int ** p_50, char p_51);
static int func_56(int ** p_57, int p_58, int ** p_59, int p_60);
static int ** func_61(unsigned p_62, int p_63);
static int func_1(void)
{
    unsigned char l_3 = 0x6FL;
    unsigned short l_16 = 7UL;
    int **l_744 = &g_24;
    short *l_766 = &g_474;
    int ***l_778 = &l_744;
    int l_788 = 1L;
    unsigned l_827 = 0x5DF08390L;
    unsigned short l_828 = 0x4A05L;
    int *l_856 = &g_102;
    unsigned *l_872 = &g_253;
    if (g_2)
    {
        char l_4 = 0xA7L;
        unsigned l_735 = 0x16011657L;
        unsigned short l_749 = 0x1F45L;
        int *l_774 = &g_102;
        int *l_775 = &g_25;
        unsigned short l_800 = 0x62F4L;
        int *l_802 = &g_102;
        unsigned short l_803 = 0x1EDBL;
        if (l_3)
        {
            char l_7 = 0xF3L;
            unsigned char ***l_741 = &g_626;
            unsigned char ****l_740 = &l_741;
            unsigned *l_747 = &g_277;
            int l_756 = 1L;
            short *l_767 = &g_474;
            int **l_786 = &l_775;
            unsigned short *l_787 = &l_16;
            if ((0x58L && ((l_4 | 0x8748L) && (((safe_add_func_int16_t_s_s((l_7 <= ((safe_div_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u(func_12(l_4, (g_2 != l_16), l_7), g_474)) || 0x6B3F9513L) > g_277), g_253)) <= l_735)), l_4)) != l_7) ^ l_4))))
            {
                short l_736 = 0x6282L;
                char *l_742 = &g_202;
                int l_743 = 0xB14652A5L;
                int *l_745 = (void*)0;
                unsigned l_748 = 0xD3664745L;
                (*g_454) = (void*)0;

                ;
                (*g_746) = l_736;
                l_749 = (((((*g_175) = l_747) == &l_735) & 0xB422EB51L) ^ l_748);

                ;
                for (l_4 = 0; (l_4 == 17); l_4 = safe_add_func_uint8_t_u_u(l_4, 1))
                {
                    (*g_643) = (void*)0;

                    ;
                    (*g_677) = l_747;

                    ;
                    (*l_744) = l_747;
                    (*g_129) = (*g_170);

                    ;
                }

                ;
                ;
            }
            else
            {
                short l_755 = 0xAA4AL;
                int l_761 = 0x85C74063L;
                if ((((**g_626) < (safe_rshift_func_uint16_t_u_u(l_735, 5))) < g_754))
                {
                    l_756 = l_755;
                    for (l_756 = (-14); (l_756 <= (-7)); l_756++)
                    {
                        if ((*g_445))
                            break;
                    }
                    l_761 = (safe_div_func_int8_t_s_s(1L, l_4));
                }
                else
                {
                    int *l_768 = &g_25;
                    unsigned char ***l_773 = (void*)0;
                    for (g_25 = 0; (g_25 > 11); g_25 = safe_add_func_uint32_t_u_u(g_25, 9))
                    {
                        (*g_454) = func_17(l_755, &l_761);

                        ;
                    }

                    ;

                    (**g_643) = func_17((safe_add_func_uint16_t_u_u(g_453, ((l_766 == l_767) == g_80))), func_17(l_4, func_17(l_761, l_768)));
                    (*l_768) = l_761;
                    (*g_231) = l_774;


                }

                ;

                (*g_231) = (*g_454);
                l_775 = (void*)0;

                ;
            }

            ;

            ;

            ;
            ;
            ;
            ;
            l_788 = (safe_add_func_uint8_t_u_u((l_756 ^ ((l_778 = &l_744) == &g_677)), ((safe_mod_func_uint16_t_u_u((~((((*l_787) = (((0xC867L && (((*l_774) ^ (safe_unary_minus_func_int32_t_s(((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((g_102 >= l_7) <= (func_32(l_786, (*l_744), (*g_454), (*l_774), g_102) >= (*l_774))), 8)) || g_165), (*g_365))) != (*l_774))))) == 1UL)) & 65535UL) >= 0x7B15L)) == 65526UL) && 0xEAL)), g_474)) ^ (*l_774))));
        }
        else
        {
            int **l_789 = &g_107;
            short l_792 = 0L;
            unsigned short l_821 = 65528UL;
            char l_832 = 0xBFL;
            if (func_32(l_789, (*g_86), l_774, (**l_744), (*l_775)))
            {
                int l_793 = 0L;
                int l_801 = (-1L);
                (**g_643) = ((*l_744) = (void*)0);

                ;
                ;
                l_802 = (*g_129);

                ;
            }
            else
            {
                unsigned l_806 = 1UL;
                if (((*g_627) != g_253))
                {
                    unsigned char l_805 = 0x68L;
                    short *l_807 = &l_792;
                    int *l_808 = &l_788;
                    if ((0L < l_803))
                    {
                        (*l_789) = (void*)0;
                        (**g_454) = (***l_778);
                    }
                    else
                    {
                        int *l_804 = &l_788;
                        (*g_454) = (**l_778);
                        (*g_677) = (**g_643);

                        ;
                        (*g_677) = l_804;

                        ;
                    }

                    ;
                    (**g_677) = (((*l_807) = ((*l_766) = ((((***l_778) != (*g_365)) == (g_277 < ((*l_774) < l_805))) < l_806))) ^ 0xA64CL);
                    (*g_454) = l_808;

                    ;
                    (*l_774) = (*g_101);
                }
                else
                {
                    (*g_454) = (*g_86);
                    return (**g_129);
                }

                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;
            (*l_775) = ((((*g_627) = (g_474 | (((safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s(func_32(&l_774, l_774, (*g_106), (*l_774), g_102), g_310)), l_792)) | (*l_775)) == 1L))) <= l_828) < g_453);

            ;
            for (g_102 = 16; (g_102 <= (-25)); g_102--)
            {
                unsigned l_833 = 0xA19A6788L;
            }
        }

        ;

        ;

        ;
        ;
        ;
        ;
        ;
        ;
        if ((!(((*g_826) && (g_102 >= g_256)) != g_277)))
        {
            char l_841 = 0x0FL;
            int *l_849 = &g_25;
            if (l_841)
            {
                short l_845 = 4L;
                int *l_854 = &g_25;
                unsigned char l_855 = 8UL;
                if (l_841)
                {
                    unsigned l_853 = 9UL;
                    for (g_277 = 25; (g_277 < 53); g_277++)
                    {
                        char l_844 = 0x02L;
                        (*g_86) = (*g_171);
                        return (*g_445);



                    }
                    l_845 = 0L;
                    for (l_827 = 21; (l_827 <= 36); l_827 = safe_add_func_int8_t_s_s(l_827, 6))
                    {
                        int l_848 = 0xE9FD5B7AL;
                        int l_850 = (-7L);
                        (*g_104) = (g_80 < ((void*)0 == &g_106));
                        (*g_677) = l_849;

                        ;
                        l_850 = ((**g_86) = (***l_778));
                        (*l_744) = (*g_86);
                    }
                }
                else
                {
                    l_802 = l_849;

                    ;
                }

                ;
                (*g_454) = (*g_171);

                ;
                (*g_454) = (*g_171);
            }
            else
            {
                unsigned char l_864 = 0UL;
                unsigned l_866 = 0UL;
                for (g_310 = 0; (g_310 >= 5); ++g_310)
                {
                    unsigned short l_867 = 65535UL;
                    (*l_744) = (*l_744);
                    (*g_445) = (*g_445);
                    if (((*l_849) = (*l_849)))
                    {
                        int *l_859 = (void*)0;
                        (*g_677) = l_859;

                        ;
                        (*g_677) = (*g_129);
                        (*g_677) = (**l_778);
                    }
                    else
                    {
                        unsigned l_865 = 0xED4362F8L;
                        (*l_849) = (safe_add_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(l_864, g_25)) ^ l_865), (l_866 != l_864)));
                        l_849 = (void*)0;

                        ;
                        (*l_856) = l_865;
                    }

                    ;
                    return l_867;



                }
            }

            ;
            ;
        }
        else
        {
            unsigned l_868 = 0x0C90E81EL;
            int l_869 = 0xFEAC0E12L;
            (*l_744) = l_802;

            ;
            (*l_856) = (l_869 = (-5L));
        }

        ;
        ;
        return (*g_104);



    }
    else
    {
        char l_871 = 0x73L;
        (**g_231) = (**g_197);
        (**l_744) = (safe_unary_minus_func_uint32_t_u(((*g_826) = l_871)));
    }
    (*g_171) = (*l_744);
    return (**l_744);
}







static short func_12(int p_13, unsigned char p_14, int p_15)
{
    int l_20 = (-6L);
    (*g_454) = func_17(l_20, func_21(g_24, g_25));

    ;
    ;

    ;
    ;
    ;
    return l_20;
}







static int * func_17(short p_18, int * p_19)
{
    char l_733 = 1L;
    int *l_734 = (void*)0;
    l_733 = (-3L);
    (*g_231) = p_19;


    (*g_104) = (((void*)0 == l_734) && 0x7546L);
    return l_734;


}







static int * func_21(int * p_22, unsigned p_23)
{
    int *l_31 = &g_25;
    int **l_711 = &g_455;
    short *l_712 = &g_474;
    short **l_713 = &g_431;
    short ****l_716 = &g_714;
    int l_717 = 1L;
    unsigned char *l_722 = &g_292;
    l_711 = func_26(&g_25, l_31, (*l_31), p_23);

    ;
    ;

    ;
    (**l_711) = func_56(&l_31, (l_712 != ((*l_713) = &g_474)), &l_31, (((*l_716) = g_714) == &l_713));

    ;
    if ((l_717 = ((**l_711) = (*g_104))))
    {
        (*g_231) = ((*g_454) = (void*)0);

        ;

        ;
lbl_732:
        for (g_82 = (-15); (g_82 >= 7); g_82 = safe_add_func_uint16_t_u_u(g_82, 1))
        {
            return (*l_711);


        }
        (*g_231) = p_22;
    }
    else
    {
        unsigned short *l_720 = &g_80;
        unsigned char *l_721 = &g_292;
        char *l_725 = (void*)0;
        char *l_726 = &g_540;
        char *l_727 = &g_256;
        int l_728 = (-2L);
        (*p_22) = (((((*l_720) = ((p_23 >= ((void*)0 != &g_86)) == g_277)) && (l_721 != l_722)) || ((safe_lshift_func_uint8_t_u_u((((*l_726) = p_23) <= ((*l_727) = (~(0xEEB3D3DDL == func_56((*g_643), (*p_22), (*g_643), g_25))))), 7)) >= l_728)) & p_23);
        (**g_643) = (*g_170);
        (*p_22) = (safe_add_func_int8_t_s_s(p_23, p_23));
    }

    ;

    ;
    if ((*p_22))
    {
        unsigned short l_731 = 0x85A2L;
        (*p_22) = l_731;
    }
    else
    {
        (*g_197) = (*l_711);
        if (g_82)
            goto lbl_732;
    }
    return (*g_106);


}







static int ** func_26(int * p_27, int * p_28, short p_29, int p_30)
{
    int *l_38 = &g_25;
    int **l_227 = &l_38;
    int ***l_226 = &l_227;
    unsigned short l_228 = 0UL;
    int l_230 = 0L;
    unsigned char *l_477 = &g_292;
    int l_487 = 0xF08113AEL;
    char *l_492 = &g_202;
    short l_500 = 5L;
    int *l_512 = &g_165;
    short **l_517 = &g_431;
    unsigned short l_578 = 65533UL;
    unsigned ***l_582 = &g_175;
    int *l_586 = &l_230;
    int **l_587 = &g_107;
    int *l_603 = &g_165;
    unsigned l_709 = 9UL;
    int **l_710 = &g_455;
    (*p_27) = ((+func_32(&g_24, l_38, l_38, p_29, (0x17L ^ ((*p_28) <= ((((*l_226) = func_39((1UL >= (safe_rshift_func_int8_t_s_u(func_47(&g_25, (safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((*g_104) = (l_230 = func_56(((*l_226) = func_61(((*l_38) & 1L), (*l_38))), g_202, &l_38, l_228))), g_165)), p_30)), g_231, g_165), p_29))), p_30, (*p_27), l_38, g_454)) == (void*)0) != 0x5EL))))) != (*l_38));

    ;
    ;
    ;

    ;
    for (p_29 = 0; (p_29 != (-6)); --p_29)
    {
        short l_473 = 0L;
        unsigned char l_484 = 255UL;
        unsigned *l_485 = (void*)0;
        unsigned *l_486 = &g_277;
        unsigned char *l_497 = &l_484;
        int l_526 = 6L;
        int **l_527 = (void*)0;
        unsigned short *l_585 = (void*)0;
        int *l_588 = &g_165;
        int l_601 = (-9L);
        int l_671 = 0x5B53FB04L;
        short **l_678 = &g_431;
    }
    return l_710;


}







static unsigned short func_32(int ** p_33, int * p_34, int * p_35, int p_36, char p_37)
{
    (*p_33) = (void*)0;


    return p_36;
}







static int ** func_39(unsigned short p_40, char p_41, int p_42, int * p_43, int ** p_44)
{
    int *l_456 = &g_25;
    int ***l_466 = &g_454;
    int ****l_465 = &l_466;
    (*p_44) = l_456;


    p_42 = (((*l_456) && (p_42 & (*p_43))) ^ p_42);
    return (*l_466);


}







static char func_47(int * p_48, short p_49, int ** p_50, char p_51)
{
    int *l_233 = &g_25;
    char l_303 = 0x4CL;
    int l_334 = 8L;
    char l_337 = 0x27L;
    char *l_338 = &l_303;
    unsigned char *l_392 = (void*)0;
    unsigned char **l_391 = &l_392;
    int l_420 = (-1L);
    unsigned l_447 = 0xD0C4F649L;
    unsigned ***l_448 = &g_175;
lbl_257:
    (*g_170) = ((*g_231) = l_233);

    ;
    for (g_80 = (-13); (g_80 != 47); ++g_80)
    {
        int l_240 = (-1L);
        int *l_258 = &g_25;
        int l_275 = (-5L);
        char l_278 = 0x26L;
    }
    for (g_256 = 0; (g_256 < (-5)); g_256--)
    {
        unsigned short l_325 = 6UL;
        for (g_310 = 0; (g_310 == 13); g_310 = safe_add_func_int32_t_s_s(g_310, 8))
        {
            unsigned short l_319 = 65535UL;
            if ((**g_170))
            {
                unsigned short l_324 = 0UL;
                int *l_326 = &g_102;
                (*l_326) = (l_325 = (((safe_sub_func_uint32_t_u_u(l_319, p_51)) || (*l_233)) >= (safe_add_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(((-1L) >= 1L), ((l_324 >= g_310) | p_49))), g_80))));
            }
            else
            {
                int ***l_327 = &g_231;
                l_334 = func_56(((*l_327) = &g_107), ((((l_325 | ((void*)0 != &g_164)) <= (safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(l_319, (safe_sub_func_uint8_t_u_u((*l_233), ((*p_48) == (0UL && (1UL & p_51))))))), 0xF1FC1168L))) & l_319) < 7L), &g_232, l_319);

                ;
                return p_49;


            }
            if (l_325)
                goto lbl_257;
        }
        if ((*p_48))
            continue;
        (*g_231) = &l_334;

        ;
        (*g_231) = &l_334;
    }

    ;
    if (((safe_mod_func_int8_t_s_s(((*l_338) = ((((void*)0 != &p_48) | l_337) != (*l_233))), g_165)) | ((*l_233) && (*p_48))))
    {
        unsigned l_339 = 0x1A7FCE78L;
        unsigned char *l_363 = &g_292;
        unsigned char **l_362 = &l_363;
        int l_369 = 0x9E755F99L;
        int **l_419 = &g_24;
        unsigned short l_444 = 0UL;
        int ***l_446 = &g_231;
        unsigned ***l_449 = &g_175;
        unsigned short *l_450 = (void*)0;
        unsigned short *l_451 = &g_80;
        unsigned short *l_452 = &g_453;
        if (l_339)
        {
            int *l_342 = &g_165;
            int l_386 = 3L;
            for (p_49 = 0; (p_49 > 0); p_49 = safe_add_func_uint8_t_u_u(p_49, 5))
            {
                (*p_50) = l_342;

                ;
            }

            ;
            for (p_51 = (-8); (p_51 < 22); ++p_51)
            {
                unsigned char **l_361 = (void*)0;
                int l_368 = 0x8D345E9BL;
            }
            (*g_106) = &l_369;

            ;
            (*g_164) = (g_256 < ((((((safe_div_func_uint8_t_u_u((((*l_233) ^ func_56(&g_24, ((0UL > 1UL) && (((*l_342) = ((**l_362) = ((safe_add_func_int16_t_s_s(g_165, (g_277 & g_310))) && 252UL))) > g_253)), &g_107, g_2)) & g_277), g_25)) && (*l_233)) && p_51) || 0x12454B51L) == p_49) == p_51));

            ;
        }
        else
        {
            int l_398 = 1L;
            int **l_415 = &g_107;
            (*g_231) = (*g_197);

            ;
            (*g_164) = 0xAD99B445L;
            if (l_398)
            {
                int ***l_416 = (void*)0;
                int ***l_417 = (void*)0;
                int ***l_418 = &g_231;
                int l_421 = 0x76652550L;
                unsigned char l_422 = 0UL;
                l_369 = ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(5L, (safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(p_49, ((safe_lshift_func_uint16_t_u_u(g_256, (safe_div_func_uint32_t_u_u(func_56((p_50 = &p_48), (+(0xC5459F6FL == (safe_sub_func_int16_t_s_s((p_51 >= ((func_56(((*l_418) = l_415), (l_339 && 0xB57E433BL), l_419, g_277) || p_49) > 0x294ABA51L)), 3L)))), &l_233, g_82), (*l_233))))) ^ (*l_233)))) <= g_253), l_420)) & l_421), l_422)))), (*g_232))) != 4294967288UL);

                ;
                ;
            }
            else
            {
                short **l_432 = &g_431;
                int l_433 = 0x5A0CA31FL;
                int **l_434 = &g_107;
                (*g_164) = (0L > (g_80 <= (p_49 = ((safe_sub_func_uint16_t_u_u(1UL, 1L)) ^ (safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((p_49 ^ (g_256 | (func_56(&g_24, (l_433 = (((*l_233) | (safe_div_func_uint32_t_u_u((((*l_432) = g_431) == &p_49), (*l_233)))) | (*g_164))), l_434, p_51) && p_49))), (*l_233))), (*l_233)))))));
                for (p_51 = 0; (p_51 != 11); p_51 = safe_add_func_int32_t_s_s(p_51, 3))
                {
                    unsigned *l_439 = &g_253;
                    (*g_445) = (safe_mod_func_uint8_t_u_u(func_56(&p_48, (**p_50), l_419, g_80), p_51));
                }
            }

            ;
            ;
        }

        ;
        ;
        ;
        (*g_101) = (((!func_56(&p_48, l_444, ((*l_446) = &g_107), ((**g_364) ^ l_447))) == g_82) == ((*l_452) = (((*l_451) = (l_448 != l_449)) | 0x79F2L)));

        ;
    }
    else
    {
        (*g_231) = (*g_106);

        ;
    }

    ;
    ;
    ;
    return (*l_233);


}







static int func_56(int ** p_57, int p_58, int ** p_59, int p_60)
{
    int *l_229 = &g_25;
    (*g_170) = l_229;

    ;
    return (**g_106);
}







static int ** func_61(unsigned p_62, int p_63)
{
    int l_74 = 7L;
    unsigned *l_77 = (void*)0;
    int l_78 = 0x3D7FBA34L;
    unsigned short *l_79 = &g_80;
    unsigned short *l_81 = &g_82;
    int *l_151 = &l_78;
    unsigned char *l_195 = (void*)0;
    unsigned char **l_224 = &l_195;
    int *l_225 = (void*)0;
    if (((safe_add_func_int8_t_s_s(g_2, (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((g_2 >= (l_74 & l_74)), 3)), ((*g_24) && p_63))), g_25)), (+(safe_div_func_uint16_t_u_u(((!((*l_81) = (((*l_79) = (l_74 && (l_78 = 4UL))) < g_25))) && l_74), 0x50D5L))))))) || 0x88L))
    {
        g_24 = &g_25;
lbl_223:
        for (g_2 = 28; (g_2 >= (-10)); g_2--)
        {
            int **l_85 = &g_24;
            if (p_63)
                break;
            (*l_85) = (void*)0;

            ;
        }
        p_63 = p_62;
    }
    else
    {
        int l_96 = 0L;
        unsigned l_97 = 0xEC160668L;
        unsigned short l_110 = 65529UL;
        int l_122 = (-3L);
        unsigned l_136 = 0xFC7A5556L;
        unsigned l_147 = 0x0E36F363L;
        unsigned l_162 = 18446744073709551613UL;
        int **l_172 = &g_24;
        (*g_86) = &p_63;

        ;
        for (p_62 = 14; (p_62 >= 15); p_62 = safe_add_func_uint16_t_u_u(p_62, 9))
        {
            unsigned char l_100 = 247UL;
            int l_152 = 0xBC9617CCL;
            unsigned char *l_196 = &l_100;
            int *l_219 = (void*)0;
            int *l_220 = &l_96;
            for (g_80 = 0; (g_80 <= 36); g_80++)
            {
                int *l_128 = &l_74;
                unsigned **l_173 = &l_77;
                for (l_74 = 3; (l_74 >= 27); l_74 = safe_add_func_uint32_t_u_u(l_74, 3))
                {
                    for (l_78 = 17; (l_78 == 9); l_78--)
                    {
                        int **l_95 = &g_24;
                        (*l_95) = (void*)0;

                        ;
                    }
                    l_96 = l_96;
                    if (l_97)
                        break;
                }
                for (g_2 = 0; (g_2 >= (-30)); --g_2)
                {
                    unsigned short l_119 = 6UL;
                    if (l_100)
                    {
                        (*g_101) = ((void*)0 != &g_80);
                    }
                    else
                    {
                        int *l_103 = &l_74;
                        int **l_105 = &g_24;
                        (*g_104) = ((*l_103) = l_96);
                        (*g_106) = ((*l_105) = &p_63);

                        ;
                        ;
                    }
                }
                (*l_128) = (*g_101);
            }
        }

        ;
        ;
    }

    ;
    ;
    ;
    for (g_2 = 4; (g_2 == (-12)); g_2--)
    {
        if (p_63)
            goto lbl_223;
        (*l_151) = ((void*)0 != l_224);
        if ((*g_107))
        {
            l_225 = (*g_171);
        }
        else
        {
            (*g_107) = 0x9C38CBB5L;
        }
    }
    return &g_24;




}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_754, "g_754", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
