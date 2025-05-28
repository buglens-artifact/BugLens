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



static unsigned short g_20 = 0x8F4FL;
static int g_27 = 0xB79DF948L;
static int *g_35 = &g_27;
static int **g_34 = &g_35;
static unsigned g_70 = 0xB039B7C3L;
static long long g_73 = 0x6B86D5672FEE6139LL;
static short g_80 = 0x92B6L;
static unsigned g_83 = 4294967295UL;
static unsigned long long g_97 = 18446744073709551615UL;
static int *g_106 = (void*)0;
static short g_119 = 0xD1F7L;
static unsigned short g_135 = 3UL;
static char g_139 = 0x4CL;
static short g_170 = 5L;
static const int g_182 = 0xC764DEBDL;
static const int *g_183 = (void*)0;
static const unsigned short ***g_193 = (void*)0;
static unsigned short *g_196 = &g_20;
static unsigned short **g_195 = &g_196;
static unsigned short ***g_194 = &g_195;
static int g_206 = 0L;
static int g_219 = (-1L);
static short *g_260 = &g_80;
static short **g_259 = &g_260;
static unsigned *g_276 = (void*)0;
static unsigned **g_275 = &g_276;
static int g_310 = 0x7A379C21L;
static unsigned g_352 = 1UL;
static char *g_354 = &g_139;
static char **g_353 = &g_354;
static int g_390 = 0xA71D5EABL;
static long long g_401 = (-1L);
static char g_434 = (-3L);
static char g_437 = 1L;
static char * const g_436 = &g_437;
static char * const *g_435 = &g_436;
static char g_440 = 0x60L;
static char * const g_439 = &g_440;
static char * const *g_438 = &g_439;
static unsigned char g_456 = 0x00L;
static unsigned char g_459 = 6UL;
static short ****g_485 = (void*)0;
static unsigned long long **g_497 = (void*)0;
static short g_527 = 1L;
static unsigned long long g_528 = 1UL;
static unsigned short g_543 = 65533UL;
static unsigned g_546 = 0x643B9761L;
static int g_731 = 0x2D50D075L;
static unsigned short g_738 = 0xCF9EL;
static const char g_751 = 6L;
static const char **g_780 = (void*)0;
static const char ***g_779 = &g_780;
static const char ****g_778 = &g_779;
static char g_932 = 0xF8L;
static short g_949 = 9L;



static unsigned func_1(void);
static short func_7(unsigned p_8, unsigned p_9, int p_10);
static unsigned long long func_21(int p_22, short p_23);
static int * func_28(short p_29, int ** p_30, int * p_31, unsigned char p_32, const unsigned short p_33);
static int * func_36(unsigned p_37, char p_38);
static unsigned char func_41(unsigned char p_42, int * p_43, short p_44);
static long long func_47(short p_48, int * p_49, int ** p_50);
static int * func_52(unsigned char p_53, int ** p_54);
static int ** func_55(unsigned p_56, int p_57, long long p_58, unsigned p_59);
static int * func_62(const int * p_63);
static unsigned func_1(void)
{
    char l_2 = 0xC5L;
    unsigned l_11 = 0xEF2C3654L;
    char l_24 = 1L;
    int *l_928 = &g_731;
    unsigned long long l_929 = 0xE9C009E736036B36LL;
    unsigned char *l_930 = &g_459;
    char *l_931 = &g_932;
    int l_950 = 3L;
    g_949 &= ((+l_2) | (((*l_928) = (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((*g_439) = ((func_7(l_11, ((*l_928) = ((safe_rshift_func_int8_t_s_s(((*g_354) = ((*l_931) &= (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((*l_930) = ((((safe_sub_func_int64_t_s_s(g_20, func_21(l_24, g_20))) , (((safe_unary_minus_func_uint8_t_u(0x77L)) == (((*l_928) <= (*l_928)) , g_73)) <= l_929)) >= (*l_928)) , 0x2DL)), 1)), (*l_928))))), 4)) || 0x44E7L)), l_11) >= l_24) | g_182)), 7)), g_182))) , (*l_928)));

    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    (*g_106) = (**g_34);
    (*g_34) = (*g_34);
    return l_950;
}







static short func_7(unsigned p_8, unsigned p_9, int p_10)
{
    unsigned char l_937 = 1UL;
    unsigned short *l_940 = &g_20;
    unsigned long long *l_945 = &g_97;
    unsigned char **l_946 = (void*)0;
    unsigned char *l_948 = &g_459;
    unsigned char **l_947 = &l_948;
    (**g_34) = ((((safe_add_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s(l_937, 0)) , &l_937) == ((*l_947) = (((l_937 > ((g_73 , (((safe_lshift_func_int16_t_s_u(l_937, (0x749AL >= ((*l_940) = p_9)))) , ((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((l_945 != (l_937 , (void*)0)), p_8)), p_8)) <= l_937)) >= p_8)) , 0L)) || p_9) , (void*)0))), 0x3F45E046L)) & l_937) >= 0UL) , l_937);

    ;
    return l_937;
}







static unsigned long long func_21(int p_22, short p_23)
{
    int *l_26 = &g_27;
    int **l_25 = &l_26;
    unsigned l_51 = 0xE19F8C51L;
    unsigned l_865 = 0xBDFC1BC2L;
    char l_866 = 6L;
    int l_916 = 0L;
    (*l_25) = (void*)0;

    ;
    (*g_34) = func_28(p_23, g_34, func_36((((safe_sub_func_uint16_t_u_u((func_41((((safe_lshift_func_uint16_t_u_u((func_47(((p_23 | l_51) | (((*g_34) != &p_22) ^ (**g_34))), func_52(g_20, func_55(((safe_sub_func_int64_t_s_s(((p_22 , g_20) >= p_22), 0x805E5316D0046BACLL)) == g_27), (*g_35), g_27, p_23)), &g_35) || p_23), 11)) , (void*)0) == (void*)0), (*l_25), l_51) <= 0x2FL), g_527)) | l_865) , l_866), l_51), l_916, g_20);

    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    for (g_440 = 0; (g_440 >= 17); g_440 = safe_add_func_uint16_t_u_u(g_440, 8))
    {
        char l_922 = (-1L);
        (**g_34) = p_22;
        return l_922;
    }
    for (g_119 = 0; (g_119 != (-3)); g_119 = safe_sub_func_uint32_t_u_u(g_119, 1))
    {
        int *l_925 = &g_27;
        int *l_926 = &g_27;
        (*g_35) = p_23;
        if ((*g_35))
            break;
        return p_22;
    }
    return g_80;
}







