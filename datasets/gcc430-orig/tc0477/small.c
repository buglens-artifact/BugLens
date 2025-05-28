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
   int f0;
   unsigned char f1;
   int f2;
   unsigned short f3;
   char f4;
   unsigned char f5;
   short f6;
   const char f7;
};

union U1 {
   short f0;
};

union U2 {
   int f0;
   short f1;
   char * f2;
};


static int g_4 = 0x43EB6069L;
static union U2 g_10 = {-1L};
static int g_53 = 0xC3314648L;
static int *g_52 = &g_53;
static char g_57 = 0x41L;
static char *g_56 = &g_57;
static union U1 g_62 = {0x78D5L};
static union U1 *g_61 = &g_62;
static unsigned g_77 = 0x1355901AL;
static struct S0 g_93 = {0x303F43C5L,0xACL,0xA091CDDCL,0x8638L,9L,0xE4L,0x74F1L,0x5EL};
static union U2 *g_99 = &g_10;
static union U2 **g_98 = &g_99;
static int **g_136 = &g_52;
static int *g_165 = &g_10.f0;
static struct S0 *g_188 = &g_93;
static struct S0 ** const g_187 = &g_188;
static unsigned *g_191 = &g_77;
static unsigned **g_190 = &g_191;
static const char g_210 = 0x6CL;
static const int *g_228 = &g_10.f0;
static char **g_237 = &g_56;
static char ***g_236 = &g_237;
static unsigned g_245 = 18446744073709551614UL;
static int *g_264 = &g_53;
static short g_323 = 0L;
static int g_329 = 0L;
static short **g_354 = (void*)0;
static short *g_357 = &g_323;
static short **g_356 = &g_357;
static unsigned char *g_368 = &g_93.f5;
static unsigned char **g_367 = &g_368;
static unsigned short g_409 = 0UL;
static unsigned short *g_414 = &g_93.f3;
static unsigned short * const *g_413 = &g_414;
static unsigned short **g_426 = &g_414;
static unsigned short ***g_425 = &g_426;
static union U2 g_521 = {0xA7146322L};
static unsigned g_563 = 0xF771EE44L;
static int g_742 = 0x298F7468L;



static char func_1(void);
static int * const func_5(union U2 p_6, int * p_7, struct S0 p_8, char * p_9);
static struct S0 func_11(const char * p_12, char * p_13, unsigned char p_14, char * p_15, char * p_16);
static const char * func_17(int p_18);
static int * func_19(short p_20, int p_21, short p_22, const unsigned short p_23, const int * p_24);
static unsigned short func_27(char * p_28, short p_29, int * p_30, const unsigned char p_31);
static char * func_32(const unsigned p_33);
static int func_35(const int * p_36, int * p_37, char * p_38);
static char * func_40(int p_41);
static const int * func_44(int * p_45, unsigned short p_46);
static char func_1(void)
{
    char *l_2 = (void*)0;
    int *l_3 = &g_4;
    short *l_183 = &g_10.f1;
    short **l_182 = &l_183;
    short *l_184 = &g_10.f1;
    unsigned char *l_185 = (void*)0;
    unsigned char *l_186 = &g_93.f1;
    int **l_743 = &g_264;
    (*l_3) = ((void*)0 != l_2);
    (*l_743) = func_5(g_10, &g_4, func_11(func_17((*l_3)), &g_57, ((*l_186) = (((*l_182) = (void*)0) != l_184)), l_186, l_2), l_186);
    return (*g_56);
}







static int * const func_5(union U2 p_6, int * p_7, struct S0 p_8, char * p_9)
{
    unsigned ***l_711 = &g_190;
    unsigned ****l_710 = &l_711;
    unsigned ***l_712 = &g_190;
    unsigned ****l_713 = &l_712;
    int l_718 = (-1L);
    char *l_723 = &g_93.f4;
    int l_724 = 1L;
    union U2 *l_733 = &g_10;
    short **l_736 = &g_357;
    int *l_737 = &g_329;
    (*p_7) = ((((*l_710) = &g_190) == ((*l_713) = l_712)) < (safe_sub_func_uint16_t_u_u(p_6.f1, ((0xE629L < l_718) < ((l_724 = func_27(p_9, (safe_rshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(p_8.f3, func_35(&l_718, &l_718, l_723))) > l_718), 4)), p_7, p_8.f6)) < (*p_9))))));
    (**g_136) = (p_6.f1 | (((*g_368) >= l_724) || 4294967293UL));
    if ((*p_7))
    {
        int l_727 = 0xB6295587L;
        if (((**g_136) = ((**g_413) && (safe_mod_func_uint16_t_u_u((***g_425), p_8.f2)))))
        {
            (*g_264) = l_727;
        }
        else
        {
            union U2 *l_732 = (void*)0;
            for (p_8.f1 = 0; (p_8.f1 != 52); p_8.f1++)
            {
                for (g_53 = 0; (g_53 <= (-23)); g_53--)
                {
                    return (*g_136);
                }
            }
            l_733 = l_732;
        }
    }
    else
    {
        l_718 = (safe_lshift_func_int8_t_s_u((*g_56), ((l_736 = (void*)0) != &g_357)));
        (*g_136) = (*g_136);
    }
    (*g_136) = func_19(p_8.f1, ((*l_737) = g_93.f7), ((safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(g_742, (*g_56))) <= (p_8.f0 == p_8.f3)), func_27((*g_237), ((*p_7) | (**g_136)), (*g_136), p_8.f5))) ^ p_8.f1), l_718, &l_718);
    return (*g_136);
}







