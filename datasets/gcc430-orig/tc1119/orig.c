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



static int g_10 = 0x7A6DEEC5L;
static int *g_9 = &g_10;
static unsigned g_65 = 0x6C8400B8L;
static int g_67 = 0L;
static volatile int ** const *g_121 = (void*)0;
static int g_424 = 0xBF0F56E2L;
static int *g_454 = &g_67;
static int **g_476 = &g_454;



static unsigned long long func_1(void);
static int * func_2(int * p_3);
static int * func_4(unsigned short p_5, char p_6, int * p_7, char p_8);
static unsigned func_11(int p_12, int * p_13, unsigned char p_14, int * p_15);
static int func_28(int * p_29, char p_30);
static const int * func_32(char p_33, const unsigned p_34, int p_35, int * p_36, int * p_37);
static int * func_39(short p_40, unsigned short p_41);
static short func_44(int * const p_45, unsigned p_46, int * p_47);
static int * const func_48(int * p_49, int * p_50, int * p_51, int * p_52, unsigned p_53);
static int * func_55(char p_56, int * const p_57);
static unsigned long long func_1(void)
{
    short l_18 = 1L;
    int *l_21 = &g_10;
    int **l_395 = &g_9;
    int *l_412 = &g_10;
    int *l_421 = &g_10;
    (*l_395) = func_2(func_4((g_9 == &g_10), (func_11((g_10 | (safe_sub_func_int64_t_s_s(l_18, (safe_rshift_func_uint8_t_u_s(g_10, g_10))))), &g_10, ((void*)0 != l_21), &g_10) < 0x9E885DC1L), g_9, l_18));

    ;
    (**l_395) = ((**l_395) && (0UL | (-1L)));
    for (g_67 = 0; (g_67 != (-25)); --g_67)
    {
        int *l_398 = &g_67;
        int *l_409 = &g_10;
        if ((((*l_395) == l_398) >= g_10))
        {
            int *** const l_401 = &l_395;
            (*l_395) = (*l_395);
            (*l_21) = (safe_lshift_func_int16_t_s_u((((l_401 == (void*)0) == (safe_div_func_int32_t_s_s((***l_401), (***l_401)))) != (**l_395)), (0x7A73L & (safe_lshift_func_uint16_t_u_u((((((*l_21) >= ((safe_sub_func_uint16_t_u_u(0xF601L, g_67)) <= g_67)) > g_10) & (***l_401)) <= (*l_398)), 2)))));
            (*l_21) = (g_121 == l_401);
        }
        else
        {
            (*l_409) = (safe_unary_minus_func_uint8_t_u(g_10));
        }
        if ((*l_21))
        {
            unsigned l_422 = 0x12F7C02BL;
            (*l_21) = (*l_409);
            (*l_21) = (*l_21);
            for (l_18 = 8; (l_18 >= (-10)); l_18--)
            {
                int *l_423 = &g_10;
                g_9 = l_412;

                ;
                (*l_395) = l_409;
                if (((g_10 && 6L) && (safe_div_func_uint32_t_u_u((safe_add_func_int64_t_s_s((!func_11((safe_add_func_uint16_t_u_u(g_67, (safe_lshift_func_int8_t_s_u(((*l_395) != (*l_395)), 2)))), l_421, l_422, l_423)), (*l_398))), g_424))))
                {
                    if ((*g_9))
                        break;
                }
                else
                {
                    int *l_425 = &g_10;
                    g_9 = l_425;
                }
            }
        }
        else
        {
            return (*l_409);
        }
        (*l_421) = (((void*)0 == g_121) > ((g_424 == (safe_sub_func_int8_t_s_s(g_67, g_65))) == (safe_div_func_int16_t_s_s(((g_10 > ((&l_409 == (void*)0) >= g_10)) && (*l_21)), (*l_412)))));
        if ((4294967295UL && 0x6EBA7E83L))
        {
            int **l_430 = &l_409;
            const int l_445 = 5L;
            (*l_395) = (*l_395);
            if (((((void*)0 == &g_9) <= (*l_409)) > ((*l_409) == ((void*)0 == &g_9))))
            {
                (*l_21) = ((void*)0 != l_430);
                (*l_21) = (*g_9);
            }
            else
            {
                int ***l_433 = (void*)0;
                int *l_475 = &g_67;
                (*l_430) = (*l_430);
                (*l_21) = (g_121 == l_433);
                if ((*g_9))
                {
                    const long long l_442 = 5L;
                    char l_457 = 0x72L;
                    (*l_21) = ((safe_div_func_uint64_t_u_u(((!(safe_add_func_uint16_t_u_u(0xF753L, g_67))) && ((*l_398) || (safe_div_func_int64_t_s_s((**l_430), (safe_rshift_func_uint8_t_u_s(l_442, 6)))))), (safe_rshift_func_int16_t_s_u(l_445, 4)))) <= ((safe_mod_func_uint64_t_u_u(g_67, (safe_div_func_uint64_t_u_u(g_424, (safe_div_func_int8_t_s_s(0xD0L, (**l_430))))))) && 1UL));
                    if ((safe_add_func_int16_t_s_s((*l_409), l_442)))
                    {
                        (*l_430) = g_454;

                        ;
                        (*l_412) = ((g_65 <= (safe_div_func_uint64_t_u_u(l_457, 0xC815E9DAD21F84CALL))) || g_10);
                    }
                    else
                    {
                        int ***l_458 = (void*)0;
                        int ***l_459 = &l_395;
                        (*l_430) = &g_10;
                        (*l_459) = &l_21;

                        ;
                    }

                    ;
                    ;
                    return l_442;
                }
                else
                {
                    int *l_462 = &g_10;
                    unsigned long long l_463 = 0xAFA56BB3B64A9800LL;
                    for (g_65 = (-25); (g_65 < 47); g_65++)
                    {
                        unsigned short l_472 = 0x5D4AL;
                        (*l_409) = (**l_430);
                        l_463 = (*g_9);
                        (*l_462) = ((safe_lshift_func_int16_t_s_u((~(safe_add_func_int8_t_s_s((**l_430), (*l_462)))), g_424)) >= (safe_add_func_int16_t_s_s((**l_430), (safe_mod_func_uint16_t_u_u(l_472, g_65)))));
                        (*l_409) = 0x5807F587L;
                    }
                    if ((((safe_sub_func_int8_t_s_s((*l_21), 0xFAL)) != g_65) != (**l_430)))
                    {
                        return g_65;
                    }
                    else
                    {
                        g_454 = l_475;
                        if ((*l_421))
                            break;
                        g_476 = &g_454;
                    }
                }
                return g_67;
            }
        }
        else
        {
            (*l_395) = (*l_395);
        }
    }

    ;
    (*g_454) = (((((safe_mod_func_uint8_t_u_u((*l_412), (safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((((((((void*)0 == (*l_395)) < (safe_sub_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s(((*l_412) & g_67), g_424)) || (safe_div_func_uint8_t_u_u((*l_421), g_65))) >= g_65), 0UL))) || g_10) >= g_65) && (*l_412)) <= g_424), g_10)), g_424)))) | (*l_412)) | (**l_395)) == 0xE4CC13ED9309CCD8LL) | (**l_395));
    return g_67;
}







