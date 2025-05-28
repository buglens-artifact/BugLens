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



static int g_3 = 2L;
static int *g_4 = &g_3;
static int *g_5 = (void*)0;
static const int *g_29 = &g_3;
static const int **g_28 = &g_29;
static int g_51 = 0x8FC5674FL;
static int g_54 = (-1L);
static char g_65 = 0x4DL;
static long long g_84 = 0xD735F31A33FFEA36LL;
static int g_89 = 0x961936EFL;
static int ****g_93 = (void*)0;
static int g_95 = (-1L);
static unsigned short g_162 = 1UL;
static unsigned short g_167 = 9UL;
static unsigned g_180 = 0UL;
static short g_233 = 0L;
static unsigned char g_235 = 251UL;
static unsigned char g_237 = 255UL;
static long long g_239 = 0xEA0E9085B8020A6BLL;
static long long g_242 = (-1L);
static char g_258 = (-1L);
static unsigned g_267 = 0x92D3BF73L;
static unsigned short g_325 = 0xEAF8L;
static int **** const * const g_336 = (void*)0;
static int **** const * const * const g_335 = &g_336;
static unsigned **g_363 = (void*)0;
static unsigned long long g_395 = 0x895629A1DBC6D311LL;
static unsigned g_436 = 0xD1D7AFC9L;
static unsigned char **g_448 = (void*)0;
static unsigned *g_456 = (void*)0;
static unsigned **g_455 = &g_456;
static const int g_464 = 0xD8E7D01AL;
static int *g_479 = &g_95;
static char g_481 = 0x85L;
static int g_485 = 0xBB779AB6L;
static unsigned short *g_606 = (void*)0;
static short *g_613 = &g_233;
static short **g_612 = &g_613;
static int **g_656 = &g_4;



static char func_1(void);
static int * func_6(long long p_7, int * p_8, char p_9, int * p_10);
static int * func_11(int * p_12, int p_13, unsigned char p_14);
static unsigned long long func_18(long long p_19, int * p_20);
static long long func_21(const int * p_22);
static int * func_23(const int ** p_24, unsigned long long p_25, int ** p_26, int ** const p_27);
static int ** func_31(long long p_32, int * p_33, long long p_34, int * p_35, const unsigned short p_36);
static int * func_37(int p_38, char p_39, int * const p_40, char p_41);
static int func_44(int p_45, int p_46);
static unsigned long long func_49(int * p_50);
static char func_1(void)
{
    int *l_2 = &g_3;
    int **l_15 = &g_5;
    long long *l_664 = (void*)0;
    long long *l_665 = &g_239;
    int *l_684 = (void*)0;
    g_5 = (g_4 = l_2);

    ;
    (*l_2) = (((*l_15) = ((*g_656) = func_6(g_3, func_11(l_2, ((&g_3 != ((*l_15) = &g_3)) | 0x249AL), (!((safe_sub_func_uint64_t_u_u(func_18(((*l_665) = func_21(&g_3)), &g_3), 0xD10F451CD1CF68ACLL)) & (*l_2)))), (*l_2), l_2))) != l_684);



    ;
    for (g_54 = (-21); (g_54 < (-8)); g_54 = safe_add_func_uint32_t_u_u(g_54, 1))
    {
        unsigned *** const l_687 = &g_363;
        int l_688 = 0x0A7B75E1L;
        l_688 = ((void*)0 == l_687);
        (*l_15) = (*l_15);
    }
    (*g_28) = (*l_15);

    ;
    return (**l_15);
}







static int * func_6(long long p_7, int * p_8, char p_9, int * p_10)
{
    unsigned l_679 = 7UL;
    int l_682 = 0L;
    int *l_683 = &g_3;
    p_10 = l_683;
    return l_683;


}







