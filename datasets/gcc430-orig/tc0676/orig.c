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



static volatile unsigned g_12 = 1UL;
static short g_13 = 7L;
static char g_22 = 8L;
static char g_71 = 0L;
static char *g_70 = &g_71;
static char **g_69 = &g_70;
static unsigned g_73 = 0xF40B36FEL;
static int g_80 = (-8L);
static unsigned char g_100 = 0xFAL;
static int *g_108 = &g_80;
static unsigned char *g_119 = &g_100;
static unsigned char **g_118 = &g_119;
static unsigned short g_142 = 0xE0F6L;
static int g_169 = 0x7C099D7EL;
static unsigned g_194 = 0x2F1C6A60L;
static int **g_209 = &g_108;
static short g_219 = (-1L);
static unsigned char g_222 = 0x10L;
static unsigned g_305 = 0x2A9FC2AAL;
static short g_347 = (-1L);
static unsigned g_370 = 0xE16E9007L;
static unsigned g_374 = 0xB8480B58L;
static char g_417 = (-1L);
static unsigned *g_456 = &g_370;
static unsigned **g_455 = &g_456;
static unsigned ***g_454 = &g_455;
static int g_491 = (-5L);
static volatile int ***g_503 = (void*)0;
static volatile int ****g_502 = &g_503;
static unsigned g_523 = 1UL;
static int *g_573 = &g_169;
static int **g_572 = &g_573;
static unsigned g_595 = 0UL;
static unsigned char g_596 = 255UL;
static short g_694 = 0x5CCFL;
static unsigned g_705 = 6UL;
static int ***g_730 = (void*)0;
static unsigned g_737 = 1UL;
static char *g_839 = &g_417;
static unsigned **g_860 = (void*)0;
static unsigned char g_880 = 0xA4L;



