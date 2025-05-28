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
   char f0;
   int f1;
};

union U1 {
   int f0;
   char * f1;
   volatile int f2;
   long long f3;
};


static volatile int g_4 = 0x69F7FD1EL;
static char g_12 = (-9L);
static char *g_11 = &g_12;
static int g_52 = 0xBE99B96BL;
static volatile int ***g_62 = (void*)0;
static int g_84 = 0xACE07D3FL;
static union U1 g_109 = {0xF05E375EL};
static union U1 *g_110 = (void*)0;
static volatile int **g_150 = (void*)0;
static union U0 g_236 = {-3L};
static union U1 g_267 = {-7L};
static unsigned char g_278 = 255UL;
static union U0 g_308 = {0x7CL};
static union U0 *g_307 = &g_308;
static char **g_326 = &g_11;
static char ***g_325 = &g_326;
static union U1 g_349 = {0x3D5327A8L};
static union U1 g_351 = {0xABBE95A3L};
static int *g_358 = &g_52;



static long long func_1(void);
static unsigned long long func_5(unsigned short p_6);
static unsigned func_13(char * p_14, char * p_15);
static char * func_16(char * p_17, char * p_18, int p_19);
static char * func_20(char * p_21, short p_22);
static char * func_23(char * p_24, unsigned char p_25, char * p_26, char * p_27, char * p_28);
static char * func_29(char * p_30, char * p_31, char * p_32);
static char * func_33(unsigned short p_34, unsigned char p_35);
static unsigned short func_36(long long p_37, unsigned short p_38);
static unsigned short func_39(char p_40, unsigned p_41);
static long long func_1(void)
{
    char *l_48 = &g_12;
    int l_49 = 9L;
    unsigned short l_50 = 65529UL;
    int *l_401 = &g_52;
    int l_425 = 0x0253A362L;
    char l_428 = 0xEBL;
    if ((safe_div_func_uint64_t_u_u(g_4, func_5(((safe_rshift_func_int16_t_s_s((0x1464F16EL != (!(safe_sub_func_int32_t_s_s((0x79253A34C865B49DLL | ((void*)0 == g_11)), func_13(func_16(func_20(func_23(func_29(func_33(func_36(g_12, func_39((*g_11), (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((((!((((safe_lshift_func_uint8_t_u_s(((l_48 != &g_12) || 0x87A9B65CL), (*g_11))) > l_49) == g_12) | g_12)) ^ l_50) ^ 3UL), l_49)), g_12)))), g_12), &g_12, l_48), g_12, &g_12, l_48, &g_12), g_236.f0), (*g_326), l_49), (*g_326)))))), g_308.f0)) > g_267.f0)))))
    {
        int *l_398 = &g_84;
        int **l_399 = (void*)0;
        int **l_400 = &l_398;
        char *l_415 = &g_308.f0;
        (*l_400) = l_398;
        (*l_400) = l_401;

        ;
        for (g_308.f1 = 0; (g_308.f1 <= 28); g_308.f1 = safe_add_func_int16_t_s_s(g_308.f1, 1))
        {
            unsigned l_408 = 0x7F1DE010L;
            char **l_409 = &g_11;
            int l_414 = 0x7ADF952FL;
            l_414 = ((func_5(g_308.f1) ^ ((void*)0 != &g_110)) && (safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((((l_408 & (l_409 == l_409)) || ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(g_308.f1, g_84)), g_267.f0)) | (*l_398))) && l_408), g_109.f2)), 0x6ACC92EB9C0AF9B3LL)));
            (**l_400) = ((+((void*)0 == &g_351)) != func_13(l_415, (*g_326)));
            return g_349.f2;
        }

        for (g_84 = 0; (g_84 != 27); ++g_84)
        {
            int *l_421 = &g_52;
            for (g_52 = 0; (g_52 <= 14); ++g_52)
            {
                unsigned short l_420 = 0x445DL;
                return l_420;
            }
            g_358 = l_421;

            ;
            (*l_400) = l_421;
        }

        ;
    }
    else
    {
        char *l_424 = &g_12;
        unsigned l_429 = 0x1E11CBF9L;
        unsigned l_430 = 0xFE8AFEDDL;
        (*l_401) = (func_13(l_48, func_20(l_424, g_349.f0)) ^ ((((l_425 <= (safe_lshift_func_int8_t_s_u(((l_428 & l_429) | g_351.f2), g_349.f0))) || 0x50L) == 0xE036L) >= l_430));
    }

    ;
    ;
    ;
    for (g_52 = 0; (g_52 >= 17); g_52 = safe_add_func_uint32_t_u_u(g_52, 2))
    {
        unsigned short l_433 = 65535UL;
        int *l_434 = &g_84;
        int **l_439 = &g_358;
        (*l_434) = l_433;
        for (g_12 = 0; (g_12 != 7); ++g_12)
        {
            int *l_437 = &g_84;
            int **l_438 = &l_401;
            (*l_438) = l_437;

            ;
        }
        (*l_439) = l_434;

        ;
    }

    ;
    ;
    return (*l_401);
}







