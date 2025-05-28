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



static int g_7 = 1L;
static unsigned char g_48 = 0x62L;
static int g_67 = 0x64071C19L;
static unsigned char g_78 = 0x57L;
static int g_80 = (-1L);
static int g_87 = (-1L);
static char g_92 = (-1L);
static short g_112 = 5L;
static unsigned g_118 = 8UL;
static unsigned g_120 = 18446744073709551615UL;
static unsigned g_158 = 0x35E97BC7L;
static char *g_164 = &g_92;
static char **g_163 = &g_164;
static char g_172 = 0x7DL;
static unsigned short g_180 = 0UL;
static short g_186 = 2L;
static unsigned g_189 = 0x46356B4AL;
static int *g_218 = &g_80;
static unsigned char g_263 = 0UL;
static unsigned char g_299 = 2UL;
static unsigned *g_326 = &g_118;
static unsigned **g_325 = &g_326;
static unsigned g_366 = 0UL;
static int g_371 = 6L;
static const int *g_397 = &g_67;
static const int **g_396 = &g_397;
static unsigned char *g_399 = &g_299;
static const unsigned char * const *g_411 = (void*)0;
static unsigned short *g_436 = &g_180;
static unsigned short **g_435 = &g_436;
static int *g_516 = &g_371;
static int **g_550 = &g_516;
static int ***g_549 = &g_550;
static unsigned char *g_644 = &g_78;
static char ***g_654 = &g_163;
static unsigned short g_656 = 65527UL;



static char func_1(void);
static int * func_2(int p_3, int * p_4, int * p_5);
static unsigned short func_9(int * p_10, int p_11, unsigned char p_12, int p_13);
static int * func_14(unsigned short p_15, unsigned p_16, int * p_17, short p_18);
static short func_21(unsigned p_22, int * p_23, unsigned p_24, unsigned p_25, int * p_26);
static unsigned func_27(int * p_28, int p_29, int * p_30, int * p_31, unsigned p_32);
static int * func_33(unsigned p_34, short p_35, int p_36, int * p_37, unsigned char p_38);
static unsigned char func_49(unsigned short p_50, unsigned char * p_51);
static unsigned func_56(int * p_57, unsigned p_58, int p_59, unsigned short p_60);
static int * func_61(unsigned p_62, int * const p_63, int * p_64);
static char func_1(void)
{
    int *l_6 = &g_7;
    const int *l_8 = &g_7;
    unsigned char *l_47 = &g_48;
    char *l_113 = &g_92;
    int l_116 = 0x5D92507BL;
    unsigned *l_117 = &g_118;
    unsigned *l_119 = &g_120;
    unsigned short l_126 = 0x63D9L;
    char ***l_652 = &g_163;
    char ****l_653 = (void*)0;
    int *l_655 = (void*)0;
    (**g_549) = func_2((((l_6 == l_8) | func_9(func_14(((safe_sub_func_int16_t_s_s((func_21(((*l_117) = func_27(func_33(((*l_119) = ((*l_117) = ((((safe_add_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s(g_7, ((safe_mul_func_int8_t_s_s((*l_6), (g_7 >= (l_116 = ((*l_8) , (!(safe_mul_func_uint8_t_u_u((((*l_47) = g_7) , func_49((((*l_113) = (((safe_add_func_uint32_t_u_u(((g_48 < (safe_mul_func_int8_t_s_s(((((func_56(func_61((safe_rshift_func_uint16_t_u_s(g_48, g_7)), l_6, &g_7), g_67, (*l_8), (*l_6)) >= 0L) <= g_67) | (*l_8)) < 0xBC84L), 0x64L))) | (*l_8)), g_7)) > g_87) || g_78)) >= g_67), l_47)), 0xBDL)))))))) & (*l_8)))) | g_7) < 0x92890375L), g_7)) > g_67) > g_87) ^ 4294967295UL))), (*l_8), g_7, l_119, (*l_6)), l_126, l_119, &g_87, (*l_8))), l_6, (*l_6), g_67, l_119) <= l_126), g_263)) && (*g_399)), g_263, g_326, g_263), g_263, g_263, g_263)) , (*l_8)), g_326, g_326);


    ;
    ;
    (*l_6) = func_9((((safe_rshift_func_uint8_t_u_u((*g_644), 3)) , (safe_mul_func_uint8_t_u_u(((*g_399) && (((g_654 = l_652) == l_652) == 1L)), (*g_164)))) , l_655), ((g_263 , &g_366) == l_117), g_656, (*l_6));
    (*g_550) = (*g_550);
    return (***g_654);
}