static unsigned short func_1(void);
static short func_4(unsigned p_5, short p_6, char p_7, int p_8, char p_9);
static short func_15(char p_16, char p_17, unsigned char p_18, unsigned char p_19, unsigned char p_20);
static char func_26(char p_27, int p_28, char * p_29);
static short func_30(unsigned char p_31, unsigned p_32, char * p_33);
static short func_41(short p_42);
static char ** func_43(unsigned p_44, char ** p_45, char ** p_46, char ** p_47);
static char ** func_50(char ** p_51, unsigned p_52, unsigned char p_53, int p_54);
static unsigned char func_57(char p_58, char p_59, unsigned char p_60, int p_61, char ** p_62);
static int func_63(unsigned p_64, int p_65);
static unsigned short func_1(void)
{
    int l_14 = 0xF644ACCBL;
    char *l_21 = &g_22;
    int l_23 = 8L;
    int *l_677 = &l_23;
    int l_678 = 1L;
    int l_750 = 1L;
    unsigned l_793 = 1UL;
    short l_928 = 0xF5E2L;
    int **l_1011 = &g_108;
    l_23 = (safe_sub_func_int16_t_s_s((func_4(((safe_lshift_func_uint16_t_u_u(((!g_12) & (g_13 > (l_14 = g_13))), 4)) , g_13), func_15(g_13, ((*l_21) = 0xDEL), ((*g_119) = (l_23 && (safe_lshift_func_int8_t_s_s((func_26((func_30((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((g_13 <= (safe_unary_minus_func_int16_t_s((safe_add_func_int16_t_s_s(func_41(l_23), l_23))))), 1UL)) ^ (-8L)), l_23)), l_23, l_21) ^ l_23), g_374, &g_417) || l_23), l_23)))), g_417, l_23), l_23, l_23, g_417) & g_595), l_23));

    ;

    ;
    if (l_23)
    {
        int **l_676 = &g_108;
        (*l_676) = (void*)0;

        ;
        (*l_676) = l_677;

        ;
    }
    else
    {
        int l_681 = 0L;
        unsigned short *l_688 = &g_142;
        unsigned *l_690 = (void*)0;
        unsigned l_703 = 0x3F0119B5L;
        int *l_704 = &l_681;
        int ***l_728 = (void*)0;
        unsigned l_733 = 0x62E5DA5DL;
        short l_751 = (-3L);
        char **l_752 = &g_70;
        unsigned char *l_828 = (void*)0;
        unsigned char l_866 = 0x81L;
        unsigned char ***l_897 = &g_118;
        unsigned short l_956 = 0x6F66L;
        short l_982 = (-9L);
        if ((l_678 = ((*l_677) = (*l_677))))
        {
            int *l_682 = (void*)0;
            for (g_596 = 28; (g_596 != 10); --g_596)
            {
                l_681 = (((+(**g_69)) < 1UL) == (*g_70));
                l_677 = l_682;

                ;
            }

            ;
        }
        else
        {
            unsigned char l_683 = 255UL;
            (*l_677) = (l_681 , 0L);
            (*l_677) = l_683;
        }

        ;
        l_681 = (-8L);
        if ((safe_add_func_uint32_t_u_u((((*l_688) = (safe_rshift_func_uint8_t_u_u((*g_119), 4))) , 3UL), 0xDE0F3F65L)))
        {
            unsigned l_695 = 0UL;
            unsigned *l_700 = &g_374;
            int l_701 = 0xE32A8B67L;
            unsigned char *l_702 = &g_222;
            unsigned ***l_709 = &g_455;
            int ****l_729 = &l_728;
            l_704 = ((safe_unary_minus_func_int8_t_s((l_690 == (((safe_unary_minus_func_uint32_t_u(l_703)) > (*g_119)) , (*g_455))))) , (void*)0);

            ;
            if (g_705)
            {
                int *l_706 = &l_23;
                g_108 = l_706;

                ;
            }
            else
            {
                unsigned ***l_710 = &g_455;
                short *l_712 = &g_219;
                short **l_711 = &l_712;
                short *l_714 = &g_219;
                short **l_713 = &l_714;
                int l_715 = (-1L);
                char *l_716 = &g_71;
                l_715 = ((((safe_mod_func_int8_t_s_s((**g_69), ((*l_702) = (*g_119)))) , l_709) == (g_523 , l_710)) > func_30(((((*l_711) = &g_219) != ((*l_713) = &g_694)) , ((l_715 > l_23) || g_71)), (***g_454), l_716));

                ;
            }


            for (g_596 = (-16); (g_596 < 46); ++g_596)
            {
                unsigned ****l_722 = &l_709;
                unsigned *****l_721 = &l_722;
                short *l_723 = &g_13;
                int l_724 = 0x96900441L;
                int *l_725 = (void*)0;
                int *l_726 = &l_23;
                int **l_727 = &l_704;
                (*l_726) = (1L >= ((**g_69) = (safe_add_func_uint16_t_u_u(((&g_454 == ((*l_721) = &g_454)) >= ((*l_723) = g_523)), l_724))));

                ;
                (*l_727) = &l_681;

                ;
                return l_695;


            }
            g_491 = (((*l_729) = l_728) == (g_730 = &g_572));

            ;
        }
        else
        {
            int l_736 = (-1L);
            char l_743 = (-3L);
            int *l_744 = &g_169;
            char **l_746 = (void*)0;
            if (((*l_704) = (safe_mod_func_int16_t_s_s(((**g_118) > (-4L)), (l_733 ^ (((safe_div_func_int32_t_s_s(((*l_704) , (g_22 >= ((0x08L && (*g_119)) , func_26((*g_70), ((*g_573) = (g_169 == l_736)), (*g_69))))), l_736)) | g_737) && 0xD5D91861L))))))
            {
                unsigned char ***l_738 = &g_118;
                unsigned char **l_739 = &g_119;
                l_739 = ((*l_738) = (void*)0);

                ;
                ;
            }
            else
            {
                unsigned l_740 = 4294967291UL;
                unsigned l_745 = 4294967293UL;
                int **l_747 = &l_704;
                (*l_704) = l_740;
                (*l_704) = (*l_704);
                (*l_747) = &l_23;

                ;
            }

            ;
            ;
        }


        ;
        ;
        ;
        for (g_596 = 0; (g_596 <= 2); g_596 = safe_add_func_uint8_t_u_u(g_596, 4))
        {
            int l_755 = 0xA7BE94B6L;
            int l_760 = 0x555730F8L;
            char *l_792 = &g_417;
            int ***l_815 = &g_572;
            unsigned short *l_855 = &g_142;
            unsigned short l_879 = 0x7397L;
            unsigned short l_957 = 1UL;
            int *l_970 = (void*)0;
            char l_974 = (-1L);
            unsigned l_1003 = 0x5D9EDD92L;
            unsigned l_1006 = 0UL;
        }
    }


    ;
    ;
    ;
    (*l_1011) = ((+(**g_455)) , &l_750);

    ;
    return g_222;


}







