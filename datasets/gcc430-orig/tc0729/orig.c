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
   unsigned f0;
   const unsigned char f1;
   int f2;
};

union U1 {
   short f0;
   const unsigned short f1;
};


static int g_2 = (-1L);
static union U0 g_6 = {18446744073709551609UL};
static union U0 *g_5 = &g_6;
static union U0 g_8 = {0xA8358BD4L};
static union U1 g_23 = {-3L};
static union U0 g_105 = {1UL};
static union U0 *g_104 = &g_105;
static int g_153 = (-1L);
static const int *g_185 = &g_8.f2;
static union U0 g_189 = {0xB34D1E50L};
static union U1 g_197 = {-7L};
static union U1 *g_196 = &g_197;
static int *g_249 = (void*)0;
static int **g_248 = &g_249;
static int ***g_247 = &g_248;
static const int *g_257 = &g_2;
static char g_284 = 0x00L;
static int *g_363 = &g_8.f2;
static unsigned short g_413 = 0xEEFDL;
static char g_470 = (-1L);
static union U0 **g_472 = &g_5;
static union U0 ***g_471 = &g_472;



static short func_1(void);
static char func_17(unsigned short p_18, union U1 p_19, union U0 * p_20, const union U0 * p_21);
static union U0 * func_24(unsigned p_25, union U0 * p_26, union U0 * p_27, int * p_28);
static union U0 * func_31(int * p_32, const unsigned p_33, int p_34);
static const char func_37(unsigned short p_38);
static unsigned short func_39(int p_40, char p_41, int * p_42, int * p_43);
static unsigned char func_45(int * p_46, int p_47, union U0 * p_48, union U0 * p_49);
static int * func_50(int * p_51, const int * p_52, const int * p_53);
static const int * func_54(union U0 * p_55, union U0 p_56, union U1 p_57);
static union U1 func_59(unsigned char p_60, unsigned p_61, int * p_62, union U0 * p_63);
static short func_1(void)
{
    union U0 *l_7 = &g_8;
    int l_11 = 1L;
    int l_515 = 0x89EBE5C5L;
    for (g_2 = 23; (g_2 >= 27); ++g_2)
    {
        l_7 = g_5;

        ;
    }

    ;
    for (g_8.f2 = 0; (g_8.f2 < (-9)); g_8.f2 = safe_sub_func_int32_t_s_s(g_8.f2, 5))
    {
        unsigned short l_22 = 0xE752L;
        const union U0 *l_402 = &g_8;
        int *l_514 = &g_105.f2;
        if (l_11)
            break;
        for (l_11 = 0; (l_11 == 1); l_11 = safe_add_func_int8_t_s_s(l_11, 6))
        {
            int *l_14 = &g_6.f2;
            union U0 *l_362 = &g_6;
            union U1 l_546 = {0xEB2AL};
            (*l_14) = l_11;

            (*l_14) = (-5L);
        }
    }

    (*g_363) = (((((func_45(&l_11, (safe_add_func_int8_t_s_s(g_6.f0, l_11)), l_7, l_7) == l_515) ^ g_2) != l_515) ^ 0x9371L) || 0L);

    ;
    return l_515;


}







