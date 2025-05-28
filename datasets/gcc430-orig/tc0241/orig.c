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



static volatile int g_2 = (-1L);
static int g_3 = 0xE2DB58E4L;
static volatile int * volatile g_6 = &g_2;
static int g_53 = 0x1E7BF5CBL;
static unsigned short g_55 = 65535UL;
static unsigned long long g_58 = 18446744073709551615UL;
static int *g_72 = &g_53;
static unsigned short g_80 = 2UL;
static char g_95 = 6L;
static short g_118 = 0x8091L;
static long long g_121 = 0xBF3AF71E1D77F595LL;
static volatile unsigned long long g_152 = 0x74891BC53C27CC01LL;
static volatile unsigned long long *g_151 = &g_152;
static volatile unsigned long long **g_150 = &g_151;
static int ** volatile *g_166 = (void*)0;
static int *g_181 = &g_53;
static int g_192 = 0x1C193A17L;
static unsigned long long g_205 = 0xAF77F40A761EAE6CLL;
static char *g_243 = &g_95;
static char * volatile *g_242 = &g_243;
static volatile short g_264 = (-8L);
static volatile short *g_263 = &g_264;
static short g_267 = 0xC69DL;
static unsigned long long g_271 = 18446744073709551612UL;
static int *g_281 = &g_3;
static unsigned g_312 = 0x23668E1CL;
static short g_323 = 0xA8FAL;
static short *g_339 = (void*)0;
static short **g_338 = &g_339;
static unsigned char g_362 = 0UL;
static volatile int g_366 = 0x3CF6F25CL;
static volatile int *g_365 = &g_366;
static volatile int **g_364 = &g_365;
static unsigned short g_389 = 0x4189L;
static unsigned char g_390 = 0x6BL;
static int g_413 = 2L;
static unsigned char *g_442 = &g_362;
static unsigned char **g_441 = &g_442;
static unsigned g_549 = 0x5253D42AL;
static unsigned g_656 = 0x4AE680DCL;
static int **g_662 = &g_281;



static unsigned long long func_1(void);
static int func_9(int * p_10, short p_11, short p_12, unsigned long long p_13, int * p_14);
static unsigned func_20(unsigned p_21, short p_22);
static unsigned short func_25(int p_26, unsigned char p_27, int p_28);
static int func_29(int * p_30, int * p_31, int * p_32, int * p_33);
static int * func_34(long long p_35);
static int func_46(unsigned p_47);
static int func_48(unsigned long long p_49);
static int func_65(unsigned long long p_66, unsigned long long p_67, long long p_68, unsigned p_69);
static unsigned long long func_70(int ** p_71);
static unsigned long long func_1(void)
{
    volatile int *l_8 = &g_2;
    int *l_15 = &g_3;
    int *l_44 = &g_3;
    int **l_43 = &l_44;
    int *l_45 = &g_3;
lbl_7:
    for (g_3 = 0; (g_3 > 11); g_3++)
    {
        g_6 = (void*)0;

        ;
        if (g_3)
            goto lbl_7;
        return g_3;
    }
    (*l_8) = g_2;
    (*l_15) = func_9(l_15, g_3, ((safe_sub_func_int64_t_s_s(((*l_15) ^ (safe_mul_func_int8_t_s_s(g_2, (*l_15)))), (g_3 , (func_20(((safe_add_func_int16_t_s_s(4L, (*l_15))) > func_25(func_29(((*l_43) = func_34((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((~(g_3 & (*l_15))), 65534UL)), (*l_15))))), l_45, &g_3, &g_3), (*l_45), g_389)), g_389) ^ (*l_45))))) , (*g_263)), (*l_15), &g_3);





    ;
    (*l_43) = func_34(g_53);
    return (**g_150);
}







static int func_9(int * p_10, short p_11, short p_12, unsigned long long p_13, int * p_14)
{
    int *l_669 = &g_3;
    l_669 = p_14;
    return (*l_669);
}







