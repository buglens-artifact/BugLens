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



static unsigned g_10 = 8UL;
static unsigned char g_11 = 0x4BL;
static const int g_44 = 1L;
static unsigned long long g_46 = 1UL;
static unsigned long long g_63 = 0xC1B09C821F997EC5LL;
static int **g_68 = (void*)0;
static int g_72 = 0xFEB1EC6CL;
static unsigned short g_88 = 0x5601L;
static unsigned short g_90 = 0xDDC4L;
static unsigned short * const g_89 = &g_90;
static unsigned long long *g_96 = &g_63;
static unsigned g_99 = 1UL;
static unsigned *g_98 = &g_99;
static unsigned **g_97 = &g_98;
static char g_111 = (-1L);
static long long g_129 = 0xCDC9FF6DE5F43C71LL;
static int *g_152 = &g_72;
static const unsigned *g_178 = &g_10;
static const unsigned **g_177 = &g_178;
static short g_183 = 0L;
static char g_186 = (-1L);
static unsigned long long **g_239 = &g_96;
static unsigned long long ***g_238 = &g_239;
static unsigned g_251 = 9UL;
static const int *g_349 = &g_72;
static short *g_353 = &g_183;
static short **g_352 = &g_353;
static unsigned char *g_366 = &g_11;
static unsigned char **g_365 = &g_366;
static unsigned short *g_408 = &g_90;
static unsigned short **g_407 = &g_408;
static unsigned *g_428 = (void*)0;
static long long g_477 = 0L;
static int *g_504 = &g_72;
static long long *g_510 = &g_477;
static long long **g_509 = &g_510;
static unsigned g_524 = 0x413676E2L;



static short func_1(void);
static int func_2(short p_3, unsigned p_4, int p_5, short p_6);
static unsigned ** func_12(long long p_13);
static short func_16(unsigned p_17, int p_18, int p_19, unsigned * p_20, unsigned p_21);
static unsigned short func_24(const unsigned * p_25, unsigned * p_26, short p_27, unsigned ** p_28, unsigned * p_29);
static unsigned * func_30(unsigned long long p_31);
static unsigned func_39(unsigned * p_40);
static unsigned * func_47(int p_48, unsigned * p_49, short p_50, long long p_51, long long p_52);
static int func_54(char p_55, int p_56, unsigned short p_57, int ** p_58);
static unsigned long long * func_64(long long p_65, int ** p_66, unsigned short p_67);
static short func_1(void)
{
    int l_7 = (-3L);
    unsigned char l_8 = 0x21L;
    unsigned *l_9 = &g_10;
    int *l_458 = &g_72;
    int l_466 = 0x790D553AL;
    short l_493 = 0x041DL;
    unsigned short l_564 = 0x27EDL;
    (*l_458) = func_2(l_7, ((*l_9) = l_8), g_11, g_11);


    ;

    ;
    ;
    if ((*l_458))
    {
        int *l_459 = &g_72;
        unsigned l_578 = 0x97037C34L;
        unsigned char **l_581 = &g_366;
        l_458 = l_459;
        l_459 = &l_7;

        ;
        for (g_251 = 0; (g_251 > 31); g_251 = safe_add_func_int32_t_s_s(g_251, 2))
        {
            unsigned short l_467 = 0UL;
            unsigned **l_468 = &g_428;
            unsigned l_486 = 0xD37ABAD2L;
            unsigned char l_500 = 255UL;
            int *l_505 = &l_7;
            int l_529 = 0L;
            const unsigned char *l_541 = (void*)0;
            const unsigned char **l_540 = &l_541;
        }
    }
    else
    {
        unsigned *l_598 = &g_251;
        int l_599 = 0x5D1F2FF3L;
        (*l_458) = l_599;
    }
    return (*l_458);
}