static char func_17(unsigned short p_18, union U1 p_19, union U0 * p_20, const union U0 * p_21)
{
    unsigned l_427 = 0x9B4C6B08L;
    int *l_489 = &g_189.f2;
    union U1 *l_492 = &g_23;
    union U0 *l_496 = &g_189;
    for (g_6.f2 = (-12); (g_6.f2 < 4); g_6.f2 = safe_add_func_int8_t_s_s(g_6.f2, 3))
    {
        unsigned char l_418 = 0x38L;
        for (g_197.f0 = 0; (g_197.f0 > 6); g_197.f0 = safe_add_func_uint16_t_u_u(g_197.f0, 4))
        {
            int *l_414 = &g_2;
            for (p_19.f0 = 0; (p_19.f0 >= (-2)); --p_19.f0)
            {
                for (p_18 = 15; (p_18 > 60); p_18 = safe_add_func_uint16_t_u_u(p_18, 8))
                {
                    (*l_414) = ((safe_rshift_func_uint8_t_u_u(g_413, 3)) != (l_414 != (**g_247)));
                }
            }
            (*l_414) = (safe_mod_func_uint32_t_u_u((*l_414), (safe_unary_minus_func_int8_t_s(l_418))));
        }
        return p_19.f1;
    }

        if ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(8L, 6)), (0x7EADL != (&p_19 != &p_19)))))
    {
        int l_436 = 4L;
        int **l_453 = &g_249;
        int l_458 = 4L;
        for (g_413 = 2; (g_413 > 24); g_413 = safe_add_func_uint8_t_u_u(g_413, 2))
        {
            int l_437 = (-1L);
            int ***l_438 = &g_248;
            union U1 *l_454 = (void*)0;
            int l_455 = 0xCA74A0EEL;
            const union U0 **l_462 = (void*)0;
            int l_475 = 0xEB48997CL;
            if (p_18)
            {
                unsigned l_439 = 4294967295UL;
                l_439 = (250UL ^ ((((safe_sub_func_int8_t_s_s((0x9846AEF1L >= l_427), (safe_rshift_func_int8_t_s_u((((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(l_436, 4)) || l_437), (+0xC184L))), (&g_248 != l_438))) < (-4L)) > 0xE1L), l_436)))) == g_6.f0) | p_18) & g_197.f1));
                (*g_247) = (void*)0;

                ;
                for (g_197.f0 = 0; (g_197.f0 <= 21); g_197.f0++)
                {
                    int *l_442 = &g_105.f2;
                    (*l_442) = l_427;
                }
                g_6.f2 = (*g_185);
            }
            else
            {
                unsigned l_443 = 4294967293UL;
                (*g_248) = (void*)0;

                ;
                return l_443;
            }

            ;
            if ((~6L))
            {
                short l_452 = (-1L);
                l_452 = (safe_sub_func_int8_t_s_s(((safe_add_func_int16_t_s_s(l_427, 0xF2C0L)) & (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(((void*)0 != &p_21), (&p_21 != &g_5))), 10))), ((&p_21 == &g_104) || 0x33L)));
                (*l_438) = l_453;

                ;
                return p_19.f0;
            }
            else
            {
                if (p_19.f1)
                {
                    l_454 = &p_19;

                    ;
                    l_455 = (1L | p_19.f1);
                }
                else
                {
                    short l_463 = 0x4C11L;
                    int *l_488 = (void*)0;
                    l_458 = ((!(0x52DB4BC0L == 4294967294UL)) <= ((safe_mod_func_uint8_t_u_u((func_37(g_105.f2) == (0xAAC8L != g_8.f1)), l_427)) != p_18));
                    if ((*g_257))
                    {
                        unsigned short l_459 = 0x4BE4L;
                        if (p_19.f0)
                            break;
                        l_463 = (((!0x3B59L) > 65535UL) || (l_459 && (safe_add_func_int16_t_s_s((((p_19.f1 <= (~p_19.f1)) ^ ((*g_257) ^ ((l_462 != &p_20) || p_19.f0))) < g_6.f1), 0x7533L))));
                    }
                    else
                    {
                        int *l_476 = (void*)0;
                        int *l_477 = &l_475;
                        l_458 = ((safe_lshift_func_int8_t_s_u((l_463 == 0x9BA4709FL), (safe_lshift_func_uint16_t_u_s(0xEC8FL, ((g_470 && 0x04L) < ((void*)0 == g_471)))))) ^ (safe_add_func_int16_t_s_s(l_475, p_19.f0)));
                        (*l_477) = (*g_185);
                        (*l_477) = (g_197.f1 ^ (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((l_427 >= (p_19.f1 >= 9UL)), (+p_19.f0))), (safe_add_func_int32_t_s_s((p_18 && g_6.f2), (*g_363))))) | p_19.f0), p_19.f1)), 0L)));
                    }
                    g_153 = func_37(p_19.f0);
                }

                ;
                return g_105.f2;
            }
        }

        ;
        (*l_453) = l_489;

        ;
    }
    else
    {
        int *l_493 = &g_6.f2;
        union U1 l_497 = {0xB325L};
        (*l_489) = (safe_lshift_func_int16_t_s_s((l_492 == (void*)0), (*l_489)));
        (*l_493) = (*l_489);
        (*g_248) = (*g_248);
        g_257 = func_54(p_20, (*g_5), l_497);
    }

    ;
    ;
    if (((((((*g_257) & p_19.f0) >= ((void*)0 == l_492)) > (safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(((*l_489) >= g_470), p_18)), 7))) >= (safe_sub_func_uint8_t_u_u(g_6.f2, (*l_489)))) && p_19.f1))
    {
        union U1 **l_504 = &g_196;
        (*l_504) = &g_197;

        ;
    }
    else
    {
        union U0 ***l_507 = &g_472;
        int l_510 = 7L;
        for (g_2 = 0; (g_2 > 5); g_2++)
        {
            (*l_489) = (((0x47L || ((*l_489) && func_37(g_189.f2))) != 0x5A7B03AEL) != (((void*)0 != l_507) == (safe_sub_func_uint32_t_u_u((p_19.f0 || (p_19.f1 == l_510)), (*g_257)))));
        }
        (*l_489) = l_510;
    }
    (*l_489) = p_18;
    return g_8.f2;
}







