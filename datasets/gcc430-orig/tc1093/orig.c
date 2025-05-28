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



static const unsigned short g_7 = 0x97A8L;
static int g_12 = 0xA5EFA20BL;
static unsigned g_34 = 18446744073709551615UL;
static int g_57 = 0xB7212908L;
static short g_66 = 0L;
static unsigned char g_83 = 0x5EL;
static unsigned char g_86 = 249UL;
static int g_92 = 1L;
static char g_96 = 0xD1L;
static const int *g_107 = &g_92;
static unsigned g_129 = 0xF61DB451L;
static char g_135 = (-1L);
static unsigned short g_190 = 0xC0EAL;
static unsigned short *g_189 = &g_190;
static unsigned short *g_191 = &g_190;
static int g_201 = 1L;
static unsigned char *g_231 = &g_86;
static unsigned char **g_230 = &g_231;
static int * const **g_288 = (void*)0;
static unsigned g_306 = 0x190DC860L;
static unsigned *g_338 = &g_34;
static unsigned **g_337 = &g_338;
static int *g_345 = (void*)0;
static int **g_344 = &g_345;
static short g_411 = (-1L);
static unsigned char ***g_413 = &g_230;
static unsigned char ****g_412 = &g_413;
static unsigned g_425 = 0x984F6E07L;
static unsigned char g_428 = 0x61L;
static unsigned char g_430 = 1UL;
static unsigned char g_433 = 5UL;
static char g_435 = 0xBBL;
static char *g_454 = &g_435;
static char **g_453 = &g_454;
static const short *g_468 = (void*)0;
static unsigned char g_486 = 255UL;
static int *g_568 = &g_92;
static int **g_567 = &g_568;
static int g_729 = 0xDB9D06D6L;
static unsigned *g_757 = &g_34;
static int **g_765 = (void*)0;
static unsigned short g_883 = 0x5C51L;



static char func_1(void);
static int * const func_2(const short p_3, int p_4, int * p_5, int * p_6);
static int * func_9(int * p_10);
static int * func_15(const int * p_16, unsigned char p_17, short p_18, int p_19, int * p_20);
static int * func_21(const unsigned char p_22, int * p_23, int * p_24);
static int * func_25(int * p_26, int * p_27, int * p_28, int * p_29, int * p_30);
static int * func_31(unsigned p_32);
static char func_44(unsigned short p_45);
static const int * func_46(char p_47, int p_48, unsigned char p_49, unsigned * p_50, unsigned * p_51);
static const unsigned char func_60(short p_61, int * p_62, const int p_63, char p_64);
static char func_1(void)
{
    unsigned l_8 = 6UL;
    int *l_11 = &g_12;
    int **l_911 = &g_568;
    (*l_911) = func_2(g_7, l_8, func_9(l_11), l_11);


    ;


    ;
    ;

    return (**l_911);
}