static int func_2(short p_3, unsigned p_4, int p_5, short p_6)
{
    unsigned *l_33 = &g_10;
    unsigned **l_32 = &l_33;
    const int l_36 = (-9L);
    unsigned long long *l_45 = &g_46;
    int l_197 = 0L;
    unsigned char *l_323 = &g_11;
    unsigned *l_324 = &g_251;
    unsigned ***l_447 = &l_32;
    int *l_452 = &l_197;
    (*l_447) = func_12((safe_div_func_int16_t_s_s(func_16(((*l_324) = (((safe_sub_func_uint8_t_u_u(((*l_323) = (func_24(func_30(((l_197 = ((l_32 != &l_33) ^ (safe_sub_func_uint32_t_u_u((p_5 && l_36), (g_10 || ((safe_mod_func_uint64_t_u_u(((*l_45) = (9L & func_39(&g_10))), func_39(func_47(g_11, (*l_32), p_5, l_36, g_10)))) & 0xF453DDAA5E5C7849LL)))))) <= 0x9CL)), (*g_97), p_4, &g_98, (*g_97)) & g_44)), g_44)) >= p_5) || g_44)), l_36, g_44, (*g_97), p_4), p_4)));

    ;

    ;

    ;
    ;
    (*l_452) = (l_197 == ((g_251 = l_197) & ((safe_sub_func_uint16_t_u_u((**g_407), ((*g_353) = ((l_197 || ((*g_353) <= (*g_353))) & (safe_lshift_func_uint16_t_u_u(((((l_197 && p_4) ^ (**g_407)) | p_6) || p_4), 10)))))) > l_197)));
    if (p_3)
    {
        int **l_453 = &l_452;
        (*l_453) = &p_5;

        ;
        return (*g_349);
    }
    else
    {
        int *l_454 = &g_72;
        l_454 = &p_5;

        ;
        (*l_454) = (safe_add_func_int64_t_s_s((safe_unary_minus_func_int64_t_s(p_6)), (func_24((*g_177), (*g_97), p_4, func_12(p_3), (*g_97)) <= g_72)));

        ;
    }

    ;
    return p_6;
}







static unsigned ** func_12(long long p_13)
{
    return &g_98;


}