static short func_4(unsigned p_5, short p_6, char p_7, int p_8, char p_9)
{
    unsigned l_543 = 0x2128AB49L;
    char *l_544 = &g_22;
    int *l_546 = &g_80;
    int l_633 = 0x685C3CCFL;
    char l_663 = (-5L);
    for (g_523 = 16; (g_523 >= 4); g_523--)
    {
        unsigned short l_529 = 0x5A2CL;
        int *l_571 = &g_169;
        int **l_570 = &l_571;
        char l_575 = 0xF2L;
        int l_576 = (-9L);
        int *l_600 = &g_80;
    }
    for (g_219 = 0; (g_219 <= 5); g_219 = safe_add_func_int16_t_s_s(g_219, 6))
    {
        short l_606 = 0x9EFAL;
        char ***l_631 = &g_69;
        int l_666 = 0x8BEB611FL;
        int *l_667 = &l_633;
        int *l_670 = &l_666;
        for (l_543 = 0; (l_543 < 43); l_543 = safe_add_func_uint16_t_u_u(l_543, 8))
        {
            unsigned *l_605 = &g_374;
            int l_613 = 1L;
            int *l_614 = &g_80;
            unsigned char **l_632 = &g_119;
            char *l_649 = &g_417;
            (*l_546) = ((((*g_69) == &p_9) == ((*l_605) = g_595)) & (g_595 >= (l_613 = (l_606 || ((func_15(((!(0x33B7L != (safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_s(g_596, (safe_add_func_uint32_t_u_u(((l_606 ^ ((*g_119) >= 0x02L)) == 4L), 0x8D36A4F5L)))) >= l_613) ^ 0x415BL), 11)))) , (*g_70)), p_9, l_606, (**g_118), (**g_118)) ^ p_8) != (**g_69))))));
            l_614 = (void*)0;

            ;
            for (p_6 = (-25); (p_6 <= (-9)); p_6 = safe_add_func_int16_t_s_s(p_6, 2))
            {
                unsigned l_621 = 0x7BCC41D5L;
                unsigned char *l_622 = &g_222;
                (*l_546) = (safe_add_func_int8_t_s_s(((*g_70) = func_15((g_194 , ((safe_add_func_int16_t_s_s(p_6, l_621)) < ((void*)0 == &l_614))), (*g_70), (((*l_622) = (**g_118)) | (+((0UL || l_606) && 1L))), p_5, p_9)), 255UL));
                if (((((safe_sub_func_int8_t_s_s(((safe_add_func_int8_t_s_s((+0x80L), (((safe_add_func_uint8_t_u_u(func_15(((*l_544) = p_5), ((((*g_108) = (safe_add_func_int32_t_s_s(((*l_546) = ((void*)0 != l_631)), 0x59B93F26L))) , p_6) , (((*g_70) = (l_621 <= (+((&g_119 == l_632) & 0xAA157877L)))) | (-8L))), g_219, p_6, l_621), p_8)) <= l_621) != g_73))) ^ p_5), l_606)) < 0x8745395DL) < l_633) , (*l_546)))
                {
                    return g_71;
                }
                else
                {
                    char *l_640 = (void*)0;
                    char *l_641 = &g_417;
                    int *l_646 = (void*)0;
                    (*g_108) = (safe_rshift_func_int16_t_s_s(p_5, 0));
                    (*l_546) = (((func_26((safe_div_func_uint8_t_u_u(((*g_119) = ((g_73 = g_13) >= p_9)), (safe_div_func_int32_t_s_s((((*l_544) = p_6) < 0UL), func_30((l_606 && ((*l_641) = (*l_546))), (***g_454), &p_9))))), (*g_573), (*g_69)) > g_13) ^ 0x9217L) , 0L);
                    for (p_5 = 0; (p_5 >= 56); p_5 = safe_add_func_int16_t_s_s(p_5, 5))
                    {
                        int **l_644 = (void*)0;
                        int **l_645 = &l_614;
                        short l_654 = 0xEE32L;
                        unsigned ****l_655 = (void*)0;
                        (*l_645) = &p_8;

                        ;
                        (*l_645) = l_646;

                        ;
                    }
                    return (*l_546);
                }
            }
        }
        (*l_546) = (p_8 & (safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u(func_26((((l_666 = ((safe_div_func_int32_t_s_s((*l_546), 0x59220ABDL)) > ((((p_5 >= p_8) && (safe_unary_minus_func_int16_t_s(l_663))) , ((1UL > (((safe_sub_func_int16_t_s_s(((((~g_219) >= ((*l_546) , g_222)) | (*l_546)) || (*g_70)), g_169)) <= 1UL) ^ 0L)) > g_22)) || g_80))) < 0x9BBB127EL) != p_7), p_7, (**l_631)), g_71)), (**g_69))));
        l_667 = (void*)0;

        ;
        for (l_663 = 0; (l_663 > 28); l_663++)
        {
            int **l_671 = (void*)0;
            int **l_672 = &l_670;
            if ((*g_108))
                break;
            (*l_672) = l_670;
            (*l_672) = &l_666;
        }
    }
    for (g_596 = 0; (g_596 <= 8); ++g_596)
    {
        int **l_675 = &g_108;
        (*l_675) = &p_8;

        ;
        (*l_675) = (l_546 = &p_8);

        ;
        (*l_675) = &l_633;

        ;
    }

    ;
    ;
    return g_417;


}