static struct S0 func_11(const char * p_12, char * p_13, unsigned char p_14, char * p_15, char * p_16)
{
    struct S0 * const *l_189 = (void*)0;
    struct S0 l_193 = {0xDB97AA77L,248UL,1L,0x5695L,-1L,0UL,-8L,-7L};
    const int *l_211 = &g_4;
    int *l_212 = &g_10.f0;
    char *l_226 = &g_93.f4;
    unsigned **l_250 = &g_191;
    unsigned l_285 = 6UL;
    int l_315 = 0x334BEAF3L;
    union U2 *l_317 = &g_10;
    char l_318 = (-1L);
    int *l_388 = &g_4;
    int l_394 = 0x5F3FDA1CL;
    unsigned short * const **l_415 = &g_413;
    short **l_462 = &g_357;
    char *l_511 = &g_93.f4;
    const char l_513 = 3L;
    union U1 *l_542 = &g_62;
    char l_566 = 0x81L;
    int l_605 = (-1L);
    unsigned short **l_677 = &g_414;
    struct S0 l_709 = {0L,1UL,0xD43D2CF7L,0x4A44L,-6L,0xE6L,0xD4B8L,-10L};
    if ((g_187 != (l_189 = l_189)))
    {
        unsigned ***l_192 = &g_190;
        (*g_136) = (*g_136);
        (*l_192) = g_190;
        return l_193;
    }
    else
    {
        int l_196 = 0x388A0F28L;
        int l_198 = 1L;
        int l_216 = 0xE2683656L;
        char *l_238 = (void*)0;
        unsigned short *l_255 = (void*)0;
        struct S0 *l_295 = &g_93;
        const int **l_296 = &g_228;
        unsigned l_307 = 0x9756BE5BL;
        unsigned l_310 = 0UL;
        unsigned short l_314 = 0UL;
        int l_319 = 0x725FF4A1L;
        char *l_326 = &l_318;
        int *l_382 = &g_53;
        unsigned l_387 = 0x8394E038L;
        for (g_93.f1 = 17; (g_93.f1 >= 41); g_93.f1 = safe_add_func_uint32_t_u_u(g_93.f1, 3))
        {
            int *l_221 = (void*)0;
            int l_261 = 1L;
            unsigned char *l_289 = &l_193.f1;
            unsigned char *l_290 = &g_93.f5;
            unsigned short *l_293 = (void*)0;
            unsigned short **l_294 = &l_293;
            if (l_193.f7)
            {
                int l_197 = 8L;
                char *l_213 = &g_57;
                const int *l_244 = (void*)0;
                (*g_136) = (*g_136);
                if (p_14)
                    break;
                if (l_196)
                {
                    short *l_214 = (void*)0;
                    short *l_215 = &l_193.f6;
                    unsigned char *l_217 = (void*)0;
                    unsigned char *l_218 = &l_193.f1;
                    int l_219 = 0L;
                    unsigned char l_220 = 0x1EL;
                    l_220 = (((l_197 != ((l_198 = p_14) >= (l_196 <= ((((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((((*l_218) = (l_216 = ((g_93.f1 != ((*l_215) = func_35(func_19((safe_unary_minus_func_uint32_t_u(((safe_add_func_int8_t_s_s((*g_56), (safe_add_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u((*g_191), ((0x70EDD471L <= (*g_191)) | (l_197 >= 1UL)))) > l_197) == l_196), (*g_56))))) ^ (*g_56)))), p_14, g_93.f3, g_210, l_211), l_212, l_213))) && l_197))) > (*p_15)), (-1L))), 0x5C37L)) & g_93.f7) && (*g_56)) | (*g_56))))) ^ l_219) || g_93.f1);
                }
                else
                {
                    int *l_227 = &g_53;
                    unsigned char *l_231 = &l_193.f5;
                    int *l_243 = &g_93.f0;
                    g_53 = func_27(&g_57, g_93.f5, l_221, ((safe_sub_func_int16_t_s_s((func_27(&g_57, func_35((*g_136), l_212, &g_57), (*g_136), g_93.f0) ^ (*p_12)), g_93.f3)) == g_93.f1));
                    (*l_227) = (safe_lshift_func_uint8_t_u_u((!func_27(l_226, ((l_221 = ((*g_136) = l_221)) == (void*)0), l_227, p_14)), 2));
                    (*g_136) = func_19(l_197, (*l_212), p_14, g_93.f6, g_228);
                    if ((safe_rshift_func_uint8_t_u_s((p_14 = ((*l_231) = 0x16L)), (safe_rshift_func_uint16_t_u_s((l_216 = (safe_add_func_uint8_t_u_u((func_35(l_221, l_212, (**g_236)) >= g_93.f1), g_245))), (*l_227))))))
                    {
                        unsigned short *l_251 = (void*)0;
                        unsigned short *l_252 = &g_93.f3;
                        int *l_253 = &l_216;
                        (*g_52) = ((p_14 && (1UL & (safe_add_func_int8_t_s_s((((*l_227) != l_198) || (*p_13)), ((*l_226) = 0x85L))))) != p_14);
                        (*l_227) = (func_35(func_19(((safe_add_func_uint32_t_u_u((*l_212), 0x6A314E8DL)) & ((*l_252) = func_27(func_32(((((void*)0 == l_250) || (*g_56)) >= (l_196 ^ (((*l_252) = 1UL) <= g_77)))), g_93.f1, g_165, p_14))), g_93.f7, g_93.f5, g_93.f5, g_165), l_253, l_226) | p_14);
                    }
                    else
                    {
                        const int **l_254 = &l_211;
                        (*l_254) = func_44(l_227, p_14);
                        if ((*g_52))
                            continue;
                    }
                }
                if (p_14)
                    break;
            }
            else
            {
                short l_258 = 0xD416L;
                int l_262 = 0x38BC535CL;
                unsigned char *l_263 = &l_193.f1;
                union U1 **l_279 = &g_61;
                if ((((l_255 == l_255) & ((l_258 || ((*l_263) = ((0L <= (p_14 | (safe_sub_func_int8_t_s_s(((((**g_136) = (l_262 = l_261)) && (-4L)) != (&g_99 != (void*)0)), p_14)))) >= 1UL))) == p_14)) ^ (*g_56)))
                {
                    return (**g_187);
                }
                else
                {
                    unsigned short l_271 = 4UL;
                    const short *l_278 = (void*)0;
                    (*g_136) = g_264;
                    for (l_193.f3 = 0; (l_193.f3 <= 53); l_193.f3 = safe_add_func_uint16_t_u_u(l_193.f3, 3))
                    {
                        int *l_272 = (void*)0;
                        int *l_273 = &l_262;
                        unsigned *l_276 = (void*)0;
                        unsigned *l_277 = (void*)0;
                        (*g_264) = (safe_rshift_func_uint16_t_u_u(((((safe_mod_func_int16_t_s_s(g_93.f4, p_14)) != func_27(func_32(((*g_191) = (func_27((**g_236), l_271, l_272, ((l_273 = (*g_136)) == l_272)) <= ((safe_lshift_func_int16_t_s_s(p_14, (*l_212))) || 0x8D48L)))), g_93.f4, l_212, g_245)) <= (*g_165)) && g_93.f1), l_271));
                        l_262 = ((void*)0 != l_278);
                    }
                }
                (*l_279) = &g_62;
                for (p_14 = 0; (p_14 >= 26); p_14 = safe_add_func_uint16_t_u_u(p_14, 8))
                {
                    int l_284 = 0x7C909101L;
                    const int l_286 = 0x937999FFL;
                    (*g_264) = (func_27(func_32(((safe_add_func_int32_t_s_s(((*l_211) ^ p_14), ((*l_211) && ((((l_284 = g_4) && (0x4EL < l_285)) | func_35(&l_198, l_212, (*g_237))) < p_14)))) <= (*g_165))), g_93.f1, l_212, l_286) || 4L);
                    if ((**g_136))
                        break;
                }
            }
            if ((safe_sub_func_int32_t_s_s((((*l_290) = ((*l_289) = func_27(p_13, g_93.f7, l_212, g_10.f1))) || ((safe_mod_func_int32_t_s_s(l_198, (p_14 ^ g_10.f1))) | (((*l_294) = l_293) != l_255))), p_14)))
            {
                (*g_187) = l_295;
            }
            else
            {
                (*g_52) = l_216;
            }
        }
        (*g_52) = (&l_196 != (void*)0);
        (*l_296) = l_211;
        if (p_14)
        {
            unsigned char l_297 = 0xD0L;
            int *l_300 = &l_216;
            const int l_322 = (-1L);
            if (l_297)
            {
                for (l_193.f0 = 24; (l_193.f0 <= (-3)); l_193.f0 = safe_sub_func_int8_t_s_s(l_193.f0, 2))
                {
                    (*g_136) = l_300;
                }
                (*g_264) = (*g_165);
            }
            else
            {
                int l_311 = 0x997D2CA9L;
                int *l_316 = (void*)0;
                l_311 = (((*g_191) = 0x068102F2L) == func_27(func_40((safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(l_307, 7)), g_10.f1)), (safe_sub_func_int8_t_s_s(func_35((g_228 = func_44(&l_198, (((*l_212) & p_14) || p_14))), l_212, (*g_237)), (*l_300)))))), l_310, g_165, g_93.f0));
                for (l_193.f0 = (-6); (l_193.f0 == (-16)); --l_193.f0)
                {
                    if (l_314)
                        break;
                    l_315 = p_14;
                }
                (*l_296) = (l_316 = l_316);
                (*g_98) = l_317;
            }
            (*g_52) = l_318;
            l_319 = (*l_211);
            if ((((*g_52) = p_14) && ((*l_300) != (**g_190))))
            {
                (**g_136) = (safe_lshift_func_int16_t_s_s((*l_300), 11));
            }
            else
            {
                unsigned short **l_324 = &l_255;
                unsigned char *l_325 = &l_193.f1;
                const int *l_328 = (void*)0;
                int *l_330 = &l_216;
                short *l_351 = &g_10.f1;
                char l_381 = (-6L);
                if ((((*p_13) = func_27(((*g_237) = func_40((*l_300))), g_93.f2, &l_319, ((*l_325) = ((l_322 & (g_323 <= g_10.f1)) > ((l_324 == (void*)0) == (*p_13)))))) || (*l_300)))
                {
                    (*g_52) = (4294967293UL & (*g_165));
                }
                else
                {
                    char l_327 = 0xC9L;
                    int l_331 = 0xE6F80BECL;
                    if (((*l_330) = func_27(l_326, (p_14 >= (+((l_327 != 0x918FL) ^ (func_35(((*l_296) = l_328), ((*g_136) = func_19(g_210, g_329, g_93.f5, func_35(func_44((*g_136), (*l_211)), &l_315, l_325), &l_315)), l_326) <= l_327)))), l_330, g_323)))
                    {
                        int *l_332 = &g_10.f0;
                        l_331 = 0xCBAF703CL;
                        (*l_296) = (*l_296);
                        (*g_98) = (*g_98);
                        (*g_136) = l_332;
                    }
                    else
                    {
                        return (*g_188);
                    }
                }
                l_315 = func_27((**g_236), p_14, (*g_136), p_14);
                if (((safe_add_func_int8_t_s_s(((***g_236) = (safe_add_func_uint8_t_u_u(p_14, (~(safe_add_func_int8_t_s_s((*p_13), (safe_mul_func_uint8_t_u_u(g_93.f2, ((g_329 >= (((*l_212) || (g_93.f3 >= g_10.f1)) && ((safe_rshift_func_int8_t_s_u((~((p_14 <= (g_10.f1 <= p_14)) || (*p_13))), 0)) >= (*g_264)))) <= 0x6717054EL))))))))), p_14)) >= p_14))
                {
                    (*l_296) = l_328;
                    for (p_14 = 10; (p_14 < 51); p_14 = safe_add_func_int8_t_s_s(p_14, 9))
                    {
                        g_228 = &l_322;
                        (*l_296) = func_44((*g_136), g_93.f0);
                    }
                }
                else
                {
                    short ***l_355 = (void*)0;
                    int l_358 = 0L;
                    int *l_359 = (void*)0;
                    int *l_360 = &l_315;
                    struct S0 l_364 = {0x34A33099L,2UL,0x3A9BFCDBL,8UL,1L,0xBEL,0x750FL,0xBAL};
                    (*l_360) = ((*g_52) = (((l_198 = (((safe_add_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(0xEDL, 3)) == (((void*)0 != l_351) <= p_14)), (l_216 = (safe_mul_func_uint16_t_u_u(65535UL, (*l_211)))))) == ((g_354 = g_354) == g_356)), l_358)) ^ 3UL) != 0x3E104882L)) <= g_10.f1) <= (**g_356)));
                    for (l_319 = 22; (l_319 >= (-18)); --l_319)
                    {
                        int *l_363 = &l_216;
                        (*l_296) = func_19((*l_300), p_14, ((g_93.f5 = (p_14 > ((**l_250) = func_27((**g_236), p_14, l_363, (1L || (g_93.f3 = p_14)))))) ^ (*l_212)), p_14, l_330);
                        return l_364;
                    }
                    (*g_136) = (*g_136);
                    for (g_329 = (-4); (g_329 > (-9)); g_329 = safe_sub_func_int32_t_s_s(g_329, 3))
                    {
                        unsigned char ***l_369 = &g_367;
                        unsigned char **l_371 = &g_368;
                        unsigned char ***l_370 = &l_371;
                        short *l_380 = &g_93.f6;
                        (*l_296) = (*g_136);
                        (*l_370) = ((*l_369) = g_367);
                        (*g_264) = (safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((*g_357) = (func_27(p_13, ((*l_380) = ((**g_356) = (safe_lshift_func_int8_t_s_s((*g_56), ((*g_368) != ((*l_360) = func_35((*g_136), (*g_136), l_326))))))), &l_358, (g_93.f0 <= 0x4CCEL)) < (*l_300))), (*l_300))) > p_14), l_381)), p_14));
                    }
                }
            }
        }
        else
        {
            short l_383 = 0xB87AL;
            char *l_386 = (void*)0;
            const int *l_410 = &l_216;
            (*g_136) = l_382;
            (**g_136) = l_383;
            for (l_285 = 18; (l_285 < 19); l_285 = safe_add_func_uint16_t_u_u(l_285, 5))
            {
                char l_392 = (-2L);
                struct S0 *l_393 = &l_193;
                int *l_411 = &g_10.f0;
                if (func_27(l_386, l_387, l_388, (p_14 = ((void*)0 != &g_99))))
                {
                    short l_391 = 0x418FL;
                    (*g_52) = (((**g_367) = (**g_367)) > (func_35((*l_296), (*g_136), &l_318) == (safe_lshift_func_int16_t_s_u((l_391 || ((&g_237 != (void*)0) & ((*g_236) == &l_386))), g_93.f2))));
                    if (l_392)
                        continue;
                }
                else
                {
                    unsigned l_395 = 4294967295UL;
                    unsigned short *l_408 = &g_93.f3;
                    union U1 **l_412 = &g_61;
                    (*g_187) = l_393;
                    (*g_136) = func_19(p_14, l_392, (**g_356), ((l_395 = ((**g_367) = l_394)) != (safe_add_func_int32_t_s_s(((**g_136) = (!(safe_add_func_uint32_t_u_u(((**l_250) = (safe_sub_func_uint32_t_u_u((*g_191), (p_14 <= ((safe_rshift_func_uint16_t_u_u(g_53, 8)) == (safe_sub_func_uint16_t_u_u(p_14, ((*l_408) = (safe_lshift_func_uint8_t_u_s(p_14, 3)))))))))), g_409)))), p_14))), l_410);
                    (*l_296) = (l_411 = l_411);
                    (*l_412) = &g_62;
                }
                l_411 = &l_394;
                return (*l_295);
            }
        }
    }
    if ((((*l_415) = g_413) == (void*)0))
    {
        int **l_416 = (void*)0;
        int **l_417 = &g_165;
        char *l_424 = &g_93.f4;
        const union U1 *l_464 = &g_62;
        union U1 *l_472 = &g_62;
        (*g_264) = (*l_211);
        if ((((*l_417) = &l_315) != &g_53))
        {
            int *l_423 = &l_315;
            int *l_429 = &l_315;
            union U1 *l_435 = (void*)0;
            union U1 **l_436 = &g_61;
            for (g_53 = 0; (g_53 > 13); ++g_53)
            {
                union U2 *l_434 = &g_10;
                (*g_136) = &g_53;
                for (l_394 = 13; (l_394 == (-6)); l_394 = safe_sub_func_int8_t_s_s(l_394, 6))
                {
                    int *l_422 = &g_53;
                    unsigned short ****l_427 = (void*)0;
                    unsigned short ****l_428 = &g_425;
                    (*l_429) = func_27((**g_236), ((**g_356) = (func_35((*l_417), (l_423 = l_422), l_424) || (&g_413 != ((*l_428) = g_425)))), l_429, (safe_rshift_func_int16_t_s_s((g_62.f0 = (safe_rshift_func_int16_t_s_s(p_14, p_14))), (*l_429))));
                }
                if ((*g_264))
                    continue;
                (*g_98) = l_434;
            }
            (*l_436) = l_435;
        }
        else
        {
            const int l_451 = 0xC287B772L;
            short l_479 = 0x774EL;
            const int l_500 = 0xC0B98C03L;
            const unsigned *l_502 = &g_77;
            const unsigned **l_501 = &l_502;
            char l_532 = 3L;
            const char l_556 = 0xEDL;
            const int *l_591 = &l_315;
            if ((2L & 4294967289UL))
            {
                unsigned l_439 = 0xE179949BL;
                struct S0 l_485 = {0xA922429EL,248UL,1L,0UL,0x7FL,1UL,0x3366L,8L};
                if ((((*l_388) <= (l_439 < (((0xB070L == (safe_lshift_func_int8_t_s_s((*p_13), 0))) & ((*g_264) || (((*g_414) = (safe_sub_func_uint8_t_u_u(((*g_368) = ((void*)0 == &l_394)), (**g_237)))) > (((safe_mul_func_uint8_t_u_u((&g_264 == &g_264), l_439)) ^ p_14) != 0x28L)))) | 0xEE6C1B3CL))) < p_14))
                {
                    int l_450 = 1L;
                    const int *l_452 = &g_10.f0;
                    int l_459 = 0x752941ABL;
                    short ***l_463 = (void*)0;
                    (**l_417) = (&g_99 == &g_99);
                    (*g_136) = func_19((safe_mul_func_int16_t_s_s(p_14, (safe_add_func_uint16_t_u_u((*g_414), (**g_426))))), (func_27(func_40((*l_212)), l_450, (*l_417), ((*g_368) != (l_451 < 0x7A61L))) | p_14), (*g_357), p_14, l_452);
                    if ((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((*p_12), ((0xEA62C9CAL && (**g_190)) != p_14))), (p_14 ^ (!(l_459 = (*g_357)))))), (safe_rshift_func_uint16_t_u_u((&g_357 != (g_356 = l_462)), ((***g_425) = (***g_425)))))))
                    {
                        const union U1 **l_465 = &l_464;
                        (*l_417) = (*g_136);
                        (*g_136) = (*g_136);
                        (*l_465) = l_464;
                    }
                    else
                    {
                        (*l_417) = &l_315;
                    }
                    if (((safe_add_func_int32_t_s_s((*l_452), (**g_136))) || ((**g_136) ^ (safe_mul_func_int16_t_s_s(((p_14 < (func_35((*g_136), (*g_136), p_15) <= p_14)) < (***g_236)), p_14)))))
                    {
                        unsigned l_470 = 0xD8ACD933L;
                        unsigned char *l_471 = &g_93.f1;
                        union U1 **l_473 = &l_472;
                        union U1 **l_474 = &g_61;
                        (*l_388) = func_27(p_15, p_14, func_19(p_14, l_451, l_470, p_14, (*g_136)), ((*l_471) = ((*g_187) != (void*)0)));
                        (*l_474) = ((*l_473) = l_472);
                        (*g_52) = 0x600A8832L;
                    }
                    else
                    {
                        const int **l_480 = &l_452;
                        union U1 **l_481 = (void*)0;
                        union U1 **l_482 = (void*)0;
                        (*g_165) = (0x73BC8AFDL >= (safe_rshift_func_int8_t_s_s((((*g_368) = ((*l_212) >= (**g_413))) < ((*g_191) < 0xC5949C6FL)), 7)));
                        (*l_388) = ((*g_264) = l_479);
                        (*l_480) = &l_451;
                        g_61 = l_472;
                    }
                }
                else
                {
                    union U2 ***l_483 = &g_98;
                    int *l_484 = &l_315;
                    (*l_483) = &g_99;
                    (*l_417) = &g_53;
                    (*l_417) = l_484;
                }
                (*g_136) = &g_53;
                return l_485;
            }
            else
            {
                unsigned l_494 = 0UL;
                const int *l_506 = (void*)0;
                int l_514 = (-1L);
                union U2 ***l_517 = &g_98;
                union U2 * const l_520 = &g_521;
                union U2 * const *l_519 = &l_520;
                union U2 * const **l_518 = &l_519;
                char *l_535 = &l_532;
                union U1 * const *l_559 = &g_61;
                for (l_193.f3 = 1; (l_193.f3 != 52); ++l_193.f3)
                {
                    unsigned char *l_495 = &g_93.f1;
                    int l_498 = 0x4A3B4D32L;
                }
                if (((((*l_517) = &g_99) != ((*l_518) = (void*)0)) > (func_27(&l_318, (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(l_500, ((***g_425) || ((((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((*l_388) = (p_14 >= (safe_mod_func_int16_t_s_s(p_14, ((*g_357) = p_14))))), (l_532 >= l_500))), p_14)) & (**g_190)) || (**g_356)) && (*l_212))))), p_14)), &l_394, l_532) < (*l_212))))
                {
                    int *l_536 = &l_514;
                    const int **l_547 = &l_506;
                    unsigned l_557 = 7UL;
                    if ((*g_165))
                    {
                        unsigned char *l_541 = &l_193.f5;
                        union U1 **l_543 = &l_542;
                        (*g_165) = (*g_165);
                        (*g_136) = func_19(p_14, g_93.f5, (safe_sub_func_int16_t_s_s(func_27(l_535, p_14, l_536, p_14), (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((*g_414) = 65530UL), 13)), ((*l_541) = (**l_417)))))), p_14, &l_514);
                        (*l_536) = ((*g_357) >= p_14);
                        (*l_543) = l_542;
                    }
                    else
                    {
                        union U1 **l_544 = &l_542;
                        (*l_544) = l_542;
                    }
                    (*l_547) = func_44((*l_417), (safe_sub_func_uint16_t_u_u(0x854EL, (((*g_136) = (void*)0) == (void*)0))));
                    if (((safe_lshift_func_uint16_t_u_s((((**g_413) = (***g_425)) <= (0x6E43L > p_14)), 1)) >= ((safe_add_func_uint16_t_u_u((*l_536), (*l_536))) && ((*g_264) = ((safe_add_func_int16_t_s_s((func_27(l_424, (+(p_14 & ((*g_165) = (((*l_388) = (((*g_357) < (safe_mod_func_uint16_t_u_u(0x2800L, 0x3643L))) >= (**g_356))) != p_14)))), (*g_136), l_556) == l_557), 65535UL)) != 0L)))))
                    {
                        (*g_136) = (*g_136);
                        (*l_547) = &l_451;
                    }
                    else
                    {
                        union U1 **l_558 = (void*)0;
                        unsigned * const l_562 = &g_563;
                        unsigned * const *l_561 = &l_562;
                        unsigned * const **l_560 = &l_561;
                        unsigned * const *l_565 = &l_562;
                        unsigned * const **l_564 = &l_565;
                        int l_573 = 0xBC994D0BL;
                        (*g_264) = ((l_558 == l_559) || 0xED99L);
                        (*l_536) = (((*l_564) = ((*l_560) = l_250)) == &g_191);
                        l_211 = func_19(l_566, (((safe_sub_func_uint16_t_u_u((+(**g_426)), (*l_506))) == ((1UL <= ((safe_mul_func_int8_t_s_s((func_27(&l_318, ((((g_409 = (safe_mul_func_int16_t_s_s(0x1B6CL, (l_573 || (((void*)0 != (*l_250)) >= p_14))))) || (*l_506)) >= p_14) < p_14), &l_394, (**g_367)) >= 4294967288UL), (*p_13))) != p_14)) > (***g_425))) && p_14), (*g_357), p_14, &g_4);
                    }
                }
                else
                {
                    unsigned l_579 = 0UL;
                    unsigned short ****l_582 = &g_425;
                    for (g_323 = 17; (g_323 < (-11)); g_323 = safe_sub_func_uint8_t_u_u(g_323, 3))
                    {
                        (*g_52) = (safe_sub_func_uint8_t_u_u((*g_368), ((func_35((*g_136), &l_315, (**g_236)) < ((((safe_unary_minus_func_uint32_t_u(p_14)) && (**g_367)) <= p_14) == p_14)) & (**l_417))));
                        if (l_579)
                            continue;
                    }
                    (*g_136) = (*g_136);
                    for (g_57 = 24; (g_57 <= (-14)); g_57 = safe_sub_func_uint16_t_u_u(g_57, 5))
                    {
                        (*l_388) = (l_494 | (((**g_190) && (l_582 == (void*)0)) <= (((p_14 ^ (**g_367)) || (safe_sub_func_uint32_t_u_u((((**g_367) = (*g_368)) >= (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((*g_414), 9)), p_14))), 0x1FEA2120L))) < 4294967291UL)));
                    }
                }
                for (g_409 = 0; (g_409 >= 50); g_409++)
                {
                    l_591 = &l_451;
                    (**l_417) = func_35(&l_500, &l_514, func_40((*l_212)));
                }
            }
        }
        if ((*g_264))
        {
            short l_592 = 0x52E4L;
            int *l_604 = &g_53;
            if (((*l_388) > l_592))
            {
                short l_601 = 0x4ED7L;
                (*g_165) = ((*g_264) = ((safe_add_func_int16_t_s_s((l_592 && (**g_413)), l_592)) >= ((*g_368) = (safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(p_14, (safe_mul_func_int16_t_s_s(l_592, ((*l_388) = (p_14 >= ((**l_417) != l_601))))))), ((***g_236) = (***g_236)))))));
                (*g_264) = (*g_165);
                for (l_394 = 0; (l_394 > 4); l_394++)
                {
                    return (*g_188);
                }
            }
            else
            {
                (*g_136) = l_604;
                (*g_187) = (*g_187);
            }
        }
        else
        {
            (*g_264) = (func_27(func_40(((**g_237) >= 249UL)), (**l_417), (*l_417), (**g_367)) >= l_605);
        }
    }
    else
    {
        const int *l_606 = &g_10.f0;
        int *l_607 = (void*)0;
        unsigned ***l_644 = (void*)0;
        unsigned short *l_708 = &g_409;
        if ((1L & (*l_212)))
        {
            unsigned short l_608 = 65527UL;
            int *l_621 = &g_10.f0;
            char *l_627 = &l_193.f4;
            char l_689 = 8L;
            (*g_187) = (void*)0;
            (*l_388) = l_608;
            (*g_264) = (safe_unary_minus_func_uint8_t_u((*g_368)));
            if (p_14)
            {
                char *l_624 = &l_318;
                const int *l_625 = &g_53;
                int *l_626 = &g_4;
                unsigned short ****l_642 = &g_425;
                int l_643 = (-3L);
                int *l_665 = &g_521.f0;
                (*l_388) = l_608;
                (*l_388) = l_608;
                if ((~4L))
                {
                    short l_620 = 0L;
                    short *l_628 = (void*)0;
                    short *l_629 = &g_62.f0;
                    int l_638 = (-1L);
                    (*l_388) = ((((**g_356) | (**g_413)) > ((safe_add_func_uint32_t_u_u((0xB3AB5186L > (safe_lshift_func_uint16_t_u_u(p_14, (**g_413)))), (safe_mul_func_int16_t_s_s(((0x103EL | (safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((((**g_236) = p_15) != &g_57) || (*l_621)), (*g_368))), p_14))) | 65535UL), (**g_356))))) && p_14)) | (*p_15));
                    (*l_388) = func_35(&g_4, ((*g_136) = func_19(p_14, func_27(p_13, ((safe_mul_func_uint16_t_u_u(((*l_626) != (safe_mul_func_int8_t_s_s(1L, (*l_626)))), ((***l_415) = (!1UL)))) > (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((l_638 = 1UL), 12)), (p_14 != p_14)))), &g_4, p_14), p_14, (*l_625), l_606)), (**g_236));
                }
                else
                {
                    int *l_641 = &l_605;
                    char *l_668 = &g_93.f4;
                    int *l_678 = &l_315;
                    if (((*l_621) >= (safe_lshift_func_int8_t_s_s((func_27((**g_236), (*l_626), l_641, (*l_621)) == (l_643 = ((void*)0 != l_642))), 4))))
                    {
                        const unsigned short *l_653 = &g_93.f3;
                        const unsigned short **l_652 = &l_653;
                        const unsigned short ***l_651 = &l_652;
                        const int l_654 = 0xA1A34622L;
                        int l_663 = (-6L);
                        const int **l_664 = &l_606;
                        (*g_264) = ((((void*)0 == l_644) < 0x0657BC51L) | (((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((*l_642) != l_651), (0L && (*g_357)))) > p_14), 3)), (p_14 && l_654))) || 6UL) != 2L));
                        (*l_664) = func_44(func_19(p_14, (((void*)0 != l_624) && ((safe_rshift_func_uint8_t_u_u((~p_14), 1)) ^ l_654)), (*l_641), (safe_rshift_func_uint16_t_u_u(((**g_413) & (safe_add_func_int32_t_s_s((l_663 = ((*g_264) = (safe_add_func_uint8_t_u_u((((*l_641) | ((*l_388) = l_654)) >= (**g_367)), (*p_12))))), (*l_621)))), p_14)), &l_654), (**g_413));
                    }
                    else
                    {
                        struct S0 **l_670 = (void*)0;
                        struct S0 ***l_669 = &l_670;
                        int l_671 = 0L;
                        const int **l_672 = &l_625;
                        (*g_136) = l_665;
                        (*g_264) = ((4294967292UL && (safe_lshift_func_uint8_t_u_s((func_27(l_668, (((*l_669) = &g_188) != (void*)0), func_19((**g_356), g_245, l_671, (***g_425), (*g_136)), p_14) <= (**g_413)), (*p_15)))) > (***g_236));
                        (*l_672) = func_44((*g_136), (1L != (*p_15)));
                    }
                    (*l_641) = ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((((**l_642) = l_677) == (void*)0), (((**g_136) = (-8L)) | p_14))), ((***l_415) = ((*l_641) | (((*l_678) = 0x78A6357CL) != ((**g_190) = (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((*l_621), ((*l_621) >= ((~(p_14 && (*g_165))) || 0x4F01BAD7L)))), 65529UL)))))))) ^ (*l_212));
                    (*l_388) = (*l_621);
                    (*g_136) = l_607;
                }
            }
            else
            {
                const int *l_685 = &g_4;
                int *l_686 = &g_10.f0;
                (*l_388) = ((safe_add_func_int16_t_s_s((((*l_677) != &l_608) > ((**l_250) = ((p_14 == ((*g_368) && func_35(l_685, l_686, l_627))) == (safe_sub_func_uint8_t_u_u(((0x84E3A12DL >= (*g_165)) <= (-2L)), 0x30L))))), 0xEDB1L)) >= l_689);
            }
        }
        else
        {
            int l_707 = 0x3BBDA338L;
            (*g_264) = (safe_mul_func_int16_t_s_s(((**l_462) = 0L), p_14));
            for (l_605 = 0; (l_605 >= (-9)); l_605 = safe_sub_func_int16_t_s_s(l_605, 2))
            {
                int *l_694 = &g_521.f0;
                int **l_695 = &g_165;
                union U1 **l_696 = &l_542;
                (*l_695) = ((*g_136) = l_694);
                (*l_696) = &g_62;
                (*l_388) = ((((p_14 || 0xD7BF47F1L) >= (safe_sub_func_uint8_t_u_u(((*g_368) = (*g_368)), (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((***g_236) = (*p_13)), 7)), (((*p_15) = (safe_rshift_func_int16_t_s_u(p_14, 6))) <= (safe_sub_func_uint16_t_u_u(((***g_425) = func_27((*g_237), (*l_606), (*l_695), (7L & p_14))), l_707)))))))) & (*l_606)) >= (**l_695));
            }
        }
        (*l_388) = p_14;
        (*l_388) = (l_708 == (void*)0);
        (*g_136) = &l_315;
    }
    return l_709;
}