static union U0 * func_24(unsigned p_25, union U0 * p_26, union U0 * p_27, int * p_28)
{
    short l_371 = 0x2191L;
    int l_378 = 0x2F2B780FL;
    union U1 *l_389 = &g_197;
    for (g_6.f0 = 0; (g_6.f0 >= 9); g_6.f0 = safe_add_func_int32_t_s_s(g_6.f0, 1))
    {
        unsigned short l_370 = 0x5C6CL;
        union U1 * const l_390 = &g_197;
        l_378 = (safe_mod_func_int16_t_s_s((g_8.f0 < 65526UL), (((safe_sub_func_int16_t_s_s((l_370 == l_371), ((!((void*)0 == &g_189)) < ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(g_8.f0, l_370)), (safe_rshift_func_uint16_t_u_u(((l_370 <= 0x52BCB22FL) <= g_23.f1), p_25)))) != (-9L))))) & p_25) | l_370)));
        for (g_284 = 0; (g_284 > (-14)); g_284--)
        {
            return p_27;


        }
        (**g_247) = (*g_248);
        l_378 = (safe_rshift_func_int16_t_s_s(l_370, ((safe_add_func_uint32_t_u_u((p_25 & 0xDEL), l_371)) == g_6.f0)));
    }

    for (g_189.f2 = 0; (g_189.f2 >= 29); g_189.f2 = safe_add_func_uint8_t_u_u(g_189.f2, 8))
    {
        unsigned short l_395 = 65528UL;
        if (l_395)
            break;
        for (p_25 = 14; (p_25 >= 54); p_25++)
        {
            (**g_247) = (**g_247);
            if ((*p_28))
                break;
            l_378 = (((safe_lshift_func_uint8_t_u_u(l_395, g_197.f0)) > (g_8.f2 > p_25)) != 0xE7465EA4L);
            g_153 = (*p_28);
        }
        for (g_6.f0 = (-25); (g_6.f0 < 18); g_6.f0 = safe_add_func_int32_t_s_s(g_6.f0, 2))
        {
            return &g_189;


        }
    }
    (*g_248) = (**g_247);
    return &g_8;


}







static union U0 * func_31(int * p_32, const unsigned p_33, int p_34)
{
    return &g_8;


}







static const char func_37(unsigned short p_38)
{
    unsigned short l_354 = 65533UL;
    int *l_355 = (void*)0;
    int l_356 = (-8L);
    int *l_357 = &g_189.f2;
    union U0 ***l_358 = (void*)0;
    union U0 ***l_359 = (void*)0;
    union U0 **l_361 = (void*)0;
    union U0 ***l_360 = &l_361;
    l_356 = ((+l_354) ^ g_23.f1);
    (*l_357) = p_38;

    (*l_360) = &g_104;

    ;
    return p_38;
}