static int * func_2(int p_3, int * p_4, int * p_5)
{
    int l_488 = 1L;
    const unsigned *l_495 = &g_118;
    const unsigned **l_494 = &l_495;
    unsigned char *l_502 = (void*)0;
    int **l_515 = &g_218;
    int l_523 = (-1L);
    unsigned char l_606 = 0x58L;
    short l_643 = 1L;
    if ((*p_5))
    {
        int **l_486 = (void*)0;
        int **l_487 = &g_218;
        unsigned char *l_491 = (void*)0;
        unsigned short **l_497 = (void*)0;
        unsigned char *l_501 = (void*)0;
        if ((safe_mul_func_uint16_t_u_u(((**g_435) = (p_3 <= ((g_120 != (safe_lshift_func_int16_t_s_u(g_92, p_3))) , g_158))), (-8L))))
        {
            return &g_80;


        }
        else
        {
            const unsigned **l_496 = &l_495;
            int l_498 = 0x35AECD1CL;
            (*l_487) = &p_3;

            ;
            for (g_120 = 0; (g_120 != 13); g_120 = safe_add_func_uint32_t_u_u(g_120, 1))
            {
                unsigned char **l_499 = (void*)0;
                unsigned char **l_500 = &l_491;
                (*l_487) = ((((((l_494 == l_496) , l_497) != (func_56(&g_87, (((*g_436) , 0L) == l_498), l_498, (((*l_500) = &g_263) == l_501)) , &g_436)) != (-4L)) && l_498) , (void*)0);

                ;
                ;
            }

            ;
            ;
            (*p_4) = l_498;
        }

        ;
        ;
    }
    else
    {
        int *l_503 = &l_488;
        int **l_504 = (void*)0;
        int **l_505 = (void*)0;
        int **l_506 = &g_218;
        (*l_506) = ((p_3 > (func_27(l_503, l_488, ((*l_506) = (void*)0), func_33((*g_326), g_67, ((safe_lshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(((!(1UL ^ 0xDEL)) , (*l_503)), p_3)), 12)), 5)) | 0xCAF5227BL) , g_366), l_488)) , (*g_397)), &g_80, p_3), (*g_326)) || 0xD9E3L)) , &g_7);

        ;
    }

    ;
    g_516 = ((*l_515) = (void*)0);

    ;
    ;
    for (g_186 = 0; (g_186 < 20); ++g_186)
    {
        unsigned short l_535 = 0x4DB0L;
        int *l_576 = &g_7;
        int l_618 = 1L;
        (*p_5) = 0xC7FCC72EL;
        for (g_299 = 27; (g_299 == 13); g_299--)
        {
            unsigned char l_540 = 0xC5L;
            int ***l_547 = &l_515;
            int *l_647 = &g_67;
            for (g_180 = 5; (g_180 <= 24); ++g_180)
            {
                int *l_524 = &g_7;
                const int ***l_551 = (void*)0;
                int *l_585 = &g_80;
                unsigned l_588 = 0xF32BF1DCL;
            }
        }
    }
    return (*l_515);


}







static unsigned short func_9(int * p_10, int p_11, unsigned char p_12, int p_13)
{
    char **l_482 = &g_164;
    char ***l_483 = &g_163;
    (*l_483) = l_482;
    return p_13;
}







static int * func_14(unsigned short p_15, unsigned p_16, int * p_17, short p_18)
{
    for (g_48 = 3; (g_48 != 55); g_48 = safe_add_func_int32_t_s_s(g_48, 9))
    {
        int **l_477 = (void*)0;
        int **l_478 = &g_218;
        (*l_478) = (void*)0;

        ;
    }


    for (g_67 = 0; (g_67 == (-16)); g_67 = safe_sub_func_uint32_t_u_u(g_67, 4))
    {
        int **l_481 = &g_218;
        (*l_481) = &g_371;

        ;
    }


    return &g_371;


}