static const char * func_17(int p_18)
{
    const unsigned l_34 = 0x00457023L;
    unsigned short l_167 = 0x6599L;
    const int *l_168 = &g_10.f0;
    int **l_181 = &g_52;
    (*l_181) = func_19((safe_mul_func_uint8_t_u_u((func_27(func_32(l_34), p_18, g_165, l_34) | 65535UL), ((l_167 == l_34) <= l_34))), g_93.f5, g_93.f4, p_18, l_168);
    (*l_181) = (*g_136);
    return &g_57;
}







static int * func_19(short p_20, int p_21, short p_22, const unsigned short p_23, const int * p_24)
{
    const int *l_176 = &g_4;
    int l_180 = 5L;
    for (g_93.f5 = 0; (g_93.f5 >= 42); g_93.f5 = safe_add_func_uint8_t_u_u(g_93.f5, 6))
    {
        int l_171 = 0xF46489DCL;
        int *l_177 = &g_4;
        l_180 = (((g_93.f2 != 0x9439L) | l_171) >= ((safe_mod_func_int32_t_s_s((p_20 && (safe_mod_func_uint16_t_u_u((func_35(l_176, l_177, func_40((safe_rshift_func_uint8_t_u_s(p_21, ((*l_177) = (p_24 != p_24)))))) > 1L), g_57))), 0x34A22360L)) > p_22));
        if ((*p_24))
            continue;
        (*g_98) = (*g_98);
    }
    return (*g_136);
}







