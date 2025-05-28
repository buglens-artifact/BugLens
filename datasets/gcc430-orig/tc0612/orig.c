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


struct S0 {
   unsigned f0 : 6;
   signed f1 : 5;
   signed f2 : 20;
   char f3;
   signed f4 : 24;
   unsigned f5 : 6;
   signed f6 : 17;
};


static char g_6 = 1L;
static short g_16 = (-1L);
static int g_19 = 1L;
static short *g_35 = (void*)0;
static short **g_34 = &g_35;
static struct S0 g_61 = {1,4,-213,0xFEL,-1784,0,-52};
static char g_71 = (-1L);
static char g_72 = 0xD6L;
static int *g_74 = (void*)0;
static short g_105 = 0L;
static struct S0 g_185 = {0,3,374,1L,2531,3,149};
static int g_200 = 0L;
static int *g_199 = &g_200;
static unsigned g_221 = 0xA8154FD2L;
static unsigned g_225 = 0x23B7A216L;
static int g_258 = 0xC67EB79DL;
static int *g_257 = &g_258;
static int **g_256 = &g_257;
static unsigned char *g_263 = (void*)0;
static unsigned char **g_262 = &g_263;
static unsigned char g_266 = 1UL;
static int *g_284 = &g_200;
static unsigned short g_304 = 0UL;
static struct S0 g_309 = {3,-1,466,-1L,-430,6,274};
static unsigned *g_394 = &g_221;
static unsigned **g_393 = &g_394;
static unsigned short *g_436 = &g_304;
static unsigned short **g_435 = &g_436;
static unsigned short ***g_434 = &g_435;
static unsigned char g_446 = 1UL;
static int g_506 = 0x91020976L;
static struct S0 *g_574 = &g_185;
static struct S0 **g_595 = (void*)0;
static int g_711 = (-8L);



