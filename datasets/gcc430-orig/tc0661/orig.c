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



static const unsigned char g_26 = 248UL;
static int g_31 = (-2L);
static int * const g_37 = &g_31;
static int * const *g_36 = &g_37;
static int g_94 = 0xD97F668CL;
static int g_120 = 3L;
static int *g_128 = &g_120;
static int **g_127 = &g_128;
static const int *g_160 = (void*)0;
static const int **g_159 = &g_160;
static int g_173 = 0xD5F9F679L;
static unsigned g_185 = 18446744073709551615UL;
static int **g_433 = &g_128;
static int **g_439 = &g_128;
static unsigned char g_458 = 0UL;
static int **g_464 = &g_128;



static unsigned func_1(void);
static char func_4(unsigned short p_5);
static unsigned char func_9(unsigned p_10, const unsigned char p_11, unsigned char p_12, const unsigned short p_13, unsigned short p_14);
static short func_23(char p_24, unsigned short p_25);
static unsigned short func_48(int p_49, int ** p_50, unsigned char p_51, unsigned short p_52, unsigned char p_53);
static short func_56(const unsigned p_57, const int ** p_58, int * p_59, unsigned short p_60, char p_61);
static unsigned func_62(int p_63, unsigned short p_64, short p_65, char p_66, int ** const p_67);
static short func_72(const int ** p_73, unsigned char p_74);
static const int ** func_75(int ** p_76, int * p_77, int * p_78, char p_79, int p_80);
static int ** func_81(unsigned short p_82);
static unsigned func_1(void)
{
    short l_8 = 0x768CL;
    char l_573 = (-2L);
    (*g_37) = ((safe_rshift_func_int8_t_s_u(func_4((safe_mod_func_int8_t_s_s(l_8, func_9(l_8, l_8, (safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((func_23((((g_26 <= (safe_add_func_int8_t_s_s((((7UL && (((g_26 != (0UL || l_8)) && (l_8 ^ 0x2BL)) >= g_26)) || 0x1EL) == g_26), 1UL))) <= l_8) > g_26), g_26) && 0x4951L), 1)), 0x3DL)), l_8)), 1L)), l_8, g_26)))), 3)) > g_26);
    return l_573;
}







static char func_4(unsigned short p_5)
{
    int *l_545 = &g_94;
    unsigned short l_552 = 7UL;
    (**g_36) = 0xB656E355L;
    (*g_127) = l_545;
    for (g_185 = 0; (g_185 <= 40); ++g_185)
    {
        unsigned short l_548 = 3UL;
        int **l_567 = &l_545;
        const int **l_570 = &g_160;
        (*l_545) = (0xDF67L | (l_548 < (safe_unary_minus_func_uint16_t_u(((safe_mul_func_uint8_t_u_u(l_552, g_31)) || p_5)))));
        (**g_464) = 0x3C3EBBE6L;
        for (g_120 = 0; (g_120 > 17); g_120 = safe_add_func_uint32_t_u_u(g_120, 4))
        {
            int **l_555 = &g_128;
            const int **l_571 = &g_160;
        }
        (*l_567) = l_545;
    }
    return p_5;
}







