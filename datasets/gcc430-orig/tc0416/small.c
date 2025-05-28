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



static int g_24 = 0xF4F823AAL;
static char g_45 = (-8L);
static volatile int g_49 = (-1L);
static volatile int *g_48 = &g_49;
static volatile int **g_47 = &g_48;
static unsigned g_51 = 0x9E96BB64L;
static unsigned g_63 = 0x5BFEB1ECL;
static short g_73 = 6L;
static volatile short g_76 = 0xB704L;
static volatile short * volatile g_75 = &g_76;
static volatile short * volatile *g_74 = &g_75;
static volatile short * volatile ** volatile g_77 = &g_74;
static short g_80 = 0x79ABL;
static char g_119 = 1L;
static char g_120 = 0xBDL;
static unsigned short g_137 = 0x97C0L;
static unsigned char g_176 = 0xF3L;
static volatile int *** volatile g_209 = &g_47;
static int *g_235 = &g_24;
static int ** volatile g_234 = &g_235;
static int ** volatile g_236 = &g_235;
static int ** volatile g_239 = &g_235;
static unsigned *g_249 = &g_63;
static unsigned **g_248 = &g_249;
static unsigned *** volatile g_247 = &g_248;
static unsigned short g_277 = 0x37A9L;
static unsigned char g_345 = 253UL;
static unsigned short *g_347 = &g_277;
static unsigned short * volatile *g_346 = &g_347;
static int ** volatile g_362 = &g_235;
static char *g_410 = (void*)0;
static char ** volatile g_409 = &g_410;
static char g_465 = 0L;
static int ** volatile g_509 = (void*)0;
static unsigned short g_523 = 0UL;
static short g_524 = 1L;
static int ** volatile g_527 = &g_235;
static int ** volatile g_529 = (void*)0;
static int ** volatile g_533 = &g_235;
static int g_537 = (-3L);
static int g_554 = (-8L);
static int *g_553 = &g_554;
static int g_588 = 0x90295D12L;



static unsigned func_1(void);
static int * func_2(int p_3, int p_4, int * p_5);
static int func_6(char p_7, short p_8, int * p_9, char p_10, int * p_11);
static int func_12(unsigned char p_13);
static int func_14(unsigned short p_15, int * p_16);
static int * func_18(int * p_19, int * p_20);
static int * func_21(unsigned short p_22);
static int func_31(int * p_32);
static int func_34(int p_35, unsigned char p_36, int p_37);
static int func_38(unsigned p_39, int p_40);
static unsigned func_1(void)
{
    char l_17 = 0x1EL;
    int *l_26 = (void*)0;
    int **l_25 = &l_26;
    int **l_27 = (void*)0;
    int *l_29 = &g_24;
    int **l_28 = &l_29;
    int *l_30 = (void*)0;
    unsigned short l_552 = 65535UL;
    (*l_28) = ((*l_25) = func_2(func_6((func_12((((func_14(l_17, func_18(((*l_28) = ((*l_25) = func_21(l_17))), l_30)) && (**l_25)) > func_38(g_524, ((g_465 <= 255UL) || (-1L)))) | 0L)) & l_552), g_524, g_553, g_465, &g_554), g_524, g_553));
    return g_80;
}







static int * func_2(int p_3, int p_4, int * p_5)
{
    int **l_568 = &g_235;
    char *l_569 = &g_119;
    unsigned *l_586 = &g_51;
    unsigned char *l_587 = &g_345;
    char ***l_589 = (void*)0;
    char **l_590 = &g_410;
    (*l_568) = (*g_234);
    (**g_527) |= ((((*l_569) = p_3) ^ p_3) && (*p_5));
    g_588 &= (safe_sub_func_uint16_t_u_u(((*g_77) == (void*)0), ((safe_mod_func_int16_t_s_s(1L, ((safe_mod_func_uint8_t_u_u(g_465, (g_120 & (safe_mul_func_uint8_t_u_u(((*l_587) = func_38(((*l_586) = (safe_mod_func_uint8_t_u_u(0UL, (safe_mul_func_int8_t_s_s((~((((void*)0 != &g_346) == (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s(p_4, 6)) < (**l_568)), p_3))) ^ (*g_347))), 0x18L))))), (*g_553))), g_137))))) | g_137))) < 6L)));
    (*g_48) = (**g_234);
    return (*g_533);
}