static short func_15(char p_16, char p_17, unsigned char p_18, unsigned char p_19, unsigned char p_20)
{
    int *l_509 = &g_491;
    unsigned *l_522 = &g_194;
    int *l_524 = &g_491;
    int **l_525 = (void*)0;
    int **l_526 = &g_108;
    l_509 = l_509;
    l_509 = l_509;
    (*l_526) = ((safe_add_func_int32_t_s_s(0x9DAA5848L, (((safe_div_func_int32_t_s_s((-1L), p_20)) > func_30(((((p_17 = (0x791FB3B1L & (((*l_509) | (*l_509)) , 1UL))) > g_523) <= (*l_509)) & g_142), (*l_509), (*g_69))) > g_194))) , l_524);

    ;
    return g_100;
}







static char func_26(char p_27, int p_28, char * p_29)
{
    int *l_493 = &g_80;
    int **l_494 = &l_493;
    char *l_506 = &g_417;
    (*l_494) = l_493;
    for (g_374 = 0; (g_374 == 53); g_374 = safe_add_func_int32_t_s_s(g_374, 4))
    {
        int *l_497 = &g_491;
        char *l_507 = &g_71;
        unsigned short l_508 = 65535UL;
        if (p_27)
        {
            unsigned l_500 = 5UL;
            short *l_501 = &g_347;
            (*l_494) = l_497;

            ;
            (*l_497) = (((((((*l_501) = (safe_sub_func_uint8_t_u_u(l_500, 0x50L))) > (*l_493)) , p_27) != (g_502 != (void*)0)) && l_500) > (*g_70));
        }
        else
        {
            return (*l_493);
        }

        ;
        (*l_497) = l_508;
        (*l_493) = (-1L);
    }

    ;
    (**l_494) = 0x03C8DB48L;
    (*l_494) = (*l_494);
    return (**l_494);
}