static int * func_28(short p_29, int ** p_30, int * p_31, unsigned char p_32, const unsigned short p_33)
{
    int **l_917 = (void*)0;
    int **l_918 = (void*)0;
    int **l_919 = &g_106;
    (*p_30) = &g_390;

    ;
    g_183 = ((*l_919) = ((*p_30) = (*g_34)));

    ;
    ;
    return (*p_30);


}







static int * func_36(unsigned p_37, char p_38)
{
    short l_881 = 0xC3EFL;
    unsigned short * const *l_910 = (void*)0;
    unsigned short * const **l_909 = &l_910;
    unsigned short * const ***l_908 = &l_909;
    int l_913 = 0L;
    int *l_914 = (void*)0;
    int *l_915 = &g_390;
    for (g_206 = 0; (g_206 > 18); ++g_206)
    {
        unsigned short l_874 = 0UL;
        int *l_889 = &g_27;
        for (g_390 = 0; (g_390 == 23); ++g_390)
        {
            char l_873 = 0x1FL;
            (*g_106) = (safe_lshift_func_uint16_t_u_s(l_873, 11));
            (*g_106) ^= l_874;
        }
        if (l_874)
        {
            (*g_106) |= 0L;
        }
        else
        {
            (*g_106) &= p_37;
        }
        for (g_527 = 12; (g_527 == (-7)); g_527 = safe_sub_func_int64_t_s_s(g_527, 1))
        {
            unsigned char l_877 = 248UL;
            unsigned char *l_887 = &g_456;
            int l_890 = 1L;
            char ***l_898 = &g_353;
            char **** const l_897 = &l_898;
            int *l_901 = &l_890;
            if (l_877)
            {
                unsigned l_880 = 0x8C15A8C0L;
                unsigned char *l_882 = (void*)0;
                unsigned char *l_883 = &l_877;
                long long *l_888 = &g_401;
                const char **** const l_899 = (void*)0;
                (*g_106) = (!((safe_lshift_func_int8_t_s_u(((l_881 = l_880) > 7UL), ((*l_883) = g_73))) >= (safe_unary_minus_func_uint8_t_u(p_37))));
                l_890 = func_41(((safe_lshift_func_uint16_t_u_s(0x2D8DL, l_877)) , (((*l_888) &= ((0xF588L <= p_37) ^ ((((l_887 != &l_877) >= (g_97 , (p_37 | (((**g_435) |= ((((void*)0 == (*g_778)) , l_874) < (*g_106))) , l_877)))) < l_881) & l_880))) > (-1L))), l_889, p_37);
                l_890 = (safe_sub_func_uint64_t_u_u((((*g_436) > ((safe_lshift_func_uint8_t_u_s(((*l_889) <= ((*g_194) == (void*)0)), 2)) != l_890)) & (safe_mod_func_uint64_t_u_u(l_880, ((((l_897 == l_899) == l_880) & l_877) , (-10L))))), (*l_889)));
            }
            else
            {
                int *l_900 = &g_390;
                (*g_34) = l_900;

                ;
            }
            (*l_901) &= (*l_889);
        }
        (*l_889) = (-9L);
    }


    (*g_106) = (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(func_41((safe_rshift_func_int16_t_s_s((((&g_194 != (p_37 , l_908)) , (safe_sub_func_int16_t_s_s(p_37, p_37))) > (**g_435)), l_881)), &l_913, p_38), l_881)), 0xECL));


    return l_915;



}







