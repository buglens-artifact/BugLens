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
   int f0;
};


static int g_3 = 0x46DB5052L;
static int g_20 = 0L;
static int *g_91 = (void*)0;
static int **g_90 = &g_91;
static int g_99 = 0x3D526046L;
static int g_303 = 6L;
static union U0 g_328 = {7L};
static int *g_349 = &g_3;
static int **g_348 = &g_349;
static unsigned g_374 = 0xC532CF43L;
static union U0 g_389 = {0xC3B8FEF8L};
static union U0 *g_416 = &g_328;
static union U0 **g_415 = &g_416;
static int *g_520 = &g_3;



static unsigned func_1(void);
static unsigned char func_8(unsigned p_9, unsigned short p_10, int p_11, int * p_12);
static short func_28(int * p_29);
static int ** func_30(int p_31, unsigned p_32, short p_33);
static unsigned short func_41(unsigned short p_42, int * p_43, int ** p_44);
static unsigned short func_45(int ** p_46, int p_47, int * p_48);
static int ** func_49(int ** p_50, int p_51);
static int ** func_52(char p_53, short p_54, int * p_55, int * p_56);
static char func_57(int * p_58, union U0 p_59, int ** p_60, unsigned p_61);
static int ** func_63(int ** p_64);
static unsigned func_1(void)
{
    int *l_2 = &g_3;
    int l_502 = (-10L);
    l_2 = l_2;
    (*l_2) = (((l_2 == (void*)0) != (g_3 <= g_3)) ^ (safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_3, (func_8((&g_3 != l_2), (*l_2), (safe_add_func_int32_t_s_s((&g_3 == l_2), 7UL)), &g_3) | g_3))), 6)));


    ;


    if (l_502)
    {
        (*l_2) = (*l_2);
        for (g_99 = 0; (g_99 < (-16)); g_99--)
        {
            char l_507 = 1L;
            for (g_303 = 0; (g_303 <= (-7)); g_303 = safe_sub_func_uint32_t_u_u(g_303, 9))
            {
                (*l_2) = l_507;
            }
        }
    }
    else
    {
        unsigned l_519 = 0x31B2E097L;
        (*l_2) = ((safe_mod_func_uint16_t_u_u(g_303, (safe_mul_func_int16_t_s_s(1L, (*l_2))))) >= g_20);
        for (g_99 = 0; (g_99 > 18); g_99++)
        {
            if ((safe_mul_func_uint16_t_u_u(65532UL, (*l_2))))
            {
                int l_518 = 0L;
                (*l_2) = (safe_mul_func_int8_t_s_s(l_518, (l_519 ^ (*l_2))));
                (*g_90) = g_520;
            }
            else
            {
                return g_328.f0;
            }
            if ((*g_520))
                continue;
            if (l_519)
                break;
        }
    }
    return g_328.f0;
}







