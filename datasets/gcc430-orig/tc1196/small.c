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



static const int g_19 = 0xEA21E1D8L;
static char g_21 = (-1L);
static unsigned short g_26 = 0xBDB8L;
static int g_27 = (-4L);
static int g_30 = 0xBC795C38L;
static int g_57 = 0x12393DFEL;
static short g_83 = 1L;
static int g_118 = 1L;
static int g_126 = 0xC50E9BCCL;
static const short g_138 = 0L;
static unsigned short g_141 = 0x8674L;
static unsigned short g_143 = 65535UL;
static unsigned short g_146 = 65533UL;
static char g_158 = 0L;
static short g_187 = 0xE073L;
static unsigned g_192 = 4294967288UL;
static unsigned char g_193 = 0x8CL;
static unsigned g_194 = 0UL;
static int *g_249 = &g_118;
static volatile char g_278 = 2L;
static volatile char *g_277 = &g_278;
static volatile char **g_276 = &g_277;
static unsigned short **g_290 = (void*)0;
static int *g_305 = &g_30;
static int **g_304 = &g_305;
static int ***g_303 = &g_304;
static volatile int g_307 = 0x15209B59L;
static int * const *g_320 = &g_305;
static volatile unsigned char g_514 = 252UL;
static char g_528 = 0x34L;
static unsigned char g_531 = 0x09L;
static volatile char * const *g_547 = &g_277;
static volatile char * const **g_546 = &g_547;
static volatile char * const ***g_545 = &g_546;
static const unsigned short *g_583 = &g_26;
static const unsigned short **g_582 = &g_583;
static const unsigned short *** const g_581 = &g_582;
static const unsigned short *** const *g_580 = &g_581;
static char *g_679 = &g_158;
static char **g_678 = &g_679;



static short func_1(void);
static short func_8(int p_9, unsigned short p_10, const int p_11);
static const int func_31(unsigned char p_32, int p_33, char * p_34, const int * p_35, const int p_36);
static char * func_37(unsigned p_38, int * p_39, int p_40);
static unsigned func_41(char p_42);
static int func_49(const unsigned p_50, short p_51);
static char func_62(unsigned short p_63, unsigned short p_64, int p_65, int p_66, int p_67);
static unsigned short func_84(unsigned p_85, const int p_86);
static int func_87(char * p_88, int p_89, char * p_90, unsigned p_91, unsigned char p_92);
static char * func_93(unsigned p_94, int * p_95, unsigned p_96, short * p_97, int p_98);
static short func_1(void)
{
    unsigned l_18 = 18446744073709551614UL;
    char *l_20 = &g_21;
    int l_28 = 0x68E10D32L;
    int *l_29 = &g_30;
    int l_717 = (-1L);
    int *l_718 = (void*)0;
    int *l_719 = &g_57;
    (*l_719) = ((+(safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(0x5364L, ((safe_add_func_uint16_t_u_u((func_8(((*l_29) = ((safe_mod_func_uint32_t_u_u(0xC5EB2006L, (safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(l_18, l_18)) != ((g_19 ^ (0x28L | (l_28 = (((*l_20) = (+(-2L))) & (((g_27 = ((((safe_add_func_uint32_t_u_u(l_18, (safe_lshift_func_uint8_t_u_s(247UL, g_19)))) <= 0xE401L) | g_19) < g_26)) | g_26) && l_18))))) && l_28)), g_19)))) <= 2L)), g_26, l_18) ^ l_717), 0xCB90L)) < l_717))), 4))) | g_19);



    return g_118;
}







