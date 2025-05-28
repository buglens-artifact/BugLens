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



static int g_6 = 0xFDDD3F46L;
static int g_43 = 0x8F9C3281L;
static int g_64 = 0x80D0E101L;
static char g_67 = 0x01L;
static int *g_72 = &g_43;
static unsigned char g_102 = 0x86L;
static short g_104 = (-1L);
static unsigned g_133 = 3UL;
static char g_136 = 0xBAL;
static unsigned g_145 = 0x6CD894E1L;
static short g_185 = 1L;
static unsigned *g_247 = (void*)0;
static unsigned **g_246 = &g_247;
static volatile unsigned char g_269 = 0x25L;
static volatile unsigned char *g_268 = &g_269;
static volatile unsigned char **g_267 = &g_268;
static unsigned short g_299 = 0xC6ABL;
static unsigned char g_315 = 254UL;
static int g_323 = 0x149198AFL;
static const unsigned *g_346 = &g_133;
static const unsigned **g_345 = &g_346;
static char g_401 = 0xE6L;
static unsigned char *g_405 = &g_102;
static unsigned char **g_404 = &g_405;
static unsigned char ***g_403 = &g_404;
static unsigned char ****g_402 = &g_403;
static unsigned short g_423 = 0UL;
static short *g_453 = &g_185;
static int g_465 = 0x432666E5L;
static int *g_531 = &g_465;
static int g_544 = 0xE166002CL;



static unsigned char func_1(void);
static int * func_2(short p_3, int * p_4);
static unsigned short func_11(unsigned short p_12, unsigned p_13);
static char func_15(const unsigned p_16, unsigned char p_17, int * const p_18);
static int * const func_19(int * p_20, char p_21, int * p_22);
static int * func_23(unsigned p_24, int * p_25, unsigned char p_26);
static unsigned func_31(const unsigned char p_32, short p_33, int * p_34, unsigned p_35, unsigned short p_36);
static const int func_41(unsigned char p_42);
static int func_44(int * p_45, short p_46, unsigned char p_47);
static char func_54(unsigned char p_55);
static unsigned char func_1(void)
{
    int *l_5 = &g_6;
    int **l_545 = &g_72;
    (*l_545) = func_2((l_5 == l_5), l_5);

    ;
    ;
    (*l_545) = func_23((*l_5), &g_6, (***g_403));

    ;
    return (**g_267);
}







static int * func_2(short p_3, int * p_4)
{
    int *l_14 = &g_6;
    unsigned char *l_338 = &g_315;
    int l_339 = 0xEA8A35C7L;
    unsigned *l_365 = (void*)0;
    unsigned *l_366 = (void*)0;
    unsigned *l_367 = &g_145;
    int **l_427 = &g_72;
    char *l_463 = (void*)0;
    char *l_464 = &g_401;
    (*l_14) = (safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_u(((g_6 && (func_11(p_3, (g_465 = (((l_14 == &g_6) < ((*l_464) = func_15((*l_14), (*l_14), ((*l_427) = func_19(func_23(((safe_add_func_uint8_t_u_u(((g_6 != 0xC2L) < (safe_div_func_uint32_t_u_u(((*l_367) = func_31(((*l_338) = ((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((func_41((g_43 = (1UL | 0xA74DL))) ^ 1UL), 4)), (-1L))) || 246UL)), (*l_14), &g_6, (*l_14), l_339)), 0xB16275ACL))), 0x9AL)) || p_3), l_366, p_3), p_3, &g_6))))) == p_3))) > 1UL)) & g_544), p_3)) > p_3) && g_104), 7));

    ;
    ;
    return &g_64;


}