static unsigned char func_9(unsigned p_10, const unsigned char p_11, unsigned char p_12, const unsigned short p_13, unsigned short p_14)
{
    int l_314 = 0x32B9EF21L;
    int l_315 = 1L;
    unsigned char l_344 = 0x2EL;
    int l_345 = 0xAF7A54F2L;
    int **l_366 = (void*)0;
    const int **l_376 = &g_160;
    unsigned char l_445 = 0x0DL;
    unsigned short l_533 = 0x0840L;
    char l_544 = 0x46L;
    if ((0UL && 0x4B88609AL))
    {
        int l_318 = 0xD6D36BEFL;
        int * const *l_343 = (void*)0;
        int *l_355 = &l_345;
        int *l_417 = &l_315;
        char l_431 = (-1L);
        const int *l_436 = (void*)0;
        int l_453 = 9L;
        int l_496 = 4L;
        l_315 = (safe_add_func_int32_t_s_s(l_314, 0x076AB362L));
        for (p_12 = 0; (p_12 < 48); p_12 = safe_add_func_int8_t_s_s(p_12, 5))
        {
            int **l_326 = (void*)0;
            if (l_318)
            {
                unsigned l_325 = 4294967290UL;
                (*g_37) = ((safe_rshift_func_uint16_t_u_s(g_31, 10)) ^ (safe_add_func_uint32_t_u_u(p_10, (safe_mod_func_uint8_t_u_u(((((((func_48(l_325, l_326, (l_325 && func_48((p_11 != (((void*)0 != &g_160) || ((void*)0 != &g_159))), &g_128, g_26, p_13, p_10)), g_31, g_185) | 0x3423L) ^ p_10) != l_315) == 7UL) == 1UL) < 0x2039L), g_26)))));
            }
            else
            {
                const unsigned short l_327 = 0x3009L;
                int *l_338 = &g_31;
                (*g_159) = (*g_36);
                if (l_327)
                    break;
                for (g_173 = (-9); (g_173 >= (-15)); --g_173)
                {
                    (*g_37) = ((safe_add_func_uint32_t_u_u(4294967295UL, (safe_lshift_func_uint8_t_u_u(0xFEL, 4)))) >= (safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(254UL, p_13)), ((&g_128 == (void*)0) | (*g_37)))));
                    (**g_36) = (*g_37);
                    (*g_37) = (0L || (g_185 > (l_338 != (void*)0)));
                    (*l_338) = p_11;
                }
            }
            if ((*g_37))
                break;
            return l_318;
        }
        if (((l_318 != l_318) || (+(+(((safe_div_func_int32_t_s_s((((g_185 < 0x7DF5L) && 3UL) ^ g_185), g_26)) ^ 0UL) > l_345)))))
        {
            int l_350 = 1L;
            int **l_369 = &g_128;
            char l_426 = 0x13L;
            int *l_434 = &g_173;
            if ((safe_div_func_uint16_t_u_u(0x0ADEL, (((safe_div_func_int32_t_s_s(l_350, g_120)) > p_10) & 0xC4A1L))))
            {
                int l_353 = 0x76658A4AL;
                const int **l_358 = (void*)0;
                if (p_14)
                {
                    int l_354 = 0x67041C5EL;
                    int *l_361 = &l_345;
                    int *l_362 = (void*)0;
                    (**g_36) = func_62(((safe_lshift_func_uint16_t_u_u((p_11 <= g_120), g_185)) | p_11), g_185, p_13, p_14, &l_355);
                    if ((safe_rshift_func_uint16_t_u_s(0UL, (g_26 ^ p_11))))
                    {
                        (*g_127) = l_361;
                    }
                    else
                    {
                        int **l_363 = &l_355;
                        (*g_127) = l_362;
                        (*l_363) = (*g_36);
                        (*l_355) = (-1L);
                        (*g_159) = (*g_159);
                    }
                    (*l_355) = (safe_rshift_func_uint16_t_u_s(g_31, 7));
                }
                else
                {
                    if ((l_353 < (((*l_369) == (void*)0) & (safe_sub_func_uint32_t_u_u((l_358 == &l_355), func_56((safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(p_11, (*l_355))), (*l_355))), l_376, (*l_369), p_13, p_13))))))
                    {
                        const int *l_377 = &g_94;
                        (*l_376) = l_377;
                    }
                    else
                    {
                        int *l_378 = &g_173;
                        l_378 = (*l_369);
                        (*g_159) = (void*)0;
                        (**g_36) = (p_10 || (l_358 != (void*)0));
                        (*g_159) = (*l_376);
                    }
                }
                (*l_376) = (*g_159);
            }
            else
            {
                unsigned short l_381 = 0xC655L;
                unsigned l_405 = 0xFF3299ABL;
                int *l_413 = &l_350;
                if ((((*l_355) == (safe_lshift_func_int8_t_s_s(l_381, (0x2127L ^ (g_31 < (((safe_add_func_int32_t_s_s(p_11, (p_10 ^ (safe_rshift_func_int16_t_s_u(((l_376 != &g_37) != 0xF4L), g_31))))) < g_26) <= g_31)))))) & l_381))
                {
                    int l_391 = 0xFE8B0F75L;
                    for (p_12 = 13; (p_12 <= 24); p_12++)
                    {
                        const int **l_390 = &g_160;
                        (**g_36) = (safe_lshift_func_uint8_t_u_u(((*g_159) != (void*)0), g_31));
                        l_391 = p_13;
                    }
                    if (((safe_sub_func_uint16_t_u_u(2UL, 0L)) == (safe_mod_func_int8_t_s_s(p_10, 0x5EL))))
                    {
                        int **l_398 = &l_355;
                        (**g_36) = ((safe_add_func_uint8_t_u_u(g_26, (&l_355 != l_398))) || (safe_add_func_int32_t_s_s(func_62((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_405, 0x15A7L)), 15)), g_94, g_26, (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_26, 0)), func_48(func_48((*g_37), &g_128, p_14, p_10, g_31), &g_128, p_14, g_173, g_173))), &g_128), (-1L))));
                    }
                    else
                    {
                        (*l_355) = 2L;
                    }
                }
                else
                {
                    int **l_410 = (void*)0;
                    int *l_411 = (void*)0;
                    const int ***l_412 = &l_376;
                    (**g_36) = p_10;
                    (*l_412) = &g_160;
                    if ((p_10 && (l_413 != (*g_36))))
                    {
                        int l_414 = 0x17E8EA87L;
                        l_414 = (**g_36);
                        (**l_412) = (*l_376);
                        l_355 = &l_414;
                    }
                    else
                    {
                        l_413 = l_413;
                        (*l_413) = ((-10L) && (g_94 ^ (*l_413)));
                    }
                    (*l_369) = l_413;
                }
                for (l_344 = (-9); (l_344 > 43); l_344 = safe_add_func_int32_t_s_s(l_344, 1))
                {
                    short l_418 = 0L;
                    (*g_37) = (~((l_417 == (*g_127)) && (l_418 || p_10)));
                }
            }
            if ((safe_unary_minus_func_int32_t_s((safe_add_func_uint32_t_u_u(((void*)0 == (*g_159)), (1L < (safe_add_func_uint32_t_u_u(g_120, (**g_36)))))))))
            {
                int **l_440 = &l_434;
                unsigned l_442 = 0x1A4C23F5L;
                (*g_159) = (void*)0;
                for (p_14 = 0; (p_14 != 58); p_14++)
                {
                    int **l_427 = &l_417;
                }
                (*g_127) = (*g_127);
                (*g_433) = (*l_440);
            }
            else
            {
                const int **l_449 = &g_160;
                if ((*l_434))
                {
                    for (l_344 = 0; (l_344 == 39); l_344 = safe_add_func_int8_t_s_s(l_344, 1))
                    {
                        char l_450 = (-1L);
                        (*l_369) = (*l_369);
                        (*g_127) = (*l_369);
                        (**g_36) = (g_185 <= p_12);
                        (*l_417) = p_10;
                    }
                    for (p_14 = 5; (p_14 <= 11); p_14 = safe_add_func_uint16_t_u_u(p_14, 6))
                    {
                        return l_453;
                    }
                    (*l_417) = p_11;
                }
                else
                {
                    unsigned l_459 = 0UL;
                    (**g_36) = (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(func_56(p_11, &g_160, (*l_369), g_458, g_185), (l_459 == ((p_14 == (g_173 > g_185)) == p_12)))), p_13));
                }
            }
        }
        else
        {
            short l_472 = 0x5BDCL;
            int *l_482 = &l_345;
            char l_483 = 0L;
            int l_491 = 0x5E3F4236L;
            int l_528 = 1L;
            if (((safe_sub_func_uint16_t_u_u(((g_26 == ((**g_36) >= ((void*)0 == &l_343))) <= 0UL), (safe_lshift_func_uint16_t_u_s((g_173 & ((g_464 != &g_37) || (safe_unary_minus_func_uint32_t_u(((p_11 | g_458) & 0x5AL))))), 7)))) && g_120))
            {
                unsigned l_475 = 0x05170954L;
                for (p_10 = 10; (p_10 == 41); ++p_10)
                {
                    (*g_433) = (*g_433);
                    for (l_431 = 0; (l_431 == 18); ++l_431)
                    {
                        (**g_36) = (~(g_26 == (0L > 4294967291UL)));
                    }
                }
                l_472 = (-1L);
                for (l_472 = (-15); (l_472 > (-22)); l_472 = safe_sub_func_int32_t_s_s(l_472, 1))
                {
                    int ** const *l_476 = &g_433;
                    if (func_48(p_12, func_81(l_475), p_14, (l_476 != &g_433), (safe_mod_func_uint16_t_u_u(((g_120 >= p_10) ^ ((&g_127 != l_476) | 0x1BL)), 0xC3C4L))))
                    {
                        return g_458;
                    }
                    else
                    {
                        (*l_417) = (**g_36);
                    }
                    for (g_458 = 0; (g_458 >= 24); ++g_458)
                    {
                        (*g_127) = (*g_433);
                    }
                    (**g_36) = (0x8290L >= g_185);
                }
            }
            else
            {
                int *l_481 = &l_315;
                int l_497 = 0xEC39AD11L;
                const int **l_513 = &g_160;
                (*l_376) = l_481;
                (*g_37) = (l_482 != (*g_159));
                if (l_483)
                {
                    int l_486 = 0L;
                    (*g_439) = l_482;
                    (*l_376) = (*g_433);
                    if ((safe_lshift_func_uint8_t_u_u(l_486, 5)))
                    {
                        (*g_37) = (*l_482);
                    }
                    else
                    {
                        (*g_37) = ((0x2E0EL || 0xB249L) | (safe_rshift_func_int16_t_s_s((!(0xD4L && ((safe_lshift_func_uint16_t_u_s(l_486, 2)) || (l_491 != (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((((0L || func_48(((l_481 == l_481) && l_496), &g_128, g_26, g_120, p_11)) < l_486) <= g_26) != p_11), 10)), p_10)))))), g_173)));
                        (**g_433) = 0x69E9B267L;
                        return l_497;
                    }
                    return p_12;
                }
                else
                {
                    const int **l_498 = &l_436;
                    (*g_127) = (*g_127);
                    if (p_14)
                    {
                        short l_516 = 0xBEAFL;
                        int ***l_517 = &g_433;
                        l_516 = (p_11 | (0xCCB60AA2L & g_458));
                        (*l_517) = &l_481;
                    }
                    else
                    {
                        (*l_376) = (*l_513);
                        (*l_355) = (((((0xF0L < (*l_482)) & (safe_lshift_func_int16_t_s_u((((void*)0 != l_498) < ((*g_37) > (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((func_48(((p_13 && ((safe_mod_func_uint16_t_u_u(g_120, (*l_417))) == p_11)) | 0L), &l_482, p_14, (*l_482), g_26) > 0xE5810E25L) && 0x6651155CL), 0x29BEL)), l_528)) == 0x8BC18B6CL), g_31)))), 1))) > g_31) ^ 7UL) < p_12);
                    }
                }
            }
            (**g_36) = (p_14 > p_10);
        }
    }
    else
    {
        int ***l_529 = (void*)0;
        int ***l_530 = &g_464;
        (**g_36) = ((void*)0 == l_376);
        (*g_127) = (*g_127);
        (*l_530) = &g_128;
        (*g_37) = (((l_530 == (void*)0) > (safe_mod_func_uint32_t_u_u(l_533, p_14))) <= (safe_sub_func_uint32_t_u_u(g_120, ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(p_11, (safe_sub_func_int8_t_s_s((4UL > p_12), (safe_mod_func_int8_t_s_s(g_31, 255UL)))))), 4)) | l_544))));
    }
    (*g_37) = (g_185 || 1UL);
    (*l_376) = (*l_376);
    (**g_36) = 0x307668F4L;
    return p_12;
}