static unsigned long long func_5(unsigned short p_6)
{
    long long l_395 = (-1L);
    char ***l_396 = &g_326;
    int *l_397 = &g_84;
    (*l_397) = ((safe_rshift_func_int8_t_s_s((l_395 > (l_396 != &g_326)), (*g_11))) == (l_396 == (void*)0));
    return g_84;
}







static unsigned func_13(char * p_14, char * p_15)
{
    int *l_389 = &g_52;
    unsigned l_390 = 0xB98880EEL;
    (*l_389) = (0xD817L >= (!5UL));
    g_358 = (void*)0;

    ;
    return l_390;
}







static char * func_16(char * p_17, char * p_18, int p_19)
{
    int *l_384 = (void*)0;
    int **l_385 = &l_384;
    char *l_388 = (void*)0;
    (*l_385) = l_384;
    for (g_12 = 0; (g_12 > 3); g_12++)
    {
        (*l_385) = &g_52;

        ;
    }

    ;
    return l_388;


}







static char * func_20(char * p_21, short p_22)
{
    unsigned l_255 = 0x0DC92597L;
    int **l_256 = (void*)0;
    unsigned l_324 = 4294967288UL;
    int l_344 = (-1L);
    int l_345 = (-7L);
    union U1 *l_348 = &g_349;
    char *l_383 = &g_12;
    if (((*p_21) != l_255))
    {
        int ***l_257 = &l_256;
        union U1 *l_266 = &g_267;
        int *l_270 = &g_52;
        (*l_257) = l_256;
        for (p_22 = 0; (p_22 == (-4)); p_22 = safe_sub_func_uint64_t_u_u(p_22, 7))
        {
            int **l_260 = (void*)0;
            int **l_261 = (void*)0;
            int *l_263 = &g_84;
            int **l_262 = &l_263;
            (*l_262) = (void*)0;

            ;
            if (p_22)
                break;
            for (g_236.f0 = (-16); (g_236.f0 == 17); g_236.f0 = safe_add_func_int64_t_s_s(g_236.f0, 5))
            {
                return p_21;


            }
        }
        l_266 = l_266;
        (*l_270) = (safe_sub_func_uint16_t_u_u((p_22 & 0xEE441331L), (p_22 == p_22)));
    }
    else
    {
        int l_271 = 0xD410FCCDL;
        union U0 *l_305 = &g_236;
        int l_327 = (-9L);
        if (l_271)
        {
            long long l_279 = 4L;
            char **l_283 = &g_11;
            char ***l_282 = &l_283;
            int *l_335 = &g_84;
            int **l_334 = &l_335;
            if (((safe_sub_func_int32_t_s_s(func_39((&g_12 != &g_12), p_22), (((safe_div_func_uint64_t_u_u((!(p_22 & (g_109.f0 == ((*p_21) & (safe_mod_func_uint32_t_u_u(p_22, g_278)))))), l_279)) == g_278) | l_279))) ^ 0xFBB33ED7L))
            {
                int *l_284 = (void*)0;
                int *l_285 = &g_52;
                (*l_285) = (safe_add_func_int8_t_s_s(0x52L, ((void*)0 != l_282)));
                (*l_285) = ((func_36(p_22, g_52) || ((safe_rshift_func_uint8_t_u_u((l_279 || (safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(l_271, 0x32706B0FL)), (((g_267.f0 != (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(((*p_21) || ((void*)0 == &l_271)), (*p_21))), g_12))) <= 0x1364F4DCL) && 0xA7L)))), p_22)) || 0L)) || p_22);
                for (g_236.f0 = 0; (g_236.f0 > 8); ++g_236.f0)
                {
                    short l_302 = (-1L);
                    if ((*l_285))
                        break;
                    for (g_278 = 8; (g_278 == 36); g_278 = safe_add_func_uint8_t_u_u(g_278, 2))
                    {
                        return &g_12;


                    }
                    l_302 = l_279;
                    for (l_302 = 4; (l_302 < (-16)); --l_302)
                    {
                        union U0 **l_306 = (void*)0;
                        g_307 = l_305;

                        ;
                        (*l_285) = l_279;
                    }
                }
                if (((safe_div_func_int32_t_s_s((safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((g_84 < (safe_div_func_uint16_t_u_u(l_271, p_22))), 14)), 0)), l_271)), (((safe_add_func_uint8_t_u_u(p_22, 0xA4L)) < ((safe_unary_minus_func_uint32_t_u(0x9E3FC97EL)) || ((l_271 || (safe_sub_func_uint8_t_u_u(g_52, (*g_11)))) ^ l_324))) && g_236.f0))) <= p_22))
                {
                    int ***l_336 = (void*)0;
                    int ***l_337 = &l_256;
                    (*l_285) = ((((g_325 != &g_326) < g_308.f0) || func_36(((func_39(l_279, l_327) ^ l_279) == ((safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s(g_267.f0, ((safe_lshift_func_int16_t_s_s((l_279 >= p_22), 7)) || (*g_11)))), 0x0BL)) >= p_22)), l_271)) | p_22);
                    (*l_337) = l_334;

                    ;
                    if ((*l_285))
                    {
                        long long l_338 = 1L;
                        (**l_256) = (0UL == g_84);
                        l_338 = p_22;
                    }
                    else
                    {
                        union U1 **l_339 = &g_110;
                        (*l_339) = g_110;
                        (**l_334) = p_22;
                        (*l_334) = (*l_334);
                    }
                }
                else
                {
                    union U0 **l_340 = (void*)0;
                    union U0 **l_341 = &l_305;
                    (*l_341) = (void*)0;

                    ;
                }

                ;
                ;
            }
            else
            {
                (**l_334) = (**l_334);
            }

            ;
            ;
            l_345 = ((safe_rshift_func_uint16_t_u_u(65531UL, p_22)) ^ ((g_52 <= ((void*)0 != g_110)) >= ((l_344 | g_12) <= 0x0364L)));
            (*l_335) = (l_271 >= g_236.f0);
        }
        else
        {
            union U1 *l_350 = &g_351;
            int l_356 = 1L;
            union U1 **l_359 = &l_348;
            char *l_368 = &g_308.f0;
            char l_381 = (-1L);
            int **l_382 = &g_358;
            if ((safe_rshift_func_int8_t_s_u((l_348 != l_350), 1)))
            {
                int *l_357 = &g_52;
                for (l_271 = 0; (l_271 != (-4)); l_271 = safe_sub_func_int8_t_s_s(l_271, 8))
                {
                    union U0 **l_355 = &l_305;
                    union U0 ***l_354 = &l_355;
                    (*l_354) = (void*)0;

                    ;
                    if (l_356)
                        continue;
                }
                g_358 = l_357;

                ;
                l_271 = l_271;
                if ((*g_358))
                {
                    int *l_360 = &l_356;
                    l_359 = &l_348;
                    l_360 = (void*)0;

                    ;
                }
                else
                {
                    int **l_361 = &g_358;
                    (*l_361) = l_357;
                }
            }
            else
            {
                int *l_362 = &g_84;
                int **l_363 = &l_362;
                char l_373 = 0x57L;
                (*l_363) = l_362;
                for (l_255 = (-18); (l_255 != 57); ++l_255)
                {
                    unsigned l_378 = 0x2C697FA2L;
                    (*l_362) = (safe_div_func_int16_t_s_s((((void*)0 != l_368) || ((safe_mul_func_uint32_t_u_u(l_327, (!(safe_rshift_func_int8_t_s_u(l_373, (safe_add_func_uint8_t_u_u(0x78L, (((safe_lshift_func_uint16_t_u_s((func_39((*p_21), l_378) != (safe_rshift_func_uint8_t_u_s(g_267.f0, 3))), 1)) < (**l_363)) && (*l_362))))))))) != g_84)), l_381));
                    return (*g_326);


                }
                (*l_362) = 0x95556C42L;
            }
            (*l_382) = &l_356;

            ;
        }


        ;

    }



    return l_383;


}