static int func_1(void);
static struct S0 func_2(char p_3, unsigned short p_4, short p_5);
static unsigned short func_10(unsigned p_11, unsigned p_12);
static unsigned func_13(short p_14);
static int func_22(int p_23, short ** p_24, short p_25, int p_26, int p_27);
static short ** func_28(short ** p_29, unsigned short p_30, int p_31, struct S0 p_32, unsigned char p_33);
static char func_40(int p_41, char p_42, unsigned p_43, int * p_44);
static short * func_47(unsigned p_48);
static int * func_49(short * p_50, short ** p_51, short * p_52, int p_53, int p_54);
static short * func_56(int p_57, struct S0 p_58, int * p_59, short * p_60);
static int func_1(void)
{
    struct S0 *l_310 = &g_185;
    int l_311 = (-5L);
    unsigned l_314 = 0UL;
    struct S0 *l_315 = &g_61;
    unsigned l_322 = 7UL;
    short ***l_323 = (void*)0;
    short ***l_324 = &g_34;
    unsigned short *l_356 = &g_304;
    short l_365 = 0x8AD4L;
    unsigned char **l_407 = &g_263;
    short l_421 = (-1L);
    char l_494 = 9L;
    int *l_496 = &g_200;
    unsigned short ***l_501 = &g_435;
    char l_508 = 0x4AL;
    int *l_578 = (void*)0;
    char l_623 = 3L;
    int *l_666 = &g_19;
    unsigned char l_694 = 0x31L;
    unsigned char l_695 = 249UL;
    (*l_310) = func_2(g_6, g_6, g_6);
    (*l_324) = func_28(&g_35, l_311, (safe_add_func_uint8_t_u_u(251UL, (g_6 & l_314))), ((*l_315) = ((*l_310) = (*l_310))), (0xDCL && (safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(g_309.f5, 5)) <= ((safe_lshift_func_int8_t_s_u((-1L), 5)) <= l_322)), l_311))));
    if (l_322)
    {
        int *l_327 = &g_200;
        unsigned l_369 = 4294967295UL;
        int **l_396 = &g_74;
        for (g_19 = 21; (g_19 != (-5)); --g_19)
        {
            int **l_328 = (void*)0;
            int **l_329 = &g_199;
            struct S0 l_333 = {5,4,-64,-1L,2097,0,-111};
            unsigned short *l_342 = &g_304;
            unsigned short **l_341 = &l_342;
            int l_358 = 0xB126F15CL;
            char l_359 = 7L;
            int l_392 = 0x80A53CEBL;
            (*l_310) = g_309;
            (*l_329) = l_327;
        }
        (*l_396) = (void*)0;
        return (*g_284);
    }
    else
    {
        char l_397 = 1L;
        int l_398 = 0x4DD99563L;
        struct S0 l_422 = {3,0,-1017,5L,304,1,89};
        unsigned char *l_430 = &g_266;
        char l_439 = 0xE2L;
        short *l_493 = &g_105;
        short **l_492 = &l_493;
        int **l_495 = (void*)0;
        unsigned short l_522 = 3UL;
        char *l_560 = &l_508;
        char **l_559 = &l_560;
        struct S0 **l_594 = &l_315;
        char l_603 = 0L;
        if (l_397)
        {
            unsigned char ***l_399 = &g_262;
            (*l_310) = func_2(l_398, (((*l_399) = &g_263) == (void*)0), g_200);
        }
        else
        {
            unsigned char l_406 = 0UL;
            int l_412 = 1L;
            unsigned short l_413 = 0x0270L;
            int l_443 = 0L;
            unsigned short **l_480 = &g_436;
            char *l_489 = &g_71;
            char **l_488 = &l_489;
            if ((safe_mul_func_int8_t_s_s(l_311, (safe_mul_func_int16_t_s_s(func_10(func_13((safe_sub_func_int32_t_s_s((l_397 | (l_365 <= (g_200 != (l_406 = l_365)))), ((void*)0 != l_407)))), ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((l_311 > g_309.f4), l_412)), l_397)) != l_412)), l_412)))))
            {
                (*g_74) = (l_413 = l_398);
            }
            else
            {
                unsigned short l_418 = 0xBF9FL;
                short **l_424 = &g_35;
                short ***l_423 = &l_424;
                int **l_425 = (void*)0;
                int **l_426 = (void*)0;
                int **l_427 = &g_199;
                (*l_427) = func_49((*g_34), ((*l_423) = func_28(func_28((*l_324), l_365, (((*l_356) = ((void*)0 != &g_309)) > (safe_mod_func_int8_t_s_s((l_418 && 0UL), ((l_311 = (safe_rshift_func_uint8_t_u_s(2UL, l_322))) & 1L)))), g_61, l_421), g_61.f2, (*g_199), l_422, l_413)), (*g_34), (*g_257), l_418);
            }
            (*g_284) = 0xE7B2FF7DL;
            for (g_71 = 0; (g_71 < 0); g_71 = safe_add_func_int8_t_s_s(g_71, 7))
            {
                int l_442 = 0xA1F68E58L;
                int l_462 = 2L;
                unsigned short l_469 = 0xBA20L;
                int *l_470 = &l_311;
                if (((void*)0 != l_430))
                {
                    int **l_431 = &g_284;
                    unsigned char *l_444 = &l_406;
                    unsigned char *l_445 = &g_446;
                    struct S0 l_447 = {1,0,1004,0L,1013,7,-118};
                    unsigned l_481 = 0x37563791L;
                    (*l_431) = (void*)0;
                    if ((safe_mod_func_uint8_t_u_u((g_72 == (g_16 = (((void*)0 != g_434) | 0x3014L))), ((*l_445) = (safe_rshift_func_uint8_t_u_u(((*l_444) = ((*l_430) = (3L != (((((**g_435) = (0x48L < l_439)) || (0x14L < (safe_add_func_uint32_t_u_u((l_443 = l_442), l_442)))) > (-6L)) & 0UL)))), 7))))))
                    {
                        (*g_199) = (*g_199);
                        (*l_431) = &g_200;
                        return (**l_431);
                    }
                    else
                    {
                        int *l_450 = &l_311;
                        l_447 = g_185;
                        (*l_431) = &g_19;
                        (*l_450) = ((*g_74) = (safe_lshift_func_int16_t_s_u(l_442, 11)));
                        if ((*l_450))
                            continue;
                    }
                    for (g_304 = 26; (g_304 > 9); --g_304)
                    {
                        char *l_457 = &g_72;
                        (*g_74) = (((((**l_431) <= ((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((**l_431), ((*l_457) = 0x67L))), (g_16 & ((safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u((l_462 = (**g_393)), (**l_431))), (safe_mod_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(l_442, (l_469 | ((**l_431) & 0x26L)))), (**g_393))) > (*g_74)), l_442)))) < 0xEA14L)))) & 0x7228L)) && 0xB9L) && g_309.f5) | (*g_74));
                        l_470 = ((*l_431) = &l_311);
                    }
                    if ((safe_mod_func_int32_t_s_s(((*g_74) = (-10L)), 4294967295UL)))
                    {
                        struct S0 l_473 = {1,3,-285,0x5DL,-2778,5,-219};
                        (*l_470) = (l_422.f0 < ((*l_470) <= (5L <= (**g_393))));
                        (*l_315) = l_473;
                        l_462 = (safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((*g_199) = (l_422.f0 ^ l_412)), (safe_lshift_func_uint8_t_u_s(((g_185.f4 == (l_480 != (void*)0)) && l_481), (safe_mod_func_int32_t_s_s(l_412, ((*l_470) = 0x836B807CL))))))), (0x24DEL && (*g_436))));
                    }
                    else
                    {
                        int *l_484 = &g_19;
                        l_484 = &g_200;
                        (*l_431) = &l_311;
                    }
                }
                else
                {
                    struct S0 **l_485 = &l_310;
                    (*l_485) = (void*)0;
                }
            }
            (*g_74) = (safe_lshift_func_int16_t_s_u((((*l_488) = &g_6) != &g_6), (safe_mul_func_uint16_t_u_u((l_322 != (**g_393)), (((func_10(g_61.f0, ((+0xD6E4L) | g_309.f0)) && l_413) > 1UL) ^ l_443)))));
        }
        l_496 = func_49(((*g_34) = func_47(l_322)), l_492, (*l_492), (*g_257), l_494);
        (*l_315) = (*l_315);
        for (g_309.f3 = (-13); (g_309.f3 >= 4); g_309.f3++)
        {
            unsigned l_507 = 0xD963E11DL;
            unsigned l_524 = 0x759C2A9BL;
            short *l_525 = &l_365;
            unsigned l_572 = 0UL;
            int ***l_592 = &g_256;
            short **l_597 = &l_493;
            char **l_644 = &l_560;
            short l_656 = 0xBB8AL;
            char l_661 = 0L;
            if (((((safe_mod_func_int16_t_s_s(((*l_493) = (((*l_496) = ((func_10((*l_496), (**g_393)) != (l_501 == &g_435)) == 0xF2C54B80L)) ^ 1UL)), 0xA4B2L)) > (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((g_506 | 0xFE4BD269L), l_507)), l_507))) != l_508) > (-1L)))
            {
                unsigned char l_513 = 1UL;
                int l_523 = 0L;
                short *l_526 = &g_16;
                int l_546 = 0xEA7D278EL;
                for (l_397 = 0; (l_397 == 11); l_397 = safe_add_func_int16_t_s_s(l_397, 5))
                {
                    char l_543 = 2L;
                    char *l_558 = &g_61.f3;
                    char **l_557 = &l_558;
                    if (l_524)
                    {
                        int l_544 = 0x18DFF73FL;
                        char *l_545 = &l_508;
                        int **l_547 = &l_496;
                        (*l_547) = func_49(l_525, &l_493, l_526, (safe_mul_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(((l_546 = ((*l_545) = (safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(((*l_356) = (safe_mod_func_uint32_t_u_u(func_40(((safe_sub_func_int16_t_s_s((*l_496), (g_185.f4 != 2L))) <= 0x5FFB039BL), l_513, (g_309.f3 | 0x5239L), &g_200), (*g_394)))), l_543)) ^ l_544), (**g_393))), l_544)), 10)))) <= g_200), l_523)) <= l_544), 1UL)), g_309.f3);
                        (*g_284) = (*g_284);
                    }
                    else
                    {
                        short l_550 = 9L;
                        (*g_284) = (0xA0L && (safe_mul_func_uint8_t_u_u((*l_496), l_543)));
                        return l_513;
                    }
                    l_559 = l_557;
                }
            }
            else
            {
                unsigned char l_573 = 0x25L;
                unsigned l_581 = 0xA4B42C56L;
                int l_587 = 0x9A4C5D21L;
                short *l_596 = &g_105;
                if ((*g_74))
                {
                    int **l_561 = &g_284;
                    (*g_284) = (*g_199);
                    g_74 = ((*l_561) = &g_200);
                }
                else
                {
                    unsigned char l_568 = 0x45L;
                    unsigned l_571 = 0UL;
                    for (g_258 = 0; (g_258 < 29); ++g_258)
                    {
                        if (l_524)
                            break;
                        (*g_199) = (*g_284);
                        g_284 = &g_200;
                    }
                    if (((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((*l_496), (-1L))), l_573)) | l_507))
                    {
                        int *l_575 = (void*)0;
                        int **l_576 = &g_199;
                        g_574 = &g_185;
                        (*l_576) = l_575;
                        return (*g_74);
                    }
                    else
                    {
                        unsigned l_577 = 0xCCF84908L;
                        return l_577;
                    }
                }
                l_578 = l_578;
                for (l_507 = 0; (l_507 > 31); l_507++)
                {
                    short *l_593 = &g_16;
                    short *l_598 = &l_421;
                    int l_615 = 0xC6087E68L;
                    unsigned l_618 = 0xA16A8D98L;
                    unsigned char l_622 = 0xB1L;
                    if (l_573)
                    {
                        return (*g_284);
                    }
                    else
                    {
                        g_199 = &g_506;
                        (*g_284) = ((**g_435) && (l_581 || ((***g_434) < 65533UL)));
                    }
                    (*g_199) = (*g_199);
                    for (l_524 = 0; (l_524 > 43); l_524++)
                    {
                        unsigned char l_586 = 0xC6L;
                        l_587 = (safe_sub_func_int8_t_s_s((~(-1L)), (l_586 || l_524)));
                    }
                }
                (*g_574) = (*g_574);
            }
            for (g_266 = 0; (g_266 < 34); g_266++)
            {
                struct S0 *l_640 = &g_61;
                unsigned char *l_645 = &g_446;
                l_640 = l_315;
                for (g_61.f3 = 24; (g_61.f3 > 8); g_61.f3 = safe_sub_func_uint16_t_u_u(g_61.f3, 1))
                {
                    short **l_643 = &l_525;
                    (*g_574) = (*g_574);
                    (*g_74) = (((l_643 != &l_493) ^ (2UL > ((void*)0 == &g_574))) ^ ((void*)0 != l_644));
                }
                if ((*g_199))
                    break;
                (*g_284) = (((*l_645) = g_185.f1) & l_422.f0);
            }
            for (l_603 = 0; (l_603 <= (-15)); --l_603)
            {
                unsigned l_662 = 0xD0EC2120L;
                struct S0 *l_667 = &g_61;
                short **l_670 = &l_525;
                char l_699 = (-3L);
                int *l_708 = (void*)0;
                unsigned *l_716 = &l_524;
                unsigned *l_723 = &g_225;
                unsigned l_724 = 0xC4041452L;
                for (g_71 = 0; (g_71 < (-27)); g_71 = safe_sub_func_int8_t_s_s(g_71, 6))
                {
                    l_496 = &g_200;
                    if ((*g_74))
                    {
                        int l_650 = 0xF9EE1B0FL;
                        return l_650;
                    }
                    else
                    {
                        int **l_651 = &g_199;
                        g_74 = ((*l_651) = &g_200);
                    }
                }
                if (((((*l_496) != (l_656 = (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(0xFAFFL, (l_430 != ((*g_262) = (*g_262))))), (**g_435))))) == (safe_add_func_int16_t_s_s(((**l_492) = (safe_mul_func_uint8_t_u_u((g_266 = l_661), g_71))), l_662))) != ((*l_560) = g_309.f6)))
                {
                    char l_677 = (-6L);
                    short *l_678 = &g_16;
                    unsigned short l_698 = 0x6B88L;
                    for (g_266 = (-11); (g_266 == 49); ++g_266)
                    {
                        int *l_665 = &g_19;
                        l_666 = l_665;
                        (*l_594) = l_667;
                    }
                    if ((safe_rshift_func_int8_t_s_u((g_61.f3 = ((**l_644) = ((((***g_434) = (((((*g_74) & l_422.f5) && (*g_199)) ^ l_677) < (-1L))) || (***g_434)) || (*l_496)))), 6)))
                    {
                        int l_696 = (-1L);
                        unsigned char *l_697 = &l_695;
                        int **l_700 = &g_199;
                        g_284 = ((*l_700) = func_49((*g_34), func_28(func_28(&g_35, ((*l_356) = (l_678 == (*g_34))), ((safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((**l_670) = ((**l_492) = (((*l_430) = l_524) | ((*l_697) = (safe_div_func_uint32_t_u_u((safe_add_func_int16_t_s_s((l_677 == (safe_unary_minus_func_uint16_t_u((safe_sub_func_uint8_t_u_u(((((safe_add_func_int8_t_s_s((~g_61.f3), 1UL)) <= ((safe_add_func_uint8_t_u_u((((*g_284) && 6L) || 0x70L), l_694)) < l_677)) < l_677) <= l_695), g_258))))), l_696)), l_696)))))), 5)) ^ l_662), (-8L))) <= 0x6C5F6E89L), (*g_574), l_662), l_698, l_656, (*g_574), l_699), (*g_34), l_677, l_698));
                        (*l_700) = &g_19;
                        (*g_199) = (*g_74);
                        (*l_700) = func_49((*l_670), &g_35, (*g_34), ((***l_592) = ((((safe_mul_func_uint8_t_u_u(((*g_34) != (*g_34)), g_200)) != (0UL == ((safe_add_func_uint8_t_u_u(((*l_430) = (((***g_434) < (~(((*g_262) != l_697) | l_677))) & g_185.f4)), l_698)) < l_507))) || 0x34C24D75L) >= (**l_700))), (*g_284));
                    }
                    else
                    {
                        int **l_705 = &l_578;
                        (*l_705) = &l_311;
                        if ((*l_666))
                            break;
                    }
                    return l_699;
                }
                else
                {
                    for (l_508 = 0; (l_508 != (-19)); l_508--)
                    {
                        (*l_315) = (*g_574);
                    }
                    l_708 = &g_506;
                }
                (*g_74) = (safe_mul_func_uint8_t_u_u((g_185.f6 >= (g_711 && ((*l_708) > (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(func_10(((*l_716) = ((*l_496) ^ l_524)), (safe_rshift_func_uint16_t_u_u(((*g_436) = ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((*g_436) & ((*g_394) ^ ((0x5DFE2C9AL != ((*l_723) = (**g_393))) | (-8L)))), l_507)), 1)) == (*g_394))), 10))), g_266)), l_724))))), g_446));
            }
        }
    }
    for (g_105 = 0; (g_105 <= 9); g_105++)
    {
        unsigned char l_727 = 0x01L;
        if ((*g_284))
            break;
        if (l_727)
            continue;
    }
    return (*g_74);
}