static short func_23(char p_24, unsigned short p_25)
{
    int *l_30 = &g_31;
    int **l_29 = &l_30;
    const int *l_169 = &g_120;
    const int **l_168 = &l_169;
    const int **l_184 = &l_169;
    unsigned l_196 = 0x303ACD4BL;
    unsigned short l_199 = 65535UL;
    const unsigned short l_210 = 2UL;
    unsigned l_212 = 0x2C0DBAEEL;
    char l_219 = 0xC6L;
    const int l_285 = 4L;
    (*l_29) = (void*)0;
    if ((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((-1L), 7)), ((void*)0 == g_36))))
    {
        char l_83 = 0x63L;
        int **l_131 = &l_30;
        unsigned l_165 = 0x4C5516B9L;
        (*g_37) = (safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(func_48((safe_sub_func_int16_t_s_s(func_56(func_62(((((safe_div_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(func_72(func_75(func_81(l_83), (*g_127), (*g_127), (safe_lshift_func_int8_t_s_u(p_24, (l_131 == (void*)0))), p_24), p_25), p_25)), p_24)) | g_120) != g_26) <= p_25), l_165, p_24, p_25, g_127), l_168, (*l_131), g_26, (*l_169)), p_25)), l_131, p_24, g_173, p_25), p_24)) | p_24), 0x91788BD6L)), p_24)) | 1L), 0xF63A0E5FL)), (-7L)));
        (*g_159) = (*l_168);
        if ((**g_36))
        {
            (*l_131) = (*l_131);
            (*l_131) = (*g_127);
        }
        else
        {
            int l_177 = (-1L);
            (*g_37) = func_56((((safe_sub_func_uint32_t_u_u(func_72(&l_169, (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((l_177 < (g_120 == p_24)), g_173)), g_26))), 0x1B3E14F1L)) < p_24) | 0x9BL), l_184, (*g_127), p_24, g_185);
            (*g_159) = (*l_131);
        }
    }
    else
    {
        int **l_186 = &l_30;
        unsigned l_195 = 0UL;
        (**g_36) = ((((l_186 == &g_128) != ((safe_mul_func_int8_t_s_s(g_185, (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(g_120, g_94)), 11)))) ^ p_24)) | (!(&g_160 == (void*)0))) <= (safe_div_func_int32_t_s_s(func_62((**g_36), p_24, l_195, g_120, &l_30), l_196)));
        (*g_127) = (void*)0;
    }
    if ((((p_25 > p_24) || g_173) == (safe_div_func_uint16_t_u_u(l_199, (safe_add_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((**g_36), g_185)), g_173)) <= (safe_add_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u(func_48(p_25, &g_128, p_25, g_94, g_185), p_25)) <= l_210) != (-1L)), 0L))) && p_24), g_185))))))
    {
        int l_211 = 0x7CF2F2AFL;
        int *l_220 = &g_120;
        (*g_159) = (*g_159);
        if ((((g_120 & (l_211 != l_212)) | (safe_rshift_func_int8_t_s_s((-1L), (((safe_sub_func_uint32_t_u_u(func_48(l_211, func_81((safe_rshift_func_uint16_t_u_s(0UL, 15))), p_24, g_185, g_173), g_120)) != l_219) & p_24)))) < g_94))
        {
            if (p_25)
            {
                (*l_168) = l_220;
            }
            else
            {
                return p_24;
            }
            return (*l_220);
        }
        else
        {
            int l_221 = 1L;
            l_221 = (**g_36);
        }
        (*l_29) = (*g_127);
    }
    else
    {
        const int **l_238 = &l_169;
        int l_243 = 0L;
        char l_293 = 0x65L;
        int l_311 = 0xB3E879FEL;
        (*g_37) = (safe_div_func_uint32_t_u_u((~(((((safe_sub_func_int16_t_s_s(g_185, (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0x0FL, (g_185 >= ((safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_173, (g_120 || p_25))), p_24)), g_120)) == 0xB9F0DAF6L)))), g_173)))) ^ 4294967289UL) < p_24) || p_24) & g_120)), (**g_36)));
        (*g_37) = p_25;
        if ((safe_lshift_func_int8_t_s_u(((0x4D96L == p_24) == ((safe_rshift_func_int16_t_s_u(p_25, (((l_243 < p_24) || (safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(g_26, 1L)) != g_94), p_24))) <= g_173))) != p_25)), g_173)))
        {
            const int **l_258 = &l_169;
            int l_272 = 7L;
            if (p_25)
            {
                const int ***l_248 = &l_184;
                (*l_248) = &g_160;
                for (g_185 = 0; (g_185 == 1); g_185 = safe_add_func_int8_t_s_s(g_185, 7))
                {
                    unsigned l_257 = 0x9A847137L;
                    int *l_267 = &l_243;
                    (**g_36) = ((safe_lshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s(p_25, 0xF9D0L)) | (1L >= (0L != (((p_25 | func_48(p_24, &g_128, g_173, g_173, g_173)) ^ p_25) < 1UL)))), p_25)) ^ 0x991E0753L);
                    (**g_36) = ((safe_lshift_func_int8_t_s_s((0x0D83L < (((safe_lshift_func_int16_t_s_u(((safe_div_func_uint32_t_u_u((g_173 != 0x172CL), (**g_36))) != (((void*)0 != (*g_127)) > g_94)), 3)) ^ 0xFC83L) <= (*g_37))), 4)) != g_31);
                    for (l_243 = 0; (l_243 > 16); l_243++)
                    {
                        (*g_159) = l_267;
                        (*g_127) = (*l_29);
                        (**g_36) = p_24;
                        (**l_248) = (*g_36);
                    }
                }
                (*l_258) = (**l_248);
                (*l_258) = (*l_184);
            }
            else
            {
                int *l_284 = &g_173;
                int l_298 = (-1L);
                for (l_219 = 28; (l_219 <= (-28)); l_219--)
                {
                    for (g_120 = (-11); (g_120 < 18); g_120 = safe_add_func_int16_t_s_s(g_120, 1))
                    {
                        (*g_37) = (g_185 & l_272);
                        (*l_238) = (void*)0;
                    }
                    return p_25;
                }
                if (l_272)
                {
                    unsigned short l_279 = 0xACF1L;
                    int **l_288 = &l_30;
                    l_243 = (safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(0xB6L, (p_25 && (safe_mod_func_uint16_t_u_u(l_279, ((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((l_284 != (*l_258)), 10)), 0xBFL)) || (p_24 | (g_120 || (l_285 || 0UL))))))))) < p_25) > 0x6D62L), 0UL));
                    l_243 = p_25;
                    (*l_284) = (safe_mul_func_uint16_t_u_u(((7UL | func_56(g_173, &g_160, (*g_127), (*l_284), g_185)) | ((+(&l_30 == l_288)) ^ (*l_284))), p_24));
                }
                else
                {
                    (**g_36) = 5L;
                }
                (*g_37) = ((((safe_mod_func_int8_t_s_s((g_173 ^ ((safe_mod_func_uint8_t_u_u(255UL, l_293)) && (p_25 && (safe_rshift_func_uint8_t_u_u(p_24, ((!l_298) ^ (safe_mod_func_uint32_t_u_u(g_31, 0xF4673FFDL)))))))), g_185)) || (*l_284)) ^ p_24) | p_25);
            }
            (*l_168) = (*l_184);
            (*g_159) = (*l_29);
        }
        else
        {
            int **l_301 = (void*)0;
            int **l_302 = &g_128;
            int l_307 = (-7L);
            (*l_302) = (*g_36);
            (*l_184) = (*l_184);
            for (l_243 = 13; (l_243 != (-29)); l_243 = safe_sub_func_int16_t_s_s(l_243, 6))
            {
                for (l_212 = 11; (l_212 <= 17); ++l_212)
                {
                    (*l_238) = (*l_238);
                    (**g_127) = (p_25 >= 0x93L);
                }
                if (l_307)
                    continue;
            }
        }
        for (l_293 = 0; (l_293 > (-11)); l_293 = safe_sub_func_int16_t_s_s(l_293, 5))
        {
            int *l_310 = (void*)0;
            (*l_184) = l_310;
            if (l_311)
                continue;
            (*l_184) = (void*)0;
        }
    }
    return g_31;
}