static char * func_23(char * p_24, unsigned char p_25, char * p_26, char * p_27, char * p_28)
{
    int l_104 = 5L;
    char **l_106 = &g_11;
    union U1 *l_108 = &g_109;
    long long l_120 = 1L;
    short l_121 = 0x8F4DL;
    long long l_162 = 9L;
    unsigned long long l_207 = 0x8C7A647BA958F487LL;
    int **l_226 = (void*)0;
    union U0 *l_238 = &g_236;
    int l_241 = 0xCE7D4CFFL;
    int *l_254 = &g_84;
    for (g_52 = 0; (g_52 >= 16); ++g_52)
    {
        int *l_105 = &g_84;
        char ***l_107 = &l_106;
        (*l_105) = (5UL & (g_12 & (~(l_104 || l_104))));
        (*l_105) = (1UL || (*p_26));
        if (g_12)
            continue;
        (*l_107) = l_106;
    }
    g_110 = l_108;

    ;
    if ((~p_25))
    {
        unsigned short l_117 = 0xC801L;
        int l_122 = 0xBD20A5AEL;
        l_122 = ((g_84 || (((+(!(((p_25 < p_25) >= ((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(g_84, l_117)), (safe_sub_func_uint64_t_u_u(l_104, ((func_39((*g_11), l_120) != l_121) < p_25))))), l_117)) <= l_117)) == 18446744073709551615UL))) || 0x4DL) == 0x5CAF2BF2F772618ALL)) > p_25);
        for (l_121 = 0; (l_121 >= 0); l_121 = safe_add_func_int16_t_s_s(l_121, 6))
        {
            int *l_140 = &l_122;
            int **l_139 = &l_140;
            for (g_52 = 24; (g_52 > 3); g_52 = safe_sub_func_uint32_t_u_u(g_52, 9))
            {
                unsigned l_127 = 0x7F426174L;
                int l_128 = (-6L);
                int *l_138 = &g_52;
                int **l_137 = &l_138;
                if ((l_104 | (l_127 > (+l_128))))
                {
                    int *l_130 = &g_84;
                    int **l_129 = &l_130;
                    (*l_129) = &l_122;

                    ;
                    (*l_130) = p_25;
                }
                else
                {
                    int *l_132 = &l_128;
                    int **l_131 = &l_132;
                    unsigned l_142 = 18446744073709551615UL;
                    (*l_131) = &l_122;

                    ;
                    (**l_139) = ((((safe_mod_func_int8_t_s_s((**l_131), (safe_lshift_func_int8_t_s_u((*p_28), (((l_137 != l_139) < (p_25 && p_25)) < g_109.f0))))) == (*l_132)) & g_109.f0) >= p_25);
                    if (g_84)
                    {
                        int *l_141 = (void*)0;
                        (**l_131) = 0x24104B6AL;
                        (*l_131) = l_141;

                        ;
                        (*l_131) = (*l_139);

                        ;
                        (**l_131) = (g_12 != (((*l_140) | (l_142 && (!(*l_140)))) & (~(~((*l_140) <= 4294967295UL)))));
                    }
                    else
                    {
                        return p_27;


                    }
                }
            }
            if (p_25)
                break;
            if ((safe_add_func_uint16_t_u_u(p_25, ((void*)0 != &l_139))))
            {
                if (p_25)
                    break;
                (**l_139) = p_25;
            }
            else
            {
                int **l_149 = &l_140;
                (**l_139) = 0L;
                (*l_140) = (~((safe_mod_func_uint16_t_u_u(((l_149 != g_150) & (g_109.f0 > ((0L < (**l_149)) & (safe_mod_func_uint16_t_u_u(((0L & func_36(g_109.f0, g_84)) <= p_25), (-8L)))))), p_25)) == g_109.f0));
                (**l_149) = ((void*)0 == p_28);
                (*l_139) = &l_122;
            }
            (*l_140) = p_25;
        }
    }
    else
    {
        unsigned long long l_155 = 0x874A55526D78DB7ELL;
        int *l_161 = &g_52;
        int l_228 = (-10L);
        union U0 *l_235 = &g_236;
        unsigned char l_245 = 1UL;
        short l_250 = 0x0B35L;
        int *l_251 = &g_84;
        if ((!p_25))
        {
            unsigned l_158 = 18446744073709551610UL;
            int l_200 = 1L;
            if ((safe_rshift_func_int16_t_s_u(l_155, (safe_lshift_func_uint8_t_u_s((g_52 < (((p_25 > (l_158 < ((safe_rshift_func_uint8_t_u_u(l_121, 6)) & ((l_161 == l_161) & l_120)))) <= l_162) > 0x5B8CCF7814A766FELL)), 7)))))
            {
                unsigned short l_187 = 0x80EFL;
                (*l_161) = ((((safe_add_func_uint16_t_u_u(l_104, (safe_lshift_func_uint8_t_u_s(g_52, (((safe_sub_func_uint32_t_u_u((g_52 != (safe_lshift_func_uint16_t_u_u(l_158, ((((!(-1L)) >= p_25) & 0UL) | ((g_109.f0 || (&g_11 == &g_11)) != (*l_161)))))), l_121)) <= g_52) & p_25))))) < (-10L)) & p_25) != p_25);
                (*l_161) = func_39((*p_27), (safe_add_func_uint64_t_u_u(18446744073709551615UL, (safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(p_25, 7)) > (((safe_div_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(l_187, p_25)) ^ (((void*)0 != &l_106) == l_187)), (*p_26))) == p_25) ^ 0UL)), 9)), (*p_26))), 8L)))));
            }
            else
            {
                char l_188 = 0x70L;
                int *l_192 = &g_52;
                (*l_161) = (l_188 <= g_12);
                for (g_52 = 0; (g_52 >= (-4)); g_52--)
                {
                    int *l_191 = &g_84;
                    int **l_193 = &l_161;
                    (*l_191) = 0x667AAD10L;
                    (*l_193) = l_192;
                    l_200 = ((0UL > (safe_mod_func_uint16_t_u_u((((p_25 & ((safe_rshift_func_int16_t_s_s(g_84, 9)) ^ (*l_192))) ^ (*p_26)) && (safe_sub_func_uint32_t_u_u(p_25, (~g_12)))), 0x615FL))) != (p_25 > (*l_192)));
                }
                (*l_192) = (*l_192);
                (*l_192) = p_25;
            }
        }
        else
        {
            int *l_201 = (void*)0;
            int **l_202 = &l_161;
            short l_216 = (-1L);
            (*l_202) = l_201;

            ;
            if ((safe_mod_func_uint16_t_u_u(func_36(g_12, (safe_mod_func_uint32_t_u_u((l_207 | (safe_div_func_int64_t_s_s((4294967295UL >= (safe_lshift_func_uint8_t_u_s(0xFEL, 3))), ((((((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(((func_39(func_39((*p_26), l_216), (safe_rshift_func_uint8_t_u_s((((safe_lshift_func_uint8_t_u_u(g_12, g_84)) == 0x604D86CBL) > (-6L)), 2))) == 0xC8L) <= l_121), 4294967293UL)), p_25)) && p_25) >= 0x7DC8L) == g_12) == 0x74L) && 0x4DE4L)))), g_12))), p_25)))
            {
                char l_225 = 0L;
                int **l_227 = &l_161;
                l_228 = func_36((p_25 & (func_36((safe_mod_func_uint8_t_u_u((((void*)0 != g_110) < 251UL), 0xD9L)), p_25) ^ (l_225 < (l_226 == l_227)))), g_12);
                (*l_227) = &l_228;

                ;
                (*l_161) = func_36((g_109.f0 && (0x4045L > ((safe_add_func_uint32_t_u_u(0xCF728D4AL, (g_12 & func_36((safe_rshift_func_uint16_t_u_s(0xF6C9L, 6)), (**l_202))))) & (~0x7AL)))), p_25);
            }
            else
            {
                union U0 **l_237 = &l_235;
                (*l_237) = l_235;
                l_235 = l_238;
            }

            ;
            g_84 = g_236.f0;
            for (l_228 = 0; (l_228 > (-28)); l_228--)
            {
                char l_242 = 0x9FL;
                l_241 = (-7L);
                if (l_242)
                    break;
            }
        }

        ;
        (*l_251) = ((((*g_11) && ((g_12 > (g_52 != l_245)) > 0x364CD47AL)) != ((safe_sub_func_int64_t_s_s((((safe_mod_func_uint32_t_u_u(((-7L) < ((*p_28) <= l_228)), (g_236.f0 | l_250))) > g_236.f0) != g_52), g_12)) & g_236.f0)) & g_12);
        (*l_251) = g_52;
        g_84 = g_109.f0;
    }
    (*l_254) = (!((func_39(((safe_add_func_int64_t_s_s(g_84, p_25)) != g_236.f0), g_236.f0) && p_25) ^ g_84));
    return p_28;


}