static short func_8(int p_9, unsigned short p_10, const int p_11)
{
    unsigned char l_620 = 255UL;
    int *l_622 = (void*)0;
    int l_632 = 9L;
    const int *l_634 = &g_118;
    const int **l_633 = &l_634;
    int **l_639 = &g_305;
    unsigned short ***l_643 = &g_290;
    unsigned short ****l_642 = &l_643;
    char *l_644 = &g_158;
    int *l_645 = &g_27;
    char l_646 = 1L;
    short l_649 = (-6L);
    int l_686 = (-1L);
    unsigned l_709 = 0x1F3DFF9EL;
    l_632 = (0x7963F6D1L < func_31(p_10, g_27, func_37((func_41(((safe_sub_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s((p_11 | func_49(p_9, g_26)), (safe_mul_func_uint16_t_u_u((g_30 & l_620), g_30)))) | l_620) & g_143) & p_9), g_138)), p_9)) < p_10)) && p_9), l_622, l_620), l_622, p_11));



    (*l_633) = &p_11;

    ;
    if (((*l_645) = ((safe_mul_func_int8_t_s_s(((((*l_644) = ((safe_add_func_uint16_t_u_u(65526UL, ((*g_583) || func_84(((void*)0 != l_639), p_10)))) ^ (((**l_633) >= (safe_add_func_uint16_t_u_u(((void*)0 == l_642), (**l_633)))) >= 1L))) < 0xEEL) > p_11), (*l_634))) && g_141)))
    {
        unsigned char l_650 = 0xC7L;
        int l_651 = 1L;
        (*l_645) = ((func_84(l_646, (safe_rshift_func_uint16_t_u_u(l_649, l_650))) > (l_651 = p_9)) | (safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((0x594DL ^ g_138), 1)), p_11)), g_83)), g_531)));
    }
    else
    {
        short l_663 = (-5L);
        int **l_664 = &g_249;
        (*l_633) = &g_126;

        ;
        if (((****g_545) && p_10))
        {
            short *l_660 = &g_83;
            int l_682 = 0x08C40E1DL;
            short *l_687 = &g_187;
            if ((func_41(((((p_10 && ((*l_660) = 0L)) | (safe_mul_func_int8_t_s_s(((*l_644) = (**g_547)), p_10))) == l_663) && 1L)) != (l_664 == l_664)))
            {
                unsigned l_684 = 0xED0EF6E8L;
                int l_685 = 0x220CBE27L;
                if ((255UL ^ 1L))
                {
                    (*l_633) = &p_11;

                    ;
                    return g_307;
                }
                else
                {
                    int **l_676 = &l_622;
                    int *l_683 = (void*)0;
                    for (g_194 = 26; (g_194 == 43); g_194 = safe_add_func_uint32_t_u_u(g_194, 9))
                    {
                        unsigned l_675 = 0x194B2862L;
                        char ** const l_677 = &l_644;
                        char ***l_680 = &g_678;
                        int *l_681 = (void*)0;
                        l_682 = ((*l_645) = (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(l_675, 6)) >= l_675), ((*l_660) = 0x9315L))) <= ((*g_303) == l_676)), (p_10 <= ((l_677 == ((*l_680) = g_678)) >= p_11)))) >= 0UL), g_126)));
                        l_682 = p_10;
                        (*l_633) = ((*l_664) = l_683);

                        ;
                        ;
                        if ((*l_645))
                            break;
                    }

                    ;
                    l_685 = l_684;
                    l_686 = p_9;
                    if ((((&g_187 != l_687) && (**g_582)) | (**g_582)))
                    {
                        return g_27;
                    }
                    else
                    {
                        (*l_633) = &g_118;

                        ;
                    }

                    ;
                }

                ;
                (*l_633) = (*l_633);
                (*l_633) = &p_11;

                ;
                (*l_645) = g_126;
            }
            else
            {
                (*l_633) = &l_682;

                ;
                (*l_645) = (g_146 < g_158);
                for (l_649 = 0; (l_649 < 17); l_649 = safe_add_func_int8_t_s_s(l_649, 4))
                {
                    if (p_11)
                        break;
                }
            }

            ;
        }
        else
        {
            int l_692 = 0xE10862BDL;
            unsigned *l_699 = &g_192;
            int l_708 = 0x45C8934DL;
            for (p_9 = (-19); (p_9 >= 26); p_9 = safe_add_func_int16_t_s_s(p_9, 5))
            {
                (*l_633) = &p_11;

                ;
                (*l_664) = &g_126;

                ;
            }

            ;
            (*l_645) = l_692;
            (*l_645) = (0x66L < ((safe_lshift_func_uint8_t_u_u(p_11, ((safe_lshift_func_uint8_t_u_s(0UL, 3)) && (safe_add_func_uint32_t_u_u(((*l_699) = 4294967295UL), (((l_708 = (safe_sub_func_int16_t_s_s(((void*)0 == &g_581), ((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((**g_678), (+(-10L)))), (safe_div_func_int8_t_s_s((((*l_645) ^ p_11) || p_9), p_10)))) == l_692)))) <= g_146) ^ l_692)))))) <= l_709));
        }


        if (l_663)
        {
            volatile int **l_710 = (void*)0;
            volatile int *l_712 = &g_307;
            volatile int **l_711 = &l_712;
            (*l_711) = &g_307;
            (*l_645) = ((safe_mod_func_uint8_t_u_u((((*l_639) != &p_9) == g_30), p_10)) == g_158);
        }
        else
        {
            volatile int *l_716 = (void*)0;
            volatile int **l_715 = &l_716;
            (*l_715) = &g_307;

            ;
        }
    }



    return g_278;
}