static unsigned func_20(unsigned p_21, short p_22)
{
    int **l_658 = (void*)0;
    int l_659 = 0x864AA925L;
    int *l_660 = (void*)0;
    int *l_661 = &g_53;
    int *l_666 = &l_659;
lbl_664:
    (*l_661) = (l_659 = (0x8573C973L & ((void*)0 != l_658)));
    if ((*l_661))
    {
        int *l_663 = (void*)0;
        int ***l_665 = &l_658;
        if (p_21)
        {
            g_662 = &g_72;

            ;
            (*g_662) = l_663;

            ;
        }
        else
        {
            if (g_53)
                goto lbl_664;
        }

        ;
        (*l_661) = ((void*)0 == l_665);
        (*g_662) = l_666;


        ;
        (*l_661) = p_21;
    }
    else
    {
        long long **l_667 = (void*)0;
        long long ***l_668 = &l_667;
        (*l_668) = l_667;
        return p_22;
    }


    ;
    ;
    return g_389;



}







static unsigned short func_25(int p_26, unsigned char p_27, int p_28)
{
    unsigned l_480 = 18446744073709551607UL;
    char l_481 = (-8L);
    short **l_487 = &g_339;
    int **l_491 = (void*)0;
    int *l_496 = &g_3;
    unsigned l_602 = 1UL;
    for (g_312 = 0; (g_312 == 4); g_312 = safe_add_func_uint16_t_u_u(g_312, 8))
    {
        char l_482 = (-1L);
        int *l_494 = &g_192;
        int ***l_535 = (void*)0;
        unsigned char ***l_600 = &g_441;
        unsigned l_603 = 4294967293UL;
        short *l_655 = &g_118;
        l_482 = (safe_mod_func_int16_t_s_s((l_481 = l_480), l_480));
        for (g_205 = (-28); (g_205 >= 51); ++g_205)
        {
            int l_490 = (-5L);
            int *l_538 = &l_490;
            int **l_537 = &l_538;
            int ***l_536 = &l_537;
            int l_547 = 1L;
            int l_551 = 0L;
            unsigned l_557 = 1UL;
            unsigned short l_579 = 0x20C0L;
            unsigned char *l_626 = &g_362;
            if (((l_482 , (l_481 , (safe_lshift_func_uint8_t_u_s((((l_487 != (void*)0) & (safe_lshift_func_int16_t_s_u(0xE8BCL, l_490))) , ((l_482 , (&l_482 != (void*)0)) <= 0x5EBEA80BL)), 6)))) , 0x1DCC2C64L))
            {
                int *l_495 = &g_53;
                int *l_532 = &l_490;
                int **l_531 = &l_532;
                int ***l_530 = &l_531;
                int l_552 = 0x74DE6321L;
                unsigned long long l_599 = 0x55E4C3257E34BC5FLL;
                if (l_490)
                {
                    int **l_499 = &g_72;
                    for (g_55 = (-20); (g_55 < 39); g_55 = safe_add_func_uint16_t_u_u(g_55, 5))
                    {
                        int **l_497 = &g_281;
                        int **l_498 = &g_181;
                        l_495 = l_494;

                        ;
                        (*l_498) = ((*l_497) = l_496);

                        ;
                        ;
                    }

                    ;
                    (*l_499) = &p_26;

                    ;
                    (*g_72) = p_28;
                }
                else
                {
                    int **l_500 = (void*)0;
                    int **l_501 = &g_72;
                    char *l_526 = &l_481;
                    (*l_501) = &p_26;

                    ;
                    if (((g_267 | p_28) , (safe_add_func_uint16_t_u_u((((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(p_27, 5)), ((**l_501) ^ ((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u(((!(safe_mod_func_int8_t_s_s(((*l_526) = ((~((*g_243) = (safe_sub_func_uint8_t_u_u((**g_441), (safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((*l_494), (safe_lshift_func_uint16_t_u_s(g_362, (g_271 || p_28))))), 0xF52C8BBBL)), 9L)), 0x8908L)))))) == p_27)), (*l_494)))) , (*l_494)), 6)) < g_3), 13)) , (**g_441))))) >= p_26) < p_28), p_26))))
                    {
                        unsigned l_527 = 0x9007965FL;
                        if (l_527)
                            break;
                        return l_527;


                    }
                    else
                    {
                        volatile int ***l_528 = &g_364;
                        int l_529 = 1L;
                        (*l_528) = &g_365;
                        if (l_529)
                            break;
                        (*l_501) = &p_26;
                    }
                    return p_26;


                }

                ;
                ;
                (*l_530) = (void*)0;

                ;
                for (g_53 = 0; (g_53 < 16); g_53 = safe_add_func_uint32_t_u_u(g_53, 6))
                {
                    int ****l_539 = &l_530;
                    p_26 = (~(l_535 != ((*l_539) = l_536)));

                    ;
                }

                ;
                if (p_28)
                {
                    char l_540 = 0x67L;
                    unsigned *l_548 = &g_549;
                    int **l_550 = &l_495;
                    (*l_495) = l_540;
                    if ((((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((*l_548) = (0x08L > (!l_547))), (func_70(l_550) , (l_551 = (*l_494))))), l_552)) != ((~(safe_div_func_int32_t_s_s(p_26, ((((safe_rshift_func_int8_t_s_s((((2L ^ (l_557 , l_552)) == g_58) > p_27), 6)) < 5UL) && 0xA7702F78L) , 0xF7BA5FABL)))) != 4294967287UL)) || (*g_243)))
                    {
                        unsigned short *l_584 = &g_80;
                        unsigned short *l_585 = (void*)0;
                        unsigned short *l_586 = (void*)0;
                        unsigned short *l_587 = &l_579;
                        int ***l_588 = &l_491;
                        l_495 = func_34(((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((*l_494), (safe_div_func_uint32_t_u_u(((*l_548) = (safe_sub_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(((*l_496) , (*l_496)))), ((safe_lshift_func_uint8_t_u_s((p_28 , (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((((safe_add_func_int32_t_s_s((l_579 , (safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((0x29D0L & ((*l_587) = (((*l_584) = p_28) || p_28))), ((**g_242) = ((l_588 == g_166) | (*l_496))))) == 6L), 0UL))), p_27)) | 0x5D22D7C56D830E18LL) , (*g_442)) < 0UL), (*l_494))), (*l_495)))), 3)) , (**l_550))))), (*g_281))))), p_28)), (**g_441))) != 0xBFF7D43EE369C4B3LL));

                        ;
                        l_552 = ((*l_496) || ((safe_rshift_func_uint16_t_u_s((*l_495), (**l_550))) & g_389));
                    }
                    else
                    {
                        unsigned short *l_601 = &l_579;
                        int l_604 = 0x9D505C4AL;
                        p_26 = (safe_lshift_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((g_413 == (safe_div_func_uint16_t_u_u((((**g_242) = (func_70(&l_494) <= ((void*)0 != l_532))) , (safe_div_func_int32_t_s_s((((*l_601) = ((((*g_243) = p_27) , func_34(l_599)) != (((&g_441 != l_600) ^ l_579) , l_548))) || (-6L)), p_26))), p_27))), l_602)) > l_603), 5));

                        ;
                        p_26 = (g_271 , (**l_550));
                        return l_604;
                    }

                    ;
                    ;
                    (*l_494) = ((*g_442) > (*g_442));
                    p_28 = (p_26 = (safe_div_func_int32_t_s_s(p_28, (*l_495))));
                }
                else
                {
                    int **l_607 = &l_494;
                    unsigned long long *l_608 = &g_205;
                    (*l_607) = &p_28;

                    ;
                    (*l_494) = (p_26 >= ((*g_150) != l_608));
                    (*g_72) = p_28;
                }

                ;
                ;
            }
            else
            {
                char **l_611 = (void*)0;
                char ***l_612 = &l_611;
                char **l_613 = &g_243;
                int l_618 = 0x71C0A4F6L;
                unsigned *l_628 = &l_602;
                int *l_633 = &l_618;
                (*l_494) = (safe_mul_func_uint8_t_u_u((((*l_612) = l_611) != l_613), p_26));
                for (l_551 = (-16); (l_551 != (-29)); l_551--)
                {
                    char *l_623 = &l_481;
                    long long *l_627 = &g_121;
                    unsigned *l_629 = &l_603;
                    int *l_630 = &l_618;
                    int **l_634 = &l_494;
                }
            }
        }

        ;
        for (p_28 = 6; (p_28 != (-12)); --p_28)
        {
            unsigned l_639 = 4294967295UL;
            unsigned *l_640 = &l_639;
            unsigned char *l_649 = &g_390;
            int *l_652 = (void*)0;
            short l_657 = (-1L);
            for (g_121 = 0; (g_121 <= (-28)); --g_121)
            {
                l_639 = (0x0D90L || ((0x5EL == (-1L)) <= (((**g_242) ^ (**g_242)) , g_118)));
            }
            p_26 = ((((*l_640) = (*l_494)) , (safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_267, g_118)), p_26))) ^ 0xBC16B0B2L);
            l_657 = ((((p_28 >= (safe_sub_func_int64_t_s_s((((*g_243) = (((p_28 , 1L) , (*l_494)) < g_656)) , (*l_494)), g_271))) != p_28) > (*l_494)) < (*l_494));
            if (p_27)
                continue;
        }
    }

    ;
    return g_362;


}