static char * func_29(char * p_30, char * p_31, char * p_32)
{
    char *l_79 = &g_12;
    int l_90 = 0xF2B3A76CL;
    short l_98 = (-1L);
    int *l_101 = &g_52;
    for (g_52 = (-7); (g_52 <= (-21)); g_52 = safe_sub_func_uint32_t_u_u(g_52, 3))
    {
        unsigned l_80 = 0UL;
        int *l_100 = (void*)0;
        int **l_99 = &l_100;
        if (((l_79 == (void*)0) < (4UL <= (g_52 && (g_12 | (!l_80))))))
        {
            int *l_81 = (void*)0;
            int *l_82 = (void*)0;
            int *l_83 = &g_84;
            (*l_83) = 0xD5900A0DL;
        }
        else
        {
            char *l_87 = &g_12;
            int *l_97 = (void*)0;
            int **l_96 = &l_97;
            int ***l_95 = &l_96;
            l_90 = (((safe_sub_func_int8_t_s_s(((l_87 == p_32) || (safe_div_func_uint32_t_u_u(l_90, l_90))), (safe_mod_func_int32_t_s_s(1L, g_84)))) <= 0L) < (safe_div_func_int32_t_s_s(((((void*)0 == l_95) > g_12) & l_90), l_98)));
            return l_87;


        }
        (*l_99) = (void*)0;
        (*l_99) = (*l_99);
    }
    (*l_101) = 0xBC4FF04DL;
    return &g_12;


}







