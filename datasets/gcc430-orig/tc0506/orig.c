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



static int g_3 = (-1L);
static int *g_43 = &g_3;
static int * const *g_42 = &g_43;
static unsigned char g_71 = 0x3BL;
static short g_85 = (-1L);
static int g_88 = 0x1F806EB7L;
static short g_107 = 0x817EL;
static unsigned g_110 = 18446744073709551611UL;
static unsigned short g_169 = 0x562CL;
static int g_170 = 3L;
static unsigned short g_211 = 0x4E88L;
static const int g_233 = 0x83445F07L;
static unsigned short g_273 = 0xABA8L;
static short g_285 = (-7L);
static unsigned char g_343 = 0x31L;
static unsigned char g_387 = 1UL;
static const int *g_397 = &g_88;
static unsigned g_444 = 4294967286UL;
static int g_481 = 0xE5B79076L;
static unsigned char g_489 = 0x59L;
static short g_624 = 7L;
static int g_625 = 1L;
static unsigned g_644 = 0x3C2E7FE4L;
static unsigned char g_717 = 0x51L;
static int g_738 = 0x99C5EDB8L;
static unsigned g_759 = 0x0AD23FF0L;
static int g_844 = 6L;
static unsigned g_857 = 18446744073709551606UL;
static int g_1028 = 0L;
static unsigned short g_1029 = 65535UL;
static unsigned short g_1144 = 1UL;
static int g_1276 = 0L;
static unsigned g_1314 = 1UL;
static unsigned char g_1480 = 0UL;



static int func_1(void);
static unsigned char func_5(int p_6, char p_7, int ** p_8, short p_9);
static char func_12(int p_13, const int ** p_14, int p_15);
static const int ** func_16(char p_17);
static unsigned short func_18(int p_19, unsigned char p_20, int * const p_21);
static short func_24(const int * p_25, short p_26, char p_27, unsigned p_28);
static const int * func_29(int * p_30, int * p_31, unsigned p_32);
static unsigned func_37(int * const * p_38, unsigned short p_39, char p_40, short p_41);
static int ** func_46(unsigned short p_47, int p_48, int p_49);
static short func_54(int p_55, unsigned p_56, unsigned char p_57, unsigned short p_58);
static int func_1(void)
{
    int *l_2 = &g_3;
    int **l_4 = &l_2;
    int *l_33 = &g_3;
    unsigned l_1393 = 6UL;
    const unsigned short l_1419 = 1UL;
    int l_1432 = 0x9A745319L;
    int l_1447 = (-1L);
    int l_1448 = (-4L);
    int l_1455 = 0L;
    (*l_4) = l_2;
    if ((((g_3 ^ g_3) > (((**l_4) , func_5((**l_4), (((safe_rshift_func_int8_t_s_s(func_12(g_3, func_16((func_18((safe_rshift_func_int8_t_s_u(((**l_4) ^ g_3), 3)), (((**l_4) > ((func_24(func_29((*l_4), l_33, (**l_4)), g_625, g_489, g_717) <= g_759) , g_489)) , g_88), &g_481) , (*l_2))), (*l_2)), (*l_33))) , 1L) , 4L), &l_2, g_444)) & g_71)) , l_1393))
    {
        int *l_1396 = (void*)0;
        for (g_644 = (-29); (g_644 != 8); g_644 = safe_add_func_int32_t_s_s(g_644, 1))
        {
            (*l_4) = l_1396;

            ;
        }

        ;
    }
    else
    {
        char l_1398 = (-6L);
        int l_1410 = (-10L);
        int l_1469 = 0x34E37675L;
        int l_1473 = (-9L);
        l_1410 |= ((func_24((*l_4), ((safe_unary_minus_func_int32_t_s(g_844)) , g_624), (**l_4), (*l_2)) || (**l_4)) , (*l_2));

        ;
        l_1410 = (g_738 >= (safe_sub_func_uint16_t_u_u(l_1398, ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((((safe_add_func_int32_t_s_s(((g_343 ^ l_1410) > g_857), (&l_1410 == (void*)0))) <= ((void*)0 != (*l_4))) > l_1419), 0)) && g_343), g_1028)) , g_717))));
        for (g_1314 = 10; (g_1314 != 41); ++g_1314)
        {
            int *l_1422 = &g_844;
            int *l_1423 = &g_3;
            int *l_1424 = &g_481;
            int *l_1425 = &g_625;
            int *l_1426 = &g_3;
            int *l_1427 = (void*)0;
            int *l_1428 = (void*)0;
            int *l_1429 = &g_844;
            int *l_1430 = &g_844;
            int *l_1431 = &g_844;
            int *l_1433 = (void*)0;
            int *l_1434 = &g_1276;
            int *l_1435 = &g_3;
            int *l_1436 = &g_1276;
            int *l_1437 = &g_88;
            int *l_1438 = &l_1432;
            int *l_1439 = (void*)0;
            int *l_1440 = &g_88;
            int *l_1441 = &g_844;
            int *l_1442 = &g_481;
            int *l_1443 = (void*)0;
            int *l_1444 = &g_1276;
            int *l_1445 = (void*)0;
            int *l_1446 = &g_481;
            int *l_1449 = &g_625;
            int *l_1450 = &g_481;
            int *l_1451 = &l_1447;
            int *l_1452 = (void*)0;
            int *l_1453 = &g_481;
            int *l_1454 = &g_844;
            int *l_1456 = &g_1276;
            int *l_1457 = (void*)0;
            int *l_1458 = &l_1455;
            int *l_1459 = &g_3;
            int *l_1460 = (void*)0;
            int *l_1461 = &l_1455;
            int *l_1462 = &l_1447;
            int *l_1463 = &g_3;
            int *l_1464 = &l_1447;
            int *l_1465 = (void*)0;
            int *l_1466 = &l_1455;
            int *l_1467 = &g_3;
            int *l_1468 = &g_625;
            int *l_1470 = (void*)0;
            int *l_1471 = &l_1447;
            int *l_1472 = &l_1410;
            int *l_1474 = &g_3;
            int *l_1475 = &l_1469;
            int *l_1476 = &g_481;
            int *l_1477 = &l_1410;
            int *l_1478 = &g_625;
            int *l_1479 = &g_3;
            g_1480++;
        }
    }

    ;
    ;
    ;
    (*l_33) = 0xCD67A794L;
    (*l_33) = (((void*)0 == (*l_4)) | ((-1L) && (0x9BEBL == g_1029)));
    return g_489;
}