static unsigned char func_8(unsigned p_9, unsigned short p_10, int p_11, int * p_12)
{
    short l_15 = 0L;
    short l_439 = (-1L);
    union U0 **l_448 = &g_416;
    int l_457 = 0x41ECF1D6L;
    char l_460 = 4L;
    int l_501 = (-5L);
    if (l_15)
    {
        return l_15;
    }
    else
    {
        int *l_17 = (void*)0;
        int **l_16 = &l_17;
        int *l_18 = (void*)0;
        int *l_19 = &g_20;
        (*l_16) = (void*)0;
        (*l_19) = g_3;
    }
    for (p_10 = 0; (p_10 != 54); p_10 = safe_add_func_int16_t_s_s(p_10, 1))
    {
        int *l_23 = &g_3;
        int **l_24 = &l_23;
        int *l_25 = &g_20;
        unsigned char l_436 = 0xA2L;
        (*l_24) = l_23;
        (*l_25) = g_3;
        for (p_9 = 0; (p_9 < 20); p_9++)
        {
            union U0 *l_449 = (void*)0;
        }
        l_460 = (safe_rshift_func_uint8_t_u_u(((void*)0 != l_448), 3));
    }
    if (l_15)
    {
        int *l_461 = &g_3;
        (*g_348) = l_461;
    }
    else
    {
        unsigned char l_462 = 7UL;
        int *l_467 = &g_3;
        if ((l_462 & p_9))
        {
            int l_463 = 1L;
            union U0 ***l_495 = &l_448;
            if (l_463)
            {
                int *l_464 = &g_99;
                int *l_470 = (void*)0;
                (*l_464) = 2L;
                (*g_348) = &p_11;

                ;
                if ((+(safe_mul_func_int8_t_s_s(func_41(l_462, l_467, &g_349), 0xB3L))))
                {
                    short l_485 = 0xC6D4L;
                    int *l_490 = &g_3;
                    for (l_463 = 0; (l_463 != (-26)); --l_463)
                    {
                        (**g_348) = (**g_348);
                    }
                    (*g_90) = l_470;

                    ;
                    (*l_464) = (~(safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(func_41(((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(func_28((*g_348)), 6)), l_485)) < (safe_add_func_uint16_t_u_u(g_3, p_10))), ((safe_lshift_func_uint16_t_u_s(g_3, 7)) || ((void*)0 == l_490)))) < (((safe_mod_func_uint8_t_u_u((g_3 < 1L), 0x7BL)) || (-5L)) != 2UL)), l_463)), (*p_12))) && g_3), l_470, &l_467), 6)), g_3)));


                    ;

                    ;
                    for (l_462 = (-24); (l_462 < 37); l_462 = safe_add_func_uint16_t_u_u(l_462, 1))
                    {
                        (*g_348) = (*g_90);
                    }
                }
                else
                {
                    l_463 = (((**g_348) > (*l_467)) || (((p_11 & l_463) != (+(1UL | (0x1A288EE3L & 4294967287UL)))) > ((void*)0 != &p_12)));
                }


                ;

                ;
            }
            else
            {
                (*g_348) = &p_11;

                ;
                (*g_90) = (*g_90);
            }


            ;
            ;

            ;
            (*l_495) = l_448;
        }
        else
        {
            union U0 ***l_496 = &l_448;
            int *l_500 = &g_3;
            (*l_496) = &g_416;
            (*g_90) = &p_11;

            ;
            for (g_389.f0 = 15; (g_389.f0 != 5); --g_389.f0)
            {
            }
            (*g_91) = (p_10 < p_11);
        }


        ;
        ;

        ;
    }


    ;
    ;

    return l_501;



}







static short func_28(int * p_29)
{
    unsigned l_34 = 1UL;
    union U0 l_62 = {0x8E213633L};
    int *l_66 = &l_62.f0;
    int **l_65 = &l_66;
    short l_262 = 0x177AL;
    int ***l_428 = &g_90;
    int l_429 = 0L;
    unsigned char l_434 = 9UL;
    (*l_428) = func_30(l_34, (((safe_lshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0xDC14L, func_41(func_45(func_49(func_52((func_57(p_29, l_62, func_63(l_65), l_62.f0) >= g_3), g_3, &g_3, p_29), l_262), l_262, &g_3), &g_3, g_348))), g_3)) > l_34), 3)) > 0xD6C7L) && 0xB6969B8EL), g_3);



    ;
    l_429 = (g_374 & g_99);
    for (g_328.f0 = (-26); (g_328.f0 != 6); g_328.f0++)
    {
        for (l_262 = 22; (l_262 <= 24); l_262 = safe_add_func_uint16_t_u_u(l_262, 3))
        {
            unsigned l_435 = 0x88729649L;
            l_435 = l_434;
        }
    }
    (*g_415) = &l_62;

    ;
    return g_328.f0;


}







static int ** func_30(int p_31, unsigned p_32, short p_33)
{
    return &g_349;


}