static int func_29(int * p_30, int * p_31, int * p_32, int * p_33)
{
    int l_239 = 0xF8AAA106L;
    short *l_274 = &g_267;
    short **l_273 = &l_274;
    short *l_289 = &g_267;
    int l_294 = 0x0722B247L;
    long long l_301 = 0xFE1426F250535987LL;
    char l_302 = 3L;
    unsigned l_316 = 0x8B9456BAL;
    int **l_317 = &g_281;
    unsigned **l_373 = (void*)0;
    unsigned char l_405 = 3UL;
    unsigned long long *l_415 = &g_205;
    unsigned long long l_433 = 0xCE0CBFE1FFC19A04LL;
    int ***l_470 = (void*)0;
    if ((l_239 = func_46(g_3)))
    {
        unsigned char l_245 = 0UL;
        for (g_118 = 0; (g_118 > 26); g_118 = safe_add_func_int32_t_s_s(g_118, 8))
        {
            unsigned l_249 = 4294967295UL;
            int l_255 = (-1L);
            int l_257 = 1L;
            unsigned short l_265 = 65529UL;
            unsigned long long *l_269 = &g_205;
            unsigned long long **l_268 = &l_269;
            if ((0x47A6L <= g_192))
            {
                char * volatile **l_244 = &g_242;
                int *l_246 = &g_53;
                (*l_244) = g_242;
                (*l_246) = l_245;
                if ((*p_32))
                    continue;
                for (g_121 = (-22); (g_121 == 25); g_121 = safe_add_func_int8_t_s_s(g_121, 5))
                {
                    unsigned l_256 = 0xB985C477L;
                    unsigned *l_260 = (void*)0;
                    unsigned *l_261 = (void*)0;
                    unsigned *l_262 = &l_249;
                    short *l_266 = &g_267;
                    unsigned char *l_270 = &l_245;
                    int **l_272 = &g_181;
                    (*l_272) = func_34(((g_271 = ((*l_270) = (l_249 || (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u(g_192)) , (*p_33)), (((g_53 & ((*l_266) = (((l_257 = (((*p_31) >= l_255) , l_256)) ^ (((&g_118 != (((safe_div_func_uint32_t_u_u(((*l_262) = 4294967295UL), g_95)) , 0x044EL) , g_263)) > l_239) , g_58)) || l_265))) , l_268) == (void*)0))), l_265))))) > (-1L)));

                    ;
                    if ((*p_31))
                    {
                        (*l_272) = p_30;
                        l_239 = (*p_32);
                    }
                    else
                    {
                        short ***l_275 = &l_273;
                        short **l_277 = (void*)0;
                        short ***l_276 = &l_277;
                        (*l_276) = (l_245 , ((*l_275) = l_273));

                        ;
                    }
                }
            }
            else
            {
                char l_280 = 4L;
                int **l_282 = &g_281;
                l_239 = ((safe_mod_func_int32_t_s_s(l_280, g_55)) | g_53);
                (*l_282) = g_281;
            }
        }
        for (g_271 = 14; (g_271 < 29); g_271 = safe_add_func_uint16_t_u_u(g_271, 3))
        {
            long long l_290 = 0x609E6741FA38B776LL;
            int **l_291 = &g_281;
            unsigned short l_292 = 5UL;
            unsigned short *l_293 = &l_292;
            unsigned long long *l_295 = &g_205;
            (*l_291) = ((((*l_295) = (safe_add_func_int8_t_s_s((+(safe_add_func_int16_t_s_s(((((void*)0 == l_289) ^ l_239) | (l_290 , (((*l_293) = (+l_292)) && ((l_294 = ((*l_274) = ((l_245 && 0xF6060BA4DF932BF6LL) & ((l_245 || (**l_291)) , 9UL)))) | l_245)))), (**l_291)))), (*g_243)))) ^ 0L) , p_33);
        }
    }
    else
    {
        unsigned l_300 = 4294967295UL;
        short **l_313 = &l_274;
        int l_324 = 0x6F889582L;
        short l_327 = 0x6C0FL;
        short l_363 = 0x5461L;
        int ***l_401 = &l_317;
        int *l_402 = &l_294;
        if (((9L | 0x07L) != (safe_mul_func_uint16_t_u_u(l_302, l_302))))
        {
            long long l_305 = 0x939A0984C2C58038LL;
            unsigned *l_310 = &l_300;
            unsigned *l_311 = &g_312;
            short ***l_314 = &l_273;
            int *l_315 = &g_192;
            for (l_301 = 17; (l_301 != (-2)); --l_301)
            {
                unsigned short *l_306 = &g_80;
                int *l_309 = &l_294;
                (*l_309) = (((l_302 && ((*l_306) = l_305)) , l_305) > (safe_rshift_func_int8_t_s_s((**g_242), 3)));
            }
            (*l_315) = (0xE7F02424L != ((((*l_310) = l_302) > ((*l_311) = 1UL)) || (((*l_314) = l_313) != &g_263)));
            l_316 = (*g_281);
        }
        else
        {
            unsigned l_318 = 0x15A3D644L;
            short **l_337 = &l_289;
            int l_347 = 0xF5B1E060L;
            unsigned long long *l_369 = &g_271;
            unsigned long long **l_368 = &l_369;
            unsigned ***l_374 = &l_373;
            long long *l_377 = &l_301;
            short *l_384 = &l_327;
            (*l_317) = (((((0x80A1DA36L < (l_317 == (l_318 , ((safe_add_func_uint8_t_u_u((~((g_53 | g_95) == (-8L))), (g_323 = ((p_31 == (*l_317)) , ((safe_lshift_func_int8_t_s_s(l_318, l_318)) || l_318))))) , l_317)))) | g_3) && 0xDAL) ^ l_300) , &g_3);
            if ((l_324 = 0x9D5DEC78L))
            {
                short l_328 = (-7L);
                long long *l_335 = &l_301;
                int l_336 = 0L;
                char **l_346 = &g_243;
                l_336 = ((safe_rshift_func_uint8_t_u_s(l_327, 4)) & (l_328 | (((*l_335) = (safe_rshift_func_uint8_t_u_s((l_318 == ((**l_313) = (!(safe_lshift_func_int16_t_s_u((0x6DDDA66D69CE97E0LL <= ((l_328 , g_312) < (safe_mod_func_uint64_t_u_u((**l_317), g_312)))), g_267))))), (**l_317)))) || l_318)));
                g_338 = l_337;

                ;
                g_181 = p_30;

                ;
                for (l_324 = 0; (l_324 >= (-16)); --l_324)
                {
                    int *l_350 = &g_192;
                    unsigned long long *l_359 = (void*)0;
                    unsigned long long *l_360 = &g_58;
                    unsigned char *l_361 = &g_362;
                    l_347 = (g_267 < (((safe_div_func_uint64_t_u_u((((((((1UL & l_327) || 0xFE1AAB166E47F6D2LL) & g_80) >= 0x5193L) != 4L) , (*p_32)) , 18446744073709551615UL), 0xC1E0AABE5D2F0E14LL)) == 0xFEL) && l_336));
                    if ((*p_30))
                        break;
                    for (g_121 = 19; (g_121 > 25); g_121 = safe_add_func_int16_t_s_s(g_121, 7))
                    {
                        (*l_317) = ((**l_317) , l_350);

                        ;
                    }
                    if (((((*l_350) , (*l_350)) , g_95) && l_324))
                    {
                        volatile int ***l_367 = &g_364;
                        unsigned long long ***l_370 = &l_368;
                        (*l_367) = g_364;
                        (*l_350) = (l_363 == 18446744073709551614UL);
                        (*l_370) = l_368;
                    }
                    else
                    {
                        p_33 = p_31;
                    }
                }

                ;
            }
            else
            {
                unsigned **l_371 = (void*)0;
                unsigned ***l_372 = &l_371;
                (*l_372) = l_371;
            }

            ;
            ;
            (*l_374) = l_373;
            if ((((*l_377) = (safe_add_func_int64_t_s_s(1L, l_318))) == (safe_lshift_func_uint16_t_u_s(((l_318 <= (*g_243)) , g_58), 9))))
            {
                short *l_385 = &l_363;
                int l_386 = 5L;
                unsigned short *l_387 = &g_80;
                unsigned short *l_388 = &g_389;
                int *l_391 = (void*)0;
                int *l_392 = &l_239;
                (*l_392) = ((**l_317) , 0L);
                (*l_317) = p_33;

                ;
                for (l_363 = 0; (l_363 != (-30)); l_363 = safe_sub_func_uint8_t_u_u(l_363, 4))
                {
                    for (g_95 = 27; (g_95 >= (-30)); --g_95)
                    {
                        unsigned l_397 = 0x84BB0F4EL;
                        l_397 = 0xD2432C4BL;
                    }
                }
            }
            else
            {
                int *l_400 = &g_53;
                (*l_400) = (safe_mod_func_int64_t_s_s(6L, (**l_317)));
            }
        }

        ;
        ;
        (*l_402) = (**l_317);
        g_192 = ((***l_401) <= (**l_317));
    }

    ;

    ;
    ;
    if ((*p_32))
    {
        unsigned l_411 = 18446744073709551612UL;
        unsigned long long *l_414 = &g_205;
        unsigned long long l_430 = 0x00827C2B00AAE8DFLL;
        int *l_438 = &l_294;
        if ((l_294 = 0x293A444AL))
        {
            long long l_410 = 4L;
            int *l_412 = &g_413;
            unsigned char *l_425 = &g_362;
            char l_436 = 9L;
            g_192 = ((safe_sub_func_uint64_t_u_u(((((safe_lshift_func_uint8_t_u_u(l_410, 7)) , (l_410 , ((*l_412) = ((l_410 && 1L) & l_411)))) , l_414) == l_415), (**l_317))) , (*g_281));
            for (g_80 = 0; (g_80 >= 15); ++g_80)
            {
                unsigned l_424 = 1UL;
                unsigned *l_426 = &l_316;
                int *l_429 = &l_239;
                unsigned char l_434 = 0x0DL;
                unsigned char **l_439 = &l_425;
                (*l_429) = (*p_31);
            }
        }
        else
        {
            unsigned *l_449 = &g_312;
            int **l_451 = &g_181;
            int ***l_450 = &l_451;
            long long *l_475 = &l_301;
            (*l_451) = func_34(((**l_317) <= ((((((safe_add_func_int8_t_s_s((**l_317), (safe_sub_func_int32_t_s_s((*l_438), ((*l_449) = 4294967286UL))))) <= (*l_438)) , &l_430) != &l_433) ^ 0x08L) , (!(**l_317)))));

            ;
            (*l_438) = ((safe_rshift_func_int16_t_s_s(((**l_451) | (**l_451)), 13)) < (**l_317));
            (*l_438) = (safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((***l_450), ((g_166 != &l_451) & ((*l_475) = ((safe_add_func_uint64_t_u_u(((*l_414) = (safe_div_func_int64_t_s_s((**l_451), g_118))), (***l_450))) , (safe_rshift_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((void*)0 == l_470), ((safe_mul_func_uint8_t_u_u(((((*l_415) = (safe_add_func_int8_t_s_s(8L, 0xDAL))) == g_80) , (*l_438)), (*l_438))) != g_389))), g_312)) || (**l_317)) , (*l_438)), (*l_438)))))))), 0x03L));
        }
    }
    else
    {
        return (*p_32);


    }
    return (*p_32);


}