static unsigned short func_27(char * p_28, short p_29, int * p_30, const unsigned char p_31)
{
    int *l_166 = &g_53;
    (*g_136) = l_166;
    return (*l_166);
}







static char * func_32(const unsigned p_33)
{
    const int *l_39 = &g_4;
    char *l_68 = &g_57;
    int l_70 = (-8L);
    char **l_79 = &l_68;
    char ***l_78 = &l_79;
    int l_102 = 0L;
    union U1 **l_158 = &g_61;
    const int **l_163 = &l_39;
    int *l_164 = &g_4;
    if (func_35(l_39, &g_4, func_40(((*l_39) ^ (*l_39)))))
    {
        union U1 **l_64 = &g_61;
        (*l_64) = &g_62;
        (*g_52) = (*g_52);
        for (g_62.f0 = 0; (g_62.f0 <= (-10)); g_62.f0 = safe_sub_func_uint8_t_u_u(g_62.f0, 2))
        {
            int *l_67 = (void*)0;
            const int **l_69 = &l_39;
            (*l_69) = func_44(l_67, (l_68 == (void*)0));
        }
    }
    else
    {
        const int *l_73 = &g_4;
        char ***l_80 = &l_79;
        int l_88 = 1L;
        struct S0 *l_122 = (void*)0;
        if ((l_70 = p_33))
        {
            unsigned *l_76 = &g_77;
            int l_96 = 1L;
            char **l_107 = &l_68;
            int **l_117 = &g_52;
            int ***l_116 = &l_117;
            (*g_52) = (safe_lshift_func_uint8_t_u_s(func_35(l_73, &g_4, l_68), p_33));
            if ((safe_sub_func_uint32_t_u_u(((*l_76) = (&l_70 != &g_53)), ((*g_52) = ((l_78 != l_80) && p_33)))))
            {
                union U2 *l_81 = &g_10;
                union U2 **l_82 = &l_81;
                (*g_52) = 0L;
                (*l_82) = l_81;
            }
            else
            {
                const int *l_83 = &l_70;
                struct S0 * const l_92 = &g_93;
                int l_100 = (-1L);
                int l_101 = 0L;
                l_83 = l_73;
                if ((*l_39))
                {
                    int **l_85 = &g_52;
                    int ***l_84 = &l_85;
                    if ((((*l_84) = &g_52) == &l_39))
                    {
                        unsigned l_87 = 0UL;
                        int *l_89 = &g_10.f0;
                        (*g_52) = (!0xB133D7BFL);
                        l_88 = (((*l_39) != g_10.f1) & (((*l_39) >= ((*l_83) || ((p_33 <= p_33) != p_33))) ^ (safe_unary_minus_func_uint32_t_u(l_87))));
                        (**l_84) = l_89;
                        l_89 = l_76;
                    }
                    else
                    {
                        (*l_78) = (*l_80);
                        g_52 = &g_4;
                    }
                    for (g_53 = 8; (g_53 != (-20)); g_53 = safe_sub_func_uint32_t_u_u(g_53, 8))
                    {
                        struct S0 *l_95 = &g_93;
                        struct S0 **l_94 = &l_95;
                        int *l_97 = &l_88;
                        (*l_94) = l_92;
                        l_96 = (*l_39);
                        (*l_97) = (*l_83);
                        l_102 = (l_101 = (l_100 = (l_70 = ((g_98 == (void*)0) && 0x81L))));
                    }
                }
                else
                {
                    int **l_105 = &g_52;
                    char **l_106 = &l_68;
                    int *l_108 = (void*)0;
                    int *l_109 = &l_100;
                    int *l_110 = (void*)0;
                    int *l_111 = (void*)0;
                    int *l_112 = (void*)0;
                    int *l_113 = &g_53;
                    (*g_52) = (*g_52);
                    (*l_113) = ((*l_109) = (l_101 = ((safe_rshift_func_uint8_t_u_u(func_35(&g_53, &g_4, func_40(p_33)), p_33)) && (((*l_76) = (((*l_105) = &g_53) == &l_96)) || ((l_106 != l_107) <= (*g_52))))));
                }
                if (((void*)0 != &l_92))
                {
                    const int **l_118 = &l_83;
                    int *l_119 = &l_96;
                    (*l_118) = func_44(&l_70, (safe_lshift_func_int16_t_s_s((((void*)0 == l_116) || (*l_83)), 12)));
                    (*l_119) = ((1UL && (p_33 && p_33)) || (*g_52));
                }
                else
                {
                    struct S0 *l_123 = &g_93;
                    short *l_126 = &g_62.f0;
                    short *l_127 = &g_93.f6;
                    unsigned short *l_128 = (void*)0;
                    int l_133 = 1L;
                    if ((((safe_rshift_func_int16_t_s_u(((l_122 == l_123) < (safe_rshift_func_int16_t_s_s(((*l_127) = ((*l_126) = ((void*)0 == &g_62))), 2))), (g_93.f3 = func_35(&g_53, &g_53, (*l_107))))) <= (safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(p_33, p_33)) < 0x4031L), l_133))) == 0xABL))
                    {
                        int *l_134 = &l_70;
                        (*l_134) = (*g_52);
                        return &g_57;
                    }
                    else
                    {
                        int *l_135 = &l_88;
                        l_135 = ((*l_117) = (void*)0);
                    }
                    g_136 = &g_52;
                    (*g_136) = (*g_136);
                }
                for (l_101 = 0; (l_101 == 12); l_101++)
                {
                    for (g_93.f0 = 0; (g_93.f0 != (-21)); g_93.f0 = safe_sub_func_uint16_t_u_u(g_93.f0, 3))
                    {
                        int **l_141 = &g_52;
                        int ***l_142 = &g_136;
                        const int **l_143 = &l_73;
                        (*l_143) = func_44((*l_117), (((*l_142) = l_141) == &g_52));
                        l_96 = 0x2CA465FDL;
                    }
                    if (p_33)
                        break;
                }
            }
        }
        else
        {
            int l_148 = 0xE6782A09L;
            int l_149 = 0x14EA79E4L;
            const char **l_156 = (void*)0;
            (*g_52) = ((safe_sub_func_int16_t_s_s(((*l_39) <= (~((safe_mul_func_int16_t_s_s((l_148 | l_149), g_93.f4)) | (0L & ((*l_73) || (safe_rshift_func_uint8_t_u_u(g_93.f0, 3))))))), g_62.f0)) ^ 0x51L);
            for (l_88 = (-3); (l_88 < (-10)); --l_88)
            {
                char *l_157 = &g_57;
                (*g_52) = ((*l_73) == (&g_56 != l_156));
                return l_157;
            }
        }
    }
    (*l_158) = &g_62;
    (*l_164) = func_35(&l_70, &l_70, func_40((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(p_33, g_62.f0)), 12))));
    (*l_164) = 0x4A9F0F70L;
    return &g_57;
}