static const int func_31(unsigned char p_32, int p_33, char * p_34, const int * p_35, const int p_36)
{
    const int l_631 = 3L;
    return l_631;
}







static char * func_37(unsigned p_38, int * p_39, int p_40)
{
    short l_625 = 0xAB60L;
    unsigned l_628 = 0UL;
    char *l_629 = &g_21;
    int l_630 = 0xDF07EBC8L;
    l_630 = ((safe_lshift_func_int16_t_s_s((65526UL < l_625), 13)) == (l_625 == ((((safe_mul_func_int16_t_s_s(l_625, ((l_628 == p_38) | 0L))) <= (****g_580)) != g_26) ^ l_628)));
    return l_629;


}







static unsigned func_41(char p_42)
{
    short l_621 = 0x293AL;
    return l_621;
}







static int func_49(const unsigned p_50, short p_51)
{
    int *l_53 = &g_30;
    char *l_68 = &g_21;
    int l_535 = 0x3329FD5DL;
    int *l_539 = &g_126;
    short *l_559 = &g_187;
    char **l_612 = &l_68;
    char ***l_611 = &l_612;
    int l_616 = (-1L);
    int l_617 = (-1L);
    if ((safe_unary_minus_func_uint32_t_u((&g_19 == l_53))))
    {
        int *l_71 = (void*)0;
        for (p_51 = (-26); (p_51 > 23); p_51 = safe_add_func_uint32_t_u_u(p_51, 5))
        {
            int *l_56 = &g_57;
            (*l_56) = 0x2C199447L;
        }
        for (g_26 = 17; (g_26 <= 21); g_26 = safe_add_func_uint16_t_u_u(g_26, 1))
        {
            int *l_74 = (void*)0;
            int l_534 = 0x0D44A739L;
            l_534 = ((safe_div_func_uint16_t_u_u(p_51, 65535UL)) | func_62(((void*)0 != l_68), p_50, p_50, (safe_div_func_int16_t_s_s((&g_19 == l_71), (safe_add_func_int32_t_s_s((g_57 = ((void*)0 != l_74)), g_19)))), p_50));

            ;
            g_249 = &g_57;

            ;
            (*g_249) = l_534;
            if (l_535)
                continue;
        }

        ;
    }
    else
    {
        for (l_535 = 0; (l_535 < 18); ++l_535)
        {
            int **l_538 = &g_249;
            (*l_538) = (void*)0;

            ;
        }

        ;
    }

    ;
    (*l_539) = 0L;
    for (g_21 = 0; (g_21 <= (-28)); g_21--)
    {
        char *l_542 = &g_158;
        unsigned char *l_548 = (void*)0;
        unsigned char *l_549 = (void*)0;
        unsigned char *l_550 = (void*)0;
        unsigned char *l_551 = &g_193;
        unsigned char **l_558 = &l_548;
        int l_560 = 0x3EDA2D9BL;
        unsigned short * const l_606 = &g_143;
        unsigned short * const *l_605 = &l_606;
        char ****l_613 = &l_611;
        char ***l_614 = &l_612;
        int *l_615 = &l_535;
        if ((g_138 < l_560))
        {
            int *l_561 = &g_27;
            int *l_562 = &l_535;
            int **l_563 = &l_539;
            l_539 = l_561;

            ;
            if (l_560)
                break;
            g_249 = l_562;

            ;
            (*l_563) = &g_57;

            ;
        }
        else
        {
            int l_564 = 0x75550723L;
            int **l_565 = &l_539;
            unsigned *l_584 = &g_192;
            unsigned short l_595 = 8UL;
            unsigned short *l_603 = &g_26;
            unsigned short **l_602 = &l_603;
            unsigned short ***l_604 = &g_290;
            if (l_564)
                break;
            (*l_565) = &g_126;

            ;
            (*l_539) = (safe_add_func_uint16_t_u_u((**l_565), (safe_mod_func_uint8_t_u_u(((**l_565) ^ ((*l_584) = (((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u((*l_539), g_21)) >= ((safe_rshift_func_int8_t_s_s(0x67L, 6)) || p_51)), 15)) && (g_580 == &g_581)), 10)), p_50)) < g_141) && 0x7494F00DL) >= p_51) < 0xCD6FB148L))), (*l_539)))));
            (*l_539) = (safe_sub_func_uint16_t_u_u(((((g_528 = ((safe_div_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((*l_539), (safe_add_func_int8_t_s_s(0L, (((l_595 = (((*l_551) = g_146) > (p_50 | 0xD2L))) & (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((-1L), (safe_lshift_func_int8_t_s_u((-1L), 3)))), (((*l_604) = l_602) != l_605)))) < 0UL))))) == l_560), (*l_539))) ^ (**l_565))) == g_514) && g_27) < p_50), (***g_581)));

            ;
        }
        if (l_560)
            continue;
        (*l_615) = (safe_lshift_func_uint8_t_u_s(p_50, 0));
    }

    ;

    ;
    return p_50;


}