static int * const func_2(const short p_3, int p_4, int * p_5, int * p_6)
{
    short l_578 = (-4L);
    short *l_580 = &g_411;
    int **l_593 = &g_345;
    int l_595 = (-1L);
    int *l_657 = (void*)0;
    const char l_688 = 0L;
    int * const l_768 = &g_729;
    if ((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((*l_580) = (func_44((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(l_578, (safe_unary_minus_func_uint8_t_u(p_3)))), ((((*g_191) = (!1UL)) , &g_337) == (void*)0)))) <= p_3)), l_578)), l_578)))
    {
        char l_585 = 0x9FL;
        int *****l_588 = (void*)0;
        unsigned char l_592 = 2UL;
        int **l_598 = &g_345;
        unsigned char ****l_599 = &g_413;
        if ((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((0xA6L > (**g_230)), l_585)), (!(safe_lshift_func_uint8_t_u_s(255UL, 7))))))
        {
            int **l_589 = &g_568;
            (*p_5) = ((void*)0 == l_588);
            (*p_5) = (p_4 , l_578);
            (*l_589) = (void*)0;

            ;
        }
        else
        {
            int ***l_594 = &l_593;
            int ***l_596 = (void*)0;
            int ***l_597 = &g_344;
            char l_600 = 0xFAL;
            int l_618 = (-5L);
            int **l_644 = &g_568;
            unsigned char l_660 = 254UL;
            int l_707 = 0xDBD2A8D6L;
            short l_728 = (-1L);
            unsigned char *** const *l_738 = (void*)0;
            unsigned char *** const **l_737 = &l_738;
            char *l_739 = &g_96;
            unsigned *l_740 = &g_306;
            unsigned *l_741 = &g_129;
            int ***l_760 = (void*)0;
            int ***l_761 = &g_567;
            int ***l_762 = &g_567;
            int ***l_763 = &g_567;
            int ***l_764 = &g_567;
            if ((((safe_mod_func_uint8_t_u_u(((((*l_580) = p_4) <= l_592) , (((*l_594) = l_593) == (func_60(((*l_580) = p_4), p_5, (l_595 = (-9L)), p_3) , (l_598 = ((*l_597) = (void*)0))))), p_4)) , &g_413) == l_599))
            {
                unsigned l_615 = 0xF85FD576L;
                int *l_616 = &l_595;
                unsigned *l_617 = &l_615;
                int **l_643 = (void*)0;
                if (((((l_600 , (((safe_sub_func_uint32_t_u_u((((((*l_617) = ((*g_338) = (safe_sub_func_uint8_t_u_u((((*l_580) = (safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((+((4294967295UL == ((**g_453) >= 0x89L)) , (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(1L, 4)) | func_60(((g_306 >= (safe_rshift_func_uint16_t_u_u((l_615 != (*g_107)), 13))) ^ (((*l_616) = (*g_568)) ^ g_34)), p_5, (*p_6), l_578)), 10)))) && g_83), p_3)), p_3))) && 5UL), (****g_412))))) , 0x35L) , p_3) < 65528UL), 4UL)) , 9UL) || p_4)) != 1UL) || (*p_5)) < l_618))
                {
                    int ***l_628 = &g_567;
                    int ***l_629 = &g_567;
                    int ***l_630 = &g_567;
                    int ***l_631 = &g_567;
                    int ***l_632 = &g_567;
                    int ***l_633 = (void*)0;
                    int ***l_634 = &g_567;
                    int ***l_635 = &g_567;
                    int ***l_636 = &g_567;
                    int ***l_637 = &g_567;
                    int ***l_638 = &g_567;
                    int ***l_639 = &g_567;
                    int ***l_640 = &g_567;
                    int ***l_641 = &g_567;
                    int ***l_642 = (void*)0;
                    int *l_645 = &g_92;
                    unsigned *l_649 = &g_129;
                    (*p_5) = (func_60((+((void*)0 == (*g_453))), p_5, ((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((!(((*l_616) = (*g_568)) || (p_4 <= p_4))))), g_92)) , ((*l_645) = (safe_rshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((func_60(((safe_mod_func_int8_t_s_s(((l_644 = (l_643 = (void*)0)) == &p_6), p_3)) , 0xE6A0L), p_6, (*p_6), p_4) > (*l_616)) >= 0x7BL), (*l_616))) ^ p_4), 1)))), l_585) , (*p_5));

                    ;
                    (*p_6) = l_595;
                    (*g_568) = (safe_add_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s(((*l_616) && func_60(((g_129 || ((*l_649) = p_3)) , 1L), (*l_593), ((*p_5) = (safe_div_func_int32_t_s_s(((*l_616) != (safe_div_func_uint32_t_u_u(((!p_3) & p_3), (*p_5)))), g_135))), (**g_453))))) ^ p_4), p_4));
                    p_5 = &g_92;

                    ;
                }
                else
                {
                    for (g_486 = 23; (g_486 != 51); g_486 = safe_add_func_uint32_t_u_u(g_486, 7))
                    {
                        unsigned char l_656 = 0x9DL;
                        (**l_644) = ((g_190 = 65533UL) || (((-1L) < l_656) & 0xFF6BL));
                        (*l_644) = &p_4;

                        ;
                        g_107 = ((*l_644) = &p_4);

                        ;
                        (*p_5) = 0xAAF01E5EL;
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
                unsigned short l_663 = 0xC41DL;
                int *l_666 = &g_92;
                unsigned char ***l_673 = (void*)0;
                char l_706 = (-1L);
                l_657 = (p_6 = (*l_644));

                ;
                ;
                for (g_411 = (-25); (g_411 > (-9)); g_411 = safe_add_func_int8_t_s_s(g_411, 8))
                {
                    (*l_644) = &p_4;

                    ;
                }

                ;
                (*p_6) = ((l_660 < (safe_sub_func_int16_t_s_s((**l_644), func_60(l_663, p_5, (**l_644), (*g_454))))) | ((*l_657) || 0x62E2L));
                for (g_86 = 0; (g_86 <= 36); ++g_86)
                {
                    unsigned char ****l_674 = (void*)0;
                    unsigned char ****l_675 = &l_673;
                    unsigned *l_676 = &g_129;
                    unsigned ***l_679 = &g_337;
                    int l_680 = 0x7EF40C75L;
                    unsigned l_681 = 0xD4409042L;
                    (*l_644) = l_666;

                    ;
                    if (((*g_338) , ((*p_6) = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((func_60((func_60((((*l_676) = ((**g_230) > (safe_rshift_func_int8_t_s_u(((*g_412) == ((*l_675) = l_673)), 0)))) ^ (((*l_657) != (p_3 >= ((safe_mod_func_uint32_t_u_u((((*l_679) = &g_338) == (void*)0), ((l_680 = (func_60(((*g_338) , 0xECA1L), l_676, (*g_107), (*l_666)) & p_3)) , 0xB4FF00B9L))) != p_3))) != l_681)), p_5, (*p_6), p_3) , p_3), l_666, (**l_644), l_681) >= 0xC3L) , 0xFA98L), 1)), l_681)))))
                    {
                        unsigned short l_684 = 0x4AE6L;
                        unsigned char *l_685 = &g_428;
                        unsigned short *l_695 = (void*)0;
                        unsigned short *l_696 = (void*)0;
                        unsigned short *l_697 = (void*)0;
                        unsigned short *l_698 = &g_190;
                        unsigned *l_705 = &g_306;
                        (*p_5) = (((safe_lshift_func_uint8_t_u_s(((*l_685) = (l_684 && ((((*l_657) = (*p_6)) , (void*)0) != &g_411))), 5)) & ((((g_435 ^ (safe_lshift_func_int16_t_s_s(g_435, ((func_60(((*p_5) , p_4), l_666, (*p_5), (**g_453)) && l_688) , 0x5177L)))) | p_3) >= p_3) >= 0xCB469D88L)) >= (*p_5));
                        (*l_644) = l_666;
                        (*l_657) = ((safe_add_func_uint16_t_u_u(p_4, g_92)) == ((l_707 = ((func_60((safe_add_func_int16_t_s_s((**l_644), (func_60((((*g_107) >= ((*l_705) = (((*l_676) = (safe_sub_func_uint16_t_u_u(((*l_698) = (((*g_230) = &l_660) == &l_660)), (!((*l_580) = (-4L)))))) > (func_60((p_3 && (safe_add_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(((**l_644) , 0x72E16939L), (*g_568))) < 0L) <= 6L), p_4))), &g_201, (**l_644), (**g_453)) >= p_3)))) == l_681), p_5, (*g_107), p_4) || (**g_453)))), p_5, l_684, p_4) , l_706) < (**l_644))) | 251UL));

                        ;
                        (*p_5) = (*g_107);
                    }
                    else
                    {
                        unsigned short l_720 = 0UL;
                        unsigned short *l_730 = (void*)0;
                        unsigned short *l_731 = &g_190;
                        (*l_644) = (((((safe_div_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(((*l_731) = (((((*p_5) != (safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((l_680 = (safe_div_func_uint16_t_u_u((l_720 = p_3), func_60(((*l_580) = ((((((*g_231) == p_4) , (safe_unary_minus_func_uint32_t_u(g_66))) & (((((safe_sub_func_int32_t_s_s((*p_6), ((safe_div_func_int8_t_s_s(((p_3 >= p_4) < (safe_mod_func_int16_t_s_s(0x63F8L, l_728))), (****g_412))) & (**g_453)))) , (*g_568)) && (*p_6)) || (****g_412)) == (*g_231))) && l_681) , p_4)), (**l_594), (*l_666), p_3)))), (-1L))) == (*l_657)) & g_729), (**l_644))), l_681))) , p_3) > p_4) && (**g_453))), 65526UL)) && (*l_666)), 0xEA36L)) , (void*)0) == (void*)0) , p_3) , (*l_644));
                        (*l_644) = (void*)0;

                        ;
                    }

                    ;
                    (*l_594) = &g_345;
                }

                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;
            ;
            ;
            ;
            ;
            if ((((*l_741) = ((*l_740) = (((*l_739) = (((*g_454) = (p_4 , (safe_unary_minus_func_uint16_t_u(((safe_div_func_uint32_t_u_u(g_425, (safe_sub_func_int16_t_s_s(p_4, (((*l_737) = (void*)0) != l_599))))) , (!((*p_5) , p_3))))))) && p_4)) <= (*g_231)))) , (*p_6)))
            {
                int *l_744 = &l_707;
                unsigned char l_745 = 1UL;
                g_107 = &p_4;

                ;
            }
            else
            {
                unsigned *l_755 = &g_306;
                int l_756 = 0xBADA7191L;
                const int **l_758 = (void*)0;
                const int **l_759 = &g_107;
                (*l_759) = func_46((*g_454), (safe_lshift_func_int16_t_s_u((((((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((((((safe_add_func_int16_t_s_s(p_4, (safe_unary_minus_func_int32_t_s((-7L))))) || (*p_5)) > 0x29L) , l_755) == p_5), l_756)), (*p_6))) >= 0x3516L) == p_3) && 0xA0L) , g_57), p_3)), p_4, (*g_337), g_757);

                ;
            }

            ;
            (*p_5) = ((l_598 == ((((((p_3 ^ (l_644 != (g_765 = (void*)0))) > p_3) , (***g_413)) <= 0UL) >= ((*g_338) , ((((*l_580) = (((((safe_mod_func_uint8_t_u_u(p_4, (*g_454))) != 4294967295UL) == (*p_6)) <= 7L) | 0UL)) ^ g_96) < (-1L)))) , (void*)0)) ^ p_3);
        }

        ;

        ;
        ;
        ;
        ;
        ;
        ;
        return l_768;




    }
    else
    {
        unsigned char l_771 = 0x20L;
        int *l_777 = (void*)0;
        int **l_776 = &l_777;
        int l_780 = 0x130198BBL;
        int *l_782 = (void*)0;
        unsigned short l_884 = 0xEF61L;
        if (((*l_768) = (safe_rshift_func_uint16_t_u_u(l_771, func_60((safe_add_func_int16_t_s_s((0x33L <= p_4), (-5L))), ((*g_344) = (*g_344)), (((p_3 , p_4) && (l_776 != (((void*)0 == &g_344) , (void*)0))) >= p_4), (*g_454))))))
        {
            int *l_778 = &g_201;
            int *l_779 = &g_12;
            int *l_781 = &g_729;
            int **l_783 = (void*)0;
            int **l_784 = &g_568;
            int *** const *l_815 = (void*)0;
            unsigned *l_848 = &g_306;
            unsigned **l_847 = &l_848;
            (*l_784) = func_21((((*l_778) = (g_430 != (((*g_568) & ((func_60(g_433, l_778, ((*l_779) = (*p_6)), (**g_453)) , (*l_779)) , ((l_780 = 0x3CL) >= (*g_231)))) != p_4))) , (*l_768)), l_781, l_782);
            if ((((**l_784) = ((safe_lshift_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(l_780, 0)) & p_4) , ((safe_rshift_func_int8_t_s_u((safe_div_func_int8_t_s_s(p_4, (p_3 && p_3))), (0x574CL && (safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((func_60(p_3, p_6, (*p_6), p_3) ^ 0xE1232D19L) < (*p_5)), (*l_781))) > (*l_768)), p_3)), (-9L)))))) > 0xC3L)), (*g_454))) != p_4) >= (*l_768)), p_3)) || 0xE61977A7L)) >= (*g_454)))
            {
                int l_807 = 0xB1804075L;
                int l_808 = (-8L);
                (*l_784) = (*l_784);
                (*l_784) = (((*l_580) = (safe_div_func_int16_t_s_s(((func_60((safe_lshift_func_uint8_t_u_u(((***g_413) = (safe_add_func_uint16_t_u_u((l_808 = l_807), (safe_div_func_int8_t_s_s((p_3 >= (func_60(p_3, p_6, l_807, l_807) , (safe_add_func_uint16_t_u_u(p_4, p_4)))), p_3))))), 4)), p_6, (*g_107), (**g_453)) > (**l_784)) != p_3), p_4))) , &p_4);

                ;
            }
            else
            {
                const int l_820 = 0x015F3096L;
                char *l_821 = (void*)0;
                char *l_822 = &g_96;
                unsigned char l_823 = 249UL;
                int *l_824 = &l_595;
                (*l_784) = func_25(func_15(&l_780, (**g_230), p_4, ((**l_784) , (((func_60((((void*)0 != l_815) || (l_771 , ((**g_453) < ((*l_822) = ((safe_lshift_func_uint8_t_u_u(func_60(((safe_div_func_uint8_t_u_u(func_60(((*l_580) = (*l_781)), (*g_344), (*p_6), (**l_784)), p_3)) && p_4), p_6, l_820, (*g_454)), (**g_230))) || 250UL))))), (*l_593), (*p_6), p_3) , l_823) >= (*g_568)) && g_135)), l_824), &l_780, &l_595, l_824, &g_12);

                ;
                for (g_411 = 0; (g_411 < 8); ++g_411)
                {
                    short ** const l_829 = &l_580;
                    (*p_5) = ((safe_add_func_int8_t_s_s((~(l_829 != (void*)0)), 0x0AL)) , (*p_5));
                    for (g_190 = 0; (g_190 > 45); g_190++)
                    {
                        int **l_832 = &l_777;
                        l_776 = l_832;
                    }
                }
                for (g_34 = 0; (g_34 < 33); ++g_34)
                {
                    unsigned short *l_835 = (void*)0;
                    unsigned short *l_836 = (void*)0;
                    unsigned short *l_837 = &g_190;
                    int l_842 = 0x3AAF7CDDL;
                    unsigned **l_850 = &l_848;
                    unsigned ***l_849 = &l_850;
                    unsigned **l_852 = &l_848;
                    unsigned ***l_851 = &l_852;
                    short l_858 = 0x1383L;
                    short *l_863 = &g_66;
                }
            }

            ;
        }
        else
        {
            int l_873 = (-10L);
            l_873 = (((safe_rshift_func_uint8_t_u_u(6UL, 0)) <= p_4) && (safe_div_func_int16_t_s_s((*l_768), p_4)));
            (*l_768) = (*p_5);
        }

        ;
        for (g_12 = (-16); (g_12 != 29); ++g_12)
        {
            const int *l_876 = &g_12;
            int *l_885 = &g_12;
            unsigned *l_890 = &g_129;
            unsigned **l_889 = &l_890;
            unsigned ***l_888 = &l_889;
            int *** const l_904 = (void*)0;
            int *** const * const l_903 = &l_904;
            if (func_60(p_4, (*g_344), (*p_6), (**g_453)))
            {
                short l_895 = (-9L);
                int *l_896 = &g_92;
                int *l_897 = &g_92;
                int *l_898 = &l_595;
                g_107 = &p_4;

                ;
            }
            else
            {
                int *l_909 = (void*)0;
                const int **l_910 = &g_107;
                (*l_910) = func_46((0xA0B40612L != (((**g_337) , (~(safe_div_func_uint8_t_u_u((****g_412), (*l_876))))) , ((((*p_6) || ((void*)0 != l_903)) ^ (safe_mod_func_uint32_t_u_u((func_60(((*l_580) = (0xF0L <= (safe_lshift_func_uint16_t_u_s(p_3, g_883)))), l_909, (*p_5), p_4) < (*g_568)), 0x8AF70EDCL))) , (*g_568)))), (*p_5), p_4, p_5, p_5);

                ;
            }

            ;
        }

        ;
    }

    ;
    ;

    ;
    return &g_12;




}