static int * func_34(long long p_35)
{
    int *l_42 = &g_3;
    int **l_41 = &l_42;
    int ***l_40 = &l_41;
    (*l_40) = (void*)0;

    ;
    return &g_3;


}







static int func_46(unsigned p_47)
{
    char l_50 = 4L;
    int l_236 = (-1L);
    int l_237 = 0x181CDD84L;
    if (func_48(l_50))
    {
        int l_227 = 0x1AC2CD0BL;
        int *l_228 = &g_192;
        int **l_234 = &g_72;
        (*l_228) = (safe_lshift_func_int16_t_s_u(p_47, (safe_add_func_int16_t_s_s(g_118, (l_50 ^ (g_192 <= l_227))))));
        for (g_118 = 0; (g_118 < 12); ++g_118)
        {
            unsigned long long l_233 = 18446744073709551610UL;
            l_233 = (safe_mod_func_uint64_t_u_u(0xD4F9EB425E417620LL, ((-9L) & g_55)));
        }
        (*l_234) = func_34(l_50);

        ;
    }
    else
    {
        long long l_235 = 0xAE59394A59180C45LL;
        int **l_238 = &g_181;
        l_237 = (l_236 = (l_235 < l_235));
        (*l_238) = &l_236;

        ;
        (*l_238) = (*l_238);
    }

    ;
    ;
    return p_47;


}