static char func_62(unsigned short p_63, unsigned short p_64, int p_65, int p_66, int p_67)
{
    int *l_79 = &g_30;
    short *l_82 = &g_83;
    int *l_99 = &g_27;
    char *l_125 = (void*)0;
    unsigned short l_388 = 8UL;
    int l_520 = 0x235981C3L;
    unsigned l_523 = 0x4AC79425L;
    unsigned l_524 = 0UL;
    int **l_532 = (void*)0;
    int **l_533 = &g_249;
    if ((((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_79 != &p_66), (safe_rshift_func_int16_t_s_u(((*l_82) = 1L), func_84(g_21, ((func_87(func_93(g_19, l_99, (*l_99), l_82, g_21), g_27, l_125, g_126, g_21) >= l_388) & 65535UL)))))), g_138)) <= g_138) & p_65))
    {
        short l_518 = 0xC940L;
        int *l_519 = &g_126;
        (*l_519) = (p_65 = l_518);
        (*l_519) = (0x7901L ^ (l_520 = (+0xFD55L)));
        l_519 = &g_118;

        ;
        (*l_519) = p_64;
    }
    else
    {
        int *l_521 = &g_126;
        int **l_522 = &l_99;
        char *l_527 = &g_528;
        unsigned char *l_529 = (void*)0;
        unsigned char *l_530 = &g_531;
        (*l_522) = l_521;

        ;
        (*l_522) = (void*)0;

        ;
        (*l_521) = l_523;
        (*l_521) = (func_84(func_84((l_524 ^ (p_64 < (-8L))), p_67), (p_63 & ((*l_530) = (safe_mod_func_int16_t_s_s((p_64 <= ((*l_527) = g_146)), g_19))))) == 4294967294UL);
    }

    ;

    (*l_533) = (void*)0;

    ;
    return p_67;
}