static struct S0 func_2(char p_3, unsigned short p_4, short p_5)
{
    struct S0 l_306 = {2,2,194,0L,1181,2,141};
    short **l_307 = &g_35;
    int **l_308 = &g_199;
    for (p_4 = 19; (p_4 == 57); p_4 = safe_add_func_uint8_t_u_u(p_4, 2))
    {
        char l_9 = 0x47L;
        short *l_15 = &g_16;
        unsigned short *l_303 = &g_304;
        int l_305 = 0x1B36E39BL;
        l_305 = (l_9 && (func_10(func_13(((*l_15) = g_6)), l_9) == ((*l_303) = (2UL >= l_9))));
        (*g_199) = (l_305 = p_4);
        return l_306;
    }
    (*l_308) = func_49(func_56(p_4, g_185, func_49(&p_5, func_28(func_28(&g_35, p_5, l_306.f0, l_306, l_306.f1), l_306.f4, l_306.f5, g_61, l_306.f1), (*g_34), l_306.f1, l_306.f5), (*g_34)), l_307, (*l_307), (*g_257), p_3);
    (*l_308) = &g_200;
    return g_309;
}







static unsigned short func_10(unsigned p_11, unsigned p_12)
{
    short *l_245 = &g_16;
    struct S0 *l_250 = &g_61;
    int *l_251 = &g_200;
    int l_290 = 0xCCDA1560L;
    for (g_16 = 0; (g_16 >= 25); g_16 = safe_add_func_int8_t_s_s(g_16, 1))
    {
        short *l_247 = &g_16;
        int l_254 = 0x03DA3A2BL;
        int **l_259 = (void*)0;
        int l_267 = 0L;
        unsigned l_285 = 0x70F4BDAFL;
        unsigned l_293 = 0UL;
        struct S0 l_297 = {4,0,637,0xD4L,-1316,3,285};
        if (p_12)
        {
            short **l_246 = &g_35;
            int **l_252 = &l_251;
            l_251 = func_49(l_245, l_246, ((*g_34) = l_247), p_12, ((g_185.f5 < g_72) < (l_250 != (void*)0)));
            (*l_252) = (void*)0;
            return p_12;
        }
        else
        {
            int **l_253 = (void*)0;
            struct S0 **l_255 = &l_250;
            l_251 = l_251;
            (*l_251) = (p_12 == l_254);
            (*l_255) = l_250;
            l_259 = g_256;
        }
        for (g_61.f3 = (-8); (g_61.f3 == (-24)); g_61.f3 = safe_sub_func_uint32_t_u_u(g_61.f3, 2))
        {
            unsigned char **l_264 = (void*)0;
            int l_272 = (-1L);
            int l_276 = 0xA00390C6L;
            struct S0 *l_298 = &g_185;
        }
        (*l_250) = (*l_250);
    }
    (*l_251) = 1L;
    return g_61.f2;
}