static unsigned short func_11(unsigned short p_12, unsigned p_13)
{
    unsigned l_466 = 0xF726698EL;
    int *l_470 = &g_64;
    char *l_473 = &g_67;
    char **l_472 = &l_473;
    int *l_522 = &g_6;
    int *l_530 = (void*)0;
    int **l_542 = (void*)0;
    int **l_543 = &g_72;
    if (l_466)
    {
        unsigned short l_469 = 0xF923L;
        int **l_471 = &g_72;
        (*g_72) = p_12;
        for (g_64 = 0; (g_64 == 8); g_64++)
        {
            if ((*g_72))
                break;
        }
        (*l_471) = l_470;

        ;
        (*l_471) = &g_465;

        ;
    }
    else
    {
        unsigned char *l_481 = &g_315;
        unsigned l_491 = 0x229EAA28L;
        int *l_521 = &g_43;
        int * const l_541 = &g_64;
        (*g_72) = func_54((***g_403));
        if (((void*)0 == l_472))
        {
            unsigned char *l_480 = &g_315;
            const int l_494 = 0x492B466FL;
            unsigned *l_501 = &g_133;
            int **l_523 = &l_522;
            (*l_470) = ((safe_rshift_func_uint16_t_u_u((+g_102), g_423)) || 0x3EA799C3L);
            (*g_72) = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((p_13 == (l_480 == l_481)), (*g_453))), g_64));
            for (g_465 = 0; (g_465 > (-16)); g_465 = safe_sub_func_uint8_t_u_u(g_465, 3))
            {
                int l_490 = 0x2E79B31CL;
                int **l_520 = &g_72;
                if ((!(safe_mod_func_int8_t_s_s(((**l_472) = ((func_54((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(func_44(l_470, l_490, l_491), (safe_rshift_func_uint16_t_u_u(l_494, 1)))), ((safe_sub_func_uint16_t_u_u(l_491, (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_491, ((p_13 < (((void*)0 != l_501) >= g_299)) <= p_12))), 1L)))) | (***g_403))))) || (-9L)) >= 1UL)), p_13))))
                {
                    unsigned ***l_505 = &g_246;
                    unsigned ****l_504 = &l_505;
                    (*l_470) = (safe_lshift_func_int8_t_s_u((p_13 >= p_13), (((*l_504) = &g_246) == &g_246)));
                }
                else
                {
                    int *l_517 = &g_64;
                    int **l_519 = &l_517;
                    (*g_72) = ((*l_470) = 0x36F9A62EL);
                    for (g_6 = (-28); (g_6 == 8); g_6 = safe_add_func_int16_t_s_s(g_6, 8))
                    {
                        unsigned ***l_511 = (void*)0;
                        unsigned ****l_510 = &l_511;
                        unsigned *****l_512 = &l_510;
                        int l_513 = 1L;
                        int *l_514 = &g_43;
                        int **l_518 = &l_470;
                        (*l_514) = (((safe_sub_func_uint8_t_u_u((((*l_512) = l_510) != (void*)0), 0xD0L)) || p_13) ^ ((*l_470) = (p_12 = (((((*l_470) & ((*l_473) = 0xC6L)) == (l_513 = 4294967289UL)) != func_54(((***g_403) = (0x38L == 254UL)))) && g_423))));
                        (*l_514) = (safe_lshift_func_uint8_t_u_s((***g_403), 2));
                        (*l_518) = l_517;
                    }
                    (*l_519) = (void*)0;

                    ;
                }
                l_521 = ((*l_520) = l_501);

                ;
                ;
            }

            ;
            ;
            (*l_523) = l_522;
        }
        else
        {
            short l_524 = 0L;
            if (l_524)
            {
                int **l_525 = (void*)0;
                int **l_526 = &g_72;
                int **l_527 = (void*)0;
                int **l_528 = (void*)0;
                int **l_529 = &l_470;
                (*l_529) = ((*l_526) = &g_6);

                ;
                ;
                g_531 = ((*l_526) = ((*l_529) = l_530));

                ;
                ;
                ;
                return g_64;
            }
            else
            {
                int *l_535 = (void*)0;
                if (((*l_521) = (p_13 ^ 5UL)))
                {
                    int **l_532 = &l_530;
                    (*l_532) = &g_43;

                    ;
                    for (g_145 = 0; (g_145 >= 13); ++g_145)
                    {
                        return p_13;
                    }
                    (*l_532) = l_535;

                    ;
                }
                else
                {
                    int **l_539 = (void*)0;
                    int **l_540 = &l_470;
                    g_72 = l_522;

                    ;
                    for (g_67 = 0; (g_67 > 5); g_67++)
                    {
                        int **l_538 = &l_521;
                        (*l_538) = l_521;
                    }
                    (*l_540) = &g_6;

                    ;
                    (*l_522) = func_15(((*l_521) <= p_13), (**g_404), l_541);

                    ;
                }

                ;
                ;
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
    (*l_543) = l_522;

    ;
    return g_299;
}







static char func_15(const unsigned p_16, unsigned char p_17, int * const p_18)
{
    char *l_430 = (void*)0;
    char **l_429 = &l_430;
    char *** const l_428 = &l_429;
    int l_431 = 0x9F17BF18L;
    int **l_432 = &g_72;
    unsigned l_433 = 0UL;
    int *l_435 = &l_431;
    int **l_434 = &l_435;
    short *l_442 = (void*)0;
    short *l_443 = (void*)0;
    short *l_444 = &g_185;
    int *l_458 = &l_431;
    (*p_18) = ((l_431 = (l_428 != (void*)0)) & func_54((****g_402)));
    (*l_432) = &g_6;
    if ((((l_433 >= (func_44((*l_432), (safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(((**l_434) = ((**l_432) = (*l_435))), (safe_sub_func_uint16_t_u_u(g_145, ((*l_444) = 0x8B78L))))), g_315)), p_16) <= 9UL)) || p_17) || 0xFBEAL))
    {
        int *l_445 = &g_6;
        int **l_446 = &l_435;
        short *l_452 = &g_104;
        (*l_446) = p_18;

        ;
        for (p_17 = (-4); (p_17 == 47); ++p_17)
        {
            short **l_454 = &l_443;
            unsigned short l_455 = 0xB6C7L;
            int l_456 = 5L;
            int *l_457 = &l_431;
            (*l_445) = (*l_435);
            (*l_446) = (*l_446);
            (*l_457) = (((*l_435) = p_17) >= (p_17 != 0x6EL));
        }
        (*l_432) = (*l_446);

        ;
    }
    else
    {
        g_72 = &g_43;

        ;
        (*l_434) = (*l_432);

        ;
    }

    ;
    ;
    return g_269;
}