static int * func_11(int * p_12, int p_13, unsigned char p_14)
{
    long long l_669 = 0x160E73A5D8B22D23LL;
    int *l_678 = &g_3;
    for (g_242 = 26; (g_242 != (-25)); --g_242)
    {
        char l_668 = 0L;
        int l_670 = 0x9EEE4029L;
        unsigned *l_676 = &g_180;
        int *l_677 = &g_54;
        l_670 = (((l_669 = l_668) <= ((void*)0 != &p_13)) >= ((void*)0 == &g_336));
        (*l_677) = (safe_lshift_func_int8_t_s_u(func_18((l_669 || g_395), p_12), (p_13 >= (safe_sub_func_int8_t_s_s(0x43L, (0xD506A47BL >= ((*l_676) = (0x5AECL != ((safe_unary_minus_func_int64_t_s(p_13)) != p_13)))))))));
        if (l_669)
            break;
        (*g_28) = p_12;

        ;
    }


    return l_678;


}







static unsigned long long func_18(long long p_19, int * p_20)
{
    return g_162;
}







static long long func_21(const int * p_22)
{
    unsigned l_30 = 0x3D2717F4L;
    short l_196 = 0L;
    int *l_328 = &g_95;
    int **l_337 = &g_4;
    int *l_661 = &g_54;
    int l_662 = 0xC4A01EF8L;
    int l_663 = 1L;
    l_663 = (l_662 = ((l_661 = ((*g_656) = func_23(g_28, l_30, func_31(l_30, ((*l_337) = func_37(((*l_328) = ((safe_sub_func_uint32_t_u_u((~((func_44((safe_mod_func_uint64_t_u_u(func_49(&g_3), g_3)), (g_3 & (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s(((l_30 >= l_196) == 2L), 2)) != l_196), 7)))) == l_30) <= 4UL)), l_196)) <= l_30)), l_196, l_328, l_196)), g_237, l_328, g_267), l_337))) != (void*)0));

    ;


    ;
    ;
    return l_662;
}







static int * func_23(const int ** p_24, unsigned long long p_25, int ** p_26, int ** const p_27)
{
    int *l_658 = (void*)0;
    unsigned long long l_659 = 1UL;
    int *l_660 = &g_485;
    (*l_660) = (g_51 = l_659);
    (*p_27) = l_658;

    ;
    return l_658;


}







