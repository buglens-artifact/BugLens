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



static int g_2 = 0L;
static unsigned short g_18 = 0xD102L;
static unsigned long long g_52 = 18446744073709551610UL;
static int g_55 = 0x1359A703L;
static int *g_54 = &g_55;
static char g_57 = 0x11L;
static short g_111 = (-9L);
static int *g_120 = &g_55;
static unsigned short g_127 = 0x91E3L;
static unsigned short g_131 = 0xE2BEL;
static unsigned short g_133 = 0x0853L;
static unsigned char g_149 = 0x03L;
static unsigned g_163 = 7UL;
static unsigned long long *g_174 = &g_52;
static unsigned long long **g_173 = &g_174;
static long long g_181 = 0x4420CCC24DD98C9ELL;
static unsigned g_193 = 0xA5B3A4ADL;
static unsigned long long g_206 = 0xFE22FAA98AF002CDLL;
static unsigned long long g_211 = 0xC108E42A34357C3CLL;
static unsigned g_218 = 1UL;
static unsigned g_250 = 4294967294UL;
static unsigned short *g_314 = (void*)0;
static char g_326 = 1L;
static char *g_333 = &g_326;
static char **g_332 = &g_333;
static int *g_358 = &g_2;
static int **g_357 = &g_358;
static int ***g_356 = &g_357;
static short g_369 = 0x9B96L;
static unsigned long long ***g_406 = (void*)0;
static unsigned g_409 = 0x7F358BD5L;
static unsigned short *g_422 = &g_133;
static unsigned short **g_432 = &g_314;
static char ***g_450 = &g_332;
static int g_540 = 0x2FC66C44L;
static long long *g_544 = &g_181;
static long long **g_543 = &g_544;
static int g_552 = 0xC293D29CL;
static int *g_658 = &g_2;
static int g_679 = 0x732B72C8L;
static int ****g_692 = &g_356;
static int *****g_691 = &g_692;
static unsigned char g_859 = 0x09L;
static unsigned long long g_913 = 5UL;



static unsigned func_1(void);
static char func_5(int p_6, short p_7, unsigned p_8, unsigned long long p_9);
static int * func_11(int p_12, char p_13, char p_14, int * p_15);
static unsigned short func_21(int p_22, int p_23, int * p_24);
static unsigned short func_27(short p_28, unsigned short * p_29, unsigned short * p_30);
static int * func_31(unsigned p_32, int * p_33);
static int * func_34(int * p_35, unsigned long long p_36, unsigned short * p_37);
static unsigned long long func_38(int * p_39);
static int * func_40(unsigned p_41, unsigned char p_42, int * p_43, unsigned long long p_44);
static unsigned char func_45(unsigned long long p_46, char p_47);
static unsigned func_1(void)
{
    long long l_10 = (-1L);
    unsigned long long *l_912 = &g_913;
    unsigned long long *l_914 = (void*)0;
    int l_915 = (-3L);
    unsigned short *l_918 = &g_133;
    unsigned short *l_919 = (void*)0;
    unsigned char **l_922 = (void*)0;
    l_915 = ((g_2 & (g_2 < (safe_lshift_func_int8_t_s_s(func_5(l_10, l_10, l_10, g_2), (safe_rshift_func_uint8_t_u_s(((l_912 == l_914) & g_409), 2)))))) >= 0x60L);

    ;


    (*g_658) = (((safe_add_func_uint16_t_u_u(l_915, l_10)) ^ l_915) ^ (g_131 < ((safe_mod_func_uint16_t_u_u(((((void*)0 == l_922) == l_915) < (-1L)), (-8L))) != 0xD739L)));
    l_915 = (safe_sub_func_uint64_t_u_u((**g_173), ((void*)0 != &g_332)));
    return l_10;
}







static char func_5(int p_6, short p_7, unsigned p_8, unsigned long long p_9)
{
    long long l_16 = 0x65E3EDFA831EB239LL;
    unsigned short *l_17 = &g_18;
    short *l_527 = (void*)0;
    short *l_528 = &g_369;
    int l_529 = 0x59901C6DL;
    int *l_530 = &g_2;
    int *l_535 = &g_2;
    (****g_691) = func_11((l_16 & ((((p_7 >= ((*l_17) = g_2)) || (((*g_174) = (safe_lshift_func_uint16_t_u_u(func_21((safe_rshift_func_int8_t_s_u((l_529 = (func_27(g_2, &g_18, l_17) && ((*l_528) = ((p_6 <= g_57) >= p_6)))), l_16)), p_8, l_530), 8))) == 0x4EC54B4503A5F20ELL)) < 1UL) != 0x8651E5AFL)), (*l_530), (*l_530), l_535);

    ;

    (****g_691) = &l_529;

    ;
    return (***g_450);


}