static int * const func_19(int * p_20, char p_21, int * p_22)
{
    int **l_380 = &g_72;
    unsigned char *l_389 = &g_315;
    unsigned char ***l_392 = (void*)0;
    unsigned char ****l_393 = &l_392;
    int *l_394 = &g_64;
    (*l_380) = p_22;

    ;
    (*l_380) = &g_6;
    for (g_102 = (-1); (g_102 <= 29); ++g_102)
    {
        short l_416 = (-1L);
        if (((safe_mul_func_uint8_t_u_u((g_401 = ((*l_389) = (safe_div_func_uint8_t_u_u((p_22 != (void*)0), func_54((*g_268)))))), (&l_392 == g_402))) && p_21))
        {
            char *l_410 = &g_401;
            int l_411 = 0xF1E63BEBL;
            (*l_394) = ((safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((-10L) ^ p_21), func_44(((*l_380) = p_22), (((*l_410) = (-1L)) != l_411), p_21))) != (safe_mul_func_uint16_t_u_u(((-1L) & 1L), l_411))), (-1L))) > 0x2ED9C82AL);

            ;
        }
        else
        {
            unsigned short *l_414 = (void*)0;
            unsigned short *l_415 = &g_299;
            int l_421 = 7L;
            unsigned short *l_422 = &g_423;
            (*l_394) = func_31(p_21, (&g_185 != (void*)0), (*l_380), ((((*l_415) = g_6) == g_104) != 0x7E3807DBL), ((*l_422) = ((func_54((l_416 || (safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0xA1L, 0xCAL)), 1)))) >= l_421) >= 1L)));

            ;
        }
        (*l_394) = (**l_380);
        (*l_394) = func_54(p_21);
        for (g_145 = 0; (g_145 > 28); g_145 = safe_add_func_uint32_t_u_u(g_145, 6))
        {
            int *l_426 = &g_43;
            l_426 = &g_43;
        }
    }

    ;
    return &g_6;


}