static short func_30(unsigned char p_31, unsigned p_32, char * p_33)
{
    int l_489 = 0x516DBD09L;
    for (g_80 = (-28); (g_80 > 26); g_80++)
    {
        int *l_490 = &g_491;
        int l_492 = 0xEED54774L;
        l_492 = ((*l_490) = (l_489 = 0xD49F43FDL));
    }
    return g_491;
}







static short func_41(short p_42)
{
    char *l_49 = (void*)0;
    char **l_48 = &l_49;
    int l_66 = (-6L);
    char *l_150 = &g_71;
    unsigned char l_151 = 0x6DL;
    char ***l_446 = &l_48;
    unsigned *l_453 = &g_370;
    unsigned **l_452 = &l_453;
    unsigned ***l_451 = &l_452;
    unsigned ****l_457 = &g_454;
    unsigned ***l_459 = (void*)0;
    unsigned ****l_458 = &l_459;
    int l_467 = 9L;
    unsigned char ***l_468 = &g_118;
    int l_469 = (-9L);
    int **l_470 = &g_108;
    int *l_471 = (void*)0;
    int ***l_475 = &l_470;
    int ****l_474 = &l_475;
    unsigned *l_476 = &g_305;
    (*l_446) = func_43(p_42, l_48, func_50(&l_49, ((~(safe_rshift_func_int16_t_s_u((func_57((((((*l_150) = ((&l_49 != (func_63(p_42, ((((l_66 >= (safe_mod_func_uint8_t_u_u(g_13, ((g_69 == ((&l_49 != (void*)0) , &l_49)) & g_13)))) , (void*)0) != &g_70) != 0L)) , &l_49)) | p_42)) & g_13) , g_80) == l_151), l_66, l_66, g_13, g_69) & 255UL), p_42))) , p_42), l_151, g_13), &l_49);

    ;
    ;

    ;
    (*l_470) = ((l_66 & ((((*g_70) ^ (l_151 , ((l_469 = (safe_add_func_int16_t_s_s((l_451 != ((*l_458) = ((*l_457) = g_454))), (1UL >= ((((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s(0xA4L)), 7)) , ((*l_468) = ((((safe_div_func_uint32_t_u_u((((safe_div_func_int8_t_s_s(p_42, (l_467 = (l_151 & p_42)))) , p_42) || 0xCAL), p_42)) <= g_80) && p_42) , &g_119))) == &g_119) == (**g_69)))))) | p_42))) , g_219) <= l_151)) , &l_469);

    ;
    ;
    l_66 = (func_63(p_42, ((g_374 != (**l_470)) > p_42)) <= (!(g_347 && p_42)));

    ;
    if ((((*l_474) = ((safe_rshift_func_uint8_t_u_u(((***l_468) = ((void*)0 == &g_347)), 6)) , &g_209)) != ((((p_42 ^ p_42) , ((p_42 ^ p_42) | (((*l_476) = g_219) <= (safe_rshift_func_uint16_t_u_u(((!(g_71 & 0UL)) , g_71), p_42))))) || g_347) , &g_209)))
    {
        unsigned l_481 = 0x172701EBL;
        int l_484 = 0L;
        int *l_485 = &l_66;
        (*l_485) = (((p_42 > ((((((&g_118 == (void*)0) > (l_481 , 0x75B46407L)) , (safe_div_func_uint8_t_u_u((g_194 , ((**g_69) , (l_484 = ((***l_468) = ((*g_119) , p_42))))), p_42))) , (*g_70)) , p_42) > p_42)) , g_219) < l_481);
    }
    else
    {
        int *l_486 = &l_66;
        (*l_470) = l_486;

        ;
    }

    ;
    ;
    return g_13;


}