static int * func_11(int p_12, char p_13, char p_14, int * p_15)
{
    int **l_579 = &g_120;
    unsigned short *l_584 = (void*)0;
    unsigned short *l_585 = (void*)0;
    unsigned long long ***l_596 = &g_173;
    short l_641 = 0x6B76L;
    int *l_757 = &g_540;
    unsigned short ***l_772 = &g_432;
    int l_793 = (-3L);
    char **l_800 = &g_333;
    int l_806 = 0x3004D31AL;
    long long **l_809 = &g_544;
    unsigned long long **l_848 = &g_174;
    long long l_885 = 0xE5A271C4F8FA2180LL;
    int *l_909 = &g_2;
    if ((*p_15))
    {
        unsigned l_538 = 0x6AB20B74L;
        int ***l_563 = (void*)0;
        int l_582 = 0xFB038DC0L;
        char **l_610 = &g_333;
        int *l_618 = &g_540;
        unsigned l_643 = 2UL;
        unsigned long long **l_662 = (void*)0;
        unsigned short l_710 = 65535UL;
        unsigned short l_807 = 0xAD2EL;
        unsigned l_853 = 0xC7B048EAL;
        unsigned **l_877 = (void*)0;
    }
    else
    {
        unsigned l_886 = 0x608BDF11L;
        char *l_895 = &g_57;
        (*g_120) = (g_250 >= (((+func_45((l_886 > 0x8BL), (*l_757))) > (safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((p_12 == 65526UL), 7)), p_14)), 0x7435L))) || (-7L)));

        ;
        (***g_692) = &p_12;

        ;
        if ((254UL <= ((*l_895) = ((**g_332) = (safe_mod_func_uint8_t_u_u(g_250, 0xE2L))))))
        {
            short *l_902 = &g_369;
            (**l_579) = (((safe_lshift_func_int16_t_s_s(l_886, 5)) & (((*l_757) != (safe_add_func_int64_t_s_s((((**l_800) = (safe_add_func_int16_t_s_s(func_45(p_13, p_12), ((((*g_422) ^ ((*l_902) = g_131)) != p_13) <= (*p_15))))) & 0x06L), 0UL))) & (**g_543))) != g_206);
            (*l_757) = func_27((((safe_lshift_func_uint8_t_u_u(0x62L, (safe_lshift_func_uint8_t_u_s(func_45(l_886, (**g_332)), (***g_450))))) | (-7L)) == ((((0xADL == (*l_757)) < (*g_422)) > g_163) >= p_12)), l_902, l_902);
        }
        else
        {
            (*g_358) = (safe_rshift_func_int8_t_s_u(0xFFL, 2));
            (*l_579) = (***g_692);

            ;
        }

        ;
    }

    ;

    (*l_579) = &p_12;

    ;
    (*l_757) = 0xF1AF0510L;
    return l_909;




}







static unsigned short func_21(int p_22, int p_23, int * p_24)
{
    unsigned short l_533 = 65535UL;
    int l_534 = 0xA051C5BFL;
    l_534 = ((*g_120) = (safe_sub_func_uint64_t_u_u(l_533, l_533)));
    (**g_356) = &l_534;

    ;
    return p_23;


}







static unsigned short func_27(short p_28, unsigned short * p_29, unsigned short * p_30)
{
    int **l_48 = (void*)0;
    int *l_50 = &g_2;
    int **l_49 = &l_50;
    unsigned long long *l_51 = &g_52;
    int *l_526 = (void*)0;
    l_526 = func_31(p_28, func_34(&g_2, func_38(func_40((0xB04204102249687FLL != (func_45(((*l_51) = (((*p_29) && (&g_2 == ((*l_49) = (void*)0))) | (+(p_28 | (*p_30))))), g_2) == g_2)), g_57, &g_2, p_28)), g_314));

    ;
    ;

    (*l_49) = (**g_356);


    return (*p_30);
}