static unsigned short func_84(unsigned p_85, const int p_86)
{
    int *l_389 = &g_57;
    short *l_390 = &g_187;
    char *l_391 = &g_158;
    unsigned short l_397 = 0xA5A1L;
    unsigned char l_407 = 249UL;
    int *l_414 = &g_126;
    int **l_436 = (void*)0;
    unsigned char **l_457 = (void*)0;
    int l_516 = 0x56F413D3L;
    if (((*l_389) = p_85))
    {
        const int *l_393 = &g_27;
        const int **l_392 = &l_393;
        (*l_392) = &p_86;

        ;
        (*l_389) = (*l_389);
    }
    else
    {
        int **l_394 = &g_249;
        (*l_394) = &g_126;

        ;
        (*l_389) = (**l_394);
        for (g_57 = (-23); (g_57 <= (-15)); g_57 = safe_add_func_uint32_t_u_u(g_57, 8))
        {
            (*g_249) = p_85;
            (*g_249) = 1L;
            if ((*g_249))
                continue;
        }
        (*l_389) = ((+65528UL) & (*l_389));
    }
    if (l_397)
    {
        unsigned short ***l_400 = &g_290;
        unsigned short ****l_401 = (void*)0;
        unsigned short ****l_402 = &l_400;
        int *l_403 = &g_126;
        int l_404 = 0x82D4856EL;
        l_404 = ((*l_403) = ((*l_389) = (safe_sub_func_int8_t_s_s(((*l_391) = (&g_290 != ((*l_402) = l_400))), 255UL))));
        (*l_389) = p_86;
        for (g_118 = (-4); (g_118 < 23); ++g_118)
        {
            unsigned char *l_408 = &l_407;
            (*l_403) = ((0x28L < ((*l_408) = (((**g_276) > l_407) != g_146))) ^ (p_86 == g_126));
        }
        (*l_403) = (*l_403);
    }
    else
    {
        int *l_411 = &g_57;
        int **l_412 = (void*)0;
        int **l_413 = (void*)0;
        for (l_407 = 0; (l_407 == 60); ++l_407)
        {
            (*l_389) = (((*l_391) = p_85) < g_146);
            return p_85;
        }
        g_249 = l_411;

        ;
        l_414 = (l_389 = l_389);

        ;
    }

    ;
    (*l_389) = (*l_414);
    if (p_86)
    {
        unsigned char *l_419 = (void*)0;
        unsigned char **l_418 = &l_419;
        unsigned char l_429 = 0x26L;
        int ***l_452 = &l_436;
        int **l_487 = &g_305;
        const int *l_497 = &g_126;
        const int **l_496 = &l_497;
        int *l_498 = (void*)0;
        int *l_499 = &g_57;
        if ((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((&g_193 == ((*l_418) = &g_193)))), 8)))
        {
            int l_420 = 0xDF532A4FL;
            int l_421 = 0L;
            int l_424 = 0x1A800618L;
            char *l_437 = &g_21;
            l_421 = (0xEFL != ((*l_389) >= 1UL));
            (*l_414) = (l_421 > (((*l_391) = (((l_424 = (0x6941L > g_307)) & (safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(0x478AL, l_429)), 2))) != p_86)) == (((*l_437) = ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((*l_390) = g_138), 7)), ((((safe_mul_func_uint16_t_u_u(65535UL, (l_436 == (void*)0))) <= g_146) & p_85) || p_86))) != p_85)) < p_85)));
            (*l_389) = (0x3BL >= 0UL);
        }
        else
        {
            unsigned char **l_455 = (void*)0;
            unsigned char **l_459 = &l_419;
            int l_466 = 3L;
            int **l_472 = &l_414;
            for (g_57 = 0; (g_57 < 5); g_57 = safe_add_func_int16_t_s_s(g_57, 7))
            {
                int *l_470 = &g_30;
                int *l_471 = &g_118;
                for (l_397 = 0; (l_397 < 42); l_397++)
                {
                    char l_460 = 0x81L;
                    int l_463 = 0xB34035F7L;
                    const int *l_469 = (void*)0;
                    if ((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(p_86, l_429)), (safe_add_func_uint8_t_u_u(0xE1L, (*g_277))))))
                    {
                        volatile int *l_449 = &g_307;
                        volatile int **l_448 = &l_449;
                        int **l_450 = &l_389;
                        int **l_451 = &g_249;
                        unsigned char ***l_456 = &l_418;
                        unsigned char ***l_458 = &l_457;
                        (*l_448) = &g_307;
                        (*l_451) = ((*l_450) = (void*)0);

                        ;
                        ;
                        l_463 = ((l_452 != (void*)0) || (p_86 && (safe_mul_func_int8_t_s_s(((*l_391) = ((((*l_456) = l_455) == (l_459 = ((*l_458) = l_457))) != ((l_460 < p_86) >= (0x87L <= (safe_sub_func_uint32_t_u_u(g_26, p_85)))))), l_460))));
                        l_466 = (safe_mod_func_int16_t_s_s(g_27, p_85));
                    }
                    else
                    {
                        return p_86;
                    }

                    ;
                    ;
                    for (l_407 = (-21); (l_407 <= 53); l_407 = safe_add_func_int8_t_s_s(l_407, 6))
                    {
                        l_469 = &p_86;

                        ;
                    }

                    ;
                    if (p_86)
                        continue;
                }
                if (l_466)
                    break;
                (*l_471) = (g_158 || ((void*)0 != l_470));
            }

            ;
            ;
            ;
            g_249 = ((*l_472) = &l_466);

            ;
            ;
        }

        ;

        ;
        ;
        if (p_86)
        {
            char l_473 = 0xF6L;
            int *l_474 = &g_57;
            int l_475 = (-1L);
            int **l_486 = &g_305;
            l_475 = ((*l_474) = l_473);
            for (g_193 = 0; (g_193 < 30); g_193 = safe_add_func_uint32_t_u_u(g_193, 8))
            {
                (*l_474) = (safe_div_func_int8_t_s_s((safe_div_func_int16_t_s_s((*l_474), (safe_rshift_func_int8_t_s_u(p_86, 7)))), 0xCDL));
                return g_187;
            }
            for (l_475 = 0; (l_475 == 28); ++l_475)
            {
                if (p_85)
                    break;
                if ((((*l_452) = l_486) == l_487))
                {
                    return p_86;
                }
                else
                {
                    char **l_488 = &l_391;
                    char ***l_489 = &l_488;
                    (*l_489) = l_488;
                }

                ;
            }

            ;
        }
        else
        {
            int ***l_492 = &g_304;
            int l_493 = 0L;
            int *l_494 = &l_493;
            int **l_495 = (void*)0;
            (*l_494) = ((0x95C0L | (((safe_lshift_func_int16_t_s_s((g_30 >= 0x70938209L), 4)) <= l_493) & g_307)) >= 0xBB50L);
            l_494 = &g_126;

            ;
        }

        ;
        (*l_496) = &p_86;

        ;
        (*l_499) = g_26;
    }
    else
    {
        unsigned *l_515 = &g_192;
        int l_517 = 1L;
        (*l_414) = (safe_sub_func_uint16_t_u_u(p_86, (safe_div_func_int32_t_s_s(9L, (*l_414)))));
        l_517 = ((((*l_391) = p_86) >= (safe_sub_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(g_126, (safe_add_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((void*)0 == l_457), (p_85 < (g_187 || (g_514 >= ((*l_515) = 0xC07E0134L)))))) <= ((g_141 = ((*l_389) = p_85)) < p_86)), g_143)))) || l_516), g_30))) >= p_86);
    }

    ;

    ;
    return p_85;
}