static unsigned short func_41(unsigned short p_42, int * p_43, int ** p_44)
{
    unsigned l_361 = 4294967295UL;
    int **l_372 = &g_91;
    union U0 *l_388 = &g_389;
    for (g_99 = 0; (g_99 > (-17)); --g_99)
    {
        int **l_383 = (void*)0;
        int l_410 = 1L;
        union U0 **l_414 = &l_388;
        unsigned char l_427 = 249UL;
        for (g_20 = 11; (g_20 > (-30)); g_20--)
        {
            unsigned l_373 = 0UL;
            int l_378 = 0x06014620L;
            unsigned char l_385 = 7UL;
            int *l_386 = &l_378;
            int *l_411 = &g_389.f0;
            for (g_328.f0 = (-11); (g_328.f0 > (-18)); g_328.f0--)
            {
                unsigned char l_362 = 0xAFL;
                int *l_363 = &g_20;
                short l_396 = 3L;
                for (g_303 = 0; (g_303 >= 15); g_303++)
                {
                    char l_377 = 0xEFL;
                    unsigned short l_384 = 0x6B50L;
                    union U0 *l_387 = &g_328;
                    l_362 = (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint32_t_u((p_42 | g_303))), (((l_361 < g_99) & 1L) | g_20)));
                    g_374 = (g_303 < (0x8EL <= (((l_363 != (*p_44)) && 0x2DL) | (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(0xECEBL, (*l_363))), (safe_mul_func_uint8_t_u_u((((*l_363) && (safe_rshift_func_uint8_t_u_s((((((void*)0 != l_372) && (*g_349)) == g_99) >= 5UL), l_373))) | 0x06B5A6B3L), 0x2CL)))))));
                    if ((safe_mul_func_uint16_t_u_u((l_377 < 7L), l_373)))
                    {
                        l_378 = (*g_349);
                        l_385 = (safe_add_func_uint32_t_u_u((0UL ^ 254UL), ((0L || (&g_91 != l_383)) > ((l_384 ^ p_42) & g_374))));
                        l_386 = (*p_44);


                    }
                    else
                    {
                        return p_42;
                    }


                    l_388 = l_387;

                    ;
                }
                for (l_361 = 17; (l_361 == 10); l_361--)
                {
                    short l_397 = 0L;
                    (*p_44) = (*g_348);
                    l_397 = (safe_sub_func_uint16_t_u_u((((65535UL && g_389.f0) > (-1L)) == 0xE078L), (safe_sub_func_uint32_t_u_u(p_42, ((((!(l_396 == g_328.f0)) >= p_42) > p_42) <= g_303)))));
                }
                l_410 = (safe_add_func_uint32_t_u_u((*l_363), (((0xC7B0578FL <= ((*l_363) || (*g_349))) >= ((((safe_rshift_func_uint8_t_u_u(p_42, 0)) < 4294967291UL) || ((safe_lshift_func_int8_t_s_s(g_3, (safe_rshift_func_int8_t_s_u(g_389.f0, 7)))) & ((safe_rshift_func_uint8_t_u_u((((~((safe_mod_func_uint16_t_u_u(g_303, 0x51C8L)) & (**p_44))) < 65535UL) != 0xE95EL), p_42)) >= g_3))) <= p_42)) <= 0x7C7A1879L)));
                (*l_372) = (*g_348);


            }


            if ((**g_348))
                break;
            (*l_411) = (**p_44);
        }
        l_427 = (safe_sub_func_int16_t_s_s((!(g_99 | ((((&l_388 != l_414) && ((((l_414 != g_415) || (~p_42)) ^ (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(g_389.f0, ((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((g_3 < (**p_44)) != p_42), g_99)), g_389.f0)), 0xDC2BL)) < 0x0B88L))), p_42))) >= 0UL)) & 0x0F74CC39L) || p_42))), 0xCA4BL));
    }

    ;
    return g_389.f0;
}







static unsigned short func_45(int ** p_46, int p_47, int * p_48)
{
    unsigned l_345 = 4294967295UL;
    int *l_346 = &g_303;
    union U0 l_347 = {1L};
    g_20 = (safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_345, (p_47 && g_303))), p_47)), 0));
    return g_3;
}