static short func_16(unsigned p_17, int p_18, int p_19, unsigned * p_20, unsigned p_21)
{
    int l_327 = 0xD7BFA6EBL;
    int l_401 = 7L;
    int *l_422 = &g_72;
    short l_432 = 0xC3F0L;
    int * const *l_437 = &l_422;
    int * const **l_436 = &l_437;
    unsigned long long ****l_442 = &g_238;
    unsigned long long *****l_443 = &l_442;
    unsigned long long ****l_444 = &g_238;
    unsigned l_445 = 0x02E03701L;
    int **l_446 = &l_422;
    for (g_99 = 6; (g_99 > 34); g_99++)
    {
        int *l_335 = &l_327;
        unsigned long long ****l_361 = &g_238;
        char l_367 = 0xCEL;
        unsigned char l_389 = 0x1BL;
        if (l_327)
        {
            unsigned short l_332 = 0x3F86L;
            int *l_340 = &l_327;
            unsigned char *l_360 = &g_11;
            unsigned long long *****l_362 = &l_361;
            char *l_368 = &g_111;
            if ((safe_mod_func_int16_t_s_s((safe_div_func_int64_t_s_s(g_129, 1L)), (l_332 = p_17))))
            {
                unsigned long long l_337 = 0x5451DF1B9022DA0CLL;
                unsigned **l_338 = &g_98;
                int l_339 = (-1L);
                int *l_347 = &l_327;
                for (p_17 = (-4); (p_17 != 12); p_17 = safe_add_func_int64_t_s_s(p_17, 4))
                {
                    int **l_336 = &g_152;
                    (*l_336) = l_335;

                    ;
                    (*l_335) = 1L;
                }

                ;
                if (l_337)
                    break;
                (*l_335) = (&g_178 != l_338);
                if (p_21)
                {
                    int **l_341 = &g_152;
                    l_339 = (p_17 | (g_111 < 9L));
                    (*l_341) = l_340;

                    ;
                    for (g_111 = 20; (g_111 != 0); --g_111)
                    {
                        (*g_152) = p_18;
                        (*l_341) = (void*)0;

                        ;
                        return g_251;
                    }
                    for (g_186 = 0; (g_186 <= (-16)); g_186--)
                    {
                        int *l_346 = &l_339;
                        (**l_341) = p_17;
                        (*l_341) = l_346;

                        ;
                    }

                    ;
                }
                else
                {
                    int *l_350 = &g_72;
                    short **l_351 = (void*)0;
                    if (p_17)
                        break;
                    if (p_17)
                    {
                        l_347 = &l_339;

                        ;
                        return g_183;


                    }
                    else
                    {
                        int **l_348 = &l_340;
                        (*l_348) = &p_19;

                        ;
                        g_349 = &g_44;

                        ;
                    }

                    ;
                    ;
                    l_350 = (void*)0;

                    ;
                    g_352 = l_351;

                    ;
                }

                ;
                ;
                ;
                ;
            }
            else
            {
                if (p_19)
                    break;
            }


            ;
            ;
            ;
            if (((safe_add_func_uint32_t_u_u(p_19, (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((((l_360 != l_360) <= (((*l_362) = l_361) != (void*)0)) | (p_21 == (((*l_368) = (safe_add_func_int64_t_s_s(((-1L) | ((p_21 ^ ((((g_365 == &g_366) | (*l_340)) == p_18) || l_367)) != p_18)), p_17))) == (*l_335)))), 7)), 0)))) ^ p_17))
            {
                long long l_383 = 0x6C6A78CF511DB535LL;
                if ((*g_349))
                {
                    int *l_369 = (void*)0;
                    unsigned **l_380 = (void*)0;
                    if (p_18)
                        break;
                    if (p_18)
                    {
                        int **l_370 = &l_340;
                        (*l_370) = l_369;

                        ;
                    }
                    else
                    {
                        unsigned * const l_373 = (void*)0;
                        int **l_381 = &l_369;
                        long long *l_382 = &g_129;
                        (*l_335) = (((*g_366) & ((*l_335) && (((*l_368) = (safe_mul_func_uint16_t_u_u((l_373 != &p_17), (((safe_add_func_uint32_t_u_u(0x5C576665L, (((*l_382) = (safe_sub_func_int32_t_s_s(func_54(p_19, (safe_mul_func_int16_t_s_s((p_19 || func_24((*g_97), l_335, p_17, l_380, p_20)), (*g_89))), l_327, l_381), l_327))) > g_251))) && l_327) >= 0x4FL)))) && l_383))) < p_17);
                        (*l_335) = 0x8C1057D3L;
                        (*l_335) = func_39((p_20 = (*g_97)));
                        (*l_335) = (p_19 = func_54((safe_mul_func_int8_t_s_s(((*l_368) = func_24(p_20, p_20, l_327, &g_98, (*g_97))), 0x57L)), (safe_div_func_uint16_t_u_u(((*g_89) = func_39(p_20)), l_383)), g_251, &l_369));

                        ;
                    }

                    ;
                }
                else
                {
                    const short l_388 = (-10L);
                    unsigned short * const *l_391 = &g_89;
                    unsigned short * const **l_390 = &l_391;
                    (*l_335) = (l_388 ^ func_54(((*l_368) = p_19), l_389, (*l_340), &g_152));
                    (*l_390) = &g_89;
                }

                ;
                for (p_19 = (-15); (p_19 < (-30)); p_19--)
                {
                    int **l_396 = &l_340;
                    int **l_397 = &g_152;
                    for (g_129 = (-19); (g_129 > (-19)); g_129++)
                    {
                        return l_383;


                    }
                    (*l_397) = ((*l_396) = &p_19);

                    ;
                    ;
                    if ((*l_335))
                        continue;
                    (*l_335) = (safe_rshift_func_int16_t_s_s((((*l_362) = (void*)0) == (void*)0), (safe_unary_minus_func_int32_t_s((func_54(((*l_368) = ((*l_340) < (((*l_335) = (g_88 ^ func_39(((*g_97) = (void*)0)))) == 0x3CD41806L))), l_401, ((safe_mod_func_int64_t_s_s(p_17, (-1L))) & (*l_340)), &g_152) | p_18)))));

                    ;
                    ;
                }

                ;

                ;
                return p_17;


            }
            else
            {
                char *l_406 = &g_111;
                if (((p_21 > ((*g_96) | (safe_mul_func_int16_t_s_s(((void*)0 == l_406), ((*g_89) = (((*g_89) <= func_39(p_20)) >= p_17)))))) == func_24(p_20, (*g_97), (*g_353), &g_98, (*g_97))))
                {
                    return p_17;
                }
                else
                {
                    unsigned short ***l_409 = &g_407;
                    unsigned short **l_411 = (void*)0;
                    unsigned short ***l_410 = &l_411;
                    unsigned short **l_413 = &g_408;
                    unsigned short ***l_412 = &l_413;
                    int l_417 = (-1L);
                    if ((((*l_409) = g_407) == ((*l_412) = ((*l_410) = &g_408))))
                    {
                        int ***l_414 = &g_68;
                        (*l_414) = &g_152;

                        ;
                        return (*g_353);
                    }
                    else
                    {
                        (*l_340) = (safe_sub_func_int16_t_s_s(0xCCA4L, (l_417 == 0L)));
                        return l_401;
                    }
                }
            }
        }
        else
        {
            int *l_421 = &l_401;
            for (g_90 = 0; (g_90 <= 55); g_90 = safe_add_func_uint8_t_u_u(g_90, 4))
            {
                unsigned char l_420 = 0x14L;
                (*l_335) = l_420;
                l_335 = l_421;
                l_421 = &l_327;

                ;
            }

            ;
            ;
            (*l_335) = p_17;
            l_422 = l_335;

            ;
            if (((*l_421) = ((*l_335) < (-9L))))
            {
                unsigned **l_427 = (void*)0;
                if (p_21)
                {
                    unsigned l_426 = 18446744073709551611UL;
                    for (l_389 = 17; (l_389 <= 56); l_389 = safe_add_func_uint8_t_u_u(l_389, 1))
                    {
                        int **l_425 = &l_335;
                        (*l_425) = &l_401;

                        ;
                    }
                    return l_426;
                }
                else
                {
                    int **l_429 = &l_335;
                    if (p_18)
                    {
                        (*l_421) = func_24(l_335, p_20, p_19, l_427, g_428);
                        if ((*l_421))
                            continue;
                    }
                    else
                    {
                        return (**g_352);
                    }
                    (*l_429) = &l_401;

                    ;
                }

                ;
            }
            else
            {
                unsigned short l_433 = 0UL;
                for (g_88 = (-28); (g_88 > 32); g_88 = safe_add_func_int64_t_s_s(g_88, 1))
                {
                    (*l_421) = (*g_349);
                    return p_17;
                }
                if (l_432)
                    break;
                l_433 = p_19;
            }
        }

        ;
        ;
        return p_19;
    }


    ;
    ;
    ;
    for (p_19 = 0; (p_19 <= 9); p_19 = safe_add_func_uint8_t_u_u(p_19, 8))
    {
        unsigned l_438 = 0x3CE81CB5L;
        int **l_439 = &g_152;
        l_438 = ((**l_437) = ((void*)0 == l_436));
        l_422 = ((*l_439) = (void*)0);

        ;
        ;
        return (*g_353);
    }
    p_19 = ((***l_436) = (p_18 > (safe_lshift_func_int16_t_s_s(((((*l_443) = l_442) != l_444) | g_111), (4294967292UL || p_19)))));
    (*l_446) = &p_19;

    ;
    return p_21;


}