static int * func_2(int * p_3)
{
    unsigned short l_385 = 0xA759L;
    int *l_390 = &g_67;
    int *l_391 = &g_67;
    int **l_392 = &l_390;
    for (g_10 = 0; (g_10 < 20); g_10 = safe_add_func_uint16_t_u_u(g_10, 4))
    {
        int **l_382 = &g_9;
        int *l_386 = (void*)0;
        int *l_387 = &g_67;
        (*l_382) = p_3;

        ;
        g_9 = p_3;
        (*l_387) = ((safe_add_func_uint16_t_u_u(g_67, g_10)) <= l_385);
        for (g_65 = (-27); (g_65 > 59); g_65++)
        {
            (*l_382) = (*l_382);
        }
    }

    ;
    (*l_390) = (-6L);
    (*l_392) = l_391;
    (*l_391) = ((safe_lshift_func_int16_t_s_u(g_65, 10)) > (*l_391));
    return &g_67;


}







static int * func_4(unsigned short p_5, char p_6, int * p_7, char p_8)
{
    int *l_31 = &g_10;
    int *l_355 = (void*)0;
    unsigned short l_372 = 65535UL;
    unsigned char l_378 = 255UL;
    int **l_379 = &l_31;
    for (g_10 = 20; (g_10 == (-29)); g_10 = safe_sub_func_uint32_t_u_u(g_10, 1))
    {
        int *l_352 = &g_67;
        (*l_352) = func_28(l_31, p_8);
        (*l_352) = (*p_7);
        (*l_352) = (*p_7);
    }

    ;
    for (g_65 = 3; (g_65 != 40); g_65 = safe_add_func_uint16_t_u_u(g_65, 1))
    {
        return l_355;


    }
    for (p_5 = (-27); (p_5 > 41); p_5 = safe_add_func_int16_t_s_s(p_5, 9))
    {
        int l_360 = 0x2C6C0A4DL;
        short l_366 = (-1L);
        int *l_373 = &g_10;
        for (p_8 = (-15); (p_8 != (-16)); --p_8)
        {
            unsigned long long l_365 = 0x0ECB53A35A2B2338LL;
            int **l_367 = &l_355;
            g_10 = (func_44(p_7, (l_360 > (safe_div_func_uint64_t_u_u((safe_add_func_int8_t_s_s(((void*)0 == &p_7), (((g_67 <= ((((((p_6 | p_5) & (((l_366 && 0x733499AA9D4D813FLL) || g_10) < 18446744073709551612UL)) != l_366) < 0L) & (*p_7)) || 0xF5L)) || (*l_31)) ^ p_5))), p_8))), &g_10) & l_366);

            ;
            (*l_367) = p_7;

            ;
        }
        (*p_7) = (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(p_5, func_44(func_48(func_39(l_372, (*l_31)), p_7, l_373, p_7, (((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((246UL | ((((&p_7 == &l_31) <= g_10) & l_378) && p_8)), g_10)), 6)) > (*p_7)) == g_10)), g_10, &g_10))), (*p_7)));

        ;
    }

    ;
    (*l_379) = l_355;

    ;
    return &g_67;


}