static int ** func_49(int ** p_50, int p_51)
{
    int *l_264 = &g_20;
    union U0 l_286 = {-2L};
    int ***l_289 = &g_90;
    int l_337 = (-4L);
    int *l_338 = &g_328.f0;
    if (p_51)
    {
        int *l_263 = &g_20;
        unsigned char l_267 = 0x59L;
        (*l_263) = ((void*)0 != &g_90);
        (*l_263) = (*l_263);
        l_264 = (*p_50);


        for (g_20 = 0; (g_20 <= (-20)); g_20 = safe_sub_func_uint16_t_u_u(g_20, 7))
        {
            p_51 = (l_267 > 0L);
            for (p_51 = (-28); (p_51 <= (-22)); p_51 = safe_add_func_uint32_t_u_u(p_51, 9))
            {
                int *l_272 = &g_20;
                for (g_99 = (-27); (g_99 != (-15)); g_99++)
                {
                    l_263 = l_272;
                }
                (*p_50) = (*p_50);
            }
        }
    }
    else
    {
        short l_275 = 0xF4BAL;
        union U0 l_295 = {-1L};
        int *l_334 = &l_286.f0;
        (*p_50) = l_264;

        ;
        for (p_51 = (-7); (p_51 > (-5)); p_51++)
        {
            (*p_50) = l_264;
            (*g_91) = (*g_91);
            (**p_50) = l_275;
        }
        (*l_264) = (safe_mod_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((-6L), 0)), (safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s(func_57((*p_50), l_286, p_50, g_99), (&g_3 == &g_3))) & (-1L)), 7)))) <= (-1L)) ^ p_51), l_275));

        ;
        if ((*l_264))
        {
            int l_287 = 0x23DBF3A5L;
            (*l_264) = l_287;
            (*l_264) = 0L;
            return &g_91;


        }
        else
        {
            int *l_288 = (void*)0;
            (*p_50) = l_288;

            ;
            if (p_51)
            {
                union U0 l_292 = {0x4FA118B2L};
                (*l_264) = l_275;
                (*l_264) = ((l_289 != (void*)0) >= (0x65L > ((!((safe_mul_func_uint16_t_u_u(l_275, (safe_mod_func_int8_t_s_s((l_292.f0 ^ 0xDCL), 249UL)))) > p_51)) ^ g_20)));
                for (g_20 = 0; (g_20 < 21); g_20++)
                {
                    int *l_298 = &l_292.f0;
                    (*p_50) = l_298;

                    ;
                    l_295.f0 = (**p_50);
                }

                ;
            }
            else
            {
                l_295.f0 = ((void*)0 != p_50);
            }


            for (p_51 = 0; (p_51 < 28); p_51 = safe_add_func_uint32_t_u_u(p_51, 4))
            {
                int *l_313 = &g_303;
                union U0 l_314 = {0x708E5559L};
                int *l_331 = &g_3;
                for (l_275 = 0; (l_275 != 26); l_275++)
                {
                    if (g_303)
                    {
                        int *l_304 = &g_99;
                        (*p_50) = l_288;

                        ;
                        l_304 = &g_99;
                        (*l_304) = (*l_264);
                        (*p_50) = l_304;

                        ;
                    }
                    else
                    {
                        (*p_50) = &p_51;

                        ;
                    }

                    ;
                    (*l_264) = (-1L);
                    for (g_303 = 0; (g_303 < 13); g_303 = safe_add_func_int32_t_s_s(g_303, 5))
                    {
                        union U0 *l_308 = &l_286;
                        union U0 **l_307 = &l_308;
                        (*l_307) = &l_286;
                        (*p_50) = (*p_50);
                    }
                }


                if (((safe_lshift_func_uint8_t_u_s(((l_295.f0 && g_303) && g_3), 2)) ^ (safe_sub_func_uint16_t_u_u(0x7B2BL, (l_275 || g_3)))))
                {
                    unsigned l_320 = 4294967295UL;
                    union U0 l_329 = {1L};
                    if (l_320)
                        break;
                    for (g_303 = 0; (g_303 == 14); ++g_303)
                    {
                        int *l_323 = &g_3;
                        (*p_50) = l_323;

                        ;
                        (*l_264) = ((safe_mod_func_uint32_t_u_u((*l_323), ((safe_mod_func_int16_t_s_s(p_51, (p_51 & l_275))) ^ 0x66L))) | p_51);
                    }
                }
                else
                {
                    int **l_330 = &l_313;
                    (*l_264) = (*l_313);
                    if (p_51)
                    {
                        if (g_303)
                            break;
                        if (p_51)
                            break;
                        (*p_50) = l_288;

                        ;
                    }
                    else
                    {
                        return &g_91;



                    }

                    ;
                    (*p_50) = (*l_330);

                    ;
                }


                (*p_50) = l_331;

                ;
                for (l_314.f0 = 0; (l_314.f0 > (-19)); l_314.f0 = safe_sub_func_uint8_t_u_u(l_314.f0, 6))
                {
                    (*p_50) = (*p_50);
                }
            }


            (*l_334) = p_51;
        }


    }



    (*l_338) = g_20;
    return &g_91;



}