static int func_6(char p_7, short p_8, int * p_9, char p_10, int * p_11)
{
    int *l_555 = &g_24;
    int l_556 = 0x4047B913L;
    char *l_567 = &g_119;
    p_11 = p_11;
    (*p_11) = (0UL <= (***g_77));
    l_555 = p_9;
    (*g_235) ^= ((*l_555) = ((l_556 > ((*l_555) ^ (safe_add_func_uint8_t_u_u((0xCF5DL >= (~(safe_mul_func_int16_t_s_s(1L, ((**g_346) || (p_8 = ((safe_sub_func_int32_t_s_s((g_176 > 0x02L), ((0xEBL < ((*l_567) = (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((*l_555), (*p_11))), (*l_555))))) == (*l_555)))) | (*l_555)))))))), g_49)))) < p_7));
    return (*p_9);
}







static int func_12(unsigned char p_13)
{
    int *l_532 = &g_24;
    int *l_536 = &g_537;
    int *l_539 = &g_537;
    int **l_538 = &l_539;
    unsigned char *l_546 = &g_176;
    char **l_551 = &g_410;
    (*g_533) = l_532;
    (*l_532) = func_34((*l_532), ((*l_546) = func_38(g_49, (safe_sub_func_uint16_t_u_u((*l_532), (((l_536 = g_235) != ((*l_538) = l_532)) == ((safe_rshift_func_int8_t_s_u(p_13, 1)) > (safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u((*g_347), g_120)), func_38(p_13, (*g_235)))))))))), p_13);
    for (g_345 = (-12); (g_345 > 10); g_345 = safe_add_func_int32_t_s_s(g_345, 2))
    {
        char **l_550 = &g_410;
        char ***l_549 = &l_550;
        if (p_13)
            break;
        (*g_235) &= p_13;
        (*g_235) = (((*l_549) = &g_410) == l_551);
    }
    (*l_532) = (**g_239);
    return (**g_239);
}