static unsigned short func_39(int p_40, char p_41, int * p_42, int * p_43)
{
    char l_44 = 0xF3L;
    union U0 *l_58 = (void*)0;
    int *l_236 = (void*)0;
    union U1 l_311 = {0x802EL};
    (*p_42) = (0x83518F4CL > (l_44 != func_45(func_50(&g_2, func_54(l_58, (*g_5), func_59(((65527UL < (((&g_2 != (void*)0) != g_6.f0) != p_41)) <= p_41), p_40, &g_2, l_58)), g_185), l_44, l_58, l_58)));

    ;
        ;
    ;
    ;
    if ((g_6.f0 > l_44))
    {
        int l_250 = 1L;
        union U0 *l_251 = &g_189;
        int *l_259 = &g_153;
        union U1 *l_265 = &g_197;
        char l_298 = 0L;
        union U0 **l_328 = &l_58;
        short l_352 = 0L;
        if ((((+(safe_add_func_int16_t_s_s(g_105.f1, (safe_lshift_func_int8_t_s_s(g_6.f0, 7))))) < g_2) | 0x3C4AB018L))
        {
            unsigned l_254 = 0x78BC37ACL;
            union U0 *l_256 = &g_6;
            if ((0UL ^ (((safe_mod_func_int32_t_s_s((((l_254 & (p_41 & g_6.f1)) <= (g_6.f1 <= (*g_185))) <= g_8.f1), 4294967286UL)) < g_23.f1) >= p_40)))
            {
                int *l_255 = (void*)0;
                if ((*p_42))
                {
                    (**g_247) = p_43;

                    ;
                    if (l_250)
                    {
                        return g_189.f1;
                    }
                    else
                    {
                        const int **l_258 = &g_185;
                        (*l_258) = g_257;

                        ;
                        (***g_247) = (0x4BL >= (~g_189.f2));
                        (*l_258) = (**g_247);
                    }

                    ;
                    (**g_248) = (**g_248);
                    (*p_43) = (0x3BL & (*l_259));
                }
                else
                {
                    (**g_247) = p_42;

                    ;
                    for (p_40 = 0; (p_40 == 4); p_40++)
                    {
                        (*l_259) = (*g_185);
                        if ((*g_257))
                            break;
                        (*g_249) = 0L;
                        if ((*p_42))
                            break;
                    }
                }

                ;
                (*g_248) = l_259;

                ;
            }
            else
            {
                char l_266 = 0x78L;
                (*p_43) = (*g_257);
                for (g_105.f0 = 27; (g_105.f0 < 11); --g_105.f0)
                {
                    int l_264 = 0x16B22C68L;
                    (*g_248) = p_42;

                    ;
                    (*l_259) = (p_41 || l_264);
                    l_266 = (l_265 != (void*)0);
                    for (l_266 = 0; (l_266 <= 24); ++l_266)
                    {
                        l_264 = (g_8.f0 != (*l_259));
                        (**g_247) = (void*)0;

                        ;
                    }

                    ;
                }

                                ;
                (*p_42) = (p_40 && (g_23.f0 >= (*l_259)));
            }

            ;
        }
        else
        {
            char l_277 = 0xD1L;
            union U1 l_286 = {0L};
            const int *l_287 = &g_6.f2;
            union U0 *l_288 = (void*)0;
            int *l_296 = &g_8.f2;
            const int *l_297 = &g_6.f2;
            union U0 l_309 = {0x99F47FE8L};
            int **l_316 = &l_296;
            if ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_277, (l_277 ^ (safe_sub_func_int8_t_s_s(g_189.f2, g_23.f1))))), (0x353B77AAL != (((((safe_add_func_int32_t_s_s(((4294967295UL && ((((p_41 && g_153) || (safe_rshift_func_uint16_t_u_u(l_277, 8))) <= (*p_42)) == p_41)) || p_41), g_197.f0)) > (-5L)) == 0x4FL) <= 0UL) ^ g_284)))) > 0L) & 65529UL), l_277)) || 0xBAL), p_41)))
            {
                return p_41;
            }
            else
            {
                union U0 *l_285 = &g_6;
                (**g_247) = l_259;

                ;
            }

            ;
            (*p_42) = (~(&g_248 != (void*)0));
            (*p_42) = ((l_251 == l_288) || (g_197.f1 || (((0x9E36L > (*l_287)) != 0x01L) < (safe_lshift_func_int16_t_s_s(0x12BFL, (safe_unary_minus_func_uint8_t_u((*l_259))))))));
            if ((p_40 ^ (2UL ^ ((safe_mod_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((l_298 > g_189.f1) ^ g_23.f0), (***g_247))) < 0UL), p_41)) >= 1L))))
            {
                int *l_306 = &g_6.f2;
                union U0 *l_307 = (void*)0;
                const int **l_312 = (void*)0;
                const int **l_313 = &g_185;
                if (((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s(p_41, 65534UL)) != 0xCB53B084L) || (safe_unary_minus_func_uint32_t_u(((*l_297) > (*p_42))))), 6)), g_8.f2)) || 8L))
                {
                    (**g_247) = p_42;

                    ;
                    return p_41;
                }
                else
                {
                    union U0 *l_308 = &g_189;
                    const int **l_310 = &l_297;
                    (*l_310) = func_54(l_308, l_309, l_286);

                    ;
                    (*l_310) = func_54(l_307, (*g_5), l_311);
                }

                ;
                (*l_313) = l_297;

                ;
                for (g_105.f0 = (-5); (g_105.f0 >= 32); g_105.f0 = safe_add_func_int8_t_s_s(g_105.f0, 3))
                {
                    (***g_247) = (*g_249);
                }

                                l_316 = (*g_247);

                ;
            }
            else
            {
                short l_319 = 0xD43DL;
                int *l_322 = &g_8.f2;
                union U1 l_323 = {0x7A3BL};
                if ((func_45(p_42, (safe_sub_func_uint8_t_u_u(5UL, (&l_58 == &g_5))), &l_309, l_58) > l_319))
                {
                    union U0 ** const l_327 = &l_251;
                    if (l_311.f1)
                    {
                        union U0 *l_326 = &g_6;
                        (**g_247) = (**g_247);
                        (**g_248) = ((safe_sub_func_int8_t_s_s(p_40, (func_45(p_43, ((safe_sub_func_uint32_t_u_u(((&g_189 != l_326) || p_40), 9UL)) && 0x2EL), &g_189, &g_189) && (*l_322)))) | 0x0020L);
                    }
                    else
                    {
                        unsigned short l_331 = 2UL;
                        (***g_247) = (*p_42);
                        l_328 = l_327;

                        ;
                        (*l_259) = (safe_rshift_func_uint16_t_u_u(0x5D89L, 15));
                        return l_331;
                    }
                }
                else
                {
                    unsigned l_332 = 0x8BF8A446L;
                    union U0 *l_336 = &g_8;
                    (*g_249) = l_332;
                    if ((l_332 ^ 0x3F465C63L))
                    {
                        char l_335 = 0x54L;
                        (*g_249) = func_45((**g_247), ((&l_251 == (void*)0) > ((0xF245L || 0x954BL) ^ ((((((-1L) || (safe_rshift_func_int8_t_s_s(l_335, func_45((**g_247), g_153, &g_8, (*l_328))))) >= l_335) >= (-3L)) | g_8.f2) >= g_8.f0))), l_58, l_336);

                        ;
                    }
                    else
                    {
                        (*l_259) = (*g_249);
                        l_322 = (*g_248);

                        ;
                        (*l_259) = (*g_249);
                    }

                    ;
                    ;
                }

                ;
                ;
                if ((*l_259))
                {
                    for (g_197.f0 = 0; (g_197.f0 < (-9)); --g_197.f0)
                    {
                        short l_342 = (-1L);
                        (**g_248) = (((safe_mod_func_int32_t_s_s((((safe_unary_minus_func_uint16_t_u(0xFEE4L)) != (*p_42)) & (0x7CL || (((l_342 && 0x10L) <= (((safe_lshift_func_uint8_t_u_u(((((safe_add_func_uint16_t_u_u((((4294967290UL & (*p_42)) ^ ((*l_322) >= 0x67958DF5L)) > 0x19L), 0UL)) == 1L) ^ p_41) || (*l_296)), 6)) | (*l_297)) != g_6.f0)) < (*l_322)))), l_342)) || g_153) | 6L);
                        (**g_248) = (*l_322);
                        return p_40;
                    }
                    (***g_247) = (g_197.f1 && (0xA923A026L | ((&l_311 == &g_23) == ((p_40 && (65535UL != g_105.f2)) | (&g_6 == l_58)))));
                    for (g_2 = (-7); (g_2 <= 24); g_2 = safe_add_func_int16_t_s_s(g_2, 1))
                    {
                        int ** const l_349 = &g_249;
                        int ***l_350 = &l_316;
                        const int **l_351 = &g_257;
                        (*g_248) = (**g_247);
                        (*l_350) = l_349;

                        ;
                        (**l_349) = 0x741A30BCL;
                        (*l_351) = func_54(l_58, (*g_5), l_311);
                    }

                    ;
                    return g_8.f0;
                }
                else
                {
                    return p_40;
                }
            }

                        ;
            ;
            ;
        }

        ;
        (*g_248) = l_259;

        ;
        return l_352;
    }
    else
    {
        union U1 **l_353 = &g_196;
        l_353 = &g_196;
    }
    return g_197.f1;
}