static int * func_9(int * p_10)
{
    unsigned *l_33 = &g_34;
    const int **l_561 = &g_107;
    int l_563 = 0xCF6C32B9L;
    char l_564 = 4L;
    (*p_10) = (0x83L == ((safe_sub_func_uint16_t_u_u(g_7, (-1L))) >= (+3L)));
    (*l_561) = func_15(func_21(((((&g_12 == ((*l_561) = func_25(func_31(((*l_33) = g_7)), &g_92, p_10, p_10, &g_92))) && ((**l_561) >= (-7L))) , (**l_561)) || 0UL), l_33, &g_92), (****g_412), l_563, l_564, &l_563);

    ;

    return p_10;


}







static int * func_15(const int * p_16, unsigned char p_17, short p_18, int p_19, int * p_20)
{
    int *l_566 = (void*)0;
    int **l_565 = &l_566;
    int *l_569 = &g_12;
    g_567 = l_565;

    ;
    (*g_568) = 0x5CB0429EL;
    return l_569;



}







static int * func_21(const unsigned char p_22, int * p_23, int * p_24)
{
    int *l_562 = &g_92;
    return l_562;


}







static int * func_25(int * p_26, int * p_27, int * p_28, int * p_29, int * p_30)
{
    if ((*p_26))
    {
        short *l_558 = &g_66;
        int l_559 = 0x04F46456L;
        (*p_28) = (l_559 = (((*l_558) = 0xCA8AL) || 0x3742L));
        return p_29;


    }
    else
    {
        int *l_560 = &g_12;
        return l_560;


    }
}







