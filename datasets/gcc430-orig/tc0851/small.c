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


union U0 {
   const unsigned f0;
   unsigned f1;
};


static int g_8 = 0xAA39ED08L;
static const int * const g_7 = &g_8;
static unsigned short g_21 = 8UL;
static unsigned short g_23 = 65526UL;
static int g_29 = (-1L);
static short g_32 = 0xFEAFL;
static const short g_63 = 4L;
static int * const g_105 = (void*)0;
static int g_107 = 0xA9A92ED1L;
static int *g_110 = (void*)0;
static int **g_109 = &g_110;
static char g_116 = 6L;
static unsigned char g_143 = 1UL;
static char g_173 = 0xD9L;
static char g_175 = 1L;
static unsigned g_195 = 0UL;
static int g_200 = 6L;
static union U0 g_205 = {1UL};
static long long g_208 = (-1L);
static unsigned char g_213 = 0x5FL;
static long long g_215 = 1L;
static unsigned long long g_252 = 0xBFFB87322D81C2D9LL;
static unsigned char *g_270 = (void*)0;
static unsigned char **g_269 = &g_270;
static char **g_274 = (void*)0;
static union U0 *g_283 = &g_205;
static union U0 **g_282 = &g_283;
static unsigned short *g_310 = &g_23;
static unsigned short **g_309 = &g_310;
static short * const *g_317 = (void*)0;
static short **g_385 = (void*)0;
static short ***g_384 = &g_385;
static unsigned long long *g_433 = (void*)0;
static int g_477 = 0x640E2035L;
static int g_519 = 3L;
static long long *g_580 = &g_215;
static long long **g_579 = &g_580;
static unsigned char ***g_621 = &g_269;
static unsigned char ****g_620 = &g_621;
static int *g_627 = (void*)0;



static unsigned func_1(void);
static int * func_2(short p_3);
static short func_4(const int * const p_5, int * p_6);
static int * func_9(unsigned char p_10, short p_11, unsigned short p_12);
static int * func_33(int p_34, unsigned short p_35);
static int func_36(unsigned char p_37, unsigned char p_38, unsigned short * p_39, short * p_40, union U0 p_41);
static unsigned short * func_44(unsigned p_45, union U0 p_46);
static int ** func_75(short p_76, int ** p_77, int ** p_78, short * p_79);
static char func_80(int ** p_81, short * const * p_82);
static int ** func_83(short ** p_84, int p_85);
static unsigned func_1(void)
{
    int *l_15 = &g_8;
    int **l_16 = &l_15;
    int l_17 = 0x9B64FDA7L;
    unsigned short *l_20 = &g_21;
    unsigned short *l_22 = &g_23;
    unsigned long long l_28 = 0x19F23E52509E71B3LL;
    int *l_30 = &g_8;
    short *l_31 = &g_32;
    (*g_109) = func_2(func_4(g_7, func_9((((((*l_16) = l_15) != &g_8) < (g_8 <= l_17)) & ((safe_add_func_uint16_t_u_u(((*l_22) = ((*l_20) = g_8)), (safe_sub_func_int16_t_s_s(((*l_31) = (safe_add_func_uint32_t_u_u((g_29 = l_28), (l_30 != &g_8)))), g_8)))) > g_8)), g_8, g_8)));
    return g_143;
}







static int * func_2(short p_3)
{
    int *l_674 = &g_107;
    (*l_674) = 0xB0C127C9L;
    return l_674;
}