static unsigned char func_5(int p_6, char p_7, int ** p_8, short p_9)
{
    unsigned l_1195 = 0x202491D5L;
    int l_1288 = 1L;
    int **l_1336 = &g_43;
    int ***l_1335 = &l_1336;
    int **l_1351 = &g_43;
    const int **l_1354 = (void*)0;
    int *l_1355 = (void*)0;
    int *l_1356 = (void*)0;
    int *l_1357 = &g_1276;
    int *l_1362 = &l_1288;
    int *l_1363 = (void*)0;
    int *l_1364 = &g_625;
    int *l_1365 = &g_844;
    int *l_1366 = &g_88;
    int *l_1367 = &g_88;
    int *l_1368 = &g_88;
    int *l_1369 = (void*)0;
    int l_1370 = 4L;
    int *l_1371 = (void*)0;
    int l_1372 = 0xFBCFB63FL;
    int *l_1373 = &l_1288;
    int *l_1374 = &g_481;
    int *l_1375 = &g_625;
    int *l_1376 = &g_625;
    int *l_1377 = &l_1370;
    int *l_1378 = &g_625;
    int *l_1379 = (void*)0;
    int *l_1380 = &l_1370;
    int l_1381 = 1L;
    int *l_1382 = &g_1276;
    int *l_1383 = &g_481;
    int *l_1384 = &l_1288;
    int *l_1385 = &l_1381;
    int *l_1386 = &g_481;
    int l_1387 = 0x89F02927L;
    int *l_1388 = &l_1387;
    int l_1389 = 0x1A0C45EEL;
    unsigned short l_1390 = 0UL;
    for (g_738 = 8; (g_738 <= (-24)); --g_738)
    {
        int *l_1192 = &g_481;
        int l_1241 = 0x1FB9C607L;
        (*p_8) = l_1192;


    }


    (*l_1357) ^= func_12((func_12((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((void*)0 == l_1351) == (safe_lshift_func_int16_t_s_s(((*p_8) != (g_1314 , (*l_1336))), 1))), p_7)), p_6)), l_1354, g_624) ^ l_1288), l_1354, g_170);
    if (((((safe_add_func_int8_t_s_s(g_481, p_6)) , ((((*l_1357) , (g_343 != g_3)) , p_9) , (safe_add_func_int16_t_s_s(g_481, (p_9 <= (((0xED80D8B9L || 8UL) && p_9) ^ (*l_1357))))))) != p_7) || (*l_1357)))
    {
        (*l_1357) |= (**p_8);
    }
    else
    {
        return p_6;
    }
    --l_1390;
    return p_7;
}