static int func_35(const int * p_36, int * p_37, char * p_38)
{
    union U1 **l_63 = &g_61;
    (*l_63) = g_61;
    return (*p_37);
}







static char * func_40(int p_41)
{
    int *l_47 = &g_4;
    char * const *l_59 = &g_56;
    char * const **l_58 = &l_59;
    char *l_60 = &g_57;
    for (g_4 = 0; (g_4 == 11); g_4++)
    {
        const int *l_55 = &g_53;
        l_55 = func_44(l_47, (((*l_47) != (safe_mod_func_int16_t_s_s(p_41, p_41))) | 4294967293UL));
        return g_56;
    }
    (*l_58) = (void*)0;
    return l_60;
}







static const int * func_44(int * p_45, unsigned short p_46)
{
    for (p_46 = 0; (p_46 == 48); p_46 = safe_add_func_int16_t_s_s(p_46, 3))
    {
        int *l_54 = &g_53;
        g_52 = p_45;
        (*l_54) = 0L;
    }
    return p_45;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_10.f1, "g_10.f1", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_93.f0, "g_93.f0", print_hash_value);
    transparent_crc(g_93.f1, "g_93.f1", print_hash_value);
    transparent_crc(g_93.f2, "g_93.f2", print_hash_value);
    transparent_crc(g_93.f3, "g_93.f3", print_hash_value);
    transparent_crc(g_93.f4, "g_93.f4", print_hash_value);
    transparent_crc(g_93.f5, "g_93.f5", print_hash_value);
    transparent_crc(g_93.f6, "g_93.f6", print_hash_value);
    transparent_crc(g_93.f7, "g_93.f7", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_563, "g_563", print_hash_value);
    transparent_crc(g_742, "g_742", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