static int func_14(unsigned short p_15, int * p_16)
{
    char l_424 = 0x6EL;
    char *l_433 = &g_120;
    int *l_434 = &g_24;
    int l_435 = 2L;
    char *l_436 = (void*)0;
    int l_437 = 0x90C7C571L;
    char *l_438 = &l_424;
    unsigned l_439 = 0x242E5649L;
    short *l_444 = (void*)0;
    short **l_443 = &l_444;
    short ***l_442 = &l_443;
    unsigned l_452 = 5UL;
    unsigned *l_471 = &g_51;
    int l_473 = 0L;
    char ***l_476 = (void*)0;
    int l_487 = 0L;
    unsigned ***l_501 = &g_248;
    unsigned short **l_513 = &g_347;
    unsigned l_528 = 0x981BDBA1L;
    (*g_48) |= 0x75FBCA4FL;
    if (((*l_434) = (+func_34(((((*l_438) = (+(+(l_437 &= (l_435 = (safe_lshift_func_uint16_t_u_s((((p_15 >= l_424) > ((safe_add_func_int16_t_s_s(0xEEEAL, (~p_15))) & (safe_mod_func_uint8_t_u_u(((((g_45 ^ (safe_add_func_int32_t_s_s(((*l_434) = (l_424 > (((*l_433) |= (safe_mul_func_uint8_t_u_u(p_15, 0xB0L))) >= ((9L >= (-1L)) == (*g_48))))), p_15))) >= p_15) > p_15) ^ 0xFDL), g_51)))) && (*l_434)), p_15))))))) < 1UL) <= p_15), g_119, l_439))))
    {
        char l_449 = 0L;
        int l_450 = 8L;
        int *l_451 = &l_437;
        unsigned char l_453 = 0x86L;
        short *l_454 = &g_73;
        unsigned char l_456 = 1UL;
        unsigned l_494 = 0x6428539DL;
        int *l_500 = &l_435;
        char **l_505 = &g_410;
        char ***l_504 = &l_505;
        unsigned char *l_521 = &l_456;
        unsigned short *l_522 = &g_523;
        l_434 = p_16;
        if ((safe_mul_func_uint16_t_u_u((**g_346), ((l_442 == (void*)0) > ((*l_451) = ((l_450 ^= (safe_sub_func_int16_t_s_s(((!func_31(func_21((safe_rshift_func_int8_t_s_s((l_449 | (p_15 && ((*g_249) | p_15))), l_439))))) | 0x4656B053L), (-3L)))) < l_449))))))
        {
            short l_455 = 0x33FAL;
            (*l_451) = (&g_234 != (void*)0);
            (**g_47) |= (((l_452 | l_453) != p_15) == (p_15 || (l_454 == ((*l_443) = &g_73))));
            (*l_451) ^= l_455;
            (**g_47) = (l_456 == p_15);
        }
        else
        {
            unsigned l_479 = 0x4F18C485L;
            int l_499 = 0xAF70949FL;
            char ***l_506 = &l_505;
            for (g_120 = 0; (g_120 != (-5)); g_120--)
            {
                int *l_468 = &l_435;
                unsigned *l_470 = &g_51;
                unsigned **l_469 = &l_470;
                int **l_472 = &l_468;
                (*g_48) = (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((*g_48), (((*l_451) ^= ((safe_add_func_int32_t_s_s((+(g_45 < 0UL)), g_465)) || p_15)) != (((*l_469) = func_21((safe_add_func_int32_t_s_s(((*l_468) = 0x162A7C49L), p_15)))) == (l_471 = &g_51))))), 13));
                (*l_472) = p_16;
                if (l_473)
                    continue;
                if (((*l_451) & (3UL < (1UL < 1L))))
                {
                    int l_480 = (-1L);
                    (*g_48) &= 0xD4B7D85DL;
                    p_16 = p_16;
                    for (g_63 = 0; (g_63 == 56); g_63++)
                    {
                        (*g_48) = ((*l_451) = ((p_15 | (&g_409 == l_476)) <= (safe_rshift_func_uint8_t_u_s(g_120, (func_38(l_479, (255UL && 1UL)) ^ l_480)))));
                        (**g_47) = (safe_sub_func_uint32_t_u_u((0x4B684BF2L < ((*g_249) || 0x9400A60BL)), (safe_add_func_int8_t_s_s((0x6CAEL || (safe_lshift_func_int16_t_s_s((~p_15), p_15))), l_487))));
                        (*g_48) |= (p_15 == l_437);
                    }
                }
                else
                {
                    short l_490 = (-2L);
                    int *l_491 = &l_487;
                    (*l_451) = (safe_sub_func_uint16_t_u_u(p_15, func_34(((*l_491) = l_490), (*l_451), (*l_451))));
                    (*l_451) = l_490;
                    (*g_48) = (safe_lshift_func_uint8_t_u_u(g_49, 7));
                    l_499 ^= (((l_494 &= p_15) < ((+g_176) | ((safe_sub_func_int16_t_s_s((*g_75), (l_490 || 0xA2DC8A22L))) || (7UL ^ (p_15 > 0xD9L))))) <= func_38(g_137, p_15));
                }
            }
            (*g_236) = l_500;
            (*l_451) &= (l_501 != l_501);
            if ((1L >= (~(((*l_451) > p_15) == (safe_add_func_uint16_t_u_u((l_504 != l_506), 0x53E9L))))))
            {
                for (l_456 = 6; (l_456 > 55); ++l_456)
                {
                    int **l_510 = &g_235;
                    (*l_510) = (*g_234);
                    (*l_510) = (*g_362);
                    (*g_48) ^= (safe_rshift_func_int8_t_s_s((-1L), 5));
                }
            }
            else
            {
                (*g_235) ^= ((void*)0 != l_513);
                if ((*l_451))
                {
                    return p_15;
                }
                else
                {
                    int *l_514 = &l_437;
                    (*g_239) = l_514;
                }
                (**g_236) ^= 0x42A80D64L;
            }
        }
        (**g_47) &= 0xA35A31E5L;
        (**g_47) = (safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_137, ((*l_521) = (safe_rshift_func_uint16_t_u_u((*g_347), 2))))), (((*l_522) |= (*l_500)) | (p_16 != ((*g_248) = func_21(g_524))))));
    }
    else
    {
        int *l_525 = (void*)0;
        int *l_526 = &g_24;
        int **l_530 = (void*)0;
        int **l_531 = (void*)0;
        (*g_527) = l_526;
        p_16 = func_18(func_21(((**l_513) = l_528)), p_16);
    }
    (**g_47) &= l_424;
    (*g_48) |= 0xC8DF442AL;
    return p_15;
}