static unsigned char func_41(unsigned char p_42, int * p_43, short p_44)
{
    unsigned l_717 = 4294967291UL;
    int l_723 = 0L;
    unsigned char l_757 = 3UL;
    char ***l_774 = &g_353;
    char ****l_773 = &l_774;
    int **l_820 = (void*)0;
    int *l_821 = (void*)0;
    short **l_851 = (void*)0;
    int *l_863 = (void*)0;
    int **l_864 = &l_863;
    for (g_456 = 0; (g_456 <= 13); g_456 = safe_add_func_int16_t_s_s(g_456, 4))
    {
        int ***l_709 = (void*)0;
        int **l_711 = &g_35;
        int ***l_710 = &l_711;
        unsigned long long l_720 = 0x30C65D66C7B957A9LL;
        int l_732 = 0xA858890BL;
        (*l_710) = &p_43;

        ;
        if ((((*g_436) ^= (safe_lshift_func_uint8_t_u_u(g_434, g_434))) == 6L))
        {
            long long *l_718 = (void*)0;
            long long *l_719 = &g_401;
            int *l_721 = (void*)0;
            int *l_722 = &g_219;
            (*g_106) = (*g_106);
            g_390 |= (~(*g_106));
            if (p_42)
                break;
            l_723 |= ((*l_722) |= (safe_unary_minus_func_int8_t_s(((p_44 = p_42) >= (((g_73 , (safe_sub_func_int32_t_s_s(((*g_106) &= (((0L & ((l_717 >= ((0x6595L && p_42) == p_42)) >= ((*l_719) |= (l_717 , (g_528 , p_42))))) , l_717) & l_720)), 0x4B7427BAL))) > 6UL) && p_42)))));
        }
        else
        {
            short *l_726 = &g_80;
            int l_733 = 1L;
            long long *l_734 = &g_73;
            unsigned long long *l_735 = &l_720;
            l_723 |= (safe_rshift_func_uint16_t_u_u(p_44, 7));
            g_219 |= ((*g_106) &= ((((p_42 >= ((((*l_726) = p_42) ^ (l_732 &= (safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(0UL, g_546)), g_731)))) && ((*l_735) = ((4294967287UL == l_733) < ((*l_734) = l_717))))) , (safe_sub_func_int64_t_s_s((g_738 & p_44), p_44))) == 1L) , p_42));
        }
        if (l_717)
            break;
        (*g_106) = (p_42 , (safe_lshift_func_int16_t_s_u(p_44, 3)));
    }
    if ((l_723 |= (*g_106)))
    {
        (*g_34) = &l_723;

        ;
        for (g_437 = 0; (g_437 != 9); g_437 = safe_add_func_int32_t_s_s(g_437, 3))
        {
            (*g_35) &= ((*g_106) &= 0L);
        }
        (*g_35) = (**g_34);
    }
    else
    {
        unsigned l_752 = 0x7CFD74AAL;
        unsigned char l_753 = 0xD8L;
        int l_756 = (-1L);
        unsigned l_782 = 18446744073709551615UL;
        const int *l_830 = &g_206;
        int l_846 = 0xDEC742ECL;
        int *l_849 = &g_219;
        int *l_856 = &l_756;
        (*g_106) = p_44;
        for (g_738 = (-20); (g_738 > 36); g_738 = safe_add_func_int32_t_s_s(g_738, 2))
        {
            int **l_761 = &g_106;
            char ****l_777 = &l_774;
            unsigned char l_807 = 0x87L;
            long long l_808 = 0L;
            for (g_440 = 0; (g_440 > 9); g_440++)
            {
                const char *l_750 = &g_751;
                const char **l_749 = &l_750;
                unsigned short *l_754 = (void*)0;
                unsigned short *l_755 = &g_135;
                int l_760 = 0L;
                long long l_804 = 0x4A5A1BBC209A88A2LL;
                unsigned long long *l_810 = &g_528;
                unsigned long long **l_809 = &l_810;
                short *l_818 = &g_527;
                int *l_819 = &g_731;
            }
        }
        if (l_756)
        {
            long long l_828 = 1L;
            for (l_753 = 0; (l_753 == 43); l_753++)
            {
                unsigned char l_831 = 1UL;
                short ***l_832 = &g_259;
                short **l_834 = (void*)0;
                short ***l_833 = &l_834;
                if (((*g_106) = (*g_106)))
                {
                    char l_827 = 0xD8L;
                    for (g_27 = 6; (g_27 >= 23); g_27 = safe_add_func_int64_t_s_s(g_27, 3))
                    {
                        unsigned ***l_826 = &g_275;
                        int *l_829 = &g_219;
                        (*l_826) = &g_276;
                        (*g_34) = (l_827 , p_43);


                        (*l_829) |= l_828;
                        (*l_829) = l_828;
                    }
                    (*g_106) = 0xE9CB8CF2L;
                    (*g_106) = 0xC10189C0L;
                }
                else
                {
                    l_756 = (l_830 != &g_310);
                    (*g_106) = 0x4D5BD002L;
                }
                (*g_106) ^= (&g_260 == ((*l_833) = ((l_831 & ((void*)0 == l_832)) , ((*l_832) = (void*)0))));

                ;
            }


        }
        else
        {
            unsigned char l_843 = 0x69L;
            int *l_848 = &l_723;
            short **l_850 = &g_260;
            for (l_752 = 20; (l_752 > 37); l_752++)
            {
                unsigned long long l_844 = 0xA7FC2B12201B421DLL;
                short *l_845 = &g_119;
                unsigned short *l_847 = &g_135;
                (*g_106) ^= 0x125F1CE4L;
                (*l_848) ^= l_756;
                l_849 = ((*g_34) = p_43);



                if ((l_850 != l_851))
                {
                    (*g_106) &= (*l_848);
                    (*g_34) = p_43;
                }
                else
                {
                    return p_44;
                }
            }



            (*l_856) &= (safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_459, p_42)), ((safe_sub_func_int32_t_s_s((((p_44 != (((safe_rshift_func_uint8_t_u_u(p_42, 6)) , 0xF6L) > 0xF8L)) , g_546) , 0x4256A8B4L), (*g_106))) , 0xA5L)));
        }



        return g_20;
    }

    ;
    (*l_864) = ((*g_34) = l_863);

    ;
    return g_80;
}