static char ** func_43(unsigned p_44, char ** p_45, char ** p_46, char ** p_47)
{
    int *l_280 = &g_80;
    int l_343 = 0xC93218F0L;
    unsigned short l_360 = 1UL;
    int *l_438 = &l_343;
    int **l_437 = &l_438;
    l_280 = l_280;
    for (g_73 = 0; (g_73 > 25); g_73 = safe_add_func_int8_t_s_s(g_73, 7))
    {
        char l_285 = 3L;
        int *l_319 = &g_80;
        int *l_340 = &g_80;
        unsigned short l_342 = 0x9569L;
        char **l_345 = &g_70;
        int l_357 = 0x1DC3ABB4L;
        unsigned **l_400 = (void*)0;
        int l_407 = 0xB14B88DAL;
        char l_439 = (-1L);
        unsigned short l_442 = 4UL;
        for (g_219 = 0; (g_219 != 22); g_219++)
        {
            int l_286 = 3L;
            int *l_311 = &g_80;
            unsigned char **l_355 = &g_119;
            unsigned char l_372 = 0UL;
            unsigned **l_401 = (void*)0;
            int *l_408 = (void*)0;
            int *l_409 = &l_407;
            int l_429 = (-1L);
        }
        (*l_319) = (*l_319);
        (*l_280) = (safe_lshift_func_uint8_t_u_s(0UL, 6));
    }
    return &g_70;


}







static char ** func_50(char ** p_51, unsigned p_52, unsigned char p_53, int p_54)
{
    int *l_269 = &g_80;
    int **l_270 = &l_269;
    short *l_276 = &g_219;
    int ***l_279 = &l_270;
    (*l_269) = (safe_lshift_func_uint8_t_u_u(6UL, 7));
    (*l_270) = l_269;
    (***l_279) = (safe_add_func_uint32_t_u_u(p_52, (((*l_276) = (g_194 , (safe_sub_func_uint32_t_u_u((~((safe_unary_minus_func_uint16_t_u(((0xCAL > (-8L)) , p_54))) != 0xCDL)), (**l_270))))) >= (~((((safe_rshift_func_uint16_t_u_s(((((**g_69) & p_54) || p_53) <= (**l_270)), g_13)) , l_279) != (void*)0) , p_52)))));
    return p_51;


}