static unsigned func_11(int p_12, int * p_13, unsigned char p_14, int * p_15)
{
    (*p_15) = (*p_15);
    (*p_13) = (safe_div_func_int64_t_s_s(0x5CB5542AFA017779LL, (safe_add_func_int8_t_s_s(p_12, p_12))));
    return g_10;
}







static int func_28(int * p_29, char p_30)
{
    unsigned l_38 = 18446744073709551611UL;
    const int *l_348 = &g_67;
    const int **l_347 = &l_348;
    unsigned short l_351 = 0UL;
    (*l_347) = func_32(g_10, p_30, l_38, func_39(g_10, p_30), p_29);

    ;
    (*l_347) = p_29;

    ;
    return (*l_348);
}







static const int * func_32(char p_33, const unsigned p_34, int p_35, int * p_36, int * p_37)
{
    int * const l_88 = &g_10;
    int * const *l_125 = &g_9;
    int *l_132 = (void*)0;
    unsigned l_218 = 1UL;
    long long l_247 = 0x88920E447501276FLL;
    if (((p_33 <= func_44(l_88, ((safe_mod_func_uint8_t_u_u(p_35, (~0x45L))) == (-1L)), p_36)) & ((*l_88) ^ (*l_88))))
    {
        int l_91 = 0L;
        int *l_126 = &g_67;
        unsigned long long l_224 = 18446744073709551608UL;
        int *l_261 = &g_10;
        int **l_263 = &l_261;
        int ***l_262 = &l_263;
        long long l_264 = 0xE66764A772E67D20LL;
        int l_306 = 8L;
        long long l_328 = 0xC94974D66F8ED4CELL;
        const int l_341 = 0x7B459C84L;
        if (l_91)
        {
            unsigned l_95 = 18446744073709551615UL;
            int *l_139 = &l_91;
            int **l_144 = &l_132;
            int ***l_143 = &l_144;
            int * const l_156 = &g_67;
            const unsigned short l_157 = 65528UL;
            int *l_159 = &g_67;
            if ((*g_9))
            {
                const unsigned l_94 = 1UL;
                int *l_96 = &l_91;
                const int **l_124 = (void*)0;
                if ((((safe_rshift_func_uint16_t_u_u(((l_91 < (l_94 & l_95)) || g_10), 8)) || l_94) && g_65))
                {
                    short l_97 = 0x729BL;
                    p_37 = func_48(&g_67, l_96, l_96, func_39(p_33, (*l_88)), l_97);

                    ;
                    for (l_91 = 18; (l_91 >= 16); l_91 = safe_sub_func_uint64_t_u_u(l_91, 6))
                    {
                        return p_36;


                    }
                }
                else
                {
                    short l_104 = 0xFB34L;
                    int **l_120 = &g_9;
                    int ***l_119 = &l_120;
                    for (l_95 = 0; (l_95 > 24); l_95 = safe_add_func_int16_t_s_s(l_95, 1))
                    {
                        int **l_105 = &l_96;
                        g_67 = (safe_rshift_func_uint16_t_u_s(p_34, 9));
                        (*l_105) = func_39(p_35, l_104);

                        ;
                        (*l_105) = func_55((safe_add_func_int64_t_s_s(func_44(p_37, (safe_unary_minus_func_int64_t_s((&p_36 == (void*)0))), p_36), p_35)), p_36);

                        ;
                        g_9 = p_37;
                    }

                    ;
                    if ((l_95 > l_104))
                    {
                        int **l_109 = (void*)0;
                        int **l_110 = &g_9;
                        (*l_110) = &g_10;
                    }
                    else
                    {
                        int **l_111 = &g_9;
                        unsigned l_116 = 4294967295UL;
                        (*l_111) = func_55(p_33, l_96);
                        (*p_36) = func_44(p_37, (safe_add_func_uint32_t_u_u(0x29CCA179L, (safe_sub_func_int8_t_s_s((l_116 < p_33), (safe_add_func_uint32_t_u_u(((*g_9) ^ (*g_9)), (-1L))))))), func_55((((**l_111) >= (l_119 == g_121)) | g_10), p_36));
                    }
                }

                ;
                ;
                (*p_36) = ((safe_div_func_int8_t_s_s(l_95, g_10)) & ((l_124 != l_125) < g_65));
                l_126 = p_36;
                if (l_95)
                {
                    int *l_129 = &l_91;
                    if ((!((func_44(&l_91, (0L && (g_65 != (((safe_add_func_int64_t_s_s(g_65, l_95)) == (+(+(p_37 == l_129)))) != (safe_div_func_int32_t_s_s(((0xA983L || 1L) && 0x96547669L), 7L))))), l_132) | g_10) != g_10)))
                    {
                        int **l_133 = (void*)0;
                        int **l_134 = &l_129;
                        (*l_134) = (void*)0;

                        ;
                    }
                    else
                    {
                        (*p_36) = (safe_lshift_func_uint16_t_u_u((g_65 & (p_35 || 0xD39CL)), ((*l_126) ^ p_35)));
                        (*l_129) = (*p_36);
                        (*l_126) = (*p_36);
                    }

                    ;
                    return p_36;


                }
                else
                {
                    for (g_67 = 0; (g_67 >= (-20)); g_67--)
                    {
                        int **l_140 = &l_126;
                        l_139 = p_36;

                        ;
                        (*l_140) = p_36;
                    }

                    ;
                    (*p_36) = (*p_36);
                    (*p_36) = (func_44(p_37, p_34, &g_67) <= g_10);
                }

                ;
            }
            else
            {
                short l_158 = 0L;
                int *l_201 = &g_10;
                int *l_209 = (void*)0;
                for (l_95 = (-6); (l_95 < 13); l_95++)
                {
                    int * const l_145 = &g_67;
                    (*p_36) = 5L;
                }
                if ((1UL >= ((*l_88) ^ g_67)))
                {
                    unsigned l_191 = 4294967295UL;
                    int *l_192 = &g_10;
                    (*p_36) = (0x8F3AL <= (g_65 && (~(safe_sub_func_uint64_t_u_u(((!(((*l_139) || l_158) ^ (safe_lshift_func_int16_t_s_u(4L, ((*p_37) && g_67))))) != (safe_rshift_func_uint8_t_u_u((**l_125), ((l_158 >= g_65) >= 0x2221L)))), p_35)))));
                    if ((*l_88))
                    {
                        unsigned l_190 = 1UL;
                        (*p_36) = func_44(&g_67, (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_65, ((safe_rshift_func_uint8_t_u_u((!(safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(g_65, 8)), l_158))), 0)) >= (safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(((l_158 || (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(((*l_126) >= (((g_65 != (*l_159)) && (l_158 <= p_35)) == p_34)), 2)), 0x42DAB2CCD0575CF6LL))) ^ p_35), p_33)) == p_35), l_190))))), l_191)) <= 1UL), g_10)))), l_192);
                    }
                    else
                    {
                        return p_37;


                    }
                    return &g_67;


                }
                else
                {
                    unsigned short l_202 = 0UL;
                    (*l_139) = (0UL == ((*p_37) <= (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(func_44(func_55((safe_mul_func_int8_t_s_s(g_67, ((*l_125) == p_37))), &g_10), ((((l_158 & g_10) ^ g_10) != (*p_37)) & 65533UL), l_201), 6)), p_34)), l_202))));
                    (*p_36) = ((safe_add_func_uint32_t_u_u((func_44(&g_10, g_67, &g_67) >= ((((((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(g_10, 3)) == g_10), 2)) | ((void*)0 == l_209)) ^ p_35) && p_35) && 0x6E5B2E24L) >= g_10)), g_10)) | (*l_201));
                    for (p_35 = 0; (p_35 >= 7); ++p_35)
                    {
                        unsigned long long l_216 = 18446744073709551606UL;
                        int l_217 = 6L;
                        l_217 = ((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((((*l_126) == (p_35 != ((l_216 | (*l_201)) < g_65))) ^ g_67) <= (-1L)), g_65)), (((g_65 ^ 0xFAF6FDADEB26E683LL) & (*l_126)) != 0xDE65A498L))) == 1L);
                    }
                }
            }

            ;
            ;
            l_218 = (*p_36);
        }
        else
        {
            unsigned char l_227 = 247UL;
            int * const l_250 = &g_67;
            int ***l_258 = (void*)0;
            (*p_36) = ((safe_mod_func_int64_t_s_s(((safe_add_func_int64_t_s_s((safe_unary_minus_func_int16_t_s((-1L))), g_10)) && func_44(p_36, (*l_88), &l_91)), g_10)) < ((l_224 | (*p_37)) & p_33));
            for (l_91 = 0; (l_91 >= (-14)); l_91 = safe_sub_func_int16_t_s_s(l_91, 2))
            {
                int *l_236 = &g_10;
                (*l_126) = func_44(func_39(((p_34 != (l_227 == (safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((safe_div_func_int32_t_s_s(func_44(p_37, (safe_sub_func_int32_t_s_s(func_44(func_48(l_236, p_37, &g_67, &g_10, func_44(&g_67, (*l_236), l_132)), p_33, l_132), (*p_37))), &l_91), g_10)) | p_34), p_35)), 0xB6F8107E6F1DCE19LL)))) && (*l_236)), (*l_236)), g_10, l_132);

                ;
                for (l_227 = 0; (l_227 == 16); l_227++)
                {
                    char l_244 = 0x30L;
                    int * const l_246 = &g_10;
                    (*p_36) = (**l_125);
                    for (p_33 = 0; (p_33 == 14); p_33 = safe_add_func_int16_t_s_s(p_33, 8))
                    {
                        short l_241 = 0x32F6L;
                        int * const l_245 = (void*)0;
                        (*l_126) = l_241;
                        (*p_36) = 6L;
                        (*p_36) = (safe_sub_func_uint32_t_u_u(l_244, func_44(l_245, (func_44(l_246, g_67, &g_67) ^ (*l_246)), p_37)));
                    }
                }
                g_9 = (void*)0;

                ;
                l_247 = 0xE78556C1L;
            }

            ;
            for (l_91 = 27; (l_91 >= (-22)); l_91--)
            {
                int *l_260 = &g_67;
                if ((0L || (((((void*)0 != l_250) ^ (safe_lshift_func_int16_t_s_s(0L, 9))) <= (safe_mod_func_uint8_t_u_u(g_10, g_65))) || (safe_unary_minus_func_uint64_t_u(((safe_sub_func_int64_t_s_s((l_258 != &l_125), 0x34EC993FBD6B8222LL)) != p_35))))))
                {
                    if ((*p_36))
                        break;
                }
                else
                {
                    int **l_259 = &l_132;
                    if ((*p_36))
                        break;
                    (*l_259) = &g_67;

                    ;
                }
                l_260 = &g_67;
            }

            ;
        }

        ;
        ;
        ;
        if ((((&l_91 != l_261) < ((*l_88) <= g_67)) && func_44((*l_125), ((((*p_37) != ((g_65 <= ((l_262 != (void*)0) || g_67)) >= p_34)) >= g_67) != 0UL), p_36)))
        {
            if ((**l_263))
            {
                (*p_36) = l_264;
            }
            else
            {
                char l_265 = 0x0BL;
                int *l_280 = &l_91;
                if (l_265)
                {
                    unsigned l_278 = 7UL;
                    int ** const *l_279 = &l_263;
                    if (((-9L) >= (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(g_67, ((p_37 == (void*)0) == p_35))), (((void*)0 == g_121) >= (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((0x8A404222332E9621LL <= (safe_mod_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s(p_33, p_35)) != l_278), g_65))), l_278)), (-9L))))))))
                    {
                        (*l_126) = (l_279 != g_121);
                        (**l_262) = l_280;

                        ;
                        (*l_263) = (*l_263);
                    }
                    else
                    {
                        return p_36;


                    }

                    ;
                    return l_132;


                }
                else
                {
                    unsigned l_283 = 1UL;
                    for (g_65 = 24; (g_65 < 49); g_65 = safe_add_func_uint32_t_u_u(g_65, 4))
                    {
                        l_283 = (-3L);
                    }
                    return l_132;


                }
            }
            (*l_126) = 0x8DAC667AL;
        }
        else
        {
            int l_292 = 0xA1DD2AD2L;
            int ***l_310 = (void*)0;
            const int *l_313 = &l_306;
            unsigned long long l_319 = 0x1CB27DADCA18A4ECLL;
            for (l_247 = (-20); (l_247 == (-8)); ++l_247)
            {
                if ((*p_37))
                    break;
                return &g_67;


            }
            for (l_264 = (-22); (l_264 <= (-8)); l_264 = safe_add_func_int32_t_s_s(l_264, 1))
            {
                for (l_91 = 0; (l_91 > 21); l_91 = safe_add_func_uint32_t_u_u(l_91, 8))
                {
                    return &g_67;


                }
            }
            (*l_126) = ((safe_div_func_int32_t_s_s((*p_36), l_292)) || (&p_36 != &p_36));
            for (l_224 = 0; (l_224 > 55); l_224++)
            {
                int **l_300 = &l_261;
                if ((0UL <= (**l_263)))
                {
                    (*l_263) = (*l_263);
                }
                else
                {
                    int **l_299 = &g_9;
                    int *l_309 = &l_306;
                    if ((((((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u(((&p_36 != l_299) || (&p_37 == l_300)), g_67)) & ((void*)0 != (*l_263))), ((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_uint16_t_u((~65535UL))) >= (((safe_add_func_int32_t_s_s((-6L), l_292)) & l_306) <= g_67)), 0x51BE4F24L)) < 0x5C10D9C3EBA553A1LL))) > 0xB2C7E0AD0DFBB703LL) && (***l_262)) || 7UL) & 0x40L))
                    {
                        (*p_36) = (g_67 < 0xB2L);
                        (*p_36) = ((safe_sub_func_int32_t_s_s(((l_309 != (void*)0) >= ((((p_33 <= (l_310 != &l_263)) == (*p_37)) <= (((safe_lshift_func_uint8_t_u_s(g_67, ((p_33 < (**l_300)) < g_10))) | 0x07L) != 0x1623L)) < p_35)), 0x92164BC5L)) > 0x06L);
                        return &g_10;


                    }
                    else
                    {
                        const int **l_314 = &l_313;
                        (*l_314) = l_313;
                        if ((*p_37))
                            continue;
                        (*l_263) = func_39(((*l_313) < ((g_67 > (g_67 ^ (***l_262))) & (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(l_319, (l_310 != (void*)0))), g_65)))), (l_300 == &p_37));

                        ;
                        ;
                    }

                    ;
                    ;
                    (**l_300) = (*g_9);
                }
                (*p_36) = 0L;
                for (p_33 = (-11); (p_33 != (-18)); p_33 = safe_sub_func_int16_t_s_s(p_33, 6))
                {
                    (*l_126) = ((((p_33 < func_44(&g_67, g_65, l_132)) | (~(((safe_div_func_int8_t_s_s((18446744073709551615UL <= (safe_sub_func_int32_t_s_s(0L, (((safe_sub_func_uint64_t_u_u(0UL, g_10)) & l_328) < (*l_313))))), p_34)) && g_10) != 1L))) < p_34) < 0x0FL);

                    ;
                    (*p_36) = (safe_lshift_func_int8_t_s_s(p_35, (g_65 != (0x2DBFL > (safe_add_func_uint64_t_u_u((!(safe_rshift_func_int16_t_s_s(((*l_262) != (*l_262)), g_10))), g_10))))));
                    (*p_36) = func_44(p_37, g_10, p_37);
                }
            }

            ;
        }

        ;
        (*l_262) = &l_132;

        ;
        (*l_263) = func_55(p_33, func_39(((*l_126) < ((((safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(g_67, ((l_341 <= ((*p_37) >= (p_35 & (safe_unary_minus_func_int16_t_s(p_34))))) | ((*l_88) != (safe_rshift_func_int8_t_s_s(p_34, 4)))))), 0xA9F3683CL)) <= p_33) > g_67) > 0x156B3B7FL)), p_35));

        ;
        ;
    }
    else
    {
        int l_346 = 1L;
        l_346 = (safe_unary_minus_func_uint64_t_u(p_33));
    }

    ;
    ;
    return l_132;


}