static long long func_47(short p_48, int * p_49, int ** p_50)
{
    unsigned l_381 = 0x3109D701L;
    int l_382 = 0L;
    unsigned long long *l_383 = &g_97;
    int l_384 = 0x7988940AL;
    long long l_405 = 1L;
    unsigned long long l_428 = 0x66889BC5D18551CBLL;
    const char *l_433 = &g_434;
    const char **l_432 = &l_433;
    char * const *l_442 = (void*)0;
    char * const **l_441 = &l_442;
    unsigned short *l_443 = &g_135;
    int l_469 = 0xB1E53226L;
    short ***l_483 = &g_259;
    short ****l_482 = &l_483;
    long long l_545 = (-1L);
    char *l_572 = &g_434;
    unsigned long long l_580 = 18446744073709551608UL;
    unsigned **l_623 = &g_276;
    int **l_704 = &g_35;
    unsigned char l_706 = 0x33L;
    l_382 |= ((safe_lshift_func_uint16_t_u_u(0x550BL, (~(l_381 == (**p_50))))) ^ p_48);
    if (((*g_35) &= ((p_48 <= (((l_382 , (0xE690L != l_381)) == ((l_384 = ((*l_383) |= 1UL)) > p_48)) && (l_384 , ((p_48 & 0xB19BEA2682308056LL) , 0x975F7530L)))) <= 0xAB2D02EEL)))
    {
        const char l_385 = 8L;
        long long *l_400 = &g_401;
        unsigned short *l_404 = &g_20;
        int **l_429 = &g_35;
        (*g_35) &= l_385;
        for (g_206 = (-24); (g_206 >= 26); ++g_206)
        {
            long long *l_397 = &g_73;
            long long **l_398 = (void*)0;
            long long **l_399 = &l_397;
            int l_406 = 0x83E5FE0CL;
            int l_426 = (-1L);
            short **l_427 = &g_260;
            (**g_34) &= (safe_lshift_func_int8_t_s_u(((g_390 = ((*l_383) = l_382)) > l_382), 4));
            if (((safe_add_func_uint64_t_u_u(((((safe_mod_func_int32_t_s_s(0L, (l_385 || ((*l_397) = 0x5D49FE4034800D1BLL)))) , ((*l_399) = &g_73)) != l_400) , 0xC8B0E94818A428A5LL), (l_385 != (safe_mod_func_int16_t_s_s((l_404 == (**g_194)), 65535UL))))) & 0L))
            {
                int *l_407 = &l_382;
                (*p_50) = func_52(l_405, &p_49);
                (*l_407) |= (g_73 , (l_406 |= (**g_34)));
                for (g_73 = 0; (g_73 == (-13)); --g_73)
                {
                    return p_48;
                }
                (*p_50) = (*g_34);
            }
            else
            {
                const unsigned l_423 = 0x58A8DD20L;
                for (g_27 = 0; (g_27 > (-4)); g_27--)
                {
                    unsigned long long *l_414 = &g_97;
                    unsigned long long **l_415 = &l_383;
                    int *l_417 = &g_219;
                    (*l_417) = (safe_lshift_func_uint16_t_u_u(((l_414 != ((*l_415) = l_397)) ^ (l_406 = (safe_unary_minus_func_uint8_t_u(255UL)))), p_48));

                    ;
                    if ((**p_50))
                    {
                        unsigned ***l_422 = &g_275;
                        int l_424 = (-1L);
                        int *l_425 = &l_382;
                        (*l_425) |= ((*l_417) && (safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u((l_422 != &g_275), (((l_423 , p_48) & (l_423 , (*g_260))) , 65535UL))) , g_310) , 0x1974L), l_424)));
                        if ((*p_49))
                            break;
                    }
                    else
                    {
                        if ((**p_50))
                            break;
                    }
                    return g_352;
                }
                (*g_35) = 0xC41B88D3L;
            }
            l_427 = (l_426 , &g_260);
        }

        ;
        (*p_50) = ((((*g_260) = (**g_259)) , g_139) , func_52(p_48, &g_35));
        (*g_34) = func_52(l_428, l_429);
    }
    else
    {
        return g_390;
    }

    ;
    if (((safe_mod_func_uint16_t_u_u((**g_195), (l_384 & (((**g_353) = 0xD5L) | (((*l_443) ^= (l_432 != ((*l_441) = (g_438 = (g_435 = &g_354))))) || (*g_260)))))) , ((*p_49) &= ((safe_add_func_int32_t_s_s(((((**g_438) = p_48) | l_405) , 1L), 0x77ABB1C4L)) , 0x3955CDD6L))))
    {
        int l_450 = 0L;
        long long l_451 = 0x1A6B60F661F45E0DLL;
        unsigned short *l_452 = &g_135;
        unsigned char *l_455 = &g_456;
        unsigned char *l_457 = (void*)0;
        unsigned char *l_458 = &g_459;
        int **l_486 = &g_35;
        const short l_622 = 0x67CAL;
        if ((((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((l_450 && ((l_451 & p_48) ^ ((**g_194) != (g_390 , (l_452 = (**g_194)))))), g_390)), ((safe_rshift_func_uint8_t_u_u(p_48, ((*l_458) = ((*l_455) = g_27)))) || 9L))) && 0UL) , 0x8802A9F1L))
        {
            unsigned l_472 = 0x2BAF4FB6L;
            char l_473 = 0xE1L;
            if (l_428)
            {
                long long *l_464 = &g_401;
                int l_470 = (-6L);
                unsigned long long *l_471 = &g_97;
                (*g_34) = (*g_34);
                (*g_35) &= ((((((((((!(safe_sub_func_uint8_t_u_u(((g_73 = ((*l_464) = l_450)) , g_170), ((safe_lshift_func_uint16_t_u_s(l_428, ((safe_add_func_int64_t_s_s((l_469 != ((l_450 & ((void*)0 != &p_49)) || g_135)), ((*l_471) = (l_470 &= 18446744073709551614UL)))) , (*g_260)))) & p_48)))) & 0L) && p_48) > l_472) , 0x2FL) <= l_450) , l_472) == 4294967287UL) & l_473) > (**g_259));
            }
            else
            {
                unsigned l_484 = 1UL;
                (*p_50) = (*l_486);
                (*l_486) = (*g_34);
                (*g_34) = func_62((*g_34));
            }
            (*g_35) &= (p_48 != 1UL);
        }
        else
        {
            int l_496 = 9L;
            unsigned short *l_537 = &g_135;
            char *l_571 = &g_434;
            int **l_596 = &g_106;
            int l_603 = 0L;
            unsigned char l_606 = 0x7DL;
            (*g_34) = (*g_34);
            if ((*g_106))
            {
                short ***l_491 = &g_259;
                unsigned long long ***l_498 = &g_497;
                int l_510 = 0x0BED1A18L;
                int l_559 = 0x44E524CAL;
                int l_574 = 0L;
                (*l_498) = ((l_382 = p_48) , ((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(((*g_354) = ((((((*l_482) = (*l_482)) != l_491) != (**l_486)) || ((safe_mod_func_uint32_t_u_u(l_428, 0x746121AFL)) && (+(safe_mod_func_uint32_t_u_u(0xF18DFF73L, (-5L)))))) , 0xCDL)), l_496)), 6)) , g_497));
                (*g_106) = (**g_34);
                if (((safe_lshift_func_uint16_t_u_s((0x4B5A019C382C0F7CLL | p_48), 13)) | (**l_486)))
                {
                    short l_511 = 0L;
                    char **l_526 = &g_354;
                    long long l_529 = 0x866A7898F86669DALL;
                    unsigned short **l_539 = &l_452;
                    int l_544 = 0x4E72F996L;
                    for (g_401 = 0; (g_401 != 26); ++g_401)
                    {
                        const int *l_503 = (void*)0;
                        int l_530 = 0xE9DF7BD2L;
                        (*p_49) = (-1L);
                        (*p_50) = func_62(l_503);
                        (*p_49) = ((safe_mod_func_uint8_t_u_u(l_496, 0xDBL)) | (((**l_486) & (safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s(l_510, 1L)), (+(*p_49))))) && l_511));
                        l_530 &= ((p_48 == ((((safe_mod_func_int64_t_s_s(((((*p_49) = (((safe_add_func_uint32_t_u_u(l_496, ((((**g_438) = p_48) , p_48) <= (safe_add_func_int8_t_s_s(l_510, (((safe_lshift_func_uint8_t_u_u(g_135, g_206)) & l_496) == ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((((safe_sub_func_uint32_t_u_u(0x25572CC6L, l_428)) , (void*)0) == l_526) , 0UL), 3)), g_527)) ^ p_48))))))) , l_381) || 0xA6L)) , 1UL) > g_528), l_529)) & (**g_259)) | (**g_259)) >= 1UL)) , l_469);
                    }
                    for (l_529 = 0; (l_529 == 18); ++l_529)
                    {
                        unsigned short *l_538 = &g_20;
                        unsigned short * const l_542 = &g_543;
                        unsigned short * const *l_541 = &l_542;
                        unsigned short * const **l_540 = &l_541;
                        (*p_50) = (*g_34);
                        l_544 |= (((safe_rshift_func_int8_t_s_u(p_48, 0)) <= (**l_486)) | ((*l_383) ^= (((l_537 == l_538) > (l_539 != (((****l_482) = (-1L)) , ((*l_540) = (*g_194))))) != (p_48 == l_469))));

                        ;
                        (**g_34) = l_545;
                        if ((**p_50))
                            break;
                    }
                }
                else
                {
                    unsigned l_547 = 0xFF15BED7L;
                    short *l_548 = &g_170;
                    long long *l_555 = (void*)0;
                    long long *l_556 = &l_545;
                    unsigned *l_595 = &g_83;
                    (*p_49) = ((l_443 = l_443) != ((((p_48 <= g_546) < (l_547 != 4294967295UL)) > (l_548 != ((**l_483) = (void*)0))) , ((**g_194) = (void*)0)));

                    ;
                    ;
                    if ((((((**l_486) = p_48) | (safe_add_func_int8_t_s_s((((*g_436) <= l_496) , (*g_439)), (safe_add_func_uint16_t_u_u((g_20 && (safe_lshift_func_uint16_t_u_u((((*l_556) = p_48) && (((!(safe_add_func_uint32_t_u_u((((*g_436) || (-8L)) && l_496), l_510))) != l_510) ^ p_48)), p_48))), 0xDBB4L))))) , p_48) >= l_559))
                    {
                        unsigned l_560 = 9UL;
                        l_560 &= (**g_34);
                    }
                    else
                    {
                        char **l_573 = &l_572;
                        int l_575 = 0xC1D4662BL;
                        unsigned *l_576 = &g_83;
                        (*p_49) = (safe_mod_func_int64_t_s_s(g_73, (safe_lshift_func_int16_t_s_u(0x0798L, ((((((**g_435) != p_48) | ((((*l_576) &= (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((p_48 , ((((l_571 == ((*l_573) = l_572)) < (l_384 = (((l_574 | 7L) >= l_575) == g_401))) , 9UL) < 2L)), (**g_353))), l_382))) , p_48) == 4294967295UL)) || 0UL) , (**g_438)) > g_70)))));
                    }
                    for (l_574 = 23; (l_574 == (-14)); l_574 = safe_sub_func_uint8_t_u_u(l_574, 7))
                    {
                        short l_579 = 7L;
                        (**g_34) |= 0xBF6DC88FL;
                        l_579 = (*g_106);
                        (*g_35) &= ((p_48 , ((l_547 < 0x1363A99EL) , p_48)) , l_580);
                    }
                    p_50 = (l_547 , l_596);

                    ;
                }

                ;
                ;
                ;
            }
            else
            {
                unsigned l_624 = 0xE2A51389L;
                unsigned char l_626 = 0xA0L;
                (**g_34) = ((void*)0 == l_455);
                for (g_546 = (-17); (g_546 <= 5); g_546 = safe_add_func_int64_t_s_s(g_546, 2))
                {
                    char l_621 = 0L;
                    int *l_625 = &l_450;
                    l_603 ^= ((safe_mod_func_int8_t_s_s((0xB07FBAF6D0482F9ELL | ((**l_596) | (safe_add_func_uint32_t_u_u((+7UL), (*g_106))))), p_48)) , (*g_35));
                    for (g_528 = 0; (g_528 <= 33); g_528++)
                    {
                        l_606 |= (l_452 == l_443);
                    }
                    (*p_49) = (safe_mod_func_int32_t_s_s(1L, (safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s(((*l_625) ^= ((((***l_441) = (safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s(g_543, (((l_580 >= ((*l_537) = (((safe_sub_func_uint32_t_u_u((**l_486), ((l_381 > ((l_382 = (**l_596)) , 0x2AL)) , ((safe_lshift_func_int16_t_s_s((((((*p_49) > (*p_49)) <= l_621) , p_48) , l_622), 8)) && (**g_34))))) , l_623) == &g_276))) == (**l_596)) , 0UL))), l_624))) , (**g_259)) <= 0UL)), 0xA2ABE359L)), l_626))));
                    if (l_626)
                        break;
                }
            }

            ;
            ;
            ;
        }

        ;
        ;
        ;
        ;
        for (l_384 = (-9); (l_384 > 24); l_384 = safe_add_func_int64_t_s_s(l_384, 4))
        {
            long long l_633 = 0x643F2763DE1E4EF5LL;
            (*p_50) = (*l_486);
            (*p_49) = 2L;
            if (l_633)
                continue;
        }
        (*g_34) = &l_382;

        ;
        (*g_34) = (*g_34);
    }
    else
    {
        int l_638 = (-6L);
        int l_641 = 1L;
        char *l_659 = (void*)0;
        unsigned long long l_677 = 18446744073709551607UL;
        for (g_70 = (-26); (g_70 == 52); g_70 = safe_add_func_uint32_t_u_u(g_70, 6))
        {
            unsigned *l_642 = (void*)0;
            unsigned *l_643 = &l_381;
            unsigned *l_644 = &g_352;
            const unsigned l_647 = 1UL;
            int l_700 = 5L;
        }
        if ((**p_50))
        {
            unsigned l_701 = 0UL;
            l_701 &= (g_437 , (*p_49));
        }
        else
        {
            char l_705 = 9L;
            (*p_50) = (*g_34);
            l_705 |= (((safe_lshift_func_uint16_t_u_s(p_48, 11)) >= (((void*)0 != l_704) && (l_641 = ((**g_259) = (-1L))))) == (**l_704));
        }
    }

    ;
    ;
    ;
    ;
    ;
    ;
    ;
    g_219 &= (*p_49);
    return l_706;


}