static unsigned func_13(short p_14)
{
    int *l_17 = (void*)0;
    int *l_18 = &g_19;
    short *l_21 = (void*)0;
    short **l_20 = &l_21;
    struct S0 l_149 = {3,-4,-202,-2L,-1259,5,-181};
    (*l_18) = 0x24F20479L;
    l_20 = (void*)0;
    (*g_199) = func_22(g_16, func_28(g_34, (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(func_40(p_14, (&g_35 != (void*)0), ((safe_lshift_func_int8_t_s_u(((((*g_34) = func_47(g_6)) != &p_14) < 0xAFAEL), 6)) | p_14), g_74), p_14)), p_14)), g_16, l_149, g_16), p_14, p_14, g_16);
    return (*l_18);
}







static int func_22(int p_23, short ** p_24, short p_25, int p_26, int p_27)
{
    int l_160 = 0L;
    int l_162 = 8L;
    struct S0 l_182 = {3,3,751,1L,-3849,2,242};
    short **l_196 = &g_35;
    int *l_198 = &g_19;
    int l_226 = 0xA39021D3L;
    for (g_61.f3 = 0; (g_61.f3 != 20); ++g_61.f3)
    {
        int *l_166 = &l_162;
        struct S0 *l_183 = &l_182;
        struct S0 *l_184 = &g_185;
        if (((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((l_160 == (-1L)), (safe_unary_minus_func_uint32_t_u(4294967293UL)))), l_162)) | g_6))
        {
            unsigned l_163 = 0xE3DF8C06L;
            int *l_164 = (void*)0;
            int *l_165 = &l_162;
            (*l_165) = ((*g_74) = (!(l_163 <= p_26)));
            (*g_74) = ((0L & 0x9BD9L) >= g_61.f0);
        }
        else
        {
            l_166 = &p_27;
        }
        (*l_166) = ((safe_unary_minus_func_int16_t_s((((((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((p_23 && (g_61.f6 < g_61.f4)), (safe_add_func_int8_t_s_s((-10L), l_162)))), (safe_mod_func_uint16_t_u_u(g_105, (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(0xE913L, l_160)), p_25)), l_162)))))) & (*l_166)) ^ l_162) | (*l_166)) & p_23))) & p_27);
        (*l_184) = ((*l_183) = l_182);
        p_23 = (*g_74);
    }
    for (l_160 = 14; (l_160 > (-9)); l_160--)
    {
        int l_190 = (-1L);
        char *l_197 = &g_6;
        struct S0 l_201 = {0,0,-967,0x45L,2683,4,150};
        int *l_240 = &l_226;
        int **l_239 = &l_240;
        for (g_6 = 18; (g_6 <= 13); --g_6)
        {
            int *l_191 = (void*)0;
            int *l_192 = &l_190;
            int **l_193 = (void*)0;
            int **l_194 = (void*)0;
            int **l_195 = &l_191;
            (*g_74) = l_190;
            (*l_192) = ((*g_74) = 0x0895ADC9L);
            (*l_195) = &p_27;
        }
        (*g_199) = (p_23 || ((l_196 == (void*)0) && (((((func_40(l_162, p_25, func_40(p_25, ((*l_197) = g_61.f0), l_190, (l_198 = &g_19)), g_199) <= l_162) || l_190) != 0xBEDB7799L) <= l_190) < l_190)));
        if ((*g_199))
        {
            struct S0 *l_202 = &g_61;
            int l_211 = 1L;
            unsigned *l_220 = &g_221;
            unsigned *l_224 = &g_225;
            (*l_202) = l_201;
            if (((safe_rshift_func_int16_t_s_s((+(safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(l_211, 10)), l_201.f5)), ((safe_mod_func_uint8_t_u_u(((l_211 > ((*l_197) = (safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u(func_40(((*l_198) = ((*g_199) = ((safe_mul_func_uint16_t_u_u((p_23 != ((*l_220) = l_201.f1)), (g_74 != g_199))) <= (*l_198)))), ((safe_add_func_uint32_t_u_u(((*l_224) = p_27), 4294967292UL)) & g_6), g_185.f4, &l_211), l_182.f2)), g_185.f0)))) & 0x9025L), l_226)) && p_25)))), 15)) < (-9L)))
            {
                for (g_200 = 0; (g_200 == 28); g_200 = safe_add_func_uint32_t_u_u(g_200, 5))
                {
                    for (g_71 = (-14); (g_71 != (-11)); g_71++)
                    {
                        (*g_74) = p_27;
                    }
                }
            }
            else
            {
                unsigned l_231 = 18446744073709551615UL;
                (*g_199) = (l_231 || p_27);
                if (p_26)
                    break;
            }
            if ((*l_198))
                break;
        }
        else
        {
            char *l_241 = &l_201.f3;
            int **l_242 = &g_74;
            (*g_199) = (g_16 < p_25);
            for (p_27 = 0; (p_27 <= (-18)); --p_27)
            {
                int **l_234 = (void*)0;
                int ***l_235 = &l_234;
                int *l_238 = (void*)0;
                int **l_237 = &l_238;
                int ***l_236 = &l_237;
                (*l_236) = ((*l_235) = l_234);
                (*l_235) = l_239;
                return p_25;
            }
            (*l_242) = func_49((*g_34), &g_35, (*g_34), l_201.f1, ((void*)0 != l_241));
        }
    }
    return (*g_199);
}