static int * func_31(unsigned p_32)
{
    short l_37 = 5L;
    const unsigned *l_38 = &g_34;
    short l_436 = 0xAAD2L;
    int *l_440 = &g_12;
    int * const *l_439 = &l_440;
    char l_441 = 0x0DL;
    unsigned **l_491 = &g_338;
    char l_519 = 0L;
    int **l_553 = &l_440;
    int *l_555 = &g_92;
    int **l_554 = &l_555;
    int *l_557 = &g_92;
    int **l_556 = &l_557;
    for (g_12 = 27; (g_12 < 11); --g_12)
    {
        int l_417 = 0xDCAF69C3L;
        int l_426 = 0xC930BA73L;
        int l_455 = 0L;
        unsigned char l_481 = 0x70L;
        int l_487 = (-5L);
        unsigned char ** const *l_502 = &g_230;
        unsigned char ** const **l_501 = &l_502;
        int *l_542 = &l_487;
    }
    (*l_556) = ((*l_554) = ((*l_553) = l_440));

    ;
    ;
    return &g_12;


}







static char func_44(unsigned short p_45)
{
    int l_52 = 0xF1871D0CL;
    unsigned l_55 = 0x9117A540L;
    int *l_56 = &g_57;
    short *l_65 = &g_66;
    unsigned char *l_85 = &g_86;
    const int *l_94 = &l_52;
    const int **l_93 = &l_94;
    char *l_95 = &g_96;
    int l_104 = 0L;
    unsigned char l_155 = 2UL;
    short l_251 = 0x0674L;
    unsigned short l_267 = 0xB0D6L;
    unsigned char ***l_281 = &g_230;
    const char l_284 = 5L;
    unsigned l_310 = 18446744073709551615UL;
    int *l_329 = &g_92;
    int * const ***l_358 = &g_288;
    const int ***l_367 = &l_93;
    const int ****l_366 = &l_367;
    const int *****l_365 = &l_366;
    unsigned *l_406 = &g_129;
    unsigned short **l_416 = &g_191;
    (*l_93) = func_46((l_52 == (safe_div_func_int8_t_s_s((((*l_56) = l_55) , (safe_div_func_uint8_t_u_u(func_60((0xD004L && ((*l_65) = l_52)), &g_57, l_52, g_7), ((*l_85) = l_55)))), l_55))), l_52, p_45, &l_55, &l_55);

    ;
    if ((g_7 >= (!((*l_95) = 0xE9L))))
    {
        const short l_97 = 0x6DEAL;
        unsigned char *l_137 = &g_83;
        unsigned char l_154 = 255UL;
        const unsigned short *l_175 = &g_7;
        int *l_177 = &l_104;
        int l_272 = 0xB9470D68L;
        int *l_326 = &l_52;
        int **l_325 = &l_326;
        unsigned l_398 = 18446744073709551612UL;
        if ((func_60(p_45, &g_57, (g_7 , l_97), p_45) <= ((-4L) >= p_45)))
        {
            short l_105 = 0xD49EL;
            char * const l_117 = (void*)0;
            int *l_153 = &g_92;
            int **l_152 = &l_153;
            const unsigned short **l_176 = &l_175;
            int *l_178 = &l_52;
            unsigned char l_218 = 0x04L;
            unsigned char l_244 = 250UL;
            if ((p_45 & 0xE4L))
            {
                unsigned l_106 = 0UL;
                g_107 = func_46((!((*l_95) = p_45)), (((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((l_104 || func_60((g_66 = (&g_57 == (void*)0)), &g_57, (**l_93), l_105)), 7)) == (p_45 >= 65535UL)), p_45)), 5)) , l_106) , p_45), g_57, &g_34, &g_34);

                ;
            }
            else
            {
                int l_114 = (-1L);
                int *l_156 = &g_92;
                if (((*l_94) < 5L))
                {
                    int *l_108 = &g_92;
                    unsigned short l_136 = 0UL;
                    unsigned short *l_149 = &l_136;
                    (*l_108) = l_97;
                    if ((*g_107))
                    {
                        unsigned char **l_109 = &l_85;
                        unsigned char ***l_110 = (void*)0;
                        unsigned char ***l_111 = &l_109;
                        int **l_124 = &l_56;
                        char *l_125 = &g_96;
                        unsigned *l_126 = (void*)0;
                        unsigned *l_127 = (void*)0;
                        unsigned *l_128 = &g_129;
                        (*l_111) = l_109;
                        (*l_108) = (safe_rshift_func_int16_t_s_u((65534UL ^ (((l_108 == (void*)0) == l_114) ^ p_45)), (safe_rshift_func_uint16_t_u_u(g_96, (((p_45 , g_92) , (l_85 != l_117)) , 65535UL)))));
                        (*l_108) = (safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((((*l_128) = func_60(((*l_65) = func_60(g_86, ((*l_124) = l_108), l_97, (l_125 != l_85))), &g_57, p_45, ((*l_95) = (p_45 && p_45)))) | (**l_93)), l_97)), g_12)) , 0xEFL), l_105));

                        ;
                    }
                    else
                    {
                        int **l_130 = (void*)0;
                        int **l_131 = &l_56;
                        int *l_132 = (void*)0;
                        int *l_133 = (void*)0;
                        int *l_134 = &l_114;
                        unsigned *l_138 = &g_129;
                        g_135 = ((*l_134) = ((*l_108) = (g_83 == ((((*l_131) = (void*)0) == (l_97 , l_108)) , ((*g_107) >= p_45)))));

                        ;
                        (*l_134) = (((l_136 ^ 0L) < ((((*l_138) = ((void*)0 != l_137)) >= (g_7 != (safe_div_func_int16_t_s_s(p_45, p_45)))) && ((*l_108) >= (g_12 || p_45)))) < (-7L));
                    }

                    ;
                    (*l_108) = (safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint32_t_u_u(((+g_135) != (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(0xDFC1L, ((*l_149) = 0x765CL))), 3))), (((*l_85) = ((*l_137) = (g_83 , l_105))) != ((*l_95) = (((*l_94) , (((*l_94) != (safe_lshift_func_uint16_t_u_s((l_152 != &g_107), (**l_152)))) , 0xB726758DL)) , 8L))))) < l_97), p_45));
                }
                else
                {
                    return l_154;
                }

                ;
                (*l_156) = ((*g_107) || ((l_155 >= func_60(((*l_65) = 1L), &l_104, ((*l_156) = (g_34 == (**l_93))), p_45)) , (*g_107)));
                (*l_153) = ((0x2913L >= ((((safe_add_func_int16_t_s_s((((**l_93) | (safe_sub_func_int16_t_s_s(g_92, (g_83 >= (**l_152))))) , (safe_div_func_int32_t_s_s(p_45, p_45))), ((safe_lshift_func_uint16_t_u_s(9UL, p_45)) >= 2UL))) & g_92) , (*l_94)) == p_45)) , p_45);
                for (g_92 = 0; (g_92 > 20); g_92 = safe_add_func_int8_t_s_s(g_92, 7))
                {
                    return p_45;
                }
            }

            ;
            (*l_153) = (safe_add_func_uint32_t_u_u(g_129, (safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(func_60((safe_mod_func_int16_t_s_s((((*l_176) = l_175) == &p_45), g_83)), l_177, ((*l_178) = (((**l_152) = (((**l_152) >= g_86) == (**l_152))) & g_66)), p_45), g_86)) , 4294967295UL), p_45))));
            if (((**l_152) = (*l_94)))
            {
                (*l_93) = &g_92;
            }
            else
            {
                char l_187 = 0xDBL;
                int *l_188 = &l_104;
                unsigned *l_194 = &g_129;
                int *l_199 = &g_57;
                int *l_200 = &g_201;
                int l_202 = 0xC67237AFL;
                int l_203 = 0x849EEB4EL;
                l_203 = (((*l_177) = (-1L)) , ((l_202 = ((((*l_137) = (safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(func_60(l_187, l_188, ((g_189 = (void*)0) == (g_191 = &p_45)), (safe_sub_func_int16_t_s_s(g_83, (((*l_194) = (+g_86)) || (((*l_200) = ((*l_199) = ((*l_177) = (safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_92, 7UL)), p_45))))) , (*l_153)))))), 7)), 3)) == 0x1739D61DL) , p_45), 0xD2AD6A2FL)), p_45))) , (-1L)) < l_154)) ^ g_7));

                ;
                ;
                if ((func_60(g_83, &l_104, (**l_152), ((l_202 ^ 1UL) , (+g_201))) >= 5UL))
                {
                    (*l_93) = func_46((((+(((0x6249A0EEL & ((**l_152) = p_45)) ^ (1UL || (p_45 , ((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((((*l_178) = (g_135 , ((safe_mod_func_uint32_t_u_u(((p_45 , ((safe_div_func_int16_t_s_s((0xA13AAE15L < (safe_rshift_func_int8_t_s_s(p_45, 7))), (*g_191))) , p_45)) && p_45), 8L)) , p_45))) , p_45), g_66)), p_45)), p_45)) != 0x31L)))) | 0x5C3DF7CFL)) & 0x8638DCB3L) == g_129), p_45, l_218, l_177, l_199);
                    for (l_155 = 0; (l_155 > 37); l_155++)
                    {
                        (*l_93) = l_177;

                        ;
                    }

                    ;
                    (*l_152) = &g_92;
                }
                else
                {
                    char *l_233 = &l_187;
                    int l_234 = 0x3B9DD4B5L;
                    unsigned short **l_239 = (void*)0;
                    (**l_152) = p_45;
                    if (((**l_152) = (!(((g_190 , (1UL == (**l_93))) ^ 0xC708496AL) >= g_201))))
                    {
                        unsigned **l_221 = (void*)0;
                        unsigned **l_222 = (void*)0;
                        unsigned *l_224 = &g_34;
                        unsigned **l_223 = &l_224;
                        int *l_227 = &g_92;
                        int *l_228 = (void*)0;
                        int *l_229 = &l_203;
                        (*l_93) = func_46(p_45, (*g_107), p_45, &g_34, ((*l_223) = &g_34));
                        (*l_229) = (((safe_add_func_uint32_t_u_u((((**l_93) <= g_66) , func_60(g_57, l_224, ((*l_229) = ((*l_227) = 0x9DC89B84L)), g_66)), 1L)) , ((g_230 != &l_137) , g_34)) && 0x7897607BL);
                    }
                    else
                    {
                        const char *l_232 = &g_96;
                        (*l_178) = (l_232 != l_117);
                        (*l_178) = ((**l_152) = (((l_234 = ((void*)0 != l_233)) <= (safe_sub_func_int8_t_s_s(((safe_div_func_int32_t_s_s(l_97, (*g_107))) , ((!(*g_107)) , ((l_239 != ((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(1L, g_96)), p_45)) , l_176)) && 0x5D348384L))), p_45))) , l_234));
                        (*l_153) = 0xD83E2E9BL;
                        (**l_152) = l_244;
                    }
                    (*l_93) = (void*)0;

                    ;
                }

                ;
                (*l_93) = &g_12;

                ;
                g_92 = ((((((**l_93) , l_154) != (255UL ^ ((safe_lshift_func_int8_t_s_s(((&g_129 == l_94) , (((*l_95) = func_60((*l_153), ((((safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((*l_176) == (void*)0), ((*l_95) = (&l_85 != &g_231)))), 4294967295UL)) <= l_97) < p_45) , &g_201), (**l_93), l_251)) && 248UL)), 6)) && (*g_191)))) | 0xE5L) >= 4294967293UL) , p_45);
            }

            ;
            ;
            ;
        }
        else
        {
            int *l_252 = (void*)0;
            int *l_253 = &g_92;
            unsigned char *l_264 = (void*)0;
            unsigned char ****l_282 = &l_281;
            unsigned short *l_283 = &l_267;
            int ***l_289 = (void*)0;
            if (((*l_253) = l_154))
            {
                unsigned l_265 = 0x238DED41L;
                int **l_266 = &l_177;
                (*l_253) = (((*g_189) = l_97) != (g_34 , (p_45 > ((((safe_div_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((+l_97), (safe_add_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_u((((g_96 ^ (safe_div_func_uint8_t_u_u(((((6UL & ((*l_253) ^ p_45)) && (l_264 != (*g_230))) >= 0xA4L) , 0xBDL), l_265))) , g_201) & 0x3054L), 15)) , l_266) != (void*)0) , 0xA10FL), g_34)))) & (*g_107)) <= g_12), 1L)) < g_92) > l_267) < (-1L)))));
            }
            else
            {
                char **l_270 = &l_95;
                char *l_271 = &g_135;
                const int **l_273 = &g_107;
                const int ***l_274 = &l_93;
                l_272 = ((safe_lshift_func_int8_t_s_s(((-1L) >= ((p_45 <= (((*l_270) = l_264) == l_264)) <= 0x56L)), (((*l_271) = (~8L)) ^ p_45))) > 0x9354L);

                ;
                (*l_274) = l_273;

                ;
                (*l_253) = (0x76C01778L >= (*g_107));
            }

            ;
            ;
            if ((func_60(((((*l_94) & (((p_45 < (safe_mod_func_int8_t_s_s((((*g_189) = 7UL) || ((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(p_45, ((*g_191) <= ((*l_283) = ((((*l_282) = l_281) == (void*)0) | (((*l_253) , p_45) == g_92)))))), 11)) == p_45)), l_97))) , p_45) == l_154)) < 7UL) && (*l_253)), &g_201, l_284, p_45) < g_92))
            {
                unsigned short l_287 = 0xB0FDL;
                int ****l_290 = &l_289;
                char *l_291 = &g_96;
                unsigned short **l_294 = &g_191;
                unsigned *l_301 = &g_129;
                unsigned *l_302 = (void*)0;
                unsigned *l_303 = (void*)0;
                unsigned *l_304 = (void*)0;
                unsigned *l_305 = &g_306;
                char *l_309 = &g_135;
                for (g_83 = 29; (g_83 != 14); g_83 = safe_sub_func_int16_t_s_s(g_83, 6))
                {
                    (*l_253) = 0x851782DAL;
                    (*l_253) = (l_287 != ((*l_283) = ((*g_189) = (0L || (**g_230)))));
                }
                (*l_93) = ((+(((*l_291) = (g_288 != ((*l_290) = l_289))) <= (((safe_lshift_func_uint8_t_u_u(((void*)0 == l_294), ((*g_231) = (((*l_309) = (safe_sub_func_uint32_t_u_u(5UL, (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((*l_305) = ((*l_301) = (*l_253))), g_12)), (safe_add_func_uint32_t_u_u(g_12, 1L))))))) , 1UL)))) , 0x93L) || l_272))) , (*l_93));

                ;
                l_310 = p_45;
                for (g_135 = 19; (g_135 > 10); g_135--)
                {
                    const unsigned char l_313 = 0xF2L;
                    int *l_314 = &g_12;
                    (*l_93) = (((0xCBL >= (~p_45)) , l_313) , (*l_93));
                    if ((*l_253))
                        break;
                    (*l_253) = (l_314 == &g_92);
                }
            }
            else
            {
                int **l_321 = &l_56;
                unsigned l_324 = 0x96670370L;
                (*l_253) = (safe_rshift_func_int16_t_s_s((p_45 >= g_7), (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((-1L), func_60(p_45, ((*l_321) = &l_104), ((65534UL | ((*l_65) = ((safe_rshift_func_int8_t_s_u((((*l_283) = 0x89D9L) != 0x3DF8L), ((l_52 = func_60(((((~l_154) == (-1L)) , g_201) > l_324), &g_57, p_45, (*l_94))) < 0L))) <= (*l_94)))) && 0x893AL), (*l_94)))), 0xE25CL))));

                ;
                (*l_253) = (l_272 = (*g_107));
                (*l_253) = p_45;
                (*l_253) = (l_325 == (((*l_65) = p_45) , &l_94));
            }

            ;
            ;
        }

        ;
        ;
        ;
        ;
        ;
        ;
        for (g_86 = (-20); (g_86 <= 17); ++g_86)
        {
            unsigned char l_334 = 252UL;
            int *l_335 = (void*)0;
            int **l_343 = &l_177;
            int ***l_342 = &l_343;
            int l_350 = (-1L);
            int ***l_370 = &l_325;
            int ****l_369 = &l_370;
            int *****l_368 = &l_369;
            short l_384 = 0x5A27L;
            short l_389 = (-4L);
            unsigned *l_405 = &g_306;
            unsigned **l_404 = &l_405;
            unsigned char *** const *l_414 = (void*)0;
            if ((**l_325))
            {
                (**l_325) = 0x70C10387L;
                return p_45;


            }
            else
            {
                unsigned *l_336 = &g_129;
                unsigned ***l_339 = &g_337;
                (*l_325) = l_329;

                ;
                (*l_329) = 0x61E16781L;
                (*l_329) = (safe_sub_func_uint32_t_u_u(((*l_336) = func_60(((*g_191) == 65535UL), l_177, p_45, func_60(((&l_177 != (void*)0) != (l_334 > g_83)), l_335, (*l_326), g_306))), p_45));
                (*l_339) = g_337;
            }

            ;
            (*l_93) = func_46((*l_94), p_45, ((*l_137) = p_45), (((*l_326) , ((*l_65) = (p_45 == (((*l_342) = &l_56) == g_344)))) , l_326), l_335);

            ;
            for (g_190 = 27; (g_190 > 11); g_190--)
            {
                char l_371 = 0xB8L;
                const int l_388 = 0x84793B5EL;
            }
            (****l_365) = func_46((safe_add_func_uint32_t_u_u(func_60(((safe_lshift_func_int8_t_s_s((((*l_404) = l_335) != (l_406 = &g_306)), ((safe_sub_func_int32_t_s_s((p_45 , p_45), (((((safe_div_func_uint16_t_u_u(p_45, p_45)) , g_411) ^ (*****l_368)) , g_412) != l_414))) , (-5L)))) | p_45), l_326, (*****l_365), (****l_369)), p_45)), (*g_107), p_45, &l_55, &l_398);

            ;
            ;
        }

        ;
        ;
        return g_66;


    }
    else
    {
        unsigned l_415 = 0x4884E09EL;
        (*l_93) = (**l_367);
        (*l_329) = (l_415 , (p_45 >= g_83));
    }
    (**l_367) = &g_92;
    l_416 = &g_189;

    ;
    return (*****l_365);
}







static const int * func_46(char p_47, int p_48, unsigned char p_49, unsigned * p_50, unsigned * p_51)
{
    int *l_91 = &g_92;
    (*l_91) = ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(1UL, g_66)), 7)) < 0xC0L);
    return l_91;


}







static const unsigned char func_60(short p_61, int * p_62, const int p_63, char p_64)
{
    int *l_67 = (void*)0;
    int **l_68 = (void*)0;
    int **l_69 = &l_67;
    short *l_80 = &g_66;
    char l_81 = 0xCFL;
    char *l_82 = &l_81;
    int *l_84 = &g_12;
    (*l_69) = l_67;
    g_83 = ((safe_add_func_int16_t_s_s(g_57, ((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((p_64 , (g_57 > (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(((*l_80) = p_61), p_61)), 7)))), (p_61 == (((*l_82) = ((((g_34 & l_81) && p_61) , p_64) , l_81)) ^ 0x16L)))), 0L)) & 0xF2AEL))) < g_7);
    (*l_69) = l_84;

    ;
    return (**l_69);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_486, "g_486", print_hash_value);
    transparent_crc(g_729, "g_729", print_hash_value);
    transparent_crc(g_883, "g_883", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