static int * func_39(short p_40, unsigned short p_41)
{
    int *l_54 = &g_10;
    int *l_87 = &g_67;
    (*l_87) = (safe_rshift_func_uint8_t_u_u((func_44(func_48(l_54, func_55((*l_54), &g_10), l_54, l_54, (*l_54)), p_41, l_54) >= (*l_54)), (*l_54)));

    ;
    return l_87;


}







static short func_44(int * const p_45, unsigned p_46, int * p_47)
{
    unsigned long long l_80 = 1UL;
    unsigned l_81 = 0xD5834D56L;
    int * const l_82 = &g_10;
    int *l_83 = &g_10;
    int l_84 = 4L;
    unsigned l_85 = 0x6B071CE9L;
    int **l_86 = &g_9;
    for (p_46 = 0; (p_46 == 31); p_46 = safe_add_func_int32_t_s_s(p_46, 1))
    {
        int **l_75 = &g_9;
        (*l_75) = &g_67;

        ;
        (*l_75) = func_48(p_47, func_55((safe_div_func_int16_t_s_s((((+(~(((&g_67 == p_47) == (safe_add_func_int16_t_s_s(p_46, (0x07F0936A74B4FBF6LL ^ l_80)))) != 0xC852L))) & (0x1BD0L > l_81)) > l_81), p_46)), l_82), l_83, &g_10, g_10);

        ;
        l_84 = (((-1L) >= ((((0xA04BL ^ g_10) || p_46) != (-1L)) >= ((*l_83) != (&g_9 == (void*)0)))) | (&p_45 == &g_9));
    }
    (*l_86) = func_55(((g_65 | (+(((0x39A040D4F6636227LL && 18446744073709551615UL) >= l_85) || (*l_83)))) == (*l_83)), func_48(&l_84, &l_84, &g_67, p_47, p_46));

    ;
    g_67 = (*g_9);
    return g_10;
}







static int * const func_48(int * p_49, int * p_50, int * p_51, int * p_52, unsigned p_53)
{
    int *l_68 = (void*)0;
    int *l_69 = &g_67;
    int **l_70 = &l_68;
    (*l_69) = (*p_51);
    (*l_70) = &g_67;

    ;
    (*l_69) = (safe_rshift_func_int16_t_s_s((g_10 == p_53), 5));
    return p_52;


}







static int * func_55(char p_56, int * const p_57)
{
    int * const **l_58 = (void*)0;
    int * const **l_59 = (void*)0;
    int * const *l_61 = &g_9;
    int * const **l_60 = &l_61;
    unsigned char l_64 = 246UL;
    int *l_66 = &g_67;
    (*l_60) = &p_57;

    ;
    g_65 = (safe_lshift_func_uint8_t_u_s(l_64, g_10));
    (*l_66) = (0UL & 18446744073709551613UL);
    return &g_10;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