static char func_12(int p_13, const int ** p_14, int p_15)
{
    int **l_1188 = (void*)0;
    int **l_1189 = &g_43;
    (*l_1189) = (*g_42);
    g_625 = (&g_397 != (void*)0);
    return g_625;
}







static const int ** func_16(char p_17)
{
    int **l_808 = &g_43;
    char l_815 = 0xBCL;
    int l_816 = 0xB7085187L;
    unsigned l_825 = 0x6A08EB11L;
    int l_842 = 4L;
    int * const *l_849 = &g_43;
    unsigned short l_864 = 0x95A0L;
    int **l_888 = &g_43;
    int *l_910 = (void*)0;
    int l_984 = (-1L);
    unsigned l_1156 = 4294967292UL;
    char l_1181 = 0x2CL;
    const int **l_1187 = &g_397;
    for (g_624 = 0; (g_624 >= (-24)); g_624 = safe_sub_func_int8_t_s_s(g_624, 2))
    {
        int * const *l_807 = &g_43;
        int *l_819 = (void*)0;
        int *l_820 = &g_625;
        int *l_821 = &g_481;
        int *l_822 = (void*)0;
        int *l_823 = &g_88;
        int *l_824 = (void*)0;
        for (p_17 = 0; (p_17 <= 28); ++p_17)
        {
            const int **l_802 = &g_397;
            return l_802;


        }
        g_88 &= (((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(p_17, func_37(l_807, (g_233 || (((void*)0 != l_808) && (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(p_17, 6)), l_815)), l_816)))), ((safe_mod_func_uint8_t_u_u((**l_807), (**l_808))) == (**l_808)), p_17))) | 0x52L), 0xA1L)) ^ (**l_808)) | g_107);
        l_825++;
    }
    for (g_489 = 0; (g_489 >= 15); ++g_489)
    {
        int *l_841 = &g_481;
        int *l_843 = &g_844;
        g_88 ^= ((safe_lshift_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(((g_3 == g_85) >= ((void*)0 != &g_43)), g_644)) != ((safe_rshift_func_uint8_t_u_u(((**l_808) == 0x66L), (p_17 < (**l_808)))) >= p_17)) , p_17), 0)) | g_273);
        (**g_42) |= (*g_397);
        (*l_843) |= func_24(&g_3, (safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(func_54(((g_644 , ((-10L) > (p_17 , (safe_unary_minus_func_int32_t_s(((*l_808) == l_841)))))) <= (p_17 <= g_85)), (((1UL < 0UL) >= (*l_841)) , 0xAAB49186L), (*l_841), p_17), 0xB0452F2CL)), 5)), g_444, l_842);
    }
    if (((safe_add_func_uint32_t_u_u(0xF9D44B6BL, func_24((*l_808), (**l_808), (**l_808), ((safe_mul_func_uint8_t_u_u(p_17, ((p_17 < (!255UL)) == func_37(l_849, (**l_849), p_17, (**l_849))))) != g_233)))) | p_17))
    {
        int *l_850 = &g_88;
        int *l_851 = &g_844;
        int *l_852 = &g_88;
        int *l_853 = &g_844;
        int *l_854 = &g_625;
        int *l_855 = (void*)0;
        int *l_856 = &g_481;
        g_857++;
        (*g_43) |= 0xD2FB32D9L;
    }
    else
    {
        short l_863 = 0x8BADL;
        int *l_865 = (void*)0;
        int l_885 = 0x38944EB5L;
        int l_994 = 0x56C00769L;
        int l_1001 = 0x1A39ED2FL;
        int l_1066 = 0x8026F9B6L;
        int l_1075 = 1L;
        int l_1131 = 0xB47B4495L;
        for (g_107 = 26; (g_107 <= (-5)); --g_107)
        {
            unsigned short l_862 = 0x19C7L;
        }
        if (func_24(&g_844, (safe_mod_func_int16_t_s_s((g_489 | (safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((0x401CL & (p_17 & g_857)), (((**l_808) && p_17) | g_625))), (((safe_rshift_func_int16_t_s_s(p_17, g_738)) != 250UL) ^ l_885)))), 1L)), g_3, p_17))
        {
            const int **l_886 = (void*)0;
            const int **l_887 = &g_397;
            (*l_887) = func_29(l_865, &g_3, (**l_849));


            ;
        }
        else
        {
            int l_899 = 0x8F0C3E78L;
            int *l_902 = (void*)0;
            int l_918 = 0xF52DCA6EL;
            int l_991 = 0xA3677B4BL;
            (**l_808) |= p_17;
            if (((l_888 != &g_397) , (safe_mod_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u(((p_17 || (safe_add_func_int16_t_s_s((g_3 & (safe_mul_func_int8_t_s_s(0x0FL, ((safe_rshift_func_uint16_t_u_s(g_481, 8)) > (((~(l_899 && p_17)) > ((((l_899 , 0xC8E9D30DL) & l_899) & 0x7C2A8DDCL) , 1L)) >= l_899))))), g_85))) , l_899), l_863)) , 0x5341L) <= l_885), 0xD1950E63L))))
            {
                (*g_43) = p_17;
            }
            else
            {
                short l_911 = 2L;
                int l_942 = (-1L);
                int l_1089 = 1L;
                int l_1106 = 0xE68D0504L;
                unsigned l_1147 = 18446744073709551609UL;
                for (g_387 = 0; (g_387 < 14); g_387 = safe_add_func_uint16_t_u_u(g_387, 9))
                {
                    int *l_903 = &g_844;
                    const int **l_912 = (void*)0;
                    const int **l_913 = &g_397;
                }
                for (l_825 = 0; (l_825 < 55); ++l_825)
                {
                    unsigned short l_967 = 0x1089L;
                    int *l_970 = &g_481;
                    int *l_971 = (void*)0;
                    int *l_972 = &g_88;
                    int *l_973 = &g_844;
                    int *l_974 = &g_625;
                    int *l_975 = &g_844;
                    int *l_976 = &l_942;
                    int *l_977 = (void*)0;
                    int *l_978 = &g_481;
                    int *l_979 = &g_844;
                    int *l_980 = &l_942;
                    int *l_981 = &g_88;
                    int *l_982 = (void*)0;
                    int *l_983 = (void*)0;
                    int l_985 = 0x270CB853L;
                    int *l_986 = &g_88;
                    int *l_987 = &g_844;
                    int *l_988 = &l_984;
                    int *l_989 = &g_625;
                    int *l_990 = &g_625;
                    int *l_992 = &g_625;
                    int *l_993 = &l_984;
                    int *l_995 = &l_985;
                    int *l_996 = &l_985;
                    int *l_997 = &l_984;
                    int *l_998 = &g_844;
                    int *l_999 = &l_991;
                    int *l_1000 = &l_991;
                    int *l_1002 = (void*)0;
                    int *l_1003 = (void*)0;
                    int *l_1004 = &l_991;
                    int *l_1005 = &g_625;
                    int *l_1006 = &g_88;
                    int *l_1007 = (void*)0;
                    int *l_1008 = &l_994;
                    int *l_1009 = (void*)0;
                    int *l_1010 = (void*)0;
                    int *l_1011 = &l_984;
                    int *l_1012 = &g_481;
                    int *l_1013 = &l_991;
                    int *l_1014 = &l_942;
                    int *l_1015 = &l_991;
                    int *l_1016 = &l_1001;
                    int *l_1017 = &l_942;
                    int *l_1018 = &l_1001;
                    int *l_1019 = &l_1001;
                    int *l_1020 = &g_88;
                    int *l_1021 = &g_625;
                    int *l_1022 = &g_625;
                    int *l_1023 = &g_88;
                    int *l_1024 = &l_1001;
                    int *l_1025 = &g_481;
                    int *l_1026 = (void*)0;
                    int *l_1027 = &l_942;
                    for (g_88 = 0; (g_88 > (-17)); g_88 = safe_sub_func_int32_t_s_s(g_88, 7))
                    {
                        int *l_919 = (void*)0;
                        int *l_920 = (void*)0;
                        int *l_921 = (void*)0;
                        int *l_922 = &g_844;
                        int *l_923 = &g_481;
                        int l_924 = 0x1E246523L;
                        int *l_925 = &g_625;
                        int *l_926 = (void*)0;
                        int *l_927 = &g_844;
                        int *l_928 = (void*)0;
                        int *l_929 = &g_844;
                        int *l_930 = &g_844;
                        int *l_931 = &g_625;
                        int *l_932 = &g_625;
                        int *l_933 = (void*)0;
                        int *l_934 = &g_625;
                        int *l_935 = &g_625;
                        int *l_936 = &g_625;
                        int *l_937 = &g_625;
                        int *l_938 = &g_481;
                        int *l_939 = (void*)0;
                        int *l_940 = &g_481;
                        int *l_941 = (void*)0;
                        int *l_943 = &g_481;
                        int *l_944 = &g_481;
                        int *l_945 = &l_942;
                        int *l_946 = &g_481;
                        int *l_947 = &l_942;
                        int *l_948 = &l_924;
                        int *l_949 = &g_625;
                        int *l_950 = &g_625;
                        int *l_951 = &g_625;
                        int *l_952 = &g_844;
                        int *l_953 = (void*)0;
                        int l_954 = 0xC345F059L;
                        int *l_955 = &g_481;
                        int *l_956 = &l_954;
                        int *l_957 = &g_481;
                        int *l_958 = &g_625;
                        int *l_959 = &l_924;
                        int *l_960 = &l_924;
                        int *l_961 = (void*)0;
                        int *l_962 = &g_844;
                        int *l_963 = (void*)0;
                        int *l_964 = (void*)0;
                        int *l_965 = &l_954;
                        int *l_966 = (void*)0;
                        (*g_43) |= p_17;
                        --l_967;
                    }
                    (*l_970) |= (*g_43);
                    g_1029++;
                }
                for (g_644 = (-26); (g_644 == 58); g_644 = safe_add_func_int16_t_s_s(g_644, 5))
                {
                    short l_1034 = 0x2802L;
                    int *l_1035 = &g_88;
                    int *l_1036 = &l_942;
                    int *l_1037 = (void*)0;
                    int *l_1038 = &g_481;
                    int *l_1039 = &g_625;
                    int *l_1040 = &g_88;
                    int *l_1041 = &g_625;
                    int *l_1042 = (void*)0;
                    int *l_1043 = &l_994;
                    int *l_1044 = &l_942;
                    int *l_1045 = &g_88;
                    int *l_1046 = &g_481;
                    int *l_1047 = &l_984;
                    int *l_1048 = &g_88;
                    int *l_1049 = &l_984;
                    int *l_1050 = &l_994;
                    int *l_1051 = &g_844;
                    int *l_1052 = &g_844;
                    int *l_1053 = &l_984;
                    int l_1054 = (-1L);
                    int *l_1055 = (void*)0;
                    int *l_1056 = &g_481;
                    int *l_1057 = &g_844;
                    int *l_1058 = &l_1001;
                    int *l_1059 = &g_625;
                    int *l_1060 = &g_481;
                    int *l_1061 = &g_625;
                    int *l_1062 = &l_1054;
                    int *l_1063 = (void*)0;
                    int *l_1064 = (void*)0;
                    int *l_1065 = &l_1054;
                    int *l_1067 = (void*)0;
                    int *l_1068 = &g_625;
                    int *l_1069 = &g_625;
                    int *l_1070 = &l_1066;
                    int *l_1071 = &g_88;
                    int *l_1072 = &l_1054;
                    int *l_1073 = &g_625;
                    int *l_1074 = &l_1066;
                    int *l_1076 = &l_1066;
                    int *l_1077 = &g_88;
                    int *l_1078 = (void*)0;
                    int *l_1079 = &l_984;
                    int *l_1080 = &l_991;
                    int *l_1081 = &l_991;
                    int *l_1082 = (void*)0;
                    int *l_1083 = &l_942;
                    int *l_1084 = (void*)0;
                    int *l_1085 = &l_994;
                    int *l_1086 = &l_1066;
                    int *l_1087 = &l_984;
                    int *l_1088 = (void*)0;
                    int *l_1090 = &l_942;
                    int *l_1091 = (void*)0;
                    int *l_1092 = &l_984;
                    int *l_1093 = &l_942;
                    int *l_1094 = &l_1089;
                    int *l_1095 = &g_481;
                    int *l_1096 = &g_88;
                    int *l_1097 = &g_844;
                    int *l_1098 = &g_844;
                    int *l_1099 = &l_991;
                    int *l_1100 = &l_1075;
                    int *l_1101 = &l_1066;
                    int *l_1102 = &l_942;
                    int *l_1103 = &l_1066;
                    int *l_1104 = &l_994;
                    int *l_1105 = &l_1066;
                    int *l_1107 = &l_1001;
                    int *l_1108 = &g_844;
                    int l_1109 = 0xBCC02C5EL;
                    int *l_1110 = &l_942;
                    int *l_1111 = &l_1075;
                    int *l_1112 = &l_984;
                    int *l_1113 = &g_481;
                    int *l_1114 = (void*)0;
                    int *l_1115 = (void*)0;
                    int *l_1116 = (void*)0;
                    int *l_1117 = &g_625;
                    int *l_1118 = &g_481;
                    int *l_1119 = (void*)0;
                    int *l_1120 = &g_88;
                    int *l_1121 = (void*)0;
                    int *l_1122 = &g_844;
                    int *l_1123 = &l_942;
                    int *l_1124 = &l_1075;
                    int *l_1125 = &l_991;
                    int *l_1126 = &l_994;
                    int *l_1127 = &l_994;
                    int *l_1128 = &g_88;
                    int *l_1129 = (void*)0;
                    int *l_1130 = &l_1066;
                    int *l_1132 = &l_1109;
                    int *l_1133 = (void*)0;
                    int *l_1134 = &l_1106;
                    int *l_1135 = &l_991;
                    int *l_1136 = &l_994;
                    int *l_1137 = &l_1066;
                    int *l_1138 = &l_1001;
                    int *l_1139 = &l_1089;
                    int *l_1140 = &l_1106;
                    int *l_1141 = &l_1075;
                    int *l_1142 = &l_1054;
                    int *l_1143 = (void*)0;
                    g_1144--;
                    if (l_1147)
                        continue;
                }
            }
        }


        ;
        (*l_888) = (void*)0;

        ;
        (*l_808) = (*l_808);
    }

    ;
    ;
    for (g_170 = 0; (g_170 == 10); g_170 = safe_add_func_int32_t_s_s(g_170, 1))
    {
        short l_1150 = 0xA635L;
        int l_1151 = 0xA7418EA4L;
        unsigned char l_1168 = 0xFFL;
        int **l_1186 = &g_43;
        l_1151 &= l_1150;
    }
    return l_1187;


}