static short func_21(unsigned p_22, int * p_23, unsigned p_24, unsigned p_25, int * p_26)
{
    int l_136 = 0x0B13A75CL;
    short *l_137 = (void*)0;
    short *l_138 = (void*)0;
    short *l_139 = &g_112;
    unsigned char *l_140 = (void*)0;
    int *l_141 = &g_7;
    int **l_142 = (void*)0;
    int **l_143 = (void*)0;
    int *l_145 = &g_7;
    int **l_144 = &l_145;
    char ** const *l_214 = &g_163;
    const unsigned char *l_244 = (void*)0;
    const unsigned char **l_243 = &l_244;
    const unsigned char ***l_242 = &l_243;
    const int l_277 = (-1L);
    unsigned short *l_313 = &g_180;
    unsigned short **l_312 = &l_313;
    unsigned *l_317 = &g_189;
    unsigned **l_316 = &l_317;
    char l_356 = 1L;
    int *l_392 = (void*)0;
    short l_427 = (-2L);
    (*p_26) = l_136;
    (*l_144) = (l_141 = &g_7);
    (**l_144) = (*p_23);
    if ((func_56((g_120 , &g_80), ((*l_141) , p_25), (*l_145), p_24) | (((g_120 , (void*)0) != &p_23) >= p_25)))
    {
        char l_148 = 1L;
        int l_162 = 8L;
        unsigned char *l_181 = &g_78;
        unsigned l_187 = 0UL;
        int **l_190 = &l_145;
        char **l_229 = &g_164;
        unsigned *l_282 = (void*)0;
        const unsigned * const l_286 = &g_158;
        if ((*p_26))
        {
            int *l_160 = &l_136;
            if ((*p_23))
            {
                unsigned *l_157 = &g_158;
                int l_159 = 0xE8D53535L;
                const short l_161 = 0L;
                (*l_145) = 0x418DFC5AL;
                (*p_23) = func_56(&g_87, g_112, (&p_24 == (((!l_148) ^ (g_78 = ((safe_mod_func_int32_t_s_s((*p_26), (safe_add_func_uint16_t_u_u((l_162 = (safe_lshift_func_uint16_t_u_u((!(safe_mod_func_uint8_t_u_u(((((*l_157) = 8UL) < (((func_27(((p_22 & ((g_48 , l_159) <= p_22)) , p_26), (*p_23), l_160, &g_80, p_22) , g_87) && 0xB9L) || (-1L))) >= p_24), p_22))), l_161))), 0xBE73L)))) >= g_118))) , &p_24)), l_148);
            }
            else
            {
                (*l_144) = (void*)0;

                ;
            }

            ;
            return g_7;
        }
        else
        {
            char ***l_165 = &g_163;
            unsigned *l_175 = (void*)0;
            unsigned *l_176 = &g_158;
            unsigned short *l_179 = &g_180;
            const unsigned *l_183 = (void*)0;
            const unsigned **l_182 = &l_183;
            int l_184 = 0xFC91578AL;
            short *l_185 = &g_186;
            unsigned *l_188 = &g_189;
            int l_201 = (-7L);
            unsigned char *l_250 = &g_48;
            const unsigned char ***l_253 = &l_243;
            (*l_165) = g_163;
            if ((((*l_188) = (safe_lshift_func_uint16_t_u_s((((*l_185) = (safe_sub_func_int32_t_s_s(((((*l_139) = p_24) , (safe_mul_func_uint8_t_u_u(((((6UL < (-10L)) <= (g_172 != (safe_mod_func_int8_t_s_s((((*l_182) = ((!(0x8637L ^ (((*l_176) = (*l_141)) | func_49(((*l_179) = ((safe_mul_func_uint8_t_u_u(250UL, (g_172 , p_22))) == 0x6274B569L)), l_181)))) , (void*)0)) != (void*)0), g_80)))) , p_22) , p_24), (**g_163)))) , (*p_23)), l_184))) , 0UL), l_187))) != (*l_145)))
            {
                int l_193 = (-6L);
                int *l_200 = &g_67;
                char ***l_228 = &g_163;
                unsigned char *l_260 = (void*)0;
                unsigned char l_301 = 1UL;
                (*l_141) = (-7L);
                (*l_144) = p_23;
                if ((l_190 == ((safe_add_func_int32_t_s_s(l_193, func_56((*l_144), l_193, ((*l_200) = (g_7 < (safe_lshift_func_uint16_t_u_u((((*p_26) = (l_184 = (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(g_92, p_25)) , g_78), l_193)))) >= 0x8D088928L), g_48)))), l_201))) , (void*)0)))
                {
                    unsigned short l_206 = 0x6E3DL;
                    int * const l_207 = &l_184;
                    const char *l_227 = (void*)0;
                    const char **l_226 = &l_227;
                    const char ** const *l_225 = &l_226;
                    (*l_144) = (((g_48 = (safe_lshift_func_uint8_t_u_u((**l_190), 5))) , 0x2D5331A3L) , func_33((**l_190), g_78, ((*l_200) = ((void*)0 == l_145)), func_61(((safe_mul_func_int16_t_s_s(g_78, l_206)) ^ 3L), l_207, p_26), g_189));

                    ;
                    (*l_207) = (**l_144);
                    if ((safe_sub_func_uint32_t_u_u(((((l_193 = ((p_22 ^ ((safe_mul_func_int8_t_s_s((((*p_23) <= 0xFFCB4505L) <= (safe_mul_func_int16_t_s_s((((*g_164) = p_24) || g_80), (((void*)0 == &g_163) > (((((*l_145) = (!l_184)) >= 4294967289UL) == g_87) != 0xA29FBB94L))))), p_25)) & 0xBAD6L)) >= 0UL)) , 0x7FL) , 4294967287UL) != g_180), g_78)))
                    {
                        (*l_190) = p_23;

                        ;
                        (*p_23) = (l_214 == ((*l_141) , &g_163));
                    }
                    else
                    {
                        int **l_217 = &l_145;
                        char **l_230 = &g_164;
                        int **l_234 = (void*)0;
                        int **l_235 = (void*)0;
                        int **l_236 = (void*)0;
                        int **l_237 = &l_141;
                        (*l_217) = func_61((safe_lshift_func_int8_t_s_s(0x8EL, 5)), ((*l_217) = p_23), func_61(((*l_176) = (0xDE83L & (g_180 = g_120))), p_26, (l_184 , &g_7)));

                        ;
                        g_218 = ((*l_217) = &l_193);

                        ;
                        ;
                        (*l_145) = ((l_193 > ((((((safe_lshift_func_uint8_t_u_u((**l_190), ((((**l_190) < (0x0BL < (((safe_mod_func_uint16_t_u_u((**l_190), p_25)) , l_228) == &g_163))) != p_24) , p_24))) , 65531UL) , l_184) | p_22) && (*l_145)) | 255UL)) <= 1L);
                        (*l_237) = (g_218 = (((g_118 , (((*l_176) = (3UL | 0x26C3L)) , l_229)) == l_230) , ((*l_144) = func_33(((*p_23) < (*g_218)), g_92, (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((l_201 = (3UL >= 0xFBB45EB1L)))), (*g_164))), &l_184, g_80))));

                        ;
                        ;
                        ;
                    }

                    ;
                    ;
                    ;
                    p_26 = ((((*l_179) = (l_193 <= ((&g_180 == (g_189 , l_185)) , (((safe_mod_func_int16_t_s_s((((*l_185) = l_193) & (g_7 & (*g_218))), p_25)) == g_78) | p_25)))) >= l_201) , (void*)0);

                    ;
                }
                else
                {
                    const unsigned char ****l_245 = &l_242;
                    int **l_254 = &g_218;
                    int *l_255 = &g_80;
                    unsigned short *l_266 = (void*)0;
                    if ((((*l_176) = (((*l_145) = 0L) > 0x3EDA46FEL)) != ((safe_lshift_func_int8_t_s_u(func_27(func_61((p_22 <= 0x3087L), ((*l_254) = func_61((~func_49((((*l_245) = l_242) != ((l_184 = (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((l_250 == (void*)0), g_118)), (+(safe_rshift_func_int8_t_s_s((**g_163), 6)))))) , l_253)), &g_78)), p_23, (*l_190))), p_26), g_180, &l_201, l_255, l_193), g_112)) , 1L)))
                    {
                        short l_267 = 0xB22DL;
                        int **l_268 = &l_200;
                        l_184 = (g_87 != (safe_mod_func_int8_t_s_s((((*l_141) = (*p_23)) >= (safe_sub_func_int8_t_s_s((4294967291UL >= (+(p_22 < p_25))), (safe_sub_func_int32_t_s_s(g_263, 2L))))), (**g_163))));
                        (**l_190) = (safe_add_func_uint8_t_u_u(g_112, ((***l_228) = (((*l_268) = func_33(p_22, p_22, (((((*g_218) , &g_180) != (g_48 , l_266)) >= (l_267 || (**g_163))) , p_24), (*l_254), g_172)) == &g_67))));

                        ;
                    }
                    else
                    {
                        unsigned l_278 = 0x42314006L;
                        unsigned **l_279 = (void*)0;
                        unsigned *l_281 = &g_120;
                        unsigned **l_280 = &l_281;
                        unsigned **l_283 = &l_176;
                        unsigned **l_284 = (void*)0;
                        unsigned **l_285 = &l_188;
                        (*l_254) = (((((*l_285) = ((*l_283) = func_61(((**l_254) || (p_22 < ((func_56(p_23, ((*g_164) == (((((safe_add_func_int16_t_s_s(((*l_139) = (safe_add_func_uint16_t_u_u(l_184, ((*l_179) = g_189)))), p_22)) & (((*l_280) = func_33(((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((&g_186 != &g_186), l_277)), (-2L))) , p_25), g_7, (*l_145), &g_87, l_278)) == l_282)) & g_87) , 0x31L) , g_87)), g_67, p_25) > p_22) , l_278))), &g_7, &g_87))) == l_286) , p_24) , p_23);

                        ;
                        ;
                        ;
                        (*p_26) = (*g_218);
                        (*l_144) = p_26;

                        ;
                    }

                    ;
                    ;
                    ;
                    ;
                    ;
                    for (g_172 = 0; (g_172 != 27); g_172++)
                    {
                        unsigned *l_289 = &l_187;
                        unsigned char *l_294 = &g_48;
                        int l_300 = (-8L);
                        unsigned short ***l_314 = (void*)0;
                        unsigned short ***l_315 = &l_312;
                        p_26 = func_33(((*l_289) = 0xE72F24C6L), (((*l_181) = ((safe_mod_func_int32_t_s_s(((g_120 , (**g_163)) , ((*p_23) = ((safe_mul_func_uint16_t_u_u(func_49(g_80, l_294), (((*p_26) ^ (safe_rshift_func_uint16_t_u_u((~((0L & (safe_mod_func_uint32_t_u_u(g_299, (-7L)))) != l_300)), g_263))) && l_193))) , (*p_26)))), l_301)) ^ (**g_163))) | 0x92L), p_24, p_23, p_24);

                        ;
                        (*l_190) = func_33((safe_add_func_int16_t_s_s(p_24, (*l_141))), (safe_add_func_int32_t_s_s((g_80 < (((-1L) ^ g_87) && (safe_add_func_uint8_t_u_u(249UL, ((+(safe_mul_func_uint16_t_u_u(((((safe_add_func_uint8_t_u_u((0xE9B1BF55L || p_25), 0L)) <= 0x35L) | 0x13BFL) == 0xD2587FE9L), p_22))) | 0xBFA4L))))), l_300)), p_22, &l_201, p_25);

                        ;
                        (*l_315) = l_312;
                    }

                    ;
                    ;
                    if ((((void*)0 == l_316) == 0xEF0FF016L))
                    {
                        unsigned * const l_324 = (void*)0;
                        unsigned * const *l_323 = &l_324;
                        unsigned * const **l_322 = &l_323;
                        int l_327 = 0xB4E3854AL;
                        g_218 = (p_25 , &g_80);

                        ;
                        l_184 = (*p_26);
                        p_23 = (func_56((*l_190), (safe_add_func_uint16_t_u_u(((**l_312) = 3UL), 2L)), (**l_254), (p_22 , (((safe_mod_func_uint32_t_u_u(((l_327 = (((*l_322) = &l_282) != g_325)) < ((((1L > (safe_rshift_func_int8_t_s_s((((*p_23) = (*g_218)) && 0xDD971F16L), (**g_163)))) , p_24) , (*l_316)) == l_255)), 0x39FA897BL)) > 4294967295UL) || 0x9D2EL))) , p_26);

                        ;
                        ;
                    }
                    else
                    {
                        return p_24;
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
            }
            else
            {
                unsigned l_330 = 18446744073709551615UL;
                unsigned short **l_331 = &l_179;
                unsigned short ***l_332 = &l_312;
                (*l_141) = l_330;
                (*p_26) = (*p_23);
                (*l_190) = p_23;
                (*l_332) = l_331;

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
            (*l_190) = func_61((((**l_190) , 0xA6D7L) && (**l_144)), &g_80, &g_87);

            ;
            return p_25;


        }
    }
    else
    {
        unsigned char *l_343 = &g_78;
        int l_344 = (-10L);
        int l_378 = 3L;
        const unsigned * const l_383 = &g_118;
        const unsigned short *** const l_441 = (void*)0;
        unsigned **l_469 = &g_326;
        unsigned ***l_470 = &l_469;
        unsigned **l_471 = (void*)0;
        unsigned ***l_472 = &g_325;
        unsigned *l_473 = (void*)0;
        unsigned *l_474 = &g_366;
        if ((safe_add_func_uint16_t_u_u(g_263, (safe_add_func_uint32_t_u_u(g_92, ((((p_25 < ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(1L, (func_56(&g_80, ((p_22 , ((*l_145) = (safe_mul_func_uint8_t_u_u((((*l_343) = func_49(p_25, &g_263)) < 0xC0L), g_7)))) | p_22), g_186, l_344) != l_344))), p_25)) == p_25)) == 0xF140DDB9L) || 65526UL) , 0x0FC66B71L))))))
        {
            int ***l_347 = &l_143;
            short l_365 = (-1L);
            int *l_384 = &g_80;
            int l_415 = 7L;
            (*l_141) = ((safe_lshift_func_int16_t_s_u(((0x73L > (p_25 , (*l_141))) , ((0L >= l_344) , ((*g_164) == p_25))), l_344)) < (*g_218));
            for (p_22 = 0; (p_22 > 30); p_22 = safe_add_func_uint16_t_u_u(p_22, 1))
            {
                unsigned char *l_362 = &g_78;
                int l_363 = (-1L);
                unsigned short *l_406 = &g_180;
                int l_407 = 0L;
                const short l_410 = 0xC0D9L;
                if (((void*)0 == (*g_325)))
                {
                    unsigned char l_361 = 0xECL;
                    if ((*g_218))
                    {
                        (**l_144) = (*g_218);
                    }
                    else
                    {
                        int l_364 = 6L;
                        (*l_144) = func_33((((*l_343) = ((((*l_139) = (-9L)) , (((l_356 != ((*g_164) = (((*g_326) = (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(func_49(((*l_313) = l_361), l_362), (*l_141))), (g_189 | (g_366 = ((g_67 = func_27(((((l_364 && l_361) && p_25) == 1L) , (*l_144)), (*p_23), p_26, &g_80, p_22)) , l_365)))))) , l_361))) || 4294967289UL) && l_363)) ^ p_22)) >= 0L), l_344, p_24, &g_87, g_120);

                        ;
                        (*p_26) = (p_25 > (l_364 < (safe_add_func_int16_t_s_s(((**l_144) == (p_25 | g_158)), func_49(g_189, &l_361)))));
                        return p_25;
                    }
                }
                else
                {
                    (*l_144) = func_33(p_24, p_25, p_24, (g_218 = func_61(((safe_lshift_func_int16_t_s_s(p_24, ((*l_139) = 0xF3CDL))) > ((l_344 = (g_371 | (safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((0UL == (func_49(l_344, &g_263) > 4294967295UL)), 4)), (-7L))), (**g_163))))) | 5UL)), &g_87, p_26)), l_378);

                    ;
                    if ((*p_26))
                        continue;
                    for (l_136 = (-11); (l_136 == 0); ++l_136)
                    {
                        p_26 = p_23;

                        ;
                        (*g_218) = (*p_26);
                        (*g_218) = 8L;
                    }
                }
                if (func_56(&g_371, p_24, ((l_363 | (((safe_sub_func_int8_t_s_s(p_24, ((((*g_325) == l_383) , l_344) , g_366))) , (((**l_312) = func_56(l_384, g_118, l_344, g_112)) < 0L)) , 0xD59CC582L)) == 9L), g_48))
                {
                    short l_391 = 0xDD83L;
                    int *l_393 = &g_7;
                    (*g_218) = (*p_23);
                    (**l_144) = (0xA6224B25L != (~(safe_mod_func_uint32_t_u_u(l_363, ((**g_163) | ((safe_add_func_uint8_t_u_u(g_7, (func_27(&g_371, ((safe_lshift_func_uint8_t_u_u((l_391 == (g_67 || (l_391 < (*g_218)))), g_7)) < p_24), l_393, &g_371, p_24) > g_189))) || 1L))))));
                }
                else
                {
                    unsigned char *l_398 = (void*)0;
                    int *l_405 = (void*)0;
                    int **l_404 = &l_405;
                    int l_408 = 1L;
                    const unsigned char * const **l_412 = &g_411;
                    if (l_363)
                        break;
                    for (l_363 = (-11); (l_363 != 22); ++l_363)
                    {
                        l_344 = (!((*g_218) = (*p_23)));
                    }
                    (*l_144) = func_33(((((safe_sub_func_uint8_t_u_u((l_363 = p_24), func_56(&g_80, (0xB20481DEL >= ((safe_sub_func_int16_t_s_s((&g_180 != ((((*l_404) = (g_67 , &g_67)) == p_26) , l_406)), p_24)) >= (*g_164))), l_407, g_186))) ^ 253UL) < 1L) >= l_408), g_118, p_24, &g_7, (*g_399));

                    ;
                    ;
                    l_363 = func_56(&l_407, (g_80 , ((!(((*g_218) , (safe_unary_minus_func_int16_t_s(l_410))) < func_49((((*l_412) = ((&g_87 != p_26) , g_411)) == (((**g_163) >= (safe_mod_func_int16_t_s_s(((l_415 , g_180) ^ 1UL), 0x965BL))) , (*l_242))), &g_78))) >= (**g_163))), (**g_396), l_407);
                }
                if ((*p_23))
                    break;
            }

            ;
            ;
            ;
            for (g_118 = 27; (g_118 < 17); g_118--)
            {
                int *l_420 = &g_87;
                unsigned l_434 = 0UL;
                if (((*l_141) = func_27(&l_344, (g_158 , ((((l_378 | (safe_mul_func_int8_t_s_s((*g_164), ((*g_399) = (*g_399))))) , (((~p_25) == p_25) <= g_118)) > 0xC0619C78L) & (-1L))), p_26, l_420, (*g_326))))
                {
                    (**l_144) = (*g_218);
                    (*g_218) = ((*l_420) != 0xE7L);
                }
                else
                {
                    if ((*l_384))
                        break;
                    (*p_23) = (*g_218);
                    (*l_144) = (void*)0;

                    ;
                }

                ;
                (*l_144) = ((*g_218) , l_420);

                ;
                (*l_384) = ((((**l_316) = g_92) , ((p_22 , ((safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_22, 1)), (1L != ((((*l_343) = p_24) ^ func_27((p_23 = func_61((l_427 , ((*l_141) >= 0xA9EE565BL)), &g_7, &g_87)), (*p_26), p_26, l_420, (**g_325))) ^ 0xC5E0L)))) , (-4L)), l_378)) , 0x1FCFL)) | (-7L))) != g_67);

                ;
                (*g_218) = (((p_25 != ((*l_384) , func_27(l_420, (l_378 >= ((safe_mul_func_uint8_t_u_u((((g_67 = ((*l_384) = func_56((((**l_312) = ((safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(p_24, g_92)), 2)) ^ l_344)) , func_61(p_25, p_23, &g_87)), l_434, (**l_144), g_172))) , &p_22) == &p_22), p_25)) || p_25)), &g_87, l_420, p_25))) , g_435) != &l_313);
            }

            ;
            ;
        }
        else
        {
            unsigned l_437 = 0x515674DFL;
            const int *l_440 = (void*)0;
            (*l_144) = &g_80;

            ;
            l_437 = (*p_23);
            (*g_218) = 8L;
            (**l_144) = ((safe_rshift_func_int8_t_s_u(((l_440 != ((p_22 < (((((p_22 , g_67) , &l_312) != l_441) <= (p_24 ^ (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(0xEEDAL, (((p_22 > 0x56L) != 4UL) != (**g_163)))), p_24)), (**g_435))))) <= p_22)) , p_23)) <= (*g_164)), 2)) != 0x6F50L);
        }

        ;
        ;
        ;
        ;
        if ((*p_23))
        {
            char l_456 = 0xDCL;
            (*l_145) = (safe_add_func_int8_t_s_s((*g_164), (safe_sub_func_uint32_t_u_u(p_24, ((p_24 == ((*g_436) = (*g_436))) , (*g_218))))));
        }
        else
        {
            (*g_218) = (-1L);
        }
        (*l_144) = func_61(((((func_56((g_218 = func_61(((safe_lshift_func_int8_t_s_s(p_24, ((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_22, (l_378 != (l_214 != &g_163)))), (safe_sub_func_uint32_t_u_u((((g_158 = ((*l_474) = (safe_add_func_uint8_t_u_u(((*l_343) = ((*g_164) | ((((**l_312) = ((safe_mod_func_uint16_t_u_u((((**l_316) = (&g_326 != ((*l_470) = l_469))) == (((*l_472) = l_471) == (void*)0)), p_22)) <= (*l_145))) > g_263) < 0xC9L))), p_25)))) || g_366) | (**l_144)), (*g_218))))) <= (**l_144)))) , 0x5990F09FL), p_23, p_23)), (*l_141), (*l_145), l_378) < p_25) , (**l_144)) != g_299) , p_25), p_26, &g_7);

        ;
        ;
        ;
        (*p_23) = (-5L);
    }

    ;
    ;
    ;
    ;
    return g_180;
}