static int * func_23(unsigned p_24, int * p_25, unsigned char p_26)
{
    unsigned char l_370 = 0x63L;
    unsigned char *l_371 = &g_102;
    int l_376 = 0xC83B8C2FL;
    unsigned char *l_377 = &g_315;
    l_376 = ((l_370 = (safe_mod_func_uint16_t_u_u(5UL, p_26))) <= (((*l_371) = (p_24 != ((*g_72) = (*g_72)))) | ((~(((safe_div_func_uint8_t_u_u(((*l_377) = (0x4FL | (safe_add_func_int16_t_s_s(l_376, l_376)))), l_376)) == (safe_div_func_int32_t_s_s(((g_104 || 0xD9L) <= 0x4BEFL), 7UL))) && l_376)) <= l_376)));
    return &g_6;


}







static unsigned func_31(const unsigned char p_32, short p_33, int * p_34, unsigned p_35, unsigned short p_36)
{
    int *l_340 = &g_43;
    int **l_341 = &g_72;
    unsigned **l_344 = &g_247;
    unsigned short *l_352 = (void*)0;
    unsigned short *l_353 = &g_299;
    unsigned char l_362 = 0x3AL;
    int *l_363 = (void*)0;
    int *l_364 = &g_64;
    (*l_341) = l_340;

    ;
    (*g_72) = 0x8E5FC133L;
    for (g_185 = (-16); (g_185 <= (-10)); g_185 = safe_add_func_int16_t_s_s(g_185, 9))
    {
        const unsigned **l_347 = &g_346;
    }
    (*l_364) = (safe_sub_func_uint8_t_u_u(0xC8L, ((safe_rshift_func_int8_t_s_u(((((*l_353) = (+((*g_345) == (*g_246)))) && (~(((**l_341) = (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(8UL, (*l_340))), (safe_lshift_func_int8_t_s_s(0xE2L, l_362)))) | g_104), (**l_341)))) != p_36))) < p_35), p_36)) & p_32)));
    return p_32;
}