static int * func_52(unsigned char p_53, int ** p_54)
{
    int *l_344 = &g_27;
    int **l_345 = &g_106;
    unsigned short *l_346 = (void*)0;
    unsigned short *l_347 = &g_135;
    unsigned long long l_348 = 0x710951003F281889LL;
    long long l_359 = 0x4BE4D71671EE6F18LL;
    short l_378 = (-4L);
    (*l_345) = l_344;

    ;
    if (((p_53 , (*l_344)) > ((*l_347) = (**l_345))))
    {
        unsigned *l_349 = &g_83;
        unsigned *l_350 = (void*)0;
        unsigned *l_351 = &g_352;
        int *l_355 = &g_219;
        (*l_355) ^= (((*l_351) = ((*l_349) = (l_348 != (p_53 , (*l_344))))) && ((p_53 , (g_353 == (void*)0)) != (**l_345)));
    }
    else
    {
        int *l_360 = &g_219;
        long long *l_363 = &g_73;
        unsigned char l_372 = 0xB6L;
        const int *l_377 = &g_182;
        (*l_360) = (safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(l_359)), (*g_35)));
        (*l_360) = (((*g_35) , (((*l_363) = (*l_360)) & (safe_lshift_func_uint16_t_u_u(((**l_345) != (safe_sub_func_uint16_t_u_u(((**g_353) , (*l_360)), p_53))), 7)))) == (((**g_353) | (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((***g_194), 1)), l_372))) > 3UL));
        l_378 = (((p_53 , 0x90L) , (g_206 && (safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((*l_344) ^ (*g_106)), (p_53 & (**g_259)))), ((((*l_360) , func_62(((p_53 >= 1UL) , (*g_34)))) != l_377) > p_53))))) != (*g_35));
        (*l_345) = func_62((*g_34));
    }
    return (*g_34);


}