static char * func_33(unsigned short p_34, unsigned char p_35)
{
    int *l_73 = &g_52;
    int **l_74 = (void*)0;
    int **l_75 = &l_73;
    char *l_76 = (void*)0;
    (*l_75) = l_73;
    return l_76;


}







static unsigned short func_36(long long p_37, unsigned short p_38)
{
    int l_53 = 0L;
    int *l_55 = &g_52;
    int **l_54 = &l_55;
    char l_67 = 0x3BL;
    int *l_72 = &g_52;
    if ((((-1L) ^ 0x563ADE45L) | (p_38 <= l_53)))
    {
        int **l_57 = &l_55;
        if (l_53)
        {
            int ***l_56 = &l_54;
            (*l_56) = l_54;
            (**l_54) = (l_57 != (*l_56));
            (**l_54) = (&l_54 != &l_57);
        }
        else
        {
            (*l_55) = (g_52 | 252UL);
        }
        (**l_57) = (safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((p_37 || ((g_62 != g_62) & 0x2D86L)) | (func_39(func_39((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(p_37, p_37)), l_67)), g_52), g_12) <= 0L)), g_12)), p_37));
        (*l_54) = (*l_54);
    }
    else
    {
        int *l_68 = (void*)0;
        (*l_54) = l_68;

        ;
        for (p_38 = 10; (p_38 < 48); p_38 = safe_add_func_uint8_t_u_u(p_38, 1))
        {
            int *l_71 = &g_52;
            (*l_54) = l_71;

            ;
            (*l_54) = l_72;
        }

        ;
    }

    ;
    (*l_54) = (*l_54);
    return p_38;
}







static unsigned short func_39(char p_40, unsigned p_41)
{
    int *l_51 = &g_52;
    (*l_51) = p_40;
    return g_52;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_109.f2, "g_109.f2", print_hash_value);
    transparent_crc(g_236.f0, "g_236.f0", print_hash_value);
    transparent_crc(g_267.f0, "g_267.f0", print_hash_value);
    transparent_crc(g_267.f2, "g_267.f2", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_308.f0, "g_308.f0", print_hash_value);
    transparent_crc(g_349.f0, "g_349.f0", print_hash_value);
    transparent_crc(g_349.f2, "g_349.f2", print_hash_value);
    transparent_crc(g_351.f0, "g_351.f0", print_hash_value);
    transparent_crc(g_351.f2, "g_351.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