static int ** func_52(char p_53, short p_54, int * p_55, int * p_56)
{
    return &g_91;


}







static char func_57(int * p_58, union U0 p_59, int ** p_60, unsigned p_61)
{
    unsigned l_191 = 0xD0698F75L;
    int *l_225 = &g_99;
    int *l_261 = &g_20;
    for (p_59.f0 = 4; (p_59.f0 > (-1)); --p_59.f0)
    {
        char l_198 = 0x97L;
        int *l_226 = &g_3;
        unsigned short l_260 = 65535UL;
        if ((*p_58))
        {
            unsigned short l_190 = 9UL;
            for (g_99 = (-14); (g_99 == 6); g_99 = safe_add_func_int8_t_s_s(g_99, 5))
            {
                (*p_58) = (((-1L) == ((((safe_add_func_int8_t_s_s(((l_190 && ((l_190 ^ (g_3 && p_61)) == p_61)) || l_191), p_61)) || ((safe_rshift_func_int8_t_s_u(g_99, g_99)) && p_59.f0)) == 255UL) < 4294967287UL)) & (*p_58));
            }
            (*p_60) = p_58;
        }
        else
        {
            int *l_196 = (void*)0;
            if (((safe_mod_func_int16_t_s_s(g_20, g_3)) & ((p_59.f0 == p_61) == g_20)))
            {
                char l_197 = 0x22L;
                (*p_60) = l_196;
                l_198 = l_197;
            }
            else
            {
                unsigned l_202 = 4294967295UL;
                int *l_209 = &g_20;
                if ((*p_58))
                {
                    short l_201 = 0x48AFL;
                    (*p_58) = (safe_mod_func_int16_t_s_s(p_59.f0, l_201));
                    (*p_58) = ((l_202 ^ 0UL) ^ (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(0UL, 0x1DEDL)), 0)), l_198)));
                }
                else
                {
                    char l_210 = (-9L);
                    if (g_3)
                    {
                        (*p_60) = l_209;
                        (*p_58) = ((p_61 >= l_210) <= (*l_209));
                    }
                    else
                    {
                        unsigned l_221 = 0xBC7C0104L;
                        int ***l_222 = &g_90;
                        (*l_209) = (safe_mod_func_int8_t_s_s(((*l_209) != 0UL), (((65532UL ^ ((p_61 > (safe_rshift_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s(p_61, 8)) >= p_59.f0) || (safe_lshift_func_int16_t_s_s((((*p_58) & g_99) <= l_221), l_191))), p_59.f0))) != 65531UL)) || 1L) && p_61)));
                        (*l_222) = &p_58;

                        ;
                        (**g_90) = (***l_222);
                    }


                    if ((safe_mod_func_uint8_t_u_u(p_59.f0, (((void*)0 == &g_90) && (((p_61 & l_198) == l_198) && p_59.f0)))))
                    {
                        (*p_60) = l_225;


                        (*p_60) = l_226;
                    }
                    else
                    {
                        int ***l_227 = &g_90;
                        (*l_227) = &g_91;

                        ;
                        (*p_60) = l_196;
                        (**l_227) = (*g_90);
                    }


                    if (((((((0x2209DD69L | ((safe_sub_func_int16_t_s_s((&g_91 != (void*)0), 0x2D7FL)) <= p_61)) < (safe_sub_func_int32_t_s_s((*l_225), ((void*)0 != &g_90)))) | (((safe_sub_func_uint8_t_u_u(0xAAL, 0x89L)) >= g_20) != 0L)) && g_20) >= 0x422AL) >= l_210))
                    {
                        int l_252 = 0x1A6B0373L;
                        (*l_209) = ((safe_sub_func_int8_t_s_s((&p_58 == (void*)0), ((g_3 || 0x7C66L) < (g_3 || (safe_mul_func_int16_t_s_s(p_59.f0, (safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u((l_210 == (*l_225)), 6)) & (((safe_sub_func_int16_t_s_s(((safe_add_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((*l_226), 0UL)) <= (*l_209)) <= 5UL), 0x77L)) == p_61), (*l_209))) >= 0x20C650B9L) != g_3)), g_3)), l_252)))))))) & (*p_58));
                        (*l_225) = (safe_add_func_int32_t_s_s(((l_226 != (void*)0) & ((safe_sub_func_int16_t_s_s((&g_90 == &p_60), g_20)) >= l_210)), ((1L > ((g_3 <= ((g_99 <= p_61) != 65535UL)) >= (-4L))) == g_99)));
                        (*l_225) = ((safe_mul_func_int16_t_s_s(((l_252 | p_59.f0) & g_99), p_59.f0)) <= p_59.f0);
                        (*p_60) = &g_99;
                    }
                    else
                    {
                        int l_259 = 4L;
                        return l_259;


                    }
                    if ((*p_58))
                    {
                        (*p_60) = &g_20;
                        return l_260;


                    }
                    else
                    {
                        return g_99;


                    }
                }
            }
            l_226 = l_225;

            ;
        }

        ;
        if ((*p_58))
            continue;
        (*p_60) = l_261;
        return g_20;
    }



    return g_20;
}