static int ** func_55(unsigned p_56, int p_57, long long p_58, unsigned p_59)
{
    int *l_77 = &g_27;
    int **l_76 = &l_77;
    const unsigned l_107 = 4294967291UL;
    long long l_142 = (-1L);
    unsigned short *l_213 = &g_135;
    unsigned short l_222 = 5UL;
    unsigned char l_227 = 252UL;
    int *l_241 = &g_206;
    unsigned l_283 = 0xD178ACB9L;
    char l_333 = (-7L);
    (*l_76) = func_62((*g_34));
    if ((**l_76))
    {
        unsigned l_78 = 0xA918CA73L;
        short *l_79 = &g_80;
        unsigned char *l_81 = (void*)0;
        int l_82 = (-1L);
        int l_90 = 0xDDC797A3L;
        long long *l_100 = &g_73;
        int **l_104 = &l_77;
        unsigned long long *l_113 = &g_97;
        int *l_174 = &l_90;
        unsigned short *l_178 = &g_20;
        unsigned short **l_177 = &l_178;
        if ((((p_58 ^ 18446744073709551615UL) , (l_78 < g_73)) , ((l_82 ^= (((*l_79) = ((p_56 , (((+((((+(**l_76)) ^ g_20) < (4294967295UL != p_58)) & g_70)) , g_70) <= g_27)) & 4294967295UL)) < 0x7C1FL)) != g_83)))
        {
            int ***l_93 = &l_76;
            unsigned long long *l_94 = (void*)0;
            unsigned long long *l_95 = (void*)0;
            unsigned long long *l_96 = &g_97;
            int l_103 = (-4L);
            if (p_59)
            {
                for (g_83 = 0; (g_83 > 28); g_83 = safe_add_func_uint64_t_u_u(g_83, 9))
                {
                    (*l_76) = func_62((*g_34));
                }
            }
            else
            {
                int *l_86 = &l_82;
                (*l_86) = (**l_76);
                for (p_58 = (-26); (p_58 != 27); p_58 = safe_add_func_uint32_t_u_u(p_58, 7))
                {
                    long long l_89 = 0xB07E043BC77BB9FELL;
                    (*l_76) = func_62(l_86);
                    if ((l_89 = 1L))
                    {
                        l_90 ^= ((*l_86) = (**l_76));
                    }
                    else
                    {
                        return &g_35;


                    }
                    if (p_58)
                        continue;
                }
            }
            if ((safe_add_func_uint64_t_u_u((&g_35 == ((*l_93) = &g_35)), (((((*l_96) = 4UL) && 0x817ACDDED4E1BE66LL) & (((l_100 == l_96) && (g_83 <= (g_27 <= (safe_sub_func_int32_t_s_s((p_59 <= 0xD74AL), (*g_35)))))) < 0xFCL)) > l_103))))
            {
                int **l_105 = &l_77;
                return &g_35;


            }
            else
            {
                unsigned l_120 = 0xF2B79F9BL;
                int **l_141 = &g_35;
                g_106 = (*l_104);

                ;
                if (l_107)
                {
                    unsigned long long **l_114 = (void*)0;
                    unsigned long long **l_115 = &l_96;
                    unsigned long long **l_116 = &l_95;
                    short *l_117 = (void*)0;
                    short *l_118 = &g_119;
                    unsigned *l_122 = &g_83;
                    int l_133 = 0x63684A2DL;
                    unsigned short *l_134 = &g_135;
                    char *l_138 = &g_139;
                    int *l_140 = &l_82;
                    for (l_82 = 0; (l_82 > 25); l_82 = safe_add_func_uint32_t_u_u(l_82, 4))
                    {
                        int **l_110 = (void*)0;
                        p_57 ^= p_59;
                        if ((**l_104))
                            break;
                        return l_110;


                    }
                    l_120 = ((*l_77) && (((*l_118) = ((safe_lshift_func_int8_t_s_s(p_59, (((l_113 = l_100) == ((*l_116) = ((*l_115) = l_94))) , p_56))) , ((*l_79) = p_57))) >= g_73));

                    ;
                    ;
                    p_57 = 0xA3328DBDL;
                    (*l_140) = (((**l_104) || p_57) , (((*l_122) = (safe_unary_minus_func_uint16_t_u(0xA2BDL))) , ((((safe_rshift_func_int8_t_s_u(((*l_138) |= (safe_mod_func_uint8_t_u_u(((((-8L) != ((*l_113) &= (safe_add_func_uint32_t_u_u(g_27, (p_56 ^= ((*l_122) = (((safe_sub_func_int16_t_s_s((g_119 , (***l_93)), (safe_lshift_func_uint16_t_u_s(((*l_134) = l_133), 12)))) == (safe_add_func_uint16_t_u_u((((*l_77) , 0x85461A87E759864ELL) >= 0xBC345E11D1409FA7LL), g_20))) | (**l_104)))))))) , 1L) ^ p_58), 0x87L))), 7)) , l_120) == l_133) && 0UL)));
                }
                else
                {
                    return l_141;


                }

                ;
                ;
            }

            ;
            ;
            ;
            ;
        }
        else
        {
            short *l_143 = &g_119;
            int l_151 = 7L;
            long long *l_161 = &g_73;
            int **l_200 = &l_174;
            p_57 |= (l_142 = 0xFE657869L);
            if ((*g_35))
            {
                int *l_144 = &l_90;
                short *l_169 = &g_170;
                unsigned *l_171 = (void*)0;
                unsigned *l_172 = (void*)0;
                unsigned *l_173 = &l_78;
                (*l_144) ^= (l_79 == l_143);
                if ((safe_lshift_func_int16_t_s_s(((safe_add_func_int64_t_s_s(p_56, (p_59 < (((*l_144) = (safe_rshift_func_int8_t_s_s(7L, ((void*)0 == &g_119)))) , (p_59 && ((g_119 ^ l_151) || p_57)))))) && 18446744073709551615UL), 4)))
                {
                    char *l_156 = &g_139;
                    (*l_76) = (*g_34);
                    (*l_104) = (void*)0;

                    ;
                    (*l_144) = (((g_80 > (0x3F10159DL < (safe_sub_func_uint16_t_u_u(g_80, ((&p_58 == &g_73) > 0x94L))))) , g_83) >= ((*l_156) = ((p_57 > p_59) == 0L)));
                }
                else
                {
                    long long *l_160 = &l_142;
                    int l_166 = 0L;
                    (*l_144) = p_58;
                    for (g_119 = 19; (g_119 <= 9); g_119--)
                    {
                        long long **l_159 = &l_100;
                        unsigned short *l_162 = (void*)0;
                        unsigned short *l_163 = &g_135;
                        (*l_144) |= ((((*l_159) = &g_73) == (l_161 = l_160)) ^ ((((((*l_163) &= ((p_56 , (*l_104)) == &p_57)) == 1L) != (0x88D1BEA04750EE91LL != ((+(safe_add_func_uint16_t_u_u(p_56, 0x7770L))) , g_70))) >= g_80) , l_166));

                        ;
                        if ((**l_76))
                            continue;
                        (*l_144) |= (g_20 , (-10L));
                        (*l_144) &= p_57;
                    }

                    ;
                }

                ;
                ;
                (*l_104) = (g_83 , ((safe_sub_func_uint32_t_u_u(((*l_173) = ((1UL ^ ((p_56 > (g_27 , ((void*)0 != &g_97))) <= (g_80 >= ((*l_169) = ((*l_143) ^= ((!p_56) != (*l_144))))))) & p_59)), p_57)) , (void*)0));

                ;
                (*l_104) = l_174;

                ;
            }
            else
            {
                long long **l_186 = &l_161;
                const unsigned short ***l_191 = (void*)0;
                int l_199 = 0xB346795EL;
                const unsigned *l_207 = &l_78;
                unsigned char l_216 = 255UL;
                short l_217 = 3L;
                for (g_97 = 10; (g_97 >= 14); g_97++)
                {
                    long long **l_185 = &l_161;
                    if (p_56)
                    {
                        unsigned short ***l_179 = &l_177;
                        const int *l_181 = &g_182;
                        const int **l_180 = &l_181;
                        int **l_184 = (void*)0;
                        (*l_179) = l_177;
                        if (p_57)
                            break;
                        g_183 = ((*l_180) = func_62((*g_34)));

                        ;
                        ;
                        return l_184;


                    }
                    else
                    {
                        l_186 = l_185;
                        p_57 = ((*l_174) = (safe_rshift_func_uint16_t_u_s(g_70, 4)));
                    }
                    for (g_119 = 0; (g_119 > (-26)); g_119--)
                    {
                        const unsigned short ****l_192 = (void*)0;
                        int l_197 = 1L;
                        int **l_198 = &g_35;
                        l_197 &= (p_57 == ((p_57 , (~((g_193 = l_191) != g_194))) >= p_57));
                        l_151 ^= l_197;
                        return l_198;


                    }
                }
                if (((*l_174) &= (p_57 &= l_199)))
                {
                    return &g_106;


                }
                else
                {
                    int *l_205 = &g_206;
                    unsigned *l_209 = &l_78;
                    unsigned **l_208 = &l_209;
                    int l_212 = 0x8B54CC1AL;
                    (*l_200) = ((*l_76) = &p_57);

                    ;
                    ;
                    if ((((safe_add_func_int64_t_s_s(((safe_add_func_uint64_t_u_u(0x945837069AAEB0C8LL, (((((*l_205) = (g_20 , ((void*)0 == (*g_194)))) , l_207) == ((*l_208) = (void*)0)) , ((!(**l_200)) < 4294967294UL)))) >= (safe_sub_func_uint32_t_u_u(((((**l_200) >= g_27) && 0x895B9E805CA6D599LL) | l_199), p_57))), p_59)) || p_58) == (-9L)))
                    {
                        (**l_76) = p_58;
                        (**l_200) = (((*l_113) = (g_139 , l_212)) >= p_59);
                        (**l_76) |= (*g_35);
                        (**l_104) = (**l_200);
                    }
                    else
                    {
                        (**l_76) &= l_212;
                        (*l_174) |= (&g_206 == (((*g_195) != l_213) , ((18446744073709551609UL & (g_83 , (safe_sub_func_uint32_t_u_u(0x4E99174BL, p_59)))) , func_62((*g_34)))));
                    }

                    ;
                    l_217 &= ((*g_196) ^ l_216);
                }

                ;
                ;
            }

            ;
            ;
            ;
        }

        ;
        ;
        ;
        ;
        ;
        if ((*g_35))
        {
            (*l_174) = (**g_34);
            (*l_104) = (void*)0;

            ;
            (*l_104) = func_62((*g_34));

            ;
        }
        else
        {
            return &g_106;


        }

        ;
        p_57 = (**l_104);
    }
    else
    {
        int *l_218 = &g_219;
        (*l_218) ^= p_58;
    }

    ;
    ;
    if ((*l_77))
    {
        int *l_223 = (void*)0;
        int *l_224 = &g_219;
        unsigned long long *l_225 = (void*)0;
        unsigned long long *l_226 = &g_97;
        (*l_224) ^= (l_222 &= (safe_rshift_func_int8_t_s_s(g_170, 5)));
        l_227 |= (((*l_226) = ((*l_224) , p_59)) == (*l_224));
    }
    else
    {
        unsigned char *l_228 = &l_227;
        unsigned char l_233 = 1UL;
        int l_240 = (-9L);
        const int *l_242 = &g_206;
        unsigned *l_243 = &g_83;
        unsigned l_244 = 9UL;
        int l_245 = 5L;
        int **l_248 = &g_35;
        short **l_261 = &g_260;
        unsigned long long l_280 = 18446744073709551615UL;
        long long *l_304 = &l_142;
        int *l_305 = &l_245;
        unsigned l_332 = 0UL;
        l_245 |= ((p_56 = (l_244 = ((*l_243) ^= (((*l_228) ^= 248UL) < (safe_lshift_func_int8_t_s_s(((l_241 = func_62(((safe_mod_func_uint16_t_u_u(((p_57 || ((l_233 == (safe_add_func_uint64_t_u_u(l_233, p_57))) > (safe_mod_func_uint32_t_u_u((**l_76), ((**l_76) , 1UL))))) , (((safe_mod_func_int16_t_s_s(((65535UL && (*l_77)) , l_240), l_233)) > 0xF196D43CE4CF2CA3LL) , 0x4206L)), 0x058BL)) , (void*)0))) != l_242), 1)))))) , (**l_76));

        ;
        if (p_58)
        {
            for (l_244 = 0; (l_244 < 41); ++l_244)
            {
                return l_248;


            }
        }
        else
        {
            short *l_250 = &g_119;
            short ** const l_249 = &l_250;
            short **l_252 = &l_250;
            short ***l_251 = &l_252;
            unsigned short **l_255 = &g_196;
            const int l_271 = 0xE3D15342L;
            (*l_251) = l_249;
            if ((safe_sub_func_int32_t_s_s((**l_76), (p_59 ^ ((l_255 == ((*g_194) = (*g_194))) || g_206)))))
            {
                int *l_256 = &l_245;
                char *l_282 = &g_139;
                char **l_281 = &l_282;
                (*l_256) &= 1L;
                if ((p_56 && p_57))
                {
                    long long *l_268 = &l_142;
                    (*l_256) ^= (safe_mod_func_int8_t_s_s(((((((*l_250) ^= ((**g_259) = ((((*l_251) == (l_261 = g_259)) == (safe_sub_func_uint16_t_u_u(((*l_213) = (**l_76)), (((((safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((*l_268) |= 0xAF0AF18DE1EE176DLL), g_219)), (0L > p_57))) || (safe_sub_func_int32_t_s_s((**l_76), (**l_76)))) == (**l_248)) < 0x5F6BL) & 0L)))) , 9L))) < (**l_248)) < (*g_35)) == 0x96L) != l_271), (**l_248)));
                }
                else
                {
                    int l_274 = 0x89DC9810L;
                    unsigned ***l_277 = &g_275;
                    (*l_256) |= p_56;
                    for (g_170 = 2; (g_170 > (-7)); g_170 = safe_sub_func_uint64_t_u_u(g_170, 5))
                    {
                        l_274 = (0x7F9E03FEL && ((*l_256) = (*l_77)));
                        if (p_57)
                            break;
                        if ((**l_76))
                            break;
                        (*l_256) ^= l_274;
                    }
                    (*l_277) = g_275;
                }
                (*l_256) &= ((safe_rshift_func_uint8_t_u_u(l_280, (((*l_281) = l_228) == l_228))) >= l_283);

                ;
            }
            else
            {
                int **l_284 = &g_106;
                short ****l_285 = (void*)0;
                short ****l_286 = (void*)0;
                short ****l_287 = &l_251;
                unsigned long long *l_294 = (void*)0;
                unsigned long long *l_295 = &g_97;
                int l_296 = 0xB25C9D2CL;
                int *l_297 = &l_240;
                (*l_284) = (*l_76);

                ;
                l_296 |= (+((&l_252 != ((*l_287) = &g_259)) == ((255UL ^ (safe_mod_func_int32_t_s_s(1L, (safe_sub_func_uint16_t_u_u(((**l_76) && (((**l_248) < (safe_mod_func_uint64_t_u_u(l_271, ((*l_295) |= (0x7D8DE423L && (((***g_194) & (**l_284)) & 0x82L)))))) , 65528UL)), 1L))))) | 0x5DL)));

                ;
                (*l_297) ^= 0x62D8175EL;
                (*l_284) = (void*)0;

                ;
            }

            ;
        }
        (*l_305) = ((**l_248) && ((*g_194) != ((safe_add_func_int8_t_s_s(g_80, (g_206 > ((safe_sub_func_int64_t_s_s((*l_77), ((*l_304) |= (safe_lshift_func_int8_t_s_u(1L, 5))))) >= 0x5F0FA449L)))) , &l_213)));
        if ((safe_sub_func_uint64_t_u_u((*l_305), ((p_59 < ((((p_56 ^= (safe_rshift_func_uint16_t_u_s(((*l_213) |= 65535UL), 2))) < (**l_248)) | (9L == ((p_59 >= g_310) == g_310))) , ((*l_243) = (p_58 != p_56)))) > (**l_248)))))
        {
            const unsigned char l_315 = 255UL;
            unsigned short l_325 = 0x2816L;
            int l_334 = 0xDD523479L;
            int **l_343 = &g_35;
            for (p_59 = 0; (p_59 != 49); p_59 = safe_add_func_uint64_t_u_u(p_59, 9))
            {
                unsigned char l_324 = 0x8BL;
                int **l_342 = &l_77;
                if (p_57)
                {
                    (*l_305) = (((g_206 & (safe_lshift_func_int8_t_s_u(l_315, 0))) < l_315) || p_59);
                    p_57 = 0x1BF654D5L;
                    (*l_305) = (safe_sub_func_uint8_t_u_u(((g_119 <= (+((safe_add_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u(l_315, (**l_76))) != p_56), 0L)) && (l_324 = (l_315 == 0xC520L))))) != (l_315 > (((p_59 & p_58) && g_27) <= p_56))), l_325));
                }
                else
                {
                    if ((g_170 < (-1L)))
                    {
                        return &g_35;


                    }
                    else
                    {
                        unsigned l_339 = 0xC484A421L;
                        int *l_340 = &l_240;
                        const int **l_341 = &g_183;
                        (*l_340) ^= ((((((*l_305) = (safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((1UL >= (((safe_sub_func_uint64_t_u_u(l_332, (l_334 &= l_333))) > (safe_sub_func_int32_t_s_s(l_324, ((*g_35) & (**g_34))))) < (((0x64F9AB17L ^ 0UL) > ((safe_sub_func_uint32_t_u_u(p_56, l_324)) && l_339)) <= (-1L)))), 0UL)) <= 0x40A1BE3DCF11F39BLL), 0xDEL))) , (*l_77)) >= (**l_248)) , 3UL) && l_325);
                        (*l_341) = (void*)0;
                        return &g_106;


                    }
                }
                return l_343;


            }
        }
        else
        {
            p_57 = (0x7BL <= g_219);
        }
    }

    ;
    return &g_106;


}







static int * func_62(const int * p_63)
{
    short l_64 = 0x13D4L;
    int l_65 = 1L;
    long long *l_71 = (void*)0;
    long long *l_72 = &g_73;
    unsigned long long l_74 = 18446744073709551608UL;
    int l_75 = 0L;
    l_65 = (l_64 != l_64);
    l_75 ^= ((((safe_mod_func_int8_t_s_s(((~l_64) ^ (((void*)0 == &g_35) < (4294967291UL >= ((((*l_72) = (safe_add_func_int8_t_s_s(g_70, l_65))) ^ l_64) < ((1L < l_74) & l_65))))), 0xFCL)) >= l_74) || g_73) , 0x47AFAE86L);
    return (*g_34);


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    transparent_crc(g_459, "g_459", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_546, "g_546", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_751, "g_751", print_hash_value);
    transparent_crc(g_932, "g_932", print_hash_value);
    transparent_crc(g_949, "g_949", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