static unsigned short func_24(const unsigned * p_25, unsigned * p_26, short p_27, unsigned ** p_28, unsigned * p_29)
{
    int **l_321 = &g_152;
    long long *l_322 = (void*)0;
    (*l_321) = (void*)0;

    ;
    (*l_321) = (*l_321);
    return p_27;
}







static unsigned * func_30(unsigned long long p_31)
{
    const short l_207 = 3L;
    int **l_211 = &g_152;
    unsigned l_215 = 4UL;
    int *l_241 = (void*)0;
    long long l_242 = 0L;
    int *l_244 = &g_72;
    unsigned long long ****l_269 = &g_238;
    unsigned char *l_311 = &g_11;
    long long *l_318 = (void*)0;
    long long *l_319 = &g_129;
    long long *l_320 = &l_242;
    for (g_99 = 0; (g_99 == 58); g_99++)
    {
        unsigned long long l_200 = 0xE1307C177FA41F08LL;
        long long *l_206 = &g_129;
        char *l_210 = &g_111;
        int **l_212 = &g_152;
        int l_228 = (-4L);
        unsigned long long ** const l_233 = &g_96;
        unsigned long long ** const *l_232 = &l_233;
        if (func_54(l_200, ((((((*l_206) = ((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(((safe_lshift_func_uint8_t_u_s(p_31, l_200)) > 1UL))), 11)) & func_39((*g_97)))) & p_31) || l_207) > (safe_sub_func_int32_t_s_s(func_54(((*l_210) = l_207), l_200, (*g_89), l_211), 1L))) & 0x8A79AF8EL), p_31, l_212))
        {
            for (g_186 = (-22); (g_186 > 29); g_186 = safe_add_func_uint16_t_u_u(g_186, 8))
            {
                return (*g_97);



            }
            if (p_31)
                continue;
            l_215 = 0x490C0348L;
        }
        else
        {
            if (g_11)
                break;
        }
        for (g_46 = 0; (g_46 <= 29); ++g_46)
        {
            int l_222 = 0xB40517B6L;
            int *l_225 = &g_72;
            (*l_225) = (safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s((l_222 != g_111), ((safe_rshift_func_uint8_t_u_s((((func_39((*g_97)) <= ((void*)0 == (*g_97))) >= g_46) <= (l_222 == 0x79L)), g_63)) && g_111))), 0xBD15L));
            if (p_31)
                break;
        }
        for (g_183 = (-21); (g_183 <= 7); g_183++)
        {
            int l_231 = 0L;
            unsigned long long ** const **l_234 = &l_232;
            unsigned long long *l_237 = &g_46;
            unsigned long long ** const l_236 = &l_237;
            unsigned long long ** const *l_235 = &l_236;
            int l_240 = 1L;
            char l_279 = 7L;
            unsigned short *l_300 = (void*)0;
            l_228 = p_31;
            l_240 = (safe_rshift_func_int8_t_s_s(l_231, ((l_235 = ((*l_234) = l_232)) == g_238)));

            ;
            if (p_31)
            {
                int *l_243 = &g_72;
                (*l_211) = l_241;

                ;
                l_240 = ((*l_243) = l_242);
                (*l_211) = l_244;

                ;
            }
            else
            {
                unsigned long long **l_249 = &l_237;
                unsigned *l_250 = &g_251;
                int l_258 = 1L;
                if ((0x3A6EC57CL || (((((*l_250) = ((safe_mul_func_uint8_t_u_u((65526UL | p_31), ((*g_238) == l_249))) <= (*g_89))) && p_31) & ((safe_div_func_int32_t_s_s(l_231, (safe_sub_func_uint16_t_u_u((*g_89), p_31)))) ^ 0xEE31L)) < 0x9C6CBE70D6C77FDBLL)))
                {
                    (*l_212) = &l_240;

                    ;
                    (*l_212) = (*l_212);
                    (*l_211) = (*l_211);
                }
                else
                {
                    unsigned long long ****l_271 = &g_238;
                    unsigned long long *****l_270 = &l_271;
                    int l_278 = 0xC0A4866CL;
                    unsigned char *l_286 = &g_11;
                    int *l_293 = (void*)0;
                    unsigned char **l_296 = (void*)0;
                    unsigned char **l_297 = &l_286;
                    for (g_88 = 0; (g_88 > 46); g_88 = safe_add_func_int32_t_s_s(g_88, 3))
                    {
                        l_258 = p_31;
                        (*l_212) = (void*)0;

                        ;
                    }
                    l_258 = (safe_sub_func_uint8_t_u_u(0x13L, ((g_251 = (((safe_rshift_func_int16_t_s_u(func_54(((safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((l_269 == ((*l_270) = l_269)) >= (safe_lshift_func_int8_t_s_u(func_54((((safe_sub_func_int32_t_s_s(l_231, ((safe_mod_func_uint64_t_u_u(func_54(l_278, l_278, (*l_244), &l_244), (-1L))) != l_231))) && p_31) & p_31), p_31, l_279, &g_152), 4))) >= 0x8BAAFD22L), 7UL)), p_31)), 0x87D8A3BB3813AB97LL)) >= p_31), p_31, l_258, &g_152), 5)) & p_31) < (-1L))) >= (-5L))));
                    if (((safe_sub_func_int16_t_s_s(func_54(((safe_lshift_func_int8_t_s_s(0x19L, g_251)) ^ 0x2DF9L), (safe_rshift_func_uint16_t_u_u(((void*)0 != &g_129), (((*l_206) = p_31) ^ p_31))), (((*l_286) = 247UL) < ((*l_210) = g_44)), &g_152), p_31)) | 0xEDL))
                    {
                        char l_288 = 1L;
                        int ***l_289 = &g_68;
                        l_288 = ((safe_unary_minus_func_int8_t_s(0xF4L)) | 0xBE1257983243ED31LL);
                        l_240 = ((*l_244) = func_39(&l_215));
                        (*l_212) = (void*)0;

                        ;
                        (*l_289) = &l_241;

                        ;
                    }
                    else
                    {
                        int *l_292 = &g_72;
                        l_258 = (+(safe_sub_func_int64_t_s_s((0x11ED2F5AE1CCF118LL && g_44), ((*l_206) = g_88))));
                        (*l_212) = &g_72;

                        ;
                        l_292 = ((*l_211) = &l_240);

                        ;
                        ;
                        (*l_212) = l_293;

                        ;
                    }

                    ;
                    (*l_244) = (safe_mod_func_int16_t_s_s((((*l_297) = &g_11) != &g_11), ((*g_89) = (safe_mod_func_int8_t_s_s((l_300 == &g_90), (*l_244))))));
                }

                ;
                (*l_244) = 6L;
                if (g_111)
                    continue;

            }

            ;
        }


        if (func_39((*g_97)))
        {
            int *l_301 = &g_72;
            int **l_302 = &l_301;
            (*l_211) = &g_72;

            ;
            (*l_302) = ((*l_212) = l_301);
        }
        else
        {
            unsigned long long l_303 = 18446744073709551615UL;
            int *l_304 = &l_228;
            l_303 = l_200;
            (*l_212) = l_304;

            ;
        }

        ;
    }

    ;
    (*l_211) = l_244;

    ;
    (*g_152) = (0x9B9FL > g_46);
    (*l_211) = func_47((((*l_319) = ((***l_269) != (***l_269))) || (**l_211)), &l_215, g_44, g_72, ((*l_320) = g_186));

    ;
    return (*g_97);




}