static int ** func_31(long long p_32, int * p_33, long long p_34, int * p_35, const unsigned short p_36)
{
    short *l_338 = &g_233;
    short *l_339 = &g_233;
    int l_340 = 0x23D4C4BBL;
    unsigned char l_341 = 1UL;
    unsigned char *l_343 = &g_235;
    int * const l_347 = &l_340;
    int *l_348 = &g_54;
    unsigned *l_365 = &g_267;
    unsigned **l_364 = &l_365;
    int * const l_437 = &g_3;
    int **l_528 = &g_4;
    unsigned long long *l_585 = (void*)0;
    int * const l_589 = &g_3;
    int ****l_595 = (void*)0;
    const unsigned char l_633 = 8UL;
    int **l_657 = &l_348;
    if ((l_340 = ((*p_33) = (((l_338 = l_338) == l_339) < l_340))))
    {
        unsigned char *l_342 = &g_235;
        int *l_346 = &g_95;
        int l_382 = 0x9B879C42L;
        int l_445 = 0x3C634273L;
        unsigned **l_457 = (void*)0;
        const int *l_467 = &l_382;
        (*g_28) = (l_348 = func_37(((*l_346) = ((~(l_341 ^ ((l_343 = l_342) == &l_341))) && func_44(((-1L) > (safe_sub_func_uint8_t_u_u(l_340, 0x67L))), (((void*)0 != &g_258) || func_44(g_167, p_32))))), g_237, l_347, g_180));

        ;
        ;
        ;
        if ((safe_lshift_func_int8_t_s_u(g_237, (safe_rshift_func_int16_t_s_u(func_49(func_37(g_239, (0x5558DF00L < g_239), p_33, p_36)), 13)))))
        {
            int **l_373 = &g_4;
            int ***l_372 = &l_373;
            int ****l_371 = &l_372;
            int l_390 = (-4L);
            unsigned **l_412 = &l_365;
            for (l_341 = (-1); (l_341 >= 8); l_341 = safe_add_func_uint64_t_u_u(l_341, 5))
            {
                (*g_4) = 0xAB115D69L;
                if ((*p_35))
                    continue;
                for (g_233 = 19; (g_233 <= (-24)); g_233 = safe_sub_func_int32_t_s_s(g_233, 5))
                {
                    unsigned *l_362 = &g_267;
                    unsigned **l_361 = &l_362;
                    unsigned ***l_366 = (void*)0;
                    unsigned ***l_367 = &l_364;
                    unsigned char *l_370 = &g_235;
                    (*p_35) = ((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((*l_361) = &g_180) != &g_267), (g_363 != ((*l_367) = l_364)))), 6)) || (*l_347));

                    ;
                    (**l_373) = (safe_sub_func_uint8_t_u_u((l_370 != (void*)0), (((void*)0 != l_371) == (safe_lshift_func_int8_t_s_u(g_167, g_267)))));
                    for (g_167 = 0; (g_167 >= 8); g_167++)
                    {
                        (**l_372) = l_362;

                        ;
                        (**l_371) = &p_35;

                        ;
                        (***l_371) = &l_340;

                        ;
                    }
                }
            }

            ;
            ;
            ;
            for (g_162 = 0; (g_162 <= 47); g_162++)
            {
                int *l_383 = &l_382;
                int l_391 = 1L;
            }
        }
        else
        {
            unsigned ***l_451 = &g_363;
            unsigned ***l_452 = &l_364;
            unsigned **l_454 = &l_365;
            unsigned ***l_453 = &l_454;
            const int *l_463 = &g_464;
            const int **l_462 = &l_463;
            const int **l_465 = (void*)0;
            const int **l_466 = (void*)0;
            int l_468 = 7L;
            l_467 = ((*l_462) = ((*g_28) = func_37(((*l_346) = p_34), ((safe_add_func_uint32_t_u_u(((*l_365) = ((!(((*l_453) = ((*l_452) = ((*l_451) = g_363))) == (l_457 = g_455))) <= ((((safe_lshift_func_int8_t_s_s((0x07L >= p_34), g_267)) >= p_36) && ((!(safe_sub_func_int64_t_s_s((p_32 != (l_382 | p_36)), g_258))) > p_36)) <= g_267))), 0L)) >= g_237), p_35, l_382)));

            ;
            ;
            ;
            ;
            ;
            ;
            (*p_35) = ((l_468 = (+0x6797F390L)) != (g_51 != p_32));
        }

        ;
        ;
        ;
        ;
        ;
        ;
    }
    else
    {
        int l_473 = (-9L);
        int l_478 = 1L;
        char *l_480 = &g_481;
        unsigned short *l_482 = (void*)0;
        unsigned short *l_483 = (void*)0;
        unsigned short *l_484 = &g_162;
        int * const l_488 = &l_340;
        const int **l_491 = &g_29;
        unsigned **l_507 = &g_456;
        unsigned char **l_510 = (void*)0;
        long long *l_559 = (void*)0;
        long long **l_558 = &l_559;
        short l_609 = 0x747DL;
        short *l_640 = &l_609;
        (*l_347) = (safe_add_func_uint64_t_u_u(((safe_add_func_int8_t_s_s((l_473 ^ (g_258 | (safe_rshift_func_uint16_t_u_u(g_51, 6)))), ((((*l_484) = (((*l_348) && ((safe_add_func_uint16_t_u_u((~(l_478 = g_65)), ((((((((l_437 != g_479) && g_395) < (((*l_480) = ((l_473 ^ p_36) == g_167)) ^ g_395)) >= 0L) && l_473) != p_32) & 0x5F103191L) && p_36))) ^ p_34)) | p_36)) | p_36) || (*l_347)))) >= 0xFCL), l_473));
        p_35 = func_37(l_478, func_44(func_49(func_37(g_485, ((g_180 || (safe_sub_func_int32_t_s_s((*p_33), ((l_478 || (*p_35)) ^ (+((*l_484) = (0x6BB1ACD2L < 1L))))))) & (p_32 >= (*l_437))), l_488, (*l_488))), p_32), l_347, p_32);

        ;
        ;
        ;
        if (func_49(p_35))
        {
            const int ***l_492 = &l_491;
            const int **l_494 = &g_29;
            const int ***l_493 = &l_494;
            char *l_497 = &g_258;
            int *l_498 = &g_95;
            int **l_499 = (void*)0;
            int **l_500 = (void*)0;
            int **l_501 = &g_479;
            int * const l_502 = (void*)0;
            int * const l_503 = &g_485;
            int **l_504 = &l_348;
            unsigned ***l_508 = &l_364;
            unsigned char ***l_509 = &g_448;
            unsigned char ***l_511 = &l_510;
            int **l_527 = &l_348;
            const unsigned long long *l_548 = &g_395;
            unsigned l_553 = 0x3CD8B2D7L;
            int ***l_597 = &l_528;
            int ****l_596 = &l_597;
            (*l_504) = l_503;

            ;
            (*l_494) = func_37((*g_479), (safe_sub_func_int32_t_s_s((g_235 & ((&g_456 != ((*l_508) = l_507)) || ((g_233 == ((((*l_509) = &l_343) != ((*l_511) = l_510)) < (*l_488))) >= p_34))), 0x2F7EAB35L)), &l_340, p_34);

            ;
            ;
            ;
            if ((safe_sub_func_uint32_t_u_u((p_32 <= p_36), ((((safe_rshift_func_uint8_t_u_s((((safe_add_func_int64_t_s_s(g_481, g_267)) != (+(*l_347))) < (p_36 && func_49(&l_478))), p_32)) == p_36) <= 0xD38EL) < 0x2AFE8383E0AA7AC6LL))))
            {
                unsigned *l_522 = &g_180;
                int l_525 = 0xC34FCC02L;
                int **l_526 = &g_4;
                l_525 = (((((safe_rshift_func_int16_t_s_u((*l_348), 0)) > ((p_36 > ((safe_lshift_func_int8_t_s_u(((((*l_522) = ((*l_365) = ((*l_488) = p_34))) != (*p_33)) ^ 2L), p_32)) > (*l_437))) > (safe_mod_func_uint64_t_u_u(g_258, (g_481 | 0x4B5F1D5E67ACE2E2LL))))) ^ 8UL) == g_258) && g_89);
                return &g_4;





            }
            else
            {
                unsigned long long * const *l_534 = (void*)0;
                int l_540 = 8L;
                long long l_554 = 1L;
                int ***l_569 = (void*)0;
                unsigned char ***l_576 = &l_510;
                long long l_586 = 0xACC50CA02927D228LL;
                unsigned l_587 = 18446744073709551615UL;
                if ((*l_347))
                {
                    int **l_531 = &g_4;
                    for (p_34 = (-16); (p_34 > 3); p_34 = safe_add_func_int16_t_s_s(p_34, 1))
                    {
                        (*l_528) = p_33;

                        ;
                    }

                    ;
                    return &g_4;





                }
                else
                {
                    unsigned long long * const **l_535 = &l_534;
                    (*l_511) = g_448;

                    ;
                    (**l_528) = ((0UL && (*l_488)) != (safe_lshift_func_uint16_t_u_u(p_34, p_32)));
                    (*l_535) = l_534;
                }

                ;
                if ((p_32 | func_49(p_33)))
                {
                    long long *l_541 = &g_242;
                    unsigned long long *l_542 = &g_395;
                    int l_543 = 0x0F8AD327L;
                    unsigned long long l_557 = 18446744073709551615UL;
                    long long ***l_560 = (void*)0;
                    long long ***l_561 = (void*)0;
                    long long ***l_562 = (void*)0;
                    long long ***l_563 = &l_558;
                    int * const *l_566 = &l_502;
                    int * const **l_565 = &l_566;
                    int * const ***l_564 = &l_565;
                    int * const **l_568 = (void*)0;
                    int * const ***l_567 = &l_568;
                    int *l_570 = &l_543;
                    unsigned char ****l_577 = &l_511;
                    if (((((((**l_528) != 1L) & p_36) >= ((((*l_542) = ((safe_add_func_int64_t_s_s(((*l_541) = ((((**l_527) = (*p_33)) & ((+(safe_add_func_uint16_t_u_u(((*l_484) = p_32), l_540))) != 0x2BL)) < g_242)), 7UL)) >= 0x55L)) < p_32) != l_543)) | l_540) ^ g_464))
                    {
                        int *l_555 = &g_54;
                        (**l_504) = ((*l_488) = ((((*l_542) = (p_36 <= ((*l_480) = ((*p_35) == (safe_sub_func_uint16_t_u_u(g_95, ((*l_484) = (l_548 != l_542)))))))) > (safe_mod_func_uint8_t_u_u(p_32, l_540))) | (((((safe_add_func_int64_t_s_s(l_553, ((*l_541) = g_258))) <= l_554) < l_543) || (**l_527)) == 0x02B2L)));
                        (*l_528) = l_555;

                        ;
                    }
                    else
                    {
                        int * const l_556 = &l_340;
                        (*l_504) = func_37(((*l_348) = (((*l_484) = (g_167 & (func_49(func_37(p_34, p_32, l_556, g_54)) == g_481))) || g_436)), l_540, p_33, g_481);

                        ;
                        ;
                        (**l_527) = (g_180 == (g_485 != l_557));
                    }

                    ;
                    ;
                    (*l_563) = l_558;
                    if ((((((*l_567) = ((*l_564) = (void*)0)) != l_569) == (func_49(l_570) ^ ((*l_541) = g_242))) && ((void*)0 == &g_233)))
                    {
                        unsigned short l_575 = 0xF707L;
                        l_575 = (safe_lshift_func_uint16_t_u_s((~((*l_484) = ((0xF8FAL <= p_34) & ((safe_mod_func_uint32_t_u_u(p_34, p_36)) != (*l_437))))), 10));
                        (*g_28) = ((*l_528) = (void*)0);

                        ;
                        ;
                        (*g_28) = ((*l_504) = p_35);

                        ;
                        ;
                    }
                    else
                    {
                        (**l_492) = (void*)0;

                        ;
                        (*p_33) = 0x792597C3L;
                        p_33 = p_33;
                        (*l_528) = p_35;

                        ;
                    }

                    ;
                    ;
                    ;
                    ;
                    if ((l_576 != ((*l_577) = l_576)))
                    {
                        (*l_348) = 0x746A2940L;
                        (*g_28) = func_37(p_32, func_44((*g_479), (0xA5L != (p_32 != p_36))), p_35, ((*l_480) = (safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((-1L), g_167)), 0xC130L))));

                        ;
                        ;
                    }
                    else
                    {
                        (*l_348) = ((p_34 > p_32) || 0x7EL);
                    }
                }
                else
                {
                    char l_584 = 8L;
                    int * const l_588 = &l_340;
                    unsigned char **l_592 = &l_343;
                    (*l_494) = func_37(p_34, p_34, p_35, (**l_504));

                    ;
                    ;
                    (*l_588) = (safe_add_func_uint32_t_u_u((((*l_509) = &l_343) != l_592), (p_36 <= (((+g_436) ^ ((safe_sub_func_int32_t_s_s((&l_569 != (l_596 = l_595)), (g_54 <= (safe_add_func_int32_t_s_s((*p_33), (((**l_527) = ((*l_365) = 4294967292UL)) == p_34)))))) ^ 2UL)) && (*l_348)))));

                    ;
                    ;
                    (**l_492) = (*l_491);
                    (*g_4) = (*l_347);
                }

                ;
                ;
                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;
        }
        else
        {
            unsigned short l_600 = 65529UL;
            unsigned char * const l_608 = &l_341;
            int * const l_610 = &l_340;
            long long l_615 = 0x7B0370713F4A7716LL;
            long long l_625 = 0x5A12ED76DF1DFA21LL;
            int **l_637 = &l_348;
            short * const l_641 = (void*)0;
            if (l_600)
            {
                short ***l_601 = (void*)0;
                short **l_602 = &l_338;
                int l_603 = (-8L);
                l_602 = &l_338;
                l_603 = (*p_33);
            }
            else
            {
                long long * const * const l_604 = (void*)0;
                unsigned short **l_605 = (void*)0;
                unsigned short **l_607 = &l_484;
                int l_611 = 0xDF65F03FL;
                short ***l_614 = &g_612;
                l_611 = func_49(func_37(((*g_479) = ((((*l_608) = ((((*l_343) = ((void*)0 != l_604)) >= (((*l_437) < (0x539C225A98999F5BLL || ((g_606 = l_338) == ((*l_607) = &g_325)))) >= l_600)) & (g_242 != (~(l_608 == &l_341))))) <= p_32) >= p_32)), l_609, l_610, p_32));

                ;
                ;
                (*l_614) = g_612;
                l_615 = (!(*p_35));
            }

            ;
            ;
            (*g_4) = (*p_33);
            if (((*p_33) = (*p_33)))
            {
                (*g_28) = (*g_28);
                (*p_35) = func_49((*l_528));
                for (g_237 = 0; (g_237 != 24); g_237 = safe_add_func_uint64_t_u_u(g_237, 4))
                {
                    unsigned char l_624 = 0xD1L;
                    if ((*p_33))
                    {
                        if ((*l_348))
                            break;
                        (*g_4) = (safe_mod_func_uint64_t_u_u((*l_348), (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(l_624, p_34)), p_32))));
                    }
                    else
                    {
                        p_35 = l_610;

                        ;
                    }
                    l_625 = ((**l_528) = (*g_4));
                    if (l_624)
                    {
                        (*l_348) = (*l_347);
                        (*l_488) = l_624;
                    }
                    else
                    {
                        (*l_488) = (*l_488);
                        (**l_528) = (0xF41D7D2CB306A146LL & p_32);
                    }
                }
            }
            else
            {
                unsigned long long *l_629 = (void*)0;
                unsigned long long ** const l_628 = &l_629;
                unsigned long long ** const *l_627 = &l_628;
                unsigned long long ** const **l_626 = &l_627;
                int l_630 = 0xB2DAFED5L;
                int **l_638 = &g_4;
                int **l_639 = &l_348;
                l_630 = (0x02064611CD1A5053LL ^ (((*l_626) = (void*)0) != (void*)0));

                ;
                if ((*l_347))
                {
                    unsigned l_636 = 0xA558B11AL;
                    (*l_491) = ((*l_528) = func_37((*g_479), ((*l_480) = (*l_610)), p_33, l_630));

                    ;
                    ;
                    for (l_473 = 2; (l_473 >= 12); ++l_473)
                    {
                        (*p_35) = (*l_437);
                        (*l_347) = l_630;
                    }
                    (*l_491) = func_37((l_633 == ((0x12659E05L == ((!func_49((*l_528))) == (*l_437))) == p_32)), g_233, p_35, (safe_lshift_func_uint8_t_u_s(((*l_610) || p_32), l_636)));

                    ;
                    ;
                    return &g_4;




                }
                else
                {
                    (*l_637) = func_37(((*g_479) = ((l_640 = ((*g_612) = l_338)) == l_641)), g_239, p_35, (*l_437));

                    ;
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
        ;
        ;
        ;
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
    if ((*l_437))
    {
        (*l_348) = (safe_unary_minus_func_uint16_t_u(g_325));
        for (g_65 = 0; (g_65 >= (-5)); g_65 = safe_sub_func_uint16_t_u_u(g_65, 1))
        {
            unsigned l_645 = 0xCB6891E5L;
            if (l_645)
                break;
        }
    }
    else
    {
        int * const l_649 = &g_54;
        (*p_35) = (*l_348);
        for (l_340 = 20; (l_340 >= (-16)); l_340--)
        {
            unsigned l_648 = 0xCDE4A85AL;
            (*p_33) = (l_648 <= ((*l_365) = 0x9661E04CL));
            (*l_528) = (void*)0;

            ;
            (*g_28) = p_33;

            ;
            (*l_528) = func_37((*g_479), p_36, l_649, (safe_add_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_u((*l_347), 3)) & ((void*)0 != &g_239)) | (safe_rshift_func_uint16_t_u_u(65535UL, 6))) <= p_36), (*l_649))));

            ;
            ;
        }

        ;
        (*g_28) = p_35;

        ;
    }

    ;
    return &g_4;





}