static const int func_41(unsigned char p_42)
{
    int *l_48 = &g_6;
    int **l_49 = &l_48;
    int l_56 = 0xADF890BAL;
    char *l_66 = &g_67;
    int l_149 = 0xBD0A635AL;
    const unsigned short *l_201 = (void*)0;
    int l_226 = (-2L);
    short *l_332 = &g_104;
    unsigned char *l_335 = &g_102;
    int *l_336 = (void*)0;
    int *l_337 = &g_43;
    if (func_44(((*l_49) = l_48), ((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((*l_66) = func_54(l_56)), 0)), (0xC6E1L && ((safe_rshift_func_uint8_t_u_s(8UL, 6)) >= g_6)))) || g_6), p_42))
    {
        short l_100 = 0xCFB0L;
        unsigned char *l_101 = &g_102;
        int *l_103 = &g_43;
        (*l_49) = (*l_49);
        (*l_103) = (safe_mul_func_uint8_t_u_u(p_42, ((*l_101) = l_100)));
        (*l_103) = (g_104 = (*g_72));
        return (*g_72);
    }
    else
    {
        unsigned char *l_107 = (void*)0;
        unsigned char *l_108 = &g_102;
        int *l_111 = (void*)0;
        unsigned l_115 = 0x0BC0716CL;
        unsigned short l_134 = 0x8938L;
        unsigned l_148 = 0xB454EC59L;
        unsigned short l_186 = 0xC2DCL;
        if ((safe_mul_func_int8_t_s_s(p_42, ((*l_108) = 247UL))))
        {
            unsigned char *l_114 = &g_102;
            int *l_116 = &g_43;
            const int *l_121 = &g_43;
            unsigned *l_131 = (void*)0;
            unsigned *l_132 = &g_133;
            char *l_135 = &g_136;
            int *l_137 = &l_56;
            if (((safe_div_func_uint32_t_u_u(p_42, p_42)) == p_42))
            {
                for (p_42 = (-2); (p_42 <= 54); p_42 = safe_add_func_int8_t_s_s(p_42, 1))
                {
                    (*l_116) = func_54((p_42 || (p_42 <= (g_67 | 4294967295UL))));
                }
                (*l_49) = l_111;

                ;
            }
            else
            {
                char l_119 = 0L;
                const int *l_120 = &g_6;
                l_119 = ((*l_116) = 0x8FA0D634L);
                l_121 = l_120;

                ;
            }

            ;
            ;
            if ((((safe_mul_func_uint8_t_u_u(0x05L, (safe_div_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((func_54((g_104 >= ((*l_132) = (safe_rshift_func_uint16_t_u_s(g_67, 10))))) < l_134))), ((*l_135) = p_42))))) <= p_42) >= 0x0699391FL))
            {
                int *l_144 = &g_64;
                short *l_146 = &g_104;
                (*l_49) = l_137;

                ;
                (*l_116) = (((*g_72) > (0x124FAE1BL && ((safe_add_func_int16_t_s_s(((*l_146) = (0xBBC9484AL ^ ((*l_137) = ((((safe_add_func_uint16_t_u_u(p_42, (((*g_72) < (p_42 ^ (*g_72))) == (*l_48)))) >= (safe_sub_func_uint8_t_u_u(((g_136 = (((~(((*l_144) = p_42) != 0x98D8379AL)) < g_145) != p_42)) == g_43), g_104))) | g_145) > 0L)))), p_42)) < p_42))) | p_42);
            }
            else
            {
                return (*g_72);
            }

            ;
        }
        else
        {
            int *l_147 = &l_56;
            (*l_147) = (func_44(l_147, (*l_48), (p_42 = (l_148 < 0x234EL))) || l_149);
            if (((*l_147) = func_44(&g_64, (p_42 <= (safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((*l_147) > (**l_49)), (safe_lshift_func_int16_t_s_s(func_54((safe_add_func_int8_t_s_s(p_42, (safe_rshift_func_uint8_t_u_s((((**l_49) != (((void*)0 == l_66) | ((safe_mod_func_int8_t_s_s(func_44((*l_49), g_145, g_102), g_6)) ^ 255UL))) | g_6), 5))))), g_133)))), g_145))), p_42)))
            {
                unsigned *l_173 = &g_133;
                int l_181 = 0xB6F82621L;
                unsigned char **l_188 = &l_108;
                unsigned char ***l_189 = &l_188;
                for (g_43 = (-12); (g_43 > 9); g_43 = safe_add_func_int16_t_s_s(g_43, 3))
                {
                    for (g_145 = (-23); (g_145 != 57); g_145 = safe_add_func_uint16_t_u_u(g_145, 3))
                    {
                        (*l_147) = p_42;
                        g_72 = (void*)0;

                        ;
                        if (p_42)
                            continue;
                        (*l_49) = l_111;

                        ;
                    }
                }

                ;
                ;
                for (l_134 = 0; (l_134 >= 35); l_134 = safe_add_func_int8_t_s_s(l_134, 1))
                {
                    unsigned short l_168 = 65534UL;
                    unsigned **l_174 = &l_173;
                    short *l_179 = (void*)0;
                    short *l_180 = &g_104;
                    int *l_183 = &l_56;
                    unsigned short *l_187 = &l_168;
                    if ((l_168 | (safe_rshift_func_uint16_t_u_s(((((func_54(p_42) <= (safe_rshift_func_int16_t_s_u((*l_147), p_42))) || (l_111 == ((*l_174) = l_173))) ^ g_102) <= (safe_add_func_int16_t_s_s(((*l_180) = (safe_rshift_func_uint16_t_u_s(g_6, 4))), p_42))), l_181))))
                    {
                        int *l_182 = &l_181;
                        short *l_184 = &g_185;
                        l_183 = l_182;

                        ;
                        (*l_182) = 0x3162A55EL;
                        (*l_49) = l_183;

                        ;
                        (*l_183) = l_186;
                    }
                    else
                    {
                        (*l_49) = &g_6;

                        ;
                        (*l_49) = l_183;

                        ;
                    }

                    ;
                    ;
                    (**l_49) = (((*l_187) = (g_67 >= g_133)) && p_42);
                }

                ;
                (*l_189) = l_188;
                (*l_49) = l_147;

                ;
            }
            else
            {
                char l_192 = 0x08L;
                (*l_147) = ((safe_div_func_int8_t_s_s(l_192, (+(safe_mul_func_uint16_t_u_u(0x633CL, 7UL))))) <= (safe_lshift_func_int8_t_s_s(0x36L, 2)));
            }

            ;
            ;
            g_64 = 0L;
        }

        ;
        ;
    }

    ;
    ;
    for (g_136 = (-22); (g_136 >= 11); g_136 = safe_add_func_uint32_t_u_u(g_136, 2))
    {
        unsigned l_206 = 4294967292UL;
        int l_255 = 0x88D3AE5FL;
        unsigned char *l_271 = &g_102;
        unsigned char **l_270 = &l_271;
        unsigned short *l_298 = &g_299;
        for (g_43 = 0; (g_43 != 1); ++g_43)
        {
            unsigned short *l_202 = (void*)0;
            int *l_203 = &g_64;
            int *l_204 = &l_56;
            int **l_205 = &l_204;
            short *l_224 = (void*)0;
            char *l_225 = &g_67;
            unsigned char **l_272 = &l_271;
            int l_291 = 0x7A817542L;
            unsigned short l_328 = 65528UL;
            (*l_204) = ((*l_203) = (l_201 != l_202));
            (*l_49) = l_204;

            ;
            (*l_205) = ((*l_49) = (void*)0);

            ;
            ;
            if (((l_206 == (safe_lshift_func_uint8_t_u_s((+((safe_rshift_func_uint16_t_u_s(g_185, 11)) & (*l_203))), (9L || p_42)))) && ((0UL == g_43) < (0x34L | p_42))))
            {
                unsigned l_217 = 0x2281F5AFL;
                for (l_149 = 21; (l_149 <= 10); l_149 = safe_sub_func_uint8_t_u_u(l_149, 8))
                {
                    short *l_213 = &g_185;
                    int l_216 = 0L;
                    (*l_203) = (p_42 & ((*l_213) = l_206));
                    for (g_102 = 3; (g_102 == 34); g_102 = safe_add_func_uint16_t_u_u(g_102, 7))
                    {
                        return p_42;
                    }
                    (*l_205) = &g_43;

                    ;
                    l_217 = ((*l_203) = (l_216 = p_42));
                }

                ;
            }
            else
            {
                short *l_223 = &g_185;
                short l_253 = (-10L);
                int l_254 = (-10L);
                unsigned char * const l_260 = &g_102;
                char **l_294 = &l_225;
                char **l_295 = &l_66;
                unsigned short **l_300 = &l_298;
                unsigned short **l_301 = &l_202;
                unsigned char *l_314 = &g_315;
                int *l_316 = (void*)0;
                if (p_42)
                {
                    for (g_64 = 0; (g_64 >= 29); g_64++)
                    {
                        (*l_205) = (*l_49);
                    }
                }
                else
                {
                    short l_231 = 0x790FL;
                    if (p_42)
                    {
                        int l_220 = 5L;
                        (*l_203) = p_42;
                        if (l_220)
                            break;
                        (*l_203) = (((*l_223) = (safe_div_func_uint32_t_u_u(((l_224 = l_223) == l_202), (*l_203)))) ^ (+(((l_225 != l_225) | l_226) <= g_136)));

                        ;
                    }
                    else
                    {
                        char l_236 = 0x6AL;
                        unsigned char *l_241 = &g_102;
                        unsigned *l_242 = &l_206;
                        char l_243 = 0x79L;
                        unsigned ***l_248 = &g_246;
                        g_64 = ((+0x3B70L) > (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((l_231 = (0x140F996AL || p_42)), g_104)) && ((l_236 == ((safe_mod_func_uint32_t_u_u((*l_203), ((*l_242) = ((safe_rshift_func_uint8_t_u_u(p_42, ((*l_241) = p_42))) | 0UL)))) <= l_231)) == 0L)), (*l_203))));
                        (*l_203) = ((l_243 > ((safe_add_func_int8_t_s_s(0L, l_206)) | (((*l_248) = g_246) == (void*)0))) < g_133);
                    }

                    ;
                    if (l_206)
                        break;
                }

                ;
                for (l_226 = 0; (l_226 == (-7)); l_226 = safe_sub_func_int8_t_s_s(l_226, 9))
                {
                    int *l_290 = &g_43;
                    if ((0UL > ((safe_mul_func_int8_t_s_s((((l_255 = (l_254 = l_253)) > (l_206 > ((safe_rshift_func_uint8_t_u_u(((*l_260) = (safe_rshift_func_int8_t_s_s((((l_260 != &p_42) | ((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(p_42, (safe_lshift_func_int16_t_s_u(p_42, 10)))), ((g_64 = (g_267 == (l_272 = l_270))) & 0x2FE5E662L))) ^ 0x22BAL)) & (*g_268)), l_253))), 5)) >= 4294967290UL))) < g_145), g_133)) != p_42)))
                    {
                        int *l_273 = &l_254;
                        int l_287 = 0x9FAA199BL;
                        const char **l_288 = (void*)0;
                        const char ***l_289 = &l_288;
                        l_273 = &g_6;

                        ;
                        l_287 = (safe_mul_func_uint16_t_u_u((0xB9L ^ ((**l_272) = (*l_273))), (0xA2L ^ (safe_div_func_int16_t_s_s(p_42, (safe_mul_func_int8_t_s_s(0x62L, (safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(l_206, g_67)) ^ (safe_unary_minus_func_int8_t_s(((safe_add_func_int8_t_s_s((-8L), 248UL)) == 0x985D862FL)))), 1UL)))))))));
                        (*l_289) = l_288;
                    }
                    else
                    {
                        (*l_203) = (-1L);
                        g_72 = (*l_49);

                        ;
                        (*l_49) = l_290;

                        ;
                    }

                    ;
                    l_291 = (g_64 = p_42);
                    return l_253;
                }
                if (((safe_lshift_func_int16_t_s_s((p_42 >= (((*l_294) = &g_67) == ((*l_295) = &g_67))), p_42)) | ((safe_lshift_func_int16_t_s_s(((l_254 = (((*l_271) = (((*l_301) = ((*l_300) = l_298)) == l_201)) <= (safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_uint8_t_u_s((p_42 >= l_253), 1)) > ((~((safe_lshift_func_uint8_t_u_s(((*l_314) = (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(9L, 2L)), g_104)), p_42))), p_42)) > p_42)) & (*g_268))) ^ g_299) != p_42), p_42)))) & 0x85C5DCDBL), 0)) < p_42)))
                {
                    l_316 = &l_255;

                    ;
                }
                else
                {
                    char l_317 = 9L;
                    int l_318 = 0x9E077B5EL;
                    int l_320 = 0x26D30E98L;
                    if ((!p_42))
                    {
                        int l_319 = (-2L);
                        l_320 = (l_319 = (p_42 ^ (l_318 = (g_67 | l_317))));
                        (*l_203) = p_42;
                        (*l_203) = (((((*g_268) ^ (g_323 = ((*l_66) = ((safe_rshift_func_uint16_t_u_s(l_319, (+(g_104 >= (~(((p_42 || p_42) || g_133) == ((((((((void*)0 == &g_72) < (((void*)0 == &g_247) && g_102)) > 8L) & g_133) || p_42) || (*l_203)) ^ p_42))))))) && (-1L))))) <= p_42) || g_299) != l_319);
                    }
                    else
                    {
                        unsigned l_329 = 4294967292UL;
                        unsigned *l_330 = &l_206;
                        int *l_331 = &l_320;
                        l_318 = p_42;
                        (*l_331) = (g_64 = (safe_div_func_int16_t_s_s(((*l_223) = p_42), (safe_mul_func_uint8_t_u_u((p_42 | ((l_328 || (((*g_268) >= 252UL) <= ((*l_314) = (1UL && ((*l_330) = (p_42 && (((l_329 ^ ((void*)0 != &g_267)) ^ p_42) ^ p_42))))))) | g_43)), p_42)))));
                    }
                    (*l_203) = (p_42 ^ l_320);
                }

                ;
                ;
            }

            ;
            ;
            ;
        }
    }

    ;
    if (((*l_337) = g_64))
    {
        return (*l_337);
    }
    else
    {
        return p_42;
    }
}