static int * func_18(int * p_19, int * p_20)
{
    int *l_33 = (void*)0;
    int l_81 = 0x86DF497AL;
    unsigned l_97 = 0x6DA6125FL;
    short *l_100 = &g_73;
    char l_127 = 0xC0L;
    int l_129 = 0xEB90776CL;
    unsigned char l_199 = 3UL;
    unsigned short **l_232 = (void*)0;
    short l_243 = 0x9CF4L;
    unsigned ***l_352 = &g_248;
    int l_375 = 0xB076AC92L;
    int **l_380 = &g_235;
    int *l_421 = (void*)0;
    (*p_19) = (((0xFEL >= (func_31(l_33) < g_80)) > g_80) < l_81);
    for (g_73 = (-6); (g_73 == (-6)); g_73 = safe_add_func_uint32_t_u_u(g_73, 8))
    {
        unsigned l_93 = 0UL;
        short **l_113 = &l_100;
        for (g_51 = 0; (g_51 >= 12); g_51 = safe_add_func_int16_t_s_s(g_51, 6))
        {
            unsigned l_92 = 0x60F1475AL;
            for (g_63 = 16; (g_63 <= 60); g_63 = safe_add_func_uint16_t_u_u(g_63, 4))
            {
                int l_96 = 0xD4DC4505L;
                short **l_114 = (void*)0;
                for (g_80 = 0; (g_80 <= 3); g_80 = safe_add_func_int8_t_s_s(g_80, 6))
                {
                    int *l_101 = &l_81;
                    char *l_104 = &g_45;
                    char **l_103 = &l_104;
                    char ***l_102 = &l_103;
                    unsigned l_110 = 0xD6CD47B9L;
                    (*l_101) ^= ((((safe_mul_func_int16_t_s_s(l_92, l_93)) <= ((((((safe_sub_func_uint16_t_u_u((l_97 = l_96), (safe_add_func_int16_t_s_s(func_38(g_24, (*p_19)), ((**g_77) != l_100))))) ^ g_24) & l_92) < g_24) <= 65535UL) | (-1L))) ^ (*p_19)) && l_93);
                    (*l_102) = (void*)0;
                    for (l_93 = 11; (l_93 == 1); l_93--)
                    {
                        int *l_109 = (void*)0;
                        l_81 ^= (safe_sub_func_uint8_t_u_u((((void*)0 != l_109) & (*p_19)), g_76));
                        if (l_110)
                            continue;
                    }
                    (*l_101) ^= (**g_47);
                }
                for (g_24 = 0; (g_24 <= 7); g_24 = safe_add_func_uint32_t_u_u(g_24, 3))
                {
                    short ***l_115 = &l_114;
                    int l_118 = (-1L);
                    g_120 &= (((l_113 != ((*l_115) = l_114)) && g_45) == ((safe_rshift_func_uint8_t_u_u((g_119 |= l_118), g_76)) == 0x3EB3L));
                    if ((**g_47))
                        break;
                }
            }
        }
        (*p_19) ^= (**g_47);
        if ((**g_47))
            break;
    }
    for (g_73 = 0; (g_73 > (-8)); --g_73)
    {
        int l_128 = 0x804CE6FAL;
        unsigned *l_183 = &l_97;
        int l_202 = 6L;
        int l_226 = 0x4866C570L;
        l_128 = (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_127, 1)), (l_128 <= 0x39A15FBEL)));
        if ((l_100 == (void*)0))
        {
            unsigned l_134 = 1UL;
            short l_171 = 0x7E50L;
            (**g_47) = (**g_47);
            if ((((*p_19) = (*p_19)) | ((*g_75) ^ l_128)))
            {
                (**g_47) = (*p_19);
            }
            else
            {
                int l_135 = 4L;
                unsigned short *l_136 = &g_137;
                int **l_138 = &l_33;
                char *l_146 = &g_120;
                l_129 = ((void*)0 == (*g_77));
                (*l_138) = func_21(((*l_136) = ((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(l_134, 0x3385L)), (1L & 1UL))) || l_135)));
                for (g_119 = 0; (g_119 > (-18)); --g_119)
                {
                    unsigned l_162 = 0x9EBF9289L;
                    int l_165 = 0L;
                    for (g_63 = (-9); (g_63 != 49); g_63++)
                    {
                        unsigned *l_143 = &l_97;
                        short **l_150 = (void*)0;
                        short ***l_149 = &l_150;
                        int l_151 = 1L;
                        (**g_47) = ((*p_19) |= func_38(((void*)0 == l_143), (*g_48)));
                        (*l_138) = func_21((g_137 = ((g_76 ^ ((((g_119 < (~g_137)) != g_63) || (((void*)0 == l_146) || (l_128 ^= (safe_lshift_func_uint16_t_u_u(((void*)0 != l_149), l_151))))) <= 0x41L)) != l_134)));
                    }
                    l_165 &= (((**l_138) = (65531UL < (((safe_lshift_func_int16_t_s_s(((g_49 <= ((-1L) && (safe_add_func_int8_t_s_s(((*l_146) = ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((void*)0 == p_20), g_80)), ((*l_136) = l_162))) || (safe_sub_func_uint32_t_u_u((g_45 || func_38(g_119, (*p_19))), l_134))), 1)) != l_162)), (**l_138))))) < 0x98L), 12)) & g_63) != 7L))) != 0UL);
                }
                if ((**l_138))
                {
                    unsigned short l_166 = 0xA4DFL;
                    (**l_138) = (1L < ((*p_19) < (l_166 && (safe_add_func_uint16_t_u_u(((*l_136) = (**l_138)), (*g_75))))));
                    for (g_51 = (-22); (g_51 != 54); g_51 = safe_add_func_uint8_t_u_u(g_51, 3))
                    {
                        return &g_24;
                    }
                    (*l_138) = func_21(l_171);
                }
                else
                {
                    char **l_173 = &l_146;
                    char ***l_172 = &l_173;
                    int l_174 = 0x4EFEA996L;
                    unsigned char *l_175 = &g_176;
                    int l_198 = 0L;
                    if ((((l_172 != (void*)0) <= func_38((&l_171 != l_136), ((*p_19) = (((**l_173) = l_174) == ((*l_175) = l_128))))) == 65535UL))
                    {
                        unsigned l_179 = 18446744073709551609UL;
                        int *l_180 = &l_81;
                        (*l_180) |= ((**l_138) && ((((&g_48 != &p_20) > l_174) ^ func_38(g_119, l_128)) || ((((safe_lshift_func_int8_t_s_s(func_38((((0xB3L > l_179) | 0x86L) == 1UL), (**g_47)), 1)) > 0x59A5490CL) >= (-1L)) == (-1L))));
                        (**g_47) = (safe_mul_func_int16_t_s_s((func_38((**l_138), (*g_48)) == ((((*l_175) = (g_51 && l_128)) != ((l_183 = l_183) == &g_63)) ^ (safe_mod_func_uint16_t_u_u((*l_33), func_38(g_119, l_174))))), l_171));
                        p_20 = (void*)0;
                    }
                    else
                    {
                        int l_192 = 0xD16D1803L;
                        short *l_193 = &l_171;
                        int *l_200 = (void*)0;
                        int *l_201 = &l_135;
                        (*p_19) = (safe_rshift_func_int16_t_s_u((func_38(((safe_mod_func_uint16_t_u_u((((((*l_33) = 0x02C9C021L) != (func_38(l_128, (l_202 ^= ((*l_201) |= (safe_mod_func_uint8_t_u_u((((((*l_193) &= l_192) || (l_128 ^ ((safe_sub_func_uint8_t_u_u(g_137, (safe_add_func_uint16_t_u_u(((l_174 &= 0x8D0BL) | func_38(l_198, (*g_48))), l_198)))) <= g_80))) < l_192) <= 1UL), l_199))))) >= l_198)) > g_120) <= g_137), g_119)) | g_80), g_137) > g_176), 15));
                        (*l_138) = func_21((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(g_176, (safe_mul_func_uint8_t_u_u(0xE7L, (*l_33))))), (**l_138))));
                        (*g_209) = &g_48;
                        (***g_209) = (0x1D69C6CBL && func_38((0xF5L > (l_174 >= g_119)), (**g_47)));
                    }
                }
            }
        }
        else
        {
            short l_216 = 1L;
            for (g_119 = 0; (g_119 <= 8); g_119 = safe_add_func_int32_t_s_s(g_119, 1))
            {
                short l_225 = 0L;
                for (l_202 = 0; (l_202 >= 4); ++l_202)
                {
                    for (g_63 = 0; (g_63 >= 44); g_63++)
                    {
                        (***g_209) = (***g_209);
                        return &g_24;
                    }
                    if ((0xD2L ^ l_216))
                    {
                        int *l_227 = &l_81;
                        (*l_227) &= (safe_lshift_func_uint16_t_u_s(func_38((g_51 ^ (g_119 | (safe_add_func_int16_t_s_s(((((g_119 > func_38(g_119, (*p_19))) >= (safe_lshift_func_int16_t_s_s((l_128 > (safe_mul_func_int16_t_s_s((*g_75), l_225))), 15))) == 0xB8F3440FL) >= l_202), l_226)))), l_216), 6));
                        (*g_48) ^= ((*p_19) = (safe_mod_func_int8_t_s_s(((g_120 || l_225) <= 0UL), (g_45 = (safe_rshift_func_uint8_t_u_u(l_216, 5))))));
                    }
                    else
                    {
                        unsigned short ***l_233 = &l_232;
                        (*l_233) = l_232;
                        (*g_234) = &l_81;
                    }
                }
                (*g_236) = func_21(l_225);
            }
        }
    }
    if (((safe_mod_func_int16_t_s_s(((g_120 > 1UL) > g_45), (*g_75))) && (0xE2DFL >= (~l_97))))
    {
        (*g_48) |= (*p_19);
        (*g_239) = func_21(g_176);
    }
    else
    {
        unsigned short l_257 = 0x8299L;
        int l_278 = 0x10C314D7L;
        int l_279 = 0x585E3A43L;
        unsigned short *l_281 = &l_257;
        unsigned short **l_280 = &l_281;
        int *l_344 = &g_24;
        int l_348 = 0x1DCD4F55L;
        for (g_137 = (-7); (g_137 != 21); g_137 = safe_add_func_int16_t_s_s(g_137, 4))
        {
            int **l_242 = &l_33;
            unsigned *l_245 = (void*)0;
            unsigned **l_244 = &l_245;
            short *l_292 = &l_243;
            unsigned char *l_319 = (void*)0;
            unsigned *l_368 = &g_51;
            unsigned **l_367 = &l_368;
        }
        if ((+(safe_mul_func_int32_t_s_s(((***g_77) | ((*l_100) = (*l_344))), ((((safe_sub_func_uint16_t_u_u(((**g_346) = (~(*g_347))), ((**l_280) = (&g_45 == (void*)0)))) & l_243) == 0x78F6FBE8L) == ((*g_249) = (&l_33 != (l_380 = &p_19))))))))
        {
            short l_390 = 0L;
            char *l_391 = &g_120;
            int **l_406 = &l_33;
            (*l_380) = func_21((*g_347));
            for (g_63 = 0; (g_63 < 10); g_63 = safe_add_func_uint16_t_u_u(g_63, 1))
            {
                char *l_400 = &g_119;
                int l_401 = 0L;
                char ***l_411 = (void*)0;
                char ***l_412 = (void*)0;
                char **l_414 = &g_410;
                char ***l_413 = &l_414;
                unsigned *l_415 = &l_97;
                int **l_416 = &l_344;
                short *l_417 = &l_243;
                int *l_418 = &l_81;
                for (g_73 = 0; (g_73 != (-24)); g_73 = safe_sub_func_uint32_t_u_u(g_73, 4))
                {
                    int l_389 = 8L;
                    unsigned char *l_396 = &g_176;
                    (**g_47) = (func_38((*l_344), (((safe_add_func_int32_t_s_s((func_38(g_120, (*l_344)) | g_176), (safe_lshift_func_uint8_t_u_u((func_38(g_73, (**g_239)) <= l_389), 6)))) > 9L) & (*p_19))) == l_390);
                    (*g_235) = ((0x60L <= (l_391 != &g_119)) < func_38(((safe_mod_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(l_389, (((*l_396) = (*l_344)) != (safe_unary_minus_func_uint8_t_u((0x337F8D43L == (((l_400 != &g_120) < (((-1L) & l_389) | (*p_19))) > (***g_77)))))))) > l_401), (**l_380))) && 0L), (*p_19)));
                    return p_19;
                }
                (*l_418) &= (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(l_390, (!l_401))), (((**l_380) ^ ((((void*)0 == l_406) & (safe_sub_func_int16_t_s_s(((*l_417) ^= ((*l_100) |= (((*l_415) |= (g_409 == ((*l_413) = (void*)0))) != (((&l_33 == l_416) < (**g_248)) < (*p_19))))), g_119))) > (*g_235))) || (*l_344))));
            }
            (**g_47) = ((void*)0 != p_20);
            for (g_73 = 0; (g_73 != 13); g_73++)
            {
                if ((**g_362))
                    break;
            }
        }
        else
        {
            (*l_380) = (*g_236);
            return p_20;
        }
    }
    return l_421;
}