static int * func_37(int p_38, char p_39, int * const p_40, char p_41)
{
    int **l_329 = &g_4;
    int **l_330 = &g_4;
    int ** const ****l_333 = (void*)0;
    int ** const *****l_334 = &l_333;
    (*l_329) = p_40;


    (*l_330) = p_40;
    for (g_180 = 8; (g_180 >= 37); g_180 = safe_add_func_uint32_t_u_u(g_180, 9))
    {
        if ((**l_329))
            break;
    }
    (*p_40) = (func_49((*l_330)) ^ (0L ^ (((*l_334) = l_333) != g_335)));


    return (*l_330);


}







static int func_44(int p_45, int p_46)
{
    int *l_197 = &g_54;
    int **l_198 = &g_4;
    int *** const l_244 = &l_198;
    int *** const *l_243 = &l_244;
    int l_288 = 0x54CF3BF9L;
    const int *l_292 = &l_288;
    long long *l_302 = &g_239;
    long long **l_301 = &l_302;
    (*g_28) = ((*l_198) = l_197);

    ;
    ;
    for (p_45 = 16; (p_45 <= 1); p_45 = safe_sub_func_int16_t_s_s(p_45, 2))
    {
        int *l_203 = &g_51;
        unsigned short l_222 = 0x5C7AL;
        const int *l_284 = &g_54;
        const unsigned l_293 = 8UL;
        (*l_197) = (g_180 | (((func_49(l_203) == 0xD3L) == 18446744073709551606UL) > (g_3 < p_46)));
        for (p_46 = 29; (p_46 == (-17)); --p_46)
        {
            int *l_231 = &g_54;
            char l_269 = 0x02L;
            const int *l_281 = (void*)0;
        }
    }

    ;
    ;
    (**l_198) = (safe_add_func_int32_t_s_s((-1L), (p_46 == (l_301 == &l_302))));
    if ((****l_243))
    {
        int l_308 = (-1L);
        int l_314 = 4L;
        for (g_65 = 19; (g_65 <= (-24)); --g_65)
        {
            unsigned char l_305 = 0x47L;
            long long l_320 = (-1L);
        }
    }
    else
    {
        unsigned l_327 = 0xDE809F09L;
        l_327 = ((void*)0 == &g_233);
        (*l_197) = (func_49((*l_198)) == (*l_292));
    }
    return p_45;
}