static short func_4(const int * const p_5, int * p_6)
{
    unsigned long long l_478 = 4UL;
    int l_481 = 0xBA915A7FL;
    long long l_482 = 0x896BA196C32E4B27LL;
    unsigned char *l_483 = &g_143;
    char *l_484 = (void*)0;
    char *l_485 = &g_173;
    const int *l_491 = (void*)0;
    short *l_542 = &g_32;
    char l_543 = 0xE1L;
    char l_545 = 0L;
    union U0 l_546 = {0x29D9DC93L};
    short l_571 = 0xC251L;
    unsigned char * const *l_624 = &g_270;
    unsigned char * const ** const l_623 = &l_624;
    unsigned char * const ** const *l_622 = &l_623;
    short *l_653 = &g_32;
    unsigned char l_660 = 253UL;
    short l_673 = (-2L);
    (*g_109) = (void*)0;
    (*g_109) = (*g_109);
    if ((((*l_485) = l_478) <= l_481))
    {
        unsigned short l_503 = 0x2CEBL;
        unsigned char l_513 = 0x83L;
        int l_518 = 0x5BAAB0F4L;
        unsigned short l_520 = 8UL;
        for (g_173 = 0; (g_173 != 10); g_173 = safe_add_func_int64_t_s_s(g_173, 6))
        {
            int l_490 = 0xD95EADCBL;
            int *l_492 = &g_477;
            unsigned *l_500 = (void*)0;
            short l_508 = 1L;
            int *l_514 = &g_8;
            unsigned l_515 = 3UL;
            long long *l_516 = &g_208;
            short *l_517 = &g_32;
            int *l_528 = &g_107;
            int l_529 = 1L;
            (*l_492) = (l_490 != (l_490 <= (p_5 == (l_491 = (void*)0))));
            if ((1L > ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int64_t_s((((*l_492) = (l_481 = l_482)) == ((safe_mod_func_int32_t_s_s(((l_518 = (((*l_517) = (((((+l_503) == ((*l_516) = ((l_503 < (((safe_add_func_int32_t_s_s((l_508 = (safe_lshift_func_uint8_t_u_u(l_503, 6))), (safe_lshift_func_uint16_t_u_u((**g_309), 5)))) > 0xD12CL) >= ((0xE19D1D84L > ((*l_514) = (safe_sub_func_uint32_t_u_u(g_8, l_513)))) != l_478))) != l_515))) != l_503) ^ l_503) == l_513)) >= l_513)) <= g_519), l_482)) == l_520)))) && (*l_492)), l_520)), 0xA70FL)), l_482)) | g_29)))
            {
                long long l_523 = 0x8DCC88198EA67B4FLL;
                int *l_527 = (void*)0;
                (*l_514) = (safe_sub_func_int64_t_s_s((l_481 = 0x55AAA7F7423C3083LL), l_523));
                for (l_518 = 12; (l_518 == (-24)); l_518 = safe_sub_func_uint8_t_u_u(l_518, 6))
                {
                    int l_526 = 0L;
                    if ((l_523 || g_208))
                    {
                        l_526 = 1L;
                        return l_523;
                    }
                    else
                    {
                        (*g_109) = l_527;
                        (*g_109) = (*g_109);
                    }
                }
                (*g_109) = l_528;
            }
            else
            {
                (*l_514) = l_518;
            }
            (*g_109) = func_33(l_529, (safe_add_func_int64_t_s_s(((*l_514) >= ((**g_309) = l_518)), 0xF93ABB7212277E28LL)));
            for (g_23 = 0; (g_23 == 54); g_23++)
            {
                for (g_205.f1 = (-5); (g_205.f1 >= 45); g_205.f1 = safe_add_func_int64_t_s_s(g_205.f1, 3))
                {
                    for (l_513 = 0; (l_513 >= 5); ++l_513)
                    {
                        (*g_109) = func_33(g_477, (l_481 = 0x3790L));
                    }
                    (**g_109) = (*l_514);
                }
            }
        }
        (*g_109) = &l_518;
        (**g_109) = 0x279585D1L;
    }
    else
    {
        unsigned char l_538 = 0x52L;
        int *l_539 = &g_107;
        union U0 l_573 = {0UL};
        unsigned l_574 = 9UL;
        short * const *l_608 = &l_542;
        union U0 *l_612 = (void*)0;
        unsigned short l_654 = 65535UL;
        int *l_666 = &g_477;
        (*l_539) = l_538;
        if (((safe_mul_func_int8_t_s_s(((*l_539) >= func_36((*l_539), g_29, (*g_309), l_542, (*g_283))), (*l_539))) <= ((*p_5) <= (*l_539))))
        {
            char l_544 = 0x79L;
            short *l_547 = &g_32;
            union U0 l_548 = {18446744073709551611UL};
            unsigned char *l_553 = (void*)0;
            unsigned char *l_554 = &g_213;
            char l_560 = (-5L);
            union U0 l_587 = {1UL};
            unsigned short *l_605 = &g_21;
            int l_609 = (-1L);
            int **l_626 = (void*)0;
            char l_636 = (-1L);
            int l_651 = 0x6459372CL;
            (*l_539) = (((*g_7) | l_543) == (+func_36(l_544, l_545, (*g_309), l_547, l_548)));
            if ((safe_lshift_func_int8_t_s_u(((((*l_483) = 255UL) >= ((*l_554) = (safe_rshift_func_int16_t_s_u(func_80(&l_539, &l_542), l_548.f1)))) >= (**g_309)), l_538)))
            {
                int *l_555 = &l_481;
                unsigned short *l_572 = &g_21;
                long long **l_581 = &g_580;
                union U0 *l_611 = &l_546;
                const int **l_613 = (void*)0;
                const int **l_614 = &l_491;
                const int **l_615 = &l_491;
                (*g_109) = l_555;
                if ((((*l_555) = (safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((*l_572) = ((**g_309) = (((*g_109) = func_33((*l_539), (l_560 < (l_548.f1 ^ ((*l_547) = (((safe_sub_func_int8_t_s_s((*l_539), (safe_mul_func_uint8_t_u_u(func_36((*l_539), (l_571 = (g_213 <= (safe_div_func_int32_t_s_s((safe_add_func_int8_t_s_s((~(l_481 = g_208)), func_36((*l_539), (safe_div_func_uint64_t_u_u((*l_539), (*l_539))), (*g_309), l_547, (*g_283)))), 4294967295UL)))), l_572, l_542, l_573), l_574)))) < l_548.f0) && (**g_309))))))) == p_5))), l_548.f1)), l_544))) & 0UL))
                {
                    for (g_107 = 21; (g_107 != 10); g_107--)
                    {
                        int *l_577 = (void*)0;
                        int l_578 = 0L;
                        (*g_109) = func_33((l_481 = ((*l_539) || (-7L))), l_578);
                    }
                    (*g_109) = (*g_109);
                    (*g_282) = (*g_282);
                    l_581 = g_579;
                }
                else
                {
                    union U0 * const *l_583 = (void*)0;
                    union U0 * const **l_582 = &l_583;
                    int l_584 = 0x8E79C5C2L;
                    short * const *l_610 = &l_547;
                    if (((*g_110) = 0x02FE9BC3L))
                    {
                        unsigned short *l_588 = (void*)0;
                        (*l_555) = (!func_36((l_582 == &g_282), l_584, l_588, &g_32, (**g_282)));
                    }
                    else
                    {
                        short *l_606 = (void*)0;
                        unsigned long long *l_607 = &l_478;
                        (*l_539) = (safe_div_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s(l_560, func_80(&g_110, &l_542))) > l_584), 0x224F58B69752E0E7LL));
                        (*l_555) = (safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((&g_317 != (void*)0), l_584)), (((*l_607) = ((*g_110) & (safe_add_func_int32_t_s_s((func_36(l_584, l_548.f0, l_605, l_606, l_548) | (*l_539)), (-1L))))) | l_584))), g_21)), l_584));
                        l_609 = func_80(&g_110, l_608);
                        (*g_282) = (*g_282);
                    }
                    (*g_110) = l_609;
                    (*l_555) = ((!(((&g_195 == (void*)0) != ((+(*l_555)) ^ (l_548.f0 > l_584))) != (!l_544))) | func_80(&g_110, l_610));
                    l_612 = ((*g_282) = l_611);
                }
                (*l_614) = p_5;
                (*l_615) = p_5;
            }
            else
            {
                short **l_618 = &l_542;
                int l_629 = 0L;
                char *l_655 = (void*)0;
                char *l_656 = &l_543;
                for (g_200 = (-14); (g_200 > 26); g_200 = safe_add_func_uint32_t_u_u(g_200, 2))
                {
                    char **l_619 = &l_485;
                    unsigned char * const ** const **l_625 = &l_622;
                    union U0 *l_628 = &l_546;
                    int l_639 = 0x6651155CL;
                    int l_646 = (-5L);
                    int *l_647 = (void*)0;
                    int *l_648 = &l_629;
                    if ((func_80(func_83(l_618, (((((*l_619) = &l_544) == (void*)0) | (g_620 == ((*l_625) = l_622))) | ((*l_539) >= (-1L)))), &l_547) >= (*p_5)))
                    {
                        (*g_109) = func_33(g_208, ((*g_310) = (**g_309)));
                        g_627 = ((*g_109) = (*g_109));
                        (*g_282) = l_628;
                        (*l_539) = (((-10L) > (&l_545 != ((*l_619) = (void*)0))) ^ ((**g_579) = (*g_580)));
                    }
                    else
                    {
                        (*g_109) = p_6;
                        (*l_539) = (-1L);
                        (*l_539) = l_629;
                    }
                    (*l_539) = (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(65535UL, (safe_add_func_int32_t_s_s((l_629 ^ (*g_310)), (*l_539))))), 7));
                    l_481 = (l_636 = (*p_5));
                    (*l_648) = (safe_mul_func_uint8_t_u_u(((!(func_36(l_639, l_629, ((*g_309) = l_605), (*l_618), (**g_282)) < (safe_mul_func_uint16_t_u_u(0UL, ((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(func_80(&l_539, &l_542), l_646)), l_629)) || 0L))))) ^ 1L), 0L));
                }
                (*g_109) = p_6;
                l_629 = (+(safe_add_func_uint8_t_u_u(l_651, ((safe_unary_minus_func_int32_t_s(func_36(g_116, ((*l_554) = (*l_539)), (*g_309), l_653, (**g_282)))) != ((*l_656) = (func_36(l_654, l_629, l_547, &g_32, l_546) != g_21))))));
                (*g_109) = (*g_109);
            }
        }
        else
        {
            int l_657 = 6L;
            return l_657;
        }
        if ((l_481 = (!((*l_539) = (*l_539)))))
        {
            int *l_658 = &g_107;
            (*g_109) = l_658;
            (*g_109) = (*g_109);
        }
        else
        {
            int l_659 = (-2L);
            int *l_663 = &g_107;
            l_539 = p_6;
            (*l_663) = ((l_659 > (l_546.f1 <= l_660)) == (((safe_add_func_uint32_t_u_u(g_215, 0x3773C3B7L)) <= 0x04C2L) <= 0xA470E8DBB1468326LL));
            l_491 = (*g_109);
        }
        if (((*l_666) = (safe_lshift_func_uint16_t_u_u(l_543, 15))))
        {
            (*g_282) = (*g_282);
            (*g_282) = &l_573;
        }
        else
        {
            unsigned char *****l_667 = &g_620;
            int l_668 = 0x8D786CBCL;
            unsigned long long *l_671 = &l_478;
            const int **l_672 = &l_491;
            (*l_666) = (((*l_667) = &g_621) == &g_621);
            (*l_672) = p_5;
            return (*l_491);
        }
    }
    return l_673;
}