static unsigned func_39(unsigned * p_40)
{
    int **l_41 = (void*)0;
    const int *l_43 = &g_44;
    const int **l_42 = &l_43;
    (*l_42) = (void*)0;

    ;
    return g_44;
}







static unsigned * func_47(int p_48, unsigned * p_49, short p_50, long long p_51, long long p_52)
{
    unsigned char l_53 = 0UL;
    int l_59 = 0x4F57B17BL;
    unsigned long long *l_62 = &g_63;
    int **l_100 = (void*)0;
    int *l_116 = &l_59;
    char * const l_188 = &g_186;
    char * const *l_187 = &l_188;
    unsigned char *l_193 = &l_53;
    int **l_194 = (void*)0;
    int **l_195 = (void*)0;
    int **l_196 = &g_152;
    if ((l_53 | ((*l_116) = func_54((l_59 = 0x2FL), (1UL <= (safe_mul_func_int8_t_s_s((l_62 != (g_96 = func_64(l_53, g_68, l_53))), (&p_49 != g_97)))), p_51, l_100))))
    {
        unsigned char l_119 = 4UL;
        unsigned *l_122 = &g_99;
        if (p_52)
        {
            int **l_125 = &l_116;
            (*l_116) = (g_99 || (safe_mod_func_uint8_t_u_u((p_50 || func_54(l_119, p_48, (safe_rshift_func_uint8_t_u_s(((((*g_96) = (l_122 == l_122)) && l_119) || (+((safe_add_func_int16_t_s_s(func_54(g_99, (g_90 != 0xCDL), p_51, g_68), 0xE132L)) != l_119))), p_51)), l_125)), g_11)));
        }
        else
        {
            int *l_130 = &g_72;
            unsigned long long **l_158 = (void*)0;
            unsigned long long ***l_157 = &l_158;
            const unsigned ***l_179 = &g_177;
            short *l_182 = &g_183;
            char *l_184 = &g_111;
            char *l_185 = &g_186;
            for (l_53 = (-12); (l_53 >= 31); ++l_53)
            {
                long long *l_128 = &g_129;
                int **l_131 = &l_116;
                (*l_116) = ((((*l_128) = g_44) ^ (((-1L) | (-10L)) | g_10)) ^ (*g_96));
                if (g_44)
                    break;
                (*l_131) = (l_130 = l_122);

                ;
                ;
            }

            ;
            ;
            if (((*l_116) = p_50))
            {
                unsigned *l_141 = &g_99;
                int l_148 = (-1L);
                if (((*l_130) = (safe_sub_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(0x83L, (safe_lshift_func_int16_t_s_u(p_51, 15)))), (safe_mul_func_uint16_t_u_u(0UL, p_52))))))
                {
                    int **l_140 = &l_130;
                    (*l_140) = l_130;
                }
                else
                {
                    return l_141;


                }
                for (g_63 = 0; (g_63 > 40); g_63 = safe_add_func_int32_t_s_s(g_63, 8))
                {
                    int l_149 = (-7L);
                    int **l_159 = (void*)0;
                    int **l_160 = (void*)0;
                    int **l_161 = &g_152;
                    if ((safe_div_func_int32_t_s_s(1L, (safe_lshift_func_uint16_t_u_u((l_148 = ((*l_130) = p_48)), func_39(p_49))))))
                    {
                        unsigned long long **l_151 = (void*)0;
                        unsigned long long ***l_150 = &l_151;
                        (*l_130) = 0x57628AE8L;
                        (*l_130) = (p_52 | (l_149 || p_50));
                        (*l_150) = &g_96;

                        ;
                        (*l_130) = p_48;
                    }
                    else
                    {
                        g_152 = &p_48;

                        ;
                        (*l_130) = (safe_lshift_func_uint16_t_u_s((*g_89), (safe_add_func_int64_t_s_s((p_51 <= ((void*)0 != l_157)), func_39(l_122)))));
                        g_152 = &p_48;
                    }
                    (*l_161) = &g_72;

                    ;
                    (*l_161) = &p_48;

                    ;
                }

                ;
            }
            else
            {
                (*l_116) = ((void*)0 != l_62);
            }

            ;
            for (g_129 = 0; (g_129 == (-9)); g_129 = safe_sub_func_uint16_t_u_u(g_129, 9))
            {
                int **l_164 = &l_116;
                (*l_164) = l_122;

                ;
                (*l_164) = &p_48;

                ;
                (**l_164) = (*l_130);
            }

            ;
            (*g_152) = (safe_add_func_uint8_t_u_u((((((func_54(p_52, (safe_div_func_uint32_t_u_u((1L < (safe_lshift_func_int8_t_s_u(0L, 7))), (safe_add_func_uint8_t_u_u(1UL, (safe_rshift_func_uint8_t_u_s((((*l_185) = ((*l_184) = ((*g_89) ^ ((*l_182) = ((safe_mul_func_uint16_t_u_u((((((*l_179) = g_177) == &p_49) < (((*g_152) = (safe_lshift_func_uint16_t_u_s(func_39(p_49), p_51))) && (*g_152))) >= p_52), 7L)) | (*g_96)))))) && (*l_130)), g_99)))))), p_51, &g_152) >= p_52) & 0L) > g_63) >= g_99) == l_119), g_10));
        }

        ;
        ;
        return p_49;



    }
    else
    {
        char * const **l_189 = &l_187;
        int *l_190 = &l_59;
        (*l_116) = p_48;
        (*l_189) = l_187;
        l_190 = &p_48;

        ;
    }
    (*g_152) = (safe_rshift_func_uint8_t_u_u((g_72 >= g_63), ((*l_116) = ((*l_193) = 248UL))));
    (*l_196) = &p_48;

    ;
    return p_49;



}