static unsigned long long func_49(int * p_50)
{
    int l_59 = 0x23020F62L;
    int l_63 = 0xCB06A9BEL;
    const int ***l_82 = &g_28;
    const int **** const l_81 = &l_82;
    int * const * const **l_108 = (void*)0;
    int * const * const ***l_107 = &l_108;
    const int *****l_109 = (void*)0;
    const int *l_170 = &g_51;
    for (g_51 = 0; (g_51 > 13); g_51 = safe_add_func_uint16_t_u_u(g_51, 3))
    {
        unsigned char l_78 = 0xECL;
        int *l_85 = &g_51;
        int l_88 = 0L;
        int *l_100 = &g_54;
        for (g_54 = (-9); (g_54 == 24); g_54 = safe_add_func_int32_t_s_s(g_54, 7))
        {
            int **l_57 = &g_4;
            int ***l_58 = (void*)0;
            short l_66 = 2L;
            int **l_80 = &g_4;
            (*g_28) = (void*)0;

            ;
            l_57 = l_57;
            if (l_59)
                continue;
            if ((l_59 || (0x0BL > g_3)))
            {
                const short l_62 = 0xB1C2L;
                int ***l_79 = &l_57;
                long long *l_83 = &g_84;
                for (l_59 = 25; (l_59 >= (-14)); l_59--)
                {
                    unsigned long long l_64 = 0x0C1731D497C242EALL;
                    l_64 = (l_62 < (l_63 && g_3));
                    if ((*p_50))
                    {
                        g_65 = (*p_50);
                    }
                    else
                    {
                        unsigned long long l_67 = 0x3A798BE49C906054LL;
                        const int ***l_69 = (void*)0;
                        const int ****l_68 = &l_69;
                        int *l_70 = (void*)0;
                        int *l_71 = &l_63;
                        (*g_28) = (*g_28);
                        if ((*p_50))
                            break;
                        l_67 = l_66;
                        (*l_71) = ((((*l_68) = &g_28) == (void*)0) <= 0UL);

                        ;
                    }
                }
                (*g_28) = ((*l_57) = p_50);


                if ((((safe_sub_func_int16_t_s_s((((**l_57) && ((safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u(l_78, l_59)) <= (((*l_79) = &g_4) == l_80)), (g_54 <= g_3))) & ((*l_83) = (l_81 == (void*)0)))) != (***l_82)), l_62)) && 0xB759721CL) == (*p_50)))
                {
                    (*l_57) = l_85;

                    ;
                    (*g_28) = (**l_82);
                    if ((*g_4))
                        continue;
                    return g_84;
                }
                else
                {
                    const int ****l_90 = &l_82;
                    int l_94 = 1L;
                    if (((l_88 = ((**l_57) && ((***l_79) != g_84))) | (**g_28)))
                    {
                        if ((***l_82))
                            break;
                        if ((*l_85))
                            continue;
                        g_89 = (**g_28);
                        if ((**g_28))
                            break;
                    }
                    else
                    {
                        const int *****l_91 = (void*)0;
                        const int *****l_92 = &l_90;
                        g_95 = (l_94 = (((*l_92) = l_90) == g_93));
                        (**l_82) = (*g_28);
                    }
                }
                (*l_80) = p_50;
            }
            else
            {
                int **l_96 = (void*)0;
                int l_97 = 1L;
                l_97 = (&p_50 == (l_96 = l_96));
                l_97 = ((-8L) > (safe_sub_func_int16_t_s_s((*l_85), g_95)));
            }


        }
        (*l_100) = (*g_4);
        (*l_100) = (*g_4);
        (*l_100) = (*l_100);
    }



    for (l_59 = (-18); (l_59 < (-24)); --l_59)
    {
        unsigned char l_103 = 0x67L;
        int **l_104 = &g_4;
        const int ******l_110 = &l_109;
        l_103 = (*p_50);
        (*g_28) = ((*l_104) = p_50);


        if ((safe_add_func_uint32_t_u_u((((l_107 = (void*)0) == ((*l_110) = l_109)) <= (((*g_29) == 0x2EA73719L) <= ((((safe_lshift_func_int8_t_s_u(g_51, (((****l_81) | (safe_add_func_uint16_t_u_u((****l_81), (safe_lshift_func_uint16_t_u_u((***l_82), 9))))) & (((void*)0 == &l_82) >= g_65)))) == g_65) != g_51) != 0UL))), (*g_4))))
        {
            int *l_120 = &g_51;
            int *l_121 = &l_63;
            if ((*p_50))
                break;
            (*l_121) = ((safe_unary_minus_func_int32_t_s((safe_rshift_func_int16_t_s_u(((void*)0 == l_110), g_89)))) > ((*l_120) = 0x5FAE8CD7L));
            (**l_82) = p_50;
        }
        else
        {
            unsigned short l_122 = 0xE7E0L;
            int *l_125 = &g_51;
            l_122 = (*g_4);
            for (g_54 = 0; (g_54 != (-23)); --g_54)
            {
                (*g_28) = p_50;
            }
            (*l_125) = (*p_50);
        }

        ;
        if ((*p_50))
            continue;
    }

    ;
    for (g_54 = 0; (g_54 < 21); g_54 = safe_add_func_uint16_t_u_u(g_54, 8))
    {
        unsigned long long l_132 = 0UL;
        int l_138 = (-2L);
        int l_174 = 0xFEC2A52DL;
        int *l_186 = &l_59;
        int *l_191 = &l_174;
    }
    return g_54;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_436, "g_436", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_481, "g_481", print_hash_value);
    transparent_crc(g_485, "g_485", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