static int * func_31(unsigned p_32, int * p_33)
{
    int l_342 = 0L;
    char **l_349 = (void*)0;
    long long l_366 = 0xB87803D3D6E95E86LL;
    short *l_379 = &g_111;
    unsigned short l_381 = 0x3255L;
    int *l_388 = &g_55;
    unsigned long long *l_401 = &g_52;
    int l_433 = 0x28C209DBL;
    unsigned long long l_453 = 1UL;
    unsigned char l_473 = 0xCEL;
    long long **l_486 = (void*)0;
    long long **l_489 = (void*)0;
    unsigned short l_504 = 0x2F19L;
    for (g_133 = (-16); (g_133 <= 49); g_133 = safe_add_func_uint64_t_u_u(g_133, 2))
    {
        unsigned short *l_340 = &g_127;
        unsigned short *l_341 = &g_131;
        int l_343 = (-3L);
        int l_353 = 0x6D678DD1L;
        int ***l_362 = &g_357;
        int *l_389 = &l_353;
        int *l_475 = &l_353;
        long long *l_488 = &l_366;
        long long **l_487 = &l_488;
        unsigned l_499 = 18446744073709551609UL;
    }
    (*p_33) = (safe_lshift_func_int8_t_s_s(((*l_388) <= p_32), 7));
    return (**g_356);


}







static int * func_34(int * p_35, unsigned long long p_36, unsigned short * p_37)
{
    int l_321 = 0xA49A00B0L;
    unsigned long long **l_322 = &g_174;
    unsigned char *l_331 = &g_149;
    int l_334 = 0x4FE6702EL;
    int **l_335 = &g_54;
    for (g_52 = 0; (g_52 == 8); g_52 = safe_add_func_uint64_t_u_u(g_52, 6))
    {
        short l_319 = 1L;
        unsigned *l_320 = &g_250;
        unsigned long long ***l_323 = &g_173;
        g_326 = ((*g_120) = ((safe_add_func_int8_t_s_s((((*l_320) = (l_319 != p_36)) & (l_321 ^ (((l_322 != ((*l_323) = l_322)) & g_55) > 0x987118907BB7D368LL))), (safe_mod_func_uint32_t_u_u(l_319, ((0xD97F58E8F744D257LL > (-1L)) & l_319))))) || g_133));
    }
    l_334 = ((((g_250 <= (l_321 ^ (g_131 | (0x5DL & 1L)))) | 65532UL) && ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((*l_331) = l_321), ((((((void*)0 == g_332) != l_321) >= 6L) && 0xF987L) > 6L))), 4)) > p_36)) && l_321);
    (*l_335) = &g_2;

    ;
    return &g_55;


}