static int ** func_63(int ** p_64)
{
    int *l_67 = &g_3;
    int l_148 = 0x3707C233L;
    int *l_183 = &g_99;
    (*p_64) = l_67;


    if (((*l_67) >= (*l_67)))
    {
        unsigned l_70 = 0UL;
        int l_105 = 7L;
        if ((**p_64))
        {
            int *l_73 = &g_20;
            (*l_73) = ((((safe_sub_func_uint8_t_u_u(g_20, (-8L))) && l_70) | ((safe_mul_func_int16_t_s_s((l_73 == (void*)0), ((*l_73) & (safe_mul_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s(g_3, (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((*l_73), (safe_rshift_func_int16_t_s_s(((*l_67) || (*l_73)), 6)))), l_70)))) > l_70) != g_3), g_3))))) || 1UL)) >= 0xD709C591L);
            (*l_73) = (safe_add_func_int16_t_s_s((-10L), g_20));
        }
        else
        {
            int *l_86 = &g_20;
            (*l_86) = 0xE6E86CD9L;
            (*l_86) = 0x4C0DD78FL;
            for (g_20 = 0; (g_20 >= (-30)); g_20 = safe_sub_func_int16_t_s_s(g_20, 4))
            {
                int **l_89 = &l_67;
                (*p_64) = l_86;


                g_90 = l_89;

                ;
            }


            ;
        }


        ;
        (*g_90) = l_67;


        l_105 = (**p_64);
        (*p_64) = (*g_90);


    }
    else
    {
        int l_114 = 0x80CEF6D7L;
        int l_158 = 0x65DC0845L;
        int **l_168 = &l_67;
        unsigned l_182 = 2UL;
        if ((**p_64))
        {
            int l_107 = 4L;
            int l_154 = 0x3ABD0210L;
            int l_181 = 0x4379D8B8L;
            if ((5UL != g_3))
            {
                int *l_106 = &g_99;
                (*l_106) = 0L;
                if ((g_99 < l_107))
                {
                    short l_115 = (-1L);
                    if (((&g_91 != &g_91) == (safe_add_func_int32_t_s_s((65527UL >= (g_99 >= l_107)), (+(safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_114, ((((-4L) && l_115) > (*l_106)) < g_3))), (*l_67))))))))
                    {
                        (*l_106) = ((safe_lshift_func_int8_t_s_u(((l_107 && (safe_add_func_int16_t_s_s(g_20, ((*l_67) && (l_106 == (*p_64)))))) || (*l_67)), 7)) ^ (safe_mod_func_int16_t_s_s((((l_115 || g_20) != 0xF7L) < (*l_106)), l_114)));
                        (*l_106) = (*l_67);
                        return &g_91;


                    }
                    else
                    {
                        (*l_106) = (**p_64);
                        (*p_64) = l_67;
                        return p_64;


                    }
                }
                else
                {
                    unsigned char l_146 = 0xD9L;
                    if ((l_107 < ((((safe_rshift_func_int8_t_s_s(l_107, g_3)) < (((safe_sub_func_int32_t_s_s(0L, (safe_mul_func_uint16_t_u_u(65535UL, g_20)))) > (*l_106)) <= g_99)) && 4294967291UL) | 3L)))
                    {
                        unsigned char l_147 = 255UL;
                        l_147 = (safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(0UL, (**p_64))) >= (*l_106)), ((safe_lshift_func_uint16_t_u_s((g_99 | ((*l_67) == (safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((+(safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(g_99, l_107)) & g_20), 0)) < g_99), 1UL))), l_146)), l_146)), l_107)))), 15)) <= (**p_64))));
                    }
                    else
                    {
                        int l_149 = 0L;
                        l_148 = (0xC290L == g_20);
                        (*l_106) = (l_149 >= (safe_sub_func_int32_t_s_s((**p_64), (**p_64))));
                        (*l_106) = (safe_rshift_func_int16_t_s_u(g_3, 5));
                        (*l_106) = l_149;
                    }
                    l_154 = (**p_64);
                    (*g_90) = (*p_64);

                    ;
                }

                ;
                if ((**p_64))
                {
                    int l_157 = 0xF33B7E8FL;
                    int l_163 = 0x6E093E1FL;
                    if ((safe_sub_func_uint8_t_u_u(0xBDL, ((!(*l_67)) <= (l_114 & (l_157 & l_158))))))
                    {
                        (*p_64) = l_106;


                        (**p_64) = (*g_91);
                    }
                    else
                    {
                        char l_162 = 7L;
                        l_162 = ((safe_unary_minus_func_int8_t_s(g_3)) != (safe_rshift_func_uint8_t_u_u(l_157, 3)));
                        l_163 = 0x310E1A7FL;
                    }


                }
                else
                {
                    (*l_106) = 6L;
                    if ((0UL <= ((*l_106) >= (g_20 == (*l_106)))))
                    {
                        (*p_64) = &l_154;


                        (**p_64) = (**p_64);
                    }
                    else
                    {
                        l_148 = (safe_lshift_func_uint16_t_u_s(65526UL, (safe_mod_func_uint8_t_u_u((g_20 & g_3), (*l_67)))));
                        g_20 = ((void*)0 == l_168);
                    }


                }


                (*l_106) = (**g_90);
            }
            else
            {
                int l_180 = (-1L);
                l_148 = 0x44E1F5B4L;
                g_20 = (safe_unary_minus_func_int8_t_s(((0x547BL | 0UL) != ((~(safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(0x1A6B3F76L, (safe_mul_func_uint8_t_u_u((**l_168), (l_180 <= (**p_64)))))) < (l_181 != (((1L < (**l_168)) || 0x4AL) == g_99))) & l_180), l_107)), l_182))) == g_99))));
            }



        }
        else
        {
            l_114 = (&l_67 != &g_91);
        }



        (*l_168) = &l_148;

        ;
    }


    ;

    ;
    (*l_183) = (((void*)0 == &l_148) || (((*g_90) != (void*)0) >= (&l_148 == (*g_90))));
    return &g_91;



}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_328.f0, "g_328.f0", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_389.f0, "g_389.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