static unsigned char func_45(int * p_46, int p_47, union U0 * p_48, union U0 * p_49)
{
    const int *l_200 = &g_2;
    unsigned char l_205 = 0x2FL;
    int *l_228 = &g_6.f2;
    l_200 = l_200;
    for (g_197.f0 = 20; (g_197.f0 != (-24)); g_197.f0 = safe_sub_func_uint16_t_u_u(g_197.f0, 4))
    {
        int *l_212 = (void*)0;
        (*p_46) = (safe_add_func_uint32_t_u_u(l_205, (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((*l_200), (safe_rshift_func_uint16_t_u_u((l_212 != &g_2), 3)))), 7))));
        if ((*g_185))
        {
            unsigned short l_213 = 65535UL;
            (*p_46) = (*p_46);
            if ((*g_185))
                break;
            if (l_213)
                break;
        }
        else
        {
            int **l_214 = &l_212;
            (*l_214) = p_46;


        }


        for (g_189.f2 = (-23); (g_189.f2 <= 22); ++g_189.f2)
        {
            const int *l_226 = &g_189.f2;
            const int *l_227 = &g_2;
            for (p_47 = 0; (p_47 != 23); p_47++)
            {
                int **l_219 = &l_212;
                (*p_46) = 0x9D596B0AL;
                (*l_219) = &g_153;

                ;
                if ((*p_46))
                {
                    for (g_153 = 24; (g_153 >= 28); g_153 = safe_add_func_uint16_t_u_u(g_153, 1))
                    {
                        (*l_219) = &g_153;
                    }
                    (*l_219) = &g_2;

                    ;
                    for (l_205 = 0; (l_205 >= 48); ++l_205)
                    {
                        int * const l_224 = &g_153;
                        int **l_225 = &l_212;
                        (*l_225) = l_224;

                        ;
                        (*l_224) = (g_23.f0 > 0x05L);
                        (*l_225) = &g_2;

                        ;
                        g_185 = p_46;


                    }
                }
                else
                {
                    (*l_219) = l_228;

                    ;
                    if ((safe_add_func_uint16_t_u_u(g_8.f0, (-1L))))
                    {
                        int ***l_231 = &l_219;
                        (*l_231) = &p_46;

                        ;
                    }
                    else
                    {
                        (*p_46) = (*l_227);
                    }

                    ;
                }

                ;
                ;
            }
        }


    }


    return g_105.f2;
}