static unsigned char func_57(char p_58, char p_59, unsigned char p_60, int p_61, char ** p_62)
{
    int **l_152 = &g_108;
    unsigned char **l_157 = (void*)0;
    unsigned short *l_166 = &g_142;
    char *l_167 = &g_71;
    int l_182 = 1L;
    unsigned *l_185 = &g_73;
    unsigned short l_192 = 0xCA4CL;
    unsigned *l_193 = &g_194;
    int **l_208 = (void*)0;
    unsigned l_251 = 0x47FFD21CL;
    (*l_152) = &g_80;

    ;
    (**l_152) = (safe_lshift_func_uint8_t_u_s((0x6DL == 0L), 5));
    if (((**g_118) == ((safe_rshift_func_int16_t_s_s(((((((void*)0 != l_157) >= (safe_div_func_int32_t_s_s(p_60, (safe_div_func_int16_t_s_s(g_73, p_58))))) | ((((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((**l_152) , (l_166 == l_166)), 4)), p_60)) , (**l_152)) < (**g_69)) == g_13)) , (void*)0) == (void*)0), g_100)) ^ g_13)))
    {
        int *l_168 = &g_169;
        int *l_170 = &g_80;
        unsigned *l_172 = &g_73;
        unsigned **l_171 = &l_172;
        (**l_152) = ((&g_80 == ((0x3F17L == ((void*)0 != l_167)) , (((*l_168) = p_58) , l_170))) || 0xDAA5L);
        l_171 = l_171;
        (*l_152) = ((**g_118) , &p_61);

        ;
        for (g_142 = (-13); (g_142 != 26); ++g_142)
        {
            unsigned short l_175 = 0xCD35L;
            (*l_152) = (void*)0;

            ;
            (*l_170) = (l_175 & l_175);
        }

        ;
    }
    else
    {
        (*l_152) = &g_80;
    }

    ;
    if ((safe_div_func_uint8_t_u_u(((**g_118) = (*g_119)), (safe_lshift_func_int16_t_s_u((safe_div_func_int16_t_s_s((p_61 & l_182), (p_59 , p_60))), (((*l_193) = ((((safe_lshift_func_uint16_t_u_u((((*l_185) = 1UL) ^ (safe_div_func_uint8_t_u_u((((l_182 || g_80) <= ((safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(g_13, 0x5BE8B728L)), 11)) > p_61)) || p_58), l_182))), 3)) <= 0xB753B5FDL) <= p_59) ^ l_192)) >= 0x83EEDB4BL))))))
    {
        char l_207 = 0L;
        int **l_216 = (void*)0;
        int l_220 = 0L;
        char *l_235 = &l_207;
        (*l_152) = &g_80;

        ;
        for (g_169 = (-10); (g_169 > 4); ++g_169)
        {
            int ***l_205 = (void*)0;
            int ***l_206 = &l_152;
            short *l_217 = (void*)0;
            short *l_218 = &g_219;
            unsigned char *l_221 = &g_222;
            (*g_108) = (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(p_61, (safe_lshift_func_int8_t_s_s((((*g_70) > ((!(safe_mod_func_int8_t_s_s((((*l_206) = &g_108) == (g_209 = (l_207 , l_208))), l_207))) , (safe_div_func_uint32_t_u_u((g_194 || 0x1625C23CL), (**l_152))))) & (**g_69)), (**p_62))))), p_58));

            ;
            (***l_206) = (safe_add_func_uint16_t_u_u(((**g_69) >= ((*l_221) = (safe_rshift_func_int16_t_s_u(((*l_218) = (((void*)0 == l_216) || (4L ^ (**g_118)))), l_220)))), 0L));
            return p_61;
        }
        (**l_152) = (safe_div_func_int8_t_s_s(((((((*l_235) = ((*g_70) = ((g_142 , p_58) < p_60))) && (**l_152)) >= p_59) > p_60) , (**p_62)), 1UL));
        (*g_108) = ((void*)0 == &g_118);
    }
    else
    {
        int *l_246 = &l_182;
        for (g_73 = 0; (g_73 <= 2); g_73++)
        {
            for (g_222 = 0; (g_222 >= 32); g_222 = safe_add_func_int32_t_s_s(g_222, 5))
            {
                int **l_240 = (void*)0;
                int *l_242 = &g_169;
                int **l_241 = &l_242;
                int *l_243 = &l_182;
                (*l_243) = ((((*l_241) = &g_169) == (void*)0) <= p_59);
                if (p_59)
                    break;
                (*g_209) = &p_61;

                ;
            }
        }
        for (g_80 = 0; (g_80 < (-27)); g_80 = safe_sub_func_uint16_t_u_u(g_80, 2))
        {
            int l_265 = 1L;
            int *l_266 = &l_182;
            (*l_152) = l_246;

            ;
            p_61 = (safe_add_func_int8_t_s_s((((safe_div_func_int32_t_s_s((l_251 , (p_58 > (((0L ^ (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u(65535UL)) || ((*g_108) = (*g_108))), ((**g_69) , (safe_rshift_func_uint16_t_u_u(((p_61 || 0xA945L) , (safe_div_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((l_265 | p_59) == (*g_70)), p_59)) & p_59), 4UL))), g_169))))), g_142))) , (void*)0) == &g_118))), 0x42DB3603L)) != (**g_69)) || g_13), (*g_70)));
            l_266 = (*g_209);
        }

        ;
        (*l_152) = (*l_152);
    }

    ;
    return p_61;


}