static unsigned func_27(int * p_28, int p_29, int * p_30, int * p_31, unsigned p_32)
{
    unsigned l_131 = 18446744073709551610UL;
    int *l_133 = &g_80;
    int **l_132 = &l_133;
    (*p_31) = (((safe_lshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(g_87, (l_131 = 1L))) != g_87), 7)) ^ p_32) > g_112);
    (*l_132) = &p_29;

    ;
    return g_87;
}







static int * func_33(unsigned p_34, short p_35, int p_36, int * p_37, unsigned char p_38)
{
    unsigned char * const l_122 = &g_78;
    unsigned char * const *l_121 = &l_122;
    unsigned char * const **l_123 = &l_121;
    int *l_125 = &g_87;
    int **l_124 = &l_125;
    (*l_123) = l_121;
    (*l_124) = func_61(p_36, p_37, &g_80);

    ;
    return p_37;


}







static unsigned char func_49(unsigned short p_50, unsigned char * p_51)
{
    int *l_115 = (void*)0;
    int **l_114 = &l_115;
    (*l_114) = &g_7;

    ;
    return (*p_51);
}







static unsigned func_56(int * p_57, unsigned p_58, int p_59, unsigned short p_60)
{
    unsigned l_72 = 0UL;
    int *l_75 = &g_7;
    int **l_76 = &l_75;
    unsigned char *l_77 = &g_78;
    int *l_79 = &g_80;
    short l_109 = 0xB31BL;
    char l_110 = 0x45L;
    short *l_111 = &g_112;
    (*l_79) = (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(l_72, ((*l_77) = (safe_sub_func_uint16_t_u_u((((*l_76) = l_75) == &g_7), p_59))))), 0x05F61CA7L));
    for (p_58 = 0; (p_58 < 35); p_58 = safe_add_func_uint8_t_u_u(p_58, 6))
    {
        char *l_90 = (void*)0;
        char *l_91 = &g_92;
        unsigned *l_93 = &l_72;
        int l_94 = 0xEAF53593L;
    }
    (*l_79) = (0x7DL && ((safe_lshift_func_int16_t_s_s(g_87, (safe_sub_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((-1L), (safe_lshift_func_int8_t_s_s(0x30L, (((*l_77) = (*l_79)) && p_59))))), (safe_lshift_func_uint8_t_u_s((((l_109 , l_110) == ((*l_111) = 0x7944L)) && p_59), (*l_75))))), (-1L))) | 0xB8L), 0xE06D3C1DL)))) >= 3UL));
    return p_59;
}







static int * func_61(unsigned p_62, int * const p_63, int * p_64)
{
    return p_64;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