static short ** func_28(short ** p_29, unsigned short p_30, int p_31, struct S0 p_32, unsigned char p_33)
{
    short *l_150 = &g_105;
    int l_153 = (-1L);
    g_74 = func_49((*g_34), &g_35, l_150, (safe_sub_func_uint8_t_u_u(g_61.f6, (l_153 < g_61.f0))), p_33);
    return p_29;
}







static char func_40(int p_41, char p_42, unsigned p_43, int * p_44)
{
    unsigned l_75 = 4UL;
    unsigned char l_78 = 0UL;
    int l_87 = 0x800BCFD7L;
    int l_90 = 0x1F666C83L;
    short *l_94 = &g_16;
    int **l_100 = &g_74;
    struct S0 *l_116 = &g_61;
    if ((l_75 ^ (l_90 = (safe_mod_func_int32_t_s_s(l_78, (safe_rshift_func_int16_t_s_u((((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((+(+(safe_add_func_uint16_t_u_u((l_75 != l_75), l_75)))), (l_87 && (safe_sub_func_uint8_t_u_u(p_42, g_61.f2))))), ((g_16 && g_61.f5) & g_61.f5))) & p_42) != (-2L)), 9)))))))
    {
        short *l_91 = &g_16;
        short l_97 = 0x56D1L;
        int *l_101 = &l_87;
        (*l_100) = func_49(l_91, &g_35, l_91, ((*l_101) = ((safe_div_func_uint16_t_u_u(((((*g_34) = (void*)0) != l_94) && (l_97 != ((l_100 == &p_44) != (g_61.f4 < l_97)))), g_16)) && l_97)), g_61.f2);
        (**l_100) = (*g_74);
    }
    else
    {
        unsigned char l_102 = 252UL;
        return l_102;
    }
    if ((*g_74))
    {
        unsigned l_103 = 0x02DA2EA9L;
        short *l_104 = &g_105;
        short *l_108 = &g_105;
        unsigned short l_113 = 7UL;
        if ((0x214EL > ((*l_104) = ((((*l_100) = func_49(((*g_34) = (void*)0), g_34, &g_16, (**l_100), (*g_74))) != &p_41) || l_103))))
        {
            (*g_74) = (safe_mul_func_uint8_t_u_u(l_103, ((*g_74) && 0xCEB5E7B3L)));
            return (**l_100);
        }
        else
        {
            unsigned short l_109 = 1UL;
            unsigned char *l_110 = &l_78;
            (*l_100) = func_49(l_108, &l_94, func_47(l_109), p_41, ((((*l_110) = g_61.f0) < 7UL) < (safe_add_func_uint16_t_u_u(l_113, ((safe_div_func_uint16_t_u_u(p_42, l_103)) == l_113)))));
            (**l_100) = (g_61.f6 || ((*l_108) = 8L));
        }
    }
    else
    {
        struct S0 **l_117 = (void*)0;
        struct S0 **l_118 = &l_116;
        int l_119 = 2L;
        short **l_120 = (void*)0;
        (*l_118) = l_116;
        if ((p_41 ^ (l_119 = ((((*g_34) = l_94) != l_94) && p_41))))
        {
            unsigned short l_123 = 0UL;
            (*l_100) = func_49((*g_34), l_120, (*g_34), (+1L), (safe_div_func_int8_t_s_s((~0xD1L), l_119)));
            (**l_100) = l_123;
            (*g_74) = 0x173AA332L;
        }
        else
        {
            char l_138 = 0x40L;
            int l_143 = 2L;
            for (g_6 = (-1); (g_6 < (-14)); --g_6)
            {
                unsigned char *l_140 = &l_78;
                if ((*g_74))
                    break;
                for (l_78 = 0; (l_78 != 6); l_78 = safe_add_func_uint16_t_u_u(l_78, 1))
                {
                    unsigned l_130 = 4UL;
                    int l_131 = 0x4516B2CFL;
                    short *l_139 = &g_105;
                    (**l_100) = (l_131 = (safe_rshift_func_uint8_t_u_s(p_41, l_130)));
                    if ((0xC3L < (safe_mul_func_uint16_t_u_u(l_130, (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((l_138 = (**g_34)) == p_43), ((!(**l_100)) | g_61.f1))), ((*l_139) = (*g_35))))))))
                    {
                        unsigned char **l_141 = &l_140;
                        unsigned char *l_142 = &l_78;
                        l_143 = (((*l_141) = l_140) == l_142);
                        (**l_100) = 0x45E11D14L;
                    }
                    else
                    {
                        (*g_74) = (g_105 == (g_6 <= (**l_100)));
                    }
                    if ((*g_74))
                        break;
                    if (l_119)
                        break;
                }
            }
            for (l_78 = 0; (l_78 < 20); l_78 = safe_add_func_int16_t_s_s(l_78, 5))
            {
                int *l_148 = &l_143;
                (*l_148) = (~((*g_74) = (safe_div_func_uint32_t_u_u(g_19, (*g_74)))));
            }
            return p_42;
        }
        (**l_118) = g_61;
    }
    (**l_100) = (**l_100);
    return g_71;
}