static unsigned short func_18(int p_19, unsigned char p_20, int * const p_21)
{
    int ***l_796 = (void*)0;
    int **l_797 = &g_43;
    (**g_42) = (l_796 == &g_42);
    (*l_797) = (*g_42);
    (**g_42) &= (*p_21);
    return p_20;
}







static short func_24(const int * p_25, short p_26, char p_27, unsigned p_28)
{
    int *l_792 = (void*)0;
    int **l_793 = (void*)0;
    int **l_794 = (void*)0;
    int **l_795 = &g_43;
    (*l_795) = &g_625;

    ;
    return p_26;
}







static const int * func_29(int * p_30, int * p_31, unsigned p_32)
{
    const short l_36 = 0x6CEFL;
    short l_51 = 0L;
    unsigned char l_59 = 0x0BL;
    int *l_276 = &g_88;
    int l_286 = (-3L);
    unsigned l_400 = 0UL;
    int l_462 = (-2L);
    int l_503 = 0xAF29AE81L;
    unsigned l_541 = 0x5ACCE002L;
    char l_571 = 0xC6L;
    unsigned l_791 = 0x12110B90L;
    for (p_32 = 0; (p_32 != 38); p_32 = safe_add_func_uint8_t_u_u(p_32, 6))
    {
        int * const *l_50 = &g_43;
        unsigned l_245 = 0x0F634178L;
        unsigned l_259 = 0xEC78EEE8L;
        char l_278 = 0x2BL;
        int l_324 = 1L;
        int l_327 = 0L;
        int **l_407 = &g_43;
        unsigned l_422 = 0x2476AF6CL;
        unsigned l_550 = 4294967295UL;
    }
    (*l_276) = ((p_31 == (*g_42)) && (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u(0xE7CEL, ((safe_lshift_func_int8_t_s_s(((((p_32 <= (g_233 | p_32)) , ((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(func_54(l_791, (((((void*)0 == p_30) , (*l_276)) > (*l_276)) , 1UL), g_110, (*l_276)), l_59)), p_32)) || 0x926C500EL), 1)) < l_571)) , g_624) , (*l_276)), p_32)) || g_387))) > 0UL), g_343)));


    return p_30;


}