static int func_87(char * p_88, int p_89, char * p_90, unsigned p_91, unsigned char p_92)
{
    const short *l_137 = &g_138;
    int l_180 = 0L;
    unsigned l_313 = 0x8FD49B2EL;
    int l_314 = 0L;
    int ** const l_316 = &g_249;
    int * const *l_318 = &g_305;
    int ***l_329 = &g_304;
    unsigned short *l_353 = &g_143;
    int *l_387 = &g_118;
    for (g_57 = (-18); (g_57 > (-26)); --g_57)
    {
        unsigned char l_136 = 0x2CL;
        int l_170 = 0xD0445F76L;
        int *l_217 = &g_30;
        int **l_216 = &l_217;
        unsigned short *l_224 = &g_143;
        unsigned short **l_223 = &l_224;
        int l_227 = (-1L);
    }
    if ((*g_249))
    {
        int **l_317 = &g_249;
        int *l_366 = &l_180;
        volatile int *l_374 = (void*)0;
        volatile int **l_373 = &l_374;
        if ((l_316 != l_317))
        {
            (**l_316) = 7L;
            return p_91;
        }
        else
        {
            int * const **l_319 = (void*)0;
            g_320 = l_318;
            if (((*g_249) || 0x69AEF82AL))
            {
                int ** const l_335 = &g_305;
                int l_347 = 0xEB3D96B5L;
                int *l_348 = &l_180;
                for (l_314 = 0; (l_314 >= (-28)); --l_314)
                {
                    int ****l_330 = &l_329;
                    unsigned l_338 = 0UL;
                    unsigned char *l_343 = &g_193;
                    unsigned *l_344 = (void*)0;
                    unsigned *l_345 = &g_192;
                    unsigned *l_346 = &g_194;
                    (**l_317) = ((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((safe_mul_func_int16_t_s_s((&g_320 == ((*l_330) = l_329)), (safe_mul_func_int16_t_s_s(p_91, (safe_mul_func_uint16_t_u_u(((((&g_277 != (void*)0) <= g_118) != (**l_316)) > (**l_317)), (p_91 ^ p_89))))))) > p_89) & (-1L)), p_92)), (-6L))) >= 0xDBL);
                    (*g_249) = (l_335 == (void*)0);
                    if (((safe_mul_func_uint8_t_u_u(g_19, ((p_92 >= l_338) >= p_89))) != (safe_sub_func_uint16_t_u_u(((**l_317) = (((*l_346) = ((*l_345) = (safe_lshift_func_uint8_t_u_u(g_118, ((*l_343) = (((!l_338) & 0x06813217L) > (**l_317))))))) || p_92)), g_126))))
                    {
                        (**l_317) = (*g_249);
                    }
                    else
                    {
                        return l_347;
                    }
                }
                (**l_316) = (*g_249);
                if ((*g_249))
                {
                    return p_91;
                }
                else
                {
                    g_249 = &g_118;

                    ;
                    (*l_316) = (void*)0;

                    ;
                }

                ;
                (*l_348) = 0x8B667AFDL;
            }
            else
            {
                int *l_367 = &g_126;
                if ((*g_249))
                {
                    short l_358 = 9L;
                    char *l_362 = &g_21;
                    char **l_361 = &l_362;
                    char ***l_360 = &l_361;
                    char ****l_359 = &l_360;
                    int l_363 = 0x1398D325L;
                    (*g_249) = 0x20D12CEFL;
                    (**l_316) = (safe_div_func_int8_t_s_s(((p_91 ^ (l_137 != l_353)) <= (safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(l_358, g_278)), ((void*)0 != l_359)))), (l_363 = p_91)));
                }
                else
                {
                    (**l_317) = p_91;
                    g_249 = &g_126;

                    ;
                }

                ;
                for (l_313 = 0; (l_313 > 15); l_313++)
                {
                    (*l_317) = &g_126;

                    ;
                    (**l_316) = ((*p_88) <= (**l_317));
                    if (((*g_249) = 0x102FA715L))
                    {
                        l_366 = &p_89;

                        ;
                        (*l_316) = l_367;
                    }
                    else
                    {
                        (*l_316) = &p_89;

                        ;
                    }

                    ;
                    if ((*g_249))
                        continue;
                }

                ;
                ;
                (*l_317) = &p_89;

                ;
                for (g_146 = 0; (g_146 >= 46); g_146 = safe_add_func_int32_t_s_s(g_146, 3))
                {
                    char * const l_371 = &g_21;
                    char * const *l_370 = &l_371;
                    char * const **l_372 = &l_370;
                    (*l_316) = &g_27;

                    ;
                    (*l_372) = l_370;
                    (*l_366) = 0L;
                    g_307 = (-3L);
                }

                ;
            }

            ;
            ;
        }

        ;
        ;
        (*l_317) = (*l_317);
        (*l_373) = &g_307;

        ;
        if (p_89)
        {
            int *l_375 = &g_118;
            (*l_374) = (g_146 > ((*l_375) = ((*l_366) = ((**g_276) ^ l_313))));
            (*l_374) = p_89;
        }
        else
        {
            return p_91;


        }
    }
    else
    {
        int l_376 = (-3L);
        unsigned short *l_383 = &g_141;
        int l_384 = 4L;
        int l_385 = 0x929CE636L;
        int *l_386 = &l_314;
        (**l_316) = p_91;
        (*l_386) = ((l_376 = (((l_376 == 0UL) || (((**l_316) = (l_376 != ((*g_249) == (!(p_89 = ((safe_mul_func_int16_t_s_s((((p_92 ^ p_89) == (((safe_rshift_func_int8_t_s_u((*g_277), 3)) >= (((l_384 = (l_383 != l_383)) || p_91) == 9L)) <= g_193)) && l_376), g_27)) != l_376)))))) ^ 0x045654F3L)) == g_126)) ^ l_385);
        (**l_316) = p_89;
    }

    ;
    (*l_387) = p_92;
    return p_91;


}