static int func_44(int * p_45, short p_46, unsigned char p_47)
{
    unsigned short l_75 = 65534UL;
    char * const l_81 = &g_67;
    int l_89 = 0x05992E41L;
    int l_90 = (-6L);
    if (((void*)0 != &g_43))
    {
        short l_70 = (-1L);
        l_70 = g_64;
    }
    else
    {
        int *l_71 = &g_6;
        g_72 = l_71;

        ;
    }
    for (g_67 = 0; (g_67 == 29); g_67++)
    {
        return l_75;
    }
    for (p_47 = 0; (p_47 <= 6); ++p_47)
    {
        short l_80 = 0x115CL;
        unsigned short l_84 = 0UL;
        int l_97 = 0x837B75AEL;
        for (g_64 = 0; (g_64 != 12); ++g_64)
        {
            return l_80;
        }
        l_90 = (l_80 == (0x10E3A113L <= ((((void*)0 == l_81) == (safe_lshift_func_int8_t_s_u(func_54(l_84), 3))) > (safe_add_func_uint32_t_u_u((l_89 = ((((safe_mod_func_uint16_t_u_u(0UL, p_46)) != p_47) & 5UL) & 0x4351L)), 0xFE1A273DL)))));
        for (g_67 = (-30); (g_67 < 2); g_67 = safe_add_func_uint32_t_u_u(g_67, 5))
        {
            const int l_93 = 0L;
            int *l_94 = &l_90;
            (*l_94) = ((*g_72) || l_93);
        }
        l_97 = (safe_div_func_int32_t_s_s((func_54((p_47 != ((*l_81) = g_67))) | l_84), (*p_45)));
    }
    return (*g_72);
}







static char func_54(unsigned char p_55)
{
    int *l_61 = &g_43;
    int **l_65 = (void*)0;
    for (g_43 = 0; (g_43 == 12); ++g_43)
    {
        int *l_63 = &g_64;
        for (p_55 = 0; (p_55 <= 5); p_55++)
        {
            int **l_62 = (void*)0;
            l_63 = l_61;

            ;
        }

        ;
    }
    l_61 = l_61;
    return (*l_61);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