static unsigned long long func_38(int * p_39)
{
    int *l_184 = &g_2;
    int **l_185 = &l_184;
    int l_204 = (-9L);
    unsigned long long l_230 = 18446744073709551611UL;
    unsigned l_291 = 0UL;
    unsigned char l_294 = 0x04L;
    int l_308 = 1L;
    unsigned char l_312 = 255UL;
    int ***l_313 = &l_185;
    (*l_185) = l_184;
    if (((*g_120) = func_45((*g_174), g_18)))
    {
        unsigned short l_186 = 0UL;
        unsigned long long *l_205 = &g_206;
        short *l_207 = &g_111;
        int l_217 = 7L;
        (*g_120) = (g_133 || (g_127 & l_186));
        (*l_185) = (void*)0;

        ;
        if ((g_52 > (safe_lshift_func_int16_t_s_s(((*l_207) = (safe_sub_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(g_193, ((*l_205) = (l_186 > (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(l_186, (safe_add_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u(g_2, l_186)) == (l_186 || (((1UL && (safe_sub_func_int16_t_s_s((l_186 & l_204), g_18))) & l_186) & l_186))), (**g_173))))), (*g_120))))))), g_149))), 3))))
        {
            for (g_133 = 0; (g_133 > 16); g_133++)
            {
                int *l_210 = &g_55;
                (*l_185) = l_210;

                ;
                if ((*l_210))
                    continue;
            }

            ;
        }
        else
        {
            unsigned short l_222 = 65535UL;
            int l_231 = 1L;
            int *l_232 = &l_217;
            int *l_233 = &l_231;
            if ((*p_39))
            {
                unsigned short *l_216 = &g_127;
                unsigned short *l_221 = &g_131;
                int l_223 = 0xB70B0F04L;
                unsigned char *l_224 = (void*)0;
                unsigned char *l_225 = &g_149;
                p_39 = (*l_185);

                ;
                (*g_120) = 0x8C4916DEL;
                (*g_120) = (g_193 < ((g_211 = (*g_174)) & (((*l_225) = (g_52 ^ (safe_sub_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u((l_217 = ((*l_216) = 65530UL)), 0)) < (g_218 != (g_2 || ((((*l_185) = p_39) == &g_2) < (safe_lshift_func_uint16_t_u_s(((*l_221) = (g_18 = (0xB7DADB20L == (*g_120)))), l_222)))))), l_223)))) >= l_223)));
                (*l_185) = (l_233 = func_40((safe_lshift_func_uint16_t_u_s(l_186, 10)), ((safe_lshift_func_uint8_t_u_s(l_230, 1)) <= (g_127 = func_45(l_217, (l_231 = 0xB9L)))), l_232, l_223));

                ;
                ;
                ;
            }
            else
            {
                long long *l_234 = &g_181;
                int *l_235 = &l_217;
                l_235 = func_40((((((*l_234) = 0xC09F95BEDFB21533LL) >= (*g_174)) <= g_57) | 1L), (((void*)0 == g_174) & (*l_232)), &g_2, ((*g_120) == (*p_39)));

                ;
                if (l_217)
                    goto lbl_236;
            }

            ;
            ;
            ;
            ;
lbl_236:
            (*l_185) = (void*)0;

            ;
            (*l_232) = func_45(l_217, ((**g_173) >= ((+0xE036E825438B6353LL) & (*l_232))));

            ;
        }

        ;
        ;
    }
    else
    {
        short l_237 = (-1L);
        p_39 = p_39;
        return l_237;
    }

    ;
    ;
    for (g_193 = (-16); (g_193 == 58); g_193 = safe_add_func_uint8_t_u_u(g_193, 2))
    {
        unsigned char l_246 = 0xD7L;
        unsigned long long *l_253 = (void*)0;
        int l_286 = 0xDC47B371L;
        for (g_163 = 0; (g_163 != 27); g_163 = safe_add_func_int64_t_s_s(g_163, 4))
        {
            unsigned long long l_242 = 18446744073709551615UL;
            char *l_243 = &g_57;
            char **l_244 = &l_243;
            unsigned short l_245 = 65535UL;
            int l_251 = 0xA146DD52L;
            long long *l_281 = &g_181;
            char l_292 = 0x86L;
            unsigned *l_310 = &g_163;
            if ((l_242 < (&g_57 != ((*l_244) = l_243))))
            {
                unsigned char l_277 = 0x33L;
                long long **l_282 = &l_281;
                long long *l_285 = &g_181;
                short *l_293 = &g_111;
                if ((~(l_245 & l_246)))
                {
                    unsigned *l_249 = &g_250;
                    int l_252 = 0xD2A7965DL;
                    if ((*g_120))
                        break;
                    if (((*g_120) = (l_246 ^ ((safe_rshift_func_uint16_t_u_s((((l_251 = ((*l_249) = 0x3192B746L)) || (*g_120)) && (l_252 && ((*g_173) == l_253))), 9)) <= (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_246, (safe_lshift_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_u(0x20L, 5)) | 0L) == l_252) & l_246), 1)))), l_245))))))
                    {
                        char ***l_262 = &l_244;
                        (*l_262) = &l_243;
                        (*l_185) = &g_2;

                        ;
                    }
                    else
                    {
                        return l_242;
                    }

                    ;
                    for (g_127 = 13; (g_127 < 1); g_127 = safe_sub_func_uint8_t_u_u(g_127, 3))
                    {
                        unsigned l_269 = 0xA7C4AD1FL;
                        unsigned short *l_278 = &g_131;
                        (*l_185) = p_39;
                        (*g_120) = (0x433AL > (safe_lshift_func_int16_t_s_s((!g_193), ((safe_add_func_int64_t_s_s(((0x4E767B04L > (+((*l_249) = ((l_269 ^ (safe_rshift_func_int8_t_s_u((0xE0FD6618L || ((safe_unary_minus_func_uint16_t_u(l_252)) <= (safe_lshift_func_uint8_t_u_s((l_246 >= ((*l_278) = (safe_add_func_uint64_t_u_u(l_277, (((g_193 > l_277) || g_55) <= 0x1B660CBC0C80C949LL))))), 1)))), 3))) ^ g_193)))) || l_269), l_245)) ^ g_193))));
                        if (l_269)
                            continue;
                    }

                    ;
                    (*l_185) = p_39;
                }
                else
                {
                    (*g_120) = 9L;
                    (*l_185) = p_39;

                    ;
                }

                ;
                (*g_120) = (((safe_sub_func_int8_t_s_s((((*l_282) = l_281) == l_253), 7L)) < ((*l_293) = ((((l_286 = (safe_mod_func_int64_t_s_s(((*l_285) = g_211), (-1L)))) < (l_246 & l_277)) || (safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((l_291 != l_292) | l_286), l_286)), l_277))) > 0xF1L))) == 0xB6351B0FL);
            }
            else
            {
                int l_307 = (-1L);
                int l_309 = 2L;
                if (l_294)
                    break;
                for (g_57 = (-2); (g_57 < 9); g_57 = safe_add_func_int8_t_s_s(g_57, 9))
                {
                    unsigned long long *l_297 = &l_230;
                    unsigned long long **l_298 = &l_253;
                    int *l_299 = (void*)0;
                    int *l_300 = &l_286;
                    (*l_300) = ((*g_120) = (0L & ((*g_173) == ((*l_298) = l_297))));

                    ;
                    l_309 = ((safe_sub_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(g_2, (+(((*l_253) = 1UL) ^ (safe_rshift_func_int16_t_s_u(((l_307 = (func_45(l_292, g_193) | (*l_300))) <= l_242), (!(g_181 >= ((l_245 & 0L) | l_308))))))))) & g_163), (-3L))) < 1L);
                }
                if ((*g_54))
                {
                    unsigned long long l_311 = 0UL;
                    l_311 = ((void*)0 != l_310);
                    return (*g_174);
                }
                else
                {
                    l_286 = (((*l_281) = l_246) > (0UL < l_245));
                }
            }
            (*l_185) = p_39;

            ;
            l_312 = ((l_245 <= (18446744073709551615UL >= 0xC31A17AF234C5E8BLL)) < l_286);
        }

        ;
        p_39 = ((*l_185) = &g_2);

        ;
        ;
    }

    ;
    (*l_313) = &l_184;
    return (**g_173);
}