static char * func_93(unsigned p_94, int * p_95, unsigned p_96, short * p_97, int p_98)
{
    unsigned l_100 = 0x0CCCF04AL;
    char *l_103 = &g_21;
    if ((*p_95))
    {
        int *l_101 = &g_57;
        char **l_120 = &l_103;
        char ***l_119 = &l_120;
        (*l_101) = l_100;
        if ((*l_101))
        {
            int **l_102 = &l_101;
            (*l_101) = 0L;
            (*l_102) = l_101;
            return l_103;


        }
        else
        {
            char *l_110 = &g_21;
            for (p_94 = 0; (p_94 != 35); p_94++)
            {
                for (l_100 = (-12); (l_100 == 38); l_100 = safe_add_func_uint32_t_u_u(l_100, 2))
                {
                    for (g_57 = 0; (g_57 != (-23)); g_57 = safe_sub_func_int8_t_s_s(g_57, 8))
                    {
                        return l_110;


                    }
                    for (p_98 = 0; (p_98 <= 22); p_98++)
                    {
                        int *l_117 = &g_118;
                        if (g_26)
                            break;
                        (*l_117) = ((*l_101) = (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((*p_95), (*l_101))), (5UL < p_96))));
                        (*l_117) = 0x4008F4F8L;
                    }
                }
            }
        }
        (*l_101) = 4L;
        (*l_119) = &l_103;
    }
    else
    {
        int *l_124 = &g_27;
        int **l_123 = &l_124;
        for (p_94 = 23; (p_94 < 2); p_94 = safe_sub_func_uint32_t_u_u(p_94, 3))
        {
            return &g_21;


        }
        (*l_123) = (void*)0;

        ;
    }
    return l_103;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