static int func_48(unsigned long long p_49)
{
    int *l_52 = &g_53;
    unsigned long long *l_54 = (void*)0;
    unsigned long long *l_56 = (void*)0;
    unsigned long long *l_57 = &g_58;
    int l_167 = 1L;
    int *l_210 = &g_53;
    short l_217 = 1L;
    int **l_222 = &g_72;
    (*l_52) = (safe_unary_minus_func_int32_t_s(p_49));
    (*l_210) = (((*l_57) = (g_55 = p_49)) , ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((func_65(func_70(&l_52), p_49, g_121, (l_167 ^ l_167)) != 0x10E11370L), p_49)), 14)), 2)) & l_167));

    ;
    ;
    ;
    (*l_210) = (safe_mul_func_int8_t_s_s(p_49, (*l_52)));
    g_192 = (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((p_49 , 0x8C660854L) <= p_49), (-6L))), ((((*l_210) = ((void*)0 == &g_121)) , (*l_210)) && (((l_222 = &l_210) != &l_52) && p_49))));

    ;
    return p_49;
}







static int func_65(unsigned long long p_66, unsigned long long p_67, long long p_68, unsigned p_69)
{
    int *l_182 = (void*)0;
    for (p_67 = 0; (p_67 != 7); p_67++)
    {
        long long l_173 = (-1L);
        int **l_208 = (void*)0;
        int *l_209 = &g_192;
        for (p_69 = 19; (p_69 == 38); p_69++)
        {
            unsigned char l_172 = 0x39L;
            int **l_189 = (void*)0;
            int ***l_188 = &l_189;
            if (l_172)
            {
                unsigned l_174 = 0xB48F969CL;
                long long *l_175 = &g_121;
                int *l_176 = &g_53;
                (*l_176) = ((l_173 ^ (p_69 >= ((!p_68) || l_174))) & ((*l_175) = g_55));
                return l_173;
            }
            else
            {
                int l_207 = 4L;
                for (g_58 = (-2); (g_58 < 27); ++g_58)
                {
                    char l_179 = 1L;
                    int **l_180 = &g_72;
                    long long *l_183 = &l_173;
                    (*l_180) = func_34(l_179);

                    ;
                    g_181 = ((*l_180) = (*l_180));

                    ;
                    (*l_180) = l_182;

                    ;
                    (*l_180) = func_34(((*l_183) = (!0L)));

                    ;
                }

                ;
                ;
                for (g_55 = (-11); (g_55 > 3); g_55 = safe_add_func_uint16_t_u_u(g_55, 6))
                {
                    for (p_66 = 0; (p_66 > 22); p_66++)
                    {
                        int *l_190 = &g_53;
                        int *l_191 = &g_192;
                        unsigned long long *l_204 = &g_205;
                        unsigned long long l_206 = 2UL;
                        (*l_191) = ((*l_190) = (l_188 != (void*)0));
                        (*l_191) = (safe_unary_minus_func_uint8_t_u((safe_add_func_uint32_t_u_u((p_67 , (g_58 ^ ((safe_mul_func_int8_t_s_s(g_80, g_80)) && (safe_sub_func_int64_t_s_s((g_80 & (((*l_204) = (g_58 & (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(p_69, ((*g_181) , g_121))), g_121)))) , l_206)), 0L))))), p_68))));
                    }
                }
                l_207 = p_68;
            }

            ;
            ;
            return (*g_181);
        }
        (*g_181) = p_69;
        (*l_209) = ((*g_181) = (0xCDL >= g_80));
        g_181 = &g_53;
    }
    l_182 = func_34(p_66);

    ;
    return p_68;
}