static unsigned short func_48(int p_49, int ** p_50, unsigned char p_51, unsigned short p_52, unsigned char p_53)
{
    int *l_174 = (void*)0;
    (*g_159) = l_174;
    return g_94;
}







static short func_56(const unsigned p_57, const int ** p_58, int * p_59, unsigned short p_60, char p_61)
{
    int *l_172 = &g_94;
    (**g_36) = (safe_lshift_func_int8_t_s_u(((*p_58) == l_172), 4));
    (*p_58) = (void*)0;
    (*g_159) = (*p_58);
    return (*l_172);
}







static unsigned func_62(int p_63, unsigned short p_64, short p_65, char p_66, int ** const p_67)
{
    unsigned short l_166 = 65535UL;
    int l_167 = 0xA48E5C97L;
    (*g_127) = (*p_67);
    (*g_159) = (*g_159);
    l_167 = l_166;
    (**g_36) = (-3L);
    return l_167;
}







static short func_72(const int ** p_73, unsigned char p_74)
{
    unsigned l_163 = 1UL;
    (*g_37) = ((safe_mod_func_int32_t_s_s(l_163, p_74)) <= ((*p_73) == (void*)0));
    (*g_128) = (p_74 && (+(p_74 < (safe_unary_minus_func_int32_t_s((g_94 > (l_163 || 4294967295UL)))))));
    return l_163;
}