static int * func_21(unsigned short p_22)
{
    int *l_23 = &g_24;
    (*l_23) = 0xC80FC3A0L;
    return l_23;
}







static int func_31(int * p_32)
{
    short l_43 = (-3L);
    char *l_44 = &g_45;
    int l_46 = 0xE3A4C638L;
    unsigned *l_50 = &g_51;
    int *l_78 = &l_46;
    int l_79 = 0xA83ADAB8L;
    l_79 = ((*l_78) = func_34(func_38(((*l_50) &= (safe_sub_func_uint16_t_u_u((2L && (((*l_44) &= l_43) ^ ((l_46 |= l_43) <= 1UL))), (g_47 == (void*)0)))), (*g_48)), g_24, l_43));
    return (*g_48);
}







static int func_34(int p_35, unsigned char p_36, int p_37)
{
    unsigned short l_55 = 65535UL;
    int l_56 = (-1L);
    char *l_68 = &g_45;
    (**g_47) = 0xE2FF5FF7L;
    for (p_37 = 0; (p_37 != 27); p_37++)
    {
        int l_59 = 0xC151D1A9L;
        int *l_61 = &g_24;
        int **l_60 = &l_61;
        unsigned *l_62 = &g_63;
        char *l_69 = (void*)0;
        (*g_48) = (((*l_62) = ((*l_61) ^= ((l_56 = (+l_55)) & (l_59 | (l_60 == &l_61))))) <= (g_49 & (safe_sub_func_uint8_t_u_u((0x4499L != 0x7E21L), g_45))));
        (*l_60) = &l_56;
        for (p_36 = 0; (p_36 != 27); p_36 = safe_add_func_uint8_t_u_u(p_36, 7))
        {
            short *l_72 = &g_73;
            if ((+((4294967295UL != 0x0F1939EFL) >= ((*l_72) = (g_45 < ((l_68 != l_69) < (safe_mod_func_uint32_t_u_u(g_45, g_63))))))))
            {
                return (*g_48);
            }
            else
            {
                (*g_47) = (*g_47);
            }
            (*g_77) = g_74;
            if (p_36)
                break;
        }
    }
    return (*g_48);
}







static int func_38(unsigned p_39, int p_40)
{
    short l_52 = 4L;
    return l_52;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_524, "g_524", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_554, "g_554", print_hash_value);
    transparent_crc(g_588, "g_588", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