static int func_54(char p_55, int p_56, unsigned short p_57, int ** p_58)
{
    unsigned long long l_107 = 0xE3979D795BCD5918LL;
    int *l_114 = (void*)0;
    int *l_115 = &g_72;
    for (g_90 = 5; (g_90 <= 36); g_90 = safe_add_func_uint8_t_u_u(g_90, 5))
    {
        char *l_110 = &g_111;
        p_56 = (((((p_57 || (safe_div_func_int32_t_s_s((-1L), l_107))) <= 0x8B12ACF1L) | ((safe_mod_func_int16_t_s_s(0L, (*g_89))) != ((g_11 == ((*l_110) = (-1L))) != g_88))) != p_57) != p_55);
        return l_107;
    }
    (*l_115) = (safe_rshift_func_int8_t_s_u(g_63, l_107));
    (*l_115) = func_39(l_114);
    return p_57;
}







static unsigned long long * func_64(long long p_65, int ** p_66, unsigned short p_67)
{
    int *l_85 = &g_72;
    int l_93 = 0xCA6696B4L;
    unsigned *l_94 = &g_10;
    for (g_10 = (-29); (g_10 == 15); g_10++)
    {
        int *l_71 = &g_72;
        int **l_86 = &l_85;
        unsigned short *l_87 = &g_88;
        unsigned long long *l_95 = &g_63;
        (*l_71) = (-1L);
        (*l_71) = (safe_add_func_uint64_t_u_u(((*l_95) = (safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((*l_87) = (l_71 == ((*l_86) = l_85))), (((void*)0 == g_89) ^ p_67))), (safe_sub_func_uint16_t_u_u(l_93, g_72)))) | ((func_39(l_94) || (*l_71)) == (*l_71))), p_67)), 8L))), g_72));
    }
    return &g_63;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_524, "g_524", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