static int * func_50(int * p_51, const int * p_52, const int * p_53)
{
    int *l_186 = &g_8.f2;
    union U0 *l_188 = &g_189;
    l_186 = l_186;
    if ((*g_185))
    {
        union U0 **l_187 = (void*)0;
        int l_192 = 2L;
        l_188 = &g_6;

        ;
        (*p_51) = (*g_185);
        for (g_105.f2 = (-8); (g_105.f2 >= (-26)); g_105.f2 = safe_sub_func_int8_t_s_s(g_105.f2, 1))
        {
            union U0 **l_195 = &g_5;
            (*p_51) = (((*l_186) > (g_2 | (l_192 && ((void*)0 == &g_104)))) || (safe_lshift_func_int16_t_s_u(g_8.f0, g_6.f0)));
            (*l_195) = &g_105;

            ;
            g_196 = (void*)0;

            ;
        }

        ;
        ;
    }
    else
    {
        union U0 **l_198 = &g_104;
        const int **l_199 = &g_185;
        (*p_51) = (*g_185);
        (*l_198) = &g_6;

        ;
        (*l_199) = func_54(l_188, (*g_104), (*g_196));

        ;
    }

    ;
    ;
    ;
    ;
    return &g_2;


}







static const int * func_54(union U0 * p_55, union U0 p_56, union U1 p_57)
{
    int *l_162 = &g_105.f2;
    int **l_161 = &l_162;
    if (p_56.f1)
    {
        int **l_163 = &l_162;
        if ((0xF7277C3FL < ((safe_rshift_func_int16_t_s_s((l_161 != l_163), (!((safe_mod_func_int16_t_s_s(0xEC92L, (safe_mod_func_int16_t_s_s((p_57.f1 > ((*l_162) | 0x917A8246L)), p_56.f2)))) && p_57.f1)))) < (-1L))))
        {
            (**l_161) = (~(safe_sub_func_int8_t_s_s((0xA0L >= ((safe_mod_func_int8_t_s_s(g_2, (safe_sub_func_uint8_t_u_u(p_56.f0, g_153)))) != 4294967291UL)), g_8.f1)));

        }
        else
        {
            const int *l_176 = &g_8.f2;
            const int **l_177 = &l_176;
            (*l_163) = (*l_161);
            for (g_153 = (-28); (g_153 <= 11); ++g_153)
            {
                return &g_2;


            }
            (*l_177) = l_176;
            (**l_163) = (p_56.f0 ^ (**l_161));

        }

        (*l_162) = (p_57.f1 | 0x74BAL);
    }
    else
    {
        (**l_161) = p_56.f2;

        for (p_56.f0 = (-12); (p_56.f0 < 33); p_56.f0 = safe_add_func_uint32_t_u_u(p_56.f0, 1))
        {
            const int *l_180 = (void*)0;
            const int **l_181 = (void*)0;
            const int **l_182 = &l_180;
            (*l_182) = l_180;
            (**l_161) = (safe_sub_func_uint32_t_u_u(g_6.f2, ((g_105.f2 > 0x19L) & (p_57.f1 <= g_6.f2))));
        }

                (*l_162) = ((*l_162) && g_6.f2);
    }

    return &g_2;


}