static int * func_40(unsigned p_41, unsigned char p_42, int * p_43, unsigned long long p_44)
{
    int **l_119 = &g_54;
    unsigned l_123 = 18446744073709551615UL;
    unsigned short *l_126 = &g_127;
    unsigned short *l_130 = &g_131;
    unsigned short *l_132 = &g_133;
    (*l_119) = &g_55;

    ;
    g_120 = ((*l_119) = (*l_119));

    ;
    if (((safe_sub_func_int16_t_s_s(0L, (func_45((**l_119), g_111) != l_123))) <= (safe_lshift_func_uint16_t_u_s((((((*l_126) = p_42) == 65527UL) & (l_123 != ((((*l_132) = ((*l_130) = (safe_lshift_func_uint16_t_u_s(g_57, p_41)))) & g_57) > (*p_43)))) && 251UL), l_123))))
    {
        int *l_134 = &g_55;
        unsigned short *l_146 = &g_18;
        char *l_156 = &g_57;
        unsigned long long *l_158 = &g_52;
        unsigned long long **l_157 = &l_158;
        unsigned *l_161 = (void*)0;
        unsigned *l_162 = &g_163;
        l_134 = p_43;


        for (g_18 = 0; (g_18 >= 53); ++g_18)
        {
            for (p_44 = 0; (p_44 < 18); ++p_44)
            {
                unsigned char l_143 = 0xEEL;
                long long l_147 = (-1L);
                unsigned char *l_148 = &g_149;
                (*l_119) = &g_2;

                ;
                (*l_119) = p_43;


                (*g_120) = ((safe_sub_func_uint8_t_u_u(g_52, (safe_lshift_func_uint8_t_u_u(l_143, 2)))) != (safe_lshift_func_uint8_t_u_s(((*l_148) = ((0xF1415305L | (*p_43)) & ((l_146 == (void*)0) < l_147))), 5)));
                if ((*g_120))
                    continue;
            }
        }


        (*g_120) = ((((safe_lshift_func_uint16_t_u_u(g_111, 0)) <= (*l_134)) && (*l_134)) > (safe_sub_func_uint64_t_u_u(((((*l_156) = p_42) && ((void*)0 != l_157)) ^ (((*l_162) = ((0UL ^ ((safe_sub_func_int8_t_s_s(0x74L, p_41)) | (**l_119))) && (*g_54))) >= (*p_43))), (*l_134))));
    }
    else
    {
        unsigned long long *l_172 = &g_52;
        unsigned long long **l_171 = &l_172;
        unsigned long long ***l_175 = &g_173;
        long long *l_180 = &g_181;
        unsigned char *l_182 = &g_149;
        int l_183 = (-1L);
        l_183 = (((safe_unary_minus_func_int32_t_s(((0x38L && ((safe_add_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(p_41, (l_171 != ((*l_175) = g_173)))), 12)) >= ((((((*l_182) = (safe_mod_func_int32_t_s_s((((**l_119) >= (((((*l_180) = (safe_rshift_func_int16_t_s_s((0x75DD027DL & ((*g_120) = (-1L))), 7))) ^ ((void*)0 == &g_149)) != 0xF4733EF3A8CD9319LL) != 0UL)) >= p_42), (*p_43)))) >= (**l_119)) >= 6L) == 0UL) && l_183)) && (**l_119)), g_57)) > 0x2AL)) < (-1L)))) && (-1L)) > (*g_174));
    }


    (*l_119) = p_43;
    return p_43;


}