static int * func_9(unsigned char p_10, short p_11, unsigned short p_12)
{
    int *l_43 = &g_8;
    int **l_42 = &l_43;
    union U0 l_47 = {0xC3E1B8D8L};
    int *l_475 = &g_8;
    int *l_476 = &g_477;
    (*l_42) = func_33(func_36((&g_7 != l_42), (*l_43), func_44(p_11, l_47), g_310, (*g_283)), p_11);
    (*g_109) = (void*)0;
    (*l_476) = ((*l_475) = (+((*l_43) = 0x79FDA063L)));
    return (*g_109);
}







static int * func_33(int p_34, unsigned short p_35)
{
    int *l_474 = &g_107;
    return l_474;
}







static int func_36(unsigned char p_37, unsigned char p_38, unsigned short * p_39, short * p_40, union U0 p_41)
{
    int l_473 = (-1L);
    return l_473;
}







static unsigned short * func_44(unsigned p_45, union U0 p_46)
{
    unsigned short l_50 = 0x98D0L;
    int l_54 = (-1L);
    const union U0 *l_356 = &g_205;
    short * const l_379 = &g_32;
    short * const *l_378 = &l_379;
    int **l_393 = &g_110;
    unsigned char l_402 = 2UL;
    int l_404 = 6L;
    unsigned char ***l_469 = &g_269;
    for (g_23 = 0; (g_23 == 46); g_23 = safe_add_func_int8_t_s_s(g_23, 1))
    {
        unsigned short *l_51 = &g_21;
        if (l_50)
            break;
        return l_51;
    }
    if ((safe_mod_func_int8_t_s_s(0x79L, l_54)))
    {
        short *l_64 = &g_32;
        int l_69 = 4L;
        int *l_119 = &g_8;
        int **l_118 = &l_119;
        short **l_381 = &l_64;
        short ***l_380 = &l_381;
        short ****l_382 = (void*)0;
        short ****l_383 = (void*)0;
        short ****l_386 = &g_384;
        int l_401 = 1L;
        unsigned long long *l_432 = (void*)0;
        long long l_461 = (-1L);
        const unsigned char **l_468 = (void*)0;
        const unsigned char *** const l_467 = &l_468;
        for (l_54 = 0; (l_54 > (-15)); l_54 = safe_sub_func_uint64_t_u_u(l_54, 2))
        {
            const short *l_62 = &g_63;
            const short **l_61 = &l_62;
            unsigned short *l_65 = (void*)0;
            int l_68 = 0x405B7518L;
            short **l_86 = &l_64;
            union U0 **l_346 = &g_283;
            if (((safe_mul_func_uint16_t_u_u(((((*l_61) = (void*)0) == l_64) ^ (l_65 != &g_21)), (safe_rshift_func_uint8_t_u_s(l_68, 3)))) >= (l_69 = p_45)))
            {
                int **l_70 = (void*)0;
                int *l_72 = &l_69;
                int **l_71 = &l_72;
                (*l_71) = (void*)0;
            }
            else
            {
                const int *l_74 = &l_69;
                const int ** const l_73 = &l_74;
                const union U0 **l_357 = (void*)0;
                const union U0 **l_358 = &l_356;
                if ((l_69 = (l_73 != &g_7)))
                {
                    int **l_121 = &l_119;
                    int ***l_120 = &l_121;
                    int ***l_326 = &l_118;
                    unsigned long long *l_341 = &g_252;
                    (*l_326) = ((*l_120) = func_75((p_46.f0 >= (func_80(func_83(l_86, (*g_7)), &l_64) & p_45)), l_118, ((*l_120) = g_109), &g_32));
                    for (l_50 = 0; (l_50 < 30); ++l_50)
                    {
                        return (*g_309);
                    }
                    (*l_73) = (*l_73);
                    if ((safe_sub_func_int8_t_s_s(0L, (safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(((((safe_mul_func_int16_t_s_s((((*l_341) = (safe_lshift_func_int8_t_s_u(6L, 4))) > 0x6C85954F1852EFB7LL), (~l_54))) != (safe_lshift_func_int16_t_s_s((**l_73), 5))) ^ (((249UL | (0x97D692D8L != (1UL != (safe_mod_func_int32_t_s_s((p_45 != l_68), p_45))))) == (**g_309)) > 0x3FEDL)) ^ g_215), g_116)), 0)), l_54)))))
                    {
                        unsigned short l_353 = 65533UL;
                        (**g_109) = ((void*)0 != l_346);
                        (**g_109) = (((p_46.f1 != g_195) > (*l_74)) >= (((((safe_add_func_uint32_t_u_u(0x91142BF4L, ((safe_mod_func_uint64_t_u_u(((safe_add_func_int8_t_s_s(l_353, p_45)) > 0x8BB38C0FL), l_68)) <= 0x47E52BEC05243415LL))) ^ (**l_73)) | 1L) <= 18446744073709551615UL) | p_46.f1));
                        if (p_45)
                            continue;
                    }
                    else
                    {
                        unsigned short *l_354 = &g_23;
                        return l_354;
                    }
                }
                else
                {
                    unsigned char l_355 = 0x32L;
                    l_355 = p_45;
                }
                (*l_358) = l_356;
            }
        }
        for (g_215 = 0; (g_215 < (-20)); --g_215)
        {
            int *l_375 = &g_107;
            (*g_109) = (*g_109);
            for (g_32 = (-24); (g_32 != (-3)); g_32 = safe_add_func_uint32_t_u_u(g_32, 9))
            {
                char l_365 = 0xD5L;
                unsigned short ** const l_372 = &g_310;
                (*g_109) = &l_54;
                if (l_54)
                    continue;
                (**g_109) = ((&g_317 != &g_317) != ((safe_rshift_func_uint8_t_u_u(l_365, 3)) | (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u((**l_118), (p_46.f1 && (l_372 == (void*)0)))) || ((*g_282) == (void*)0)), (*g_310))), 14))));
                for (g_195 = 0; (g_195 > 56); g_195++)
                {
                    (*g_109) = (*g_109);
                }
            }
            (*l_375) = l_54;
        }
        if ((safe_mod_func_uint16_t_u_u((((((*g_310) = p_45) | (g_21 = ((func_80(&g_110, l_378) & ((((l_380 = l_380) == ((*l_386) = g_384)) & ((((&g_195 != &g_195) >= (*l_119)) > p_46.f0) == p_45)) == 4L)) || 0x6FL))) & p_46.f1) || p_45), (*l_119))))
        {
            const short * const l_390 = &g_63;
            short * const **l_394 = (void*)0;
            short * const **l_395 = &g_317;
            short * const **l_396 = (void*)0;
            short * const *l_398 = &l_379;
            short * const **l_397 = &l_398;
            int *l_403 = &l_69;
            (*l_118) = &l_54;
            for (p_46.f1 = 23; (p_46.f1 < 40); ++p_46.f1)
            {
                int l_389 = (-1L);
                (**l_118) = l_389;
                (*g_109) = (*g_109);
                if ((*l_119))
                    continue;
                (*l_118) = (*l_118);
            }
            l_404 = ((*l_403) = (((*g_310) = (((**l_378) = l_50) != ((((**l_380) = (void*)0) != l_390) | (((g_208 = ((safe_div_func_uint16_t_u_u((*g_310), func_80(l_393, ((*l_397) = ((*l_395) = &l_379))))) == (((*l_119) = ((!(safe_div_func_uint64_t_u_u((g_208 > g_29), l_401))) && 0x387671808FF8841FLL)) ^ (*g_7)))) >= l_402) < p_46.f0)))) >= p_46.f0));
        }
        else
        {
            int l_407 = 0L;
            char *l_418 = &g_116;
            char **l_417 = &l_418;
            char l_435 = 6L;
            unsigned long long *l_456 = &g_252;
            int *l_459 = &l_69;
            short **l_471 = &l_64;
            (**g_109) = (**l_393);
            for (l_50 = (-19); (l_50 <= 33); l_50++)
            {
                unsigned short l_408 = 0xF27FL;
                short *l_413 = (void*)0;
                int l_416 = 1L;
                unsigned l_440 = 0x07282EA6L;
                int **l_443 = &l_119;
                (*l_118) = (*l_393);
                if ((l_407 == l_408))
                {
                    unsigned long long *l_412 = &g_252;
                    short * const **l_419 = &g_317;
                    int l_434 = 0xF7126A5EL;
                    if ((safe_mul_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u((**l_393))), (((*l_412) = (*l_119)) == p_45))))
                    {
                        int * const *l_415 = &l_119;
                        int * const **l_414 = &l_415;
                        (*l_414) = &g_105;
                        (**l_393) = (*g_110);
                    }
                    else
                    {
                        (**l_393) = ((l_416 = ((**g_309) = (*g_310))) <= (l_417 != (void*)0));
                        (**g_109) = (-1L);
                    }
                    if (func_80(l_393, ((*l_419) = (*g_384))))
                    {
                        unsigned long long *l_430 = &g_252;
                        unsigned long long **l_431 = &l_430;
                        (**l_393) = ((safe_rshift_func_uint8_t_u_u((func_80(&l_119, &l_379) <= ((g_205.f0 && ((l_416 = ((safe_lshift_func_uint8_t_u_u(l_407, 2)) && (((**l_378) = ((safe_rshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(g_173, (g_175 = (safe_lshift_func_uint8_t_u_u((((*l_431) = l_430) == (g_433 = l_432)), (g_143 = (g_215 > l_407))))))) > g_205.f0), 0)) <= p_46.f1)) > l_434))) >= l_434)) & p_46.f1)), l_435)) >= 1UL);
                        (*l_118) = &l_416;
                        (*l_118) = (*g_109);
                    }
                    else
                    {
                        (*l_393) = (*g_109);
                    }
                    if (l_407)
                        break;
                }
                else
                {
                    const unsigned l_444 = 0UL;
                    int l_445 = 1L;
                    char *l_460 = &g_173;
                    union U0 *l_466 = &g_205;
                    for (g_200 = 7; (g_200 <= (-11)); g_200--)
                    {
                        (*g_110) = 9L;
                    }
                    for (l_407 = 0; (l_407 < 19); ++l_407)
                    {
                        (*g_110) = (l_440 && (safe_add_func_int16_t_s_s(func_80(l_443, &l_413), (l_444 & p_46.f0))));
                    }
                    l_445 = 0xC6A43272L;
                    if ((safe_lshift_func_int8_t_s_s((g_208 ^ (l_461 = ((safe_rshift_func_int8_t_s_u(((*l_460) = ((**l_417) = (safe_div_func_int16_t_s_s((((safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(p_46.f0, 4)), ((void*)0 != l_456))) == func_80(&g_110, (*g_384))) < ((safe_add_func_uint64_t_u_u(((void*)0 == l_459), p_45)) <= l_416)), p_46.f1)))), 5)) < 255UL))), 6)))
                    {
                        if (p_46.f1)
                            break;
                        if ((*g_110))
                            continue;
                    }
                    else
                    {
                        unsigned char ****l_470 = &l_469;
                        (*g_110) = ((0x7FF5A794L && (((**l_378) = (*l_459)) | (**l_118))) > (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(p_46.f0, 11)), (p_46.f1 >= ((**l_417) = ((l_466 != (*g_282)) < ((*l_456) = (l_467 == ((*l_470) = l_469)))))))));
                    }
                }
            }
            (**l_393) = (((**l_386) = l_471) == l_471);
            (*l_393) = l_459;
        }
        return l_64;
    }
    else
    {
        int *l_472 = &g_107;
        (*g_109) = (*g_109);
        l_472 = ((*l_393) = (*l_393));
    }
    return (*g_309);
}