static int func_63(unsigned p_64, int p_65)
{
    unsigned *l_72 = &g_73;
    int l_76 = 0L;
    char *l_77 = (void*)0;
    int l_102 = 0L;
    int l_103 = 0L;
    unsigned char *l_111 = &g_100;
    unsigned char **l_110 = &l_111;
    unsigned char ***l_120 = (void*)0;
    unsigned char ***l_121 = &g_118;
    int *l_125 = &g_80;
    int *l_134 = (void*)0;
    int **l_149 = (void*)0;
    if ((((*l_72) = (((**g_69) = p_65) == (&g_70 == (void*)0))) , g_71))
    {
        int *l_78 = (void*)0;
        int *l_79 = &g_80;
        char l_101 = 0x2EL;
        int l_107 = (-1L);
        unsigned char **l_112 = &l_111;
        if ((((*l_72) = (g_71 , g_13)) != ((p_65 && (((p_64 | p_65) | ((*l_79) = (safe_sub_func_uint16_t_u_u((((*g_69) = (*g_69)) != (l_76 , l_77)), (p_64 != p_64))))) <= g_13)) , 0x3EC6B9FEL)))
        {
            char *l_95 = &g_71;
            unsigned char *l_98 = (void*)0;
            unsigned char *l_99 = &g_100;
            int **l_104 = (void*)0;
            int **l_105 = (void*)0;
            int **l_106 = (void*)0;
            l_103 = (safe_add_func_uint8_t_u_u((*l_79), ((((*l_72) = (safe_div_func_int32_t_s_s(0xC08F94BBL, ((l_102 = ((safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(0x1F7FL, ((p_64 = (safe_rshift_func_int8_t_s_u((-5L), ((*l_99) = ((l_95 == ((*g_69) = l_95)) < (safe_lshift_func_uint16_t_u_s(g_13, (0x0466E1A5L != 0UL)))))))) <= (*l_79)))), p_65)), g_71)), 0L)) , l_101)) && 0x7DC4CAE1L)))) > 4294967287UL) == 7UL)));

            ;
            l_78 = (void*)0;
            l_103 = ((*l_79) >= l_107);
        }
        else
        {
            int **l_109 = &g_108;
            g_108 = l_78;

            ;
            (*l_109) = (void*)0;
        }


        l_112 = l_110;
    }
    else
    {
        int **l_117 = (void*)0;
        (*g_108) = 1L;
        (*g_108) = p_64;
        for (g_80 = 0; (g_80 < (-9)); g_80--)
        {
            int l_115 = (-1L);
            int l_116 = (-1L);
            l_116 = l_115;
        }
        (*g_108) = (l_117 == &g_108);
    }


    g_80 = (((*l_121) = g_118) != &g_119);
    if ((safe_add_func_uint16_t_u_u(p_65, (((*g_69) = l_111) != (void*)0))))
    {
        int **l_124 = (void*)0;
        int l_132 = 0x4DAAEF58L;
        l_125 = &l_103;

        ;
        l_132 = ((safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s((&g_80 == ((&l_125 == (l_124 = &l_125)) , &l_102)), (safe_lshift_func_int16_t_s_s(((*l_125) = (0xC370L != ((l_132 ^ l_132) >= (l_132 & (**g_118))))), 5)))), 8UL)) , (-10L));

        ;
    }
    else
    {
        unsigned char **l_133 = &g_119;
        int **l_135 = &l_125;
        unsigned short *l_140 = (void*)0;
        unsigned short *l_141 = &g_142;
        int l_143 = (-7L);
        char *l_146 = &g_71;
        int *l_147 = &l_102;
        int l_148 = 0xD436FCA1L;
        (*l_121) = (l_133 = &g_119);
        (*l_135) = (g_108 = l_134);

        ;
        ;
        l_148 = ((((safe_rshift_func_uint8_t_u_s((*g_119), 4)) | (0xDE2A9FC0L != ((*l_147) = ((safe_rshift_func_int16_t_s_s(p_65, (l_143 = (p_65 && (((*l_141) = g_73) && (0x9BL == 9L)))))) , (((safe_rshift_func_int8_t_s_u((~(((*g_69) = l_146) != l_77)), 4)) ^ (*g_119)) > 0x7868L))))) , 7UL) , g_73);

        ;
    }

    ;
    l_125 = &l_103;

    ;
    return p_64;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_737, "g_737", print_hash_value);
    transparent_crc(g_880, "g_880", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