static short * func_47(unsigned p_48)
{
    short **l_55 = &g_35;
    struct S0 l_62 = {5,-0,-466,0x7AL,3906,4,31};
    int *l_64 = &g_19;
    int **l_63 = &l_64;
    char *l_68 = &g_6;
    (*l_63) = func_49((*g_34), l_55, func_56((p_48 || g_19), (l_62 = g_61), ((*l_63) = &g_19), (*g_34)), (safe_div_func_int8_t_s_s(((*l_68) = (p_48 >= g_61.f3)), g_61.f4)), p_48);
    return (*l_55);
}







static int * func_49(short * p_50, short ** p_51, short * p_52, int p_53, int p_54)
{
    unsigned short l_69 = 1UL;
    int l_70 = 0x70207789L;
    int *l_73 = &g_19;
    (*l_73) = (((g_19 < g_61.f4) > (g_71 = (l_70 = l_69))) < (g_72 = g_6));
    return &g_19;
}







static short * func_56(int p_57, struct S0 p_58, int * p_59, short * p_60)
{
    unsigned l_65 = 6UL;
    (*p_59) = l_65;
    return (*g_34);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_61.f1, "g_61.f1", print_hash_value);
    transparent_crc(g_61.f2, "g_61.f2", print_hash_value);
    transparent_crc(g_61.f3, "g_61.f3", print_hash_value);
    transparent_crc(g_61.f4, "g_61.f4", print_hash_value);
    transparent_crc(g_61.f5, "g_61.f5", print_hash_value);
    transparent_crc(g_61.f6, "g_61.f6", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_185.f0, "g_185.f0", print_hash_value);
    transparent_crc(g_185.f1, "g_185.f1", print_hash_value);
    transparent_crc(g_185.f2, "g_185.f2", print_hash_value);
    transparent_crc(g_185.f3, "g_185.f3", print_hash_value);
    transparent_crc(g_185.f4, "g_185.f4", print_hash_value);
    transparent_crc(g_185.f5, "g_185.f5", print_hash_value);
    transparent_crc(g_185.f6, "g_185.f6", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_309.f0, "g_309.f0", print_hash_value);
    transparent_crc(g_309.f1, "g_309.f1", print_hash_value);
    transparent_crc(g_309.f2, "g_309.f2", print_hash_value);
    transparent_crc(g_309.f3, "g_309.f3", print_hash_value);
    transparent_crc(g_309.f4, "g_309.f4", print_hash_value);
    transparent_crc(g_309.f5, "g_309.f5", print_hash_value);
    transparent_crc(g_309.f6, "g_309.f6", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_711, "g_711", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