static union U1 func_59(unsigned char p_60, unsigned p_61, int * p_62, union U0 * p_63)
{
    unsigned char l_66 = 4UL;
    short l_67 = 0x3618L;
    char l_77 = 0L;
    int * const l_86 = &g_6.f2;
    union U1 l_158 = {0x29AEL};
    if (((p_61 >= p_60) && (((safe_rshift_func_uint16_t_u_u(g_6.f2, (((p_63 != &g_6) ^ p_61) & 0x680DL))) > ((((g_8.f2 ^ l_66) > l_67) < p_60) == p_61)) == 255UL)))
    {
        int * const l_68 = &g_6.f2;
        int *l_70 = &g_8.f2;
        int **l_69 = &l_70;
        union U0 **l_101 = &g_5;
        (*l_69) = l_68;

        ;
        if ((l_67 | ((l_66 != (0UL ^ ((*p_62) ^ ((p_60 || (g_6.f2 >= ((safe_mod_func_uint8_t_u_u((+(l_66 ^ 0xBBL)), (safe_add_func_uint8_t_u_u(l_77, 9L)))) >= g_6.f0))) >= 2UL)))) > p_60)))
        {
            (*p_62) = g_23.f0;
            for (l_77 = 20; (l_77 == (-12)); --l_77)
            {
                (*l_69) = p_62;

                ;
            }

            ;
        }
        else
        {
            unsigned short l_85 = 0x9C29L;
            if (((safe_add_func_int16_t_s_s(p_61, p_60)) ^ (g_6.f1 != ((safe_rshift_func_int16_t_s_u((g_2 == 0x2F71L), 5)) >= ((void*)0 != p_62)))))
            {
                short l_84 = 8L;
                int l_99 = (-3L);
                l_85 = (~l_84);
                if ((*p_62))
                {
                    int **l_87 = &l_70;
                    (*l_69) = p_62;

                    ;
                    (*l_87) = l_86;

                    ;
                }
                else
                {
                    unsigned l_98 = 0xD893B252L;
                    union U1 l_100 = {0x0724L};
                    l_99 = (safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(((g_23.f0 > (*p_62)) > ((+(g_23.f0 < g_23.f1)) || ((*p_62) <= p_60))), ((*l_68) | (safe_rshift_func_int8_t_s_u(l_98, 5))))), (p_60 ^ 0xECC2D129L))), g_8.f2)) || g_23.f1), 5));
                    return l_100;

                                    }
            }
            else
            {
                union U0 ***l_102 = &l_101;
                int **l_103 = &l_70;
                (*l_102) = l_101;
                (*l_103) = l_86;
                g_104 = &g_6;

                ;
            }

            ;
            (*p_62) = l_85;
            (*l_69) = (void*)0;

            ;
        }

        ;
        ;
    }
    else
    {
        int l_106 = 0xDEA92552L;
        int *l_111 = &g_105.f2;
        (*p_62) = l_106;
        if (((0xD996L ^ (safe_lshift_func_int8_t_s_u(0x73L, 3))) > (safe_sub_func_int16_t_s_s((+(*l_86)), g_6.f0))))
        {
            l_111 = &g_2;

            ;
        }
        else
        {
            int **l_112 = &l_111;
            (*l_112) = &g_2;

            ;
            g_2 = 0xF7E953CDL;
            (*p_62) = (*p_62);
        }

        ;
        (*p_62) = (safe_lshift_func_uint8_t_u_s(249UL, (*l_86)));
        for (g_105.f2 = 13; (g_105.f2 >= (-18)); g_105.f2 = safe_sub_func_int8_t_s_s(g_105.f2, 8))
        {
            unsigned short l_125 = 0x2365L;
            int *l_139 = (void*)0;
            if ((*p_62))
                break;
            for (l_106 = 0; (l_106 != 27); l_106 = safe_add_func_uint32_t_u_u(l_106, 1))
            {
                int *l_126 = &g_105.f2;
                unsigned l_134 = 4294967291UL;
                int **l_144 = &l_139;
                for (l_66 = 0; (l_66 >= 28); ++l_66)
                {
                    int **l_129 = &l_126;
                    if ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(l_125, p_60)), g_2)))
                    {
                        int **l_127 = &l_126;
                        (*l_127) = l_126;
                    }
                    else
                    {
                        int **l_128 = &l_126;
                        (*l_128) = l_86;

                        ;
                        return g_23;

                                            }
                    (*l_129) = &g_2;

                    ;
                    (*p_62) = (safe_lshift_func_uint16_t_u_u(p_60, 7));
                    if ((safe_rshift_func_uint16_t_u_u(g_105.f2, l_134)))
                    {
                        (*l_129) = &g_2;
                    }
                    else
                    {
                        g_2 = ((safe_add_func_uint8_t_u_u(g_6.f2, ((0xC0L & (l_125 <= (safe_add_func_int8_t_s_s((l_139 == l_126), (*l_126))))) || ((safe_add_func_int8_t_s_s(0x46L, 0x18L)) & (safe_mod_func_uint16_t_u_u(g_8.f1, g_8.f1)))))) != g_8.f2);
                    }
                }

                ;
                (*l_144) = p_62;

                ;
                if ((safe_lshift_func_int8_t_s_s((*l_111), p_61)))
                {
                    return g_23;

                                    }
                else
                {
                    unsigned char l_149 = 1UL;
                    for (g_2 = (-19); (g_2 > (-1)); g_2 = safe_add_func_uint8_t_u_u(g_2, 5))
                    {
                        const unsigned char l_150 = 255UL;
                        int *l_151 = (void*)0;
                        int *l_152 = &g_153;
                        if (l_149)
                            break;
                        (*l_152) = l_150;
                        (*l_144) = (void*)0;

                        ;
                        (*l_152) = (!(*l_111));
                    }

                    ;
                    (*p_62) = ((p_61 ^ g_105.f0) | ((safe_sub_func_int16_t_s_s(p_61, (safe_mod_func_uint32_t_u_u(((void*)0 == &p_63), 0x8BC82935L)))) > 0x1EL));
                }

                ;
            }

            ;
        }

    }

    ;
    (*p_62) = (*p_62);
    return l_158;

    }





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
    transparent_crc(g_6.f1, "g_6.f1", print_hash_value);
    transparent_crc(g_6.f2, "g_6.f2", print_hash_value);
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
    transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
    transparent_crc(g_23.f1, "g_23.f1", print_hash_value);
    transparent_crc(g_105.f0, "g_105.f0", print_hash_value);
    transparent_crc(g_105.f1, "g_105.f1", print_hash_value);
    transparent_crc(g_105.f2, "g_105.f2", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_189.f1, "g_189.f1", print_hash_value);
    transparent_crc(g_189.f2, "g_189.f2", print_hash_value);
    transparent_crc(g_197.f0, "g_197.f0", print_hash_value);
    transparent_crc(g_197.f1, "g_197.f1", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