static int ** func_75(short p_76, int ** p_77, int ** p_78, short * p_79)
{
    short l_141 = 0x667EL;
    int l_198 = 0x198C4011L;
    int **l_202 = &g_110;
    union U0 *l_204 = &g_205;
    const short *l_222 = &l_141;
    const short **l_221 = &l_222;
    char *l_273 = &g_175;
    char **l_272 = &l_273;
    unsigned char **l_294 = &g_270;
    int **l_316 = &g_110;
    unsigned long long * const l_319 = (void*)0;
    const int *l_323 = &g_8;
    const int **l_324 = (void*)0;
    const int **l_325 = &l_323;
    for (g_116 = 0; (g_116 < (-16)); g_116 = safe_sub_func_int16_t_s_s(g_116, 6))
    {
        long long l_136 = 0x64457BBF0BED92BBLL;
        unsigned char *l_142 = &g_143;
        short l_144 = (-1L);
        unsigned long long l_176 = 0UL;
        int l_188 = 0L;
        short *l_233 = (void*)0;
        short **l_232 = &l_233;
        short ***l_231 = &l_232;
        int l_288 = 0xB01682E6L;
        unsigned l_305 = 4294967289UL;
        (**p_78) = (safe_unary_minus_func_int64_t_s((safe_unary_minus_func_int16_t_s((safe_add_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(g_21, ((*l_142) = (safe_lshift_func_int16_t_s_s(((*p_79) = ((**p_77) >= ((l_136 & l_136) >= ((g_29 & (l_141 = (0xBDA1L > ((g_23 < (safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u((1L != g_32), l_136)) || p_76), 10))) ^ g_29)))) > 249UL)))), g_107))))), l_144)), g_29))))));
        (**p_78) = (~(safe_add_func_int8_t_s_s(l_144, (1UL >= (*p_79)))));
        for (g_143 = 0; (g_143 <= 22); g_143 = safe_add_func_int32_t_s_s(g_143, 1))
        {
            unsigned l_207 = 1UL;
            int l_211 = (-4L);
            int *l_216 = &l_198;
            int l_291 = 0x17D3F7C7L;
            unsigned char **l_295 = (void*)0;
        }
    }
    if (((*g_110) = (+(**l_202))))
    {
        unsigned short **l_311 = &g_310;
        int l_314 = 0x89D617F3L;
        unsigned long long *l_315 = &g_252;
        long long *l_318 = &g_208;
        (**l_202) = ((void*)0 == g_309);
        l_198 = ((l_311 == l_311) <= ((safe_sub_func_uint16_t_u_u(l_314, (((*l_315) = 0x1FC836E93BA542B8LL) >= (g_215 = ((*l_318) = func_80(l_316, g_317)))))) || (l_319 != &g_252)));
    }
    else
    {
        (*p_77) = (*p_77);
        for (g_173 = (-8); (g_173 < (-4)); g_173++)
        {
            int *l_322 = &g_107;
            (**p_78) = (l_322 != (*p_78));
        }
    }
    (*l_325) = l_323;
    (*l_316) = (*g_109);
    return p_77;
}







static char func_80(int ** p_81, short * const * p_82)
{
    int *l_111 = &g_8;
    int *l_114 = (void*)0;
    int *l_115 = &g_107;
    int *l_117 = &g_107;
    (*p_81) = l_111;
    g_116 = ((*l_115) = (safe_sub_func_uint64_t_u_u((*l_111), (*l_111))));
    (*p_81) = l_117;
    return g_107;
}







static int ** func_83(short ** p_84, int p_85)
{
    short l_99 = 0L;
    int l_102 = 0xA25C95EEL;
    int *l_106 = &g_107;
    int **l_108 = &l_106;
    (*l_106) = ((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((**p_84), ((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s(g_23, (((g_21 == (**p_84)) || ((p_85 == l_99) >= (safe_rshift_func_uint8_t_u_u((g_8 & (l_102 = l_99)), (safe_lshift_func_uint16_t_u_s((g_105 != &g_8), (**p_84))))))) > (**p_84)))), g_29)) | 0x526695BDL))), l_99)), 4)), g_21)) <= p_85);
    return g_109;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_205.f0, "g_205.f0", print_hash_value);
    transparent_crc(g_205.f1, "g_205.f1", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_519, "g_519", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