static unsigned long long func_70(int ** p_71)
{
    int l_75 = 0L;
    int l_78 = (-3L);
    unsigned *l_79 = (void*)0;
    unsigned long long *l_86 = &g_58;
    unsigned long long **l_87 = &l_86;
    unsigned long long *l_88 = &g_58;
    unsigned long long **l_89 = &l_88;
    char *l_94 = &g_95;
    g_72 = (void*)0;

    ;
    if ((safe_rshift_func_int8_t_s_s((l_75 , (safe_div_func_int32_t_s_s(l_78, (g_80 = l_78)))), (0x2BL >= (((*l_94) = (safe_add_func_int32_t_s_s(0xBC79A46BL, (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((((*l_87) = l_86) == ((*l_89) = l_88)))), (safe_div_func_uint8_t_u_u(l_78, (safe_lshift_func_uint8_t_u_s((&l_75 != &g_3), 5))))))))) <= 0xD2L)))))
    {
        int l_102 = 0x32651EF2L;
        int *l_164 = (void*)0;
        for (l_78 = 0; (l_78 != (-10)); l_78 = safe_sub_func_uint32_t_u_u(l_78, 2))
        {
            unsigned char l_122 = 0x64L;
            int **l_160 = &g_72;
        }
        if ((**p_71))
        {
            unsigned short l_165 = 0x0E3EL;
            (**p_71) = (**p_71);
            (**p_71) = (0xEAD42751BA34BD09LL == l_75);
            l_165 = ((**p_71) = (-1L));
        }
        else
        {
            return g_3;
        }
    }
    else
    {
        (*p_71) = func_34((g_166 == g_166));


    }


    return g_55;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