static unsigned char func_45(unsigned long long p_46, char p_47)
{
    int *l_53 = &g_2;
    int **l_56 = &l_53;
    unsigned long long *l_75 = &g_52;
    unsigned long long **l_74 = &l_75;
    int *l_80 = &g_55;
    (*l_56) = (g_54 = l_53);

    ;
    if ((*g_54))
    {
        (*l_56) = &g_2;
        return g_52;
    }
    else
    {
        short l_72 = 4L;
        int **l_83 = &l_80;
        int **l_86 = (void*)0;
        (*l_56) = &g_55;

        ;
        if (g_57)
        {
            int *l_69 = &g_55;
            int **l_84 = &g_54;
            int ***l_85 = (void*)0;
            for (g_52 = (-12); (g_52 == 20); g_52 = safe_add_func_int64_t_s_s(g_52, 4))
            {
            }
            (**l_83) = (((l_84 = l_83) != (l_86 = &g_54)) | g_57);

            ;
            ;
        }
        else
        {
            int l_89 = 0x4697E54BL;
            int l_100 = (-3L);
            unsigned short *l_101 = &g_18;
            (*l_56) = &g_55;
            (*l_56) = (*l_56);
            (*l_53) = ((safe_sub_func_uint16_t_u_u(l_89, (g_57 | (safe_rshift_func_int16_t_s_u(((+((!p_46) < (safe_lshift_func_uint16_t_u_u(((*l_80) ^ ((*g_54) & (g_55 != ((*l_101) = (safe_sub_func_uint8_t_u_u(0x15L, (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_47, (l_100 = ((p_47 != l_89) ^ (-5L))))), p_47)))))))), 2)))) <= 0xFBL), g_55))))) ^ p_47);
            return p_47;
        }

        ;
        for (l_72 = 13; (l_72 == (-21)); l_72 = safe_sub_func_uint8_t_u_u(l_72, 7))
        {
            short *l_110 = &g_111;
            int l_112 = 0x7F8B30C5L;
            (*l_53) = (p_47 || ((g_2 == (safe_sub_func_int8_t_s_s(p_46, (safe_rshift_func_int16_t_s_s((((safe_add_func_int16_t_s_s(p_47, ((*l_110) = p_46))) <= (*g_54)) | l_112), p_46))))) ^ (safe_lshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(g_2, 6)), 18446744073709551615UL)), (**l_83)))));
            return p_46;
        }
    }

    ;
    return g_57;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_679, "g_679", print_hash_value);
    transparent_crc(g_859, "g_859", print_hash_value);
    transparent_crc(g_913, "g_913", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