static unsigned func_37(int * const * p_38, unsigned short p_39, char p_40, short p_41)
{
    return p_40;
}







static int ** func_46(unsigned short p_47, int p_48, int p_49)
{
    int **l_215 = &g_43;
    const int l_220 = 0xCD6D889FL;
    (*l_215) = (void*)0;

    ;
    p_49 = (((p_49 , (safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_170, g_110)), func_37(&g_43, g_170, p_47, ((p_49 == 1UL) , g_170))))) >= l_220) , p_49);
    return &g_43;


}







static short func_54(int p_55, unsigned p_56, unsigned char p_57, unsigned short p_58)
{
    char l_64 = 0x8AL;
    int * const *l_72 = (void*)0;
    unsigned l_80 = 0x3A780915L;
    int l_102 = 7L;
    int l_103 = 0x1EDA7388L;
    int l_105 = 0xF9D48960L;
    unsigned l_114 = 4294967295UL;
    char l_117 = 1L;
    unsigned short l_118 = 1UL;
    unsigned l_119 = 0x3939075EL;
    unsigned char l_136 = 1UL;
    p_55 = (safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(l_64, (p_55 ^ (&p_55 != ((safe_sub_func_uint16_t_u_u(((g_3 , l_64) && l_64), (safe_rshift_func_uint8_t_u_s(((((safe_mul_func_int16_t_s_s(((p_56 , (l_64 > ((g_3 , 0x978CL) <= (-9L)))) & 0x3FE29831L), (-9L))) >= g_71) >= p_56) == 0xB5BCDCECL), 5)))) , (void*)0))))), 0x651EF224L));
    p_55 ^= (p_56 <= ((func_37(((g_71 , g_3) , l_72), (g_3 , g_3), g_71, g_3) & g_3) ^ p_58));
    if (p_58)
    {
        int **l_73 = &g_43;
        int *l_86 = (void*)0;
        int *l_87 = &g_88;
        int *l_89 = &g_88;
        int *l_90 = &g_88;
        int *l_91 = &g_88;
        int *l_92 = &g_88;
        int *l_93 = &g_88;
        int *l_94 = &g_88;
        int *l_95 = (void*)0;
        int *l_96 = &g_88;
        int *l_97 = &g_88;
        int *l_98 = &g_88;
        int *l_99 = &g_88;
        int *l_100 = (void*)0;
        int *l_101 = (void*)0;
        int l_104 = 1L;
        int *l_106 = &l_102;
        int *l_108 = &l_104;
        int *l_109 = &l_104;
        g_85 ^= (l_73 == ((safe_lshift_func_uint8_t_u_u(g_71, (safe_lshift_func_uint8_t_u_u(g_71, ((safe_add_func_int8_t_s_s((l_80 > (**l_73)), p_56)) ^ ((p_57 , (((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((void*)0 != l_73) == 8UL), (**l_73))), g_71)) == 4294967295UL) | g_71)) && 65535UL)))))) , (void*)0));
        --g_110;
    }
    else
    {
        int *l_113 = &g_3;
        int *l_120 = &l_102;
        (*l_120) |= ((l_113 == &p_55) | ((l_114 , (((((0x97E7L & ((safe_add_func_int8_t_s_s((!(((g_88 | func_37(&l_113, (g_110 || ((((~(*l_113)) , (*l_113)) < (**g_42)) < (*g_43))), l_117, g_71)) >= g_110) < g_88)), l_118)) , l_119)) ^ p_55) , l_113) == (*g_42)) & 0xEAA4L)) & 0xC6L));
        (*l_120) &= func_37(&g_43, g_71, (&p_55 != (void*)0), g_71);
    }
    if ((*g_43))
    {
        const unsigned l_135 = 18446744073709551614UL;
        int *l_137 = &l_103;
        int **l_138 = &g_43;
        (*l_137) = (func_37(l_72, (safe_mul_func_uint8_t_u_u(0xD4L, ((((((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(0xE7L, 1)), (+((0x12L || (1L < ((safe_add_func_int32_t_s_s(((p_55 || (((((((+(~((safe_lshift_func_uint16_t_u_u(((((p_57 < (safe_add_func_uint32_t_u_u(g_71, (safe_add_func_int32_t_s_s((**g_42), g_85))))) == l_135) , l_136) != l_135), 1)) >= l_64))) | p_55) , g_110) , l_135) >= 4294967295UL) , l_72) != (void*)0)) & 4UL), g_3)) , p_57))) != 0x7201A7A6L)))) | (*g_43)) , 0xAD8DL) | 1L) == l_135) >= 0L))), g_85, p_56) ^ g_3);
        (*l_138) = (*g_42);
        for (g_110 = 15; (g_110 < 16); g_110 = safe_add_func_uint16_t_u_u(g_110, 1))
        {
            int * const *l_147 = &l_137;
            (*l_137) |= p_55;
            (**l_147) ^= (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((-1L), 4)), ((safe_add_func_uint32_t_u_u(((func_37(l_147, p_58, (func_37(l_147, g_3, (g_3 , g_85), (((void*)0 != &g_43) < g_110)) , 6L), (**l_138)) , p_58) <= 0xA761L), 2L)) | p_58)));
            (*l_137) ^= (l_72 == (void*)0);
            (*l_137) &= p_56;
        }
    }
    else
    {
        int **l_148 = &g_43;
        int l_162 = 0xC8486E1DL;
        unsigned short l_173 = 9UL;
        unsigned char l_180 = 0x62L;
        int *l_210 = &l_105;
        (*l_148) = (void*)0;

        ;
        if ((safe_mod_func_int32_t_s_s(((l_80 <= (p_55 >= (safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((g_85 < (((((((safe_unary_minus_func_int8_t_s((((safe_lshift_func_int8_t_s_s((func_37(&g_43, p_57, (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((l_162 , (safe_lshift_func_uint16_t_u_s(g_88, 10))) , ((safe_lshift_func_int8_t_s_u((((!(g_85 | ((((safe_lshift_func_int8_t_s_s(l_64, 3)) , p_58) || p_58) > 0x7803ABDFL))) != g_107) >= g_107), p_55)) > g_169)), 6)), g_3)), g_169) || p_58), 5)) , (-5L)) < 0xCEA8L))) && g_85) < 0x5447L) , p_58) , (void*)0) != (void*)0) <= g_170)), p_56)), 4)))) | g_85), 0x7FD5A9A7L)))
        {
            unsigned short l_174 = 0x4299L;
            int *l_175 = &l_105;
            int *l_196 = &l_105;
            (*l_175) = (l_103 || (((safe_lshift_func_uint16_t_u_s(l_173, l_174)) || p_57) , g_110));
            g_88 = (((((((((safe_mod_func_uint8_t_u_u(p_55, l_180)) >= ((void*)0 != &g_43)) , &p_55) != (*g_42)) && p_58) <= (((((*l_175) , &l_175) != (void*)0) , (*l_148)) == &p_55)) || 0x7516L) , (void*)0) != &l_175);
            l_103 ^= (0x2C40L <= 0xF7AEL);
            for (l_80 = 0; (l_80 <= 49); ++l_80)
            {
                int **l_193 = &l_175;
                int *l_197 = &l_102;
                (*l_148) = &p_55;

                ;
                if (p_58)
                    continue;
                (*l_197) |= ((((((safe_add_func_int32_t_s_s((((p_58 & 0xC8L) & (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(p_55, (safe_mul_func_int16_t_s_s((((!((**l_148) | ((void*)0 == l_193))) , func_37(&l_175, (safe_mod_func_uint16_t_u_u(((l_196 != (func_37(&g_43, (**l_193), p_55, (*l_196)) , (void*)0)) == p_56), g_170)), (**l_148), (**l_193))) , g_3), (**l_193))))) & 0UL), p_55)) < p_56), (*l_175)))) < p_57), 4294967292UL)) | g_71) == 0x0044L) <= (**l_193)) , &g_43) == &l_175);
            }

            ;
        }
        else
        {
            unsigned l_198 = 18446744073709551615UL;
            int *l_199 = &l_102;
            (*l_199) = (g_71 , l_198);
        }

        ;
        (*l_210) = (func_37(l_148, g_169, (((p_55 >= (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(p_56, 6)), 6))) >= ((p_56 , (p_58 , (safe_mul_func_uint8_t_u_u(((!p_58) == 0x6814382FL), (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(0UL, p_57)), 0xE0E0L)))))) && 0x08L)) & p_58), g_107) >= 0x65L);
        g_211++;
    }


    return g_211;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_481, "g_481", print_hash_value);
    transparent_crc(g_489, "g_489", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_625, "g_625", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_717, "g_717", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_844, "g_844", print_hash_value);
    transparent_crc(g_857, "g_857", print_hash_value);
    transparent_crc(g_1028, "g_1028", print_hash_value);
    transparent_crc(g_1029, "g_1029", print_hash_value);
    transparent_crc(g_1144, "g_1144", print_hash_value);
    transparent_crc(g_1276, "g_1276", print_hash_value);
    transparent_crc(g_1314, "g_1314", print_hash_value);
    transparent_crc(g_1480, "g_1480", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