static const int ** func_75(int ** p_76, int * p_77, int * p_78, char p_79, int p_80)
{
    int * const l_132 = &g_94;
    int **l_133 = (void*)0;
    int **l_134 = &g_128;
    char l_135 = (-2L);
    unsigned l_148 = 5UL;
    char l_155 = 2L;
    const int *l_158 = &g_31;
    const int **l_157 = &l_158;
    (*l_134) = l_132;
    (**g_36) = (l_135 <= ((*l_134) != (*p_76)));
    for (p_80 = 28; (p_80 > 29); ++p_80)
    {
        short l_138 = 0L;
        const int **l_141 = (void*)0;
        unsigned short l_156 = 3UL;
        (*l_134) = (*l_134);
        if ((*p_77))
            continue;
        (**g_36) = (+((((((l_138 > (safe_rshift_func_uint16_t_u_s(((&p_78 == l_141) > ((~(~(safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((void*)0 != &g_128) == (safe_add_func_uint8_t_u_u(l_148, ((safe_rshift_func_uint16_t_u_u(g_94, (safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((&p_77 == &g_37), (*g_128))) != (**l_134)), 0x16L)))) < g_94)))), l_155)), g_94)))) || l_156)), 9))) > 0x026DL) < g_31) >= 3UL) ^ g_120) && 0x97BDL));
    }
    (*l_134) = (*p_76);
    return g_159;
}







static int ** func_81(unsigned short p_82)
{
    int *l_85 = (void*)0;
    int **l_84 = &l_85;
    unsigned l_107 = 0xA4AECA2AL;
    int l_118 = 9L;
    int **l_126 = &l_85;
    (*l_84) = (*g_36);
    for (p_82 = (-16); (p_82 >= 44); p_82 = safe_add_func_int32_t_s_s(p_82, 9))
    {
        (*l_85) = (safe_div_func_uint32_t_u_u(0xCF28D0D4L, g_31));
    }
    for (p_82 = (-11); (p_82 < 12); p_82++)
    {
        short l_108 = 0x7A00L;
    }
    (*l_126) = (*g_36);
    return g_127;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_458, "g_458", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
